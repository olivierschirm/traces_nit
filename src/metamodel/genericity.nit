# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Generic classes, generic types and generic formal parameters
package genericity

intrude import type_formal
intrude import inheritance

redef class MMLocalClass
	# The pos-th formal type parameter
	meth get_formal(pos: Int): MMTypeFormalParameter
	do
		return formals_types[pos]
	end

	# Register a new formal type
	# Called in order during the building of the class
	meth register_formal(f: MMTypeFormalParameter)
	do
		assert f.def_class == self
		assert f.position == _formals_types.length
		_formals_types.add(f)
	end

	# All the insanciated types of the class
	attr _types: Array[MMTypeGeneric] = new Array[MMTypeGeneric]

	# Instanciate a type from the generic class
	meth get_instantiate_type(t: Array[MMType]): MMType
	do
		for g in _types do
			if g.params_equals(t) then return g
		end
		var g = new MMTypeGeneric(self, t)
		_types.add(g)
		return g
	end

	# The formal types of the class
	attr _formals_types: Array[MMTypeFormalParameter] = new Array[MMTypeFormalParameter]

	# Return the definition formal types for the class
	# Import them from the intro class if needed
	private meth formals_types: Array[MMTypeFormalParameter]
	do
		if _formals_types.is_empty then
			assert not self isa MMConcreteClass
			# Because of F-genericity, the import is done in two pass
			# First, get the formal types untyped so that one can recurcively call formals_types
			for i in [0..arity[ do
				var oft = global.intro.get_formal(i)
				var ft = new MMTypeFormalParameter(oft.name, i, self)
				register_formal(ft)
			end
			# Second, assign the bound to the formal type
			for i in [0..arity[ do
				var oft = global.intro.get_formal(i)
				var ft = _formals_types[i] 
				ft.bound = oft.bound.for_module(module)
			end
		end
		return _formals_types
	end

	redef meth get_type
	do
		if _base_type_cache == null and is_generic then
			_base_type_cache = get_instantiate_type(formals_types)
			return _base_type_cache
		else
			return super
		end
	end

	# Is the class a generic one?
	meth is_generic: Bool do return arity > 0
end

redef class MMSignature
	# Adapt the signature to a different receiver
	meth adaptation_to(r: MMType): MMSignature
	do
		if _recv == r then
			return self
		end
		var mod = r.module
		var p = _params
		if p != null then
			p = new Array[MMType]
			for i in _params do
				p.add(i.for_module(mod).adapt_to(r))
			end
		end
		var rv = _return_type
		if rv != null then
			rv = rv.for_module(mod).adapt_to(r)
		end
		return new MMSignature(p,rv,r)
	end
end

redef class MMLocalProperty
	# The receiver type if the signature is unknown (aka lazily computed)
	attr _recv_alone: MMType

	meth recv: MMType
	do
		assert signature != null
		return signature.recv
	end

	meth recv=(rec: MMType)
	do
		assert rec != null
		#		print("setting recv for {self} {rec} {_recv == null}")
		assert _signature_cache == null
		_recv_alone = rec
	end

	redef meth signature
	do
		var sig = _signature_cache
		if sig != null then
			return sig
		end
		if self isa MMConcreteProperty then
			return null
		end
		var sp = _super_prop
		#assert self != sp
		var impl = _concrete_property
		if sp == null then # superprop ?
			#		print("building signature for {self}:{self.object_id} and type {_recv}")
			_signature_cache = impl.signature
			assert _signature_cache != null
		else
			#		print("adapting signature for {self}:{self.object_id} and type {_recv}")
			assert sp.signature != null
			assert _recv_alone != null
			#_signature = sp.signature
			_signature_cache = sp.signature.adaptation_to(_recv_alone)
		end
		assert _signature_cache != null
		#		print("finally recv is {_recv} for {self}:{self.object_id} and sig is {_signature.recv}")
		return _signature_cache
	end

	# Adapt the property to a different receiver
	# TODO: Merge with inheritance stuff
	meth adapt_property(t: MMType): MMLocalProperty
	do
		assert t != null
		var recv = local_class.get_type
		if t == recv then
			return self
		else
			return inherit_to(t)
		end
	end

	redef meth inherit_from(s, t) # for the super bugs
	do
		super
		_recv_alone = t
	end
end

redef class MMType
	# TODO: IS this useful? 
	meth is_generic: Bool is abstract
end

redef class MMTypeFormal
	redef meth is_generic do return _bound.is_generic
end

redef class MMTypeSimpleClass
	redef meth is_generic  do return false
end

class MMTypeGeneric
special MMTypeClass
	# Formal arguments
	readable attr _params: Array[MMType] 
	attr _props: Map[MMGlobalProperty, MMLocalProperty] = new HashMap[MMGlobalProperty, MMLocalProperty]

	redef meth is_generic do return true

	redef meth is_supertype(t)
	do
		if t.local_class.cshe <= _local_class then
			var u = t.upcast_for(_local_class)
			if u isa MMTypeGeneric then
				return is_subtype(u) # and u.is_subtype(self) # Strong typing is too strong
			end
		end
		return false
	end

	redef meth upcast_for(c)
	do
		var t = super
		if t != self then
			t = t.adapt_to(self)
		end
		return t
	end

	redef meth for_module(mod)
	do
		var t: MMType = self
		if module != mod then
			var parms = new Array[MMType]
			for p in _params do
				parms.add(p.for_module(mod))
			end
			var b = _local_class.for_module(mod)
			t = b.get_instantiate_type(parms)
		end
		assert t != null
		return t
	end

	redef meth adapt_to(r)
	do
		var rv = new Array[MMType]
		for i in _params do
			rv.add(i.adapt_to(r))
		end
		var l = _local_class.get_instantiate_type(rv)
		return l
	end

	private meth params_equals(t: Array[MMType]): Bool
	do
		if t.length != _params.length then
			return false
		end
		for i in [0..t.length[ do
			assert _params[i] != null
			assert t[i] != null
			if _params[i] != t[i] then
				return false
			end
		end
		return true
	end

	redef meth select_property(g)
	do
		if g == null then
			return null
		end
		if not _props.has_key(g) then
			assert _local_class != null
			var p = _local_class[g]
			if p != null then
				var p2 = p.adapt_property(self)
				_props[g] = p2
				return p2
			else
				assert false
			end
		end
		return _props[g]
	end

	redef meth to_s
	do
		return "{super}[{_params.join(", ")}]"
	end
	
	# Is self a subtype of t?
	# Require that t.local_class = self.local_class
	private meth is_subtype(t: MMTypeGeneric) : Bool
	do
		for i in [0.._params.length[
		do
			if not t.params[i] < _params[i] then
				return false
			end
		end
		return true
	end

	init(c: MMLocalClass, p: Array[MMType])
	do
		super(c)
		_params = p
	end
end

class MMTypeFormalParameter
special MMTypeFormal
	# The class where self is defined
	readable attr _def_class: MMLocalClass 

	# The position is self in def_class
	readable attr _position: Int 

	redef meth module do return _def_class.module

	redef meth for_module(mod)
	do
		var t: MMType = self
		if module != mod then
			t = mod[_def_class.global].get_formal(position)
		end
		assert t != null
		return t
	end

	redef meth upcast_for(c) do return self

 	meth bound=(t: MMType)
 	do
		assert _bound == null
 		_bound = t
 	end

	redef meth adapt_to(r)
	do
		var old_r = r.upcast_for(def_class)
		#print "adapt {self} for ({old_r} -> {r})"
		assert old_r isa MMTypeGeneric
		var reduct = old_r.params[position]
		assert reduct != null
		return reduct
	end

	init with_bound(n: Symbol, p: Int, intro: MMLocalClass, b: MMType)
	do
		init(n,p,intro)
		_bound = b
	end

	init(n: Symbol, p: Int, intro: MMLocalClass)
	do
		assert n != null
		_name = n
		_position = p
		_def_class = intro
	end
end

redef class MMTypeNone
	redef meth is_generic do return false
 	redef meth for_module(mod) do return self
 	redef meth adapt_to(r) do return self
end
