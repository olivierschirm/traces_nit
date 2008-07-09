#ifndef syntax__sep
#define syntax__sep
#include "mmbuilder._sep.h"
#include "control_flow._sep.h"
#include "typing._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_SrcModuleLoader[];
extern const int SFT_syntax[];
#define ID_SrcModuleLoader SFT_syntax[0]
#define COLOR_SrcModuleLoader SFT_syntax[1]
#define INIT_TABLE_POS_SrcModuleLoader SFT_syntax[2]
#define COLOR_syntax___SrcModuleLoader___init SFT_syntax[3]
#define COLOR_syntax___MMContext____tc SFT_syntax[4]
#define COLOR_syntax___MMContext___tc SFT_syntax[5]
#define COLOR_syntax___MMContext___tc__eq SFT_syntax[6]
#define COLOR_syntax___MMSrcModule___process_supermodules SFT_syntax[7]
#define COLOR_syntax___MMSrcModule___process_syntax SFT_syntax[8]
typedef val_t (* syntax___SrcModuleLoader___file_type_t)(val_t  self);
val_t syntax___SrcModuleLoader___file_type(val_t  self);
typedef val_t (* syntax___SrcModuleLoader___parse_file_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
val_t syntax___SrcModuleLoader___parse_file(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* syntax___SrcModuleLoader___process_metamodel_t)(val_t  self, val_t  param0, val_t  param1);
void syntax___SrcModuleLoader___process_metamodel(val_t  self, val_t  param0, val_t  param1);
typedef void (* syntax___SrcModuleLoader___init_t)(val_t  self, int* init_table);
void syntax___SrcModuleLoader___init(val_t  self, int* init_table);
val_t NEW_syntax___SrcModuleLoader___init();
#define ATTR_syntax___MMContext____tc(recv) ATTR(recv, COLOR_syntax___MMContext____tc)
typedef val_t (* syntax___MMContext___tc_t)(val_t  self);
val_t syntax___MMContext___tc(val_t  self);
typedef void (* syntax___MMContext___tc__eq_t)(val_t  self, val_t  param0);
void syntax___MMContext___tc__eq(val_t  self, val_t  param0);
typedef void (* syntax___MMSrcModule___process_supermodules_t)(val_t  self, val_t  param0);
void syntax___MMSrcModule___process_supermodules(val_t  self, val_t  param0);
typedef void (* syntax___MMSrcModule___process_syntax_t)(val_t  self, val_t  param0);
void syntax___MMSrcModule___process_syntax(val_t  self, val_t  param0);
#endif
