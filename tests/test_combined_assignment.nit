# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

class A
	readable writable attr _a: Int #!alt1#
	#alt1#readable writable attr _a: Object
	init do end
	meth foo
	do
		_a += 2
	end

	meth next: Int
	do
		_a += 1
		return a
	end

	meth [](a: Int): Int do return a
	meth []=(a: Int, b: Int) do print "{a} {b}"
end

redef class Int
	meth sum(o: Int): Int do 
		print "{self} + {o} = {self + o}?"
		return self + o
	end
	meth sum=(o: Int, r: Int) do print "{self} + {o} = {r}!"
end

var a = new A
a.a = 1
print a.a
a.foo
print a.a
a.a += 3
print a.a

a[1] += 2

a.next.sum(a.next) += 0 # Test ugly side effects

print a.a
