#include "typing._sep.h"
void typing___MMSrcModule___do_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::MMSrcModule::do_typing (src/syntax//typing.nit:23,2--28:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_typing___TypingVisitor___init( variable0 /*tc*/,  self); /*new TypingVisitor*/
  variable1 = variable2;
  variable2 = ((syntax_base___MMSrcModule___node_t)CALL( self,COLOR_syntax_base___MMSrcModule___node))( self) /*MMSrcModule::node*/;
  ((typing___TypingVisitor___visit_t)CALL( variable1 /*tv*/,COLOR_parser_prod___Visitor___visit))( variable1 /*tv*/, variable2) /*TypingVisitor::visit*/;
  tracehead = trace.prev;
  return;
}
void typing___TypingVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::visit (src/syntax//typing.nit:39,2--41:40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*n*/ ==  NIT_NULL /*null*/) || (( variable0 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))( variable0 /*n*/,  NIT_NULL /*null*/) /*PNode::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    ((typing___PNode___accept_typing_t)CALL( variable0 /*n*/,COLOR_typing___PNode___accept_typing))( variable0 /*n*/,  self) /*PNode::accept_typing*/;
  }
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___variable_ctx(val_t  self) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::variable_ctx (src/syntax//typing.nit:44,2--45:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___TypingVisitor____variable_ctx( self) /*TypingVisitor::_variable_ctx*/;
}
void typing___TypingVisitor___variable_ctx__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::variable_ctx= (src/syntax//typing.nit:44,2--45:54)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___TypingVisitor____variable_ctx( self) /*TypingVisitor::_variable_ctx*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___self_type(val_t  self) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::self_type (src/syntax//typing.nit:47,2--48:42)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___TypingVisitor____self_type( self) /*TypingVisitor::_self_type*/;
}
void typing___TypingVisitor___self_type__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::self_type= (src/syntax//typing.nit:47,2--48:42)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___TypingVisitor____self_type( self) /*TypingVisitor::_self_type*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___top_block(val_t  self) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::top_block (src/syntax//typing.nit:50,2--51:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___TypingVisitor____top_block( self) /*TypingVisitor::_top_block*/;
}
void typing___TypingVisitor___top_block__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::top_block= (src/syntax//typing.nit:50,2--51:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___TypingVisitor____top_block( self) /*TypingVisitor::_top_block*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___explicit_super_init_calls(val_t  self) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::explicit_super_init_calls (src/syntax//typing.nit:53,2--54:66)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___TypingVisitor____explicit_super_init_calls( self) /*TypingVisitor::_explicit_super_init_calls*/;
}
void typing___TypingVisitor___explicit_super_init_calls__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::explicit_super_init_calls= (src/syntax//typing.nit:53,2--54:66)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___TypingVisitor____explicit_super_init_calls( self) /*TypingVisitor::_explicit_super_init_calls*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___explicit_other_init_call(val_t  self) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::explicit_other_init_call (src/syntax//typing.nit:56,2--57:55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___TypingVisitor____explicit_other_init_call( self) /*TypingVisitor::_explicit_other_init_call*/;
}
void typing___TypingVisitor___explicit_other_init_call__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::explicit_other_init_call= (src/syntax//typing.nit:56,2--57:55)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___TypingVisitor____explicit_other_init_call( self) /*TypingVisitor::_explicit_other_init_call*/ =  param0;
  tracehead = trace.prev;
  return;
}
void typing___TypingVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::init (src/syntax//typing.nit:59,2--26)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TypingVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TypingVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t typing___TypingVisitor___get_default_constructor_for(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "typing::TypingVisitor::get_default_constructor_for (src/syntax//typing.nit:61,2--96:14)"};
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
    val_t variable11;
    val_t variable12;
      val_t variable13;
      val_t variable14;
      val_t variable15;
      val_t variable16;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  self;
  variable5 = NEW_array___Array___init(); /*new Array[MMMethod]*/
  variable4 = variable5;
  variable6 = NEW_array___Array___init(); /*new Array[MMMethod]*/
  variable5 = variable6;
  variable7 = ((genericity___MMLocalProperty___signature_t)CALL( variable2 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable2 /*prop*/) /*MMMethod::signature*/;
  variable7 = ((static_type___MMSignature___arity_t)CALL(variable7,COLOR_static_type___MMSignature___arity))(variable7) /*MMSignature::arity*/;
  variable6 = variable7;
  variable7 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global_properties))( variable1 /*c*/) /*MMLocalClass::global_properties*/;
  variable7 = ((abstract_collection___Collection___iterator_t)CALL(variable7,COLOR_abstract_collection___Collection___iterator))(variable7) /*Set::iterator*/;
  while (true) { /*for*/
    variable8 = ((abstract_collection___Iterator___is_ok_t)CALL(variable7,COLOR_abstract_collection___Iterator___is_ok))(variable7) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable8)) break; /*for*/
    variable8 = ((abstract_collection___Iterator___item_t)CALL(variable7,COLOR_abstract_collection___Iterator___item))(variable7) /*Iterator::item*/;
    variable9 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable8 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable8 /*g*/) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable9)))) { /*if*/
      goto continue_4;
    }
    variable9 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable8 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable8 /*g*/) /*MMGlobalProperty::intro*/;
    variable9 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable9,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable9) /*MMConcreteProperty::local_class*/;
    variable9 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable9 ==  variable1 /*c*/) || ((variable9 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable9,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable9, variable1 /*c*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable9,COLOR_kernel___Object_____eqeq))(variable9,  variable1 /*c*/) /*MMLocalClass::==*/)))))));
    if (UNTAG_Bool(variable9)) { /*if*/
      goto continue_4;
    }
    variable10 = ((inheritance___MMLocalClass_____bra_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable1 /*c*/,  variable8 /*g*/) /*MMLocalClass::[]*/;
    variable9 = variable10;
    variable10 = TAG_Bool(( variable9 /*gp*/==NIT_NULL) || VAL_ISA( variable9 /*gp*/, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
    if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:73,4--25\n"); nit_exit(1);}
    variable11 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable8 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable8 /*g*/) /*MMGlobalProperty::intro*/;
    variable11 = ((genericity___MMLocalProperty___signature_t)CALL(variable11,COLOR_static_type___MMLocalProperty___signature))(variable11) /*MMConcreteProperty::signature*/;
    variable11 = ((static_type___MMSignature___arity_t)CALL(variable11,COLOR_static_type___MMSignature___arity))(variable11) /*MMSignature::arity*/;
    variable10 = variable11;
    variable11 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*prop*/ ==  NIT_NULL /*null*/) || (( variable2 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*prop*/,COLOR_kernel___Object_____eqeq))( variable2 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))))));
    variable12 = variable11;
    if (UNTAG_Bool(variable12)) { /* and */
      variable12 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable8 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable8 /*g*/) /*MMGlobalProperty::intro*/;
      variable12 = ((abstractmetamodel___MMLocalProperty___name_t)CALL(variable12,COLOR_abstractmetamodel___MMLocalProperty___name))(variable12) /*MMConcreteProperty::name*/;
      variable13 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable2 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable2 /*prop*/) /*MMMethod::name*/;
      variable12 = TAG_Bool((variable12 == variable13) || ((variable12 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable12,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable12,variable13)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable12,COLOR_kernel___Object_____eqeq))(variable12, variable13) /*Symbol::==*/)))));
    }
    variable11 = variable12;
    if (UNTAG_Bool(variable11)) { /*if*/
      variable11 = TAG_Bool(( variable10 /*garity*/)==( TAG_Int(0)));
      variable12 = variable11;
      if (!UNTAG_Bool(variable12)) { /* or */
        variable12 = TAG_Bool(( variable10 /*garity*/)==( variable6 /*parity*/));
      }
      variable11 = variable12;
      if (UNTAG_Bool(variable11)) { /*if*/
        variable3 =  variable9 /*gp*/;
        goto return_label3;
      } else { /*if*/
        ((array___AbstractArray___add_t)CALL( variable5 /*false_candidates*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*false_candidates*/,  variable9 /*gp*/) /*Array::add*/;
      }
    } else { /*if*/
      variable11 = TAG_Bool(( variable10 /*garity*/)==( TAG_Int(0)));
      if (UNTAG_Bool(variable11)) { /*if*/
        ((array___AbstractArray___add_t)CALL( variable4 /*candidates*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*candidates*/,  variable9 /*gp*/) /*Array::add*/;
        ((array___AbstractArray___add_t)CALL( variable5 /*false_candidates*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*false_candidates*/,  variable9 /*gp*/) /*Array::add*/;
      } else { /*if*/
        ((array___AbstractArray___add_t)CALL( variable5 /*false_candidates*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*false_candidates*/,  variable9 /*gp*/) /*Array::add*/;
      }
    }
    continue_4: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable7,COLOR_abstract_collection___Iterator___next))(variable7) /*Iterator::next*/;
  }
  break_4: while(0);
  variable7 = ((array___AbstractArray___length_t)CALL( variable4 /*candidates*/,COLOR_abstract_collection___Collection___length))( variable4 /*candidates*/) /*Array::length*/;
  variable7 = TAG_Bool((variable7)==( TAG_Int(1)));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = ((abstract_collection___IndexedCollection___first_t)CALL( variable4 /*candidates*/,COLOR_abstract_collection___Collection___first))( variable4 /*candidates*/) /*Array::first*/;
    variable3 = variable7;
    goto return_label3;
  } else { /*if*/
    variable7 = ((array___AbstractArray___is_empty_t)CALL( variable5 /*false_candidates*/,COLOR_abstract_collection___Collection___is_empty))( variable5 /*false_candidates*/) /*Array::is_empty*/;
    if (UNTAG_Bool(variable7)) { /*if*/
      variable7 = NEW_string___String___init(); /*new String*/
      variable8 = NEW_string___String___with_native(BOX_NativeString("Fatal error: there is no available constrctor in "), TAG_Int(49)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
      variable10 =  variable1 /*c*/;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___warning_t)CALL( variable3 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___warning))( variable3 /*v*/,  variable0 /*n*/, variable7) /*TypingVisitor::warning*/;
      variable3 =  NIT_NULL /*null*/;
      goto return_label3;
    } else { /*if*/
      variable7 = NEW_string___String___init(); /*new String*/
      variable8 = NEW_string___String___with_native(BOX_NativeString("Error: Conflicting default constructor to call for "), TAG_Int(51)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
      variable10 =  variable1 /*c*/;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
      variable13 = ((string___Collection___join_t)CALL( variable5 /*false_candidates*/,COLOR_string___Collection___join))( variable5 /*false_candidates*/, variable13) /*Array::join*/;
      variable14 = variable13;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
      variable15 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable16 = variable15;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable3 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable3 /*v*/,  variable0 /*n*/, variable7) /*TypingVisitor::error*/;
      variable3 =  NIT_NULL /*null*/;
      goto return_label3;
    }
  }
  return_label3: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t typing___VariableContext_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::VariableContext::[] (src/syntax//typing.nit:104,2--111:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_typing___VariableContext____dico( self) /*VariableContext::_dico*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*s*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_typing___VariableContext____dico( self) /*VariableContext::_dico*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*s*/) /*Map::[]*/;
    goto return_label5;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label5;
  }
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
void typing___VariableContext___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::VariableContext::add (src/syntax//typing.nit:115,2--118:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_typing___VariableContext____dico( self) /*VariableContext::_dico*/;
  variable2 = ((syntax_base___Variable___name_t)CALL( variable0 /*v*/,COLOR_syntax_base___Variable___name))( variable0 /*v*/) /*Variable::name*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*v*/) /*Map::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t typing___VariableContext___stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::VariableContext::stype (src/syntax//typing.nit:122,2--126:16)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___Variable___stype_t)CALL( variable0 /*v*/,COLOR_syntax_base___Variable___stype))( variable0 /*v*/) /*Variable::stype*/;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t typing___VariableContext___sub(val_t  self) {
  struct trace_t trace = {NULL, "typing::VariableContext::sub (src/syntax//typing.nit:132,2--135:53)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_typing___SubVariableContext___with( self,  NIT_NULL /*null*/,  NIT_NULL /*null*/); /*new SubVariableContext*/
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___VariableContext___sub_with(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "typing::VariableContext::sub_with (src/syntax//typing.nit:138,2--141:47)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = NEW_typing___SubVariableContext___with( self,  variable0 /*v*/,  variable1 /*t*/); /*new SubVariableContext*/
  goto return_label9;
  return_label9: while(false);
  tracehead = trace.prev;
  return variable2;
}
void typing___VariableContext___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "typing::VariableContext::init (src/syntax//typing.nit:144,2--146:38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_VariableContext].i]) return;
  variable0 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, Variable]*/
  ATTR_typing___VariableContext____dico( self) /*VariableContext::_dico*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_VariableContext].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t typing___SubVariableContext___prev(val_t  self) {
  struct trace_t trace = {NULL, "typing::SubVariableContext::prev (src/syntax//typing.nit:152,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___SubVariableContext____prev( self) /*SubVariableContext::_prev*/;
}
val_t typing___SubVariableContext_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::SubVariableContext::[] (src/syntax//typing.nit:156,2--161:16)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_typing___VariableContext____dico( self) /*SubVariableContext::_dico*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*s*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_typing___VariableContext____dico( self) /*SubVariableContext::_dico*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*s*/) /*Map::[]*/;
    goto return_label11;
  } else { /*if*/
    variable1 = ((typing___SubVariableContext___prev_t)CALL( self,COLOR_typing___SubVariableContext___prev))( self) /*SubVariableContext::prev*/;
    variable1 = ((typing___VariableContext_____bra_t)CALL(variable1,COLOR_typing___VariableContext_____bra))(variable1,  variable0 /*s*/) /*VariableContext::[]*/;
    goto return_label11;
  }
  return_label11: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t typing___SubVariableContext___stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::SubVariableContext::stype (src/syntax//typing.nit:165,2--170:21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_typing___SubVariableContext____variable( self) /*SubVariableContext::_variable*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*v*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*v*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*v*/) /*Variable::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_typing___SubVariableContext____var_type( self) /*SubVariableContext::_var_type*/;
    goto return_label12;
  }
  variable1 = ((typing___SubVariableContext___prev_t)CALL( self,COLOR_typing___SubVariableContext___prev))( self) /*SubVariableContext::prev*/;
  variable1 = ((typing___VariableContext___stype_t)CALL(variable1,COLOR_typing___VariableContext___stype))(variable1,  variable0 /*v*/) /*VariableContext::stype*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
void typing___SubVariableContext___with(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "typing::SubVariableContext::with (src/syntax//typing.nit:173,2--178:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_SubVariableContext].i]) return;
  ((typing___VariableContext___init_t)CALL( self,COLOR_typing___VariableContext___init))( self, init_table /*YYY*/) /*SubVariableContext::init*/;
  ATTR_typing___SubVariableContext____prev( self) /*SubVariableContext::_prev*/ =  variable0 /*p*/;
  ATTR_typing___SubVariableContext____variable( self) /*SubVariableContext::_variable*/ =  variable1 /*v*/;
  ATTR_typing___SubVariableContext____var_type( self) /*SubVariableContext::_var_type*/ =  variable2 /*t*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_SubVariableContext].i] = 1;
  tracehead = trace.prev;
  return;
}
void typing___PNode___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::PNode::accept_typing (src/syntax//typing.nit:186,2--189:16)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  ((typing___PNode___after_typing_t)CALL( self,COLOR_typing___PNode___after_typing))( self,  variable0 /*v*/) /*PNode::after_typing*/;
  tracehead = trace.prev;
  return;
}
void typing___PNode___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::PNode::after_typing (src/syntax//typing.nit:191,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
void typing___PClassdef___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::PClassdef::accept_typing (src/syntax//typing.nit:195,2--198:7)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___PClassdef___local_class_t)CALL( self,COLOR_syntax_base___PClassdef___local_class))( self) /*PClassdef::local_class*/;
  variable1 = ((genericity___MMLocalClass___get_type_t)CALL(variable1,COLOR_static_type___MMLocalClass___get_type))(variable1) /*MMSrcLocalClass::get_type*/;
  ((typing___TypingVisitor___self_type__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___self_type__eq))( variable0 /*v*/, variable1) /*TypingVisitor::self_type=*/;
  ((typing___PClassdef___accept_typing_t)CALL( self,COLOR_SUPER_typing___PClassdef___accept_typing))( self,  param0) /*super PClassdef::accept_typing*/;
  tracehead = trace.prev;
  return;
}
void typing___AAttrPropdef___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAttrPropdef::accept_typing (src/syntax//typing.nit:203,2--207:67)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((typing___AAttrPropdef___accept_typing_t)CALL( self,COLOR_SUPER_typing___AAttrPropdef___accept_typing))( self,  param0) /*super AAttrPropdef::accept_typing*/;
  variable1 = ((parser_nodes___AAttrPropdef___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_expr))( self) /*AAttrPropdef::n_expr*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((parser_nodes___AAttrPropdef___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_expr))( self) /*AAttrPropdef::n_expr*/;
    variable2 = ((parser_nodes___AAttrPropdef___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_expr))( self) /*AAttrPropdef::n_expr*/;
    variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
    variable3 = ((syntax_base___AAttrPropdef___prop_t)CALL( self,COLOR_syntax_base___AAttrPropdef___prop))( self) /*AAttrPropdef::prop*/;
    variable3 = ((genericity___MMLocalProperty___signature_t)CALL(variable3,COLOR_static_type___MMLocalProperty___signature))(variable3) /*MMSrcAttribute::signature*/;
    variable3 = ((static_type___MMSignature___return_type_t)CALL(variable3,COLOR_static_type___MMSignature___return_type))(variable3) /*MMSignature::return_type*/;
    ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/, variable1, variable2, variable3) /*TypingVisitor::check_conform*/;
  }
  tracehead = trace.prev;
  return;
}
void typing___AMethPropdef___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AMethPropdef::accept_typing (src/syntax//typing.nit:213,2--216:7)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_typing___VariableContext___init(); /*new VariableContext*/
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable1) /*TypingVisitor::variable_ctx=*/;
  ((typing___AMethPropdef___accept_typing_t)CALL( self,COLOR_SUPER_typing___AMethPropdef___accept_typing))( self,  param0) /*super AMethPropdef::accept_typing*/;
  tracehead = trace.prev;
  return;
}
val_t typing___AConcreteInitPropdef___super_init_calls(val_t  self) {
  struct trace_t trace = {NULL, "typing::AConcreteInitPropdef::super_init_calls (src/syntax//typing.nit:221,2--70)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AConcreteInitPropdef____super_init_calls( self) /*AConcreteInitPropdef::_super_init_calls*/;
}
val_t typing___AConcreteInitPropdef___explicit_super_init_calls(val_t  self) {
  struct trace_t trace = {NULL, "typing::AConcreteInitPropdef::explicit_super_init_calls (src/syntax//typing.nit:222,2--79)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AConcreteInitPropdef____explicit_super_init_calls( self) /*AConcreteInitPropdef::_explicit_super_init_calls*/;
}
void typing___AConcreteInitPropdef___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AConcreteInitPropdef::accept_typing (src/syntax//typing.nit:223,2--259:11)"};
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
  variable0 =  param0;
  variable1 = ((parser_nodes___AConcreteMethPropdef___n_block_t)CALL( self,COLOR_parser_nodes___AConcreteMethPropdef___n_block))( self) /*AConcreteInitPropdef::n_block*/;
  ((typing___TypingVisitor___top_block__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___top_block__eq))( variable0 /*v*/, variable1) /*TypingVisitor::top_block=*/;
  variable1 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( self) /*AConcreteInitPropdef::explicit_super_init_calls*/;
  ((typing___TypingVisitor___explicit_super_init_calls__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_super_init_calls__eq))( variable0 /*v*/, variable1) /*TypingVisitor::explicit_super_init_calls=*/;
  ((typing___TypingVisitor___explicit_other_init_call__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_other_init_call__eq))( variable0 /*v*/,  TAG_Bool(false)) /*TypingVisitor::explicit_other_init_call=*/;
  ((typing___AConcreteInitPropdef___accept_typing_t)CALL( self,COLOR_SUPER_typing___AConcreteInitPropdef___accept_typing))( self,  param0) /*super AConcreteInitPropdef::accept_typing*/;
  variable1 = ((typing___TypingVisitor___explicit_other_init_call_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_other_init_call))( variable0 /*v*/) /*TypingVisitor::explicit_other_init_call*/;
  if (UNTAG_Bool(variable1)) { /*if*/
  } else { /*if*/
    variable1 =  TAG_Int(0);
    variable3 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( self) /*AConcreteInitPropdef::explicit_super_init_calls*/;
    variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*Array::length*/;
    variable2 = variable3;
    variable3 = NIT_NULL /*decl variable cur_m*/;
    variable4 = NIT_NULL /*decl variable cur_c*/;
    variable5 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l*/));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( self) /*AConcreteInitPropdef::explicit_super_init_calls*/;
      variable6 =  variable1 /*i*/;
      variable7 = TAG_Bool(UNTAG_Int( variable6 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable8 = variable7;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = variable5;
        variable8 = ATTR_array___AbstractArray____length(variable8) /*Array::_length*/;
        variable8 = TAG_Bool(UNTAG_Int( variable6 /*index*/)<UNTAG_Int(variable8));
      }
      variable7 = variable8;
      if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable7 = variable5;
      variable7 = ATTR_array___Array____items(variable7) /*Array::_items*/;
      variable7 = UNBOX_NativeArray(variable7)[UNTAG_Int( variable6 /*index*/)];
      goto return_label20;
      return_label20: while(false);
      variable5 = variable7;
      variable3 = variable5 /*cur_m=*/;
      variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable3 /*cur_m*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable3 /*cur_m*/) /*MMMethod::global*/;
      variable5 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable5,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable5) /*MMGlobalProperty::intro*/;
      variable5 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable5) /*MMConcreteProperty::local_class*/;
      variable4 = variable5 /*cur_c=*/;
    }
    variable5 =  TAG_Int(0);
    while (true) { /*while*/
      variable6 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*TypingVisitor::local_class*/;
      variable6 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable6) /*MMSrcLocalClass::cshe*/;
      variable6 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable6,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable6) /*PartialOrderElement::direct_greaters*/;
      variable6 = ((array___AbstractArray___length_t)CALL(variable6,COLOR_abstract_collection___Collection___length))(variable6) /*Array::length*/;
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*j*/)<UNTAG_Int(variable6));
      if (!UNTAG_Bool(variable6)) break; /* while*/
      variable7 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*TypingVisitor::local_class*/;
      variable7 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable7) /*MMSrcLocalClass::cshe*/;
      variable7 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable7,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable7) /*PartialOrderElement::direct_greaters*/;
      variable8 =  variable5 /*j*/;
      variable9 = TAG_Bool(UNTAG_Int( variable8 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable10 = variable9;
      if (UNTAG_Bool(variable10)) { /* and */
        variable10 = variable7;
        variable10 = ATTR_array___AbstractArray____length(variable10) /*Array::_length*/;
        variable10 = TAG_Bool(UNTAG_Int( variable8 /*index*/)<UNTAG_Int(variable10));
      }
      variable9 = variable10;
      if (!UNTAG_Bool(variable9)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable9 = variable7;
      variable9 = ATTR_array___Array____items(variable9) /*Array::_items*/;
      variable9 = UNBOX_NativeArray(variable9)[UNTAG_Int( variable8 /*index*/)];
      goto return_label22;
      return_label22: while(false);
      variable7 = variable9;
      variable6 = variable7;
      variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*cur_c*/ ==  NIT_NULL /*null*/) || (( variable4 /*cur_c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*cur_c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*cur_c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*cur_c*/,COLOR_kernel___Object_____eqeq))( variable4 /*cur_c*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
      variable8 = variable7;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable6 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable6 /*c*/) /*MMLocalClass::cshe*/;
        variable8 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable8,COLOR_partial_order___PartialOrderElement_____leq))(variable8,  variable4 /*cur_c*/) /*PartialOrderElement::<=*/;
      }
      variable7 = variable8;
      if (UNTAG_Bool(variable7)) { /*if*/
        variable7 = TAG_Bool(( variable6 /*c*/ ==  variable4 /*cur_c*/) || (( variable6 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*c*/, variable4 /*cur_c*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*c*/,COLOR_kernel___Object_____eqeq))( variable6 /*c*/,  variable4 /*cur_c*/) /*MMLocalClass::==*/)))));
        if (UNTAG_Bool(variable7)) { /*if*/
          variable5 = TAG_Int(UNTAG_Int(variable5)+UNTAG_Int( TAG_Int(1))) /*j*/;
        }
        variable7 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___super_init_calls))( self) /*AConcreteInitPropdef::super_init_calls*/;
        ((array___AbstractArray___add_t)CALL(variable7,COLOR_abstract_collection___SimpleCollection___add))(variable7,  variable3 /*cur_m*/) /*Array::add*/;
        variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
        variable7 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l*/));
        if (UNTAG_Bool(variable7)) { /*if*/
          variable7 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( self) /*AConcreteInitPropdef::explicit_super_init_calls*/;
          variable8 =  variable1 /*i*/;
          variable9 = TAG_Bool(UNTAG_Int( variable8 /*index*/)>=UNTAG_Int( TAG_Int(0)));
          variable10 = variable9;
          if (UNTAG_Bool(variable10)) { /* and */
            variable10 = variable7;
            variable10 = ATTR_array___AbstractArray____length(variable10) /*Array::_length*/;
            variable10 = TAG_Bool(UNTAG_Int( variable8 /*index*/)<UNTAG_Int(variable10));
          }
          variable9 = variable10;
          if (!UNTAG_Bool(variable9)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
          variable9 = variable7;
          variable9 = ATTR_array___Array____items(variable9) /*Array::_items*/;
          variable9 = UNBOX_NativeArray(variable9)[UNTAG_Int( variable8 /*index*/)];
          goto return_label23;
          return_label23: while(false);
          variable7 = variable9;
          variable3 = variable7 /*cur_m=*/;
          variable7 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable3 /*cur_m*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable3 /*cur_m*/) /*MMMethod::global*/;
          variable7 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable7,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable7) /*MMGlobalProperty::intro*/;
          variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable7) /*MMConcreteProperty::local_class*/;
          variable4 = variable7 /*cur_c=*/;
        } else { /*if*/
          variable3 =  NIT_NULL /*null*/ /*cur_m=*/;
          variable4 =  NIT_NULL /*null*/ /*cur_c=*/;
        }
      } else { /*if*/
        variable8 = ((syntax_base___AMethPropdef___method_t)CALL( self,COLOR_syntax_base___AMethPropdef___method))( self) /*AConcreteInitPropdef::method*/;
        variable8 = ((typing___TypingVisitor___get_default_constructor_for_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___get_default_constructor_for))( variable0 /*v*/,  self,  variable6 /*c*/, variable8) /*TypingVisitor::get_default_constructor_for*/;
        variable7 = variable8;
        variable8 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable7 /*p*/ ==  NIT_NULL /*null*/) || (( variable7 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*p*/,COLOR_kernel___Object_____eqeq))( variable7 /*p*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))))));
        if (UNTAG_Bool(variable8)) { /*if*/
          variable8 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( self,COLOR_typing___AConcreteInitPropdef___super_init_calls))( self) /*AConcreteInitPropdef::super_init_calls*/;
          ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8,  variable7 /*p*/) /*Array::add*/;
        }
        variable5 = TAG_Int(UNTAG_Int(variable5)+UNTAG_Int( TAG_Int(1))) /*j*/;
      }
      continue_21: while(0);
    }
    break_21: while(0);
  }
  tracehead = trace.prev;
  return;
}
void typing___PParam___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::PParam::after_typing (src/syntax//typing.nit:267,2--270:30)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
    variable2 = ((syntax_base___PParam___variable_t)CALL( self,COLOR_syntax_base___PParam___variable))( self) /*PParam::variable*/;
    ((typing___VariableContext___add_t)CALL(variable1,COLOR_typing___VariableContext___add))(variable1, variable2) /*VariableContext::add*/;
  }
  tracehead = trace.prev;
  return;
}
val_t typing___PType___stype(val_t  self) {
  struct trace_t trace = {NULL, "typing::PType::stype (src/syntax//typing.nit:276,2--29)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___PType____stype( self) /*PType::_stype*/;
}
void typing___PType___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::PType::after_typing (src/syntax//typing.nit:277,2--279:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___PType___get_stype_t)CALL( self,COLOR_syntax_base___PType___get_stype))( self,  variable0 /*v*/) /*PType::get_stype*/;
  ATTR_typing___PType____stype( self) /*PType::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
val_t typing___PExpr___stype(val_t  self) {
  struct trace_t trace = {NULL, "typing::PExpr::stype (src/syntax//typing.nit:284,2--35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___PExpr____stype( self) /*PExpr::_stype*/;
}
val_t typing___PExpr___is_implicit_self(val_t  self) {
  struct trace_t trace = {NULL, "typing::PExpr::is_implicit_self (src/syntax//typing.nit:286,2--287:44)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___PExpr___is_self(val_t  self) {
  struct trace_t trace = {NULL, "typing::PExpr::is_self (src/syntax//typing.nit:289,2--290:35)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___PExpr___is_variable(val_t  self) {
  struct trace_t trace = {NULL, "typing::PExpr::is_variable (src/syntax//typing.nit:292,2--293:39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___PExpr___if_true_variable_ctx(val_t  self) {
  struct trace_t trace = {NULL, "typing::PExpr::if_true_variable_ctx (src/syntax//typing.nit:295,2--296:61)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___PExpr____if_true_variable_ctx( self) /*PExpr::_if_true_variable_ctx*/;
}
val_t typing___AVardeclExpr___variable(val_t  self) {
  struct trace_t trace = {NULL, "typing::AVardeclExpr::variable (src/syntax//typing.nit:300,2--301:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AVardeclExpr____variable( self) /*AVardeclExpr::_variable*/;
}
void typing___AVardeclExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AVardeclExpr::after_typing (src/syntax//typing.nit:303,2--315:26)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AVardeclExpr___n_id_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_id))( self) /*AVardeclExpr::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TId::to_symbol*/;
  variable3 = NEW_syntax_base___Variable___init(variable2,  self); /*new Variable*/
  variable2 = variable3;
  variable1 = variable2;
  ATTR_typing___AVardeclExpr____variable( self) /*AVardeclExpr::_variable*/ =  variable1 /*va*/;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  ((typing___VariableContext___add_t)CALL(variable2,COLOR_typing___VariableContext___add))(variable2,  variable1 /*va*/) /*VariableContext::add*/;
  variable2 = ((parser_nodes___AVardeclExpr___n_type_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_type))( self) /*AVardeclExpr::n_type*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AVardeclExpr___n_type_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_type))( self) /*AVardeclExpr::n_type*/;
    variable2 = ((typing___PType___stype_t)CALL(variable2,COLOR_typing___PType___stype))(variable2) /*PType::stype*/;
    ((syntax_base___Variable___stype__eq_t)CALL( variable1 /*va*/,COLOR_syntax_base___Variable___stype__eq))( variable1 /*va*/, variable2) /*Variable::stype=*/;
    variable2 = ((parser_nodes___AVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_expr))( self) /*AVardeclExpr::n_expr*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((parser_nodes___AVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_expr))( self) /*AVardeclExpr::n_expr*/;
      variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
      variable3 = ((syntax_base___Variable___stype_t)CALL( variable1 /*va*/,COLOR_syntax_base___Variable___stype))( variable1 /*va*/) /*Variable::stype*/;
      ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2, variable3) /*TypingVisitor::check_conform*/;
    }
  } else { /*if*/
    variable2 = ((parser_nodes___AVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_expr))( self) /*AVardeclExpr::n_expr*/;
    variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
    ((syntax_base___Variable___stype__eq_t)CALL( variable1 /*va*/,COLOR_syntax_base___Variable___stype__eq))( variable1 /*va*/, variable2) /*Variable::stype=*/;
  }
  tracehead = trace.prev;
  return;
}
void typing___ABlockExpr___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ABlockExpr::accept_typing (src/syntax//typing.nit:321,2--328:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = variable2;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable2 = ((typing___VariableContext___sub_t)CALL(variable2,COLOR_typing___VariableContext___sub))(variable2) /*VariableContext::sub*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable2) /*TypingVisitor::variable_ctx=*/;
  ((typing___ABlockExpr___accept_typing_t)CALL( self,COLOR_SUPER_typing___ABlockExpr___accept_typing))( self,  param0) /*super ABlockExpr::accept_typing*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/,  variable1 /*old_var_ctx*/) /*TypingVisitor::variable_ctx=*/;
  tracehead = trace.prev;
  return;
}
void typing___AReturnExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AReturnExpr::after_typing (src/syntax//typing.nit:333,2--341:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMSrcLocalProperty::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("Error: Return without value in a function."), TAG_Int(42)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
  } else { /*if*/
    variable2 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
    variable3 = variable2;
    if (UNTAG_Bool(variable3)) { /* and */
      variable3 = TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
    }
    variable2 = variable3;
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = NEW_string___String___with_native(BOX_NativeString("Error: Return with value in a procedure."), TAG_Int(40)); /*new String*/
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
    } else { /*if*/
      variable2 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
      variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
      variable3 = variable2;
      if (UNTAG_Bool(variable3)) { /* and */
        variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
      }
      variable2 = variable3;
      if (UNTAG_Bool(variable2)) { /*if*/
        variable2 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
        variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
        ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2,  variable1 /*t*/) /*TypingVisitor::check_conform*/;
      }
    }
  }
  tracehead = trace.prev;
  return;
}
void typing___AIfExpr___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AIfExpr::accept_typing (src/syntax//typing.nit:347,2--363:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  variable2 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2, variable3) /*TypingVisitor::check_conform*/;
  variable2 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
  variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
    variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
    ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable2) /*TypingVisitor::variable_ctx=*/;
  }
  variable2 = ((parser_nodes___AIfExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_then))( self) /*AIfExpr::n_then*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/,  variable1 /*old_var_ctx*/) /*TypingVisitor::variable_ctx=*/;
  variable2 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
    ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
    ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/,  variable1 /*old_var_ctx*/) /*TypingVisitor::variable_ctx=*/;
  }
  tracehead = trace.prev;
  return;
}
void typing___AWhileExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AWhileExpr::after_typing (src/syntax//typing.nit:369,2--371:49)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AWhileExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AWhileExpr___n_expr))( self) /*AWhileExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable1, variable2) /*TypingVisitor::check_conform*/;
  tracehead = trace.prev;
  return;
}
void typing___AForExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AForExpr::after_typing (src/syntax//typing.nit:376,2--381:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*varctx*/==NIT_NULL) || VAL_ISA( variable1 /*varctx*/, COLOR_SubVariableContext, ID_SubVariableContext)) /*cast SubVariableContext*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:380,3--38\n"); nit_exit(1);}
  variable2 = ((typing___SubVariableContext___prev_t)CALL( variable1 /*varctx*/,COLOR_typing___SubVariableContext___prev))( variable1 /*varctx*/) /*SubVariableContext::prev*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable2) /*TypingVisitor::variable_ctx=*/;
  tracehead = trace.prev;
  return;
}
val_t typing___AForVardeclExpr___variable(val_t  self) {
  struct trace_t trace = {NULL, "typing::AForVardeclExpr::variable (src/syntax//typing.nit:386,2--387:34)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AForVardeclExpr____variable( self) /*AForVardeclExpr::_variable*/;
}
void typing___AForVardeclExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AForVardeclExpr::after_typing (src/syntax//typing.nit:389,2--413:20)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  static val_t once_value_variable4_36; static int once_bool_variable4_36;
  val_t variable5;
  val_t variable6;
  static val_t once_value_variable6_37; static int once_bool_variable6_37;
    val_t variable7;
    val_t variable8;
    val_t variable9;
    val_t variable10;
    val_t variable11;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = ((typing___VariableContext___sub_t)CALL(variable1,COLOR_typing___VariableContext___sub))(variable1) /*VariableContext::sub*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable1) /*TypingVisitor::variable_ctx=*/;
  variable2 = ((parser_nodes___AForVardeclExpr___n_id_t)CALL( self,COLOR_parser_nodes___AForVardeclExpr___n_id))( self) /*AForVardeclExpr::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TId::to_symbol*/;
  variable3 = NEW_syntax_base___Variable___init(variable2,  self); /*new Variable*/
  variable2 = variable3;
  variable1 = variable2;
  ATTR_typing___AForVardeclExpr____variable( self) /*AForVardeclExpr::_variable*/ =  variable1 /*variable*/;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  ((typing___VariableContext___add_t)CALL(variable2,COLOR_typing___VariableContext___add))(variable2,  variable1 /*variable*/) /*VariableContext::add*/;
  variable3 = ((parser_nodes___AForVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AForVardeclExpr___n_expr))( self) /*AForVardeclExpr::n_expr*/;
  variable3 = ((typing___PExpr___stype_t)CALL(variable3,COLOR_syntax_base___PExpr___stype))(variable3) /*PExpr::stype*/;
  variable2 = variable3;
  variable3 = ((syntax_base___AbsSyntaxVisitor___type_collection_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_collection))( variable0 /*v*/) /*TypingVisitor::type_collection*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self,  variable2 /*expr_type*/, variable3) /*TypingVisitor::check_conform*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
    goto return_label35;
  }
  if (once_bool_variable4_36) variable4 = once_value_variable4_36;
  else {
    variable4 = NEW_string___String___with_native(BOX_NativeString("iterator"), TAG_Int(8)); /*new String*/
    variable4 = ((symbol___String___to_symbol_t)CALL(variable4,COLOR_symbol___String___to_symbol))(variable4) /*String::to_symbol*/;
    once_value_variable4_36 = variable4;
    once_bool_variable4_36 = true;
  }
  variable4 = ((static_type___MMType___select_method_t)CALL( variable2 /*expr_type*/,COLOR_static_type___MMType___select_method))( variable2 /*expr_type*/, variable4) /*MMType::select_method*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*prop*/ ==  NIT_NULL /*null*/) || (( variable3 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))( variable3 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("Error: Collection MUST have an iterate method"), TAG_Int(45)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
    goto return_label35;
  }
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( variable3 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable3 /*prop*/) /*MMMethod::signature*/;
  variable5 = ((static_type___MMSignature___return_type_t)CALL(variable5,COLOR_static_type___MMSignature___return_type))(variable5) /*MMSignature::return_type*/;
  variable4 = variable5;
  if (once_bool_variable6_37) variable6 = once_value_variable6_37;
  else {
    variable6 = NEW_string___String___with_native(BOX_NativeString("item"), TAG_Int(4)); /*new String*/
    variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
    once_value_variable6_37 = variable6;
    once_bool_variable6_37 = true;
  }
  variable6 = ((static_type___MMType___select_method_t)CALL( variable4 /*iter_type*/,COLOR_static_type___MMType___select_method))( variable4 /*iter_type*/, variable6) /*MMType::select_method*/;
  variable5 = variable6;
  variable6 = TAG_Bool(( variable5 /*prop2*/ ==  NIT_NULL /*null*/) || (( variable5 /*prop2*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*prop2*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*prop2*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*prop2*/,COLOR_kernel___Object_____eqeq))( variable5 /*prop2*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("Error: "), TAG_Int(7)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 =  variable4 /*iter_type*/;
    variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
    variable10 = NEW_string___String___with_native(BOX_NativeString(" MUST have an item method"), TAG_Int(25)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*TypingVisitor::error*/;
    goto return_label35;
  }
  variable7 = ((genericity___MMLocalProperty___signature_t)CALL( variable5 /*prop2*/,COLOR_static_type___MMLocalProperty___signature))( variable5 /*prop2*/) /*MMMethod::signature*/;
  variable7 = ((static_type___MMSignature___return_type_t)CALL(variable7,COLOR_static_type___MMSignature___return_type))(variable7) /*MMSignature::return_type*/;
  variable6 = variable7;
  variable7 = ((parser_nodes___AForVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AForVardeclExpr___n_expr))( self) /*AForVardeclExpr::n_expr*/;
  variable7 = ((typing___PExpr___is_self_t)CALL(variable7,COLOR_typing___PExpr___is_self))(variable7) /*PExpr::is_self*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable7)))) { /*if*/
    variable7 = ((static_type___MMType___not_for_self_t)CALL( variable6 /*t*/,COLOR_static_type___MMType___not_for_self))( variable6 /*t*/) /*MMType::not_for_self*/;
    variable6 = variable7 /*t=*/;
  }
  ((syntax_base___Variable___stype__eq_t)CALL( variable1 /*variable*/,COLOR_syntax_base___Variable___stype__eq))( variable1 /*variable*/,  variable6 /*t*/) /*Variable::stype=*/;
  return_label35: while(false);
  tracehead = trace.prev;
  return;
}
void typing___AAssertExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAssertExpr::after_typing (src/syntax//typing.nit:418,2--421:90)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AAssertExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_expr))( self) /*AAssertExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable1, variable2) /*TypingVisitor::check_conform*/;
  variable1 = ((parser_nodes___AAssertExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_expr))( self) /*AAssertExpr::n_expr*/;
  variable1 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable1,COLOR_typing___PExpr___if_true_variable_ctx))(variable1) /*PExpr::if_true_variable_ctx*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((parser_nodes___AAssertExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_expr))( self) /*AAssertExpr::n_expr*/;
    variable1 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable1,COLOR_typing___PExpr___if_true_variable_ctx))(variable1) /*PExpr::if_true_variable_ctx*/;
    ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable1) /*TypingVisitor::variable_ctx=*/;
  }
  tracehead = trace.prev;
  return;
}
val_t typing___AVarFormExpr___variable(val_t  self) {
  struct trace_t trace = {NULL, "typing::AVarFormExpr::variable (src/syntax//typing.nit:426,2--427:50)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AVarFormExpr____variable( self) /*AVarFormExpr::_variable*/;
}
void typing___AVarFormExpr___variable__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AVarFormExpr::variable= (src/syntax//typing.nit:426,2--427:50)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_typing___AVarFormExpr____variable( self) /*AVarFormExpr::_variable*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t typing___AVarExpr___is_variable(val_t  self) {
  struct trace_t trace = {NULL, "typing::AVarExpr::is_variable (src/syntax//typing.nit:431,2--38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable0;
}
void typing___AVarExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AVarExpr::after_typing (src/syntax//typing.nit:433,2--435:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable2 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarExpr::variable*/;
  variable1 = ((typing___VariableContext___stype_t)CALL(variable1,COLOR_typing___VariableContext___stype))(variable1, variable2) /*VariableContext::stype*/;
  ATTR_typing___PExpr____stype( self) /*AVarExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AVarAssignExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AVarAssignExpr::after_typing (src/syntax//typing.nit:440,2--443:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable3 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarAssignExpr::variable*/;
  variable2 = ((typing___VariableContext___stype_t)CALL(variable2,COLOR_typing___VariableContext___stype))(variable2, variable3) /*VariableContext::stype*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*AVarAssignExpr::n_value*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2,  variable1 /*t*/) /*TypingVisitor::check_conform*/;
  tracehead = trace.prev;
  return;
}
void typing___AReassignFormExpr___do_lvalue_typing(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "typing::AReassignFormExpr::do_lvalue_typing (src/syntax//typing.nit:448,2--464:68)"};
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
    val_t variable11;
    val_t variable12;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(( variable1 /*type_lvalue*/ ==  NIT_NULL /*null*/) || (( variable1 /*type_lvalue*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*type_lvalue*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*type_lvalue*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*type_lvalue*/,COLOR_kernel___Object_____eqeq))( variable1 /*type_lvalue*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label42;
  }
  variable3 = ((parser_nodes___AReassignFormExpr___n_assign_op_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_assign_op))( self) /*AReassignFormExpr::n_assign_op*/;
  variable3 = ((typing___PAssignOp___method_name_t)CALL(variable3,COLOR_typing___PAssignOp___method_name))(variable3) /*PAssignOp::method_name*/;
  variable2 = variable3;
  variable4 = ((static_type___MMType___select_method_t)CALL( variable1 /*type_lvalue*/,COLOR_static_type___MMType___select_method))( variable1 /*type_lvalue*/,  variable2 /*name*/) /*MMType::select_method*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*prop*/ ==  NIT_NULL /*null*/) || (( variable3 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))( variable3 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Error: Method '"), TAG_Int(15)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable2 /*name*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString("' doesn't exists in "), TAG_Int(20)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    variable10 =  variable1 /*type_lvalue*/;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
    goto return_label42;
  }
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable3 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable3 /*prop*/) /*MMMethod::global*/;
  variable5 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
  ((syntax_base___MMGlobalProperty___check_visibility_t)CALL(variable4,COLOR_syntax_base___MMGlobalProperty___check_visibility))(variable4,  variable0 /*v*/,  self, variable5,  TAG_Bool(false)) /*MMGlobalProperty::check_visibility*/;
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( variable3 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable3 /*prop*/) /*MMMethod::signature*/;
  variable4 = variable5;
  ATTR_typing___AReassignFormExpr____assign_method( self) /*AReassignFormExpr::_assign_method*/ =  variable3 /*prop*/;
  variable5 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*AReassignFormExpr::n_value*/;
  variable5 = ((typing___PExpr___stype_t)CALL(variable5,COLOR_syntax_base___PExpr___stype))(variable5) /*PExpr::stype*/;
  variable6 = ((static_type___MMSignature_____bra_t)CALL( variable4 /*psig*/,COLOR_static_type___MMSignature_____bra))( variable4 /*psig*/,  TAG_Int(0)) /*MMSignature::[]*/;
  variable6 = ((static_type___MMType___not_for_self_t)CALL(variable6,COLOR_static_type___MMType___not_for_self))(variable6) /*MMType::not_for_self*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable5, variable6) /*TypingVisitor::check_conform*/;
  variable5 = ((static_type___MMSignature___return_type_t)CALL( variable4 /*psig*/,COLOR_static_type___MMSignature___return_type))( variable4 /*psig*/) /*MMSignature::return_type*/;
  variable5 = ((static_type___MMType___not_for_self_t)CALL(variable5,COLOR_static_type___MMType___not_for_self))(variable5) /*MMType::not_for_self*/;
  variable6 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*AReassignFormExpr::n_value*/;
  variable6 = ((typing___PExpr___stype_t)CALL(variable6,COLOR_syntax_base___PExpr___stype))(variable6) /*PExpr::stype*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable5, variable6) /*TypingVisitor::check_conform*/;
  return_label42: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___AReassignFormExpr___assign_method(val_t  self) {
  struct trace_t trace = {NULL, "typing::AReassignFormExpr::assign_method (src/syntax//typing.nit:467,2--468:39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AReassignFormExpr____assign_method( self) /*AReassignFormExpr::_assign_method*/;
}
val_t typing___PAssignOp___method_name(val_t  self) {
  struct trace_t trace = {NULL, "typing::PAssignOp::method_name (src/syntax//typing.nit:472,2--25)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method method_name called (src/syntax//typing.nit:472,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t typing___APlusAssignOp___method_name(val_t  self) {
  struct trace_t trace = {NULL, "typing::APlusAssignOp::method_name (src/syntax//typing.nit:475,2--52)"};
  val_t variable0;
  static val_t once_value_variable0_44; static int once_bool_variable0_44;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_44) variable0 = once_value_variable0_44;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("+"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_44 = variable0;
    once_bool_variable0_44 = true;
  }
  goto return_label43;
  return_label43: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AMinusAssignOp___method_name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AMinusAssignOp::method_name (src/syntax//typing.nit:478,2--52)"};
  val_t variable0;
  static val_t once_value_variable0_46; static int once_bool_variable0_46;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_46) variable0 = once_value_variable0_46;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_46 = variable0;
    once_bool_variable0_46 = true;
  }
  goto return_label45;
  return_label45: while(false);
  tracehead = trace.prev;
  return variable0;
}
void typing___AVarReassignExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AVarReassignExpr::after_typing (src/syntax//typing.nit:482,2--485:23)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable3 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarReassignExpr::variable*/;
  variable2 = ((typing___VariableContext___stype_t)CALL(variable2,COLOR_typing___VariableContext___stype))(variable2, variable3) /*VariableContext::stype*/;
  variable1 = variable2;
  ((typing___AReassignFormExpr___do_lvalue_typing_t)CALL( self,COLOR_typing___AReassignFormExpr___do_lvalue_typing))( self,  variable0 /*v*/,  variable1 /*t*/) /*AVarReassignExpr::do_lvalue_typing*/;
  tracehead = trace.prev;
  return;
}
void typing___ASelfExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASelfExpr::after_typing (src/syntax//typing.nit:490,2--493:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((typing___TypingVisitor___self_type_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___self_type))( variable0 /*v*/) /*TypingVisitor::self_type*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:492,3--28\n"); nit_exit(1);}
  variable1 = ((typing___TypingVisitor___self_type_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___self_type))( variable0 /*v*/) /*TypingVisitor::self_type*/;
  ATTR_typing___PExpr____stype( self) /*ASelfExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
val_t typing___ASelfExpr___is_self(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASelfExpr::is_self (src/syntax//typing.nit:496,9--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label49;
  return_label49: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AImplicitSelfExpr___is_implicit_self(val_t  self) {
  struct trace_t trace = {NULL, "typing::AImplicitSelfExpr::is_implicit_self (src/syntax//typing.nit:500,9--50)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label50;
  return_label50: while(false);
  tracehead = trace.prev;
  return variable0;
}
void typing___AIfexprExpr___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AIfexprExpr::accept_typing (src/syntax//typing.nit:504,2--525:12)"};
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
      val_t variable11;
      val_t variable12;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AIfexprExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_expr))( self) /*AIfexprExpr::n_expr*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  variable2 = ((parser_nodes___AIfexprExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_expr))( self) /*AIfexprExpr::n_expr*/;
  variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AIfexprExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_expr))( self) /*AIfexprExpr::n_expr*/;
    variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
    ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable2) /*TypingVisitor::variable_ctx=*/;
  }
  variable2 = ((parser_nodes___AIfexprExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_then))( self) /*AIfexprExpr::n_then*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/,  variable1 /*old_var_ctx*/) /*TypingVisitor::variable_ctx=*/;
  variable2 = ((parser_nodes___AIfexprExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_else))( self) /*AIfexprExpr::n_else*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  variable2 = ((parser_nodes___AIfexprExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_expr))( self) /*AIfexprExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2, variable3) /*TypingVisitor::check_conform*/;
  variable3 = ((parser_nodes___AIfexprExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_then))( self) /*AIfexprExpr::n_then*/;
  variable3 = ((typing___PExpr___stype_t)CALL(variable3,COLOR_syntax_base___PExpr___stype))(variable3) /*PExpr::stype*/;
  variable2 = variable3;
  variable4 = ((parser_nodes___AIfexprExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_else))( self) /*AIfexprExpr::n_else*/;
  variable4 = ((typing___PExpr___stype_t)CALL(variable4,COLOR_syntax_base___PExpr___stype))(variable4) /*PExpr::stype*/;
  variable3 = variable4;
  variable4 = ((static_type___MMType_____l_t)CALL( variable2 /*t*/,COLOR_static_type___MMType_____l))( variable2 /*t*/,  variable3 /*te*/) /*MMType::<*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable2 =  variable3 /*te*/ /*t=*/;
  } else { /*if*/
    variable4 = ((static_type___MMType_____l_t)CALL( variable3 /*te*/,COLOR_static_type___MMType_____l))( variable3 /*te*/,  variable2 /*t*/) /*MMType::<*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Type error: "), TAG_Int(12)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable3 /*te*/;
      variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(" is not a subtype of "), TAG_Int(21)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      variable10 =  variable2 /*t*/;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
      goto return_label51;
    }
  }
  ATTR_typing___PExpr____stype( self) /*AIfexprExpr::_stype*/ =  variable2 /*t*/;
  return_label51: while(false);
  tracehead = trace.prev;
  return;
}
void typing___ABoolExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ABoolExpr::after_typing (src/syntax//typing.nit:530,2--532:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ATTR_typing___PExpr____stype( self) /*ABoolExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AOrExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AOrExpr::after_typing (src/syntax//typing.nit:537,2--541:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AOrExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AOrExpr___n_expr))( self) /*AOrExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable1, variable2) /*TypingVisitor::check_conform*/;
  variable1 = ((parser_nodes___AOrExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AOrExpr___n_expr2))( self) /*AOrExpr::n_expr2*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable1, variable2) /*TypingVisitor::check_conform*/;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ATTR_typing___PExpr____stype( self) /*AOrExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AAndExpr___accept_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAndExpr::accept_typing (src/syntax//typing.nit:546,2--564:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AAndExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr))( self) /*AAndExpr::n_expr*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  variable2 = ((parser_nodes___AAndExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr))( self) /*AAndExpr::n_expr*/;
  variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AAndExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr))( self) /*AAndExpr::n_expr*/;
    variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
    ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/, variable2) /*TypingVisitor::variable_ctx=*/;
  }
  variable2 = ((parser_nodes___AAndExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr2))( self) /*AAndExpr::n_expr2*/;
  ((typing___TypingVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*TypingVisitor::visit*/;
  variable2 = ((parser_nodes___AAndExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr2))( self) /*AAndExpr::n_expr2*/;
  variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*VariableContext::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AAndExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr2))( self) /*AAndExpr::n_expr2*/;
    variable2 = ((typing___PExpr___if_true_variable_ctx_t)CALL(variable2,COLOR_typing___PExpr___if_true_variable_ctx))(variable2) /*PExpr::if_true_variable_ctx*/;
    ATTR_typing___PExpr____if_true_variable_ctx( self) /*AAndExpr::_if_true_variable_ctx*/ = variable2;
  } else { /*if*/
    variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
    ATTR_typing___PExpr____if_true_variable_ctx( self) /*AAndExpr::_if_true_variable_ctx*/ = variable2;
  }
  ((typing___TypingVisitor___variable_ctx__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx__eq))( variable0 /*v*/,  variable1 /*old_var_ctx*/) /*TypingVisitor::variable_ctx=*/;
  variable2 = ((parser_nodes___AAndExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr))( self) /*AAndExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2, variable3) /*TypingVisitor::check_conform*/;
  variable2 = ((parser_nodes___AAndExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr2))( self) /*AAndExpr::n_expr2*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2, variable3) /*TypingVisitor::check_conform*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ATTR_typing___PExpr____stype( self) /*AAndExpr::_stype*/ = variable2;
  tracehead = trace.prev;
  return;
}
void typing___ANotExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ANotExpr::after_typing (src/syntax//typing.nit:569,2--572:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ANotExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ANotExpr___n_expr))( self) /*ANotExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable1, variable2) /*TypingVisitor::check_conform*/;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ATTR_typing___PExpr____stype( self) /*ANotExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AIntExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AIntExpr::after_typing (src/syntax//typing.nit:577,2--579:21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_int_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_int))( variable0 /*v*/) /*TypingVisitor::type_int*/;
  ATTR_typing___PExpr____stype( self) /*AIntExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AFloatExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AFloatExpr::after_typing (src/syntax//typing.nit:585,2--587:23)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_float_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_float))( variable0 /*v*/) /*TypingVisitor::type_float*/;
  ATTR_typing___PExpr____stype( self) /*AFloatExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___ACharExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACharExpr::after_typing (src/syntax//typing.nit:592,2--594:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_char_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_char))( variable0 /*v*/) /*TypingVisitor::type_char*/;
  ATTR_typing___PExpr____stype( self) /*ACharExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AStringFormExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AStringFormExpr::after_typing (src/syntax//typing.nit:599,2--601:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_string_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_string))( variable0 /*v*/) /*TypingVisitor::type_string*/;
  ATTR_typing___PExpr____stype( self) /*AStringFormExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___ASuperstringExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASuperstringExpr::after_typing (src/syntax//typing.nit:606,2--608:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_string_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_string))( variable0 /*v*/) /*TypingVisitor::type_string*/;
  ATTR_typing___PExpr____stype( self) /*ASuperstringExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___ANullExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ANullExpr::after_typing (src/syntax//typing.nit:613,2--615:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_none_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_none))( variable0 /*v*/) /*TypingVisitor::type_none*/;
  ATTR_typing___PExpr____stype( self) /*ANullExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AArrayExpr___stype__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AArrayExpr::stype= (src/syntax//typing.nit:620,2--45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ATTR_typing___PExpr____stype( self) /*AArrayExpr::_stype*/ =  variable0 /*t*/;
  tracehead = trace.prev;
  return;
}
void typing___AArrayExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AArrayExpr::after_typing (src/syntax//typing.nit:622,2--634:29)"};
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
  variable1 = NIT_NULL /*decl variable stype*/;
  variable2 = ((parser_nodes___AArrayExpr___n_exprs_t)CALL( self,COLOR_parser_nodes___AArrayExpr___n_exprs))( self) /*AArrayExpr::n_exprs*/;
  variable2 = ((list___List___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*List::iterator*/;
  while (true) { /*for*/
    variable3 = ((list___ListIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((list___ListIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ListIterator::item*/;
    variable5 = ((typing___PExpr___stype_t)CALL( variable3 /*n*/,COLOR_syntax_base___PExpr___stype))( variable3 /*n*/) /*PExpr::stype*/;
    variable4 = variable5;
    variable5 = TAG_Bool(( variable1 /*stype*/ ==  NIT_NULL /*null*/) || (( variable1 /*stype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*stype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*stype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*stype*/,COLOR_kernel___Object_____eqeq))( variable1 /*stype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
    variable6 = variable5;
    if (!UNTAG_Bool(variable6)) { /* or */
      variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*ntype*/ ==  NIT_NULL /*null*/) || (( variable4 /*ntype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*ntype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*ntype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*ntype*/,COLOR_kernel___Object_____eqeq))( variable4 /*ntype*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 = ((static_type___MMType_____l_t)CALL( variable1 /*stype*/,COLOR_static_type___MMType_____l))( variable1 /*stype*/,  variable4 /*ntype*/) /*MMType::<*/;
      }
      variable6 = variable7;
    }
    variable5 = variable6;
    if (UNTAG_Bool(variable5)) { /*if*/
      variable1 =  variable4 /*ntype*/ /*stype=*/;
    }
    continue_64: while(0);
    ((list___ListIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ListIterator::next*/;
  }
  break_64: while(0);
  variable2 = ((parser_nodes___AArrayExpr___n_exprs_t)CALL( self,COLOR_parser_nodes___AArrayExpr___n_exprs))( self) /*AArrayExpr::n_exprs*/;
  variable2 = ((list___List___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*List::iterator*/;
  while (true) { /*for*/
    variable3 = ((list___ListIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((list___ListIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ListIterator::item*/;
    variable4 = ((typing___PExpr___stype_t)CALL( variable3 /*n*/,COLOR_syntax_base___PExpr___stype))( variable3 /*n*/) /*PExpr::stype*/;
    ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable4,  variable1 /*stype*/) /*TypingVisitor::check_conform*/;
    continue_65: while(0);
    ((list___ListIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ListIterator::next*/;
  }
  break_65: while(0);
  variable2 = ((syntax_base___AbsSyntaxVisitor___type_array_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_array))( variable0 /*v*/,  variable1 /*stype*/) /*TypingVisitor::type_array*/;
  ATTR_typing___PExpr____stype( self) /*AArrayExpr::_stype*/ = variable2;
  tracehead = trace.prev;
  return;
}
void typing___ARangeExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ARangeExpr::after_typing (src/syntax//typing.nit:639,2--654:29)"};
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
      val_t variable11;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___ARangeExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ARangeExpr___n_expr))( self) /*ARangeExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___ARangeExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___ARangeExpr___n_expr2))( self) /*ARangeExpr::n_expr2*/;
  variable3 = ((typing___PExpr___stype_t)CALL(variable3,COLOR_syntax_base___PExpr___stype))(variable3) /*PExpr::stype*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable1 /*ntype*/ ==  NIT_NULL /*null*/) || (( variable1 /*ntype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*ntype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*ntype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*ntype*/,COLOR_kernel___Object_____eqeq))( variable1 /*ntype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  variable4 = variable3;
  if (!UNTAG_Bool(variable4)) { /* or */
    variable4 = TAG_Bool(( variable1 /*ntype*/ ==  NIT_NULL /*null*/) || (( variable1 /*ntype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*ntype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*ntype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*ntype*/,COLOR_kernel___Object_____eqeq))( variable1 /*ntype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  }
  variable3 = variable4;
  if (UNTAG_Bool(variable3)) { /*if*/
    goto return_label66;
  }
  variable3 = ((static_type___MMType_____l_t)CALL( variable1 /*ntype*/,COLOR_static_type___MMType_____l))( variable1 /*ntype*/,  variable2 /*ntype2*/) /*MMType::<*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  variable2 /*ntype2*/ /*ntype=*/;
  } else { /*if*/
    variable3 = ((static_type___MMType_____l_t)CALL( variable2 /*ntype2*/,COLOR_static_type___MMType_____l))( variable2 /*ntype2*/,  variable1 /*ntype*/) /*MMType::<*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
      variable3 = NEW_string___String___init(); /*new String*/
      variable4 = NEW_string___String___with_native(BOX_NativeString("Type error: "), TAG_Int(12)); /*new String*/
      variable5 = variable4;
      ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
      variable6 =  variable1 /*ntype*/;
      variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
      ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString(" incompatible with "), TAG_Int(19)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
      variable9 =  variable2 /*ntype2*/;
      variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
      ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable3) /*TypingVisitor::error*/;
      goto return_label66;
    }
  }
  variable4 = ((syntax_base___AbsSyntaxVisitor___type_discrete_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_discrete))( variable0 /*v*/) /*TypingVisitor::type_discrete*/;
  variable3 = variable4;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self,  variable1 /*ntype*/,  variable3 /*dtype*/) /*TypingVisitor::check_conform*/;
  variable4 = ((syntax_base___AbsSyntaxVisitor___type_range_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_range))( variable0 /*v*/,  variable1 /*ntype*/) /*TypingVisitor::type_range*/;
  ATTR_typing___PExpr____stype( self) /*ARangeExpr::_stype*/ = variable4;
  return_label66: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___ASuperExpr___init_in_superclass(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASuperExpr::init_in_superclass (src/syntax//typing.nit:660,2--661:44)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___ASuperExpr____init_in_superclass( self) /*ASuperExpr::_init_in_superclass*/;
}
void typing___ASuperExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASuperExpr::after_typing (src/syntax//typing.nit:662,2--713:11)"};
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
          val_t variable11;
          val_t variable12;
          val_t variable13;
          val_t variable14;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
  variable2 = ((abstractmetamodel___MMConcreteProperty___cprhe_t)CALL(variable2,COLOR_abstractmetamodel___MMConcreteProperty___cprhe))(variable2) /*MMSrcLocalProperty::cprhe*/;
  variable2 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable2) /*PartialOrderElement::direct_greaters*/;
  variable1 = variable2;
  variable2 = ((array___AbstractArray___is_empty_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___Collection___is_empty))( variable1 /*precs*/) /*Array::is_empty*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
    variable2 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    ((abstractmetamodel___MMConcreteProperty___need_super__eq_t)CALL(variable2,COLOR_abstractmetamodel___MMConcreteProperty___need_super__eq))(variable2,  TAG_Bool(true)) /*MMSrcLocalProperty::need_super=*/;
  } else { /*if*/
    variable2 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalProperty___global))(variable2) /*MMSrcLocalProperty::global*/;
    variable2 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable2) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool(variable2)) { /*if*/
      variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*TypingVisitor::local_class*/;
      variable4 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
      variable4 = ((abstractmetamodel___MMLocalProperty___name_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___name))(variable4) /*MMSrcLocalProperty::name*/;
      variable3 = ((abstractmetamodel___MMLocalClass___super_methods_named_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___super_methods_named))(variable3, variable4) /*MMSrcLocalClass::super_methods_named*/;
      variable2 = variable3;
      variable3 = ((array___AbstractArray___iterator_t)CALL( variable2 /*base_precs*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*base_precs*/) /*Array::iterator*/;
      while (true) { /*for*/
        variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable4)) break; /*for*/
        variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
        variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable4 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable4 /*p*/) /*MMLocalProperty::global*/;
        variable5 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable5,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable5) /*MMGlobalProperty::is_init*/;
        if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
          variable5 = NEW_string___String___init(); /*new String*/
          variable6 = NEW_string___String___with_native(BOX_NativeString("Error: "), TAG_Int(7)); /*new String*/
          variable7 = variable6;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
          variable8 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable4 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable4 /*p*/) /*MMLocalProperty::local_class*/;
          variable9 = variable8;
          variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
          variable10 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
          variable11 = variable10;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
          variable12 =  variable4 /*p*/;
          variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable12) /*String::append*/;
          variable13 = NEW_string___String___with_native(BOX_NativeString(" is not a constructor."), TAG_Int(22)); /*new String*/
          variable14 = variable13;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable14) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*TypingVisitor::error*/;
        } else { /*if*/
          variable5 = ((typing___TypingVisitor___self_type_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___self_type))( variable0 /*v*/) /*TypingVisitor::self_type*/;
          variable6 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable4 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable4 /*p*/) /*MMLocalProperty::global*/;
          variable5 = ((static_type___MMType___select_property_t)CALL(variable5,COLOR_static_type___MMType___select_property))(variable5, variable6) /*MMType::select_property*/;
          ((array___AbstractArray___add_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*precs*/, variable5) /*Array::add*/;
        }
        continue_68: while(0);
        ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
      }
      break_68: while(0);
      variable3 = ((array___AbstractArray___is_empty_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___Collection___is_empty))( variable1 /*precs*/) /*Array::is_empty*/;
      if (UNTAG_Bool(variable3)) { /*if*/
        variable3 = NEW_string___String___init(); /*new String*/
        variable4 = NEW_string___String___with_native(BOX_NativeString("Error: No contructor named "), TAG_Int(27)); /*new String*/
        variable5 = variable4;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
        variable6 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
        variable6 = ((abstractmetamodel___MMLocalProperty___name_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalProperty___name))(variable6) /*MMSrcLocalProperty::name*/;
        variable7 = variable6;
        variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
        variable8 = NEW_string___String___with_native(BOX_NativeString(" in superclasses."), TAG_Int(17)); /*new String*/
        variable9 = variable8;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable3) /*TypingVisitor::error*/;
        goto return_label67;
      } else { /*if*/
        variable3 = ((array___AbstractArray___length_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___Collection___length))( variable1 /*precs*/) /*Array::length*/;
        variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(1)));
        if (UNTAG_Bool(variable3)) { /*if*/
          variable3 = NEW_string___String___init(); /*new String*/
          variable4 = NEW_string___String___with_native(BOX_NativeString("Error: Conflicting contructors named "), TAG_Int(37)); /*new String*/
          variable5 = variable4;
          ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
          variable6 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
          variable6 = ((abstractmetamodel___MMLocalProperty___name_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalProperty___name))(variable6) /*MMSrcLocalProperty::name*/;
          variable7 = variable6;
          variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
          ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
          variable8 = NEW_string___String___with_native(BOX_NativeString(" in superclasses: "), TAG_Int(18)); /*new String*/
          variable9 = variable8;
          ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
          variable10 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
          variable10 = ((string___Collection___join_t)CALL( variable1 /*precs*/,COLOR_string___Collection___join))( variable1 /*precs*/, variable10) /*Array::join*/;
          variable11 = variable10;
          ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
          variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
          variable13 = variable12;
          ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable3) /*TypingVisitor::error*/;
          goto return_label67;
        }
      }
      variable4 = ((abstract_collection___IndexedCollection___first_t)CALL( variable2 /*base_precs*/,COLOR_abstract_collection___Collection___first))( variable2 /*base_precs*/) /*Array::first*/;
      variable3 = variable4;
      variable4 = TAG_Bool(( variable3 /*p*/==NIT_NULL) || VAL_ISA( variable3 /*p*/, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
      if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:684,4--24\n"); nit_exit(1);}
      ATTR_typing___ASuperExpr____init_in_superclass( self) /*ASuperExpr::_init_in_superclass*/ =  variable3 /*p*/;
      ((typing___ASuperInitCall___register_super_init_call_t)CALL( self,COLOR_typing___ASuperInitCall___register_super_init_call))( self,  variable0 /*v*/,  variable3 /*p*/) /*ASuperExpr::register_super_init_call*/;
      variable4 = ((parser_nodes___ASuperExpr___n_args_t)CALL( self,COLOR_parser_nodes___ASuperExpr___n_args))( self) /*ASuperExpr::n_args*/;
      variable4 = ((list___List___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*List::length*/;
      variable4 = TAG_Bool(UNTAG_Int(variable4)>UNTAG_Int( TAG_Int(0)));
      if (UNTAG_Bool(variable4)) { /*if*/
        variable4 = ((parser_nodes___ASuperExpr___n_args_t)CALL( self,COLOR_parser_nodes___ASuperExpr___n_args))( self) /*ASuperExpr::n_args*/;
        variable4 = ((array___Collection___to_a_t)CALL(variable4,COLOR_array___Collection___to_a))(variable4) /*List::to_a*/;
        variable4 = ((typing___AAbsSendExpr___process_signature_t)CALL( self,COLOR_typing___AAbsSendExpr___process_signature))( self,  variable0 /*v*/,  variable3 /*p*/,  TAG_Bool(true), variable4) /*ASuperExpr::process_signature*/;
        ATTR_typing___AAbsSendExpr____arguments( self) /*ASuperExpr::_arguments*/ = variable4;
      }
    } else { /*if*/
      variable2 = NEW_string___String___init(); /*new String*/
      variable3 = NEW_string___String___with_native(BOX_NativeString("Error: No super method to call for "), TAG_Int(35)); /*new String*/
      variable4 = variable3;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
      variable5 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
      variable6 = variable5;
      variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
      goto return_label67;
    }
  }
  variable2 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___Collection___first))( variable1 /*precs*/) /*Array::first*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMLocalProperty::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable3 = NEW_array___Array___init(); /*new Array[MMType]*/
    variable2 = variable3;
    variable3 = NIT_NULL /*decl variable stype*/;
    variable4 = ((array___AbstractArray___iterator_t)CALL( variable1 /*precs*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*precs*/) /*Array::iterator*/;
    while (true) { /*for*/
      variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
      variable6 = TAG_Bool(( variable5 /*prop*/==NIT_NULL) || VAL_ISA( variable5 /*prop*/, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
      if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:699,5--28\n"); nit_exit(1);}
      variable7 = ((genericity___MMLocalProperty___signature_t)CALL( variable5 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable5 /*prop*/) /*MMMethod::signature*/;
      variable7 = ((static_type___MMSignature___return_type_t)CALL(variable7,COLOR_static_type___MMSignature___return_type))(variable7) /*MMSignature::return_type*/;
      variable8 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
      variable7 = ((static_type___MMType___for_module_t)CALL(variable7,COLOR_static_type___MMType___for_module))(variable7, variable8) /*MMType::for_module*/;
      variable8 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
      variable8 = ((genericity___MMLocalProperty___signature_t)CALL(variable8,COLOR_static_type___MMLocalProperty___signature))(variable8) /*MMSrcLocalProperty::signature*/;
      variable8 = ((static_type___MMSignature___recv_t)CALL(variable8,COLOR_static_type___MMSignature___recv))(variable8) /*MMSignature::recv*/;
      variable7 = ((static_type___MMType___adapt_to_t)CALL(variable7,COLOR_static_type___MMType___adapt_to))(variable7, variable8) /*MMType::adapt_to*/;
      variable6 = variable7;
      ((array___AbstractArray___add_t)CALL( variable2 /*stypes*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*stypes*/,  variable6 /*t*/) /*Array::add*/;
      variable7 = TAG_Bool(( variable3 /*stype*/ ==  NIT_NULL /*null*/) || (( variable3 /*stype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*stype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*stype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*stype*/,COLOR_kernel___Object_____eqeq))( variable3 /*stype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
      variable8 = variable7;
      if (!UNTAG_Bool(variable8)) { /* or */
        variable8 = ((static_type___MMType_____l_t)CALL( variable3 /*stype*/,COLOR_static_type___MMType_____l))( variable3 /*stype*/,  variable6 /*t*/) /*MMType::<*/;
      }
      variable7 = variable8;
      if (UNTAG_Bool(variable7)) { /*if*/
        variable3 =  variable6 /*t*/ /*stype=*/;
      }
      continue_69: while(0);
      ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
    }
    break_69: while(0);
    variable4 = ((array___AbstractArray___iterator_t)CALL( variable2 /*stypes*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*stypes*/) /*Array::iterator*/;
    while (true) { /*for*/
      variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
      ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self,  variable5 /*t*/,  variable3 /*stype*/) /*TypingVisitor::check_conform*/;
      continue_70: while(0);
      ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
    }
    break_70: while(0);
    ATTR_typing___PExpr____stype( self) /*ASuperExpr::_stype*/ =  variable3 /*stype*/;
  }
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable2 /*p*/==NIT_NULL) || VAL_ISA( variable2 /*p*/, COLOR_MMSrcMethod, ID_MMSrcMethod)) /*cast MMSrcMethod*/;
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:712,3--26\n"); nit_exit(1);}
  ATTR_typing___AAbsSendExpr____prop( self) /*ASuperExpr::_prop*/ =  variable2 /*p*/;
  return_label67: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___AAttrFormExpr___prop(val_t  self) {
  struct trace_t trace = {NULL, "typing::AAttrFormExpr::prop (src/syntax//typing.nit:718,2--719:33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AAttrFormExpr____prop( self) /*AAttrFormExpr::_prop*/;
}
void typing___AAttrFormExpr___do_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAttrFormExpr::do_typing (src/syntax//typing.nit:721,2--736:14)"};
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
    val_t variable11;
    val_t variable12;
      val_t variable13;
      val_t variable14;
      val_t variable15;
      val_t variable16;
      val_t variable17;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrFormExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*type_recv*/ ==  NIT_NULL /*null*/) || (( variable1 /*type_recv*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*type_recv*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*type_recv*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*type_recv*/,COLOR_kernel___Object_____eqeq))( variable1 /*type_recv*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label71;
  }
  variable3 = ((parser_nodes___AAttrFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_id))( self) /*AAttrFormExpr::n_id*/;
  variable3 = ((syntax_base___Token___to_symbol_t)CALL(variable3,COLOR_syntax_base___Token___to_symbol))(variable3) /*TAttrid::to_symbol*/;
  variable2 = variable3;
  variable4 = ((static_type___MMType___select_attribute_t)CALL( variable1 /*type_recv*/,COLOR_static_type___MMType___select_attribute))( variable1 /*type_recv*/,  variable2 /*name*/) /*MMType::select_attribute*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*prop*/ ==  NIT_NULL /*null*/) || (( variable3 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*prop*/,COLOR_kernel___Object_____eqeq))( variable3 /*prop*/,  NIT_NULL /*null*/) /*MMAttribute::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Error: Attribute "), TAG_Int(17)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable2 /*name*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" doesn't exists in "), TAG_Int(19)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    variable10 =  variable1 /*type_recv*/;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
    goto return_label71;
  } else { /*if*/
    variable4 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
    variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable3 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable3 /*prop*/) /*MMAttribute::global*/;
    variable5 = ((abstractmetamodel___MMGlobalProperty___local_class_t)CALL(variable5,COLOR_abstractmetamodel___MMGlobalProperty___local_class))(variable5) /*MMGlobalProperty::local_class*/;
    variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___module))(variable5) /*MMLocalClass::module*/;
    variable4 = ((abstractmetamodel___MMModule___visibility_for_t)CALL(variable4,COLOR_abstractmetamodel___MMModule___visibility_for))(variable4, variable5) /*MMSrcModule::visibility_for*/;
    variable4 = TAG_Bool(UNTAG_Int(variable4)<UNTAG_Int( TAG_Int(3)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Error: Attribute "), TAG_Int(17)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable2 /*name*/;
      variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(" from "), TAG_Int(6)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      variable10 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable3 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable3 /*prop*/) /*MMAttribute::global*/;
      variable10 = ((abstractmetamodel___MMGlobalProperty___local_class_t)CALL(variable10,COLOR_abstractmetamodel___MMGlobalProperty___local_class))(variable10) /*MMGlobalProperty::local_class*/;
      variable10 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable10,COLOR_abstractmetamodel___MMLocalClass___module))(variable10) /*MMLocalClass::module*/;
      variable11 = variable10;
      variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(" is invisible in "), TAG_Int(17)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
      variable14 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
      variable15 = variable14;
      variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
    }
  }
  ATTR_typing___AAttrFormExpr____prop( self) /*AAttrFormExpr::_prop*/ =  variable3 /*prop*/;
  return_label71: while(false);
  tracehead = trace.prev;
  return;
}
void typing___AAttrExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAttrExpr::after_typing (src/syntax//typing.nit:741,2--749:20)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((typing___AAttrFormExpr___do_typing_t)CALL( self,COLOR_typing___AAttrFormExpr___do_typing))( self,  variable0 /*v*/) /*AAttrExpr::do_typing*/;
  variable1 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrExpr::prop*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMAttribute::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    goto return_label72;
  }
  variable2 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrExpr::prop*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMAttribute::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrExpr::n_expr*/;
  variable2 = ((typing___PExpr___is_self_t)CALL(variable2,COLOR_typing___PExpr___is_self))(variable2) /*PExpr::is_self*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
    variable2 = ((static_type___MMType___not_for_self_t)CALL( variable1 /*attr_type*/,COLOR_static_type___MMType___not_for_self))( variable1 /*attr_type*/) /*MMType::not_for_self*/;
    variable1 = variable2 /*attr_type=*/;
  }
  ATTR_typing___PExpr____stype( self) /*AAttrExpr::_stype*/ =  variable1 /*attr_type*/;
  return_label72: while(false);
  tracehead = trace.prev;
  return;
}
void typing___AAttrAssignExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAttrAssignExpr::after_typing (src/syntax//typing.nit:754,2--762:48)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((typing___AAttrFormExpr___do_typing_t)CALL( self,COLOR_typing___AAttrFormExpr___do_typing))( self,  variable0 /*v*/) /*AAttrAssignExpr::do_typing*/;
  variable1 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrAssignExpr::prop*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMAttribute::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    goto return_label73;
  }
  variable2 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrAssignExpr::prop*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMAttribute::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrAssignExpr::n_expr*/;
  variable2 = ((typing___PExpr___is_self_t)CALL(variable2,COLOR_typing___PExpr___is_self))(variable2) /*PExpr::is_self*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
    variable2 = ((static_type___MMType___not_for_self_t)CALL( variable1 /*attr_type*/,COLOR_static_type___MMType___not_for_self))( variable1 /*attr_type*/) /*MMType::not_for_self*/;
    variable1 = variable2 /*attr_type=*/;
  }
  variable2 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*AAttrAssignExpr::n_value*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable2,  variable1 /*attr_type*/) /*TypingVisitor::check_conform*/;
  return_label73: while(false);
  tracehead = trace.prev;
  return;
}
void typing___AAttrReassignExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AAttrReassignExpr::after_typing (src/syntax//typing.nit:767,2--775:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((typing___AAttrFormExpr___do_typing_t)CALL( self,COLOR_typing___AAttrFormExpr___do_typing))( self,  variable0 /*v*/) /*AAttrReassignExpr::do_typing*/;
  variable1 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrReassignExpr::prop*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMAttribute::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    goto return_label74;
  }
  variable2 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrReassignExpr::prop*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMAttribute::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrReassignExpr::n_expr*/;
  variable2 = ((typing___PExpr___is_self_t)CALL(variable2,COLOR_typing___PExpr___is_self))(variable2) /*PExpr::is_self*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
    variable2 = ((static_type___MMType___not_for_self_t)CALL( variable1 /*attr_type*/,COLOR_static_type___MMType___not_for_self))( variable1 /*attr_type*/) /*MMType::not_for_self*/;
    variable1 = variable2 /*attr_type=*/;
  }
  ((typing___AReassignFormExpr___do_lvalue_typing_t)CALL( self,COLOR_typing___AReassignFormExpr___do_lvalue_typing))( self,  variable0 /*v*/,  variable1 /*attr_type*/) /*AAttrReassignExpr::do_lvalue_typing*/;
  return_label74: while(false);
  tracehead = trace.prev;
  return;
}
void typing___AAbsSendExpr___do_typing(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5) {
  struct trace_t trace = {NULL, "typing::AAbsSendExpr::do_typing (src/syntax//typing.nit:781,2--789:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  val_t variable8;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable4 =  param4;
  variable5 =  param5;
  variable7 = ((typing___AAbsSendExpr___get_property_t)CALL( self,COLOR_typing___AAbsSendExpr___get_property))( self,  variable0 /*v*/,  variable1 /*type_recv*/,  variable2 /*is_implicit_self*/,  variable4 /*name*/) /*AAbsSendExpr::get_property*/;
  variable6 = variable7;
  variable7 = TAG_Bool(( variable6 /*prop*/ ==  NIT_NULL /*null*/) || (( variable6 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*prop*/,COLOR_kernel___Object_____eqeq))( variable6 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable7)) { /*if*/
    goto return_label75;
  }
  variable8 = ((typing___AAbsSendExpr___process_signature_t)CALL( self,COLOR_typing___AAbsSendExpr___process_signature))( self,  variable0 /*v*/,  variable6 /*prop*/,  variable3 /*recv_is_self*/,  variable5 /*raw_args*/) /*AAbsSendExpr::process_signature*/;
  variable7 = variable8;
  variable8 = TAG_Bool(( variable7 /*args*/ ==  NIT_NULL /*null*/) || (( variable7 /*args*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable7 /*args*/,COLOR_kernel___Object_____eqeq))( variable7 /*args*/,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable8)) { /*if*/
    goto return_label75;
  }
  ATTR_typing___AAbsSendExpr____prop( self) /*AAbsSendExpr::_prop*/ =  variable6 /*prop*/;
  ATTR_typing___AAbsSendExpr____arguments( self) /*AAbsSendExpr::_arguments*/ =  variable7 /*args*/;
  return_label75: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___AAbsSendExpr___get_property(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "typing::AAbsSendExpr::get_property (src/syntax//typing.nit:792,2--816:13)"};
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
      val_t variable11;
      val_t variable12;
      val_t variable13;
      val_t variable14;
      val_t variable15;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable4 = TAG_Bool(( variable1 /*type_recv*/ ==  NIT_NULL /*null*/) || (( variable1 /*type_recv*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*type_recv*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*type_recv*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*type_recv*/,COLOR_kernel___Object_____eqeq))( variable1 /*type_recv*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 =  NIT_NULL /*null*/;
    goto return_label76;
  }
  variable5 = ((static_type___MMType___select_method_t)CALL( variable1 /*type_recv*/,COLOR_static_type___MMType___select_method))( variable1 /*type_recv*/,  variable3 /*name*/) /*MMType::select_method*/;
  variable4 = variable5;
  variable5 = TAG_Bool(( variable4 /*prop*/ ==  NIT_NULL /*null*/) || (( variable4 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*prop*/,COLOR_kernel___Object_____eqeq))( variable4 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  variable6 = variable5;
  if (UNTAG_Bool(variable6)) { /* and */
    variable6 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    variable6 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalProperty___global))(variable6) /*MMSrcLocalProperty::global*/;
    variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable6,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable6) /*MMGlobalProperty::is_init*/;
  }
  variable5 = variable6;
  if (UNTAG_Bool(variable5)) { /*if*/
    variable6 = ((static_type___MMType___local_class_t)CALL( variable1 /*type_recv*/,COLOR_static_type___MMType___local_class))( variable1 /*type_recv*/) /*MMType::local_class*/;
    variable6 = ((abstractmetamodel___MMLocalClass___super_methods_named_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalClass___super_methods_named))(variable6,  variable3 /*name*/) /*MMLocalClass::super_methods_named*/;
    variable5 = variable6;
    variable6 = ((array___AbstractArray___length_t)CALL( variable5 /*props*/,COLOR_abstract_collection___Collection___length))( variable5 /*props*/) /*Array::length*/;
    variable6 = TAG_Bool(UNTAG_Int(variable6)>UNTAG_Int( TAG_Int(1)));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Ambigous method name '"), TAG_Int(29)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 =  variable3 /*name*/;
      variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString("' for "), TAG_Int(6)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
      variable12 = ((string___Collection___join_t)CALL( variable5 /*props*/,COLOR_string___Collection___join))( variable5 /*props*/, variable12) /*Array::join*/;
      variable13 = variable12;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
      variable14 = NEW_string___String___with_native(BOX_NativeString(". Use explicit designation."), TAG_Int(27)); /*new String*/
      variable15 = variable14;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*TypingVisitor::error*/;
      variable4 =  NIT_NULL /*null*/;
      goto return_label76;
    } else { /*if*/
      variable6 = ((array___AbstractArray___length_t)CALL( variable5 /*props*/,COLOR_abstract_collection___Collection___length))( variable5 /*props*/) /*Array::length*/;
      variable6 = TAG_Bool((variable6)==( TAG_Int(1)));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable7 = ((abstract_collection___IndexedCollection___first_t)CALL( variable5 /*props*/,COLOR_abstract_collection___Collection___first))( variable5 /*props*/) /*Array::first*/;
        variable7 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalProperty___global))(variable7) /*MMLocalProperty::global*/;
        variable7 = ((static_type___MMType___select_property_t)CALL( variable1 /*type_recv*/,COLOR_static_type___MMType___select_property))( variable1 /*type_recv*/, variable7) /*MMType::select_property*/;
        variable6 = variable7;
        variable7 = TAG_Bool(( variable6 /*p*/==NIT_NULL) || VAL_ISA( variable6 /*p*/, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
        if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:803,5--25\n"); nit_exit(1);}
        variable4 =  variable6 /*p*/ /*prop=*/;
      }
    }
  }
  variable5 = TAG_Bool(( variable4 /*prop*/ ==  NIT_NULL /*null*/) || (( variable4 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*prop*/,COLOR_kernel___Object_____eqeq))( variable4 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable5)) { /*if*/
    if (UNTAG_Bool( variable2 /*is_implicit_self*/)) { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Error: Method or variable '"), TAG_Int(27)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  variable3 /*name*/;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("' unknown in "), TAG_Int(13)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      variable11 =  variable1 /*type_recv*/;
      variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*TypingVisitor::error*/;
    } else { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Error: Method '"), TAG_Int(15)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  variable3 /*name*/;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("' doesn't exists in "), TAG_Int(20)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      variable11 =  variable1 /*type_recv*/;
      variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*TypingVisitor::error*/;
    }
    variable4 =  NIT_NULL /*null*/;
    goto return_label76;
  }
  variable4 =  variable4 /*prop*/;
  goto return_label76;
  return_label76: while(false);
  tracehead = trace.prev;
  return variable4;
}
val_t typing___AAbsSendExpr___process_signature(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "typing::AAbsSendExpr::process_signature (src/syntax//typing.nit:819,2--855:13)"};
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
    val_t variable11;
    val_t variable12;
    val_t variable13;
    val_t variable14;
      val_t variable15;
      val_t variable16;
        val_t variable17;
        val_t variable18;
        val_t variable19;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMMethod::global*/;
  variable5 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
  ((syntax_base___MMGlobalProperty___check_visibility_t)CALL(variable4,COLOR_syntax_base___MMGlobalProperty___check_visibility))(variable4,  variable0 /*v*/,  self, variable5,  variable2 /*recv_is_self*/) /*MMGlobalProperty::check_visibility*/;
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*prop*/) /*MMMethod::signature*/;
  variable4 = variable5;
  variable6 = ((vararg___MMSignature___vararg_rank_t)CALL( variable4 /*psig*/,COLOR_vararg___MMSignature___vararg_rank))( variable4 /*psig*/) /*MMSignature::vararg_rank*/;
  variable5 = variable6;
  variable7 = ((static_type___MMSignature___arity_t)CALL( variable4 /*psig*/,COLOR_static_type___MMSignature___arity))( variable4 /*psig*/) /*MMSignature::arity*/;
  variable6 = variable7;
  variable7 = TAG_Int((int)0) /*decl variable raw_arity*/;
  variable8 = TAG_Bool(( variable3 /*raw_args*/ ==  NIT_NULL /*null*/) || (( variable3 /*raw_args*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable3 /*raw_args*/,COLOR_kernel___Object_____eqeq))( variable3 /*raw_args*/,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable8)) { /*if*/
    variable7 =  TAG_Int(0) /*raw_arity=*/;
  } else { /*if*/
    variable8 = ((array___AbstractArray___length_t)CALL( variable3 /*raw_args*/,COLOR_abstract_collection___Collection___length))( variable3 /*raw_args*/) /*Array::length*/;
    variable7 = variable8 /*raw_arity=*/;
  }
  variable8 = TAG_Bool(UNTAG_Int( variable6 /*par_arity*/)>UNTAG_Int( variable7 /*raw_arity*/));
  variable9 = variable8;
  if (!UNTAG_Bool(variable9)) { /* or */
    variable9 = TAG_Bool(( variable6 /*par_arity*/)!=( variable7 /*raw_arity*/));
    variable10 = variable9;
    if (UNTAG_Bool(variable10)) { /* and */
      variable10 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
      variable10 = TAG_Bool(( variable5 /*par_vararg*/)==(variable10));
    }
    variable9 = variable10;
  }
  variable8 = variable9;
  if (UNTAG_Bool(variable8)) { /*if*/
    variable8 = NEW_string___String___init(); /*new String*/
    variable9 = NEW_string___String___with_native(BOX_NativeString("Error: Method '"), TAG_Int(15)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
    variable11 =  variable1 /*prop*/;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("' arity missmatch."), TAG_Int(18)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable13) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable8) /*TypingVisitor::error*/;
    variable4 =  NIT_NULL /*null*/;
    goto return_label77;
  }
  variable8 =  TAG_Int(0);
  variable10 = NEW_array___Array___init(); /*new Array[PExpr]*/
  variable9 = variable10;
  variable10 = NEW_range___Range___without_last( TAG_Int(0),  variable6 /*par_arity*/); /*new Range[Int]*/
  variable10 = ((range___Range___iterator_t)CALL(variable10,COLOR_abstract_collection___Collection___iterator))(variable10) /*Range::iterator*/;
  while (true) { /*for*/
    variable11 = ((abstract_collection___Iterator___is_ok_t)CALL(variable10,COLOR_abstract_collection___Iterator___is_ok))(variable10) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable11)) break; /*for*/
    variable11 = ((abstract_collection___Iterator___item_t)CALL(variable10,COLOR_abstract_collection___Iterator___item))(variable10) /*Iterator::item*/;
    variable12 = NIT_NULL /*decl variable a*/;
    variable14 = ((static_type___MMSignature_____bra_t)CALL( variable4 /*psig*/,COLOR_static_type___MMSignature_____bra))( variable4 /*psig*/,  variable11 /*par_idx*/) /*MMSignature::[]*/;
    variable13 = variable14;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool( variable2 /*recv_is_self*/)))) { /*if*/
      variable14 = ((static_type___MMType___not_for_self_t)CALL( variable13 /*par_type*/,COLOR_static_type___MMType___not_for_self))( variable13 /*par_type*/) /*MMType::not_for_self*/;
      variable13 = variable14 /*par_type=*/;
    }
    variable14 = TAG_Bool(( variable11 /*par_idx*/)==( variable5 /*par_vararg*/));
    if (UNTAG_Bool(variable14)) { /*if*/
      variable15 = NEW_array___Array___init(); /*new Array[PExpr]*/
      variable14 = variable15;
      variable15 = TAG_Int(UNTAG_Int( variable7 /*raw_arity*/)-UNTAG_Int( variable6 /*par_arity*/));
      variable16 = NEW_range___Range___init( TAG_Int(0), variable15); /*new Range[Int]*/
      variable15 = variable16;
      variable15 = ((range___Range___iterator_t)CALL(variable15,COLOR_abstract_collection___Collection___iterator))(variable15) /*Range::iterator*/;
      while (true) { /*for*/
        variable16 = ((abstract_collection___Iterator___is_ok_t)CALL(variable15,COLOR_abstract_collection___Iterator___is_ok))(variable15) /*Iterator::is_ok*/;
        if (!UNTAG_Bool(variable16)) break; /*for*/
        variable16 = ((abstract_collection___Iterator___item_t)CALL(variable15,COLOR_abstract_collection___Iterator___item))(variable15) /*Iterator::item*/;
        variable17 =  variable8 /*arg_idx*/;
        variable18 = TAG_Bool(UNTAG_Int( variable17 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable19 = variable18;
        if (UNTAG_Bool(variable19)) { /* and */
          variable19 = ATTR_array___AbstractArray____length( variable3 /*raw_args*/) /*Array::_length*/;
          variable19 = TAG_Bool(UNTAG_Int( variable17 /*index*/)<UNTAG_Int(variable19));
        }
        variable18 = variable19;
        if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable18 = ATTR_array___Array____items( variable3 /*raw_args*/) /*Array::_items*/;
        variable18 = UNBOX_NativeArray(variable18)[UNTAG_Int( variable17 /*index*/)];
        goto return_label80;
        return_label80: while(false);
        variable17 = variable18;
        variable12 = variable17 /*a=*/;
        variable17 = ((typing___PExpr___stype_t)CALL( variable12 /*a*/,COLOR_syntax_base___PExpr___stype))( variable12 /*a*/) /*PExpr::stype*/;
        ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable17,  variable13 /*par_type*/) /*TypingVisitor::check_conform*/;
        ((array___AbstractArray___add_t)CALL( variable14 /*star*/,COLOR_abstract_collection___SimpleCollection___add))( variable14 /*star*/,  variable12 /*a*/) /*Array::add*/;
        variable17 = TAG_Int(UNTAG_Int( variable8 /*arg_idx*/)+UNTAG_Int( TAG_Int(1)));
        variable8 = variable17 /*arg_idx=*/;
        continue_79: while(0);
        ((abstract_collection___Iterator___next_t)CALL(variable15,COLOR_abstract_collection___Iterator___next))(variable15) /*Iterator::next*/;
      }
      break_79: while(0);
      variable16 = NEW_parser_prod___AArrayExpr___init_aarrayexpr( variable14 /*star*/); /*new AArrayExpr*/
      variable15 = variable16;
      variable16 = ((syntax_base___AbsSyntaxVisitor___type_array_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_array))( variable0 /*v*/,  variable13 /*par_type*/) /*TypingVisitor::type_array*/;
      ((typing___AArrayExpr___stype__eq_t)CALL( variable15 /*aa*/,COLOR_typing___AArrayExpr___stype__eq))( variable15 /*aa*/, variable16) /*AArrayExpr::stype=*/;
      variable12 =  variable15 /*aa*/ /*a=*/;
    } else { /*if*/
      variable14 =  variable8 /*arg_idx*/;
      variable15 = TAG_Bool(UNTAG_Int( variable14 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable16 = variable15;
      if (UNTAG_Bool(variable16)) { /* and */
        variable16 = ATTR_array___AbstractArray____length( variable3 /*raw_args*/) /*Array::_length*/;
        variable16 = TAG_Bool(UNTAG_Int( variable14 /*index*/)<UNTAG_Int(variable16));
      }
      variable15 = variable16;
      if (!UNTAG_Bool(variable15)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable15 = ATTR_array___Array____items( variable3 /*raw_args*/) /*Array::_items*/;
      variable15 = UNBOX_NativeArray(variable15)[UNTAG_Int( variable14 /*index*/)];
      goto return_label81;
      return_label81: while(false);
      variable14 = variable15;
      variable12 = variable14 /*a=*/;
      variable14 = ((typing___PExpr___stype_t)CALL( variable12 /*a*/,COLOR_syntax_base___PExpr___stype))( variable12 /*a*/) /*PExpr::stype*/;
      ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  self, variable14,  variable13 /*par_type*/) /*TypingVisitor::check_conform*/;
      variable14 = TAG_Int(UNTAG_Int( variable8 /*arg_idx*/)+UNTAG_Int( TAG_Int(1)));
      variable8 = variable14 /*arg_idx=*/;
    }
    ((array___AbstractArray___add_t)CALL( variable9 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable9 /*args*/,  variable12 /*a*/) /*Array::add*/;
    continue_78: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable10,COLOR_abstract_collection___Iterator___next))(variable10) /*Iterator::next*/;
  }
  break_78: while(0);
  variable4 =  variable9 /*args*/;
  goto return_label77;
  return_label77: while(false);
  tracehead = trace.prev;
  return variable4;
}
val_t typing___AAbsSendExpr___prop(val_t  self) {
  struct trace_t trace = {NULL, "typing::AAbsSendExpr::prop (src/syntax//typing.nit:858,2--859:30)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AAbsSendExpr____prop( self) /*AAbsSendExpr::_prop*/;
}
val_t typing___AAbsSendExpr___arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::AAbsSendExpr::arguments (src/syntax//typing.nit:861,2--862:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___AAbsSendExpr____arguments( self) /*AAbsSendExpr::_arguments*/;
}
void typing___ASuperInitCall___register_super_init_call(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "typing::ASuperInitCall::register_super_init_call (src/syntax//typing.nit:869,2--896:10)"};
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
      val_t variable11;
      val_t variable12;
      val_t variable13;
      val_t variable14;
		val_t variable15;
		val_t variable16;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((parser_prod___PNode___parent_t)CALL( self,COLOR_parser_prod___PNode___parent))( self) /*ASuperInitCall::parent*/;
  variable3 = ((typing___TypingVisitor___top_block_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___top_block))( variable0 /*v*/) /*TypingVisitor::top_block*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 == variable3) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2,variable3)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2, variable3) /*PNode::==*/)))))));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((typing___TypingVisitor___top_block_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___top_block))( variable0 /*v*/) /*TypingVisitor::top_block*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( self == variable3) || (( self != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( self,variable3)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))( self, variable3) /*ASuperInitCall::==*/)))))));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Error: Constructor invocation "), TAG_Int(30)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 =  variable1 /*property*/;
    variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString(" must not be in nested block."), TAG_Int(29)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
  }
  variable3 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*TypingVisitor::module*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*property*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*property*/) /*MMMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable4) /*MMGlobalProperty::intro*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable4) /*MMConcreteProperty::local_class*/;
  variable4 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___global))(variable4) /*MMLocalClass::global*/;
  variable3 = ((abstractmetamodel___MMModule_____bra_t)CALL(variable3,COLOR_abstractmetamodel___MMModule_____bra))(variable3, variable4) /*MMSrcModule::[]*/;
  variable2 = variable3;
  variable3 = NIT_NULL /*decl variable prev_class*/;
  variable4 = ((typing___TypingVisitor___explicit_super_init_calls_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_super_init_calls))( variable0 /*v*/) /*TypingVisitor::explicit_super_init_calls*/;
  variable4 = ((array___AbstractArray___is_empty_t)CALL(variable4,COLOR_abstract_collection___Collection___is_empty))(variable4) /*Array::is_empty*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
    variable4 = ((typing___TypingVisitor___explicit_super_init_calls_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_super_init_calls))( variable0 /*v*/) /*TypingVisitor::explicit_super_init_calls*/;
    variable4 = ((abstract_collection___IndexedCollection___last_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___last))(variable4) /*Array::last*/;
    variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMMethod::global*/;
    variable4 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable4) /*MMGlobalProperty::intro*/;
    variable4 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable4) /*MMConcreteProperty::local_class*/;
    variable3 = variable4 /*prev_class=*/;
  }
  variable5 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*TypingVisitor::local_class*/;
  variable5 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable5) /*MMSrcLocalClass::cshe*/;
  variable5 = ((partial_order___PartialOrderElement___reverse_linear_extension_t)CALL(variable5,COLOR_partial_order___PartialOrderElement___reverse_linear_extension))(variable5) /*PartialOrderElement::reverse_linear_extension*/;
  variable4 = variable5;
  variable5 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*TypingVisitor::local_class*/;
  variable5 = TAG_Bool(( variable2 /*cla*/ == variable5) || (( variable2 /*cla*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*cla*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*cla*/,variable5)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*cla*/,COLOR_kernel___Object_____eqeq))( variable2 /*cla*/, variable5) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable5)) { /*if*/
    ((typing___TypingVisitor___explicit_other_init_call__eq_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_other_init_call__eq))( variable0 /*v*/,  TAG_Bool(true)) /*TypingVisitor::explicit_other_init_call=*/;
  } else { /*if*/
    variable5 = ((array___AbstractArray___has_t)CALL( variable4 /*order*/,COLOR_abstract_collection___Collection___has))( variable4 /*order*/,  variable2 /*cla*/) /*Array::has*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Error: Constructor of class "), TAG_Int(28)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  variable2 /*cla*/;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" must be one in "), TAG_Int(16)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
      variable11 = ((string___Collection___join_t)CALL( variable4 /*order*/,COLOR_string___Collection___join))( variable4 /*order*/, variable11) /*Array::join*/;
      variable12 = variable11;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable14) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*TypingVisitor::error*/;
    } else { /*if*/
      variable5 = TAG_Bool(( variable2 /*cla*/ ==  variable3 /*prev_class*/) || (( variable2 /*cla*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*cla*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*cla*/, variable3 /*prev_class*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*cla*/,COLOR_kernel___Object_____eqeq))( variable2 /*cla*/,  variable3 /*prev_class*/) /*MMLocalClass::==*/)))));
      if (UNTAG_Bool(variable5)) { /*if*/
        variable5 = NEW_string___String___init(); /*new String*/
        variable6 = NEW_string___String___with_native(BOX_NativeString("Error: Only one super constructor invocation of class "), TAG_Int(54)); /*new String*/
        variable7 = variable6;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
        variable8 =  variable2 /*cla*/;
        variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
        variable9 = NEW_string___String___with_native(BOX_NativeString(" is allowed."), TAG_Int(12)); /*new String*/
        variable10 = variable9;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*TypingVisitor::error*/;
      } else { /*if*/
        variable6 = TAG_Bool(( variable3 /*prev_class*/ ==  NIT_NULL /*null*/) || (( variable3 /*prev_class*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*prev_class*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*prev_class*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*prev_class*/,COLOR_kernel___Object_____eqeq))( variable3 /*prev_class*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))));
        variable5 = variable6;
        variable6 = ((array___AbstractArray___iterator_t)CALL( variable4 /*order*/,COLOR_abstract_collection___Collection___iterator))( variable4 /*order*/) /*Array::iterator*/;
        while (true) { /*for*/
          variable7 = ((array___ArrayIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ArrayIterator::is_ok*/;
          if (!UNTAG_Bool(variable7)) break; /*for*/
          variable7 = ((array___ArrayIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ArrayIterator::item*/;
          variable8 = TAG_Bool(( variable7 /*c*/ ==  variable3 /*prev_class*/) || (( variable7 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*c*/, variable3 /*prev_class*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*c*/,COLOR_kernel___Object_____eqeq))( variable7 /*c*/,  variable3 /*prev_class*/) /*MMLocalClass::==*/)))));
          if (UNTAG_Bool(variable8)) { /*if*/
            variable5 =  TAG_Bool(true) /*last_is_found=*/;
          } else { /*if*/
            variable8 = TAG_Bool(( variable7 /*c*/ ==  variable2 /*cla*/) || (( variable7 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*c*/, variable2 /*cla*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*c*/,COLOR_kernel___Object_____eqeq))( variable7 /*c*/,  variable2 /*cla*/) /*MMLocalClass::==*/)))));
            if (UNTAG_Bool(variable8)) { /*if*/
              if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool( variable5 /*last_is_found*/)))) { /*if*/
		variable8 = NEW_string___String___init(); /*new String*/
		variable9 = NEW_string___String___with_native(BOX_NativeString("Error: Constructor of "), TAG_Int(22)); /*new String*/
		variable10 = variable9;
		((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
		variable11 =  variable7 /*c*/;
		variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
		((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable11) /*String::append*/;
		variable12 = NEW_string___String___with_native(BOX_NativeString(" must be invoked before constructor of "), TAG_Int(39)); /*new String*/
		variable13 = variable12;
		((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable13) /*String::append*/;
		variable14 =  variable3 /*prev_class*/;
		variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
		((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable16) /*String::append*/;
		((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable8) /*TypingVisitor::error*/;
              }
              variable8 = ((typing___TypingVisitor___explicit_super_init_calls_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___explicit_super_init_calls))( variable0 /*v*/) /*TypingVisitor::explicit_super_init_calls*/;
              ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8,  variable1 /*property*/) /*Array::add*/;
              goto break_83;
            }
          }
          continue_83: while(0);
          ((array___ArrayIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ArrayIterator::next*/;
        }
        break_83: while(0);
      }
    }
  }
  tracehead = trace.prev;
  return;
}
void typing___ANewExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ANewExpr::after_typing (src/syntax//typing.nit:906,2--925:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
    val_t variable7;
    val_t variable8;
    static val_t once_value_variable3_85; static int once_bool_variable3_85;
    val_t variable9;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___ANewExpr___n_type_t)CALL( self,COLOR_parser_nodes___ANewExpr___n_type))( self) /*ANewExpr::n_type*/;
  variable2 = ((typing___PType___stype_t)CALL(variable2,COLOR_typing___PType___stype))(variable2) /*PType::stype*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label84;
  }
  variable2 = ((static_type___MMType___local_class_t)CALL( variable1 /*t*/,COLOR_static_type___MMType___local_class))( variable1 /*t*/) /*MMType::local_class*/;
  variable2 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___global))(variable2) /*MMLocalClass::global*/;
  variable2 = ((abstractmetamodel___MMGlobalClass___is_abstract_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalClass___is_abstract))(variable2) /*MMGlobalClass::is_abstract*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Error: try to instantiate abstract class "), TAG_Int(41)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((static_type___MMType___local_class_t)CALL( variable1 /*t*/,COLOR_static_type___MMType___local_class))( variable1 /*t*/) /*MMType::local_class*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
    goto return_label84;
  }
  variable2 = NIT_NULL /*decl variable name*/;
  variable3 = ((parser_nodes___ANewExpr___n_id_t)CALL( self,COLOR_parser_nodes___ANewExpr___n_id))( self) /*ANewExpr::n_id*/;
  variable3 = TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*TId::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    if (once_bool_variable3_85) variable3 = once_value_variable3_85;
    else {
      variable3 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
      variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
      once_value_variable3_85 = variable3;
      once_bool_variable3_85 = true;
    }
    variable2 = variable3 /*name=*/;
  } else { /*if*/
    variable3 = ((parser_nodes___ANewExpr___n_id_t)CALL( self,COLOR_parser_nodes___ANewExpr___n_id))( self) /*ANewExpr::n_id*/;
    variable3 = ((syntax_base___Token___to_symbol_t)CALL(variable3,COLOR_syntax_base___Token___to_symbol))(variable3) /*TId::to_symbol*/;
    variable2 = variable3 /*name=*/;
  }
  variable3 = ((parser_nodes___ANewExpr___n_args_t)CALL( self,COLOR_parser_nodes___ANewExpr___n_args))( self) /*ANewExpr::n_args*/;
  variable3 = ((array___Collection___to_a_t)CALL(variable3,COLOR_array___Collection___to_a))(variable3) /*List::to_a*/;
  ((typing___AAbsSendExpr___do_typing_t)CALL( self,COLOR_typing___AAbsSendExpr___do_typing))( self,  variable0 /*v*/,  variable1 /*t*/,  TAG_Bool(false),  TAG_Bool(false),  variable2 /*name*/, variable3) /*ANewExpr::do_typing*/;
  variable3 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ANewExpr::prop*/;
  variable3 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalProperty___global))(variable3) /*MMMethod::global*/;
  variable3 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable3) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
    variable3 = NEW_string___String___init(); /*new String*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("Error: "), TAG_Int(7)); /*new String*/
    variable5 = variable4;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
    variable6 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ANewExpr::prop*/;
    variable7 = variable6;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" is not a constructor."), TAG_Int(22)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable3) /*TypingVisitor::error*/;
  }
  ATTR_typing___PExpr____stype( self) /*ANewExpr::_stype*/ =  variable1 /*t*/;
  return_label84: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___ASendExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASendExpr::name (src/syntax//typing.nit:932,2--933:18)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method name called (src/syntax//typing.nit:932,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t typing___ASendExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASendExpr::raw_arguments (src/syntax//typing.nit:935,2--936:32)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method raw_arguments called (src/syntax//typing.nit:935,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void typing___ASendExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASendExpr::after_typing (src/syntax//typing.nit:938,2--940:17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((typing___ASendExpr___do_all_typing_t)CALL( self,COLOR_typing___ASendExpr___do_all_typing))( self,  variable0 /*v*/) /*ASendExpr::do_all_typing*/;
  tracehead = trace.prev;
  return;
}
void typing___ASendExpr___do_all_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASendExpr::do_all_typing (src/syntax//typing.nit:943,2--958:12)"};
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
  variable1 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  variable2 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
  variable2 = ((typing___PExpr___is_implicit_self_t)CALL(variable2,COLOR_typing___PExpr___is_implicit_self))(variable2) /*PExpr::is_implicit_self*/;
  variable3 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
  variable3 = ((typing___PExpr___is_self_t)CALL(variable3,COLOR_typing___PExpr___is_self))(variable3) /*PExpr::is_self*/;
  variable4 = ((typing___ASendExpr___name_t)CALL( self,COLOR_typing___ASendExpr___name))( self) /*ASendExpr::name*/;
  variable5 = ((typing___ASendExpr___raw_arguments_t)CALL( self,COLOR_typing___ASendExpr___raw_arguments))( self) /*ASendExpr::raw_arguments*/;
  ((typing___AAbsSendExpr___do_typing_t)CALL( self,COLOR_typing___AAbsSendExpr___do_typing))( self,  variable0 /*v*/, variable1, variable2, variable3, variable4, variable5) /*ASendExpr::do_typing*/;
  variable1 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    goto return_label87;
  }
  variable1 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
  variable1 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalProperty___global))(variable1) /*MMMethod::global*/;
  variable1 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable1,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable1) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    variable1 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalProperty___global))(variable1) /*MMSrcLocalProperty::global*/;
    variable1 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable1,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable1) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
      variable1 = NEW_string___String___init(); /*new String*/
      variable2 = NEW_string___String___with_native(BOX_NativeString("Error: try to invoke constructor "), TAG_Int(33)); /*new String*/
      variable3 = variable2;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
      variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
      variable5 = variable4;
      variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
      variable6 = NEW_string___String___with_native(BOX_NativeString(" in a method."), TAG_Int(13)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable1) /*TypingVisitor::error*/;
    } else { /*if*/
      variable1 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
      variable1 = ((typing___PExpr___is_self_t)CALL(variable1,COLOR_typing___PExpr___is_self))(variable1) /*PExpr::is_self*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
        variable1 = NEW_string___String___init(); /*new String*/
        variable2 = NEW_string___String___with_native(BOX_NativeString("Error: constructor "), TAG_Int(19)); /*new String*/
        variable3 = variable2;
        ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
        variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
        variable5 = variable4;
        variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
        ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
        variable6 = NEW_string___String___with_native(BOX_NativeString(" is not invoken on 'self'."), TAG_Int(26)); /*new String*/
        variable7 = variable6;
        ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable1) /*TypingVisitor::error*/;
      } else { /*if*/
        variable1 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
        ((typing___ASuperInitCall___register_super_init_call_t)CALL( self,COLOR_typing___ASuperInitCall___register_super_init_call))( self,  variable0 /*v*/, variable1) /*ASendExpr::register_super_init_call*/;
      }
    }
  }
  variable2 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMMethod::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
    variable3 = ((typing___PExpr___is_self_t)CALL(variable3,COLOR_typing___PExpr___is_self))(variable3) /*PExpr::is_self*/;
    variable3 =  TAG_Bool(!UNTAG_Bool(variable3));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((static_type___MMType___not_for_self_t)CALL( variable1 /*t*/,COLOR_static_type___MMType___not_for_self))( variable1 /*t*/) /*MMType::not_for_self*/;
    variable1 = variable2 /*t=*/;
  }
  ATTR_typing___PExpr____stype( self) /*ASendExpr::_stype*/ =  variable1 /*t*/;
  return_label87: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___ASendReassignExpr___read_prop(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASendReassignExpr::read_prop (src/syntax//typing.nit:965,2--35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_typing___ASendReassignExpr____read_prop( self) /*ASendReassignExpr::_read_prop*/;
}
void typing___ASendReassignExpr___do_all_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ASendReassignExpr::do_all_typing (src/syntax//typing.nit:966,2--997:23)"};
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
  val_t variable11;
  val_t variable12;
  val_t variable13;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___ASendExpr___raw_arguments_t)CALL( self,COLOR_typing___ASendExpr___raw_arguments))( self) /*ASendReassignExpr::raw_arguments*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable2 = ((typing___PExpr___stype_t)CALL(variable2,COLOR_syntax_base___PExpr___stype))(variable2) /*PExpr::stype*/;
  variable3 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable3 = ((typing___PExpr___is_implicit_self_t)CALL(variable3,COLOR_typing___PExpr___is_implicit_self))(variable3) /*PExpr::is_implicit_self*/;
  variable4 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable4 = ((typing___PExpr___is_self_t)CALL(variable4,COLOR_typing___PExpr___is_self))(variable4) /*PExpr::is_self*/;
  variable5 = ((typing___ASendExpr___name_t)CALL( self,COLOR_typing___ASendExpr___name))( self) /*ASendReassignExpr::name*/;
  ((typing___AAbsSendExpr___do_typing_t)CALL( self,COLOR_typing___AAbsSendExpr___do_typing))( self,  variable0 /*v*/, variable2, variable3, variable4, variable5,  variable1 /*raw_args*/) /*ASendReassignExpr::do_typing*/;
  variable2 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label88;
  }
  variable2 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalProperty___global))(variable2) /*MMMethod::global*/;
  variable2 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable2) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalProperty___global))(variable2) /*MMSrcLocalProperty::global*/;
    variable2 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable2) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
      variable2 = NEW_string___String___init(); /*new String*/
      variable3 = NEW_string___String___with_native(BOX_NativeString("Error: try to invoke constructor "), TAG_Int(33)); /*new String*/
      variable4 = variable3;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
      variable5 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
      variable6 = variable5;
      variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString(" in a method."), TAG_Int(13)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
    } else { /*if*/
      variable2 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
      variable2 = ((typing___PExpr___is_self_t)CALL(variable2,COLOR_typing___PExpr___is_self))(variable2) /*PExpr::is_self*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
        variable2 = NEW_string___String___init(); /*new String*/
        variable3 = NEW_string___String___with_native(BOX_NativeString("Error: constructor "), TAG_Int(19)); /*new String*/
        variable4 = variable3;
        ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
        variable5 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
        variable6 = variable5;
        variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
        ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
        variable7 = NEW_string___String___with_native(BOX_NativeString(" is not invoken on 'self'."), TAG_Int(26)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*TypingVisitor::error*/;
      }
    }
  }
  variable3 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable3 = ((genericity___MMLocalProperty___signature_t)CALL(variable3,COLOR_static_type___MMLocalProperty___signature))(variable3) /*MMMethod::signature*/;
  variable3 = ((static_type___MMSignature___return_type_t)CALL(variable3,COLOR_static_type___MMSignature___return_type))(variable3) /*MMSignature::return_type*/;
  variable2 = variable3;
  variable3 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable3 = ((typing___PExpr___is_self_t)CALL(variable3,COLOR_typing___PExpr___is_self))(variable3) /*PExpr::is_self*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
    variable3 = ((static_type___MMType___not_for_self_t)CALL( variable2 /*t*/,COLOR_static_type___MMType___not_for_self))( variable2 /*t*/) /*MMType::not_for_self*/;
    variable2 = variable3 /*t=*/;
  }
  ((typing___AReassignFormExpr___do_lvalue_typing_t)CALL( self,COLOR_typing___AReassignFormExpr___do_lvalue_typing))( self,  variable0 /*v*/,  variable2 /*t*/) /*ASendReassignExpr::do_lvalue_typing*/;
  variable3 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  ATTR_typing___ASendReassignExpr____read_prop( self) /*ASendReassignExpr::_read_prop*/ = variable3;
  variable4 = ((typing___AAbsSendExpr___arguments_t)CALL( self,COLOR_typing___AAbsSendExpr___arguments))( self) /*ASendReassignExpr::arguments*/;
  variable3 = variable4;
  variable4 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*ASendReassignExpr::n_value*/;
  ((array___AbstractArray___add_t)CALL( variable1 /*raw_args*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*raw_args*/, variable4) /*Array::add*/;
  variable4 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable4 = ((typing___PExpr___stype_t)CALL(variable4,COLOR_syntax_base___PExpr___stype))(variable4) /*PExpr::stype*/;
  variable5 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable5 = ((typing___PExpr___is_implicit_self_t)CALL(variable5,COLOR_typing___PExpr___is_implicit_self))(variable5) /*PExpr::is_implicit_self*/;
  variable6 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable6 = ((typing___PExpr___is_self_t)CALL(variable6,COLOR_typing___PExpr___is_self))(variable6) /*PExpr::is_self*/;
  variable7 = NEW_string___String___init(); /*new String*/
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
  variable10 = ((typing___ASendExpr___name_t)CALL( self,COLOR_typing___ASendExpr___name))( self) /*ASendReassignExpr::name*/;
  variable11 = variable10;
  variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("="), TAG_Int(1)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
  variable7 = ((symbol___String___to_symbol_t)CALL(variable7,COLOR_symbol___String___to_symbol))(variable7) /*String::to_symbol*/;
  ((typing___AAbsSendExpr___do_typing_t)CALL( self,COLOR_typing___AAbsSendExpr___do_typing))( self,  variable0 /*v*/, variable4, variable5, variable6, variable7,  variable1 /*raw_args*/) /*ASendReassignExpr::do_typing*/;
  variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable4 = TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    goto return_label88;
  }
  variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable4) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((syntax_base___AbsSyntaxVisitor___local_property_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property))( variable0 /*v*/) /*TypingVisitor::local_property*/;
    variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMSrcLocalProperty::global*/;
    variable4 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable4) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Error: try to invoke constructor "), TAG_Int(33)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" in a method."), TAG_Int(13)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
    } else { /*if*/
      variable4 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
      variable4 = ((typing___PExpr___is_self_t)CALL(variable4,COLOR_typing___PExpr___is_self))(variable4) /*PExpr::is_self*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
        variable4 = NEW_string___String___init(); /*new String*/
        variable5 = NEW_string___String___with_native(BOX_NativeString("Error: constructor "), TAG_Int(19)); /*new String*/
        variable6 = variable5;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
        variable7 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
        variable8 = variable7;
        variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
        variable9 = NEW_string___String___with_native(BOX_NativeString(" is not invoken on 'self'."), TAG_Int(26)); /*new String*/
        variable10 = variable9;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*TypingVisitor::error*/;
      }
    }
  }
  ATTR_typing___AAbsSendExpr____arguments( self) /*ASendReassignExpr::_arguments*/ =  variable3 /*old_args*/;
  return_label88: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___ABinopExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABinopExpr::raw_arguments (src/syntax//typing.nit:1002,2--44)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[PExpr]*/
  variable1 = ((parser_nodes___ABinopExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___ABinopExpr___n_expr2))( self) /*ABinopExpr::n_expr2*/;
  ((array___AbstractArray___add_t)CALL(variable0,COLOR_abstract_collection___SimpleCollection___add))(variable0, variable1) /*Array::add*/;
  goto return_label89;
  return_label89: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AEqExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AEqExpr::name (src/syntax//typing.nit:1005,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_91; static int once_bool_variable0_91;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_91) variable0 = once_value_variable0_91;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_91 = variable0;
    once_bool_variable0_91 = true;
  }
  goto return_label90;
  return_label90: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ANeExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ANeExpr::name (src/syntax//typing.nit:1008,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_93; static int once_bool_variable0_93;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_93) variable0 = once_value_variable0_93;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("!="), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_93 = variable0;
    once_bool_variable0_93 = true;
  }
  goto return_label92;
  return_label92: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ALtExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ALtExpr::name (src/syntax//typing.nit:1011,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_95; static int once_bool_variable0_95;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_95) variable0 = once_value_variable0_95;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("<"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_95 = variable0;
    once_bool_variable0_95 = true;
  }
  goto return_label94;
  return_label94: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ALeExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ALeExpr::name (src/syntax//typing.nit:1014,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_97; static int once_bool_variable0_97;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_97) variable0 = once_value_variable0_97;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("<="), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_97 = variable0;
    once_bool_variable0_97 = true;
  }
  goto return_label96;
  return_label96: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AGtExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AGtExpr::name (src/syntax//typing.nit:1017,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_99; static int once_bool_variable0_99;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_99) variable0 = once_value_variable0_99;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_99 = variable0;
    once_bool_variable0_99 = true;
  }
  goto return_label98;
  return_label98: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AGeExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AGeExpr::name (src/syntax//typing.nit:1020,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_101; static int once_bool_variable0_101;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_101) variable0 = once_value_variable0_101;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString(">="), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_101 = variable0;
    once_bool_variable0_101 = true;
  }
  goto return_label100;
  return_label100: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___APlusExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::APlusExpr::name (src/syntax//typing.nit:1023,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_103; static int once_bool_variable0_103;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_103) variable0 = once_value_variable0_103;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("+"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_103 = variable0;
    once_bool_variable0_103 = true;
  }
  goto return_label102;
  return_label102: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AMinusExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AMinusExpr::name (src/syntax//typing.nit:1026,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_105; static int once_bool_variable0_105;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_105) variable0 = once_value_variable0_105;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_105 = variable0;
    once_bool_variable0_105 = true;
  }
  goto return_label104;
  return_label104: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AStarshipExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AStarshipExpr::name (src/syntax//typing.nit:1029,2--47)"};
  val_t variable0;
  static val_t once_value_variable0_107; static int once_bool_variable0_107;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_107) variable0 = once_value_variable0_107;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("<=>"), TAG_Int(3)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_107 = variable0;
    once_bool_variable0_107 = true;
  }
  goto return_label106;
  return_label106: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AStarExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AStarExpr::name (src/syntax//typing.nit:1032,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_109; static int once_bool_variable0_109;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_109) variable0 = once_value_variable0_109;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("*"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_109 = variable0;
    once_bool_variable0_109 = true;
  }
  goto return_label108;
  return_label108: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ASlashExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ASlashExpr::name (src/syntax//typing.nit:1035,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_111; static int once_bool_variable0_111;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_111) variable0 = once_value_variable0_111;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_111 = variable0;
    once_bool_variable0_111 = true;
  }
  goto return_label110;
  return_label110: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___APercentExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::APercentExpr::name (src/syntax//typing.nit:1038,2--45)"};
  val_t variable0;
  static val_t once_value_variable0_113; static int once_bool_variable0_113;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_113) variable0 = once_value_variable0_113;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("%"), TAG_Int(1)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_113 = variable0;
    once_bool_variable0_113 = true;
  }
  goto return_label112;
  return_label112: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AUminusExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AUminusExpr::name (src/syntax//typing.nit:1042,2--51)"};
  val_t variable0;
  static val_t once_value_variable0_115; static int once_bool_variable0_115;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_115) variable0 = once_value_variable0_115;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_115 = variable0;
    once_bool_variable0_115 = true;
  }
  goto return_label114;
  return_label114: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AUminusExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::AUminusExpr::raw_arguments (src/syntax//typing.nit:1043,2--40)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  NIT_NULL /*null*/;
  goto return_label116;
  return_label116: while(false);
  tracehead = trace.prev;
  return variable0;
}
void typing___ACallFormExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACallFormExpr::after_typing (src/syntax//typing.nit:1047,2--1063:7)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
        val_t variable4;
        val_t variable5;
        val_t variable6;
        val_t variable7;
        val_t variable8;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ACallFormExpr::n_expr*/;
  variable1 = ((typing___PExpr___is_implicit_self_t)CALL(variable1,COLOR_typing___PExpr___is_implicit_self))(variable1) /*PExpr::is_implicit_self*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallFormExpr::n_id*/;
    variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TId::to_symbol*/;
    variable1 = variable2;
    variable3 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
    variable3 = ((typing___VariableContext_____bra_t)CALL(variable3,COLOR_typing___VariableContext_____bra))(variable3,  variable1 /*name*/) /*VariableContext::[]*/;
    variable2 = variable3;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*variable*/ ==  NIT_NULL /*null*/) || (( variable2 /*variable*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*variable*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*variable*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*variable*/,COLOR_kernel___Object_____eqeq))( variable2 /*variable*/,  NIT_NULL /*null*/) /*Variable::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = ((parser_nodes___ACallFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_args))( self) /*ACallFormExpr::n_args*/;
      variable3 = ((list___List___is_empty_t)CALL(variable3,COLOR_abstract_collection___Collection___is_empty))(variable3) /*List::is_empty*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
        variable3 = NEW_string___String___init(); /*new String*/
        variable4 = NEW_string___String___with_native(BOX_NativeString("Error: "), TAG_Int(7)); /*new String*/
        variable5 = variable4;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
        variable6 =  variable1 /*name*/;
        variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
        variable7 = NEW_string___String___with_native(BOX_NativeString(" is variable, not a function."), TAG_Int(29)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable3) /*TypingVisitor::error*/;
      }
      variable4 = ((typing___ACallFormExpr___variable_create_t)CALL( self,COLOR_typing___ACallFormExpr___variable_create))( self,  variable2 /*variable*/) /*ACallFormExpr::variable_create*/;
      variable3 = variable4;
      ((typing___AVarFormExpr___variable__eq_t)CALL( variable3 /*vform*/,COLOR_typing___AVarFormExpr___variable__eq))( variable3 /*vform*/,  variable2 /*variable*/) /*AVarFormExpr::variable=*/;
      ((parser_prod___Prod___replace_with_t)CALL( self,COLOR_parser_prod___PNode___replace_with))( self,  variable3 /*vform*/) /*ACallFormExpr::replace_with*/;
      ((typing___PNode___after_typing_t)CALL( variable3 /*vform*/,COLOR_typing___PNode___after_typing))( variable3 /*vform*/,  variable0 /*v*/) /*AVarFormExpr::after_typing*/;
      goto return_label117;
    }
  }
  ((typing___ACallFormExpr___after_typing_t)CALL( self,COLOR_SUPER_typing___ACallFormExpr___after_typing))( self,  param0) /*super ACallFormExpr::after_typing*/;
  return_label117: while(false);
  tracehead = trace.prev;
  return;
}
val_t typing___ACallFormExpr___variable_create(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACallFormExpr::variable_create (src/syntax//typing.nit:1066,2--1067:55)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method variable_create called (src/syntax//typing.nit:1066,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t typing___ACallExpr___variable_create(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACallExpr::variable_create (src/syntax//typing.nit:1071,2--1073:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallExpr::n_id*/;
  variable2 = NEW_parser_prod___AVarExpr___init_avarexpr(variable1); /*new AVarExpr*/
  variable1 = variable2;
  goto return_label118;
  return_label118: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t typing___ACallExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallExpr::name (src/syntax//typing.nit:1076,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallExpr::n_id*/;
  variable0 = ((syntax_base___Token___to_symbol_t)CALL(variable0,COLOR_syntax_base___Token___to_symbol))(variable0) /*TId::to_symbol*/;
  goto return_label119;
  return_label119: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ACallExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallExpr::raw_arguments (src/syntax//typing.nit:1077,2--47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ACallFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_args))( self) /*ACallExpr::n_args*/;
  variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*List::to_a*/;
  goto return_label120;
  return_label120: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ACallAssignExpr___variable_create(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACallAssignExpr::variable_create (src/syntax//typing.nit:1081,2--1083:71)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallAssignExpr::n_id*/;
  variable2 = ((parser_nodes___AAssignFormExpr___n_assign_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_assign))( self) /*ACallAssignExpr::n_assign*/;
  variable3 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*ACallAssignExpr::n_value*/;
  variable4 = NEW_parser_prod___AVarAssignExpr___init_avarassignexpr(variable1, variable2, variable3); /*new AVarAssignExpr*/
  variable1 = variable4;
  goto return_label121;
  return_label121: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t typing___ACallAssignExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallAssignExpr::name (src/syntax//typing.nit:1086,2--54)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallAssignExpr::n_id*/;
  variable0 = ((lexer___Token___text_t)CALL(variable0,COLOR_lexer___Token___text))(variable0) /*TId::text*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("="), TAG_Int(1)); /*new String*/
  variable0 = ((string___String_____plus_t)CALL(variable0,COLOR_string___String_____plus))(variable0, variable1) /*String::+*/;
  variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
  goto return_label122;
  return_label122: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ACallAssignExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallAssignExpr::raw_arguments (src/syntax//typing.nit:1087,2--1090:12)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((parser_nodes___ACallFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_args))( self) /*ACallAssignExpr::n_args*/;
  variable1 = ((array___Collection___to_a_t)CALL(variable1,COLOR_array___Collection___to_a))(variable1) /*List::to_a*/;
  variable0 = variable1;
  variable1 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*ACallAssignExpr::n_value*/;
  ((array___AbstractArray___add_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*res*/, variable1) /*Array::add*/;
  variable0 =  variable0 /*res*/;
  goto return_label123;
  return_label123: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ACallReassignExpr___variable_create(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::ACallReassignExpr::variable_create (src/syntax//typing.nit:1096,2--1098:78)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallReassignExpr::n_id*/;
  variable2 = ((parser_nodes___AReassignFormExpr___n_assign_op_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_assign_op))( self) /*ACallReassignExpr::n_assign_op*/;
  variable3 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*ACallReassignExpr::n_value*/;
  variable4 = NEW_parser_prod___AVarReassignExpr___init_avarreassignexpr(variable1, variable2, variable3); /*new AVarReassignExpr*/
  variable1 = variable4;
  goto return_label124;
  return_label124: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t typing___ACallReassignExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallReassignExpr::name (src/syntax//typing.nit:1101,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ACallFormExpr___n_id_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_id))( self) /*ACallReassignExpr::n_id*/;
  variable0 = ((syntax_base___Token___to_symbol_t)CALL(variable0,COLOR_syntax_base___Token___to_symbol))(variable0) /*TId::to_symbol*/;
  goto return_label125;
  return_label125: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ACallReassignExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ACallReassignExpr::raw_arguments (src/syntax//typing.nit:1102,2--47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ACallFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ACallFormExpr___n_args))( self) /*ACallReassignExpr::n_args*/;
  variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*List::to_a*/;
  goto return_label126;
  return_label126: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraExpr::name (src/syntax//typing.nit:1106,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_128; static int once_bool_variable0_128;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_128) variable0 = once_value_variable0_128;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("[]"), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_128 = variable0;
    once_bool_variable0_128 = true;
  }
  goto return_label127;
  return_label127: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraExpr::raw_arguments (src/syntax//typing.nit:1107,2--47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ABraFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ABraFormExpr___n_args))( self) /*ABraExpr::n_args*/;
  variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*List::to_a*/;
  goto return_label129;
  return_label129: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraAssignExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraAssignExpr::name (src/syntax//typing.nit:1111,2--47)"};
  val_t variable0;
  static val_t once_value_variable0_131; static int once_bool_variable0_131;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_131) variable0 = once_value_variable0_131;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("[]="), TAG_Int(3)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_131 = variable0;
    once_bool_variable0_131 = true;
  }
  goto return_label130;
  return_label130: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraAssignExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraAssignExpr::raw_arguments (src/syntax//typing.nit:1112,2--1115:12)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((parser_nodes___ABraFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ABraFormExpr___n_args))( self) /*ABraAssignExpr::n_args*/;
  variable1 = ((array___Collection___to_a_t)CALL(variable1,COLOR_array___Collection___to_a))(variable1) /*List::to_a*/;
  variable0 = variable1;
  variable1 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*ABraAssignExpr::n_value*/;
  ((array___AbstractArray___add_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*res*/, variable1) /*Array::add*/;
  variable0 =  variable0 /*res*/;
  goto return_label132;
  return_label132: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraReassignExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraReassignExpr::name (src/syntax//typing.nit:1121,2--46)"};
  val_t variable0;
  static val_t once_value_variable0_134; static int once_bool_variable0_134;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_134) variable0 = once_value_variable0_134;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("[]"), TAG_Int(2)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_134 = variable0;
    once_bool_variable0_134 = true;
  }
  goto return_label133;
  return_label133: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___ABraReassignExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::ABraReassignExpr::raw_arguments (src/syntax//typing.nit:1122,2--47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___ABraFormExpr___n_args_t)CALL( self,COLOR_parser_nodes___ABraFormExpr___n_args))( self) /*ABraReassignExpr::n_args*/;
  variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*List::to_a*/;
  goto return_label135;
  return_label135: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AInitExpr___name(val_t  self) {
  struct trace_t trace = {NULL, "typing::AInitExpr::name (src/syntax//typing.nit:1126,2--48)"};
  val_t variable0;
  static val_t once_value_variable0_137; static int once_bool_variable0_137;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_137) variable0 = once_value_variable0_137;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_137 = variable0;
    once_bool_variable0_137 = true;
  }
  goto return_label136;
  return_label136: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t typing___AInitExpr___raw_arguments(val_t  self) {
  struct trace_t trace = {NULL, "typing::AInitExpr::raw_arguments (src/syntax//typing.nit:1127,2--47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AInitExpr___n_args_t)CALL( self,COLOR_parser_nodes___AInitExpr___n_args))( self) /*AInitExpr::n_args*/;
  variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*List::to_a*/;
  goto return_label138;
  return_label138: while(false);
  tracehead = trace.prev;
  return variable0;
}
void typing___AIsaExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AIsaExpr::after_typing (src/syntax//typing.nit:1131,2--1138:22)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AIsaExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIsaExpr___n_expr))( self) /*AIsaExpr::n_expr*/;
  variable1 = ((typing___PExpr___is_variable_t)CALL(variable1,COLOR_typing___PExpr___is_variable))(variable1) /*PExpr::is_variable*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((parser_nodes___AIsaExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIsaExpr___n_expr))( self) /*AIsaExpr::n_expr*/;
    variable1 = variable2;
    variable2 = TAG_Bool(( variable1 /*n*/==NIT_NULL) || VAL_ISA( variable1 /*n*/, COLOR_AVarExpr, ID_AVarExpr)) /*cast AVarExpr*/;
    if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/syntax//typing.nit:1135,4--24\n"); nit_exit(1);}
    variable2 = ((typing___TypingVisitor___variable_ctx_t)CALL( variable0 /*v*/,COLOR_typing___TypingVisitor___variable_ctx))( variable0 /*v*/) /*TypingVisitor::variable_ctx*/;
    variable3 = ((typing___AVarFormExpr___variable_t)CALL( variable1 /*n*/,COLOR_typing___AVarFormExpr___variable))( variable1 /*n*/) /*AVarExpr::variable*/;
    variable4 = ((parser_nodes___AIsaExpr___n_type_t)CALL( self,COLOR_parser_nodes___AIsaExpr___n_type))( self) /*AIsaExpr::n_type*/;
    variable4 = ((typing___PType___stype_t)CALL(variable4,COLOR_typing___PType___stype))(variable4) /*PType::stype*/;
    variable2 = ((typing___VariableContext___sub_with_t)CALL(variable2,COLOR_typing___VariableContext___sub_with))(variable2, variable3, variable4) /*VariableContext::sub_with*/;
    ATTR_typing___PExpr____if_true_variable_ctx( self) /*AIsaExpr::_if_true_variable_ctx*/ = variable2;
  }
  variable1 = ((syntax_base___AbsSyntaxVisitor___type_bool_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_bool))( variable0 /*v*/) /*TypingVisitor::type_bool*/;
  ATTR_typing___PExpr____stype( self) /*AIsaExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
void typing___AProxyExpr___after_typing(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "typing::AProxyExpr::after_typing (src/syntax//typing.nit:1143,2--1145:23)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AProxyExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AProxyExpr___n_expr))( self) /*AProxyExpr::n_expr*/;
  variable1 = ((typing___PExpr___stype_t)CALL(variable1,COLOR_syntax_base___PExpr___stype))(variable1) /*PExpr::stype*/;
  ATTR_typing___PExpr____stype( self) /*AProxyExpr::_stype*/ = variable1;
  tracehead = trace.prev;
  return;
}
