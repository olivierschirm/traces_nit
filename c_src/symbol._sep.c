#include "symbol._sep.h"
val_t symbol___String___to_symbol(val_t  self) {
  struct trace_t trace = {NULL, "symbol::String::to_symbol (bin/../lib/standard//symbol.nit:20,2--29:16)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_1; static int once_bool_variable1_1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable1_1) variable1 = once_value_variable1_1;
  else {
    variable1 = NEW_hash___HashMap___init(); /*new HashMap[String, Symbol]*/
    once_value_variable1_1 = variable1;
    once_bool_variable1_1 = true;
  }
  variable0 = variable1;
  variable1 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable0 /*symbol_dictionary*/,COLOR_abstract_collection___Map___has_key))( variable0 /*symbol_dictionary*/,  self) /*HashMap::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable0 /*symbol_dictionary*/,COLOR_abstract_collection___Map_____bra))( variable0 /*symbol_dictionary*/,  self) /*HashMap::[]*/;
    variable0 = variable1;
    goto return_label0;
  } else { /*if*/
    variable2 = NEW_symbol___Symbol___init( self); /*new Symbol*/
    variable1 = variable2;
    ((hash___HashMap_____braeq_t)CALL( variable0 /*symbol_dictionary*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*symbol_dictionary*/,  self,  variable1 /*symbol*/) /*HashMap::[]=*/;
    variable0 =  variable1 /*symbol*/;
    goto return_label0;
  }
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t symbol___Symbol___to_s(val_t  self) {
  struct trace_t trace = {NULL, "symbol::Symbol::to_s (bin/../lib/standard//symbol.nit:37,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_symbol___Symbol____string( self) /*Symbol::_string*/;
  variable0 = ((string___String___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*String::to_s*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
void symbol___Symbol___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "symbol::Symbol::init (bin/../lib/standard//symbol.nit:39,2--40:39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Symbol].i]) return;
  ATTR_symbol___Symbol____string( self) /*Symbol::_string*/ =  variable0 /*s*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Symbol].i] = 1;
  tracehead = trace.prev;
  return;
}
