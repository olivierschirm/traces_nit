#ifndef type_formal__sep
#define type_formal__sep
#include "inheritance._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMTypeFormal[];
extern const int SFT_type_formal[];
#define COLOR_type_formal___MMType___direct_type SFT_type_formal[0]
#define ID_MMTypeFormal SFT_type_formal[1]
#define COLOR_MMTypeFormal SFT_type_formal[2]
#define COLOR_type_formal___MMTypeFormal____name SFT_type_formal[3]
#define COLOR_type_formal___MMTypeFormal____bound SFT_type_formal[4]
#define INIT_TABLE_POS_MMTypeFormal SFT_type_formal[5]
#define COLOR_type_formal___MMTypeFormal___name SFT_type_formal[6]
#define COLOR_type_formal___MMTypeFormal___bound SFT_type_formal[7]
#define COLOR_type_formal___MMTypeFormal___init SFT_type_formal[8]
typedef val_t (* type_formal___MMType___direct_type_t)(val_t  self);
val_t type_formal___MMType___direct_type(val_t  self);
#define ATTR_type_formal___MMTypeFormal____name(recv) ATTR(recv, COLOR_type_formal___MMTypeFormal____name)
typedef val_t (* type_formal___MMTypeFormal___name_t)(val_t  self);
val_t type_formal___MMTypeFormal___name(val_t  self);
#define ATTR_type_formal___MMTypeFormal____bound(recv) ATTR(recv, COLOR_type_formal___MMTypeFormal____bound)
typedef val_t (* type_formal___MMTypeFormal___bound_t)(val_t  self);
val_t type_formal___MMTypeFormal___bound(val_t  self);
typedef val_t (* type_formal___MMTypeFormal_____l_t)(val_t  self, val_t  param0);
val_t type_formal___MMTypeFormal_____l(val_t  self, val_t  param0);
typedef val_t (* type_formal___MMTypeFormal___is_supertype_t)(val_t  self, val_t  param0);
val_t type_formal___MMTypeFormal___is_supertype(val_t  self, val_t  param0);
typedef val_t (* type_formal___MMTypeFormal___direct_type_t)(val_t  self);
val_t type_formal___MMTypeFormal___direct_type(val_t  self);
typedef val_t (* type_formal___MMTypeFormal___local_class_t)(val_t  self);
val_t type_formal___MMTypeFormal___local_class(val_t  self);
typedef val_t (* type_formal___MMTypeFormal___select_property_t)(val_t  self, val_t  param0);
val_t type_formal___MMTypeFormal___select_property(val_t  self, val_t  param0);
typedef val_t (* type_formal___MMTypeFormal___to_s_t)(val_t  self);
val_t type_formal___MMTypeFormal___to_s(val_t  self);
typedef void (* type_formal___MMTypeFormal___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void type_formal___MMTypeFormal___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_type_formal___MMTypeFormal___init(val_t  param0, val_t  param1);
#endif
