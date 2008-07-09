#ifndef file__sep
#define file__sep
#include "stream._sep.h"
#include "string_search._sep.h"
#include <nit_common.h>
#include <file_nit.h>

extern const classtable_elt_t VFT_FStream[];

extern const classtable_elt_t VFT_IFStream[];

extern const classtable_elt_t VFT_OFStream[];

extern const classtable_elt_t VFT_Stdin[];

extern const classtable_elt_t VFT_Stdout[];

extern const classtable_elt_t VFT_Stderr[];

extern const classtable_elt_t VFT_FileStat[];
struct TBOX_FileStat { const classtable_elt_t * vft; void * val;};
val_t BOX_FileStat(void * val);
#define UNBOX_FileStat(x) (((struct TBOX_FileStat *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_NativeFile[];
struct TBOX_NativeFile { const classtable_elt_t * vft; void * val;};
val_t BOX_NativeFile(void * val);
#define UNBOX_NativeFile(x) (((struct TBOX_NativeFile *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_NativeFileCapable[];
extern const int SFT_file[];
#define COLOR_file___Object___printn SFT_file[0]
#define COLOR_file___Object___print SFT_file[1]
#define COLOR_file___Object___getc SFT_file[2]
#define COLOR_file___Object___gets SFT_file[3]
#define COLOR_file___Object___stdin SFT_file[4]
#define COLOR_file___Object___stdout SFT_file[5]
#define COLOR_file___Object___stderr SFT_file[6]
#define ID_FStream SFT_file[7]
#define COLOR_FStream SFT_file[8]
#define COLOR_file___FStream____path SFT_file[9]
#define COLOR_file___FStream____file SFT_file[10]
#define INIT_TABLE_POS_FStream SFT_file[11]
#define COLOR_file___FStream___path SFT_file[12]
#define COLOR_file___FStream___file_stat SFT_file[13]
#define ID_IFStream SFT_file[14]
#define COLOR_IFStream SFT_file[15]
#define COLOR_file___IFStream____end_reached SFT_file[16]
#define INIT_TABLE_POS_IFStream SFT_file[17]
#define COLOR_file___IFStream___reopen SFT_file[18]
#define COLOR_file___IFStream___open SFT_file[19]
#define COLOR_file___IFStream___without_file SFT_file[20]
#define ID_OFStream SFT_file[21]
#define COLOR_OFStream SFT_file[22]
#define COLOR_file___OFStream____writable SFT_file[23]
#define INIT_TABLE_POS_OFStream SFT_file[24]
#define COLOR_file___OFStream___write_native SFT_file[25]
#define COLOR_file___OFStream___open SFT_file[26]
#define COLOR_file___OFStream___without_file SFT_file[27]
#define ID_Stdin SFT_file[28]
#define COLOR_Stdin SFT_file[29]
#define INIT_TABLE_POS_Stdin SFT_file[30]
#define COLOR_file___Stdin___init SFT_file[31]
#define ID_Stdout SFT_file[32]
#define COLOR_Stdout SFT_file[33]
#define INIT_TABLE_POS_Stdout SFT_file[34]
#define COLOR_file___Stdout___init SFT_file[35]
#define ID_Stderr SFT_file[36]
#define COLOR_Stderr SFT_file[37]
#define INIT_TABLE_POS_Stderr SFT_file[38]
#define COLOR_file___Stderr___init SFT_file[39]
#define COLOR_file___String___file_exists SFT_file[40]
#define COLOR_file___String___file_stat SFT_file[41]
#define COLOR_file___String___strip_extension SFT_file[42]
#define COLOR_file___String___basename SFT_file[43]
#define COLOR_file___String___dirname SFT_file[44]
#define COLOR_file___String___file_path SFT_file[45]
#define COLOR_file___String___mkdir SFT_file[46]
#define COLOR_file___NativeString___file_exists SFT_file[47]
#define COLOR_file___NativeString___file_stat SFT_file[48]
#define COLOR_file___NativeString___file_mkdir SFT_file[49]
#define ID_FileStat SFT_file[50]
#define COLOR_FileStat SFT_file[51]
#define INIT_TABLE_POS_FileStat SFT_file[52]
#define COLOR_file___FileStat___mode SFT_file[53]
#define COLOR_file___FileStat___atime SFT_file[54]
#define COLOR_file___FileStat___ctime SFT_file[55]
#define COLOR_file___FileStat___mtime SFT_file[56]
#define COLOR_file___FileStat___size SFT_file[57]
#define ID_NativeFile SFT_file[58]
#define COLOR_NativeFile SFT_file[59]
#define INIT_TABLE_POS_NativeFile SFT_file[60]
#define COLOR_file___NativeFile___io_read SFT_file[61]
#define COLOR_file___NativeFile___io_write SFT_file[62]
#define COLOR_file___NativeFile___io_close SFT_file[63]
#define COLOR_file___NativeFile___file_stat SFT_file[64]
#define ID_NativeFileCapable SFT_file[65]
#define COLOR_NativeFileCapable SFT_file[66]
#define INIT_TABLE_POS_NativeFileCapable SFT_file[67]
#define COLOR_file___NativeFileCapable___io_open_read SFT_file[68]
#define COLOR_file___NativeFileCapable___io_open_write SFT_file[69]
#define COLOR_file___NativeFileCapable___native_stdin SFT_file[70]
#define COLOR_file___NativeFileCapable___native_stdout SFT_file[71]
#define COLOR_file___NativeFileCapable___native_stderr SFT_file[72]
typedef void (* file___Object___printn_t)(val_t  self, val_t  param0);
void file___Object___printn(val_t  self, val_t  param0);
typedef void (* file___Object___print_t)(val_t  self, val_t  param0);
void file___Object___print(val_t  self, val_t  param0);
typedef val_t (* file___Object___getc_t)(val_t  self);
val_t file___Object___getc(val_t  self);
typedef val_t (* file___Object___gets_t)(val_t  self);
val_t file___Object___gets(val_t  self);
typedef val_t (* file___Object___stdin_t)(val_t  self);
val_t file___Object___stdin(val_t  self);
typedef val_t (* file___Object___stdout_t)(val_t  self);
val_t file___Object___stdout(val_t  self);
typedef val_t (* file___Object___stderr_t)(val_t  self);
val_t file___Object___stderr(val_t  self);
#define ATTR_file___FStream____path(recv) ATTR(recv, COLOR_file___FStream____path)
typedef val_t (* file___FStream___path_t)(val_t  self);
val_t file___FStream___path(val_t  self);
#define ATTR_file___FStream____file(recv) ATTR(recv, COLOR_file___FStream____file)
typedef val_t (* file___FStream___file_stat_t)(val_t  self);
val_t file___FStream___file_stat(val_t  self);
typedef void (* file___IFStream___reopen_t)(val_t  self);
void file___IFStream___reopen(val_t  self);
typedef void (* file___IFStream___close_t)(val_t  self);
void file___IFStream___close(val_t  self);
typedef void (* file___IFStream___fill_buffer_t)(val_t  self);
void file___IFStream___fill_buffer(val_t  self);
#define ATTR_file___IFStream____end_reached(recv) ATTR(recv, COLOR_file___IFStream____end_reached)
typedef val_t (* file___IFStream___end_reached_t)(val_t  self);
val_t file___IFStream___end_reached(val_t  self);
typedef void (* file___IFStream___open_t)(val_t  self, val_t  param0, int* init_table);
void file___IFStream___open(val_t  self, val_t  param0, int* init_table);
val_t NEW_file___IFStream___open(val_t  param0);
typedef void (* file___IFStream___without_file_t)(val_t  self, int* init_table);
void file___IFStream___without_file(val_t  self, int* init_table);
val_t NEW_file___IFStream___without_file();
typedef void (* file___OFStream___write_t)(val_t  self, val_t  param0);
void file___OFStream___write(val_t  self, val_t  param0);
typedef val_t (* file___OFStream___is_writable_t)(val_t  self);
val_t file___OFStream___is_writable(val_t  self);
typedef void (* file___OFStream___close_t)(val_t  self);
void file___OFStream___close(val_t  self);
#define ATTR_file___OFStream____writable(recv) ATTR(recv, COLOR_file___OFStream____writable)
typedef void (* file___OFStream___write_native_t)(val_t  self, val_t  param0, val_t  param1);
void file___OFStream___write_native(val_t  self, val_t  param0, val_t  param1);
typedef void (* file___OFStream___open_t)(val_t  self, val_t  param0, int* init_table);
void file___OFStream___open(val_t  self, val_t  param0, int* init_table);
val_t NEW_file___OFStream___open(val_t  param0);
typedef void (* file___OFStream___without_file_t)(val_t  self, int* init_table);
void file___OFStream___without_file(val_t  self, int* init_table);
val_t NEW_file___OFStream___without_file();
typedef void (* file___Stdin___init_t)(val_t  self, int* init_table);
void file___Stdin___init(val_t  self, int* init_table);
val_t NEW_file___Stdin___init();
typedef void (* file___Stdout___init_t)(val_t  self, int* init_table);
void file___Stdout___init(val_t  self, int* init_table);
val_t NEW_file___Stdout___init();
typedef void (* file___Stderr___init_t)(val_t  self, int* init_table);
void file___Stderr___init(val_t  self, int* init_table);
val_t NEW_file___Stderr___init();
typedef val_t (* file___String___file_exists_t)(val_t  self);
val_t file___String___file_exists(val_t  self);
typedef val_t (* file___String___file_stat_t)(val_t  self);
val_t file___String___file_stat(val_t  self);
typedef val_t (* file___String___strip_extension_t)(val_t  self, val_t  param0);
val_t file___String___strip_extension(val_t  self, val_t  param0);
typedef val_t (* file___String___basename_t)(val_t  self, val_t  param0);
val_t file___String___basename(val_t  self, val_t  param0);
typedef val_t (* file___String___dirname_t)(val_t  self);
val_t file___String___dirname(val_t  self);
typedef val_t (* file___String___file_path_t)(val_t  self);
val_t file___String___file_path(val_t  self);
typedef void (* file___String___mkdir_t)(val_t  self);
void file___String___mkdir(val_t  self);
typedef val_t (* file___NativeString___file_exists_t)(val_t  self);
val_t file___NativeString___file_exists(val_t  self);
typedef val_t (* file___NativeString___file_stat_t)(val_t  self);
val_t file___NativeString___file_stat(val_t  self);
typedef val_t (* file___NativeString___file_mkdir_t)(val_t  self);
val_t file___NativeString___file_mkdir(val_t  self);
typedef val_t (* file___FileStat___mode_t)(val_t  self);
val_t file___FileStat___mode(val_t  self);
typedef val_t (* file___FileStat___atime_t)(val_t  self);
val_t file___FileStat___atime(val_t  self);
typedef val_t (* file___FileStat___ctime_t)(val_t  self);
val_t file___FileStat___ctime(val_t  self);
typedef val_t (* file___FileStat___mtime_t)(val_t  self);
val_t file___FileStat___mtime(val_t  self);
typedef val_t (* file___FileStat___size_t)(val_t  self);
val_t file___FileStat___size(val_t  self);
typedef val_t (* file___NativeFile___io_read_t)(val_t  self, val_t  param0, val_t  param1);
val_t file___NativeFile___io_read(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* file___NativeFile___io_write_t)(val_t  self, val_t  param0, val_t  param1);
val_t file___NativeFile___io_write(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* file___NativeFile___io_close_t)(val_t  self);
val_t file___NativeFile___io_close(val_t  self);
typedef val_t (* file___NativeFile___file_stat_t)(val_t  self);
val_t file___NativeFile___file_stat(val_t  self);
typedef val_t (* file___NativeFileCapable___io_open_read_t)(val_t  self, val_t  param0);
val_t file___NativeFileCapable___io_open_read(val_t  self, val_t  param0);
typedef val_t (* file___NativeFileCapable___io_open_write_t)(val_t  self, val_t  param0);
val_t file___NativeFileCapable___io_open_write(val_t  self, val_t  param0);
typedef val_t (* file___NativeFileCapable___native_stdin_t)(val_t  self);
val_t file___NativeFileCapable___native_stdin(val_t  self);
typedef val_t (* file___NativeFileCapable___native_stdout_t)(val_t  self);
val_t file___NativeFileCapable___native_stdout(val_t  self);
typedef val_t (* file___NativeFileCapable___native_stderr_t)(val_t  self);
val_t file___NativeFileCapable___native_stderr(val_t  self);
#endif
