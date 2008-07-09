#include "kernel._sep.h"
val_t kernel___Object___object_id(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Object::object_id (bin/../lib/standard//kernel.nit:26,2--27:20)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int) self);
}
val_t kernel___Object___is_same_type(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Object::is_same_type (bin/../lib/standard//kernel.nit:29,2--30:39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool((VAL2VFT( self)==VAL2VFT( param0)));
}
val_t kernel___Object_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Object::== (bin/../lib/standard//kernel.nit:32,2--35:53)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(IS_EQUAL_NN( self, variable0 /*other*/));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Object_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Object::!= (bin/../lib/standard//kernel.nit:37,2--40:58)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( self ==  variable0 /*other*/) || (( self != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( self, variable0 /*other*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))( self,  variable0 /*other*/) /*Object::==*/)))));
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
void kernel___Object___output(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Object::output (bin/../lib/standard//kernel.nit:42,2--47:12)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  printf("%c", (unsigned char)UNTAG_Char( TAG_Char('<')));
  variable0 = TAG_Int((int) self);
  printf("%d\n", UNTAG_Int(variable0));
  printf("%c", (unsigned char)UNTAG_Char( TAG_Char('>')));
  tracehead = trace.prev;
  return;
}
void kernel___Object___exit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Object::exit (bin/../lib/standard//kernel.nit:50,2--36)"};
  trace.prev = tracehead; tracehead = &trace;
  exit(UNTAG_Int( param0));
  tracehead = trace.prev;
  return;
}
val_t kernel___Object___sys(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Object::sys (bin/../lib/standard//kernel.nit:51,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return (G_sys);
}
void kernel___Sys___main(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Sys::main (bin/../lib/standard//kernel.nit:56,2--57:10)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return;
}
val_t kernel___Comparable_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::< (bin/../lib/standard//kernel.nit:69,2--70:27)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method < called (bin/../lib/standard//kernel.nit:69,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Comparable_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::<= (bin/../lib/standard//kernel.nit:72,2--73:55)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::>= (bin/../lib/standard//kernel.nit:75,2--76:55)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::> (bin/../lib/standard//kernel.nit:78,2--79:50)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____leqg(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::<=> (bin/../lib/standard//kernel.nit:81,2--89:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label7;
  } else { /*if*/
    variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label7;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label7;
    }
  }
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable___is_between(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "kernel::Comparable::is_between (bin/../lib/standard//kernel.nit:93,2--96:32)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((kernel___Comparable_____leq_t)CALL( variable0 /*c*/,COLOR_kernel___Comparable_____leq))( variable0 /*c*/,  self) /*Comparable::<=*/;
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((kernel___Comparable_____leq_t)CALL( self,COLOR_kernel___Comparable_____leq))( self,  variable1 /*d*/) /*Comparable::<=*/;
  }
  variable2 = variable3;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t kernel___Comparable___max(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::max (bin/../lib/standard//kernel.nit:99,2--105:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*other*/;
    goto return_label9;
  } else { /*if*/
    variable1 =  self;
    goto return_label9;
  }
  return_label9: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable___min(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Comparable::min (bin/../lib/standard//kernel.nit:109,2--115:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*c*/,COLOR_kernel___Comparable_____l))( variable0 /*c*/,  self) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*c*/;
    goto return_label10;
  } else { /*if*/
    variable1 =  self;
    goto return_label10;
  }
  return_label10: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Discrete___succ(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Discrete::succ (bin/../lib/standard//kernel.nit:126,2--127:36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((kernel___Discrete_____plus_t)CALL( self,COLOR_kernel___Discrete_____plus))( self,  TAG_Int(1)) /*Discrete::+*/;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Discrete___prec(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Discrete::prec (bin/../lib/standard//kernel.nit:129,2--130:36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((kernel___Discrete_____minus_t)CALL( self,COLOR_kernel___Discrete_____minus))( self,  TAG_Int(1)) /*Discrete::-*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Discrete_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Discrete::+ (bin/../lib/standard//kernel.nit:132,2--133:22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method + called (bin/../lib/standard//kernel.nit:132,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Discrete_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Discrete::- (bin/../lib/standard//kernel.nit:135,2--136:22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method - called (bin/../lib/standard//kernel.nit:135,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Discrete___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Discrete::distance (bin/../lib/standard//kernel.nit:138,2--160:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NIT_NULL /*decl variable cursor*/;
  variable2 = NIT_NULL /*decl variable stop*/;
  variable3 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*d*/) /*Discrete::<*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  self /*cursor=*/;
    variable2 =  variable0 /*d*/ /*stop=*/;
  } else { /*if*/
    variable3 = ((kernel___Comparable_____g_t)CALL( self,COLOR_kernel___Comparable_____g))( self,  variable0 /*d*/) /*Discrete::>*/;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  variable0 /*d*/ /*cursor=*/;
      variable2 =  self /*stop=*/;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label13;
    }
  }
  variable3 =  TAG_Int(0);
  while (true) { /*while*/
    variable4 = ((kernel___Comparable_____l_t)CALL( variable1 /*cursor*/,COLOR_kernel___Comparable_____l))( variable1 /*cursor*/,  variable2 /*stop*/) /*Discrete::<*/;
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = ((kernel___Discrete___succ_t)CALL( variable1 /*cursor*/,COLOR_kernel___Discrete___succ))( variable1 /*cursor*/) /*Discrete::succ*/;
    variable1 = variable4 /*cursor=*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    continue_14: while(0);
  }
  break_14: while(0);
  variable1 =  variable3 /*nb*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Bool___object_id(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Bool::object_id (bin/../lib/standard//kernel.nit:174,2--21)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Bool( self));
}
val_t kernel___Bool_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Bool::== (bin/../lib/standard//kernel.nit:175,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Bool_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Bool::!= (bin/../lib/standard//kernel.nit:176,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Bool___output(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Bool::output (bin/../lib/standard//kernel.nit:177,2--18)"};
  trace.prev = tracehead; tracehead = &trace;
  (void)printf(UNTAG_Bool( self)?"true\n":"false\n");
  tracehead = trace.prev;
  return;
}
val_t kernel___Float___object_id(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Float::object_id (bin/../lib/standard//kernel.nit:183,2--21)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int)UNBOX_Float( self));
}
void kernel___Float___output(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Float::output (bin/../lib/standard//kernel.nit:184,2--18)"};
  trace.prev = tracehead; tracehead = &trace;
  printf("%f\n", UNBOX_Float( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Float_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::<= (bin/../lib/standard//kernel.nit:186,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)<=UNBOX_Float( param0));
}
val_t kernel___Float_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::< (bin/../lib/standard//kernel.nit:187,2--23)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)<UNBOX_Float( param0));
}
val_t kernel___Float_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::>= (bin/../lib/standard//kernel.nit:188,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)>=UNBOX_Float( param0));
}
val_t kernel___Float_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::> (bin/../lib/standard//kernel.nit:189,2--23)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)>UNBOX_Float( param0));
}
val_t kernel___Float_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::+ (bin/../lib/standard//kernel.nit:190,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)+UNBOX_Float( param0));
}
val_t kernel___Float___unary__minus(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Float::unary - (bin/../lib/standard//kernel.nit:191,2--14)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(-UNBOX_Float( self));
}
val_t kernel___Float_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::- (bin/../lib/standard//kernel.nit:192,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)-UNBOX_Float( param0));
}
val_t kernel___Float_____star(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::* (bin/../lib/standard//kernel.nit:193,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)*UNBOX_Float( param0));
}
val_t kernel___Float_____slash(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Float::/ (bin/../lib/standard//kernel.nit:194,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)/UNBOX_Float( param0));
}
val_t kernel___Float___to_i(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Float::to_i (bin/../lib/standard//kernel.nit:196,2--197:15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int)UNBOX_Float( self));
}
val_t kernel___Int___object_id(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::object_id (bin/../lib/standard//kernel.nit:206,2--21)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return  self;
}
val_t kernel___Int_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::== (bin/../lib/standard//kernel.nit:207,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Int_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::!= (bin/../lib/standard//kernel.nit:208,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Int___output(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::output (bin/../lib/standard//kernel.nit:209,2--18)"};
  trace.prev = tracehead; tracehead = &trace;
  printf("%d\n", UNTAG_Int( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Int_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::<= (bin/../lib/standard//kernel.nit:211,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)<=UNTAG_Int( param0));
}
val_t kernel___Int_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::< (bin/../lib/standard//kernel.nit:212,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)<UNTAG_Int( param0));
}
val_t kernel___Int_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::>= (bin/../lib/standard//kernel.nit:213,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)>=UNTAG_Int( param0));
}
val_t kernel___Int_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::> (bin/../lib/standard//kernel.nit:214,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)>UNTAG_Int( param0));
}
val_t kernel___Int_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::+ (bin/../lib/standard//kernel.nit:215,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)+UNTAG_Int( param0));
}
val_t kernel___Int___unary__minus(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::unary - (bin/../lib/standard//kernel.nit:216,2--12)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(-UNTAG_Int( self));
}
val_t kernel___Int_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::- (bin/../lib/standard//kernel.nit:217,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)-UNTAG_Int( param0));
}
val_t kernel___Int_____star(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::* (bin/../lib/standard//kernel.nit:218,2--20)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)*UNTAG_Int( param0));
}
val_t kernel___Int_____slash(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::/ (bin/../lib/standard//kernel.nit:219,2--20)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)/UNTAG_Int( param0));
}
val_t kernel___Int_____percent(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::% (bin/../lib/standard//kernel.nit:220,2--20)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)%UNTAG_Int( param0));
}
val_t kernel___Int___lshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::lshift (bin/../lib/standard//kernel.nit:221,2--25)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)<<UNTAG_Int( param0));
}
val_t kernel___Int___rshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::rshift (bin/../lib/standard//kernel.nit:222,2--25)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)>>UNTAG_Int( param0));
}
val_t kernel___Int___to_f(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::to_f (bin/../lib/standard//kernel.nit:224,2--225:17)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float((float)UNTAG_Int( self));
}
val_t kernel___Int___succ(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::succ (bin/../lib/standard//kernel.nit:227,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)+1);
}
val_t kernel___Int___prec(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::prec (bin/../lib/standard//kernel.nit:228,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)-1);
}
val_t kernel___Int___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::distance (bin/../lib/standard//kernel.nit:229,2--235:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = TAG_Int(UNTAG_Int( self)-UNTAG_Int( variable0 /*i*/));
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*d*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*d*/;
    goto return_label15;
  } else { /*if*/
    variable2 = TAG_Int(-UNTAG_Int( variable1 /*d*/));
    variable1 = variable2;
    goto return_label15;
  }
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int_____leqg(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::<=> (bin/../lib/standard//kernel.nit:239,2--246:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*other*/));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label16;
  } else { /*if*/
    variable1 = TAG_Bool(UNTAG_Int( variable0 /*other*/)<UNTAG_Int( self));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label16;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label16;
    }
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___is_between(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "kernel::Int::is_between (bin/../lib/standard//kernel.nit:250,2--255:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*c*/));
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*d*/)<UNTAG_Int( self));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 =  TAG_Bool(false);
    goto return_label17;
  } else { /*if*/
    variable2 =  TAG_Bool(true);
    goto return_label17;
  }
  return_label17: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t kernel___Int___max(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::max (bin/../lib/standard//kernel.nit:259,2--264:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*other*/));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*other*/;
    goto return_label18;
  } else { /*if*/
    variable1 =  self;
    goto return_label18;
  }
  return_label18: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___min(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::min (bin/../lib/standard//kernel.nit:268,2--273:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*c*/)<UNTAG_Int( self));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*c*/;
    goto return_label19;
  } else { /*if*/
    variable1 =  self;
    goto return_label19;
  }
  return_label19: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___ascii(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::ascii (bin/../lib/standard//kernel.nit:277,2--278:17)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Int( self));
}
val_t kernel___Int___digit_count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Int::digit_count (bin/../lib/standard//kernel.nit:280,2--300:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Int((int)0) /*decl variable d*/;
  variable2 = TAG_Int((int)0) /*decl variable n*/;
  variable3 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  TAG_Int(1) /*d=*/;
    variable3 = TAG_Int(-UNTAG_Int( self));
    variable2 = variable3 /*n=*/;
  } else { /*if*/
    variable3 = TAG_Bool(( self)==( TAG_Int(0)));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label20;
    } else { /*if*/
      variable1 =  TAG_Int(0) /*d=*/;
      variable2 =  self /*n=*/;
    }
  }
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*n*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*d*/;
    variable3 = TAG_Int(UNTAG_Int( variable2 /*n*/)/UNTAG_Int( variable0 /*b*/));
    variable2 = variable3 /*n=*/;
    continue_21: while(0);
  }
  break_21: while(0);
  variable1 =  variable1 /*d*/;
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___to_c(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Int::to_c (bin/../lib/standard//kernel.nit:303,2--312:41)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Int( self)>=UNTAG_Int( TAG_Int(0)));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Int( self)<=UNTAG_Int( TAG_Int(36)));
  }
  variable0 = variable1;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//kernel.nit:308,3--33\n"); nit_exit(1);}
  variable0 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( TAG_Int(10)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('0')));
    variable0 = TAG_Int(UNTAG_Int( self)+UNTAG_Int(variable0));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label22;
  } else { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('a')));
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(10)));
    variable0 = TAG_Int(UNTAG_Int( self)+UNTAG_Int(variable0));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label22;
  }
  return_label22: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___object_id(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::object_id (bin/../lib/standard//kernel.nit:324,2--21)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Char( self));
}
val_t kernel___Char_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::== (bin/../lib/standard//kernel.nit:325,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Char_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::!= (bin/../lib/standard//kernel.nit:326,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Char___output(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::output (bin/../lib/standard//kernel.nit:327,2--18)"};
  trace.prev = tracehead; tracehead = &trace;
  printf("%c", (unsigned char)UNTAG_Char( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Char_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::<= (bin/../lib/standard//kernel.nit:329,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( param0));
}
val_t kernel___Char_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::< (bin/../lib/standard//kernel.nit:330,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)<UNTAG_Char( param0));
}
val_t kernel___Char_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::>= (bin/../lib/standard//kernel.nit:331,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( param0));
}
val_t kernel___Char_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::> (bin/../lib/standard//kernel.nit:332,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)>UNTAG_Char( param0));
}
val_t kernel___Char___succ(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::succ (bin/../lib/standard//kernel.nit:334,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)+1);
}
val_t kernel___Char___prec(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::prec (bin/../lib/standard//kernel.nit:335,2--16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)-1);
}
val_t kernel___Char___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::distance (bin/../lib/standard//kernel.nit:337,2--343:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = TAG_Int((unsigned char)UNTAG_Char( self));
  variable3 = TAG_Int((unsigned char)UNTAG_Char( variable0 /*c*/));
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int(variable3));
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*d*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*d*/;
    goto return_label23;
  } else { /*if*/
    variable2 = TAG_Int(-UNTAG_Int( variable1 /*d*/));
    variable1 = variable2;
    goto return_label23;
  }
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Char___to_i(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::to_i (bin/../lib/standard//kernel.nit:347,2--356:47)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(( self)==( TAG_Char('-')));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label24;
  } else { /*if*/
    variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('0')));
    variable1 = variable0;
    if (UNTAG_Bool(variable1)) { /* and */
      variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('9')));
    }
    variable0 = variable1;
    if (UNTAG_Bool(variable0)) { /*if*/
      variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
      variable1 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('0')));
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
      goto return_label24;
    } else { /*if*/
      variable0 = ((kernel___Char___to_lower_t)CALL( self,COLOR_kernel___Char___to_lower))( self) /*Char::to_lower*/;
      variable0 = TAG_Int((unsigned char)UNTAG_Char(variable0));
      variable1 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('a')));
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(10)));
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
      goto return_label24;
    }
  }
  return_label24: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___ascii(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::ascii (bin/../lib/standard//kernel.nit:360,2--361:16)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((unsigned char)UNTAG_Char( self));
}
val_t kernel___Char_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::+ (bin/../lib/standard//kernel.nit:363,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)+UNTAG_Char( param0));
}
val_t kernel___Char_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "kernel::Char::- (bin/../lib/standard//kernel.nit:364,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)-UNTAG_Char( param0));
}
val_t kernel___Char___to_lower(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::to_lower (bin/../lib/standard//kernel.nit:366,2--372:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('A')));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('Z')));
  }
  variable0 = variable1;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
    variable1 = ((kernel___Char___distance_t)CALL( TAG_Char('a'),COLOR_kernel___Discrete___distance))( TAG_Char('a'),  TAG_Char('A')) /*Char::distance*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int(variable1));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label25;
  } else { /*if*/
    variable0 =  self;
    goto return_label25;
  }
  return_label25: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___to_upper(val_t  self) {
  struct trace_t trace = {NULL, "kernel::Char::to_upper (bin/../lib/standard//kernel.nit:376,2--382:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('a')));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('z')));
  }
  variable0 = variable1;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
    variable1 = ((kernel___Char___distance_t)CALL( TAG_Char('a'),COLOR_kernel___Discrete___distance))( TAG_Char('a'),  TAG_Char('A')) /*Char::distance*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label26;
  } else { /*if*/
    variable0 =  self;
    goto return_label26;
  }
  return_label26: while(false);
  tracehead = trace.prev;
  return variable0;
}
