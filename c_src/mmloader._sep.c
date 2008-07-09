#include "mmloader._sep.h"
val_t mmloader___ToolContext___error_count(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::error_count (src/mmloader.nit:27,2--28:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____error_count( self) /*ToolContext::_error_count*/;
}
val_t mmloader___ToolContext___warning_count(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::warning_count (src/mmloader.nit:30,2--31:34)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____warning_count( self) /*ToolContext::_warning_count*/;
}
void mmloader___ToolContext___error(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::error (src/mmloader.nit:33,2--37:33)"};
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
  variable1 = ((file___Object___stderr_t)CALL( self,COLOR_file___Object___stderr))( self) /*ToolContext::stderr*/;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable0 /*s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((file___OFStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1, variable2) /*OFStream::write*/;
  variable1 = ATTR_mmloader___ToolContext____error_count( self) /*ToolContext::_error_count*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1)));
  ATTR_mmloader___ToolContext____error_count( self) /*ToolContext::_error_count*/ = variable1;
  tracehead = trace.prev;
  return;
}
void mmloader___ToolContext___warning(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::warning (src/mmloader.nit:40,2--45:37)"};
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
  variable1 = ATTR_mmloader___ToolContext____opt_warn( self) /*ToolContext::_opt_warn*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionBool::value*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    goto return_label1;
  }
  variable1 = ((file___Object___stderr_t)CALL( self,COLOR_file___Object___stderr))( self) /*ToolContext::stderr*/;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable0 /*s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  ((file___OFStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1, variable2) /*OFStream::write*/;
  variable1 = ATTR_mmloader___ToolContext____warning_count( self) /*ToolContext::_warning_count*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1)));
  ATTR_mmloader___ToolContext____warning_count( self) /*ToolContext::_warning_count*/ = variable1;
  return_label1: while(false);
  tracehead = trace.prev;
  return;
}
val_t mmloader___ToolContext___paths(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::paths (src/mmloader.nit:48,2--49:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____paths( self) /*ToolContext::_paths*/;
}
val_t mmloader___ToolContext___option_context(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::option_context (src/mmloader.nit:54,2--55:65)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____option_context( self) /*ToolContext::_option_context*/;
}
val_t mmloader___ToolContext___opt_warn(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_warn (src/mmloader.nit:57,2--58:85)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_warn( self) /*ToolContext::_opt_warn*/;
}
val_t mmloader___ToolContext___opt_path(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_path (src/mmloader.nit:60,2--61:131)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_path( self) /*ToolContext::_opt_path*/;
}
val_t mmloader___ToolContext___opt_log(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_log (src/mmloader.nit:63,2--64:90)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_log( self) /*ToolContext::_opt_log*/;
}
val_t mmloader___ToolContext___opt_only_metamodel(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_only_metamodel (src/mmloader.nit:66,2--67:118)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_only_metamodel( self) /*ToolContext::_opt_only_metamodel*/;
}
val_t mmloader___ToolContext___opt_only_parse(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_only_parse (src/mmloader.nit:69,2--70:115)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_only_parse( self) /*ToolContext::_opt_only_parse*/;
}
val_t mmloader___ToolContext___opt_help(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::opt_help (src/mmloader.nit:72,2--73:101)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___ToolContext____opt_help( self) /*ToolContext::_opt_help*/;
}
void mmloader___ToolContext___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::init (src/mmloader.nit:75,2--78:102)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ToolContext].i]) return;
  ((abstractmetamodel___MMContext___init_t)CALL( self,COLOR_abstractmetamodel___MMContext___init))( self, init_table /*YYY*/) /*MMContext::init*/;
  variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*ToolContext::option_context*/;
  variable1 = NEW_array___Array___with_capacity(TAG_Int(6)); /*new Array[Option]*/
  variable2 = ((mmloader___ToolContext___opt_warn_t)CALL( self,COLOR_mmloader___ToolContext___opt_warn))( self) /*ToolContext::opt_warn*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable2) /*Array::add*/;
  variable3 = ((mmloader___ToolContext___opt_path_t)CALL( self,COLOR_mmloader___ToolContext___opt_path))( self) /*ToolContext::opt_path*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable3) /*Array::add*/;
  variable4 = ((mmloader___ToolContext___opt_log_t)CALL( self,COLOR_mmloader___ToolContext___opt_log))( self) /*ToolContext::opt_log*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable4) /*Array::add*/;
  variable5 = ((mmloader___ToolContext___opt_only_parse_t)CALL( self,COLOR_mmloader___ToolContext___opt_only_parse))( self) /*ToolContext::opt_only_parse*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable5) /*Array::add*/;
  variable6 = ((mmloader___ToolContext___opt_only_metamodel_t)CALL( self,COLOR_mmloader___ToolContext___opt_only_metamodel))( self) /*ToolContext::opt_only_metamodel*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable6) /*Array::add*/;
  variable7 = ((mmloader___ToolContext___opt_help_t)CALL( self,COLOR_mmloader___ToolContext___opt_help))( self) /*ToolContext::opt_help*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1, variable7) /*Array::add*/;
  ((opts___OptionContext___add_option_t)CALL(variable0,COLOR_opts___OptionContext___add_option))(variable0, variable1) /*OptionContext::add_option*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ToolContext].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmloader___ToolContext___process_options(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::process_options (src/mmloader.nit:81,2--103:47)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_4; static int once_bool_variable1_4;
    val_t variable2;
  static val_t once_value_variable1_5; static int once_bool_variable1_5;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
    val_t variable7;
  val_t variable8;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*ToolContext::option_context*/;
  variable1 = ((string___Object___args_t)CALL( self,COLOR_string___Object___args))( self) /*ToolContext::args*/;
  ((opts___OptionContext___parse_t)CALL(variable0,COLOR_opts___OptionContext___parse))(variable0, variable1) /*OptionContext::parse*/;
  variable0 = NEW_array___Array___init(); /*new Array[String]*/
  ATTR_mmloader___ToolContext____paths( self) /*ToolContext::_paths*/ = variable0;
  variable0 = ((mmloader___ToolContext___paths_t)CALL( self,COLOR_mmloader___ToolContext___paths))( self) /*ToolContext::paths*/;
  variable1 = ((mmloader___ToolContext___opt_path_t)CALL( self,COLOR_mmloader___ToolContext___opt_path))( self) /*ToolContext::opt_path*/;
  variable1 = ((opts___Option___value_t)CALL(variable1,COLOR_opts___Option___value))(variable1) /*OptionArray::value*/;
  ((abstract_collection___IndexedCollection___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable1) /*Array::append*/;
  if (once_bool_variable1_4) variable1 = once_value_variable1_4;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("NIT_PATH"), TAG_Int(8)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    variable1 = ((environ___Symbol___environ_t)CALL(variable1,COLOR_environ___Symbol___environ))(variable1) /*Symbol::environ*/;
    once_value_variable1_4 = variable1;
    once_bool_variable1_4 = true;
  }
  variable0 = variable1;
  variable1 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*path_env*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*path_env*/) /*String::is_empty*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = ((mmloader___ToolContext___paths_t)CALL( self,COLOR_mmloader___ToolContext___paths))( self) /*ToolContext::paths*/;
    variable2 = ((string_search___String___split_with_t)CALL( variable0 /*path_env*/,COLOR_string_search___String___split_with))( variable0 /*path_env*/,  TAG_Char(':')) /*String::split_with*/;
    ((abstract_collection___IndexedCollection___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable2) /*Array::append*/;
  }
  if (once_bool_variable1_5) variable1 = once_value_variable1_5;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("NIT_DIR"), TAG_Int(7)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    variable1 = ((environ___Symbol___environ_t)CALL(variable1,COLOR_environ___Symbol___environ))(variable1) /*Symbol::environ*/;
    once_value_variable1_5 = variable1;
    once_bool_variable1_5 = true;
  }
  variable0 = variable1 /*path_env=*/;
  variable1 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*path_env*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*path_env*/) /*String::is_empty*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 =  variable0 /*path_env*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString("/lib"), TAG_Int(4)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
    variable1 = variable2;
    variable2 = ((file___String___file_exists_t)CALL( variable1 /*libname*/,COLOR_file___String___file_exists))( variable1 /*libname*/) /*String::file_exists*/;
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((mmloader___ToolContext___paths_t)CALL( self,COLOR_mmloader___ToolContext___paths))( self) /*ToolContext::paths*/;
      ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable1 /*libname*/) /*Array::add*/;
    }
  }
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
  variable2 = ((file___String___file_exists_t)CALL( variable1 /*libname*/,COLOR_file___String___file_exists))( variable1 /*libname*/) /*String::file_exists*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((mmloader___ToolContext___paths_t)CALL( self,COLOR_mmloader___ToolContext___paths))( self) /*ToolContext::paths*/;
    ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable1 /*libname*/) /*Array::add*/;
  }
  tracehead = trace.prev;
  return;
}
val_t mmloader___ToolContext___try_to_load(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::try_to_load (src/mmloader.nit:106,2--145:13)"};
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
  variable1 =  param1;
  variable2 = ((abstractmetamodel___MMDirectory___modules_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___modules))( variable1 /*dir*/) /*MMDirectory::modules*/;
  variable2 = ((abstract_collection___Map___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Map::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*MapIterator::item*/;
    variable4 = ((abstractmetamodel___MMModule___name_t)CALL( variable3 /*m*/,COLOR_abstractmetamodel___MMModule___name))( variable3 /*m*/) /*MMModule::name*/;
    variable4 = TAG_Bool((variable4 ==  variable0 /*module_name*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*module_name*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*module_name*/) /*Symbol::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable2 =  variable3 /*m*/;
      goto return_label6;
    }
    continue_7: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*MapIterator::next*/;
  }
  break_7: while(0);
  variable2 = ATTR_mmloader___ToolContext____loaders( self) /*ToolContext::_loaders*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable5 = ((mmloader___ModuleLoader___try_to_load_dir_t)CALL( variable3 /*l*/,COLOR_mmloader___ModuleLoader___try_to_load_dir))( variable3 /*l*/,  variable0 /*module_name*/,  variable1 /*dir*/) /*ModuleLoader::try_to_load_dir*/;
    variable4 = variable5;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*dir2*/ ==  NIT_NULL /*null*/) || (( variable4 /*dir2*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*dir2*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*dir2*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*dir2*/,COLOR_kernel___Object_____eqeq))( variable4 /*dir2*/,  NIT_NULL /*null*/) /*MMDirectory::==*/)))))));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable6 = ((mmloader___ToolContext___try_to_load_t)CALL( self,COLOR_mmloader___ToolContext___try_to_load))( self,  variable0 /*module_name*/,  variable4 /*dir2*/) /*ToolContext::try_to_load*/;
      variable5 = variable6;
      variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*m*/ ==  NIT_NULL /*null*/) || (( variable5 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*m*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*m*/,COLOR_kernel___Object_____eqeq))( variable5 /*m*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
      if (UNTAG_Bool(variable6)) { /*if*/
        ((abstractmetamodel___MMDirectory___owner__eq_t)CALL( variable4 /*dir2*/,COLOR_abstractmetamodel___MMDirectory___owner__eq))( variable4 /*dir2*/,  variable5 /*m*/) /*MMDirectory::owner=*/;
        ((abstractmetamodel___MMDirectory___add_module_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___add_module))( variable1 /*dir*/,  variable5 /*m*/) /*MMDirectory::add_module*/;
        variable2 =  variable5 /*m*/;
        goto return_label6;
      }
    }
    variable5 = ((mmloader___ModuleLoader___can_handle_t)CALL( variable3 /*l*/,COLOR_mmloader___ModuleLoader___can_handle))( variable3 /*l*/,  variable0 /*module_name*/,  variable1 /*dir*/) /*ModuleLoader::can_handle*/;
    if (UNTAG_Bool(variable5)) { /*if*/
      variable6 = ((abstractmetamodel___MMDirectory___full_name_for_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___full_name_for))( variable1 /*dir*/,  variable0 /*module_name*/) /*MMDirectory::full_name_for*/;
      variable5 = variable6;
      variable6 = ATTR_mmloader___ToolContext____processing_modules( self) /*ToolContext::_processing_modules*/;
      variable6 = ((hash___HashSet___has_t)CALL(variable6,COLOR_abstract_collection___Collection___has))(variable6,  variable5 /*full_name*/) /*HashSet::has*/;
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Dependency loop for module "), TAG_Int(34)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  variable5 /*full_name*/;
        variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
        variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
        variable11 = variable10;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
        ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable6) /*ToolContext::error*/;
        exit(UNTAG_Int( TAG_Int(1)));
        fprintf(stderr, "Aborted: src/mmloader.nit:135,6--10\n"); nit_exit(1);
      }
      variable6 = ATTR_mmloader___ToolContext____processing_modules( self) /*ToolContext::_processing_modules*/;
      ((hash___HashSet___add_t)CALL(variable6,COLOR_abstract_collection___SimpleCollection___add))(variable6,  variable5 /*full_name*/) /*HashSet::add*/;
      variable7 = ((mmloader___ModuleLoader___load_and_process_module_t)CALL( variable3 /*l*/,COLOR_mmloader___ModuleLoader___load_and_process_module))( variable3 /*l*/,  self,  variable0 /*module_name*/,  variable1 /*dir*/) /*ModuleLoader::load_and_process_module*/;
      variable6 = variable7;
      variable7 = ATTR_mmloader___ToolContext____processing_modules( self) /*ToolContext::_processing_modules*/;
      ((hash___HashSet___remove_t)CALL(variable7,COLOR_abstract_collection___RemovableCollection___remove))(variable7,  variable5 /*full_name*/) /*HashSet::remove*/;
      ((abstractmetamodel___MMDirectory___add_module_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___add_module))( variable1 /*dir*/,  variable6 /*m*/) /*MMDirectory::add_module*/;
      variable2 =  variable6 /*m*/;
      goto return_label6;
    }
    continue_8: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_8: while(0);
  variable2 =  NIT_NULL /*null*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t mmloader___ToolContext___get_module_from_filename(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::get_module_from_filename (src/mmloader.nit:152,2--184:7)"};
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
  variable2 = ((file___String___dirname_t)CALL( variable0 /*filename*/,COLOR_file___String___dirname))( variable0 /*filename*/) /*String::dirname*/;
  variable1 = variable2;
  variable3 = NEW_string___String___with_native(BOX_NativeString(".nit"), TAG_Int(4)); /*new String*/
  variable3 = ((file___String___basename_t)CALL( variable0 /*filename*/,COLOR_file___String___basename))( variable0 /*filename*/, variable3) /*String::basename*/;
  variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
  variable2 = variable3;
  variable4 = ((mmloader___ToolContext___directory_for_t)CALL( self,COLOR_mmloader___ToolContext___directory_for))( self,  variable1 /*path*/) /*ToolContext::directory_for*/;
  variable3 = variable4;
  variable4 = ((symbol___Symbol___to_s_t)CALL( variable2 /*module_name*/,COLOR_string___Object___to_s))( variable2 /*module_name*/) /*Symbol::to_s*/;
  variable4 = TAG_Bool((variable4 ==  variable0 /*filename*/) || ((variable4 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*filename*/) /*String::==*/)));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable5 = ((mmloader___ToolContext___try_to_load_t)CALL( self,COLOR_mmloader___ToolContext___try_to_load))( self,  variable2 /*module_name*/,  variable3 /*dir*/) /*ToolContext::try_to_load*/;
    variable4 = variable5;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*m*/ ==  NIT_NULL /*null*/) || (( variable4 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*m*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))( variable4 /*m*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable1 =  variable4 /*m*/;
      goto return_label9;
    }
    variable5 = ((mmloader___ToolContext___get_module_t)CALL( self,COLOR_mmloader___ToolContext___get_module))( self,  variable2 /*module_name*/,  NIT_NULL /*null*/) /*ToolContext::get_module*/;
    variable1 = variable5;
    goto return_label9;
  }
  variable4 = ((file___String___file_exists_t)CALL( variable0 /*filename*/,COLOR_file___String___file_exists))( variable0 /*filename*/) /*String::file_exists*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Error: File "), TAG_Int(12)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable0 /*filename*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" not found."), TAG_Int(11)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable4) /*ToolContext::error*/;
    exit(UNTAG_Int( TAG_Int(1)));
    fprintf(stderr, "Aborted: src/mmloader.nit:175,4--8\n"); nit_exit(1);
  }
  variable5 = ((mmloader___ToolContext___try_to_load_t)CALL( self,COLOR_mmloader___ToolContext___try_to_load))( self,  variable2 /*module_name*/,  variable3 /*dir*/) /*ToolContext::try_to_load*/;
  variable4 = variable5;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*m*/ ==  NIT_NULL /*null*/) || (( variable4 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*m*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))( variable4 /*m*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable1 =  variable4 /*m*/;
    goto return_label9;
  }
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString("Error: "), TAG_Int(7)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 =  variable0 /*filename*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(" is not a NIT source module."), TAG_Int(28)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
  ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable5) /*ToolContext::error*/;
  exit(UNTAG_Int( TAG_Int(1)));
  fprintf(stderr, "Aborted: src/mmloader.nit:184,3--7\n"); nit_exit(1);
  return_label9: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t mmloader___ToolContext___get_module(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::get_module (src/mmloader.nit:187,2--208:7)"};
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
  variable1 =  param1;
  variable2 = NIT_NULL /*decl variable m*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*from*/ ==  NIT_NULL /*null*/) || (( variable1 /*from*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*from*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*from*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*from*/,COLOR_kernel___Object_____eqeq))( variable1 /*from*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable4 = ((abstractmetamodel___MMModule___directory_t)CALL( variable1 /*from*/,COLOR_abstractmetamodel___MMModule___directory))( variable1 /*from*/) /*MMModule::directory*/;
    variable3 = variable4;
    while (true) { /*while*/
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*dir*/ ==  NIT_NULL /*null*/) || (( variable3 /*dir*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*dir*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*dir*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*dir*/,COLOR_kernel___Object_____eqeq))( variable3 /*dir*/,  NIT_NULL /*null*/) /*MMDirectory::==*/)))))));
      if (!UNTAG_Bool(variable4)) break; /* while*/
      variable5 = ((mmloader___ToolContext___try_to_load_t)CALL( self,COLOR_mmloader___ToolContext___try_to_load))( self,  variable0 /*module_name*/,  variable3 /*dir*/) /*ToolContext::try_to_load*/;
      variable4 = variable5;
      variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*m*/ ==  NIT_NULL /*null*/) || (( variable4 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*m*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*m*/,COLOR_kernel___Object_____eqeq))( variable4 /*m*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
      if (UNTAG_Bool(variable5)) { /*if*/
        variable2 =  variable4 /*m*/;
        goto return_label10;
      }
      variable5 = ((abstractmetamodel___MMDirectory___parent_t)CALL( variable3 /*dir*/,COLOR_abstractmetamodel___MMDirectory___parent))( variable3 /*dir*/) /*MMDirectory::parent*/;
      variable3 = variable5 /*dir=*/;
      continue_11: while(0);
    }
    break_11: while(0);
  }
  variable3 = ((mmloader___ToolContext___paths_t)CALL( self,COLOR_mmloader___ToolContext___paths))( self) /*ToolContext::paths*/;
  variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable6 = ((mmloader___ToolContext___directory_for_t)CALL( self,COLOR_mmloader___ToolContext___directory_for))( self,  variable4 /*p*/) /*ToolContext::directory_for*/;
    variable6 = ((mmloader___ToolContext___try_to_load_t)CALL( self,COLOR_mmloader___ToolContext___try_to_load))( self,  variable0 /*module_name*/, variable6) /*ToolContext::try_to_load*/;
    variable5 = variable6;
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*m*/ ==  NIT_NULL /*null*/) || (( variable5 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*m*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*m*/,COLOR_kernel___Object_____eqeq))( variable5 /*m*/,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable2 =  variable5 /*m*/;
      goto return_label10;
    }
    continue_12: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_12: while(0);
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("Error: No ressource found for module "), TAG_Int(37)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable0 /*module_name*/;
  variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  ((mmloader___ToolContext___error_t)CALL( self,COLOR_mmloader___ToolContext___error))( self, variable3) /*ToolContext::error*/;
  exit(UNTAG_Int( TAG_Int(1)));
  fprintf(stderr, "Aborted: src/mmloader.nit:208,3--7\n"); nit_exit(1);
  return_label10: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t mmloader___ToolContext___directory_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::directory_for (src/mmloader.nit:211,2--217:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_mmloader___ToolContext____path_dirs( self) /*ToolContext::_path_dirs*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*path*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_mmloader___ToolContext____path_dirs( self) /*ToolContext::_path_dirs*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*path*/) /*Map::[]*/;
    goto return_label13;
  }
  variable2 = ((symbol___String___to_symbol_t)CALL( variable0 /*path*/,COLOR_symbol___String___to_symbol))( variable0 /*path*/) /*String::to_symbol*/;
  variable3 = NEW_abstractmetamodel___MMDirectory___init(variable2,  variable0 /*path*/,  NIT_NULL /*null*/); /*new MMDirectory*/
  variable2 = variable3;
  variable1 = variable2;
  variable2 = ATTR_mmloader___ToolContext____path_dirs( self) /*ToolContext::_path_dirs*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable2,COLOR_abstract_collection___Map_____braeq))(variable2,  variable0 /*path*/,  variable1 /*dir*/) /*Map::[]=*/;
  variable1 =  variable1 /*dir*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable1;
}
void mmloader___ToolContext___register_loader(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::ToolContext::register_loader (src/mmloader.nit:223,2--224:58)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_mmloader___ToolContext____loaders( self) /*ToolContext::_loaders*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*ml*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
val_t mmloader___ModuleLoader___file_type(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::file_type (src/mmloader.nit:232,2--233:23)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method file_type called (src/mmloader.nit:232,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmloader___ModuleLoader___try_to_load_dir(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::try_to_load_dir (src/mmloader.nit:235,2--242:12)"};
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
  variable1 =  param1;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((abstractmetamodel___MMDirectory___path_t)CALL( variable1 /*parent_dir*/,COLOR_abstractmetamodel___MMDirectory___path))( variable1 /*parent_dir*/) /*MMDirectory::path*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 =  variable0 /*dirname*/;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  variable2 = variable3;
  variable3 = ((file___String___file_exists_t)CALL( variable2 /*fname*/,COLOR_file___String___file_exists))( variable2 /*fname*/) /*String::file_exists*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
    variable2 =  NIT_NULL /*null*/;
    goto return_label15;
  }
  variable4 = ((abstractmetamodel___MMDirectory___full_name_for_t)CALL( variable1 /*parent_dir*/,COLOR_abstractmetamodel___MMDirectory___full_name_for))( variable1 /*parent_dir*/,  variable0 /*dirname*/) /*MMDirectory::full_name_for*/;
  variable5 = NEW_abstractmetamodel___MMDirectory___init(variable4,  variable2 /*fname*/,  variable1 /*parent_dir*/); /*new MMDirectory*/
  variable4 = variable5;
  variable3 = variable4;
  variable2 =  variable3 /*dir*/;
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t mmloader___ModuleLoader___can_handle(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::can_handle (src/mmloader.nit:245,2--251:14)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((abstractmetamodel___MMDirectory___path_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___path))( variable1 /*dir*/) /*MMDirectory::path*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 =  variable0 /*module_name*/;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  variable13 = ((mmloader___ModuleLoader___file_type_t)CALL( self,COLOR_mmloader___ModuleLoader___file_type))( self) /*ModuleLoader::file_type*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable16) /*String::append*/;
  variable2 = variable3;
  variable3 = ((file___String___file_exists_t)CALL( variable2 /*fname*/,COLOR_file___String___file_exists))( variable2 /*fname*/) /*String::file_exists*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable2 =  TAG_Bool(true);
    goto return_label16;
  }
  variable2 =  TAG_Bool(false);
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t mmloader___ModuleLoader___load_and_process_module(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::load_and_process_module (src/mmloader.nit:254,2--261:10)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((abstractmetamodel___MMDirectory___path_t)CALL( variable2 /*dir*/,COLOR_abstractmetamodel___MMDirectory___path))( variable2 /*dir*/) /*MMDirectory::path*/;
  variable8 = variable7;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 =  variable1 /*module_name*/;
  variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  variable14 = ((mmloader___ModuleLoader___file_type_t)CALL( self,COLOR_mmloader___ModuleLoader___file_type))( self) /*ModuleLoader::file_type*/;
  variable15 = variable14;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
  variable3 = variable4;
  variable5 = ((mmloader___ModuleLoader___load_module_t)CALL( self,COLOR_mmloader___ModuleLoader___load_module))( self,  variable0 /*context*/,  variable1 /*module_name*/,  variable2 /*dir*/,  variable3 /*filename*/) /*ModuleLoader::load_module*/;
  variable4 = variable5;
  variable5 = ((mmloader___ToolContext___opt_only_parse_t)CALL( variable0 /*context*/,COLOR_mmloader___ToolContext___opt_only_parse))( variable0 /*context*/) /*ToolContext::opt_only_parse*/;
  variable5 = ((opts___Option___value_t)CALL(variable5,COLOR_opts___Option___value))(variable5) /*OptionBool::value*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
    ((mmloader___ModuleLoader___process_metamodel_t)CALL( self,COLOR_mmloader___ModuleLoader___process_metamodel))( self,  variable0 /*context*/,  variable4 /*m*/) /*ModuleLoader::process_metamodel*/;
  }
  variable3 =  variable4 /*m*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t mmloader___ModuleLoader___load_module(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::load_module (src/mmloader.nit:264,2--282:10)"};
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
  variable2 =  param2;
  variable3 =  param3;
  variable4 = NIT_NULL /*decl variable file*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
  variable5 = TAG_Bool(( variable3 /*filename*/ == variable5) || (( variable3 /*filename*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable3 /*filename*/,COLOR_kernel___Object_____eqeq))( variable3 /*filename*/, variable5) /*String::==*/)));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = ((file___Object___stdin_t)CALL( self,COLOR_file___Object___stdin))( self) /*ModuleLoader::stdin*/;
    variable4 = variable5 /*file=*/;
  } else { /*if*/
    variable5 = ((string___String___to_s_t)CALL( variable3 /*filename*/,COLOR_string___Object___to_s))( variable3 /*filename*/) /*String::to_s*/;
    variable6 = NEW_file___IFStream___open(variable5); /*new IFStream*/
    variable5 = variable6;
    variable4 = variable5 /*file=*/;
  }
  variable5 = ((stream___BufferedIStream___eof_t)CALL( variable4 /*file*/,COLOR_stream___IStream___eof))( variable4 /*file*/) /*IFStream::eof*/;
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = NEW_string___String___init(); /*new String*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("Error: Problem in opening file "), TAG_Int(31)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
    variable8 =  variable3 /*filename*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
    ((mmloader___ToolContext___error_t)CALL( variable0 /*context*/,COLOR_mmloader___ToolContext___error))( variable0 /*context*/, variable5) /*ToolContext::error*/;
    exit(UNTAG_Int( TAG_Int(1)));
    fprintf(stderr, "Aborted: src/mmloader.nit:277,4--8\n"); nit_exit(1);
  }
  variable6 = ((mmloader___ModuleLoader___parse_file_t)CALL( self,COLOR_mmloader___ModuleLoader___parse_file))( self,  variable0 /*context*/,  variable4 /*file*/,  variable3 /*filename*/,  variable1 /*module_name*/,  variable2 /*dir*/) /*ModuleLoader::parse_file*/;
  variable5 = variable6;
  ((mmloader___MMModule___filename__eq_t)CALL( variable5 /*m*/,COLOR_mmloader___MMModule___filename__eq))( variable5 /*m*/,  variable3 /*filename*/) /*MMModule::filename=*/;
  variable6 = ((file___Object___stdin_t)CALL( self,COLOR_file___Object___stdin))( self) /*ModuleLoader::stdin*/;
  variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*file*/ == variable6) || (( variable4 /*file*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*file*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*file*/,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*file*/,COLOR_kernel___Object_____eqeq))( variable4 /*file*/, variable6) /*IFStream::==*/)))))));
  if (UNTAG_Bool(variable6)) { /*if*/
    ((file___IFStream___close_t)CALL( variable4 /*file*/,COLOR_stream___IOS___close))( variable4 /*file*/) /*IFStream::close*/;
  }
  variable4 =  variable5 /*m*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable4;
}
val_t mmloader___ModuleLoader___parse_file(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::parse_file (src/mmloader.nit:285,2--286:129)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method parse_file called (src/mmloader.nit:285,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void mmloader___ModuleLoader___process_metamodel(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmloader::ModuleLoader::process_metamodel (src/mmloader.nit:288,2--289:70)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method process_metamodel called (src/mmloader.nit:288,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t mmloader___MMModule___filename(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::MMModule::filename (src/mmloader.nit:293,2--294:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___MMModule____filename( self) /*MMModule::_filename*/;
}
void mmloader___MMModule___filename__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::MMModule::filename= (src/mmloader.nit:293,2--294:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmloader___MMModule____filename( self) /*MMModule::_filename*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t mmloader___MMModule___mtime(val_t  self) {
  struct trace_t trace = {NULL, "mmloader::MMModule::mtime (src/mmloader.nit:296,2--297:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmloader___MMModule____mtime( self) /*MMModule::_mtime*/;
}
void mmloader___MMModule___mtime__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::MMModule::mtime= (src/mmloader.nit:296,2--297:35)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmloader___MMModule____mtime( self) /*MMModule::_mtime*/ =  param0;
  tracehead = trace.prev;
  return;
}
void mmloader___MMModule___import_supers_modules(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmloader::MMModule::import_supers_modules (src/mmloader.nit:299,2--309:26)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstractmetamodel___MMModule___context_t)CALL( self,COLOR_abstractmetamodel___MMModule___context))( self) /*MMModule::context*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*c*/==NIT_NULL) || VAL_ISA( variable1 /*c*/, COLOR_ToolContext, ID_ToolContext)) /*cast ToolContext*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/mmloader.nit:303,3--26\n"); nit_exit(1);}
  variable3 = NEW_array___Array___init(); /*new Array[MMModule]*/
  variable2 = variable3;
  variable3 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*names*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*names*/) /*Collection::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
    variable6 = ((mmloader___ToolContext___get_module_t)CALL( variable1 /*c*/,COLOR_mmloader___ToolContext___get_module))( variable1 /*c*/,  variable4 /*n*/,  self) /*ToolContext::get_module*/;
    variable5 = variable6;
    ((array___AbstractArray___add_t)CALL( variable2 /*supers*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*supers*/,  variable5 /*m*/) /*Array::add*/;
    continue_20: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
  }
  break_20: while(0);
  ((abstractmetamodel___MMContext___add_module_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMContext___add_module))( variable1 /*c*/,  self,  variable2 /*supers*/) /*ToolContext::add_module*/;
  tracehead = trace.prev;
  return;
}
