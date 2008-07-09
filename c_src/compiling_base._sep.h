#ifndef compiling_base__sep
#define compiling_base__sep
#include "syntax._sep.h"
#include "utils._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_CompilerVisitor[];

extern const classtable_elt_t VFT_CContext[];

extern const classtable_elt_t VFT_PrimitiveInfo[];
extern const int SFT_compiling_base[];
#define COLOR_compiling_base___ToolContext____global SFT_compiling_base[0]
#define COLOR_compiling_base___ToolContext____attr_sim SFT_compiling_base[1]
#define COLOR_compiling_base___ToolContext____base_dir SFT_compiling_base[2]
#define COLOR_compiling_base___ToolContext____clibdir SFT_compiling_base[3]
#define COLOR_compiling_base___ToolContext____bindir SFT_compiling_base[4]
#define COLOR_compiling_base___ToolContext____output_file SFT_compiling_base[5]
#define COLOR_compiling_base___ToolContext____boost SFT_compiling_base[6]
#define COLOR_compiling_base___ToolContext____no_cc SFT_compiling_base[7]
#define COLOR_compiling_base___ToolContext____ext_prefix SFT_compiling_base[8]
#define COLOR_compiling_base___ToolContext___global SFT_compiling_base[9]
#define COLOR_compiling_base___ToolContext___global__eq SFT_compiling_base[10]
#define COLOR_compiling_base___ToolContext___attr_sim SFT_compiling_base[11]
#define COLOR_compiling_base___ToolContext___attr_sim__eq SFT_compiling_base[12]
#define COLOR_compiling_base___ToolContext___base_dir SFT_compiling_base[13]
#define COLOR_compiling_base___ToolContext___base_dir__eq SFT_compiling_base[14]
#define COLOR_compiling_base___ToolContext___clibdir SFT_compiling_base[15]
#define COLOR_compiling_base___ToolContext___clibdir__eq SFT_compiling_base[16]
#define COLOR_compiling_base___ToolContext___bindir SFT_compiling_base[17]
#define COLOR_compiling_base___ToolContext___bindir__eq SFT_compiling_base[18]
#define COLOR_compiling_base___ToolContext___output_file SFT_compiling_base[19]
#define COLOR_compiling_base___ToolContext___output_file__eq SFT_compiling_base[20]
#define COLOR_compiling_base___ToolContext___boost SFT_compiling_base[21]
#define COLOR_compiling_base___ToolContext___boost__eq SFT_compiling_base[22]
#define COLOR_compiling_base___ToolContext___no_cc SFT_compiling_base[23]
#define COLOR_compiling_base___ToolContext___no_cc__eq SFT_compiling_base[24]
#define COLOR_compiling_base___ToolContext___ext_prefix SFT_compiling_base[25]
#define COLOR_compiling_base___ToolContext___ext_prefix__eq SFT_compiling_base[26]
#define ID_CompilerVisitor SFT_compiling_base[27]
#define COLOR_CompilerVisitor SFT_compiling_base[28]
#define COLOR_compiling_base___CompilerVisitor____number_cpt SFT_compiling_base[29]
#define COLOR_compiling_base___CompilerVisitor____module SFT_compiling_base[30]
#define COLOR_compiling_base___CompilerVisitor____ctx SFT_compiling_base[31]
#define COLOR_compiling_base___CompilerVisitor____indent_level SFT_compiling_base[32]
#define COLOR_compiling_base___CompilerVisitor____tc SFT_compiling_base[33]
#define INIT_TABLE_POS_CompilerVisitor SFT_compiling_base[34]
#define COLOR_compiling_base___CompilerVisitor___add_decl SFT_compiling_base[35]
#define COLOR_compiling_base___CompilerVisitor___add_instr SFT_compiling_base[36]
#define COLOR_compiling_base___CompilerVisitor___new_number SFT_compiling_base[37]
#define COLOR_compiling_base___CompilerVisitor___indent SFT_compiling_base[38]
#define COLOR_compiling_base___CompilerVisitor___unindent SFT_compiling_base[39]
#define COLOR_compiling_base___CompilerVisitor___module SFT_compiling_base[40]
#define COLOR_compiling_base___CompilerVisitor___module__eq SFT_compiling_base[41]
#define COLOR_compiling_base___CompilerVisitor___ctx SFT_compiling_base[42]
#define COLOR_compiling_base___CompilerVisitor___ctx__eq SFT_compiling_base[43]
#define COLOR_compiling_base___CompilerVisitor___indent_level SFT_compiling_base[44]
#define COLOR_compiling_base___CompilerVisitor___indent_level__eq SFT_compiling_base[45]
#define COLOR_compiling_base___CompilerVisitor___tc SFT_compiling_base[46]
#define COLOR_compiling_base___CompilerVisitor___tc__eq SFT_compiling_base[47]
#define COLOR_compiling_base___CompilerVisitor___init SFT_compiling_base[48]
#define ID_CContext SFT_compiling_base[49]
#define COLOR_CContext SFT_compiling_base[50]
#define COLOR_compiling_base___CContext____decls SFT_compiling_base[51]
#define COLOR_compiling_base___CContext____instrs SFT_compiling_base[52]
#define INIT_TABLE_POS_CContext SFT_compiling_base[53]
#define COLOR_compiling_base___CContext___decls SFT_compiling_base[54]
#define COLOR_compiling_base___CContext___instrs SFT_compiling_base[55]
#define COLOR_compiling_base___CContext___append SFT_compiling_base[56]
#define COLOR_compiling_base___CContext___init SFT_compiling_base[57]
#define COLOR_compiling_base___MMGlobalProperty___meth_call SFT_compiling_base[58]
#define COLOR_compiling_base___MMGlobalProperty___attr_access SFT_compiling_base[59]
#define COLOR_compiling_base___MMGlobalProperty___color_id SFT_compiling_base[60]
#define COLOR_compiling_base___MMGlobalClass___id_id SFT_compiling_base[61]
#define COLOR_compiling_base___MMGlobalClass___color_id SFT_compiling_base[62]
#define COLOR_compiling_base___MMGlobalClass___init_table_pos_id SFT_compiling_base[63]
#define COLOR_compiling_base___MMLocalClass____primitive_info_cache SFT_compiling_base[64]
#define COLOR_compiling_base___MMLocalClass____primitive_info_b SFT_compiling_base[65]
#define COLOR_compiling_base___MMLocalClass___primitive_info SFT_compiling_base[66]
#define COLOR_compiling_base___MMLocalClass___primitive_ctypes SFT_compiling_base[67]
#define ID_PrimitiveInfo SFT_compiling_base[68]
#define COLOR_PrimitiveInfo SFT_compiling_base[69]
#define COLOR_compiling_base___PrimitiveInfo____name SFT_compiling_base[70]
#define COLOR_compiling_base___PrimitiveInfo____tagged SFT_compiling_base[71]
#define COLOR_compiling_base___PrimitiveInfo____cname SFT_compiling_base[72]
#define INIT_TABLE_POS_PrimitiveInfo SFT_compiling_base[73]
#define COLOR_compiling_base___PrimitiveInfo___name SFT_compiling_base[74]
#define COLOR_compiling_base___PrimitiveInfo___name__eq SFT_compiling_base[75]
#define COLOR_compiling_base___PrimitiveInfo___tagged SFT_compiling_base[76]
#define COLOR_compiling_base___PrimitiveInfo___tagged__eq SFT_compiling_base[77]
#define COLOR_compiling_base___PrimitiveInfo___cname SFT_compiling_base[78]
#define COLOR_compiling_base___PrimitiveInfo___cname__eq SFT_compiling_base[79]
#define COLOR_compiling_base___PrimitiveInfo___init SFT_compiling_base[80]
#define COLOR_compiling_base___MMType___cname SFT_compiling_base[81]
#define COLOR_compiling_base___MMType___default_cvalue SFT_compiling_base[82]
#define COLOR_compiling_base___MMType___boxtype SFT_compiling_base[83]
#define COLOR_compiling_base___MMType___unboxtype SFT_compiling_base[84]
#define COLOR_compiling_base___MMLocalProperty____cname_cache SFT_compiling_base[85]
#define COLOR_compiling_base___MMLocalProperty___cname SFT_compiling_base[86]
#define COLOR_compiling_base___MMLocalProperty___color_id_for_super SFT_compiling_base[87]
#define ATTR_compiling_base___ToolContext____global(recv) ATTR(recv, COLOR_compiling_base___ToolContext____global)
typedef val_t (* compiling_base___ToolContext___global_t)(val_t  self);
val_t compiling_base___ToolContext___global(val_t  self);
typedef void (* compiling_base___ToolContext___global__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___global__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____attr_sim(recv) ATTR(recv, COLOR_compiling_base___ToolContext____attr_sim)
typedef val_t (* compiling_base___ToolContext___attr_sim_t)(val_t  self);
val_t compiling_base___ToolContext___attr_sim(val_t  self);
typedef void (* compiling_base___ToolContext___attr_sim__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___attr_sim__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____base_dir(recv) ATTR(recv, COLOR_compiling_base___ToolContext____base_dir)
typedef val_t (* compiling_base___ToolContext___base_dir_t)(val_t  self);
val_t compiling_base___ToolContext___base_dir(val_t  self);
typedef void (* compiling_base___ToolContext___base_dir__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___base_dir__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____clibdir(recv) ATTR(recv, COLOR_compiling_base___ToolContext____clibdir)
typedef val_t (* compiling_base___ToolContext___clibdir_t)(val_t  self);
val_t compiling_base___ToolContext___clibdir(val_t  self);
typedef void (* compiling_base___ToolContext___clibdir__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___clibdir__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____bindir(recv) ATTR(recv, COLOR_compiling_base___ToolContext____bindir)
typedef val_t (* compiling_base___ToolContext___bindir_t)(val_t  self);
val_t compiling_base___ToolContext___bindir(val_t  self);
typedef void (* compiling_base___ToolContext___bindir__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___bindir__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____output_file(recv) ATTR(recv, COLOR_compiling_base___ToolContext____output_file)
typedef val_t (* compiling_base___ToolContext___output_file_t)(val_t  self);
val_t compiling_base___ToolContext___output_file(val_t  self);
typedef void (* compiling_base___ToolContext___output_file__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___output_file__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____boost(recv) ATTR(recv, COLOR_compiling_base___ToolContext____boost)
typedef val_t (* compiling_base___ToolContext___boost_t)(val_t  self);
val_t compiling_base___ToolContext___boost(val_t  self);
typedef void (* compiling_base___ToolContext___boost__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___boost__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____no_cc(recv) ATTR(recv, COLOR_compiling_base___ToolContext____no_cc)
typedef val_t (* compiling_base___ToolContext___no_cc_t)(val_t  self);
val_t compiling_base___ToolContext___no_cc(val_t  self);
typedef void (* compiling_base___ToolContext___no_cc__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___no_cc__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___ToolContext____ext_prefix(recv) ATTR(recv, COLOR_compiling_base___ToolContext____ext_prefix)
typedef val_t (* compiling_base___ToolContext___ext_prefix_t)(val_t  self);
val_t compiling_base___ToolContext___ext_prefix(val_t  self);
typedef void (* compiling_base___ToolContext___ext_prefix__eq_t)(val_t  self, val_t  param0);
void compiling_base___ToolContext___ext_prefix__eq(val_t  self, val_t  param0);
typedef void (* compiling_base___CompilerVisitor___add_decl_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___add_decl(val_t  self, val_t  param0);
typedef void (* compiling_base___CompilerVisitor___add_instr_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___add_instr(val_t  self, val_t  param0);
typedef val_t (* compiling_base___CompilerVisitor___new_number_t)(val_t  self);
val_t compiling_base___CompilerVisitor___new_number(val_t  self);
#define ATTR_compiling_base___CompilerVisitor____number_cpt(recv) ATTR(recv, COLOR_compiling_base___CompilerVisitor____number_cpt)
typedef void (* compiling_base___CompilerVisitor___indent_t)(val_t  self);
void compiling_base___CompilerVisitor___indent(val_t  self);
typedef void (* compiling_base___CompilerVisitor___unindent_t)(val_t  self);
void compiling_base___CompilerVisitor___unindent(val_t  self);
typedef val_t (* compiling_base___CompilerVisitor___to_s_t)(val_t  self);
val_t compiling_base___CompilerVisitor___to_s(val_t  self);
#define ATTR_compiling_base___CompilerVisitor____module(recv) ATTR(recv, COLOR_compiling_base___CompilerVisitor____module)
typedef val_t (* compiling_base___CompilerVisitor___module_t)(val_t  self);
val_t compiling_base___CompilerVisitor___module(val_t  self);
typedef void (* compiling_base___CompilerVisitor___module__eq_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___module__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___CompilerVisitor____ctx(recv) ATTR(recv, COLOR_compiling_base___CompilerVisitor____ctx)
typedef val_t (* compiling_base___CompilerVisitor___ctx_t)(val_t  self);
val_t compiling_base___CompilerVisitor___ctx(val_t  self);
typedef void (* compiling_base___CompilerVisitor___ctx__eq_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___ctx__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___CompilerVisitor____indent_level(recv) ATTR(recv, COLOR_compiling_base___CompilerVisitor____indent_level)
typedef val_t (* compiling_base___CompilerVisitor___indent_level_t)(val_t  self);
val_t compiling_base___CompilerVisitor___indent_level(val_t  self);
typedef void (* compiling_base___CompilerVisitor___indent_level__eq_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___indent_level__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___CompilerVisitor____tc(recv) ATTR(recv, COLOR_compiling_base___CompilerVisitor____tc)
typedef val_t (* compiling_base___CompilerVisitor___tc_t)(val_t  self);
val_t compiling_base___CompilerVisitor___tc(val_t  self);
typedef void (* compiling_base___CompilerVisitor___tc__eq_t)(val_t  self, val_t  param0);
void compiling_base___CompilerVisitor___tc__eq(val_t  self, val_t  param0);
typedef void (* compiling_base___CompilerVisitor___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_base___CompilerVisitor___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_base___CompilerVisitor___init(val_t  param0);
#define ATTR_compiling_base___CContext____decls(recv) ATTR(recv, COLOR_compiling_base___CContext____decls)
typedef val_t (* compiling_base___CContext___decls_t)(val_t  self);
val_t compiling_base___CContext___decls(val_t  self);
#define ATTR_compiling_base___CContext____instrs(recv) ATTR(recv, COLOR_compiling_base___CContext____instrs)
typedef val_t (* compiling_base___CContext___instrs_t)(val_t  self);
val_t compiling_base___CContext___instrs(val_t  self);
typedef void (* compiling_base___CContext___append_t)(val_t  self, val_t  param0);
void compiling_base___CContext___append(val_t  self, val_t  param0);
typedef void (* compiling_base___CContext___init_t)(val_t  self, int* init_table);
void compiling_base___CContext___init(val_t  self, int* init_table);
val_t NEW_compiling_base___CContext___init();
typedef val_t (* compiling_base___MMGlobalProperty___meth_call_t)(val_t  self);
val_t compiling_base___MMGlobalProperty___meth_call(val_t  self);
typedef val_t (* compiling_base___MMGlobalProperty___attr_access_t)(val_t  self);
val_t compiling_base___MMGlobalProperty___attr_access(val_t  self);
typedef val_t (* compiling_base___MMGlobalProperty___color_id_t)(val_t  self);
val_t compiling_base___MMGlobalProperty___color_id(val_t  self);
typedef val_t (* compiling_base___MMGlobalClass___id_id_t)(val_t  self);
val_t compiling_base___MMGlobalClass___id_id(val_t  self);
typedef val_t (* compiling_base___MMGlobalClass___color_id_t)(val_t  self);
val_t compiling_base___MMGlobalClass___color_id(val_t  self);
typedef val_t (* compiling_base___MMGlobalClass___init_table_pos_id_t)(val_t  self);
val_t compiling_base___MMGlobalClass___init_table_pos_id(val_t  self);
#define ATTR_compiling_base___MMLocalClass____primitive_info_cache(recv) ATTR(recv, COLOR_compiling_base___MMLocalClass____primitive_info_cache)
#define ATTR_compiling_base___MMLocalClass____primitive_info_b(recv) ATTR(recv, COLOR_compiling_base___MMLocalClass____primitive_info_b)
typedef val_t (* compiling_base___MMLocalClass___primitive_info_t)(val_t  self);
val_t compiling_base___MMLocalClass___primitive_info(val_t  self);
typedef val_t (* compiling_base___MMLocalClass___primitive_ctypes_t)(val_t  self);
val_t compiling_base___MMLocalClass___primitive_ctypes(val_t  self);
#define ATTR_compiling_base___PrimitiveInfo____name(recv) ATTR(recv, COLOR_compiling_base___PrimitiveInfo____name)
typedef val_t (* compiling_base___PrimitiveInfo___name_t)(val_t  self);
val_t compiling_base___PrimitiveInfo___name(val_t  self);
typedef void (* compiling_base___PrimitiveInfo___name__eq_t)(val_t  self, val_t  param0);
void compiling_base___PrimitiveInfo___name__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___PrimitiveInfo____tagged(recv) ATTR(recv, COLOR_compiling_base___PrimitiveInfo____tagged)
typedef val_t (* compiling_base___PrimitiveInfo___tagged_t)(val_t  self);
val_t compiling_base___PrimitiveInfo___tagged(val_t  self);
typedef void (* compiling_base___PrimitiveInfo___tagged__eq_t)(val_t  self, val_t  param0);
void compiling_base___PrimitiveInfo___tagged__eq(val_t  self, val_t  param0);
#define ATTR_compiling_base___PrimitiveInfo____cname(recv) ATTR(recv, COLOR_compiling_base___PrimitiveInfo____cname)
typedef val_t (* compiling_base___PrimitiveInfo___cname_t)(val_t  self);
val_t compiling_base___PrimitiveInfo___cname(val_t  self);
typedef void (* compiling_base___PrimitiveInfo___cname__eq_t)(val_t  self, val_t  param0);
void compiling_base___PrimitiveInfo___cname__eq(val_t  self, val_t  param0);
typedef void (* compiling_base___PrimitiveInfo___init_t)(val_t  self, int* init_table);
void compiling_base___PrimitiveInfo___init(val_t  self, int* init_table);
val_t NEW_compiling_base___PrimitiveInfo___init();
typedef val_t (* compiling_base___MMType___cname_t)(val_t  self);
val_t compiling_base___MMType___cname(val_t  self);
typedef val_t (* compiling_base___MMType___default_cvalue_t)(val_t  self);
val_t compiling_base___MMType___default_cvalue(val_t  self);
typedef val_t (* compiling_base___MMType___boxtype_t)(val_t  self, val_t  param0);
val_t compiling_base___MMType___boxtype(val_t  self, val_t  param0);
typedef val_t (* compiling_base___MMType___unboxtype_t)(val_t  self, val_t  param0);
val_t compiling_base___MMType___unboxtype(val_t  self, val_t  param0);
#define ATTR_compiling_base___MMLocalProperty____cname_cache(recv) ATTR(recv, COLOR_compiling_base___MMLocalProperty____cname_cache)
typedef val_t (* compiling_base___MMLocalProperty___cname_t)(val_t  self);
val_t compiling_base___MMLocalProperty___cname(val_t  self);
typedef val_t (* compiling_base___MMLocalProperty___color_id_for_super_t)(val_t  self);
val_t compiling_base___MMLocalProperty___color_id_for_super(val_t  self);
#endif
