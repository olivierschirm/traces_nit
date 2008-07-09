#ifndef lexer__sep
#define lexer__sep
#include "parser_nodes._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Lexer[];
extern const int SFT_lexer[];
#define COLOR_lexer___Token____text SFT_lexer[0]
#define COLOR_lexer___Token____filename SFT_lexer[1]
#define COLOR_lexer___Token____line SFT_lexer[2]
#define COLOR_lexer___Token____pos SFT_lexer[3]
#define COLOR_lexer___Token___text SFT_lexer[4]
#define COLOR_lexer___Token___text__eq SFT_lexer[5]
#define COLOR_lexer___Token___filename SFT_lexer[6]
#define COLOR_lexer___Token___line SFT_lexer[7]
#define COLOR_lexer___Token___pos SFT_lexer[8]
#define COLOR_lexer___Token___parser_index SFT_lexer[9]
#define COLOR_lexer___TEol___init SFT_lexer[10]
#define COLOR_lexer___TComment___init SFT_lexer[11]
#define COLOR_lexer___TKwpackage___init SFT_lexer[12]
#define COLOR_lexer___TKwimport___init SFT_lexer[13]
#define COLOR_lexer___TKwclass___init SFT_lexer[14]
#define COLOR_lexer___TKwabstract___init SFT_lexer[15]
#define COLOR_lexer___TKwinterface___init SFT_lexer[16]
#define COLOR_lexer___TKwuniversal___init SFT_lexer[17]
#define COLOR_lexer___TKwspecial___init SFT_lexer[18]
#define COLOR_lexer___TKwend___init SFT_lexer[19]
#define COLOR_lexer___TKwmeth___init SFT_lexer[20]
#define COLOR_lexer___TKwtype___init SFT_lexer[21]
#define COLOR_lexer___TKwattr___init SFT_lexer[22]
#define COLOR_lexer___TKwinit___init SFT_lexer[23]
#define COLOR_lexer___TKwredef___init SFT_lexer[24]
#define COLOR_lexer___TKwis___init SFT_lexer[25]
#define COLOR_lexer___TKwdo___init SFT_lexer[26]
#define COLOR_lexer___TKwreadable___init SFT_lexer[27]
#define COLOR_lexer___TKwwritable___init SFT_lexer[28]
#define COLOR_lexer___TKwvar___init SFT_lexer[29]
#define COLOR_lexer___TKwintern___init SFT_lexer[30]
#define COLOR_lexer___TKwextern___init SFT_lexer[31]
#define COLOR_lexer___TKwprotected___init SFT_lexer[32]
#define COLOR_lexer___TKwprivate___init SFT_lexer[33]
#define COLOR_lexer___TKwintrude___init SFT_lexer[34]
#define COLOR_lexer___TKwif___init SFT_lexer[35]
#define COLOR_lexer___TKwthen___init SFT_lexer[36]
#define COLOR_lexer___TKwelse___init SFT_lexer[37]
#define COLOR_lexer___TKwwhile___init SFT_lexer[38]
#define COLOR_lexer___TKwfor___init SFT_lexer[39]
#define COLOR_lexer___TKwin___init SFT_lexer[40]
#define COLOR_lexer___TKwand___init SFT_lexer[41]
#define COLOR_lexer___TKwor___init SFT_lexer[42]
#define COLOR_lexer___TKwnot___init SFT_lexer[43]
#define COLOR_lexer___TKwreturn___init SFT_lexer[44]
#define COLOR_lexer___TKwcontinue___init SFT_lexer[45]
#define COLOR_lexer___TKwbreak___init SFT_lexer[46]
#define COLOR_lexer___TKwabort___init SFT_lexer[47]
#define COLOR_lexer___TKwassert___init SFT_lexer[48]
#define COLOR_lexer___TKwnew___init SFT_lexer[49]
#define COLOR_lexer___TKwisa___init SFT_lexer[50]
#define COLOR_lexer___TKwonce___init SFT_lexer[51]
#define COLOR_lexer___TKwsuper___init SFT_lexer[52]
#define COLOR_lexer___TKwself___init SFT_lexer[53]
#define COLOR_lexer___TKwtrue___init SFT_lexer[54]
#define COLOR_lexer___TKwfalse___init SFT_lexer[55]
#define COLOR_lexer___TKwnull___init SFT_lexer[56]
#define COLOR_lexer___TOpar___init SFT_lexer[57]
#define COLOR_lexer___TCpar___init SFT_lexer[58]
#define COLOR_lexer___TObra___init SFT_lexer[59]
#define COLOR_lexer___TCbra___init SFT_lexer[60]
#define COLOR_lexer___TComma___init SFT_lexer[61]
#define COLOR_lexer___TColumn___init SFT_lexer[62]
#define COLOR_lexer___TQuad___init SFT_lexer[63]
#define COLOR_lexer___TAssign___init SFT_lexer[64]
#define COLOR_lexer___TPluseq___init SFT_lexer[65]
#define COLOR_lexer___TMinuseq___init SFT_lexer[66]
#define COLOR_lexer___TDotdotdot___init SFT_lexer[67]
#define COLOR_lexer___TDotdot___init SFT_lexer[68]
#define COLOR_lexer___TDot___init SFT_lexer[69]
#define COLOR_lexer___TPlus___init SFT_lexer[70]
#define COLOR_lexer___TMinus___init SFT_lexer[71]
#define COLOR_lexer___TStar___init SFT_lexer[72]
#define COLOR_lexer___TSlash___init SFT_lexer[73]
#define COLOR_lexer___TPercent___init SFT_lexer[74]
#define COLOR_lexer___TEq___init SFT_lexer[75]
#define COLOR_lexer___TNe___init SFT_lexer[76]
#define COLOR_lexer___TLt___init SFT_lexer[77]
#define COLOR_lexer___TLe___init SFT_lexer[78]
#define COLOR_lexer___TGt___init SFT_lexer[79]
#define COLOR_lexer___TGe___init SFT_lexer[80]
#define COLOR_lexer___TStarship___init SFT_lexer[81]
#define COLOR_lexer___TClassid___init SFT_lexer[82]
#define COLOR_lexer___TId___init SFT_lexer[83]
#define COLOR_lexer___TAttrid___init SFT_lexer[84]
#define COLOR_lexer___TNumber___init SFT_lexer[85]
#define COLOR_lexer___TFloat___init SFT_lexer[86]
#define COLOR_lexer___TChar___init SFT_lexer[87]
#define COLOR_lexer___TString___init SFT_lexer[88]
#define COLOR_lexer___TStartString___init SFT_lexer[89]
#define COLOR_lexer___TMidString___init SFT_lexer[90]
#define COLOR_lexer___TEndString___init SFT_lexer[91]
#define COLOR_lexer___EOF___init SFT_lexer[92]
#define COLOR_lexer___PError____message SFT_lexer[93]
#define COLOR_lexer___PError___message SFT_lexer[94]
#define COLOR_lexer___PError___message__eq SFT_lexer[95]
#define COLOR_lexer___PError___init_error SFT_lexer[96]
#define ID_Lexer SFT_lexer[97]
#define COLOR_Lexer SFT_lexer[98]
#define COLOR_lexer___Lexer____token SFT_lexer[99]
#define COLOR_lexer___Lexer____state SFT_lexer[100]
#define COLOR_lexer___Lexer____filename SFT_lexer[101]
#define COLOR_lexer___Lexer____stream SFT_lexer[102]
#define COLOR_lexer___Lexer____stream_buf SFT_lexer[103]
#define COLOR_lexer___Lexer____stream_pos SFT_lexer[104]
#define COLOR_lexer___Lexer____line SFT_lexer[105]
#define COLOR_lexer___Lexer____pos SFT_lexer[106]
#define COLOR_lexer___Lexer____cr SFT_lexer[107]
#define COLOR_lexer___Lexer____eof SFT_lexer[108]
#define COLOR_lexer___Lexer____text SFT_lexer[109]
#define COLOR_lexer___Lexer____goto_table SFT_lexer[110]
#define COLOR_lexer___Lexer____accept_table SFT_lexer[111]
#define INIT_TABLE_POS_Lexer SFT_lexer[112]
#define COLOR_lexer___Lexer___filename SFT_lexer[113]
#define COLOR_lexer___Lexer___state_initial SFT_lexer[114]
#define COLOR_lexer___Lexer___init SFT_lexer[115]
#define COLOR_lexer___Lexer___peek SFT_lexer[116]
#define COLOR_lexer___Lexer___next SFT_lexer[117]
#define COLOR_lexer___Lexer___get_token SFT_lexer[118]
#define COLOR_lexer___Lexer___get_char SFT_lexer[119]
#define COLOR_lexer___Lexer___push_back SFT_lexer[120]
#define COLOR_lexer___Lexer___build_goto_table SFT_lexer[121]
#define COLOR_lexer___Lexer___nil_array SFT_lexer[122]
#define COLOR_lexer___Lexer___build_accept_table SFT_lexer[123]
#define ATTR_lexer___Token____text(recv) ATTR(recv, COLOR_lexer___Token____text)
typedef val_t (* lexer___Token___text_t)(val_t  self);
val_t lexer___Token___text(val_t  self);
typedef void (* lexer___Token___text__eq_t)(val_t  self, val_t  param0);
void lexer___Token___text__eq(val_t  self, val_t  param0);
#define ATTR_lexer___Token____filename(recv) ATTR(recv, COLOR_lexer___Token____filename)
typedef val_t (* lexer___Token___filename_t)(val_t  self);
val_t lexer___Token___filename(val_t  self);
#define ATTR_lexer___Token____line(recv) ATTR(recv, COLOR_lexer___Token____line)
typedef val_t (* lexer___Token___line_t)(val_t  self);
val_t lexer___Token___line(val_t  self);
#define ATTR_lexer___Token____pos(recv) ATTR(recv, COLOR_lexer___Token____pos)
typedef val_t (* lexer___Token___pos_t)(val_t  self);
val_t lexer___Token___pos(val_t  self);
typedef val_t (* lexer___Token___parser_index_t)(val_t  self);
val_t lexer___Token___parser_index(val_t  self);
typedef val_t (* lexer___Token___to_s_t)(val_t  self);
val_t lexer___Token___to_s(val_t  self);
typedef val_t (* lexer___TEol___parser_index_t)(val_t  self);
val_t lexer___TEol___parser_index(val_t  self);
typedef void (* lexer___TEol___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TEol___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TEol___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TComment___parser_index_t)(val_t  self);
val_t lexer___TComment___parser_index(val_t  self);
typedef void (* lexer___TComment___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TComment___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TComment___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TKwpackage___parser_index_t)(val_t  self);
val_t lexer___TKwpackage___parser_index(val_t  self);
typedef void (* lexer___TKwpackage___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwpackage___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwpackage___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwimport___parser_index_t)(val_t  self);
val_t lexer___TKwimport___parser_index(val_t  self);
typedef void (* lexer___TKwimport___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwimport___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwimport___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwclass___parser_index_t)(val_t  self);
val_t lexer___TKwclass___parser_index(val_t  self);
typedef void (* lexer___TKwclass___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwclass___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwclass___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwabstract___parser_index_t)(val_t  self);
val_t lexer___TKwabstract___parser_index(val_t  self);
typedef void (* lexer___TKwabstract___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwabstract___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwabstract___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwinterface___parser_index_t)(val_t  self);
val_t lexer___TKwinterface___parser_index(val_t  self);
typedef void (* lexer___TKwinterface___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwinterface___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwinterface___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwuniversal___parser_index_t)(val_t  self);
val_t lexer___TKwuniversal___parser_index(val_t  self);
typedef void (* lexer___TKwuniversal___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwuniversal___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwuniversal___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwspecial___parser_index_t)(val_t  self);
val_t lexer___TKwspecial___parser_index(val_t  self);
typedef void (* lexer___TKwspecial___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwspecial___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwspecial___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwend___parser_index_t)(val_t  self);
val_t lexer___TKwend___parser_index(val_t  self);
typedef void (* lexer___TKwend___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwend___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwend___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwmeth___parser_index_t)(val_t  self);
val_t lexer___TKwmeth___parser_index(val_t  self);
typedef void (* lexer___TKwmeth___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwmeth___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwmeth___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwtype___parser_index_t)(val_t  self);
val_t lexer___TKwtype___parser_index(val_t  self);
typedef void (* lexer___TKwtype___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwtype___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwtype___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwattr___parser_index_t)(val_t  self);
val_t lexer___TKwattr___parser_index(val_t  self);
typedef void (* lexer___TKwattr___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwattr___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwattr___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwinit___parser_index_t)(val_t  self);
val_t lexer___TKwinit___parser_index(val_t  self);
typedef void (* lexer___TKwinit___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwinit___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwinit___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwredef___parser_index_t)(val_t  self);
val_t lexer___TKwredef___parser_index(val_t  self);
typedef void (* lexer___TKwredef___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwredef___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwredef___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwis___parser_index_t)(val_t  self);
val_t lexer___TKwis___parser_index(val_t  self);
typedef void (* lexer___TKwis___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwis___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwis___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwdo___parser_index_t)(val_t  self);
val_t lexer___TKwdo___parser_index(val_t  self);
typedef void (* lexer___TKwdo___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwdo___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwdo___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwreadable___parser_index_t)(val_t  self);
val_t lexer___TKwreadable___parser_index(val_t  self);
typedef void (* lexer___TKwreadable___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwreadable___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwreadable___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwwritable___parser_index_t)(val_t  self);
val_t lexer___TKwwritable___parser_index(val_t  self);
typedef void (* lexer___TKwwritable___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwwritable___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwwritable___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwvar___parser_index_t)(val_t  self);
val_t lexer___TKwvar___parser_index(val_t  self);
typedef void (* lexer___TKwvar___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwvar___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwvar___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwintern___parser_index_t)(val_t  self);
val_t lexer___TKwintern___parser_index(val_t  self);
typedef void (* lexer___TKwintern___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwintern___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwintern___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwextern___parser_index_t)(val_t  self);
val_t lexer___TKwextern___parser_index(val_t  self);
typedef void (* lexer___TKwextern___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwextern___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwextern___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwprotected___parser_index_t)(val_t  self);
val_t lexer___TKwprotected___parser_index(val_t  self);
typedef void (* lexer___TKwprotected___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwprotected___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwprotected___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwprivate___parser_index_t)(val_t  self);
val_t lexer___TKwprivate___parser_index(val_t  self);
typedef void (* lexer___TKwprivate___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwprivate___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwprivate___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwintrude___parser_index_t)(val_t  self);
val_t lexer___TKwintrude___parser_index(val_t  self);
typedef void (* lexer___TKwintrude___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwintrude___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwintrude___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwif___parser_index_t)(val_t  self);
val_t lexer___TKwif___parser_index(val_t  self);
typedef void (* lexer___TKwif___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwif___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwif___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwthen___parser_index_t)(val_t  self);
val_t lexer___TKwthen___parser_index(val_t  self);
typedef void (* lexer___TKwthen___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwthen___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwthen___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwelse___parser_index_t)(val_t  self);
val_t lexer___TKwelse___parser_index(val_t  self);
typedef void (* lexer___TKwelse___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwelse___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwelse___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwwhile___parser_index_t)(val_t  self);
val_t lexer___TKwwhile___parser_index(val_t  self);
typedef void (* lexer___TKwwhile___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwwhile___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwwhile___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwfor___parser_index_t)(val_t  self);
val_t lexer___TKwfor___parser_index(val_t  self);
typedef void (* lexer___TKwfor___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwfor___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwfor___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwin___parser_index_t)(val_t  self);
val_t lexer___TKwin___parser_index(val_t  self);
typedef void (* lexer___TKwin___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwin___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwin___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwand___parser_index_t)(val_t  self);
val_t lexer___TKwand___parser_index(val_t  self);
typedef void (* lexer___TKwand___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwand___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwand___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwor___parser_index_t)(val_t  self);
val_t lexer___TKwor___parser_index(val_t  self);
typedef void (* lexer___TKwor___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwor___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwor___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwnot___parser_index_t)(val_t  self);
val_t lexer___TKwnot___parser_index(val_t  self);
typedef void (* lexer___TKwnot___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwnot___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwnot___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwreturn___parser_index_t)(val_t  self);
val_t lexer___TKwreturn___parser_index(val_t  self);
typedef void (* lexer___TKwreturn___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwreturn___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwreturn___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwcontinue___parser_index_t)(val_t  self);
val_t lexer___TKwcontinue___parser_index(val_t  self);
typedef void (* lexer___TKwcontinue___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwcontinue___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwcontinue___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwbreak___parser_index_t)(val_t  self);
val_t lexer___TKwbreak___parser_index(val_t  self);
typedef void (* lexer___TKwbreak___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwbreak___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwbreak___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwabort___parser_index_t)(val_t  self);
val_t lexer___TKwabort___parser_index(val_t  self);
typedef void (* lexer___TKwabort___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwabort___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwabort___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwassert___parser_index_t)(val_t  self);
val_t lexer___TKwassert___parser_index(val_t  self);
typedef void (* lexer___TKwassert___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwassert___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwassert___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwnew___parser_index_t)(val_t  self);
val_t lexer___TKwnew___parser_index(val_t  self);
typedef void (* lexer___TKwnew___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwnew___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwnew___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwisa___parser_index_t)(val_t  self);
val_t lexer___TKwisa___parser_index(val_t  self);
typedef void (* lexer___TKwisa___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwisa___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwisa___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwonce___parser_index_t)(val_t  self);
val_t lexer___TKwonce___parser_index(val_t  self);
typedef void (* lexer___TKwonce___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwonce___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwonce___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwsuper___parser_index_t)(val_t  self);
val_t lexer___TKwsuper___parser_index(val_t  self);
typedef void (* lexer___TKwsuper___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwsuper___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwsuper___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwself___parser_index_t)(val_t  self);
val_t lexer___TKwself___parser_index(val_t  self);
typedef void (* lexer___TKwself___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwself___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwself___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwtrue___parser_index_t)(val_t  self);
val_t lexer___TKwtrue___parser_index(val_t  self);
typedef void (* lexer___TKwtrue___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwtrue___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwtrue___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwfalse___parser_index_t)(val_t  self);
val_t lexer___TKwfalse___parser_index(val_t  self);
typedef void (* lexer___TKwfalse___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwfalse___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwfalse___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TKwnull___parser_index_t)(val_t  self);
val_t lexer___TKwnull___parser_index(val_t  self);
typedef void (* lexer___TKwnull___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TKwnull___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TKwnull___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TOpar___parser_index_t)(val_t  self);
val_t lexer___TOpar___parser_index(val_t  self);
typedef void (* lexer___TOpar___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TOpar___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TOpar___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TCpar___parser_index_t)(val_t  self);
val_t lexer___TCpar___parser_index(val_t  self);
typedef void (* lexer___TCpar___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TCpar___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TCpar___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TObra___parser_index_t)(val_t  self);
val_t lexer___TObra___parser_index(val_t  self);
typedef void (* lexer___TObra___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TObra___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TObra___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TCbra___parser_index_t)(val_t  self);
val_t lexer___TCbra___parser_index(val_t  self);
typedef void (* lexer___TCbra___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TCbra___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TCbra___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TComma___parser_index_t)(val_t  self);
val_t lexer___TComma___parser_index(val_t  self);
typedef void (* lexer___TComma___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TComma___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TComma___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TColumn___parser_index_t)(val_t  self);
val_t lexer___TColumn___parser_index(val_t  self);
typedef void (* lexer___TColumn___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TColumn___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TColumn___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TQuad___parser_index_t)(val_t  self);
val_t lexer___TQuad___parser_index(val_t  self);
typedef void (* lexer___TQuad___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TQuad___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TQuad___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TAssign___parser_index_t)(val_t  self);
val_t lexer___TAssign___parser_index(val_t  self);
typedef void (* lexer___TAssign___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TAssign___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TAssign___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TPluseq___parser_index_t)(val_t  self);
val_t lexer___TPluseq___parser_index(val_t  self);
typedef void (* lexer___TPluseq___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TPluseq___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TPluseq___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TMinuseq___parser_index_t)(val_t  self);
val_t lexer___TMinuseq___parser_index(val_t  self);
typedef void (* lexer___TMinuseq___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TMinuseq___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TMinuseq___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TDotdotdot___parser_index_t)(val_t  self);
val_t lexer___TDotdotdot___parser_index(val_t  self);
typedef void (* lexer___TDotdotdot___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TDotdotdot___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TDotdotdot___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TDotdot___parser_index_t)(val_t  self);
val_t lexer___TDotdot___parser_index(val_t  self);
typedef void (* lexer___TDotdot___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TDotdot___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TDotdot___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TDot___parser_index_t)(val_t  self);
val_t lexer___TDot___parser_index(val_t  self);
typedef void (* lexer___TDot___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TDot___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TDot___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TPlus___parser_index_t)(val_t  self);
val_t lexer___TPlus___parser_index(val_t  self);
typedef void (* lexer___TPlus___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TPlus___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TPlus___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TMinus___parser_index_t)(val_t  self);
val_t lexer___TMinus___parser_index(val_t  self);
typedef void (* lexer___TMinus___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TMinus___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TMinus___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TStar___parser_index_t)(val_t  self);
val_t lexer___TStar___parser_index(val_t  self);
typedef void (* lexer___TStar___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TStar___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TStar___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TSlash___parser_index_t)(val_t  self);
val_t lexer___TSlash___parser_index(val_t  self);
typedef void (* lexer___TSlash___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TSlash___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TSlash___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TPercent___parser_index_t)(val_t  self);
val_t lexer___TPercent___parser_index(val_t  self);
typedef void (* lexer___TPercent___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TPercent___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TPercent___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TEq___parser_index_t)(val_t  self);
val_t lexer___TEq___parser_index(val_t  self);
typedef void (* lexer___TEq___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TEq___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TEq___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TNe___parser_index_t)(val_t  self);
val_t lexer___TNe___parser_index(val_t  self);
typedef void (* lexer___TNe___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TNe___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TNe___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TLt___parser_index_t)(val_t  self);
val_t lexer___TLt___parser_index(val_t  self);
typedef void (* lexer___TLt___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TLt___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TLt___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TLe___parser_index_t)(val_t  self);
val_t lexer___TLe___parser_index(val_t  self);
typedef void (* lexer___TLe___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TLe___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TLe___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TGt___parser_index_t)(val_t  self);
val_t lexer___TGt___parser_index(val_t  self);
typedef void (* lexer___TGt___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TGt___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TGt___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TGe___parser_index_t)(val_t  self);
val_t lexer___TGe___parser_index(val_t  self);
typedef void (* lexer___TGe___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TGe___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TGe___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TStarship___parser_index_t)(val_t  self);
val_t lexer___TStarship___parser_index(val_t  self);
typedef void (* lexer___TStarship___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___TStarship___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___TStarship___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* lexer___TClassid___parser_index_t)(val_t  self);
val_t lexer___TClassid___parser_index(val_t  self);
typedef void (* lexer___TClassid___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TClassid___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TClassid___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TId___parser_index_t)(val_t  self);
val_t lexer___TId___parser_index(val_t  self);
typedef void (* lexer___TId___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TId___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TId___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TAttrid___parser_index_t)(val_t  self);
val_t lexer___TAttrid___parser_index(val_t  self);
typedef void (* lexer___TAttrid___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TAttrid___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TAttrid___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TNumber___parser_index_t)(val_t  self);
val_t lexer___TNumber___parser_index(val_t  self);
typedef void (* lexer___TNumber___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TNumber___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TNumber___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TFloat___parser_index_t)(val_t  self);
val_t lexer___TFloat___parser_index(val_t  self);
typedef void (* lexer___TFloat___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TFloat___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TFloat___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TChar___parser_index_t)(val_t  self);
val_t lexer___TChar___parser_index(val_t  self);
typedef void (* lexer___TChar___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TChar___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TChar___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TString___parser_index_t)(val_t  self);
val_t lexer___TString___parser_index(val_t  self);
typedef void (* lexer___TString___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TString___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TString___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TStartString___parser_index_t)(val_t  self);
val_t lexer___TStartString___parser_index(val_t  self);
typedef void (* lexer___TStartString___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TStartString___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TStartString___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TMidString___parser_index_t)(val_t  self);
val_t lexer___TMidString___parser_index(val_t  self);
typedef void (* lexer___TMidString___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TMidString___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TMidString___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___TEndString___parser_index_t)(val_t  self);
val_t lexer___TEndString___parser_index(val_t  self);
typedef void (* lexer___TEndString___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___TEndString___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___TEndString___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* lexer___EOF___parser_index_t)(val_t  self);
val_t lexer___EOF___parser_index(val_t  self);
typedef void (* lexer___EOF___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void lexer___EOF___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_lexer___EOF___init(val_t  param0, val_t  param1, val_t  param2);
#define ATTR_lexer___PError____message(recv) ATTR(recv, COLOR_lexer___PError____message)
typedef val_t (* lexer___PError___message_t)(val_t  self);
val_t lexer___PError___message(val_t  self);
typedef void (* lexer___PError___message__eq_t)(val_t  self, val_t  param0);
void lexer___PError___message__eq(val_t  self, val_t  param0);
typedef void (* lexer___PError___init_error_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void lexer___PError___init_error(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_lexer___PError___init_error(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_lexer___Lexer____token(recv) ATTR(recv, COLOR_lexer___Lexer____token)
#define ATTR_lexer___Lexer____state(recv) ATTR(recv, COLOR_lexer___Lexer____state)
#define ATTR_lexer___Lexer____filename(recv) ATTR(recv, COLOR_lexer___Lexer____filename)
typedef val_t (* lexer___Lexer___filename_t)(val_t  self);
val_t lexer___Lexer___filename(val_t  self);
#define ATTR_lexer___Lexer____stream(recv) ATTR(recv, COLOR_lexer___Lexer____stream)
#define ATTR_lexer___Lexer____stream_buf(recv) ATTR(recv, COLOR_lexer___Lexer____stream_buf)
#define ATTR_lexer___Lexer____stream_pos(recv) ATTR(recv, COLOR_lexer___Lexer____stream_pos)
#define ATTR_lexer___Lexer____line(recv) ATTR(recv, COLOR_lexer___Lexer____line)
#define ATTR_lexer___Lexer____pos(recv) ATTR(recv, COLOR_lexer___Lexer____pos)
#define ATTR_lexer___Lexer____cr(recv) ATTR(recv, COLOR_lexer___Lexer____cr)
#define ATTR_lexer___Lexer____eof(recv) ATTR(recv, COLOR_lexer___Lexer____eof)
#define ATTR_lexer___Lexer____text(recv) ATTR(recv, COLOR_lexer___Lexer____text)
typedef val_t (* lexer___Lexer___state_initial_t)(val_t  self);
val_t lexer___Lexer___state_initial(val_t  self);
typedef void (* lexer___Lexer___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void lexer___Lexer___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_lexer___Lexer___init(val_t  param0, val_t  param1);
typedef val_t (* lexer___Lexer___peek_t)(val_t  self);
val_t lexer___Lexer___peek(val_t  self);
typedef val_t (* lexer___Lexer___next_t)(val_t  self);
val_t lexer___Lexer___next(val_t  self);
typedef val_t (* lexer___Lexer___get_token_t)(val_t  self);
val_t lexer___Lexer___get_token(val_t  self);
typedef val_t (* lexer___Lexer___get_char_t)(val_t  self);
val_t lexer___Lexer___get_char(val_t  self);
typedef void (* lexer___Lexer___push_back_t)(val_t  self, val_t  param0);
void lexer___Lexer___push_back(val_t  self, val_t  param0);
#define ATTR_lexer___Lexer____goto_table(recv) ATTR(recv, COLOR_lexer___Lexer____goto_table)
typedef void (* lexer___Lexer___build_goto_table_t)(val_t  self);
void lexer___Lexer___build_goto_table(val_t  self);
typedef val_t (* lexer___Lexer___nil_array_t)(val_t  self);
val_t lexer___Lexer___nil_array(val_t  self);
#define ATTR_lexer___Lexer____accept_table(recv) ATTR(recv, COLOR_lexer___Lexer____accept_table)
typedef void (* lexer___Lexer___build_accept_table_t)(val_t  self);
void lexer___Lexer___build_accept_table(val_t  self);
#endif
