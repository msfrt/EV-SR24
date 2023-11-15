#ifndef _COENG_STENG_DAT_H
#define _COENG_STENG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter CoEng_nThdCrk2Runng_C */
#ifndef _CoEng_nThdCrk2Runng_C_DEF
#define _CoEng_nThdCrk2Runng_C_DEF
#define CoEng_nThdCrk2Runng_CM CoEng_nThdCrk2Runng_C
#endif /* _CoEng_nThdCrk2Runng_C_DEF */

/* Defined Parameter CoEng_nThresCranking_C */
#ifndef _CoEng_nThresCranking_C_DEF
#define _CoEng_nThresCranking_C_DEF
#define CoEng_nThresCranking_CM CoEng_nThresCranking_C
#endif /* _CoEng_nThresCranking_C_DEF */

/* Defined Parameter CoEng_nThresNrml2Strt_C */
#ifndef _CoEng_nThresNrml2Strt_C_DEF
#define _CoEng_nThresNrml2Strt_C_DEF
#define CoEng_nThresNrml2Strt_CM CoEng_nThresNrml2Strt_C
#endif /* _CoEng_nThresNrml2Strt_C_DEF */

/* Defined Parameter CoEng_tiNrml2Strt_C */
#ifndef _CoEng_tiNrml2Strt_C_DEF
#define _CoEng_tiNrml2Strt_C_DEF
#define CoEng_tiNrml2Strt_CM CoEng_tiNrml2Strt_C
#endif /* _CoEng_tiNrml2Strt_C_DEF */

/* Defined Parameter CoEng_tiPwrStgDiaRdy_C */
#ifndef _CoEng_tiPwrStgDiaRdy_C_DEF
#define _CoEng_tiPwrStgDiaRdy_C_DEF
#define CoEng_tiPwrStgDiaRdy_CM CoEng_tiPwrStgDiaRdy_C
#endif /* _CoEng_tiPwrStgDiaRdy_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class RSFlipFlop ++++++++++++++++++++++ */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _RSFLIPFLOP_U8_
#define _RSFLIPFLOP_U8_

/* -- Wrapper of Class RSFlipFlop in Addressschema Xram -- */
typedef struct
{
   /* Variable status */
   uint8 status;

} RSFLIPFLOP_U8;

#endif /* _RSFLIPFLOP_U8_ */


/* ++++++++++++++++++++ Class Srv_TrnOnDly ++++++++++++++++++++++ */
 
/* -- Implementation BOOL -- */
/* -- OML-N-Class -- */
#ifndef _SRV_TRNONDLY_BOOL_
#define _SRV_TRNONDLY_BOOL_

/* -- Wrapper of Class Srv_TrnOnDly in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   sint32 time;

} SRV_TRNONDLY_BOOL;

#endif /* _SRV_TRNONDLY_BOOL_ */


/* ++++++++++++++++++++ Class CoEng_StEngs ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-1-Class -- */
#ifndef _COENG_STENGS_IMPL_
#define _COENG_STENGS_IMPL_

/* -- Wrapper of Class CoEng_StEngs in Addressschema intRam -- */
typedef struct
{
   /* Variable CoEng_st */
   uint8 CoEng_st;

   /* Variable CoEng_tiNrml2Strt */
   sint32 CoEng_tiNrml2Strt;

   /* Variable Epm_nEng */
   sint16 Epm_nEng;

   /* Variable SyC_stSub */
   uint8 SyC_stSub;

   /* Variable sm */
   uint8 sm;

   /* Instance of Embedded Class RSFLIPFLOP_U8 */
   RSFLIPFLOP_U8 RSFlipFlop;

   /* Instance of Embedded Class SRV_TRNONDLY_BOOL */
   SRV_TRNONDLY_BOOL Srv_TrnOnDly;

} COENG_STENGS_IMPL;

#endif /* _COENG_STENGS_IMPL_ */


/* ++++++++++++++++++++ Class Srv_SWTmr ++++++++++++++++++++++ */
 
/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _SRV_SWTMR_S16_
#define _SRV_SWTMR_S16_

/* -- Wrapper of Class Srv_SWTmr in Addressschema Xram -- */
typedef struct
{
   /* Variable tiStrd */
   sint16 tiStrd;

} SRV_SWTMR_S16;

#endif /* _SRV_SWTMR_S16_ */

/* -- Implementation S32 -- */
/* -- OML-N-Class -- */
#ifndef _SRV_SWTMR_S32_
#define _SRV_SWTMR_S32_

/* -- Wrapper of Class Srv_SWTmr in Addressschema Xram -- */
typedef struct
{
   /* Variable tiStrd */
   sint32 tiStrd;

} SRV_SWTMR_S32;

#endif /* _SRV_SWTMR_S32_ */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CMBTYP_DS */


/* CMBTYP_DS Typ=ub */
#ifndef CMBTYP_DS
  #define CMBTYP_DS 0L
#elif (CMBTYP_DS != 0L)
  #error >>>> 'CMBTYP_DS' multiple defined
#endif


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant COENG_CRANKING */


/* COENG_CRANKING Typ=ub */
#ifndef COENG_CRANKING
  #define COENG_CRANKING 2L
#elif (COENG_CRANKING != 2L)
  #error >>>> 'COENG_CRANKING' multiple defined
#endif


/* Referenced System Constant COENG_FINISH */


/* COENG_FINISH Typ=ub */
#ifndef COENG_FINISH
  #define COENG_FINISH 5L
#elif (COENG_FINISH != 5L)
  #error >>>> 'COENG_FINISH' multiple defined
#endif


/* Referenced System Constant COENG_READY */


/* COENG_READY Typ=ub */
#ifndef COENG_READY
  #define COENG_READY 1L
#elif (COENG_READY != 1L)
  #error >>>> 'COENG_READY' multiple defined
#endif


/* Referenced System Constant COENG_RUNNING */


/* COENG_RUNNING Typ=ub */
#ifndef COENG_RUNNING
  #define COENG_RUNNING 3L
#elif (COENG_RUNNING != 3L)
  #error >>>> 'COENG_RUNNING' multiple defined
#endif


/* Referenced System Constant COENG_STANDBY */


/* COENG_STANDBY Typ=ub */
#ifndef COENG_STANDBY
  #define COENG_STANDBY 0L
#elif (COENG_STANDBY != 0L)
  #error >>>> 'COENG_STANDBY' multiple defined
#endif


/* Referenced System Constant COENG_STOPPING */


/* COENG_STOPPING Typ=ub */
#ifndef COENG_STOPPING
  #define COENG_STOPPING 4L
#elif (COENG_STOPPING != 4L)
  #error >>>> 'COENG_STOPPING' multiple defined
#endif


/* Referenced System Constant ECU_GENR_SY */


/* ECU_GENR_SY Typ=sw */
#ifndef ECU_GENR_SY
  #define ECU_GENR_SY 2L
#elif (ECU_GENR_SY != 2L)
  #error >>>> 'ECU_GENR_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema ADS_Bit +++++ */


/* Exported Variable: CoEng_bStalEng */
/* CoEng_bStalEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* +++++ Addressschema intRam +++++ */


/* Local Variable: CoEng_bAfterrunTmrInctg */
#ifdef _DAT_H
#ifndef __COENG_BAFTERRUNTMRINCTG_EXT__
#define __COENG_BAFTERRUNTMRINCTG_EXT__
extern bool CoEng_bAfterrunTmrInctg;
#endif
#endif


/* Local Variable: CoEng_bStrtTmrInctg */
#ifdef _DAT_H
#ifndef __COENG_BSTRTTMRINCTG_EXT__
#define __COENG_BSTRTTMRINCTG_EXT__
extern bool CoEng_bStrtTmrInctg;
#endif
#endif


/* Local Variable: CoEng_tiAfterrunBuf */
#ifdef _DAT_H
#ifndef __COENG_TIAFTERRUNBUF_EXT__
#define __COENG_TIAFTERRUNBUF_EXT__
extern uint32 CoEng_tiAfterrunBuf;
#endif
#endif


/* Local Variable: CoEng_tiEngRunDrvCycBuf */
#ifdef _DAT_H
#ifndef __COENG_TIENGRUNDRVCYCBUF_EXT__
#define __COENG_TIENGRUNDRVCYCBUF_EXT__
extern uint32 CoEng_tiEngRunDrvCycBuf;
#endif
#endif


/* Local Variable: CoEng_tiSt */
/* CoEng_tiSt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: CoEng_tiStartBuf */
#ifdef _DAT_H
#ifndef __COENG_TISTARTBUF_EXT__
#define __COENG_TISTARTBUF_EXT__
extern uint32 CoEng_tiStartBuf;
#endif
#endif


/* Exported Variable: CoEng_st */
/* CoEng_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_stOld */
/* CoEng_stOld is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiAfterrun */
/* CoEng_tiAfterrun is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiAfterrunRed */
/* CoEng_tiAfterrunRed is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiCranking */
/* CoEng_tiCranking is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiCrankingRed */
/* CoEng_tiCrankingRed is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiNormal */
/* CoEng_tiNormal is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiNormalRed */
/* CoEng_tiNormalRed is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiStandby */
/* CoEng_tiStandby is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiStandbyRed */
/* CoEng_tiStandbyRed is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiStart */
/* CoEng_tiStart is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: CoEng_tiStartRed */
/* CoEng_tiStartRed is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: ESC_tiSampling */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MPram8 +++++ */
#pragma section .bss.mpram.a1 aw

/* Local Variable: CoEng_bXPostDrv_mp */
#ifdef _DAT_H
#ifndef __COENG_BXPOSTDRV_MP_EXT__
#define __COENG_BXPOSTDRV_MP_EXT__
extern uint8 CoEng_bXPostDrv_mp;
#endif
#endif

/* Footer */
#pragma section 


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class RSFlipFlop ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class Srv_TrnOnDly ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class CoEng_StEngs ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class Srv_SWTmr ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class CoEng_StEngs, Instance CoEng_StEngs */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance CoEng_StEngs, Addressschema intRam */
#ifndef _CoEng_StEngs_DEF
#define _CoEng_StEngs_DEF


static COENG_STENGS_IMPL CoEng_StEngs;

#endif /* _CoEng_StEngs_DEF */

#endif /* _D_FILE_ */
/* --------------- */
/* Local OML-Class Srv_SWTmr, Instance CoEng_tiStSWT_I */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance CoEng_tiStSWT_I, Addressschema intRam */
#ifndef _CoEng_tiStSWT_I_DEF
#define _CoEng_tiStSWT_I_DEF


static SRV_SWTMR_S32 CoEng_tiStSWT_I;

#endif /* _CoEng_tiStSWT_I_DEF */

#endif /* _D_FILE_ */
/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of CoEng_GlbDef -- */

/* -- Referenced PTA Structures of CoEng_StEng -- */
/* -- Typedeclarations of Referenced Functions -- */


/* Referenced Class RSFlipFlop */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _RSFLIPFLOP_U8_
#define _RSFLIPFLOP_U8_

/* -- Wrapper of Class RSFlipFlop in Addressschema Xram -- */
typedef struct
{
   /* Variable status */
   uint8 status;

} RSFLIPFLOP_U8;

#endif /* _RSFLIPFLOP_U8_ */

/* Referenced Class Srv_TrnOnDly */
 
/* -- Implementation BOOL -- */
/* -- OML-N-Class -- */
#ifndef _SRV_TRNONDLY_BOOL_
#define _SRV_TRNONDLY_BOOL_

/* -- Wrapper of Class Srv_TrnOnDly in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   sint32 time;

} SRV_TRNONDLY_BOOL;

#endif /* _SRV_TRNONDLY_BOOL_ */

/* Referenced Class CoEng_StEngs */
 
/* -- Implementation IMPL -- */
/* -- OML-1-Class -- */
#ifndef _COENG_STENGS_IMPL_
#define _COENG_STENGS_IMPL_

/* -- Wrapper of Class CoEng_StEngs in Addressschema intRam -- */
typedef struct
{
   /* Variable CoEng_st */
   uint8 CoEng_st;

   /* Variable CoEng_tiNrml2Strt */
   sint32 CoEng_tiNrml2Strt;

   /* Variable Epm_nEng */
   sint16 Epm_nEng;

   /* Variable SyC_stSub */
   uint8 SyC_stSub;

   /* Variable sm */
   uint8 sm;

   /* Instance of Embedded Class RSFLIPFLOP_U8 */
   RSFLIPFLOP_U8 RSFlipFlop;

   /* Instance of Embedded Class SRV_TRNONDLY_BOOL */
   SRV_TRNONDLY_BOOL Srv_TrnOnDly;

} COENG_STENGS_IMPL;

#endif /* _COENG_STENGS_IMPL_ */

/* Referenced Class Srv_SWTmr */
 
/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _SRV_SWTMR_S16_
#define _SRV_SWTMR_S16_

/* -- Wrapper of Class Srv_SWTmr in Addressschema Xram -- */
typedef struct
{
   /* Variable tiStrd */
   sint16 tiStrd;

} SRV_SWTMR_S16;

#endif /* _SRV_SWTMR_S16_ */

/* -- Implementation S32 -- */
/* -- OML-N-Class -- */
#ifndef _SRV_SWTMR_S32_
#define _SRV_SWTMR_S32_

/* -- Wrapper of Class Srv_SWTmr in Addressschema Xram -- */
typedef struct
{
   /* Variable tiStrd */
   sint32 tiStrd;

} SRV_SWTMR_S32;

#endif /* _SRV_SWTMR_S32_ */


/* Referenced Parameter CoEng_nThdCrk2Runng_C */


#ifndef _CoEng_nThdCrk2Runng_C_DEF
#define _CoEng_nThdCrk2Runng_C_DEF
#define CoEng_nThdCrk2Runng_CM CoEng_nThdCrk2Runng_C
#endif /* _COENG_NTHDCRK2RUNNG_C_DEF */

/* Referenced Parameter CoEng_nThresCranking_C */


#ifndef _CoEng_nThresCranking_C_DEF
#define _CoEng_nThresCranking_C_DEF
#define CoEng_nThresCranking_CM CoEng_nThresCranking_C
#endif /* _COENG_NTHRESCRANKING_C_DEF */

/* Referenced Parameter CoEng_nThresNrml2Strt_C */


#ifndef _CoEng_nThresNrml2Strt_C_DEF
#define _CoEng_nThresNrml2Strt_C_DEF
#define CoEng_nThresNrml2Strt_CM CoEng_nThresNrml2Strt_C
#endif /* _COENG_NTHRESNRML2STRT_C_DEF */

/* Referenced Parameter CoEng_tiNrml2Strt_C */


#ifndef _CoEng_tiNrml2Strt_C_DEF
#define _CoEng_tiNrml2Strt_C_DEF
#define CoEng_tiNrml2Strt_CM CoEng_tiNrml2Strt_C
#endif /* _COENG_TINRML2STRT_C_DEF */

/* Referenced Parameter CoEng_tiPwrStgDiaRdy_C */


#ifndef _CoEng_tiPwrStgDiaRdy_C_DEF
#define _CoEng_tiPwrStgDiaRdy_C_DEF
#define CoEng_tiPwrStgDiaRdy_CM CoEng_tiPwrStgDiaRdy_C
#endif /* _COENG_TIPWRSTGDIARDY_C_DEF */
/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DIR_T_DEF
#define DATA_COENG_STENG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_nThdCrk2Runng_C ----- */
    sint16 _CoEng_nThdCrk2Runng_C;
    /* ----- Parameter CoEng_nThresCranking_C ----- */
    sint16 _CoEng_nThresCranking_C;
    /* ----- Parameter CoEng_nThresNrml2Strt_C ----- */
    sint16 _CoEng_nThresNrml2Strt_C;
    /* ----- Parameter CoEng_tiNrml2Strt_C ----- */
    sint16 _CoEng_tiNrml2Strt_C;
} DATA_CoEng_StEng_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_dir_t DATA_CoEng_StEng_dir
    __attribute__ ((asection (".pta_datadir_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_dir_t * const VECT_CoEng_StEng_dir
    __attribute__ ((asection (".sdata.pta_vectdir_CoEng_StEng","f=as")));
#endif


/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DSERAP_T_DEF
#define DATA_COENG_STENG_DSERAP_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_tiPwrStgDiaRdy_C ----- */
    sint16 _CoEng_tiPwrStgDiaRdy_C;
} DATA_CoEng_StEng_DSERAP_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t DATA_CoEng_StEng_DSERAP
    __attribute__ ((asection (".pta_dataDSERAP_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t * const VECT_CoEng_StEng_DSERAP
    __attribute__ ((asection (".sdata.pta_vectDSERAP_CoEng_StEng","f=as")));
#endif

/* +++++ Addressschema DSERAP +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DIR_T_DEF
#define DATA_COENG_STENG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_nThdCrk2Runng_C ----- */
    sint16 _CoEng_nThdCrk2Runng_C;
    /* ----- Parameter CoEng_nThresCranking_C ----- */
    sint16 _CoEng_nThresCranking_C;
    /* ----- Parameter CoEng_nThresNrml2Strt_C ----- */
    sint16 _CoEng_nThresNrml2Strt_C;
    /* ----- Parameter CoEng_tiNrml2Strt_C ----- */
    sint16 _CoEng_tiNrml2Strt_C;
} DATA_CoEng_StEng_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_dir_t DATA_CoEng_StEng_dir
    __attribute__ ((asection (".pta_datadir_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_dir_t * const VECT_CoEng_StEng_dir
    __attribute__ ((asection (".sdata.pta_vectdir_CoEng_StEng","f=as")));
#endif


/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DSERAP_T_DEF
#define DATA_COENG_STENG_DSERAP_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_tiPwrStgDiaRdy_C ----- */
    sint16 _CoEng_tiPwrStgDiaRdy_C;
} DATA_CoEng_StEng_DSERAP_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t DATA_CoEng_StEng_DSERAP
    __attribute__ ((asection (".pta_dataDSERAP_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t * const VECT_CoEng_StEng_DSERAP
    __attribute__ ((asection (".sdata.pta_vectDSERAP_CoEng_StEng","f=as")));
#endif

/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of ESC_Stack -- */
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter CoEng_nThdCrk2Runng_C -- */
#ifndef CoEng_nThdCrk2Runng_C
#define CoEng_nThdCrk2Runng_C\
    (VECT_CoEng_StEng_dir->_CoEng_nThdCrk2Runng_C)
#endif

#ifndef RP_CoEng_nThdCrk2Runng_C
#define RP_CoEng_nThdCrk2Runng_C\
    (DATA_CoEng_StEng_dir._CoEng_nThdCrk2Runng_C)
#endif

/* -- Macro for referenced Parameter CoEng_nThresCranking_C -- */
#ifndef CoEng_nThresCranking_C
#define CoEng_nThresCranking_C\
    (VECT_CoEng_StEng_dir->_CoEng_nThresCranking_C)
#endif

#ifndef RP_CoEng_nThresCranking_C
#define RP_CoEng_nThresCranking_C\
    (DATA_CoEng_StEng_dir._CoEng_nThresCranking_C)
#endif

/* -- Macro for referenced Parameter CoEng_nThresNrml2Strt_C -- */
#ifndef CoEng_nThresNrml2Strt_C
#define CoEng_nThresNrml2Strt_C\
    (VECT_CoEng_StEng_dir->_CoEng_nThresNrml2Strt_C)
#endif

#ifndef RP_CoEng_nThresNrml2Strt_C
#define RP_CoEng_nThresNrml2Strt_C\
    (DATA_CoEng_StEng_dir._CoEng_nThresNrml2Strt_C)
#endif

/* -- Macro for referenced Parameter CoEng_tiNrml2Strt_C -- */
#ifndef CoEng_tiNrml2Strt_C
#define CoEng_tiNrml2Strt_C\
    (VECT_CoEng_StEng_dir->_CoEng_tiNrml2Strt_C)
#endif

#ifndef RP_CoEng_tiNrml2Strt_C
#define RP_CoEng_tiNrml2Strt_C\
    (DATA_CoEng_StEng_dir._CoEng_tiNrml2Strt_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DIR_T_DEF
#define DATA_COENG_STENG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_nThdCrk2Runng_C ----- */
    sint16 _CoEng_nThdCrk2Runng_C;
    /* ----- Parameter CoEng_nThresCranking_C ----- */
    sint16 _CoEng_nThresCranking_C;
    /* ----- Parameter CoEng_nThresNrml2Strt_C ----- */
    sint16 _CoEng_nThresNrml2Strt_C;
    /* ----- Parameter CoEng_tiNrml2Strt_C ----- */
    sint16 _CoEng_tiNrml2Strt_C;
} DATA_CoEng_StEng_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_dir_t DATA_CoEng_StEng_dir
    __attribute__ ((asection (".pta_datadir_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_dir_t * const VECT_CoEng_StEng_dir
    __attribute__ ((asection (".sdata.pta_vectdir_CoEng_StEng","f=as")));
#endif

/* +++++ Addressschema DSERAP +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_COENG_STENG_DSERAP_T_DEF
#define DATA_COENG_STENG_DSERAP_T_DEF
typedef struct
{
    /* ----- Parameter CoEng_tiPwrStgDiaRdy_C ----- */
    sint16 _CoEng_tiPwrStgDiaRdy_C;
} DATA_CoEng_StEng_DSERAP_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t DATA_CoEng_StEng_DSERAP
    __attribute__ ((asection (".pta_dataDSERAP_CoEng_StEng","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_CoEng_StEng_DSERAP_t * const VECT_CoEng_StEng_DSERAP
    __attribute__ ((asection (".sdata.pta_vectDSERAP_CoEng_StEng","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MPram8 +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter CoEng_nThdCrk2Runng_C -- */
#ifndef CoEng_nThdCrk2Runng_C
#define CoEng_nThdCrk2Runng_C (VECT_CoEng_StEng_dir->_CoEng_nThdCrk2Runng_C)
#endif

#ifndef RP_CoEng_nThdCrk2Runng_C
#define RP_CoEng_nThdCrk2Runng_C (DATA_CoEng_StEng_dir._CoEng_nThdCrk2Runng_C)
#endif

#ifndef __CoEng_nThdCrk2Runng_C
#define __CoEng_nThdCrk2Runng_C (VECT_CoEng_StEng_dir->_CoEng_nThdCrk2Runng_C)
#endif

/* -- Macro for local Parameter CoEng_nThresCranking_C -- */
#ifndef CoEng_nThresCranking_C
#define CoEng_nThresCranking_C (VECT_CoEng_StEng_dir->_CoEng_nThresCranking_C)
#endif

#ifndef RP_CoEng_nThresCranking_C
#define RP_CoEng_nThresCranking_C (DATA_CoEng_StEng_dir._CoEng_nThresCranking_C)
#endif

#ifndef __CoEng_nThresCranking_C
#define __CoEng_nThresCranking_C (VECT_CoEng_StEng_dir->_CoEng_nThresCranking_C)
#endif

/* -- Macro for local Parameter CoEng_nThresNrml2Strt_C -- */
#ifndef CoEng_nThresNrml2Strt_C
#define CoEng_nThresNrml2Strt_C (VECT_CoEng_StEng_dir->_CoEng_nThresNrml2Strt_C)
#endif

#ifndef RP_CoEng_nThresNrml2Strt_C
#define RP_CoEng_nThresNrml2Strt_C (DATA_CoEng_StEng_dir._CoEng_nThresNrml2Strt_C)
#endif

#ifndef __CoEng_nThresNrml2Strt_C
#define __CoEng_nThresNrml2Strt_C (VECT_CoEng_StEng_dir->_CoEng_nThresNrml2Strt_C)
#endif

/* -- Macro for local Parameter CoEng_tiNrml2Strt_C -- */
#ifndef CoEng_tiNrml2Strt_C
#define CoEng_tiNrml2Strt_C (VECT_CoEng_StEng_dir->_CoEng_tiNrml2Strt_C)
#endif

#ifndef RP_CoEng_tiNrml2Strt_C
#define RP_CoEng_tiNrml2Strt_C (DATA_CoEng_StEng_dir._CoEng_tiNrml2Strt_C)
#endif

#ifndef __CoEng_tiNrml2Strt_C
#define __CoEng_tiNrml2Strt_C (VECT_CoEng_StEng_dir->_CoEng_tiNrml2Strt_C)
#endif

/* +++++ Addressschema DSERAP +++++ */

/* -- Macro for local Parameter CoEng_tiPwrStgDiaRdy_C -- */
#ifndef CoEng_tiPwrStgDiaRdy_C
#define CoEng_tiPwrStgDiaRdy_C (VECT_CoEng_StEng_DSERAP->_CoEng_tiPwrStgDiaRdy_C)
#endif

#ifndef RP_CoEng_tiPwrStgDiaRdy_C
#define RP_CoEng_tiPwrStgDiaRdy_C (DATA_CoEng_StEng_DSERAP._CoEng_tiPwrStgDiaRdy_C)
#endif

#ifndef __CoEng_tiPwrStgDiaRdy_C
#define __CoEng_tiPwrStgDiaRdy_C (VECT_CoEng_StEng_DSERAP->_CoEng_tiPwrStgDiaRdy_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MPram8 +++++ */


#undef _DAT_H
#endif /* _COENG_STENG_DAT_H */
