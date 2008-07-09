#ifndef parser_nodes__sep
#define parser_nodes__sep
#include "standard._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_PNode[];

extern const classtable_elt_t VFT_Token[];

extern const classtable_elt_t VFT_Prod[];

extern const classtable_elt_t VFT_TEol[];

extern const classtable_elt_t VFT_TComment[];

extern const classtable_elt_t VFT_TKwpackage[];

extern const classtable_elt_t VFT_TKwimport[];

extern const classtable_elt_t VFT_TKwclass[];

extern const classtable_elt_t VFT_TKwabstract[];

extern const classtable_elt_t VFT_TKwinterface[];

extern const classtable_elt_t VFT_TKwuniversal[];

extern const classtable_elt_t VFT_TKwspecial[];

extern const classtable_elt_t VFT_TKwend[];

extern const classtable_elt_t VFT_TKwmeth[];

extern const classtable_elt_t VFT_TKwtype[];

extern const classtable_elt_t VFT_TKwattr[];

extern const classtable_elt_t VFT_TKwinit[];

extern const classtable_elt_t VFT_TKwredef[];

extern const classtable_elt_t VFT_TKwis[];

extern const classtable_elt_t VFT_TKwdo[];

extern const classtable_elt_t VFT_TKwreadable[];

extern const classtable_elt_t VFT_TKwwritable[];

extern const classtable_elt_t VFT_TKwvar[];

extern const classtable_elt_t VFT_TKwintern[];

extern const classtable_elt_t VFT_TKwextern[];

extern const classtable_elt_t VFT_TKwprotected[];

extern const classtable_elt_t VFT_TKwprivate[];

extern const classtable_elt_t VFT_TKwintrude[];

extern const classtable_elt_t VFT_TKwif[];

extern const classtable_elt_t VFT_TKwthen[];

extern const classtable_elt_t VFT_TKwelse[];

extern const classtable_elt_t VFT_TKwwhile[];

extern const classtable_elt_t VFT_TKwfor[];

extern const classtable_elt_t VFT_TKwin[];

extern const classtable_elt_t VFT_TKwand[];

extern const classtable_elt_t VFT_TKwor[];

extern const classtable_elt_t VFT_TKwnot[];

extern const classtable_elt_t VFT_TKwreturn[];

extern const classtable_elt_t VFT_TKwcontinue[];

extern const classtable_elt_t VFT_TKwbreak[];

extern const classtable_elt_t VFT_TKwabort[];

extern const classtable_elt_t VFT_TKwassert[];

extern const classtable_elt_t VFT_TKwnew[];

extern const classtable_elt_t VFT_TKwisa[];

extern const classtable_elt_t VFT_TKwonce[];

extern const classtable_elt_t VFT_TKwsuper[];

extern const classtable_elt_t VFT_TKwself[];

extern const classtable_elt_t VFT_TKwtrue[];

extern const classtable_elt_t VFT_TKwfalse[];

extern const classtable_elt_t VFT_TKwnull[];

extern const classtable_elt_t VFT_TOpar[];

extern const classtable_elt_t VFT_TCpar[];

extern const classtable_elt_t VFT_TObra[];

extern const classtable_elt_t VFT_TCbra[];

extern const classtable_elt_t VFT_TComma[];

extern const classtable_elt_t VFT_TColumn[];

extern const classtable_elt_t VFT_TQuad[];

extern const classtable_elt_t VFT_TAssign[];

extern const classtable_elt_t VFT_TPluseq[];

extern const classtable_elt_t VFT_TMinuseq[];

extern const classtable_elt_t VFT_TDotdotdot[];

extern const classtable_elt_t VFT_TDotdot[];

extern const classtable_elt_t VFT_TDot[];

extern const classtable_elt_t VFT_TPlus[];

extern const classtable_elt_t VFT_TMinus[];

extern const classtable_elt_t VFT_TStar[];

extern const classtable_elt_t VFT_TSlash[];

extern const classtable_elt_t VFT_TPercent[];

extern const classtable_elt_t VFT_TEq[];

extern const classtable_elt_t VFT_TNe[];

extern const classtable_elt_t VFT_TLt[];

extern const classtable_elt_t VFT_TLe[];

extern const classtable_elt_t VFT_TGt[];

extern const classtable_elt_t VFT_TGe[];

extern const classtable_elt_t VFT_TStarship[];

extern const classtable_elt_t VFT_TClassid[];

extern const classtable_elt_t VFT_TId[];

extern const classtable_elt_t VFT_TAttrid[];

extern const classtable_elt_t VFT_TNumber[];

extern const classtable_elt_t VFT_TFloat[];

extern const classtable_elt_t VFT_TChar[];

extern const classtable_elt_t VFT_TString[];

extern const classtable_elt_t VFT_TStartString[];

extern const classtable_elt_t VFT_TMidString[];

extern const classtable_elt_t VFT_TEndString[];

extern const classtable_elt_t VFT_EOF[];

extern const classtable_elt_t VFT_PError[];

extern const classtable_elt_t VFT_PModule[];

extern const classtable_elt_t VFT_PPackagedecl[];

extern const classtable_elt_t VFT_PImport[];

extern const classtable_elt_t VFT_PVisibility[];

extern const classtable_elt_t VFT_PClassdef[];

extern const classtable_elt_t VFT_PClasskind[];

extern const classtable_elt_t VFT_PFormaldef[];

extern const classtable_elt_t VFT_PSuperclass[];

extern const classtable_elt_t VFT_PPropdef[];

extern const classtable_elt_t VFT_PAble[];

extern const classtable_elt_t VFT_PMethid[];

extern const classtable_elt_t VFT_PSignature[];

extern const classtable_elt_t VFT_PParam[];

extern const classtable_elt_t VFT_PType[];

extern const classtable_elt_t VFT_PExpr[];

extern const classtable_elt_t VFT_PAssignOp[];

extern const classtable_elt_t VFT_PQualified[];

extern const classtable_elt_t VFT_PDoc[];

extern const classtable_elt_t VFT_AModule[];

extern const classtable_elt_t VFT_APackagedecl[];

extern const classtable_elt_t VFT_AImport[];

extern const classtable_elt_t VFT_ANoImport[];

extern const classtable_elt_t VFT_APublicVisibility[];

extern const classtable_elt_t VFT_APrivateVisibility[];

extern const classtable_elt_t VFT_AProtectedVisibility[];

extern const classtable_elt_t VFT_AIntrudeVisibility[];

extern const classtable_elt_t VFT_AClassdef[];

extern const classtable_elt_t VFT_ATopClassdef[];

extern const classtable_elt_t VFT_AMainClassdef[];

extern const classtable_elt_t VFT_AConcreteClasskind[];

extern const classtable_elt_t VFT_AAbstractClasskind[];

extern const classtable_elt_t VFT_AInterfaceClasskind[];

extern const classtable_elt_t VFT_AUniversalClasskind[];

extern const classtable_elt_t VFT_AFormaldef[];

extern const classtable_elt_t VFT_ASuperclass[];

extern const classtable_elt_t VFT_AAttrPropdef[];

extern const classtable_elt_t VFT_AMethPropdef[];

extern const classtable_elt_t VFT_ADeferredMethPropdef[];

extern const classtable_elt_t VFT_AInternMethPropdef[];

extern const classtable_elt_t VFT_AExternMethPropdef[];

extern const classtable_elt_t VFT_AConcreteMethPropdef[];

extern const classtable_elt_t VFT_AConcreteInitPropdef[];

extern const classtable_elt_t VFT_AMainMethPropdef[];

extern const classtable_elt_t VFT_ATypePropdef[];

extern const classtable_elt_t VFT_AReadAble[];

extern const classtable_elt_t VFT_AWriteAble[];

extern const classtable_elt_t VFT_AIdMethid[];

extern const classtable_elt_t VFT_APlusMethid[];

extern const classtable_elt_t VFT_AMinusMethid[];

extern const classtable_elt_t VFT_AStarMethid[];

extern const classtable_elt_t VFT_ASlashMethid[];

extern const classtable_elt_t VFT_APercentMethid[];

extern const classtable_elt_t VFT_AEqMethid[];

extern const classtable_elt_t VFT_ANeMethid[];

extern const classtable_elt_t VFT_ALeMethid[];

extern const classtable_elt_t VFT_AGeMethid[];

extern const classtable_elt_t VFT_ALtMethid[];

extern const classtable_elt_t VFT_AGtMethid[];

extern const classtable_elt_t VFT_ABraMethid[];

extern const classtable_elt_t VFT_AStarshipMethid[];

extern const classtable_elt_t VFT_AAssignMethid[];

extern const classtable_elt_t VFT_ABraassignMethid[];

extern const classtable_elt_t VFT_ASignature[];

extern const classtable_elt_t VFT_AParam[];

extern const classtable_elt_t VFT_AType[];

extern const classtable_elt_t VFT_ABlockExpr[];

extern const classtable_elt_t VFT_AVardeclExpr[];

extern const classtable_elt_t VFT_AReturnExpr[];

extern const classtable_elt_t VFT_ABreakExpr[];

extern const classtable_elt_t VFT_AAbortExpr[];

extern const classtable_elt_t VFT_AContinueExpr[];

extern const classtable_elt_t VFT_ADoExpr[];

extern const classtable_elt_t VFT_AIfExpr[];

extern const classtable_elt_t VFT_AIfexprExpr[];

extern const classtable_elt_t VFT_AWhileExpr[];

extern const classtable_elt_t VFT_AForExpr[];

extern const classtable_elt_t VFT_AForVardeclExpr[];

extern const classtable_elt_t VFT_AAssertExpr[];

extern const classtable_elt_t VFT_AAssignFormExpr[];

extern const classtable_elt_t VFT_AReassignFormExpr[];

extern const classtable_elt_t VFT_AOnceExpr[];

extern const classtable_elt_t VFT_ASendExpr[];

extern const classtable_elt_t VFT_ABinopExpr[];

extern const classtable_elt_t VFT_ABoolExpr[];

extern const classtable_elt_t VFT_AOrExpr[];

extern const classtable_elt_t VFT_AAndExpr[];

extern const classtable_elt_t VFT_ANotExpr[];

extern const classtable_elt_t VFT_AEqExpr[];

extern const classtable_elt_t VFT_AEeExpr[];

extern const classtable_elt_t VFT_ANeExpr[];

extern const classtable_elt_t VFT_ALtExpr[];

extern const classtable_elt_t VFT_ALeExpr[];

extern const classtable_elt_t VFT_AGtExpr[];

extern const classtable_elt_t VFT_AGeExpr[];

extern const classtable_elt_t VFT_AIsaExpr[];

extern const classtable_elt_t VFT_APlusExpr[];

extern const classtable_elt_t VFT_AMinusExpr[];

extern const classtable_elt_t VFT_AStarshipExpr[];

extern const classtable_elt_t VFT_AStarExpr[];

extern const classtable_elt_t VFT_ASlashExpr[];

extern const classtable_elt_t VFT_APercentExpr[];

extern const classtable_elt_t VFT_AUminusExpr[];

extern const classtable_elt_t VFT_ANewExpr[];

extern const classtable_elt_t VFT_AAttrFormExpr[];

extern const classtable_elt_t VFT_AAttrExpr[];

extern const classtable_elt_t VFT_AAttrAssignExpr[];

extern const classtable_elt_t VFT_ACallFormExpr[];

extern const classtable_elt_t VFT_AAttrReassignExpr[];

extern const classtable_elt_t VFT_ACallExpr[];

extern const classtable_elt_t VFT_ACallAssignExpr[];

extern const classtable_elt_t VFT_ACallReassignExpr[];

extern const classtable_elt_t VFT_ASuperExpr[];

extern const classtable_elt_t VFT_AInitExpr[];

extern const classtable_elt_t VFT_ABraFormExpr[];

extern const classtable_elt_t VFT_ABraExpr[];

extern const classtable_elt_t VFT_ABraAssignExpr[];

extern const classtable_elt_t VFT_AVarFormExpr[];

extern const classtable_elt_t VFT_ABraReassignExpr[];

extern const classtable_elt_t VFT_AVarExpr[];

extern const classtable_elt_t VFT_AVarAssignExpr[];

extern const classtable_elt_t VFT_AVarReassignExpr[];

extern const classtable_elt_t VFT_ARangeExpr[];

extern const classtable_elt_t VFT_ACrangeExpr[];

extern const classtable_elt_t VFT_AOrangeExpr[];

extern const classtable_elt_t VFT_AArrayExpr[];

extern const classtable_elt_t VFT_ASelfExpr[];

extern const classtable_elt_t VFT_AImplicitSelfExpr[];

extern const classtable_elt_t VFT_ATrueExpr[];

extern const classtable_elt_t VFT_AFalseExpr[];

extern const classtable_elt_t VFT_ANullExpr[];

extern const classtable_elt_t VFT_AIntExpr[];

extern const classtable_elt_t VFT_AFloatExpr[];

extern const classtable_elt_t VFT_ACharExpr[];

extern const classtable_elt_t VFT_AStringFormExpr[];

extern const classtable_elt_t VFT_AStringExpr[];

extern const classtable_elt_t VFT_AStartStringExpr[];

extern const classtable_elt_t VFT_AMidStringExpr[];

extern const classtable_elt_t VFT_AEndStringExpr[];

extern const classtable_elt_t VFT_ASuperstringExpr[];

extern const classtable_elt_t VFT_AParExpr[];

extern const classtable_elt_t VFT_AProxyExpr[];

extern const classtable_elt_t VFT_APlusAssignOp[];

extern const classtable_elt_t VFT_AMinusAssignOp[];

extern const classtable_elt_t VFT_AQualified[];

extern const classtable_elt_t VFT_ADoc[];

extern const classtable_elt_t VFT_Start[];
extern const int SFT_parser_nodes[];
#define ID_PNode SFT_parser_nodes[0]
#define COLOR_PNode SFT_parser_nodes[1]
#define INIT_TABLE_POS_PNode SFT_parser_nodes[2]
#define ID_Token SFT_parser_nodes[3]
#define COLOR_Token SFT_parser_nodes[4]
#define INIT_TABLE_POS_Token SFT_parser_nodes[5]
#define ID_Prod SFT_parser_nodes[6]
#define COLOR_Prod SFT_parser_nodes[7]
#define INIT_TABLE_POS_Prod SFT_parser_nodes[8]
#define ID_TEol SFT_parser_nodes[9]
#define COLOR_TEol SFT_parser_nodes[10]
#define INIT_TABLE_POS_TEol SFT_parser_nodes[11]
#define ID_TComment SFT_parser_nodes[12]
#define COLOR_TComment SFT_parser_nodes[13]
#define INIT_TABLE_POS_TComment SFT_parser_nodes[14]
#define ID_TKwpackage SFT_parser_nodes[15]
#define COLOR_TKwpackage SFT_parser_nodes[16]
#define INIT_TABLE_POS_TKwpackage SFT_parser_nodes[17]
#define ID_TKwimport SFT_parser_nodes[18]
#define COLOR_TKwimport SFT_parser_nodes[19]
#define INIT_TABLE_POS_TKwimport SFT_parser_nodes[20]
#define ID_TKwclass SFT_parser_nodes[21]
#define COLOR_TKwclass SFT_parser_nodes[22]
#define INIT_TABLE_POS_TKwclass SFT_parser_nodes[23]
#define ID_TKwabstract SFT_parser_nodes[24]
#define COLOR_TKwabstract SFT_parser_nodes[25]
#define INIT_TABLE_POS_TKwabstract SFT_parser_nodes[26]
#define ID_TKwinterface SFT_parser_nodes[27]
#define COLOR_TKwinterface SFT_parser_nodes[28]
#define INIT_TABLE_POS_TKwinterface SFT_parser_nodes[29]
#define ID_TKwuniversal SFT_parser_nodes[30]
#define COLOR_TKwuniversal SFT_parser_nodes[31]
#define INIT_TABLE_POS_TKwuniversal SFT_parser_nodes[32]
#define ID_TKwspecial SFT_parser_nodes[33]
#define COLOR_TKwspecial SFT_parser_nodes[34]
#define INIT_TABLE_POS_TKwspecial SFT_parser_nodes[35]
#define ID_TKwend SFT_parser_nodes[36]
#define COLOR_TKwend SFT_parser_nodes[37]
#define INIT_TABLE_POS_TKwend SFT_parser_nodes[38]
#define ID_TKwmeth SFT_parser_nodes[39]
#define COLOR_TKwmeth SFT_parser_nodes[40]
#define INIT_TABLE_POS_TKwmeth SFT_parser_nodes[41]
#define ID_TKwtype SFT_parser_nodes[42]
#define COLOR_TKwtype SFT_parser_nodes[43]
#define INIT_TABLE_POS_TKwtype SFT_parser_nodes[44]
#define ID_TKwattr SFT_parser_nodes[45]
#define COLOR_TKwattr SFT_parser_nodes[46]
#define INIT_TABLE_POS_TKwattr SFT_parser_nodes[47]
#define ID_TKwinit SFT_parser_nodes[48]
#define COLOR_TKwinit SFT_parser_nodes[49]
#define INIT_TABLE_POS_TKwinit SFT_parser_nodes[50]
#define ID_TKwredef SFT_parser_nodes[51]
#define COLOR_TKwredef SFT_parser_nodes[52]
#define INIT_TABLE_POS_TKwredef SFT_parser_nodes[53]
#define ID_TKwis SFT_parser_nodes[54]
#define COLOR_TKwis SFT_parser_nodes[55]
#define INIT_TABLE_POS_TKwis SFT_parser_nodes[56]
#define ID_TKwdo SFT_parser_nodes[57]
#define COLOR_TKwdo SFT_parser_nodes[58]
#define INIT_TABLE_POS_TKwdo SFT_parser_nodes[59]
#define ID_TKwreadable SFT_parser_nodes[60]
#define COLOR_TKwreadable SFT_parser_nodes[61]
#define INIT_TABLE_POS_TKwreadable SFT_parser_nodes[62]
#define ID_TKwwritable SFT_parser_nodes[63]
#define COLOR_TKwwritable SFT_parser_nodes[64]
#define INIT_TABLE_POS_TKwwritable SFT_parser_nodes[65]
#define ID_TKwvar SFT_parser_nodes[66]
#define COLOR_TKwvar SFT_parser_nodes[67]
#define INIT_TABLE_POS_TKwvar SFT_parser_nodes[68]
#define ID_TKwintern SFT_parser_nodes[69]
#define COLOR_TKwintern SFT_parser_nodes[70]
#define INIT_TABLE_POS_TKwintern SFT_parser_nodes[71]
#define ID_TKwextern SFT_parser_nodes[72]
#define COLOR_TKwextern SFT_parser_nodes[73]
#define INIT_TABLE_POS_TKwextern SFT_parser_nodes[74]
#define ID_TKwprotected SFT_parser_nodes[75]
#define COLOR_TKwprotected SFT_parser_nodes[76]
#define INIT_TABLE_POS_TKwprotected SFT_parser_nodes[77]
#define ID_TKwprivate SFT_parser_nodes[78]
#define COLOR_TKwprivate SFT_parser_nodes[79]
#define INIT_TABLE_POS_TKwprivate SFT_parser_nodes[80]
#define ID_TKwintrude SFT_parser_nodes[81]
#define COLOR_TKwintrude SFT_parser_nodes[82]
#define INIT_TABLE_POS_TKwintrude SFT_parser_nodes[83]
#define ID_TKwif SFT_parser_nodes[84]
#define COLOR_TKwif SFT_parser_nodes[85]
#define INIT_TABLE_POS_TKwif SFT_parser_nodes[86]
#define ID_TKwthen SFT_parser_nodes[87]
#define COLOR_TKwthen SFT_parser_nodes[88]
#define INIT_TABLE_POS_TKwthen SFT_parser_nodes[89]
#define ID_TKwelse SFT_parser_nodes[90]
#define COLOR_TKwelse SFT_parser_nodes[91]
#define INIT_TABLE_POS_TKwelse SFT_parser_nodes[92]
#define ID_TKwwhile SFT_parser_nodes[93]
#define COLOR_TKwwhile SFT_parser_nodes[94]
#define INIT_TABLE_POS_TKwwhile SFT_parser_nodes[95]
#define ID_TKwfor SFT_parser_nodes[96]
#define COLOR_TKwfor SFT_parser_nodes[97]
#define INIT_TABLE_POS_TKwfor SFT_parser_nodes[98]
#define ID_TKwin SFT_parser_nodes[99]
#define COLOR_TKwin SFT_parser_nodes[100]
#define INIT_TABLE_POS_TKwin SFT_parser_nodes[101]
#define ID_TKwand SFT_parser_nodes[102]
#define COLOR_TKwand SFT_parser_nodes[103]
#define INIT_TABLE_POS_TKwand SFT_parser_nodes[104]
#define ID_TKwor SFT_parser_nodes[105]
#define COLOR_TKwor SFT_parser_nodes[106]
#define INIT_TABLE_POS_TKwor SFT_parser_nodes[107]
#define ID_TKwnot SFT_parser_nodes[108]
#define COLOR_TKwnot SFT_parser_nodes[109]
#define INIT_TABLE_POS_TKwnot SFT_parser_nodes[110]
#define ID_TKwreturn SFT_parser_nodes[111]
#define COLOR_TKwreturn SFT_parser_nodes[112]
#define INIT_TABLE_POS_TKwreturn SFT_parser_nodes[113]
#define ID_TKwcontinue SFT_parser_nodes[114]
#define COLOR_TKwcontinue SFT_parser_nodes[115]
#define INIT_TABLE_POS_TKwcontinue SFT_parser_nodes[116]
#define ID_TKwbreak SFT_parser_nodes[117]
#define COLOR_TKwbreak SFT_parser_nodes[118]
#define INIT_TABLE_POS_TKwbreak SFT_parser_nodes[119]
#define ID_TKwabort SFT_parser_nodes[120]
#define COLOR_TKwabort SFT_parser_nodes[121]
#define INIT_TABLE_POS_TKwabort SFT_parser_nodes[122]
#define ID_TKwassert SFT_parser_nodes[123]
#define COLOR_TKwassert SFT_parser_nodes[124]
#define INIT_TABLE_POS_TKwassert SFT_parser_nodes[125]
#define ID_TKwnew SFT_parser_nodes[126]
#define COLOR_TKwnew SFT_parser_nodes[127]
#define INIT_TABLE_POS_TKwnew SFT_parser_nodes[128]
#define ID_TKwisa SFT_parser_nodes[129]
#define COLOR_TKwisa SFT_parser_nodes[130]
#define INIT_TABLE_POS_TKwisa SFT_parser_nodes[131]
#define ID_TKwonce SFT_parser_nodes[132]
#define COLOR_TKwonce SFT_parser_nodes[133]
#define INIT_TABLE_POS_TKwonce SFT_parser_nodes[134]
#define ID_TKwsuper SFT_parser_nodes[135]
#define COLOR_TKwsuper SFT_parser_nodes[136]
#define INIT_TABLE_POS_TKwsuper SFT_parser_nodes[137]
#define ID_TKwself SFT_parser_nodes[138]
#define COLOR_TKwself SFT_parser_nodes[139]
#define INIT_TABLE_POS_TKwself SFT_parser_nodes[140]
#define ID_TKwtrue SFT_parser_nodes[141]
#define COLOR_TKwtrue SFT_parser_nodes[142]
#define INIT_TABLE_POS_TKwtrue SFT_parser_nodes[143]
#define ID_TKwfalse SFT_parser_nodes[144]
#define COLOR_TKwfalse SFT_parser_nodes[145]
#define INIT_TABLE_POS_TKwfalse SFT_parser_nodes[146]
#define ID_TKwnull SFT_parser_nodes[147]
#define COLOR_TKwnull SFT_parser_nodes[148]
#define INIT_TABLE_POS_TKwnull SFT_parser_nodes[149]
#define ID_TOpar SFT_parser_nodes[150]
#define COLOR_TOpar SFT_parser_nodes[151]
#define INIT_TABLE_POS_TOpar SFT_parser_nodes[152]
#define ID_TCpar SFT_parser_nodes[153]
#define COLOR_TCpar SFT_parser_nodes[154]
#define INIT_TABLE_POS_TCpar SFT_parser_nodes[155]
#define ID_TObra SFT_parser_nodes[156]
#define COLOR_TObra SFT_parser_nodes[157]
#define INIT_TABLE_POS_TObra SFT_parser_nodes[158]
#define ID_TCbra SFT_parser_nodes[159]
#define COLOR_TCbra SFT_parser_nodes[160]
#define INIT_TABLE_POS_TCbra SFT_parser_nodes[161]
#define ID_TComma SFT_parser_nodes[162]
#define COLOR_TComma SFT_parser_nodes[163]
#define INIT_TABLE_POS_TComma SFT_parser_nodes[164]
#define ID_TColumn SFT_parser_nodes[165]
#define COLOR_TColumn SFT_parser_nodes[166]
#define INIT_TABLE_POS_TColumn SFT_parser_nodes[167]
#define ID_TQuad SFT_parser_nodes[168]
#define COLOR_TQuad SFT_parser_nodes[169]
#define INIT_TABLE_POS_TQuad SFT_parser_nodes[170]
#define ID_TAssign SFT_parser_nodes[171]
#define COLOR_TAssign SFT_parser_nodes[172]
#define INIT_TABLE_POS_TAssign SFT_parser_nodes[173]
#define ID_TPluseq SFT_parser_nodes[174]
#define COLOR_TPluseq SFT_parser_nodes[175]
#define INIT_TABLE_POS_TPluseq SFT_parser_nodes[176]
#define ID_TMinuseq SFT_parser_nodes[177]
#define COLOR_TMinuseq SFT_parser_nodes[178]
#define INIT_TABLE_POS_TMinuseq SFT_parser_nodes[179]
#define ID_TDotdotdot SFT_parser_nodes[180]
#define COLOR_TDotdotdot SFT_parser_nodes[181]
#define INIT_TABLE_POS_TDotdotdot SFT_parser_nodes[182]
#define ID_TDotdot SFT_parser_nodes[183]
#define COLOR_TDotdot SFT_parser_nodes[184]
#define INIT_TABLE_POS_TDotdot SFT_parser_nodes[185]
#define ID_TDot SFT_parser_nodes[186]
#define COLOR_TDot SFT_parser_nodes[187]
#define INIT_TABLE_POS_TDot SFT_parser_nodes[188]
#define ID_TPlus SFT_parser_nodes[189]
#define COLOR_TPlus SFT_parser_nodes[190]
#define INIT_TABLE_POS_TPlus SFT_parser_nodes[191]
#define ID_TMinus SFT_parser_nodes[192]
#define COLOR_TMinus SFT_parser_nodes[193]
#define INIT_TABLE_POS_TMinus SFT_parser_nodes[194]
#define ID_TStar SFT_parser_nodes[195]
#define COLOR_TStar SFT_parser_nodes[196]
#define INIT_TABLE_POS_TStar SFT_parser_nodes[197]
#define ID_TSlash SFT_parser_nodes[198]
#define COLOR_TSlash SFT_parser_nodes[199]
#define INIT_TABLE_POS_TSlash SFT_parser_nodes[200]
#define ID_TPercent SFT_parser_nodes[201]
#define COLOR_TPercent SFT_parser_nodes[202]
#define INIT_TABLE_POS_TPercent SFT_parser_nodes[203]
#define ID_TEq SFT_parser_nodes[204]
#define COLOR_TEq SFT_parser_nodes[205]
#define INIT_TABLE_POS_TEq SFT_parser_nodes[206]
#define ID_TNe SFT_parser_nodes[207]
#define COLOR_TNe SFT_parser_nodes[208]
#define INIT_TABLE_POS_TNe SFT_parser_nodes[209]
#define ID_TLt SFT_parser_nodes[210]
#define COLOR_TLt SFT_parser_nodes[211]
#define INIT_TABLE_POS_TLt SFT_parser_nodes[212]
#define ID_TLe SFT_parser_nodes[213]
#define COLOR_TLe SFT_parser_nodes[214]
#define INIT_TABLE_POS_TLe SFT_parser_nodes[215]
#define ID_TGt SFT_parser_nodes[216]
#define COLOR_TGt SFT_parser_nodes[217]
#define INIT_TABLE_POS_TGt SFT_parser_nodes[218]
#define ID_TGe SFT_parser_nodes[219]
#define COLOR_TGe SFT_parser_nodes[220]
#define INIT_TABLE_POS_TGe SFT_parser_nodes[221]
#define ID_TStarship SFT_parser_nodes[222]
#define COLOR_TStarship SFT_parser_nodes[223]
#define INIT_TABLE_POS_TStarship SFT_parser_nodes[224]
#define ID_TClassid SFT_parser_nodes[225]
#define COLOR_TClassid SFT_parser_nodes[226]
#define INIT_TABLE_POS_TClassid SFT_parser_nodes[227]
#define ID_TId SFT_parser_nodes[228]
#define COLOR_TId SFT_parser_nodes[229]
#define INIT_TABLE_POS_TId SFT_parser_nodes[230]
#define ID_TAttrid SFT_parser_nodes[231]
#define COLOR_TAttrid SFT_parser_nodes[232]
#define INIT_TABLE_POS_TAttrid SFT_parser_nodes[233]
#define ID_TNumber SFT_parser_nodes[234]
#define COLOR_TNumber SFT_parser_nodes[235]
#define INIT_TABLE_POS_TNumber SFT_parser_nodes[236]
#define ID_TFloat SFT_parser_nodes[237]
#define COLOR_TFloat SFT_parser_nodes[238]
#define INIT_TABLE_POS_TFloat SFT_parser_nodes[239]
#define ID_TChar SFT_parser_nodes[240]
#define COLOR_TChar SFT_parser_nodes[241]
#define INIT_TABLE_POS_TChar SFT_parser_nodes[242]
#define ID_TString SFT_parser_nodes[243]
#define COLOR_TString SFT_parser_nodes[244]
#define INIT_TABLE_POS_TString SFT_parser_nodes[245]
#define ID_TStartString SFT_parser_nodes[246]
#define COLOR_TStartString SFT_parser_nodes[247]
#define INIT_TABLE_POS_TStartString SFT_parser_nodes[248]
#define ID_TMidString SFT_parser_nodes[249]
#define COLOR_TMidString SFT_parser_nodes[250]
#define INIT_TABLE_POS_TMidString SFT_parser_nodes[251]
#define ID_TEndString SFT_parser_nodes[252]
#define COLOR_TEndString SFT_parser_nodes[253]
#define INIT_TABLE_POS_TEndString SFT_parser_nodes[254]
#define ID_EOF SFT_parser_nodes[255]
#define COLOR_EOF SFT_parser_nodes[256]
#define INIT_TABLE_POS_EOF SFT_parser_nodes[257]
#define ID_PError SFT_parser_nodes[258]
#define COLOR_PError SFT_parser_nodes[259]
#define INIT_TABLE_POS_PError SFT_parser_nodes[260]
#define ID_PModule SFT_parser_nodes[261]
#define COLOR_PModule SFT_parser_nodes[262]
#define INIT_TABLE_POS_PModule SFT_parser_nodes[263]
#define ID_PPackagedecl SFT_parser_nodes[264]
#define COLOR_PPackagedecl SFT_parser_nodes[265]
#define INIT_TABLE_POS_PPackagedecl SFT_parser_nodes[266]
#define ID_PImport SFT_parser_nodes[267]
#define COLOR_PImport SFT_parser_nodes[268]
#define INIT_TABLE_POS_PImport SFT_parser_nodes[269]
#define ID_PVisibility SFT_parser_nodes[270]
#define COLOR_PVisibility SFT_parser_nodes[271]
#define INIT_TABLE_POS_PVisibility SFT_parser_nodes[272]
#define ID_PClassdef SFT_parser_nodes[273]
#define COLOR_PClassdef SFT_parser_nodes[274]
#define INIT_TABLE_POS_PClassdef SFT_parser_nodes[275]
#define ID_PClasskind SFT_parser_nodes[276]
#define COLOR_PClasskind SFT_parser_nodes[277]
#define INIT_TABLE_POS_PClasskind SFT_parser_nodes[278]
#define ID_PFormaldef SFT_parser_nodes[279]
#define COLOR_PFormaldef SFT_parser_nodes[280]
#define INIT_TABLE_POS_PFormaldef SFT_parser_nodes[281]
#define ID_PSuperclass SFT_parser_nodes[282]
#define COLOR_PSuperclass SFT_parser_nodes[283]
#define INIT_TABLE_POS_PSuperclass SFT_parser_nodes[284]
#define ID_PPropdef SFT_parser_nodes[285]
#define COLOR_PPropdef SFT_parser_nodes[286]
#define COLOR_parser_nodes___PPropdef____n_doc SFT_parser_nodes[287]
#define INIT_TABLE_POS_PPropdef SFT_parser_nodes[288]
#define COLOR_parser_nodes___PPropdef___n_doc SFT_parser_nodes[289]
#define COLOR_parser_nodes___PPropdef___n_doc__eq SFT_parser_nodes[290]
#define ID_PAble SFT_parser_nodes[291]
#define COLOR_PAble SFT_parser_nodes[292]
#define COLOR_parser_nodes___PAble____n_kwredef SFT_parser_nodes[293]
#define INIT_TABLE_POS_PAble SFT_parser_nodes[294]
#define COLOR_parser_nodes___PAble___n_kwredef SFT_parser_nodes[295]
#define COLOR_parser_nodes___PAble___n_kwredef__eq SFT_parser_nodes[296]
#define ID_PMethid SFT_parser_nodes[297]
#define COLOR_PMethid SFT_parser_nodes[298]
#define INIT_TABLE_POS_PMethid SFT_parser_nodes[299]
#define ID_PSignature SFT_parser_nodes[300]
#define COLOR_PSignature SFT_parser_nodes[301]
#define INIT_TABLE_POS_PSignature SFT_parser_nodes[302]
#define ID_PParam SFT_parser_nodes[303]
#define COLOR_PParam SFT_parser_nodes[304]
#define COLOR_parser_nodes___PParam____n_id SFT_parser_nodes[305]
#define COLOR_parser_nodes___PParam____n_type SFT_parser_nodes[306]
#define INIT_TABLE_POS_PParam SFT_parser_nodes[307]
#define COLOR_parser_nodes___PParam___n_id SFT_parser_nodes[308]
#define COLOR_parser_nodes___PParam___n_id__eq SFT_parser_nodes[309]
#define COLOR_parser_nodes___PParam___n_type SFT_parser_nodes[310]
#define COLOR_parser_nodes___PParam___n_type__eq SFT_parser_nodes[311]
#define ID_PType SFT_parser_nodes[312]
#define COLOR_PType SFT_parser_nodes[313]
#define INIT_TABLE_POS_PType SFT_parser_nodes[314]
#define ID_PExpr SFT_parser_nodes[315]
#define COLOR_PExpr SFT_parser_nodes[316]
#define INIT_TABLE_POS_PExpr SFT_parser_nodes[317]
#define ID_PAssignOp SFT_parser_nodes[318]
#define COLOR_PAssignOp SFT_parser_nodes[319]
#define INIT_TABLE_POS_PAssignOp SFT_parser_nodes[320]
#define ID_PQualified SFT_parser_nodes[321]
#define COLOR_PQualified SFT_parser_nodes[322]
#define INIT_TABLE_POS_PQualified SFT_parser_nodes[323]
#define ID_PDoc SFT_parser_nodes[324]
#define COLOR_PDoc SFT_parser_nodes[325]
#define INIT_TABLE_POS_PDoc SFT_parser_nodes[326]
#define ID_AModule SFT_parser_nodes[327]
#define COLOR_AModule SFT_parser_nodes[328]
#define COLOR_parser_nodes___AModule____n_packagedecl SFT_parser_nodes[329]
#define COLOR_parser_nodes___AModule____n_imports SFT_parser_nodes[330]
#define COLOR_parser_nodes___AModule____n_classdefs SFT_parser_nodes[331]
#define INIT_TABLE_POS_AModule SFT_parser_nodes[332]
#define COLOR_parser_nodes___AModule___n_packagedecl SFT_parser_nodes[333]
#define COLOR_parser_nodes___AModule___n_packagedecl__eq SFT_parser_nodes[334]
#define COLOR_parser_nodes___AModule___n_imports SFT_parser_nodes[335]
#define COLOR_parser_nodes___AModule___n_imports__eq SFT_parser_nodes[336]
#define COLOR_parser_nodes___AModule___n_classdefs SFT_parser_nodes[337]
#define COLOR_parser_nodes___AModule___n_classdefs__eq SFT_parser_nodes[338]
#define ID_APackagedecl SFT_parser_nodes[339]
#define COLOR_APackagedecl SFT_parser_nodes[340]
#define COLOR_parser_nodes___APackagedecl____n_doc SFT_parser_nodes[341]
#define COLOR_parser_nodes___APackagedecl____n_kwpackage SFT_parser_nodes[342]
#define COLOR_parser_nodes___APackagedecl____n_id SFT_parser_nodes[343]
#define INIT_TABLE_POS_APackagedecl SFT_parser_nodes[344]
#define COLOR_parser_nodes___APackagedecl___n_doc SFT_parser_nodes[345]
#define COLOR_parser_nodes___APackagedecl___n_doc__eq SFT_parser_nodes[346]
#define COLOR_parser_nodes___APackagedecl___n_kwpackage SFT_parser_nodes[347]
#define COLOR_parser_nodes___APackagedecl___n_kwpackage__eq SFT_parser_nodes[348]
#define COLOR_parser_nodes___APackagedecl___n_id SFT_parser_nodes[349]
#define COLOR_parser_nodes___APackagedecl___n_id__eq SFT_parser_nodes[350]
#define ID_AImport SFT_parser_nodes[351]
#define COLOR_AImport SFT_parser_nodes[352]
#define COLOR_parser_nodes___AImport____n_visibility SFT_parser_nodes[353]
#define COLOR_parser_nodes___AImport____n_kwimport SFT_parser_nodes[354]
#define COLOR_parser_nodes___AImport____n_id SFT_parser_nodes[355]
#define INIT_TABLE_POS_AImport SFT_parser_nodes[356]
#define COLOR_parser_nodes___AImport___n_visibility SFT_parser_nodes[357]
#define COLOR_parser_nodes___AImport___n_visibility__eq SFT_parser_nodes[358]
#define COLOR_parser_nodes___AImport___n_kwimport SFT_parser_nodes[359]
#define COLOR_parser_nodes___AImport___n_kwimport__eq SFT_parser_nodes[360]
#define COLOR_parser_nodes___AImport___n_id SFT_parser_nodes[361]
#define COLOR_parser_nodes___AImport___n_id__eq SFT_parser_nodes[362]
#define ID_ANoImport SFT_parser_nodes[363]
#define COLOR_ANoImport SFT_parser_nodes[364]
#define COLOR_parser_nodes___ANoImport____n_visibility SFT_parser_nodes[365]
#define COLOR_parser_nodes___ANoImport____n_kwimport SFT_parser_nodes[366]
#define COLOR_parser_nodes___ANoImport____n_kwend SFT_parser_nodes[367]
#define INIT_TABLE_POS_ANoImport SFT_parser_nodes[368]
#define COLOR_parser_nodes___ANoImport___n_visibility SFT_parser_nodes[369]
#define COLOR_parser_nodes___ANoImport___n_visibility__eq SFT_parser_nodes[370]
#define COLOR_parser_nodes___ANoImport___n_kwimport SFT_parser_nodes[371]
#define COLOR_parser_nodes___ANoImport___n_kwimport__eq SFT_parser_nodes[372]
#define COLOR_parser_nodes___ANoImport___n_kwend SFT_parser_nodes[373]
#define COLOR_parser_nodes___ANoImport___n_kwend__eq SFT_parser_nodes[374]
#define ID_APublicVisibility SFT_parser_nodes[375]
#define COLOR_APublicVisibility SFT_parser_nodes[376]
#define INIT_TABLE_POS_APublicVisibility SFT_parser_nodes[377]
#define ID_APrivateVisibility SFT_parser_nodes[378]
#define COLOR_APrivateVisibility SFT_parser_nodes[379]
#define COLOR_parser_nodes___APrivateVisibility____n_kwprivate SFT_parser_nodes[380]
#define INIT_TABLE_POS_APrivateVisibility SFT_parser_nodes[381]
#define COLOR_parser_nodes___APrivateVisibility___n_kwprivate SFT_parser_nodes[382]
#define COLOR_parser_nodes___APrivateVisibility___n_kwprivate__eq SFT_parser_nodes[383]
#define ID_AProtectedVisibility SFT_parser_nodes[384]
#define COLOR_AProtectedVisibility SFT_parser_nodes[385]
#define COLOR_parser_nodes___AProtectedVisibility____n_kwprotected SFT_parser_nodes[386]
#define INIT_TABLE_POS_AProtectedVisibility SFT_parser_nodes[387]
#define COLOR_parser_nodes___AProtectedVisibility___n_kwprotected SFT_parser_nodes[388]
#define COLOR_parser_nodes___AProtectedVisibility___n_kwprotected__eq SFT_parser_nodes[389]
#define ID_AIntrudeVisibility SFT_parser_nodes[390]
#define COLOR_AIntrudeVisibility SFT_parser_nodes[391]
#define COLOR_parser_nodes___AIntrudeVisibility____n_kwintrude SFT_parser_nodes[392]
#define INIT_TABLE_POS_AIntrudeVisibility SFT_parser_nodes[393]
#define COLOR_parser_nodes___AIntrudeVisibility___n_kwintrude SFT_parser_nodes[394]
#define COLOR_parser_nodes___AIntrudeVisibility___n_kwintrude__eq SFT_parser_nodes[395]
#define ID_AClassdef SFT_parser_nodes[396]
#define COLOR_AClassdef SFT_parser_nodes[397]
#define COLOR_parser_nodes___AClassdef____n_doc SFT_parser_nodes[398]
#define COLOR_parser_nodes___AClassdef____n_kwredef SFT_parser_nodes[399]
#define COLOR_parser_nodes___AClassdef____n_visibility SFT_parser_nodes[400]
#define COLOR_parser_nodes___AClassdef____n_classkind SFT_parser_nodes[401]
#define COLOR_parser_nodes___AClassdef____n_id SFT_parser_nodes[402]
#define COLOR_parser_nodes___AClassdef____n_formaldefs SFT_parser_nodes[403]
#define COLOR_parser_nodes___AClassdef____n_superclasses SFT_parser_nodes[404]
#define COLOR_parser_nodes___AClassdef____n_propdefs SFT_parser_nodes[405]
#define INIT_TABLE_POS_AClassdef SFT_parser_nodes[406]
#define COLOR_parser_nodes___AClassdef___n_doc SFT_parser_nodes[407]
#define COLOR_parser_nodes___AClassdef___n_doc__eq SFT_parser_nodes[408]
#define COLOR_parser_nodes___AClassdef___n_kwredef SFT_parser_nodes[409]
#define COLOR_parser_nodes___AClassdef___n_kwredef__eq SFT_parser_nodes[410]
#define COLOR_parser_nodes___AClassdef___n_visibility SFT_parser_nodes[411]
#define COLOR_parser_nodes___AClassdef___n_visibility__eq SFT_parser_nodes[412]
#define COLOR_parser_nodes___AClassdef___n_classkind SFT_parser_nodes[413]
#define COLOR_parser_nodes___AClassdef___n_classkind__eq SFT_parser_nodes[414]
#define COLOR_parser_nodes___AClassdef___n_id SFT_parser_nodes[415]
#define COLOR_parser_nodes___AClassdef___n_id__eq SFT_parser_nodes[416]
#define COLOR_parser_nodes___AClassdef___n_formaldefs SFT_parser_nodes[417]
#define COLOR_parser_nodes___AClassdef___n_formaldefs__eq SFT_parser_nodes[418]
#define COLOR_parser_nodes___AClassdef___n_superclasses SFT_parser_nodes[419]
#define COLOR_parser_nodes___AClassdef___n_superclasses__eq SFT_parser_nodes[420]
#define COLOR_parser_nodes___AClassdef___n_propdefs SFT_parser_nodes[421]
#define COLOR_parser_nodes___AClassdef___n_propdefs__eq SFT_parser_nodes[422]
#define ID_ATopClassdef SFT_parser_nodes[423]
#define COLOR_ATopClassdef SFT_parser_nodes[424]
#define COLOR_parser_nodes___ATopClassdef____n_propdefs SFT_parser_nodes[425]
#define INIT_TABLE_POS_ATopClassdef SFT_parser_nodes[426]
#define COLOR_parser_nodes___ATopClassdef___n_propdefs SFT_parser_nodes[427]
#define COLOR_parser_nodes___ATopClassdef___n_propdefs__eq SFT_parser_nodes[428]
#define ID_AMainClassdef SFT_parser_nodes[429]
#define COLOR_AMainClassdef SFT_parser_nodes[430]
#define COLOR_parser_nodes___AMainClassdef____n_propdefs SFT_parser_nodes[431]
#define INIT_TABLE_POS_AMainClassdef SFT_parser_nodes[432]
#define COLOR_parser_nodes___AMainClassdef___n_propdefs SFT_parser_nodes[433]
#define COLOR_parser_nodes___AMainClassdef___n_propdefs__eq SFT_parser_nodes[434]
#define ID_AConcreteClasskind SFT_parser_nodes[435]
#define COLOR_AConcreteClasskind SFT_parser_nodes[436]
#define COLOR_parser_nodes___AConcreteClasskind____n_kwclass SFT_parser_nodes[437]
#define INIT_TABLE_POS_AConcreteClasskind SFT_parser_nodes[438]
#define COLOR_parser_nodes___AConcreteClasskind___n_kwclass SFT_parser_nodes[439]
#define COLOR_parser_nodes___AConcreteClasskind___n_kwclass__eq SFT_parser_nodes[440]
#define ID_AAbstractClasskind SFT_parser_nodes[441]
#define COLOR_AAbstractClasskind SFT_parser_nodes[442]
#define COLOR_parser_nodes___AAbstractClasskind____n_kwabstract SFT_parser_nodes[443]
#define COLOR_parser_nodes___AAbstractClasskind____n_kwclass SFT_parser_nodes[444]
#define INIT_TABLE_POS_AAbstractClasskind SFT_parser_nodes[445]
#define COLOR_parser_nodes___AAbstractClasskind___n_kwabstract SFT_parser_nodes[446]
#define COLOR_parser_nodes___AAbstractClasskind___n_kwabstract__eq SFT_parser_nodes[447]
#define COLOR_parser_nodes___AAbstractClasskind___n_kwclass SFT_parser_nodes[448]
#define COLOR_parser_nodes___AAbstractClasskind___n_kwclass__eq SFT_parser_nodes[449]
#define ID_AInterfaceClasskind SFT_parser_nodes[450]
#define COLOR_AInterfaceClasskind SFT_parser_nodes[451]
#define COLOR_parser_nodes___AInterfaceClasskind____n_kwinterface SFT_parser_nodes[452]
#define INIT_TABLE_POS_AInterfaceClasskind SFT_parser_nodes[453]
#define COLOR_parser_nodes___AInterfaceClasskind___n_kwinterface SFT_parser_nodes[454]
#define COLOR_parser_nodes___AInterfaceClasskind___n_kwinterface__eq SFT_parser_nodes[455]
#define ID_AUniversalClasskind SFT_parser_nodes[456]
#define COLOR_AUniversalClasskind SFT_parser_nodes[457]
#define COLOR_parser_nodes___AUniversalClasskind____n_kwuniversal SFT_parser_nodes[458]
#define INIT_TABLE_POS_AUniversalClasskind SFT_parser_nodes[459]
#define COLOR_parser_nodes___AUniversalClasskind___n_kwuniversal SFT_parser_nodes[460]
#define COLOR_parser_nodes___AUniversalClasskind___n_kwuniversal__eq SFT_parser_nodes[461]
#define ID_AFormaldef SFT_parser_nodes[462]
#define COLOR_AFormaldef SFT_parser_nodes[463]
#define COLOR_parser_nodes___AFormaldef____n_id SFT_parser_nodes[464]
#define COLOR_parser_nodes___AFormaldef____n_type SFT_parser_nodes[465]
#define INIT_TABLE_POS_AFormaldef SFT_parser_nodes[466]
#define COLOR_parser_nodes___AFormaldef___n_id SFT_parser_nodes[467]
#define COLOR_parser_nodes___AFormaldef___n_id__eq SFT_parser_nodes[468]
#define COLOR_parser_nodes___AFormaldef___n_type SFT_parser_nodes[469]
#define COLOR_parser_nodes___AFormaldef___n_type__eq SFT_parser_nodes[470]
#define ID_ASuperclass SFT_parser_nodes[471]
#define COLOR_ASuperclass SFT_parser_nodes[472]
#define COLOR_parser_nodes___ASuperclass____n_kwspecial SFT_parser_nodes[473]
#define COLOR_parser_nodes___ASuperclass____n_type SFT_parser_nodes[474]
#define INIT_TABLE_POS_ASuperclass SFT_parser_nodes[475]
#define COLOR_parser_nodes___ASuperclass___n_kwspecial SFT_parser_nodes[476]
#define COLOR_parser_nodes___ASuperclass___n_kwspecial__eq SFT_parser_nodes[477]
#define COLOR_parser_nodes___ASuperclass___n_type SFT_parser_nodes[478]
#define COLOR_parser_nodes___ASuperclass___n_type__eq SFT_parser_nodes[479]
#define ID_AAttrPropdef SFT_parser_nodes[480]
#define COLOR_AAttrPropdef SFT_parser_nodes[481]
#define COLOR_parser_nodes___AAttrPropdef____n_kwredef SFT_parser_nodes[482]
#define COLOR_parser_nodes___AAttrPropdef____n_visibility SFT_parser_nodes[483]
#define COLOR_parser_nodes___AAttrPropdef____n_kwattr SFT_parser_nodes[484]
#define COLOR_parser_nodes___AAttrPropdef____n_id SFT_parser_nodes[485]
#define COLOR_parser_nodes___AAttrPropdef____n_type SFT_parser_nodes[486]
#define COLOR_parser_nodes___AAttrPropdef____n_readable SFT_parser_nodes[487]
#define COLOR_parser_nodes___AAttrPropdef____n_writable SFT_parser_nodes[488]
#define COLOR_parser_nodes___AAttrPropdef____n_expr SFT_parser_nodes[489]
#define INIT_TABLE_POS_AAttrPropdef SFT_parser_nodes[490]
#define COLOR_parser_nodes___AAttrPropdef___n_kwredef SFT_parser_nodes[491]
#define COLOR_parser_nodes___AAttrPropdef___n_kwredef__eq SFT_parser_nodes[492]
#define COLOR_parser_nodes___AAttrPropdef___n_visibility SFT_parser_nodes[493]
#define COLOR_parser_nodes___AAttrPropdef___n_visibility__eq SFT_parser_nodes[494]
#define COLOR_parser_nodes___AAttrPropdef___n_kwattr SFT_parser_nodes[495]
#define COLOR_parser_nodes___AAttrPropdef___n_kwattr__eq SFT_parser_nodes[496]
#define COLOR_parser_nodes___AAttrPropdef___n_id SFT_parser_nodes[497]
#define COLOR_parser_nodes___AAttrPropdef___n_id__eq SFT_parser_nodes[498]
#define COLOR_parser_nodes___AAttrPropdef___n_type SFT_parser_nodes[499]
#define COLOR_parser_nodes___AAttrPropdef___n_type__eq SFT_parser_nodes[500]
#define COLOR_parser_nodes___AAttrPropdef___n_readable SFT_parser_nodes[501]
#define COLOR_parser_nodes___AAttrPropdef___n_readable__eq SFT_parser_nodes[502]
#define COLOR_parser_nodes___AAttrPropdef___n_writable SFT_parser_nodes[503]
#define COLOR_parser_nodes___AAttrPropdef___n_writable__eq SFT_parser_nodes[504]
#define COLOR_parser_nodes___AAttrPropdef___n_expr SFT_parser_nodes[505]
#define COLOR_parser_nodes___AAttrPropdef___n_expr__eq SFT_parser_nodes[506]
#define ID_AMethPropdef SFT_parser_nodes[507]
#define COLOR_AMethPropdef SFT_parser_nodes[508]
#define COLOR_parser_nodes___AMethPropdef____n_kwredef SFT_parser_nodes[509]
#define COLOR_parser_nodes___AMethPropdef____n_visibility SFT_parser_nodes[510]
#define COLOR_parser_nodes___AMethPropdef____n_methid SFT_parser_nodes[511]
#define COLOR_parser_nodes___AMethPropdef____n_signature SFT_parser_nodes[512]
#define INIT_TABLE_POS_AMethPropdef SFT_parser_nodes[513]
#define COLOR_parser_nodes___AMethPropdef___n_kwredef SFT_parser_nodes[514]
#define COLOR_parser_nodes___AMethPropdef___n_kwredef__eq SFT_parser_nodes[515]
#define COLOR_parser_nodes___AMethPropdef___n_visibility SFT_parser_nodes[516]
#define COLOR_parser_nodes___AMethPropdef___n_visibility__eq SFT_parser_nodes[517]
#define COLOR_parser_nodes___AMethPropdef___n_methid SFT_parser_nodes[518]
#define COLOR_parser_nodes___AMethPropdef___n_methid__eq SFT_parser_nodes[519]
#define COLOR_parser_nodes___AMethPropdef___n_signature SFT_parser_nodes[520]
#define COLOR_parser_nodes___AMethPropdef___n_signature__eq SFT_parser_nodes[521]
#define ID_ADeferredMethPropdef SFT_parser_nodes[522]
#define COLOR_ADeferredMethPropdef SFT_parser_nodes[523]
#define COLOR_parser_nodes___ADeferredMethPropdef____n_kwmeth SFT_parser_nodes[524]
#define INIT_TABLE_POS_ADeferredMethPropdef SFT_parser_nodes[525]
#define COLOR_parser_nodes___ADeferredMethPropdef___n_kwmeth SFT_parser_nodes[526]
#define COLOR_parser_nodes___ADeferredMethPropdef___n_kwmeth__eq SFT_parser_nodes[527]
#define ID_AInternMethPropdef SFT_parser_nodes[528]
#define COLOR_AInternMethPropdef SFT_parser_nodes[529]
#define COLOR_parser_nodes___AInternMethPropdef____n_kwmeth SFT_parser_nodes[530]
#define INIT_TABLE_POS_AInternMethPropdef SFT_parser_nodes[531]
#define COLOR_parser_nodes___AInternMethPropdef___n_kwmeth SFT_parser_nodes[532]
#define COLOR_parser_nodes___AInternMethPropdef___n_kwmeth__eq SFT_parser_nodes[533]
#define ID_AExternMethPropdef SFT_parser_nodes[534]
#define COLOR_AExternMethPropdef SFT_parser_nodes[535]
#define COLOR_parser_nodes___AExternMethPropdef____n_kwmeth SFT_parser_nodes[536]
#define COLOR_parser_nodes___AExternMethPropdef____n_extern SFT_parser_nodes[537]
#define INIT_TABLE_POS_AExternMethPropdef SFT_parser_nodes[538]
#define COLOR_parser_nodes___AExternMethPropdef___n_kwmeth SFT_parser_nodes[539]
#define COLOR_parser_nodes___AExternMethPropdef___n_kwmeth__eq SFT_parser_nodes[540]
#define COLOR_parser_nodes___AExternMethPropdef___n_extern SFT_parser_nodes[541]
#define COLOR_parser_nodes___AExternMethPropdef___n_extern__eq SFT_parser_nodes[542]
#define ID_AConcreteMethPropdef SFT_parser_nodes[543]
#define COLOR_AConcreteMethPropdef SFT_parser_nodes[544]
#define COLOR_parser_nodes___AConcreteMethPropdef____n_kwmeth SFT_parser_nodes[545]
#define COLOR_parser_nodes___AConcreteMethPropdef____n_block SFT_parser_nodes[546]
#define INIT_TABLE_POS_AConcreteMethPropdef SFT_parser_nodes[547]
#define COLOR_parser_nodes___AConcreteMethPropdef___n_kwmeth SFT_parser_nodes[548]
#define COLOR_parser_nodes___AConcreteMethPropdef___n_kwmeth__eq SFT_parser_nodes[549]
#define COLOR_parser_nodes___AConcreteMethPropdef___n_block SFT_parser_nodes[550]
#define COLOR_parser_nodes___AConcreteMethPropdef___n_block__eq SFT_parser_nodes[551]
#define ID_AConcreteInitPropdef SFT_parser_nodes[552]
#define COLOR_AConcreteInitPropdef SFT_parser_nodes[553]
#define COLOR_parser_nodes___AConcreteInitPropdef____n_kwinit SFT_parser_nodes[554]
#define INIT_TABLE_POS_AConcreteInitPropdef SFT_parser_nodes[555]
#define COLOR_parser_nodes___AConcreteInitPropdef___n_kwinit SFT_parser_nodes[556]
#define COLOR_parser_nodes___AConcreteInitPropdef___n_kwinit__eq SFT_parser_nodes[557]
#define ID_AMainMethPropdef SFT_parser_nodes[558]
#define COLOR_AMainMethPropdef SFT_parser_nodes[559]
#define INIT_TABLE_POS_AMainMethPropdef SFT_parser_nodes[560]
#define ID_ATypePropdef SFT_parser_nodes[561]
#define COLOR_ATypePropdef SFT_parser_nodes[562]
#define COLOR_parser_nodes___ATypePropdef____n_kwredef SFT_parser_nodes[563]
#define COLOR_parser_nodes___ATypePropdef____n_visibility SFT_parser_nodes[564]
#define COLOR_parser_nodes___ATypePropdef____n_kwtype SFT_parser_nodes[565]
#define COLOR_parser_nodes___ATypePropdef____n_id SFT_parser_nodes[566]
#define COLOR_parser_nodes___ATypePropdef____n_type SFT_parser_nodes[567]
#define INIT_TABLE_POS_ATypePropdef SFT_parser_nodes[568]
#define COLOR_parser_nodes___ATypePropdef___n_kwredef SFT_parser_nodes[569]
#define COLOR_parser_nodes___ATypePropdef___n_kwredef__eq SFT_parser_nodes[570]
#define COLOR_parser_nodes___ATypePropdef___n_visibility SFT_parser_nodes[571]
#define COLOR_parser_nodes___ATypePropdef___n_visibility__eq SFT_parser_nodes[572]
#define COLOR_parser_nodes___ATypePropdef___n_kwtype SFT_parser_nodes[573]
#define COLOR_parser_nodes___ATypePropdef___n_kwtype__eq SFT_parser_nodes[574]
#define COLOR_parser_nodes___ATypePropdef___n_id SFT_parser_nodes[575]
#define COLOR_parser_nodes___ATypePropdef___n_id__eq SFT_parser_nodes[576]
#define COLOR_parser_nodes___ATypePropdef___n_type SFT_parser_nodes[577]
#define COLOR_parser_nodes___ATypePropdef___n_type__eq SFT_parser_nodes[578]
#define ID_AReadAble SFT_parser_nodes[579]
#define COLOR_AReadAble SFT_parser_nodes[580]
#define COLOR_parser_nodes___AReadAble____n_kwreadable SFT_parser_nodes[581]
#define INIT_TABLE_POS_AReadAble SFT_parser_nodes[582]
#define COLOR_parser_nodes___AReadAble___n_kwreadable SFT_parser_nodes[583]
#define COLOR_parser_nodes___AReadAble___n_kwreadable__eq SFT_parser_nodes[584]
#define ID_AWriteAble SFT_parser_nodes[585]
#define COLOR_AWriteAble SFT_parser_nodes[586]
#define COLOR_parser_nodes___AWriteAble____n_kwwritable SFT_parser_nodes[587]
#define INIT_TABLE_POS_AWriteAble SFT_parser_nodes[588]
#define COLOR_parser_nodes___AWriteAble___n_kwwritable SFT_parser_nodes[589]
#define COLOR_parser_nodes___AWriteAble___n_kwwritable__eq SFT_parser_nodes[590]
#define ID_AIdMethid SFT_parser_nodes[591]
#define COLOR_AIdMethid SFT_parser_nodes[592]
#define COLOR_parser_nodes___AIdMethid____n_id SFT_parser_nodes[593]
#define INIT_TABLE_POS_AIdMethid SFT_parser_nodes[594]
#define COLOR_parser_nodes___AIdMethid___n_id SFT_parser_nodes[595]
#define COLOR_parser_nodes___AIdMethid___n_id__eq SFT_parser_nodes[596]
#define ID_APlusMethid SFT_parser_nodes[597]
#define COLOR_APlusMethid SFT_parser_nodes[598]
#define COLOR_parser_nodes___APlusMethid____n_plus SFT_parser_nodes[599]
#define INIT_TABLE_POS_APlusMethid SFT_parser_nodes[600]
#define COLOR_parser_nodes___APlusMethid___n_plus SFT_parser_nodes[601]
#define COLOR_parser_nodes___APlusMethid___n_plus__eq SFT_parser_nodes[602]
#define ID_AMinusMethid SFT_parser_nodes[603]
#define COLOR_AMinusMethid SFT_parser_nodes[604]
#define COLOR_parser_nodes___AMinusMethid____n_minus SFT_parser_nodes[605]
#define INIT_TABLE_POS_AMinusMethid SFT_parser_nodes[606]
#define COLOR_parser_nodes___AMinusMethid___n_minus SFT_parser_nodes[607]
#define COLOR_parser_nodes___AMinusMethid___n_minus__eq SFT_parser_nodes[608]
#define ID_AStarMethid SFT_parser_nodes[609]
#define COLOR_AStarMethid SFT_parser_nodes[610]
#define COLOR_parser_nodes___AStarMethid____n_star SFT_parser_nodes[611]
#define INIT_TABLE_POS_AStarMethid SFT_parser_nodes[612]
#define COLOR_parser_nodes___AStarMethid___n_star SFT_parser_nodes[613]
#define COLOR_parser_nodes___AStarMethid___n_star__eq SFT_parser_nodes[614]
#define ID_ASlashMethid SFT_parser_nodes[615]
#define COLOR_ASlashMethid SFT_parser_nodes[616]
#define COLOR_parser_nodes___ASlashMethid____n_slash SFT_parser_nodes[617]
#define INIT_TABLE_POS_ASlashMethid SFT_parser_nodes[618]
#define COLOR_parser_nodes___ASlashMethid___n_slash SFT_parser_nodes[619]
#define COLOR_parser_nodes___ASlashMethid___n_slash__eq SFT_parser_nodes[620]
#define ID_APercentMethid SFT_parser_nodes[621]
#define COLOR_APercentMethid SFT_parser_nodes[622]
#define COLOR_parser_nodes___APercentMethid____n_percent SFT_parser_nodes[623]
#define INIT_TABLE_POS_APercentMethid SFT_parser_nodes[624]
#define COLOR_parser_nodes___APercentMethid___n_percent SFT_parser_nodes[625]
#define COLOR_parser_nodes___APercentMethid___n_percent__eq SFT_parser_nodes[626]
#define ID_AEqMethid SFT_parser_nodes[627]
#define COLOR_AEqMethid SFT_parser_nodes[628]
#define COLOR_parser_nodes___AEqMethid____n_eq SFT_parser_nodes[629]
#define INIT_TABLE_POS_AEqMethid SFT_parser_nodes[630]
#define COLOR_parser_nodes___AEqMethid___n_eq SFT_parser_nodes[631]
#define COLOR_parser_nodes___AEqMethid___n_eq__eq SFT_parser_nodes[632]
#define ID_ANeMethid SFT_parser_nodes[633]
#define COLOR_ANeMethid SFT_parser_nodes[634]
#define COLOR_parser_nodes___ANeMethid____n_ne SFT_parser_nodes[635]
#define INIT_TABLE_POS_ANeMethid SFT_parser_nodes[636]
#define COLOR_parser_nodes___ANeMethid___n_ne SFT_parser_nodes[637]
#define COLOR_parser_nodes___ANeMethid___n_ne__eq SFT_parser_nodes[638]
#define ID_ALeMethid SFT_parser_nodes[639]
#define COLOR_ALeMethid SFT_parser_nodes[640]
#define COLOR_parser_nodes___ALeMethid____n_le SFT_parser_nodes[641]
#define INIT_TABLE_POS_ALeMethid SFT_parser_nodes[642]
#define COLOR_parser_nodes___ALeMethid___n_le SFT_parser_nodes[643]
#define COLOR_parser_nodes___ALeMethid___n_le__eq SFT_parser_nodes[644]
#define ID_AGeMethid SFT_parser_nodes[645]
#define COLOR_AGeMethid SFT_parser_nodes[646]
#define COLOR_parser_nodes___AGeMethid____n_ge SFT_parser_nodes[647]
#define INIT_TABLE_POS_AGeMethid SFT_parser_nodes[648]
#define COLOR_parser_nodes___AGeMethid___n_ge SFT_parser_nodes[649]
#define COLOR_parser_nodes___AGeMethid___n_ge__eq SFT_parser_nodes[650]
#define ID_ALtMethid SFT_parser_nodes[651]
#define COLOR_ALtMethid SFT_parser_nodes[652]
#define COLOR_parser_nodes___ALtMethid____n_lt SFT_parser_nodes[653]
#define INIT_TABLE_POS_ALtMethid SFT_parser_nodes[654]
#define COLOR_parser_nodes___ALtMethid___n_lt SFT_parser_nodes[655]
#define COLOR_parser_nodes___ALtMethid___n_lt__eq SFT_parser_nodes[656]
#define ID_AGtMethid SFT_parser_nodes[657]
#define COLOR_AGtMethid SFT_parser_nodes[658]
#define COLOR_parser_nodes___AGtMethid____n_gt SFT_parser_nodes[659]
#define INIT_TABLE_POS_AGtMethid SFT_parser_nodes[660]
#define COLOR_parser_nodes___AGtMethid___n_gt SFT_parser_nodes[661]
#define COLOR_parser_nodes___AGtMethid___n_gt__eq SFT_parser_nodes[662]
#define ID_ABraMethid SFT_parser_nodes[663]
#define COLOR_ABraMethid SFT_parser_nodes[664]
#define COLOR_parser_nodes___ABraMethid____n_obra SFT_parser_nodes[665]
#define COLOR_parser_nodes___ABraMethid____n_cbra SFT_parser_nodes[666]
#define INIT_TABLE_POS_ABraMethid SFT_parser_nodes[667]
#define COLOR_parser_nodes___ABraMethid___n_obra SFT_parser_nodes[668]
#define COLOR_parser_nodes___ABraMethid___n_obra__eq SFT_parser_nodes[669]
#define COLOR_parser_nodes___ABraMethid___n_cbra SFT_parser_nodes[670]
#define COLOR_parser_nodes___ABraMethid___n_cbra__eq SFT_parser_nodes[671]
#define ID_AStarshipMethid SFT_parser_nodes[672]
#define COLOR_AStarshipMethid SFT_parser_nodes[673]
#define COLOR_parser_nodes___AStarshipMethid____n_starship SFT_parser_nodes[674]
#define INIT_TABLE_POS_AStarshipMethid SFT_parser_nodes[675]
#define COLOR_parser_nodes___AStarshipMethid___n_starship SFT_parser_nodes[676]
#define COLOR_parser_nodes___AStarshipMethid___n_starship__eq SFT_parser_nodes[677]
#define ID_AAssignMethid SFT_parser_nodes[678]
#define COLOR_AAssignMethid SFT_parser_nodes[679]
#define COLOR_parser_nodes___AAssignMethid____n_id SFT_parser_nodes[680]
#define COLOR_parser_nodes___AAssignMethid____n_assign SFT_parser_nodes[681]
#define INIT_TABLE_POS_AAssignMethid SFT_parser_nodes[682]
#define COLOR_parser_nodes___AAssignMethid___n_id SFT_parser_nodes[683]
#define COLOR_parser_nodes___AAssignMethid___n_id__eq SFT_parser_nodes[684]
#define COLOR_parser_nodes___AAssignMethid___n_assign SFT_parser_nodes[685]
#define COLOR_parser_nodes___AAssignMethid___n_assign__eq SFT_parser_nodes[686]
#define ID_ABraassignMethid SFT_parser_nodes[687]
#define COLOR_ABraassignMethid SFT_parser_nodes[688]
#define COLOR_parser_nodes___ABraassignMethid____n_obra SFT_parser_nodes[689]
#define COLOR_parser_nodes___ABraassignMethid____n_cbra SFT_parser_nodes[690]
#define COLOR_parser_nodes___ABraassignMethid____n_assign SFT_parser_nodes[691]
#define INIT_TABLE_POS_ABraassignMethid SFT_parser_nodes[692]
#define COLOR_parser_nodes___ABraassignMethid___n_obra SFT_parser_nodes[693]
#define COLOR_parser_nodes___ABraassignMethid___n_obra__eq SFT_parser_nodes[694]
#define COLOR_parser_nodes___ABraassignMethid___n_cbra SFT_parser_nodes[695]
#define COLOR_parser_nodes___ABraassignMethid___n_cbra__eq SFT_parser_nodes[696]
#define COLOR_parser_nodes___ABraassignMethid___n_assign SFT_parser_nodes[697]
#define COLOR_parser_nodes___ABraassignMethid___n_assign__eq SFT_parser_nodes[698]
#define ID_ASignature SFT_parser_nodes[699]
#define COLOR_ASignature SFT_parser_nodes[700]
#define COLOR_parser_nodes___ASignature____n_params SFT_parser_nodes[701]
#define COLOR_parser_nodes___ASignature____n_type SFT_parser_nodes[702]
#define INIT_TABLE_POS_ASignature SFT_parser_nodes[703]
#define COLOR_parser_nodes___ASignature___n_params SFT_parser_nodes[704]
#define COLOR_parser_nodes___ASignature___n_params__eq SFT_parser_nodes[705]
#define COLOR_parser_nodes___ASignature___n_type SFT_parser_nodes[706]
#define COLOR_parser_nodes___ASignature___n_type__eq SFT_parser_nodes[707]
#define ID_AParam SFT_parser_nodes[708]
#define COLOR_AParam SFT_parser_nodes[709]
#define COLOR_parser_nodes___AParam____n_dotdotdot SFT_parser_nodes[710]
#define INIT_TABLE_POS_AParam SFT_parser_nodes[711]
#define COLOR_parser_nodes___AParam___n_dotdotdot SFT_parser_nodes[712]
#define COLOR_parser_nodes___AParam___n_dotdotdot__eq SFT_parser_nodes[713]
#define ID_AType SFT_parser_nodes[714]
#define COLOR_AType SFT_parser_nodes[715]
#define COLOR_parser_nodes___AType____n_id SFT_parser_nodes[716]
#define COLOR_parser_nodes___AType____n_types SFT_parser_nodes[717]
#define INIT_TABLE_POS_AType SFT_parser_nodes[718]
#define COLOR_parser_nodes___AType___n_id SFT_parser_nodes[719]
#define COLOR_parser_nodes___AType___n_id__eq SFT_parser_nodes[720]
#define COLOR_parser_nodes___AType___n_types SFT_parser_nodes[721]
#define COLOR_parser_nodes___AType___n_types__eq SFT_parser_nodes[722]
#define ID_ABlockExpr SFT_parser_nodes[723]
#define COLOR_ABlockExpr SFT_parser_nodes[724]
#define COLOR_parser_nodes___ABlockExpr____n_expr SFT_parser_nodes[725]
#define INIT_TABLE_POS_ABlockExpr SFT_parser_nodes[726]
#define COLOR_parser_nodes___ABlockExpr___n_expr SFT_parser_nodes[727]
#define COLOR_parser_nodes___ABlockExpr___n_expr__eq SFT_parser_nodes[728]
#define ID_AVardeclExpr SFT_parser_nodes[729]
#define COLOR_AVardeclExpr SFT_parser_nodes[730]
#define COLOR_parser_nodes___AVardeclExpr____n_kwvar SFT_parser_nodes[731]
#define COLOR_parser_nodes___AVardeclExpr____n_id SFT_parser_nodes[732]
#define COLOR_parser_nodes___AVardeclExpr____n_type SFT_parser_nodes[733]
#define COLOR_parser_nodes___AVardeclExpr____n_assign SFT_parser_nodes[734]
#define COLOR_parser_nodes___AVardeclExpr____n_expr SFT_parser_nodes[735]
#define INIT_TABLE_POS_AVardeclExpr SFT_parser_nodes[736]
#define COLOR_parser_nodes___AVardeclExpr___n_kwvar SFT_parser_nodes[737]
#define COLOR_parser_nodes___AVardeclExpr___n_kwvar__eq SFT_parser_nodes[738]
#define COLOR_parser_nodes___AVardeclExpr___n_id SFT_parser_nodes[739]
#define COLOR_parser_nodes___AVardeclExpr___n_id__eq SFT_parser_nodes[740]
#define COLOR_parser_nodes___AVardeclExpr___n_type SFT_parser_nodes[741]
#define COLOR_parser_nodes___AVardeclExpr___n_type__eq SFT_parser_nodes[742]
#define COLOR_parser_nodes___AVardeclExpr___n_assign SFT_parser_nodes[743]
#define COLOR_parser_nodes___AVardeclExpr___n_assign__eq SFT_parser_nodes[744]
#define COLOR_parser_nodes___AVardeclExpr___n_expr SFT_parser_nodes[745]
#define COLOR_parser_nodes___AVardeclExpr___n_expr__eq SFT_parser_nodes[746]
#define ID_AReturnExpr SFT_parser_nodes[747]
#define COLOR_AReturnExpr SFT_parser_nodes[748]
#define COLOR_parser_nodes___AReturnExpr____n_kwreturn SFT_parser_nodes[749]
#define COLOR_parser_nodes___AReturnExpr____n_expr SFT_parser_nodes[750]
#define INIT_TABLE_POS_AReturnExpr SFT_parser_nodes[751]
#define COLOR_parser_nodes___AReturnExpr___n_kwreturn SFT_parser_nodes[752]
#define COLOR_parser_nodes___AReturnExpr___n_kwreturn__eq SFT_parser_nodes[753]
#define COLOR_parser_nodes___AReturnExpr___n_expr SFT_parser_nodes[754]
#define COLOR_parser_nodes___AReturnExpr___n_expr__eq SFT_parser_nodes[755]
#define ID_ABreakExpr SFT_parser_nodes[756]
#define COLOR_ABreakExpr SFT_parser_nodes[757]
#define COLOR_parser_nodes___ABreakExpr____n_kwbreak SFT_parser_nodes[758]
#define INIT_TABLE_POS_ABreakExpr SFT_parser_nodes[759]
#define COLOR_parser_nodes___ABreakExpr___n_kwbreak SFT_parser_nodes[760]
#define COLOR_parser_nodes___ABreakExpr___n_kwbreak__eq SFT_parser_nodes[761]
#define ID_AAbortExpr SFT_parser_nodes[762]
#define COLOR_AAbortExpr SFT_parser_nodes[763]
#define COLOR_parser_nodes___AAbortExpr____n_kwabort SFT_parser_nodes[764]
#define INIT_TABLE_POS_AAbortExpr SFT_parser_nodes[765]
#define COLOR_parser_nodes___AAbortExpr___n_kwabort SFT_parser_nodes[766]
#define COLOR_parser_nodes___AAbortExpr___n_kwabort__eq SFT_parser_nodes[767]
#define ID_AContinueExpr SFT_parser_nodes[768]
#define COLOR_AContinueExpr SFT_parser_nodes[769]
#define COLOR_parser_nodes___AContinueExpr____n_kwcontinue SFT_parser_nodes[770]
#define INIT_TABLE_POS_AContinueExpr SFT_parser_nodes[771]
#define COLOR_parser_nodes___AContinueExpr___n_kwcontinue SFT_parser_nodes[772]
#define COLOR_parser_nodes___AContinueExpr___n_kwcontinue__eq SFT_parser_nodes[773]
#define ID_ADoExpr SFT_parser_nodes[774]
#define COLOR_ADoExpr SFT_parser_nodes[775]
#define COLOR_parser_nodes___ADoExpr____n_kwdo SFT_parser_nodes[776]
#define COLOR_parser_nodes___ADoExpr____n_block SFT_parser_nodes[777]
#define INIT_TABLE_POS_ADoExpr SFT_parser_nodes[778]
#define COLOR_parser_nodes___ADoExpr___n_kwdo SFT_parser_nodes[779]
#define COLOR_parser_nodes___ADoExpr___n_kwdo__eq SFT_parser_nodes[780]
#define COLOR_parser_nodes___ADoExpr___n_block SFT_parser_nodes[781]
#define COLOR_parser_nodes___ADoExpr___n_block__eq SFT_parser_nodes[782]
#define ID_AIfExpr SFT_parser_nodes[783]
#define COLOR_AIfExpr SFT_parser_nodes[784]
#define COLOR_parser_nodes___AIfExpr____n_kwif SFT_parser_nodes[785]
#define COLOR_parser_nodes___AIfExpr____n_expr SFT_parser_nodes[786]
#define COLOR_parser_nodes___AIfExpr____n_then SFT_parser_nodes[787]
#define COLOR_parser_nodes___AIfExpr____n_else SFT_parser_nodes[788]
#define INIT_TABLE_POS_AIfExpr SFT_parser_nodes[789]
#define COLOR_parser_nodes___AIfExpr___n_kwif SFT_parser_nodes[790]
#define COLOR_parser_nodes___AIfExpr___n_kwif__eq SFT_parser_nodes[791]
#define COLOR_parser_nodes___AIfExpr___n_expr SFT_parser_nodes[792]
#define COLOR_parser_nodes___AIfExpr___n_expr__eq SFT_parser_nodes[793]
#define COLOR_parser_nodes___AIfExpr___n_then SFT_parser_nodes[794]
#define COLOR_parser_nodes___AIfExpr___n_then__eq SFT_parser_nodes[795]
#define COLOR_parser_nodes___AIfExpr___n_else SFT_parser_nodes[796]
#define COLOR_parser_nodes___AIfExpr___n_else__eq SFT_parser_nodes[797]
#define ID_AIfexprExpr SFT_parser_nodes[798]
#define COLOR_AIfexprExpr SFT_parser_nodes[799]
#define COLOR_parser_nodes___AIfexprExpr____n_kwif SFT_parser_nodes[800]
#define COLOR_parser_nodes___AIfexprExpr____n_expr SFT_parser_nodes[801]
#define COLOR_parser_nodes___AIfexprExpr____n_kwthen SFT_parser_nodes[802]
#define COLOR_parser_nodes___AIfexprExpr____n_then SFT_parser_nodes[803]
#define COLOR_parser_nodes___AIfexprExpr____n_kwelse SFT_parser_nodes[804]
#define COLOR_parser_nodes___AIfexprExpr____n_else SFT_parser_nodes[805]
#define INIT_TABLE_POS_AIfexprExpr SFT_parser_nodes[806]
#define COLOR_parser_nodes___AIfexprExpr___n_kwif SFT_parser_nodes[807]
#define COLOR_parser_nodes___AIfexprExpr___n_kwif__eq SFT_parser_nodes[808]
#define COLOR_parser_nodes___AIfexprExpr___n_expr SFT_parser_nodes[809]
#define COLOR_parser_nodes___AIfexprExpr___n_expr__eq SFT_parser_nodes[810]
#define COLOR_parser_nodes___AIfexprExpr___n_kwthen SFT_parser_nodes[811]
#define COLOR_parser_nodes___AIfexprExpr___n_kwthen__eq SFT_parser_nodes[812]
#define COLOR_parser_nodes___AIfexprExpr___n_then SFT_parser_nodes[813]
#define COLOR_parser_nodes___AIfexprExpr___n_then__eq SFT_parser_nodes[814]
#define COLOR_parser_nodes___AIfexprExpr___n_kwelse SFT_parser_nodes[815]
#define COLOR_parser_nodes___AIfexprExpr___n_kwelse__eq SFT_parser_nodes[816]
#define COLOR_parser_nodes___AIfexprExpr___n_else SFT_parser_nodes[817]
#define COLOR_parser_nodes___AIfexprExpr___n_else__eq SFT_parser_nodes[818]
#define ID_AWhileExpr SFT_parser_nodes[819]
#define COLOR_AWhileExpr SFT_parser_nodes[820]
#define COLOR_parser_nodes___AWhileExpr____n_kwwhile SFT_parser_nodes[821]
#define COLOR_parser_nodes___AWhileExpr____n_expr SFT_parser_nodes[822]
#define COLOR_parser_nodes___AWhileExpr____n_kwdo SFT_parser_nodes[823]
#define COLOR_parser_nodes___AWhileExpr____n_block SFT_parser_nodes[824]
#define INIT_TABLE_POS_AWhileExpr SFT_parser_nodes[825]
#define COLOR_parser_nodes___AWhileExpr___n_kwwhile SFT_parser_nodes[826]
#define COLOR_parser_nodes___AWhileExpr___n_kwwhile__eq SFT_parser_nodes[827]
#define COLOR_parser_nodes___AWhileExpr___n_expr SFT_parser_nodes[828]
#define COLOR_parser_nodes___AWhileExpr___n_expr__eq SFT_parser_nodes[829]
#define COLOR_parser_nodes___AWhileExpr___n_kwdo SFT_parser_nodes[830]
#define COLOR_parser_nodes___AWhileExpr___n_kwdo__eq SFT_parser_nodes[831]
#define COLOR_parser_nodes___AWhileExpr___n_block SFT_parser_nodes[832]
#define COLOR_parser_nodes___AWhileExpr___n_block__eq SFT_parser_nodes[833]
#define ID_AForExpr SFT_parser_nodes[834]
#define COLOR_AForExpr SFT_parser_nodes[835]
#define COLOR_parser_nodes___AForExpr____n_vardecl SFT_parser_nodes[836]
#define COLOR_parser_nodes___AForExpr____n_kwdo SFT_parser_nodes[837]
#define COLOR_parser_nodes___AForExpr____n_block SFT_parser_nodes[838]
#define INIT_TABLE_POS_AForExpr SFT_parser_nodes[839]
#define COLOR_parser_nodes___AForExpr___n_vardecl SFT_parser_nodes[840]
#define COLOR_parser_nodes___AForExpr___n_vardecl__eq SFT_parser_nodes[841]
#define COLOR_parser_nodes___AForExpr___n_kwdo SFT_parser_nodes[842]
#define COLOR_parser_nodes___AForExpr___n_kwdo__eq SFT_parser_nodes[843]
#define COLOR_parser_nodes___AForExpr___n_block SFT_parser_nodes[844]
#define COLOR_parser_nodes___AForExpr___n_block__eq SFT_parser_nodes[845]
#define ID_AForVardeclExpr SFT_parser_nodes[846]
#define COLOR_AForVardeclExpr SFT_parser_nodes[847]
#define COLOR_parser_nodes___AForVardeclExpr____n_kwfor SFT_parser_nodes[848]
#define COLOR_parser_nodes___AForVardeclExpr____n_id SFT_parser_nodes[849]
#define COLOR_parser_nodes___AForVardeclExpr____n_expr SFT_parser_nodes[850]
#define INIT_TABLE_POS_AForVardeclExpr SFT_parser_nodes[851]
#define COLOR_parser_nodes___AForVardeclExpr___n_kwfor SFT_parser_nodes[852]
#define COLOR_parser_nodes___AForVardeclExpr___n_kwfor__eq SFT_parser_nodes[853]
#define COLOR_parser_nodes___AForVardeclExpr___n_id SFT_parser_nodes[854]
#define COLOR_parser_nodes___AForVardeclExpr___n_id__eq SFT_parser_nodes[855]
#define COLOR_parser_nodes___AForVardeclExpr___n_expr SFT_parser_nodes[856]
#define COLOR_parser_nodes___AForVardeclExpr___n_expr__eq SFT_parser_nodes[857]
#define ID_AAssertExpr SFT_parser_nodes[858]
#define COLOR_AAssertExpr SFT_parser_nodes[859]
#define COLOR_parser_nodes___AAssertExpr____n_kwassert SFT_parser_nodes[860]
#define COLOR_parser_nodes___AAssertExpr____n_id SFT_parser_nodes[861]
#define COLOR_parser_nodes___AAssertExpr____n_expr SFT_parser_nodes[862]
#define INIT_TABLE_POS_AAssertExpr SFT_parser_nodes[863]
#define COLOR_parser_nodes___AAssertExpr___n_kwassert SFT_parser_nodes[864]
#define COLOR_parser_nodes___AAssertExpr___n_kwassert__eq SFT_parser_nodes[865]
#define COLOR_parser_nodes___AAssertExpr___n_id SFT_parser_nodes[866]
#define COLOR_parser_nodes___AAssertExpr___n_id__eq SFT_parser_nodes[867]
#define COLOR_parser_nodes___AAssertExpr___n_expr SFT_parser_nodes[868]
#define COLOR_parser_nodes___AAssertExpr___n_expr__eq SFT_parser_nodes[869]
#define ID_AAssignFormExpr SFT_parser_nodes[870]
#define COLOR_AAssignFormExpr SFT_parser_nodes[871]
#define COLOR_parser_nodes___AAssignFormExpr____n_assign SFT_parser_nodes[872]
#define COLOR_parser_nodes___AAssignFormExpr____n_value SFT_parser_nodes[873]
#define INIT_TABLE_POS_AAssignFormExpr SFT_parser_nodes[874]
#define COLOR_parser_nodes___AAssignFormExpr___n_assign SFT_parser_nodes[875]
#define COLOR_parser_nodes___AAssignFormExpr___n_assign__eq SFT_parser_nodes[876]
#define COLOR_parser_nodes___AAssignFormExpr___n_value SFT_parser_nodes[877]
#define COLOR_parser_nodes___AAssignFormExpr___n_value__eq SFT_parser_nodes[878]
#define ID_AReassignFormExpr SFT_parser_nodes[879]
#define COLOR_AReassignFormExpr SFT_parser_nodes[880]
#define COLOR_parser_nodes___AReassignFormExpr____n_assign_op SFT_parser_nodes[881]
#define COLOR_parser_nodes___AReassignFormExpr____n_value SFT_parser_nodes[882]
#define INIT_TABLE_POS_AReassignFormExpr SFT_parser_nodes[883]
#define COLOR_parser_nodes___AReassignFormExpr___n_assign_op SFT_parser_nodes[884]
#define COLOR_parser_nodes___AReassignFormExpr___n_assign_op__eq SFT_parser_nodes[885]
#define COLOR_parser_nodes___AReassignFormExpr___n_value SFT_parser_nodes[886]
#define COLOR_parser_nodes___AReassignFormExpr___n_value__eq SFT_parser_nodes[887]
#define ID_AOnceExpr SFT_parser_nodes[888]
#define COLOR_AOnceExpr SFT_parser_nodes[889]
#define COLOR_parser_nodes___AOnceExpr____n_kwonce SFT_parser_nodes[890]
#define INIT_TABLE_POS_AOnceExpr SFT_parser_nodes[891]
#define COLOR_parser_nodes___AOnceExpr___n_kwonce SFT_parser_nodes[892]
#define COLOR_parser_nodes___AOnceExpr___n_kwonce__eq SFT_parser_nodes[893]
#define ID_ASendExpr SFT_parser_nodes[894]
#define COLOR_ASendExpr SFT_parser_nodes[895]
#define COLOR_parser_nodes___ASendExpr____n_expr SFT_parser_nodes[896]
#define INIT_TABLE_POS_ASendExpr SFT_parser_nodes[897]
#define COLOR_parser_nodes___ASendExpr___n_expr SFT_parser_nodes[898]
#define COLOR_parser_nodes___ASendExpr___n_expr__eq SFT_parser_nodes[899]
#define ID_ABinopExpr SFT_parser_nodes[900]
#define COLOR_ABinopExpr SFT_parser_nodes[901]
#define COLOR_parser_nodes___ABinopExpr____n_expr2 SFT_parser_nodes[902]
#define INIT_TABLE_POS_ABinopExpr SFT_parser_nodes[903]
#define COLOR_parser_nodes___ABinopExpr___n_expr2 SFT_parser_nodes[904]
#define COLOR_parser_nodes___ABinopExpr___n_expr2__eq SFT_parser_nodes[905]
#define ID_ABoolExpr SFT_parser_nodes[906]
#define COLOR_ABoolExpr SFT_parser_nodes[907]
#define INIT_TABLE_POS_ABoolExpr SFT_parser_nodes[908]
#define ID_AOrExpr SFT_parser_nodes[909]
#define COLOR_AOrExpr SFT_parser_nodes[910]
#define COLOR_parser_nodes___AOrExpr____n_expr SFT_parser_nodes[911]
#define COLOR_parser_nodes___AOrExpr____n_expr2 SFT_parser_nodes[912]
#define INIT_TABLE_POS_AOrExpr SFT_parser_nodes[913]
#define COLOR_parser_nodes___AOrExpr___n_expr SFT_parser_nodes[914]
#define COLOR_parser_nodes___AOrExpr___n_expr__eq SFT_parser_nodes[915]
#define COLOR_parser_nodes___AOrExpr___n_expr2 SFT_parser_nodes[916]
#define COLOR_parser_nodes___AOrExpr___n_expr2__eq SFT_parser_nodes[917]
#define ID_AAndExpr SFT_parser_nodes[918]
#define COLOR_AAndExpr SFT_parser_nodes[919]
#define COLOR_parser_nodes___AAndExpr____n_expr SFT_parser_nodes[920]
#define COLOR_parser_nodes___AAndExpr____n_expr2 SFT_parser_nodes[921]
#define INIT_TABLE_POS_AAndExpr SFT_parser_nodes[922]
#define COLOR_parser_nodes___AAndExpr___n_expr SFT_parser_nodes[923]
#define COLOR_parser_nodes___AAndExpr___n_expr__eq SFT_parser_nodes[924]
#define COLOR_parser_nodes___AAndExpr___n_expr2 SFT_parser_nodes[925]
#define COLOR_parser_nodes___AAndExpr___n_expr2__eq SFT_parser_nodes[926]
#define ID_ANotExpr SFT_parser_nodes[927]
#define COLOR_ANotExpr SFT_parser_nodes[928]
#define COLOR_parser_nodes___ANotExpr____n_kwnot SFT_parser_nodes[929]
#define COLOR_parser_nodes___ANotExpr____n_expr SFT_parser_nodes[930]
#define INIT_TABLE_POS_ANotExpr SFT_parser_nodes[931]
#define COLOR_parser_nodes___ANotExpr___n_kwnot SFT_parser_nodes[932]
#define COLOR_parser_nodes___ANotExpr___n_kwnot__eq SFT_parser_nodes[933]
#define COLOR_parser_nodes___ANotExpr___n_expr SFT_parser_nodes[934]
#define COLOR_parser_nodes___ANotExpr___n_expr__eq SFT_parser_nodes[935]
#define ID_AEqExpr SFT_parser_nodes[936]
#define COLOR_AEqExpr SFT_parser_nodes[937]
#define INIT_TABLE_POS_AEqExpr SFT_parser_nodes[938]
#define ID_AEeExpr SFT_parser_nodes[939]
#define COLOR_AEeExpr SFT_parser_nodes[940]
#define COLOR_parser_nodes___AEeExpr____n_expr SFT_parser_nodes[941]
#define COLOR_parser_nodes___AEeExpr____n_expr2 SFT_parser_nodes[942]
#define INIT_TABLE_POS_AEeExpr SFT_parser_nodes[943]
#define COLOR_parser_nodes___AEeExpr___n_expr SFT_parser_nodes[944]
#define COLOR_parser_nodes___AEeExpr___n_expr__eq SFT_parser_nodes[945]
#define COLOR_parser_nodes___AEeExpr___n_expr2 SFT_parser_nodes[946]
#define COLOR_parser_nodes___AEeExpr___n_expr2__eq SFT_parser_nodes[947]
#define ID_ANeExpr SFT_parser_nodes[948]
#define COLOR_ANeExpr SFT_parser_nodes[949]
#define INIT_TABLE_POS_ANeExpr SFT_parser_nodes[950]
#define ID_ALtExpr SFT_parser_nodes[951]
#define COLOR_ALtExpr SFT_parser_nodes[952]
#define INIT_TABLE_POS_ALtExpr SFT_parser_nodes[953]
#define ID_ALeExpr SFT_parser_nodes[954]
#define COLOR_ALeExpr SFT_parser_nodes[955]
#define INIT_TABLE_POS_ALeExpr SFT_parser_nodes[956]
#define ID_AGtExpr SFT_parser_nodes[957]
#define COLOR_AGtExpr SFT_parser_nodes[958]
#define INIT_TABLE_POS_AGtExpr SFT_parser_nodes[959]
#define ID_AGeExpr SFT_parser_nodes[960]
#define COLOR_AGeExpr SFT_parser_nodes[961]
#define INIT_TABLE_POS_AGeExpr SFT_parser_nodes[962]
#define ID_AIsaExpr SFT_parser_nodes[963]
#define COLOR_AIsaExpr SFT_parser_nodes[964]
#define COLOR_parser_nodes___AIsaExpr____n_expr SFT_parser_nodes[965]
#define COLOR_parser_nodes___AIsaExpr____n_type SFT_parser_nodes[966]
#define INIT_TABLE_POS_AIsaExpr SFT_parser_nodes[967]
#define COLOR_parser_nodes___AIsaExpr___n_expr SFT_parser_nodes[968]
#define COLOR_parser_nodes___AIsaExpr___n_expr__eq SFT_parser_nodes[969]
#define COLOR_parser_nodes___AIsaExpr___n_type SFT_parser_nodes[970]
#define COLOR_parser_nodes___AIsaExpr___n_type__eq SFT_parser_nodes[971]
#define ID_APlusExpr SFT_parser_nodes[972]
#define COLOR_APlusExpr SFT_parser_nodes[973]
#define INIT_TABLE_POS_APlusExpr SFT_parser_nodes[974]
#define ID_AMinusExpr SFT_parser_nodes[975]
#define COLOR_AMinusExpr SFT_parser_nodes[976]
#define INIT_TABLE_POS_AMinusExpr SFT_parser_nodes[977]
#define ID_AStarshipExpr SFT_parser_nodes[978]
#define COLOR_AStarshipExpr SFT_parser_nodes[979]
#define INIT_TABLE_POS_AStarshipExpr SFT_parser_nodes[980]
#define ID_AStarExpr SFT_parser_nodes[981]
#define COLOR_AStarExpr SFT_parser_nodes[982]
#define INIT_TABLE_POS_AStarExpr SFT_parser_nodes[983]
#define ID_ASlashExpr SFT_parser_nodes[984]
#define COLOR_ASlashExpr SFT_parser_nodes[985]
#define INIT_TABLE_POS_ASlashExpr SFT_parser_nodes[986]
#define ID_APercentExpr SFT_parser_nodes[987]
#define COLOR_APercentExpr SFT_parser_nodes[988]
#define INIT_TABLE_POS_APercentExpr SFT_parser_nodes[989]
#define ID_AUminusExpr SFT_parser_nodes[990]
#define COLOR_AUminusExpr SFT_parser_nodes[991]
#define COLOR_parser_nodes___AUminusExpr____n_minus SFT_parser_nodes[992]
#define INIT_TABLE_POS_AUminusExpr SFT_parser_nodes[993]
#define COLOR_parser_nodes___AUminusExpr___n_minus SFT_parser_nodes[994]
#define COLOR_parser_nodes___AUminusExpr___n_minus__eq SFT_parser_nodes[995]
#define ID_ANewExpr SFT_parser_nodes[996]
#define COLOR_ANewExpr SFT_parser_nodes[997]
#define COLOR_parser_nodes___ANewExpr____n_kwnew SFT_parser_nodes[998]
#define COLOR_parser_nodes___ANewExpr____n_type SFT_parser_nodes[999]
#define COLOR_parser_nodes___ANewExpr____n_id SFT_parser_nodes[1000]
#define COLOR_parser_nodes___ANewExpr____n_args SFT_parser_nodes[1001]
#define INIT_TABLE_POS_ANewExpr SFT_parser_nodes[1002]
#define COLOR_parser_nodes___ANewExpr___n_kwnew SFT_parser_nodes[1003]
#define COLOR_parser_nodes___ANewExpr___n_kwnew__eq SFT_parser_nodes[1004]
#define COLOR_parser_nodes___ANewExpr___n_type SFT_parser_nodes[1005]
#define COLOR_parser_nodes___ANewExpr___n_type__eq SFT_parser_nodes[1006]
#define COLOR_parser_nodes___ANewExpr___n_id SFT_parser_nodes[1007]
#define COLOR_parser_nodes___ANewExpr___n_id__eq SFT_parser_nodes[1008]
#define COLOR_parser_nodes___ANewExpr___n_args SFT_parser_nodes[1009]
#define COLOR_parser_nodes___ANewExpr___n_args__eq SFT_parser_nodes[1010]
#define ID_AAttrFormExpr SFT_parser_nodes[1011]
#define COLOR_AAttrFormExpr SFT_parser_nodes[1012]
#define COLOR_parser_nodes___AAttrFormExpr____n_expr SFT_parser_nodes[1013]
#define COLOR_parser_nodes___AAttrFormExpr____n_id SFT_parser_nodes[1014]
#define INIT_TABLE_POS_AAttrFormExpr SFT_parser_nodes[1015]
#define COLOR_parser_nodes___AAttrFormExpr___n_expr SFT_parser_nodes[1016]
#define COLOR_parser_nodes___AAttrFormExpr___n_expr__eq SFT_parser_nodes[1017]
#define COLOR_parser_nodes___AAttrFormExpr___n_id SFT_parser_nodes[1018]
#define COLOR_parser_nodes___AAttrFormExpr___n_id__eq SFT_parser_nodes[1019]
#define ID_AAttrExpr SFT_parser_nodes[1020]
#define COLOR_AAttrExpr SFT_parser_nodes[1021]
#define INIT_TABLE_POS_AAttrExpr SFT_parser_nodes[1022]
#define ID_AAttrAssignExpr SFT_parser_nodes[1023]
#define COLOR_AAttrAssignExpr SFT_parser_nodes[1024]
#define INIT_TABLE_POS_AAttrAssignExpr SFT_parser_nodes[1025]
#define ID_ACallFormExpr SFT_parser_nodes[1026]
#define COLOR_ACallFormExpr SFT_parser_nodes[1027]
#define COLOR_parser_nodes___ACallFormExpr____n_id SFT_parser_nodes[1028]
#define COLOR_parser_nodes___ACallFormExpr____n_args SFT_parser_nodes[1029]
#define INIT_TABLE_POS_ACallFormExpr SFT_parser_nodes[1030]
#define COLOR_parser_nodes___ACallFormExpr___n_id SFT_parser_nodes[1031]
#define COLOR_parser_nodes___ACallFormExpr___n_id__eq SFT_parser_nodes[1032]
#define COLOR_parser_nodes___ACallFormExpr___n_args SFT_parser_nodes[1033]
#define COLOR_parser_nodes___ACallFormExpr___n_args__eq SFT_parser_nodes[1034]
#define ID_AAttrReassignExpr SFT_parser_nodes[1035]
#define COLOR_AAttrReassignExpr SFT_parser_nodes[1036]
#define INIT_TABLE_POS_AAttrReassignExpr SFT_parser_nodes[1037]
#define ID_ACallExpr SFT_parser_nodes[1038]
#define COLOR_ACallExpr SFT_parser_nodes[1039]
#define INIT_TABLE_POS_ACallExpr SFT_parser_nodes[1040]
#define ID_ACallAssignExpr SFT_parser_nodes[1041]
#define COLOR_ACallAssignExpr SFT_parser_nodes[1042]
#define INIT_TABLE_POS_ACallAssignExpr SFT_parser_nodes[1043]
#define ID_ACallReassignExpr SFT_parser_nodes[1044]
#define COLOR_ACallReassignExpr SFT_parser_nodes[1045]
#define INIT_TABLE_POS_ACallReassignExpr SFT_parser_nodes[1046]
#define ID_ASuperExpr SFT_parser_nodes[1047]
#define COLOR_ASuperExpr SFT_parser_nodes[1048]
#define COLOR_parser_nodes___ASuperExpr____n_qualified SFT_parser_nodes[1049]
#define COLOR_parser_nodes___ASuperExpr____n_kwsuper SFT_parser_nodes[1050]
#define COLOR_parser_nodes___ASuperExpr____n_args SFT_parser_nodes[1051]
#define INIT_TABLE_POS_ASuperExpr SFT_parser_nodes[1052]
#define COLOR_parser_nodes___ASuperExpr___n_qualified SFT_parser_nodes[1053]
#define COLOR_parser_nodes___ASuperExpr___n_qualified__eq SFT_parser_nodes[1054]
#define COLOR_parser_nodes___ASuperExpr___n_kwsuper SFT_parser_nodes[1055]
#define COLOR_parser_nodes___ASuperExpr___n_kwsuper__eq SFT_parser_nodes[1056]
#define COLOR_parser_nodes___ASuperExpr___n_args SFT_parser_nodes[1057]
#define COLOR_parser_nodes___ASuperExpr___n_args__eq SFT_parser_nodes[1058]
#define ID_AInitExpr SFT_parser_nodes[1059]
#define COLOR_AInitExpr SFT_parser_nodes[1060]
#define COLOR_parser_nodes___AInitExpr____n_kwinit SFT_parser_nodes[1061]
#define COLOR_parser_nodes___AInitExpr____n_args SFT_parser_nodes[1062]
#define INIT_TABLE_POS_AInitExpr SFT_parser_nodes[1063]
#define COLOR_parser_nodes___AInitExpr___n_kwinit SFT_parser_nodes[1064]
#define COLOR_parser_nodes___AInitExpr___n_kwinit__eq SFT_parser_nodes[1065]
#define COLOR_parser_nodes___AInitExpr___n_args SFT_parser_nodes[1066]
#define COLOR_parser_nodes___AInitExpr___n_args__eq SFT_parser_nodes[1067]
#define ID_ABraFormExpr SFT_parser_nodes[1068]
#define COLOR_ABraFormExpr SFT_parser_nodes[1069]
#define COLOR_parser_nodes___ABraFormExpr____n_args SFT_parser_nodes[1070]
#define INIT_TABLE_POS_ABraFormExpr SFT_parser_nodes[1071]
#define COLOR_parser_nodes___ABraFormExpr___n_args SFT_parser_nodes[1072]
#define COLOR_parser_nodes___ABraFormExpr___n_args__eq SFT_parser_nodes[1073]
#define ID_ABraExpr SFT_parser_nodes[1074]
#define COLOR_ABraExpr SFT_parser_nodes[1075]
#define INIT_TABLE_POS_ABraExpr SFT_parser_nodes[1076]
#define ID_ABraAssignExpr SFT_parser_nodes[1077]
#define COLOR_ABraAssignExpr SFT_parser_nodes[1078]
#define INIT_TABLE_POS_ABraAssignExpr SFT_parser_nodes[1079]
#define ID_AVarFormExpr SFT_parser_nodes[1080]
#define COLOR_AVarFormExpr SFT_parser_nodes[1081]
#define COLOR_parser_nodes___AVarFormExpr____n_id SFT_parser_nodes[1082]
#define INIT_TABLE_POS_AVarFormExpr SFT_parser_nodes[1083]
#define COLOR_parser_nodes___AVarFormExpr___n_id SFT_parser_nodes[1084]
#define COLOR_parser_nodes___AVarFormExpr___n_id__eq SFT_parser_nodes[1085]
#define ID_ABraReassignExpr SFT_parser_nodes[1086]
#define COLOR_ABraReassignExpr SFT_parser_nodes[1087]
#define INIT_TABLE_POS_ABraReassignExpr SFT_parser_nodes[1088]
#define ID_AVarExpr SFT_parser_nodes[1089]
#define COLOR_AVarExpr SFT_parser_nodes[1090]
#define INIT_TABLE_POS_AVarExpr SFT_parser_nodes[1091]
#define ID_AVarAssignExpr SFT_parser_nodes[1092]
#define COLOR_AVarAssignExpr SFT_parser_nodes[1093]
#define INIT_TABLE_POS_AVarAssignExpr SFT_parser_nodes[1094]
#define ID_AVarReassignExpr SFT_parser_nodes[1095]
#define COLOR_AVarReassignExpr SFT_parser_nodes[1096]
#define INIT_TABLE_POS_AVarReassignExpr SFT_parser_nodes[1097]
#define ID_ARangeExpr SFT_parser_nodes[1098]
#define COLOR_ARangeExpr SFT_parser_nodes[1099]
#define COLOR_parser_nodes___ARangeExpr____n_expr SFT_parser_nodes[1100]
#define COLOR_parser_nodes___ARangeExpr____n_expr2 SFT_parser_nodes[1101]
#define INIT_TABLE_POS_ARangeExpr SFT_parser_nodes[1102]
#define COLOR_parser_nodes___ARangeExpr___n_expr SFT_parser_nodes[1103]
#define COLOR_parser_nodes___ARangeExpr___n_expr__eq SFT_parser_nodes[1104]
#define COLOR_parser_nodes___ARangeExpr___n_expr2 SFT_parser_nodes[1105]
#define COLOR_parser_nodes___ARangeExpr___n_expr2__eq SFT_parser_nodes[1106]
#define ID_ACrangeExpr SFT_parser_nodes[1107]
#define COLOR_ACrangeExpr SFT_parser_nodes[1108]
#define INIT_TABLE_POS_ACrangeExpr SFT_parser_nodes[1109]
#define ID_AOrangeExpr SFT_parser_nodes[1110]
#define COLOR_AOrangeExpr SFT_parser_nodes[1111]
#define INIT_TABLE_POS_AOrangeExpr SFT_parser_nodes[1112]
#define ID_AArrayExpr SFT_parser_nodes[1113]
#define COLOR_AArrayExpr SFT_parser_nodes[1114]
#define COLOR_parser_nodes___AArrayExpr____n_exprs SFT_parser_nodes[1115]
#define INIT_TABLE_POS_AArrayExpr SFT_parser_nodes[1116]
#define COLOR_parser_nodes___AArrayExpr___n_exprs SFT_parser_nodes[1117]
#define COLOR_parser_nodes___AArrayExpr___n_exprs__eq SFT_parser_nodes[1118]
#define ID_ASelfExpr SFT_parser_nodes[1119]
#define COLOR_ASelfExpr SFT_parser_nodes[1120]
#define COLOR_parser_nodes___ASelfExpr____n_kwself SFT_parser_nodes[1121]
#define INIT_TABLE_POS_ASelfExpr SFT_parser_nodes[1122]
#define COLOR_parser_nodes___ASelfExpr___n_kwself SFT_parser_nodes[1123]
#define COLOR_parser_nodes___ASelfExpr___n_kwself__eq SFT_parser_nodes[1124]
#define ID_AImplicitSelfExpr SFT_parser_nodes[1125]
#define COLOR_AImplicitSelfExpr SFT_parser_nodes[1126]
#define INIT_TABLE_POS_AImplicitSelfExpr SFT_parser_nodes[1127]
#define ID_ATrueExpr SFT_parser_nodes[1128]
#define COLOR_ATrueExpr SFT_parser_nodes[1129]
#define COLOR_parser_nodes___ATrueExpr____n_kwtrue SFT_parser_nodes[1130]
#define INIT_TABLE_POS_ATrueExpr SFT_parser_nodes[1131]
#define COLOR_parser_nodes___ATrueExpr___n_kwtrue SFT_parser_nodes[1132]
#define COLOR_parser_nodes___ATrueExpr___n_kwtrue__eq SFT_parser_nodes[1133]
#define ID_AFalseExpr SFT_parser_nodes[1134]
#define COLOR_AFalseExpr SFT_parser_nodes[1135]
#define COLOR_parser_nodes___AFalseExpr____n_kwfalse SFT_parser_nodes[1136]
#define INIT_TABLE_POS_AFalseExpr SFT_parser_nodes[1137]
#define COLOR_parser_nodes___AFalseExpr___n_kwfalse SFT_parser_nodes[1138]
#define COLOR_parser_nodes___AFalseExpr___n_kwfalse__eq SFT_parser_nodes[1139]
#define ID_ANullExpr SFT_parser_nodes[1140]
#define COLOR_ANullExpr SFT_parser_nodes[1141]
#define COLOR_parser_nodes___ANullExpr____n_kwnull SFT_parser_nodes[1142]
#define INIT_TABLE_POS_ANullExpr SFT_parser_nodes[1143]
#define COLOR_parser_nodes___ANullExpr___n_kwnull SFT_parser_nodes[1144]
#define COLOR_parser_nodes___ANullExpr___n_kwnull__eq SFT_parser_nodes[1145]
#define ID_AIntExpr SFT_parser_nodes[1146]
#define COLOR_AIntExpr SFT_parser_nodes[1147]
#define COLOR_parser_nodes___AIntExpr____n_number SFT_parser_nodes[1148]
#define INIT_TABLE_POS_AIntExpr SFT_parser_nodes[1149]
#define COLOR_parser_nodes___AIntExpr___n_number SFT_parser_nodes[1150]
#define COLOR_parser_nodes___AIntExpr___n_number__eq SFT_parser_nodes[1151]
#define ID_AFloatExpr SFT_parser_nodes[1152]
#define COLOR_AFloatExpr SFT_parser_nodes[1153]
#define COLOR_parser_nodes___AFloatExpr____n_float SFT_parser_nodes[1154]
#define INIT_TABLE_POS_AFloatExpr SFT_parser_nodes[1155]
#define COLOR_parser_nodes___AFloatExpr___n_float SFT_parser_nodes[1156]
#define COLOR_parser_nodes___AFloatExpr___n_float__eq SFT_parser_nodes[1157]
#define ID_ACharExpr SFT_parser_nodes[1158]
#define COLOR_ACharExpr SFT_parser_nodes[1159]
#define COLOR_parser_nodes___ACharExpr____n_char SFT_parser_nodes[1160]
#define INIT_TABLE_POS_ACharExpr SFT_parser_nodes[1161]
#define COLOR_parser_nodes___ACharExpr___n_char SFT_parser_nodes[1162]
#define COLOR_parser_nodes___ACharExpr___n_char__eq SFT_parser_nodes[1163]
#define ID_AStringFormExpr SFT_parser_nodes[1164]
#define COLOR_AStringFormExpr SFT_parser_nodes[1165]
#define INIT_TABLE_POS_AStringFormExpr SFT_parser_nodes[1166]
#define ID_AStringExpr SFT_parser_nodes[1167]
#define COLOR_AStringExpr SFT_parser_nodes[1168]
#define COLOR_parser_nodes___AStringExpr____n_string SFT_parser_nodes[1169]
#define INIT_TABLE_POS_AStringExpr SFT_parser_nodes[1170]
#define COLOR_parser_nodes___AStringExpr___n_string SFT_parser_nodes[1171]
#define COLOR_parser_nodes___AStringExpr___n_string__eq SFT_parser_nodes[1172]
#define ID_AStartStringExpr SFT_parser_nodes[1173]
#define COLOR_AStartStringExpr SFT_parser_nodes[1174]
#define COLOR_parser_nodes___AStartStringExpr____n_string SFT_parser_nodes[1175]
#define INIT_TABLE_POS_AStartStringExpr SFT_parser_nodes[1176]
#define COLOR_parser_nodes___AStartStringExpr___n_string SFT_parser_nodes[1177]
#define COLOR_parser_nodes___AStartStringExpr___n_string__eq SFT_parser_nodes[1178]
#define ID_AMidStringExpr SFT_parser_nodes[1179]
#define COLOR_AMidStringExpr SFT_parser_nodes[1180]
#define COLOR_parser_nodes___AMidStringExpr____n_string SFT_parser_nodes[1181]
#define INIT_TABLE_POS_AMidStringExpr SFT_parser_nodes[1182]
#define COLOR_parser_nodes___AMidStringExpr___n_string SFT_parser_nodes[1183]
#define COLOR_parser_nodes___AMidStringExpr___n_string__eq SFT_parser_nodes[1184]
#define ID_AEndStringExpr SFT_parser_nodes[1185]
#define COLOR_AEndStringExpr SFT_parser_nodes[1186]
#define COLOR_parser_nodes___AEndStringExpr____n_string SFT_parser_nodes[1187]
#define INIT_TABLE_POS_AEndStringExpr SFT_parser_nodes[1188]
#define COLOR_parser_nodes___AEndStringExpr___n_string SFT_parser_nodes[1189]
#define COLOR_parser_nodes___AEndStringExpr___n_string__eq SFT_parser_nodes[1190]
#define ID_ASuperstringExpr SFT_parser_nodes[1191]
#define COLOR_ASuperstringExpr SFT_parser_nodes[1192]
#define COLOR_parser_nodes___ASuperstringExpr____n_exprs SFT_parser_nodes[1193]
#define INIT_TABLE_POS_ASuperstringExpr SFT_parser_nodes[1194]
#define COLOR_parser_nodes___ASuperstringExpr___n_exprs SFT_parser_nodes[1195]
#define COLOR_parser_nodes___ASuperstringExpr___n_exprs__eq SFT_parser_nodes[1196]
#define ID_AParExpr SFT_parser_nodes[1197]
#define COLOR_AParExpr SFT_parser_nodes[1198]
#define INIT_TABLE_POS_AParExpr SFT_parser_nodes[1199]
#define ID_AProxyExpr SFT_parser_nodes[1200]
#define COLOR_AProxyExpr SFT_parser_nodes[1201]
#define COLOR_parser_nodes___AProxyExpr____n_expr SFT_parser_nodes[1202]
#define INIT_TABLE_POS_AProxyExpr SFT_parser_nodes[1203]
#define COLOR_parser_nodes___AProxyExpr___n_expr SFT_parser_nodes[1204]
#define COLOR_parser_nodes___AProxyExpr___n_expr__eq SFT_parser_nodes[1205]
#define ID_APlusAssignOp SFT_parser_nodes[1206]
#define COLOR_APlusAssignOp SFT_parser_nodes[1207]
#define COLOR_parser_nodes___APlusAssignOp____n_pluseq SFT_parser_nodes[1208]
#define INIT_TABLE_POS_APlusAssignOp SFT_parser_nodes[1209]
#define COLOR_parser_nodes___APlusAssignOp___n_pluseq SFT_parser_nodes[1210]
#define COLOR_parser_nodes___APlusAssignOp___n_pluseq__eq SFT_parser_nodes[1211]
#define ID_AMinusAssignOp SFT_parser_nodes[1212]
#define COLOR_AMinusAssignOp SFT_parser_nodes[1213]
#define COLOR_parser_nodes___AMinusAssignOp____n_minuseq SFT_parser_nodes[1214]
#define INIT_TABLE_POS_AMinusAssignOp SFT_parser_nodes[1215]
#define COLOR_parser_nodes___AMinusAssignOp___n_minuseq SFT_parser_nodes[1216]
#define COLOR_parser_nodes___AMinusAssignOp___n_minuseq__eq SFT_parser_nodes[1217]
#define ID_AQualified SFT_parser_nodes[1218]
#define COLOR_AQualified SFT_parser_nodes[1219]
#define COLOR_parser_nodes___AQualified____n_id SFT_parser_nodes[1220]
#define COLOR_parser_nodes___AQualified____n_classid SFT_parser_nodes[1221]
#define INIT_TABLE_POS_AQualified SFT_parser_nodes[1222]
#define COLOR_parser_nodes___AQualified___n_id SFT_parser_nodes[1223]
#define COLOR_parser_nodes___AQualified___n_id__eq SFT_parser_nodes[1224]
#define COLOR_parser_nodes___AQualified___n_classid SFT_parser_nodes[1225]
#define COLOR_parser_nodes___AQualified___n_classid__eq SFT_parser_nodes[1226]
#define ID_ADoc SFT_parser_nodes[1227]
#define COLOR_ADoc SFT_parser_nodes[1228]
#define COLOR_parser_nodes___ADoc____n_comment SFT_parser_nodes[1229]
#define INIT_TABLE_POS_ADoc SFT_parser_nodes[1230]
#define COLOR_parser_nodes___ADoc___n_comment SFT_parser_nodes[1231]
#define COLOR_parser_nodes___ADoc___n_comment__eq SFT_parser_nodes[1232]
#define ID_Start SFT_parser_nodes[1233]
#define COLOR_Start SFT_parser_nodes[1234]
#define COLOR_parser_nodes___Start____n_base SFT_parser_nodes[1235]
#define COLOR_parser_nodes___Start____n_eof SFT_parser_nodes[1236]
#define INIT_TABLE_POS_Start SFT_parser_nodes[1237]
#define COLOR_parser_nodes___Start___n_base SFT_parser_nodes[1238]
#define COLOR_parser_nodes___Start___n_base__eq SFT_parser_nodes[1239]
#define COLOR_parser_nodes___Start___n_eof SFT_parser_nodes[1240]
#define COLOR_parser_nodes___Start___n_eof__eq SFT_parser_nodes[1241]
#define ATTR_parser_nodes___PPropdef____n_doc(recv) ATTR(recv, COLOR_parser_nodes___PPropdef____n_doc)
typedef val_t (* parser_nodes___PPropdef___n_doc_t)(val_t  self);
val_t parser_nodes___PPropdef___n_doc(val_t  self);
typedef void (* parser_nodes___PPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_nodes___PPropdef___n_doc__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___PAble____n_kwredef(recv) ATTR(recv, COLOR_parser_nodes___PAble____n_kwredef)
typedef val_t (* parser_nodes___PAble___n_kwredef_t)(val_t  self);
val_t parser_nodes___PAble___n_kwredef(val_t  self);
typedef void (* parser_nodes___PAble___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_nodes___PAble___n_kwredef__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___PParam____n_id(recv) ATTR(recv, COLOR_parser_nodes___PParam____n_id)
typedef val_t (* parser_nodes___PParam___n_id_t)(val_t  self);
val_t parser_nodes___PParam___n_id(val_t  self);
typedef void (* parser_nodes___PParam___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___PParam___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___PParam____n_type(recv) ATTR(recv, COLOR_parser_nodes___PParam____n_type)
typedef val_t (* parser_nodes___PParam___n_type_t)(val_t  self);
val_t parser_nodes___PParam___n_type(val_t  self);
typedef void (* parser_nodes___PParam___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___PParam___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AModule____n_packagedecl(recv) ATTR(recv, COLOR_parser_nodes___AModule____n_packagedecl)
typedef val_t (* parser_nodes___AModule___n_packagedecl_t)(val_t  self);
val_t parser_nodes___AModule___n_packagedecl(val_t  self);
typedef void (* parser_nodes___AModule___n_packagedecl__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AModule___n_packagedecl__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AModule____n_imports(recv) ATTR(recv, COLOR_parser_nodes___AModule____n_imports)
typedef val_t (* parser_nodes___AModule___n_imports_t)(val_t  self);
val_t parser_nodes___AModule___n_imports(val_t  self);
typedef void (* parser_nodes___AModule___n_imports__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AModule___n_imports__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AModule____n_classdefs(recv) ATTR(recv, COLOR_parser_nodes___AModule____n_classdefs)
typedef val_t (* parser_nodes___AModule___n_classdefs_t)(val_t  self);
val_t parser_nodes___AModule___n_classdefs(val_t  self);
typedef void (* parser_nodes___AModule___n_classdefs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AModule___n_classdefs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APackagedecl____n_doc(recv) ATTR(recv, COLOR_parser_nodes___APackagedecl____n_doc)
typedef val_t (* parser_nodes___APackagedecl___n_doc_t)(val_t  self);
val_t parser_nodes___APackagedecl___n_doc(val_t  self);
typedef void (* parser_nodes___APackagedecl___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APackagedecl___n_doc__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APackagedecl____n_kwpackage(recv) ATTR(recv, COLOR_parser_nodes___APackagedecl____n_kwpackage)
typedef val_t (* parser_nodes___APackagedecl___n_kwpackage_t)(val_t  self);
val_t parser_nodes___APackagedecl___n_kwpackage(val_t  self);
typedef void (* parser_nodes___APackagedecl___n_kwpackage__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APackagedecl___n_kwpackage__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APackagedecl____n_id(recv) ATTR(recv, COLOR_parser_nodes___APackagedecl____n_id)
typedef val_t (* parser_nodes___APackagedecl___n_id_t)(val_t  self);
val_t parser_nodes___APackagedecl___n_id(val_t  self);
typedef void (* parser_nodes___APackagedecl___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APackagedecl___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AImport____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___AImport____n_visibility)
typedef val_t (* parser_nodes___AImport___n_visibility_t)(val_t  self);
val_t parser_nodes___AImport___n_visibility(val_t  self);
typedef void (* parser_nodes___AImport___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AImport___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AImport____n_kwimport(recv) ATTR(recv, COLOR_parser_nodes___AImport____n_kwimport)
typedef val_t (* parser_nodes___AImport___n_kwimport_t)(val_t  self);
val_t parser_nodes___AImport___n_kwimport(val_t  self);
typedef void (* parser_nodes___AImport___n_kwimport__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AImport___n_kwimport__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AImport____n_id(recv) ATTR(recv, COLOR_parser_nodes___AImport____n_id)
typedef val_t (* parser_nodes___AImport___n_id_t)(val_t  self);
val_t parser_nodes___AImport___n_id(val_t  self);
typedef void (* parser_nodes___AImport___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AImport___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANoImport____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___ANoImport____n_visibility)
typedef val_t (* parser_nodes___ANoImport___n_visibility_t)(val_t  self);
val_t parser_nodes___ANoImport___n_visibility(val_t  self);
typedef void (* parser_nodes___ANoImport___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANoImport___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANoImport____n_kwimport(recv) ATTR(recv, COLOR_parser_nodes___ANoImport____n_kwimport)
typedef val_t (* parser_nodes___ANoImport___n_kwimport_t)(val_t  self);
val_t parser_nodes___ANoImport___n_kwimport(val_t  self);
typedef void (* parser_nodes___ANoImport___n_kwimport__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANoImport___n_kwimport__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANoImport____n_kwend(recv) ATTR(recv, COLOR_parser_nodes___ANoImport____n_kwend)
typedef val_t (* parser_nodes___ANoImport___n_kwend_t)(val_t  self);
val_t parser_nodes___ANoImport___n_kwend(val_t  self);
typedef void (* parser_nodes___ANoImport___n_kwend__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANoImport___n_kwend__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APrivateVisibility____n_kwprivate(recv) ATTR(recv, COLOR_parser_nodes___APrivateVisibility____n_kwprivate)
typedef val_t (* parser_nodes___APrivateVisibility___n_kwprivate_t)(val_t  self);
val_t parser_nodes___APrivateVisibility___n_kwprivate(val_t  self);
typedef void (* parser_nodes___APrivateVisibility___n_kwprivate__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APrivateVisibility___n_kwprivate__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AProtectedVisibility____n_kwprotected(recv) ATTR(recv, COLOR_parser_nodes___AProtectedVisibility____n_kwprotected)
typedef val_t (* parser_nodes___AProtectedVisibility___n_kwprotected_t)(val_t  self);
val_t parser_nodes___AProtectedVisibility___n_kwprotected(val_t  self);
typedef void (* parser_nodes___AProtectedVisibility___n_kwprotected__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AProtectedVisibility___n_kwprotected__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIntrudeVisibility____n_kwintrude(recv) ATTR(recv, COLOR_parser_nodes___AIntrudeVisibility____n_kwintrude)
typedef val_t (* parser_nodes___AIntrudeVisibility___n_kwintrude_t)(val_t  self);
val_t parser_nodes___AIntrudeVisibility___n_kwintrude(val_t  self);
typedef void (* parser_nodes___AIntrudeVisibility___n_kwintrude__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIntrudeVisibility___n_kwintrude__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_doc(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_doc)
typedef val_t (* parser_nodes___AClassdef___n_doc_t)(val_t  self);
val_t parser_nodes___AClassdef___n_doc(val_t  self);
typedef void (* parser_nodes___AClassdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_doc__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_kwredef(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_kwredef)
typedef val_t (* parser_nodes___AClassdef___n_kwredef_t)(val_t  self);
val_t parser_nodes___AClassdef___n_kwredef(val_t  self);
typedef void (* parser_nodes___AClassdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_kwredef__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_visibility)
typedef val_t (* parser_nodes___AClassdef___n_visibility_t)(val_t  self);
val_t parser_nodes___AClassdef___n_visibility(val_t  self);
typedef void (* parser_nodes___AClassdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_classkind(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_classkind)
typedef val_t (* parser_nodes___AClassdef___n_classkind_t)(val_t  self);
val_t parser_nodes___AClassdef___n_classkind(val_t  self);
typedef void (* parser_nodes___AClassdef___n_classkind__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_classkind__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_id(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_id)
typedef val_t (* parser_nodes___AClassdef___n_id_t)(val_t  self);
val_t parser_nodes___AClassdef___n_id(val_t  self);
typedef void (* parser_nodes___AClassdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_formaldefs(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_formaldefs)
typedef val_t (* parser_nodes___AClassdef___n_formaldefs_t)(val_t  self);
val_t parser_nodes___AClassdef___n_formaldefs(val_t  self);
typedef void (* parser_nodes___AClassdef___n_formaldefs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_formaldefs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_superclasses(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_superclasses)
typedef val_t (* parser_nodes___AClassdef___n_superclasses_t)(val_t  self);
val_t parser_nodes___AClassdef___n_superclasses(val_t  self);
typedef void (* parser_nodes___AClassdef___n_superclasses__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_superclasses__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AClassdef____n_propdefs(recv) ATTR(recv, COLOR_parser_nodes___AClassdef____n_propdefs)
typedef val_t (* parser_nodes___AClassdef___n_propdefs_t)(val_t  self);
val_t parser_nodes___AClassdef___n_propdefs(val_t  self);
typedef void (* parser_nodes___AClassdef___n_propdefs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AClassdef___n_propdefs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATopClassdef____n_propdefs(recv) ATTR(recv, COLOR_parser_nodes___ATopClassdef____n_propdefs)
typedef val_t (* parser_nodes___ATopClassdef___n_propdefs_t)(val_t  self);
val_t parser_nodes___ATopClassdef___n_propdefs(val_t  self);
typedef void (* parser_nodes___ATopClassdef___n_propdefs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATopClassdef___n_propdefs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMainClassdef____n_propdefs(recv) ATTR(recv, COLOR_parser_nodes___AMainClassdef____n_propdefs)
typedef val_t (* parser_nodes___AMainClassdef___n_propdefs_t)(val_t  self);
val_t parser_nodes___AMainClassdef___n_propdefs(val_t  self);
typedef void (* parser_nodes___AMainClassdef___n_propdefs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMainClassdef___n_propdefs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AConcreteClasskind____n_kwclass(recv) ATTR(recv, COLOR_parser_nodes___AConcreteClasskind____n_kwclass)
typedef val_t (* parser_nodes___AConcreteClasskind___n_kwclass_t)(val_t  self);
val_t parser_nodes___AConcreteClasskind___n_kwclass(val_t  self);
typedef void (* parser_nodes___AConcreteClasskind___n_kwclass__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AConcreteClasskind___n_kwclass__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAbstractClasskind____n_kwabstract(recv) ATTR(recv, COLOR_parser_nodes___AAbstractClasskind____n_kwabstract)
typedef val_t (* parser_nodes___AAbstractClasskind___n_kwabstract_t)(val_t  self);
val_t parser_nodes___AAbstractClasskind___n_kwabstract(val_t  self);
typedef void (* parser_nodes___AAbstractClasskind___n_kwabstract__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAbstractClasskind___n_kwabstract__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAbstractClasskind____n_kwclass(recv) ATTR(recv, COLOR_parser_nodes___AAbstractClasskind____n_kwclass)
typedef val_t (* parser_nodes___AAbstractClasskind___n_kwclass_t)(val_t  self);
val_t parser_nodes___AAbstractClasskind___n_kwclass(val_t  self);
typedef void (* parser_nodes___AAbstractClasskind___n_kwclass__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAbstractClasskind___n_kwclass__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AInterfaceClasskind____n_kwinterface(recv) ATTR(recv, COLOR_parser_nodes___AInterfaceClasskind____n_kwinterface)
typedef val_t (* parser_nodes___AInterfaceClasskind___n_kwinterface_t)(val_t  self);
val_t parser_nodes___AInterfaceClasskind___n_kwinterface(val_t  self);
typedef void (* parser_nodes___AInterfaceClasskind___n_kwinterface__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AInterfaceClasskind___n_kwinterface__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AUniversalClasskind____n_kwuniversal(recv) ATTR(recv, COLOR_parser_nodes___AUniversalClasskind____n_kwuniversal)
typedef val_t (* parser_nodes___AUniversalClasskind___n_kwuniversal_t)(val_t  self);
val_t parser_nodes___AUniversalClasskind___n_kwuniversal(val_t  self);
typedef void (* parser_nodes___AUniversalClasskind___n_kwuniversal__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AUniversalClasskind___n_kwuniversal__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AFormaldef____n_id(recv) ATTR(recv, COLOR_parser_nodes___AFormaldef____n_id)
typedef val_t (* parser_nodes___AFormaldef___n_id_t)(val_t  self);
val_t parser_nodes___AFormaldef___n_id(val_t  self);
typedef void (* parser_nodes___AFormaldef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AFormaldef___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AFormaldef____n_type(recv) ATTR(recv, COLOR_parser_nodes___AFormaldef____n_type)
typedef val_t (* parser_nodes___AFormaldef___n_type_t)(val_t  self);
val_t parser_nodes___AFormaldef___n_type(val_t  self);
typedef void (* parser_nodes___AFormaldef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AFormaldef___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperclass____n_kwspecial(recv) ATTR(recv, COLOR_parser_nodes___ASuperclass____n_kwspecial)
typedef val_t (* parser_nodes___ASuperclass___n_kwspecial_t)(val_t  self);
val_t parser_nodes___ASuperclass___n_kwspecial(val_t  self);
typedef void (* parser_nodes___ASuperclass___n_kwspecial__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperclass___n_kwspecial__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperclass____n_type(recv) ATTR(recv, COLOR_parser_nodes___ASuperclass____n_type)
typedef val_t (* parser_nodes___ASuperclass___n_type_t)(val_t  self);
val_t parser_nodes___ASuperclass___n_type(val_t  self);
typedef void (* parser_nodes___ASuperclass___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperclass___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_kwredef(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_kwredef)
typedef val_t (* parser_nodes___AAttrPropdef___n_kwredef_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_kwredef(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_kwredef__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_visibility)
typedef val_t (* parser_nodes___AAttrPropdef___n_visibility_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_visibility(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_kwattr(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_kwattr)
typedef val_t (* parser_nodes___AAttrPropdef___n_kwattr_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_kwattr(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_kwattr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_kwattr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_id(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_id)
typedef val_t (* parser_nodes___AAttrPropdef___n_id_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_id(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_type(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_type)
typedef val_t (* parser_nodes___AAttrPropdef___n_type_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_type(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_readable(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_readable)
typedef val_t (* parser_nodes___AAttrPropdef___n_readable_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_readable(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_readable__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_readable__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_writable(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_writable)
typedef val_t (* parser_nodes___AAttrPropdef___n_writable_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_writable(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_writable__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_writable__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrPropdef____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AAttrPropdef____n_expr)
typedef val_t (* parser_nodes___AAttrPropdef___n_expr_t)(val_t  self);
val_t parser_nodes___AAttrPropdef___n_expr(val_t  self);
typedef void (* parser_nodes___AAttrPropdef___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrPropdef___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMethPropdef____n_kwredef(recv) ATTR(recv, COLOR_parser_nodes___AMethPropdef____n_kwredef)
typedef val_t (* parser_nodes___AMethPropdef___n_kwredef_t)(val_t  self);
val_t parser_nodes___AMethPropdef___n_kwredef(val_t  self);
typedef void (* parser_nodes___AMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMethPropdef____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___AMethPropdef____n_visibility)
typedef val_t (* parser_nodes___AMethPropdef___n_visibility_t)(val_t  self);
val_t parser_nodes___AMethPropdef___n_visibility(val_t  self);
typedef void (* parser_nodes___AMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMethPropdef____n_methid(recv) ATTR(recv, COLOR_parser_nodes___AMethPropdef____n_methid)
typedef val_t (* parser_nodes___AMethPropdef___n_methid_t)(val_t  self);
val_t parser_nodes___AMethPropdef___n_methid(val_t  self);
typedef void (* parser_nodes___AMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMethPropdef___n_methid__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMethPropdef____n_signature(recv) ATTR(recv, COLOR_parser_nodes___AMethPropdef____n_signature)
typedef val_t (* parser_nodes___AMethPropdef___n_signature_t)(val_t  self);
val_t parser_nodes___AMethPropdef___n_signature(val_t  self);
typedef void (* parser_nodes___AMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMethPropdef___n_signature__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ADeferredMethPropdef____n_kwmeth(recv) ATTR(recv, COLOR_parser_nodes___ADeferredMethPropdef____n_kwmeth)
typedef val_t (* parser_nodes___ADeferredMethPropdef___n_kwmeth_t)(val_t  self);
val_t parser_nodes___ADeferredMethPropdef___n_kwmeth(val_t  self);
typedef void (* parser_nodes___ADeferredMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ADeferredMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AInternMethPropdef____n_kwmeth(recv) ATTR(recv, COLOR_parser_nodes___AInternMethPropdef____n_kwmeth)
typedef val_t (* parser_nodes___AInternMethPropdef___n_kwmeth_t)(val_t  self);
val_t parser_nodes___AInternMethPropdef___n_kwmeth(val_t  self);
typedef void (* parser_nodes___AInternMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AInternMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AExternMethPropdef____n_kwmeth(recv) ATTR(recv, COLOR_parser_nodes___AExternMethPropdef____n_kwmeth)
typedef val_t (* parser_nodes___AExternMethPropdef___n_kwmeth_t)(val_t  self);
val_t parser_nodes___AExternMethPropdef___n_kwmeth(val_t  self);
typedef void (* parser_nodes___AExternMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AExternMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AExternMethPropdef____n_extern(recv) ATTR(recv, COLOR_parser_nodes___AExternMethPropdef____n_extern)
typedef val_t (* parser_nodes___AExternMethPropdef___n_extern_t)(val_t  self);
val_t parser_nodes___AExternMethPropdef___n_extern(val_t  self);
typedef void (* parser_nodes___AExternMethPropdef___n_extern__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AExternMethPropdef___n_extern__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AConcreteMethPropdef____n_kwmeth(recv) ATTR(recv, COLOR_parser_nodes___AConcreteMethPropdef____n_kwmeth)
typedef val_t (* parser_nodes___AConcreteMethPropdef___n_kwmeth_t)(val_t  self);
val_t parser_nodes___AConcreteMethPropdef___n_kwmeth(val_t  self);
typedef void (* parser_nodes___AConcreteMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AConcreteMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AConcreteMethPropdef____n_block(recv) ATTR(recv, COLOR_parser_nodes___AConcreteMethPropdef____n_block)
typedef val_t (* parser_nodes___AConcreteMethPropdef___n_block_t)(val_t  self);
val_t parser_nodes___AConcreteMethPropdef___n_block(val_t  self);
typedef void (* parser_nodes___AConcreteMethPropdef___n_block__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AConcreteMethPropdef___n_block__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AConcreteInitPropdef____n_kwinit(recv) ATTR(recv, COLOR_parser_nodes___AConcreteInitPropdef____n_kwinit)
typedef val_t (* parser_nodes___AConcreteInitPropdef___n_kwinit_t)(val_t  self);
val_t parser_nodes___AConcreteInitPropdef___n_kwinit(val_t  self);
typedef void (* parser_nodes___AConcreteInitPropdef___n_kwinit__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AConcreteInitPropdef___n_kwinit__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATypePropdef____n_kwredef(recv) ATTR(recv, COLOR_parser_nodes___ATypePropdef____n_kwredef)
typedef val_t (* parser_nodes___ATypePropdef___n_kwredef_t)(val_t  self);
val_t parser_nodes___ATypePropdef___n_kwredef(val_t  self);
typedef void (* parser_nodes___ATypePropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATypePropdef___n_kwredef__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATypePropdef____n_visibility(recv) ATTR(recv, COLOR_parser_nodes___ATypePropdef____n_visibility)
typedef val_t (* parser_nodes___ATypePropdef___n_visibility_t)(val_t  self);
val_t parser_nodes___ATypePropdef___n_visibility(val_t  self);
typedef void (* parser_nodes___ATypePropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATypePropdef___n_visibility__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATypePropdef____n_kwtype(recv) ATTR(recv, COLOR_parser_nodes___ATypePropdef____n_kwtype)
typedef val_t (* parser_nodes___ATypePropdef___n_kwtype_t)(val_t  self);
val_t parser_nodes___ATypePropdef___n_kwtype(val_t  self);
typedef void (* parser_nodes___ATypePropdef___n_kwtype__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATypePropdef___n_kwtype__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATypePropdef____n_id(recv) ATTR(recv, COLOR_parser_nodes___ATypePropdef____n_id)
typedef val_t (* parser_nodes___ATypePropdef___n_id_t)(val_t  self);
val_t parser_nodes___ATypePropdef___n_id(val_t  self);
typedef void (* parser_nodes___ATypePropdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATypePropdef___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATypePropdef____n_type(recv) ATTR(recv, COLOR_parser_nodes___ATypePropdef____n_type)
typedef val_t (* parser_nodes___ATypePropdef___n_type_t)(val_t  self);
val_t parser_nodes___ATypePropdef___n_type(val_t  self);
typedef void (* parser_nodes___ATypePropdef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATypePropdef___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AReadAble____n_kwreadable(recv) ATTR(recv, COLOR_parser_nodes___AReadAble____n_kwreadable)
typedef val_t (* parser_nodes___AReadAble___n_kwreadable_t)(val_t  self);
val_t parser_nodes___AReadAble___n_kwreadable(val_t  self);
typedef void (* parser_nodes___AReadAble___n_kwreadable__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AReadAble___n_kwreadable__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AWriteAble____n_kwwritable(recv) ATTR(recv, COLOR_parser_nodes___AWriteAble____n_kwwritable)
typedef val_t (* parser_nodes___AWriteAble___n_kwwritable_t)(val_t  self);
val_t parser_nodes___AWriteAble___n_kwwritable(val_t  self);
typedef void (* parser_nodes___AWriteAble___n_kwwritable__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AWriteAble___n_kwwritable__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIdMethid____n_id(recv) ATTR(recv, COLOR_parser_nodes___AIdMethid____n_id)
typedef val_t (* parser_nodes___AIdMethid___n_id_t)(val_t  self);
val_t parser_nodes___AIdMethid___n_id(val_t  self);
typedef void (* parser_nodes___AIdMethid___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIdMethid___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APlusMethid____n_plus(recv) ATTR(recv, COLOR_parser_nodes___APlusMethid____n_plus)
typedef val_t (* parser_nodes___APlusMethid___n_plus_t)(val_t  self);
val_t parser_nodes___APlusMethid___n_plus(val_t  self);
typedef void (* parser_nodes___APlusMethid___n_plus__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APlusMethid___n_plus__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMinusMethid____n_minus(recv) ATTR(recv, COLOR_parser_nodes___AMinusMethid____n_minus)
typedef val_t (* parser_nodes___AMinusMethid___n_minus_t)(val_t  self);
val_t parser_nodes___AMinusMethid___n_minus(val_t  self);
typedef void (* parser_nodes___AMinusMethid___n_minus__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMinusMethid___n_minus__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AStarMethid____n_star(recv) ATTR(recv, COLOR_parser_nodes___AStarMethid____n_star)
typedef val_t (* parser_nodes___AStarMethid___n_star_t)(val_t  self);
val_t parser_nodes___AStarMethid___n_star(val_t  self);
typedef void (* parser_nodes___AStarMethid___n_star__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AStarMethid___n_star__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASlashMethid____n_slash(recv) ATTR(recv, COLOR_parser_nodes___ASlashMethid____n_slash)
typedef val_t (* parser_nodes___ASlashMethid___n_slash_t)(val_t  self);
val_t parser_nodes___ASlashMethid___n_slash(val_t  self);
typedef void (* parser_nodes___ASlashMethid___n_slash__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASlashMethid___n_slash__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APercentMethid____n_percent(recv) ATTR(recv, COLOR_parser_nodes___APercentMethid____n_percent)
typedef val_t (* parser_nodes___APercentMethid___n_percent_t)(val_t  self);
val_t parser_nodes___APercentMethid___n_percent(val_t  self);
typedef void (* parser_nodes___APercentMethid___n_percent__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APercentMethid___n_percent__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AEqMethid____n_eq(recv) ATTR(recv, COLOR_parser_nodes___AEqMethid____n_eq)
typedef val_t (* parser_nodes___AEqMethid___n_eq_t)(val_t  self);
val_t parser_nodes___AEqMethid___n_eq(val_t  self);
typedef void (* parser_nodes___AEqMethid___n_eq__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AEqMethid___n_eq__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANeMethid____n_ne(recv) ATTR(recv, COLOR_parser_nodes___ANeMethid____n_ne)
typedef val_t (* parser_nodes___ANeMethid___n_ne_t)(val_t  self);
val_t parser_nodes___ANeMethid___n_ne(val_t  self);
typedef void (* parser_nodes___ANeMethid___n_ne__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANeMethid___n_ne__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ALeMethid____n_le(recv) ATTR(recv, COLOR_parser_nodes___ALeMethid____n_le)
typedef val_t (* parser_nodes___ALeMethid___n_le_t)(val_t  self);
val_t parser_nodes___ALeMethid___n_le(val_t  self);
typedef void (* parser_nodes___ALeMethid___n_le__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ALeMethid___n_le__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AGeMethid____n_ge(recv) ATTR(recv, COLOR_parser_nodes___AGeMethid____n_ge)
typedef val_t (* parser_nodes___AGeMethid___n_ge_t)(val_t  self);
val_t parser_nodes___AGeMethid___n_ge(val_t  self);
typedef void (* parser_nodes___AGeMethid___n_ge__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AGeMethid___n_ge__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ALtMethid____n_lt(recv) ATTR(recv, COLOR_parser_nodes___ALtMethid____n_lt)
typedef val_t (* parser_nodes___ALtMethid___n_lt_t)(val_t  self);
val_t parser_nodes___ALtMethid___n_lt(val_t  self);
typedef void (* parser_nodes___ALtMethid___n_lt__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ALtMethid___n_lt__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AGtMethid____n_gt(recv) ATTR(recv, COLOR_parser_nodes___AGtMethid____n_gt)
typedef val_t (* parser_nodes___AGtMethid___n_gt_t)(val_t  self);
val_t parser_nodes___AGtMethid___n_gt(val_t  self);
typedef void (* parser_nodes___AGtMethid___n_gt__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AGtMethid___n_gt__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraMethid____n_obra(recv) ATTR(recv, COLOR_parser_nodes___ABraMethid____n_obra)
typedef val_t (* parser_nodes___ABraMethid___n_obra_t)(val_t  self);
val_t parser_nodes___ABraMethid___n_obra(val_t  self);
typedef void (* parser_nodes___ABraMethid___n_obra__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraMethid___n_obra__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraMethid____n_cbra(recv) ATTR(recv, COLOR_parser_nodes___ABraMethid____n_cbra)
typedef val_t (* parser_nodes___ABraMethid___n_cbra_t)(val_t  self);
val_t parser_nodes___ABraMethid___n_cbra(val_t  self);
typedef void (* parser_nodes___ABraMethid___n_cbra__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraMethid___n_cbra__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AStarshipMethid____n_starship(recv) ATTR(recv, COLOR_parser_nodes___AStarshipMethid____n_starship)
typedef val_t (* parser_nodes___AStarshipMethid___n_starship_t)(val_t  self);
val_t parser_nodes___AStarshipMethid___n_starship(val_t  self);
typedef void (* parser_nodes___AStarshipMethid___n_starship__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AStarshipMethid___n_starship__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssignMethid____n_id(recv) ATTR(recv, COLOR_parser_nodes___AAssignMethid____n_id)
typedef val_t (* parser_nodes___AAssignMethid___n_id_t)(val_t  self);
val_t parser_nodes___AAssignMethid___n_id(val_t  self);
typedef void (* parser_nodes___AAssignMethid___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssignMethid___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssignMethid____n_assign(recv) ATTR(recv, COLOR_parser_nodes___AAssignMethid____n_assign)
typedef val_t (* parser_nodes___AAssignMethid___n_assign_t)(val_t  self);
val_t parser_nodes___AAssignMethid___n_assign(val_t  self);
typedef void (* parser_nodes___AAssignMethid___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssignMethid___n_assign__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraassignMethid____n_obra(recv) ATTR(recv, COLOR_parser_nodes___ABraassignMethid____n_obra)
typedef val_t (* parser_nodes___ABraassignMethid___n_obra_t)(val_t  self);
val_t parser_nodes___ABraassignMethid___n_obra(val_t  self);
typedef void (* parser_nodes___ABraassignMethid___n_obra__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraassignMethid___n_obra__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraassignMethid____n_cbra(recv) ATTR(recv, COLOR_parser_nodes___ABraassignMethid____n_cbra)
typedef val_t (* parser_nodes___ABraassignMethid___n_cbra_t)(val_t  self);
val_t parser_nodes___ABraassignMethid___n_cbra(val_t  self);
typedef void (* parser_nodes___ABraassignMethid___n_cbra__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraassignMethid___n_cbra__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraassignMethid____n_assign(recv) ATTR(recv, COLOR_parser_nodes___ABraassignMethid____n_assign)
typedef val_t (* parser_nodes___ABraassignMethid___n_assign_t)(val_t  self);
val_t parser_nodes___ABraassignMethid___n_assign(val_t  self);
typedef void (* parser_nodes___ABraassignMethid___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraassignMethid___n_assign__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASignature____n_params(recv) ATTR(recv, COLOR_parser_nodes___ASignature____n_params)
typedef val_t (* parser_nodes___ASignature___n_params_t)(val_t  self);
val_t parser_nodes___ASignature___n_params(val_t  self);
typedef void (* parser_nodes___ASignature___n_params__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASignature___n_params__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASignature____n_type(recv) ATTR(recv, COLOR_parser_nodes___ASignature____n_type)
typedef val_t (* parser_nodes___ASignature___n_type_t)(val_t  self);
val_t parser_nodes___ASignature___n_type(val_t  self);
typedef void (* parser_nodes___ASignature___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASignature___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AParam____n_dotdotdot(recv) ATTR(recv, COLOR_parser_nodes___AParam____n_dotdotdot)
typedef val_t (* parser_nodes___AParam___n_dotdotdot_t)(val_t  self);
val_t parser_nodes___AParam___n_dotdotdot(val_t  self);
typedef void (* parser_nodes___AParam___n_dotdotdot__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AParam___n_dotdotdot__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AType____n_id(recv) ATTR(recv, COLOR_parser_nodes___AType____n_id)
typedef val_t (* parser_nodes___AType___n_id_t)(val_t  self);
val_t parser_nodes___AType___n_id(val_t  self);
typedef void (* parser_nodes___AType___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AType___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AType____n_types(recv) ATTR(recv, COLOR_parser_nodes___AType____n_types)
typedef val_t (* parser_nodes___AType___n_types_t)(val_t  self);
val_t parser_nodes___AType___n_types(val_t  self);
typedef void (* parser_nodes___AType___n_types__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AType___n_types__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABlockExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___ABlockExpr____n_expr)
typedef val_t (* parser_nodes___ABlockExpr___n_expr_t)(val_t  self);
val_t parser_nodes___ABlockExpr___n_expr(val_t  self);
typedef void (* parser_nodes___ABlockExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABlockExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVardeclExpr____n_kwvar(recv) ATTR(recv, COLOR_parser_nodes___AVardeclExpr____n_kwvar)
typedef val_t (* parser_nodes___AVardeclExpr___n_kwvar_t)(val_t  self);
val_t parser_nodes___AVardeclExpr___n_kwvar(val_t  self);
typedef void (* parser_nodes___AVardeclExpr___n_kwvar__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVardeclExpr___n_kwvar__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVardeclExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___AVardeclExpr____n_id)
typedef val_t (* parser_nodes___AVardeclExpr___n_id_t)(val_t  self);
val_t parser_nodes___AVardeclExpr___n_id(val_t  self);
typedef void (* parser_nodes___AVardeclExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVardeclExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVardeclExpr____n_type(recv) ATTR(recv, COLOR_parser_nodes___AVardeclExpr____n_type)
typedef val_t (* parser_nodes___AVardeclExpr___n_type_t)(val_t  self);
val_t parser_nodes___AVardeclExpr___n_type(val_t  self);
typedef void (* parser_nodes___AVardeclExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVardeclExpr___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVardeclExpr____n_assign(recv) ATTR(recv, COLOR_parser_nodes___AVardeclExpr____n_assign)
typedef val_t (* parser_nodes___AVardeclExpr___n_assign_t)(val_t  self);
val_t parser_nodes___AVardeclExpr___n_assign(val_t  self);
typedef void (* parser_nodes___AVardeclExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVardeclExpr___n_assign__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVardeclExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AVardeclExpr____n_expr)
typedef val_t (* parser_nodes___AVardeclExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AVardeclExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AVardeclExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVardeclExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AReturnExpr____n_kwreturn(recv) ATTR(recv, COLOR_parser_nodes___AReturnExpr____n_kwreturn)
typedef val_t (* parser_nodes___AReturnExpr___n_kwreturn_t)(val_t  self);
val_t parser_nodes___AReturnExpr___n_kwreturn(val_t  self);
typedef void (* parser_nodes___AReturnExpr___n_kwreturn__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AReturnExpr___n_kwreturn__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AReturnExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AReturnExpr____n_expr)
typedef val_t (* parser_nodes___AReturnExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AReturnExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AReturnExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AReturnExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABreakExpr____n_kwbreak(recv) ATTR(recv, COLOR_parser_nodes___ABreakExpr____n_kwbreak)
typedef val_t (* parser_nodes___ABreakExpr___n_kwbreak_t)(val_t  self);
val_t parser_nodes___ABreakExpr___n_kwbreak(val_t  self);
typedef void (* parser_nodes___ABreakExpr___n_kwbreak__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABreakExpr___n_kwbreak__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAbortExpr____n_kwabort(recv) ATTR(recv, COLOR_parser_nodes___AAbortExpr____n_kwabort)
typedef val_t (* parser_nodes___AAbortExpr___n_kwabort_t)(val_t  self);
val_t parser_nodes___AAbortExpr___n_kwabort(val_t  self);
typedef void (* parser_nodes___AAbortExpr___n_kwabort__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAbortExpr___n_kwabort__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AContinueExpr____n_kwcontinue(recv) ATTR(recv, COLOR_parser_nodes___AContinueExpr____n_kwcontinue)
typedef val_t (* parser_nodes___AContinueExpr___n_kwcontinue_t)(val_t  self);
val_t parser_nodes___AContinueExpr___n_kwcontinue(val_t  self);
typedef void (* parser_nodes___AContinueExpr___n_kwcontinue__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AContinueExpr___n_kwcontinue__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ADoExpr____n_kwdo(recv) ATTR(recv, COLOR_parser_nodes___ADoExpr____n_kwdo)
typedef val_t (* parser_nodes___ADoExpr___n_kwdo_t)(val_t  self);
val_t parser_nodes___ADoExpr___n_kwdo(val_t  self);
typedef void (* parser_nodes___ADoExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ADoExpr___n_kwdo__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ADoExpr____n_block(recv) ATTR(recv, COLOR_parser_nodes___ADoExpr____n_block)
typedef val_t (* parser_nodes___ADoExpr___n_block_t)(val_t  self);
val_t parser_nodes___ADoExpr___n_block(val_t  self);
typedef void (* parser_nodes___ADoExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ADoExpr___n_block__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfExpr____n_kwif(recv) ATTR(recv, COLOR_parser_nodes___AIfExpr____n_kwif)
typedef val_t (* parser_nodes___AIfExpr___n_kwif_t)(val_t  self);
val_t parser_nodes___AIfExpr___n_kwif(val_t  self);
typedef void (* parser_nodes___AIfExpr___n_kwif__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfExpr___n_kwif__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AIfExpr____n_expr)
typedef val_t (* parser_nodes___AIfExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AIfExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AIfExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfExpr____n_then(recv) ATTR(recv, COLOR_parser_nodes___AIfExpr____n_then)
typedef val_t (* parser_nodes___AIfExpr___n_then_t)(val_t  self);
val_t parser_nodes___AIfExpr___n_then(val_t  self);
typedef void (* parser_nodes___AIfExpr___n_then__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfExpr___n_then__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfExpr____n_else(recv) ATTR(recv, COLOR_parser_nodes___AIfExpr____n_else)
typedef val_t (* parser_nodes___AIfExpr___n_else_t)(val_t  self);
val_t parser_nodes___AIfExpr___n_else(val_t  self);
typedef void (* parser_nodes___AIfExpr___n_else__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfExpr___n_else__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_kwif(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_kwif)
typedef val_t (* parser_nodes___AIfexprExpr___n_kwif_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_kwif(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_kwif__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_kwif__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_expr)
typedef val_t (* parser_nodes___AIfexprExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_kwthen(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_kwthen)
typedef val_t (* parser_nodes___AIfexprExpr___n_kwthen_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_kwthen(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_kwthen__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_kwthen__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_then(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_then)
typedef val_t (* parser_nodes___AIfexprExpr___n_then_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_then(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_then__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_then__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_kwelse(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_kwelse)
typedef val_t (* parser_nodes___AIfexprExpr___n_kwelse_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_kwelse(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_kwelse__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_kwelse__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIfexprExpr____n_else(recv) ATTR(recv, COLOR_parser_nodes___AIfexprExpr____n_else)
typedef val_t (* parser_nodes___AIfexprExpr___n_else_t)(val_t  self);
val_t parser_nodes___AIfexprExpr___n_else(val_t  self);
typedef void (* parser_nodes___AIfexprExpr___n_else__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIfexprExpr___n_else__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AWhileExpr____n_kwwhile(recv) ATTR(recv, COLOR_parser_nodes___AWhileExpr____n_kwwhile)
typedef val_t (* parser_nodes___AWhileExpr___n_kwwhile_t)(val_t  self);
val_t parser_nodes___AWhileExpr___n_kwwhile(val_t  self);
typedef void (* parser_nodes___AWhileExpr___n_kwwhile__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AWhileExpr___n_kwwhile__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AWhileExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AWhileExpr____n_expr)
typedef val_t (* parser_nodes___AWhileExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AWhileExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AWhileExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AWhileExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AWhileExpr____n_kwdo(recv) ATTR(recv, COLOR_parser_nodes___AWhileExpr____n_kwdo)
typedef val_t (* parser_nodes___AWhileExpr___n_kwdo_t)(val_t  self);
val_t parser_nodes___AWhileExpr___n_kwdo(val_t  self);
typedef void (* parser_nodes___AWhileExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AWhileExpr___n_kwdo__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AWhileExpr____n_block(recv) ATTR(recv, COLOR_parser_nodes___AWhileExpr____n_block)
typedef val_t (* parser_nodes___AWhileExpr___n_block_t)(val_t  self);
val_t parser_nodes___AWhileExpr___n_block(val_t  self);
typedef void (* parser_nodes___AWhileExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AWhileExpr___n_block__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForExpr____n_vardecl(recv) ATTR(recv, COLOR_parser_nodes___AForExpr____n_vardecl)
typedef val_t (* parser_nodes___AForExpr___n_vardecl_t)(val_t  self);
val_t parser_nodes___AForExpr___n_vardecl(val_t  self);
typedef void (* parser_nodes___AForExpr___n_vardecl__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForExpr___n_vardecl__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForExpr____n_kwdo(recv) ATTR(recv, COLOR_parser_nodes___AForExpr____n_kwdo)
typedef val_t (* parser_nodes___AForExpr___n_kwdo_t)(val_t  self);
val_t parser_nodes___AForExpr___n_kwdo(val_t  self);
typedef void (* parser_nodes___AForExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForExpr___n_kwdo__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForExpr____n_block(recv) ATTR(recv, COLOR_parser_nodes___AForExpr____n_block)
typedef val_t (* parser_nodes___AForExpr___n_block_t)(val_t  self);
val_t parser_nodes___AForExpr___n_block(val_t  self);
typedef void (* parser_nodes___AForExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForExpr___n_block__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForVardeclExpr____n_kwfor(recv) ATTR(recv, COLOR_parser_nodes___AForVardeclExpr____n_kwfor)
typedef val_t (* parser_nodes___AForVardeclExpr___n_kwfor_t)(val_t  self);
val_t parser_nodes___AForVardeclExpr___n_kwfor(val_t  self);
typedef void (* parser_nodes___AForVardeclExpr___n_kwfor__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForVardeclExpr___n_kwfor__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForVardeclExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___AForVardeclExpr____n_id)
typedef val_t (* parser_nodes___AForVardeclExpr___n_id_t)(val_t  self);
val_t parser_nodes___AForVardeclExpr___n_id(val_t  self);
typedef void (* parser_nodes___AForVardeclExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForVardeclExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AForVardeclExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AForVardeclExpr____n_expr)
typedef val_t (* parser_nodes___AForVardeclExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AForVardeclExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AForVardeclExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AForVardeclExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssertExpr____n_kwassert(recv) ATTR(recv, COLOR_parser_nodes___AAssertExpr____n_kwassert)
typedef val_t (* parser_nodes___AAssertExpr___n_kwassert_t)(val_t  self);
val_t parser_nodes___AAssertExpr___n_kwassert(val_t  self);
typedef void (* parser_nodes___AAssertExpr___n_kwassert__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssertExpr___n_kwassert__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssertExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___AAssertExpr____n_id)
typedef val_t (* parser_nodes___AAssertExpr___n_id_t)(val_t  self);
val_t parser_nodes___AAssertExpr___n_id(val_t  self);
typedef void (* parser_nodes___AAssertExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssertExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssertExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AAssertExpr____n_expr)
typedef val_t (* parser_nodes___AAssertExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AAssertExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AAssertExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssertExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssignFormExpr____n_assign(recv) ATTR(recv, COLOR_parser_nodes___AAssignFormExpr____n_assign)
typedef val_t (* parser_nodes___AAssignFormExpr___n_assign_t)(val_t  self);
val_t parser_nodes___AAssignFormExpr___n_assign(val_t  self);
typedef void (* parser_nodes___AAssignFormExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssignFormExpr___n_assign__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAssignFormExpr____n_value(recv) ATTR(recv, COLOR_parser_nodes___AAssignFormExpr____n_value)
typedef val_t (* parser_nodes___AAssignFormExpr___n_value_t)(val_t  self);
val_t parser_nodes___AAssignFormExpr___n_value(val_t  self);
typedef void (* parser_nodes___AAssignFormExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAssignFormExpr___n_value__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AReassignFormExpr____n_assign_op(recv) ATTR(recv, COLOR_parser_nodes___AReassignFormExpr____n_assign_op)
typedef val_t (* parser_nodes___AReassignFormExpr___n_assign_op_t)(val_t  self);
val_t parser_nodes___AReassignFormExpr___n_assign_op(val_t  self);
typedef void (* parser_nodes___AReassignFormExpr___n_assign_op__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AReassignFormExpr___n_assign_op__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AReassignFormExpr____n_value(recv) ATTR(recv, COLOR_parser_nodes___AReassignFormExpr____n_value)
typedef val_t (* parser_nodes___AReassignFormExpr___n_value_t)(val_t  self);
val_t parser_nodes___AReassignFormExpr___n_value(val_t  self);
typedef void (* parser_nodes___AReassignFormExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AReassignFormExpr___n_value__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AOnceExpr____n_kwonce(recv) ATTR(recv, COLOR_parser_nodes___AOnceExpr____n_kwonce)
typedef val_t (* parser_nodes___AOnceExpr___n_kwonce_t)(val_t  self);
val_t parser_nodes___AOnceExpr___n_kwonce(val_t  self);
typedef void (* parser_nodes___AOnceExpr___n_kwonce__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AOnceExpr___n_kwonce__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASendExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___ASendExpr____n_expr)
typedef val_t (* parser_nodes___ASendExpr___n_expr_t)(val_t  self);
val_t parser_nodes___ASendExpr___n_expr(val_t  self);
typedef void (* parser_nodes___ASendExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASendExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABinopExpr____n_expr2(recv) ATTR(recv, COLOR_parser_nodes___ABinopExpr____n_expr2)
typedef val_t (* parser_nodes___ABinopExpr___n_expr2_t)(val_t  self);
val_t parser_nodes___ABinopExpr___n_expr2(val_t  self);
typedef void (* parser_nodes___ABinopExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABinopExpr___n_expr2__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AOrExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AOrExpr____n_expr)
typedef val_t (* parser_nodes___AOrExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AOrExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AOrExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AOrExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AOrExpr____n_expr2(recv) ATTR(recv, COLOR_parser_nodes___AOrExpr____n_expr2)
typedef val_t (* parser_nodes___AOrExpr___n_expr2_t)(val_t  self);
val_t parser_nodes___AOrExpr___n_expr2(val_t  self);
typedef void (* parser_nodes___AOrExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AOrExpr___n_expr2__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAndExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AAndExpr____n_expr)
typedef val_t (* parser_nodes___AAndExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AAndExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AAndExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAndExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAndExpr____n_expr2(recv) ATTR(recv, COLOR_parser_nodes___AAndExpr____n_expr2)
typedef val_t (* parser_nodes___AAndExpr___n_expr2_t)(val_t  self);
val_t parser_nodes___AAndExpr___n_expr2(val_t  self);
typedef void (* parser_nodes___AAndExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAndExpr___n_expr2__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANotExpr____n_kwnot(recv) ATTR(recv, COLOR_parser_nodes___ANotExpr____n_kwnot)
typedef val_t (* parser_nodes___ANotExpr___n_kwnot_t)(val_t  self);
val_t parser_nodes___ANotExpr___n_kwnot(val_t  self);
typedef void (* parser_nodes___ANotExpr___n_kwnot__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANotExpr___n_kwnot__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANotExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___ANotExpr____n_expr)
typedef val_t (* parser_nodes___ANotExpr___n_expr_t)(val_t  self);
val_t parser_nodes___ANotExpr___n_expr(val_t  self);
typedef void (* parser_nodes___ANotExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANotExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AEeExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AEeExpr____n_expr)
typedef val_t (* parser_nodes___AEeExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AEeExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AEeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AEeExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AEeExpr____n_expr2(recv) ATTR(recv, COLOR_parser_nodes___AEeExpr____n_expr2)
typedef val_t (* parser_nodes___AEeExpr___n_expr2_t)(val_t  self);
val_t parser_nodes___AEeExpr___n_expr2(val_t  self);
typedef void (* parser_nodes___AEeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AEeExpr___n_expr2__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIsaExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AIsaExpr____n_expr)
typedef val_t (* parser_nodes___AIsaExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AIsaExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AIsaExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIsaExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIsaExpr____n_type(recv) ATTR(recv, COLOR_parser_nodes___AIsaExpr____n_type)
typedef val_t (* parser_nodes___AIsaExpr___n_type_t)(val_t  self);
val_t parser_nodes___AIsaExpr___n_type(val_t  self);
typedef void (* parser_nodes___AIsaExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIsaExpr___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AUminusExpr____n_minus(recv) ATTR(recv, COLOR_parser_nodes___AUminusExpr____n_minus)
typedef val_t (* parser_nodes___AUminusExpr___n_minus_t)(val_t  self);
val_t parser_nodes___AUminusExpr___n_minus(val_t  self);
typedef void (* parser_nodes___AUminusExpr___n_minus__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AUminusExpr___n_minus__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANewExpr____n_kwnew(recv) ATTR(recv, COLOR_parser_nodes___ANewExpr____n_kwnew)
typedef val_t (* parser_nodes___ANewExpr___n_kwnew_t)(val_t  self);
val_t parser_nodes___ANewExpr___n_kwnew(val_t  self);
typedef void (* parser_nodes___ANewExpr___n_kwnew__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANewExpr___n_kwnew__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANewExpr____n_type(recv) ATTR(recv, COLOR_parser_nodes___ANewExpr____n_type)
typedef val_t (* parser_nodes___ANewExpr___n_type_t)(val_t  self);
val_t parser_nodes___ANewExpr___n_type(val_t  self);
typedef void (* parser_nodes___ANewExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANewExpr___n_type__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANewExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___ANewExpr____n_id)
typedef val_t (* parser_nodes___ANewExpr___n_id_t)(val_t  self);
val_t parser_nodes___ANewExpr___n_id(val_t  self);
typedef void (* parser_nodes___ANewExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANewExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANewExpr____n_args(recv) ATTR(recv, COLOR_parser_nodes___ANewExpr____n_args)
typedef val_t (* parser_nodes___ANewExpr___n_args_t)(val_t  self);
val_t parser_nodes___ANewExpr___n_args(val_t  self);
typedef void (* parser_nodes___ANewExpr___n_args__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANewExpr___n_args__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrFormExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AAttrFormExpr____n_expr)
typedef val_t (* parser_nodes___AAttrFormExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AAttrFormExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AAttrFormExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrFormExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AAttrFormExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___AAttrFormExpr____n_id)
typedef val_t (* parser_nodes___AAttrFormExpr___n_id_t)(val_t  self);
val_t parser_nodes___AAttrFormExpr___n_id(val_t  self);
typedef void (* parser_nodes___AAttrFormExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AAttrFormExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ACallFormExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___ACallFormExpr____n_id)
typedef val_t (* parser_nodes___ACallFormExpr___n_id_t)(val_t  self);
val_t parser_nodes___ACallFormExpr___n_id(val_t  self);
typedef void (* parser_nodes___ACallFormExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ACallFormExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ACallFormExpr____n_args(recv) ATTR(recv, COLOR_parser_nodes___ACallFormExpr____n_args)
typedef val_t (* parser_nodes___ACallFormExpr___n_args_t)(val_t  self);
val_t parser_nodes___ACallFormExpr___n_args(val_t  self);
typedef void (* parser_nodes___ACallFormExpr___n_args__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ACallFormExpr___n_args__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperExpr____n_qualified(recv) ATTR(recv, COLOR_parser_nodes___ASuperExpr____n_qualified)
typedef val_t (* parser_nodes___ASuperExpr___n_qualified_t)(val_t  self);
val_t parser_nodes___ASuperExpr___n_qualified(val_t  self);
typedef void (* parser_nodes___ASuperExpr___n_qualified__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperExpr___n_qualified__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperExpr____n_kwsuper(recv) ATTR(recv, COLOR_parser_nodes___ASuperExpr____n_kwsuper)
typedef val_t (* parser_nodes___ASuperExpr___n_kwsuper_t)(val_t  self);
val_t parser_nodes___ASuperExpr___n_kwsuper(val_t  self);
typedef void (* parser_nodes___ASuperExpr___n_kwsuper__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperExpr___n_kwsuper__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperExpr____n_args(recv) ATTR(recv, COLOR_parser_nodes___ASuperExpr____n_args)
typedef val_t (* parser_nodes___ASuperExpr___n_args_t)(val_t  self);
val_t parser_nodes___ASuperExpr___n_args(val_t  self);
typedef void (* parser_nodes___ASuperExpr___n_args__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperExpr___n_args__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AInitExpr____n_kwinit(recv) ATTR(recv, COLOR_parser_nodes___AInitExpr____n_kwinit)
typedef val_t (* parser_nodes___AInitExpr___n_kwinit_t)(val_t  self);
val_t parser_nodes___AInitExpr___n_kwinit(val_t  self);
typedef void (* parser_nodes___AInitExpr___n_kwinit__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AInitExpr___n_kwinit__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AInitExpr____n_args(recv) ATTR(recv, COLOR_parser_nodes___AInitExpr____n_args)
typedef val_t (* parser_nodes___AInitExpr___n_args_t)(val_t  self);
val_t parser_nodes___AInitExpr___n_args(val_t  self);
typedef void (* parser_nodes___AInitExpr___n_args__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AInitExpr___n_args__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ABraFormExpr____n_args(recv) ATTR(recv, COLOR_parser_nodes___ABraFormExpr____n_args)
typedef val_t (* parser_nodes___ABraFormExpr___n_args_t)(val_t  self);
val_t parser_nodes___ABraFormExpr___n_args(val_t  self);
typedef void (* parser_nodes___ABraFormExpr___n_args__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ABraFormExpr___n_args__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AVarFormExpr____n_id(recv) ATTR(recv, COLOR_parser_nodes___AVarFormExpr____n_id)
typedef val_t (* parser_nodes___AVarFormExpr___n_id_t)(val_t  self);
val_t parser_nodes___AVarFormExpr___n_id(val_t  self);
typedef void (* parser_nodes___AVarFormExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AVarFormExpr___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ARangeExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___ARangeExpr____n_expr)
typedef val_t (* parser_nodes___ARangeExpr___n_expr_t)(val_t  self);
val_t parser_nodes___ARangeExpr___n_expr(val_t  self);
typedef void (* parser_nodes___ARangeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ARangeExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ARangeExpr____n_expr2(recv) ATTR(recv, COLOR_parser_nodes___ARangeExpr____n_expr2)
typedef val_t (* parser_nodes___ARangeExpr___n_expr2_t)(val_t  self);
val_t parser_nodes___ARangeExpr___n_expr2(val_t  self);
typedef void (* parser_nodes___ARangeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ARangeExpr___n_expr2__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AArrayExpr____n_exprs(recv) ATTR(recv, COLOR_parser_nodes___AArrayExpr____n_exprs)
typedef val_t (* parser_nodes___AArrayExpr___n_exprs_t)(val_t  self);
val_t parser_nodes___AArrayExpr___n_exprs(val_t  self);
typedef void (* parser_nodes___AArrayExpr___n_exprs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AArrayExpr___n_exprs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASelfExpr____n_kwself(recv) ATTR(recv, COLOR_parser_nodes___ASelfExpr____n_kwself)
typedef val_t (* parser_nodes___ASelfExpr___n_kwself_t)(val_t  self);
val_t parser_nodes___ASelfExpr___n_kwself(val_t  self);
typedef void (* parser_nodes___ASelfExpr___n_kwself__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASelfExpr___n_kwself__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ATrueExpr____n_kwtrue(recv) ATTR(recv, COLOR_parser_nodes___ATrueExpr____n_kwtrue)
typedef val_t (* parser_nodes___ATrueExpr___n_kwtrue_t)(val_t  self);
val_t parser_nodes___ATrueExpr___n_kwtrue(val_t  self);
typedef void (* parser_nodes___ATrueExpr___n_kwtrue__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ATrueExpr___n_kwtrue__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AFalseExpr____n_kwfalse(recv) ATTR(recv, COLOR_parser_nodes___AFalseExpr____n_kwfalse)
typedef val_t (* parser_nodes___AFalseExpr___n_kwfalse_t)(val_t  self);
val_t parser_nodes___AFalseExpr___n_kwfalse(val_t  self);
typedef void (* parser_nodes___AFalseExpr___n_kwfalse__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AFalseExpr___n_kwfalse__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ANullExpr____n_kwnull(recv) ATTR(recv, COLOR_parser_nodes___ANullExpr____n_kwnull)
typedef val_t (* parser_nodes___ANullExpr___n_kwnull_t)(val_t  self);
val_t parser_nodes___ANullExpr___n_kwnull(val_t  self);
typedef void (* parser_nodes___ANullExpr___n_kwnull__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ANullExpr___n_kwnull__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AIntExpr____n_number(recv) ATTR(recv, COLOR_parser_nodes___AIntExpr____n_number)
typedef val_t (* parser_nodes___AIntExpr___n_number_t)(val_t  self);
val_t parser_nodes___AIntExpr___n_number(val_t  self);
typedef void (* parser_nodes___AIntExpr___n_number__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AIntExpr___n_number__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AFloatExpr____n_float(recv) ATTR(recv, COLOR_parser_nodes___AFloatExpr____n_float)
typedef val_t (* parser_nodes___AFloatExpr___n_float_t)(val_t  self);
val_t parser_nodes___AFloatExpr___n_float(val_t  self);
typedef void (* parser_nodes___AFloatExpr___n_float__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AFloatExpr___n_float__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ACharExpr____n_char(recv) ATTR(recv, COLOR_parser_nodes___ACharExpr____n_char)
typedef val_t (* parser_nodes___ACharExpr___n_char_t)(val_t  self);
val_t parser_nodes___ACharExpr___n_char(val_t  self);
typedef void (* parser_nodes___ACharExpr___n_char__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ACharExpr___n_char__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AStringExpr____n_string(recv) ATTR(recv, COLOR_parser_nodes___AStringExpr____n_string)
typedef val_t (* parser_nodes___AStringExpr___n_string_t)(val_t  self);
val_t parser_nodes___AStringExpr___n_string(val_t  self);
typedef void (* parser_nodes___AStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AStringExpr___n_string__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AStartStringExpr____n_string(recv) ATTR(recv, COLOR_parser_nodes___AStartStringExpr____n_string)
typedef val_t (* parser_nodes___AStartStringExpr___n_string_t)(val_t  self);
val_t parser_nodes___AStartStringExpr___n_string(val_t  self);
typedef void (* parser_nodes___AStartStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AStartStringExpr___n_string__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMidStringExpr____n_string(recv) ATTR(recv, COLOR_parser_nodes___AMidStringExpr____n_string)
typedef val_t (* parser_nodes___AMidStringExpr___n_string_t)(val_t  self);
val_t parser_nodes___AMidStringExpr___n_string(val_t  self);
typedef void (* parser_nodes___AMidStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMidStringExpr___n_string__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AEndStringExpr____n_string(recv) ATTR(recv, COLOR_parser_nodes___AEndStringExpr____n_string)
typedef val_t (* parser_nodes___AEndStringExpr___n_string_t)(val_t  self);
val_t parser_nodes___AEndStringExpr___n_string(val_t  self);
typedef void (* parser_nodes___AEndStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AEndStringExpr___n_string__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ASuperstringExpr____n_exprs(recv) ATTR(recv, COLOR_parser_nodes___ASuperstringExpr____n_exprs)
typedef val_t (* parser_nodes___ASuperstringExpr___n_exprs_t)(val_t  self);
val_t parser_nodes___ASuperstringExpr___n_exprs(val_t  self);
typedef void (* parser_nodes___ASuperstringExpr___n_exprs__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ASuperstringExpr___n_exprs__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AProxyExpr____n_expr(recv) ATTR(recv, COLOR_parser_nodes___AProxyExpr____n_expr)
typedef val_t (* parser_nodes___AProxyExpr___n_expr_t)(val_t  self);
val_t parser_nodes___AProxyExpr___n_expr(val_t  self);
typedef void (* parser_nodes___AProxyExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AProxyExpr___n_expr__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___APlusAssignOp____n_pluseq(recv) ATTR(recv, COLOR_parser_nodes___APlusAssignOp____n_pluseq)
typedef val_t (* parser_nodes___APlusAssignOp___n_pluseq_t)(val_t  self);
val_t parser_nodes___APlusAssignOp___n_pluseq(val_t  self);
typedef void (* parser_nodes___APlusAssignOp___n_pluseq__eq_t)(val_t  self, val_t  param0);
void parser_nodes___APlusAssignOp___n_pluseq__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AMinusAssignOp____n_minuseq(recv) ATTR(recv, COLOR_parser_nodes___AMinusAssignOp____n_minuseq)
typedef val_t (* parser_nodes___AMinusAssignOp___n_minuseq_t)(val_t  self);
val_t parser_nodes___AMinusAssignOp___n_minuseq(val_t  self);
typedef void (* parser_nodes___AMinusAssignOp___n_minuseq__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AMinusAssignOp___n_minuseq__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AQualified____n_id(recv) ATTR(recv, COLOR_parser_nodes___AQualified____n_id)
typedef val_t (* parser_nodes___AQualified___n_id_t)(val_t  self);
val_t parser_nodes___AQualified___n_id(val_t  self);
typedef void (* parser_nodes___AQualified___n_id__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AQualified___n_id__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___AQualified____n_classid(recv) ATTR(recv, COLOR_parser_nodes___AQualified____n_classid)
typedef val_t (* parser_nodes___AQualified___n_classid_t)(val_t  self);
val_t parser_nodes___AQualified___n_classid(val_t  self);
typedef void (* parser_nodes___AQualified___n_classid__eq_t)(val_t  self, val_t  param0);
void parser_nodes___AQualified___n_classid__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___ADoc____n_comment(recv) ATTR(recv, COLOR_parser_nodes___ADoc____n_comment)
typedef val_t (* parser_nodes___ADoc___n_comment_t)(val_t  self);
val_t parser_nodes___ADoc___n_comment(val_t  self);
typedef void (* parser_nodes___ADoc___n_comment__eq_t)(val_t  self, val_t  param0);
void parser_nodes___ADoc___n_comment__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___Start____n_base(recv) ATTR(recv, COLOR_parser_nodes___Start____n_base)
typedef val_t (* parser_nodes___Start___n_base_t)(val_t  self);
val_t parser_nodes___Start___n_base(val_t  self);
typedef void (* parser_nodes___Start___n_base__eq_t)(val_t  self, val_t  param0);
void parser_nodes___Start___n_base__eq(val_t  self, val_t  param0);
#define ATTR_parser_nodes___Start____n_eof(recv) ATTR(recv, COLOR_parser_nodes___Start____n_eof)
typedef val_t (* parser_nodes___Start___n_eof_t)(val_t  self);
val_t parser_nodes___Start___n_eof(val_t  self);
typedef void (* parser_nodes___Start___n_eof__eq_t)(val_t  self, val_t  param0);
void parser_nodes___Start___n_eof__eq(val_t  self, val_t  param0);
#endif
