#ifndef compiling__sep
#define compiling__sep
#include "compiling_global._sep.h"
#include <nit_common.h>
extern const int SFT_compiling[];
#define COLOR_compiling___MMSrcModule___compile_prog_to_c SFT_compiling[0]
#define COLOR_compiling___MMSrcModule___compile_main SFT_compiling[1]
#define COLOR_compiling___MMSrcModule___compile_separate_module SFT_compiling[2]
typedef void (* compiling___MMSrcModule___compile_prog_to_c_t)(val_t  self, val_t  param0);
void compiling___MMSrcModule___compile_prog_to_c(val_t  self, val_t  param0);
typedef void (* compiling___MMSrcModule___compile_main_t)(val_t  self, val_t  param0, val_t  param1);
void compiling___MMSrcModule___compile_main(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling___MMSrcModule___compile_separate_module_t)(val_t  self, val_t  param0, val_t  param1);
void compiling___MMSrcModule___compile_separate_module(val_t  self, val_t  param0, val_t  param1);
#endif
