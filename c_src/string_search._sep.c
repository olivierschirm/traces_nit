#include "string_search._sep.h"
val_t string_search___Pattern___search_index_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::Pattern::search_index_in (bin/../lib/standard//string_search.nit:21,2--24:48)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method search_index_in called (bin/../lib/standard//string_search.nit:21,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t string_search___Pattern___search_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::Pattern::search_in (bin/../lib/standard//string_search.nit:26,2--28:44)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method search_in called (bin/../lib/standard//string_search.nit:26,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t string_search___Pattern___search_all_in(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::Pattern::search_all_in (bin/../lib/standard//string_search.nit:30,2--39:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[Match]*/
  variable1 = variable2;
  variable3 = ((string_search___Pattern___search_in_t)CALL( self,COLOR_string_search___Pattern___search_in))( self,  variable0 /*s*/,  TAG_Int(0)) /*Pattern::search_in*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*match*/ ==  NIT_NULL /*null*/) || (( variable2 /*match*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*match*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*match*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*match*/,COLOR_kernel___Object_____eqeq))( variable2 /*match*/,  NIT_NULL /*null*/) /*Match::==*/)))))));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    ((array___AbstractArray___add_t)CALL( variable1 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*res*/,  variable2 /*match*/) /*Array::add*/;
    variable3 = ((string_search___Match___after_t)CALL( variable2 /*match*/,COLOR_string_search___Match___after))( variable2 /*match*/) /*Match::after*/;
    variable3 = ((string_search___Pattern___search_in_t)CALL( self,COLOR_string_search___Pattern___search_in))( self,  variable0 /*s*/, variable3) /*Pattern::search_in*/;
    variable2 = variable3 /*match=*/;
    continue_1: while(0);
  }
  break_1: while(0);
  variable1 =  variable1 /*res*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string_search___Pattern___split_in(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::Pattern::split_in (bin/../lib/standard//string_search.nit:42,2--57:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[Match]*/
  variable1 = variable2;
  variable2 =  TAG_Int(0);
  variable4 = ((string_search___Pattern___search_in_t)CALL( self,COLOR_string_search___Pattern___search_in))( self,  variable0 /*s*/,  TAG_Int(0)) /*Pattern::search_in*/;
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*match*/ ==  NIT_NULL /*null*/) || (( variable3 /*match*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*match*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*match*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*match*/,COLOR_kernel___Object_____eqeq))( variable3 /*match*/,  NIT_NULL /*null*/) /*Match::==*/)))))));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable5 = ((string_search___Match___from_t)CALL( variable3 /*match*/,COLOR_string_search___Match___from))( variable3 /*match*/) /*Match::from*/;
    variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( variable2 /*i*/));
    variable4 = variable5;
    variable5 = NEW_string_search___Match___init( variable0 /*s*/,  variable2 /*i*/,  variable4 /*len*/); /*new Match*/
    ((array___AbstractArray___add_t)CALL( variable1 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*res*/, variable5) /*Array::add*/;
    variable5 = ((string_search___Match___after_t)CALL( variable3 /*match*/,COLOR_string_search___Match___after))( variable3 /*match*/) /*Match::after*/;
    variable2 = variable5 /*i=*/;
    variable5 = ((string_search___Pattern___search_in_t)CALL( self,COLOR_string_search___Pattern___search_in))( self,  variable0 /*s*/,  variable2 /*i*/) /*Pattern::search_in*/;
    variable3 = variable5 /*match=*/;
    continue_3: while(0);
  }
  break_3: while(0);
  variable4 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( variable2 /*i*/));
  variable5 = NEW_string_search___Match___init( variable0 /*s*/,  variable2 /*i*/, variable4); /*new Match*/
  variable4 = variable5;
  ((array___AbstractArray___add_t)CALL( variable1 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*res*/, variable4) /*Array::add*/;
  variable1 =  variable1 /*res*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string_search___BM_Pattern___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::to_s (bin/../lib/standard//string_search.nit:67,2--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string_search___BM_Pattern___search_index_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::search_index_in (bin/../lib/standard//string_search.nit:69,2--93:11)"};
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
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*from*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string_search.nit:72,3--18\n"); nit_exit(1);}
  variable3 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable2 = variable3;
  variable4 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
  variable3 = variable4;
  variable4 =  variable1 /*from*/;
  while (true) { /*while*/
    variable5 = TAG_Int(UNTAG_Int( variable2 /*n*/)-UNTAG_Int( variable3 /*m*/));
    variable5 = TAG_Int(UNTAG_Int(variable5)+UNTAG_Int( TAG_Int(1)));
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*j*/)<UNTAG_Int(variable5));
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable6 = TAG_Int(UNTAG_Int( variable3 /*m*/)-UNTAG_Int( TAG_Int(1)));
    variable5 = variable6;
    while (true) { /*while*/
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*i*/)>=UNTAG_Int( TAG_Int(0)));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 = ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/;
        variable7 = ((string___String_____bra_t)CALL(variable7,COLOR_abstract_collection___Map_____bra))(variable7,  variable5 /*i*/) /*String::[]*/;
        variable8 = TAG_Int(UNTAG_Int( variable5 /*i*/)+UNTAG_Int( variable4 /*j*/));
        variable8 = ((string___String_____bra_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____bra))( variable0 /*s*/, variable8) /*String::[]*/;
        variable7 = TAG_Bool((variable7)==(variable8));
      }
      variable6 = variable7;
      if (!UNTAG_Bool(variable6)) break; /* while*/
      variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_7: while(0);
    }
    break_7: while(0);
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*i*/)<UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable2 =  variable4 /*j*/;
      goto return_label5;
    } else { /*if*/
      variable7 = ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/;
      variable8 =  variable5 /*i*/;
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
      goto return_label8;
      return_label8: while(false);
      variable7 = variable9;
      variable6 = variable7;
      variable8 = TAG_Int(UNTAG_Int( variable5 /*i*/)+UNTAG_Int( variable4 /*j*/));
      variable8 = ((string___String_____bra_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____bra))( variable0 /*s*/, variable8) /*String::[]*/;
      variable8 = ((string_search___BM_Pattern___bc_t)CALL( self,COLOR_string_search___BM_Pattern___bc))( self, variable8) /*BM_Pattern::bc*/;
      variable8 = TAG_Int(UNTAG_Int(variable8)-UNTAG_Int( variable3 /*m*/));
      variable8 = TAG_Int(UNTAG_Int(variable8)+UNTAG_Int( TAG_Int(1)));
      variable8 = TAG_Int(UNTAG_Int(variable8)+UNTAG_Int( variable5 /*i*/));
      variable7 = variable8;
      variable8 = TAG_Bool(UNTAG_Int( variable6 /*gs*/)>UNTAG_Int( variable7 /*bc*/));
      if (UNTAG_Bool(variable8)) { /*if*/
        variable4 = TAG_Int(UNTAG_Int(variable4)+UNTAG_Int( variable6 /*gs*/)) /*j*/;
      } else { /*if*/
        variable4 = TAG_Int(UNTAG_Int(variable4)+UNTAG_Int( variable7 /*bc*/)) /*j*/;
      }
    }
    continue_6: while(0);
  }
  break_6: while(0);
  variable5 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable2 = variable5;
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___BM_Pattern___search_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::search_in (bin/../lib/standard//string_search.nit:96,2--103:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((string_search___BM_Pattern___search_index_in_t)CALL( self,COLOR_string_search___Pattern___search_index_in))( self,  variable0 /*s*/,  variable1 /*from*/) /*BM_Pattern::search_index_in*/;
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*to*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable2 =  NIT_NULL /*null*/;
    goto return_label9;
  } else { /*if*/
    variable3 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
    variable4 = NEW_string_search___Match___init( variable0 /*s*/,  variable2 /*to*/, variable3); /*new Match*/
    variable3 = variable4;
    variable2 = variable3;
    goto return_label9;
  }
  return_label9: while(false);
  tracehead = trace.prev;
  return variable2;
}
void string_search___BM_Pattern___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::init (bin/../lib/standard//string_search.nit:107,2--115:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_BM_Pattern].i]) return;
  ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/ =  variable0 /*motif*/;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*motif*/,COLOR_abstract_collection___Collection___length))( variable0 /*motif*/) /*String::length*/;
  ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/ = variable1;
  variable1 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
  variable2 = NEW_array___Array___with_capacity(variable1); /*new Array[Int]*/
  variable1 = variable2;
  ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/ = variable1;
  variable1 = NEW_array___ArrayMap___init(); /*new ArrayMap[Char, Int]*/
  ATTR_string_search___BM_Pattern____bc_table( self) /*BM_Pattern::_bc_table*/ = variable1;
  ((string_search___BM_Pattern___compute_gs_t)CALL( self,COLOR_string_search___BM_Pattern___compute_gs))( self) /*BM_Pattern::compute_gs*/;
  ((string_search___BM_Pattern___compute_bc_t)CALL( self,COLOR_string_search___BM_Pattern___compute_bc))( self) /*BM_Pattern::compute_bc*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_BM_Pattern].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t string_search___BM_Pattern___bc(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::bc (bin/../lib/standard//string_search.nit:124,2--129:17)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_string_search___BM_Pattern____bc_table( self) /*BM_Pattern::_bc_table*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*e*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_string_search___BM_Pattern____bc_table( self) /*BM_Pattern::_bc_table*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*e*/) /*Map::[]*/;
    goto return_label11;
  } else { /*if*/
    variable1 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
    goto return_label11;
  }
  return_label11: while(false);
  tracehead = trace.prev;
  return variable1;
}
void string_search___BM_Pattern___compute_bc(val_t  self) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::compute_bc (bin/../lib/standard//string_search.nit:139,2--146:9)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/;
  variable0 = variable1;
  variable2 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
  variable1 = variable2;
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int(variable3));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ATTR_string_search___BM_Pattern____bc_table( self) /*BM_Pattern::_bc_table*/;
    variable4 = ((string___String_____bra_t)CALL( variable0 /*x*/,COLOR_abstract_collection___Map_____bra))( variable0 /*x*/,  variable2 /*i*/) /*String::[]*/;
    variable5 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( variable2 /*i*/));
    variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1)));
    ((abstract_collection___Map_____braeq_t)CALL(variable3,COLOR_abstract_collection___Map_____braeq))(variable3, variable4, variable5) /*Map::[]=*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_13: while(0);
  }
  break_13: while(0);
  tracehead = trace.prev;
  return;
}
val_t string_search___BM_Pattern___suffixes(val_t  self) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::suffixes (bin/../lib/standard//string_search.nit:150,2--170:13)"};
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
  variable1 = ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/;
  variable0 = variable1;
  variable2 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
  variable1 = variable2;
  variable3 = NEW_array___Array___filled_with( variable1 /*m*/,  variable1 /*m*/); /*new Array[Int]*/
  variable2 = variable3;
  variable3 = TAG_Int((int)0) /*decl variable f*/;
  variable5 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
  variable4 = variable5;
  variable6 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(2)));
  variable5 = variable6;
  while (true) { /*while*/
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*i*/)>UNTAG_Int( variable4 /*g*/));
    variable7 = variable6;
    if (UNTAG_Bool(variable7)) { /* and */
      variable7 = TAG_Int(UNTAG_Int( variable5 /*i*/)+UNTAG_Int( variable1 /*m*/));
      variable7 = TAG_Int(UNTAG_Int(variable7)-UNTAG_Int( TAG_Int(1)));
      variable7 = TAG_Int(UNTAG_Int(variable7)-UNTAG_Int( variable3 /*f*/));
      variable8 = variable7;
      variable9 = TAG_Bool(UNTAG_Int( variable8 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable10 = variable9;
      if (UNTAG_Bool(variable10)) { /* and */
        variable10 = ATTR_array___AbstractArray____length( variable2 /*suff*/) /*Array::_length*/;
        variable10 = TAG_Bool(UNTAG_Int( variable8 /*index*/)<UNTAG_Int(variable10));
      }
      variable9 = variable10;
      if (!UNTAG_Bool(variable9)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable9 = ATTR_array___Array____items( variable2 /*suff*/) /*Array::_items*/;
      variable9 = UNBOX_NativeArray(variable9)[UNTAG_Int( variable8 /*index*/)];
      goto return_label16;
      return_label16: while(false);
      variable7 = variable9;
      variable8 = TAG_Int(UNTAG_Int( variable5 /*i*/)-UNTAG_Int( variable4 /*g*/));
      variable7 = TAG_Bool(UNTAG_Int(variable7)<UNTAG_Int(variable8));
    }
    variable6 = variable7;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = TAG_Int(UNTAG_Int( variable5 /*i*/)+UNTAG_Int( variable1 /*m*/));
      variable6 = TAG_Int(UNTAG_Int(variable6)-UNTAG_Int( TAG_Int(1)));
      variable6 = TAG_Int(UNTAG_Int(variable6)-UNTAG_Int( variable3 /*f*/));
      variable7 = variable6;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = ATTR_array___AbstractArray____length( variable2 /*suff*/) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = ATTR_array___Array____items( variable2 /*suff*/) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label17;
      return_label17: while(false);
      variable6 = variable8;
      ((array___Array_____braeq_t)CALL( variable2 /*suff*/,COLOR_abstract_collection___Map_____braeq))( variable2 /*suff*/,  variable5 /*i*/, variable6) /*Array::[]=*/;
    } else { /*if*/
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*i*/)<UNTAG_Int( variable4 /*g*/));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable4 =  variable5 /*i*/ /*g=*/;
      }
      variable3 =  variable5 /*i*/ /*f=*/;
      while (true) { /*while*/
        variable6 = TAG_Bool(UNTAG_Int( variable4 /*g*/)>=UNTAG_Int( TAG_Int(0)));
        variable7 = variable6;
        if (UNTAG_Bool(variable7)) { /* and */
          variable7 = ((string___String_____bra_t)CALL( variable0 /*x*/,COLOR_abstract_collection___Map_____bra))( variable0 /*x*/,  variable4 /*g*/) /*String::[]*/;
          variable8 = TAG_Int(UNTAG_Int( variable4 /*g*/)+UNTAG_Int( variable1 /*m*/));
          variable8 = TAG_Int(UNTAG_Int(variable8)-UNTAG_Int( TAG_Int(1)));
          variable8 = TAG_Int(UNTAG_Int(variable8)-UNTAG_Int( variable3 /*f*/));
          variable8 = ((string___String_____bra_t)CALL( variable0 /*x*/,COLOR_abstract_collection___Map_____bra))( variable0 /*x*/, variable8) /*String::[]*/;
          variable7 = TAG_Bool((variable7)==(variable8));
        }
        variable6 = variable7;
        if (!UNTAG_Bool(variable6)) break; /* while*/
        variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(1))) /*g*/;
        continue_18: while(0);
      }
      break_18: while(0);
      variable6 = TAG_Int(UNTAG_Int( variable3 /*f*/)-UNTAG_Int( variable4 /*g*/));
      ((array___Array_____braeq_t)CALL( variable2 /*suff*/,COLOR_abstract_collection___Map_____braeq))( variable2 /*suff*/,  variable5 /*i*/, variable6) /*Array::[]=*/;
    }
    variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_15: while(0);
  }
  break_15: while(0);
  variable0 =  variable2 /*suff*/;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable0;
}
void string_search___BM_Pattern___compute_gs(val_t  self) {
  struct trace_t trace = {NULL, "string_search::BM_Pattern::compute_gs (bin/../lib/standard//string_search.nit:173,2--197:9)"};
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
  variable1 = ATTR_string_search___BM_Pattern____motif( self) /*BM_Pattern::_motif*/;
  variable0 = variable1;
  variable2 = ATTR_string_search___BM_Pattern____length( self) /*BM_Pattern::_length*/;
  variable1 = variable2;
  variable3 = ((string_search___BM_Pattern___suffixes_t)CALL( self,COLOR_string_search___BM_Pattern___suffixes))( self) /*BM_Pattern::suffixes*/;
  variable2 = variable3;
  variable3 =  TAG_Int(0);
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)<UNTAG_Int( variable1 /*m*/));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/;
    ((array___Array_____braeq_t)CALL(variable4,COLOR_abstract_collection___Map_____braeq))(variable4,  variable3 /*i*/,  variable1 /*m*/) /*Array::[]=*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_20: while(0);
  }
  break_20: while(0);
  variable4 =  TAG_Int(0);
  variable5 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
  variable3 = variable5 /*i=*/;
  while (true) { /*while*/
    variable5 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*i*/)>=UNTAG_Int(variable5));
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable5 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    variable5 = TAG_Bool(( variable3 /*i*/)==(variable5));
    variable6 = variable5;
    if (!UNTAG_Bool(variable6)) { /* or */
      variable6 =  variable3 /*i*/;
      variable7 = TAG_Bool(UNTAG_Int( variable6 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable8 = variable7;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = ATTR_array___AbstractArray____length( variable2 /*suff*/) /*Array::_length*/;
        variable8 = TAG_Bool(UNTAG_Int( variable6 /*index*/)<UNTAG_Int(variable8));
      }
      variable7 = variable8;
      if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable7 = ATTR_array___Array____items( variable2 /*suff*/) /*Array::_items*/;
      variable7 = UNBOX_NativeArray(variable7)[UNTAG_Int( variable6 /*index*/)];
      goto return_label22;
      return_label22: while(false);
      variable6 = variable7;
      variable7 = TAG_Int(UNTAG_Int( variable3 /*i*/)+UNTAG_Int( TAG_Int(1)));
      variable6 = TAG_Bool((variable6)==(variable7));
    }
    variable5 = variable6;
    if (UNTAG_Bool(variable5)) { /*if*/
      while (true) { /*while*/
        variable5 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
        variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( variable3 /*i*/));
        variable5 = TAG_Bool(UNTAG_Int( variable4 /*j*/)<UNTAG_Int(variable5));
        if (!UNTAG_Bool(variable5)) break; /* while*/
        variable5 = ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/;
        variable6 =  variable4 /*j*/;
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
        goto return_label24;
        return_label24: while(false);
        variable5 = variable7;
        variable5 = TAG_Bool((variable5)==( variable1 /*m*/));
        if (UNTAG_Bool(variable5)) { /*if*/
          variable5 = ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/;
          variable6 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
          variable6 = TAG_Int(UNTAG_Int(variable6)-UNTAG_Int( variable3 /*i*/));
          ((array___Array_____braeq_t)CALL(variable5,COLOR_abstract_collection___Map_____braeq))(variable5,  variable4 /*j*/, variable6) /*Array::[]=*/;
        }
        variable4 = TAG_Int(UNTAG_Int(variable4)+UNTAG_Int( TAG_Int(1))) /*j*/;
        continue_23: while(0);
      }
      break_23: while(0);
    }
    variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_21: while(0);
  }
  break_21: while(0);
  variable3 =  TAG_Int(0) /*i=*/;
  while (true) { /*while*/
    variable5 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*i*/)<UNTAG_Int(variable5));
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable5 = ATTR_string_search___BM_Pattern____gs( self) /*BM_Pattern::_gs*/;
    variable6 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
    variable7 =  variable3 /*i*/;
    variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable9 = variable8;
    if (UNTAG_Bool(variable9)) { /* and */
      variable9 = ATTR_array___AbstractArray____length( variable2 /*suff*/) /*Array::_length*/;
      variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
    }
    variable8 = variable9;
    if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable8 = ATTR_array___Array____items( variable2 /*suff*/) /*Array::_items*/;
    variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
    goto return_label26;
    return_label26: while(false);
    variable7 = variable8;
    variable6 = TAG_Int(UNTAG_Int(variable6)-UNTAG_Int(variable7));
    variable7 = TAG_Int(UNTAG_Int( variable1 /*m*/)-UNTAG_Int( TAG_Int(1)));
    variable7 = TAG_Int(UNTAG_Int(variable7)-UNTAG_Int( variable3 /*i*/));
    ((array___Array_____braeq_t)CALL(variable5,COLOR_abstract_collection___Map_____braeq))(variable5, variable6, variable7) /*Array::[]=*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_25: while(0);
  }
  break_25: while(0);
  tracehead = trace.prev;
  return;
}
val_t string_search___Match___string(val_t  self) {
  struct trace_t trace = {NULL, "string_search::Match::string (bin/../lib/standard//string_search.nit:204,2--205:30)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_string_search___Match____string( self) /*Match::_string*/;
}
val_t string_search___Match___from(val_t  self) {
  struct trace_t trace = {NULL, "string_search::Match::from (bin/../lib/standard//string_search.nit:207,2--208:25)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_string_search___Match____from( self) /*Match::_from*/;
}
val_t string_search___Match___length(val_t  self) {
  struct trace_t trace = {NULL, "string_search::Match::length (bin/../lib/standard//string_search.nit:210,2--211:27)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_string_search___Match____length( self) /*Match::_length*/;
}
val_t string_search___Match___after(val_t  self) {
  struct trace_t trace = {NULL, "string_search::Match::after (bin/../lib/standard//string_search.nit:213,2--215:42)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_string_search___Match____from( self) /*Match::_from*/;
  variable1 = ATTR_string_search___Match____length( self) /*Match::_length*/;
  variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int(variable1));
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string_search___Match___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string_search::Match::to_s (bin/../lib/standard//string_search.nit:217,2--218:59)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_string_search___Match____string( self) /*Match::_string*/;
  variable1 = ATTR_string_search___Match____from( self) /*Match::_from*/;
  variable2 = ATTR_string_search___Match____length( self) /*Match::_length*/;
  variable0 = ((string___String___substring_t)CALL(variable0,COLOR_string___String___substring))(variable0, variable1, variable2) /*String::substring*/;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable0;
}
void string_search___Match___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "string_search::Match::init (bin/../lib/standard//string_search.nit:220,2--229:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Match].i]) return;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*s*/ ==  NIT_NULL /*null*/) || (( variable0 /*s*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable0 /*s*/,COLOR_kernel___Object_____eqeq))( variable0 /*s*/,  NIT_NULL /*null*/) /*String::==*/)))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'non_null_string'  failed: bin/../lib/standard//string_search.nit:223,3--35\n"); nit_exit(1);}
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*len*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'positive_length'  failed: bin/../lib/standard//string_search.nit:224,3--34\n"); nit_exit(1);}
  variable3 = TAG_Bool(UNTAG_Int( variable1 /*f*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'valid_from'  failed: bin/../lib/standard//string_search.nit:225,3--27\n"); nit_exit(1);}
  variable3 = TAG_Int(UNTAG_Int( variable1 /*f*/)+UNTAG_Int( variable2 /*len*/));
  variable4 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable3 = TAG_Bool(UNTAG_Int(variable3)<=UNTAG_Int(variable4));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'valid_after'  failed: bin/../lib/standard//string_search.nit:226,3--41\n"); nit_exit(1);}
  ATTR_string_search___Match____string( self) /*Match::_string*/ =  variable0 /*s*/;
  ATTR_string_search___Match____from( self) /*Match::_from*/ =  variable1 /*f*/;
  ATTR_string_search___Match____length( self) /*Match::_length*/ =  variable2 /*len*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Match].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t string_search___Char___search_index_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::Char::search_index_in (bin/../lib/standard//string_search.nit:235,2--242:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*from*/)<UNTAG_Int( variable2 /*stop*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((string___String_____bra_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____bra))( variable0 /*s*/,  variable1 /*from*/) /*String::[]*/;
    variable3 = TAG_Bool((variable3)==( self));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable2 =  variable1 /*from*/;
      goto return_label30;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*from*/;
    continue_31: while(0);
  }
  break_31: while(0);
  variable3 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable2 = variable3;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___Char___search_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::Char::search_in (bin/../lib/standard//string_search.nit:245,2--251:29)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((string_search___Char___search_index_in_t)CALL( self,COLOR_string_search___Pattern___search_index_in))( self,  variable0 /*s*/,  variable1 /*from*/) /*Char::search_index_in*/;
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*pos*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable2 =  NIT_NULL /*null*/;
    goto return_label32;
  } else { /*if*/
    variable3 = NEW_string_search___Match___init( variable0 /*s*/,  variable2 /*pos*/,  TAG_Int(1)); /*new Match*/
    variable2 = variable3;
    goto return_label32;
  }
  return_label32: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___String___search_index_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::String::search_index_in (bin/../lib/standard//string_search.nit:258,2--270:11)"};
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
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*from*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string_search.nit:260,3--18\n"); nit_exit(1);}
  variable3 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int(variable4));
  variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1)));
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*from*/)<UNTAG_Int( variable2 /*stop*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(1)));
    variable3 = variable4;
    while (true) { /*while*/
      variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)>=UNTAG_Int( TAG_Int(0)));
      variable5 = variable4;
      if (UNTAG_Bool(variable5)) { /* and */
        variable5 = ((string___String_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable3 /*i*/) /*String::[]*/;
        variable6 = TAG_Int(UNTAG_Int( variable3 /*i*/)+UNTAG_Int( variable1 /*from*/));
        variable6 = ((string___String_____bra_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____bra))( variable0 /*s*/, variable6) /*String::[]*/;
        variable5 = TAG_Bool((variable5)==(variable6));
      }
      variable4 = variable5;
      if (!UNTAG_Bool(variable4)) break; /* while*/
      variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_35: while(0);
    }
    break_35: while(0);
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)<UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable2 =  variable1 /*from*/;
      goto return_label33;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*from*/;
    continue_34: while(0);
  }
  break_34: while(0);
  variable3 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable2 = variable3;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___String___search_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::String::search_in (bin/../lib/standard//string_search.nit:273,2--279:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((string_search___String___search_index_in_t)CALL( self,COLOR_string_search___Pattern___search_index_in))( self,  variable0 /*s*/,  variable1 /*from*/) /*String::search_index_in*/;
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*pos*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable2 =  NIT_NULL /*null*/;
    goto return_label36;
  } else { /*if*/
    variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable4 = NEW_string_search___Match___init( variable0 /*s*/,  variable2 /*pos*/, variable3); /*new Match*/
    variable3 = variable4;
    variable2 = variable3;
    goto return_label36;
  }
  return_label36: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___String___search(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::String::search (bin/../lib/standard//string_search.nit:283,2--284:61)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string_search___Pattern___search_in_t)CALL( variable0 /*p*/,COLOR_string_search___Pattern___search_in))( variable0 /*p*/,  self,  TAG_Int(0)) /*Pattern::search_in*/;
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string_search___String___search_from(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string_search::String::search_from (bin/../lib/standard//string_search.nit:286,2--289:80)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((string_search___Pattern___search_in_t)CALL( variable0 /*p*/,COLOR_string_search___Pattern___search_in))( variable0 /*p*/,  self,  variable1 /*from*/) /*Pattern::search_in*/;
  goto return_label38;
  return_label38: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string_search___String___search_all(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::String::search_all (bin/../lib/standard//string_search.nit:291,2--298:73)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string_search___Pattern___search_all_in_t)CALL( variable0 /*p*/,COLOR_string_search___Pattern___search_all_in))( variable0 /*p*/,  self) /*Pattern::search_all_in*/;
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string_search___String___split_with(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string_search::String::split_with (bin/../lib/standard//string_search.nit:300,2--307:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((string_search___Pattern___split_in_t)CALL( variable0 /*p*/,COLOR_string_search___Pattern___split_in))( variable0 /*p*/,  self) /*Pattern::split_in*/;
  variable1 = variable2;
  variable3 = ((array___AbstractArray___length_t)CALL( variable1 /*matches*/,COLOR_abstract_collection___Collection___length))( variable1 /*matches*/) /*Array::length*/;
  variable4 = NEW_array___Array___with_capacity(variable3); /*new Array[String]*/
  variable3 = variable4;
  variable2 = variable3;
  variable3 = ((array___AbstractArray___iterator_t)CALL( variable1 /*matches*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*matches*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable5 = ((string_search___Match___to_s_t)CALL( variable4 /*m*/,COLOR_string___Object___to_s))( variable4 /*m*/) /*Match::to_s*/;
    ((array___AbstractArray___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/, variable5) /*Array::add*/;
    continue_41: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_41: while(0);
  variable1 =  variable2 /*res*/;
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string_search___String___split(val_t  self) {
  struct trace_t trace = {NULL, "string_search::String::split (bin/../lib/standard//string_search.nit:310,2--312:52)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string_search___String___split_with_t)CALL( self,COLOR_string_search___String___split_with))( self,  TAG_Char('\n')) /*String::split_with*/;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable0;
}
