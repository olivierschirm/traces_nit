#include "nitc._sep.h"
val_t nitc___NitCompiler___opt_output(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_output (src/nitc.nit:26,2--91)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_output( self) /*NitCompiler::_opt_output*/;
}
val_t nitc___NitCompiler___opt_boost(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_boost (src/nitc.nit:27,2--94)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_boost( self) /*NitCompiler::_opt_boost*/;
}
val_t nitc___NitCompiler___opt_no_cc(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_no_cc (src/nitc.nit:28,2--92)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_no_cc( self) /*NitCompiler::_opt_no_cc*/;
}
val_t nitc___NitCompiler___opt_attr_sim(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_attr_sim (src/nitc.nit:29,2--98)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_attr_sim( self) /*NitCompiler::_opt_attr_sim*/;
}
val_t nitc___NitCompiler___opt_global(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_global (src/nitc.nit:30,2--92)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_global( self) /*NitCompiler::_opt_global*/;
}
val_t nitc___NitCompiler___opt_clibdir(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_clibdir (src/nitc.nit:31,2--99)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_clibdir( self) /*NitCompiler::_opt_clibdir*/;
}
val_t nitc___NitCompiler___opt_bindir(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_bindir (src/nitc.nit:32,2--93)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_bindir( self) /*NitCompiler::_opt_bindir*/;
}
val_t nitc___NitCompiler___opt_extension_prefix(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::opt_extension_prefix (src/nitc.nit:33,2--131)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_nitc___NitCompiler____opt_extension_prefix( self) /*NitCompiler::_opt_extension_prefix*/;
}
void nitc___NitCompiler___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::init (src/nitc.nit:35,2--38:133)"};
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
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_NitCompiler].i]) return;
  ((abstracttool___AbstractCompiler___init_t)CALL( self,COLOR_abstracttool___AbstractCompiler___init))( self, init_table /*YYY*/) /*AbstractCompiler::init*/;
  variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*NitCompiler::option_context*/;
  variable1 = NEW_array___Array___with_capacity(TAG_Int(8)); /*new Array[Option]*/
  variable2 = ((nitc___NitCompiler___opt_output_t)CALL( self,COLOR_nitc___NitCompiler___opt_output))( self) /*NitCompiler::opt_output*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable2) /*Array::add*/;
  variable3 = ((nitc___NitCompiler___opt_boost_t)CALL( self,COLOR_nitc___NitCompiler___opt_boost))( self) /*NitCompiler::opt_boost*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable3) /*Array::add*/;
  variable4 = ((nitc___NitCompiler___opt_no_cc_t)CALL( self,COLOR_nitc___NitCompiler___opt_no_cc))( self) /*NitCompiler::opt_no_cc*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable4) /*Array::add*/;
  variable5 = ((nitc___NitCompiler___opt_attr_sim_t)CALL( self,COLOR_nitc___NitCompiler___opt_attr_sim))( self) /*NitCompiler::opt_attr_sim*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable5) /*Array::add*/;
  variable6 = ((nitc___NitCompiler___opt_global_t)CALL( self,COLOR_nitc___NitCompiler___opt_global))( self) /*NitCompiler::opt_global*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable6) /*Array::add*/;
  variable7 = ((nitc___NitCompiler___opt_clibdir_t)CALL( self,COLOR_nitc___NitCompiler___opt_clibdir))( self) /*NitCompiler::opt_clibdir*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable7) /*Array::add*/;
  variable8 = ((nitc___NitCompiler___opt_bindir_t)CALL( self,COLOR_nitc___NitCompiler___opt_bindir))( self) /*NitCompiler::opt_bindir*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable8) /*Array::add*/;
  variable9 = ((nitc___NitCompiler___opt_extension_prefix_t)CALL( self,COLOR_nitc___NitCompiler___opt_extension_prefix))( self) /*NitCompiler::opt_extension_prefix*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable9) /*Array::add*/;
  ((opts___OptionContext___add_option_t)CALL(variable0,COLOR_opts___OptionContext___add_option))(variable0, variable1) /*OptionContext::add_option*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_NitCompiler].i] = 1;
  tracehead = trace.prev;
  return;
}
void nitc___NitCompiler___process_options(val_t  self) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::process_options (src/nitc.nit:41,2--80:10)"};
  val_t variable0;
  val_t variable1;
    static val_t once_value_variable1_2; static int once_bool_variable1_2;
      val_t variable2;
      val_t variable3;
      val_t variable4;
      val_t variable5;
      val_t variable6;
      val_t variable7;
      val_t variable8;
    static val_t once_value_variable1_3; static int once_bool_variable1_3;
  trace.prev = tracehead; tracehead = &trace;
  ((nitc___NitCompiler___process_options_t)CALL( self,COLOR_SUPER_nitc___NitCompiler___process_options))( self) /*super NitCompiler::process_options*/;
  variable0 = NEW_mmloader___ToolContext___init(); /*new ToolContext*/
  ((syntax___MMContext___tc__eq_t)CALL( self,COLOR_syntax___MMContext___tc__eq))( self, variable0) /*NitCompiler::tc=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_output_t)CALL( self,COLOR_nitc___NitCompiler___opt_output))( self) /*NitCompiler::opt_output*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionString::value*/;
  ((compiling_base___ToolContext___output_file__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___output_file__eq))(variable0, variable1) /*ToolContext::output_file=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_boost_t)CALL( self,COLOR_nitc___NitCompiler___opt_boost))( self) /*NitCompiler::opt_boost*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionBool::value*/;
  ((compiling_base___ToolContext___boost__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___boost__eq))(variable0, variable1) /*ToolContext::boost=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_no_cc_t)CALL( self,COLOR_nitc___NitCompiler___opt_no_cc))( self) /*NitCompiler::opt_no_cc*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionBool::value*/;
  ((compiling_base___ToolContext___no_cc__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___no_cc__eq))(variable0, variable1) /*ToolContext::no_cc=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_extension_prefix_t)CALL( self,COLOR_nitc___NitCompiler___opt_extension_prefix))( self) /*NitCompiler::opt_extension_prefix*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionString::value*/;
  ((compiling_base___ToolContext___ext_prefix__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___ext_prefix__eq))(variable0, variable1) /*ToolContext::ext_prefix=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable0 = ((compiling_base___ToolContext___ext_prefix_t)CALL(variable0,COLOR_compiling_base___ToolContext___ext_prefix))(variable0) /*ToolContext::ext_prefix*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*String::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
    variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    ((compiling_base___ToolContext___ext_prefix__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___ext_prefix__eq))(variable0, variable1) /*ToolContext::ext_prefix=*/;
  }
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_attr_sim_t)CALL( self,COLOR_nitc___NitCompiler___opt_attr_sim))( self) /*NitCompiler::opt_attr_sim*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionBool::value*/;
  ((compiling_base___ToolContext___attr_sim__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___attr_sim__eq))(variable0, variable1) /*ToolContext::attr_sim=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_global_t)CALL( self,COLOR_nitc___NitCompiler___opt_global))( self) /*NitCompiler::opt_global*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionBool::value*/;
  ((compiling_base___ToolContext___global__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___global__eq))(variable0, variable1) /*ToolContext::global=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString(".nit_compile"), TAG_Int(12)); /*new String*/
  ((compiling_base___ToolContext___base_dir__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___base_dir__eq))(variable0, variable1) /*ToolContext::base_dir=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_clibdir_t)CALL( self,COLOR_nitc___NitCompiler___opt_clibdir))( self) /*NitCompiler::opt_clibdir*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionString::value*/;
  ((compiling_base___ToolContext___clibdir__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___clibdir__eq))(variable0, variable1) /*ToolContext::clibdir=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable0 = ((compiling_base___ToolContext___clibdir_t)CALL(variable0,COLOR_compiling_base___ToolContext___clibdir))(variable0) /*ToolContext::clibdir*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*String::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    if (once_bool_variable1_2) variable1 = once_value_variable1_2;
    else {
      variable1 = NEW_string___String___with_native(BOX_NativeString("NIT_DIR"), TAG_Int(7)); /*new String*/
      variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
      variable1 = ((environ___Symbol___environ_t)CALL(variable1,COLOR_environ___Symbol___environ))(variable1) /*Symbol::environ*/;
      once_value_variable1_2 = variable1;
      once_bool_variable1_2 = true;
    }
    variable0 = variable1;
    variable1 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*dir*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*dir*/) /*String::is_empty*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable2 = NEW_string___String___init(); /*new String*/
      variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable4 = variable3;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
      variable5 = (G_sys);
      variable5 = ((string___Sys___program_name_t)CALL(variable5,COLOR_string___Sys___program_name))(variable5) /*Sys::program_name*/;
      variable5 = ((file___String___dirname_t)CALL(variable5,COLOR_file___String___dirname))(variable5) /*String::dirname*/;
      variable6 = variable5;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString("/../lib"), TAG_Int(7)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
      variable1 = variable2;
      variable2 = ((file___String___file_exists_t)CALL( variable1 /*dir*/,COLOR_file___String___file_exists))( variable1 /*dir*/) /*String::file_exists*/;
      if (UNTAG_Bool(variable2)) { /*if*/
        variable2 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
        ((compiling_base___ToolContext___clibdir__eq_t)CALL(variable2,COLOR_compiling_base___ToolContext___clibdir__eq))(variable2,  variable1 /*dir*/) /*ToolContext::clibdir=*/;
      }
    } else { /*if*/
      variable1 = NEW_string___String___init(); /*new String*/
      variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable3 = variable2;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
      variable4 =  variable0 /*dir*/;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
      variable5 = NEW_string___String___with_native(BOX_NativeString("/lib"), TAG_Int(4)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
      variable0 = variable1 /*dir=*/;
      variable1 = ((file___String___file_exists_t)CALL( variable0 /*dir*/,COLOR_file___String___file_exists))( variable0 /*dir*/) /*String::file_exists*/;
      if (UNTAG_Bool(variable1)) { /*if*/
        variable1 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
        ((compiling_base___ToolContext___clibdir__eq_t)CALL(variable1,COLOR_compiling_base___ToolContext___clibdir__eq))(variable1,  variable0 /*dir*/) /*ToolContext::clibdir=*/;
      }
    }
    variable1 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
    variable1 = ((compiling_base___ToolContext___clibdir_t)CALL(variable1,COLOR_compiling_base___ToolContext___clibdir))(variable1) /*ToolContext::clibdir*/;
    variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*String::==*/)));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 = NEW_string___String___with_native(BOX_NativeString("Error: Cannot locate NIT C library directory. Uses --clibdir or envvar NIT_DIR."), TAG_Int(79)); /*new String*/
      ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable1) /*NitCompiler::error*/;
      exit(UNTAG_Int( TAG_Int(1)));
    }
  }
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable1 = ((nitc___NitCompiler___opt_bindir_t)CALL( self,COLOR_nitc___NitCompiler___opt_bindir))( self) /*NitCompiler::opt_bindir*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionString::value*/;
  ((compiling_base___ToolContext___bindir__eq_t)CALL(variable0,COLOR_compiling_base___ToolContext___bindir__eq))(variable0, variable1) /*ToolContext::bindir=*/;
  variable0 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
  variable0 = ((compiling_base___ToolContext___bindir_t)CALL(variable0,COLOR_compiling_base___ToolContext___bindir))(variable0) /*ToolContext::bindir*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*String::==*/)));
  if (UNTAG_Bool(variable0)) { /*if*/
    if (once_bool_variable1_3) variable1 = once_value_variable1_3;
    else {
      variable1 = NEW_string___String___with_native(BOX_NativeString("NIT_DIR"), TAG_Int(7)); /*new String*/
      variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
      variable1 = ((environ___Symbol___environ_t)CALL(variable1,COLOR_environ___Symbol___environ))(variable1) /*Symbol::environ*/;
      once_value_variable1_3 = variable1;
      once_bool_variable1_3 = true;
    }
    variable0 = variable1;
    variable1 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*dir*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*dir*/) /*String::is_empty*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable2 = NEW_string___String___init(); /*new String*/
      variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable4 = variable3;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
      variable5 = (G_sys);
      variable5 = ((string___Sys___program_name_t)CALL(variable5,COLOR_string___Sys___program_name))(variable5) /*Sys::program_name*/;
      variable5 = ((file___String___dirname_t)CALL(variable5,COLOR_file___String___dirname))(variable5) /*String::dirname*/;
      variable6 = variable5;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString("/../bin"), TAG_Int(7)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
      variable1 = variable2;
      variable2 = ((file___String___file_exists_t)CALL( variable1 /*dir*/,COLOR_file___String___file_exists))( variable1 /*dir*/) /*String::file_exists*/;
      if (UNTAG_Bool(variable2)) { /*if*/
        variable2 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
        ((compiling_base___ToolContext___bindir__eq_t)CALL(variable2,COLOR_compiling_base___ToolContext___bindir__eq))(variable2,  variable1 /*dir*/) /*ToolContext::bindir=*/;
      }
    } else { /*if*/
      variable1 = NEW_string___String___init(); /*new String*/
      variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable3 = variable2;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
      variable4 =  variable0 /*dir*/;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
      variable5 = NEW_string___String___with_native(BOX_NativeString("/bin"), TAG_Int(4)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
      variable0 = variable1 /*dir=*/;
      variable1 = ((file___String___file_exists_t)CALL( variable0 /*dir*/,COLOR_file___String___file_exists))( variable0 /*dir*/) /*String::file_exists*/;
      if (UNTAG_Bool(variable1)) { /*if*/
        variable1 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
        ((compiling_base___ToolContext___bindir__eq_t)CALL(variable1,COLOR_compiling_base___ToolContext___bindir__eq))(variable1,  variable0 /*dir*/) /*ToolContext::bindir=*/;
      }
    }
    variable1 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
    variable1 = ((compiling_base___ToolContext___bindir_t)CALL(variable1,COLOR_compiling_base___ToolContext___bindir))(variable1) /*ToolContext::bindir*/;
    variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*String::==*/)));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 = NEW_string___String___with_native(BOX_NativeString("Error: Cannot locate NIT tools directory. Uses --bindir or envvar NIT_DIR."), TAG_Int(74)); /*new String*/
      ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable1) /*NitCompiler::error*/;
      exit(UNTAG_Int( TAG_Int(1)));
    }
  }
  tracehead = trace.prev;
  return;
}
void nitc___NitCompiler___perform_work(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "nitc::NitCompiler::perform_work (src/nitc.nit:85,2--89:27)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___iterator_t)CALL( variable0 /*mods*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*mods*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = TAG_Bool(( variable2 /*mod*/==NIT_NULL) || VAL_ISA( variable2 /*mod*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/nitc.nit:88,4--29\n"); nit_exit(1);}
    variable3 = ((syntax___MMContext___tc_t)CALL( self,COLOR_syntax___MMContext___tc))( self) /*NitCompiler::tc*/;
    ((compiling___MMSrcModule___compile_prog_to_c_t)CALL( variable2 /*mod*/,COLOR_compiling___MMSrcModule___compile_prog_to_c))( variable2 /*mod*/, variable3) /*MMSrcModule::compile_prog_to_c*/;
    continue_5: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_5: while(0);
  tracehead = trace.prev;
  return;
}
void nitc___Sys___main(val_t  self) {
  struct trace_t trace = {NULL, "nitc::Sys::main (src/nitc.nit:95,1--96:15)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_nitc___NitCompiler___init(); /*new NitCompiler*/
  variable0 = variable1;
  ((abstracttool___AbstractCompiler___exec_cmd_line_t)CALL( variable0 /*c*/,COLOR_abstracttool___AbstractCompiler___exec_cmd_line))( variable0 /*c*/) /*NitCompiler::exec_cmd_line*/;
  tracehead = trace.prev;
  return;
}
