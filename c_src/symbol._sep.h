#ifndef symbol__sep
#define symbol__sep
#include "hash._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Symbol[];
extern const int SFT_symbol[];
#define COLOR_symbol___String___to_symbol SFT_symbol[0]
#define ID_Symbol SFT_symbol[1]
#define COLOR_Symbol SFT_symbol[2]
#define COLOR_symbol___Symbol____string SFT_symbol[3]
#define INIT_TABLE_POS_Symbol SFT_symbol[4]
#define COLOR_symbol___Symbol___init SFT_symbol[5]
typedef val_t (* symbol___String___to_symbol_t)(val_t  self);
val_t symbol___String___to_symbol(val_t  self);
#define ATTR_symbol___Symbol____string(recv) ATTR(recv, COLOR_symbol___Symbol____string)
typedef val_t (* symbol___Symbol___to_s_t)(val_t  self);
val_t symbol___Symbol___to_s(val_t  self);
typedef void (* symbol___Symbol___init_t)(val_t  self, val_t  param0, int* init_table);
void symbol___Symbol___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_symbol___Symbol___init(val_t  param0);
#endif
