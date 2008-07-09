#ifndef mmbuilder__sep
#define mmbuilder__sep
#include "syntax_base._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_CSHSorter[];

extern const classtable_elt_t VFT_MMSrcAncestor[];

extern const classtable_elt_t VFT_ClassBuilderVisitor[];

extern const classtable_elt_t VFT_ClassSpecializationBuilderVisitor[];

extern const classtable_elt_t VFT_ClassAncestorBuilder[];

extern const classtable_elt_t VFT_ClassVerifierVisitor[];

extern const classtable_elt_t VFT_PropertyBuilderVisitor[];

extern const classtable_elt_t VFT_PropertyVerifierVisitor[];

extern const classtable_elt_t VFT_MMSrcTypeFormalParameter[];

extern const classtable_elt_t VFT_MethidAccumulator[];
extern const int SFT_mmbuilder[];
#define ID_CSHSorter SFT_mmbuilder[0]
#define COLOR_CSHSorter SFT_mmbuilder[1]
#define INIT_TABLE_POS_CSHSorter SFT_mmbuilder[2]
#define COLOR_mmbuilder___CSHSorter___init SFT_mmbuilder[3]
#define COLOR_mmbuilder___MMSrcModule___do_mmbuilder SFT_mmbuilder[4]
#define COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property SFT_mmbuilder[5]
#define ID_MMSrcAncestor SFT_mmbuilder[6]
#define COLOR_MMSrcAncestor SFT_mmbuilder[7]
#define COLOR_mmbuilder___MMSrcAncestor____node SFT_mmbuilder[8]
#define COLOR_mmbuilder___MMSrcAncestor____local_class SFT_mmbuilder[9]
#define INIT_TABLE_POS_MMSrcAncestor SFT_mmbuilder[10]
#define COLOR_mmbuilder___MMSrcAncestor___node SFT_mmbuilder[11]
#define COLOR_mmbuilder___MMSrcAncestor___init SFT_mmbuilder[12]
#define ID_ClassBuilderVisitor SFT_mmbuilder[13]
#define COLOR_ClassBuilderVisitor SFT_mmbuilder[14]
#define COLOR_mmbuilder___ClassBuilderVisitor____local_class_arity SFT_mmbuilder[15]
#define COLOR_mmbuilder___ClassBuilderVisitor____formals SFT_mmbuilder[16]
#define INIT_TABLE_POS_ClassBuilderVisitor SFT_mmbuilder[17]
#define COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity SFT_mmbuilder[18]
#define COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity__eq SFT_mmbuilder[19]
#define COLOR_mmbuilder___ClassBuilderVisitor___formals SFT_mmbuilder[20]
#define COLOR_mmbuilder___ClassBuilderVisitor___formals__eq SFT_mmbuilder[21]
#define COLOR_mmbuilder___ClassBuilderVisitor___init SFT_mmbuilder[22]
#define ID_ClassSpecializationBuilderVisitor SFT_mmbuilder[23]
#define COLOR_ClassSpecializationBuilderVisitor SFT_mmbuilder[24]
#define INIT_TABLE_POS_ClassSpecializationBuilderVisitor SFT_mmbuilder[25]
#define COLOR_mmbuilder___ClassSpecializationBuilderVisitor___init SFT_mmbuilder[26]
#define ID_ClassAncestorBuilder SFT_mmbuilder[27]
#define COLOR_ClassAncestorBuilder SFT_mmbuilder[28]
#define INIT_TABLE_POS_ClassAncestorBuilder SFT_mmbuilder[29]
#define COLOR_mmbuilder___ClassAncestorBuilder___init SFT_mmbuilder[30]
#define ID_ClassVerifierVisitor SFT_mmbuilder[31]
#define COLOR_ClassVerifierVisitor SFT_mmbuilder[32]
#define INIT_TABLE_POS_ClassVerifierVisitor SFT_mmbuilder[33]
#define COLOR_mmbuilder___ClassVerifierVisitor___init SFT_mmbuilder[34]
#define ID_PropertyBuilderVisitor SFT_mmbuilder[35]
#define COLOR_PropertyBuilderVisitor SFT_mmbuilder[36]
#define INIT_TABLE_POS_PropertyBuilderVisitor SFT_mmbuilder[37]
#define COLOR_mmbuilder___PropertyBuilderVisitor___init SFT_mmbuilder[38]
#define ID_PropertyVerifierVisitor SFT_mmbuilder[39]
#define COLOR_PropertyVerifierVisitor SFT_mmbuilder[40]
#define COLOR_mmbuilder___PropertyVerifierVisitor____params SFT_mmbuilder[41]
#define COLOR_mmbuilder___PropertyVerifierVisitor____untyped_params SFT_mmbuilder[42]
#define COLOR_mmbuilder___PropertyVerifierVisitor____vararg_rank SFT_mmbuilder[43]
#define COLOR_mmbuilder___PropertyVerifierVisitor____signature SFT_mmbuilder[44]
#define INIT_TABLE_POS_PropertyVerifierVisitor SFT_mmbuilder[45]
#define COLOR_mmbuilder___PropertyVerifierVisitor___params SFT_mmbuilder[46]
#define COLOR_mmbuilder___PropertyVerifierVisitor___params__eq SFT_mmbuilder[47]
#define COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params SFT_mmbuilder[48]
#define COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params__eq SFT_mmbuilder[49]
#define COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank SFT_mmbuilder[50]
#define COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank__eq SFT_mmbuilder[51]
#define COLOR_mmbuilder___PropertyVerifierVisitor___signature SFT_mmbuilder[52]
#define COLOR_mmbuilder___PropertyVerifierVisitor___signature__eq SFT_mmbuilder[53]
#define COLOR_mmbuilder___PropertyVerifierVisitor___init SFT_mmbuilder[54]
#define COLOR_mmbuilder___PNode___accept_class_builder SFT_mmbuilder[55]
#define COLOR_mmbuilder___PNode___accept_class_specialization_builder SFT_mmbuilder[56]
#define COLOR_mmbuilder___PNode___accept_class_ancestor_builder SFT_mmbuilder[57]
#define COLOR_mmbuilder___PNode___accept_class_verifier SFT_mmbuilder[58]
#define COLOR_mmbuilder___PNode___accept_property_builder SFT_mmbuilder[59]
#define COLOR_mmbuilder___PNode___accept_property_verifier SFT_mmbuilder[60]
#define COLOR_mmbuilder___AModule___import_super_modules SFT_mmbuilder[61]
#define COLOR_mmbuilder___PImport___module_name SFT_mmbuilder[62]
#define COLOR_mmbuilder___PImport___visibility_level SFT_mmbuilder[63]
#define COLOR_mmbuilder___PVisibility___level SFT_mmbuilder[64]
#define COLOR_mmbuilder___PClassdef____local_class SFT_mmbuilder[65]
#define COLOR_mmbuilder___PClassdef___name SFT_mmbuilder[66]
#define COLOR_mmbuilder___PClassdef___arity SFT_mmbuilder[67]
#define COLOR_mmbuilder___PClassdef___visibility_level SFT_mmbuilder[68]
#define COLOR_SUPER_mmbuilder___PClassdef___accept_class_builder SFT_mmbuilder[69]
#define COLOR_SUPER_mmbuilder___PClassdef___accept_abs_syntax_visitor SFT_mmbuilder[70]
#define COLOR_mmbuilder___PClasskind___is_interface SFT_mmbuilder[71]
#define COLOR_mmbuilder___PClasskind___is_universal SFT_mmbuilder[72]
#define COLOR_mmbuilder___PClasskind___is_abstract SFT_mmbuilder[73]
#define COLOR_SUPER_mmbuilder___AClassdef___accept_class_verifier SFT_mmbuilder[74]
#define ID_MMSrcTypeFormalParameter SFT_mmbuilder[75]
#define COLOR_MMSrcTypeFormalParameter SFT_mmbuilder[76]
#define COLOR_mmbuilder___MMSrcTypeFormalParameter____node SFT_mmbuilder[77]
#define INIT_TABLE_POS_MMSrcTypeFormalParameter SFT_mmbuilder[78]
#define COLOR_mmbuilder___MMSrcTypeFormalParameter___node SFT_mmbuilder[79]
#define COLOR_mmbuilder___MMSrcTypeFormalParameter___init SFT_mmbuilder[80]
#define COLOR_mmbuilder___AFormaldef____formal SFT_mmbuilder[81]
#define COLOR_SUPER_mmbuilder___AFormaldef___accept_class_builder SFT_mmbuilder[82]
#define COLOR_SUPER_mmbuilder___AFormaldef___accept_class_verifier SFT_mmbuilder[83]
#define COLOR_mmbuilder___ASuperclass____ancestor SFT_mmbuilder[84]
#define COLOR_mmbuilder___ASuperclass___ancestor SFT_mmbuilder[85]
#define COLOR_SUPER_mmbuilder___ASuperclass___accept_class_specialization_builder SFT_mmbuilder[86]
#define COLOR_SUPER_mmbuilder___ASuperclass___accept_class_ancestor_builder SFT_mmbuilder[87]
#define COLOR_SUPER_mmbuilder___ASuperclass___accept_class_verifier SFT_mmbuilder[88]
#define COLOR_mmbuilder___PPropdef___process_and_check SFT_mmbuilder[89]
#define COLOR_mmbuilder___PPropdef___do_and_check_intro SFT_mmbuilder[90]
#define COLOR_mmbuilder___PPropdef___inherit_signature SFT_mmbuilder[91]
#define COLOR_mmbuilder___PPropdef___do_and_check_redef SFT_mmbuilder[92]
#define COLOR_mmbuilder___AAttrPropdef____readmethod SFT_mmbuilder[93]
#define COLOR_mmbuilder___AAttrPropdef____writemethod SFT_mmbuilder[94]
#define COLOR_mmbuilder___AAttrPropdef____prop SFT_mmbuilder[95]
#define COLOR_SUPER_mmbuilder___AAttrPropdef___accept_property_builder SFT_mmbuilder[96]
#define COLOR_SUPER_mmbuilder___AAttrPropdef___accept_property_verifier SFT_mmbuilder[97]
#define COLOR_SUPER_mmbuilder___AAttrPropdef___accept_abs_syntax_visitor SFT_mmbuilder[98]
#define COLOR_mmbuilder___AMethPropdef____name SFT_mmbuilder[99]
#define COLOR_mmbuilder___AMethPropdef____method SFT_mmbuilder[100]
#define COLOR_mmbuilder___AMethPropdef___name SFT_mmbuilder[101]
#define COLOR_SUPER_mmbuilder___AMethPropdef___accept_property_builder SFT_mmbuilder[102]
#define COLOR_SUPER_mmbuilder___AMethPropdef___accept_property_verifier SFT_mmbuilder[103]
#define COLOR_SUPER_mmbuilder___AMethPropdef___accept_abs_syntax_visitor SFT_mmbuilder[104]
#define COLOR_mmbuilder___ATypePropdef____prop SFT_mmbuilder[105]
#define COLOR_SUPER_mmbuilder___ATypePropdef___accept_property_builder SFT_mmbuilder[106]
#define COLOR_SUPER_mmbuilder___ATypePropdef___accept_property_verifier SFT_mmbuilder[107]
#define COLOR_SUPER_mmbuilder___ATypePropdef___accept_abs_syntax_visitor SFT_mmbuilder[108]
#define ID_MethidAccumulator SFT_mmbuilder[109]
#define COLOR_MethidAccumulator SFT_mmbuilder[110]
#define COLOR_mmbuilder___MethidAccumulator____name SFT_mmbuilder[111]
#define INIT_TABLE_POS_MethidAccumulator SFT_mmbuilder[112]
#define COLOR_mmbuilder___MethidAccumulator___name SFT_mmbuilder[113]
#define COLOR_mmbuilder___MethidAccumulator___init SFT_mmbuilder[114]
#define COLOR_mmbuilder___PMethid____name SFT_mmbuilder[115]
#define COLOR_mmbuilder___PMethid___name SFT_mmbuilder[116]
#define COLOR_SUPER_mmbuilder___PMethid___accept_property_builder SFT_mmbuilder[117]
#define COLOR_mmbuilder___PSignature___check_visibility SFT_mmbuilder[118]
#define COLOR_SUPER_mmbuilder___ASignature___accept_property_verifier SFT_mmbuilder[119]
#define COLOR_mmbuilder___PParam____position SFT_mmbuilder[120]
#define COLOR_mmbuilder___PParam____variable SFT_mmbuilder[121]
#define COLOR_mmbuilder___PParam____stype SFT_mmbuilder[122]
#define COLOR_mmbuilder___PParam___stype SFT_mmbuilder[123]
#define COLOR_mmbuilder___PParam___stype__eq SFT_mmbuilder[124]
#define COLOR_SUPER_mmbuilder___PParam___accept_property_verifier SFT_mmbuilder[125]
#define COLOR_mmbuilder___PParam___is_vararg SFT_mmbuilder[126]
#define COLOR_mmbuilder___PType___check_visibility SFT_mmbuilder[127]
typedef val_t (* mmbuilder___CSHSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t mmbuilder___CSHSorter___compare(val_t  self, val_t  param0, val_t  param1);
typedef void (* mmbuilder___CSHSorter___init_t)(val_t  self, int* init_table);
void mmbuilder___CSHSorter___init(val_t  self, int* init_table);
val_t NEW_mmbuilder___CSHSorter___init();
typedef void (* mmbuilder___MMSrcModule___do_mmbuilder_t)(val_t  self, val_t  param0);
void mmbuilder___MMSrcModule___do_mmbuilder(val_t  self, val_t  param0);
typedef void (* mmbuilder___MMSrcLocalClass___add_src_local_property_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___MMSrcLocalClass___add_src_local_property(val_t  self, val_t  param0, val_t  param1);
#define ATTR_mmbuilder___MMSrcAncestor____node(recv) ATTR(recv, COLOR_mmbuilder___MMSrcAncestor____node)
typedef val_t (* mmbuilder___MMSrcAncestor___node_t)(val_t  self);
val_t mmbuilder___MMSrcAncestor___node(val_t  self);
#define ATTR_mmbuilder___MMSrcAncestor____local_class(recv) ATTR(recv, COLOR_mmbuilder___MMSrcAncestor____local_class)
typedef val_t (* mmbuilder___MMSrcAncestor___local_class_t)(val_t  self);
val_t mmbuilder___MMSrcAncestor___local_class(val_t  self);
typedef void (* mmbuilder___MMSrcAncestor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___MMSrcAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___MMSrcAncestor___init(val_t  param0, val_t  param1);
#define ATTR_mmbuilder___ClassBuilderVisitor____local_class_arity(recv) ATTR(recv, COLOR_mmbuilder___ClassBuilderVisitor____local_class_arity)
typedef val_t (* mmbuilder___ClassBuilderVisitor___local_class_arity_t)(val_t  self);
val_t mmbuilder___ClassBuilderVisitor___local_class_arity(val_t  self);
typedef void (* mmbuilder___ClassBuilderVisitor___local_class_arity__eq_t)(val_t  self, val_t  param0);
void mmbuilder___ClassBuilderVisitor___local_class_arity__eq(val_t  self, val_t  param0);
#define ATTR_mmbuilder___ClassBuilderVisitor____formals(recv) ATTR(recv, COLOR_mmbuilder___ClassBuilderVisitor____formals)
typedef val_t (* mmbuilder___ClassBuilderVisitor___formals_t)(val_t  self);
val_t mmbuilder___ClassBuilderVisitor___formals(val_t  self);
typedef void (* mmbuilder___ClassBuilderVisitor___formals__eq_t)(val_t  self, val_t  param0);
void mmbuilder___ClassBuilderVisitor___formals__eq(val_t  self, val_t  param0);
typedef void (* mmbuilder___ClassBuilderVisitor___visit_t)(val_t  self, val_t  param0);
void mmbuilder___ClassBuilderVisitor___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___ClassBuilderVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___ClassBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___ClassBuilderVisitor___init(val_t  param0, val_t  param1);
typedef void (* mmbuilder___ClassSpecializationBuilderVisitor___visit_t)(val_t  self, val_t  param0);
void mmbuilder___ClassSpecializationBuilderVisitor___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___ClassSpecializationBuilderVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___ClassSpecializationBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___ClassSpecializationBuilderVisitor___init(val_t  param0, val_t  param1);
typedef void (* mmbuilder___ClassAncestorBuilder___visit_t)(val_t  self, val_t  param0);
void mmbuilder___ClassAncestorBuilder___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___ClassAncestorBuilder___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___ClassAncestorBuilder___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___ClassAncestorBuilder___init(val_t  param0, val_t  param1);
typedef void (* mmbuilder___ClassVerifierVisitor___visit_t)(val_t  self, val_t  param0);
void mmbuilder___ClassVerifierVisitor___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___ClassVerifierVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___ClassVerifierVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___ClassVerifierVisitor___init(val_t  param0, val_t  param1);
typedef void (* mmbuilder___PropertyBuilderVisitor___visit_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyBuilderVisitor___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___PropertyBuilderVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___PropertyBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___PropertyBuilderVisitor___init(val_t  param0, val_t  param1);
#define ATTR_mmbuilder___PropertyVerifierVisitor____params(recv) ATTR(recv, COLOR_mmbuilder___PropertyVerifierVisitor____params)
typedef val_t (* mmbuilder___PropertyVerifierVisitor___params_t)(val_t  self);
val_t mmbuilder___PropertyVerifierVisitor___params(val_t  self);
typedef void (* mmbuilder___PropertyVerifierVisitor___params__eq_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyVerifierVisitor___params__eq(val_t  self, val_t  param0);
#define ATTR_mmbuilder___PropertyVerifierVisitor____untyped_params(recv) ATTR(recv, COLOR_mmbuilder___PropertyVerifierVisitor____untyped_params)
typedef val_t (* mmbuilder___PropertyVerifierVisitor___untyped_params_t)(val_t  self);
val_t mmbuilder___PropertyVerifierVisitor___untyped_params(val_t  self);
typedef void (* mmbuilder___PropertyVerifierVisitor___untyped_params__eq_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyVerifierVisitor___untyped_params__eq(val_t  self, val_t  param0);
#define ATTR_mmbuilder___PropertyVerifierVisitor____vararg_rank(recv) ATTR(recv, COLOR_mmbuilder___PropertyVerifierVisitor____vararg_rank)
typedef val_t (* mmbuilder___PropertyVerifierVisitor___vararg_rank_t)(val_t  self);
val_t mmbuilder___PropertyVerifierVisitor___vararg_rank(val_t  self);
typedef void (* mmbuilder___PropertyVerifierVisitor___vararg_rank__eq_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyVerifierVisitor___vararg_rank__eq(val_t  self, val_t  param0);
#define ATTR_mmbuilder___PropertyVerifierVisitor____signature(recv) ATTR(recv, COLOR_mmbuilder___PropertyVerifierVisitor____signature)
typedef val_t (* mmbuilder___PropertyVerifierVisitor___signature_t)(val_t  self);
val_t mmbuilder___PropertyVerifierVisitor___signature(val_t  self);
typedef void (* mmbuilder___PropertyVerifierVisitor___signature__eq_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyVerifierVisitor___signature__eq(val_t  self, val_t  param0);
typedef void (* mmbuilder___PropertyVerifierVisitor___visit_t)(val_t  self, val_t  param0);
void mmbuilder___PropertyVerifierVisitor___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___PropertyVerifierVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void mmbuilder___PropertyVerifierVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_mmbuilder___PropertyVerifierVisitor___init(val_t  param0, val_t  param1);
typedef void (* mmbuilder___PNode___accept_class_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_class_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PNode___accept_class_specialization_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_class_specialization_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PNode___accept_class_ancestor_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_class_ancestor_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PNode___accept_class_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_class_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___PNode___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PNode___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___PNode___accept_property_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___AModule___import_super_modules_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___AModule___import_super_modules(val_t  self, val_t  param0, val_t  param1);
typedef void (* mmbuilder___APackagedecl___accept_class_builder_t)(val_t  self, val_t  param0);
void mmbuilder___APackagedecl___accept_class_builder(val_t  self, val_t  param0);
typedef val_t (* mmbuilder___PImport___module_name_t)(val_t  self);
val_t mmbuilder___PImport___module_name(val_t  self);
typedef val_t (* mmbuilder___PImport___visibility_level_t)(val_t  self);
val_t mmbuilder___PImport___visibility_level(val_t  self);
typedef val_t (* mmbuilder___AImport___module_name_t)(val_t  self);
val_t mmbuilder___AImport___module_name(val_t  self);
typedef val_t (* mmbuilder___AImport___visibility_level_t)(val_t  self);
val_t mmbuilder___AImport___visibility_level(val_t  self);
typedef val_t (* mmbuilder___ANoImport___module_name_t)(val_t  self);
val_t mmbuilder___ANoImport___module_name(val_t  self);
typedef val_t (* mmbuilder___PVisibility___level_t)(val_t  self);
val_t mmbuilder___PVisibility___level(val_t  self);
typedef val_t (* mmbuilder___APublicVisibility___level_t)(val_t  self);
val_t mmbuilder___APublicVisibility___level(val_t  self);
typedef val_t (* mmbuilder___AProtectedVisibility___level_t)(val_t  self);
val_t mmbuilder___AProtectedVisibility___level(val_t  self);
typedef val_t (* mmbuilder___APrivateVisibility___level_t)(val_t  self);
val_t mmbuilder___APrivateVisibility___level(val_t  self);
typedef val_t (* mmbuilder___AIntrudeVisibility___level_t)(val_t  self);
val_t mmbuilder___AIntrudeVisibility___level(val_t  self);
#define ATTR_mmbuilder___PClassdef____local_class(recv) ATTR(recv, COLOR_mmbuilder___PClassdef____local_class)
typedef val_t (* mmbuilder___PClassdef___local_class_t)(val_t  self);
val_t mmbuilder___PClassdef___local_class(val_t  self);
typedef val_t (* mmbuilder___PClassdef___name_t)(val_t  self);
val_t mmbuilder___PClassdef___name(val_t  self);
typedef val_t (* mmbuilder___PClassdef___arity_t)(val_t  self);
val_t mmbuilder___PClassdef___arity(val_t  self);
typedef val_t (* mmbuilder___PClassdef___visibility_level_t)(val_t  self);
val_t mmbuilder___PClassdef___visibility_level(val_t  self);
typedef void (* mmbuilder___PClassdef___accept_class_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PClassdef___accept_class_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PClassdef___accept_abs_syntax_visitor_t)(val_t  self, val_t  param0);
void mmbuilder___PClassdef___accept_abs_syntax_visitor(val_t  self, val_t  param0);
typedef val_t (* mmbuilder___PClasskind___is_interface_t)(val_t  self);
val_t mmbuilder___PClasskind___is_interface(val_t  self);
typedef val_t (* mmbuilder___PClasskind___is_universal_t)(val_t  self);
val_t mmbuilder___PClasskind___is_universal(val_t  self);
typedef val_t (* mmbuilder___PClasskind___is_abstract_t)(val_t  self);
val_t mmbuilder___PClasskind___is_abstract(val_t  self);
typedef val_t (* mmbuilder___AInterfaceClasskind___is_interface_t)(val_t  self);
val_t mmbuilder___AInterfaceClasskind___is_interface(val_t  self);
typedef val_t (* mmbuilder___AUniversalClasskind___is_universal_t)(val_t  self);
val_t mmbuilder___AUniversalClasskind___is_universal(val_t  self);
typedef val_t (* mmbuilder___AAbstractClasskind___is_abstract_t)(val_t  self);
val_t mmbuilder___AAbstractClasskind___is_abstract(val_t  self);
typedef val_t (* mmbuilder___AClassdef___name_t)(val_t  self);
val_t mmbuilder___AClassdef___name(val_t  self);
typedef val_t (* mmbuilder___AClassdef___arity_t)(val_t  self);
val_t mmbuilder___AClassdef___arity(val_t  self);
typedef void (* mmbuilder___AClassdef___accept_class_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___AClassdef___accept_class_verifier(val_t  self, val_t  param0);
typedef val_t (* mmbuilder___AClassdef___visibility_level_t)(val_t  self);
val_t mmbuilder___AClassdef___visibility_level(val_t  self);
typedef val_t (* mmbuilder___AMainClassdef___name_t)(val_t  self);
val_t mmbuilder___AMainClassdef___name(val_t  self);
typedef val_t (* mmbuilder___ATopClassdef___name_t)(val_t  self);
val_t mmbuilder___ATopClassdef___name(val_t  self);
#define ATTR_mmbuilder___MMSrcTypeFormalParameter____node(recv) ATTR(recv, COLOR_mmbuilder___MMSrcTypeFormalParameter____node)
typedef val_t (* mmbuilder___MMSrcTypeFormalParameter___node_t)(val_t  self);
val_t mmbuilder___MMSrcTypeFormalParameter___node(val_t  self);
typedef void (* mmbuilder___MMSrcTypeFormalParameter___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void mmbuilder___MMSrcTypeFormalParameter___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_mmbuilder___MMSrcTypeFormalParameter___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_mmbuilder___AFormaldef____formal(recv) ATTR(recv, COLOR_mmbuilder___AFormaldef____formal)
typedef void (* mmbuilder___AFormaldef___accept_class_builder_t)(val_t  self, val_t  param0);
void mmbuilder___AFormaldef___accept_class_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___AFormaldef___accept_class_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___AFormaldef___accept_class_verifier(val_t  self, val_t  param0);
#define ATTR_mmbuilder___ASuperclass____ancestor(recv) ATTR(recv, COLOR_mmbuilder___ASuperclass____ancestor)
typedef val_t (* mmbuilder___ASuperclass___ancestor_t)(val_t  self);
val_t mmbuilder___ASuperclass___ancestor(val_t  self);
typedef void (* mmbuilder___ASuperclass___accept_class_specialization_builder_t)(val_t  self, val_t  param0);
void mmbuilder___ASuperclass___accept_class_specialization_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___ASuperclass___accept_class_ancestor_builder_t)(val_t  self, val_t  param0);
void mmbuilder___ASuperclass___accept_class_ancestor_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___ASuperclass___accept_class_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___ASuperclass___accept_class_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___PPropdef___process_and_check_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void mmbuilder___PPropdef___process_and_check(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* mmbuilder___PPropdef___do_and_check_intro_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void mmbuilder___PPropdef___do_and_check_intro(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* mmbuilder___PPropdef___inherit_signature_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void mmbuilder___PPropdef___inherit_signature(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* mmbuilder___PPropdef___do_and_check_redef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void mmbuilder___PPropdef___do_and_check_redef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_mmbuilder___AAttrPropdef____readmethod(recv) ATTR(recv, COLOR_mmbuilder___AAttrPropdef____readmethod)
typedef val_t (* mmbuilder___AAttrPropdef___readmethod_t)(val_t  self);
val_t mmbuilder___AAttrPropdef___readmethod(val_t  self);
#define ATTR_mmbuilder___AAttrPropdef____writemethod(recv) ATTR(recv, COLOR_mmbuilder___AAttrPropdef____writemethod)
typedef val_t (* mmbuilder___AAttrPropdef___writemethod_t)(val_t  self);
val_t mmbuilder___AAttrPropdef___writemethod(val_t  self);
#define ATTR_mmbuilder___AAttrPropdef____prop(recv) ATTR(recv, COLOR_mmbuilder___AAttrPropdef____prop)
typedef val_t (* mmbuilder___AAttrPropdef___prop_t)(val_t  self);
val_t mmbuilder___AAttrPropdef___prop(val_t  self);
typedef void (* mmbuilder___AAttrPropdef___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___AAttrPropdef___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___AAttrPropdef___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___AAttrPropdef___accept_property_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___AAttrPropdef___accept_abs_syntax_visitor_t)(val_t  self, val_t  param0);
void mmbuilder___AAttrPropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0);
#define ATTR_mmbuilder___AMethPropdef____name(recv) ATTR(recv, COLOR_mmbuilder___AMethPropdef____name)
typedef val_t (* mmbuilder___AMethPropdef___name_t)(val_t  self);
val_t mmbuilder___AMethPropdef___name(val_t  self);
#define ATTR_mmbuilder___AMethPropdef____method(recv) ATTR(recv, COLOR_mmbuilder___AMethPropdef____method)
typedef val_t (* mmbuilder___AMethPropdef___method_t)(val_t  self);
val_t mmbuilder___AMethPropdef___method(val_t  self);
typedef void (* mmbuilder___AMethPropdef___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___AMethPropdef___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___AMethPropdef___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___AMethPropdef___accept_property_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___AMethPropdef___accept_abs_syntax_visitor_t)(val_t  self, val_t  param0);
void mmbuilder___AMethPropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0);
typedef void (* mmbuilder___AMainMethPropdef___process_and_check_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void mmbuilder___AMainMethPropdef___process_and_check(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_mmbuilder___ATypePropdef____prop(recv) ATTR(recv, COLOR_mmbuilder___ATypePropdef____prop)
typedef val_t (* mmbuilder___ATypePropdef___prop_t)(val_t  self);
val_t mmbuilder___ATypePropdef___prop(val_t  self);
typedef void (* mmbuilder___ATypePropdef___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___ATypePropdef___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___ATypePropdef___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___ATypePropdef___accept_property_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___ATypePropdef___accept_abs_syntax_visitor_t)(val_t  self, val_t  param0);
void mmbuilder___ATypePropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0);
#define ATTR_mmbuilder___MethidAccumulator____name(recv) ATTR(recv, COLOR_mmbuilder___MethidAccumulator____name)
typedef val_t (* mmbuilder___MethidAccumulator___name_t)(val_t  self);
val_t mmbuilder___MethidAccumulator___name(val_t  self);
typedef void (* mmbuilder___MethidAccumulator___visit_t)(val_t  self, val_t  param0);
void mmbuilder___MethidAccumulator___visit(val_t  self, val_t  param0);
typedef void (* mmbuilder___MethidAccumulator___init_t)(val_t  self, int* init_table);
void mmbuilder___MethidAccumulator___init(val_t  self, int* init_table);
val_t NEW_mmbuilder___MethidAccumulator___init();
#define ATTR_mmbuilder___PMethid____name(recv) ATTR(recv, COLOR_mmbuilder___PMethid____name)
typedef val_t (* mmbuilder___PMethid___name_t)(val_t  self);
val_t mmbuilder___PMethid___name(val_t  self);
typedef void (* mmbuilder___PMethid___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PMethid___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PSignature___check_visibility_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___PSignature___check_visibility(val_t  self, val_t  param0, val_t  param1);
typedef void (* mmbuilder___ASignature___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___ASignature___accept_property_verifier(val_t  self, val_t  param0);
typedef void (* mmbuilder___ASignature___check_visibility_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___ASignature___check_visibility(val_t  self, val_t  param0, val_t  param1);
#define ATTR_mmbuilder___PParam____position(recv) ATTR(recv, COLOR_mmbuilder___PParam____position)
typedef val_t (* mmbuilder___PParam___position_t)(val_t  self);
val_t mmbuilder___PParam___position(val_t  self);
#define ATTR_mmbuilder___PParam____variable(recv) ATTR(recv, COLOR_mmbuilder___PParam____variable)
typedef val_t (* mmbuilder___PParam___variable_t)(val_t  self);
val_t mmbuilder___PParam___variable(val_t  self);
#define ATTR_mmbuilder___PParam____stype(recv) ATTR(recv, COLOR_mmbuilder___PParam____stype)
typedef val_t (* mmbuilder___PParam___stype_t)(val_t  self);
val_t mmbuilder___PParam___stype(val_t  self);
typedef void (* mmbuilder___PParam___stype__eq_t)(val_t  self, val_t  param0);
void mmbuilder___PParam___stype__eq(val_t  self, val_t  param0);
typedef void (* mmbuilder___PParam___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___PParam___accept_property_verifier(val_t  self, val_t  param0);
typedef val_t (* mmbuilder___PParam___is_vararg_t)(val_t  self);
val_t mmbuilder___PParam___is_vararg(val_t  self);
typedef val_t (* mmbuilder___AParam___is_vararg_t)(val_t  self);
val_t mmbuilder___AParam___is_vararg(val_t  self);
typedef void (* mmbuilder___PType___check_visibility_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___PType___check_visibility(val_t  self, val_t  param0, val_t  param1);
typedef void (* mmbuilder___AType___check_visibility_t)(val_t  self, val_t  param0, val_t  param1);
void mmbuilder___AType___check_visibility(val_t  self, val_t  param0, val_t  param1);
typedef void (* mmbuilder___PExpr___accept_class_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PExpr___accept_class_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PExpr___accept_property_builder_t)(val_t  self, val_t  param0);
void mmbuilder___PExpr___accept_property_builder(val_t  self, val_t  param0);
typedef void (* mmbuilder___PExpr___accept_property_verifier_t)(val_t  self, val_t  param0);
void mmbuilder___PExpr___accept_property_verifier(val_t  self, val_t  param0);
#endif
