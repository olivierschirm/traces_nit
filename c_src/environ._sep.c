#include "environ._sep.h"
val_t environ___Symbol___environ(val_t  self) {
  struct trace_t trace = {NULL, "environ::Symbol::environ (bin/../lib/standard//environ.nit:19,2--23:60)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  ((environ___Symbol___environ_default__eq_t)CALL( self,COLOR_environ___Symbol___environ_default__eq))( self, variable0) /*Symbol::environ_default=*/;
  variable0 = ((symbol___Symbol___to_s_t)CALL( self,COLOR_string___Object___to_s))( self) /*Symbol::to_s*/;
  variable0 = ((string___String___to_cstring_t)CALL(variable0,COLOR_string___String___to_cstring))(variable0) /*String::to_cstring*/;
  variable0 = ((environ___NativeString___get_environ_t)CALL(variable0,COLOR_environ___NativeString___get_environ))(variable0) /*NativeString::get_environ*/;
  variable1 = NEW_string___String___from_cstring(variable0); /*new String*/
  variable0 = variable1;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
void environ___Symbol___environ__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "environ::Symbol::environ= (bin/../lib/standard//environ.nit:26,2--27:72)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((symbol___Symbol___to_s_t)CALL( self,COLOR_string___Object___to_s))( self) /*Symbol::to_s*/;
  variable1 = ((string___String___to_cstring_t)CALL(variable1,COLOR_string___String___to_cstring))(variable1) /*String::to_cstring*/;
  variable2 = ((string___String___to_cstring_t)CALL( variable0 /*v*/,COLOR_string___String___to_cstring))( variable0 /*v*/) /*String::to_cstring*/;
  ((environ___NativeString___set_environ_t)CALL(variable1,COLOR_environ___NativeString___set_environ))(variable1, variable2,  TAG_Int(1)) /*NativeString::set_environ*/;
  tracehead = trace.prev;
  return;
}
void environ___Symbol___environ_default__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "environ::Symbol::environ_default= (bin/../lib/standard//environ.nit:29,2--30:80)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((symbol___Symbol___to_s_t)CALL( self,COLOR_string___Object___to_s))( self) /*Symbol::to_s*/;
  variable1 = ((string___String___to_cstring_t)CALL(variable1,COLOR_string___String___to_cstring))(variable1) /*String::to_cstring*/;
  variable2 = ((string___String___to_cstring_t)CALL( variable0 /*v*/,COLOR_string___String___to_cstring))( variable0 /*v*/) /*String::to_cstring*/;
  ((environ___NativeString___set_environ_t)CALL(variable1,COLOR_environ___NativeString___set_environ))(variable1, variable2,  TAG_Int(0)) /*NativeString::set_environ*/;
  tracehead = trace.prev;
  return;
}
void environ___Symbol___unset(val_t  self) {
  struct trace_t trace = {NULL, "environ::Symbol::unset (bin/../lib/standard//environ.nit:32,2--33:44)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((symbol___Symbol___to_s_t)CALL( self,COLOR_string___Object___to_s))( self) /*Symbol::to_s*/;
  variable0 = ((string___String___to_cstring_t)CALL(variable0,COLOR_string___String___to_cstring))(variable0) /*String::to_cstring*/;
  ((environ___NativeString___unset_environ_t)CALL(variable0,COLOR_environ___NativeString___unset_environ))(variable0) /*NativeString::unset_environ*/;
  tracehead = trace.prev;
  return;
}
val_t environ___NativeString___get_environ(val_t  self) {
  struct trace_t trace = {NULL, "environ::NativeString::get_environ (bin/../lib/standard//environ.nit:37,1--38:98)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeString(string_NativeString_NativeString_get_environ_0(UNBOX_NativeString( self)));
}
void environ___NativeString___put_environ(val_t  self) {
  struct trace_t trace = {NULL, "environ::NativeString::put_environ (bin/../lib/standard//environ.nit:39,2--84)"};
  trace.prev = tracehead; tracehead = &trace;
  string_NativeString_NativeString_put_environ_0(UNBOX_NativeString( self));
  tracehead = trace.prev;
  return;
}
void environ___NativeString___unset_environ(val_t  self) {
  struct trace_t trace = {NULL, "environ::NativeString::unset_environ (bin/../lib/standard//environ.nit:40,2--88)"};
  trace.prev = tracehead; tracehead = &trace;
  string_NativeString_NativeString_unset_environ_0(UNBOX_NativeString( self));
  tracehead = trace.prev;
  return;
}
void environ___NativeString___set_environ(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "environ::NativeString::set_environ (bin/../lib/standard//environ.nit:41,2--123)"};
  trace.prev = tracehead; tracehead = &trace;
  string_NativeString_NativeString_set_environ_2(UNBOX_NativeString( self), UNBOX_NativeString( param0), UNTAG_Int( param1));
  tracehead = trace.prev;
  return;
}
