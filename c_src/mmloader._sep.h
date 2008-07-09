#ifndef mmloader__sep
#define mmloader__sep
#include "metamodel._sep.h"
#include "opts._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_ToolContext[];

extern const classtable_elt_t VFT_ModuleLoader[];
extern const int SFT_mmloader[];
#define ID_ToolContext SFT_mmloader[0]
#define COLOR_ToolContext SFT_mmloader[1]
#define COLOR_mmloader___ToolContext____error_count SFT_mmloader[2]
#define COLOR_mmloader___ToolContext____warning_count SFT_mmloader[3]
#define COLOR_mmloader___ToolContext____paths SFT_mmloader[4]
#define COLOR_mmloader___ToolContext____loaders SFT_mmloader[5]
#define COLOR_mmloader___ToolContext____option_context SFT_mmloader[6]
#define COLOR_mmloader___ToolContext____opt_warn SFT_mmloader[7]
#define COLOR_mmloader___ToolContext____opt_path SFT_mmloader[8]
#define COLOR_mmloader___ToolContext____opt_log SFT_mmloader[9]
#define COLOR_mmloader___ToolContext____opt_only_metamodel SFT_mmloader[10]
#define COLOR_mmloader___ToolContext____opt_only_parse SFT_mmloader[11]
#define COLOR_mmloader___ToolContext____opt_help SFT_mmloader[12]
#define COLOR_mmloader___ToolContext____processing_modules SFT_mmloader[13]
#define COLOR_mmloader___ToolContext____path_dirs SFT_mmloader[14]
#define INIT_TABLE_POS_ToolContext SFT_mmloader[15]
#define COLOR_mmloader___ToolContext___error_count SFT_mmloader[16]
#define COLOR_mmloader___ToolContext___warning_count SFT_mmloader[17]
#define COLOR_mmloader___ToolContext___error SFT_mmloader[18]
#define COLOR_mmloader___ToolContext___warning SFT_mmloader[19]
#define COLOR_mmloader___ToolContext___paths SFT_mmloader[20]
#define COLOR_mmloader___ToolContext___option_context SFT_mmloader[21]
#define COLOR_mmloader___ToolContext___opt_warn SFT_mmloader[22]
#define COLOR_mmloader___ToolContext___opt_path SFT_mmloader[23]
#define COLOR_mmloader___ToolContext___opt_log SFT_mmloader[24]
#define COLOR_mmloader___ToolContext___opt_only_metamodel SFT_mmloader[25]
#define COLOR_mmloader___ToolContext___opt_only_parse SFT_mmloader[26]
#define COLOR_mmloader___ToolContext___opt_help SFT_mmloader[27]
#define COLOR_mmloader___ToolContext___init SFT_mmloader[28]
#define COLOR_mmloader___ToolContext___process_options SFT_mmloader[29]
#define COLOR_mmloader___ToolContext___try_to_load SFT_mmloader[30]
#define COLOR_mmloader___ToolContext___get_module_from_filename SFT_mmloader[31]
#define COLOR_mmloader___ToolContext___get_module SFT_mmloader[32]
#define COLOR_mmloader___ToolContext___directory_for SFT_mmloader[33]
#define COLOR_mmloader___ToolContext___register_loader SFT_mmloader[34]
#define ID_ModuleLoader SFT_mmloader[35]
#define COLOR_ModuleLoader SFT_mmloader[36]
#define INIT_TABLE_POS_ModuleLoader SFT_mmloader[37]
#define COLOR_mmloader___ModuleLoader___file_type SFT_mmloader[38]
#define COLOR_mmloader___ModuleLoader___try_to_load_dir SFT_mmloader[39]
#define COLOR_mmloader___ModuleLoader___can_handle SFT_mmloader[40]
#define COLOR_mmloader___ModuleLoader___load_and_process_module SFT_mmloader[41]
#define COLOR_mmloader___ModuleLoader___load_module SFT_mmloader[42]
#define COLOR_mmloader___ModuleLoader___parse_file SFT_mmloader[43]
#define COLOR_mmloader___ModuleLoader___process_metamodel SFT_mmloader[44]
#define COLOR_mmloader___MMModule____filename SFT_mmloader[45]
#define COLOR_mmloader___MMModule____mtime SFT_mmloader[46]
#define COLOR_mmloader___MMModule___filename SFT_mmloader[47]
#define COLOR_mmloader___MMModule___filename__eq SFT_mmloader[48]
#define COLOR_mmloader___MMModule___mtime SFT_mmloader[49]
#define COLOR_mmloader___MMModule___mtime__eq SFT_mmloader[50]
#define COLOR_mmloader___MMModule___import_supers_modules SFT_mmloader[51]
#define ATTR_mmloader___ToolContext____error_count(recv) ATTR(recv, COLOR_mmloader___ToolContext____error_count)
typedef val_t (* mmloader___ToolContext___error_count_t)(val_t  self);
val_t mmloader___ToolContext___error_count(val_t  self);
#define ATTR_mmloader___ToolContext____warning_count(recv) ATTR(recv, COLOR_mmloader___ToolContext____warning_count)
typedef val_t (* mmloader___ToolContext___warning_count_t)(val_t  self);
val_t mmloader___ToolContext___warning_count(val_t  self);
typedef void (* mmloader___ToolContext___error_t)(val_t  self, val_t  param0);
void mmloader___ToolContext___error(val_t  self, val_t  param0);
typedef void (* mmloader___ToolContext___warning_t)(val_t  self, val_t  param0);
void mmloader___ToolContext___warning(val_t  self, val_t  param0);
#define ATTR_mmloader___ToolContext____paths(recv) ATTR(recv, COLOR_mmloader___ToolContext____paths)
typedef val_t (* mmloader___ToolContext___paths_t)(val_t  self);
val_t mmloader___ToolContext___paths(val_t  self);
#define ATTR_mmloader___ToolContext____loaders(recv) ATTR(recv, COLOR_mmloader___ToolContext____loaders)
#define ATTR_mmloader___ToolContext____option_context(recv) ATTR(recv, COLOR_mmloader___ToolContext____option_context)
typedef val_t (* mmloader___ToolContext___option_context_t)(val_t  self);
val_t mmloader___ToolContext___option_context(val_t  self);
#define ATTR_mmloader___ToolContext____opt_warn(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_warn)
typedef val_t (* mmloader___ToolContext___opt_warn_t)(val_t  self);
val_t mmloader___ToolContext___opt_warn(val_t  self);
#define ATTR_mmloader___ToolContext____opt_path(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_path)
typedef val_t (* mmloader___ToolContext___opt_path_t)(val_t  self);
val_t mmloader___ToolContext___opt_path(val_t  self);
#define ATTR_mmloader___ToolContext____opt_log(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_log)
typedef val_t (* mmloader___ToolContext___opt_log_t)(val_t  self);
val_t mmloader___ToolContext___opt_log(val_t  self);
#define ATTR_mmloader___ToolContext____opt_only_metamodel(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_only_metamodel)
typedef val_t (* mmloader___ToolContext___opt_only_metamodel_t)(val_t  self);
val_t mmloader___ToolContext___opt_only_metamodel(val_t  self);
#define ATTR_mmloader___ToolContext____opt_only_parse(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_only_parse)
typedef val_t (* mmloader___ToolContext___opt_only_parse_t)(val_t  self);
val_t mmloader___ToolContext___opt_only_parse(val_t  self);
#define ATTR_mmloader___ToolContext____opt_help(recv) ATTR(recv, COLOR_mmloader___ToolContext____opt_help)
typedef val_t (* mmloader___ToolContext___opt_help_t)(val_t  self);
val_t mmloader___ToolContext___opt_help(val_t  self);
typedef void (* mmloader___ToolContext___init_t)(val_t  self, int* init_table);
void mmloader___ToolContext___init(val_t  self, int* init_table);
val_t NEW_mmloader___ToolContext___init();
typedef void (* mmloader___ToolContext___process_options_t)(val_t  self);
void mmloader___ToolContext___process_options(val_t  self);
typedef val_t (* mmloader___ToolContext___try_to_load_t)(val_t  self, val_t  param0, val_t  param1);
val_t mmloader___ToolContext___try_to_load(val_t  self, val_t  param0, val_t  param1);
#define ATTR_mmloader___ToolContext____processing_modules(recv) ATTR(recv, COLOR_mmloader___ToolContext____processing_modules)
typedef val_t (* mmloader___ToolContext___get_module_from_filename_t)(val_t  self, val_t  param0);
val_t mmloader___ToolContext___get_module_from_filename(val_t  self, val_t  param0);
typedef val_t (* mmloader___ToolContext___get_module_t)(val_t  self, val_t  param0, val_t  param1);
val_t mmloader___ToolContext___get_module(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* mmloader___ToolContext___directory_for_t)(val_t  self, val_t  param0);
val_t mmloader___ToolContext___directory_for(val_t  self, val_t  param0);
#define ATTR_mmloader___ToolContext____path_dirs(recv) ATTR(recv, COLOR_mmloader___ToolContext____path_dirs)
typedef void (* mmloader___ToolContext___register_loader_t)(val_t  self, val_t  param0);
void mmloader___ToolContext___register_loader(val_t  self, val_t  param0);
typedef val_t (* mmloader___ModuleLoader___file_type_t)(val_t  self);
val_t mmloader___ModuleLoader___file_type(val_t  self);
typedef val_t (* mmloader___ModuleLoader___try_to_load_dir_t)(val_t  self, val_t  param0, val_t  param1);
val_t mmloader___ModuleLoader___try_to_load_dir(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* mmloader___ModuleLoader___can_handle_t)(val_t  self, val_t  param0, val_t  param1);
val_t mmloader___ModuleLoader___can_handle(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* mmloader___ModuleLoader___load_and_process_module_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t mmloader___ModuleLoader___load_and_process_module(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* mmloader___ModuleLoader___load_module_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
val_t mmloader___ModuleLoader___load_module(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* mmloader___ModuleLoader___parse_file_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
val_t mmloader___ModuleLoader___parse_file(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* mmloader___ModuleLoader___process_metamodel_t)(val_t  self, val_t  param0, val_t  param1);
void mmloader___ModuleLoader___process_metamodel(val_t  self, val_t  param0, val_t  param1);
#define ATTR_mmloader___MMModule____filename(recv) ATTR(recv, COLOR_mmloader___MMModule____filename)
typedef val_t (* mmloader___MMModule___filename_t)(val_t  self);
val_t mmloader___MMModule___filename(val_t  self);
typedef void (* mmloader___MMModule___filename__eq_t)(val_t  self, val_t  param0);
void mmloader___MMModule___filename__eq(val_t  self, val_t  param0);
#define ATTR_mmloader___MMModule____mtime(recv) ATTR(recv, COLOR_mmloader___MMModule____mtime)
typedef val_t (* mmloader___MMModule___mtime_t)(val_t  self);
val_t mmloader___MMModule___mtime(val_t  self);
typedef void (* mmloader___MMModule___mtime__eq_t)(val_t  self, val_t  param0);
void mmloader___MMModule___mtime__eq(val_t  self, val_t  param0);
typedef void (* mmloader___MMModule___import_supers_modules_t)(val_t  self, val_t  param0);
void mmloader___MMModule___import_supers_modules(val_t  self, val_t  param0);
#endif
