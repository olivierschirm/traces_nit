#include "abstracttool._sep.h"
void abstracttool___AbstractCompiler___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "abstracttool::AbstractCompiler::init (src/abstracttool.nit:28,2--31:37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_AbstractCompiler].i]) return;
  ((mmloader___ToolContext___init_t)CALL( self,COLOR_mmloader___ToolContext___init))( self, init_table /*YYY*/) /*ToolContext::init*/;
  variable0 = NEW_syntax___SrcModuleLoader___init(); /*new SrcModuleLoader*/
  ((mmloader___ToolContext___register_loader_t)CALL( self,COLOR_mmloader___ToolContext___register_loader))( self, variable0) /*AbstractCompiler::register_loader*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_AbstractCompiler].i] = 1;
  tracehead = trace.prev;
  return;
}
void abstracttool___AbstractCompiler___exec_cmd_line(val_t  self) {
  struct trace_t trace = {NULL, "abstracttool::AbstractCompiler::exec_cmd_line (src/abstracttool.nit:34,2--59:21)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
    val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  ((mmloader___ToolContext___process_options_t)CALL( self,COLOR_mmloader___ToolContext___process_options))( self) /*AbstractCompiler::process_options*/;
  variable0 = ((mmloader___ToolContext___opt_help_t)CALL( self,COLOR_mmloader___ToolContext___opt_help))( self) /*AbstractCompiler::opt_help*/;
  variable0 = ((opts___Option___value_t)CALL(variable0,COLOR_opts___Option___value))(variable0) /*OptionBool::value*/;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*AbstractCompiler::option_context*/;
    ((opts___OptionContext___usage_t)CALL(variable0,COLOR_opts___OptionContext___usage))(variable0) /*OptionContext::usage*/;
    exit(UNTAG_Int( TAG_Int(0)));
  }
  variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*AbstractCompiler::option_context*/;
  variable0 = ((opts___OptionContext___rest_t)CALL(variable0,COLOR_opts___OptionContext___rest))(variable0) /*OptionContext::rest*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  variable0 = TAG_Bool((variable0)==( TAG_Int(0)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*AbstractCompiler::option_context*/;
    ((opts___OptionContext___usage_t)CALL(variable0,COLOR_opts___OptionContext___usage))(variable0) /*OptionContext::usage*/;
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable1 = ((mmloader___ToolContext___option_context_t)CALL( self,COLOR_mmloader___ToolContext___option_context))( self) /*AbstractCompiler::option_context*/;
  variable1 = ((opts___OptionContext___rest_t)CALL(variable1,COLOR_opts___OptionContext___rest))(variable1) /*OptionContext::rest*/;
  variable0 = variable1;
  variable2 = NEW_array___Array___init(); /*new Array[MMModule]*/
  variable1 = variable2;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*rest*/,COLOR_abstract_collection___Collection___length))( variable0 /*rest*/) /*Array::length*/;
  variable3 = NEW_range___Range___without_last( TAG_Int(0), variable2); /*new Range[Int]*/
  variable2 = variable3;
  variable2 = ((range___Range___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Range::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*Iterator::item*/;
    variable5 =  variable3 /*i*/;
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable7 = variable6;
    if (UNTAG_Bool(variable7)) { /* and */
      variable7 = ATTR_array___AbstractArray____length( variable0 /*rest*/) /*Array::_length*/;
      variable7 = TAG_Bool(UNTAG_Int( variable5 /*index*/)<UNTAG_Int(variable7));
    }
    variable6 = variable7;
    if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable6 = ATTR_array___Array____items( variable0 /*rest*/) /*Array::_items*/;
    variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*index*/)];
    goto return_label3;
    return_label3: while(false);
    variable5 = variable6;
    variable5 = ((mmloader___ToolContext___get_module_from_filename_t)CALL( self,COLOR_mmloader___ToolContext___get_module_from_filename))( self, variable5) /*AbstractCompiler::get_module_from_filename*/;
    variable4 = variable5;
    ((array___AbstractArray___add_t)CALL( variable1 /*to_do*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*to_do*/,  variable4 /*mod*/) /*Array::add*/;
    continue_2: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*Iterator::next*/;
  }
  break_2: while(0);
  variable2 = ((mmloader___ToolContext___opt_log_t)CALL( self,COLOR_mmloader___ToolContext___opt_log))( self) /*AbstractCompiler::opt_log*/;
  variable2 = ((opts___Option___value_t)CALL(variable2,COLOR_opts___Option___value))(variable2) /*OptionBool::value*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    ((abstracttool___AbstractCompiler___dump_context_info_t)CALL( self,COLOR_abstracttool___AbstractCompiler___dump_context_info))( self) /*AbstractCompiler::dump_context_info*/;
  }
  variable2 = ((array___AbstractArray___is_empty_t)CALL( variable1 /*to_do*/,COLOR_abstract_collection___Collection___is_empty))( variable1 /*to_do*/) /*Array::is_empty*/;
  variable2 =  TAG_Bool(!UNTAG_Bool(variable2));
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((mmloader___ToolContext___opt_only_metamodel_t)CALL( self,COLOR_mmloader___ToolContext___opt_only_metamodel))( self) /*AbstractCompiler::opt_only_metamodel*/;
    variable2 = ((opts___Option___value_t)CALL(variable2,COLOR_opts___Option___value))(variable2) /*OptionBool::value*/;
    variable2 =  TAG_Bool(!UNTAG_Bool(variable2));
  }
  if (UNTAG_Bool(variable2)) { /*if*/
    ((abstracttool___AbstractCompiler___perform_work_t)CALL( self,COLOR_abstracttool___AbstractCompiler___perform_work))( self,  variable1 /*to_do*/) /*AbstractCompiler::perform_work*/;
  }
  tracehead = trace.prev;
  return;
}
void abstracttool___AbstractCompiler___perform_work(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstracttool::AbstractCompiler::perform_work (src/abstracttool.nit:63,2--39)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method perform_work called (src/abstracttool.nit:63,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void abstracttool___AbstractCompiler___dump_context_info(val_t  self) {
  struct trace_t trace = {NULL, "abstracttool::AbstractCompiler::dump_context_info (src/abstracttool.nit:65,2--80:9)"};
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
  variable0 = ((abstractmetamodel___MMContext___module_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMContext___module_hierarchy))( self) /*AbstractCompiler::module_hierarchy*/;
  variable0 = ((partial_order___PartialOrder___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*PartialOrder::iterator*/;
  while (true) { /*for*/
    variable1 = ((abstract_collection___Iterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable1)) break; /*for*/
    variable1 = ((abstract_collection___Iterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*Iterator::item*/;
    ((abstracttool___MMModule___dump_module_info_t)CALL( variable1 /*mod*/,COLOR_abstracttool___MMModule___dump_module_info))( variable1 /*mod*/) /*MMModule::dump_module_info*/;
    continue_5: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*Iterator::next*/;
  }
  break_5: while(0);
  variable1 = NEW_array___Array___init(); /*new Array[MMModule]*/
  variable0 = variable1;
  variable1 = ((abstractmetamodel___MMContext___module_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMContext___module_hierarchy))( self) /*AbstractCompiler::module_hierarchy*/;
  ((abstract_collection___SimpleCollection___add_all_t)CALL( variable0 /*tab*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable0 /*tab*/, variable1) /*Array::add_all*/;
  variable2 = ((abstractmetamodel___MMContext___module_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMContext___module_hierarchy))( self) /*AbstractCompiler::module_hierarchy*/;
  variable2 = ((partial_order___PartialOrder___select_smallests_t)CALL(variable2,COLOR_partial_order___PartialOrder___select_smallests))(variable2,  variable0 /*tab*/) /*PartialOrder::select_smallests*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
  variable2 = ((string___Collection___join_t)CALL(variable2,COLOR_string___Collection___join))(variable2, variable3) /*Array::join*/;
  variable1 = variable2;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*name*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(".full_class_hierarchy.new.dot"), TAG_Int(29)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable4 = NEW_file___OFStream___open(variable3); /*new OFStream*/
  variable3 = variable4;
  variable2 = variable3;
  variable3 = ((abstractmetamodel___MMContext___class_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMContext___class_hierarchy))( self) /*AbstractCompiler::class_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___to_dot_t)CALL(variable3,COLOR_partial_order___PartialOrder___to_dot))(variable3) /*PartialOrder::to_dot*/;
  ((file___OFStream___write_t)CALL( variable2 /*f*/,COLOR_stream___OStream___write))( variable2 /*f*/, variable3) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable2 /*f*/,COLOR_stream___IOS___close))( variable2 /*f*/) /*OFStream::close*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*name*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(".module_hierarchy.new.dot"), TAG_Int(25)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable4 = NEW_file___OFStream___open(variable3); /*new OFStream*/
  variable3 = variable4;
  variable2 = variable3 /*f=*/;
  variable3 = ((abstractmetamodel___MMContext___module_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMContext___module_hierarchy))( self) /*AbstractCompiler::module_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___to_dot_t)CALL(variable3,COLOR_partial_order___PartialOrder___to_dot))(variable3) /*PartialOrder::to_dot*/;
  ((file___OFStream___write_t)CALL( variable2 /*f*/,COLOR_stream___OStream___write))( variable2 /*f*/, variable3) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable2 /*f*/,COLOR_stream___IOS___close))( variable2 /*f*/) /*OFStream::close*/;
  tracehead = trace.prev;
  return;
}
void abstracttool___MMModule___dump_module_info(val_t  self) {
  struct trace_t trace = {NULL, "abstracttool::MMModule::dump_module_info (src/abstracttool.nit:85,2--98:9)"};
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
  variable1 = ((mmloader___MMModule___filename_t)CALL( self,COLOR_mmloader___MMModule___filename))( self) /*MMModule::filename*/;
  variable1 = ((file___String___file_path_t)CALL(variable1,COLOR_file___String___file_path))(variable1) /*String::file_path*/;
  variable0 = variable1;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 =  variable0 /*p*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable7) /*String::append*/;
  variable8 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMModule::name*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable11) /*String::append*/;
  variable1 = variable2;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*fname*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(".class_hierarchy.new.dot"), TAG_Int(24)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable4 = NEW_file___OFStream___open(variable3); /*new OFStream*/
  variable3 = variable4;
  variable2 = variable3;
  variable3 = ((abstractmetamodel___MMModule___class_specialization_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMModule___class_specialization_hierarchy))( self) /*MMModule::class_specialization_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___to_dot_t)CALL(variable3,COLOR_partial_order___PartialOrder___to_dot))(variable3) /*PartialOrder::to_dot*/;
  ((file___OFStream___write_t)CALL( variable2 /*f*/,COLOR_stream___OStream___write))( variable2 /*f*/, variable3) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable2 /*f*/,COLOR_stream___IOS___close))( variable2 /*f*/) /*OFStream::close*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable1 /*fname*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(".properties.log"), TAG_Int(15)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable4 = NEW_file___OFStream___open(variable3); /*new OFStream*/
  variable3 = variable4;
  variable2 = variable3 /*f=*/;
  variable3 = ((abstractmetamodel___MMModule___local_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___local_classes))( self) /*MMModule::local_classes*/;
  variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    ((abstracttool___MMLocalClass___dump_properties_t)CALL( variable4 /*cla*/,COLOR_abstracttool___MMLocalClass___dump_properties))( variable4 /*cla*/,  variable2 /*f*/) /*MMLocalClass::dump_properties*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
    ((file___OFStream___write_t)CALL( variable2 /*f*/,COLOR_stream___OStream___write))( variable2 /*f*/, variable5) /*OFStream::write*/;
    continue_7: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_7: while(0);
  ((file___OFStream___close_t)CALL( variable2 /*f*/,COLOR_stream___IOS___close))( variable2 /*f*/) /*OFStream::close*/;
  tracehead = trace.prev;
  return;
}
void abstracttool___MMLocalClass___dump_properties(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstracttool::MMLocalClass::dump_properties (src/abstracttool.nit:103,2--110:29)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("class "), TAG_Int(6)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 =  self;
  variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
  ((stream___OStream___write_t)CALL( variable0 /*file*/,COLOR_stream___OStream___write))( variable0 /*file*/, variable1) /*OStream::write*/;
  variable1 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global_properties))( self) /*MMLocalClass::global_properties*/;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Set::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable4 = ((inheritance___MMLocalClass_____bra_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass_____bra))( self,  variable2 /*p*/) /*MMLocalClass::[]*/;
    variable3 = variable4;
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("\t"), TAG_Int(1)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable3 /*lp*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    variable10 = ((genericity___MMLocalProperty___signature_t)CALL( variable3 /*lp*/,COLOR_static_type___MMLocalProperty___signature))( variable3 /*lp*/) /*MMLocalProperty::signature*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
    ((stream___OStream___write_t)CALL( variable0 /*file*/,COLOR_stream___OStream___write))( variable0 /*file*/, variable4) /*OStream::write*/;
    continue_9: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_9: while(0);
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("end # "), TAG_Int(6)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 =  self;
  variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
  ((stream___OStream___write_t)CALL( variable0 /*file*/,COLOR_stream___OStream___write))( variable0 /*file*/, variable1) /*OStream::write*/;
  tracehead = trace.prev;
  return;
}
