#include "genericity._sep.h"
val_t genericity___MMLocalClass___get_formal(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::get_formal (src/metamodel//genericity.nit:25,2--28:26)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((genericity___MMLocalClass___formals_types_t)CALL( self,COLOR_genericity___MMLocalClass___formals_types))( self) /*MMLocalClass::formals_types*/;
  variable2 =  variable0 /*pos*/;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable4 = variable3;
  if (UNTAG_Bool(variable4)) { /* and */
    variable4 = variable1;
    variable4 = ATTR_array___AbstractArray____length(variable4) /*Array::_length*/;
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*index*/)<UNTAG_Int(variable4));
  }
  variable3 = variable4;
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable3 = variable1;
  variable3 = ATTR_array___Array____items(variable3) /*Array::_items*/;
  variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable2 /*index*/)];
  goto return_label1;
  return_label1: while(false);
  variable1 = variable3;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
void genericity___MMLocalClass___register_formal(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::register_formal (src/metamodel//genericity.nit:31,2--37:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((genericity___MMTypeFormalParameter___def_class_t)CALL( variable0 /*f*/,COLOR_genericity___MMTypeFormalParameter___def_class))( variable0 /*f*/) /*MMTypeFormalParameter::def_class*/;
  variable1 = TAG_Bool((variable1 ==  self) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  self) /*MMLocalClass::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:35,3--28\n"); nit_exit(1);}
  variable1 = ((genericity___MMTypeFormalParameter___position_t)CALL( variable0 /*f*/,COLOR_genericity___MMTypeFormalParameter___position))( variable0 /*f*/) /*MMTypeFormalParameter::position*/;
  variable2 = ATTR_genericity___MMLocalClass____formals_types( self) /*MMLocalClass::_formals_types*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable1 = TAG_Bool((variable1)==(variable2));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:36,3--44\n"); nit_exit(1);}
  variable1 = ATTR_genericity___MMLocalClass____formals_types( self) /*MMLocalClass::_formals_types*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*f*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMLocalClass___get_instantiate_type(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::get_instantiate_type (src/metamodel//genericity.nit:43,2--51:10)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_genericity___MMLocalClass____types( self) /*MMLocalClass::_types*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((genericity___MMTypeGeneric___params_equals_t)CALL( variable2 /*g*/,COLOR_genericity___MMTypeGeneric___params_equals))( variable2 /*g*/,  variable0 /*t*/) /*MMTypeGeneric::params_equals*/;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  variable2 /*g*/;
      goto return_label3;
    }
    continue_4: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_4: while(0);
  variable2 = NEW_genericity___MMTypeGeneric___init( self,  variable0 /*t*/); /*new MMTypeGeneric*/
  variable1 = variable2;
  variable2 = ATTR_genericity___MMLocalClass____types( self) /*MMLocalClass::_types*/;
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable1 /*g*/) /*Array::add*/;
  variable1 =  variable1 /*g*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMLocalClass___formals_types(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::formals_types (src/metamodel//genericity.nit:57,2--77:23)"};
  val_t variable0;
    val_t variable1;
      val_t variable2;
      val_t variable3;
      val_t variable4;
      val_t variable5;
      val_t variable6;
      val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_genericity___MMLocalClass____formals_types( self) /*MMLocalClass::_formals_types*/;
  variable0 = ((array___AbstractArray___is_empty_t)CALL(variable0,COLOR_abstract_collection___Collection___is_empty))(variable0) /*Array::is_empty*/;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_MMConcreteClass, ID_MMConcreteClass)) /*cast MMConcreteClass*/;
    if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:62,4--38\n"); nit_exit(1);}
    variable0 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___arity))( self) /*MMLocalClass::arity*/;
    variable1 = NEW_range___Range___without_last( TAG_Int(0), variable0); /*new Range[Int]*/
    variable0 = variable1;
    variable0 = ((range___Range___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Range::iterator*/;
    while (true) { /*for*/
      variable1 = ((abstract_collection___Iterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable1)) break; /*for*/
      variable1 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
      variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
      variable3 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable3) /*MMGlobalClass::intro*/;
      variable3 = ((genericity___MMLocalClass___get_formal_t)CALL(variable3,COLOR_genericity___MMLocalClass___get_formal))(variable3,  variable1 /*i*/) /*MMLocalClass::get_formal*/;
      variable2 = variable3;
      variable4 = ((type_formal___MMTypeFormal___name_t)CALL( variable2 /*oft*/,COLOR_type_formal___MMTypeFormal___name))( variable2 /*oft*/) /*MMTypeFormalParameter::name*/;
      variable5 = NEW_genericity___MMTypeFormalParameter___init(variable4,  variable1 /*i*/,  self); /*new MMTypeFormalParameter*/
      variable4 = variable5;
      variable3 = variable4;
      ((genericity___MMLocalClass___register_formal_t)CALL( self,COLOR_genericity___MMLocalClass___register_formal))( self,  variable3 /*ft*/) /*MMLocalClass::register_formal*/;
      continue_6: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*Iterator::next*/;
    }
    break_6: while(0);
    variable0 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___arity))( self) /*MMLocalClass::arity*/;
    variable1 = NEW_range___Range___without_last( TAG_Int(0), variable0); /*new Range[Int]*/
    variable0 = variable1;
    variable0 = ((range___Range___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Range::iterator*/;
    while (true) { /*for*/
      variable1 = ((abstract_collection___Iterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable1)) break; /*for*/
      variable1 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
      variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
      variable3 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable3) /*MMGlobalClass::intro*/;
      variable3 = ((genericity___MMLocalClass___get_formal_t)CALL(variable3,COLOR_genericity___MMLocalClass___get_formal))(variable3,  variable1 /*i*/) /*MMLocalClass::get_formal*/;
      variable2 = variable3;
      variable4 = ATTR_genericity___MMLocalClass____formals_types( self) /*MMLocalClass::_formals_types*/;
      variable5 =  variable1 /*i*/;
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 = variable4;
        variable7 = ATTR_array___AbstractArray____length(variable7) /*Array::_length*/;
        variable7 = TAG_Bool(UNTAG_Int( variable5 /*index*/)<UNTAG_Int(variable7));
      }
      variable6 = variable7;
      if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable6 = variable4;
      variable6 = ATTR_array___Array____items(variable6) /*Array::_items*/;
      variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*index*/)];
      goto return_label8;
      return_label8: while(false);
      variable4 = variable6;
      variable3 = variable4;
      variable4 = ((type_formal___MMTypeFormal___bound_t)CALL( variable2 /*oft*/,COLOR_type_formal___MMTypeFormal___bound))( variable2 /*oft*/) /*MMTypeFormalParameter::bound*/;
      variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
      variable4 = ((static_type___MMType___for_module_t)CALL(variable4,COLOR_static_type___MMType___for_module))(variable4, variable5) /*MMType::for_module*/;
      ((genericity___MMTypeFormalParameter___bound__eq_t)CALL( variable3 /*ft*/,COLOR_genericity___MMTypeFormalParameter___bound__eq))( variable3 /*ft*/, variable4) /*MMTypeFormalParameter::bound=*/;
      continue_7: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*Iterator::next*/;
    }
    break_7: while(0);
  }
  variable0 = ATTR_genericity___MMLocalClass____formals_types( self) /*MMLocalClass::_formals_types*/;
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMLocalClass___get_type(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::get_type (src/metamodel//genericity.nit:80,2--86:15)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMType::==*/)))));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = ((genericity___MMLocalClass___is_generic_t)CALL( self,COLOR_genericity___MMLocalClass___is_generic))( self) /*MMLocalClass::is_generic*/;
  }
  variable0 = variable1;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ((genericity___MMLocalClass___formals_types_t)CALL( self,COLOR_genericity___MMLocalClass___formals_types))( self) /*MMLocalClass::formals_types*/;
    variable0 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL( self,COLOR_genericity___MMLocalClass___get_instantiate_type))( self, variable0) /*MMLocalClass::get_instantiate_type*/;
    ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/ = variable0;
    variable0 = ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/;
    goto return_label9;
  } else { /*if*/
    variable0 = ((genericity___MMLocalClass___get_type_t)CALL( self,COLOR_SUPER_genericity___MMLocalClass___get_type))( self) /*super MMLocalClass::get_type*/;
    goto return_label9;
  }
  return_label9: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMLocalClass___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMLocalClass::is_generic (src/metamodel//genericity.nit:90,2--91:42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___arity))( self) /*MMLocalClass::arity*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>UNTAG_Int( TAG_Int(0)));
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMSignature___adaptation_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMSignature::adaptation_to (src/metamodel//genericity.nit:95,2--113:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
      val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMSignature____recv( self) /*MMSignature::_recv*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*r*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*r*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*r*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  self;
    goto return_label11;
  }
  variable2 = ((static_type___MMType___module_t)CALL( variable0 /*r*/,COLOR_static_type___MMType___module))( variable0 /*r*/) /*MMType::module*/;
  variable1 = variable2;
  variable3 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
  variable2 = variable3;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*p*/ ==  NIT_NULL /*null*/) || (( variable2 /*p*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable2 /*p*/,COLOR_kernel___Object_____eqeq))( variable2 /*p*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_array___Array___init(); /*new Array[MMType]*/
    variable2 = variable3 /*p=*/;
    variable3 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
    variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
    while (true) { /*for*/
      variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
      variable5 = ((static_type___MMType___for_module_t)CALL( variable4 /*i*/,COLOR_static_type___MMType___for_module))( variable4 /*i*/,  variable1 /*mod*/) /*MMType::for_module*/;
      variable5 = ((static_type___MMType___adapt_to_t)CALL(variable5,COLOR_static_type___MMType___adapt_to))(variable5,  variable0 /*r*/) /*MMType::adapt_to*/;
      ((array___AbstractArray___add_t)CALL( variable2 /*p*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*p*/, variable5) /*Array::add*/;
      continue_12: while(0);
      ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
    }
    break_12: while(0);
  }
  variable4 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
  variable3 = variable4;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*rv*/ ==  NIT_NULL /*null*/) || (( variable3 /*rv*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*rv*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*rv*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*rv*/,COLOR_kernel___Object_____eqeq))( variable3 /*rv*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((static_type___MMType___for_module_t)CALL( variable3 /*rv*/,COLOR_static_type___MMType___for_module))( variable3 /*rv*/,  variable1 /*mod*/) /*MMType::for_module*/;
    variable4 = ((static_type___MMType___adapt_to_t)CALL(variable4,COLOR_static_type___MMType___adapt_to))(variable4,  variable0 /*r*/) /*MMType::adapt_to*/;
    variable3 = variable4 /*rv=*/;
  }
  variable4 = NEW_static_type___MMSignature___init( variable2 /*p*/,  variable3 /*rv*/,  variable0 /*r*/); /*new MMSignature*/
  variable1 = variable4;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMLocalProperty___recv(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMLocalProperty::recv (src/metamodel//genericity.nit:121,2--124:23)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMLocalProperty::signature*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:123,3--26\n"); nit_exit(1);}
  variable0 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMLocalProperty::signature*/;
  variable0 = ((static_type___MMSignature___recv_t)CALL(variable0,COLOR_static_type___MMSignature___recv))(variable0) /*MMSignature::recv*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable0;
}
void genericity___MMLocalProperty___recv__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMLocalProperty::recv= (src/metamodel//genericity.nit:127,2--132:19)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*rec*/ ==  NIT_NULL /*null*/) || (( variable0 /*rec*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*rec*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*rec*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*rec*/,COLOR_kernel___Object_____eqeq))( variable0 /*rec*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:129,3--20\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:131,3--33\n"); nit_exit(1);}
  ATTR_genericity___MMLocalProperty____recv_alone( self) /*MMLocalProperty::_recv_alone*/ =  variable0 /*rec*/;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMLocalProperty___signature(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMLocalProperty::signature (src/metamodel//genericity.nit:135,2--160:25)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable0 = variable1;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*sig*/ ==  NIT_NULL /*null*/) || (( variable0 /*sig*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*sig*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*sig*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*sig*/,COLOR_kernel___Object_____eqeq))( variable0 /*sig*/,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable0 =  variable0 /*sig*/;
    goto return_label15;
  }
  variable1 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_MMConcreteProperty, ID_MMConcreteProperty)) /*cast MMConcreteProperty*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable0 =  NIT_NULL /*null*/;
    goto return_label15;
  }
  variable2 = ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/;
  variable1 = variable2;
  variable3 = ATTR_abstractmetamodel___MMLocalProperty____concrete_property( self) /*MMLocalProperty::_concrete_property*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable1 /*sp*/ ==  NIT_NULL /*null*/) || (( variable1 /*sp*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*sp*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*sp*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*sp*/,COLOR_kernel___Object_____eqeq))( variable1 /*sp*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((genericity___MMLocalProperty___signature_t)CALL( variable2 /*impl*/,COLOR_static_type___MMLocalProperty___signature))( variable2 /*impl*/) /*MMConcreteProperty::signature*/;
    ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/ = variable3;
    variable3 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:150,4--34\n"); nit_exit(1);}
  } else { /*if*/
    variable3 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*sp*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*sp*/) /*MMLocalProperty::signature*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:153,4--30\n"); nit_exit(1);}
    variable3 = ATTR_genericity___MMLocalProperty____recv_alone( self) /*MMLocalProperty::_recv_alone*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMType::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:154,4--29\n"); nit_exit(1);}
    variable3 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*sp*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*sp*/) /*MMLocalProperty::signature*/;
    variable4 = ATTR_genericity___MMLocalProperty____recv_alone( self) /*MMLocalProperty::_recv_alone*/;
    variable3 = ((genericity___MMSignature___adaptation_to_t)CALL(variable3,COLOR_genericity___MMSignature___adaptation_to))(variable3, variable4) /*MMSignature::adaptation_to*/;
    ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/ = variable3;
  }
  variable3 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:158,3--33\n"); nit_exit(1);}
  variable3 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable0 = variable3;
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMLocalProperty___adapt_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMLocalProperty::adapt_property (src/metamodel//genericity.nit:163,2--172:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*t*/ ==  NIT_NULL /*null*/) || (( variable0 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))( variable0 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:167,3--18\n"); nit_exit(1);}
  variable2 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
  variable2 = ((genericity___MMLocalClass___get_type_t)CALL(variable2,COLOR_static_type___MMLocalClass___get_type))(variable2) /*MMLocalClass::get_type*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable0 /*t*/ ==  variable1 /*recv*/) || (( variable0 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*t*/, variable1 /*recv*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))( variable0 /*t*/,  variable1 /*recv*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  self;
    goto return_label16;
  } else { /*if*/
    variable2 = ((inheritance___MMLocalProperty___inherit_to_t)CALL( self,COLOR_inheritance___MMLocalProperty___inherit_to))( self,  variable0 /*t*/) /*MMLocalProperty::inherit_to*/;
    variable1 = variable2;
    goto return_label16;
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable1;
}
void genericity___MMLocalProperty___inherit_from(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "genericity::MMLocalProperty::inherit_from (src/metamodel//genericity.nit:176,2--179:17)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  ((genericity___MMLocalProperty___inherit_from_t)CALL( self,COLOR_SUPER_genericity___MMLocalProperty___inherit_from))( self,  param0,  param1) /*super MMLocalProperty::inherit_from*/;
  ATTR_genericity___MMLocalProperty____recv_alone( self) /*MMLocalProperty::_recv_alone*/ =  variable1 /*t*/;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMType___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMType::is_generic (src/metamodel//genericity.nit:184,2--185:22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_generic called (src/metamodel//genericity.nit:184,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t genericity___MMTypeFormal___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormal::is_generic (src/metamodel//genericity.nit:189,2--50)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
  variable0 = ((genericity___MMType___is_generic_t)CALL(variable0,COLOR_genericity___MMType___is_generic))(variable0) /*MMType::is_generic*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeSimpleClass___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeSimpleClass::is_generic (src/metamodel//genericity.nit:193,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeGeneric___params(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::params (src/metamodel//genericity.nit:198,2--199:36)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
}
val_t genericity___MMTypeGeneric___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::is_generic (src/metamodel//genericity.nit:202,2--37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeGeneric___is_supertype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::is_supertype (src/metamodel//genericity.nit:204,2--212:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((static_type___MMType___local_class_t)CALL( variable0 /*t*/,COLOR_static_type___MMType___local_class))( variable0 /*t*/) /*MMType::local_class*/;
  variable1 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable1) /*MMLocalClass::cshe*/;
  variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
  variable1 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable1,COLOR_partial_order___PartialOrderElement_____leq))(variable1, variable2) /*PartialOrderElement::<=*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
    variable2 = ((static_type___MMType___upcast_for_t)CALL( variable0 /*t*/,COLOR_static_type___MMType___upcast_for))( variable0 /*t*/, variable2) /*MMType::upcast_for*/;
    variable1 = variable2;
    variable2 = TAG_Bool(( variable1 /*u*/==NIT_NULL) || VAL_ISA( variable1 /*u*/, COLOR_MMTypeGeneric, ID_MMTypeGeneric)) /*cast MMTypeGeneric*/;
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((genericity___MMTypeGeneric___is_subtype_t)CALL( self,COLOR_genericity___MMTypeGeneric___is_subtype))( self,  variable1 /*u*/) /*MMTypeGeneric::is_subtype*/;
      variable1 = variable2;
      goto return_label21;
    }
  }
  variable1 =  TAG_Bool(false);
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___upcast_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::upcast_for (src/metamodel//genericity.nit:215,2--221:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((genericity___MMTypeGeneric___upcast_for_t)CALL( self,COLOR_SUPER_genericity___MMTypeGeneric___upcast_for))( self,  param0) /*super MMTypeGeneric::upcast_for*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  self) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  self) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((static_type___MMType___adapt_to_t)CALL( variable1 /*t*/,COLOR_static_type___MMType___adapt_to))( variable1 /*t*/,  self) /*MMType::adapt_to*/;
    variable1 = variable2 /*t=*/;
  }
  variable1 =  variable1 /*t*/;
  goto return_label22;
  return_label22: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::for_module (src/metamodel//genericity.nit:224,2--236:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
      val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  variable2 = ((static_type___MMTypeClass___module_t)CALL( self,COLOR_static_type___MMType___module))( self) /*MMTypeGeneric::module*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  variable0 /*mod*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*mod*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*mod*/) /*MMModule::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable3 = NEW_array___Array___init(); /*new Array[MMType]*/
    variable2 = variable3;
    variable3 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
    variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
    while (true) { /*for*/
      variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
      variable5 = ((static_type___MMType___for_module_t)CALL( variable4 /*p*/,COLOR_static_type___MMType___for_module))( variable4 /*p*/,  variable0 /*mod*/) /*MMType::for_module*/;
      ((array___AbstractArray___add_t)CALL( variable2 /*parms*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*parms*/, variable5) /*Array::add*/;
      continue_24: while(0);
      ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
    }
    break_24: while(0);
    variable4 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
    variable4 = ((abstractmetamodel___MMLocalClass___for_module_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___for_module))(variable4,  variable0 /*mod*/) /*MMLocalClass::for_module*/;
    variable3 = variable4;
    variable4 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL( variable3 /*b*/,COLOR_genericity___MMLocalClass___get_instantiate_type))( variable3 /*b*/,  variable2 /*parms*/) /*MMLocalClass::get_instantiate_type*/;
    variable1 = variable4 /*t=*/;
  }
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:235,3--18\n"); nit_exit(1);}
  variable1 =  variable1 /*t*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::adapt_to (src/metamodel//genericity.nit:239,2--246:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[MMType]*/
  variable1 = variable2;
  variable2 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((static_type___MMType___adapt_to_t)CALL( variable3 /*i*/,COLOR_static_type___MMType___adapt_to))( variable3 /*i*/,  variable0 /*r*/) /*MMType::adapt_to*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*rv*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*rv*/, variable4) /*Array::add*/;
    continue_26: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_26: while(0);
  variable3 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
  variable3 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL(variable3,COLOR_genericity___MMLocalClass___get_instantiate_type))(variable3,  variable1 /*rv*/) /*MMLocalClass::get_instantiate_type*/;
  variable2 = variable3;
  variable1 =  variable2 /*l*/;
  goto return_label25;
  return_label25: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___params_equals(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::params_equals (src/metamodel//genericity.nit:249,2--261:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*t*/,COLOR_abstract_collection___Collection___length))( variable0 /*t*/) /*Array::length*/;
  variable2 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable1 = TAG_Bool((variable1)!=(variable2));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label27;
  }
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*t*/,COLOR_abstract_collection___Collection___length))( variable0 /*t*/) /*Array::length*/;
  variable2 = NEW_range___Range___without_last( TAG_Int(0), variable1); /*new Range[Int]*/
  variable1 = variable2;
  variable1 = ((range___Range___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Range::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
    variable4 =  variable2 /*i*/;
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = variable3;
      variable6 = ATTR_array___AbstractArray____length(variable6) /*Array::_length*/;
      variable6 = TAG_Bool(UNTAG_Int( variable4 /*index*/)<UNTAG_Int(variable6));
    }
    variable5 = variable6;
    if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable5 = variable3;
    variable5 = ATTR_array___Array____items(variable5) /*Array::_items*/;
    variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable4 /*index*/)];
    goto return_label29;
    return_label29: while(false);
    variable3 = variable5;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMType::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:255,4--28\n"); nit_exit(1);}
    variable3 =  variable2 /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = ATTR_array___AbstractArray____length( variable0 /*t*/) /*Array::_length*/;
      variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable4 = ATTR_array___Array____items( variable0 /*t*/) /*Array::_items*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
    goto return_label30;
    return_label30: while(false);
    variable3 = variable4;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMType::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:256,4--22\n"); nit_exit(1);}
    variable3 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
    variable4 =  variable2 /*i*/;
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = variable3;
      variable6 = ATTR_array___AbstractArray____length(variable6) /*Array::_length*/;
      variable6 = TAG_Bool(UNTAG_Int( variable4 /*index*/)<UNTAG_Int(variable6));
    }
    variable5 = variable6;
    if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable5 = variable3;
    variable5 = ATTR_array___Array____items(variable5) /*Array::_items*/;
    variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable4 /*index*/)];
    goto return_label31;
    return_label31: while(false);
    variable3 = variable5;
    variable4 =  variable2 /*i*/;
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = ATTR_array___AbstractArray____length( variable0 /*t*/) /*Array::_length*/;
      variable6 = TAG_Bool(UNTAG_Int( variable4 /*index*/)<UNTAG_Int(variable6));
    }
    variable5 = variable6;
    if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable5 = ATTR_array___Array____items( variable0 /*t*/) /*Array::_items*/;
    variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable4 /*index*/)];
    goto return_label32;
    return_label32: while(false);
    variable4 = variable5;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 == variable4) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3,variable4)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3, variable4) /*MMType::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label27;
    }
    continue_28: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_28: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___select_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::select_property (src/metamodel//genericity.nit:264,2--280:17)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
      val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*g*/ ==  NIT_NULL /*null*/) || (( variable0 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))( variable0 /*g*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label33;
  }
  variable1 = ATTR_genericity___MMTypeGeneric____props( self) /*MMTypeGeneric::_props*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*g*/) /*Map::has_key*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
    variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
    if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:270,4--30\n"); nit_exit(1);}
    variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeGeneric::_local_class*/;
    variable2 = ((inheritance___MMLocalClass_____bra_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass_____bra))(variable2,  variable0 /*g*/) /*MMLocalClass::[]*/;
    variable1 = variable2;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*p*/ ==  NIT_NULL /*null*/) || (( variable1 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*p*/,COLOR_kernel___Object_____eqeq))( variable1 /*p*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))))));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable3 = ((genericity___MMLocalProperty___adapt_property_t)CALL( variable1 /*p*/,COLOR_genericity___MMLocalProperty___adapt_property))( variable1 /*p*/,  self) /*MMLocalProperty::adapt_property*/;
      variable2 = variable3;
      variable3 = ATTR_genericity___MMTypeGeneric____props( self) /*MMTypeGeneric::_props*/;
      ((abstract_collection___Map_____braeq_t)CALL(variable3,COLOR_abstract_collection___Map_____braeq))(variable3,  variable0 /*g*/,  variable2 /*p2*/) /*Map::[]=*/;
      variable1 =  variable2 /*p2*/;
      goto return_label33;
    } else { /*if*/
      if (!UNTAG_Bool( TAG_Bool(false))) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:277,5--16\n"); nit_exit(1);}
    }
  }
  variable1 = ATTR_genericity___MMTypeGeneric____props( self) /*MMTypeGeneric::_props*/;
  variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*g*/) /*Map::[]*/;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeGeneric___to_s(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::to_s (src/metamodel//genericity.nit:283,2--285:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  val_t variable8;
  val_t variable9;
  val_t variable10;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___init(); /*new String*/
  variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable2 = variable1;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
  variable3 = ((genericity___MMTypeGeneric___to_s_t)CALL( self,COLOR_SUPER_genericity___MMTypeGeneric___to_s))( self) /*super MMTypeGeneric::to_s*/;
  variable4 = variable3;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("["), TAG_Int(1)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
  variable7 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable7 = ((string___Collection___join_t)CALL(variable7,COLOR_string___Collection___join))(variable7, variable8) /*Array::join*/;
  variable8 = variable7;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("]"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable10) /*String::append*/;
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeGeneric___is_subtype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::is_subtype (src/metamodel//genericity.nit:288,2--298:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
    val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*Array::length*/;
  variable2 = NEW_range___Range___without_last( TAG_Int(0), variable1); /*new Range[Int]*/
  variable1 = variable2;
  variable1 = ((range___Range___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Range::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = ((genericity___MMTypeGeneric___params_t)CALL( variable0 /*t*/,COLOR_genericity___MMTypeGeneric___params))( variable0 /*t*/) /*MMTypeGeneric::params*/;
    variable4 =  variable2 /*i*/;
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = variable3;
      variable6 = ATTR_array___AbstractArray____length(variable6) /*Array::_length*/;
      variable6 = TAG_Bool(UNTAG_Int( variable4 /*index*/)<UNTAG_Int(variable6));
    }
    variable5 = variable6;
    if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable5 = variable3;
    variable5 = ATTR_array___Array____items(variable5) /*Array::_items*/;
    variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable4 /*index*/)];
    goto return_label37;
    return_label37: while(false);
    variable3 = variable5;
    variable4 = ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/;
    variable5 =  variable2 /*i*/;
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable7 = variable6;
    if (UNTAG_Bool(variable7)) { /* and */
      variable7 = variable4;
      variable7 = ATTR_array___AbstractArray____length(variable7) /*Array::_length*/;
      variable7 = TAG_Bool(UNTAG_Int( variable5 /*index*/)<UNTAG_Int(variable7));
    }
    variable6 = variable7;
    if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable6 = variable4;
    variable6 = ATTR_array___Array____items(variable6) /*Array::_items*/;
    variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*index*/)];
    goto return_label38;
    return_label38: while(false);
    variable4 = variable6;
    variable3 = ((static_type___MMType_____l_t)CALL(variable3,COLOR_static_type___MMType_____l))(variable3, variable4) /*MMType::<*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label35;
    }
    continue_36: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_36: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable1;
}
void genericity___MMTypeGeneric___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "genericity::MMTypeGeneric::init (src/metamodel//genericity.nit:301,2--304:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeGeneric].i]) return;
  ((static_type___MMTypeClass___init_t)CALL( self,COLOR_static_type___MMTypeClass___init))( self,  variable0 /*c*/, init_table /*YYY*/) /*MMTypeClass::init*/;
  ATTR_genericity___MMTypeGeneric____params( self) /*MMTypeGeneric::_params*/ =  variable1 /*p*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeGeneric].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMTypeFormalParameter___def_class(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::def_class (src/metamodel//genericity.nit:310,2--311:39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_genericity___MMTypeFormalParameter____def_class( self) /*MMTypeFormalParameter::_def_class*/;
}
val_t genericity___MMTypeFormalParameter___position(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::position (src/metamodel//genericity.nit:313,2--314:29)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_genericity___MMTypeFormalParameter____position( self) /*MMTypeFormalParameter::_position*/;
}
val_t genericity___MMTypeFormalParameter___module(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::module (src/metamodel//genericity.nit:316,2--46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_genericity___MMTypeFormalParameter____def_class( self) /*MMTypeFormalParameter::_def_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___module))(variable0) /*MMLocalClass::module*/;
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeFormalParameter___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::for_module (src/metamodel//genericity.nit:318,2--325:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  variable2 = ((genericity___MMTypeFormalParameter___module_t)CALL( self,COLOR_static_type___MMType___module))( self) /*MMTypeFormalParameter::module*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  variable0 /*mod*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*mod*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*mod*/) /*MMModule::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_genericity___MMTypeFormalParameter____def_class( self) /*MMTypeFormalParameter::_def_class*/;
    variable2 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___global))(variable2) /*MMLocalClass::global*/;
    variable2 = ((abstractmetamodel___MMModule_____bra_t)CALL( variable0 /*mod*/,COLOR_abstractmetamodel___MMModule_____bra))( variable0 /*mod*/, variable2) /*MMModule::[]*/;
    variable3 = ((genericity___MMTypeFormalParameter___position_t)CALL( self,COLOR_genericity___MMTypeFormalParameter___position))( self) /*MMTypeFormalParameter::position*/;
    variable2 = ((genericity___MMLocalClass___get_formal_t)CALL(variable2,COLOR_genericity___MMLocalClass___get_formal))(variable2, variable3) /*MMLocalClass::get_formal*/;
    variable1 = variable2 /*t=*/;
  }
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:324,3--18\n"); nit_exit(1);}
  variable1 =  variable1 /*t*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeFormalParameter___upcast_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::upcast_for (src/metamodel//genericity.nit:328,2--40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable1;
}
void genericity___MMTypeFormalParameter___bound__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::bound= (src/metamodel//genericity.nit:330,3--333:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormalParameter::_bound*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:332,3--23\n"); nit_exit(1);}
  ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormalParameter::_bound*/ =  variable0 /*t*/;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMTypeFormalParameter___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::adapt_to (src/metamodel//genericity.nit:336,2--343:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((genericity___MMTypeFormalParameter___def_class_t)CALL( self,COLOR_genericity___MMTypeFormalParameter___def_class))( self) /*MMTypeFormalParameter::def_class*/;
  variable2 = ((static_type___MMType___upcast_for_t)CALL( variable0 /*r*/,COLOR_static_type___MMType___upcast_for))( variable0 /*r*/, variable2) /*MMType::upcast_for*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*old_r*/==NIT_NULL) || VAL_ISA( variable1 /*old_r*/, COLOR_MMTypeGeneric, ID_MMTypeGeneric)) /*cast MMTypeGeneric*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:340,3--32\n"); nit_exit(1);}
  variable3 = ((genericity___MMTypeGeneric___params_t)CALL( variable1 /*old_r*/,COLOR_genericity___MMTypeGeneric___params))( variable1 /*old_r*/) /*MMTypeGeneric::params*/;
  variable4 = ((genericity___MMTypeFormalParameter___position_t)CALL( self,COLOR_genericity___MMTypeFormalParameter___position))( self) /*MMTypeFormalParameter::position*/;
  variable5 = variable4;
  variable6 = TAG_Bool(UNTAG_Int( variable5 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable7 = variable6;
  if (UNTAG_Bool(variable7)) { /* and */
    variable7 = variable3;
    variable7 = ATTR_array___AbstractArray____length(variable7) /*Array::_length*/;
    variable7 = TAG_Bool(UNTAG_Int( variable5 /*index*/)<UNTAG_Int(variable7));
  }
  variable6 = variable7;
  if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable6 = variable3;
  variable6 = ATTR_array___Array____items(variable6) /*Array::_items*/;
  variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*index*/)];
  goto return_label45;
  return_label45: while(false);
  variable3 = variable6;
  variable2 = variable3;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*reduct*/ ==  NIT_NULL /*null*/) || (( variable2 /*reduct*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*reduct*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*reduct*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*reduct*/,COLOR_kernel___Object_____eqeq))( variable2 /*reduct*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:342,3--23\n"); nit_exit(1);}
  variable1 =  variable2 /*reduct*/;
  goto return_label44;
  return_label44: while(false);
  tracehead = trace.prev;
  return variable1;
}
void genericity___MMTypeFormalParameter___with_bound(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::with_bound (src/metamodel//genericity.nit:346,2--349:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormalParameter].i]) return;
  ((genericity___MMTypeFormalParameter___init_t)CALL( self,COLOR_genericity___MMTypeFormalParameter___init))( self,  variable0 /*n*/,  variable1 /*p*/,  variable2 /*intro*/, init_table /*YYY*/) /*MMTypeFormalParameter::init*/;
  ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormalParameter::_bound*/ =  variable3 /*b*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormalParameter].i] = 1;
  tracehead = trace.prev;
  return;
}
void genericity___MMTypeFormalParameter___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "genericity::MMTypeFormalParameter::init (src/metamodel//genericity.nit:352,2--357:20)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormalParameter].i]) return;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*n*/ ==  NIT_NULL /*null*/) || (( variable0 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))( variable0 /*n*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//genericity.nit:354,3--18\n"); nit_exit(1);}
  ATTR_type_formal___MMTypeFormal____name( self) /*MMTypeFormalParameter::_name*/ =  variable0 /*n*/;
  ATTR_genericity___MMTypeFormalParameter____position( self) /*MMTypeFormalParameter::_position*/ =  variable1 /*p*/;
  ATTR_genericity___MMTypeFormalParameter____def_class( self) /*MMTypeFormalParameter::_def_class*/ =  variable2 /*intro*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormalParameter].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t genericity___MMTypeNone___is_generic(val_t  self) {
  struct trace_t trace = {NULL, "genericity::MMTypeNone::is_generic (src/metamodel//genericity.nit:362,2--38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label48;
  return_label48: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t genericity___MMTypeNone___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeNone::for_module (src/metamodel//genericity.nit:363,3--43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label49;
  return_label49: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t genericity___MMTypeNone___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "genericity::MMTypeNone::adapt_to (src/metamodel//genericity.nit:364,3--39)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label50;
  return_label50: while(false);
  tracehead = trace.prev;
  return variable1;
}
