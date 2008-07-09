#include "file._sep.h"
void file___Object___printn(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::Object::printn (bin/../lib/standard//file.nit:24,2--27:27)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  /* check if p<Array[Object] with p:Object */
  if (( param0!=NIT_NULL) && !VAL_ISA( param0, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//file.nit:25,24--41\n"); nit_exit(1); } /*cast Array[Object]*/;
  variable0 =  param0;
  variable1 = ((file___Object___stdout_t)CALL( self,COLOR_file___Object___stdout))( self) /*Object::stdout*/;
  variable2 = ((string___Collection___to_s_t)CALL( variable0 /*objects*/,COLOR_string___Object___to_s))( variable0 /*objects*/) /*Array::to_s*/;
  ((file___OFStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1, variable2) /*OFStream::write*/;
  tracehead = trace.prev;
  return;
}
void file___Object___print(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::Object::print (bin/../lib/standard//file.nit:30,2--36:19)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*object*/ ==  NIT_NULL /*null*/) || (( variable0 /*object*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*object*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*object*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*object*/,COLOR_kernel___Object_____eqeq))( variable0 /*object*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((file___Object___stdout_t)CALL( self,COLOR_file___Object___stdout))( self) /*Object::stdout*/;
    variable2 = ((string___Object___to_s_t)CALL( variable0 /*object*/,COLOR_string___Object___to_s))( variable0 /*object*/) /*Object::to_s*/;
    ((file___OFStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1, variable2) /*OFStream::write*/;
  }
  variable1 = ((file___Object___stdout_t)CALL( self,COLOR_file___Object___stdout))( self) /*Object::stdout*/;
  variable2 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
  ((file___OFStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1, variable2) /*OFStream::write*/;
  tracehead = trace.prev;
  return;
}
val_t file___Object___getc(val_t  self) {
  struct trace_t trace = {NULL, "file::Object::getc (bin/../lib/standard//file.nit:39,2--42:30)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((file___Object___stdin_t)CALL( self,COLOR_file___Object___stdin))( self) /*Object::stdin*/;
  variable0 = ((stream___BufferedIStream___read_char_t)CALL(variable0,COLOR_stream___IStream___read_char))(variable0) /*IFStream::read_char*/;
  variable0 = TAG_Char(UNTAG_Int(variable0));
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___Object___gets(val_t  self) {
  struct trace_t trace = {NULL, "file::Object::gets (bin/../lib/standard//file.nit:45,2--48:24)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((file___Object___stdin_t)CALL( self,COLOR_file___Object___stdin))( self) /*Object::stdin*/;
  variable0 = ((stream___IStream___read_line_t)CALL(variable0,COLOR_stream___IStream___read_line))(variable0) /*IFStream::read_line*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___Object___stdin(val_t  self) {
  struct trace_t trace = {NULL, "file::Object::stdin (bin/../lib/standard//file.nit:288,1--289:45)"};
  val_t variable0;
  static val_t once_value_variable0_5; static int once_bool_variable0_5;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_5) variable0 = once_value_variable0_5;
  else {
    variable0 = NEW_file___Stdin___init(); /*new Stdin*/
    once_value_variable0_5 = variable0;
    once_bool_variable0_5 = true;
  }
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___Object___stdout(val_t  self) {
  struct trace_t trace = {NULL, "file::Object::stdout (bin/../lib/standard//file.nit:291,1--292:47)"};
  val_t variable0;
  static val_t once_value_variable0_7; static int once_bool_variable0_7;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_7) variable0 = once_value_variable0_7;
  else {
    variable0 = NEW_file___Stdout___init(); /*new Stdout*/
    once_value_variable0_7 = variable0;
    once_bool_variable0_7 = true;
  }
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___Object___stderr(val_t  self) {
  struct trace_t trace = {NULL, "file::Object::stderr (bin/../lib/standard//file.nit:294,1--295:47)"};
  val_t variable0;
  static val_t once_value_variable0_9; static int once_bool_variable0_9;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_9) variable0 = once_value_variable0_9;
  else {
    variable0 = NEW_file___Stderr___init(); /*new Stderr*/
    once_value_variable0_9 = variable0;
    once_bool_variable0_9 = true;
  }
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___FStream___path(val_t  self) {
  struct trace_t trace = {NULL, "file::FStream::path (bin/../lib/standard//file.nit:57,2--58:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_file___FStream____path( self) /*FStream::_path*/;
}
val_t file___FStream___file_stat(val_t  self) {
  struct trace_t trace = {NULL, "file::FStream::file_stat (bin/../lib/standard//file.nit:63,2--64:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_file___FStream____file( self) /*FStream::_file*/;
  variable0 = ((file___NativeFile___file_stat_t)CALL(variable0,COLOR_file___NativeFile___file_stat))(variable0) /*NativeFile::file_stat*/;
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
void file___IFStream___reopen(val_t  self) {
  struct trace_t trace = {NULL, "file::IFStream::reopen (bin/../lib/standard//file.nit:73,2--79:15)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((stream___BufferedIStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*IFStream::eof*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { /*if*/
    ((file___IFStream___close_t)CALL( self,COLOR_stream___IOS___close))( self) /*IFStream::close*/;
  }
  variable0 = ATTR_file___FStream____path( self) /*IFStream::_path*/;
  variable0 = ((string___String___to_cstring_t)CALL(variable0,COLOR_string___String___to_cstring))(variable0) /*String::to_cstring*/;
  variable0 = ((file___NativeFileCapable___io_open_read_t)CALL( self,COLOR_file___NativeFileCapable___io_open_read))( self, variable0) /*IFStream::io_open_read*/;
  ATTR_file___FStream____file( self) /*IFStream::_file*/ = variable0;
  ATTR_file___IFStream____end_reached( self) /*IFStream::_end_reached*/ =  TAG_Bool(false);
  ATTR_stream___BufferedIStream____buffer_pos( self) /*IFStream::_buffer_pos*/ =  TAG_Int(0);
  variable0 = ATTR_stream___BufferedIStream____buffer( self) /*IFStream::_buffer*/;
  ((array___AbstractArray___clear_t)CALL(variable0,COLOR_abstract_collection___RemovableCollection___clear))(variable0) /*String::clear*/;
  tracehead = trace.prev;
  return;
}
void file___IFStream___close(val_t  self) {
  struct trace_t trace = {NULL, "file::IFStream::close (bin/../lib/standard//file.nit:82,2--85:21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_file___FStream____file( self) /*IFStream::_file*/;
  variable1 = ((file___NativeFile___io_close_t)CALL(variable1,COLOR_file___NativeFile___io_close))(variable1) /*NativeFile::io_close*/;
  variable0 = variable1;
  ATTR_file___IFStream____end_reached( self) /*IFStream::_end_reached*/ =  TAG_Bool(true);
  tracehead = trace.prev;
  return;
}
void file___IFStream___fill_buffer(val_t  self) {
  struct trace_t trace = {NULL, "file::IFStream::fill_buffer (bin/../lib/standard//file.nit:88,2--97:17)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_file___FStream____file( self) /*IFStream::_file*/;
  variable2 = ATTR_stream___BufferedIStream____buffer( self) /*IFStream::_buffer*/;
  variable2 = ATTR_string___String____items(variable2) /*String::_items*/;
  variable3 = ATTR_stream___BufferedIStream____buffer( self) /*IFStream::_buffer*/;
  variable3 = ATTR_string___String____capacity(variable3) /*String::_capacity*/;
  variable1 = ((file___NativeFile___io_read_t)CALL(variable1,COLOR_file___NativeFile___io_read))(variable1, variable2, variable3) /*NativeFile::io_read*/;
  variable0 = variable1;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*nb*/)<=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    ATTR_file___IFStream____end_reached( self) /*IFStream::_end_reached*/ =  TAG_Bool(true);
    variable0 =  TAG_Int(0) /*nb=*/;
  }
  variable1 = ATTR_stream___BufferedIStream____buffer( self) /*IFStream::_buffer*/;
  ATTR_array___AbstractArray____length(variable1) /*String::_length*/ =  variable0 /*nb*/;
  ATTR_stream___BufferedIStream____buffer_pos( self) /*IFStream::_buffer_pos*/ =  TAG_Int(0);
  tracehead = trace.prev;
  return;
}
val_t file___IFStream___end_reached(val_t  self) {
  struct trace_t trace = {NULL, "file::IFStream::end_reached (bin/../lib/standard//file.nit:100,2--101:39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_file___IFStream____end_reached( self) /*IFStream::_end_reached*/;
}
void file___IFStream___open(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "file::IFStream::open (bin/../lib/standard//file.nit:103,2--109:38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IFStream].i]) return;
  ATTR_file___FStream____path( self) /*IFStream::_path*/ =  variable0 /*path*/;
  ((stream___BufferedIStream___prepare_buffer_t)CALL( self,COLOR_stream___BufferedIStream___prepare_buffer))( self,  TAG_Int(10)) /*IFStream::prepare_buffer*/;
  variable1 = ATTR_file___FStream____path( self) /*IFStream::_path*/;
  variable1 = ((string___String___to_cstring_t)CALL(variable1,COLOR_string___String___to_cstring))(variable1) /*String::to_cstring*/;
  variable1 = ((file___NativeFileCapable___io_open_read_t)CALL( self,COLOR_file___NativeFileCapable___io_open_read))( self, variable1) /*IFStream::io_open_read*/;
  ATTR_file___FStream____file( self) /*IFStream::_file*/ = variable1;
  variable1 = ATTR_file___FStream____file( self) /*IFStream::_file*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*NativeFile::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'cant_open_file'  failed: bin/../lib/standard//file.nit:109,3--38\n"); nit_exit(1);}
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IFStream].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___IFStream___without_file(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "file::IFStream::without_file (bin/../lib/standard//file.nit:112,2--26)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IFStream].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IFStream].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___OFStream___write(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::OFStream::write (bin/../lib/standard//file.nit:120,2--124:37)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_file___OFStream____writable( self) /*OFStream::_writable*/;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//file.nit:123,3--18\n"); nit_exit(1);}
  variable1 = ((string___String___to_cstring_t)CALL( variable0 /*s*/,COLOR_string___String___to_cstring))( variable0 /*s*/) /*String::to_cstring*/;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  ((file___OFStream___write_native_t)CALL( self,COLOR_file___OFStream___write_native))( self, variable1, variable2) /*OFStream::write_native*/;
  tracehead = trace.prev;
  return;
}
val_t file___OFStream___is_writable(val_t  self) {
  struct trace_t trace = {NULL, "file::OFStream::is_writable (bin/../lib/standard//file.nit:127,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_file___OFStream____writable( self) /*OFStream::_writable*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable0;
}
void file___OFStream___close(val_t  self) {
  struct trace_t trace = {NULL, "file::OFStream::close (bin/../lib/standard//file.nit:129,2--132:19)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_file___FStream____file( self) /*OFStream::_file*/;
  variable1 = ((file___NativeFile___io_close_t)CALL(variable1,COLOR_file___NativeFile___io_close))(variable1) /*NativeFile::io_close*/;
  variable0 = variable1;
  ATTR_file___OFStream____writable( self) /*OFStream::_writable*/ =  TAG_Bool(false);
  tracehead = trace.prev;
  return;
}
void file___OFStream___write_native(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "file::OFStream::write_native (bin/../lib/standard//file.nit:138,2--145:54)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ATTR_file___OFStream____writable( self) /*OFStream::_writable*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//file.nit:141,3--18\n"); nit_exit(1);}
  variable3 = ATTR_file___FStream____file( self) /*OFStream::_file*/;
  variable3 = ((file___NativeFile___io_write_t)CALL(variable3,COLOR_file___NativeFile___io_write))(variable3,  variable0 /*native*/,  variable1 /*len*/) /*NativeFile::io_write*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable2 /*err*/)!=( variable1 /*len*/));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_array___Array___with_capacity(TAG_Int(5)); /*new Array[Object]*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("Problem in writing : "), TAG_Int(21)); /*new String*/
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3, variable4) /*Array::add*/;
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3,  variable2 /*err*/) /*Array::add*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3, variable5) /*Array::add*/;
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3,  variable1 /*len*/) /*Array::add*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3, variable6) /*Array::add*/;
    ((file___Object___printn_t)CALL( self,COLOR_file___Object___printn))( self, variable3) /*OFStream::printn*/;
  }
  tracehead = trace.prev;
  return;
}
void file___OFStream___open(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "file::OFStream::open (bin/../lib/standard//file.nit:149,2--155:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OFStream].i]) return;
  variable1 = ((string___String___to_cstring_t)CALL( variable0 /*path*/,COLOR_string___String___to_cstring))( variable0 /*path*/) /*String::to_cstring*/;
  variable1 = ((file___NativeFileCapable___io_open_write_t)CALL( self,COLOR_file___NativeFileCapable___io_open_write))( self, variable1) /*OFStream::io_open_write*/;
  ATTR_file___FStream____file( self) /*OFStream::_file*/ = variable1;
  variable1 = ATTR_file___FStream____file( self) /*OFStream::_file*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*NativeFile::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'cant_open_file'  failed: bin/../lib/standard//file.nit:153,3--38\n"); nit_exit(1);}
  ATTR_file___FStream____path( self) /*OFStream::_path*/ =  variable0 /*path*/;
  ATTR_file___OFStream____writable( self) /*OFStream::_writable*/ =  TAG_Bool(true);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OFStream].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___OFStream___without_file(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "file::OFStream::without_file (bin/../lib/standard//file.nit:158,2--26)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OFStream].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OFStream].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___Stdin___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "file::Stdin::init (bin/../lib/standard//file.nit:165,2--168:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stdin].i]) return;
  ((file___IFStream___without_file_t)CALL( self,COLOR_file___IFStream___without_file))( self, init_table /*YYY*/) /*IFStream::without_file*/;
  variable0 = ((file___NativeFileCapable___native_stdin_t)CALL( self,COLOR_file___NativeFileCapable___native_stdin))( self) /*Stdin::native_stdin*/;
  ATTR_file___FStream____file( self) /*Stdin::_file*/ = variable0;
  variable0 = NEW_string___String___with_native(BOX_NativeString("/dev/stdin"), TAG_Int(10)); /*new String*/
  ATTR_file___FStream____path( self) /*Stdin::_path*/ = variable0;
  ((stream___BufferedIStream___prepare_buffer_t)CALL( self,COLOR_stream___BufferedIStream___prepare_buffer))( self,  TAG_Int(1)) /*Stdin::prepare_buffer*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stdin].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___Stdout___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "file::Stdout::init (bin/../lib/standard//file.nit:174,2--177:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stdout].i]) return;
  ((file___OFStream___without_file_t)CALL( self,COLOR_file___OFStream___without_file))( self, init_table /*YYY*/) /*OFStream::without_file*/;
  variable0 = ((file___NativeFileCapable___native_stdout_t)CALL( self,COLOR_file___NativeFileCapable___native_stdout))( self) /*Stdout::native_stdout*/;
  ATTR_file___FStream____file( self) /*Stdout::_file*/ = variable0;
  variable0 = NEW_string___String___with_native(BOX_NativeString("/dev/stdout"), TAG_Int(11)); /*new String*/
  ATTR_file___FStream____path( self) /*Stdout::_path*/ = variable0;
  ATTR_file___OFStream____writable( self) /*Stdout::_writable*/ =  TAG_Bool(true);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stdout].i] = 1;
  tracehead = trace.prev;
  return;
}
void file___Stderr___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "file::Stderr::init (bin/../lib/standard//file.nit:183,2--186:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stderr].i]) return;
  ((file___OFStream___without_file_t)CALL( self,COLOR_file___OFStream___without_file))( self, init_table /*YYY*/) /*OFStream::without_file*/;
  variable0 = ((file___NativeFileCapable___native_stderr_t)CALL( self,COLOR_file___NativeFileCapable___native_stderr))( self) /*Stderr::native_stderr*/;
  ATTR_file___FStream____file( self) /*Stderr::_file*/ = variable0;
  variable0 = NEW_string___String___with_native(BOX_NativeString("/dev/stderr"), TAG_Int(11)); /*new String*/
  ATTR_file___FStream____path( self) /*Stderr::_path*/ = variable0;
  ATTR_file___OFStream____writable( self) /*Stderr::_writable*/ =  TAG_Bool(true);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Stderr].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t file___String___file_exists(val_t  self) {
  struct trace_t trace = {NULL, "file::String::file_exists (bin/../lib/standard//file.nit:193,2--194:56)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___String___to_cstring_t)CALL( self,COLOR_string___String___to_cstring))( self) /*String::to_cstring*/;
  variable0 = ((file___NativeString___file_exists_t)CALL(variable0,COLOR_file___NativeString___file_exists))(variable0) /*NativeString::file_exists*/;
  goto return_label25;
  return_label25: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___String___file_stat(val_t  self) {
  struct trace_t trace = {NULL, "file::String::file_stat (bin/../lib/standard//file.nit:196,2--56)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___String___to_cstring_t)CALL( self,COLOR_string___String___to_cstring))( self) /*String::to_cstring*/;
  variable0 = ((file___NativeString___file_stat_t)CALL(variable0,COLOR_file___NativeString___file_stat))(variable0) /*NativeString::file_stat*/;
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___String___strip_extension(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::String::strip_extension (bin/../lib/standard//file.nit:198,2--203:13)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string___String___has_suffix_t)CALL( self,COLOR_string___String___has_suffix))( self,  variable0 /*ext*/) /*String::has_suffix*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*ext*/,COLOR_abstract_collection___Collection___length))( variable0 /*ext*/) /*String::length*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int(variable2));
    variable1 = ((string___String___substring_t)CALL( self,COLOR_string___String___substring))( self,  TAG_Int(0), variable1) /*String::substring*/;
    goto return_label27;
  }
  variable1 =  self;
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t file___String___basename(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::String::basename (bin/../lib/standard//file.nit:206,2--213:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_array___AbstractArray____length( self) /*String::_length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable2 = ((array___AbstractArray___last_index_of_from_t)CALL( self,COLOR_array___AbstractArray___last_index_of_from))( self,  TAG_Char('/'), variable2) /*String::last_index_of_from*/;
  variable1 = variable2;
  variable2 =  self;
  variable3 = TAG_Bool(UNTAG_Int( variable1 /*pos*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = TAG_Int(UNTAG_Int( variable1 /*pos*/)+UNTAG_Int( TAG_Int(1)));
    variable3 = ((string___String___substring_from_t)CALL( self,COLOR_string___String___substring_from))( self, variable3) /*String::substring_from*/;
    variable2 = variable3 /*n=*/;
  }
  variable3 = ((file___String___strip_extension_t)CALL( variable2 /*n*/,COLOR_file___String___strip_extension))( variable2 /*n*/,  variable0 /*ext*/) /*String::strip_extension*/;
  variable1 = variable3;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t file___String___dirname(val_t  self) {
  struct trace_t trace = {NULL, "file::String::dirname (bin/../lib/standard//file.nit:216,2--222:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_array___AbstractArray____length( self) /*String::_length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  variable1 = ((array___AbstractArray___last_index_of_from_t)CALL( self,COLOR_array___AbstractArray___last_index_of_from))( self,  TAG_Char('/'), variable1) /*String::last_index_of_from*/;
  variable0 = variable1;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*pos*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((string___String___substring_t)CALL( self,COLOR_string___String___substring))( self,  TAG_Int(0),  variable0 /*pos*/) /*String::substring*/;
    variable0 = variable1;
    goto return_label29;
  } else { /*if*/
    variable1 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable0 = variable1;
    goto return_label29;
  }
  return_label29: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t file___String___file_path(val_t  self) {
  struct trace_t trace = {NULL, "file::String::file_path (bin/../lib/standard//file.nit:226,2--233:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_array___AbstractArray____length( self) /*String::_length*/;
  variable0 = variable1;
  variable2 = TAG_Int(UNTAG_Int( variable0 /*l*/)-UNTAG_Int( TAG_Int(1)));
  variable2 = ((array___AbstractArray___last_index_of_from_t)CALL( self,COLOR_array___AbstractArray___last_index_of_from))( self,  TAG_Char('/'), variable2) /*String::last_index_of_from*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*pos*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((string___String___substring_t)CALL( self,COLOR_string___String___substring))( self,  TAG_Int(0),  variable1 /*pos*/) /*String::substring*/;
    variable0 = variable2;
    goto return_label30;
  }
  variable2 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable0 = variable2;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable0;
}
void file___String___mkdir(val_t  self) {
  struct trace_t trace = {NULL, "file::String::mkdir (bin/../lib/standard//file.nit:236,2--250:29)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable1 = ((string_search___String___split_with_t)CALL( self,COLOR_string_search___String___split_with))( self, variable1) /*String::split_with*/;
  variable0 = variable1;
  variable2 = NEW_string___String___init(); /*new String*/
  variable1 = variable2;
  variable2 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*dirs*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*dirs*/) /*Array::is_empty*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label31;
  }
  variable2 =  TAG_Int(0);
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable4 = variable3;
  if (UNTAG_Bool(variable4)) { /* and */
    variable4 = ATTR_array___AbstractArray____length( variable0 /*dirs*/) /*Array::_length*/;
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*index*/)<UNTAG_Int(variable4));
  }
  variable3 = variable4;
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable3 = ATTR_array___Array____items( variable0 /*dirs*/) /*Array::_items*/;
  variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable2 /*index*/)];
  goto return_label32;
  return_label32: while(false);
  variable2 = variable3;
  variable2 = ((array___AbstractArray___is_empty_t)CALL(variable2,COLOR_abstract_collection___Collection___is_empty))(variable2) /*String::is_empty*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    ((string___String___add_t)CALL( variable1 /*path*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*path*/,  TAG_Char('/')) /*String::add*/;
  }
  variable2 = ((array___AbstractArray___iterator_t)CALL( variable0 /*dirs*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*dirs*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((array___AbstractArray___is_empty_t)CALL( variable3 /*d*/,COLOR_abstract_collection___Collection___is_empty))( variable3 /*d*/) /*String::is_empty*/;
    if (UNTAG_Bool(variable4)) { /*if*/
      goto continue_33;
    }
    ((string___String___append_t)CALL( variable1 /*path*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*path*/,  variable3 /*d*/) /*String::append*/;
    ((string___String___add_t)CALL( variable1 /*path*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*path*/,  TAG_Char('/')) /*String::add*/;
    variable4 = ((string___String___to_cstring_t)CALL( variable1 /*path*/,COLOR_string___String___to_cstring))( variable1 /*path*/) /*String::to_cstring*/;
    ((file___NativeString___file_mkdir_t)CALL(variable4,COLOR_file___NativeString___file_mkdir))(variable4) /*NativeString::file_mkdir*/;
    continue_33: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_33: while(0);
  return_label31: while(false);
  tracehead = trace.prev;
  return;
}
val_t file___NativeString___file_exists(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeString::file_exists (bin/../lib/standard//file.nit:256,2--90)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(string_NativeString_NativeString_file_exists_0(UNBOX_NativeString( self)));
}
val_t file___NativeString___file_stat(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeString::file_stat (bin/../lib/standard//file.nit:257,2--90)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_FileStat(string_NativeString_NativeString_file_stat_0(UNBOX_NativeString( self)));
}
val_t file___NativeString___file_mkdir(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeString::file_mkdir (bin/../lib/standard//file.nit:258,2--88)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(string_NativeString_NativeString_file_mkdir_0(UNBOX_NativeString( self)));
}
val_t file___FileStat___mode(val_t  self) {
  struct trace_t trace = {NULL, "file::FileStat::mode (bin/../lib/standard//file.nit:263,1--264:57)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_FileStat_FileStat_mode_0(UNBOX_FileStat( self)));
}
val_t file___FileStat___atime(val_t  self) {
  struct trace_t trace = {NULL, "file::FileStat::atime (bin/../lib/standard//file.nit:265,2--59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_FileStat_FileStat_atime_0(UNBOX_FileStat( self)));
}
val_t file___FileStat___ctime(val_t  self) {
  struct trace_t trace = {NULL, "file::FileStat::ctime (bin/../lib/standard//file.nit:266,2--59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_FileStat_FileStat_ctime_0(UNBOX_FileStat( self)));
}
val_t file___FileStat___mtime(val_t  self) {
  struct trace_t trace = {NULL, "file::FileStat::mtime (bin/../lib/standard//file.nit:267,2--59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_FileStat_FileStat_mtime_0(UNBOX_FileStat( self)));
}
val_t file___FileStat___size(val_t  self) {
  struct trace_t trace = {NULL, "file::FileStat::size (bin/../lib/standard//file.nit:268,2--57)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_FileStat_FileStat_size_0(UNBOX_FileStat( self)));
}
val_t file___NativeFile___io_read(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "file::NativeFile::io_read (bin/../lib/standard//file.nit:274,2--96)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_NativeFile_NativeFile_io_read_2(UNBOX_NativeFile( self), UNBOX_NativeString( param0), UNTAG_Int( param1)));
}
val_t file___NativeFile___io_write(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "file::NativeFile::io_write (bin/../lib/standard//file.nit:275,2--98)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_NativeFile_NativeFile_io_write_2(UNBOX_NativeFile( self), UNBOX_NativeString( param0), UNTAG_Int( param1)));
}
val_t file___NativeFile___io_close(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeFile::io_close (bin/../lib/standard//file.nit:276,2--69)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(file_NativeFile_NativeFile_io_close_0(UNBOX_NativeFile( self)));
}
val_t file___NativeFile___file_stat(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeFile::file_stat (bin/../lib/standard//file.nit:277,2--76)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_FileStat(file_NativeFile_NativeFile_file_stat_0(UNBOX_NativeFile( self)));
}
val_t file___NativeFileCapable___io_open_read(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::NativeFileCapable::io_open_read (bin/../lib/standard//file.nit:281,2--118)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeFile(file_NativeFileCapable_NativeFileCapable_io_open_read_1( self, UNBOX_NativeString( param0)));
}
val_t file___NativeFileCapable___io_open_write(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "file::NativeFileCapable::io_open_write (bin/../lib/standard//file.nit:282,2--120)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeFile(file_NativeFileCapable_NativeFileCapable_io_open_write_1( self, UNBOX_NativeString( param0)));
}
val_t file___NativeFileCapable___native_stdin(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeFileCapable::native_stdin (bin/../lib/standard//file.nit:283,2--98)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeFile(file_NativeFileCapable_NativeFileCapable_native_stdin_0( self));
}
val_t file___NativeFileCapable___native_stdout(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeFileCapable::native_stdout (bin/../lib/standard//file.nit:284,2--100)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeFile(file_NativeFileCapable_NativeFileCapable_native_stdout_0( self));
}
val_t file___NativeFileCapable___native_stderr(val_t  self) {
  struct trace_t trace = {NULL, "file::NativeFileCapable::native_stderr (bin/../lib/standard//file.nit:285,2--100)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeFile(file_NativeFileCapable_NativeFileCapable_native_stderr_0( self));
}
