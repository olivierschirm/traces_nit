#ifndef genericity__sep
#define genericity__sep
#include "type_formal._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMTypeGeneric[];

extern const classtable_elt_t VFT_MMTypeFormalParameter[];
extern const int SFT_genericity[];
#define COLOR_genericity___MMLocalClass____types SFT_genericity[0]
#define COLOR_genericity___MMLocalClass____formals_types SFT_genericity[1]
#define COLOR_genericity___MMLocalClass___get_formal SFT_genericity[2]
#define COLOR_genericity___MMLocalClass___register_formal SFT_genericity[3]
#define COLOR_genericity___MMLocalClass___get_instantiate_type SFT_genericity[4]
#define COLOR_genericity___MMLocalClass___formals_types SFT_genericity[5]
#define COLOR_SUPER_genericity___MMLocalClass___get_type SFT_genericity[6]
#define COLOR_genericity___MMLocalClass___is_generic SFT_genericity[7]
#define COLOR_genericity___MMSignature___adaptation_to SFT_genericity[8]
#define COLOR_genericity___MMLocalProperty____recv_alone SFT_genericity[9]
#define COLOR_genericity___MMLocalProperty___recv SFT_genericity[10]
#define COLOR_genericity___MMLocalProperty___recv__eq SFT_genericity[11]
#define COLOR_genericity___MMLocalProperty___adapt_property SFT_genericity[12]
#define COLOR_SUPER_genericity___MMLocalProperty___inherit_from SFT_genericity[13]
#define COLOR_genericity___MMType___is_generic SFT_genericity[14]
#define ID_MMTypeGeneric SFT_genericity[15]
#define COLOR_MMTypeGeneric SFT_genericity[16]
#define COLOR_genericity___MMTypeGeneric____params SFT_genericity[17]
#define COLOR_genericity___MMTypeGeneric____props SFT_genericity[18]
#define INIT_TABLE_POS_MMTypeGeneric SFT_genericity[19]
#define COLOR_genericity___MMTypeGeneric___params SFT_genericity[20]
#define COLOR_SUPER_genericity___MMTypeGeneric___upcast_for SFT_genericity[21]
#define COLOR_genericity___MMTypeGeneric___params_equals SFT_genericity[22]
#define COLOR_SUPER_genericity___MMTypeGeneric___to_s SFT_genericity[23]
#define COLOR_genericity___MMTypeGeneric___is_subtype SFT_genericity[24]
#define COLOR_genericity___MMTypeGeneric___init SFT_genericity[25]
#define ID_MMTypeFormalParameter SFT_genericity[26]
#define COLOR_MMTypeFormalParameter SFT_genericity[27]
#define COLOR_genericity___MMTypeFormalParameter____def_class SFT_genericity[28]
#define COLOR_genericity___MMTypeFormalParameter____position SFT_genericity[29]
#define INIT_TABLE_POS_MMTypeFormalParameter SFT_genericity[30]
#define COLOR_genericity___MMTypeFormalParameter___def_class SFT_genericity[31]
#define COLOR_genericity___MMTypeFormalParameter___position SFT_genericity[32]
#define COLOR_genericity___MMTypeFormalParameter___bound__eq SFT_genericity[33]
#define COLOR_genericity___MMTypeFormalParameter___with_bound SFT_genericity[34]
#define COLOR_genericity___MMTypeFormalParameter___init SFT_genericity[35]
typedef val_t (* genericity___MMLocalClass___get_formal_t)(val_t  self, val_t  param0);
val_t genericity___MMLocalClass___get_formal(val_t  self, val_t  param0);
typedef void (* genericity___MMLocalClass___register_formal_t)(val_t  self, val_t  param0);
void genericity___MMLocalClass___register_formal(val_t  self, val_t  param0);
#define ATTR_genericity___MMLocalClass____types(recv) ATTR(recv, COLOR_genericity___MMLocalClass____types)
typedef val_t (* genericity___MMLocalClass___get_instantiate_type_t)(val_t  self, val_t  param0);
val_t genericity___MMLocalClass___get_instantiate_type(val_t  self, val_t  param0);
#define ATTR_genericity___MMLocalClass____formals_types(recv) ATTR(recv, COLOR_genericity___MMLocalClass____formals_types)
typedef val_t (* genericity___MMLocalClass___formals_types_t)(val_t  self);
val_t genericity___MMLocalClass___formals_types(val_t  self);
typedef val_t (* genericity___MMLocalClass___get_type_t)(val_t  self);
val_t genericity___MMLocalClass___get_type(val_t  self);
typedef val_t (* genericity___MMLocalClass___is_generic_t)(val_t  self);
val_t genericity___MMLocalClass___is_generic(val_t  self);
typedef val_t (* genericity___MMSignature___adaptation_to_t)(val_t  self, val_t  param0);
val_t genericity___MMSignature___adaptation_to(val_t  self, val_t  param0);
#define ATTR_genericity___MMLocalProperty____recv_alone(recv) ATTR(recv, COLOR_genericity___MMLocalProperty____recv_alone)
typedef val_t (* genericity___MMLocalProperty___recv_t)(val_t  self);
val_t genericity___MMLocalProperty___recv(val_t  self);
typedef void (* genericity___MMLocalProperty___recv__eq_t)(val_t  self, val_t  param0);
void genericity___MMLocalProperty___recv__eq(val_t  self, val_t  param0);
typedef val_t (* genericity___MMLocalProperty___signature_t)(val_t  self);
val_t genericity___MMLocalProperty___signature(val_t  self);
typedef val_t (* genericity___MMLocalProperty___adapt_property_t)(val_t  self, val_t  param0);
val_t genericity___MMLocalProperty___adapt_property(val_t  self, val_t  param0);
typedef void (* genericity___MMLocalProperty___inherit_from_t)(val_t  self, val_t  param0, val_t  param1);
void genericity___MMLocalProperty___inherit_from(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* genericity___MMType___is_generic_t)(val_t  self);
val_t genericity___MMType___is_generic(val_t  self);
typedef val_t (* genericity___MMTypeFormal___is_generic_t)(val_t  self);
val_t genericity___MMTypeFormal___is_generic(val_t  self);
typedef val_t (* genericity___MMTypeSimpleClass___is_generic_t)(val_t  self);
val_t genericity___MMTypeSimpleClass___is_generic(val_t  self);
#define ATTR_genericity___MMTypeGeneric____params(recv) ATTR(recv, COLOR_genericity___MMTypeGeneric____params)
typedef val_t (* genericity___MMTypeGeneric___params_t)(val_t  self);
val_t genericity___MMTypeGeneric___params(val_t  self);
#define ATTR_genericity___MMTypeGeneric____props(recv) ATTR(recv, COLOR_genericity___MMTypeGeneric____props)
typedef val_t (* genericity___MMTypeGeneric___is_generic_t)(val_t  self);
val_t genericity___MMTypeGeneric___is_generic(val_t  self);
typedef val_t (* genericity___MMTypeGeneric___is_supertype_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___is_supertype(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___upcast_for_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___upcast_for(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___for_module_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___for_module(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___adapt_to_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___adapt_to(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___params_equals_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___params_equals(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___select_property_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___select_property(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeGeneric___to_s_t)(val_t  self);
val_t genericity___MMTypeGeneric___to_s(val_t  self);
typedef val_t (* genericity___MMTypeGeneric___is_subtype_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeGeneric___is_subtype(val_t  self, val_t  param0);
typedef void (* genericity___MMTypeGeneric___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void genericity___MMTypeGeneric___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_genericity___MMTypeGeneric___init(val_t  param0, val_t  param1);
#define ATTR_genericity___MMTypeFormalParameter____def_class(recv) ATTR(recv, COLOR_genericity___MMTypeFormalParameter____def_class)
typedef val_t (* genericity___MMTypeFormalParameter___def_class_t)(val_t  self);
val_t genericity___MMTypeFormalParameter___def_class(val_t  self);
#define ATTR_genericity___MMTypeFormalParameter____position(recv) ATTR(recv, COLOR_genericity___MMTypeFormalParameter____position)
typedef val_t (* genericity___MMTypeFormalParameter___position_t)(val_t  self);
val_t genericity___MMTypeFormalParameter___position(val_t  self);
typedef val_t (* genericity___MMTypeFormalParameter___module_t)(val_t  self);
val_t genericity___MMTypeFormalParameter___module(val_t  self);
typedef val_t (* genericity___MMTypeFormalParameter___for_module_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeFormalParameter___for_module(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeFormalParameter___upcast_for_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeFormalParameter___upcast_for(val_t  self, val_t  param0);
typedef void (* genericity___MMTypeFormalParameter___bound__eq_t)(val_t  self, val_t  param0);
void genericity___MMTypeFormalParameter___bound__eq(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeFormalParameter___adapt_to_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeFormalParameter___adapt_to(val_t  self, val_t  param0);
typedef void (* genericity___MMTypeFormalParameter___with_bound_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void genericity___MMTypeFormalParameter___with_bound(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_genericity___MMTypeFormalParameter___with_bound(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* genericity___MMTypeFormalParameter___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void genericity___MMTypeFormalParameter___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_genericity___MMTypeFormalParameter___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* genericity___MMTypeNone___is_generic_t)(val_t  self);
val_t genericity___MMTypeNone___is_generic(val_t  self);
typedef val_t (* genericity___MMTypeNone___for_module_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeNone___for_module(val_t  self, val_t  param0);
typedef val_t (* genericity___MMTypeNone___adapt_to_t)(val_t  self, val_t  param0);
val_t genericity___MMTypeNone___adapt_to(val_t  self, val_t  param0);
#endif
