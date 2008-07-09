#include "syntax._sep.h"
val_t syntax___SrcModuleLoader___file_type(val_t  self) {
  struct trace_t trace = {NULL, "syntax::SrcModuleLoader::file_type (src/syntax//syntax.nit:31,2--37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___with_native(BOX_NativeString("nit"), TAG_Int(3)); /*new String*/
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax___SrcModuleLoader___parse_file(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4) {
  struct trace_t trace = {NULL, "syntax::SrcModuleLoader::parse_file (src/syntax//syntax.nit:33,2--49:15)"};
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
  variable2 =  param2;
  variable3 =  param3;
  variable4 =  param4;
  variable6 = NEW_lexer___Lexer___init( variable1 /*file*/,  variable2 /*filename*/); /*new Lexer*/
  variable5 = variable6;
  variable7 = NEW_parser___Parser___init( variable5 /*lexer*/); /*new Parser*/
  variable6 = variable7;
  variable8 = ((parser___Parser___parse_t)CALL( variable6 /*parser*/,COLOR_parser___Parser___parse))( variable6 /*parser*/) /*Parser::parse*/;
  variable7 = variable8;
  variable8 = ((parser_nodes___Start___n_base_t)CALL( variable7 /*node_tree*/,COLOR_parser_nodes___Start___n_base))( variable7 /*node_tree*/) /*Start::n_base*/;
  variable8 = TAG_Bool((variable8 ==  NIT_NULL /*null*/) || ((variable8 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable8, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))(variable8,  NIT_NULL /*null*/) /*PModule::==*/)))));
  if (UNTAG_Bool(variable8)) { /*if*/
    variable9 = ((parser_nodes___Start___n_eof_t)CALL( variable7 /*node_tree*/,COLOR_parser_nodes___Start___n_eof))( variable7 /*node_tree*/) /*Start::n_eof*/;
    variable8 = variable9;
    variable9 = TAG_Bool(( variable8 /*err*/==NIT_NULL) || VAL_ISA( variable8 /*err*/, COLOR_PError, ID_PError)) /*cast PError*/;
    if (!UNTAG_Bool(variable9)) { fprintf(stderr, "Assert failed: src/syntax//syntax.nit:40,4--24\n"); nit_exit(1);}
    variable9 = NEW_string___String___init(); /*new String*/
    variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable11) /*String::append*/;
    variable12 = ((parser_prod___Token___locate_t)CALL( variable8 /*err*/,COLOR_parser_prod___PNode___locate))( variable8 /*err*/) /*PError::locate*/;
    variable13 = variable12;
    ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable15) /*String::append*/;
    variable16 = ((lexer___PError___message_t)CALL( variable8 /*err*/,COLOR_lexer___PError___message))( variable8 /*err*/) /*PError::message*/;
    variable17 = variable16;
    ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable17) /*String::append*/;
    variable18 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable19 = variable18;
    ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable19) /*String::append*/;
    ((mmloader___ToolContext___error_t)CALL( variable0 /*context*/,COLOR_mmloader___ToolContext___error))( variable0 /*context*/, variable9) /*ToolContext::error*/;
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable9 = ((parser_nodes___Start___n_base_t)CALL( variable7 /*node_tree*/,COLOR_parser_nodes___Start___n_base))( variable7 /*node_tree*/) /*Start::n_base*/;
  variable8 = variable9;
  variable9 = TAG_Bool(( variable8 /*node_module*/==NIT_NULL) || VAL_ISA( variable8 /*node_module*/, COLOR_AModule, ID_AModule)) /*cast AModule*/;
  if (!UNTAG_Bool(variable9)) { fprintf(stderr, "Assert failed: src/syntax//syntax.nit:45,3--32\n"); nit_exit(1);}
  variable10 = NEW_syntax_base___MMSrcModule___init( variable0 /*context*/,  variable8 /*node_module*/,  variable4 /*dir*/,  variable3 /*name*/); /*new MMSrcModule*/
  variable9 = variable10;
  variable5 =  variable9 /*module*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable5;
}
void syntax___SrcModuleLoader___process_metamodel(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "syntax::SrcModuleLoader::process_metamodel (src/syntax//syntax.nit:52,2--55:31)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  ((syntax___MMSrcModule___process_supermodules_t)CALL( variable1 /*module*/,COLOR_syntax___MMSrcModule___process_supermodules))( variable1 /*module*/,  variable0 /*context*/) /*MMSrcModule::process_supermodules*/;
  ((syntax___MMSrcModule___process_syntax_t)CALL( variable1 /*module*/,COLOR_syntax___MMSrcModule___process_syntax))( variable1 /*module*/,  variable0 /*context*/) /*MMSrcModule::process_syntax*/;
  tracehead = trace.prev;
  return;
}
void syntax___SrcModuleLoader___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "syntax::SrcModuleLoader::init (src/syntax//syntax.nit:58,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_SrcModuleLoader].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_SrcModuleLoader].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t syntax___MMContext___tc(val_t  self) {
  struct trace_t trace = {NULL, "syntax::MMContext::tc (src/syntax//syntax.nit:62,2--63:47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax___MMContext____tc( self) /*MMContext::_tc*/;
}
void syntax___MMContext___tc__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax::MMContext::tc= (src/syntax//syntax.nit:62,2--63:47)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax___MMContext____tc( self) /*MMContext::_tc*/ =  param0;
  tracehead = trace.prev;
  return;
}
void syntax___MMSrcModule___process_supermodules(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax::MMSrcModule::process_supermodules (src/syntax//syntax.nit:67,2--70:36)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((syntax_base___MMSrcModule___node_t)CALL( self,COLOR_syntax_base___MMSrcModule___node))( self) /*MMSrcModule::node*/;
  ((mmbuilder___AModule___import_super_modules_t)CALL(variable1,COLOR_mmbuilder___AModule___import_super_modules))(variable1,  variable0 /*tc*/,  self) /*AModule::import_super_modules*/;
  tracehead = trace.prev;
  return;
}
void syntax___MMSrcModule___process_syntax(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax::MMSrcModule::process_syntax (src/syntax//syntax.nit:74,2--85:35)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___MMSrcModule___do_mmbuilder_t)CALL( self,COLOR_mmbuilder___MMSrcModule___do_mmbuilder))( self,  variable0 /*tc*/) /*MMSrcModule::do_mmbuilder*/;
  variable1 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  ((control_flow___MMSrcModule___do_control_flow_t)CALL( self,COLOR_control_flow___MMSrcModule___do_control_flow))( self,  variable0 /*tc*/) /*MMSrcModule::do_control_flow*/;
  variable1 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  ((typing___MMSrcModule___do_typing_t)CALL( self,COLOR_typing___MMSrcModule___do_typing))( self,  variable0 /*tc*/) /*MMSrcModule::do_typing*/;
  variable1 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  tracehead = trace.prev;
  return;
}
