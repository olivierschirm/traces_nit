#ifndef environ__sep
#define environ__sep
#include "symbol._sep.h"
#include <nit_common.h>
#include <environ_nit.h>
extern const int SFT_environ[];
#define COLOR_environ___Symbol___environ SFT_environ[0]
#define COLOR_environ___Symbol___environ__eq SFT_environ[1]
#define COLOR_environ___Symbol___environ_default__eq SFT_environ[2]
#define COLOR_environ___Symbol___unset SFT_environ[3]
#define COLOR_environ___NativeString___get_environ SFT_environ[4]
#define COLOR_environ___NativeString___put_environ SFT_environ[5]
#define COLOR_environ___NativeString___unset_environ SFT_environ[6]
#define COLOR_environ___NativeString___set_environ SFT_environ[7]
typedef val_t (* environ___Symbol___environ_t)(val_t  self);
val_t environ___Symbol___environ(val_t  self);
typedef void (* environ___Symbol___environ__eq_t)(val_t  self, val_t  param0);
void environ___Symbol___environ__eq(val_t  self, val_t  param0);
typedef void (* environ___Symbol___environ_default__eq_t)(val_t  self, val_t  param0);
void environ___Symbol___environ_default__eq(val_t  self, val_t  param0);
typedef void (* environ___Symbol___unset_t)(val_t  self);
void environ___Symbol___unset(val_t  self);
typedef val_t (* environ___NativeString___get_environ_t)(val_t  self);
val_t environ___NativeString___get_environ(val_t  self);
typedef void (* environ___NativeString___put_environ_t)(val_t  self);
void environ___NativeString___put_environ(val_t  self);
typedef void (* environ___NativeString___unset_environ_t)(val_t  self);
void environ___NativeString___unset_environ(val_t  self);
typedef void (* environ___NativeString___set_environ_t)(val_t  self, val_t  param0, val_t  param1);
void environ___NativeString___set_environ(val_t  self, val_t  param0, val_t  param1);
#endif
