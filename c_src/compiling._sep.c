#include "compiling._sep.h"
void compiling___MMSrcModule___compile_prog_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling::MMSrcModule::compile_prog_to_c (src/compiling//compiling.nit:26,2--75:23)"};
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
  variable1 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMSrcModule::mhe*/;
  variable1 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable1,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable1) /*PartialOrderElement::greaters_and_self*/;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Collection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = TAG_Bool(( variable2 /*m*/==NIT_NULL) || VAL_ISA( variable2 /*m*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/compiling//compiling.nit:32,4--27\n"); nit_exit(1);}
    ((compiling_global___MMSrcModule___local_analysis_t)CALL( variable2 /*m*/,COLOR_compiling_global___MMSrcModule___local_analysis))( variable2 /*m*/,  variable0 /*tc*/) /*MMSrcModule::local_analysis*/;
    continue_1: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_1: while(0);
  variable2 = ((compiling_global___MMSrcModule___global_analysis_t)CALL( self,COLOR_compiling_global___MMSrcModule___global_analysis))( self,  variable0 /*tc*/) /*MMSrcModule::global_analysis*/;
  variable1 = variable2;
  variable2 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  ((file___String___mkdir_t)CALL(variable2,COLOR_file___String___mkdir))(variable2) /*String::mkdir*/;
  variable3 = NEW_array___Array___init(); /*new Array[String]*/
  variable2 = variable3;
  variable4 = NEW_array___ArraySet___init(); /*new ArraySet[String]*/
  variable3 = variable4;
  variable4 = NEW_string___String___with_native(BOX_NativeString("$CLIBDIR/nit_main.c"), TAG_Int(19)); /*new String*/
  ((array___AbstractArray___add_t)CALL( variable2 /*files*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*files*/, variable4) /*Array::add*/;
  variable4 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMSrcModule::mhe*/;
  variable4 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable4) /*PartialOrderElement::greaters_and_self*/;
  variable4 = ((abstract_collection___Collection___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Collection::iterator*/;
  while (true) { /*for*/
    variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
    variable6 = TAG_Bool(( variable5 /*m*/==NIT_NULL) || VAL_ISA( variable5 /*m*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
    if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: src/compiling//compiling.nit:44,4--27\n"); nit_exit(1);}
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
    variable10 = variable9;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 = ((abstractmetamodel___MMModule___name_t)CALL( variable5 /*m*/,COLOR_abstractmetamodel___MMModule___name))( variable5 /*m*/) /*MMSrcModule::name*/;
    variable14 = variable13;
    variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
    variable15 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable16 = variable15;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
    variable17 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
    variable18 = variable17;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
    variable19 = NEW_string___String___with_native(BOX_NativeString("_sep.c"), TAG_Int(6)); /*new String*/
    variable20 = variable19;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
    ((array___AbstractArray___add_t)CALL( variable2 /*files*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*files*/, variable6) /*Array::add*/;
    ((compiling___MMSrcModule___compile_separate_module_t)CALL( variable5 /*m*/,COLOR_compiling___MMSrcModule___compile_separate_module))( variable5 /*m*/,  variable0 /*tc*/,  variable1 /*ga*/) /*MMSrcModule::compile_separate_module*/;
    variable7 = ((mmloader___MMModule___filename_t)CALL( variable5 /*m*/,COLOR_mmloader___MMModule___filename))( variable5 /*m*/) /*MMSrcModule::filename*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(".nit"), TAG_Int(4)); /*new String*/
    variable7 = ((file___String___strip_extension_t)CALL(variable7,COLOR_file___String___strip_extension))(variable7, variable8) /*String::strip_extension*/;
    variable6 = variable7;
    variable7 = NEW_string___String___with_native(BOX_NativeString("_nit.h"), TAG_Int(6)); /*new String*/
    variable7 = ((string___String_____plus_t)CALL( variable6 /*native_name*/,COLOR_string___String_____plus))( variable6 /*native_name*/, variable7) /*String::+*/;
    variable7 = ((file___String___file_exists_t)CALL(variable7,COLOR_file___String___file_exists))(variable7) /*String::file_exists*/;
    if (UNTAG_Bool(variable7)) { /*if*/
      variable7 = NEW_string___String___init(); /*new String*/
      variable8 = NEW_string___String___with_native(BOX_NativeString("-I "), TAG_Int(3)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
      variable10 = ((file___String___dirname_t)CALL( variable6 /*native_name*/,COLOR_file___String___dirname))( variable6 /*native_name*/) /*String::dirname*/;
      variable11 = variable10;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
      ((array___ArraySet___add_t)CALL( variable3 /*includes*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*includes*/, variable7) /*ArraySet::add*/;
    }
    variable7 = NEW_string___String___with_native(BOX_NativeString("_nit.c"), TAG_Int(6)); /*new String*/
    ((string___String___append_t)CALL( variable6 /*native_name*/,COLOR_abstract_collection___IndexedCollection___append))( variable6 /*native_name*/, variable7) /*String::append*/;
    variable7 = ((file___String___file_exists_t)CALL( variable6 /*native_name*/,COLOR_file___String___file_exists))( variable6 /*native_name*/) /*String::file_exists*/;
    if (UNTAG_Bool(variable7)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*files*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*files*/,  variable6 /*native_name*/) /*Array::add*/;
    }
    continue_2: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
  }
  break_2: while(0);
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable8 = variable7;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable16 = variable15;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString("_tables.c"), TAG_Int(9)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  ((array___AbstractArray___add_t)CALL( variable2 /*files*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*files*/, variable4) /*Array::add*/;
  ((compiling___MMSrcModule___compile_main_t)CALL( self,COLOR_compiling___MMSrcModule___compile_main))( self,  variable0 /*tc*/,  variable1 /*ga*/) /*MMSrcModule::compile_main*/;
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable9 = variable8;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
  variable12 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable13 = variable12;
  variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
  variable16 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable17 = variable16;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString("_build.sh"), TAG_Int(9)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable19) /*String::append*/;
  variable4 = variable5;
  variable6 = NEW_file___OFStream___open( variable4 /*fn*/); /*new OFStream*/
  variable5 = variable6;
  variable6 = NEW_string___String___with_native(BOX_NativeString("#!/bin/sh\n"), TAG_Int(10)); /*new String*/
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString("CLIBDIR=\""), TAG_Int(9)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = ((compiling_base___ToolContext___clibdir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___clibdir))( variable0 /*tc*/) /*ToolContext::clibdir*/;
  variable10 = variable9;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("\"\n"), TAG_Int(2)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = ((compiling_base___ToolContext___bindir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___bindir))( variable0 /*tc*/) /*ToolContext::bindir*/;
  variable10 = variable9;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("/gccx -d "), TAG_Int(9)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  variable13 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(" -I $CLIBDIR "), TAG_Int(13)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
  variable17 = ((string___Collection___join_t)CALL( variable3 /*includes*/,COLOR_string___Collection___join))( variable3 /*includes*/, variable17) /*ArraySet::join*/;
  variable18 = variable17;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  variable6 = ((compiling_base___ToolContext___output_file_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___output_file))( variable0 /*tc*/) /*ToolContext::output_file*/;
  variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable6 ==  NIT_NULL /*null*/) || ((variable6 != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  NIT_NULL /*null*/) /*String::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString(" -o "), TAG_Int(4)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((compiling_base___ToolContext___output_file_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___output_file))( variable0 /*tc*/) /*ToolContext::output_file*/;
    variable10 = variable9;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  } else { /*if*/
    variable6 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
    variable6 = ((array___AbstractArray___is_empty_t)CALL(variable6,COLOR_abstract_collection___Collection___is_empty))(variable6) /*String::is_empty*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString(" -o "), TAG_Int(4)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
      variable10 = variable9;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
    } else { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString(" -o "), TAG_Int(4)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
      variable10 = variable9;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      variable13 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
      variable14 = variable13;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
      variable15 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable16 = variable15;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
      ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
    }
  }
  variable6 = ((compiling_base___ToolContext___boost_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___boost))( variable0 /*tc*/) /*ToolContext::boost*/;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___with_native(BOX_NativeString(" -O"), TAG_Int(3)); /*new String*/
    ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  }
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString(" \"$@\" \\\n  "), TAG_Int(10)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("\\\n  "), TAG_Int(4)); /*new String*/
  variable9 = ((string___Collection___join_t)CALL( variable2 /*files*/,COLOR_string___Collection___join))( variable2 /*files*/, variable9) /*Array::join*/;
  variable10 = variable9;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable5 /*f*/,COLOR_stream___IOS___close))( variable5 /*f*/) /*OFStream::close*/;
  variable6 = ((compiling_base___ToolContext___no_cc_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___no_cc))( variable0 /*tc*/) /*ToolContext::no_cc*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable6)))) { /*if*/
    variable6 = (G_sys);
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("sh "), TAG_Int(3)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 =  variable4 /*fn*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable12) /*String::append*/;
    ((exec___Sys___system_t)CALL(variable6,COLOR_exec___Sys___system))(variable6, variable7) /*Sys::system*/;
  }
  tracehead = trace.prev;
  return;
}
void compiling___MMSrcModule___compile_main(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling::MMSrcModule::compile_main (src/compiling//compiling.nit:79,2--93:9)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_compiling_base___CompilerVisitor___init( self); /*new CompilerVisitor*/
  variable2 = variable3;
  ((compiling_base___CompilerVisitor___tc__eq_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___tc__eq))( variable2 /*v*/,  variable0 /*tc*/) /*CompilerVisitor::tc=*/;
  ((compiling_global___CompilerVisitor___global_analysis__eq_t)CALL( variable2 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis__eq))( variable2 /*v*/,  variable1 /*ga*/) /*CompilerVisitor::global_analysis=*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("#include <nit_common.h>"), TAG_Int(23)); /*new String*/
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable2 /*v*/, variable3) /*CompilerVisitor::add_decl*/;
  ((compiling_global___MMSrcModule___compile_tables_to_c_t)CALL( self,COLOR_compiling_global___MMSrcModule___compile_tables_to_c))( self,  variable2 /*v*/) /*MMSrcModule::compile_tables_to_c*/;
  ((compiling_global___MMSrcModule___compile_main_part_t)CALL( self,COLOR_compiling_global___MMSrcModule___compile_main_part))( self,  variable2 /*v*/) /*MMSrcModule::compile_main_part*/;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable8 = variable7;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable16 = variable15;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString("_tables.c"), TAG_Int(9)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable5 = NEW_file___OFStream___open(variable4); /*new OFStream*/
  variable4 = variable5;
  variable3 = variable4;
  variable4 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMSrcModule::mhe*/;
  variable4 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable4) /*PartialOrderElement::greaters_and_self*/;
  variable4 = ((abstract_collection___Collection___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Collection::iterator*/;
  while (true) { /*for*/
    variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("#include \""), TAG_Int(10)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((abstractmetamodel___MMModule___name_t)CALL( variable5 /*m*/,COLOR_abstractmetamodel___MMModule___name))( variable5 /*m*/) /*MMModule::name*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
    variable14 = variable13;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
    variable15 = NEW_string___String___with_native(BOX_NativeString("_sep.h\"\n"), TAG_Int(8)); /*new String*/
    variable16 = variable15;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
    ((file___OFStream___write_t)CALL( variable3 /*f*/,COLOR_stream___OStream___write))( variable3 /*f*/, variable6) /*OFStream::write*/;
    continue_4: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
  }
  break_4: while(0);
  variable4 = ((compiling_base___CompilerVisitor___to_s_t)CALL( variable2 /*v*/,COLOR_string___Object___to_s))( variable2 /*v*/) /*CompilerVisitor::to_s*/;
  ((file___OFStream___write_t)CALL( variable3 /*f*/,COLOR_stream___OStream___write))( variable3 /*f*/, variable4) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable3 /*f*/,COLOR_stream___IOS___close))( variable3 /*f*/) /*OFStream::close*/;
  tracehead = trace.prev;
  return;
}
void compiling___MMSrcModule___compile_separate_module(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling::MMSrcModule::compile_separate_module (src/compiling//compiling.nit:96,2--119:9)"};
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
  variable3 = NEW_compiling_base___CompilerVisitor___init( self); /*new CompilerVisitor*/
  variable2 = variable3;
  ((compiling_base___CompilerVisitor___tc__eq_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___tc__eq))( variable2 /*v*/,  variable0 /*tc*/) /*CompilerVisitor::tc=*/;
  ((compiling_global___CompilerVisitor___global_analysis__eq_t)CALL( variable2 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis__eq))( variable2 /*v*/,  variable1 /*ga*/) /*CompilerVisitor::global_analysis=*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString("#include <nit_common.h>"), TAG_Int(23)); /*new String*/
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable2 /*v*/, variable3) /*CompilerVisitor::add_decl*/;
  variable4 = ((mmloader___MMModule___filename_t)CALL( self,COLOR_mmloader___MMModule___filename))( self) /*MMSrcModule::filename*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString(".nit"), TAG_Int(4)); /*new String*/
  variable4 = ((file___String___strip_extension_t)CALL(variable4,COLOR_file___String___strip_extension))(variable4, variable5) /*String::strip_extension*/;
  variable3 = variable4;
  variable4 = NEW_string___String___with_native(BOX_NativeString("_nit.h"), TAG_Int(6)); /*new String*/
  ((string___String___append_t)CALL( variable3 /*native_name*/,COLOR_abstract_collection___IndexedCollection___append))( variable3 /*native_name*/, variable4) /*String::append*/;
  variable4 = ((file___String___file_exists_t)CALL( variable3 /*native_name*/,COLOR_file___String___file_exists))( variable3 /*native_name*/) /*String::file_exists*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("#include <"), TAG_Int(10)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable7 = ((file___String___basename_t)CALL( variable3 /*native_name*/,COLOR_file___String___basename))( variable3 /*native_name*/, variable7) /*String::basename*/;
    variable8 = variable7;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable2 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
  }
  ((compiling_global___MMSrcModule___declare_class_tables_to_c_t)CALL( self,COLOR_compiling_global___MMSrcModule___declare_class_tables_to_c))( self,  variable2 /*v*/) /*MMSrcModule::declare_class_tables_to_c*/;
  ((compiling_global___MMSrcModule___compile_mod_to_c_t)CALL( self,COLOR_compiling_global___MMSrcModule___compile_mod_to_c))( self,  variable2 /*v*/) /*MMSrcModule::compile_mod_to_c*/;
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable9 = variable8;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
  variable12 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable13 = variable12;
  variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
  variable16 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable17 = variable16;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable17) /*String::append*/;
  variable18 = NEW_string___String___with_native(BOX_NativeString("_sep.h"), TAG_Int(6)); /*new String*/
  variable19 = variable18;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable19) /*String::append*/;
  variable6 = NEW_file___OFStream___open(variable5); /*new OFStream*/
  variable5 = variable6;
  variable4 = variable5;
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString("#ifndef "), TAG_Int(8)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
  variable12 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable13 = variable12;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("_sep\n"), TAG_Int(5)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable4 /*f*/,COLOR_stream___OStream___write))( variable4 /*f*/, variable5) /*OFStream::write*/;
  variable5 = NEW_string___String___init(); /*new String*/
  variable6 = NEW_string___String___with_native(BOX_NativeString("#define "), TAG_Int(8)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
  variable8 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
  variable12 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable13 = variable12;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString("_sep\n"), TAG_Int(5)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable4 /*f*/,COLOR_stream___OStream___write))( variable4 /*f*/, variable5) /*OFStream::write*/;
  variable5 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMSrcModule::mhe*/;
  variable5 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable5,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable5) /*PartialOrderElement::direct_greaters*/;
  variable5 = ((array___AbstractArray___iterator_t)CALL(variable5,COLOR_abstract_collection___Collection___iterator))(variable5) /*Array::iterator*/;
  while (true) { /*for*/
    variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("#include \""), TAG_Int(10)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 = ((abstractmetamodel___MMModule___name_t)CALL( variable6 /*m*/,COLOR_abstractmetamodel___MMModule___name))( variable6 /*m*/) /*MMModule::name*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
    variable14 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
    variable15 = variable14;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable15) /*String::append*/;
    variable16 = NEW_string___String___with_native(BOX_NativeString("_sep.h\"\n"), TAG_Int(8)); /*new String*/
    variable17 = variable16;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable17) /*String::append*/;
    ((file___OFStream___write_t)CALL( variable4 /*f*/,COLOR_stream___OStream___write))( variable4 /*f*/, variable7) /*OFStream::write*/;
    continue_6: while(0);
    ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
  }
  break_6: while(0);
  variable5 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable2 /*v*/) /*CompilerVisitor::ctx*/;
  variable5 = ((compiling_base___CContext___decls_t)CALL(variable5,COLOR_compiling_base___CContext___decls))(variable5) /*CContext::decls*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable5 = ((string___Collection___join_t)CALL(variable5,COLOR_string___Collection___join))(variable5, variable6) /*Array::join*/;
  ((file___OFStream___write_t)CALL( variable4 /*f*/,COLOR_stream___OStream___write))( variable4 /*f*/, variable5) /*OFStream::write*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("\n#endif\n"), TAG_Int(8)); /*new String*/
  ((file___OFStream___write_t)CALL( variable4 /*f*/,COLOR_stream___OStream___write))( variable4 /*f*/, variable5) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable4 /*f*/,COLOR_stream___IOS___close))( variable4 /*f*/) /*OFStream::close*/;
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = ((compiling_base___ToolContext___base_dir_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___base_dir))( variable0 /*tc*/) /*ToolContext::base_dir*/;
  variable10 = variable9;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  variable13 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable14 = variable13;
  variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
  variable17 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable18 = variable17;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
  variable19 = NEW_string___String___with_native(BOX_NativeString("_sep.c"), TAG_Int(6)); /*new String*/
  variable20 = variable19;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
  variable7 = NEW_file___OFStream___open(variable6); /*new OFStream*/
  variable6 = variable7;
  variable5 = variable6;
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString("#include \""), TAG_Int(10)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable10 = variable9;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
  variable13 = ((compiling_base___ToolContext___ext_prefix_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___ext_prefix))( variable0 /*tc*/) /*ToolContext::ext_prefix*/;
  variable14 = variable13;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString("_sep.h\"\n"), TAG_Int(8)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  variable6 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable2 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable2 /*v*/) /*CompilerVisitor::ctx*/;
  variable6 = ((compiling_base___CContext___instrs_t)CALL(variable6,COLOR_compiling_base___CContext___instrs))(variable6) /*CContext::instrs*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  variable6 = ((string___Collection___join_t)CALL(variable6,COLOR_string___Collection___join))(variable6, variable7) /*Array::join*/;
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  ((file___OFStream___write_t)CALL( variable5 /*f*/,COLOR_stream___OStream___write))( variable5 /*f*/, variable6) /*OFStream::write*/;
  ((file___OFStream___close_t)CALL( variable5 /*f*/,COLOR_stream___IOS___close))( variable5 /*f*/) /*OFStream::close*/;
  tracehead = trace.prev;
  return;
}
