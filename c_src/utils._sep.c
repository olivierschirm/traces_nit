#include "utils._sep.h"
val_t utils___Object___cmangle(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "utils::Object::cmangle (src/utils.nit:21,1--55:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  static val_t once_value_variable2_1; static int once_bool_variable2_1;
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
  /* check if p<Array[Symbol] with p:Symbol */
  if (( param0!=NIT_NULL) && !VAL_ISA( param0, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at src/utils.nit:22,14--31\n"); nit_exit(1); } /*cast Array[Symbol]*/;
  variable0 =  param0;
  if (once_bool_variable2_1) variable2 = once_value_variable2_1;
  else {
    variable2 = ((utils___Object___cmangle_table_t)CALL( self,COLOR_utils___Object___cmangle_table))( self) /*Object::cmangle_table*/;
    once_value_variable2_1 = variable2;
    once_bool_variable2_1 = true;
  }
  variable1 = variable2;
  variable3 = NEW_string___String___init(); /*new String*/
  variable2 = variable3;
  variable3 = ((array___AbstractArray___iterator_t)CALL( variable0 /*symbols*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*symbols*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable5 = ((array___AbstractArray___is_empty_t)CALL( variable2 /*res*/,COLOR_abstract_collection___Collection___is_empty))( variable2 /*res*/) /*String::is_empty*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
      ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  TAG_Char('_')) /*String::add*/;
      ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  TAG_Char('_')) /*String::add*/;
      ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  TAG_Char('_')) /*String::add*/;
    }
    variable5 =  TAG_Bool(false);
    variable6 =  TAG_Bool(true);
    variable8 = ((symbol___Symbol___to_s_t)CALL( variable4 /*sym*/,COLOR_string___Object___to_s))( variable4 /*sym*/) /*Symbol::to_s*/;
    variable7 = variable8;
    variable8 = ((array___AbstractArray___iterator_t)CALL( variable7 /*s*/,COLOR_abstract_collection___Collection___iterator))( variable7 /*s*/) /*String::iterator*/;
    while (true) { /*for*/
      variable9 = ((array___ArrayIterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable9)) break; /*for*/
      variable9 = ((array___ArrayIterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*ArrayIterator::item*/;
      variable10 = TAG_Bool(UNTAG_Char( variable9 /*c*/)>=UNTAG_Char( TAG_Char('a')));
      variable11 = variable10;
      if (UNTAG_Bool(variable11)) { /* and */
        variable11 = TAG_Bool(UNTAG_Char( variable9 /*c*/)<=UNTAG_Char( TAG_Char('z')));
      }
      variable10 = variable11;
      variable11 = variable10;
      if (!UNTAG_Bool(variable11)) { /* or */
        variable11 = TAG_Bool(UNTAG_Char( variable9 /*c*/)>=UNTAG_Char( TAG_Char('A')));
        variable12 = variable11;
        if (UNTAG_Bool(variable12)) { /* and */
          variable12 = TAG_Bool(UNTAG_Char( variable9 /*c*/)<=UNTAG_Char( TAG_Char('Z')));
        }
        variable11 = variable12;
      }
      variable10 = variable11;
      variable11 = variable10;
      if (!UNTAG_Bool(variable11)) { /* or */
        variable11 = TAG_Bool(UNTAG_Char( variable9 /*c*/)>=UNTAG_Char( TAG_Char('0')));
        variable12 = variable11;
        if (UNTAG_Bool(variable12)) { /* and */
          variable12 = TAG_Bool(UNTAG_Char( variable9 /*c*/)<=UNTAG_Char( TAG_Char('9')));
        }
        variable11 = variable12;
      }
      variable10 = variable11;
      if (UNTAG_Bool(variable10)) { /*if*/
        ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  variable9 /*c*/) /*String::add*/;
        variable5 =  TAG_Bool(false) /*underscore=*/;
        variable6 =  TAG_Bool(true) /*normal=*/;
      } else { /*if*/
        variable10 = TAG_Bool(( variable9 /*c*/)==( TAG_Char('_')));
        variable11 = variable10;
        if (UNTAG_Bool(variable11)) { /* and */
          variable11 =  TAG_Bool(!UNTAG_Bool( variable5 /*underscore*/));
        }
        variable10 = variable11;
        if (UNTAG_Bool(variable10)) { /*if*/
          ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  variable9 /*c*/) /*String::add*/;
          variable5 =  TAG_Bool(true) /*underscore=*/;
          variable6 =  TAG_Bool(true) /*normal=*/;
        } else { /*if*/
          variable10 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable1 /*table*/,COLOR_abstract_collection___Map___has_key))( variable1 /*table*/,  variable9 /*c*/) /*HashMap::has_key*/;
          if (UNTAG_Bool(variable10)) { /*if*/
            if (UNTAG_Bool( variable6 /*normal*/)) { /*if*/
              ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  TAG_Char('_')) /*String::add*/;
              ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  TAG_Char('_')) /*String::add*/;
            }
            variable10 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable1 /*table*/,COLOR_abstract_collection___Map_____bra))( variable1 /*table*/,  variable9 /*c*/) /*HashMap::[]*/;
            ((string___String___append_t)CALL( variable2 /*res*/,COLOR_abstract_collection___IndexedCollection___append))( variable2 /*res*/, variable10) /*String::append*/;
            variable6 =  TAG_Bool(false) /*normal=*/;
            variable5 =  TAG_Bool(false) /*underscore=*/;
          }
        }
      }
      continue_3: while(0);
      ((array___ArrayIterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*ArrayIterator::next*/;
    }
    break_3: while(0);
    continue_2: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_2: while(0);
  variable1 =  variable2 /*res*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t utils___Object___cmangle_table(val_t  self) {
  struct trace_t trace = {NULL, "utils::Object::cmangle_table (src/utils.nit:58,1--74:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_hash___HashMap___init(); /*new HashMap[Char, String]*/
  variable0 = variable1;
  variable1 = NEW_string___String___with_native(BOX_NativeString("plus"), TAG_Int(4)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('+'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("minus"), TAG_Int(5)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('-'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("star"), TAG_Int(4)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('*'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("slash"), TAG_Int(5)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('/'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("percent"), TAG_Int(7)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('%'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("bra"), TAG_Int(3)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('['), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("eq"), TAG_Int(2)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('='), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("l"), TAG_Int(1)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('<'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("g"), TAG_Int(1)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('>'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("n"), TAG_Int(1)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('!'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("u"), TAG_Int(1)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('_'), variable1) /*HashMap::[]=*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("at"), TAG_Int(2)); /*new String*/
  ((hash___HashMap_____braeq_t)CALL( variable0 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*res*/,  TAG_Char('@'), variable1) /*HashMap::[]=*/;
  variable0 =  variable0 /*res*/;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
