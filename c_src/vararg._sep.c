#include "vararg._sep.h"
val_t vararg___MMSignature___vararg_rank(val_t  self) {
  struct trace_t trace = {NULL, "vararg::MMSignature::vararg_rank (src/metamodel//vararg.nit:24,2--25:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/;
}
void vararg___MMSignature___vararg_rank__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "vararg::MMSignature::vararg_rank= (src/metamodel//vararg.nit:24,2--25:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t vararg___MMSignature___has_vararg(val_t  self) {
  struct trace_t trace = {NULL, "vararg::MMSignature::has_vararg (src/metamodel//vararg.nit:27,2--30:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>=UNTAG_Int( TAG_Int(0)));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t vararg___MMSignature___adaptation_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "vararg::MMSignature::adaptation_to (src/metamodel//vararg.nit:33,2--37:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((vararg___MMSignature___adaptation_to_t)CALL( self,COLOR_SUPER_vararg___MMSignature___adaptation_to))( self,  variable0 /*r*/) /*super MMSignature::adaptation_to*/;
  variable1 = variable2;
  variable2 = ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/;
  ((vararg___MMSignature___vararg_rank__eq_t)CALL( variable1 /*s*/,COLOR_vararg___MMSignature___vararg_rank__eq))( variable1 /*s*/, variable2) /*MMSignature::vararg_rank=*/;
  variable1 =  variable1 /*s*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
void vararg___MMSignature___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "vararg::MMSignature::init (src/metamodel//vararg.nit:40,2--43:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i]) return;
  ((vararg___MMSignature___init_t)CALL( self,COLOR_SUPER_vararg___MMSignature___init))( self,  param0,  param1,  param2, init_table) /*super MMSignature::init*/;
  variable3 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/ = variable3;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i] = 1;
  tracehead = trace.prev;
  return;
}
