#include "partial_order._sep.h"
val_t partial_order___PartialOrder___roots(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::roots (src/metamodel//partial_order.nit:30,2--31:30)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrder____roots( self) /*PartialOrder::_roots*/;
}
val_t partial_order___PartialOrder___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::is_empty (src/metamodel//partial_order.nit:35,2--49)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable0 = ((abstract_collection___Collection___is_empty_t)CALL(variable0,COLOR_abstract_collection___Collection___is_empty))(variable0) /*Map::is_empty*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder___length(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::length (src/metamodel//partial_order.nit:37,2--45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable0 = ((abstract_collection___Collection___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Map::length*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder___first(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::first (src/metamodel//partial_order.nit:39,2--48)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrder____elements_list( self) /*PartialOrder::_elements_list*/;
  variable0 = ((abstract_collection___IndexedCollection___first_t)CALL(variable0,COLOR_abstract_collection___Collection___first))(variable0) /*Array::first*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::has (src/metamodel//partial_order.nit:41,2--48)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*e*/) /*Map::has_key*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::has_only (src/metamodel//partial_order.nit:43,2--80)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable1 = ((abstract_collection___Collection___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*Map::length*/;
  variable1 = TAG_Bool((variable1)==( TAG_Int(1)));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
    variable2 = ((abstract_collection___Collection___first_t)CALL(variable2,COLOR_abstract_collection___Collection___first))(variable2) /*Map::first*/;
    variable2 = TAG_Bool((variable2 ==  variable0 /*e*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*e*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*e*/) /*PartialOrderElement::==*/)))));
  }
  variable1 = variable2;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::count (src/metamodel//partial_order.nit:45,2--50:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((partial_order___PartialOrder___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable0 /*e*/) /*PartialOrder::has*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Int(1);
    goto return_label5;
  } else { /*if*/
    variable1 =  TAG_Int(0);
    goto return_label5;
  }
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___iterator(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::iterator (src/metamodel//partial_order.nit:54,2--54)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrder____elements_list( self) /*PartialOrder::_elements_list*/;
  variable0 = ((array___AbstractArray___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Array::iterator*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::[] (src/metamodel//partial_order.nit:58,2--64:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*e*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*e*/) /*Map::[]*/;
    goto return_label7;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label7;
  }
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___to_dot(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::to_dot (src/metamodel//partial_order.nit:68,2--80:10)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
      val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___init(); /*new String*/
  variable0 = variable1;
  variable1 = ((partial_order___PartialOrder___to_dot_header_t)CALL( self,COLOR_partial_order___PartialOrder___to_dot_header))( self) /*PartialOrder::to_dot_header*/;
  ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable1) /*String::append*/;
  variable1 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable1 = ((abstract_collection___Map___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Map::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*MapIterator::item*/;
    variable3 = ((partial_order___PartialOrderElement___value_t)CALL( variable2 /*e*/,COLOR_partial_order___PartialOrderElement___value))( variable2 /*e*/) /*PartialOrderElement::value*/;
    variable3 = ((partial_order___PartialOrder___to_dot_node_t)CALL( self,COLOR_partial_order___PartialOrder___to_dot_node))( self, variable3) /*PartialOrder::to_dot_node*/;
    ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable3) /*String::append*/;
    variable3 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL( variable2 /*e*/,COLOR_partial_order___PartialOrderElement___direct_greaters))( variable2 /*e*/) /*PartialOrderElement::direct_greaters*/;
    variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
    while (true) { /*for*/
      variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
      variable5 = ((partial_order___PartialOrderElement___value_t)CALL( variable2 /*e*/,COLOR_partial_order___PartialOrderElement___value))( variable2 /*e*/) /*PartialOrderElement::value*/;
      variable5 = ((partial_order___PartialOrder___to_dot_edge_t)CALL( self,COLOR_partial_order___PartialOrder___to_dot_edge))( self, variable5,  variable4 /*d*/) /*PartialOrder::to_dot_edge*/;
      ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable5) /*String::append*/;
      continue_10: while(0);
      ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
    }
    break_10: while(0);
    continue_9: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*MapIterator::next*/;
  }
  break_9: while(0);
  variable1 = NEW_string___String___with_native(BOX_NativeString("}\n"), TAG_Int(2)); /*new String*/
  ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable1) /*String::append*/;
  variable0 =  variable0 /*s*/;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder___to_dot_header(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::to_dot_header (src/metamodel//partial_order.nit:83,2--86:46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___with_native(BOX_NativeString("digraph G {\ngraph [rankdir=BT];\n"), TAG_Int(32)); /*new String*/
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrder___to_dot_node(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::to_dot_node (src/metamodel//partial_order.nit:89,2--92:21)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("\""), TAG_Int(1)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 =  variable0 /*e*/;
  variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("\";\n"), TAG_Int(3)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___to_dot_edge(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::to_dot_edge (src/metamodel//partial_order.nit:95,2--98:34)"};
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
  variable1 =  param1;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("\""), TAG_Int(1)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable0 /*e1*/;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\" -> \""), TAG_Int(6)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  variable8 =  variable1 /*e2*/;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("\";\n"), TAG_Int(3)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable10) /*String::append*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t partial_order___PartialOrder___select_smallests(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::select_smallests (src/metamodel//partial_order.nit:101,2--119:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*c*/ ==  NIT_NULL /*null*/) || (( variable0 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))( variable0 /*c*/,  NIT_NULL /*null*/) /*Collection::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_array___Array___init(); /*new Array[E]*/
    goto return_label14;
  }
  variable1 = ((partial_order___PartialOrder___has_all_t)CALL( self,COLOR_partial_order___PartialOrder___has_all))( self,  variable0 /*c*/) /*PartialOrder::has_all*/;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//partial_order.nit:105,3--18\n"); nit_exit(1);}
  variable2 = ((abstract_collection___Collection___length_t)CALL( variable0 /*c*/,COLOR_abstract_collection___Collection___length))( variable0 /*c*/) /*Collection::length*/;
  variable3 = NEW_array___Array___with_capacity(variable2); /*new Array[E]*/
  variable2 = variable3;
  variable1 = variable2;
  variable3 = ((abstract_collection___Collection___length_t)CALL( variable0 /*c*/,COLOR_abstract_collection___Collection___length))( variable0 /*c*/) /*Collection::length*/;
  variable4 = NEW_array___Array___with_capacity(variable3); /*new Array[E]*/
  variable3 = variable4;
  variable2 = variable3;
  variable3 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*c*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*c*/) /*Collection::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
    variable6 = ((partial_order___PartialOrder___add_to_smallests_t)CALL( self,COLOR_partial_order___PartialOrder___add_to_smallests))( self,  variable4 /*e*/,  variable1 /*res*/,  variable2 /*tmp*/) /*PartialOrder::add_to_smallests*/;
    variable5 = variable6;
    if (UNTAG_Bool( variable5 /*r*/)) { /*if*/
      variable6 =  variable2 /*tmp*/;
      variable2 =  variable1 /*res*/ /*tmp=*/;
      variable1 =  variable6 /*t*/ /*res=*/;
    }
    continue_15: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
  }
  break_15: while(0);
  variable1 =  variable1 /*res*/;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___add(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::add (src/metamodel//partial_order.nit:122,2--134:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((partial_order___PartialOrder___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable0 /*e*/) /*PartialOrder::has*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { fprintf(stderr, "Assert failed: src/metamodel//partial_order.nit:125,3--18\n"); nit_exit(1);}
  variable2 = TAG_Bool(( variable1 /*supers*/ ==  NIT_NULL /*null*/) || (( variable1 /*supers*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*supers*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))( variable1 /*supers*/,  NIT_NULL /*null*/) /*Collection::==*/)))));
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = ((partial_order___PartialOrder___has_all_t)CALL( self,COLOR_partial_order___PartialOrder___has_all))( self,  variable1 /*supers*/) /*PartialOrder::has_all*/;
  }
  variable2 = variable3;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//partial_order.nit:126,3--41\n"); nit_exit(1);}
  variable3 = ((partial_order___PartialOrder___select_smallests_t)CALL( self,COLOR_partial_order___PartialOrder___select_smallests))( self,  variable1 /*supers*/) /*PartialOrder::select_smallests*/;
  variable2 = variable3;
  variable4 = ((partial_order___PartialOrder___new_poe_t)CALL( self,COLOR_partial_order___PartialOrder___new_poe))( self,  variable0 /*e*/,  variable2 /*directs*/) /*PartialOrder::new_poe*/;
  variable3 = variable4;
  variable4 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable4,COLOR_abstract_collection___Map_____braeq))(variable4,  variable0 /*e*/,  variable3 /*poe*/) /*Map::[]=*/;
  variable4 = ATTR_partial_order___PartialOrder____elements_list( self) /*PartialOrder::_elements_list*/;
  ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable0 /*e*/) /*Array::add*/;
  variable4 = TAG_Bool(( variable1 /*supers*/ ==  NIT_NULL /*null*/) || (( variable1 /*supers*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*supers*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))( variable1 /*supers*/,  NIT_NULL /*null*/) /*Collection::==*/)))));
  variable5 = variable4;
  if (!UNTAG_Bool(variable5)) { /* or */
    variable5 = ((abstract_collection___Collection___is_empty_t)CALL( variable1 /*supers*/,COLOR_abstract_collection___Collection___is_empty))( variable1 /*supers*/) /*Collection::is_empty*/;
  }
  variable4 = variable5;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ATTR_partial_order___PartialOrder____roots( self) /*PartialOrder::_roots*/;
    ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable0 /*e*/) /*Array::add*/;
  }
  variable2 =  variable3 /*poe*/;
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t partial_order___PartialOrder___has_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::has_all (src/metamodel//partial_order.nit:137,2--145:13)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*e*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*e*/) /*Collection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = ((partial_order___PartialOrder___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable2 /*i*/) /*PartialOrder::has*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label17;
    }
    continue_18: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_18: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrder___new_poe(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::new_poe (src/metamodel//partial_order.nit:148,2--151:52)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = NEW_partial_order___PartialOrderElement___init( self,  variable0 /*e*/,  variable1 /*directs*/); /*new PartialOrderElement[E]*/
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t partial_order___PartialOrder___add_to_smallests(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::add_to_smallests (src/metamodel//partial_order.nit:154,2--172:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  ((array___AbstractArray___clear_t)CALL( variable2 /*to*/,COLOR_abstract_collection___RemovableCollection___clear))( variable2 /*to*/) /*Array::clear*/;
  variable4 = ((partial_order___PartialOrder_____bra_t)CALL( self,COLOR_partial_order___PartialOrder_____bra))( self,  variable0 /*e*/) /*PartialOrder::[]*/;
  variable3 = variable4;
  variable4 = ((array___AbstractArray___iterator_t)CALL( variable1 /*from*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*from*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
    variable6 = ((partial_order___PartialOrderElement_____g_t)CALL( variable3 /*poe*/,COLOR_partial_order___PartialOrderElement_____g))( variable3 /*poe*/,  variable5 /*i*/) /*PartialOrderElement::>*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable3 =  TAG_Bool(false);
      goto return_label20;
    }
    variable6 = ((partial_order___PartialOrderElement_____l_t)CALL( variable3 /*poe*/,COLOR_partial_order___PartialOrderElement_____l))( variable3 /*poe*/,  variable5 /*i*/) /*PartialOrderElement::<*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable6)))) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*to*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*to*/,  variable5 /*i*/) /*Array::add*/;
    }
    continue_21: while(0);
    ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
  }
  break_21: while(0);
  ((array___AbstractArray___add_t)CALL( variable2 /*to*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*to*/,  variable0 /*e*/) /*Array::add*/;
  variable3 =  TAG_Bool(true);
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable3;
}
void partial_order___PartialOrder___compute_smallers_for(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::compute_smallers_for (src/metamodel//partial_order.nit:175,2--180:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((partial_order___PartialOrderElement___value_t)CALL( variable0 /*poe*/,COLOR_partial_order___PartialOrderElement___value))( variable0 /*poe*/) /*PartialOrderElement::value*/;
  variable2 = variable3;
  variable3 = ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/;
  variable3 = ((abstract_collection___Map___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Map::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*MapIterator::item*/;
    variable5 = ((partial_order___PartialOrderElement_____l_t)CALL( variable4 /*s*/,COLOR_partial_order___PartialOrderElement_____l))( variable4 /*s*/,  variable2 /*e*/) /*PartialOrderElement::<*/;
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = ((partial_order___PartialOrderElement___value_t)CALL( variable4 /*s*/,COLOR_partial_order___PartialOrderElement___value))( variable4 /*s*/) /*PartialOrderElement::value*/;
      ((abstract_collection___SimpleCollection___add_t)CALL( variable1 /*set*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*set*/, variable5) /*Set::add*/;
    }
    continue_23: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*MapIterator::next*/;
  }
  break_23: while(0);
  tracehead = trace.prev;
  return;
}
void partial_order___PartialOrder___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "partial_order::PartialOrder::init (src/metamodel//partial_order.nit:185,2--189:22)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PartialOrder].i]) return;
  variable0 = NEW_hash___HashMap___init(); /*new HashMap[E, PartialOrderElement[E]]*/
  ATTR_partial_order___PartialOrder____elements( self) /*PartialOrder::_elements*/ = variable0;
  variable0 = NEW_array___Array___init(); /*new Array[E]*/
  ATTR_partial_order___PartialOrder____elements_list( self) /*PartialOrder::_elements_list*/ = variable0;
  variable0 = NEW_array___Array___init(); /*new Array[E]*/
  ATTR_partial_order___PartialOrder____roots( self) /*PartialOrder::_roots*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PartialOrder].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t partial_order___PartialOrderElement___order(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::order (src/metamodel//partial_order.nit:194,2--195:37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
}
val_t partial_order___PartialOrderElement___value(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::value (src/metamodel//partial_order.nit:197,2--198:24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
}
val_t partial_order___PartialOrderElement___rank(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::rank (src/metamodel//partial_order.nit:200,2--204:25)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____rank( self) /*PartialOrderElement::_rank*/;
}
val_t partial_order___PartialOrderElement___direct_greaters(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::direct_greaters (src/metamodel//partial_order.nit:206,2--207:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____direct_greaters( self) /*PartialOrderElement::_direct_greaters*/;
}
val_t partial_order___PartialOrderElement___direct_smallers(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::direct_smallers (src/metamodel//partial_order.nit:209,2--210:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____direct_smallers( self) /*PartialOrderElement::_direct_smallers*/;
}
val_t partial_order___PartialOrderElement___greaters(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::greaters (src/metamodel//partial_order.nit:212,2--213:31)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/;
}
val_t partial_order___PartialOrderElement___greaters_and_self(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::greaters_and_self (src/metamodel//partial_order.nit:218,2--225:33)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrderElement____greaters_and_self_cache( self) /*PartialOrderElement::_greaters_and_self_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/;
    variable0 = ((array___Collection___to_a_t)CALL(variable0,COLOR_array___Collection___to_a))(variable0) /*Set::to_a*/;
    ATTR_partial_order___PartialOrderElement____greaters_and_self_cache( self) /*PartialOrderElement::_greaters_and_self_cache*/ = variable0;
    variable0 = ATTR_partial_order___PartialOrderElement____greaters_and_self_cache( self) /*PartialOrderElement::_greaters_and_self_cache*/;
    variable1 = ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
    ((array___AbstractArray___add_t)CALL(variable0,COLOR_abstract_collection___SimpleCollection___add))(variable0, variable1) /*Array::add*/;
  }
  variable0 = ATTR_partial_order___PartialOrderElement____greaters_and_self_cache( self) /*PartialOrderElement::_greaters_and_self_cache*/;
  goto return_label25;
  return_label25: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrderElement___smallers(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::smallers (src/metamodel//partial_order.nit:234,2--241:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrderElement____smallers_last_length( self) /*PartialOrderElement::_smallers_last_length*/;
  variable1 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
  variable1 = ((partial_order___PartialOrder___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*PartialOrder::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)<UNTAG_Int(variable1));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
    variable1 = ATTR_partial_order___PartialOrderElement____smallers_cache( self) /*PartialOrderElement::_smallers_cache*/;
    ((partial_order___PartialOrder___compute_smallers_for_t)CALL(variable0,COLOR_partial_order___PartialOrder___compute_smallers_for))(variable0,  self, variable1) /*PartialOrder::compute_smallers_for*/;
    variable0 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
    variable0 = ((partial_order___PartialOrder___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*PartialOrder::length*/;
    ATTR_partial_order___PartialOrderElement____smallers_last_length( self) /*PartialOrderElement::_smallers_last_length*/ = variable0;
  }
  variable0 = ATTR_partial_order___PartialOrderElement____smallers_cache( self) /*PartialOrderElement::_smallers_cache*/;
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrderElement___linear_extension(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::linear_extension (src/metamodel//partial_order.nit:247,2--269:32)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
      val_t variable3;
      val_t variable4;
      val_t variable5;
        val_t variable6;
        val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrderElement____linear_extension_cache( self) /*PartialOrderElement::_linear_extension_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable1 = NEW_array___Array___init(); /*new Array[E]*/
    variable0 = variable1;
    variable2 = NEW_array___Array___init(); /*new Array[E]*/
    variable1 = variable2;
    variable2 = ((partial_order___PartialOrderElement___value_t)CALL( self,COLOR_partial_order___PartialOrderElement___value))( self) /*PartialOrderElement::value*/;
    ((array___AbstractArray___add_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*res*/, variable2) /*Array::add*/;
    variable2 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL( self,COLOR_partial_order___PartialOrderElement___direct_greaters))( self) /*PartialOrderElement::direct_greaters*/;
    variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
    while (true) { /*for*/
      variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable3)) break; /*for*/
      variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
      variable5 = ((partial_order___PartialOrderElement___order_t)CALL( self,COLOR_partial_order___PartialOrderElement___order))( self) /*PartialOrderElement::order*/;
      variable5 = ((partial_order___PartialOrder_____bra_t)CALL(variable5,COLOR_partial_order___PartialOrder_____bra))(variable5,  variable3 /*s*/) /*PartialOrder::[]*/;
      variable5 = ((partial_order___PartialOrderElement___linear_extension_t)CALL(variable5,COLOR_partial_order___PartialOrderElement___linear_extension))(variable5) /*PartialOrderElement::linear_extension*/;
      variable4 = variable5;
      ((array___AbstractArray___clear_t)CALL( variable1 /*res2*/,COLOR_abstract_collection___RemovableCollection___clear))( variable1 /*res2*/) /*Array::clear*/;
      variable5 = ((array___AbstractArray___iterator_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*res*/) /*Array::iterator*/;
      while (true) { /*for*/
        variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable6)) break; /*for*/
        variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
        variable7 = ((array___AbstractArray___has_t)CALL( variable4 /*sl*/,COLOR_abstract_collection___Collection___has))( variable4 /*sl*/,  variable6 /*e*/) /*Array::has*/;
        if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable7)))) { /*if*/
          ((array___AbstractArray___add_t)CALL( variable1 /*res2*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*res2*/,  variable6 /*e*/) /*Array::add*/;
        }
        continue_29: while(0);
        ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
      }
      break_29: while(0);
      ((abstract_collection___IndexedCollection___append_t)CALL( variable1 /*res2*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*res2*/,  variable4 /*sl*/) /*Array::append*/;
      variable5 =  variable0 /*res*/;
      variable0 =  variable1 /*res2*/ /*res=*/;
      variable1 =  variable5 /*tmp*/ /*res2=*/;
      continue_28: while(0);
      ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
    }
    break_28: while(0);
    ATTR_partial_order___PartialOrderElement____linear_extension_cache( self) /*PartialOrderElement::_linear_extension_cache*/ =  variable0 /*res*/;
  }
  variable0 = ATTR_partial_order___PartialOrderElement____linear_extension_cache( self) /*PartialOrderElement::_linear_extension_cache*/;
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrderElement___reverse_linear_extension(val_t  self) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::reverse_linear_extension (src/metamodel//partial_order.nit:275,2--288:32)"};
  val_t variable0;
    val_t variable1;
      val_t variable2;
      val_t variable3;
      val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_partial_order___PartialOrderElement____reverse_linear_extension_cache( self) /*PartialOrderElement::_reverse_linear_extension_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable1 = NEW_hash___HashSet___init(); /*new HashSet[E]*/
    variable0 = variable1;
    variable1 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL( self,COLOR_partial_order___PartialOrderElement___direct_greaters))( self) /*PartialOrderElement::direct_greaters*/;
    variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
    while (true) { /*for*/
      variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable2)) break; /*for*/
      variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
      variable4 = ((partial_order___PartialOrderElement___order_t)CALL( self,COLOR_partial_order___PartialOrderElement___order))( self) /*PartialOrderElement::order*/;
      variable4 = ((partial_order___PartialOrder_____bra_t)CALL(variable4,COLOR_partial_order___PartialOrder_____bra))(variable4,  variable2 /*s*/) /*PartialOrder::[]*/;
      variable4 = ((partial_order___PartialOrderElement___linear_extension_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___linear_extension))(variable4) /*PartialOrderElement::linear_extension*/;
      variable3 = variable4;
      ((abstract_collection___SimpleCollection___add_all_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable0 /*res*/,  variable3 /*sl*/) /*HashSet::add_all*/;
      continue_31: while(0);
      ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
    }
    break_31: while(0);
    variable1 = ((partial_order___PartialOrderElement___value_t)CALL( self,COLOR_partial_order___PartialOrderElement___value))( self) /*PartialOrderElement::value*/;
    ((hash___HashSet___add_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*res*/, variable1) /*HashSet::add*/;
    variable1 = ((array___Collection___to_a_t)CALL( variable0 /*res*/,COLOR_array___Collection___to_a))( variable0 /*res*/) /*HashSet::to_a*/;
    ATTR_partial_order___PartialOrderElement____linear_extension_cache( self) /*PartialOrderElement::_linear_extension_cache*/ = variable1;
  }
  variable0 = ATTR_partial_order___PartialOrderElement____linear_extension_cache( self) /*PartialOrderElement::_linear_extension_cache*/;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t partial_order___PartialOrderElement_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::< (src/metamodel//partial_order.nit:291,2--294:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/;
  variable1 = ((abstract_collection___Collection___has_t)CALL(variable1,COLOR_abstract_collection___Collection___has))(variable1,  variable0 /*o*/) /*Set::has*/;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrderElement_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::<= (src/metamodel//partial_order.nit:297,2--300:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*o*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*o*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*o*/) /*Object::==*/)))));
  variable2 = variable1;
  if (!UNTAG_Bool(variable2)) { /* or */
    variable2 = ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/;
    variable2 = ((abstract_collection___Collection___has_t)CALL(variable2,COLOR_abstract_collection___Collection___has))(variable2,  variable0 /*o*/) /*Set::has*/;
  }
  variable1 = variable2;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrderElement_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::> (src/metamodel//partial_order.nit:303,2--306:27)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
  variable1 = ((partial_order___PartialOrder_____bra_t)CALL(variable1,COLOR_partial_order___PartialOrder_____bra))(variable1,  variable0 /*o*/) /*PartialOrder::[]*/;
  variable2 = ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
  variable1 = ((partial_order___PartialOrderElement_____l_t)CALL(variable1,COLOR_partial_order___PartialOrderElement_____l))(variable1, variable2) /*PartialOrderElement::<*/;
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t partial_order___PartialOrderElement_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::>= (src/metamodel//partial_order.nit:309,2--312:42)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*o*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*o*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*o*/) /*Object::==*/)))));
  variable2 = variable1;
  if (!UNTAG_Bool(variable2)) { /* or */
    variable2 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
    variable2 = ((partial_order___PartialOrder_____bra_t)CALL(variable2,COLOR_partial_order___PartialOrder_____bra))(variable2,  variable0 /*o*/) /*PartialOrder::[]*/;
    variable3 = ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/;
    variable2 = ((partial_order___PartialOrderElement_____l_t)CALL(variable2,COLOR_partial_order___PartialOrderElement_____l))(variable2, variable3) /*PartialOrderElement::<*/;
  }
  variable1 = variable2;
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable1;
}
void partial_order___PartialOrderElement___register_direct_smallers(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::register_direct_smallers (src/metamodel//partial_order.nit:315,2--317:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_partial_order___PartialOrderElement____direct_smallers( self) /*PartialOrderElement::_direct_smallers*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*e*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
void partial_order___PartialOrderElement___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "partial_order::PartialOrderElement::init (src/metamodel//partial_order.nit:320,2--343:11)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PartialOrderElement].i]) return;
  ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/ =  variable0 /*o*/;
  ATTR_partial_order___PartialOrderElement____value( self) /*PartialOrderElement::_value*/ =  variable1 /*e*/;
  ATTR_partial_order___PartialOrderElement____direct_greaters( self) /*PartialOrderElement::_direct_greaters*/ =  variable2 /*directs*/;
  variable3 = NEW_array___Array___init(); /*new Array[E]*/
  ATTR_partial_order___PartialOrderElement____direct_smallers( self) /*PartialOrderElement::_direct_smallers*/ = variable3;
  variable3 = NEW_hash___HashSet___init(); /*new HashSet[E]*/
  ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/ = variable3;
  variable3 = NEW_hash___HashSet___init(); /*new HashSet[E]*/
  ATTR_partial_order___PartialOrderElement____smallers_cache( self) /*PartialOrderElement::_smallers_cache*/ = variable3;
  variable4 = ATTR_partial_order___PartialOrderElement____greaters( self) /*PartialOrderElement::_greaters*/;
  variable3 = variable4;
  variable4 =  TAG_Int(0);
  variable5 = ((array___AbstractArray___iterator_t)CALL( variable2 /*directs*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*directs*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
    ((abstract_collection___SimpleCollection___add_t)CALL( variable3 /*g*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*g*/,  variable6 /*ee*/) /*Set::add*/;
    variable8 = ATTR_partial_order___PartialOrderElement____order( self) /*PartialOrderElement::_order*/;
    variable8 = ((partial_order___PartialOrder_____bra_t)CALL(variable8,COLOR_partial_order___PartialOrder_____bra))(variable8,  variable6 /*ee*/) /*PartialOrder::[]*/;
    variable7 = variable8;
    variable8 = ((partial_order___PartialOrderElement___rank_t)CALL( variable7 /*poee*/,COLOR_partial_order___PartialOrderElement___rank))( variable7 /*poee*/) /*PartialOrderElement::rank*/;
    variable8 = TAG_Bool(UNTAG_Int(variable8)>=UNTAG_Int( variable4 /*r*/));
    if (UNTAG_Bool(variable8)) { /*if*/
      variable8 = ((partial_order___PartialOrderElement___rank_t)CALL( variable7 /*poee*/,COLOR_partial_order___PartialOrderElement___rank))( variable7 /*poee*/) /*PartialOrderElement::rank*/;
      variable8 = TAG_Int(UNTAG_Int(variable8)+UNTAG_Int( TAG_Int(1)));
      variable4 = variable8 /*r=*/;
    }
    ((partial_order___PartialOrderElement___register_direct_smallers_t)CALL( variable7 /*poee*/,COLOR_partial_order___PartialOrderElement___register_direct_smallers))( variable7 /*poee*/,  variable1 /*e*/) /*PartialOrderElement::register_direct_smallers*/;
    variable8 = ((partial_order___PartialOrderElement___greaters_t)CALL( variable7 /*poee*/,COLOR_partial_order___PartialOrderElement___greaters))( variable7 /*poee*/) /*PartialOrderElement::greaters*/;
    variable8 = ((abstract_collection___Collection___iterator_t)CALL(variable8,COLOR_abstract_collection___Collection___iterator))(variable8) /*Set::iterator*/;
    while (true) { /*for*/
      variable9 = ((abstract_collection___Iterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable9)) break; /*for*/
      variable9 = ((abstract_collection___Iterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*Iterator::item*/;
      ((abstract_collection___SimpleCollection___add_t)CALL( variable3 /*g*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*g*/,  variable9 /*eee*/) /*Set::add*/;
      continue_39: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*Iterator::next*/;
    }
    break_39: while(0);
    continue_38: while(0);
    ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
  }
  break_38: while(0);
  ATTR_partial_order___PartialOrderElement____rank( self) /*PartialOrderElement::_rank*/ =  variable4 /*r*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PartialOrderElement].i] = 1;
  tracehead = trace.prev;
  return;
}
