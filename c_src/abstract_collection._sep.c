#include "abstract_collection._sep.h"
val_t abstract_collection___Collection___iterator(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::iterator (bin/../lib/standard//abstract_collection.nit:42,2--43:26)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method iterator called (bin/../lib/standard//abstract_collection.nit:42,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::is_empty (bin/../lib/standard//abstract_collection.nit:45,2--46:20)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_empty called (bin/../lib/standard//abstract_collection.nit:45,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___length(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::length (bin/../lib/standard//abstract_collection.nit:48,2--49:17)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method length called (bin/../lib/standard//abstract_collection.nit:48,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::has (bin/../lib/standard//abstract_collection.nit:51,2--53:24)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method has called (bin/../lib/standard//abstract_collection.nit:51,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::has_only (bin/../lib/standard//abstract_collection.nit:55,2--58:29)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method has_only called (bin/../lib/standard//abstract_collection.nit:55,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::count (bin/../lib/standard//abstract_collection.nit:60,2--62:25)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method count called (bin/../lib/standard//abstract_collection.nit:60,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Collection___first(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Collection::first (bin/../lib/standard//abstract_collection.nit:64,2--65:14)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method first called (bin/../lib/standard//abstract_collection.nit:64,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___NaiveCollection___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::is_empty (bin/../lib/standard//abstract_collection.nit:72,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___NaiveCollection___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*NaiveCollection::length*/;
  variable0 = TAG_Bool((variable0)==( TAG_Int(0)));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___NaiveCollection___length(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::length (bin/../lib/standard//abstract_collection.nit:74,2--78:11)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  variable1 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*NaiveCollection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( variable0 /*nb*/)) /*nb*/;
    continue_2: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_2: while(0);
  variable0 =  variable0 /*nb*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___NaiveCollection___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::has (bin/../lib/standard//abstract_collection.nit:81,2--84:14)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*NaiveCollection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = TAG_Bool(( variable2 /*i*/ ==  variable0 /*item*/) || (( variable2 /*i*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*i*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*i*/, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*i*/,COLOR_kernel___Object_____eqeq))( variable2 /*i*/,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label3;
    }
    continue_4: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_4: while(0);
  variable1 =  TAG_Bool(false);
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___NaiveCollection___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::has_only (bin/../lib/standard//abstract_collection.nit:87,2--90:13)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*NaiveCollection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*i*/ ==  variable0 /*item*/) || (( variable2 /*i*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*i*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*i*/, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*i*/,COLOR_kernel___Object_____eqeq))( variable2 /*i*/,  variable0 /*item*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label5;
    }
    continue_6: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_6: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___NaiveCollection___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::count (bin/../lib/standard//abstract_collection.nit:93,2--97:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable2 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*NaiveCollection::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*Iterator::item*/;
    variable4 = TAG_Bool(( variable3 /*i*/ ==  variable0 /*item*/) || (( variable3 /*i*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*i*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*i*/, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*i*/,COLOR_kernel___Object_____eqeq))( variable3 /*i*/,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    }
    continue_8: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*Iterator::next*/;
  }
  break_8: while(0);
  variable1 =  variable1 /*nb*/;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___NaiveCollection___first(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::NaiveCollection::first (bin/../lib/standard//abstract_collection.nit:100,2--103:22)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___NaiveCollection___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*NaiveCollection::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//abstract_collection.nit:102,3--19\n"); nit_exit(1);}
  variable0 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*NaiveCollection::iterator*/;
  variable0 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
  goto return_label9;
  return_label9: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___Iterator___item(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Iterator::item (bin/../lib/standard//abstract_collection.nit:110,2--112:13)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method item called (bin/../lib/standard//abstract_collection.nit:110,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void abstract_collection___Iterator___next(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Iterator::next (bin/../lib/standard//abstract_collection.nit:114,2--116:10)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method next called (bin/../lib/standard//abstract_collection.nit:114,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Iterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Iterator::is_ok (bin/../lib/standard//abstract_collection.nit:118,2--119:17)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_ok called (bin/../lib/standard//abstract_collection.nit:118,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___Container___first(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Container::first (bin/../lib/standard//abstract_collection.nit:126,2--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___Container____item( self) /*Container::_item*/;
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___Container___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Container::is_empty (bin/../lib/standard//abstract_collection.nit:128,2--36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___Container___length(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Container::length (bin/../lib/standard//abstract_collection.nit:130,2--30)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(1);
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___Container___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Container::has (bin/../lib/standard//abstract_collection.nit:132,2--51)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstract_collection___Container____item( self) /*Container::_item*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*an_item*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*an_item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*an_item*/) /*Object::==*/)))));
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___Container___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Container::has_only (bin/../lib/standard//abstract_collection.nit:134,2--56)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstract_collection___Container____item( self) /*Container::_item*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*an_item*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*an_item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*an_item*/) /*Object::==*/)))));
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___Container___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Container::count (bin/../lib/standard//abstract_collection.nit:136,2--141:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstract_collection___Container____item( self) /*Container::_item*/;
  variable1 = TAG_Bool((variable1 ==  variable0 /*an_item*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, variable0 /*an_item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  variable0 /*an_item*/) /*Object::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Int(1);
    goto return_label15;
  } else { /*if*/
    variable1 =  TAG_Int(0);
    goto return_label15;
  }
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___Container___iterator(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Container::iterator (bin/../lib/standard//abstract_collection.nit:145,2--60)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_abstract_collection___ContainerIterator___init( self); /*new ContainerIterator[E]*/
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___Container___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "abstract_collection::Container::init (bin/../lib/standard//abstract_collection.nit:147,2--148:24)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Container].i]) return;
  ATTR_abstract_collection___Container____item( self) /*Container::_item*/ =  variable0 /*e*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Container].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Container___item(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Container::item (bin/../lib/standard//abstract_collection.nit:150,2--151:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstract_collection___Container____item( self) /*Container::_item*/;
}
void abstract_collection___Container___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Container::item= (bin/../lib/standard//abstract_collection.nit:150,2--151:32)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstract_collection___Container____item( self) /*Container::_item*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___ContainerIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::ContainerIterator::item (bin/../lib/standard//abstract_collection.nit:157,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___ContainerIterator____container( self) /*ContainerIterator::_container*/;
  variable0 = ((abstract_collection___Container___item_t)CALL(variable0,COLOR_abstract_collection___Container___item))(variable0) /*Container::item*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___ContainerIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::ContainerIterator::next (bin/../lib/standard//abstract_collection.nit:159,2--34)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstract_collection___ContainerIterator____is_ok( self) /*ContainerIterator::_is_ok*/ =  TAG_Bool(false);
  tracehead = trace.prev;
  return;
}
void abstract_collection___ContainerIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "abstract_collection::ContainerIterator::init (bin/../lib/standard//abstract_collection.nit:161,2--40)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ContainerIterator].i]) return;
  ATTR_abstract_collection___ContainerIterator____container( self) /*ContainerIterator::_container*/ =  variable0 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ContainerIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___ContainerIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::ContainerIterator::is_ok (bin/../lib/standard//abstract_collection.nit:163,2--40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstract_collection___ContainerIterator____is_ok( self) /*ContainerIterator::_is_ok*/;
}
void abstract_collection___RemovableCollection___clear(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::RemovableCollection::clear (bin/../lib/standard//abstract_collection.nit:171,2--172:11)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method clear called (bin/../lib/standard//abstract_collection.nit:171,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstract_collection___RemovableCollection___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::RemovableCollection::remove (bin/../lib/standard//abstract_collection.nit:174,2--175:20)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method remove called (bin/../lib/standard//abstract_collection.nit:174,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstract_collection___RemovableCollection___remove_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::RemovableCollection::remove_all (bin/../lib/standard//abstract_collection.nit:177,2--178:59)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  while (true) { /*while*/
    variable1 = ((abstract_collection___Collection___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable0 /*item*/) /*RemovableCollection::has*/;
    if (!UNTAG_Bool(variable1)) break; /* while*/
    ((abstract_collection___RemovableCollection___remove_t)CALL( self,COLOR_abstract_collection___RemovableCollection___remove))( self,  variable0 /*item*/) /*RemovableCollection::remove*/;
    continue_22: while(0);
  }
  break_22: while(0);
  tracehead = trace.prev;
  return;
}
void abstract_collection___SimpleCollection___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::SimpleCollection::add (bin/../lib/standard//abstract_collection.nit:184,2--186:17)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method add called (bin/../lib/standard//abstract_collection.nit:184,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstract_collection___SimpleCollection___add_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::SimpleCollection::add_all (bin/../lib/standard//abstract_collection.nit:188,2--189:81)"};
  val_t variable0;
  val_t variable1;
      val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*coll*/ ==  NIT_NULL /*null*/) || (( variable0 /*coll*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*coll*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*coll*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*coll*/,COLOR_kernel___Object_____eqeq))( variable0 /*coll*/,  NIT_NULL /*null*/) /*Collection::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*coll*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*coll*/) /*Collection::iterator*/;
    while (true) { /*for*/
      variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable2)) break; /*for*/
      variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
      ((abstract_collection___SimpleCollection___add_t)CALL( self,COLOR_abstract_collection___SimpleCollection___add))( self,  variable2 /*i*/) /*SimpleCollection::add*/;
      continue_24: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
    }
    break_24: while(0);
  }
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Set___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Set::has_only (bin/../lib/standard//abstract_collection.nit:204,2--212:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___Collection___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*Set::length*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*l*/)==( TAG_Int(1)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((abstract_collection___Collection___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable0 /*item*/) /*Set::has*/;
    variable1 = variable2;
    goto return_label25;
  } else { /*if*/
    variable2 = TAG_Bool(( variable1 /*l*/)==( TAG_Int(0)));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label25;
    } else { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label25;
    }
  }
  return_label25: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___Set___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Set::count (bin/../lib/standard//abstract_collection.nit:216,2--222:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___Collection___has_t)CALL( self,COLOR_abstract_collection___Collection___has))( self,  variable0 /*item*/) /*Set::has*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Int(1);
    goto return_label26;
  } else { /*if*/
    variable1 =  TAG_Int(0);
    goto return_label26;
  }
  return_label26: while(false);
  tracehead = trace.prev;
  return variable1;
}
void abstract_collection___Set___remove_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Set::remove_all (bin/../lib/standard//abstract_collection.nit:226,2--227:43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((abstract_collection___RemovableCollection___remove_t)CALL( self,COLOR_abstract_collection___RemovableCollection___remove))( self,  variable0 /*item*/) /*Set::remove*/;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Map_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Map::[] (bin/../lib/standard//abstract_collection.nit:244,2--245:19)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method [] called (bin/../lib/standard//abstract_collection.nit:244,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void abstract_collection___Map_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstract_collection::Map::[]= (bin/../lib/standard//abstract_collection.nit:247,2--248:25)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method []= called (bin/../lib/standard//abstract_collection.nit:247,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Map___has_key(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Map::has_key (bin/../lib/standard//abstract_collection.nit:250,2--251:27)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method has_key called (bin/../lib/standard//abstract_collection.nit:250,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void abstract_collection___Map___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Map::remove_at (bin/../lib/standard//abstract_collection.nit:253,2--254:22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method remove_at called (bin/../lib/standard//abstract_collection.nit:253,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstract_collection___Map___recover_with(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Map::recover_with (bin/../lib/standard//abstract_collection.nit:256,2--263:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___Map___iterator_t)CALL( variable0 /*map*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*map*/) /*Map::iterator*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___is_ok))( variable1 /*i*/) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ((abstract_collection___MapIterator___key_t)CALL( variable1 /*i*/,COLOR_abstract_collection___MapIterator___key))( variable1 /*i*/) /*MapIterator::key*/;
    variable3 = ((abstract_collection___Iterator___item_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___item))( variable1 /*i*/) /*MapIterator::item*/;
    ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable2, variable3) /*Map::[]=*/;
    ((abstract_collection___Iterator___next_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___next))( variable1 /*i*/) /*MapIterator::next*/;
    continue_29: while(0);
  }
  break_29: while(0);
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Map___iterator(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Map::iterator (bin/../lib/standard//abstract_collection.nit:267,2--38)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method iterator called (bin/../lib/standard//abstract_collection.nit:267,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___MapIterator___key(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::MapIterator::key (bin/../lib/standard//abstract_collection.nit:273,2--274:12)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method key called (bin/../lib/standard//abstract_collection.nit:273,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void abstract_collection___MapIterator___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::MapIterator::item= (bin/../lib/standard//abstract_collection.nit:276,2--277:19)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method item= called (bin/../lib/standard//abstract_collection.nit:276,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___IndexedCollection___first(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::first (bin/../lib/standard//abstract_collection.nit:285,2--290:15)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___Collection___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*IndexedCollection::is_empty*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert 'not_empty'  failed: bin/../lib/standard//abstract_collection.nit:289,3--32\n"); nit_exit(1);}
  variable0 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  TAG_Int(0)) /*IndexedCollection::[]*/;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___IndexedCollection___first__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::first= (bin/../lib/standard//abstract_collection.nit:293,2--296:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self,  TAG_Int(0),  variable0 /*item*/) /*IndexedCollection::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___IndexedCollection___last(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::last (bin/../lib/standard//abstract_collection.nit:298,2--303:22)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___Collection___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*IndexedCollection::is_empty*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert 'not_empty'  failed: bin/../lib/standard//abstract_collection.nit:302,3--32\n"); nit_exit(1);}
  variable0 = ((abstract_collection___Collection___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*IndexedCollection::length*/;
  variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1)));
  variable0 = ((abstract_collection___Map_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self, variable0) /*IndexedCollection::[]*/;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___IndexedCollection___last__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::last= (bin/../lib/standard//abstract_collection.nit:306,2--314:17)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___Collection___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*IndexedCollection::length*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*l*/)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = TAG_Int(UNTAG_Int( variable1 /*l*/)-UNTAG_Int( TAG_Int(1)));
    ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable2,  variable0 /*item*/) /*IndexedCollection::[]=*/;
  } else { /*if*/
    ((abstract_collection___Map_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self,  TAG_Int(0),  variable0 /*item*/) /*IndexedCollection::[]=*/;
  }
  tracehead = trace.prev;
  return;
}
void abstract_collection___IndexedCollection___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::add (bin/../lib/standard//abstract_collection.nit:318,2--319:28)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((abstract_collection___IndexedCollection___push_t)CALL( self,COLOR_abstract_collection___IndexedCollection___push))( self,  variable0 /*e*/) /*IndexedCollection::push*/;
  tracehead = trace.prev;
  return;
}
void abstract_collection___IndexedCollection___push(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::push (bin/../lib/standard//abstract_collection.nit:321,2--322:15)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method push called (bin/../lib/standard//abstract_collection.nit:321,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstract_collection___IndexedCollection___append(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::append (bin/../lib/standard//abstract_collection.nit:324,2--325:81)"};
  val_t variable0;
  val_t variable1;
      val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*coll*/ ==  NIT_NULL /*null*/) || (( variable0 /*coll*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*coll*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*coll*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*coll*/,COLOR_kernel___Object_____eqeq))( variable0 /*coll*/,  NIT_NULL /*null*/) /*Collection::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*coll*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*coll*/) /*Collection::iterator*/;
    while (true) { /*for*/
      variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable2)) break; /*for*/
      variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
      ((abstract_collection___IndexedCollection___push_t)CALL( self,COLOR_abstract_collection___IndexedCollection___push))( self,  variable2 /*i*/) /*IndexedCollection::push*/;
      continue_36: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
    }
    break_36: while(0);
  }
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___IndexedCollection___pop(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::pop (bin/../lib/standard//abstract_collection.nit:327,2--328:12)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method pop called (bin/../lib/standard//abstract_collection.nit:327,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void abstract_collection___IndexedCollection___unshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::unshift (bin/../lib/standard//abstract_collection.nit:330,2--331:18)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method unshift called (bin/../lib/standard//abstract_collection.nit:330,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___IndexedCollection___shift(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::shift (bin/../lib/standard//abstract_collection.nit:333,2--335:14)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method shift called (bin/../lib/standard//abstract_collection.nit:333,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___IndexedCollection___index_of(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::index_of (bin/../lib/standard//abstract_collection.nit:337,2--346:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___IndexedCollection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*IndexedCollection::iterator*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___is_ok))( variable1 /*i*/) /*IndexedIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___item))( variable1 /*i*/) /*IndexedIterator::item*/;
    variable2 = TAG_Bool((variable2 ==  variable0 /*item*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*item*/) /*Object::==*/)))));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((abstract_collection___IndexedIterator___index_t)CALL( variable1 /*i*/,COLOR_abstract_collection___IndexedIterator___index))( variable1 /*i*/) /*IndexedIterator::index*/;
      variable1 = variable2;
      goto return_label37;
    }
    ((abstract_collection___Iterator___next_t)CALL( variable1 /*i*/,COLOR_abstract_collection___Iterator___next))( variable1 /*i*/) /*IndexedIterator::next*/;
    continue_38: while(0);
  }
  break_38: while(0);
  variable2 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___IndexedCollection___iterator(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedCollection::iterator (bin/../lib/standard//abstract_collection.nit:349,2--39)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method iterator called (bin/../lib/standard//abstract_collection.nit:349,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___IndexedIterator___index(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedIterator::index (bin/../lib/standard//abstract_collection.nit:355,2--356:16)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method index called (bin/../lib/standard//abstract_collection.nit:355,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___IndexedIterator___key(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::IndexedIterator::key (bin/../lib/standard//abstract_collection.nit:358,2--359:31)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___IndexedIterator___index_t)CALL( self,COLOR_abstract_collection___IndexedIterator___index))( self) /*IndexedIterator::index*/;
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___CoupleMap___couple_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMap::couple_at (bin/../lib/standard//abstract_collection.nit:365,2--367:46)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method couple_at called (bin/../lib/standard//abstract_collection.nit:365,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t abstract_collection___CoupleMap_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMap::[] (bin/../lib/standard//abstract_collection.nit:369,2--375:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___CoupleMap___couple_at_t)CALL( self,COLOR_abstract_collection___CoupleMap___couple_at))( self,  variable0 /*key*/) /*CoupleMap::couple_at*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*c*/ ==  NIT_NULL /*null*/) || (( variable1 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*c*/,COLOR_kernel___Object_____eqeq))( variable1 /*c*/,  NIT_NULL /*null*/) /*Couple::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label40;
  } else { /*if*/
    variable2 = ((abstract_collection___Couple___second_t)CALL( variable1 /*c*/,COLOR_abstract_collection___Couple___second))( variable1 /*c*/) /*Couple::second*/;
    variable1 = variable2;
    goto return_label40;
  }
  return_label40: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___CoupleMap___has_key(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMap::has_key (bin/../lib/standard//abstract_collection.nit:379,2--57)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___CoupleMap___couple_at_t)CALL( self,COLOR_abstract_collection___CoupleMap___couple_at))( self,  variable0 /*key*/) /*CoupleMap::couple_at*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Couple::==*/)))))));
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstract_collection___CoupleMapIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::item (bin/../lib/standard//abstract_collection.nit:387,2--44)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
  variable0 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
  variable0 = ((abstract_collection___Couple___second_t)CALL(variable0,COLOR_abstract_collection___Couple___second))(variable0) /*Couple::second*/;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___CoupleMapIterator___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::item= (bin/../lib/standard//abstract_collection.nit:389,2--45)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
  variable1 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
  ((abstract_collection___Couple___second__eq_t)CALL(variable1,COLOR_abstract_collection___Couple___second__eq))(variable1,  variable0 /*e*/) /*Couple::second=*/;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___CoupleMapIterator___key(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::key (bin/../lib/standard//abstract_collection.nit:391,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
  variable0 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
  variable0 = ((abstract_collection___Couple___first_t)CALL(variable0,COLOR_abstract_collection___Couple___first))(variable0) /*Couple::first*/;
  goto return_label44;
  return_label44: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstract_collection___CoupleMapIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::is_ok (bin/../lib/standard//abstract_collection.nit:393,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
  variable0 = ((abstract_collection___Iterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*Iterator::is_ok*/;
  goto return_label45;
  return_label45: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstract_collection___CoupleMapIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::next (bin/../lib/standard//abstract_collection.nit:395,2--398:56)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
  ((abstract_collection___Iterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*Iterator::next*/;
  while (true) { /*while*/
    variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
    variable0 = ((abstract_collection___Iterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*Iterator::is_ok*/;
    variable1 = variable0;
    if (UNTAG_Bool(variable1)) { /* and */
      variable1 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
      variable1 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
      variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Couple::==*/)))));
    }
    variable0 = variable1;
    if (!UNTAG_Bool(variable0)) break; /* while*/
    variable0 = ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/;
    ((abstract_collection___Iterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*Iterator::next*/;
    continue_47: while(0);
  }
  break_47: while(0);
  tracehead = trace.prev;
  return;
}
void abstract_collection___CoupleMapIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "abstract_collection::CoupleMapIterator::init (bin/../lib/standard//abstract_collection.nit:403,2--44)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CoupleMapIterator].i]) return;
  ATTR_abstract_collection___CoupleMapIterator____iter( self) /*CoupleMapIterator::_iter*/ =  variable0 /*i*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CoupleMapIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Couple___first(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Couple::first (bin/../lib/standard//abstract_collection.nit:411,2--412:33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstract_collection___Couple____first( self) /*Couple::_first*/;
}
void abstract_collection___Couple___first__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Couple::first= (bin/../lib/standard//abstract_collection.nit:411,2--412:33)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstract_collection___Couple____first( self) /*Couple::_first*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstract_collection___Couple___second(val_t  self) {
  struct trace_t trace = {NULL, "abstract_collection::Couple::second (bin/../lib/standard//abstract_collection.nit:414,2--415:34)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstract_collection___Couple____second( self) /*Couple::_second*/;
}
void abstract_collection___Couple___second__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstract_collection::Couple::second= (bin/../lib/standard//abstract_collection.nit:414,2--415:34)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstract_collection___Couple____second( self) /*Couple::_second*/ =  param0;
  tracehead = trace.prev;
  return;
}
void abstract_collection___Couple___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "abstract_collection::Couple::init (bin/../lib/standard//abstract_collection.nit:417,2--421:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Couple].i]) return;
  ATTR_abstract_collection___Couple____first( self) /*Couple::_first*/ =  variable0 /*f*/;
  ATTR_abstract_collection___Couple____second( self) /*Couple::_second*/ =  variable1 /*s*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Couple].i] = 1;
  tracehead = trace.prev;
  return;
}
