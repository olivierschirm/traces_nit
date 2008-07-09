#include "sorter._sep.h"
val_t sorter___AbstractSorter___compare(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "sorter::AbstractSorter::compare (bin/../lib/standard//sorter.nit:22,2--27:40)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method compare called (bin/../lib/standard//sorter.nit:22,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void sorter___AbstractSorter___sort(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "sorter::AbstractSorter::sort (bin/../lib/standard//sorter.nit:29,2--30:64)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Collection___length))( variable0 /*array*/) /*Array::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  ((sorter___AbstractSorter___sub_sort_t)CALL( self,COLOR_sorter___AbstractSorter___sub_sort))( self,  variable0 /*array*/,  TAG_Int(0), variable1) /*AbstractSorter::sub_sort*/;
  tracehead = trace.prev;
  return;
}
void sorter___AbstractSorter___sub_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "sorter::AbstractSorter::sub_sort (bin/../lib/standard//sorter.nit:32,2--40:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 = TAG_Bool(UNTAG_Int( variable1 /*from*/)>=UNTAG_Int( variable2 /*to*/));
  if (UNTAG_Bool(variable3)) { /*if*/
    goto return_label1;
  } else { /*if*/
    variable3 = TAG_Int(UNTAG_Int( variable1 /*from*/)+UNTAG_Int( TAG_Int(7)));
    variable3 = TAG_Bool(UNTAG_Int(variable3)<UNTAG_Int( variable2 /*to*/));
    if (UNTAG_Bool(variable3)) { /*if*/
      ((sorter___AbstractSorter___quick_sort_t)CALL( self,COLOR_sorter___AbstractSorter___quick_sort))( self,  variable0 /*array*/,  variable1 /*from*/,  variable2 /*to*/) /*AbstractSorter::quick_sort*/;
    } else { /*if*/
      ((sorter___AbstractSorter___bubble_sort_t)CALL( self,COLOR_sorter___AbstractSorter___bubble_sort))( self,  variable0 /*array*/,  variable1 /*from*/,  variable2 /*to*/) /*AbstractSorter::bubble_sort*/;
    }
  }
  return_label1: while(false);
  tracehead = trace.prev;
  return;
}
void sorter___AbstractSorter___quick_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "sorter::AbstractSorter::quick_sort (bin/../lib/standard//sorter.nit:44,2--62:23)"};
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
  variable4 =  variable1 /*from*/;
  variable5 = TAG_Bool(UNTAG_Int( variable4 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable6 = variable5;
  if (UNTAG_Bool(variable6)) { /* and */
    variable6 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
    variable6 = TAG_Bool(UNTAG_Int( variable4 /*index*/)<UNTAG_Int(variable6));
  }
  variable5 = variable6;
  if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable5 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
  variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable4 /*index*/)];
  goto return_label3;
  return_label3: while(false);
  variable4 = variable5;
  variable3 = variable4;
  variable4 =  variable1 /*from*/;
  variable5 =  variable2 /*to*/;
  while (true) { /*while*/
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*j*/)>UNTAG_Int( variable4 /*i*/));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    while (true) { /*while*/
      variable6 = TAG_Bool(UNTAG_Int( variable4 /*i*/)<=UNTAG_Int( variable2 /*to*/));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 =  variable4 /*i*/;
        variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable9 = variable8;
        if (UNTAG_Bool(variable9)) { /* and */
          variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
          variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
        }
        variable8 = variable9;
        if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
        variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
        goto return_label6;
        return_label6: while(false);
        variable7 = variable8;
        variable7 = ((sorter___AbstractSorter___compare_t)CALL( self,COLOR_sorter___AbstractSorter___compare))( self, variable7,  variable3 /*pivot*/) /*AbstractSorter::compare*/;
        variable7 = TAG_Bool(UNTAG_Int(variable7)<=UNTAG_Int( TAG_Int(0)));
      }
      variable6 = variable7;
      if (!UNTAG_Bool(variable6)) break; /* while*/
      variable4 = TAG_Int(UNTAG_Int(variable4)+UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_5: while(0);
    }
    break_5: while(0);
    while (true) { /*while*/
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*j*/)>UNTAG_Int( variable4 /*i*/));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 =  variable5 /*j*/;
        variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable9 = variable8;
        if (UNTAG_Bool(variable9)) { /* and */
          variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
          variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
        }
        variable8 = variable9;
        if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
        variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
        goto return_label8;
        return_label8: while(false);
        variable7 = variable8;
        variable7 = ((sorter___AbstractSorter___compare_t)CALL( self,COLOR_sorter___AbstractSorter___compare))( self, variable7,  variable3 /*pivot*/) /*AbstractSorter::compare*/;
        variable7 = TAG_Bool(UNTAG_Int(variable7)>=UNTAG_Int( TAG_Int(0)));
      }
      variable6 = variable7;
      if (!UNTAG_Bool(variable6)) break; /* while*/
      variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1))) /*j*/;
      continue_7: while(0);
    }
    break_7: while(0);
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*j*/)>UNTAG_Int( variable4 /*i*/));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable7 =  variable4 /*i*/;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label9;
      return_label9: while(false);
      variable7 = variable8;
      variable6 = variable7;
      variable7 =  variable5 /*j*/;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label10;
      return_label10: while(false);
      variable7 = variable8;
      ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/,  variable4 /*i*/, variable7) /*Array::[]=*/;
      ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/,  variable5 /*j*/,  variable6 /*t*/) /*Array::[]=*/;
    }
    continue_4: while(0);
  }
  break_4: while(0);
  variable6 = TAG_Int(UNTAG_Int( variable4 /*i*/)-UNTAG_Int( TAG_Int(1)));
  variable7 = variable6;
  variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable9 = variable8;
  if (UNTAG_Bool(variable9)) { /* and */
    variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
    variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
  }
  variable8 = variable9;
  if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
  variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
  goto return_label11;
  return_label11: while(false);
  variable6 = variable8;
  ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/,  variable1 /*from*/, variable6) /*Array::[]=*/;
  variable6 = TAG_Int(UNTAG_Int( variable4 /*i*/)-UNTAG_Int( TAG_Int(1)));
  ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/, variable6,  variable3 /*pivot*/) /*Array::[]=*/;
  variable6 = TAG_Int(UNTAG_Int( variable4 /*i*/)-UNTAG_Int( TAG_Int(2)));
  ((sorter___AbstractSorter___sub_sort_t)CALL( self,COLOR_sorter___AbstractSorter___sub_sort))( self,  variable0 /*array*/,  variable1 /*from*/, variable6) /*AbstractSorter::sub_sort*/;
  ((sorter___AbstractSorter___sub_sort_t)CALL( self,COLOR_sorter___AbstractSorter___sub_sort))( self,  variable0 /*array*/,  variable4 /*i*/,  variable2 /*to*/) /*AbstractSorter::sub_sort*/;
  tracehead = trace.prev;
  return;
}
void sorter___AbstractSorter___bubble_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "sorter::AbstractSorter::bubble_sort (bin/../lib/standard//sorter.nit:65,2--84:9)"};
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
  variable3 =  variable1 /*from*/;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)<UNTAG_Int( variable2 /*to*/));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 =  variable3 /*i*/;
    variable6 =  variable3 /*i*/;
    variable7 = TAG_Bool(UNTAG_Int( variable6 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable8 = variable7;
    if (UNTAG_Bool(variable8)) { /* and */
      variable8 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
      variable8 = TAG_Bool(UNTAG_Int( variable6 /*index*/)<UNTAG_Int(variable8));
    }
    variable7 = variable8;
    if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable7 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
    variable7 = UNBOX_NativeArray(variable7)[UNTAG_Int( variable6 /*index*/)];
    goto return_label14;
    return_label14: while(false);
    variable6 = variable7;
    variable5 = variable6;
    variable6 =  variable3 /*i*/;
    while (true) { /*while*/
      variable7 = TAG_Bool(UNTAG_Int( variable6 /*j*/)<=UNTAG_Int( variable2 /*to*/));
      if (!UNTAG_Bool(variable7)) break; /* while*/
      variable7 =  variable6 /*j*/;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label16;
      return_label16: while(false);
      variable7 = variable8;
      variable7 = ((sorter___AbstractSorter___compare_t)CALL( self,COLOR_sorter___AbstractSorter___compare))( self,  variable5 /*min_v*/, variable7) /*AbstractSorter::compare*/;
      variable7 = TAG_Bool(UNTAG_Int(variable7)>UNTAG_Int( TAG_Int(0)));
      if (UNTAG_Bool(variable7)) { /*if*/
        variable4 =  variable6 /*j*/ /*min=*/;
        variable7 =  variable6 /*j*/;
        variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable9 = variable8;
        if (UNTAG_Bool(variable9)) { /* and */
          variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
          variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
        }
        variable8 = variable9;
        if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
        variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
        goto return_label17;
        return_label17: while(false);
        variable7 = variable8;
        variable5 = variable7 /*min_v=*/;
      }
      variable6 = TAG_Int(UNTAG_Int(variable6)+UNTAG_Int( TAG_Int(1))) /*j*/;
      continue_15: while(0);
    }
    break_15: while(0);
    variable7 = TAG_Bool(( variable4 /*min*/)!=( variable3 /*i*/));
    if (UNTAG_Bool(variable7)) { /*if*/
      variable7 =  variable3 /*i*/;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = ATTR_array___AbstractArray____length( variable0 /*array*/) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = ATTR_array___Array____items( variable0 /*array*/) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label18;
      return_label18: while(false);
      variable7 = variable8;
      ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/,  variable4 /*min*/, variable7) /*Array::[]=*/;
      ((array___Array_____braeq_t)CALL( variable0 /*array*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*array*/,  variable3 /*i*/,  variable5 /*min_v*/) /*Array::[]=*/;
    }
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_13: while(0);
  }
  break_13: while(0);
  tracehead = trace.prev;
  return;
}
val_t sorter___ComparableSorter___compare(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "sorter::ComparableSorter::compare (bin/../lib/standard//sorter.nit:93,2--94:43)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((kernel___Comparable_____leqg_t)CALL( variable0 /*a*/,COLOR_kernel___Comparable_____leqg))( variable0 /*a*/,  variable1 /*b*/) /*Comparable::<=>*/;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable2;
}
void sorter___ComparableSorter___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "sorter::ComparableSorter::init (bin/../lib/standard//sorter.nit:96,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ComparableSorter].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ComparableSorter].i] = 1;
  tracehead = trace.prev;
  return;
}
