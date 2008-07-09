#ifndef nitc__sep
#define nitc__sep
#include "abstracttool._sep.h"
#include "compiling._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_NitCompiler[];
extern const int SFT_nitc[];
#define ID_NitCompiler SFT_nitc[0]
#define COLOR_NitCompiler SFT_nitc[1]
#define COLOR_nitc___NitCompiler____opt_output SFT_nitc[2]
#define COLOR_nitc___NitCompiler____opt_boost SFT_nitc[3]
#define COLOR_nitc___NitCompiler____opt_no_cc SFT_nitc[4]
#define COLOR_nitc___NitCompiler____opt_attr_sim SFT_nitc[5]
#define COLOR_nitc___NitCompiler____opt_global SFT_nitc[6]
#define COLOR_nitc___NitCompiler____opt_clibdir SFT_nitc[7]
#define COLOR_nitc___NitCompiler____opt_bindir SFT_nitc[8]
#define COLOR_nitc___NitCompiler____opt_extension_prefix SFT_nitc[9]
#define INIT_TABLE_POS_NitCompiler SFT_nitc[10]
#define COLOR_nitc___NitCompiler___opt_output SFT_nitc[11]
#define COLOR_nitc___NitCompiler___opt_boost SFT_nitc[12]
#define COLOR_nitc___NitCompiler___opt_no_cc SFT_nitc[13]
#define COLOR_nitc___NitCompiler___opt_attr_sim SFT_nitc[14]
#define COLOR_nitc___NitCompiler___opt_global SFT_nitc[15]
#define COLOR_nitc___NitCompiler___opt_clibdir SFT_nitc[16]
#define COLOR_nitc___NitCompiler___opt_bindir SFT_nitc[17]
#define COLOR_nitc___NitCompiler___opt_extension_prefix SFT_nitc[18]
#define COLOR_nitc___NitCompiler___init SFT_nitc[19]
#define COLOR_SUPER_nitc___NitCompiler___process_options SFT_nitc[20]
#define ATTR_nitc___NitCompiler____opt_output(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_output)
typedef val_t (* nitc___NitCompiler___opt_output_t)(val_t  self);
val_t nitc___NitCompiler___opt_output(val_t  self);
#define ATTR_nitc___NitCompiler____opt_boost(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_boost)
typedef val_t (* nitc___NitCompiler___opt_boost_t)(val_t  self);
val_t nitc___NitCompiler___opt_boost(val_t  self);
#define ATTR_nitc___NitCompiler____opt_no_cc(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_no_cc)
typedef val_t (* nitc___NitCompiler___opt_no_cc_t)(val_t  self);
val_t nitc___NitCompiler___opt_no_cc(val_t  self);
#define ATTR_nitc___NitCompiler____opt_attr_sim(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_attr_sim)
typedef val_t (* nitc___NitCompiler___opt_attr_sim_t)(val_t  self);
val_t nitc___NitCompiler___opt_attr_sim(val_t  self);
#define ATTR_nitc___NitCompiler____opt_global(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_global)
typedef val_t (* nitc___NitCompiler___opt_global_t)(val_t  self);
val_t nitc___NitCompiler___opt_global(val_t  self);
#define ATTR_nitc___NitCompiler____opt_clibdir(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_clibdir)
typedef val_t (* nitc___NitCompiler___opt_clibdir_t)(val_t  self);
val_t nitc___NitCompiler___opt_clibdir(val_t  self);
#define ATTR_nitc___NitCompiler____opt_bindir(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_bindir)
typedef val_t (* nitc___NitCompiler___opt_bindir_t)(val_t  self);
val_t nitc___NitCompiler___opt_bindir(val_t  self);
#define ATTR_nitc___NitCompiler____opt_extension_prefix(recv) ATTR(recv, COLOR_nitc___NitCompiler____opt_extension_prefix)
typedef val_t (* nitc___NitCompiler___opt_extension_prefix_t)(val_t  self);
val_t nitc___NitCompiler___opt_extension_prefix(val_t  self);
typedef void (* nitc___NitCompiler___init_t)(val_t  self, int* init_table);
void nitc___NitCompiler___init(val_t  self, int* init_table);
val_t NEW_nitc___NitCompiler___init();
typedef void (* nitc___NitCompiler___process_options_t)(val_t  self);
void nitc___NitCompiler___process_options(val_t  self);
typedef void (* nitc___NitCompiler___perform_work_t)(val_t  self, val_t  param0);
void nitc___NitCompiler___perform_work(val_t  self, val_t  param0);
typedef void (* nitc___Sys___main_t)(val_t  self);
void nitc___Sys___main(val_t  self);
#endif
