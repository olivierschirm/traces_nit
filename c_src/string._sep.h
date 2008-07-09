#ifndef string__sep
#define string__sep
#include "array._sep.h"
#include <nit_common.h>
#include <string_nit.h>

extern const classtable_elt_t VFT_String[];

extern const classtable_elt_t VFT_NativeString[];
struct TBOX_NativeString { const classtable_elt_t * vft; char * val;};
val_t BOX_NativeString(char * val);
#define UNBOX_NativeString(x) (((struct TBOX_NativeString *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_StringCapable[];
extern const int SFT_string[];
#define ID_String SFT_string[0]
#define COLOR_String SFT_string[1]
#define COLOR_string___String____items SFT_string[2]
#define COLOR_string___String____capacity SFT_string[3]
#define INIT_TABLE_POS_String SFT_string[4]
#define COLOR_SUPER_string___String___append SFT_string[5]
#define COLOR_string___String_____plus SFT_string[6]
#define COLOR_string___String_____star SFT_string[7]
#define COLOR_string___String___to_i SFT_string[8]
#define COLOR_string___String___to_hex SFT_string[9]
#define COLOR_string___String___a_to SFT_string[10]
#define COLOR_string___String___to_cstring SFT_string[11]
#define COLOR_string___String___substring SFT_string[12]
#define COLOR_string___String___substring_from SFT_string[13]
#define COLOR_string___String___has_substring SFT_string[14]
#define COLOR_string___String___has_prefix SFT_string[15]
#define COLOR_string___String___has_suffix SFT_string[16]
#define COLOR_string___String___init SFT_string[17]
#define COLOR_string___String___from SFT_string[18]
#define COLOR_string___String___with_capacity SFT_string[19]
#define COLOR_string___String___with_native SFT_string[20]
#define COLOR_string___String___from_cstring SFT_string[21]
#define COLOR_string___String___filled_with SFT_string[22]
#define COLOR_string___String___to_upper SFT_string[23]
#define COLOR_string___String___to_lower SFT_string[24]
#define COLOR_string___String___items SFT_string[25]
#define COLOR_string___String___capacity SFT_string[26]
#define COLOR_string___Object___to_s SFT_string[27]
#define COLOR_string___Object___inspect SFT_string[28]
#define COLOR_string___Object___inspect_head SFT_string[29]
#define COLOR_string___Object___args SFT_string[30]
#define COLOR_string___Int___fill_string SFT_string[31]
#define COLOR_string___Int___to_hex SFT_string[32]
#define COLOR_string___Int___to_base SFT_string[33]
#define COLOR_string___Float___to_precision SFT_string[34]
#define COLOR_string___Collection___join SFT_string[35]
#define COLOR_string___Map___map_join SFT_string[36]
#define ID_NativeString SFT_string[37]
#define COLOR_NativeString SFT_string[38]
#define INIT_TABLE_POS_NativeString SFT_string[39]
#define COLOR_string___NativeString_____bra SFT_string[40]
#define COLOR_string___NativeString_____braeq SFT_string[41]
#define COLOR_string___NativeString___copy_to SFT_string[42]
#define COLOR_string___NativeString___cstring_length SFT_string[43]
#define COLOR_string___NativeString___atoi SFT_string[44]
#define ID_StringCapable SFT_string[45]
#define COLOR_StringCapable SFT_string[46]
#define INIT_TABLE_POS_StringCapable SFT_string[47]
#define COLOR_string___StringCapable___calloc_string SFT_string[48]
#define COLOR_string___Sys____args_cache SFT_string[49]
#define COLOR_string___Sys___program_name SFT_string[50]
#define COLOR_string___Sys___init_args SFT_string[51]
#define COLOR_string___Sys___native_argc SFT_string[52]
#define COLOR_string___Sys___native_argv SFT_string[53]
typedef val_t (* string___String_____bra_t)(val_t  self, val_t  param0);
val_t string___String_____bra(val_t  self, val_t  param0);
typedef void (* string___String_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void string___String_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef void (* string___String___add_t)(val_t  self, val_t  param0);
void string___String___add(val_t  self, val_t  param0);
typedef void (* string___String___enlarge_t)(val_t  self, val_t  param0);
void string___String___enlarge(val_t  self, val_t  param0);
typedef void (* string___String___append_t)(val_t  self, val_t  param0);
void string___String___append(val_t  self, val_t  param0);
typedef val_t (* string___String_____plus_t)(val_t  self, val_t  param0);
val_t string___String_____plus(val_t  self, val_t  param0);
typedef val_t (* string___String_____star_t)(val_t  self, val_t  param0);
val_t string___String_____star(val_t  self, val_t  param0);
typedef val_t (* string___String___to_s_t)(val_t  self);
val_t string___String___to_s(val_t  self);
typedef val_t (* string___String___to_i_t)(val_t  self);
val_t string___String___to_i(val_t  self);
typedef val_t (* string___String___to_hex_t)(val_t  self);
val_t string___String___to_hex(val_t  self);
typedef val_t (* string___String___a_to_t)(val_t  self, val_t  param0);
val_t string___String___a_to(val_t  self, val_t  param0);
typedef val_t (* string___String___to_cstring_t)(val_t  self);
val_t string___String___to_cstring(val_t  self);
typedef val_t (* string___String___substring_t)(val_t  self, val_t  param0, val_t  param1);
val_t string___String___substring(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* string___String___substring_from_t)(val_t  self, val_t  param0);
val_t string___String___substring_from(val_t  self, val_t  param0);
typedef val_t (* string___String___has_substring_t)(val_t  self, val_t  param0, val_t  param1);
val_t string___String___has_substring(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* string___String___has_prefix_t)(val_t  self, val_t  param0);
val_t string___String___has_prefix(val_t  self, val_t  param0);
typedef val_t (* string___String___has_suffix_t)(val_t  self, val_t  param0);
val_t string___String___has_suffix(val_t  self, val_t  param0);
typedef val_t (* string___String_____l_t)(val_t  self, val_t  param0);
val_t string___String_____l(val_t  self, val_t  param0);
typedef void (* string___String___init_t)(val_t  self, int* init_table);
void string___String___init(val_t  self, int* init_table);
val_t NEW_string___String___init();
typedef void (* string___String___from_t)(val_t  self, val_t  param0, int* init_table);
void string___String___from(val_t  self, val_t  param0, int* init_table);
val_t NEW_string___String___from(val_t  param0);
typedef void (* string___String___with_capacity_t)(val_t  self, val_t  param0, int* init_table);
void string___String___with_capacity(val_t  self, val_t  param0, int* init_table);
val_t NEW_string___String___with_capacity(val_t  param0);
typedef void (* string___String___with_native_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void string___String___with_native(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_string___String___with_native(val_t  param0, val_t  param1);
typedef void (* string___String___from_cstring_t)(val_t  self, val_t  param0, int* init_table);
void string___String___from_cstring(val_t  self, val_t  param0, int* init_table);
val_t NEW_string___String___from_cstring(val_t  param0);
typedef void (* string___String___filled_with_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void string___String___filled_with(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_string___String___filled_with(val_t  param0, val_t  param1);
typedef void (* string___String___output_t)(val_t  self);
void string___String___output(val_t  self);
typedef val_t (* string___String_____eqeq_t)(val_t  self, val_t  param0);
val_t string___String_____eqeq(val_t  self, val_t  param0);
typedef val_t (* string___String___to_upper_t)(val_t  self);
val_t string___String___to_upper(val_t  self);
typedef val_t (* string___String___to_lower_t)(val_t  self);
val_t string___String___to_lower(val_t  self);
#define ATTR_string___String____items(recv) ATTR(recv, COLOR_string___String____items)
typedef val_t (* string___String___items_t)(val_t  self);
val_t string___String___items(val_t  self);
#define ATTR_string___String____capacity(recv) ATTR(recv, COLOR_string___String____capacity)
typedef val_t (* string___String___capacity_t)(val_t  self);
val_t string___String___capacity(val_t  self);
typedef val_t (* string___Object___to_s_t)(val_t  self);
val_t string___Object___to_s(val_t  self);
typedef val_t (* string___Object___inspect_t)(val_t  self);
val_t string___Object___inspect(val_t  self);
typedef val_t (* string___Object___inspect_head_t)(val_t  self);
val_t string___Object___inspect_head(val_t  self);
typedef val_t (* string___Object___args_t)(val_t  self);
val_t string___Object___args(val_t  self);
typedef val_t (* string___Bool___to_s_t)(val_t  self);
val_t string___Bool___to_s(val_t  self);
typedef void (* string___Int___fill_string_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void string___Int___fill_string(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* string___Int___to_s_t)(val_t  self);
val_t string___Int___to_s(val_t  self);
typedef val_t (* string___Int___to_hex_t)(val_t  self);
val_t string___Int___to_hex(val_t  self);
typedef val_t (* string___Int___to_base_t)(val_t  self, val_t  param0, val_t  param1);
val_t string___Int___to_base(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* string___Float___to_s_t)(val_t  self);
val_t string___Float___to_s(val_t  self);
typedef val_t (* string___Float___to_precision_t)(val_t  self, val_t  param0);
val_t string___Float___to_precision(val_t  self, val_t  param0);
typedef val_t (* string___Char___to_s_t)(val_t  self);
val_t string___Char___to_s(val_t  self);
typedef val_t (* string___Collection___to_s_t)(val_t  self);
val_t string___Collection___to_s(val_t  self);
typedef val_t (* string___Collection___join_t)(val_t  self, val_t  param0);
val_t string___Collection___join(val_t  self, val_t  param0);
typedef val_t (* string___Map___map_join_t)(val_t  self, val_t  param0, val_t  param1);
val_t string___Map___map_join(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* string___NativeString_____bra_t)(val_t  self, val_t  param0);
val_t string___NativeString_____bra(val_t  self, val_t  param0);
typedef void (* string___NativeString_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void string___NativeString_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef void (* string___NativeString___copy_to_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void string___NativeString___copy_to(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* string___NativeString___cstring_length_t)(val_t  self);
val_t string___NativeString___cstring_length(val_t  self);
typedef val_t (* string___NativeString___atoi_t)(val_t  self);
val_t string___NativeString___atoi(val_t  self);
typedef val_t (* string___StringCapable___calloc_string_t)(val_t  self, val_t  param0);
val_t string___StringCapable___calloc_string(val_t  self, val_t  param0);
#define ATTR_string___Sys____args_cache(recv) ATTR(recv, COLOR_string___Sys____args_cache)
typedef val_t (* string___Sys___args_t)(val_t  self);
val_t string___Sys___args(val_t  self);
typedef val_t (* string___Sys___program_name_t)(val_t  self);
val_t string___Sys___program_name(val_t  self);
typedef void (* string___Sys___init_args_t)(val_t  self);
void string___Sys___init_args(val_t  self);
typedef val_t (* string___Sys___native_argc_t)(val_t  self);
val_t string___Sys___native_argc(val_t  self);
typedef val_t (* string___Sys___native_argv_t)(val_t  self, val_t  param0);
val_t string___Sys___native_argv(val_t  self, val_t  param0);
#endif
