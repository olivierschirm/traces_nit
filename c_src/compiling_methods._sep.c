#include "compiling_methods._sep.h"
void compiling_methods___CompilerVisitor___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::compile_stmt (src/compiling//compiling_methods.nit:24,2--30:21)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((compiling_methods___PExpr___prepare_compile_stmt_t)CALL( variable0 /*n*/,COLOR_compiling_methods___PExpr___prepare_compile_stmt))( variable0 /*n*/,  self) /*PExpr::prepare_compile_stmt*/;
  variable2 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable1 = variable2;
  ((compiling_methods___PExpr___compile_stmt_t)CALL( variable0 /*n*/,COLOR_compiling_methods___PExpr___compile_stmt))( variable0 /*n*/,  self) /*PExpr::compile_stmt*/;
  ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/ =  variable1 /*i*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::compile_expr (src/compiling//compiling_methods.nit:33,2--47:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable1 = variable2;
  variable3 = ((compiling_methods___PExpr___compile_expr_t)CALL( variable0 /*n*/,COLOR_compiling_methods___PExpr___compile_expr))( variable0 /*n*/,  self) /*PExpr::compile_expr*/;
  variable2 = variable3;
  ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/ =  variable1 /*i*/;
  variable3 = ((string___String_____bra_t)CALL( variable2 /*s*/,COLOR_abstract_collection___Map_____bra))( variable2 /*s*/,  TAG_Int(0)) /*String::[]*/;
  variable3 = TAG_Bool((variable3)==( TAG_Char(' ')));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  variable2 /*s*/;
    goto return_label1;
  }
  variable3 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1)));
  variable3 = ((compiling_methods___CompilerVisitor___variable_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___variable))( self, variable3) /*CompilerVisitor::variable*/;
  variable3 = TAG_Bool(( variable2 /*s*/ == variable3) || (( variable2 /*s*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable2 /*s*/,COLOR_kernel___Object_____eqeq))( variable2 /*s*/, variable3) /*String::==*/)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  variable2 /*s*/;
    goto return_label1;
  }
  variable4 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___get_var))( self) /*CompilerVisitor::get_var*/;
  variable3 = variable4;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___add_assignment))( self,  variable3 /*v*/,  variable2 /*s*/) /*CompilerVisitor::add_assignment*/;
  variable1 =  variable3 /*v*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___CompilerVisitor___ensure_var(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::ensure_var (src/compiling//compiling_methods.nit:50,2--58:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string___String___substring_t)CALL( variable0 /*s*/,COLOR_string___String___substring))( variable0 /*s*/,  TAG_Int(0),  TAG_Int(3)) /*String::substring*/;
  variable2 = NEW_string___String___with_native(BOX_NativeString("variable"), TAG_Int(8)); /*new String*/
  variable1 = TAG_Bool((variable1 == variable2) || ((variable1 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1, variable2) /*String::==*/)));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*s*/;
    goto return_label2;
  }
  variable2 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___get_var))( self) /*CompilerVisitor::get_var*/;
  variable1 = variable2;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___add_assignment))( self,  variable1 /*v*/,  variable0 /*s*/) /*CompilerVisitor::add_assignment*/;
  variable1 =  variable1 /*v*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_methods___CompilerVisitor___add_assignment(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::add_assignment (src/compiling//compiling_methods.nit:61,2--65:25)"};
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
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*v*/ ==  variable1 /*s*/) || (( variable0 /*v*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable0 /*v*/,COLOR_kernel___Object_____eqeq))( variable0 /*v*/,  variable1 /*s*/) /*String::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 =  variable0 /*v*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString(" = "), TAG_Int(3)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
    variable8 =  variable1 /*s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable10) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( self,COLOR_compiling_base___CompilerVisitor___add_instr))( self, variable2) /*CompilerVisitor::add_instr*/;
  }
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___variable(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::variable (src/compiling//compiling_methods.nit:69,2--72:22)"};
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
  variable2 = NEW_string___String___with_native(BOX_NativeString("variable"), TAG_Int(8)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 =  variable0 /*i*/;
  variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___CompilerVisitor___get_var(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::get_var (src/compiling//compiling_methods.nit:81,2--90:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable1 = ((compiling_methods___CompilerVisitor___variable_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___variable))( self, variable1) /*CompilerVisitor::variable*/;
  variable0 = variable1;
  variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1)));
  ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/ = variable1;
  variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable2 = ATTR_compiling_methods___CompilerVisitor____variable_index_max( self) /*CompilerVisitor::_variable_index_max*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int(variable2));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_string___String___init(); /*new String*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("val_t "), TAG_Int(6)); /*new String*/
    variable3 = variable2;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
    variable4 =  variable0 /*v*/;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_decl_t)CALL( self,COLOR_compiling_base___CompilerVisitor___add_decl))( self, variable1) /*CompilerVisitor::add_decl*/;
    variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
    ATTR_compiling_methods___CompilerVisitor____variable_index_max( self) /*CompilerVisitor::_variable_index_max*/ = variable1;
  }
  variable0 =  variable0 /*v*/;
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable0;
}
void compiling_methods___CompilerVisitor___free_var(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::free_var (src/compiling//compiling_methods.nit:93,2--98:40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  variable1 = ((compiling_methods___CompilerVisitor___variable_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___variable))( self, variable1) /*CompilerVisitor::variable*/;
  variable1 = TAG_Bool(( variable0 /*v*/ == variable1) || (( variable0 /*v*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable0 /*v*/,COLOR_kernel___Object_____eqeq))( variable0 /*v*/, variable1) /*String::==*/)));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
    ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/ = variable1;
  }
  tracehead = trace.prev;
  return;
}
void compiling_methods___CompilerVisitor___clear(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::clear (src/compiling//compiling_methods.nit:102,2--108:25)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____has_return( self) /*CompilerVisitor::_has_return*/ =  TAG_Bool(false);
  ((compiling_base___CompilerVisitor___indent_level__eq_t)CALL( self,COLOR_compiling_base___CompilerVisitor___indent_level__eq))( self,  TAG_Int(0)) /*CompilerVisitor::indent_level=*/;
  ATTR_compiling_methods___CompilerVisitor____variable_index( self) /*CompilerVisitor::_variable_index*/ =  TAG_Int(0);
  ATTR_compiling_methods___CompilerVisitor____variable_index_max( self) /*CompilerVisitor::_variable_index_max*/ =  TAG_Int(0);
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___varnames(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::varnames (src/compiling//compiling_methods.nit:111,2--112:78)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____varnames( self) /*CompilerVisitor::_varnames*/;
}
val_t compiling_methods___CompilerVisitor___has_return(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::has_return (src/compiling//compiling_methods.nit:114,2--115:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____has_return( self) /*CompilerVisitor::_has_return*/;
}
void compiling_methods___CompilerVisitor___has_return__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::has_return= (src/compiling//compiling_methods.nit:114,2--115:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____has_return( self) /*CompilerVisitor::_has_return*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___method_params(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::method_params (src/compiling//compiling_methods.nit:117,2--118:52)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____method_params( self) /*CompilerVisitor::_method_params*/;
}
void compiling_methods___CompilerVisitor___method_params__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::method_params= (src/compiling//compiling_methods.nit:117,2--118:52)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____method_params( self) /*CompilerVisitor::_method_params*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___method(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::method (src/compiling//compiling_methods.nit:120,2--121:44)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____method( self) /*CompilerVisitor::_method*/;
}
void compiling_methods___CompilerVisitor___method__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::method= (src/compiling//compiling_methods.nit:120,2--121:44)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____method( self) /*CompilerVisitor::_method*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___return_label(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::return_label (src/compiling//compiling_methods.nit:123,2--124:45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____return_label( self) /*CompilerVisitor::_return_label*/;
}
void compiling_methods___CompilerVisitor___return_label__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::return_label= (src/compiling//compiling_methods.nit:123,2--124:45)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____return_label( self) /*CompilerVisitor::_return_label*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___break_label(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::break_label (src/compiling//compiling_methods.nit:126,2--127:44)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____break_label( self) /*CompilerVisitor::_break_label*/;
}
void compiling_methods___CompilerVisitor___break_label__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::break_label= (src/compiling//compiling_methods.nit:126,2--127:44)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____break_label( self) /*CompilerVisitor::_break_label*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___continue_label(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::continue_label (src/compiling//compiling_methods.nit:129,2--130:47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____continue_label( self) /*CompilerVisitor::_continue_label*/;
}
void compiling_methods___CompilerVisitor___continue_label__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::continue_label= (src/compiling//compiling_methods.nit:129,2--130:47)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____continue_label( self) /*CompilerVisitor::_continue_label*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___CompilerVisitor___return_value(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::return_value (src/compiling//compiling_methods.nit:132,2--133:45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_methods___CompilerVisitor____return_value( self) /*CompilerVisitor::_return_value*/;
}
void compiling_methods___CompilerVisitor___return_value__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::return_value= (src/compiling//compiling_methods.nit:132,2--133:45)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_methods___CompilerVisitor____return_value( self) /*CompilerVisitor::_return_value*/ =  param0;
  tracehead = trace.prev;
  return;
}
void compiling_methods___CompilerVisitor___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::init (src/compiling//compiling_methods.nit:135,2--138:7)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CompilerVisitor].i]) return;
  ((compiling_methods___CompilerVisitor___init_t)CALL( self,COLOR_SUPER_compiling_methods___CompilerVisitor___init))( self,  param0, init_table) /*super CompilerVisitor::init*/;
  ((compiling_methods___CompilerVisitor___clear_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___clear))( self) /*CompilerVisitor::clear*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CompilerVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void compiling_methods___CompilerVisitor___invoke_super_init_calls_after(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::CompilerVisitor::invoke_super_init_calls_after (src/compiling//compiling_methods.nit:141,2--178:9)"};
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
  variable2 = ((compiling_methods___CompilerVisitor___method_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___method))( self) /*CompilerVisitor::method*/;
  variable2 = ((syntax_base___MMSrcLocalProperty___node_t)CALL(variable2,COLOR_syntax_base___MMSrcLocalProperty___node))(variable2) /*MMSrcMethod::node*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*n*/==NIT_NULL) || VAL_ISA( variable1 /*n*/, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/compiling//compiling_methods.nit:144,3--35\n"); nit_exit(1);}
  variable2 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::super_init_calls*/;
  variable2 = ((array___AbstractArray___is_empty_t)CALL(variable2,COLOR_abstract_collection___Collection___is_empty))(variable2) /*Array::is_empty*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label9;
  }
  variable2 =  TAG_Int(0);
  variable3 =  TAG_Int(0);
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*start_prop*/ ==  NIT_NULL /*null*/) || (( variable0 /*start_prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*start_prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*start_prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*start_prop*/,COLOR_kernel___Object_____eqeq))( variable0 /*start_prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    while (true) { /*while*/
      variable4 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::super_init_calls*/;
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
      goto return_label11;
      return_label11: while(false);
      variable4 = variable6;
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  variable0 /*start_prop*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*start_prop*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*start_prop*/) /*MMMethod::==*/)))))));
      if (!UNTAG_Bool(variable4)) break; /* while*/
      variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_10: while(0);
    }
    break_10: while(0);
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    while (true) { /*while*/
      variable4 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::explicit_super_init_calls*/;
      variable5 =  variable3 /*j*/;
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
      goto return_label13;
      return_label13: while(false);
      variable4 = variable6;
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  variable0 /*start_prop*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*start_prop*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*start_prop*/) /*MMMethod::==*/)))))));
      if (!UNTAG_Bool(variable4)) break; /* while*/
      variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*j*/;
      continue_12: while(0);
    }
    break_12: while(0);
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*j*/;
  }
  variable4 = NIT_NULL /*decl variable stop_prop*/;
  variable5 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::explicit_super_init_calls*/;
  variable5 = ((array___AbstractArray___length_t)CALL(variable5,COLOR_abstract_collection___Collection___length))(variable5) /*Array::length*/;
  variable5 = TAG_Bool(UNTAG_Int( variable3 /*j*/)<UNTAG_Int(variable5));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = ((typing___AConcreteInitPropdef___explicit_super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::explicit_super_init_calls*/;
    variable6 =  variable3 /*j*/;
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
    goto return_label14;
    return_label14: while(false);
    variable5 = variable7;
    variable4 = variable5 /*stop_prop=*/;
  }
  variable6 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::super_init_calls*/;
  variable6 = ((array___AbstractArray___length_t)CALL(variable6,COLOR_abstract_collection___Collection___length))(variable6) /*Array::length*/;
  variable5 = variable6;
  while (true) { /*while*/
    variable6 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable5 /*l*/));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    variable7 = ((typing___AConcreteInitPropdef___super_init_calls_t)CALL( variable1 /*n*/,COLOR_typing___AConcreteInitPropdef___super_init_calls))( variable1 /*n*/) /*AConcreteInitPropdef::super_init_calls*/;
    variable8 =  variable2 /*i*/;
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
    goto return_label16;
    return_label16: while(false);
    variable7 = variable9;
    variable6 = variable7;
    variable7 = TAG_Bool(( variable6 /*p*/ ==  variable4 /*stop_prop*/) || (( variable6 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*p*/, variable4 /*stop_prop*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*p*/,COLOR_kernel___Object_____eqeq))( variable6 /*p*/,  variable4 /*stop_prop*/) /*MMMethod::==*/)))));
    if (UNTAG_Bool(variable7)) { /*if*/
      goto break_15;
    }
    variable8 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___method_params))( self) /*CompilerVisitor::method_params*/;
    variable7 = variable8;
    variable8 = ((genericity___MMLocalProperty___signature_t)CALL( variable6 /*p*/,COLOR_static_type___MMLocalProperty___signature))( variable6 /*p*/) /*MMMethod::signature*/;
    variable8 = ((static_type___MMSignature___arity_t)CALL(variable8,COLOR_static_type___MMSignature___arity))(variable8) /*MMSignature::arity*/;
    variable8 = TAG_Bool((variable8)==( TAG_Int(0)));
    if (UNTAG_Bool(variable8)) { /*if*/
      variable8 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
      variable9 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( self,COLOR_compiling_methods___CompilerVisitor___method_params))( self) /*CompilerVisitor::method_params*/;
      variable10 =  TAG_Int(0);
      variable11 = TAG_Bool(UNTAG_Int( variable10 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable12 = variable11;
      if (UNTAG_Bool(variable12)) { /* and */
        variable12 = variable9;
        variable12 = ATTR_array___AbstractArray____length(variable12) /*Array::_length*/;
        variable12 = TAG_Bool(UNTAG_Int( variable10 /*index*/)<UNTAG_Int(variable12));
      }
      variable11 = variable12;
      if (!UNTAG_Bool(variable11)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable11 = variable9;
      variable11 = ATTR_array___Array____items(variable11) /*Array::_items*/;
      variable11 = UNBOX_NativeArray(variable11)[UNTAG_Int( variable10 /*index*/)];
      goto return_label17;
      return_label17: while(false);
      variable9 = variable11;
      ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8, variable9) /*Array::add*/;
      variable7 = variable8 /*cargs=*/;
    }
    ((compiling_methods___MMMethod___compile_call_t)CALL( variable6 /*p*/,COLOR_compiling_methods___MMMethod___compile_call))( variable6 /*p*/,  self,  variable7 /*cargs*/) /*MMMethod::compile_call*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_15: while(0);
  }
  break_15: while(0);
  return_label9: while(false);
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___MMMethod___compile_call(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMMethod::compile_call (src/compiling//compiling_methods.nit:193,2--233:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    static val_t once_value_variable5_19; static int once_bool_variable5_19;
      val_t variable6;
      static val_t once_value_variable6_20; static int once_bool_variable6_20;
  static val_t once_value_variable4_21; static int once_bool_variable4_21;
  static val_t once_value_variable5_22; static int once_bool_variable5_22;
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
  val_t variable20;
  val_t variable21;
  val_t variable22;
  val_t variable23;
  val_t variable24;
    static val_t once_value_variable8_24; static int once_bool_variable8_24;
      val_t variable25;
      val_t variable26;
      val_t variable27;
      val_t variable28;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( self) /*MMMethod::concrete_property*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable2 /*i*/==NIT_NULL) || VAL_ISA( variable2 /*i*/, COLOR_MMSrcMethod, ID_MMSrcMethod)) /*cast MMSrcMethod*/;
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/compiling//compiling_methods.nit:200,3--26\n"); nit_exit(1);}
  variable3 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable2 /*i*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable2 /*i*/) /*MMSrcMethod::node*/;
  variable3 = TAG_Bool((variable3==NIT_NULL) || VAL_ISA(variable3, COLOR_AInternMethPropdef, ID_AInternMethPropdef)) /*cast AInternMethPropdef*/;
  variable4 = variable3;
  if (!UNTAG_Bool(variable4)) { /* or */
    variable4 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable2 /*i*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable2 /*i*/) /*MMSrcMethod::local_class*/;
    variable4 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___name))(variable4) /*MMLocalClass::name*/;
    if (once_bool_variable5_19) variable5 = once_value_variable5_19;
    else {
      variable5 = NEW_string___String___with_native(BOX_NativeString("Array"), TAG_Int(5)); /*new String*/
      variable5 = ((symbol___String___to_symbol_t)CALL(variable5,COLOR_symbol___String___to_symbol))(variable5) /*String::to_symbol*/;
      once_value_variable5_19 = variable5;
      once_bool_variable5_19 = true;
    }
    variable4 = TAG_Bool((variable4 == variable5) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4,variable5)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4, variable5) /*Symbol::==*/)))));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMMethod::name*/;
      if (once_bool_variable6_20) variable6 = once_value_variable6_20;
      else {
        variable6 = NEW_string___String___with_native(BOX_NativeString("[]"), TAG_Int(2)); /*new String*/
        variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
        once_value_variable6_20 = variable6;
        once_bool_variable6_20 = true;
      }
      variable5 = TAG_Bool((variable5 == variable6) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5, variable6) /*Symbol::==*/)))));
    }
    variable4 = variable5;
  }
  variable3 = variable4;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable4 = ((compiling_methods___MMSrcMethod___do_compile_inside_t)CALL( variable2 /*i*/,COLOR_compiling_methods___MMSrcMethod___do_compile_inside))( variable2 /*i*/,  variable0 /*v*/,  variable1 /*cargs*/) /*MMSrcMethod::do_compile_inside*/;
    variable3 = variable4;
    variable2 =  variable3 /*e*/;
    goto return_label18;
  }
  if (once_bool_variable4_21) variable4 = once_value_variable4_21;
  else {
    variable4 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
    variable4 = ((symbol___String___to_symbol_t)CALL(variable4,COLOR_symbol___String___to_symbol))(variable4) /*String::to_symbol*/;
    once_value_variable4_21 = variable4;
    once_bool_variable4_21 = true;
  }
  variable3 = variable4;
  if (once_bool_variable5_22) variable5 = once_value_variable5_22;
  else {
    variable5 = NEW_string___String___with_native(BOX_NativeString("!="), TAG_Int(2)); /*new String*/
    variable5 = ((symbol___String___to_symbol_t)CALL(variable5,COLOR_symbol___String___to_symbol))(variable5) /*String::to_symbol*/;
    once_value_variable5_22 = variable5;
    once_bool_variable5_22 = true;
  }
  variable4 = variable5;
  variable5 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMMethod::name*/;
  variable5 = TAG_Bool((variable5 ==  variable4 /*ne*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, variable4 /*ne*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  variable4 /*ne*/) /*Symbol::==*/)))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable6 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMMethod::signature*/;
    variable6 = ((static_type___MMSignature___recv_t)CALL(variable6,COLOR_static_type___MMSignature___recv))(variable6) /*MMSignature::recv*/;
    variable6 = ((static_type___MMType___select_method_t)CALL(variable6,COLOR_static_type___MMType___select_method))(variable6,  variable3 /*ee*/) /*MMType::select_method*/;
    variable5 = variable6;
    variable7 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable5 /*eqp*/,COLOR_compiling_methods___MMMethod___compile_call))( variable5 /*eqp*/,  variable0 /*v*/,  variable1 /*cargs*/) /*MMMethod::compile_call*/;
    variable6 = variable7;
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(!UNTAG_Bool("), TAG_Int(21)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 =  variable6 /*eqcall*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
    variable2 = variable7;
    goto return_label18;
  }
  variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMMethod::global*/;
  variable5 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable5,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable5) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = ((array___Collection___to_a_t)CALL( variable1 /*cargs*/,COLOR_array___Collection___to_a))( variable1 /*cargs*/) /*Array::to_a*/;
    variable1 = variable5 /*cargs=*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString("init_table /*YYY*/"), TAG_Int(18)); /*new String*/
    ((array___AbstractArray___add_t)CALL( variable1 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*cargs*/, variable5) /*Array::add*/;
  }
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString("(("), TAG_Int(2)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = ((compiling_base___MMLocalProperty___cname_t)CALL( self,COLOR_compiling_base___MMLocalProperty___cname))( self) /*MMMethod::cname*/;
  variable10 = variable9;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("_t)CALL("), TAG_Int(8)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  variable13 =  TAG_Int(0);
  variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable15 = variable14;
  if (UNTAG_Bool(variable15)) { /* and */
    variable15 = ATTR_array___AbstractArray____length( variable1 /*cargs*/) /*Array::_length*/;
    variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
  }
  variable14 = variable15;
  if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable14 = ATTR_array___Array____items( variable1 /*cargs*/) /*Array::_items*/;
  variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
  goto return_label23;
  return_label23: while(false);
  variable13 = variable14;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
  variable17 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMMethod::global*/;
  variable17 = ((compiling_base___MMGlobalProperty___color_id_t)CALL(variable17,COLOR_compiling_base___MMGlobalProperty___color_id))(variable17) /*MMGlobalProperty::color_id*/;
  variable18 = variable17;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
  variable5 = variable6;
  variable7 = NEW_string___String___init(); /*new String*/
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
  variable10 =  variable5 /*m*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable13 = ((string___Collection___join_t)CALL( variable1 /*cargs*/,COLOR_string___Collection___join))( variable1 /*cargs*/, variable13) /*Array::join*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(") /*"), TAG_Int(4)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
  variable17 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMMethod::local_class*/;
  variable18 = variable17;
  variable18 = ((string___String___to_s_t)CALL(variable18,COLOR_string___Object___to_s))(variable18) /*String::to_s*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable20) /*String::append*/;
  variable21 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMMethod::name*/;
  variable22 = variable21;
  variable22 = ((string___String___to_s_t)CALL(variable22,COLOR_string___Object___to_s))(variable22) /*String::to_s*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable22) /*String::append*/;
  variable23 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable24 = variable23;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable24) /*String::append*/;
  variable6 = variable7;
  variable7 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMMethod::name*/;
  variable7 = TAG_Bool((variable7 ==  variable3 /*ee*/) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7, variable3 /*ee*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7,  variable3 /*ee*/) /*Symbol::==*/)))));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("UNTAG_Bool("), TAG_Int(11)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 =  variable6 /*vcall*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
    variable6 = variable7 /*vcall=*/;
    if (once_bool_variable8_24) variable8 = once_value_variable8_24;
    else {
      variable8 = NEW_string___String___with_native(BOX_NativeString("Object"), TAG_Int(6)); /*new String*/
      variable8 = ((symbol___String___to_symbol_t)CALL(variable8,COLOR_symbol___String___to_symbol))(variable8) /*String::to_symbol*/;
      once_value_variable8_24 = variable8;
      once_bool_variable8_24 = true;
    }
    variable7 = variable8;
    variable8 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable2 /*i*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable2 /*i*/) /*MMSrcMethod::local_class*/;
    variable8 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable8,COLOR_abstractmetamodel___MMLocalClass___name))(variable8) /*MMLocalClass::name*/;
    variable8 = TAG_Bool((variable8 ==  variable7 /*obj*/) || ((variable8 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable8, variable7 /*obj*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))(variable8,  variable7 /*obj*/) /*Symbol::==*/)))));
    if (UNTAG_Bool(variable8)) { /*if*/
      variable8 = NEW_string___String___init(); /*new String*/
      variable9 = NEW_string___String___with_native(BOX_NativeString("(("), TAG_Int(2)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
      variable11 =  variable5 /*m*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable13) /*String::append*/;
      variable14 = ((compiling_base___MMLocalProperty___cname_t)CALL( variable2 /*i*/,COLOR_compiling_base___MMLocalProperty___cname))( variable2 /*i*/) /*MMSrcMethod::cname*/;
      variable15 = variable14;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString(")?(IS_EQUAL_NN("), TAG_Int(15)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable17) /*String::append*/;
      variable18 =  TAG_Int(0);
      variable19 = TAG_Bool(UNTAG_Int( variable18 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable20 = variable19;
      if (UNTAG_Bool(variable20)) { /* and */
        variable20 = ATTR_array___AbstractArray____length( variable1 /*cargs*/) /*Array::_length*/;
        variable20 = TAG_Bool(UNTAG_Int( variable18 /*index*/)<UNTAG_Int(variable20));
      }
      variable19 = variable20;
      if (!UNTAG_Bool(variable19)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable19 = ATTR_array___Array____items( variable1 /*cargs*/) /*Array::_items*/;
      variable19 = UNBOX_NativeArray(variable19)[UNTAG_Int( variable18 /*index*/)];
      goto return_label25;
      return_label25: while(false);
      variable18 = variable19;
      variable19 = variable18;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable19) /*String::append*/;
      variable20 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
      variable21 = variable20;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable21) /*String::append*/;
      variable22 =  TAG_Int(1);
      variable23 = TAG_Bool(UNTAG_Int( variable22 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable24 = variable23;
      if (UNTAG_Bool(variable24)) { /* and */
        variable24 = ATTR_array___AbstractArray____length( variable1 /*cargs*/) /*Array::_length*/;
        variable24 = TAG_Bool(UNTAG_Int( variable22 /*index*/)<UNTAG_Int(variable24));
      }
      variable23 = variable24;
      if (!UNTAG_Bool(variable23)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable23 = ATTR_array___Array____items( variable1 /*cargs*/) /*Array::_items*/;
      variable23 = UNBOX_NativeArray(variable23)[UNTAG_Int( variable22 /*index*/)];
      goto return_label26;
      return_label26: while(false);
      variable22 = variable23;
      variable23 = variable22;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable23) /*String::append*/;
      variable24 = NEW_string___String___with_native(BOX_NativeString(")):("), TAG_Int(4)); /*new String*/
      variable25 = variable24;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable25) /*String::append*/;
      variable26 =  variable6 /*vcall*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable26) /*String::append*/;
      variable27 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
      variable28 = variable27;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable28) /*String::append*/;
      variable6 = variable8 /*vcall=*/;
    }
    variable8 = NEW_string___String___init(); /*new String*/
    variable9 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
    variable11 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*cargs*/,COLOR_abstract_collection___Collection___first))( variable1 /*cargs*/) /*Array::first*/;
    variable12 = variable11;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString(" == "), TAG_Int(4)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
    variable15 =  TAG_Int(1);
    variable16 = TAG_Bool(UNTAG_Int( variable15 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable17 = variable16;
    if (UNTAG_Bool(variable17)) { /* and */
      variable17 = ATTR_array___AbstractArray____length( variable1 /*cargs*/) /*Array::_length*/;
      variable17 = TAG_Bool(UNTAG_Int( variable15 /*index*/)<UNTAG_Int(variable17));
    }
    variable16 = variable17;
    if (!UNTAG_Bool(variable16)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable16 = ATTR_array___Array____items( variable1 /*cargs*/) /*Array::_items*/;
    variable16 = UNBOX_NativeArray(variable16)[UNTAG_Int( variable15 /*index*/)];
    goto return_label27;
    return_label27: while(false);
    variable15 = variable16;
    variable16 = variable15;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable16) /*String::append*/;
    variable17 = NEW_string___String___with_native(BOX_NativeString(") || (("), TAG_Int(7)); /*new String*/
    variable18 = variable17;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable18) /*String::append*/;
    variable19 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*cargs*/,COLOR_abstract_collection___Collection___first))( variable1 /*cargs*/) /*Array::first*/;
    variable20 = variable19;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable20) /*String::append*/;
    variable21 = NEW_string___String___with_native(BOX_NativeString(" != NIT_NULL) && "), TAG_Int(17)); /*new String*/
    variable22 = variable21;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable22) /*String::append*/;
    variable23 =  variable6 /*vcall*/;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable23) /*String::append*/;
    variable24 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
    variable25 = variable24;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable25) /*String::append*/;
    variable6 = variable8 /*vcall=*/;
  }
  variable7 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMMethod::signature*/;
  variable7 = ((static_type___MMSignature___return_type_t)CALL(variable7,COLOR_static_type___MMSignature___return_type))(variable7) /*MMSignature::return_type*/;
  variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable7 ==  NIT_NULL /*null*/) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable2 =  variable6 /*vcall*/;
    goto return_label18;
  } else { /*if*/
    variable7 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable7 = ((string___String_____plus_t)CALL( variable6 /*vcall*/,COLOR_string___String_____plus))( variable6 /*vcall*/, variable7) /*String::+*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable7) /*CompilerVisitor::add_instr*/;
    variable2 =  NIT_NULL /*null*/;
    goto return_label18;
  }
  return_label18: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMMethod___compile_constructor_call(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMMethod::compile_constructor_call (src/compiling//compiling_methods.nit:237,2--243:13)"};
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
  val_t variable20;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
  variable2 = variable3;
  variable4 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMMethod::signature*/;
  variable4 = ((static_type___MMSignature___recv_t)CALL(variable4,COLOR_static_type___MMSignature___recv))(variable4) /*MMSignature::recv*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable2 /*recv*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(" = NEW_"), TAG_Int(7)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMMethod::global*/;
  variable10 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable10,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable10) /*MMGlobalProperty::intro*/;
  variable10 = ((compiling_base___MMLocalProperty___cname_t)CALL(variable10,COLOR_compiling_base___MMLocalProperty___cname))(variable10) /*MMConcreteProperty::cname*/;
  variable11 = variable10;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable14 = ((string___Collection___join_t)CALL( variable1 /*cargs*/,COLOR_string___Collection___join))( variable1 /*cargs*/, variable14) /*Array::join*/;
  variable15 = variable14;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString("); /*new "), TAG_Int(9)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
  variable18 =  variable3 /*stype*/;
  variable18 = ((string___String___to_s_t)CALL(variable18,COLOR_string___Object___to_s))(variable18) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable20) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable2 =  variable2 /*recv*/;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMMethod___compile_super_call(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMMethod::compile_super_call (src/compiling//compiling_methods.nit:246,2--251:14)"};
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
  val_t variable20;
  val_t variable21;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("(("), TAG_Int(2)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((compiling_base___MMLocalProperty___cname_t)CALL( self,COLOR_compiling_base___MMLocalProperty___cname))( self) /*MMMethod::cname*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("_t)CALL("), TAG_Int(8)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 =  TAG_Int(0);
  variable11 = TAG_Bool(UNTAG_Int( variable10 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable12 = variable11;
  if (UNTAG_Bool(variable12)) { /* and */
    variable12 = ATTR_array___AbstractArray____length( variable1 /*cargs*/) /*Array::_length*/;
    variable12 = TAG_Bool(UNTAG_Int( variable10 /*index*/)<UNTAG_Int(variable12));
  }
  variable11 = variable12;
  if (!UNTAG_Bool(variable11)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable11 = ATTR_array___Array____items( variable1 /*cargs*/) /*Array::_items*/;
  variable11 = UNBOX_NativeArray(variable11)[UNTAG_Int( variable10 /*index*/)];
  goto return_label30;
  return_label30: while(false);
  variable10 = variable11;
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
  variable14 = ((compiling_base___MMLocalProperty___color_id_for_super_t)CALL( self,COLOR_compiling_base___MMLocalProperty___color_id_for_super))( self) /*MMMethod::color_id_for_super*/;
  variable15 = variable14;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable17) /*String::append*/;
  variable2 = variable3;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable2 /*m*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable10 = ((string___Collection___join_t)CALL( variable1 /*cargs*/,COLOR_string___Collection___join))( variable1 /*cargs*/, variable10) /*Array::join*/;
  variable11 = variable10;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString(") /*super "), TAG_Int(10)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  variable14 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMMethod::local_class*/;
  variable15 = variable14;
  variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
  variable18 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMMethod::name*/;
  variable19 = variable18;
  variable19 = ((string___String___to_s_t)CALL(variable19,COLOR_string___Object___to_s))(variable19) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable19) /*String::append*/;
  variable20 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable21 = variable20;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable21) /*String::append*/;
  variable3 = variable4;
  variable2 =  variable3 /*vcall*/;
  goto return_label29;
  return_label29: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMAttribute___compile_access(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMAttribute::compile_access (src/compiling//compiling_methods.nit:256,2--260:65)"};
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
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMAttribute::global*/;
  variable5 = ((compiling_base___MMGlobalProperty___attr_access_t)CALL(variable5,COLOR_compiling_base___MMGlobalProperty___attr_access))(variable5) /*MMGlobalProperty::attr_access*/;
  variable6 = variable5;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
  variable9 =  variable1 /*recv*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(") /*"), TAG_Int(4)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable11) /*String::append*/;
  variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMAttribute::local_class*/;
  variable13 = variable12;
  variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable15) /*String::append*/;
  variable16 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMAttribute::name*/;
  variable17 = variable16;
  variable17 = ((string___String___to_s_t)CALL(variable17,COLOR_string___Object___to_s))(variable17) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable19) /*String::append*/;
  goto return_label31;
  return_label31: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_methods___MMSrcLocalProperty___compile_property_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::MMSrcLocalProperty::compile_property_to_c (src/compiling//compiling_methods.nit:265,2--266:46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___MMSrcMethod___decl_csignature(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMSrcMethod::decl_csignature (src/compiling//compiling_methods.nit:270,2--300:10)"};
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
  variable3 = NEW_array___Array___init(); /*new Array[String]*/
  variable2 = variable3;
  variable3 = NIT_NULL /*decl variable params_new*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMSrcMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable4) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_array___Array___init(); /*new Array[String]*/
    variable3 = variable4 /*params_new=*/;
  }
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("val_t "), TAG_Int(6)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  TAG_Int(0);
  variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable9 = variable8;
  if (UNTAG_Bool(variable9)) { /* and */
    variable9 = ATTR_array___AbstractArray____length( variable1 /*args*/) /*Array::_length*/;
    variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
  }
  variable8 = variable9;
  if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable8 = ATTR_array___Array____items( variable1 /*args*/) /*Array::_items*/;
  variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
  goto return_label34;
  return_label34: while(false);
  variable7 = variable8;
  variable8 = variable7;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  ((array___AbstractArray___add_t)CALL( variable2 /*params*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*params*/, variable4) /*Array::add*/;
  variable4 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMSrcMethod::signature*/;
  variable4 = ((static_type___MMSignature___arity_t)CALL(variable4,COLOR_static_type___MMSignature___arity))(variable4) /*MMSignature::arity*/;
  variable5 = NEW_range___Range___without_last( TAG_Int(0), variable4); /*new Range[Int]*/
  variable4 = variable5;
  variable4 = ((range___Range___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Range::iterator*/;
  while (true) { /*for*/
    variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("val_t "), TAG_Int(6)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 = TAG_Int(UNTAG_Int( variable5 /*i*/)+UNTAG_Int( TAG_Int(1)));
    variable11 = variable10;
    variable12 = TAG_Bool(UNTAG_Int( variable11 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable13 = variable12;
    if (UNTAG_Bool(variable13)) { /* and */
      variable13 = ATTR_array___AbstractArray____length( variable1 /*args*/) /*Array::_length*/;
      variable13 = TAG_Bool(UNTAG_Int( variable11 /*index*/)<UNTAG_Int(variable13));
    }
    variable12 = variable13;
    if (!UNTAG_Bool(variable12)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable12 = ATTR_array___Array____items( variable1 /*args*/) /*Array::_items*/;
    variable12 = UNBOX_NativeArray(variable12)[UNTAG_Int( variable11 /*index*/)];
    goto return_label36;
    return_label36: while(false);
    variable10 = variable12;
    variable11 = variable10;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
    variable6 = variable7;
    ((array___AbstractArray___add_t)CALL( variable2 /*params*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*params*/,  variable6 /*p*/) /*Array::add*/;
    variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*params_new*/ ==  NIT_NULL /*null*/) || (( variable3 /*params_new*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable3 /*params_new*/,COLOR_kernel___Object_____eqeq))( variable3 /*params_new*/,  NIT_NULL /*null*/) /*Array::==*/)))));
    if (UNTAG_Bool(variable7)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable3 /*params_new*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*params_new*/,  variable6 /*p*/) /*Array::add*/;
    }
    continue_35: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
  }
  break_35: while(0);
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMSrcMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable4) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("int* init_table"), TAG_Int(15)); /*new String*/
    ((array___AbstractArray___add_t)CALL( variable2 /*params*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*params*/, variable4) /*Array::add*/;
  }
  variable4 = NIT_NULL /*decl variable ret*/;
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMSrcMethod::signature*/;
  variable5 = ((static_type___MMSignature___return_type_t)CALL(variable5,COLOR_static_type___MMSignature___return_type))(variable5) /*MMSignature::return_type*/;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("val_t"), TAG_Int(5)); /*new String*/
    variable4 = variable5 /*ret=*/;
  } else { /*if*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("void"), TAG_Int(4)); /*new String*/
    variable4 = variable5 /*ret=*/;
  }
  variable6 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable6 = ((string___Collection___join_t)CALL( variable2 /*params*/,COLOR_string___Collection___join))( variable2 /*params*/, variable6) /*Array::join*/;
  variable5 = variable6;
  variable7 = NEW_string___String___init(); /*new String*/
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
  variable10 =  variable4 /*ret*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
  variable13 = ((compiling_base___MMLocalProperty___cname_t)CALL( self,COLOR_compiling_base___MMLocalProperty___cname))( self) /*MMSrcMethod::cname*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
  variable17 =  variable5 /*p*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable19) /*String::append*/;
  variable6 = variable7;
  variable7 = NEW_string___String___init(); /*new String*/
  variable8 = NEW_string___String___with_native(BOX_NativeString("typedef "), TAG_Int(8)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
  variable10 =  variable4 /*ret*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(" (* "), TAG_Int(4)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
  variable13 = ((compiling_base___MMLocalProperty___cname_t)CALL( self,COLOR_compiling_base___MMLocalProperty___cname))( self) /*MMSrcMethod::cname*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString("_t)("), TAG_Int(4)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
  variable17 =  variable5 /*p*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString(");"), TAG_Int(2)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable19) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable7) /*CompilerVisitor::add_decl*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable7 = ((string___String_____plus_t)CALL( variable6 /*s*/,COLOR_string___String_____plus))( variable6 /*s*/, variable7) /*String::+*/;
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable7) /*CompilerVisitor::add_decl*/;
  variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*params_new*/ ==  NIT_NULL /*null*/) || (( variable3 /*params_new*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable3 /*params_new*/,COLOR_kernel___Object_____eqeq))( variable3 /*params_new*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("val_t NEW_"), TAG_Int(10)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 = ((compiling_base___MMLocalProperty___cname_t)CALL( self,COLOR_compiling_base___MMLocalProperty___cname))( self) /*MMSrcMethod::cname*/;
    variable11 = variable10;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
    variable14 = ((string___Collection___join_t)CALL( variable3 /*params_new*/,COLOR_string___Collection___join))( variable3 /*params_new*/, variable14) /*Array::join*/;
    variable15 = variable14;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable15) /*String::append*/;
    variable16 = NEW_string___String___with_native(BOX_NativeString(");"), TAG_Int(2)); /*new String*/
    variable17 = variable16;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable17) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable7) /*CompilerVisitor::add_decl*/;
  }
  variable2 =  variable6 /*s*/;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_methods___MMSrcMethod___compile_property_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::MMSrcMethod::compile_property_to_c (src/compiling//compiling_methods.nit:303,2--331:17)"};
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
  val_t variable20;
  val_t variable21;
  val_t variable22;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((compiling_methods___CompilerVisitor___clear_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___clear))( variable0 /*v*/) /*CompilerVisitor::clear*/;
  variable2 = NEW_array___Array___init(); /*new Array[String]*/
  variable1 = variable2;
  variable2 = NEW_string___String___with_native(BOX_NativeString(" self"), TAG_Int(5)); /*new String*/
  ((array___AbstractArray___add_t)CALL( variable1 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*args*/, variable2) /*Array::add*/;
  variable2 = ((genericity___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMSrcMethod::signature*/;
  variable2 = ((static_type___MMSignature___arity_t)CALL(variable2,COLOR_static_type___MMSignature___arity))(variable2) /*MMSignature::arity*/;
  variable3 = NEW_range___Range___without_last( TAG_Int(0), variable2); /*new Range[Int]*/
  variable2 = variable3;
  variable2 = ((range___Range___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Range::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*Iterator::item*/;
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString(" param"), TAG_Int(6)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable3 /*i*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*args*/, variable4) /*Array::add*/;
    continue_38: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*Iterator::next*/;
  }
  break_38: while(0);
  variable3 = ((compiling_methods___MMSrcMethod___decl_csignature_t)CALL( self,COLOR_compiling_methods___MMSrcMethod___decl_csignature))( self,  variable0 /*v*/,  variable1 /*args*/) /*MMSrcMethod::decl_csignature*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable2 /*cs*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(" {"), TAG_Int(2)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable4 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable0 /*v*/) /*CompilerVisitor::ctx*/;
  variable3 = variable4;
  variable4 = NEW_compiling_base___CContext___init(); /*new CContext*/
  ((compiling_base___CompilerVisitor___ctx__eq_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx__eq))( variable0 /*v*/, variable4) /*CompilerVisitor::ctx=*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("struct trace_t trace = {NULL, \""), TAG_Int(31)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((abstractmetamodel___MMLocalProperty___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___module))( self) /*MMSrcMethod::module*/;
  variable7 = ((abstractmetamodel___MMModule___name_t)CALL(variable7,COLOR_abstractmetamodel___MMModule___name))(variable7) /*MMModule::name*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMSrcMethod::local_class*/;
  variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable11,COLOR_abstractmetamodel___MMLocalClass___name))(variable11) /*MMLocalClass::name*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMSrcMethod::name*/;
  variable16 = variable15;
  variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString(" ("), TAG_Int(2)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable19 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( self,COLOR_syntax_base___MMSrcLocalProperty___node))( self) /*MMSrcMethod::node*/;
  variable19 = ((parser_prod___Prod___locate_t)CALL(variable19,COLOR_parser_prod___PNode___locate))(variable19) /*PPropdef::locate*/;
  variable20 = variable19;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable20) /*String::append*/;
  variable21 = NEW_string___String___with_native(BOX_NativeString(")\"};"), TAG_Int(4)); /*new String*/
  variable22 = variable21;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable22) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
  variable4 = NEW_string___String___with_native(BOX_NativeString("trace.prev = tracehead; tracehead = &trace;"), TAG_Int(43)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable5 = ((compiling_methods___MMSrcMethod___do_compile_inside_t)CALL( self,COLOR_compiling_methods___MMSrcMethod___do_compile_inside))( self,  variable0 /*v*/,  variable1 /*args*/) /*MMSrcMethod::do_compile_inside*/;
  variable4 = variable5;
  variable5 = NEW_string___String___with_native(BOX_NativeString("tracehead = trace.prev;"), TAG_Int(23)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable5) /*CompilerVisitor::add_instr*/;
  variable5 = TAG_Bool(( variable4 /*s*/ ==  NIT_NULL /*null*/) || (( variable4 /*s*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable4 /*s*/,COLOR_kernel___Object_____eqeq))( variable4 /*s*/,  NIT_NULL /*null*/) /*String::==*/)));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("return;"), TAG_Int(7)); /*new String*/
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable5) /*CompilerVisitor::add_instr*/;
  } else { /*if*/
    variable5 = NEW_string___String___init(); /*new String*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("return "), TAG_Int(7)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
    variable8 =  variable4 /*s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable5) /*CompilerVisitor::add_instr*/;
  }
  variable5 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable0 /*v*/) /*CompilerVisitor::ctx*/;
  ((compiling_base___CContext___append_t)CALL( variable3 /*ctx_old*/,COLOR_compiling_base___CContext___append))( variable3 /*ctx_old*/, variable5) /*CContext::append*/;
  ((compiling_base___CompilerVisitor___ctx__eq_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx__eq))( variable0 /*v*/,  variable3 /*ctx_old*/) /*CompilerVisitor::ctx=*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable5) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___MMSrcMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMSrcMethod::do_compile_inside (src/compiling//compiling_methods.nit:334,2--335:74)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method do_compile_inside called (src/compiling//compiling_methods.nit:334,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_methods___MMReadImplementationMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMReadImplementationMethod::do_compile_inside (src/compiling//compiling_methods.nit:339,2--341:45)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( self,COLOR_syntax_base___MMSrcLocalProperty___node))( self) /*MMReadImplementationMethod::node*/;
  variable2 = ((mmbuilder___AAttrPropdef___prop_t)CALL(variable2,COLOR_syntax_base___AAttrPropdef___prop))(variable2) /*AAttrPropdef::prop*/;
  variable3 =  TAG_Int(0);
  variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ATTR_array___AbstractArray____length( variable1 /*params*/) /*Array::_length*/;
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
  }
  variable4 = variable5;
  if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable4 = ATTR_array___Array____items( variable1 /*params*/) /*Array::_items*/;
  variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
  goto return_label40;
  return_label40: while(false);
  variable3 = variable4;
  variable2 = ((compiling_methods___MMAttribute___compile_access_t)CALL(variable2,COLOR_compiling_methods___MMAttribute___compile_access))(variable2,  variable0 /*v*/, variable3) /*MMSrcAttribute::compile_access*/;
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMWriteImplementationMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMWriteImplementationMethod::do_compile_inside (src/compiling//compiling_methods.nit:346,2--349:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( self,COLOR_syntax_base___MMSrcLocalProperty___node))( self) /*MMWriteImplementationMethod::node*/;
  variable2 = ((mmbuilder___AAttrPropdef___prop_t)CALL(variable2,COLOR_syntax_base___AAttrPropdef___prop))(variable2) /*AAttrPropdef::prop*/;
  variable3 =  TAG_Int(0);
  variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ATTR_array___AbstractArray____length( variable1 /*params*/) /*Array::_length*/;
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
  }
  variable4 = variable5;
  if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable4 = ATTR_array___Array____items( variable1 /*params*/) /*Array::_items*/;
  variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
  goto return_label42;
  return_label42: while(false);
  variable3 = variable4;
  variable2 = ((compiling_methods___MMAttribute___compile_access_t)CALL(variable2,COLOR_compiling_methods___MMAttribute___compile_access))(variable2,  variable0 /*v*/, variable3) /*MMSrcAttribute::compile_access*/;
  variable3 =  TAG_Int(1);
  variable4 = TAG_Bool(UNTAG_Int( variable3 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ATTR_array___AbstractArray____length( variable1 /*params*/) /*Array::_length*/;
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*index*/)<UNTAG_Int(variable5));
  }
  variable4 = variable5;
  if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable4 = ATTR_array___Array____items( variable1 /*params*/) /*Array::_items*/;
  variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable3 /*index*/)];
  goto return_label43;
  return_label43: while(false);
  variable3 = variable4;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/, variable2, variable3) /*CompilerVisitor::add_assignment*/;
  variable2 =  NIT_NULL /*null*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMMethSrcMethod___do_compile_inside(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMMethSrcMethod::do_compile_inside (src/compiling//compiling_methods.nit:354,2--356:47)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( self,COLOR_syntax_base___MMSrcLocalProperty___node))( self) /*MMMethSrcMethod::node*/;
  variable2 = ((compiling_methods___AMethPropdef___do_compile_inside_t)CALL(variable2,COLOR_compiling_methods___AMethPropdef___do_compile_inside))(variable2,  variable0 /*v*/,  self,  variable1 /*params*/) /*AMethPropdef::do_compile_inside*/;
  goto return_label44;
  return_label44: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t compiling_methods___MMType___compile_cast(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_methods::MMType::compile_cast (src/compiling//compiling_methods.nit:361,2--367:99)"};
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
  val_t variable20;
  val_t variable21;
  val_t variable22;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___global))(variable3) /*MMLocalClass::global*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*recv*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("==NIT_NULL) || VAL_ISA("), TAG_Int(23)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable1 /*recv*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 = ((compiling_base___MMGlobalClass___color_id_t)CALL( variable2 /*g*/,COLOR_compiling_base___MMGlobalClass___color_id))( variable2 /*g*/) /*MMGlobalClass::color_id*/;
  variable13 = variable12;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable15) /*String::append*/;
  variable16 = ((compiling_base___MMGlobalClass___id_id_t)CALL( variable2 /*g*/,COLOR_compiling_base___MMGlobalClass___id_id))( variable2 /*g*/) /*MMGlobalClass::id_id*/;
  variable17 = variable16;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString(")) /*cast "), TAG_Int(10)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable19) /*String::append*/;
  variable20 =  self;
  variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable20) /*String::append*/;
  variable21 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable22 = variable21;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable22) /*String::append*/;
  variable2 = variable3;
  goto return_label45;
  return_label45: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_methods___MMType___compile_type_check(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::MMType::compile_type_check (src/compiling//compiling_methods.nit:370,2--375:171)"};
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
  val_t variable20;
  val_t variable21;
  val_t variable22;
  val_t variable23;
  val_t variable24;
  val_t variable25;
  val_t variable26;
  val_t variable27;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable4 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___global))(variable4) /*MMLocalClass::global*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("if (("), TAG_Int(5)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable1 /*recv*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("!=NIT_NULL) && !VAL_ISA("), TAG_Int(24)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 =  variable1 /*recv*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = ((compiling_base___MMGlobalClass___color_id_t)CALL( variable3 /*g*/,COLOR_compiling_base___MMGlobalClass___color_id))( variable3 /*g*/) /*MMGlobalClass::color_id*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = ((compiling_base___MMGlobalClass___id_id_t)CALL( variable3 /*g*/,COLOR_compiling_base___MMGlobalClass___id_id))( variable3 /*g*/) /*MMGlobalClass::id_id*/;
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString(")) { fprintf(stderr, \"Cast failled at "), TAG_Int(38)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable20) /*String::append*/;
  variable21 = ((parser_prod___PNode___locate_t)CALL( variable2 /*n*/,COLOR_parser_prod___PNode___locate))( variable2 /*n*/) /*PNode::locate*/;
  variable22 = variable21;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable22) /*String::append*/;
  variable23 = NEW_string___String___with_native(BOX_NativeString("\\n\"); nit_exit(1); } /*cast "), TAG_Int(28)); /*new String*/
  variable24 = variable23;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable24) /*String::append*/;
  variable25 =  self;
  variable25 = ((string___String___to_s_t)CALL(variable25,COLOR_string___Object___to_s))(variable25) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable25) /*String::append*/;
  variable26 = NEW_string___String___with_native(BOX_NativeString("*/;"), TAG_Int(3)); /*new String*/
  variable27 = variable26;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable27) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___AMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::AMethPropdef::do_compile_inside (src/compiling//compiling_methods.nit:382,2--383:95)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method do_compile_inside called (src/compiling//compiling_methods.nit:382,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_methods___AConcreteMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::AConcreteMethPropdef::do_compile_inside (src/compiling//compiling_methods.nit:387,2--446:12)"};
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
    val_t variable20;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*method*/) /*MMSrcMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable4) /*MMGlobalProperty::intro*/;
  variable3 = variable4;
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( variable3 /*orig_meth*/,COLOR_static_type___MMLocalProperty___signature))( variable3 /*orig_meth*/) /*MMLocalProperty::signature*/;
  variable6 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable6 = ((static_type___MMSignature___recv_t)CALL(variable6,COLOR_static_type___MMSignature___recv))(variable6) /*MMSignature::recv*/;
  variable5 = ((vararg___MMSignature___adaptation_to_t)CALL(variable5,COLOR_genericity___MMSignature___adaptation_to))(variable5, variable6) /*MMSignature::adaptation_to*/;
  variable4 = variable5;
  variable5 = ((parser_nodes___AMethPropdef___n_signature_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_signature))( self) /*AConcreteMethPropdef::n_signature*/;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*PSignature::==*/)))))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable6 = ((parser_nodes___AMethPropdef___n_signature_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_signature))( self) /*AConcreteMethPropdef::n_signature*/;
    variable5 = variable6;
    variable6 = TAG_Bool(( variable5 /*sig*/==NIT_NULL) || VAL_ISA( variable5 /*sig*/, COLOR_ASignature, ID_ASignature)) /*cast ASignature*/;
    if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: src/compiling//compiling_methods.nit:393,4--28\n"); nit_exit(1);}
    variable6 = ((parser_nodes___ASignature___n_params_t)CALL( variable5 /*sig*/,COLOR_parser_nodes___ASignature___n_params))( variable5 /*sig*/) /*ASignature::n_params*/;
    variable6 = ((list___List___iterator_t)CALL(variable6,COLOR_abstract_collection___Collection___iterator))(variable6) /*List::iterator*/;
    while (true) { /*for*/
      variable7 = ((list___ListIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ListIterator::is_ok*/;
      if (!UNTAG_Bool(variable7)) break; /*for*/
      variable7 = ((list___ListIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ListIterator::item*/;
      variable9 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
      variable8 = variable9;
      variable9 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
      variable10 = ((mmbuilder___PParam___variable_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___variable))( variable7 /*ap*/) /*PParam::variable*/;
      ((abstract_collection___Map_____braeq_t)CALL(variable9,COLOR_abstract_collection___Map_____braeq))(variable9, variable10,  variable8 /*cname*/) /*Map::[]=*/;
      variable10 = ((mmbuilder___PParam___position_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___position))( variable7 /*ap*/) /*PParam::position*/;
      variable10 = ((static_type___MMSignature_____bra_t)CALL( variable4 /*orig_sig*/,COLOR_static_type___MMSignature_____bra))( variable4 /*orig_sig*/, variable10) /*MMSignature::[]*/;
      variable9 = variable10;
      variable10 = ((mmbuilder___PParam___variable_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___variable))( variable7 /*ap*/) /*PParam::variable*/;
      variable10 = ((syntax_base___Variable___stype_t)CALL(variable10,COLOR_syntax_base___Variable___stype))(variable10) /*Variable::stype*/;
      variable10 = ((static_type___MMType_____l_t)CALL( variable9 /*orig_type*/,COLOR_static_type___MMType_____l))( variable9 /*orig_type*/, variable10) /*MMType::<*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable10)))) { /*if*/
        variable10 = NEW_string___String___init(); /*new String*/
        variable11 = NEW_string___String___with_native(BOX_NativeString("/* check if p<"), TAG_Int(14)); /*new String*/
        variable12 = variable11;
        ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
        variable13 = ((mmbuilder___PParam___variable_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___variable))( variable7 /*ap*/) /*PParam::variable*/;
        variable13 = ((syntax_base___Variable___stype_t)CALL(variable13,COLOR_syntax_base___Variable___stype))(variable13) /*Variable::stype*/;
        variable14 = variable13;
        variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
        ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable14) /*String::append*/;
        variable15 = NEW_string___String___with_native(BOX_NativeString(" with p:"), TAG_Int(8)); /*new String*/
        variable16 = variable15;
        ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable16) /*String::append*/;
        variable17 =  variable9 /*orig_type*/;
        variable17 = ((string___String___to_s_t)CALL(variable17,COLOR_string___Object___to_s))(variable17) /*String::to_s*/;
        ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable17) /*String::append*/;
        variable18 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
        variable19 = variable18;
        ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable19) /*String::append*/;
        ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable10) /*CompilerVisitor::add_instr*/;
        variable10 = ((mmbuilder___PParam___variable_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___variable))( variable7 /*ap*/) /*PParam::variable*/;
        variable10 = ((syntax_base___Variable___stype_t)CALL(variable10,COLOR_syntax_base___Variable___stype))(variable10) /*Variable::stype*/;
        variable11 = ((mmbuilder___PParam___position_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___position))( variable7 /*ap*/) /*PParam::position*/;
        variable11 = TAG_Int(UNTAG_Int(variable11)+UNTAG_Int( TAG_Int(1)));
        variable12 = variable11;
        variable13 = TAG_Bool(UNTAG_Int( variable12 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable14 = variable13;
        if (UNTAG_Bool(variable14)) { /* and */
          variable14 = ATTR_array___AbstractArray____length( variable2 /*params*/) /*Array::_length*/;
          variable14 = TAG_Bool(UNTAG_Int( variable12 /*index*/)<UNTAG_Int(variable14));
        }
        variable13 = variable14;
        if (!UNTAG_Bool(variable13)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable13 = ATTR_array___Array____items( variable2 /*params*/) /*Array::_items*/;
        variable13 = UNBOX_NativeArray(variable13)[UNTAG_Int( variable12 /*index*/)];
        goto return_label49;
        return_label49: while(false);
        variable11 = variable13;
        ((compiling_methods___MMType___compile_type_check_t)CALL(variable10,COLOR_compiling_methods___MMType___compile_type_check))(variable10,  variable0 /*v*/, variable11,  variable7 /*ap*/) /*MMType::compile_type_check*/;
      }
      variable10 = ((mmbuilder___PParam___position_t)CALL( variable7 /*ap*/,COLOR_syntax_base___PParam___position))( variable7 /*ap*/) /*PParam::position*/;
      variable10 = TAG_Int(UNTAG_Int(variable10)+UNTAG_Int( TAG_Int(1)));
      variable11 = variable10;
      variable12 = TAG_Bool(UNTAG_Int( variable11 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable13 = variable12;
      if (UNTAG_Bool(variable13)) { /* and */
        variable13 = ATTR_array___AbstractArray____length( variable2 /*params*/) /*Array::_length*/;
        variable13 = TAG_Bool(UNTAG_Int( variable11 /*index*/)<UNTAG_Int(variable13));
      }
      variable12 = variable13;
      if (!UNTAG_Bool(variable12)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable12 = ATTR_array___Array____items( variable2 /*params*/) /*Array::_items*/;
      variable12 = UNBOX_NativeArray(variable12)[UNTAG_Int( variable11 /*index*/)];
      goto return_label50;
      return_label50: while(false);
      variable10 = variable12;
      ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable8 /*cname*/, variable10) /*CompilerVisitor::add_assignment*/;
      continue_48: while(0);
      ((list___ListIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ListIterator::next*/;
    }
    break_48: while(0);
  }
  variable6 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params))( variable0 /*v*/) /*CompilerVisitor::method_params*/;
  variable5 = variable6;
  variable7 = ((compiling_methods___CompilerVisitor___return_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_label))( variable0 /*v*/) /*CompilerVisitor::return_label*/;
  variable6 = variable7;
  variable8 = ((compiling_methods___CompilerVisitor___return_value_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value))( variable0 /*v*/) /*CompilerVisitor::return_value*/;
  variable7 = variable8;
  variable9 = ((compiling_methods___CompilerVisitor___has_return_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___has_return))( variable0 /*v*/) /*CompilerVisitor::has_return*/;
  variable8 = variable9;
  variable9 = NIT_NULL /*decl variable itpos*/;
  variable10 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
  if (UNTAG_Bool(variable10)) { /*if*/
    variable10 = NEW_string___String___init(); /*new String*/
    variable11 = NEW_string___String___with_native(BOX_NativeString("VAL2OBJ("), TAG_Int(8)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
    variable13 =  TAG_Int(0);
    variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable15 = variable14;
    if (UNTAG_Bool(variable15)) { /* and */
      variable15 = ATTR_array___AbstractArray____length( variable2 /*params*/) /*Array::_length*/;
      variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
    }
    variable14 = variable15;
    if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable14 = ATTR_array___Array____items( variable2 /*params*/) /*Array::_items*/;
    variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
    goto return_label51;
    return_label51: while(false);
    variable13 = variable14;
    variable14 = variable13;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable14) /*String::append*/;
    variable15 = NEW_string___String___with_native(BOX_NativeString(")->vft["), TAG_Int(7)); /*new String*/
    variable16 = variable15;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable16) /*String::append*/;
    variable17 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*method*/) /*MMSrcMethod::local_class*/;
    variable17 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable17,COLOR_abstractmetamodel___MMLocalClass___global))(variable17) /*MMLocalClass::global*/;
    variable17 = ((compiling_base___MMGlobalClass___init_table_pos_id_t)CALL(variable17,COLOR_compiling_base___MMGlobalClass___init_table_pos_id))(variable17) /*MMGlobalClass::init_table_pos_id*/;
    variable18 = variable17;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable18) /*String::append*/;
    variable19 = NEW_string___String___with_native(BOX_NativeString("].i"), TAG_Int(3)); /*new String*/
    variable20 = variable19;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable20) /*String::append*/;
    variable9 = variable10 /*itpos=*/;
    variable10 = NEW_string___String___init(); /*new String*/
    variable11 = NEW_string___String___with_native(BOX_NativeString("if (init_table["), TAG_Int(15)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
    variable13 =  variable9 /*itpos*/;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString("]) return;"), TAG_Int(10)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable15) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable10) /*CompilerVisitor::add_instr*/;
  }
  ((compiling_methods___CompilerVisitor___method_params__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params__eq))( variable0 /*v*/,  variable2 /*params*/) /*CompilerVisitor::method_params=*/;
  ((compiling_methods___CompilerVisitor___has_return__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___has_return__eq))( variable0 /*v*/,  TAG_Bool(false)) /*CompilerVisitor::has_return=*/;
  variable10 = NEW_string___String___init(); /*new String*/
  variable11 = NEW_string___String___with_native(BOX_NativeString("return_label"), TAG_Int(12)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
  variable13 = ((compiling_base___CompilerVisitor___new_number_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___new_number))( variable0 /*v*/) /*CompilerVisitor::new_number*/;
  variable14 = variable13;
  variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
  ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable16) /*String::append*/;
  ((compiling_methods___CompilerVisitor___return_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_label__eq))( variable0 /*v*/, variable10) /*CompilerVisitor::return_label=*/;
  variable10 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable10 = ((static_type___MMSignature___return_type_t)CALL(variable10,COLOR_static_type___MMSignature___return_type))(variable10) /*MMSignature::return_type*/;
  variable10 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable10 ==  NIT_NULL /*null*/) || ((variable10 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable10,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable10, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable10,COLOR_kernel___Object_____eqeq))(variable10,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable10)) { /*if*/
    variable10 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
    ((compiling_methods___CompilerVisitor___return_value__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value__eq))( variable0 /*v*/, variable10) /*CompilerVisitor::return_value=*/;
    variable10 = ((compiling_methods___CompilerVisitor___return_value_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value))( variable0 /*v*/) /*CompilerVisitor::return_value*/;
    ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/, variable10) /*CompilerVisitor::free_var*/;
  } else { /*if*/
    ((compiling_methods___CompilerVisitor___return_value__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*CompilerVisitor::return_value=*/;
  }
  variable10 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
  if (UNTAG_Bool(variable10)) { /*if*/
    ((compiling_methods___CompilerVisitor___method__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method__eq))( variable0 /*v*/,  variable1 /*method*/) /*CompilerVisitor::method=*/;
    ((compiling_methods___CompilerVisitor___invoke_super_init_calls_after_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___invoke_super_init_calls_after))( variable0 /*v*/,  NIT_NULL /*null*/) /*CompilerVisitor::invoke_super_init_calls_after*/;
  }
  variable10 = ((parser_nodes___AConcreteMethPropdef___n_block_t)CALL( self,COLOR_parser_nodes___AConcreteMethPropdef___n_block))( self) /*AConcreteMethPropdef::n_block*/;
  variable10 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable10 ==  NIT_NULL /*null*/) || ((variable10 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable10,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable10, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable10,COLOR_kernel___Object_____eqeq))(variable10,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable10)) { /*if*/
    variable10 = ((parser_nodes___AConcreteMethPropdef___n_block_t)CALL( self,COLOR_parser_nodes___AConcreteMethPropdef___n_block))( self) /*AConcreteMethPropdef::n_block*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable10) /*CompilerVisitor::compile_stmt*/;
  }
  variable10 = ((compiling_methods___CompilerVisitor___has_return_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___has_return))( variable0 /*v*/) /*CompilerVisitor::has_return*/;
  if (UNTAG_Bool(variable10)) { /*if*/
    variable10 = NEW_string___String___init(); /*new String*/
    variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
    variable13 = ((compiling_methods___CompilerVisitor___return_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_label))( variable0 /*v*/) /*CompilerVisitor::return_label*/;
    variable14 = variable13;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable14) /*String::append*/;
    variable15 = NEW_string___String___with_native(BOX_NativeString(": while(false);"), TAG_Int(15)); /*new String*/
    variable16 = variable15;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable16) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable10) /*CompilerVisitor::add_instr*/;
  }
  variable10 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
  if (UNTAG_Bool(variable10)) { /*if*/
    variable10 = NEW_string___String___init(); /*new String*/
    variable11 = NEW_string___String___with_native(BOX_NativeString("init_table["), TAG_Int(11)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
    variable13 =  variable9 /*itpos*/;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString("] = 1;"), TAG_Int(6)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable15) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable10) /*CompilerVisitor::add_instr*/;
  }
  variable11 = ((compiling_methods___CompilerVisitor___return_value_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value))( variable0 /*v*/) /*CompilerVisitor::return_value*/;
  variable10 = variable11;
  ((compiling_methods___CompilerVisitor___method_params__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params__eq))( variable0 /*v*/,  variable5 /*old_method_params*/) /*CompilerVisitor::method_params=*/;
  ((compiling_methods___CompilerVisitor___return_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_label__eq))( variable0 /*v*/,  variable6 /*old_return_label*/) /*CompilerVisitor::return_label=*/;
  ((compiling_methods___CompilerVisitor___return_value__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value__eq))( variable0 /*v*/,  variable7 /*old_return_value*/) /*CompilerVisitor::return_value=*/;
  ((compiling_methods___CompilerVisitor___has_return__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___has_return__eq))( variable0 /*v*/,  variable8 /*old_has_return*/) /*CompilerVisitor::has_return=*/;
  variable3 =  variable10 /*ret*/;
  goto return_label47;
  return_label47: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t compiling_methods___ADeferredMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::ADeferredMethPropdef::do_compile_inside (src/compiling//compiling_methods.nit:451,2--458:14)"};
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
  variable1 =  param1;
  variable2 =  param2;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("fprintf(stderr, \"Deferred method "), TAG_Int(33)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((mmbuilder___AMethPropdef___name_t)CALL( self,COLOR_mmbuilder___AMethPropdef___name))( self) /*ADeferredMethPropdef::name*/;
  variable7 = variable6;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(" called ("), TAG_Int(9)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = ((parser_prod___Prod___first_token_t)CALL( self,COLOR_parser_prod___Prod___first_token))( self) /*ADeferredMethPropdef::first_token*/;
  variable10 = ((parser_prod___Token___locate_t)CALL(variable10,COLOR_parser_prod___PNode___locate))(variable10) /*Token::locate*/;
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString(")\\n\");"), TAG_Int(6)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("nit_exit(1);"), TAG_Int(12)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  variable3 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable3 = ((static_type___MMSignature___return_type_t)CALL(variable3,COLOR_static_type___MMSignature___return_type))(variable3) /*MMSignature::return_type*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("NIT_NULL"), TAG_Int(8)); /*new String*/
    goto return_label52;
  } else { /*if*/
    variable3 =  NIT_NULL /*null*/;
    goto return_label52;
  }
  return_label52: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t compiling_methods___AExternMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::AExternMethPropdef::do_compile_inside (src/compiling//compiling_methods.nit:464,2--485:14)"};
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
  val_t variable20;
  val_t variable21;
  val_t variable22;
  val_t variable23;
  val_t variable24;
  val_t variable25;
  val_t variable26;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((abstractmetamodel___MMLocalProperty___module_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___module))( variable1 /*method*/) /*MMSrcMethod::module*/;
  variable7 = ((abstractmetamodel___MMModule___name_t)CALL(variable7,COLOR_abstractmetamodel___MMModule___name))(variable7) /*MMModule::name*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*method*/) /*MMSrcMethod::local_class*/;
  variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable11,COLOR_abstractmetamodel___MMLocalClass___name))(variable11) /*MMLocalClass::name*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*method*/) /*MMSrcMethod::local_class*/;
  variable15 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable15,COLOR_abstractmetamodel___MMLocalClass___name))(variable15) /*MMLocalClass::name*/;
  variable16 = variable15;
  variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable19 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*method*/) /*MMSrcMethod::name*/;
  variable20 = variable19;
  variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable20) /*String::append*/;
  variable21 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable22 = variable21;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable22) /*String::append*/;
  variable23 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable23 = ((static_type___MMSignature___arity_t)CALL(variable23,COLOR_static_type___MMSignature___arity))(variable23) /*MMSignature::arity*/;
  variable24 = variable23;
  variable24 = ((string___String___to_s_t)CALL(variable24,COLOR_string___Object___to_s))(variable24) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable24) /*String::append*/;
  variable25 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable26 = variable25;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable26) /*String::append*/;
  variable3 = variable4;
  variable4 = ((parser_nodes___AExternMethPropdef___n_extern_t)CALL( self,COLOR_parser_nodes___AExternMethPropdef___n_extern))( self) /*AExternMethPropdef::n_extern*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*TString::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((parser_nodes___AExternMethPropdef___n_extern_t)CALL( self,COLOR_parser_nodes___AExternMethPropdef___n_extern))( self) /*AExternMethPropdef::n_extern*/;
    variable4 = ((lexer___Token___text_t)CALL(variable4,COLOR_lexer___Token___text))(variable4) /*TString::text*/;
    variable3 = variable4 /*ename=*/;
    variable4 = ((array___AbstractArray___length_t)CALL( variable3 /*ename*/,COLOR_abstract_collection___Collection___length))( variable3 /*ename*/) /*String::length*/;
    variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(2)));
    variable4 = ((string___String___substring_t)CALL( variable3 /*ename*/,COLOR_string___String___substring))( variable3 /*ename*/,  TAG_Int(1), variable4) /*String::substring*/;
    variable3 = variable4 /*ename=*/;
  }
  variable5 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable4 = variable5;
  variable5 = ((array___AbstractArray___length_t)CALL( variable2 /*params*/,COLOR_abstract_collection___Collection___length))( variable2 /*params*/) /*Array::length*/;
  variable6 = ((static_type___MMSignature___arity_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___arity))( variable4 /*sig*/) /*MMSignature::arity*/;
  variable6 = TAG_Int(UNTAG_Int(variable6)+UNTAG_Int( TAG_Int(1)));
  variable5 = TAG_Bool((variable5)!=(variable6));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = NEW_string___String___init(); /*new String*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("par:"), TAG_Int(4)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
    variable8 = ((array___AbstractArray___length_t)CALL( variable2 /*params*/,COLOR_abstract_collection___Collection___length))( variable2 /*params*/) /*Array::length*/;
    variable9 = variable8;
    variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
    variable10 = NEW_string___String___with_native(BOX_NativeString(" sig:"), TAG_Int(5)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
    variable12 = ((static_type___MMSignature___arity_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___arity))( variable4 /*sig*/) /*MMSignature::arity*/;
    variable13 = variable12;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
    ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable5) /*AExternMethPropdef::printl*/;
  }
  variable6 = NEW_array___Array___init(); /*new Array[String]*/
  variable5 = variable6;
  variable6 = ((static_type___MMSignature___recv_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___recv))( variable4 /*sig*/) /*MMSignature::recv*/;
  variable7 =  TAG_Int(0);
  variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable9 = variable8;
  if (UNTAG_Bool(variable9)) { /* and */
    variable9 = ATTR_array___AbstractArray____length( variable2 /*params*/) /*Array::_length*/;
    variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
  }
  variable8 = variable9;
  if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable8 = ATTR_array___Array____items( variable2 /*params*/) /*Array::_items*/;
  variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
  goto return_label54;
  return_label54: while(false);
  variable7 = variable8;
  variable6 = ((compiling_base___MMType___unboxtype_t)CALL(variable6,COLOR_compiling_base___MMType___unboxtype))(variable6, variable7) /*MMType::unboxtype*/;
  ((array___AbstractArray___add_t)CALL( variable5 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*args*/, variable6) /*Array::add*/;
  variable6 = ((static_type___MMSignature___arity_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___arity))( variable4 /*sig*/) /*MMSignature::arity*/;
  variable7 = NEW_range___Range___without_last( TAG_Int(0), variable6); /*new Range[Int]*/
  variable6 = variable7;
  variable6 = ((range___Range___iterator_t)CALL(variable6,COLOR_abstract_collection___Collection___iterator))(variable6) /*Range::iterator*/;
  while (true) { /*for*/
    variable7 = ((abstract_collection___Iterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable7)) break; /*for*/
    variable7 = ((abstract_collection___Iterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*Iterator::item*/;
    variable8 = ((static_type___MMSignature_____bra_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature_____bra))( variable4 /*sig*/,  variable7 /*i*/) /*MMSignature::[]*/;
    variable9 = TAG_Int(UNTAG_Int( variable7 /*i*/)+UNTAG_Int( TAG_Int(1)));
    variable10 = variable9;
    variable11 = TAG_Bool(UNTAG_Int( variable10 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable12 = variable11;
    if (UNTAG_Bool(variable12)) { /* and */
      variable12 = ATTR_array___AbstractArray____length( variable2 /*params*/) /*Array::_length*/;
      variable12 = TAG_Bool(UNTAG_Int( variable10 /*index*/)<UNTAG_Int(variable12));
    }
    variable11 = variable12;
    if (!UNTAG_Bool(variable11)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable11 = ATTR_array___Array____items( variable2 /*params*/) /*Array::_items*/;
    variable11 = UNBOX_NativeArray(variable11)[UNTAG_Int( variable10 /*index*/)];
    goto return_label56;
    return_label56: while(false);
    variable9 = variable11;
    variable8 = ((compiling_base___MMType___unboxtype_t)CALL(variable8,COLOR_compiling_base___MMType___unboxtype))(variable8, variable9) /*MMType::unboxtype*/;
    ((array___AbstractArray___add_t)CALL( variable5 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*args*/, variable8) /*Array::add*/;
    continue_55: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*Iterator::next*/;
  }
  break_55: while(0);
  variable7 = NEW_string___String___init(); /*new String*/
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
  variable10 =  variable3 /*ename*/;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable13 = ((string___Collection___join_t)CALL( variable5 /*args*/,COLOR_string___Collection___join))( variable5 /*args*/, variable13) /*Array::join*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
  variable6 = variable7;
  variable7 = ((static_type___MMSignature___return_type_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___return_type))( variable4 /*sig*/) /*MMSignature::return_type*/;
  variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable7 ==  NIT_NULL /*null*/) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = ((static_type___MMSignature___return_type_t)CALL( variable4 /*sig*/,COLOR_static_type___MMSignature___return_type))( variable4 /*sig*/) /*MMSignature::return_type*/;
    variable7 = ((compiling_base___MMType___boxtype_t)CALL(variable7,COLOR_compiling_base___MMType___boxtype))(variable7,  variable6 /*s*/) /*MMType::boxtype*/;
    variable3 = variable7;
    goto return_label53;
  } else { /*if*/
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 =  variable6 /*s*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable7) /*CompilerVisitor::add_instr*/;
    variable3 =  NIT_NULL /*null*/;
    goto return_label53;
  }
  return_label53: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t compiling_methods___AInternMethPropdef___do_compile_inside(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_methods::AInternMethPropdef::do_compile_inside (src/compiling//compiling_methods.nit:491,2--659:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  static val_t once_value_variable6_58; static int once_bool_variable6_58;
    static val_t once_value_variable6_59; static int once_bool_variable6_59;
      val_t variable7;
      val_t variable8;
      val_t variable9;
      val_t variable10;
      val_t variable11;
      val_t variable12;
      static val_t once_value_variable6_61; static int once_bool_variable6_61;
        static val_t once_value_variable6_63; static int once_bool_variable6_63;
          static val_t once_value_variable6_65; static int once_bool_variable6_65;
            static val_t once_value_variable6_67; static int once_bool_variable6_67;
              static val_t once_value_variable6_69; static int once_bool_variable6_69;
		static val_t once_value_variable6_71; static int once_bool_variable6_71;
		static val_t once_value_variable6_73; static int once_bool_variable6_73;
		val_t variable13;
		val_t variable14;
		val_t variable15;
		val_t variable16;
		static val_t once_value_variable6_76; static int once_bool_variable6_76;
		static val_t once_value_variable6_79; static int once_bool_variable6_79;
		static val_t once_value_variable6_82; static int once_bool_variable6_82;
		static val_t once_value_variable6_85; static int once_bool_variable6_85;
		static val_t once_value_variable6_88; static int once_bool_variable6_88;
		static val_t once_value_variable6_91; static int once_bool_variable6_91;
		static val_t once_value_variable6_94; static int once_bool_variable6_94;
		static val_t once_value_variable6_97; static int once_bool_variable6_97;
		static val_t once_value_variable6_100; static int once_bool_variable6_100;
		static val_t once_value_variable6_103; static int once_bool_variable6_103;
		static val_t once_value_variable6_106; static int once_bool_variable6_106;
		static val_t once_value_variable6_109; static int once_bool_variable6_109;
    static val_t once_value_variable6_112; static int once_bool_variable6_112;
      static val_t once_value_variable6_113; static int once_bool_variable6_113;
        static val_t once_value_variable6_115; static int once_bool_variable6_115;
          static val_t once_value_variable6_117; static int once_bool_variable6_117;
            static val_t once_value_variable6_119; static int once_bool_variable6_119;
              static val_t once_value_variable6_121; static int once_bool_variable6_121;
		static val_t once_value_variable6_124; static int once_bool_variable6_124;
		static val_t once_value_variable6_127; static int once_bool_variable6_127;
		static val_t once_value_variable6_130; static int once_bool_variable6_130;
		static val_t once_value_variable6_133; static int once_bool_variable6_133;
		static val_t once_value_variable6_136; static int once_bool_variable6_136;
		static val_t once_value_variable6_139; static int once_bool_variable6_139;
		static val_t once_value_variable6_142; static int once_bool_variable6_142;
      static val_t once_value_variable6_145; static int once_bool_variable6_145;
        static val_t once_value_variable6_146; static int once_bool_variable6_146;
          static val_t once_value_variable6_148; static int once_bool_variable6_148;
            static val_t once_value_variable6_150; static int once_bool_variable6_150;
              static val_t once_value_variable6_152; static int once_bool_variable6_152;
		static val_t once_value_variable6_154; static int once_bool_variable6_154;
		static val_t once_value_variable6_156; static int once_bool_variable6_156;
		static val_t once_value_variable6_158; static int once_bool_variable6_158;
		static val_t once_value_variable6_160; static int once_bool_variable6_160;
		static val_t once_value_variable6_163; static int once_bool_variable6_163;
		static val_t once_value_variable6_166; static int once_bool_variable6_166;
		static val_t once_value_variable6_169; static int once_bool_variable6_169;
		static val_t once_value_variable6_172; static int once_bool_variable6_172;
		static val_t once_value_variable6_175; static int once_bool_variable6_175;
		static val_t once_value_variable6_178; static int once_bool_variable6_178;
		static val_t once_value_variable6_181; static int once_bool_variable6_181;
		static val_t once_value_variable6_184; static int once_bool_variable6_184;
		static val_t once_value_variable6_187; static int once_bool_variable6_187;
		static val_t once_value_variable6_190; static int once_bool_variable6_190;
        static val_t once_value_variable6_193; static int once_bool_variable6_193;
          static val_t once_value_variable6_194; static int once_bool_variable6_194;
            static val_t once_value_variable6_196; static int once_bool_variable6_196;
              static val_t once_value_variable6_198; static int once_bool_variable6_198;
		static val_t once_value_variable6_200; static int once_bool_variable6_200;
		static val_t once_value_variable6_202; static int once_bool_variable6_202;
		static val_t once_value_variable6_204; static int once_bool_variable6_204;
		static val_t once_value_variable6_207; static int once_bool_variable6_207;
          static val_t once_value_variable6_210; static int once_bool_variable6_210;
            static val_t once_value_variable6_211; static int once_bool_variable6_211;
              static val_t once_value_variable6_213; static int once_bool_variable6_213;
		static val_t once_value_variable6_216; static int once_bool_variable6_216;
		val_t variable17;
		val_t variable18;
		val_t variable19;
		val_t variable20;
		static val_t once_value_variable6_220; static int once_bool_variable6_220;
            static val_t once_value_variable6_224; static int once_bool_variable6_224;
              static val_t once_value_variable6_225; static int once_bool_variable6_225;
		static val_t once_value_variable6_227; static int once_bool_variable6_227;
		static val_t once_value_variable6_229; static int once_bool_variable6_229;
		static val_t once_value_variable6_232; static int once_bool_variable6_232;
		static val_t once_value_variable6_236; static int once_bool_variable6_236;
		val_t variable21;
		val_t variable22;
		val_t variable23;
		val_t variable24;
		val_t variable25;
		val_t variable26;
		val_t variable27;
		val_t variable28;
              static val_t once_value_variable6_242; static int once_bool_variable6_242;
		static val_t once_value_variable6_244; static int once_bool_variable6_244;
		static val_t once_value_variable6_245; static int once_bool_variable6_245;
		static val_t once_value_variable6_248; static int once_bool_variable6_248;
		static val_t once_value_variable6_250; static int once_bool_variable6_250;
		static val_t once_value_variable6_252; static int once_bool_variable6_252;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*method*/) /*MMSrcMethod::local_class*/;
  variable4 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___name))(variable4) /*MMLocalClass::name*/;
  variable3 = variable4;
  variable5 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*method*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*method*/) /*MMSrcMethod::name*/;
  variable4 = variable5;
  variable5 = NIT_NULL /*decl variable s*/;
  if (once_bool_variable6_58) variable6 = once_value_variable6_58;
  else {
    variable6 = NEW_string___String___with_native(BOX_NativeString("Int"), TAG_Int(3)); /*new String*/
    variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
    once_value_variable6_58 = variable6;
    once_bool_variable6_58 = true;
  }
  variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    if (once_bool_variable6_59) variable6 = once_value_variable6_59;
    else {
      variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
      variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
      once_value_variable6_59 = variable6;
      once_bool_variable6_59 = true;
    }
    variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 =  TAG_Int(0);
      variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable11 = variable10;
      if (UNTAG_Bool(variable11)) { /* and */
        variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
        variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
      }
      variable10 = variable11;
      if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
      variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
      goto return_label60;
      return_label60: while(false);
      variable9 = variable10;
      variable10 = variable9;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      variable5 = variable6 /*s=*/;
    } else { /*if*/
      if (once_bool_variable6_61) variable6 = once_value_variable6_61;
      else {
        variable6 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
        variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
        once_value_variable6_61 = variable6;
        once_bool_variable6_61 = true;
      }
      variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(-UNTAG_Int("), TAG_Int(19)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  TAG_Int(0);
        variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable11 = variable10;
        if (UNTAG_Bool(variable11)) { /* and */
          variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
          variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
        }
        variable10 = variable11;
        if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
        variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
        goto return_label62;
        return_label62: while(false);
        variable9 = variable10;
        variable10 = variable9;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
        variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
        variable12 = variable11;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
        variable5 = variable6 /*s=*/;
      } else { /*if*/
        if (once_bool_variable6_63) variable6 = once_value_variable6_63;
        else {
          variable6 = NEW_string___String___with_native(BOX_NativeString("output"), TAG_Int(6)); /*new String*/
          variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
          once_value_variable6_63 = variable6;
          once_bool_variable6_63 = true;
        }
        variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
        if (UNTAG_Bool(variable6)) { /*if*/
          variable6 = NEW_string___String___init(); /*new String*/
          variable7 = NEW_string___String___with_native(BOX_NativeString("printf(\"%d\\n\", UNTAG_Int("), TAG_Int(25)); /*new String*/
          variable8 = variable7;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
          variable9 =  TAG_Int(0);
          variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
          variable11 = variable10;
          if (UNTAG_Bool(variable11)) { /* and */
            variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
            variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
          }
          variable10 = variable11;
          if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
          variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
          variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
          goto return_label64;
          return_label64: while(false);
          variable9 = variable10;
          variable10 = variable9;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
          variable11 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
          variable12 = variable11;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
          ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
        } else { /*if*/
          if (once_bool_variable6_65) variable6 = once_value_variable6_65;
          else {
            variable6 = NEW_string___String___with_native(BOX_NativeString("ascii"), TAG_Int(5)); /*new String*/
            variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
            once_value_variable6_65 = variable6;
            once_bool_variable6_65 = true;
          }
          variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
          if (UNTAG_Bool(variable6)) { /*if*/
            variable6 = NEW_string___String___init(); /*new String*/
            variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Int("), TAG_Int(19)); /*new String*/
            variable8 = variable7;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
            variable9 =  TAG_Int(0);
            variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
            variable11 = variable10;
            if (UNTAG_Bool(variable11)) { /* and */
              variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
              variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
            }
            variable10 = variable11;
            if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
            variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
            variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
            goto return_label66;
            return_label66: while(false);
            variable9 = variable10;
            variable10 = variable9;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
            variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
            variable12 = variable11;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
            variable5 = variable6 /*s=*/;
          } else { /*if*/
            if (once_bool_variable6_67) variable6 = once_value_variable6_67;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("succ"), TAG_Int(4)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_67 = variable6;
              once_bool_variable6_67 = true;
            }
            variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              variable6 = NEW_string___String___init(); /*new String*/
              variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
              variable8 = variable7;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
              variable9 =  TAG_Int(0);
              variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
              variable11 = variable10;
              if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
              }
              variable10 = variable11;
              if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
              variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
              variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
              goto return_label68;
              return_label68: while(false);
              variable9 = variable10;
              variable10 = variable9;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
              variable11 = NEW_string___String___with_native(BOX_NativeString(")+1)"), TAG_Int(4)); /*new String*/
              variable12 = variable11;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
              variable5 = variable6 /*s=*/;
            } else { /*if*/
              if (once_bool_variable6_69) variable6 = once_value_variable6_69;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("prec"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_69 = variable6;
		once_bool_variable6_69 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label70;
		return_label70: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-1)"), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_71) variable6 = once_value_variable6_71;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("to_f"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_71 = variable6;
		once_bool_variable6_71 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float((float)UNTAG_Int("), TAG_Int(27)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label72;
		return_label72: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_73) variable6 = once_value_variable6_73;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("+"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_73 = variable6;
		once_bool_variable6_73 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label74;
		return_label74: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")+UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label75;
		return_label75: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_76) variable6 = once_value_variable6_76;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_76 = variable6;
		once_bool_variable6_76 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label77;
		return_label77: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label78;
		return_label78: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_79) variable6 = once_value_variable6_79;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("*"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_79 = variable6;
		once_bool_variable6_79 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label80;
		return_label80: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")*UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label81;
		return_label81: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_82) variable6 = once_value_variable6_82;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_82 = variable6;
		once_bool_variable6_82 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label83;
		return_label83: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")/UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label84;
		return_label84: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_85) variable6 = once_value_variable6_85;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("%"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_85 = variable6;
		once_bool_variable6_85 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label86;
		return_label86: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")%UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label87;
		return_label87: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_88) variable6 = once_value_variable6_88;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_88 = variable6;
		once_bool_variable6_88 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Int("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label89;
		return_label89: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label90;
		return_label90: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_91) variable6 = once_value_variable6_91;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_91 = variable6;
		once_bool_variable6_91 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Int("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label92;
		return_label92: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label93;
		return_label93: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_94) variable6 = once_value_variable6_94;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_94 = variable6;
		once_bool_variable6_94 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Int("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label95;
		return_label95: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<=UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label96;
		return_label96: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_97) variable6 = once_value_variable6_97;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_97 = variable6;
		once_bool_variable6_97 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Int("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label98;
		return_label98: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>=UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label99;
		return_label99: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_100) variable6 = once_value_variable6_100;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("lshift"), TAG_Int(6)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_100 = variable6;
		once_bool_variable6_100 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label101;
		return_label101: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<<UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label102;
		return_label102: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_103) variable6 = once_value_variable6_103;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("rshift"), TAG_Int(6)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_103 = variable6;
		once_bool_variable6_103 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Int("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label104;
		return_label104: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>>UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label105;
		return_label105: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_106) variable6 = once_value_variable6_106;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_106 = variable6;
		once_bool_variable6_106 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label107;
		return_label107: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")==("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label108;
		return_label108: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_109) variable6 = once_value_variable6_109;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("!="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_109 = variable6;
		once_bool_variable6_109 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label110;
		return_label110: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")!=("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label111;
		return_label111: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
              }
            }
          }
        }
      }
    }
  } else { /*if*/
    if (once_bool_variable6_112) variable6 = once_value_variable6_112;
    else {
      variable6 = NEW_string___String___with_native(BOX_NativeString("Float"), TAG_Int(5)); /*new String*/
      variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
      once_value_variable6_112 = variable6;
      once_bool_variable6_112 = true;
    }
    variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
    if (UNTAG_Bool(variable6)) { /*if*/
      if (once_bool_variable6_113) variable6 = once_value_variable6_113;
      else {
        variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
        variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
        once_value_variable6_113 = variable6;
        once_bool_variable6_113 = true;
      }
      variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int((int)UNBOX_Float("), TAG_Int(25)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  TAG_Int(0);
        variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
        variable11 = variable10;
        if (UNTAG_Bool(variable11)) { /* and */
          variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
          variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
        }
        variable10 = variable11;
        if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
        variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
        variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
        goto return_label114;
        return_label114: while(false);
        variable9 = variable10;
        variable10 = variable9;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
        variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
        variable12 = variable11;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
        variable5 = variable6 /*s=*/;
      } else { /*if*/
        if (once_bool_variable6_115) variable6 = once_value_variable6_115;
        else {
          variable6 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
          variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
          once_value_variable6_115 = variable6;
          once_bool_variable6_115 = true;
        }
        variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
        if (UNTAG_Bool(variable6)) { /*if*/
          variable6 = NEW_string___String___init(); /*new String*/
          variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float(-UNBOX_Float("), TAG_Int(23)); /*new String*/
          variable8 = variable7;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
          variable9 =  TAG_Int(0);
          variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
          variable11 = variable10;
          if (UNTAG_Bool(variable11)) { /* and */
            variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
            variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
          }
          variable10 = variable11;
          if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
          variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
          variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
          goto return_label116;
          return_label116: while(false);
          variable9 = variable10;
          variable10 = variable9;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
          variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
          variable12 = variable11;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
          variable5 = variable6 /*s=*/;
        } else { /*if*/
          if (once_bool_variable6_117) variable6 = once_value_variable6_117;
          else {
            variable6 = NEW_string___String___with_native(BOX_NativeString("output"), TAG_Int(6)); /*new String*/
            variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
            once_value_variable6_117 = variable6;
            once_bool_variable6_117 = true;
          }
          variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
          if (UNTAG_Bool(variable6)) { /*if*/
            variable6 = NEW_string___String___init(); /*new String*/
            variable7 = NEW_string___String___with_native(BOX_NativeString("printf(\"%f\\n\", UNBOX_Float("), TAG_Int(27)); /*new String*/
            variable8 = variable7;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
            variable9 =  TAG_Int(0);
            variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
            variable11 = variable10;
            if (UNTAG_Bool(variable11)) { /* and */
              variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
              variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
            }
            variable10 = variable11;
            if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
            variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
            variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
            goto return_label118;
            return_label118: while(false);
            variable9 = variable10;
            variable10 = variable9;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
            variable11 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
            variable12 = variable11;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
            ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
          } else { /*if*/
            if (once_bool_variable6_119) variable6 = once_value_variable6_119;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("to_i"), TAG_Int(4)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_119 = variable6;
              once_bool_variable6_119 = true;
            }
            variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              variable6 = NEW_string___String___init(); /*new String*/
              variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int((int)UNBOX_Float("), TAG_Int(25)); /*new String*/
              variable8 = variable7;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
              variable9 =  TAG_Int(0);
              variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
              variable11 = variable10;
              if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
              }
              variable10 = variable11;
              if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
              variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
              variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
              goto return_label120;
              return_label120: while(false);
              variable9 = variable10;
              variable10 = variable9;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
              variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
              variable12 = variable11;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
              variable5 = variable6 /*s=*/;
            } else { /*if*/
              if (once_bool_variable6_121) variable6 = once_value_variable6_121;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("+"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_121 = variable6;
		once_bool_variable6_121 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float(UNBOX_Float("), TAG_Int(22)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label122;
		return_label122: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")+UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label123;
		return_label123: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_124) variable6 = once_value_variable6_124;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_124 = variable6;
		once_bool_variable6_124 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float(UNBOX_Float("), TAG_Int(22)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label125;
		return_label125: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label126;
		return_label126: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_127) variable6 = once_value_variable6_127;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("*"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_127 = variable6;
		once_bool_variable6_127 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float(UNBOX_Float("), TAG_Int(22)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label128;
		return_label128: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")*UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label129;
		return_label129: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_130) variable6 = once_value_variable6_130;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_130 = variable6;
		once_bool_variable6_130 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_Float(UNBOX_Float("), TAG_Int(22)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label131;
		return_label131: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")/UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label132;
		return_label132: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_133) variable6 = once_value_variable6_133;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_133 = variable6;
		once_bool_variable6_133 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNBOX_Float("), TAG_Int(21)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label134;
		return_label134: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label135;
		return_label135: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_136) variable6 = once_value_variable6_136;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_136 = variable6;
		once_bool_variable6_136 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNBOX_Float("), TAG_Int(21)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label137;
		return_label137: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>UNBOX_Float("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label138;
		return_label138: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_139) variable6 = once_value_variable6_139;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_139 = variable6;
		once_bool_variable6_139 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNBOX_Float("), TAG_Int(21)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label140;
		return_label140: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<=UNBOX_Float("), TAG_Int(15)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label141;
		return_label141: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_142) variable6 = once_value_variable6_142;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_142 = variable6;
		once_bool_variable6_142 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNBOX_Float("), TAG_Int(21)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label143;
		return_label143: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>=UNBOX_Float("), TAG_Int(15)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label144;
		return_label144: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		}
		}
		}
		}
		}
		}
		}
              }
            }
          }
        }
      }
    } else { /*if*/
      if (once_bool_variable6_145) variable6 = once_value_variable6_145;
      else {
        variable6 = NEW_string___String___with_native(BOX_NativeString("Char"), TAG_Int(4)); /*new String*/
        variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
        once_value_variable6_145 = variable6;
        once_bool_variable6_145 = true;
      }
      variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
      if (UNTAG_Bool(variable6)) { /*if*/
        if (once_bool_variable6_146) variable6 = once_value_variable6_146;
        else {
          variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
          variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
          once_value_variable6_146 = variable6;
          once_bool_variable6_146 = true;
        }
        variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
        if (UNTAG_Bool(variable6)) { /*if*/
          variable6 = NEW_string___String___init(); /*new String*/
          variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Char("), TAG_Int(19)); /*new String*/
          variable8 = variable7;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
          variable9 =  TAG_Int(0);
          variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
          variable11 = variable10;
          if (UNTAG_Bool(variable11)) { /* and */
            variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
            variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
          }
          variable10 = variable11;
          if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
          variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
          variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
          goto return_label147;
          return_label147: while(false);
          variable9 = variable10;
          variable10 = variable9;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
          variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
          variable12 = variable11;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
          variable5 = variable6 /*s=*/;
        } else { /*if*/
          if (once_bool_variable6_148) variable6 = once_value_variable6_148;
          else {
            variable6 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
            variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
            once_value_variable6_148 = variable6;
            once_bool_variable6_148 = true;
          }
          variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
          if (UNTAG_Bool(variable6)) { /*if*/
            variable6 = NEW_string___String___init(); /*new String*/
            variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(-UNTAG_Char("), TAG_Int(21)); /*new String*/
            variable8 = variable7;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
            variable9 =  TAG_Int(0);
            variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
            variable11 = variable10;
            if (UNTAG_Bool(variable11)) { /* and */
              variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
              variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
            }
            variable10 = variable11;
            if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
            variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
            variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
            goto return_label149;
            return_label149: while(false);
            variable9 = variable10;
            variable10 = variable9;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
            variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
            variable12 = variable11;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
            variable5 = variable6 /*s=*/;
          } else { /*if*/
            if (once_bool_variable6_150) variable6 = once_value_variable6_150;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("output"), TAG_Int(6)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_150 = variable6;
              once_bool_variable6_150 = true;
            }
            variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              variable6 = NEW_string___String___init(); /*new String*/
              variable7 = NEW_string___String___with_native(BOX_NativeString("printf(\"%c\", (unsigned char)UNTAG_Char("), TAG_Int(39)); /*new String*/
              variable8 = variable7;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
              variable9 =  TAG_Int(0);
              variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
              variable11 = variable10;
              if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
              }
              variable10 = variable11;
              if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
              variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
              variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
              goto return_label151;
              return_label151: while(false);
              variable9 = variable10;
              variable10 = variable9;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
              variable11 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
              variable12 = variable11;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
              ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
            } else { /*if*/
              if (once_bool_variable6_152) variable6 = once_value_variable6_152;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("ascii"), TAG_Int(5)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_152 = variable6;
		once_bool_variable6_152 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int((unsigned char)UNTAG_Char("), TAG_Int(34)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label153;
		return_label153: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_154) variable6 = once_value_variable6_154;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("succ"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_154 = variable6;
		once_bool_variable6_154 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label155;
		return_label155: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")+1)"), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_156) variable6 = once_value_variable6_156;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("prec"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_156 = variable6;
		once_bool_variable6_156 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label157;
		return_label157: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-1)"), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_158) variable6 = once_value_variable6_158;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("to_i"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_158 = variable6;
		once_bool_variable6_158 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Char("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label159;
		return_label159: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-'0')"), TAG_Int(6)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_160) variable6 = once_value_variable6_160;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("+"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_160 = variable6;
		once_bool_variable6_160 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label161;
		return_label161: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")+UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label162;
		return_label162: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_163) variable6 = once_value_variable6_163;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_163 = variable6;
		once_bool_variable6_163 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label164;
		return_label164: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")-UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label165;
		return_label165: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_166) variable6 = once_value_variable6_166;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("*"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_166 = variable6;
		once_bool_variable6_166 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label167;
		return_label167: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")*UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label168;
		return_label168: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_169) variable6 = once_value_variable6_169;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_169 = variable6;
		once_bool_variable6_169 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label170;
		return_label170: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")/UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label171;
		return_label171: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_172) variable6 = once_value_variable6_172;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("%"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_172 = variable6;
		once_bool_variable6_172 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label173;
		return_label173: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")%UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label174;
		return_label174: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_175) variable6 = once_value_variable6_175;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_175 = variable6;
		once_bool_variable6_175 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label176;
		return_label176: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label177;
		return_label177: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_178) variable6 = once_value_variable6_178;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_178 = variable6;
		once_bool_variable6_178 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label179;
		return_label179: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>UNTAG_Char("), TAG_Int(13)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label180;
		return_label180: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_181) variable6 = once_value_variable6_181;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("<="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_181 = variable6;
		once_bool_variable6_181 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label182;
		return_label182: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")<=UNTAG_Char("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label183;
		return_label183: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_184) variable6 = once_value_variable6_184;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString(">="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_184 = variable6;
		once_bool_variable6_184 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Char("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label185;
		return_label185: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")>=UNTAG_Char("), TAG_Int(14)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label186;
		return_label186: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_187) variable6 = once_value_variable6_187;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_187 = variable6;
		once_bool_variable6_187 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label188;
		return_label188: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")==("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label189;
		return_label189: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_190) variable6 = once_value_variable6_190;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("!="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_190 = variable6;
		once_bool_variable6_190 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label191;
		return_label191: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")!=("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label192;
		return_label192: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
		}
              }
            }
          }
        }
      } else { /*if*/
        if (once_bool_variable6_193) variable6 = once_value_variable6_193;
        else {
          variable6 = NEW_string___String___with_native(BOX_NativeString("Bool"), TAG_Int(4)); /*new String*/
          variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
          once_value_variable6_193 = variable6;
          once_bool_variable6_193 = true;
        }
        variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
        if (UNTAG_Bool(variable6)) { /*if*/
          if (once_bool_variable6_194) variable6 = once_value_variable6_194;
          else {
            variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
            variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
            once_value_variable6_194 = variable6;
            once_bool_variable6_194 = true;
          }
          variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
          if (UNTAG_Bool(variable6)) { /*if*/
            variable6 = NEW_string___String___init(); /*new String*/
            variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Bool("), TAG_Int(19)); /*new String*/
            variable8 = variable7;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
            variable9 =  TAG_Int(0);
            variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
            variable11 = variable10;
            if (UNTAG_Bool(variable11)) { /* and */
              variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
              variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
            }
            variable10 = variable11;
            if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
            variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
            variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
            goto return_label195;
            return_label195: while(false);
            variable9 = variable10;
            variable10 = variable9;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
            variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
            variable12 = variable11;
            ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
            variable5 = variable6 /*s=*/;
          } else { /*if*/
            if (once_bool_variable6_196) variable6 = once_value_variable6_196;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_196 = variable6;
              once_bool_variable6_196 = true;
            }
            variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              variable6 = NEW_string___String___init(); /*new String*/
              variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(-UNTAG_Bool("), TAG_Int(21)); /*new String*/
              variable8 = variable7;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
              variable9 =  TAG_Int(0);
              variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
              variable11 = variable10;
              if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
              }
              variable10 = variable11;
              if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
              variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
              variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
              goto return_label197;
              return_label197: while(false);
              variable9 = variable10;
              variable10 = variable9;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
              variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
              variable12 = variable11;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
              variable5 = variable6 /*s=*/;
            } else { /*if*/
              if (once_bool_variable6_198) variable6 = once_value_variable6_198;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("output"), TAG_Int(6)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_198 = variable6;
		once_bool_variable6_198 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("(void)printf(UNTAG_Bool("), TAG_Int(24)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label199;
		return_label199: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")?\"true\\n\":\"false\\n\");"), TAG_Int(22)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
              } else { /*if*/
		if (once_bool_variable6_200) variable6 = once_value_variable6_200;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("ascii"), TAG_Int(5)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_200 = variable6;
		once_bool_variable6_200 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(UNTAG_Bool("), TAG_Int(20)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label201;
		return_label201: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_202) variable6 = once_value_variable6_202;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("to_i"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_202 = variable6;
		once_bool_variable6_202 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNTAG_Bool("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label203;
		return_label203: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_204) variable6 = once_value_variable6_204;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("=="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_204 = variable6;
		once_bool_variable6_204 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label205;
		return_label205: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")==("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label206;
		return_label206: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_207) variable6 = once_value_variable6_207;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("!="), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_207 = variable6;
		once_bool_variable6_207 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(("), TAG_Int(10)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label208;
		return_label208: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")!=("), TAG_Int(4)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label209;
		return_label209: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		}
		}
		}
		}
              }
            }
          }
        } else { /*if*/
          if (once_bool_variable6_210) variable6 = once_value_variable6_210;
          else {
            variable6 = NEW_string___String___with_native(BOX_NativeString("NativeArray"), TAG_Int(11)); /*new String*/
            variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
            once_value_variable6_210 = variable6;
            once_bool_variable6_210 = true;
          }
          variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
          if (UNTAG_Bool(variable6)) { /*if*/
            if (once_bool_variable6_211) variable6 = once_value_variable6_211;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_211 = variable6;
              once_bool_variable6_211 = true;
            }
            variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              variable6 = NEW_string___String___init(); /*new String*/
              variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNBOX_NativeArray("), TAG_Int(26)); /*new String*/
              variable8 = variable7;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
              variable9 =  TAG_Int(0);
              variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
              variable11 = variable10;
              if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
              }
              variable10 = variable11;
              if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
              variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
              variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
              goto return_label212;
              return_label212: while(false);
              variable9 = variable10;
              variable10 = variable9;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
              variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
              variable12 = variable11;
              ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
              variable5 = variable6 /*s=*/;
            } else { /*if*/
              if (once_bool_variable6_213) variable6 = once_value_variable6_213;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("[]"), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_213 = variable6;
		once_bool_variable6_213 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("UNBOX_NativeArray("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label214;
		return_label214: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")[UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label215;
		return_label215: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(")]"), TAG_Int(2)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_216) variable6 = once_value_variable6_216;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("[]="), TAG_Int(3)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_216 = variable6;
		once_bool_variable6_216 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("UNBOX_NativeArray("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label217;
		return_label217: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")[UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label218;
		return_label218: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(")]="), TAG_Int(3)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable17 =  TAG_Int(2);
		variable18 = TAG_Bool(UNTAG_Int( variable17 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable19 = variable18;
		if (UNTAG_Bool(variable19)) { /* and */
		variable19 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable19 = TAG_Bool(UNTAG_Int( variable17 /*index*/)<UNTAG_Int(variable19));
		}
		variable18 = variable19;
		if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable18 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable18 = UNBOX_NativeArray(variable18)[UNTAG_Int( variable17 /*index*/)];
		goto return_label219;
		return_label219: while(false);
		variable17 = variable18;
		variable18 = variable17;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
		variable19 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
		variable20 = variable19;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		} else { /*if*/
		if (once_bool_variable6_220) variable6 = once_value_variable6_220;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("copy_to"), TAG_Int(7)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_220 = variable6;
		once_bool_variable6_220 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("(void)memcpy(UNBOX_NativeArray("), TAG_Int(31)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(1);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label221;
		return_label221: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("), UNBOX_NativeArray("), TAG_Int(21)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(0);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label222;
		return_label222: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("), UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable17 =  TAG_Int(2);
		variable18 = TAG_Bool(UNTAG_Int( variable17 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable19 = variable18;
		if (UNTAG_Bool(variable19)) { /* and */
		variable19 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable19 = TAG_Bool(UNTAG_Int( variable17 /*index*/)<UNTAG_Int(variable19));
		}
		variable18 = variable19;
		if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable18 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable18 = UNBOX_NativeArray(variable18)[UNTAG_Int( variable17 /*index*/)];
		goto return_label223;
		return_label223: while(false);
		variable17 = variable18;
		variable18 = variable17;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
		variable19 = NEW_string___String___with_native(BOX_NativeString(")*sizeof(val_t));"), TAG_Int(17)); /*new String*/
		variable20 = variable19;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		}
		}
              }
            }
          } else { /*if*/
            if (once_bool_variable6_224) variable6 = once_value_variable6_224;
            else {
              variable6 = NEW_string___String___with_native(BOX_NativeString("NativeString"), TAG_Int(12)); /*new String*/
              variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
              once_value_variable6_224 = variable6;
              once_bool_variable6_224 = true;
            }
            variable6 = TAG_Bool(( variable3 /*c*/ == variable6) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/, variable6) /*Symbol::==*/)))));
            if (UNTAG_Bool(variable6)) { /*if*/
              if (once_bool_variable6_225) variable6 = once_value_variable6_225;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_225 = variable6;
		once_bool_variable6_225 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(UNBOX_NativeString("), TAG_Int(27)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label226;
		return_label226: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_227) variable6 = once_value_variable6_227;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("atoi"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_227 = variable6;
		once_bool_variable6_227 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int(atoi(UNBOX_NativeString("), TAG_Int(32)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label228;
		return_label228: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")))"), TAG_Int(3)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_229) variable6 = once_value_variable6_229;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("[]"), TAG_Int(2)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_229 = variable6;
		once_bool_variable6_229 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Char(UNBOX_NativeString("), TAG_Int(28)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label230;
		return_label230: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")[UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label231;
		return_label231: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(")])"), TAG_Int(3)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_232) variable6 = once_value_variable6_232;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("[]="), TAG_Int(3)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_232 = variable6;
		once_bool_variable6_232 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("UNBOX_NativeString("), TAG_Int(19)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label233;
		return_label233: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")[UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label234;
		return_label234: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(")]=UNTAG_Char("), TAG_Int(14)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable17 =  TAG_Int(2);
		variable18 = TAG_Bool(UNTAG_Int( variable17 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable19 = variable18;
		if (UNTAG_Bool(variable19)) { /* and */
		variable19 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable19 = TAG_Bool(UNTAG_Int( variable17 /*index*/)<UNTAG_Int(variable19));
		}
		variable18 = variable19;
		if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable18 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable18 = UNBOX_NativeArray(variable18)[UNTAG_Int( variable17 /*index*/)];
		goto return_label235;
		return_label235: while(false);
		variable17 = variable18;
		variable18 = variable17;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
		variable19 = NEW_string___String___with_native(BOX_NativeString(");"), TAG_Int(2)); /*new String*/
		variable20 = variable19;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		} else { /*if*/
		if (once_bool_variable6_236) variable6 = once_value_variable6_236;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("copy_to"), TAG_Int(7)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_236 = variable6;
		once_bool_variable6_236 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("(void)memcpy(UNBOX_NativeString("), TAG_Int(32)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(1);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label237;
		return_label237: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")+UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(4);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label238;
		return_label238: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString("), UNBOX_NativeString("), TAG_Int(22)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable17 =  TAG_Int(0);
		variable18 = TAG_Bool(UNTAG_Int( variable17 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable19 = variable18;
		if (UNTAG_Bool(variable19)) { /* and */
		variable19 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable19 = TAG_Bool(UNTAG_Int( variable17 /*index*/)<UNTAG_Int(variable19));
		}
		variable18 = variable19;
		if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable18 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable18 = UNBOX_NativeArray(variable18)[UNTAG_Int( variable17 /*index*/)];
		goto return_label239;
		return_label239: while(false);
		variable17 = variable18;
		variable18 = variable17;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
		variable19 = NEW_string___String___with_native(BOX_NativeString(")+UNTAG_Int("), TAG_Int(12)); /*new String*/
		variable20 = variable19;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
		variable21 =  TAG_Int(3);
		variable22 = TAG_Bool(UNTAG_Int( variable21 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable23 = variable22;
		if (UNTAG_Bool(variable23)) { /* and */
		variable23 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable23 = TAG_Bool(UNTAG_Int( variable21 /*index*/)<UNTAG_Int(variable23));
		}
		variable22 = variable23;
		if (!UNTAG_Bool(variable22)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable22 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable22 = UNBOX_NativeArray(variable22)[UNTAG_Int( variable21 /*index*/)];
		goto return_label240;
		return_label240: while(false);
		variable21 = variable22;
		variable22 = variable21;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable22) /*String::append*/;
		variable23 = NEW_string___String___with_native(BOX_NativeString("), UNTAG_Int("), TAG_Int(13)); /*new String*/
		variable24 = variable23;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable24) /*String::append*/;
		variable25 =  TAG_Int(2);
		variable26 = TAG_Bool(UNTAG_Int( variable25 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable27 = variable26;
		if (UNTAG_Bool(variable27)) { /* and */
		variable27 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable27 = TAG_Bool(UNTAG_Int( variable25 /*index*/)<UNTAG_Int(variable27));
		}
		variable26 = variable27;
		if (!UNTAG_Bool(variable26)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable26 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable26 = UNBOX_NativeArray(variable26)[UNTAG_Int( variable25 /*index*/)];
		goto return_label241;
		return_label241: while(false);
		variable25 = variable26;
		variable26 = variable25;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable26) /*String::append*/;
		variable27 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
		variable28 = variable27;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable28) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		}
		}
		}
		}
              }
            } else { /*if*/
              if (once_bool_variable6_242) variable6 = once_value_variable6_242;
              else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("object_id"), TAG_Int(9)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_242 = variable6;
		once_bool_variable6_242 = true;
              }
              variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
              if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Int((int)"), TAG_Int(13)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label243;
		return_label243: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
              } else { /*if*/
		if (once_bool_variable6_244) variable6 = once_value_variable6_244;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("sys"), TAG_Int(3)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_244 = variable6;
		once_bool_variable6_244 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___with_native(BOX_NativeString("(G_sys)"), TAG_Int(7)); /*new String*/
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_245) variable6 = once_value_variable6_245;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("is_same_type"), TAG_Int(12)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_245 = variable6;
		once_bool_variable6_245 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool((VAL2VFT("), TAG_Int(18)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(0);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label246;
		return_label246: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(")==VAL2VFT("), TAG_Int(11)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable13 =  TAG_Int(1);
		variable14 = TAG_Bool(UNTAG_Int( variable13 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable15 = variable14;
		if (UNTAG_Bool(variable15)) { /* and */
		variable15 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable15 = TAG_Bool(UNTAG_Int( variable13 /*index*/)<UNTAG_Int(variable15));
		}
		variable14 = variable15;
		if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable14 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable14 = UNBOX_NativeArray(variable14)[UNTAG_Int( variable13 /*index*/)];
		goto return_label247;
		return_label247: while(false);
		variable13 = variable14;
		variable14 = variable13;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
		variable15 = NEW_string___String___with_native(BOX_NativeString(")))"), TAG_Int(3)); /*new String*/
		variable16 = variable15;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_248) variable6 = once_value_variable6_248;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("exit"), TAG_Int(4)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_248 = variable6;
		once_bool_variable6_248 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("exit(UNTAG_Int("), TAG_Int(15)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(1);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label249;
		return_label249: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		} else { /*if*/
		if (once_bool_variable6_250) variable6 = once_value_variable6_250;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("calloc_array"), TAG_Int(12)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_250 = variable6;
		once_bool_variable6_250 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_NativeArray((val_t*)malloc((UNTAG_Int("), TAG_Int(42)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(1);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label251;
		return_label251: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(") * sizeof(val_t))))"), TAG_Int(20)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		if (once_bool_variable6_252) variable6 = once_value_variable6_252;
		else {
		variable6 = NEW_string___String___with_native(BOX_NativeString("calloc_string"), TAG_Int(13)); /*new String*/
		variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
		once_value_variable6_252 = variable6;
		once_bool_variable6_252 = true;
		}
		variable6 = TAG_Bool(( variable4 /*n*/ == variable6) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/, variable6) /*Symbol::==*/)))));
		if (UNTAG_Bool(variable6)) { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("BOX_NativeString((char*)malloc((UNTAG_Int("), TAG_Int(42)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  TAG_Int(1);
		variable10 = TAG_Bool(UNTAG_Int( variable9 /*index*/)>=UNTAG_Int( TAG_Int(0)));
		variable11 = variable10;
		if (UNTAG_Bool(variable11)) { /* and */
		variable11 = ATTR_array___AbstractArray____length( variable2 /*p*/) /*Array::_length*/;
		variable11 = TAG_Bool(UNTAG_Int( variable9 /*index*/)<UNTAG_Int(variable11));
		}
		variable10 = variable11;
		if (!UNTAG_Bool(variable10)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
		variable10 = ATTR_array___Array____items( variable2 /*p*/) /*Array::_items*/;
		variable10 = UNBOX_NativeArray(variable10)[UNTAG_Int( variable9 /*index*/)];
		goto return_label253;
		return_label253: while(false);
		variable9 = variable10;
		variable10 = variable9;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
		variable11 = NEW_string___String___with_native(BOX_NativeString(") * sizeof(char))))"), TAG_Int(19)); /*new String*/
		variable12 = variable11;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
		variable5 = variable6 /*s=*/;
		} else { /*if*/
		variable6 = NEW_string___String___init(); /*new String*/
		variable7 = NEW_string___String___with_native(BOX_NativeString("fprintf(stderr, \"Intern "), TAG_Int(24)); /*new String*/
		variable8 = variable7;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
		variable9 =  variable4 /*n*/;
		variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
		variable10 = NEW_string___String___with_native(BOX_NativeString("\\n\"); nit_exit(1);"), TAG_Int(18)); /*new String*/
		variable11 = variable10;
		((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
		((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
		}
		}
		}
		}
		}
              }
            }
          }
        }
      }
    }
  }
  variable6 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*method*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*method*/) /*MMSrcMethod::signature*/;
  variable6 = ((static_type___MMSignature___return_type_t)CALL(variable6,COLOR_static_type___MMSignature___return_type))(variable6) /*MMSignature::return_type*/;
  variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable6 ==  NIT_NULL /*null*/) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  variable7 = variable6;
  if (UNTAG_Bool(variable7)) { /* and */
    variable7 = TAG_Bool(( variable5 /*s*/ ==  NIT_NULL /*null*/) || (( variable5 /*s*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable5 /*s*/,COLOR_kernel___Object_____eqeq))( variable5 /*s*/,  NIT_NULL /*null*/) /*String::==*/)));
  }
  variable6 = variable7;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("NIT_NULL /*stub*/"), TAG_Int(17)); /*new String*/
    variable5 = variable6 /*s=*/;
  }
  variable3 =  variable5 /*s*/;
  goto return_label57;
  return_label57: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t compiling_methods___PExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::PExpr::compile_expr (src/compiling//compiling_methods.nit:666,2--668:46)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method compile_expr called (src/compiling//compiling_methods.nit:666,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void compiling_methods___PExpr___prepare_compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::PExpr::prepare_compile_stmt (src/compiling//compiling_methods.nit:670,2--673:45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
void compiling_methods___PExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::PExpr::compile_stmt (src/compiling//compiling_methods.nit:675,2--677:57)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_native(BOX_NativeString("Error!"), TAG_Int(6)); /*new String*/
  ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable1) /*PExpr::printl*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___ABlockExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ABlockExpr::compile_stmt (src/compiling//compiling_methods.nit:681,2--684:19)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ABlockExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ABlockExpr___n_expr))( self) /*ABlockExpr::n_expr*/;
  variable1 = ((list___List___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*List::iterator*/;
  while (true) { /*for*/
    variable2 = ((list___ListIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((list___ListIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ListIterator::item*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/,  variable2 /*n*/) /*CompilerVisitor::compile_stmt*/;
    continue_257: while(0);
    ((list___ListIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ListIterator::next*/;
  }
  break_257: while(0);
  tracehead = trace.prev;
  return;
}
void compiling_methods___AVardeclExpr___prepare_compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AVardeclExpr::prepare_compile_stmt (src/compiling//compiling_methods.nit:690,2--693:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
  variable1 = variable2;
  variable2 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable3 = ((typing___AVardeclExpr___variable_t)CALL( self,COLOR_typing___AVardeclExpr___variable))( self) /*AVardeclExpr::variable*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable2,COLOR_abstract_collection___Map_____braeq))(variable2, variable3,  variable1 /*cname*/) /*Map::[]=*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AVardeclExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AVardeclExpr::compile_stmt (src/compiling//compiling_methods.nit:696,2--704:28)"};
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
  variable2 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable3 = ((typing___AVardeclExpr___variable_t)CALL( self,COLOR_typing___AVardeclExpr___variable))( self) /*AVardeclExpr::variable*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2, variable3) /*Map::[]*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_expr))( self) /*AVardeclExpr::n_expr*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable3 = ((typing___AVardeclExpr___variable_t)CALL( self,COLOR_typing___AVardeclExpr___variable))( self) /*AVardeclExpr::variable*/;
    variable3 = ((syntax_base___Variable___stype_t)CALL(variable3,COLOR_syntax_base___Variable___stype))(variable3) /*Variable::stype*/;
    variable2 = variable3;
    variable3 = NEW_string___String___init(); /*new String*/
    variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable5 = variable4;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
    variable6 = ((compiling_base___MMType___default_cvalue_t)CALL( variable2 /*t*/,COLOR_compiling_base___MMType___default_cvalue))( variable2 /*t*/) /*MMType::default_cvalue*/;
    variable7 = variable6;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" /*decl variable "), TAG_Int(17)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
    variable10 = ((typing___AVardeclExpr___variable_t)CALL( self,COLOR_typing___AVardeclExpr___variable))( self) /*AVardeclExpr::variable*/;
    variable10 = ((syntax_base___Variable___name_t)CALL(variable10,COLOR_syntax_base___Variable___name))(variable10) /*Variable::name*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
    ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable1 /*cname*/, variable3) /*CompilerVisitor::add_assignment*/;
  } else { /*if*/
    variable3 = ((parser_nodes___AVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AVardeclExpr___n_expr))( self) /*AVardeclExpr::n_expr*/;
    variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
    variable2 = variable3;
    ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable1 /*cname*/,  variable2 /*e*/) /*CompilerVisitor::add_assignment*/;
  }
  tracehead = trace.prev;
  return;
}
void compiling_methods___AReturnExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AReturnExpr::compile_stmt (src/compiling//compiling_methods.nit:710,2--717:38)"};
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
  ((compiling_methods___CompilerVisitor___has_return__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___has_return__eq))( variable0 /*v*/,  TAG_Bool(true)) /*CompilerVisitor::has_return=*/;
  variable1 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((parser_nodes___AReturnExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AReturnExpr___n_expr))( self) /*AReturnExpr::n_expr*/;
    variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
    variable1 = variable2;
    variable2 = ((compiling_methods___CompilerVisitor___return_value_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_value))( variable0 /*v*/) /*CompilerVisitor::return_value*/;
    ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/, variable2,  variable1 /*e*/) /*CompilerVisitor::add_assignment*/;
  }
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("goto "), TAG_Int(5)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_methods___CompilerVisitor___return_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___return_label))( variable0 /*v*/) /*CompilerVisitor::return_label*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___ABreakExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ABreakExpr::compile_stmt (src/compiling//compiling_methods.nit:722,2--724:37)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("goto "), TAG_Int(5)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_methods___CompilerVisitor___break_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label))( variable0 /*v*/) /*CompilerVisitor::break_label*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AContinueExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AContinueExpr::compile_stmt (src/compiling//compiling_methods.nit:729,2--731:40)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("goto "), TAG_Int(5)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_methods___CompilerVisitor___continue_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label))( variable0 /*v*/) /*CompilerVisitor::continue_label*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AAbortExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAbortExpr::compile_stmt (src/compiling//compiling_methods.nit:736,2--738:71)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("fprintf(stderr, \"Aborted: "), TAG_Int(26)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((parser_prod___Prod___locate_t)CALL( self,COLOR_parser_prod___PNode___locate))( self) /*AAbortExpr::locate*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\\n\"); nit_exit(1);"), TAG_Int(18)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___ADoExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ADoExpr::compile_stmt (src/compiling//compiling_methods.nit:743,2--746:26)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ADoExpr___n_block_t)CALL( self,COLOR_parser_nodes___ADoExpr___n_block))( self) /*ADoExpr::n_block*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((parser_nodes___ADoExpr___n_block_t)CALL( self,COLOR_parser_nodes___ADoExpr___n_block))( self) /*ADoExpr::n_block*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable1) /*CompilerVisitor::compile_stmt*/;
  }
  tracehead = trace.prev;
  return;
}
void compiling_methods___AIfExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AIfExpr::compile_stmt (src/compiling//compiling_methods.nit:752,2--768:17)"};
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
  variable2 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("if (UNTAG_Bool("), TAG_Int(15)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")) { /*if*/"), TAG_Int(11)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  variable2 = ((parser_nodes___AIfExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_then))( self) /*AIfExpr::n_then*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
    variable2 = ((parser_nodes___AIfExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_then))( self) /*AIfExpr::n_then*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_stmt*/;
    ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  }
  variable2 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("} else { /*if*/"), TAG_Int(15)); /*new String*/
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
    ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
    variable2 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_stmt*/;
    ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  }
  variable2 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___AIfexprExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AIfexprExpr::compile_expr (src/compiling//compiling_methods.nit:773,2--788:10)"};
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
  variable2 = ((parser_nodes___AIfexprExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_expr))( self) /*AIfexprExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("if (UNTAG_Bool("), TAG_Int(15)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")) { /*if*/"), TAG_Int(11)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable3 = ((parser_nodes___AIfexprExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_then))( self) /*AIfexprExpr::n_then*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable3 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/, variable3) /*CompilerVisitor::ensure_var*/;
  variable2 = variable3;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("} else { /*if*/"), TAG_Int(15)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable2 /*e*/) /*CompilerVisitor::free_var*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable4 = ((parser_nodes___AIfexprExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfexprExpr___n_else))( self) /*AIfexprExpr::n_else*/;
  variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable4) /*CompilerVisitor::compile_expr*/;
  variable4 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/, variable4) /*CompilerVisitor::ensure_var*/;
  variable3 = variable4;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable2 /*e*/,  variable3 /*e2*/) /*CompilerVisitor::add_assignment*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable4 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable1 =  variable2 /*e*/;
  goto return_label266;
  return_label266: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_methods___AControlableBlock___compile_inside_block(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AControlableBlock::compile_inside_block (src/compiling//compiling_methods.nit:793,2--45)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method compile_inside_block called (src/compiling//compiling_methods.nit:793,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void compiling_methods___AControlableBlock___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AControlableBlock::compile_stmt (src/compiling//compiling_methods.nit:794,2--806:39)"};
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
  variable2 = ((compiling_methods___CompilerVisitor___break_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label))( variable0 /*v*/) /*CompilerVisitor::break_label*/;
  variable1 = variable2;
  variable3 = ((compiling_methods___CompilerVisitor___continue_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label))( variable0 /*v*/) /*CompilerVisitor::continue_label*/;
  variable2 = variable3;
  variable4 = ((compiling_base___CompilerVisitor___new_number_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___new_number))( variable0 /*v*/) /*CompilerVisitor::new_number*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("break_"), TAG_Int(6)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable3 /*id*/;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  ((compiling_methods___CompilerVisitor___break_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label__eq))( variable0 /*v*/, variable4) /*CompilerVisitor::break_label=*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("continue_"), TAG_Int(9)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable3 /*id*/;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  ((compiling_methods___CompilerVisitor___continue_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label__eq))( variable0 /*v*/, variable4) /*CompilerVisitor::continue_label=*/;
  ((compiling_methods___AControlableBlock___compile_inside_block_t)CALL( self,COLOR_compiling_methods___AControlableBlock___compile_inside_block))( self,  variable0 /*v*/) /*AControlableBlock::compile_inside_block*/;
  ((compiling_methods___CompilerVisitor___break_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label__eq))( variable0 /*v*/,  variable1 /*old_break_label*/) /*CompilerVisitor::break_label=*/;
  ((compiling_methods___CompilerVisitor___continue_label__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label__eq))( variable0 /*v*/,  variable2 /*old_continue_label*/) /*CompilerVisitor::continue_label=*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AWhileExpr___compile_inside_block(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AWhileExpr::compile_inside_block (src/compiling//compiling_methods.nit:811,2--824:42)"};
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
  variable1 = NEW_string___String___with_native(BOX_NativeString("while (true) { /*while*/"), TAG_Int(24)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable2 = ((parser_nodes___AWhileExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AWhileExpr___n_expr))( self) /*AWhileExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("if (!UNTAG_Bool("), TAG_Int(16)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")) break; /* while*/"), TAG_Int(20)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  variable2 = ((parser_nodes___AWhileExpr___n_block_t)CALL( self,COLOR_parser_nodes___AWhileExpr___n_block))( self) /*AWhileExpr::n_block*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AWhileExpr___n_block_t)CALL( self,COLOR_parser_nodes___AWhileExpr___n_block))( self) /*AWhileExpr::n_block*/;
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_stmt*/;
  }
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 = ((compiling_methods___CompilerVisitor___continue_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label))( variable0 /*v*/) /*CompilerVisitor::continue_label*/;
  variable6 = variable5;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(": while(0);"), TAG_Int(11)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable2 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 = ((compiling_methods___CompilerVisitor___break_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label))( variable0 /*v*/) /*CompilerVisitor::break_label*/;
  variable6 = variable5;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(": while(0);"), TAG_Int(11)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AForExpr___compile_inside_block(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AForExpr::compile_inside_block (src/compiling//compiling_methods.nit:829,2--831:26)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AForExpr___n_vardecl_t)CALL( self,COLOR_parser_nodes___AForExpr___n_vardecl))( self) /*AForExpr::n_vardecl*/;
  ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/, variable1) /*CompilerVisitor::compile_stmt*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AForVardeclExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AForVardeclExpr::compile_stmt (src/compiling//compiling_methods.nit:836,2--883:42)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  static val_t once_value_variable4_271; static int once_bool_variable4_271;
  val_t variable5;
  val_t variable6;
  static val_t once_value_variable6_272; static int once_bool_variable6_272;
  val_t variable7;
  static val_t once_value_variable7_273; static int once_bool_variable7_273;
  val_t variable8;
  static val_t once_value_variable8_274; static int once_bool_variable8_274;
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AForVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AForVardeclExpr___n_expr))( self) /*AForVardeclExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___AForVardeclExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AForVardeclExpr___n_expr))( self) /*AForVardeclExpr::n_expr*/;
  variable3 = ((typing___PExpr___stype_t)CALL(variable3,COLOR_syntax_base___PExpr___stype))(variable3) /*PExpr::stype*/;
  if (once_bool_variable4_271) variable4 = once_value_variable4_271;
  else {
    variable4 = NEW_string___String___with_native(BOX_NativeString("iterator"), TAG_Int(8)); /*new String*/
    variable4 = ((symbol___String___to_symbol_t)CALL(variable4,COLOR_symbol___String___to_symbol))(variable4) /*String::to_symbol*/;
    once_value_variable4_271 = variable4;
    once_bool_variable4_271 = true;
  }
  variable3 = ((static_type___MMType___select_method_t)CALL(variable3,COLOR_static_type___MMType___select_method))(variable3, variable4) /*MMType::select_method*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable2 /*prop*/ ==  NIT_NULL /*null*/) || (( variable2 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*prop*/,COLOR_kernel___Object_____eqeq))( variable2 /*prop*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("No iterator"), TAG_Int(11)); /*new String*/
    ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable3) /*AForVardeclExpr::printl*/;
    goto return_label270;
  }
  variable4 = ((genericity___MMLocalProperty___signature_t)CALL( variable2 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable2 /*prop*/) /*MMMethod::signature*/;
  variable4 = ((static_type___MMSignature___return_type_t)CALL(variable4,COLOR_static_type___MMSignature___return_type))(variable4) /*MMSignature::return_type*/;
  variable3 = variable4;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  variable5 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
  variable4 = variable5;
  variable5 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable1 /*e*/) /*Array::add*/;
  variable5 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable2 /*prop*/,COLOR_compiling_methods___MMMethod___compile_call))( variable2 /*prop*/,  variable0 /*v*/, variable5) /*MMMethod::compile_call*/;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable4 /*iter*/, variable5) /*CompilerVisitor::add_assignment*/;
  if (once_bool_variable6_272) variable6 = once_value_variable6_272;
  else {
    variable6 = NEW_string___String___with_native(BOX_NativeString("is_ok"), TAG_Int(5)); /*new String*/
    variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
    once_value_variable6_272 = variable6;
    once_bool_variable6_272 = true;
  }
  variable6 = ((static_type___MMType___select_method_t)CALL( variable3 /*ittype*/,COLOR_static_type___MMType___select_method))( variable3 /*ittype*/, variable6) /*MMType::select_method*/;
  variable5 = variable6;
  variable6 = TAG_Bool(( variable5 /*prop2*/ ==  NIT_NULL /*null*/) || (( variable5 /*prop2*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*prop2*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*prop2*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*prop2*/,COLOR_kernel___Object_____eqeq))( variable5 /*prop2*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("No is_ok"), TAG_Int(8)); /*new String*/
    ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable6) /*AForVardeclExpr::printl*/;
    goto return_label270;
  }
  if (once_bool_variable7_273) variable7 = once_value_variable7_273;
  else {
    variable7 = NEW_string___String___with_native(BOX_NativeString("item"), TAG_Int(4)); /*new String*/
    variable7 = ((symbol___String___to_symbol_t)CALL(variable7,COLOR_symbol___String___to_symbol))(variable7) /*String::to_symbol*/;
    once_value_variable7_273 = variable7;
    once_bool_variable7_273 = true;
  }
  variable7 = ((static_type___MMType___select_method_t)CALL( variable3 /*ittype*/,COLOR_static_type___MMType___select_method))( variable3 /*ittype*/, variable7) /*MMType::select_method*/;
  variable6 = variable7;
  variable7 = TAG_Bool(( variable6 /*prop3*/ ==  NIT_NULL /*null*/) || (( variable6 /*prop3*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*prop3*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*prop3*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*prop3*/,COLOR_kernel___Object_____eqeq))( variable6 /*prop3*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("No item"), TAG_Int(7)); /*new String*/
    ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable7) /*AForVardeclExpr::printl*/;
    goto return_label270;
  }
  if (once_bool_variable8_274) variable8 = once_value_variable8_274;
  else {
    variable8 = NEW_string___String___with_native(BOX_NativeString("next"), TAG_Int(4)); /*new String*/
    variable8 = ((symbol___String___to_symbol_t)CALL(variable8,COLOR_symbol___String___to_symbol))(variable8) /*String::to_symbol*/;
    once_value_variable8_274 = variable8;
    once_bool_variable8_274 = true;
  }
  variable8 = ((static_type___MMType___select_method_t)CALL( variable3 /*ittype*/,COLOR_static_type___MMType___select_method))( variable3 /*ittype*/, variable8) /*MMType::select_method*/;
  variable7 = variable8;
  variable8 = TAG_Bool(( variable7 /*prop4*/ ==  NIT_NULL /*null*/) || (( variable7 /*prop4*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*prop4*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*prop4*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*prop4*/,COLOR_kernel___Object_____eqeq))( variable7 /*prop4*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
  if (UNTAG_Bool(variable8)) { /*if*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("No next"), TAG_Int(7)); /*new String*/
    ((parser_prod___PNode___printl_t)CALL( self,COLOR_parser_prod___PNode___printl))( self, variable8) /*AForVardeclExpr::printl*/;
    goto return_label270;
  }
  variable8 = NEW_string___String___with_native(BOX_NativeString("while (true) { /*for*/"), TAG_Int(22)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable9 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
  variable8 = variable9;
  variable9 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable9,COLOR_abstract_collection___SimpleCollection___add))(variable9,  variable4 /*iter*/) /*Array::add*/;
  variable9 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable5 /*prop2*/,COLOR_compiling_methods___MMMethod___compile_call))( variable5 /*prop2*/,  variable0 /*v*/, variable9) /*MMMethod::compile_call*/;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable8 /*ok*/, variable9) /*CompilerVisitor::add_assignment*/;
  variable9 = NEW_string___String___init(); /*new String*/
  variable10 = NEW_string___String___with_native(BOX_NativeString("if (!UNTAG_Bool("), TAG_Int(16)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable11) /*String::append*/;
  variable12 =  variable8 /*ok*/;
  ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(")) break; /*for*/"), TAG_Int(17)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable14) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable9) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable8 /*ok*/) /*CompilerVisitor::free_var*/;
  variable10 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable10,COLOR_abstract_collection___SimpleCollection___add))(variable10,  variable4 /*iter*/) /*Array::add*/;
  variable10 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable6 /*prop3*/,COLOR_compiling_methods___MMMethod___compile_call))( variable6 /*prop3*/,  variable0 /*v*/, variable10) /*MMMethod::compile_call*/;
  variable9 = variable10;
  variable10 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/,  variable9 /*e*/) /*CompilerVisitor::ensure_var*/;
  variable9 = variable10 /*e=*/;
  variable10 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable11 = ((typing___AForVardeclExpr___variable_t)CALL( self,COLOR_typing___AForVardeclExpr___variable))( self) /*AForVardeclExpr::variable*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable10,COLOR_abstract_collection___Map_____braeq))(variable10, variable11,  variable9 /*e*/) /*Map::[]=*/;
  variable11 = ((parser_prod___PNode___parent_t)CALL( self,COLOR_parser_prod___PNode___parent))( self) /*AForVardeclExpr::parent*/;
  variable10 = variable11;
  variable11 = TAG_Bool(( variable10 /*par*/==NIT_NULL) || VAL_ISA( variable10 /*par*/, COLOR_AForExpr, ID_AForExpr)) /*cast AForExpr*/;
  if (!UNTAG_Bool(variable11)) { fprintf(stderr, "Assert failed: src/compiling//compiling_methods.nit:873,3--25\n"); nit_exit(1);}
  variable12 = ((parser_nodes___AForExpr___n_block_t)CALL( variable10 /*par*/,COLOR_parser_nodes___AForExpr___n_block))( variable10 /*par*/) /*AForExpr::n_block*/;
  variable11 = variable12;
  variable12 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*n_block*/ ==  NIT_NULL /*null*/) || (( variable11 /*n_block*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*n_block*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*n_block*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*n_block*/,COLOR_kernel___Object_____eqeq))( variable11 /*n_block*/,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
  if (UNTAG_Bool(variable12)) { /*if*/
    ((compiling_methods___CompilerVisitor___compile_stmt_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_stmt))( variable0 /*v*/,  variable11 /*n_block*/) /*CompilerVisitor::compile_stmt*/;
  }
  variable12 = NEW_string___String___init(); /*new String*/
  variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable14) /*String::append*/;
  variable15 = ((compiling_methods___CompilerVisitor___continue_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___continue_label))( variable0 /*v*/) /*CompilerVisitor::continue_label*/;
  variable16 = variable15;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString(": while(0);"), TAG_Int(11)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable18) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable12) /*CompilerVisitor::add_instr*/;
  variable12 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable12,COLOR_abstract_collection___SimpleCollection___add))(variable12,  variable4 /*iter*/) /*Array::add*/;
  variable12 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable7 /*prop4*/,COLOR_compiling_methods___MMMethod___compile_call))( variable7 /*prop4*/,  variable0 /*v*/, variable12) /*MMMethod::compile_call*/;
  variable9 = variable12 /*e=*/;
  variable12 = TAG_Bool(( variable9 /*e*/ ==  NIT_NULL /*null*/) || (( variable9 /*e*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable9 /*e*/,COLOR_kernel___Object_____eqeq))( variable9 /*e*/,  NIT_NULL /*null*/) /*String::==*/)));
  if (!UNTAG_Bool(variable12)) { fprintf(stderr, "Assert failed: src/compiling//compiling_methods.nit:880,3--18\n"); nit_exit(1);}
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable12) /*CompilerVisitor::add_instr*/;
  variable12 = NEW_string___String___init(); /*new String*/
  variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable14) /*String::append*/;
  variable15 = ((compiling_methods___CompilerVisitor___break_label_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___break_label))( variable0 /*v*/) /*CompilerVisitor::break_label*/;
  variable16 = variable15;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString(": while(0);"), TAG_Int(11)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable12,COLOR_abstract_collection___IndexedCollection___append))(variable12, variable18) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable12) /*CompilerVisitor::add_instr*/;
  return_label270: while(false);
  tracehead = trace.prev;
  return;
}
void compiling_methods___AAssertExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAssertExpr::compile_stmt (src/compiling//compiling_methods.nit:888,2--895:100)"};
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
  variable2 = ((parser_nodes___AAssertExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_expr))( self) /*AAssertExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = NEW_string___String___with_native(BOX_NativeString("Assert"), TAG_Int(6)); /*new String*/
  variable2 = variable3;
  variable3 = ((parser_nodes___AAssertExpr___n_id_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_id))( self) /*AAssertExpr::n_id*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*TId::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_string___String___init(); /*new String*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("Assert '"), TAG_Int(8)); /*new String*/
    variable5 = variable4;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
    variable6 = ((parser_nodes___AAssertExpr___n_id_t)CALL( self,COLOR_parser_nodes___AAssertExpr___n_id))( self) /*AAssertExpr::n_id*/;
    variable6 = ((lexer___Token___text_t)CALL(variable6,COLOR_lexer___Token___text))(variable6) /*TId::text*/;
    variable7 = variable6;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString("' "), TAG_Int(2)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
    variable2 = variable3 /*s=*/;
  }
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("if (!UNTAG_Bool("), TAG_Int(16)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(")) { fprintf(stderr, \""), TAG_Int(22)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable2 /*s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" failed: "), TAG_Int(9)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 = ((parser_prod___Prod___locate_t)CALL( self,COLOR_parser_prod___PNode___locate))( self) /*AAssertExpr::locate*/;
  variable13 = variable12;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("\\n\"); nit_exit(1);}"), TAG_Int(19)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable15) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___AVarExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AVarExpr::compile_expr (src/compiling//compiling_methods.nit:900,2--902:54)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable5 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarExpr::variable*/;
  variable4 = ((abstract_collection___Map_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*Map::[]*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /*"), TAG_Int(3)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarExpr::variable*/;
  variable8 = ((syntax_base___Variable___name_t)CALL(variable8,COLOR_syntax_base___Variable___name))(variable8) /*Variable::name*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label276;
  return_label276: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_methods___AVarAssignExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AVarAssignExpr::compile_stmt (src/compiling//compiling_methods.nit:907,2--910:67)"};
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
  variable2 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*AVarAssignExpr::n_value*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable3 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarAssignExpr::variable*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2, variable3) /*Map::[]*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(" /*"), TAG_Int(3)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarAssignExpr::variable*/;
  variable9 = ((syntax_base___Variable___name_t)CALL(variable9,COLOR_syntax_base___Variable___name))(variable9) /*Variable::name*/;
  variable10 = variable9;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("=*/"), TAG_Int(3)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/, variable2, variable3) /*CompilerVisitor::add_assignment*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AVarReassignExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AVarReassignExpr::compile_stmt (src/compiling//compiling_methods.nit:915,2--920:67)"};
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
  variable2 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable3 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarReassignExpr::variable*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2, variable3) /*Map::[]*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*AVarReassignExpr::n_value*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  variable4 = ((typing___AReassignFormExpr___assign_method_t)CALL( self,COLOR_typing___AReassignFormExpr___assign_method))( self) /*AVarReassignExpr::assign_method*/;
  variable5 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable1 /*e1*/) /*Array::add*/;
  ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable2 /*e2*/) /*Array::add*/;
  variable4 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable4,COLOR_compiling_methods___MMMethod___compile_call))(variable4,  variable0 /*v*/, variable5) /*MMMethod::compile_call*/;
  variable3 = variable4;
  variable4 = ((compiling_methods___CompilerVisitor___varnames_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___varnames))( variable0 /*v*/) /*CompilerVisitor::varnames*/;
  variable5 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarReassignExpr::variable*/;
  variable4 = ((abstract_collection___Map_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*Map::[]*/;
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 =  variable3 /*e3*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(" /*"), TAG_Int(3)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
  variable11 = ((typing___AVarFormExpr___variable_t)CALL( self,COLOR_typing___AVarFormExpr___variable))( self) /*AVarReassignExpr::variable*/;
  variable11 = ((syntax_base___Variable___name_t)CALL(variable11,COLOR_syntax_base___Variable___name))(variable11) /*Variable::name*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("*/"), TAG_Int(2)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable14) /*String::append*/;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/, variable4, variable5) /*CompilerVisitor::add_assignment*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___ASelfExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASelfExpr::compile_expr (src/compiling//compiling_methods.nit:925,2--927:26)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params))( variable0 /*v*/) /*CompilerVisitor::method_params*/;
  variable2 =  TAG_Int(0);
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
  goto return_label280;
  return_label280: while(false);
  variable1 = variable3;
  goto return_label279;
  return_label279: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AOrExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AOrExpr::compile_expr (src/compiling//compiling_methods.nit:932,2--942:10)"};
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
  variable2 = ((parser_nodes___AOrExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AOrExpr___n_expr))( self) /*AOrExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/, variable2) /*CompilerVisitor::ensure_var*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("if (!UNTAG_Bool("), TAG_Int(16)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")) { /* or */"), TAG_Int(13)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable3 = ((parser_nodes___AOrExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AOrExpr___n_expr2))( self) /*AOrExpr::n_expr2*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable1 /*e*/,  variable2 /*e2*/) /*CompilerVisitor::add_assignment*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  variable1 =  variable1 /*e*/;
  goto return_label281;
  return_label281: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AAndExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAndExpr::compile_expr (src/compiling//compiling_methods.nit:947,2--957:10)"};
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
  variable2 = ((parser_nodes___AAndExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr))( self) /*AAndExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/, variable2) /*CompilerVisitor::ensure_var*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("if (UNTAG_Bool("), TAG_Int(15)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")) { /* and */"), TAG_Int(14)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable1 /*e*/) /*CompilerVisitor::free_var*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable3 = ((parser_nodes___AAndExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AAndExpr___n_expr2))( self) /*AAndExpr::n_expr2*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable1 /*e*/,  variable2 /*e2*/) /*CompilerVisitor::add_assignment*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  variable1 =  variable1 /*e*/;
  goto return_label282;
  return_label282: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ANotExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ANotExpr::compile_expr (src/compiling//compiling_methods.nit:962,2--964:59)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(" TAG_Bool(!UNTAG_Bool("), TAG_Int(22)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((parser_nodes___ANotExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ANotExpr___n_expr))( self) /*ANotExpr::n_expr*/;
  variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable4) /*CompilerVisitor::compile_expr*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  goto return_label283;
  return_label283: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AEeExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AEeExpr::compile_expr (src/compiling//compiling_methods.nit:969,2--973:42)"};
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
  variable2 = ((parser_nodes___AEeExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AEeExpr___n_expr))( self) /*AEeExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___AEeExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___AEeExpr___n_expr2))( self) /*AEeExpr::n_expr2*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("TAG_Bool(IS_EQUAL_NN("), TAG_Int(21)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*e*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable2 /*e2*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("))"), TAG_Int(2)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable1 = variable3;
  goto return_label284;
  return_label284: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AIsaExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AIsaExpr::compile_expr (src/compiling//compiling_methods.nit:978,2--981:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AIsaExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIsaExpr___n_expr))( self) /*AIsaExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = ((parser_nodes___AIsaExpr___n_type_t)CALL( self,COLOR_parser_nodes___AIsaExpr___n_type))( self) /*AIsaExpr::n_type*/;
  variable2 = ((typing___PType___stype_t)CALL(variable2,COLOR_typing___PType___stype))(variable2) /*PType::stype*/;
  variable2 = ((compiling_methods___MMType___compile_cast_t)CALL(variable2,COLOR_compiling_methods___MMType___compile_cast))(variable2,  variable0 /*v*/,  variable1 /*e*/) /*MMType::compile_cast*/;
  variable1 = variable2;
  goto return_label285;
  return_label285: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ATrueExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ATrueExpr::compile_expr (src/compiling//compiling_methods.nit:986,2--988:26)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_native(BOX_NativeString(" TAG_Bool(true)"), TAG_Int(15)); /*new String*/
  goto return_label286;
  return_label286: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AFalseExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AFalseExpr::compile_expr (src/compiling//compiling_methods.nit:993,2--995:27)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_native(BOX_NativeString(" TAG_Bool(false)"), TAG_Int(16)); /*new String*/
  goto return_label287;
  return_label287: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AIntExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AIntExpr::compile_expr (src/compiling//compiling_methods.nit:1000,2--1002:36)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(" TAG_Int("), TAG_Int(9)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((parser_nodes___AIntExpr___n_number_t)CALL( self,COLOR_parser_nodes___AIntExpr___n_number))( self) /*AIntExpr::n_number*/;
  variable4 = ((lexer___Token___text_t)CALL(variable4,COLOR_lexer___Token___text))(variable4) /*TNumber::text*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  goto return_label288;
  return_label288: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AFloatExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AFloatExpr::compile_expr (src/compiling//compiling_methods.nit:1007,2--1009:36)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("BOX_Float("), TAG_Int(10)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((parser_nodes___AFloatExpr___n_float_t)CALL( self,COLOR_parser_nodes___AFloatExpr___n_float))( self) /*AFloatExpr::n_float*/;
  variable4 = ((lexer___Token___text_t)CALL(variable4,COLOR_lexer___Token___text))(variable4) /*TFloat::text*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  goto return_label289;
  return_label289: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ACharExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ACharExpr::compile_expr (src/compiling//compiling_methods.nit:1014,2--1016:35)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(" TAG_Char("), TAG_Int(10)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((parser_nodes___ACharExpr___n_char_t)CALL( self,COLOR_parser_nodes___ACharExpr___n_char))( self) /*ACharExpr::n_char*/;
  variable4 = ((lexer___Token___text_t)CALL(variable4,COLOR_lexer___Token___text))(variable4) /*TChar::text*/;
  variable5 = variable4;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  goto return_label290;
  return_label290: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AStringFormExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AStringFormExpr::compile_expr (src/compiling//compiling_methods.nit:1021,2--1025:107)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  static val_t once_value_variable3_292; static int once_bool_variable3_292;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  val_t variable8;
  val_t variable9;
  val_t variable10;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*AStringFormExpr::stype*/;
  if (once_bool_variable3_292) variable3 = once_value_variable3_292;
  else {
    variable3 = NEW_string___String___with_native(BOX_NativeString("with_native"), TAG_Int(11)); /*new String*/
    variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
    once_value_variable3_292 = variable3;
    once_bool_variable3_292 = true;
  }
  variable2 = ((static_type___MMType___select_method_t)CALL(variable2,COLOR_static_type___MMType___select_method))(variable2, variable3) /*MMType::select_method*/;
  variable1 = variable2;
  ((compiling_methods___AStringFormExpr___compute_string_info_t)CALL( self,COLOR_compiling_methods___AStringFormExpr___compute_string_info))( self) /*AStringFormExpr::compute_string_info*/;
  variable2 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("BOX_NativeString(\""), TAG_Int(18)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ATTR_compiling_methods___AStringFormExpr____cstring( self) /*AStringFormExpr::_cstring*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("\")"), TAG_Int(2)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable3) /*Array::add*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("TAG_Int("), TAG_Int(8)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ATTR_compiling_methods___AStringFormExpr____cstring_length( self) /*AStringFormExpr::_cstring_length*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable4) /*Array::add*/;
  variable2 = ((compiling_methods___MMMethod___compile_constructor_call_t)CALL( variable1 /*prop*/,COLOR_compiling_methods___MMMethod___compile_constructor_call))( variable1 /*prop*/,  variable0 /*v*/, variable2) /*MMMethod::compile_constructor_call*/;
  variable1 = variable2;
  goto return_label291;
  return_label291: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AStringFormExpr___string_text(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AStringFormExpr::string_text (src/compiling//compiling_methods.nit:1028,2--1029:35)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method string_text called (src/compiling//compiling_methods.nit:1028,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void compiling_methods___AStringFormExpr___compute_string_info(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AStringFormExpr::compute_string_info (src/compiling//compiling_methods.nit:1037,2--1059:23)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
      val_t variable6;
      val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  variable2 = ((compiling_methods___AStringFormExpr___string_text_t)CALL( self,COLOR_compiling_methods___AStringFormExpr___string_text))( self) /*AStringFormExpr::string_text*/;
  variable1 = variable2;
  variable3 = NEW_string___String___init(); /*new String*/
  variable2 = variable3;
  variable3 =  TAG_Int(0);
  while (true) { /*while*/
    variable4 = ((array___AbstractArray___length_t)CALL( variable1 /*str*/,COLOR_abstract_collection___Collection___length))( variable1 /*str*/) /*String::length*/;
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)<UNTAG_Int(variable4));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable5 = ((string___String_____bra_t)CALL( variable1 /*str*/,COLOR_abstract_collection___Map_____bra))( variable1 /*str*/,  variable3 /*i*/) /*String::[]*/;
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*c*/)==( TAG_Char('\\')));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = TAG_Int(UNTAG_Int( variable3 /*i*/)+UNTAG_Int( TAG_Int(1)));
      variable3 = variable5 /*i=*/;
      variable6 = ((string___String_____bra_t)CALL( variable1 /*str*/,COLOR_abstract_collection___Map_____bra))( variable1 /*str*/,  variable3 /*i*/) /*String::[]*/;
      variable5 = variable6;
      variable6 = TAG_Bool(( variable5 /*c2*/)!=( TAG_Char('{')));
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 = TAG_Bool(( variable5 /*c2*/)!=( TAG_Char('}')));
      }
      variable6 = variable7;
      if (UNTAG_Bool(variable6)) { /*if*/
        ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  variable4 /*c*/) /*String::add*/;
      }
      variable4 =  variable5 /*c2*/ /*c=*/;
    }
    variable5 = TAG_Int(UNTAG_Int( variable0 /*len*/)+UNTAG_Int( TAG_Int(1)));
    variable0 = variable5 /*len=*/;
    ((string___String___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  variable4 /*c*/) /*String::add*/;
    variable5 = TAG_Int(UNTAG_Int( variable3 /*i*/)+UNTAG_Int( TAG_Int(1)));
    variable3 = variable5 /*i=*/;
    continue_294: while(0);
  }
  break_294: while(0);
  ATTR_compiling_methods___AStringFormExpr____cstring( self) /*AStringFormExpr::_cstring*/ =  variable2 /*res*/;
  ATTR_compiling_methods___AStringFormExpr____cstring_length( self) /*AStringFormExpr::_cstring_length*/ =  variable0 /*len*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___AStringExpr___string_text(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AStringExpr::string_text (src/compiling//compiling_methods.nit:1064,2--85)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AStringExpr___n_string))( self) /*AStringExpr::n_string*/;
  variable0 = ((lexer___Token___text_t)CALL(variable0,COLOR_lexer___Token___text))(variable0) /*TString::text*/;
  variable1 = ((parser_nodes___AStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AStringExpr___n_string))( self) /*AStringExpr::n_string*/;
  variable1 = ((lexer___Token___text_t)CALL(variable1,COLOR_lexer___Token___text))(variable1) /*TString::text*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(2)));
  variable0 = ((string___String___substring_t)CALL(variable0,COLOR_string___String___substring))(variable0,  TAG_Int(1), variable1) /*String::substring*/;
  goto return_label295;
  return_label295: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_methods___AStartStringExpr___string_text(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AStartStringExpr::string_text (src/compiling//compiling_methods.nit:1067,2--85)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AStartStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AStartStringExpr___n_string))( self) /*AStartStringExpr::n_string*/;
  variable0 = ((lexer___Token___text_t)CALL(variable0,COLOR_lexer___Token___text))(variable0) /*TStartString::text*/;
  variable1 = ((parser_nodes___AStartStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AStartStringExpr___n_string))( self) /*AStartStringExpr::n_string*/;
  variable1 = ((lexer___Token___text_t)CALL(variable1,COLOR_lexer___Token___text))(variable1) /*TStartString::text*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(2)));
  variable0 = ((string___String___substring_t)CALL(variable0,COLOR_string___String___substring))(variable0,  TAG_Int(1), variable1) /*String::substring*/;
  goto return_label296;
  return_label296: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_methods___AMidStringExpr___string_text(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AMidStringExpr::string_text (src/compiling//compiling_methods.nit:1070,2--85)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AMidStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AMidStringExpr___n_string))( self) /*AMidStringExpr::n_string*/;
  variable0 = ((lexer___Token___text_t)CALL(variable0,COLOR_lexer___Token___text))(variable0) /*TMidString::text*/;
  variable1 = ((parser_nodes___AMidStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AMidStringExpr___n_string))( self) /*AMidStringExpr::n_string*/;
  variable1 = ((lexer___Token___text_t)CALL(variable1,COLOR_lexer___Token___text))(variable1) /*TMidString::text*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(2)));
  variable0 = ((string___String___substring_t)CALL(variable0,COLOR_string___String___substring))(variable0,  TAG_Int(1), variable1) /*String::substring*/;
  goto return_label297;
  return_label297: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_methods___AEndStringExpr___string_text(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AEndStringExpr::string_text (src/compiling//compiling_methods.nit:1073,2--85)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AEndStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AEndStringExpr___n_string))( self) /*AEndStringExpr::n_string*/;
  variable0 = ((lexer___Token___text_t)CALL(variable0,COLOR_lexer___Token___text))(variable0) /*TEndString::text*/;
  variable1 = ((parser_nodes___AEndStringExpr___n_string_t)CALL( self,COLOR_parser_nodes___AEndStringExpr___n_string))( self) /*AEndStringExpr::n_string*/;
  variable1 = ((lexer___Token___text_t)CALL(variable1,COLOR_lexer___Token___text))(variable1) /*TEndString::text*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(2)));
  variable0 = ((string___String___substring_t)CALL(variable0,COLOR_string___String___substring))(variable0,  TAG_Int(1), variable1) /*String::substring*/;
  goto return_label298;
  return_label298: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_methods___ASuperstringExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASuperstringExpr::compile_expr (src/compiling//compiling_methods.nit:1077,2--1093:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  static val_t once_value_variable3_300; static int once_bool_variable3_300;
  val_t variable4;
  val_t variable5;
  static val_t once_value_variable5_301; static int once_bool_variable5_301;
  val_t variable6;
  static val_t once_value_variable6_302; static int once_bool_variable6_302;
    val_t variable7;
    val_t variable8;
    val_t variable9;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*ASuperstringExpr::stype*/;
  if (once_bool_variable3_300) variable3 = once_value_variable3_300;
  else {
    variable3 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
    variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
    once_value_variable3_300 = variable3;
    once_bool_variable3_300 = true;
  }
  variable2 = ((static_type___MMType___select_method_t)CALL(variable2,COLOR_static_type___MMType___select_method))(variable2, variable3) /*MMType::select_method*/;
  variable1 = variable2;
  variable3 = NEW_array___Array___init(); /*new Array[String]*/
  variable3 = ((compiling_methods___MMMethod___compile_constructor_call_t)CALL( variable1 /*prop*/,COLOR_compiling_methods___MMMethod___compile_constructor_call))( variable1 /*prop*/,  variable0 /*v*/, variable3) /*MMMethod::compile_constructor_call*/;
  variable2 = variable3;
  variable4 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*ASuperstringExpr::stype*/;
  if (once_bool_variable5_301) variable5 = once_value_variable5_301;
  else {
    variable5 = NEW_string___String___with_native(BOX_NativeString("append"), TAG_Int(6)); /*new String*/
    variable5 = ((symbol___String___to_symbol_t)CALL(variable5,COLOR_symbol___String___to_symbol))(variable5) /*String::to_symbol*/;
    once_value_variable5_301 = variable5;
    once_bool_variable5_301 = true;
  }
  variable4 = ((static_type___MMType___select_method_t)CALL(variable4,COLOR_static_type___MMType___select_method))(variable4, variable5) /*MMType::select_method*/;
  variable3 = variable4;
  variable5 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*ASuperstringExpr::stype*/;
  if (once_bool_variable6_302) variable6 = once_value_variable6_302;
  else {
    variable6 = NEW_string___String___with_native(BOX_NativeString("to_s"), TAG_Int(4)); /*new String*/
    variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
    once_value_variable6_302 = variable6;
    once_bool_variable6_302 = true;
  }
  variable5 = ((static_type___MMType___select_method_t)CALL(variable5,COLOR_static_type___MMType___select_method))(variable5, variable6) /*MMType::select_method*/;
  variable4 = variable5;
  variable5 = ((parser_nodes___ASuperstringExpr___n_exprs_t)CALL( self,COLOR_parser_nodes___ASuperstringExpr___n_exprs))( self) /*ASuperstringExpr::n_exprs*/;
  variable5 = ((list___List___iterator_t)CALL(variable5,COLOR_abstract_collection___Collection___iterator))(variable5) /*List::iterator*/;
  while (true) { /*for*/
    variable6 = ((list___ListIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((list___ListIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ListIterator::item*/;
    variable8 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable6 /*ne*/) /*CompilerVisitor::compile_expr*/;
    variable8 = ((compiling_methods___CompilerVisitor___ensure_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___ensure_var))( variable0 /*v*/, variable8) /*CompilerVisitor::ensure_var*/;
    variable7 = variable8;
    variable8 = ((typing___PExpr___stype_t)CALL( variable6 /*ne*/,COLOR_syntax_base___PExpr___stype))( variable6 /*ne*/) /*PExpr::stype*/;
    variable9 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*ASuperstringExpr::stype*/;
    variable8 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable8 == variable9) || ((variable8 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable8,variable9)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))(variable8, variable9) /*MMType::==*/)))))));
    if (UNTAG_Bool(variable8)) { /*if*/
      variable8 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
      ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8,  variable7 /*e*/) /*Array::add*/;
      variable8 = ((compiling_methods___MMMethod___compile_call_t)CALL( variable4 /*prop3*/,COLOR_compiling_methods___MMMethod___compile_call))( variable4 /*prop3*/,  variable0 /*v*/, variable8) /*MMMethod::compile_call*/;
      ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable7 /*e*/, variable8) /*CompilerVisitor::add_assignment*/;
    }
    variable8 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
    ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8,  variable2 /*recv*/) /*Array::add*/;
    ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8,  variable7 /*e*/) /*Array::add*/;
    ((compiling_methods___MMMethod___compile_call_t)CALL( variable3 /*prop2*/,COLOR_compiling_methods___MMMethod___compile_call))( variable3 /*prop2*/,  variable0 /*v*/, variable8) /*MMMethod::compile_call*/;
    continue_303: while(0);
    ((list___ListIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ListIterator::next*/;
  }
  break_303: while(0);
  variable1 =  variable2 /*recv*/;
  goto return_label299;
  return_label299: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ANullExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ANullExpr::compile_expr (src/compiling//compiling_methods.nit:1098,2--1100:29)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_native(BOX_NativeString(" NIT_NULL /*null*/"), TAG_Int(18)); /*new String*/
  goto return_label304;
  return_label304: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AArrayExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AArrayExpr::compile_expr (src/compiling//compiling_methods.nit:1105,2--1115:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  static val_t once_value_variable3_306; static int once_bool_variable3_306;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  val_t variable8;
  val_t variable9;
  val_t variable10;
  static val_t once_value_variable5_307; static int once_bool_variable5_307;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*AArrayExpr::stype*/;
  if (once_bool_variable3_306) variable3 = once_value_variable3_306;
  else {
    variable3 = NEW_string___String___with_native(BOX_NativeString("with_capacity"), TAG_Int(13)); /*new String*/
    variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
    once_value_variable3_306 = variable3;
    once_bool_variable3_306 = true;
  }
  variable2 = ((static_type___MMType___select_method_t)CALL(variable2,COLOR_static_type___MMType___select_method))(variable2, variable3) /*MMType::select_method*/;
  variable1 = variable2;
  variable3 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("TAG_Int("), TAG_Int(8)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((parser_nodes___AArrayExpr___n_exprs_t)CALL( self,COLOR_parser_nodes___AArrayExpr___n_exprs))( self) /*AArrayExpr::n_exprs*/;
  variable7 = ((list___List___length_t)CALL(variable7,COLOR_abstract_collection___Collection___length))(variable7) /*List::length*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3, variable4) /*Array::add*/;
  variable3 = ((compiling_methods___MMMethod___compile_constructor_call_t)CALL( variable1 /*prop*/,COLOR_compiling_methods___MMMethod___compile_constructor_call))( variable1 /*prop*/,  variable0 /*v*/, variable3) /*MMMethod::compile_constructor_call*/;
  variable2 = variable3;
  variable4 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*AArrayExpr::stype*/;
  if (once_bool_variable5_307) variable5 = once_value_variable5_307;
  else {
    variable5 = NEW_string___String___with_native(BOX_NativeString("add"), TAG_Int(3)); /*new String*/
    variable5 = ((symbol___String___to_symbol_t)CALL(variable5,COLOR_symbol___String___to_symbol))(variable5) /*String::to_symbol*/;
    once_value_variable5_307 = variable5;
    once_bool_variable5_307 = true;
  }
  variable4 = ((static_type___MMType___select_method_t)CALL(variable4,COLOR_static_type___MMType___select_method))(variable4, variable5) /*MMType::select_method*/;
  variable3 = variable4;
  variable4 = ((parser_nodes___AArrayExpr___n_exprs_t)CALL( self,COLOR_parser_nodes___AArrayExpr___n_exprs))( self) /*AArrayExpr::n_exprs*/;
  variable4 = ((list___List___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*List::iterator*/;
  while (true) { /*for*/
    variable5 = ((list___ListIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((list___ListIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ListIterator::item*/;
    variable7 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable5 /*ne*/) /*CompilerVisitor::compile_expr*/;
    variable6 = variable7;
    variable7 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
    ((array___AbstractArray___add_t)CALL(variable7,COLOR_abstract_collection___SimpleCollection___add))(variable7,  variable2 /*recv*/) /*Array::add*/;
    ((array___AbstractArray___add_t)CALL(variable7,COLOR_abstract_collection___SimpleCollection___add))(variable7,  variable6 /*e*/) /*Array::add*/;
    ((compiling_methods___MMMethod___compile_call_t)CALL( variable3 /*prop2*/,COLOR_compiling_methods___MMMethod___compile_call))( variable3 /*prop2*/,  variable0 /*v*/, variable7) /*MMMethod::compile_call*/;
    continue_308: while(0);
    ((list___ListIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ListIterator::next*/;
  }
  break_308: while(0);
  variable1 =  variable2 /*recv*/;
  goto return_label305;
  return_label305: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ARangeExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ARangeExpr::compile_expr (src/compiling//compiling_methods.nit:1120,2--1125:48)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((typing___PExpr___stype_t)CALL( self,COLOR_syntax_base___PExpr___stype))( self) /*ARangeExpr::stype*/;
  variable3 = ((compiling_methods___ARangeExpr___propname_t)CALL( self,COLOR_compiling_methods___ARangeExpr___propname))( self) /*ARangeExpr::propname*/;
  variable2 = ((static_type___MMType___select_method_t)CALL(variable2,COLOR_static_type___MMType___select_method))(variable2, variable3) /*MMType::select_method*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___ARangeExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ARangeExpr___n_expr))( self) /*ARangeExpr::n_expr*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  variable4 = ((parser_nodes___ARangeExpr___n_expr2_t)CALL( self,COLOR_parser_nodes___ARangeExpr___n_expr2))( self) /*ARangeExpr::n_expr2*/;
  variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable4) /*CompilerVisitor::compile_expr*/;
  variable3 = variable4;
  variable4 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable2 /*e*/) /*Array::add*/;
  ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable3 /*e2*/) /*Array::add*/;
  variable4 = ((compiling_methods___MMMethod___compile_constructor_call_t)CALL( variable1 /*prop*/,COLOR_compiling_methods___MMMethod___compile_constructor_call))( variable1 /*prop*/,  variable0 /*v*/, variable4) /*MMMethod::compile_constructor_call*/;
  variable1 = variable4;
  goto return_label309;
  return_label309: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ARangeExpr___propname(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::ARangeExpr::propname (src/compiling//compiling_methods.nit:1127,2--1128:32)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method propname called (src/compiling//compiling_methods.nit:1127,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_methods___ACrangeExpr___propname(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::ACrangeExpr::propname (src/compiling//compiling_methods.nit:1132,2--52)"};
  val_t variable0;
  static val_t once_value_variable0_311; static int once_bool_variable0_311;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_311) variable0 = once_value_variable0_311;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_311 = variable0;
    once_bool_variable0_311 = true;
  }
  goto return_label310;
  return_label310: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_methods___AOrangeExpr___propname(val_t  self) {
  struct trace_t trace = {NULL, "compiling_methods::AOrangeExpr::propname (src/compiling//compiling_methods.nit:1135,2--60)"};
  val_t variable0;
  static val_t once_value_variable0_313; static int once_bool_variable0_313;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_313) variable0 = once_value_variable0_313;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("without_last"), TAG_Int(12)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_313 = variable0;
    once_bool_variable0_313 = true;
  }
  goto return_label312;
  return_label312: while(false);
  tracehead = trace.prev;
  return variable0;
}
void compiling_methods___ASuperExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASuperExpr::compile_stmt (src/compiling//compiling_methods.nit:1139,2--1142:38)"};
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
  variable2 = ((compiling_methods___ASuperExpr___compile_expr_t)CALL( self,COLOR_compiling_methods___PExpr___compile_expr))( self,  variable0 /*v*/) /*ASuperExpr::compile_expr*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*e*/ ==  NIT_NULL /*null*/) || (( variable1 /*e*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable1 /*e*/,COLOR_kernel___Object_____eqeq))( variable1 /*e*/,  NIT_NULL /*null*/) /*String::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 =  variable1 /*e*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  }
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___ASuperExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASuperExpr::compile_expr (src/compiling//compiling_methods.nit:1145,2--1167:41)"};
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
  variable2 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params))( variable0 /*v*/) /*CompilerVisitor::method_params*/;
  variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  variable2 = ((typing___ASuperExpr___init_in_superclass_t)CALL( self,COLOR_typing___ASuperExpr___init_in_superclass))( self) /*ASuperExpr::init_in_superclass*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMMethod::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((typing___ASuperExpr___init_in_superclass_t)CALL( self,COLOR_typing___ASuperExpr___init_in_superclass))( self) /*ASuperExpr::init_in_superclass*/;
    variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMMethod::signature*/;
    variable2 = ((static_type___MMSignature___arity_t)CALL(variable2,COLOR_static_type___MMSignature___arity))(variable2) /*MMSignature::arity*/;
    variable1 = variable2 /*arity=*/;
  }
  variable3 = TAG_Int(UNTAG_Int( variable1 /*arity*/)+UNTAG_Int( TAG_Int(1)));
  variable4 = NEW_array___Array___with_capacity(variable3); /*new Array[String]*/
  variable3 = variable4;
  variable2 = variable3;
  variable3 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params))( variable0 /*v*/) /*CompilerVisitor::method_params*/;
  variable4 =  TAG_Int(0);
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
  goto return_label316;
  return_label316: while(false);
  variable3 = variable5;
  ((array___AbstractArray___add_t)CALL( variable2 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*args*/, variable3) /*Array::add*/;
  variable3 = ((parser_nodes___ASuperExpr___n_args_t)CALL( self,COLOR_parser_nodes___ASuperExpr___n_args))( self) /*ASuperExpr::n_args*/;
  variable3 = ((list___List___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*List::length*/;
  variable3 = TAG_Bool((variable3)!=( variable1 /*arity*/));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_range___Range___without_last( TAG_Int(0),  variable1 /*arity*/); /*new Range[Int]*/
    variable3 = ((range___Range___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Range::iterator*/;
    while (true) { /*for*/
      variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
      variable5 = ((compiling_methods___CompilerVisitor___method_params_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params))( variable0 /*v*/) /*CompilerVisitor::method_params*/;
      variable6 = TAG_Int(UNTAG_Int( variable4 /*i*/)+UNTAG_Int( TAG_Int(1)));
      variable7 = variable6;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = variable5;
        variable9 = ATTR_array___AbstractArray____length(variable9) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = variable5;
      variable8 = ATTR_array___Array____items(variable8) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label318;
      return_label318: while(false);
      variable5 = variable8;
      ((array___AbstractArray___add_t)CALL( variable2 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*args*/, variable5) /*Array::add*/;
      continue_317: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
    }
    break_317: while(0);
  } else { /*if*/
    variable3 = ((parser_nodes___ASuperExpr___n_args_t)CALL( self,COLOR_parser_nodes___ASuperExpr___n_args))( self) /*ASuperExpr::n_args*/;
    variable3 = ((list___List___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*List::iterator*/;
    while (true) { /*for*/
      variable4 = ((list___ListIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ListIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((list___ListIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ListIterator::item*/;
      variable5 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable4 /*na*/) /*CompilerVisitor::compile_expr*/;
      ((array___AbstractArray___add_t)CALL( variable2 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*args*/, variable5) /*Array::add*/;
      continue_319: while(0);
      ((list___ListIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ListIterator::next*/;
    }
    break_319: while(0);
  }
  variable3 = ((typing___ASuperExpr___init_in_superclass_t)CALL( self,COLOR_typing___ASuperExpr___init_in_superclass))( self) /*ASuperExpr::init_in_superclass*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMMethod::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((typing___ASuperExpr___init_in_superclass_t)CALL( self,COLOR_typing___ASuperExpr___init_in_superclass))( self) /*ASuperExpr::init_in_superclass*/;
    variable3 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable3,COLOR_compiling_methods___MMMethod___compile_call))(variable3,  variable0 /*v*/,  variable2 /*args*/) /*MMMethod::compile_call*/;
    variable1 = variable3;
    goto return_label315;
  } else { /*if*/
    variable3 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASuperExpr::prop*/;
    variable3 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalProperty___global))(variable3) /*MMMethod::global*/;
    variable3 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable3) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = NEW_string___String___with_native(BOX_NativeString("init_table"), TAG_Int(10)); /*new String*/
      ((array___AbstractArray___add_t)CALL( variable2 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*args*/, variable3) /*Array::add*/;
    }
    variable3 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASuperExpr::prop*/;
    variable3 = ((compiling_methods___MMMethod___compile_super_call_t)CALL(variable3,COLOR_compiling_methods___MMMethod___compile_super_call))(variable3,  variable0 /*v*/,  variable2 /*args*/) /*MMMethod::compile_super_call*/;
    variable1 = variable3;
    goto return_label315;
  }
  return_label315: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AAttrExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAttrExpr::compile_expr (src/compiling//compiling_methods.nit:1173,2--1176:33)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable2 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrExpr::prop*/;
  variable2 = ((compiling_methods___MMAttribute___compile_access_t)CALL(variable2,COLOR_compiling_methods___MMAttribute___compile_access))(variable2,  variable0 /*v*/,  variable1 /*e*/) /*MMAttribute::compile_access*/;
  variable1 = variable2;
  goto return_label320;
  return_label320: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_methods___AAttrAssignExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAttrAssignExpr::compile_stmt (src/compiling//compiling_methods.nit:1181,2--1185:48)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrAssignExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = ((parser_nodes___AAssignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AAssignFormExpr___n_value))( self) /*AAttrAssignExpr::n_value*/;
  variable3 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable3) /*CompilerVisitor::compile_expr*/;
  variable2 = variable3;
  variable3 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrAssignExpr::prop*/;
  variable3 = ((compiling_methods___MMAttribute___compile_access_t)CALL(variable3,COLOR_compiling_methods___MMAttribute___compile_access))(variable3,  variable0 /*v*/,  variable1 /*e*/) /*MMAttribute::compile_access*/;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/, variable3,  variable2 /*e2*/) /*CompilerVisitor::add_assignment*/;
  tracehead = trace.prev;
  return;
}
void compiling_methods___AAttrReassignExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AAttrReassignExpr::compile_stmt (src/compiling//compiling_methods.nit:1189,2--1195:25)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AAttrFormExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AAttrFormExpr___n_expr))( self) /*AAttrReassignExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = ((typing___AAttrFormExpr___prop_t)CALL( self,COLOR_typing___AAttrFormExpr___prop))( self) /*AAttrReassignExpr::prop*/;
  variable3 = ((compiling_methods___MMAttribute___compile_access_t)CALL(variable3,COLOR_compiling_methods___MMAttribute___compile_access))(variable3,  variable0 /*v*/,  variable1 /*e1*/) /*MMAttribute::compile_access*/;
  variable2 = variable3;
  variable4 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*AAttrReassignExpr::n_value*/;
  variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable4) /*CompilerVisitor::compile_expr*/;
  variable3 = variable4;
  variable5 = ((typing___AReassignFormExpr___assign_method_t)CALL( self,COLOR_typing___AReassignFormExpr___assign_method))( self) /*AAttrReassignExpr::assign_method*/;
  variable6 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable6,COLOR_abstract_collection___SimpleCollection___add))(variable6,  variable2 /*e2*/) /*Array::add*/;
  ((array___AbstractArray___add_t)CALL(variable6,COLOR_abstract_collection___SimpleCollection___add))(variable6,  variable3 /*e3*/) /*Array::add*/;
  variable5 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable5,COLOR_compiling_methods___MMMethod___compile_call))(variable5,  variable0 /*v*/, variable6) /*MMMethod::compile_call*/;
  variable4 = variable5;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable2 /*e2*/,  variable4 /*e4*/) /*CompilerVisitor::add_assignment*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___ASendExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASendExpr::compile_expr (src/compiling//compiling_methods.nit:1200,2--1213:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = NEW_array___Array___init(); /*new Array[String]*/
  variable2 = variable3;
  ((array___AbstractArray___add_t)CALL( variable2 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*cargs*/,  variable1 /*recv*/) /*Array::add*/;
  variable3 = ((typing___AAbsSendExpr___arguments_t)CALL( self,COLOR_typing___AAbsSendExpr___arguments))( self) /*ASendExpr::arguments*/;
  variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable5 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable4 /*a*/) /*CompilerVisitor::compile_expr*/;
    ((array___AbstractArray___add_t)CALL( variable2 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*cargs*/, variable5) /*Array::add*/;
    continue_324: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_324: while(0);
  variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
  variable4 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable4,COLOR_compiling_methods___MMMethod___compile_call))(variable4,  variable0 /*v*/,  variable2 /*cargs*/) /*MMMethod::compile_call*/;
  variable3 = variable4;
  variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMMethod::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable4) /*MMGlobalProperty::is_init*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendExpr::prop*/;
    ((compiling_methods___CompilerVisitor___invoke_super_init_calls_after_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___invoke_super_init_calls_after))( variable0 /*v*/, variable4) /*CompilerVisitor::invoke_super_init_calls_after*/;
  }
  variable1 =  variable3 /*e*/;
  goto return_label323;
  return_label323: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_methods___ASendExpr___compile_stmt(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASendExpr::compile_stmt (src/compiling//compiling_methods.nit:1216,2--1220:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((compiling_methods___ASendExpr___compile_expr_t)CALL( self,COLOR_compiling_methods___PExpr___compile_expr))( self,  variable0 /*v*/) /*ASendExpr::compile_expr*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*e*/ ==  NIT_NULL /*null*/) || (( variable1 /*e*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable1 /*e*/,COLOR_kernel___Object_____eqeq))( variable1 /*e*/,  NIT_NULL /*null*/) /*String::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable2 = ((string___String_____plus_t)CALL( variable1 /*e*/,COLOR_string___String_____plus))( variable1 /*e*/, variable2) /*String::+*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  }
  tracehead = trace.prev;
  return;
}
val_t compiling_methods___ASendReassignExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ASendReassignExpr::compile_expr (src/compiling//compiling_methods.nit:1226,2--1239:35)"};
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
  variable2 = ((parser_nodes___ASendExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ASendExpr___n_expr))( self) /*ASendReassignExpr::n_expr*/;
  variable2 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable2) /*CompilerVisitor::compile_expr*/;
  variable1 = variable2;
  variable3 = NEW_array___Array___init(); /*new Array[String]*/
  variable2 = variable3;
  ((array___AbstractArray___add_t)CALL( variable2 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*cargs*/,  variable1 /*recv*/) /*Array::add*/;
  variable3 = ((typing___AAbsSendExpr___arguments_t)CALL( self,COLOR_typing___AAbsSendExpr___arguments))( self) /*ASendReassignExpr::arguments*/;
  variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable5 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable4 /*a*/) /*CompilerVisitor::compile_expr*/;
    ((array___AbstractArray___add_t)CALL( variable2 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*cargs*/, variable5) /*Array::add*/;
    continue_327: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_327: while(0);
  variable4 = ((typing___ASendReassignExpr___read_prop_t)CALL( self,COLOR_typing___ASendReassignExpr___read_prop))( self) /*ASendReassignExpr::read_prop*/;
  variable4 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable4,COLOR_compiling_methods___MMMethod___compile_call))(variable4,  variable0 /*v*/,  variable2 /*cargs*/) /*MMMethod::compile_call*/;
  variable3 = variable4;
  variable5 = ((parser_nodes___AReassignFormExpr___n_value_t)CALL( self,COLOR_parser_nodes___AReassignFormExpr___n_value))( self) /*ASendReassignExpr::n_value*/;
  variable5 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable5) /*CompilerVisitor::compile_expr*/;
  variable4 = variable5;
  variable6 = ((typing___AReassignFormExpr___assign_method_t)CALL( self,COLOR_typing___AReassignFormExpr___assign_method))( self) /*ASendReassignExpr::assign_method*/;
  variable7 = NEW_array___Array___with_capacity(TAG_Int(2)); /*new Array[String]*/
  ((array___AbstractArray___add_t)CALL(variable7,COLOR_abstract_collection___SimpleCollection___add))(variable7,  variable3 /*e2*/) /*Array::add*/;
  ((array___AbstractArray___add_t)CALL(variable7,COLOR_abstract_collection___SimpleCollection___add))(variable7,  variable4 /*e3*/) /*Array::add*/;
  variable6 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable6,COLOR_compiling_methods___MMMethod___compile_call))(variable6,  variable0 /*v*/, variable7) /*MMMethod::compile_call*/;
  variable5 = variable6;
  ((array___AbstractArray___add_t)CALL( variable2 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*cargs*/,  variable5 /*e4*/) /*Array::add*/;
  variable6 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ASendReassignExpr::prop*/;
  variable6 = ((compiling_methods___MMMethod___compile_call_t)CALL(variable6,COLOR_compiling_methods___MMMethod___compile_call))(variable6,  variable0 /*v*/,  variable2 /*cargs*/) /*MMMethod::compile_call*/;
  variable1 = variable6;
  goto return_label326;
  return_label326: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___ANewExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::ANewExpr::compile_expr (src/compiling//compiling_methods.nit:1244,2--1250:47)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[String]*/
  variable1 = variable2;
  variable2 = ((typing___AAbsSendExpr___arguments_t)CALL( self,COLOR_typing___AAbsSendExpr___arguments))( self) /*ANewExpr::arguments*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/,  variable3 /*a*/) /*CompilerVisitor::compile_expr*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*cargs*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*cargs*/, variable4) /*Array::add*/;
    continue_329: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_329: while(0);
  variable2 = ((typing___AAbsSendExpr___prop_t)CALL( self,COLOR_typing___AAbsSendExpr___prop))( self) /*ANewExpr::prop*/;
  variable2 = ((compiling_methods___MMMethod___compile_constructor_call_t)CALL(variable2,COLOR_compiling_methods___MMMethod___compile_constructor_call))(variable2,  variable0 /*v*/,  variable1 /*cargs*/) /*MMMethod::compile_constructor_call*/;
  variable1 = variable2;
  goto return_label328;
  return_label328: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AProxyExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AProxyExpr::compile_expr (src/compiling//compiling_methods.nit:1255,2--1257:30)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AProxyExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AProxyExpr___n_expr))( self) /*AProxyExpr::n_expr*/;
  variable1 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable1) /*CompilerVisitor::compile_expr*/;
  goto return_label330;
  return_label330: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_methods___AOnceExpr___compile_expr(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_methods::AOnceExpr::compile_expr (src/compiling//compiling_methods.nit:1262,2--1277:13)"};
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
  val_t variable20;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((compiling_base___CompilerVisitor___new_number_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___new_number))( variable0 /*v*/) /*CompilerVisitor::new_number*/;
  variable1 = variable2;
  variable3 = ((compiling_methods___CompilerVisitor___get_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___get_var))( variable0 /*v*/) /*CompilerVisitor::get_var*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("static val_t once_value_"), TAG_Int(24)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable1 /*i*/;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("; static int once_bool_"), TAG_Int(23)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable14) /*String::append*/;
  variable15 =  variable1 /*i*/;
  variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable17) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable3) /*CompilerVisitor::add_decl*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("if (once_bool_"), TAG_Int(14)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable1 /*i*/;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(") "), TAG_Int(2)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(" = once_value_"), TAG_Int(14)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable14) /*String::append*/;
  variable15 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable17) /*String::append*/;
  variable18 =  variable1 /*i*/;
  variable18 = ((string___String___to_s_t)CALL(variable18,COLOR_string___Object___to_s))(variable18) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable20) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("else {"), TAG_Int(6)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  ((compiling_methods___CompilerVisitor___free_var_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___free_var))( variable0 /*v*/,  variable2 /*cvar*/) /*CompilerVisitor::free_var*/;
  variable4 = ((parser_nodes___AProxyExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AProxyExpr___n_expr))( self) /*AOnceExpr::n_expr*/;
  variable4 = ((compiling_methods___CompilerVisitor___compile_expr_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___compile_expr))( variable0 /*v*/, variable4) /*CompilerVisitor::compile_expr*/;
  variable3 = variable4;
  ((compiling_methods___CompilerVisitor___add_assignment_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___add_assignment))( variable0 /*v*/,  variable2 /*cvar*/,  variable3 /*e*/) /*CompilerVisitor::add_assignment*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("once_value_"), TAG_Int(11)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 =  variable1 /*i*/;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(" = "), TAG_Int(3)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("once_bool_"), TAG_Int(10)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable2 /*cvar*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 =  variable1 /*i*/;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(" = true;"), TAG_Int(8)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable4 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable1 =  variable2 /*cvar*/;
  goto return_label331;
  return_label331: while(false);
  tracehead = trace.prev;
  return variable1;
}
