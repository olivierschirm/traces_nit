#include "array._sep.h"
void array___AbstractArray___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::enlarge (bin/../lib/standard//array.nit:23,2--22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method enlarge called (bin/../lib/standard//array.nit:23,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t array___AbstractArray___length(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::length (bin/../lib/standard//array.nit:25,2--26:33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/;
}
val_t array___AbstractArray___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::is_empty (bin/../lib/standard//array.nit:28,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/;
  variable0 = TAG_Bool((variable0)==( TAG_Int(0)));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___AbstractArray___push(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::push (bin/../lib/standard//array.nit:30,2--34)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((array___AbstractArray___add_t)CALL( self,COLOR_abstract_collection___SimpleCollection___add))( self,  variable0 /*item*/) /*AbstractArray::add*/;
  tracehead = trace.prev;
  return;
}
val_t array___AbstractArray___pop(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::pop (bin/../lib/standard//array.nit:32,2--37:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((array___AbstractArray___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*AbstractArray::is_empty*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert 'not_empty'  failed: bin/../lib/standard//array.nit:34,3--32\n"); nit_exit(1);}
  variable1 = ((abstract_collection___IndexedCollection___last_t)CALL( self,COLOR_abstract_collection___IndexedCollection___last))( self) /*AbstractArray::last*/;
  variable0 = variable1;
  ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/ = TAG_Int(UNTAG_Int(ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/)-UNTAG_Int( TAG_Int(1)));
  variable0 =  variable0 /*r*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___AbstractArray___shift(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::shift (bin/../lib/standard//array.nit:40,2--51:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((array___AbstractArray___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*AbstractArray::is_empty*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert 'not_empty'  failed: bin/../lib/standard//array.nit:42,3--32\n"); nit_exit(1);}
  variable1 = ((abstract_collection___IndexedCollection___first_t)CALL( self,COLOR_abstract_collection___Collection___first))( self) /*AbstractArray::first*/;
  variable0 = variable1;
  variable1 =  TAG_Int(1);
  variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = TAG_Int(UNTAG_Int( variable1 /*i*/)-UNTAG_Int( TAG_Int(1)));
    variable4 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable1 /*i*/) /*AbstractArray::[]*/;
    ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable3, variable4) /*AbstractArray::[]=*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_4: while(0);
  }
  break_4: while(0);
  variable3 = TAG_Int(UNTAG_Int( variable2 /*l*/)-UNTAG_Int( TAG_Int(1)));
  ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/ = variable3;
  variable0 =  variable0 /*r*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___AbstractArray___unshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::unshift (bin/../lib/standard//array.nit:54,2--61:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = TAG_Int(UNTAG_Int( variable1 /*i*/)+UNTAG_Int( TAG_Int(1)));
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable1 /*i*/) /*AbstractArray::[]*/;
    ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable2, variable3) /*AbstractArray::[]=*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_6: while(0);
  }
  break_6: while(0);
  ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self,  TAG_Int(0),  variable0 /*item*/) /*AbstractArray::[]=*/;
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___insert(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::AbstractArray::insert (bin/../lib/standard//array.nit:64,2--68:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1)));
  ((array___AbstractArray___enlarge_t)CALL( self,COLOR_array___AbstractArray___enlarge))( self, variable2) /*AbstractArray::enlarge*/;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( variable1 /*pos*/));
  variable3 = TAG_Int(UNTAG_Int( variable1 /*pos*/)+UNTAG_Int( TAG_Int(1)));
  ((array___AbstractArray___copy_to_t)CALL( self,COLOR_array___AbstractArray___copy_to))( self,  variable1 /*pos*/, variable2,  self, variable3) /*AbstractArray::copy_to*/;
  ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self,  variable1 /*pos*/,  variable0 /*item*/) /*AbstractArray::[]=*/;
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::add (bin/../lib/standard//array.nit:71,2--44)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable1,  variable0 /*item*/) /*AbstractArray::[]=*/;
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___clear(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::clear (bin/../lib/standard//array.nit:73,2--32)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/ =  TAG_Int(0);
  tracehead = trace.prev;
  return;
}
val_t array___AbstractArray___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::has (bin/../lib/standard//array.nit:75,2--83:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable1 /*i*/) /*AbstractArray::[]*/;
    variable3 = TAG_Bool((variable3 ==  variable0 /*item*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label10;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_11: while(0);
  }
  break_11: while(0);
  variable1 =  TAG_Bool(false);
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::has_only (bin/../lib/standard//array.nit:86,2--94:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable1 /*i*/) /*AbstractArray::[]*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  variable0 /*item*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*item*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label12;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_13: while(0);
  }
  break_13: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___has_key(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::has_key (bin/../lib/standard//array.nit:97,2--66)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*index*/)<UNTAG_Int(variable2));
  }
  variable1 = variable2;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::count (bin/../lib/standard//array.nit:99,2--108:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable2 =  TAG_Int(0);
  variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable3 /*l*/));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable2 /*i*/) /*AbstractArray::[]*/;
    variable4 = TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*res*/;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_16: while(0);
  }
  break_16: while(0);
  variable1 =  variable1 /*res*/;
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___index_of(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::index_of (bin/../lib/standard//array.nit:111,2--58)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___index_of_from_t)CALL( self,COLOR_array___AbstractArray___index_of_from))( self,  variable0 /*item*/,  TAG_Int(0)) /*AbstractArray::index_of_from*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___last_index_of(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::last_index_of (bin/../lib/standard//array.nit:113,2--77)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  variable1 = ((array___AbstractArray___last_index_of_from_t)CALL( self,COLOR_array___AbstractArray___last_index_of_from))( self,  variable0 /*item*/, variable1) /*AbstractArray::last_index_of_from*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___AbstractArray___index_of_from(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::AbstractArray::index_of_from (bin/../lib/standard//array.nit:115,2--125:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  variable1 /*pos*/;
  variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable3 /*len*/));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable2 /*i*/) /*AbstractArray::[]*/;
    variable4 = TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable2 =  variable2 /*i*/;
      goto return_label19;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_20: while(0);
  }
  break_20: while(0);
  variable4 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable2 = variable4;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t array___AbstractArray___last_index_of_from(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::AbstractArray::last_index_of_from (bin/../lib/standard//array.nit:128,2--138:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  variable1 /*pos*/;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable2 /*i*/) /*AbstractArray::[]*/;
    variable3 = TAG_Bool((variable3 ==  variable0 /*item*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable2 =  variable2 /*i*/;
      goto return_label21;
    } else { /*if*/
      variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1))) /*i*/;
    }
    continue_22: while(0);
  }
  break_22: while(0);
  variable3 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable2 = variable3;
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t array___AbstractArray___reversed(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::reversed (bin/../lib/standard//array.nit:141,2--149:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/;
  variable0 = variable1;
  variable2 = NEW_array___Array___with_capacity( variable0 /*cmp*/); /*new Array[E]*/
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*cmp*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*cmp*/;
    variable2 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable0 /*cmp*/) /*AbstractArray::[]*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*result*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*result*/, variable2) /*Array::add*/;
    continue_24: while(0);
  }
  break_24: while(0);
  variable0 =  variable1 /*result*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___AbstractArray___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::remove (bin/../lib/standard//array.nit:152,2--51)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___index_of_t)CALL( self,COLOR_abstract_collection___IndexedCollection___index_of))( self,  variable0 /*item*/) /*AbstractArray::index_of*/;
  ((array___AbstractArray___remove_at_t)CALL( self,COLOR_abstract_collection___Map___remove_at))( self, variable1) /*AbstractArray::remove_at*/;
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___remove_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::remove_all (bin/../lib/standard//array.nit:154,2--159:28)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___AbstractArray___index_of_t)CALL( self,COLOR_abstract_collection___IndexedCollection___index_of))( self,  variable0 /*item*/) /*AbstractArray::index_of*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    ((array___AbstractArray___remove_at_t)CALL( self,COLOR_abstract_collection___Map___remove_at))( self,  variable1 /*i*/) /*AbstractArray::remove_at*/;
    variable2 = ((array___AbstractArray___index_of_from_t)CALL( self,COLOR_array___AbstractArray___index_of_from))( self,  variable0 /*item*/,  variable1 /*i*/) /*AbstractArray::index_of_from*/;
    variable1 = variable2 /*i=*/;
    continue_27: while(0);
  }
  break_27: while(0);
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::remove_at (bin/../lib/standard//array.nit:163,2--172:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
      val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int( variable1 /*l*/));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable3 = TAG_Int(UNTAG_Int( variable0 /*i*/)+UNTAG_Int( TAG_Int(1)));
    variable2 = variable3;
    while (true) { /*while*/
      variable3 = TAG_Bool(UNTAG_Int( variable2 /*j*/)<UNTAG_Int( variable1 /*l*/));
      if (!UNTAG_Bool(variable3)) break; /* while*/
      variable3 = TAG_Int(UNTAG_Int( variable2 /*j*/)-UNTAG_Int( TAG_Int(1)));
      variable4 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable2 /*j*/) /*AbstractArray::[]*/;
      ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable3, variable4) /*AbstractArray::[]=*/;
      variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*j*/;
      continue_29: while(0);
    }
    break_29: while(0);
    variable3 = TAG_Int(UNTAG_Int( variable1 /*l*/)-UNTAG_Int( TAG_Int(1)));
    ATTR_array___AbstractArray____length( self) /*AbstractArray::_length*/ = variable3;
  }
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___copy_to(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "array::AbstractArray::copy_to (bin/../lib/standard//array.nit:176,2--182:35)"};
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
  variable3 =  param3;
  variable4 =  variable1 /*len*/;
  while (true) { /*while*/
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*i*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(1))) /*i*/;
    variable5 = TAG_Int(UNTAG_Int( variable3 /*new_start*/)+UNTAG_Int( variable4 /*i*/));
    variable6 = TAG_Int(UNTAG_Int( variable0 /*start*/)+UNTAG_Int( variable4 /*i*/));
    variable6 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self, variable6) /*AbstractArray::[]*/;
    ((abstract_collection___Map_____braeq_t)CALL( variable2 /*dest*/,COLOR_abstract_collection___Map_____braeq))( variable2 /*dest*/, variable5, variable6) /*AbstractArray::[]=*/;
    continue_31: while(0);
  }
  break_31: while(0);
  tracehead = trace.prev;
  return;
}
void array___AbstractArray___output(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::output (bin/../lib/standard//array.nit:186,2--193:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int( variable1 /*l*/));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable0 /*i*/) /*AbstractArray::[]*/;
    variable2 = variable3;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*e*/ ==  NIT_NULL /*null*/) || (( variable2 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*e*/,COLOR_kernel___Object_____eqeq))( variable2 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      ((kernel___Object___output_t)CALL( variable2 /*e*/,COLOR_kernel___Object___output))( variable2 /*e*/) /*Object::output*/;
    }
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_33: while(0);
  }
  break_33: while(0);
  tracehead = trace.prev;
  return;
}
val_t array___AbstractArray___iterator(val_t  self) {
  struct trace_t trace = {NULL, "array::AbstractArray::iterator (bin/../lib/standard//array.nit:197,2--74)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_array___ArrayIterator___init( self); /*new ArrayIterator[E]*/
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___AbstractArray_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::AbstractArray::== (bin/../lib/standard//array.nit:199,2--211:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*o*/==NIT_NULL) || VAL_ISA( variable0 /*o*/, COLOR_AbstractArray, ID_AbstractArray)) /*cast AbstractArray[E]*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  if (!UNTAG_Bool(variable1)) { /* or */
    variable1 = TAG_Bool(IS_EQUAL_NN( variable0 /*o*/, NIT_NULL /*null*/));
  }
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label35;
  }
  variable1 = TAG_Bool(( variable0 /*o*/==NIT_NULL) || VAL_ISA( variable0 /*o*/, COLOR_AbstractArray, ID_AbstractArray)) /*cast AbstractArray[E]*/;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//array.nit:203,3--30\n"); nit_exit(1);}
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*AbstractArray::length*/;
  variable1 = variable2;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*o*/,COLOR_abstract_collection___Collection___length))( variable0 /*o*/) /*AbstractArray::length*/;
  variable2 = TAG_Bool((variable2)!=( variable1 /*l*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label35;
  }
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable1 /*l*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable2 /*i*/) /*AbstractArray::[]*/;
    variable4 = ((abstract_collection___Map_____bra_t)CALL( variable0 /*o*/,COLOR_abstract_collection___Map_____bra))( variable0 /*o*/,  variable2 /*i*/) /*AbstractArray::[]*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 == variable4) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3,variable4)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3, variable4) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label35;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_36: while(0);
  }
  break_36: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___Array_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::Array::[] (bin/../lib/standard//array.nit:227,2--230:21)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_array___AbstractArray____length( self) /*Array::_length*/;
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*index*/)<UNTAG_Int(variable2));
  }
  variable1 = variable2;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable1 = ATTR_array___Array____items( self) /*Array::_items*/;
  variable1 = UNBOX_NativeArray(variable1)[UNTAG_Int( variable0 /*index*/)];
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable1;
}
void array___Array_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::Array::[]= (bin/../lib/standard//array.nit:233,2--242:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ATTR_array___AbstractArray____length( self) /*Array::_length*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1)));
    variable3 = TAG_Bool(UNTAG_Int( variable0 /*index*/)<UNTAG_Int(variable3));
  }
  variable2 = variable3;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:235,3--50\n"); nit_exit(1);}
  variable2 = ATTR_array___Array____capacity( self) /*Array::_capacity*/;
  variable2 = TAG_Bool(UNTAG_Int(variable2)<=UNTAG_Int( variable0 /*index*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = TAG_Int(UNTAG_Int( variable0 /*index*/)+UNTAG_Int( TAG_Int(1)));
    ((array___Array___enlarge_t)CALL( self,COLOR_array___AbstractArray___enlarge))( self, variable2) /*Array::enlarge*/;
  }
  variable2 = ATTR_array___AbstractArray____length( self) /*Array::_length*/;
  variable2 = TAG_Bool(UNTAG_Int(variable2)<=UNTAG_Int( variable0 /*index*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = TAG_Int(UNTAG_Int( variable0 /*index*/)+UNTAG_Int( TAG_Int(1)));
    ATTR_array___AbstractArray____length( self) /*Array::_length*/ = variable2;
  }
  variable2 = ATTR_array___Array____items( self) /*Array::_items*/;
  UNBOX_NativeArray(variable2)[UNTAG_Int( variable0 /*index*/)]= variable1 /*item*/;
  tracehead = trace.prev;
  return;
}
void array___Array___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::Array::enlarge (bin/../lib/standard//array.nit:245,2--253:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___Array____capacity( self) /*Array::_capacity*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)<=UNTAG_Int( variable1 /*c*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label39;
  }
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*c*/)<=UNTAG_Int( variable0 /*cap*/));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = TAG_Int(UNTAG_Int( variable1 /*c*/)*UNTAG_Int( TAG_Int(2)));
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(2)));
    variable1 = variable2 /*c=*/;
    continue_40: while(0);
  }
  break_40: while(0);
  variable3 = BOX_NativeArray((val_t*)malloc((UNTAG_Int( variable1 /*c*/) * sizeof(val_t))));
  variable2 = variable3;
  variable3 = ATTR_array___Array____capacity( self) /*Array::_capacity*/;
  variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ATTR_array___Array____items( self) /*Array::_items*/;
    variable4 = ATTR_array___AbstractArray____length( self) /*Array::_length*/;
    (void)memcpy(UNBOX_NativeArray( variable2 /*a*/), UNBOX_NativeArray(variable3), UNTAG_Int(variable4)*sizeof(val_t));
  }
  ATTR_array___Array____items( self) /*Array::_items*/ =  variable2 /*a*/;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ =  variable1 /*c*/;
  return_label39: while(false);
  tracehead = trace.prev;
  return;
}
void array___Array___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "array::Array::init (bin/../lib/standard//array.nit:256,2--260:13)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i]) return;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ =  TAG_Int(0);
  ATTR_array___AbstractArray____length( self) /*Array::_length*/ =  TAG_Int(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i] = 1;
  tracehead = trace.prev;
  return;
}
void array___Array___with(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "array::Array::with (bin/../lib/standard//array.nit:263,2--268:26)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  /* check if p<Array[E] with p:E */
  if (( param0!=NIT_NULL) && !VAL_ISA( param0, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//array.nit:264,12--24\n"); nit_exit(1); } /*cast Array[E]*/;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i]) return;
  variable1 = ATTR_array___Array____items( variable0 /*objects*/) /*Array::_items*/;
  ATTR_array___Array____items( self) /*Array::_items*/ = variable1;
  variable1 = ATTR_array___Array____capacity( variable0 /*objects*/) /*Array::_capacity*/;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ = variable1;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*objects*/,COLOR_abstract_collection___Collection___length))( variable0 /*objects*/) /*Array::length*/;
  ATTR_array___AbstractArray____length( self) /*Array::_length*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i] = 1;
  tracehead = trace.prev;
  return;
}
void array___Array___with_capacity(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "array::Array::with_capacity (bin/../lib/standard//array.nit:271,2--277:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i]) return;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'positive'  failed: bin/../lib/standard//array.nit:274,3--27\n"); nit_exit(1);}
  variable1 = BOX_NativeArray((val_t*)malloc((UNTAG_Int( variable0 /*cap*/) * sizeof(val_t))));
  ATTR_array___Array____items( self) /*Array::_items*/ = variable1;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ =  variable0 /*cap*/;
  ATTR_array___AbstractArray____length( self) /*Array::_length*/ =  TAG_Int(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i] = 1;
  tracehead = trace.prev;
  return;
}
void array___Array___filled_with(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "array::Array::filled_with (bin/../lib/standard//array.nit:280,2--290:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i]) return;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*count*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert 'positive'  failed: bin/../lib/standard//array.nit:283,3--29\n"); nit_exit(1);}
  variable2 = BOX_NativeArray((val_t*)malloc((UNTAG_Int( variable1 /*count*/) * sizeof(val_t))));
  ATTR_array___Array____items( self) /*Array::_items*/ = variable2;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ =  variable1 /*count*/;
  ATTR_array___AbstractArray____length( self) /*Array::_length*/ =  variable1 /*count*/;
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable1 /*count*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    ((array___Array_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self,  variable2 /*i*/,  variable0 /*value*/) /*Array::[]=*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_45: while(0);
  }
  break_45: while(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i] = 1;
  tracehead = trace.prev;
  return;
}
void array___Array___with_native(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "array::Array::with_native (bin/../lib/standard//array.nit:294,2--300:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i]) return;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*size*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert 'positive'  failed: bin/../lib/standard//array.nit:297,3--28\n"); nit_exit(1);}
  ATTR_array___Array____items( self) /*Array::_items*/ =  variable0 /*nat*/;
  ATTR_array___Array____capacity( self) /*Array::_capacity*/ =  variable1 /*size*/;
  ATTR_array___AbstractArray____length( self) /*Array::_length*/ =  variable1 /*size*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Array].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayIterator::item (bin/../lib/standard//array.nit:313,2--40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayIterator____array( self) /*ArrayIterator::_array*/;
  variable1 = ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/;
  variable0 = ((abstract_collection___Map_____bra_t)CALL(variable0,COLOR_abstract_collection___Map_____bra))(variable0, variable1) /*AbstractArray::[]*/;
  goto return_label47;
  return_label47: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArrayIterator___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayIterator::item= (bin/../lib/standard//array.nit:315,2--42)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArrayIterator____array( self) /*ArrayIterator::_array*/;
  variable2 = ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*e*/) /*AbstractArray::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayIterator::is_ok (bin/../lib/standard//array.nit:317,2--50)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/;
  variable1 = ATTR_array___ArrayIterator____array( self) /*ArrayIterator::_array*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*AbstractArray::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)<UNTAG_Int(variable1));
  goto return_label49;
  return_label49: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArrayIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayIterator::next (bin/../lib/standard//array.nit:319,2--31)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/ = TAG_Int(UNTAG_Int(ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/)+UNTAG_Int( TAG_Int(1)));
  tracehead = trace.prev;
  return;
}
void array___ArrayIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "array::ArrayIterator::init (bin/../lib/standard//array.nit:321,2--325:12)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArrayIterator].i]) return;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*a*/ ==  NIT_NULL /*null*/) || (( variable0 /*a*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable0 /*a*/,COLOR_kernel___Object_____eqeq))( variable0 /*a*/,  NIT_NULL /*null*/) /*AbstractArray::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'not_nil'  failed: bin/../lib/standard//array.nit:323,3--27\n"); nit_exit(1);}
  ATTR_array___ArrayIterator____array( self) /*ArrayIterator::_array*/ =  variable0 /*a*/;
  ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/ =  TAG_Int(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArrayIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayIterator___index(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayIterator::index (bin/../lib/standard//array.nit:328,2--32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_array___ArrayIterator____index( self) /*ArrayIterator::_index*/;
}
val_t array___ArraySet___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::has (bin/../lib/standard//array.nit:340,2--41)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable1 = ((array___AbstractArray___has_t)CALL(variable1,COLOR_abstract_collection___Collection___has))(variable1,  variable0 /*e*/) /*Array::has*/;
  goto return_label52;
  return_label52: while(false);
  tracehead = trace.prev;
  return variable1;
}
void array___ArraySet___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::add (bin/../lib/standard//array.nit:342,2--60)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable1 = ((array___AbstractArray___has_t)CALL(variable1,COLOR_abstract_collection___Collection___has))(variable1,  variable0 /*e*/) /*Array::has*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
    ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*e*/) /*Array::add*/;
  }
  tracehead = trace.prev;
  return;
}
val_t array___ArraySet___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySet::is_empty (bin/../lib/standard//array.nit:344,2--46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable0 = ((array___AbstractArray___is_empty_t)CALL(variable0,COLOR_abstract_collection___Collection___is_empty))(variable0) /*Array::is_empty*/;
  goto return_label54;
  return_label54: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArraySet___length(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySet::length (bin/../lib/standard//array.nit:346,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  goto return_label55;
  return_label55: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArraySet___first(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySet::first (bin/../lib/standard//array.nit:348,2--351:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//array.nit:350,3--26\n"); nit_exit(1);}
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable0 = ((abstract_collection___IndexedCollection___first_t)CALL(variable0,COLOR_abstract_collection___Collection___first))(variable0) /*Array::first*/;
  goto return_label56;
  return_label56: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArraySet___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::remove (bin/../lib/standard//array.nit:354,2--357:28)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable2 = ((array___AbstractArray___index_of_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___index_of))(variable2,  variable0 /*item*/) /*Array::index_of*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((array___ArraySet___remove_at_t)CALL( self,COLOR_array___ArraySet___remove_at))( self,  variable1 /*i*/) /*ArraySet::remove_at*/;
  }
  tracehead = trace.prev;
  return;
}
void array___ArraySet___remove_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::remove_all (bin/../lib/standard//array.nit:360,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((array___ArraySet___remove_t)CALL( self,COLOR_abstract_collection___RemovableCollection___remove))( self,  variable0 /*item*/) /*ArraySet::remove*/;
  tracehead = trace.prev;
  return;
}
void array___ArraySet___clear(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySet::clear (bin/../lib/standard//array.nit:362,2--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  ((array___AbstractArray___clear_t)CALL(variable0,COLOR_abstract_collection___RemovableCollection___clear))(variable0) /*Array::clear*/;
  tracehead = trace.prev;
  return;
}
val_t array___ArraySet___iterator(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySet::iterator (bin/../lib/standard//array.nit:364,2--70)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable0 = ((array___AbstractArray___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Array::iterator*/;
  variable1 = NEW_array___ArraySetIterator___init(variable0); /*new ArraySetIterator[E]*/
  variable0 = variable1;
  goto return_label60;
  return_label60: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArraySet___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::enlarge (bin/../lib/standard//array.nit:366,2--367:45)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  ((array___Array___enlarge_t)CALL(variable1,COLOR_array___AbstractArray___enlarge))(variable1,  variable0 /*cap*/) /*Array::enlarge*/;
  tracehead = trace.prev;
  return;
}
void array___ArraySet___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArraySet::remove_at (bin/../lib/standard//array.nit:369,2--372:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable2 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  variable2 = ((abstract_collection___IndexedCollection___last_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___last))(variable2) /*Array::last*/;
  ((array___Array_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1,  variable0 /*i*/, variable2) /*Array::[]=*/;
  variable1 = ATTR_array___ArraySet____array( self) /*ArraySet::_array*/;
  ((array___AbstractArray___pop_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___pop))(variable1) /*Array::pop*/;
  tracehead = trace.prev;
  return;
}
void array___ArraySet___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "array::ArraySet::init (bin/../lib/standard//array.nit:375,2--376:29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySet].i]) return;
  variable0 = NEW_array___Array___init(); /*new Array[E]*/
  ATTR_array___ArraySet____array( self) /*ArraySet::_array*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySet].i] = 1;
  tracehead = trace.prev;
  return;
}
void array___ArraySet___with_capacity(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "array::ArraySet::with_capacity (bin/../lib/standard//array.nit:378,2--379:68)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySet].i]) return;
  variable1 = NEW_array___Array___with_capacity( variable0 /*i*/); /*new Array[E]*/
  ATTR_array___ArraySet____array( self) /*ArraySet::_array*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySet].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t array___ArraySetIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySetIterator::is_ok (bin/../lib/standard//array.nit:386,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySetIterator____iter( self) /*ArraySetIterator::_iter*/;
  variable0 = ((array___ArrayIterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*ArrayIterator::is_ok*/;
  goto return_label65;
  return_label65: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArraySetIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySetIterator::next (bin/../lib/standard//array.nit:388,2--30)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySetIterator____iter( self) /*ArraySetIterator::_iter*/;
  ((array___ArrayIterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*ArrayIterator::next*/;
  tracehead = trace.prev;
  return;
}
val_t array___ArraySetIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "array::ArraySetIterator::item (bin/../lib/standard//array.nit:390,2--40)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArraySetIterator____iter( self) /*ArraySetIterator::_iter*/;
  variable0 = ((array___ArrayIterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*ArrayIterator::item*/;
  goto return_label67;
  return_label67: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArraySetIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "array::ArraySetIterator::init (bin/../lib/standard//array.nit:392,2--45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySetIterator].i]) return;
  ATTR_array___ArraySetIterator____iter( self) /*ArraySetIterator::_iter*/ =  variable0 /*iter*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArraySetIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayMap_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::[] (bin/../lib/standard//array.nit:402,2--409:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___ArrayMap___index_t)CALL( self,COLOR_array___ArrayMap___index))( self,  variable0 /*key*/) /*ArrayMap::index*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable3 =  variable1 /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = variable2;
      variable5 = ATTR_array___AbstractArray____length(variable5) /*Array::_length*/;
      variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable4 = variable2;
    variable4 = ATTR_array___Array____items(variable4) /*Array::_items*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
    goto return_label70;
    return_label70: while(false);
    variable2 = variable4;
    variable2 = ((abstract_collection___Couple___second_t)CALL(variable2,COLOR_abstract_collection___Couple___second))(variable2) /*Couple::second*/;
    variable1 = variable2;
    goto return_label69;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label69;
  }
  return_label69: while(false);
  tracehead = trace.prev;
  return variable1;
}
void array___ArrayMap_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::ArrayMap::[]= (bin/../lib/standard//array.nit:413,2--420:40)"};
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
  variable3 = ((array___ArrayMap___index_t)CALL( self,COLOR_array___ArrayMap___index))( self,  variable0 /*key*/) /*ArrayMap::index*/;
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
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
    goto return_label72;
    return_label72: while(false);
    variable3 = variable5;
    ((abstract_collection___Couple___second__eq_t)CALL(variable3,COLOR_abstract_collection___Couple___second__eq))(variable3,  variable1 /*item*/) /*Couple::second=*/;
  } else { /*if*/
    variable3 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable4 = NEW_abstract_collection___Couple___init( variable0 /*key*/,  variable1 /*item*/); /*new Couple[K, E]*/
    ((array___AbstractArray___push_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___push))(variable3, variable4) /*Array::push*/;
  }
  tracehead = trace.prev;
  return;
}
val_t array___ArrayMap___has_key(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::has_key (bin/../lib/standard//array.nit:424,2--425:50)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___ArrayMap___index_t)CALL( self,COLOR_array___ArrayMap___index))( self,  variable0 /*key*/) /*ArrayMap::index*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>=UNTAG_Int( TAG_Int(0)));
  goto return_label73;
  return_label73: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___ArrayMap___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::has (bin/../lib/standard//array.nit:427,2--431:14)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((abstract_collection___Couple___second_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Couple___second))( variable2 /*i*/) /*Couple::second*/;
    variable3 = TAG_Bool((variable3 ==  variable0 /*item*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label74;
    }
    continue_75: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_75: while(0);
  variable1 =  TAG_Bool(false);
  goto return_label74;
  return_label74: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___ArrayMap___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::has_only (bin/../lib/standard//array.nit:434,2--438:13)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((abstract_collection___Couple___second_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Couple___second))( variable2 /*i*/) /*Couple::second*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  variable0 /*item*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*item*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label76;
    }
    continue_77: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_77: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label76;
  return_label76: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___ArrayMap___length(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayMap::length (bin/../lib/standard//array.nit:441,2--442:42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  goto return_label78;
  return_label78: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArrayMap___first(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayMap::first (bin/../lib/standard//array.nit:444,2--46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable0 = ((abstract_collection___IndexedCollection___first_t)CALL(variable0,COLOR_abstract_collection___Collection___first))(variable0) /*Array::first*/;
  variable0 = ((abstract_collection___Couple___first_t)CALL(variable0,COLOR_abstract_collection___Couple___first))(variable0) /*Couple::first*/;
  goto return_label79;
  return_label79: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArrayMap___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::count (bin/../lib/standard//array.nit:446,2--451:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((abstract_collection___Couple___second_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Couple___second))( variable3 /*i*/) /*Couple::second*/;
    variable4 = TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    }
    continue_81: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_81: while(0);
  variable1 =  variable1 /*nb*/;
  goto return_label80;
  return_label80: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t array___ArrayMap___iterator(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayMap::iterator (bin/../lib/standard//array.nit:454,2--99)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable0 = ((array___AbstractArray___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Array::iterator*/;
  variable1 = NEW_abstract_collection___CoupleMapIterator___init(variable0); /*new CoupleMapIterator[K, E]*/
  variable0 = variable1;
  goto return_label82;
  return_label82: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArrayMap___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayMap::is_empty (bin/../lib/standard//array.nit:456,2--46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable0 = ((array___AbstractArray___is_empty_t)CALL(variable0,COLOR_abstract_collection___Collection___is_empty))(variable0) /*Array::is_empty*/;
  goto return_label83;
  return_label83: while(false);
  tracehead = trace.prev;
  return variable0;
}
void array___ArrayMap___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::remove (bin/../lib/standard//array.nit:458,2--466:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable3 =  variable1 /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = variable2;
      variable5 = ATTR_array___AbstractArray____length(variable5) /*Array::_length*/;
      variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable4 = variable2;
    variable4 = ATTR_array___Array____items(variable4) /*Array::_items*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
    goto return_label86;
    return_label86: while(false);
    variable2 = variable4;
    variable2 = ((abstract_collection___Couple___second_t)CALL(variable2,COLOR_abstract_collection___Couple___second))(variable2) /*Couple::second*/;
    variable2 = TAG_Bool((variable2 ==  variable0 /*item*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable2)) { /*if*/
      ((array___ArrayMap___remove_at_index_t)CALL( self,COLOR_array___ArrayMap___remove_at_index))( self,  variable1 /*i*/) /*ArrayMap::remove_at_index*/;
      goto return_label84;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_85: while(0);
  }
  break_85: while(0);
  return_label84: while(false);
  tracehead = trace.prev;
  return;
}
void array___ArrayMap___remove_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::remove_all (bin/../lib/standard//array.nit:470,2--477:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable3 =  variable1 /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = variable2;
      variable5 = ATTR_array___AbstractArray____length(variable5) /*Array::_length*/;
      variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable4 = variable2;
    variable4 = ATTR_array___Array____items(variable4) /*Array::_items*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
    goto return_label89;
    return_label89: while(false);
    variable2 = variable4;
    variable2 = ((abstract_collection___Couple___second_t)CALL(variable2,COLOR_abstract_collection___Couple___second))(variable2) /*Couple::second*/;
    variable2 = TAG_Bool((variable2 ==  variable0 /*item*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable2)) { /*if*/
      ((array___ArrayMap___remove_at_index_t)CALL( self,COLOR_array___ArrayMap___remove_at_index))( self,  variable1 /*i*/) /*ArrayMap::remove_at_index*/;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_88: while(0);
  }
  break_88: while(0);
  tracehead = trace.prev;
  return;
}
void array___ArrayMap___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::remove_at (bin/../lib/standard//array.nit:481,2--484:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___ArrayMap___index_t)CALL( self,COLOR_array___ArrayMap___index))( self,  variable0 /*key*/) /*ArrayMap::index*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((array___ArrayMap___remove_at_index_t)CALL( self,COLOR_array___ArrayMap___remove_at_index))( self,  variable1 /*i*/) /*ArrayMap::remove_at_index*/;
  }
  tracehead = trace.prev;
  return;
}
void array___ArrayMap___clear(val_t  self) {
  struct trace_t trace = {NULL, "array::ArrayMap::clear (bin/../lib/standard//array.nit:487,2--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  ((array___AbstractArray___clear_t)CALL(variable0,COLOR_abstract_collection___RemovableCollection___clear))(variable0) /*Array::clear*/;
  tracehead = trace.prev;
  return;
}
void array___ArrayMap___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::enlarge (bin/../lib/standard//array.nit:489,2--490:45)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  ((array___Array___enlarge_t)CALL(variable1,COLOR_array___AbstractArray___enlarge))(variable1,  variable0 /*cap*/) /*Array::enlarge*/;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayMap___couple_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::couple_at (bin/../lib/standard//array.nit:492,2--498:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___ArrayMap___index_t)CALL( self,COLOR_array___ArrayMap___index))( self,  variable0 /*key*/) /*ArrayMap::index*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable3 =  variable1 /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = variable2;
      variable5 = ATTR_array___AbstractArray____length(variable5) /*Array::_length*/;
      variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable4 = variable2;
    variable4 = ATTR_array___Array____items(variable4) /*Array::_items*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
    goto return_label94;
    return_label94: while(false);
    variable2 = variable4;
    variable1 = variable2;
    goto return_label93;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label93;
  }
  return_label93: while(false);
  tracehead = trace.prev;
  return variable1;
}
void array___ArrayMap___remove_at_index(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::remove_at_index (bin/../lib/standard//array.nit:505,2--509:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ((abstract_collection___IndexedCollection___last_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___last))(variable2) /*Array::last*/;
  ((array___Array_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1,  variable0 /*i*/, variable2) /*Array::[]=*/;
  variable1 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  ((array___AbstractArray___pop_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___pop))(variable1) /*Array::pop*/;
  tracehead = trace.prev;
  return;
}
val_t array___ArrayMap___index(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayMap::index (bin/../lib/standard//array.nit:515,2--530:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___ArrayMap____last_index( self) /*ArrayMap::_last_index*/;
  variable1 = variable2;
  variable2 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*l*/)<UNTAG_Int(variable2));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable4 =  variable1 /*l*/;
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
    goto return_label97;
    return_label97: while(false);
    variable3 = variable5;
    variable3 = ((abstract_collection___Couple___first_t)CALL(variable3,COLOR_abstract_collection___Couple___first))(variable3) /*Couple::first*/;
    variable3 = TAG_Bool((variable3 ==  variable0 /*key*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*key*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*key*/) /*Object::==*/)))));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*l*/;
    goto return_label96;
  }
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
    variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*Array::length*/;
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int(variable3));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/;
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
    goto return_label99;
    return_label99: while(false);
    variable3 = variable5;
    variable3 = ((abstract_collection___Couple___first_t)CALL(variable3,COLOR_abstract_collection___Couple___first))(variable3) /*Couple::first*/;
    variable3 = TAG_Bool((variable3 ==  variable0 /*key*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*key*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*key*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      ATTR_array___ArrayMap____last_index( self) /*ArrayMap::_last_index*/ =  variable2 /*i*/;
      variable1 =  variable2 /*i*/;
      goto return_label96;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_98: while(0);
  }
  break_98: while(0);
  variable3 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable1 = variable3;
  goto return_label96;
  return_label96: while(false);
  tracehead = trace.prev;
  return variable1;
}
void array___ArrayMap___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "array::ArrayMap::init (bin/../lib/standard//array.nit:533,2--536:31)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArrayMap].i]) return;
  variable0 = NEW_array___Array___init(); /*new Array[Couple[K, E]]*/
  ATTR_array___ArrayMap____items( self) /*ArrayMap::_items*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ArrayMap].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t array___Iterator___to_a(val_t  self) {
  struct trace_t trace = {NULL, "array::Iterator::to_a (bin/../lib/standard//array.nit:543,2--551:12)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_array___Array___init(); /*new Array[E]*/
  variable0 = variable1;
  while (true) { /*while*/
    variable1 = ((abstract_collection___Iterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable1)) break; /* while*/
    variable1 = ((abstract_collection___Iterator___item_t)CALL( self,COLOR_abstract_collection___Iterator___item))( self) /*Iterator::item*/;
    ((array___AbstractArray___add_t)CALL( variable0 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*res*/, variable1) /*Array::add*/;
    ((abstract_collection___Iterator___next_t)CALL( self,COLOR_abstract_collection___Iterator___next))( self) /*Iterator::next*/;
    continue_102: while(0);
  }
  break_102: while(0);
  variable0 =  variable0 /*res*/;
  goto return_label101;
  return_label101: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___Collection___to_a(val_t  self) {
  struct trace_t trace = {NULL, "array::Collection::to_a (bin/../lib/standard//array.nit:556,2--559:22)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*Collection::iterator*/;
  variable0 = ((array___Iterator___to_a_t)CALL(variable0,COLOR_array___Iterator___to_a))(variable0) /*Iterator::to_a*/;
  goto return_label103;
  return_label103: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t array___ArrayCapable___calloc_array(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::ArrayCapable::calloc_array (bin/../lib/standard//array.nit:567,2--568:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeArray((val_t*)malloc((UNTAG_Int( param0) * sizeof(val_t))));
}
val_t array___NativeArray_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "array::NativeArray::[] (bin/../lib/standard//array.nit:573,2--23)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return UNBOX_NativeArray( self)[UNTAG_Int( param0)];
}
void array___NativeArray_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::NativeArray::[]= (bin/../lib/standard//array.nit:574,2--29)"};
  trace.prev = tracehead; tracehead = &trace;
  UNBOX_NativeArray( self)[UNTAG_Int( param0)]= param1;
  tracehead = trace.prev;
  return;
}
void array___NativeArray___copy_to(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "array::NativeArray::copy_to (bin/../lib/standard//array.nit:575,2--47)"};
  trace.prev = tracehead; tracehead = &trace;
  (void)memcpy(UNBOX_NativeArray( param0), UNBOX_NativeArray( self), UNTAG_Int( param1)*sizeof(val_t));
  tracehead = trace.prev;
  return;
}
