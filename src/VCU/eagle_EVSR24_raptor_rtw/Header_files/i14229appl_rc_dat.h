#ifndef _I14229APPL_RC_DAT_H
#define _I14229APPL_RC_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant HEGOS2B2_SY */


/* HEGOS2B2_SY Typ=ub */
#ifndef HEGOS2B2_SY
  #define HEGOS2B2_SY 0L
#elif (HEGOS2B2_SY != 0L)
  #error >>>> 'HEGOS2B2_SY' multiple defined
#endif


/* Referenced System Constant SHTRPDUMPVLV_SC */


/* SHTRPDUMPVLV_SC Typ=ub */
#ifndef SHTRPDUMPVLV_SC
  #define SHTRPDUMPVLV_SC 0L
#elif (SHTRPDUMPVLV_SC != 0L)
  #error >>>> 'SHTRPDUMPVLV_SC' multiple defined
#endif


/* Referenced System Constant SHTRPTRBCHACTR_SC */


/* SHTRPTRBCHACTR_SC Typ=ub */
#ifndef SHTRPTRBCHACTR_SC
  #define SHTRPTRBCHACTR_SC 0L
#elif (SHTRPTRBCHACTR_SC != 0L)
  #error >>>> 'SHTRPTRBCHACTR_SC' multiple defined
#endif


/* Referenced System Constant SY_STERVK */


/* SY_STERVK Typ=ub */
#ifndef SY_STERVK
  #define SY_STERVK 0L
#elif (SY_STERVK != 0L)
  #error >>>> 'SY_STERVK' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: VehV_v */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __VEHV_V_EXT__
#define __VEHV_V_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 VehV_v;
#else /* local or exported variable - write access */
extern sint16 VehV_v;
#endif /* IMPORTED */
#endif /* __VEHV_V_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema SingleBitI1 +++++ */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 


/* Exported Variable: B_fa */
#ifdef _DAT_H
#ifndef __B_FA_EXT__
#define __B_FA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fa;
#define GET_B_fa (B_fa)
#else /* local or exported variable - write access */
extern _bit B_fa;
#define SET_B_fa (B_fa = TRUE)
#define CLR_B_fa (B_fa = FALSE)
#define GET_B_fa (B_fa)
#define PUT_B_fa(val) ((val) ? SET_B_fa : CLR_B_fa)
#endif /* IMPORTED */
#endif /* __B_FA_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fadmtle */
#ifdef _DAT_H
#ifndef __B_FADMTLE_EXT__
#define __B_FADMTLE_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fadmtle;
#define GET_B_fadmtle (B_fadmtle)
#else /* local or exported variable - write access */
extern _bit B_fadmtle;
#define SET_B_fadmtle (B_fadmtle = TRUE)
#define CLR_B_fadmtle (B_fadmtle = FALSE)
#define GET_B_fadmtle (B_fadmtle)
#define PUT_B_fadmtle(val) ((val) ? SET_B_fadmtle : CLR_B_fadmtle)
#endif /* IMPORTED */
#endif /* __B_FADMTLE_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fadylsu */
#ifdef _DAT_H
#ifndef __B_FADYLSU_EXT__
#define __B_FADYLSU_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fadylsu;
#define GET_B_fadylsu (B_fadylsu)
#else /* local or exported variable - write access */
extern _bit B_fadylsu;
#define SET_B_fadylsu (B_fadylsu = TRUE)
#define CLR_B_fadylsu (B_fadylsu = FALSE)
#define GET_B_fadylsu (B_fadylsu)
#define PUT_B_fadylsu(val) ((val) ? SET_B_fadylsu : CLR_B_fadylsu)
#endif /* IMPORTED */
#endif /* __B_FADYLSU_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fadylsu2 */
#ifdef _DAT_H
#ifndef __B_FADYLSU2_EXT__
#define __B_FADYLSU2_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fadylsu2;
#define GET_B_fadylsu2 (B_fadylsu2)
#else /* local or exported variable - write access */
extern _bit B_fadylsu2;
#define SET_B_fadylsu2 (B_fadylsu2 = TRUE)
#define CLR_B_fadylsu2 (B_fadylsu2 = FALSE)
#define GET_B_fadylsu2 (B_fadylsu2)
#define PUT_B_fadylsu2(val) ((val) ? SET_B_fadylsu2 : CLR_B_fadylsu2)
#endif /* IMPORTED */
#endif /* __B_FADYLSU2_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_falshv */
#ifdef _DAT_H
#ifndef __B_FALSHV_EXT__
#define __B_FALSHV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_falshv;
#define GET_B_falshv (B_falshv)
#else /* local or exported variable - write access */
extern _bit B_falshv;
#define SET_B_falshv (B_falshv = TRUE)
#define CLR_B_falshv (B_falshv = FALSE)
#define GET_B_falshv (B_falshv)
#define PUT_B_falshv(val) ((val) ? SET_B_falshv : CLR_B_falshv)
#endif /* IMPORTED */
#endif /* __B_FALSHV_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fapllsu */
#ifdef _DAT_H
#ifndef __B_FAPLLSU_EXT__
#define __B_FAPLLSU_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fapllsu;
#define GET_B_fapllsu (B_fapllsu)
#else /* local or exported variable - write access */
extern _bit B_fapllsu;
#define SET_B_fapllsu (B_fapllsu = TRUE)
#define CLR_B_fapllsu (B_fapllsu = FALSE)
#define GET_B_fapllsu (B_fapllsu)
#define PUT_B_fapllsu(val) ((val) ? SET_B_fapllsu : CLR_B_fapllsu)
#endif /* IMPORTED */
#endif /* __B_FAPLLSU_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fasls */
#ifdef _DAT_H
#ifndef __B_FASLS_EXT__
#define __B_FASLS_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fasls;
#define GET_B_fasls (B_fasls)
#else /* local or exported variable - write access */
extern _bit B_fasls;
#define SET_B_fasls (B_fasls = TRUE)
#define CLR_B_fasls (B_fasls = FALSE)
#define GET_B_fasls (B_fasls)
#define PUT_B_fasls(val) ((val) ? SET_B_fasls : CLR_B_fasls)
#endif /* IMPORTED */
#endif /* __B_FASLS_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_fates */
#ifdef _DAT_H
#ifndef __B_FATES_EXT__
#define __B_FATES_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_fates;
#define GET_B_fates (B_fates)
#else /* local or exported variable - write access */
extern _bit B_fates;
#define SET_B_fates (B_fates = TRUE)
#define CLR_B_fates (B_fates = FALSE)
#define GET_B_fates (B_fates)
#define PUT_B_fates(val) ((val) ? SET_B_fates : CLR_B_fates)
#endif /* IMPORTED */
#endif /* __B_FATES_EXT__ */
#endif /* _DAT_H */

/* Footer */
#pragma section 


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema SingleBitI1 +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema SingleBitI1 +++++ */


#undef _DAT_H
#endif /* _I14229APPL_RC_DAT_H */
