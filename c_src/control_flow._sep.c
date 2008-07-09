#include "control_flow._sep.h"
void control_flow___MMSrcModule___do_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::MMSrcModule::do_control_flow (src/syntax//control_flow.nit:23,2--28:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_control_flow___ControlFlowVisitor___init( variable0 /*tc*/,  self); /*new ControlFlowVisitor*/
  variable1 = variable2;
  variable2 = ((syntax_base___MMSrcModule___node_t)CALL( self,COLOR_syntax_base___MMSrcModule___node))( self) /*MMSrcModule::node*/;
  ((control_flow___ControlFlowVisitor___visit_t)CALL( variable1 /*tv*/,COLOR_parser_prod___Visitor___visit))( variable1 /*tv*/, variable2) /*ControlFlowVisitor::visit*/;
  tracehead = trace.prev;
  return;
}
void control_flow___ControlFlowVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::visit (src/syntax//control_flow.nit:38,2--40:46)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*n*/ ==  NIT_NULL /*null*/) || (( variable0 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))( variable0 /*n*/,  NIT_NULL /*null*/) /*PNode::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    ((control_flow___PNode___accept_control_flow_t)CALL( variable0 /*n*/,COLOR_control_flow___PNode___accept_control_flow))( variable0 /*n*/,  self) /*PNode::accept_control_flow*/;
  }
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowVisitor___once_count(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::once_count (src/syntax//control_flow.nit:43,2--44:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowVisitor____once_count( self) /*ControlFlowVisitor::_once_count*/;
}
void control_flow___ControlFlowVisitor___once_count__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::once_count= (src/syntax//control_flow.nit:43,2--44:40)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowVisitor____once_count( self) /*ControlFlowVisitor::_once_count*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowVisitor___control_flow_ctx(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::control_flow_ctx (src/syntax//control_flow.nit:46,2--47:61)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowVisitor____control_flow_ctx( self) /*ControlFlowVisitor::_control_flow_ctx*/;
}
void control_flow___ControlFlowVisitor___control_flow_ctx__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::control_flow_ctx= (src/syntax//control_flow.nit:46,2--47:61)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowVisitor____control_flow_ctx( self) /*ControlFlowVisitor::_control_flow_ctx*/ =  param0;
  tracehead = trace.prev;
  return;
}
void control_flow___ControlFlowVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowVisitor::init (src/syntax//control_flow.nit:49,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowContext___prev(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::prev (src/syntax//control_flow.nit:53,2--54:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowContext____prev( self) /*ControlFlowContext::_prev*/;
}
val_t control_flow___ControlFlowContext___has_return(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::has_return (src/syntax//control_flow.nit:56,2--57:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowContext____has_return( self) /*ControlFlowContext::_has_return*/;
}
void control_flow___ControlFlowContext___has_return__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::has_return= (src/syntax//control_flow.nit:56,2--57:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowContext____has_return( self) /*ControlFlowContext::_has_return*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowContext___unreash(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::unreash (src/syntax//control_flow.nit:59,2--60:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowContext____unreash( self) /*ControlFlowContext::_unreash*/;
}
void control_flow___ControlFlowContext___unreash__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::unreash= (src/syntax//control_flow.nit:59,2--60:38)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowContext____unreash( self) /*ControlFlowContext::_unreash*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowContext___already_unreash(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::already_unreash (src/syntax//control_flow.nit:62,2--64:46)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowContext____already_unreash( self) /*ControlFlowContext::_already_unreash*/;
}
void control_flow___ControlFlowContext___already_unreash__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::already_unreash= (src/syntax//control_flow.nit:62,2--64:46)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowContext____already_unreash( self) /*ControlFlowContext::_already_unreash*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowContext___base_block(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::base_block (src/syntax//control_flow.nit:66,2--67:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ControlFlowContext____base_block( self) /*ControlFlowContext::_base_block*/;
}
void control_flow___ControlFlowContext___base_block__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::base_block= (src/syntax//control_flow.nit:66,2--67:54)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_control_flow___ControlFlowContext____base_block( self) /*ControlFlowContext::_base_block*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ControlFlowContext___sub(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::sub (src/syntax//control_flow.nit:69,2--71:41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_control_flow___ControlFlowContext___with( self); /*new ControlFlowContext*/
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
void control_flow___ControlFlowContext___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::init (src/syntax//control_flow.nit:74,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowContext].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowContext].i] = 1;
  tracehead = trace.prev;
  return;
}
void control_flow___ControlFlowContext___with(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "control_flow::ControlFlowContext::with (src/syntax//control_flow.nit:78,2--84:28)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowContext].i]) return;
  ATTR_control_flow___ControlFlowContext____prev( self) /*ControlFlowContext::_prev*/ =  variable0 /*p*/;
  variable1 = ((control_flow___ControlFlowContext___has_return_t)CALL( variable0 /*p*/,COLOR_control_flow___ControlFlowContext___has_return))( variable0 /*p*/) /*ControlFlowContext::has_return*/;
  ATTR_control_flow___ControlFlowContext____has_return( self) /*ControlFlowContext::_has_return*/ = variable1;
  variable1 = ((control_flow___ControlFlowContext___unreash_t)CALL( variable0 /*p*/,COLOR_control_flow___ControlFlowContext___unreash))( variable0 /*p*/) /*ControlFlowContext::unreash*/;
  ATTR_control_flow___ControlFlowContext____unreash( self) /*ControlFlowContext::_unreash*/ = variable1;
  variable1 = ((control_flow___ControlFlowContext___already_unreash_t)CALL( variable0 /*p*/,COLOR_control_flow___ControlFlowContext___already_unreash))( variable0 /*p*/) /*ControlFlowContext::already_unreash*/;
  ATTR_control_flow___ControlFlowContext____already_unreash( self) /*ControlFlowContext::_already_unreash*/ = variable1;
  variable1 = ((control_flow___ControlFlowContext___base_block_t)CALL( variable0 /*p*/,COLOR_control_flow___ControlFlowContext___base_block))( variable0 /*p*/) /*ControlFlowContext::base_block*/;
  ATTR_control_flow___ControlFlowContext____base_block( self) /*ControlFlowContext::_base_block*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ControlFlowContext].i] = 1;
  tracehead = trace.prev;
  return;
}
void control_flow___PNode___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::PNode::accept_control_flow (src/syntax//control_flow.nit:91,2--93:29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void control_flow___AMethPropdef___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AMethPropdef::accept_control_flow (src/syntax//control_flow.nit:98,2--101:7)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_control_flow___ControlFlowContext___init(); /*new ControlFlowContext*/
  ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/, variable1) /*ControlFlowVisitor::control_flow_ctx=*/;
  ((control_flow___AMethPropdef___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AMethPropdef___accept_control_flow))( self,  param0) /*super AMethPropdef::accept_control_flow*/;
  tracehead = trace.prev;
  return;
}
void control_flow___AConcreteMethPropdef___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AConcreteMethPropdef::accept_control_flow (src/syntax//control_flow.nit:106,2--110:58)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((control_flow___AConcreteMethPropdef___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AConcreteMethPropdef___accept_control_flow))( self,  param0) /*super AConcreteMethPropdef::accept_control_flow*/;
  variable1 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable1 = ((control_flow___ControlFlowContext___has_return_t)CALL(variable1,COLOR_control_flow___ControlFlowContext___has_return))(variable1) /*ControlFlowContext::has_return*/;
  variable1 = TAG_Bool((variable1)==( TAG_Bool(false)));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((syntax_base___AMethPropdef___method_t)CALL( self,COLOR_syntax_base___AMethPropdef___method))( self) /*AConcreteMethPropdef::method*/;
    variable2 = ((genericity___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMMethSrcMethod::signature*/;
    variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_string___String___with_native(BOX_NativeString("Control error: Reached end of function."), TAG_Int(39)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable1) /*ControlFlowVisitor::error*/;
  }
  tracehead = trace.prev;
  return;
}
void control_flow___ABlockExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ABlockExpr::accept_control_flow (src/syntax//control_flow.nit:116,2--123:12)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___ABlockExpr___n_expr_t)CALL( self,COLOR_parser_nodes___ABlockExpr___n_expr))( self) /*ABlockExpr::n_expr*/;
  variable1 = ((list___List___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*List::iterator*/;
  while (true) { /*for*/
    variable2 = ((list___ListIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((list___ListIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ListIterator::item*/;
    variable3 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable3 = ((control_flow___ControlFlowContext___unreash_t)CALL(variable3,COLOR_control_flow___ControlFlowContext___unreash))(variable3) /*ControlFlowContext::unreash*/;
    variable4 = variable3;
    if (UNTAG_Bool(variable4)) { /* and */
      variable4 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
      variable4 = ((control_flow___ControlFlowContext___already_unreash_t)CALL(variable4,COLOR_control_flow___ControlFlowContext___already_unreash))(variable4) /*ControlFlowContext::already_unreash*/;
      variable4 =  TAG_Bool(!UNTAG_Bool(variable4));
    }
    variable3 = variable4;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
      ((control_flow___ControlFlowContext___already_unreash__eq_t)CALL(variable3,COLOR_control_flow___ControlFlowContext___already_unreash__eq))(variable3,  TAG_Bool(true)) /*ControlFlowContext::already_unreash=*/;
      variable3 = NEW_string___String___with_native(BOX_NativeString("Warning: unreachable statement."), TAG_Int(31)); /*new String*/
      ((syntax_base___AbsSyntaxVisitor___warning_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___warning))( variable0 /*v*/,  variable2 /*e*/, variable3) /*ControlFlowVisitor::warning*/;
    }
    ((control_flow___ControlFlowVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/,  variable2 /*e*/) /*ControlFlowVisitor::visit*/;
    continue_10: while(0);
    ((list___ListIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ListIterator::next*/;
  }
  break_10: while(0);
  tracehead = trace.prev;
  return;
}
void control_flow___AReturnExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AReturnExpr::accept_control_flow (src/syntax//control_flow.nit:129,2--133:35)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((control_flow___AReturnExpr___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AReturnExpr___accept_control_flow))( self,  param0) /*super AReturnExpr::accept_control_flow*/;
  variable1 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___has_return__eq_t)CALL(variable1,COLOR_control_flow___ControlFlowContext___has_return__eq))(variable1,  TAG_Bool(true)) /*ControlFlowContext::has_return=*/;
  variable1 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___unreash__eq_t)CALL(variable1,COLOR_control_flow___ControlFlowContext___unreash__eq))(variable1,  TAG_Bool(true)) /*ControlFlowContext::unreash=*/;
  tracehead = trace.prev;
  return;
}
val_t control_flow___ABlockControler___block(val_t  self) {
  struct trace_t trace = {NULL, "control_flow::ABlockControler::block (src/syntax//control_flow.nit:139,2--40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_control_flow___ABlockControler____block( self) /*ABlockControler::_block*/;
}
void control_flow___ABreakExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::ABreakExpr::accept_control_flow (src/syntax//control_flow.nit:144,2--153:35)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((control_flow___ABreakExpr___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___ABreakExpr___accept_control_flow))( self,  param0) /*super ABreakExpr::accept_control_flow*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable2 = ((control_flow___ControlFlowContext___base_block_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___base_block))(variable2) /*ControlFlowContext::base_block*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*block*/ ==  NIT_NULL /*null*/) || (( variable1 /*block*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*block*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*block*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*block*/,COLOR_kernel___Object_____eqeq))( variable1 /*block*/,  NIT_NULL /*null*/) /*AControlableBlock::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("Syntax Error: 'break' statment outside block."), TAG_Int(45)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ControlFlowVisitor::error*/;
    goto return_label12;
  }
  ATTR_control_flow___ABlockControler____block( self) /*ABreakExpr::_block*/ =  variable1 /*block*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___unreash__eq_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___unreash__eq))(variable2,  TAG_Bool(true)) /*ControlFlowContext::unreash=*/;
  return_label12: while(false);
  tracehead = trace.prev;
  return;
}
void control_flow___AContinueExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AContinueExpr::accept_control_flow (src/syntax//control_flow.nit:158,2--167:35)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((control_flow___AContinueExpr___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AContinueExpr___accept_control_flow))( self,  param0) /*super AContinueExpr::accept_control_flow*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable2 = ((control_flow___ControlFlowContext___base_block_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___base_block))(variable2) /*ControlFlowContext::base_block*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*block*/ ==  NIT_NULL /*null*/) || (( variable1 /*block*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*block*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*block*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*block*/,COLOR_kernel___Object_____eqeq))( variable1 /*block*/,  NIT_NULL /*null*/) /*AControlableBlock::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("Syntax Error: 'continue' outside block."), TAG_Int(39)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ControlFlowVisitor::error*/;
    goto return_label13;
  }
  ATTR_control_flow___ABlockControler____block( self) /*AContinueExpr::_block*/ =  variable1 /*block*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___unreash__eq_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___unreash__eq))(variable2,  TAG_Bool(true)) /*ControlFlowContext::unreash=*/;
  return_label13: while(false);
  tracehead = trace.prev;
  return;
}
void control_flow___AAbortExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AAbortExpr::accept_control_flow (src/syntax//control_flow.nit:172,2--176:35)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((control_flow___AAbortExpr___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AAbortExpr___accept_control_flow))( self,  param0) /*super AAbortExpr::accept_control_flow*/;
  variable1 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___has_return__eq_t)CALL(variable1,COLOR_control_flow___ControlFlowContext___has_return__eq))(variable1,  TAG_Bool(true)) /*ControlFlowContext::has_return=*/;
  variable1 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___unreash__eq_t)CALL(variable1,COLOR_control_flow___ControlFlowContext___unreash__eq))(variable1,  TAG_Bool(true)) /*ControlFlowContext::unreash=*/;
  tracehead = trace.prev;
  return;
}
void control_flow___AIfExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AIfExpr::accept_control_flow (src/syntax//control_flow.nit:181,2--204:92)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((parser_nodes___AIfExpr___n_expr_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_expr))( self) /*AIfExpr::n_expr*/;
  ((control_flow___ControlFlowVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable1) /*ControlFlowVisitor::visit*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable1 = variable2;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable2 = ((control_flow___ControlFlowContext___sub_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___sub))(variable2) /*ControlFlowContext::sub*/;
  ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/, variable2) /*ControlFlowVisitor::control_flow_ctx=*/;
  variable2 = ((parser_nodes___AIfExpr___n_then_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_then))( self) /*AIfExpr::n_then*/;
  ((control_flow___ControlFlowVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable2) /*ControlFlowVisitor::visit*/;
  variable2 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PExpr::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/,  variable1 /*old_control_flow_ctx*/) /*ControlFlowVisitor::control_flow_ctx=*/;
  } else { /*if*/
    variable3 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable2 = variable3;
    ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/,  variable1 /*old_control_flow_ctx*/) /*ControlFlowVisitor::control_flow_ctx=*/;
    variable3 = ((parser_nodes___AIfExpr___n_else_t)CALL( self,COLOR_parser_nodes___AIfExpr___n_else))( self) /*AIfExpr::n_else*/;
    ((control_flow___ControlFlowVisitor___visit_t)CALL( variable0 /*v*/,COLOR_parser_prod___Visitor___visit))( variable0 /*v*/, variable3) /*ControlFlowVisitor::visit*/;
    ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/,  variable1 /*old_control_flow_ctx*/) /*ControlFlowVisitor::control_flow_ctx=*/;
    variable3 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable4 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable4 = ((control_flow___ControlFlowContext___has_return_t)CALL(variable4,COLOR_control_flow___ControlFlowContext___has_return))(variable4) /*ControlFlowContext::has_return*/;
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = ((control_flow___ControlFlowContext___has_return_t)CALL( variable2 /*then_control_flow_ctx*/,COLOR_control_flow___ControlFlowContext___has_return))( variable2 /*then_control_flow_ctx*/) /*ControlFlowContext::has_return*/;
    }
    variable4 = variable5;
    ((control_flow___ControlFlowContext___has_return__eq_t)CALL(variable3,COLOR_control_flow___ControlFlowContext___has_return__eq))(variable3, variable4) /*ControlFlowContext::has_return=*/;
    variable3 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable4 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
    variable4 = ((control_flow___ControlFlowContext___unreash_t)CALL(variable4,COLOR_control_flow___ControlFlowContext___unreash))(variable4) /*ControlFlowContext::unreash*/;
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = ((control_flow___ControlFlowContext___unreash_t)CALL( variable2 /*then_control_flow_ctx*/,COLOR_control_flow___ControlFlowContext___unreash))( variable2 /*then_control_flow_ctx*/) /*ControlFlowContext::unreash*/;
    }
    variable4 = variable5;
    ((control_flow___ControlFlowContext___unreash__eq_t)CALL(variable3,COLOR_control_flow___ControlFlowContext___unreash__eq))(variable3, variable4) /*ControlFlowContext::unreash=*/;
  }
  tracehead = trace.prev;
  return;
}
void control_flow___AControlableBlock___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AControlableBlock::accept_control_flow (src/syntax//control_flow.nit:211,2--223:43)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable1 = variable2;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  variable2 = ((control_flow___ControlFlowContext___sub_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___sub))(variable2) /*ControlFlowContext::sub*/;
  ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/, variable2) /*ControlFlowVisitor::control_flow_ctx=*/;
  variable2 = ((control_flow___ControlFlowVisitor___control_flow_ctx_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx))( variable0 /*v*/) /*ControlFlowVisitor::control_flow_ctx*/;
  ((control_flow___ControlFlowContext___base_block__eq_t)CALL(variable2,COLOR_control_flow___ControlFlowContext___base_block__eq))(variable2,  self) /*ControlFlowContext::base_block=*/;
  ((control_flow___AControlableBlock___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AControlableBlock___accept_control_flow))( self,  param0) /*super AControlableBlock::accept_control_flow*/;
  ((control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq))( variable0 /*v*/,  variable1 /*old_control_flow_ctx*/) /*ControlFlowVisitor::control_flow_ctx=*/;
  tracehead = trace.prev;
  return;
}
void control_flow___AOnceExpr___accept_control_flow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "control_flow::AOnceExpr::accept_control_flow (src/syntax//control_flow.nit:236,2--245:33)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((control_flow___ControlFlowVisitor___once_count_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___once_count))( variable0 /*v*/) /*ControlFlowVisitor::once_count*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_string___String___with_native(BOX_NativeString("Useless once in a once expression."), TAG_Int(34)); /*new String*/
    ((syntax_base___AbsSyntaxVisitor___warning_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___warning))( variable0 /*v*/,  self, variable1) /*ControlFlowVisitor::warning*/;
  }
  variable1 = ((control_flow___ControlFlowVisitor___once_count_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___once_count))( variable0 /*v*/) /*ControlFlowVisitor::once_count*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1)));
  ((control_flow___ControlFlowVisitor___once_count__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___once_count__eq))( variable0 /*v*/, variable1) /*ControlFlowVisitor::once_count=*/;
  ((control_flow___AOnceExpr___accept_control_flow_t)CALL( self,COLOR_SUPER_control_flow___AOnceExpr___accept_control_flow))( self,  param0) /*super AOnceExpr::accept_control_flow*/;
  variable1 = ((control_flow___ControlFlowVisitor___once_count_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___once_count))( variable0 /*v*/) /*ControlFlowVisitor::once_count*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  ((control_flow___ControlFlowVisitor___once_count__eq_t)CALL( variable0 /*v*/,COLOR_control_flow___ControlFlowVisitor___once_count__eq))( variable0 /*v*/, variable1) /*ControlFlowVisitor::once_count=*/;
  tracehead = trace.prev;
  return;
}
