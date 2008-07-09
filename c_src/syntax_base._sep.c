#include "syntax_base._sep.h"
val_t syntax_base___MMSrcModule___node(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcModule::node (src/syntax//syntax_base.nit:26,2--27:29)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcModule____node( self) /*MMSrcModule::_node*/;
}
val_t syntax_base___MMSrcModule___src_local_classes(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcModule::src_local_classes (src/syntax//syntax_base.nit:29,2--30:62)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcModule____src_local_classes( self) /*MMSrcModule::_src_local_classes*/;
}
void syntax_base___MMSrcModule___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcModule::init (src/syntax//syntax_base.nit:32,2--36:58)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcModule].i]) return;
  ((abstractmetamodel___MMModule___init_t)CALL( self,COLOR_abstractmetamodel___MMModule___init))( self,  variable3 /*name*/,  variable2 /*dir*/,  variable0 /*c*/, init_table /*YYY*/) /*MMModule::init*/;
  ATTR_syntax_base___MMSrcModule____node( self) /*MMSrcModule::_node*/ =  variable1 /*source*/;
  variable4 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, MMSrcLocalClass]*/
  ATTR_syntax_base___MMSrcModule____src_local_classes( self) /*MMSrcModule::_src_local_classes*/ = variable4;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcModule].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___MMGlobalClass___check_visibility(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "syntax_base::MMGlobalClass::check_visibility (src/syntax//syntax_base.nit:41,2--55:13)"};
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
  variable4 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___intro))( self) /*MMGlobalClass::intro*/;
  variable4 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalClass___module))(variable4) /*MMLocalClass::module*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*pm*/==NIT_NULL) || VAL_ISA( variable3 /*pm*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
  if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert failed: src/syntax//syntax_base.nit:44,3--27\n"); nit_exit(1);}
  variable5 = ((abstractmetamodel___MMModule___visibility_for_t)CALL( variable2 /*cm*/,COLOR_abstractmetamodel___MMModule___visibility_for))( variable2 /*cm*/,  variable3 /*pm*/) /*MMSrcModule::visibility_for*/;
  variable4 = variable5;
  variable5 = TAG_Bool(( variable4 /*vpm*/)==( TAG_Int(3)));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable3 =  TAG_Bool(true);
    goto return_label1;
  } else { /*if*/
    variable5 = TAG_Bool(( variable4 /*vpm*/)==( TAG_Int(0)));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Visibility error: Class "), TAG_Int(24)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  self;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" comes from the hidden module "), TAG_Int(30)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      variable11 =  variable2 /*cm*/;
      variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  variable1 /*n*/, variable5) /*AbsSyntaxVisitor::error*/;
      variable3 =  TAG_Bool(false);
      goto return_label1;
    } else { /*if*/
      variable5 = ((abstractmetamodel___MMGlobalClass___visibility_level_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___visibility_level))( self) /*MMGlobalClass::visibility_level*/;
      variable5 = TAG_Bool(UNTAG_Int(variable5)>=UNTAG_Int( TAG_Int(3)));
      if (UNTAG_Bool(variable5)) { /*if*/
        variable5 = NEW_string___String___init(); /*new String*/
        variable6 = NEW_string___String___with_native(BOX_NativeString("Visibility error: Class "), TAG_Int(24)); /*new String*/
        variable7 = variable6;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
        variable8 =  self;
        variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
        variable9 = NEW_string___String___with_native(BOX_NativeString(" is private."), TAG_Int(12)); /*new String*/
        variable10 = variable9;
        ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  variable1 /*n*/, variable5) /*AbsSyntaxVisitor::error*/;
        variable3 =  TAG_Bool(false);
        goto return_label1;
      }
    }
  }
  variable3 =  TAG_Bool(true);
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable3;
}
val_t syntax_base___MMSrcLocalClass___nodes(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalClass::nodes (src/syntax//syntax_base.nit:62,2--63:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcLocalClass____nodes( self) /*MMSrcLocalClass::_nodes*/;
}
val_t syntax_base___MMSrcLocalClass___formal_dict(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalClass::formal_dict (src/syntax//syntax_base.nit:65,2--66:71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcLocalClass____formal_dict( self) /*MMSrcLocalClass::_formal_dict*/;
}
void syntax_base___MMSrcLocalClass___formal_dict__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalClass::formal_dict= (src/syntax//syntax_base.nit:65,2--66:71)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax_base___MMSrcLocalClass____formal_dict( self) /*MMSrcLocalClass::_formal_dict*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___MMSrcLocalClass___src_local_properties(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalClass::src_local_properties (src/syntax//syntax_base.nit:68,2--69:68)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcLocalClass____src_local_properties( self) /*MMSrcLocalClass::_src_local_properties*/;
}
void syntax_base___MMSrcLocalClass___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalClass::init (src/syntax//syntax_base.nit:71,2--75:64)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcLocalClass].i]) return;
  ((abstractmetamodel___MMLocalClass___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___init))( self,  variable0 /*n*/,  variable2 /*a*/, init_table /*YYY*/) /*MMLocalClass::init*/;
  variable3 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[PClassdef]*/
  ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3,  variable1 /*cla*/) /*Array::add*/;
  ATTR_syntax_base___MMSrcLocalClass____nodes( self) /*MMSrcLocalClass::_nodes*/ = variable3;
  variable3 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, MMSrcLocalProperty]*/
  ATTR_syntax_base___MMSrcLocalClass____src_local_properties( self) /*MMSrcLocalClass::_src_local_properties*/ = variable3;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcLocalClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___MMGlobalProperty___check_visibility(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "syntax_base::MMGlobalProperty::check_visibility (src/syntax//syntax_base.nit:80,2--98:13)"};
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
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable5 = ((abstractmetamodel___MMGlobalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___local_class))( self) /*MMGlobalProperty::local_class*/;
  variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___module))(variable5) /*MMLocalClass::module*/;
  variable4 = variable5;
  variable5 = TAG_Bool(( variable4 /*pm*/==NIT_NULL) || VAL_ISA( variable4 /*pm*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
  if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert failed: src/syntax//syntax_base.nit:83,3--27\n"); nit_exit(1);}
  variable6 = ((abstractmetamodel___MMModule___visibility_for_t)CALL( variable2 /*cm*/,COLOR_abstractmetamodel___MMModule___visibility_for))( variable2 /*cm*/,  variable4 /*pm*/) /*MMSrcModule::visibility_for*/;
  variable5 = variable6;
  variable6 = TAG_Bool(( variable5 /*vpm*/)==( TAG_Int(3)));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable4 =  TAG_Bool(true);
    goto return_label3;
  } else { /*if*/
    variable6 = TAG_Bool(( variable5 /*vpm*/)==( TAG_Int(0)));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("Visibility error: Property "), TAG_Int(27)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 =  self;
      variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString(" comes from the hidden module "), TAG_Int(30)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
      variable12 =  variable2 /*cm*/;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  variable1 /*n*/, variable6) /*AbsSyntaxVisitor::error*/;
      variable4 =  TAG_Bool(false);
      goto return_label3;
    } else { /*if*/
      variable6 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))( self) /*MMGlobalProperty::visibility_level*/;
      variable6 = TAG_Bool(UNTAG_Int(variable6)>=UNTAG_Int( TAG_Int(3)));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("Visibility error: Property "), TAG_Int(27)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  self;
        variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
        variable10 = NEW_string___String___with_native(BOX_NativeString(" is private."), TAG_Int(12)); /*new String*/
        variable11 = variable10;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  variable1 /*n*/, variable6) /*AbsSyntaxVisitor::error*/;
        variable4 =  TAG_Bool(false);
        goto return_label3;
      } else { /*if*/
        variable6 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))( self) /*MMGlobalProperty::visibility_level*/;
        variable6 = TAG_Bool(UNTAG_Int(variable6)>=UNTAG_Int( TAG_Int(2)));
        variable7 = variable6;
        if (UNTAG_Bool(variable7)) { /* and */
          variable7 =  TAG_Bool(!UNTAG_Bool( variable3 /*allows_protected*/));
        }
        variable6 = variable7;
        if (UNTAG_Bool(variable6)) { /*if*/
          variable6 = NEW_string___String___init(); /*new String*/
          variable7 = NEW_string___String___with_native(BOX_NativeString("Visibility error: Property "), TAG_Int(27)); /*new String*/
          variable8 = variable7;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
          variable9 =  self;
          variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
          variable10 = NEW_string___String___with_native(BOX_NativeString(" is protected and can only acceded by self."), TAG_Int(43)); /*new String*/
          variable11 = variable10;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  variable1 /*n*/, variable6) /*AbsSyntaxVisitor::error*/;
          variable4 =  TAG_Bool(false);
          goto return_label3;
        }
      }
    }
  }
  variable4 =  TAG_Bool(true);
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable4;
}
val_t syntax_base___MMSrcLocalProperty___node(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcLocalProperty::node (src/syntax//syntax_base.nit:108,2--109:26)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMSrcLocalProperty::_node*/;
}
void syntax_base___MMSrcAttribute___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcAttribute::init (src/syntax//syntax_base.nit:116,2--119:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcAttribute].i]) return;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self,  variable0 /*name*/,  variable1 /*cla*/,  self, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMSrcAttribute::_node*/ =  variable2 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcAttribute].i] = 1;
  tracehead = trace.prev;
  return;
}
void syntax_base___MMReadImplementationMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMReadImplementationMethod::init (src/syntax//syntax_base.nit:139,2--142:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMReadImplementationMethod].i]) return;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self,  variable0 /*name*/,  variable1 /*cla*/,  self, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMReadImplementationMethod::_node*/ =  variable2 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMReadImplementationMethod].i] = 1;
  tracehead = trace.prev;
  return;
}
void syntax_base___MMWriteImplementationMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMWriteImplementationMethod::init (src/syntax//syntax_base.nit:150,2--153:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMWriteImplementationMethod].i]) return;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self,  variable0 /*name*/,  variable1 /*cla*/,  self, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMWriteImplementationMethod::_node*/ =  variable2 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMWriteImplementationMethod].i] = 1;
  tracehead = trace.prev;
  return;
}
void syntax_base___MMMethSrcMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMMethSrcMethod::init (src/syntax//syntax_base.nit:162,2--165:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMMethSrcMethod].i]) return;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self,  variable0 /*name*/,  variable1 /*cla*/,  self, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMMethSrcMethod::_node*/ =  variable2 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMMethSrcMethod].i] = 1;
  tracehead = trace.prev;
  return;
}
void syntax_base___MMSrcTypeProperty___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::MMSrcTypeProperty::init (src/syntax//syntax_base.nit:173,2--176:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcTypeProperty].i]) return;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self,  variable0 /*name*/,  variable1 /*cla*/,  self, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ATTR_syntax_base___MMSrcLocalProperty____node( self) /*MMSrcTypeProperty::_node*/ =  variable2 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcTypeProperty].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___Variable___name(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::Variable::name (src/syntax//syntax_base.nit:183,2--184:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___Variable____name( self) /*Variable::_name*/;
}
val_t syntax_base___Variable___decl(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::Variable::decl (src/syntax//syntax_base.nit:186,2--187:27)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___Variable____decl( self) /*Variable::_decl*/;
}
val_t syntax_base___Variable___stype(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::Variable::stype (src/syntax//syntax_base.nit:189,2--190:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___Variable____stype( self) /*Variable::_stype*/;
}
void syntax_base___Variable___stype__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::Variable::stype= (src/syntax//syntax_base.nit:189,2--190:38)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax_base___Variable____stype( self) /*Variable::_stype*/ =  param0;
  tracehead = trace.prev;
  return;
}
void syntax_base___Variable___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::Variable::init (src/syntax//syntax_base.nit:192,2--197:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Variable].i]) return;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*n*/ ==  NIT_NULL /*null*/) || (( variable0 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*n*/,COLOR_kernel___Object_____eqeq))( variable0 /*n*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/syntax//syntax_base.nit:194,3--18\n"); nit_exit(1);}
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*d*/ ==  NIT_NULL /*null*/) || (( variable1 /*d*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*d*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*d*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*d*/,COLOR_kernel___Object_____eqeq))( variable1 /*d*/,  NIT_NULL /*null*/) /*PNode::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/syntax//syntax_base.nit:195,3--18\n"); nit_exit(1);}
  ATTR_syntax_base___Variable____name( self) /*Variable::_name*/ =  variable0 /*n*/;
  ATTR_syntax_base___Variable____decl( self) /*Variable::_decl*/ =  variable1 /*d*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Variable].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AbsSyntaxVisitor___type_bool(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_bool (src/syntax//syntax_base.nit:206,2--209:64)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_11; static int once_bool_variable1_11;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_11) variable1 = once_value_variable1_11;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Bool"), TAG_Int(4)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_11 = variable1;
    once_bool_variable1_11 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_int(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_int (src/syntax//syntax_base.nit:212,2--215:63)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_13; static int once_bool_variable1_13;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_13) variable1 = once_value_variable1_13;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Int"), TAG_Int(3)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_13 = variable1;
    once_bool_variable1_13 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_float(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_float (src/syntax//syntax_base.nit:218,2--221:65)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_15; static int once_bool_variable1_15;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_15) variable1 = once_value_variable1_15;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Float"), TAG_Int(5)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_15 = variable1;
    once_bool_variable1_15 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_char(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_char (src/syntax//syntax_base.nit:224,2--227:64)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_17; static int once_bool_variable1_17;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_17) variable1 = once_value_variable1_17;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Char"), TAG_Int(4)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_17 = variable1;
    once_bool_variable1_17 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_string(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_string (src/syntax//syntax_base.nit:230,2--233:66)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_19; static int once_bool_variable1_19;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_19) variable1 = once_value_variable1_19;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("String"), TAG_Int(6)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_19 = variable1;
    once_bool_variable1_19 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_collection(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_collection (src/syntax//syntax_base.nit:236,2--239:70)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_21; static int once_bool_variable1_21;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_21) variable1 = once_value_variable1_21;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Collection"), TAG_Int(10)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_21 = variable1;
    once_bool_variable1_21 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_array(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_array (src/syntax//syntax_base.nit:242,2--245:84)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  static val_t once_value_variable2_23; static int once_bool_variable2_23;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable2_23) variable2 = once_value_variable2_23;
  else {
    variable2 = NEW_string___String___with_native(BOX_NativeString("Array"), TAG_Int(5)); /*new String*/
    variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
    once_value_variable2_23 = variable2;
    once_bool_variable2_23 = true;
  }
  variable1 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable1,COLOR_abstractmetamodel___MMModule___class_by_name))(variable1, variable2) /*MMSrcModule::class_by_name*/;
  variable2 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[MMType]*/
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*stype*/) /*Array::add*/;
  variable1 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL(variable1,COLOR_genericity___MMLocalClass___get_instantiate_type))(variable1, variable2) /*MMLocalClass::get_instantiate_type*/;
  goto return_label22;
  return_label22: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t syntax_base___AbsSyntaxVisitor___type_discrete(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_discrete (src/syntax//syntax_base.nit:248,2--251:68)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_25; static int once_bool_variable1_25;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable1_25) variable1 = once_value_variable1_25;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Discrete"), TAG_Int(8)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_25 = variable1;
    once_bool_variable1_25 = true;
  }
  variable0 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___class_by_name))(variable0, variable1) /*MMSrcModule::class_by_name*/;
  variable0 = ((genericity___MMLocalClass___get_type_t)CALL(variable0,COLOR_static_type___MMLocalClass___get_type))(variable0) /*MMLocalClass::get_type*/;
  goto return_label24;
  return_label24: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___type_range(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_range (src/syntax//syntax_base.nit:254,2--257:84)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  static val_t once_value_variable2_27; static int once_bool_variable2_27;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  if (once_bool_variable2_27) variable2 = once_value_variable2_27;
  else {
    variable2 = NEW_string___String___with_native(BOX_NativeString("Range"), TAG_Int(5)); /*new String*/
    variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
    once_value_variable2_27 = variable2;
    once_bool_variable2_27 = true;
  }
  variable1 = ((abstractmetamodel___MMModule___class_by_name_t)CALL(variable1,COLOR_abstractmetamodel___MMModule___class_by_name))(variable1, variable2) /*MMSrcModule::class_by_name*/;
  variable2 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[MMType]*/
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*stype*/) /*Array::add*/;
  variable1 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL(variable1,COLOR_genericity___MMLocalClass___get_instantiate_type))(variable1, variable2) /*MMLocalClass::get_instantiate_type*/;
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t syntax_base___AbsSyntaxVisitor___type_none(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::type_none (src/syntax//syntax_base.nit:260,2--263:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
  variable0 = ((static_type___MMModule___type_none_t)CALL(variable0,COLOR_static_type___MMModule___type_none))(variable0) /*MMSrcModule::type_none*/;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___AbsSyntaxVisitor___module(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::module (src/syntax//syntax_base.nit:266,2--267:44)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/;
}
void syntax_base___AbsSyntaxVisitor___module__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::module= (src/syntax//syntax_base.nit:266,2--267:44)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AbsSyntaxVisitor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::local_class (src/syntax//syntax_base.nit:269,2--270:53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___AbsSyntaxVisitor____local_class( self) /*AbsSyntaxVisitor::_local_class*/;
}
void syntax_base___AbsSyntaxVisitor___local_class__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::local_class= (src/syntax//syntax_base.nit:269,2--270:53)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax_base___AbsSyntaxVisitor____local_class( self) /*AbsSyntaxVisitor::_local_class*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AbsSyntaxVisitor___local_property(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::local_property (src/syntax//syntax_base.nit:272,2--273:59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___AbsSyntaxVisitor____local_property( self) /*AbsSyntaxVisitor::_local_property*/;
}
void syntax_base___AbsSyntaxVisitor___local_property__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::local_property= (src/syntax//syntax_base.nit:272,2--273:59)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_syntax_base___AbsSyntaxVisitor____local_property( self) /*AbsSyntaxVisitor::_local_property*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AbsSyntaxVisitor___tc(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::tc (src/syntax//syntax_base.nit:275,2--276:31)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_syntax_base___AbsSyntaxVisitor____tc( self) /*AbsSyntaxVisitor::_tc*/;
}
void syntax_base___AbsSyntaxVisitor___error(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::error (src/syntax//syntax_base.nit:278,2--281:29)"};
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
  variable2 = ATTR_syntax_base___AbsSyntaxVisitor____tc( self) /*AbsSyntaxVisitor::_tc*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((parser_prod___PNode___locate_t)CALL( variable0 /*n*/,COLOR_parser_prod___PNode___locate))( variable0 /*n*/) /*PNode::locate*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 =  variable1 /*s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  ((mmloader___ToolContext___error_t)CALL(variable2,COLOR_mmloader___ToolContext___error))(variable2, variable3) /*ToolContext::error*/;
  tracehead = trace.prev;
  return;
}
void syntax_base___AbsSyntaxVisitor___warning(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::warning (src/syntax//syntax_base.nit:284,2--287:31)"};
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
  variable2 = ATTR_syntax_base___AbsSyntaxVisitor____tc( self) /*AbsSyntaxVisitor::_tc*/;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((parser_prod___PNode___locate_t)CALL( variable0 /*n*/,COLOR_parser_prod___PNode___locate))( variable0 /*n*/) /*PNode::locate*/;
  variable7 = variable6;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 =  variable1 /*s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable12) /*String::append*/;
  ((mmloader___ToolContext___warning_t)CALL(variable2,COLOR_mmloader___ToolContext___warning))(variable2, variable3) /*ToolContext::warning*/;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AbsSyntaxVisitor___check_conform(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::check_conform (src/syntax//syntax_base.nit:290,2--300:14)"};
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
  variable2 =  param2;
  variable3 = TAG_Bool(( variable2 /*stype*/ ==  NIT_NULL /*null*/) || (( variable2 /*stype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*stype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*stype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*stype*/,COLOR_kernel___Object_____eqeq))( variable2 /*stype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  variable4 = variable3;
  if (!UNTAG_Bool(variable4)) { /* or */
    variable4 = TAG_Bool(( variable1 /*subtype*/ ==  NIT_NULL /*null*/) || (( variable1 /*subtype*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*subtype*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*subtype*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*subtype*/,COLOR_kernel___Object_____eqeq))( variable1 /*subtype*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  }
  variable3 = variable4;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 =  TAG_Bool(false);
    goto return_label31;
  }
  variable3 = ((static_type___MMType_____l_t)CALL( variable1 /*subtype*/,COLOR_static_type___MMType_____l))( variable1 /*subtype*/,  variable2 /*stype*/) /*MMType::<*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 =  TAG_Bool(true);
    goto return_label31;
  }
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("Type error: expected "), TAG_Int(21)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 =  variable2 /*stype*/;
  variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString(", got "), TAG_Int(6)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable8) /*String::append*/;
  variable9 =  variable1 /*subtype*/;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  ((syntax_base___AbsSyntaxVisitor___error_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___error))( self,  variable0 /*n*/, variable3) /*AbsSyntaxVisitor::error*/;
  variable3 =  TAG_Bool(false);
  goto return_label31;
  return_label31: while(false);
  tracehead = trace.prev;
  return variable3;
}
void syntax_base___AbsSyntaxVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "syntax_base::AbsSyntaxVisitor::init (src/syntax//syntax_base.nit:304,2--307:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_AbsSyntaxVisitor].i]) return;
  ATTR_syntax_base___AbsSyntaxVisitor____tc( self) /*AbsSyntaxVisitor::_tc*/ =  variable0 /*tc*/;
  ATTR_syntax_base___AbsSyntaxVisitor____module( self) /*AbsSyntaxVisitor::_module*/ =  variable1 /*module*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_AbsSyntaxVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void syntax_base___PNode___accept_abs_syntax_visitor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::PNode::accept_abs_syntax_visitor (src/syntax//syntax_base.nit:314,2--77)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((parser_prod___PNode___visit_all_t)CALL( self,COLOR_parser_prod___PNode___visit_all))( self,  variable0 /*v*/) /*PNode::visit_all*/;
  tracehead = trace.prev;
  return;
}
val_t syntax_base___Token___to_symbol(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::Token::to_symbol (src/syntax//syntax_base.nit:320,2--329:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_syntax_base___Token____symbol( self) /*Token::_symbol*/;
  variable0 = variable1;
  variable1 = TAG_Bool(( variable0 /*s*/ ==  NIT_NULL /*null*/) || (( variable0 /*s*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*s*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*s*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*s*/,COLOR_kernel___Object_____eqeq))( variable0 /*s*/,  NIT_NULL /*null*/) /*Symbol::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((lexer___Token___text_t)CALL( self,COLOR_lexer___Token___text))( self) /*Token::text*/;
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    variable0 = variable1 /*s=*/;
    ATTR_syntax_base___Token____symbol( self) /*Token::_symbol*/ =  variable0 /*s*/;
  }
  variable0 =  variable0 /*s*/;
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t syntax_base___PClassdef___local_class(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::PClassdef::local_class (src/syntax//syntax_base.nit:334,2--335:34)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method local_class called (src/syntax//syntax_base.nit:334,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___AAttrPropdef___prop(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AAttrPropdef::prop (src/syntax//syntax_base.nit:339,2--340:26)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method prop called (src/syntax//syntax_base.nit:339,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___AAttrPropdef___readmethod(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AAttrPropdef::readmethod (src/syntax//syntax_base.nit:342,2--343:29)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method readmethod called (src/syntax//syntax_base.nit:342,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___AAttrPropdef___writemethod(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AAttrPropdef::writemethod (src/syntax//syntax_base.nit:345,2--346:30)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method writemethod called (src/syntax//syntax_base.nit:345,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___AMethPropdef___method(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::AMethPropdef::method (src/syntax//syntax_base.nit:350,2--351:29)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method method called (src/syntax//syntax_base.nit:350,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___ATypePropdef___prop(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::ATypePropdef::prop (src/syntax//syntax_base.nit:355,2--356:29)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method prop called (src/syntax//syntax_base.nit:355,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___PParam___position(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::PParam::position (src/syntax//syntax_base.nit:360,2--361:19)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method position called (src/syntax//syntax_base.nit:360,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___PParam___variable(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::PParam::variable (src/syntax//syntax_base.nit:363,2--364:24)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method variable called (src/syntax//syntax_base.nit:363,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___PType___get_local_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::PType::get_local_class (src/syntax//syntax_base.nit:368,2--371:56)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method get_local_class called (src/syntax//syntax_base.nit:368,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___PType___get_stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::PType::get_stype (src/syntax//syntax_base.nit:373,2--375:44)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method get_stype called (src/syntax//syntax_base.nit:373,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t syntax_base___PType___get_unchecked_stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::PType::get_unchecked_stype (src/syntax//syntax_base.nit:377,2--381:54)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method get_unchecked_stype called (src/syntax//syntax_base.nit:377,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void syntax_base___PType___check_conform(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::PType::check_conform (src/syntax//syntax_base.nit:383,2--386:39)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method check_conform called (src/syntax//syntax_base.nit:383,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t syntax_base___AType___get_local_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AType::get_local_class (src/syntax//syntax_base.nit:393,2--413:20)"};
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
  variable2 = ((parser_nodes___AType___n_id_t)CALL( self,COLOR_parser_nodes___AType___n_id))( self) /*AType::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TClassid::to_symbol*/;
  variable1 = variable2;
  variable3 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*AbsSyntaxVisitor::module*/;
  variable2 = variable3;
  variable4 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*AbsSyntaxVisitor::local_class*/;
  variable3 = variable4;
  variable4 = ((syntax_base___MMSrcLocalClass___formal_dict_t)CALL( variable3 /*cla*/,COLOR_syntax_base___MMSrcLocalClass___formal_dict))( variable3 /*cla*/) /*MMSrcLocalClass::formal_dict*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*Map::==*/)))))));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ((syntax_base___MMSrcLocalClass___formal_dict_t)CALL( variable3 /*cla*/,COLOR_syntax_base___MMSrcLocalClass___formal_dict))( variable3 /*cla*/) /*MMSrcLocalClass::formal_dict*/;
    variable5 = ((abstract_collection___Map___has_key_t)CALL(variable5,COLOR_abstract_collection___Map___has_key))(variable5,  variable1 /*name*/) /*Map::has_key*/;
  }
  variable4 = variable5;
  variable5 = variable4;
  if (!UNTAG_Bool(variable5)) { /* or */
    variable5 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( variable3 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___global_properties))( variable3 /*cla*/) /*MMSrcLocalClass::global_properties*/;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*Set::==*/)))))));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = ((abstractmetamodel___MMLocalClass___has_global_property_by_name_t)CALL( variable3 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___has_global_property_by_name))( variable3 /*cla*/,  variable1 /*name*/) /*MMSrcLocalClass::has_global_property_by_name*/;
    }
    variable5 = variable6;
  }
  variable4 = variable5;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((parser_nodes___AType___n_id_t)CALL( self,COLOR_parser_nodes___AType___n_id))( self) /*AType::n_id*/;
    variable5 = NEW_string___String___init(); /*new String*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("Type error: "), TAG_Int(12)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
    variable8 =  variable1 /*name*/;
    variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(" is a formal type"), TAG_Int(17)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable4, variable5) /*AbsSyntaxVisitor::error*/;
    ATTR_syntax_base___AType____stype_cached( self) /*AType::_stype_cached*/ =  TAG_Bool(true);
    variable1 =  NIT_NULL /*null*/;
    goto return_label35;
  }
  variable4 = ((abstractmetamodel___MMModule___has_global_class_named_t)CALL( variable2 /*mod*/,COLOR_abstractmetamodel___MMModule___has_global_class_named))( variable2 /*mod*/,  variable1 /*name*/) /*MMSrcModule::has_global_class_named*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable4)))) { /*if*/
    variable4 = ((parser_nodes___AType___n_id_t)CALL( self,COLOR_parser_nodes___AType___n_id))( self) /*AType::n_id*/;
    variable5 = NEW_string___String___init(); /*new String*/
    variable6 = NEW_string___String___with_native(BOX_NativeString("Type error: class "), TAG_Int(18)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
    variable8 =  variable1 /*name*/;
    variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(" not found in module "), TAG_Int(21)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
    variable11 =  variable2 /*mod*/;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable4, variable5) /*AbsSyntaxVisitor::error*/;
    ATTR_syntax_base___AType____stype_cached( self) /*AType::_stype_cached*/ =  TAG_Bool(true);
    variable1 =  NIT_NULL /*null*/;
    goto return_label35;
  }
  variable5 = ((abstractmetamodel___MMModule___class_by_name_t)CALL( variable2 /*mod*/,COLOR_abstractmetamodel___MMModule___class_by_name))( variable2 /*mod*/,  variable1 /*name*/) /*MMSrcModule::class_by_name*/;
  variable4 = variable5;
  variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable4 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable4 /*local_class*/) /*MMLocalClass::global*/;
  ((syntax_base___MMGlobalClass___check_visibility_t)CALL(variable5,COLOR_syntax_base___MMGlobalClass___check_visibility))(variable5,  variable0 /*v*/,  self,  variable2 /*mod*/) /*MMGlobalClass::check_visibility*/;
  variable1 =  variable4 /*local_class*/;
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t syntax_base___AType___get_unchecked_stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AType::get_unchecked_stype (src/syntax//syntax_base.nit:416,2--469:11)"};
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
  variable1 = ATTR_syntax_base___AType____stype_cached( self) /*AType::_stype_cached*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_syntax_base___AType____stype_cache( self) /*AType::_stype_cache*/;
    goto return_label36;
  }
  ATTR_syntax_base___AType____stype_cached( self) /*AType::_stype_cached*/ =  TAG_Bool(true);
  variable2 = ((parser_nodes___AType___n_id_t)CALL( self,COLOR_parser_nodes___AType___n_id))( self) /*AType::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TClassid::to_symbol*/;
  variable1 = variable2;
  variable3 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*AbsSyntaxVisitor::module*/;
  variable2 = variable3;
  variable4 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*AbsSyntaxVisitor::local_class*/;
  variable3 = variable4;
  variable4 = ((syntax_base___MMSrcLocalClass___formal_dict_t)CALL( variable3 /*cla*/,COLOR_syntax_base___MMSrcLocalClass___formal_dict))( variable3 /*cla*/) /*MMSrcLocalClass::formal_dict*/;
  variable4 = ((abstract_collection___Map___has_key_t)CALL(variable4,COLOR_abstract_collection___Map___has_key))(variable4,  variable1 /*name*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
    variable4 = ((list___List___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*List::length*/;
    variable4 = TAG_Bool(UNTAG_Int(variable4)>UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Type error: formal type "), TAG_Int(24)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable1 /*name*/;
      variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(" cannot have formal parameters."), TAG_Int(31)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*AbsSyntaxVisitor::error*/;
      variable1 =  NIT_NULL /*null*/;
      goto return_label36;
    }
    variable5 = ((syntax_base___MMSrcLocalClass___formal_dict_t)CALL( variable3 /*cla*/,COLOR_syntax_base___MMSrcLocalClass___formal_dict))( variable3 /*cla*/) /*MMSrcLocalClass::formal_dict*/;
    variable5 = ((abstract_collection___Map_____bra_t)CALL(variable5,COLOR_abstract_collection___Map_____bra))(variable5,  variable1 /*name*/) /*Map::[]*/;
    variable4 = variable5;
    ATTR_syntax_base___AType____stype_cache( self) /*AType::_stype_cache*/ =  variable4 /*formal*/;
    variable1 =  variable4 /*formal*/;
    goto return_label36;
  }
  variable4 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( variable3 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___global_properties))( variable3 /*cla*/) /*MMSrcLocalClass::global_properties*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*Set::==*/)))))));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ((abstractmetamodel___MMLocalClass___has_global_property_by_name_t)CALL( variable3 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___has_global_property_by_name))( variable3 /*cla*/,  variable1 /*name*/) /*MMSrcLocalClass::has_global_property_by_name*/;
  }
  variable4 = variable5;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
    variable4 = ((list___List___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*List::length*/;
    variable4 = TAG_Bool(UNTAG_Int(variable4)>UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Type error: formal type "), TAG_Int(24)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable1 /*name*/;
      variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(" cannot have formal parameters."), TAG_Int(31)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*AbsSyntaxVisitor::error*/;
      variable1 =  NIT_NULL /*null*/;
      goto return_label36;
    }
    variable5 = ((genericity___MMLocalClass___get_type_t)CALL( variable3 /*cla*/,COLOR_static_type___MMLocalClass___get_type))( variable3 /*cla*/) /*MMSrcLocalClass::get_type*/;
    variable5 = ((virtualtype___MMType___select_virtual_type_t)CALL(variable5,COLOR_virtualtype___MMType___select_virtual_type))(variable5,  variable1 /*name*/) /*MMType::select_virtual_type*/;
    variable5 = ((virtualtype___MMTypeProperty___stype_t)CALL(variable5,COLOR_virtualtype___MMTypeProperty___stype))(variable5) /*MMTypeProperty::stype*/;
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*t*/ ==  NIT_NULL /*null*/) || (( variable4 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))( variable4 /*t*/,  NIT_NULL /*null*/) /*MMVirtualType::==*/)))));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Type error: circular definition in formal type "), TAG_Int(47)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  variable1 /*name*/;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*AbsSyntaxVisitor::error*/;
      variable1 =  NIT_NULL /*null*/;
      goto return_label36;
    }
    ATTR_syntax_base___AType____stype_cache( self) /*AType::_stype_cache*/ =  variable4 /*t*/;
    variable1 =  variable4 /*t*/;
    goto return_label36;
  }
  variable5 = ((syntax_base___AType___get_local_class_t)CALL( self,COLOR_syntax_base___PType___get_local_class))( self,  variable0 /*v*/) /*AType::get_local_class*/;
  variable4 = variable5;
  variable5 = TAG_Bool(( variable4 /*local_class*/ ==  NIT_NULL /*null*/) || (( variable4 /*local_class*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*local_class*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*local_class*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*local_class*/,COLOR_kernel___Object_____eqeq))( variable4 /*local_class*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label36;
  }
  variable6 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
  variable6 = ((list___List___length_t)CALL(variable6,COLOR_abstract_collection___Collection___length))(variable6) /*List::length*/;
  variable5 = variable6;
  variable6 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( variable4 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___arity))( variable4 /*local_class*/) /*MMLocalClass::arity*/;
  variable6 = TAG_Bool((variable6)!=( variable5 /*arity*/));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("Type error: '"), TAG_Int(13)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 =  variable4 /*local_class*/;
    variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
    variable10 = NEW_string___String___with_native(BOX_NativeString("' has "), TAG_Int(6)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
    variable12 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( variable4 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___arity))( variable4 /*local_class*/) /*MMLocalClass::arity*/;
    variable13 = variable12;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(" parameters which differs from the "), TAG_Int(35)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
    variable16 =  variable5 /*arity*/;
    variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
    variable17 = NEW_string___String___with_native(BOX_NativeString(" params."), TAG_Int(8)); /*new String*/
    variable18 = variable17;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*AbsSyntaxVisitor::error*/;
    variable1 =  NIT_NULL /*null*/;
    goto return_label36;
  }
  variable6 = TAG_Bool(UNTAG_Int( variable5 /*arity*/)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable7 = NEW_array___Array___init(); /*new Array[MMType]*/
    variable6 = variable7;
    variable7 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
    variable7 = ((list___List___iterator_t)CALL(variable7,COLOR_abstract_collection___Collection___iterator))(variable7) /*List::iterator*/;
    while (true) { /*for*/
      variable8 = ((list___ListIterator___is_ok_t)CALL(variable7,COLOR_abstract_collection___Iterator___is_ok))(variable7) /*ListIterator::is_ok*/;
      if (!UNTAG_Bool(variable8)) break; /*for*/
      variable8 = ((list___ListIterator___item_t)CALL(variable7,COLOR_abstract_collection___Iterator___item))(variable7) /*ListIterator::item*/;
      variable9 = ((syntax_base___PType___get_unchecked_stype_t)CALL( variable8 /*p*/,COLOR_syntax_base___PType___get_unchecked_stype))( variable8 /*p*/,  variable0 /*v*/) /*PType::get_unchecked_stype*/;
      ((array___AbstractArray___add_t)CALL( variable6 /*tab*/,COLOR_abstract_collection___SimpleCollection___add))( variable6 /*tab*/, variable9) /*Array::add*/;
      continue_37: while(0);
      ((list___ListIterator___next_t)CALL(variable7,COLOR_abstract_collection___Iterator___next))(variable7) /*ListIterator::next*/;
    }
    break_37: while(0);
    variable8 = ((genericity___MMLocalClass___get_instantiate_type_t)CALL( variable4 /*local_class*/,COLOR_genericity___MMLocalClass___get_instantiate_type))( variable4 /*local_class*/,  variable6 /*tab*/) /*MMLocalClass::get_instantiate_type*/;
    variable7 = variable8;
    ATTR_syntax_base___AType____stype_cache( self) /*AType::_stype_cache*/ =  variable7 /*t*/;
    variable1 =  variable7 /*t*/;
    goto return_label36;
  } else { /*if*/
    variable7 = ((genericity___MMLocalClass___get_type_t)CALL( variable4 /*local_class*/,COLOR_static_type___MMLocalClass___get_type))( variable4 /*local_class*/) /*MMLocalClass::get_type*/;
    variable6 = variable7;
    ATTR_syntax_base___AType____stype_cache( self) /*AType::_stype_cache*/ =  variable6 /*t*/;
    variable1 =  variable6 /*t*/;
    goto return_label36;
  }
  return_label36: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t syntax_base___AType___get_stype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AType::get_stype (src/syntax//syntax_base.nit:473,2--477:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((syntax_base___AType___get_unchecked_stype_t)CALL( self,COLOR_syntax_base___PType___get_unchecked_stype))( self,  variable0 /*v*/) /*AType::get_unchecked_stype*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((syntax_base___AType___check_conform_t)CALL( self,COLOR_syntax_base___PType___check_conform))( self,  variable0 /*v*/) /*AType::check_conform*/;
  }
  variable1 =  variable1 /*t*/;
  goto return_label38;
  return_label38: while(false);
  tracehead = trace.prev;
  return variable1;
}
void syntax_base___AType___check_conform(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "syntax_base::AType::check_conform (src/syntax//syntax_base.nit:480,2--493:29)"};
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
  variable2 = ((syntax_base___AType___get_unchecked_stype_t)CALL( self,COLOR_syntax_base___PType___get_unchecked_stype))( self,  variable0 /*v*/) /*AType::get_unchecked_stype*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*st*/ ==  NIT_NULL /*null*/) || (( variable1 /*st*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*st*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*st*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*st*/,COLOR_kernel___Object_____eqeq))( variable1 /*st*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label39;
  }
  variable3 = ((static_type___MMType___local_class_t)CALL( variable1 /*st*/,COLOR_static_type___MMType___local_class))( variable1 /*st*/) /*MMType::local_class*/;
  variable2 = variable3;
  variable4 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
  variable4 = ((list___List___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*List::length*/;
  variable3 = variable4;
  variable4 = TAG_Bool(UNTAG_Int( variable3 /*arity*/)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_range___Range___without_last( TAG_Int(0),  variable3 /*arity*/); /*new Range[Int]*/
    variable4 = ((range___Range___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Range::iterator*/;
    while (true) { /*for*/
      variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
      variable7 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
      variable7 = ((list___List_____bra_t)CALL(variable7,COLOR_abstract_collection___Map_____bra))(variable7,  variable5 /*i*/) /*List::[]*/;
      variable6 = variable7;
      variable8 = ((syntax_base___PType___get_stype_t)CALL( variable6 /*p*/,COLOR_syntax_base___PType___get_stype))( variable6 /*p*/,  variable0 /*v*/) /*PType::get_stype*/;
      variable7 = variable8;
      variable9 = ((genericity___MMLocalClass___get_formal_t)CALL( variable2 /*local_class*/,COLOR_genericity___MMLocalClass___get_formal))( variable2 /*local_class*/,  variable5 /*i*/) /*MMLocalClass::get_formal*/;
      variable9 = ((type_formal___MMTypeFormal___bound_t)CALL(variable9,COLOR_type_formal___MMTypeFormal___bound))(variable9) /*MMTypeFormalParameter::bound*/;
      variable8 = variable9;
      variable9 = TAG_Bool(( variable8 /*bt*/ ==  NIT_NULL /*null*/) || (( variable8 /*bt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable8 /*bt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable8 /*bt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable8 /*bt*/,COLOR_kernel___Object_____eqeq))( variable8 /*bt*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
      if (UNTAG_Bool(variable9)) { /*if*/
        goto return_label39;
      }
      variable9 = ((static_type___MMType___adapt_to_t)CALL( variable8 /*bt*/,COLOR_static_type___MMType___adapt_to))( variable8 /*bt*/,  variable1 /*st*/) /*MMType::adapt_to*/;
      variable8 = variable9 /*bt=*/;
      ((syntax_base___AbsSyntaxVisitor___check_conform_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___check_conform))( variable0 /*v*/,  variable6 /*p*/,  variable7 /*pt*/,  variable8 /*bt*/) /*AbsSyntaxVisitor::check_conform*/;
      continue_40: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
    }
    break_40: while(0);
  }
  return_label39: while(false);
  tracehead = trace.prev;
  return;
}
val_t syntax_base___PExpr___stype(val_t  self) {
  struct trace_t trace = {NULL, "syntax_base::PExpr::stype (src/syntax//syntax_base.nit:500,2--502:19)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method stype called (src/syntax//syntax_base.nit:500,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
