#ifndef _UEGO_CENSRV_DAT_H
#define _UEGO_CENSRV_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter UEGO_idxHWES1B1_C */
#ifndef _UEGO_idxHWES1B1_C_DEF
#define _UEGO_idxHWES1B1_C_DEF
#define UEGO_idxHWES1B1_CM UEGO_idxHWES1B1_C
#endif /* _UEGO_idxHWES1B1_C_DEF */

/* Defined Parameter UEGO_idxHWES1B2_C */
#ifndef _UEGO_idxHWES1B2_C_DEF
#define _UEGO_idxHWES1B2_C_DEF
#define UEGO_idxHWES1B2_CM UEGO_idxHWES1B2_C
#endif /* _UEGO_idxHWES1B2_C_DEF */

/* Defined Parameter UEGO_idxTypS1B1_C */
#ifndef _UEGO_idxTypS1B1_C_DEF
#define _UEGO_idxTypS1B1_C_DEF
#define UEGO_idxTypS1B1_CM UEGO_idxTypS1B1_C
#endif /* _UEGO_idxTypS1B1_C_DEF */

/* Defined Parameter UEGO_idxTypS1B2_C */
#ifndef _UEGO_idxTypS1B2_C_DEF
#define _UEGO_idxTypS1B2_C_DEF
#define UEGO_idxTypS1B2_CM UEGO_idxTypS1B2_C
#endif /* _UEGO_idxTypS1B2_C_DEF */

/* Defined Parameter UEGO_stCipeAdpnOrRpcPrio_C */
#ifndef _UEGO_stCipeAdpnOrRpcPrio_C_DEF
#define _UEGO_stCipeAdpnOrRpcPrio_C_DEF
#define UEGO_stCipeAdpnOrRpcPrio_CM UEGO_stCipeAdpnOrRpcPrio_C
#endif /* _UEGO_stCipeAdpnOrRpcPrio_C_DEF */

/* Defined Parameter UEGO_stCipeVomCdn_C */
#ifndef _UEGO_stCipeVomCdn_C_DEF
#define _UEGO_stCipeVomCdn_C_DEF
#define UEGO_stCipeVomCdn_CM UEGO_stCipeVomCdn_C
#endif /* _UEGO_stCipeVomCdn_C_DEF */

/* Defined Parameter UEGO_tiDurnCipeAdpnFinish_C */
#ifndef _UEGO_tiDurnCipeAdpnFinish_C_DEF
#define _UEGO_tiDurnCipeAdpnFinish_C_DEF
#define UEGO_tiDurnCipeAdpnFinish_CM UEGO_tiDurnCipeAdpnFinish_C
#endif /* _UEGO_tiDurnCipeAdpnFinish_C_DEF */

/* Defined Parameter UEGO_tiDurnRpcFinish_C */
#ifndef _UEGO_tiDurnRpcFinish_C_DEF
#define _UEGO_tiDurnRpcFinish_C_DEF
#define UEGO_tiDurnRpcFinish_CM UEGO_tiDurnRpcFinish_C
#endif /* _UEGO_tiDurnRpcFinish_C_DEF */

/* Defined Parameter UEGO_uBattMax_C */
#ifndef _UEGO_uBattMax_C_DEF
#define _UEGO_uBattMax_C_DEF
#define UEGO_uBattMax_CM UEGO_uBattMax_C
#endif /* _UEGO_uBattMax_C_DEF */

/* Defined Parameter UEGO_uBattMin_C */
#ifndef _UEGO_uBattMin_C_DEF
#define _UEGO_uBattMin_C_DEF
#define UEGO_uBattMin_CM UEGO_uBattMin_C
#endif /* _UEGO_uBattMin_C_DEF */

/* Defined Parameter UEGO_vVehVIdleThd_C */
#ifndef _UEGO_vVehVIdleThd_C_DEF
#define _UEGO_vVehVIdleThd_C_DEF
#define UEGO_vVehVIdleThd_CM UEGO_vVehVIdleThd_C
#endif /* _UEGO_vVehVIdleThd_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class CenSrv_Coordinator ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _CENSRV_COORDINATOR_IMPL_
#define _CENSRV_COORDINATOR_IMPL_

/* -- Wrapper of Class CenSrv_Coordinator in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable flgCipeSnsrAdpnRels */
   bool flgCipeSnsrAdpnRels;

   /* Variable flgRpcRels */
   bool flgRpcRels;

   /* Variable nrCipeSnsrAdpnOldCyc */
   uint8 nrCipeSnsrAdpnOldCyc;

   /* Variable nrRpcOldCyc */
   uint8 nrRpcOldCyc;

} CENSRV_COORDINATOR_IMPL;

#endif /* _CENSRV_COORDINATOR_IMPL_ */


/* ++++++++++++++++++++ Class TurnOffDelayVariable ++++++++++++++++++++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLE_U16_
#define _TURNOFFDELAYVARIABLE_U16_

/* -- Wrapper of Class TurnOffDelayVariable in Addressschema Xram -- */
typedef struct
{
   /* Variable outbit */
   uint8 outbit;

   /* Variable time */
   uint16 time;

} TURNOFFDELAYVARIABLE_U16;

#endif /* _TURNOFFDELAYVARIABLE_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLE_U8_
#define _TURNOFFDELAYVARIABLE_U8_

/* -- Wrapper of Class TurnOffDelayVariable in Addressschema Xram -- */
typedef struct
{
   /* Variable outbit */
   uint8 outbit;

   /* Variable time */
   uint8 time;

} TURNOFFDELAYVARIABLE_U8;

#endif /* _TURNOFFDELAYVARIABLE_U8_ */


/* ++++++++++++++++++++ Class UEGO_SrvTestClass ++++++++++++++++++++++ */
#ifndef _UEGO_SRVTESTCLASS_IMPL_
#define _UEGO_SRVTESTCLASS_IMPL_

/* Class UEGO_SrvTestClass has no Attributes -> Wrapper is not generated */

#endif /* _UEGO_SRVTESTCLASS_IMPL_ */


/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS1DTTtOptClass ++++++++++++++++++++++ */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS1DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[30];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_ */


/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS2DTTtOptClass ++++++++++++++++++++++ */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS2DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[60];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_ */


/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS3DTTtOptClass ++++++++++++++++++++++ */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS3DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[90];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_ */

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


/* Referenced System Constant EXHBNKNUM_SY */


/* EXHBNKNUM_SY Typ=ub */
#ifndef EXHBNKNUM_SY
  #define EXHBNKNUM_SY 1L
#elif (EXHBNKNUM_SY != 1L)
  #error >>>> 'EXHBNKNUM_SY' multiple defined
#endif


/* Referenced System Constant EXHMOD_NRSNSRB1_SC */


/* EXHMOD_NRSNSRB1_SC Typ=ub */
#ifndef EXHMOD_NRSNSRB1_SC
  #define EXHMOD_NRSNSRB1_SC 2L
#elif (EXHMOD_NRSNSRB1_SC != 2L)
  #error >>>> 'EXHMOD_NRSNSRB1_SC' multiple defined
#endif


/* Referenced System Constant EXHMOD_NRSNSRB2_SC */


/* EXHMOD_NRSNSRB2_SC Typ=ub */
#ifndef EXHMOD_NRSNSRB2_SC
  #define EXHMOD_NRSNSRB2_SC 0L
#elif (EXHMOD_NRSNSRB2_SC != 0L)
  #error >>>> 'EXHMOD_NRSNSRB2_SC' multiple defined
#endif


/* Referenced System Constant EXHMOD_TSPS1_SC */


/* EXHMOD_TSPS1_SC Typ=ub */
#ifndef EXHMOD_TSPS1_SC
  #define EXHMOD_TSPS1_SC 0L
#elif (EXHMOD_TSPS1_SC != 0L)
  #error >>>> 'EXHMOD_TSPS1_SC' multiple defined
#endif


/* Referenced System Constant HEVTYP_SY */


/* HEVTYP_SY Typ=sw */
#ifndef HEVTYP_SY
  #define HEVTYP_SY 0L
#elif (HEVTYP_SY != 0L)
  #error >>>> 'HEVTYP_SY' multiple defined
#endif


/* Referenced System Constant NUMCYLACT_SY */


/* NUMCYLACT_SY Typ=sw */
#ifndef NUMCYLACT_SY
  #define NUMCYLACT_SY 8L
#elif (NUMCYLACT_SY != 8L)
  #error >>>> 'NUMCYLACT_SY' multiple defined
#endif


/* Referenced System Constant SPDGOV_LOIDL_BP */


/* SPDGOV_LOIDL_BP Typ=ub */
#ifndef SPDGOV_LOIDL_BP
  #define SPDGOV_LOIDL_BP 0L
#elif (SPDGOV_LOIDL_BP != 0L)
  #error >>>> 'SPDGOV_LOIDL_BP' multiple defined
#endif


/* Referenced System Constant STSP_SY */


/* STSP_SY Typ=ub */
#ifndef STSP_SY
  #define STSP_SY 0L
#elif (STSP_SY != 0L)
  #error >>>> 'STSP_SY' multiple defined
#endif


/* Referenced System Constant SY_AGR */


/* SY_AGR Typ=ub */
#ifndef SY_AGR
  #define SY_AGR 0L
#elif (SY_AGR != 0L)
  #error >>>> 'SY_AGR' multiple defined
#endif


/* Referenced System Constant UEGO_ICS1B1_SY */


/* UEGO_ICS1B1_SY Typ=sw */
#ifndef UEGO_ICS1B1_SY
  #define UEGO_ICS1B1_SY 2L
#elif (UEGO_ICS1B1_SY != 2L)
  #error >>>> 'UEGO_ICS1B1_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS1B2_SY */


/* UEGO_ICS1B2_SY Typ=sw */
#ifndef UEGO_ICS1B2_SY
  #define UEGO_ICS1B2_SY 2L
#elif (UEGO_ICS1B2_SY != 2L)
  #error >>>> 'UEGO_ICS1B2_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS2B1_SY */


/* UEGO_ICS2B1_SY Typ=sw */
#ifndef UEGO_ICS2B1_SY
  #define UEGO_ICS2B1_SY 0L
#elif (UEGO_ICS2B1_SY != 0L)
  #error >>>> 'UEGO_ICS2B1_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS2B2_SY */


/* UEGO_ICS2B2_SY Typ=sw */
#ifndef UEGO_ICS2B2_SY
  #define UEGO_ICS2B2_SY 0L
#elif (UEGO_ICS2B2_SY != 0L)
  #error >>>> 'UEGO_ICS2B2_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS3B1_SY */


/* UEGO_ICS3B1_SY Typ=sw */
#ifndef UEGO_ICS3B1_SY
  #define UEGO_ICS3B1_SY 0L
#elif (UEGO_ICS3B1_SY != 0L)
  #error >>>> 'UEGO_ICS3B1_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS3B2_SY */


/* UEGO_ICS3B2_SY Typ=sw */
#ifndef UEGO_ICS3B2_SY
  #define UEGO_ICS3B2_SY 0L
#elif (UEGO_ICS3B2_SY != 0L)
  #error >>>> 'UEGO_ICS3B2_SY' multiple defined
#endif


/* Referenced System Constant UEGO_IPARRMAX_SY */


/* UEGO_IPARRMAX_SY Typ=ub */
#ifndef UEGO_IPARRMAX_SY
  #define UEGO_IPARRMAX_SY 30L
#elif (UEGO_IPARRMAX_SY != 30L)
  #error >>>> 'UEGO_IPARRMAX_SY' multiple defined
#endif


/* Referenced System Constant UEGO_SNGLCEL_SC */


/* UEGO_SNGLCEL_SC Typ=ub */
#ifndef UEGO_SNGLCEL_SC
  #define UEGO_SNGLCEL_SC 0L
#elif (UEGO_SNGLCEL_SC != 0L)
  #error >>>> 'UEGO_SNGLCEL_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: UEGO_idxTypS1B1 */
/* UEGO_idxTypS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_idxTypS1B2 */
/* UEGO_idxTypS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_mEgFlowS1B1 */
/* UEGO_mEgFlowS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_mEgFlowS1B2 */
/* UEGO_mEgFlowS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_ratLamRecprMdlS1B1 */
/* UEGO_ratLamRecprMdlS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_ratLamRecprMdlS1B2 */
/* UEGO_ratLamRecprMdlS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_tEgMdlS1B1 */
/* UEGO_tEgMdlS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_tEgMdlS1B2 */
/* UEGO_tEgMdlS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_tWallMdlS1B1 */
/* UEGO_tWallMdlS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_tWallMdlS1B2 */
/* UEGO_tWallMdlS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: CoEng_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* CoEng_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: ExhMod_tWallS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* ExhMod_tWallS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: ExhMod_tWallS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* ExhMod_tWallS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: msabg2_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MSABG2_W_EXT__
#define __MSABG2_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 msabg2_w;
#else /* local or exported variable - write access */
extern uint16 msabg2_w;
#endif /* IMPORTED */
#endif /* __MSABG2_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: msabg_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MSABG_W_EXT__
#define __MSABG_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 msabg_w;
#else /* local or exported variable - write access */
extern uint16 msabg_w;
#endif /* IMPORTED */
#endif /* __MSABG_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SpdGov_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* SpdGov_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: tavso2_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __TAVSO2_W_EXT__
#define __TAVSO2_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tavso2_w;
#else /* local or exported variable - write access */
extern uint16 tavso2_w;
#endif /* IMPORTED */
#endif /* __TAVSO2_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: tavso_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __TAVSO_W_EXT__
#define __TAVSO_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tavso_w;
#else /* local or exported variable - write access */
extern uint16 tavso_w;
#endif /* IMPORTED */
#endif /* __TAVSO_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_nrRpcCurrCycS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_nrRpcCurrCycS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_nrRpcCurrCycS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_nrRpcCurrCycS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* +++++ Addressschema IramI16 +++++ */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 


/* Imported Variable: BattU_u */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __BATTU_U_EXT__
#define __BATTU_U_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 BattU_u;
#else /* local or exported variable - write access */
extern sint16 BattU_u;
#endif /* IMPORTED */
#endif /* __BATTU_U_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema MediumReIni +++++ */
/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitI1 +++++ */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 


/* Imported Variable: B_atmtpa */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_ATMTPA_EXT__
#define __B_ATMTPA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_atmtpa;
#define GET_B_atmtpa (B_atmtpa)
#else /* local or exported variable - write access */
extern _bit B_atmtpa;
#define SET_B_atmtpa (B_atmtpa = TRUE)
#define CLR_B_atmtpa (B_atmtpa = FALSE)
#define GET_B_atmtpa (B_atmtpa)
#define PUT_B_atmtpa(val) ((val) ? SET_B_atmtpa : CLR_B_atmtpa)
#endif /* IMPORTED */
#endif /* __B_ATMTPA_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: B_atmtpa2 */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_ATMTPA2_EXT__
#define __B_ATMTPA2_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_atmtpa2;
#define GET_B_atmtpa2 (B_atmtpa2)
#else /* local or exported variable - write access */
extern _bit B_atmtpa2;
#define SET_B_atmtpa2 (B_atmtpa2 = TRUE)
#define CLR_B_atmtpa2 (B_atmtpa2 = FALSE)
#define GET_B_atmtpa2 (B_atmtpa2)
#define PUT_B_atmtpa2(val) ((val) ? SET_B_atmtpa2 : CLR_B_atmtpa2)
#endif /* IMPORTED */
#endif /* __B_ATMTPA2_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: B_evloc */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_EVLOC_EXT__
#define __B_EVLOC_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_evloc;
#define GET_B_evloc (B_evloc)
#else /* local or exported variable - write access */
extern _bit B_evloc;
#define SET_B_evloc (B_evloc = TRUE)
#define CLR_B_evloc (B_evloc = FALSE)
#define GET_B_evloc (B_evloc)
#define PUT_B_evloc(val) ((val) ? SET_B_evloc : CLR_B_evloc)
#endif /* IMPORTED */
#endif /* __B_EVLOC_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitNoReIni +++++ */
/* SingleBitNoReIniHeader */
#pragma section .bbss awbz 


/* Exported Variable: UEGO_flgAllVlvActv */
/* UEGO_flgAllVlvActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgCipeSnsrAdpnRelsS1B1 */
/* UEGO_flgCipeSnsrAdpnRelsS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgCipeSnsrAdpnRelsS1B2 */
/* UEGO_flgCipeSnsrAdpnRelsS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgCmbEngTmpStop */
/* UEGO_flgCmbEngTmpStop is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgDewPntRelsS1B1 */
/* UEGO_flgDewPntRelsS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgDewPntRelsS1B2 */
/* UEGO_flgDewPntRelsS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgEngRunng */
/* UEGO_flgEngRunng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgEngSpdLo */
/* UEGO_flgEngSpdLo is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgEngStopPha */
/* UEGO_flgEngStopPha is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgLamRecprMdlVld */
/* UEGO_flgLamRecprMdlVld is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgPostDrvExtn */
/* UEGO_flgPostDrvExtn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgRpcRelsS1B1 */
/* UEGO_flgRpcRelsS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgRpcRelsS1B2 */
/* UEGO_flgRpcRelsS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgUBattMax */
/* UEGO_flgUBattMax is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgUBattMin */
/* UEGO_flgUBattMin is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitReIni +++++ */
/* SingleBitReIniHeader */
#pragma section .bbss.ReIni awbz 


/* Local Variable: UEGO_flgCipeAdpnEomMatch */
#ifndef __UEGO_FLGCIPEADPNEOMMATCH_EXT__
#define __UEGO_FLGCIPEADPNEOMMATCH_EXT__
extern _bit UEGO_flgCipeAdpnEomMatch;
#define SET_UEGO_flgCipeAdpnEomMatch (UEGO_flgCipeAdpnEomMatch=TRUE)
#define CLR_UEGO_flgCipeAdpnEomMatch (UEGO_flgCipeAdpnEomMatch=FALSE)
#define GET_UEGO_flgCipeAdpnEomMatch (UEGO_flgCipeAdpnEomMatch)
#define PUT_UEGO_flgCipeAdpnEomMatch(val) ((val) ? SET_UEGO_flgCipeAdpnEomMatch : CLR_UEGO_flgCipeAdpnEomMatch)
#endif


/* Local Variable: UEGO_flgEomAftRun */
#ifndef __UEGO_FLGEOMAFTRUN_EXT__
#define __UEGO_FLGEOMAFTRUN_EXT__
extern _bit UEGO_flgEomAftRun;
#define SET_UEGO_flgEomAftRun (UEGO_flgEomAftRun=TRUE)
#define CLR_UEGO_flgEomAftRun (UEGO_flgEomAftRun=FALSE)
#define GET_UEGO_flgEomAftRun (UEGO_flgEomAftRun)
#define PUT_UEGO_flgEomAftRun(val) ((val) ? SET_UEGO_flgEomAftRun : CLR_UEGO_flgEomAftRun)
#endif


/* Local Variable: UEGO_flgEomIdle */
#ifndef __UEGO_FLGEOMIDLE_EXT__
#define __UEGO_FLGEOMIDLE_EXT__
extern _bit UEGO_flgEomIdle;
#define SET_UEGO_flgEomIdle (UEGO_flgEomIdle=TRUE)
#define CLR_UEGO_flgEomIdle (UEGO_flgEomIdle=FALSE)
#define GET_UEGO_flgEomIdle (UEGO_flgEomIdle)
#define PUT_UEGO_flgEomIdle(val) ((val) ? SET_UEGO_flgEomIdle : CLR_UEGO_flgEomIdle)
#endif


/* Local Variable: UEGO_flgRpcEomMatch */
#ifndef __UEGO_FLGRPCEOMMATCH_EXT__
#define __UEGO_FLGRPCEOMMATCH_EXT__
extern _bit UEGO_flgRpcEomMatch;
#define SET_UEGO_flgRpcEomMatch (UEGO_flgRpcEomMatch=TRUE)
#define CLR_UEGO_flgRpcEomMatch (UEGO_flgRpcEomMatch=FALSE)
#define GET_UEGO_flgRpcEomMatch (UEGO_flgRpcEomMatch)
#define PUT_UEGO_flgRpcEomMatch(val) ((val) ? SET_UEGO_flgRpcEomMatch : CLR_UEGO_flgRpcEomMatch)
#endif


/* Exported Variable: UEGO_flgSrvTestActv */
#ifndef __UEGO_FLGSRVTESTACTV_EXT__
#define __UEGO_FLGSRVTESTACTV_EXT__
extern _bit UEGO_flgSrvTestActv;
#define SET_UEGO_flgSrvTestActv (UEGO_flgSrvTestActv=TRUE)
#define CLR_UEGO_flgSrvTestActv (UEGO_flgSrvTestActv=FALSE)
#define GET_UEGO_flgSrvTestActv (UEGO_flgSrvTestActv)
#define PUT_UEGO_flgSrvTestActv(val) ((val) ? SET_UEGO_flgSrvTestActv : CLR_UEGO_flgSrvTestActv)
#endif

/* Footer */
#pragma section 

/* +++++ Addressschema SlowNoReIni +++++ */


/* Imported Variable: lamsons2_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __LAMSONS2_W_EXT__
#define __LAMSONS2_W_EXT__
extern uint16 lamsons2_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: lamsons_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __LAMSONS_W_EXT__
#define __LAMSONS_W_EXT__
extern uint16 lamsons_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class CenSrv_Coordinator ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class TurnOffDelayVariable ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_SrvTestClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS1DTTtOptClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS2DTTtOptClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_ratLamRecprMdlS3DTTtOptClass ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class CenSrv_Coordinator, Instance UEGO_CenSrvCoorrS1B1 */
/* --------------- */


/* Instance UEGO_CenSrvCoorrS1B1, Addressschema MediumReIni */
#ifndef _UEGO_CenSrvCoorrS1B1_DEF
#define _UEGO_CenSrvCoorrS1B1_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern CENSRV_COORDINATOR_IMPL UEGO_CenSrvCoorrS1B1;
/* Footer */
#pragma section 

#endif /* _UEGO_CenSrvCoorrS1B1_DEF */

/* --------------- */
/* Local OML-Class CenSrv_Coordinator, Instance UEGO_CenSrvCoorrS1B2 */
/* --------------- */


/* Instance UEGO_CenSrvCoorrS1B2, Addressschema MediumReIni */
#ifndef _UEGO_CenSrvCoorrS1B2_DEF
#define _UEGO_CenSrvCoorrS1B2_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern CENSRV_COORDINATOR_IMPL UEGO_CenSrvCoorrS1B2;
/* Footer */
#pragma section 

#endif /* _UEGO_CenSrvCoorrS1B2_DEF */

/* --------------- */
/* Local OML-Class UEGO_SrvTestClass, Instance UEGO_SrvComClass */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance UEGO_SrvComClass is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

#endif /* _D_FILE_ */
/* --------------- */
/* Local OML-Class TurnOffDelayVariable, Instance UEGO_flgCipeAdpnEomTOFFV_I */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance UEGO_flgCipeAdpnEomTOFFV_I, Addressschema MediumReIni */
#ifndef _UEGO_flgCipeAdpnEomTOFFV_I_DEF
#define _UEGO_flgCipeAdpnEomTOFFV_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

static TURNOFFDELAYVARIABLE_U16 UEGO_flgCipeAdpnEomTOFFV_I;
/* Footer */
#pragma section 

#endif /* _UEGO_flgCipeAdpnEomTOFFV_I_DEF */

#endif /* _D_FILE_ */
/* --------------- */
/* Local OML-Class TurnOffDelayVariable, Instance UEGO_flgRpcEomTOFFV_I */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance UEGO_flgRpcEomTOFFV_I, Addressschema MediumReIni */
#ifndef _UEGO_flgRpcEomTOFFV_I_DEF
#define _UEGO_flgRpcEomTOFFV_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

static TURNOFFDELAYVARIABLE_U16 UEGO_flgRpcEomTOFFV_I;
/* Footer */
#pragma section 

#endif /* _UEGO_flgRpcEomTOFFV_I_DEF */

#endif /* _D_FILE_ */
/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of CoEng_StEng -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema DSERAP +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					
/* -- Referenced PTA Structures of UEGO_CJ135DiagSnsr -- */
/* -- Typedeclarations of Referenced Functions -- */


/* Referenced Class EdgeFalling */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGEFALLING_U8_
#define _EDGEFALLING_U8_

/* -- Wrapper of Class EdgeFalling in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable oldSignal */
   uint8 oldSignal;

} EDGEFALLING_U8;

#endif /* _EDGEFALLING_U8_ */

/* Referenced Class EdgeRising */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGERISING_U8_
#define _EDGERISING_U8_

/* -- Wrapper of Class EdgeRising in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable oldSignal */
   uint8 oldSignal;

} EDGERISING_U8;

#endif /* _EDGERISING_U8_ */

/* Referenced Class Counter */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _COUNTER_U16_
#define _COUNTER_U16_

/* -- Wrapper of Class Counter in Addressschema Xram -- */
typedef struct
{
   /* Variable counter */
   uint16 counter;

} COUNTER_U16;

#endif /* _COUNTER_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _COUNTER_U8_
#define _COUNTER_U8_

/* -- Wrapper of Class Counter in Addressschema Xram -- */
typedef struct
{
   /* Variable counter */
   uint8 counter;

} COUNTER_U8;

#endif /* _COUNTER_U8_ */

/* Referenced Class TurnOffDelay */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAY_U16_
#define _TURNOFFDELAY_U16_

/* -- Wrapper of Class TurnOffDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint16 time;

} TURNOFFDELAY_U16;

#endif /* _TURNOFFDELAY_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAY_U8_
#define _TURNOFFDELAY_U8_

/* -- Wrapper of Class TurnOffDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint8 time;

} TURNOFFDELAY_U8;

#endif /* _TURNOFFDELAY_U8_ */

/* Referenced Class UEGO_CJ135DiagSnsrClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135DIAGSNSRCLASS_IMPL_
#define _UEGO_CJ135DIAGSNSRCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135DiagSnsrClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable flgRpcRelsReqd */
   bool flgRpcRelsReqd;

   /* Variable flgRpcSuc */
   bool flgRpcSuc;

   /* Variable nrRpcCurrCyc */
   uint8 nrRpcCurrCyc;

   /* Variable stDFCRpc */
   uint32 stDFCRpc;

   /* Variable stRegRpcActv */
   uint16 stRegRpcActv;

   /* Variable stRegRpcActvNxtCyc */
   uint16 stRegRpcActvNxtCyc;

   /* Variable tiRpcSW */
   uint32 tiRpcSW;

   /* Instance of Embedded Class EDGEFALLING_U8 */
   EDGEFALLING_U8 RpcActvEF_I;

   /* Instance of Embedded Class EDGERISING_U8 */
   EDGERISING_U8 RpcActvER_I;

   /* Instance of Embedded Class COUNTER_U8 */
   COUNTER_U8 RpcCTR_I;

   /* Instance of Embedded Class EDGERISING_U8 */
   EDGERISING_U8 RpcSucER_I;

   /* Instance of Embedded Class TURNOFFDELAY_U16 */
   TURNOFFDELAY_U16 RpcTempTOFF_I;

} UEGO_CJ135DIAGSNSRCLASS_IMPL;

#endif /* _UEGO_CJ135DIAGSNSRCLASS_IMPL_ */


/* Referenced Parameter UEGO_numRegIpoffRatRpc_C */


#ifndef _UEGO_numRegIpoffRatRpc_C_DEF
#define _UEGO_numRegIpoffRatRpc_C_DEF
#define UEGO_numRegIpoffRatRpc_CM UEGO_numRegIpoffRatRpc_C
#endif /* _UEGO_NUMREGIPOFFRATRPC_C_DEF */

/* Referenced Parameter UEGO_numRegIpsmRpc_C */


#ifndef _UEGO_numRegIpsmRpc_C_DEF
#define _UEGO_numRegIpsmRpc_C_DEF
#define UEGO_numRegIpsmRpc_CM UEGO_numRegIpsmRpc_C
#endif /* _UEGO_NUMREGIPSMRPC_C_DEF */

/* Referenced Parameter UEGO_numRegPatRpc_C */


#ifndef _UEGO_numRegPatRpc_C_DEF
#define _UEGO_numRegPatRpc_C_DEF
#define UEGO_numRegPatRpc_CM UEGO_numRegPatRpc_C
#endif /* _UEGO_NUMREGPATRPC_C_DEF */

/* Referenced Parameter UEGO_stRpcVomCdn_C */


#ifndef _UEGO_stRpcVomCdn_C_DEF
#define _UEGO_stRpcVomCdn_C_DEF
#define UEGO_stRpcVomCdn_CM UEGO_stRpcVomCdn_C
#endif /* _UEGO_STRPCVOMCDN_C_DEF */
/* +++++ Addressschema DataFast +++++ */
			
/* Parameter UEGO_stRpcVomCdn_C in Addressschema DataFast is referenced from function UEGO_CJ135DiagSnsr */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CJ135DIAGSNSR_DATAFAST_T_DEF
#define DATA_UEGO_CJ135DIAGSNSR_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_rLamMinRpc_C ----- */
    sint16 _UEGO_rLamMinRpc_C;
    /* ----- Parameter UEGO_tiMinRpcDlyNotSuc_C ----- */
    uint32 _UEGO_tiMinRpcDlyNotSuc_C;
    /* ----- Parameter UEGO_tiMinRpcDlySuc_C ----- */
    uint32 _UEGO_tiMinRpcDlySuc_C;
    /* ----- Parameter UEGO_tiMinRpcDurn_C ----- */
    uint16 _UEGO_tiMinRpcDurn_C;
    /* ----- Parameter UEGO_tiRpcTDly_C ----- */
    uint16 _UEGO_tiRpcTDly_C;
    /* ----- Parameter UEGO_tMinRpc_C ----- */
    uint16 _UEGO_tMinRpc_C;
    /* ----- Parameter UEGO_numRegIpoffRatRpc_C ----- */
    sint16 _UEGO_numRegIpoffRatRpc_C;
    /* ----- Parameter UEGO_numRegIpsmRpc_C ----- */
    uint8 _UEGO_numRegIpsmRpc_C;
    /* ----- Parameter UEGO_numRegPatRpc_C ----- */
    uint16 _UEGO_numRegPatRpc_C;
    /* ----- Parameter UEGO_stRpcVomCdn_C ----- */
    uint8 _UEGO_stRpcVomCdn_C;
} DATA_UEGO_CJ135DiagSnsr_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CJ135DiagSnsr_DataFast_t DATA_UEGO_CJ135DiagSnsr_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CJ135DiagSnsr","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CJ135DiagSnsr_DataFast_t * const VECT_UEGO_CJ135DiagSnsr_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CJ135DiagSnsr","f=as")));
#endif


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for referenced Parameter UEGO_stRpcVomCdn_C -- */
#ifndef UEGO_stRpcVomCdn_C
#define UEGO_stRpcVomCdn_C\
    (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_stRpcVomCdn_C)
#endif

#ifndef RP_UEGO_stRpcVomCdn_C
#define RP_UEGO_stRpcVomCdn_C\
    (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_stRpcVomCdn_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema DataFast +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CENSRV_DATAFAST_T_DEF
#define DATA_UEGO_CENSRV_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_idxHWES1B1_C ----- */
    uint8 _UEGO_idxHWES1B1_C;
    /* ----- Parameter UEGO_idxHWES1B2_C ----- */
    uint8 _UEGO_idxHWES1B2_C;
    /* ----- Parameter UEGO_idxTypS1B1_C ----- */
    uint8 _UEGO_idxTypS1B1_C;
    /* ----- Parameter UEGO_idxTypS1B2_C ----- */
    uint8 _UEGO_idxTypS1B2_C;
    /* ----- Parameter UEGO_stCipeAdpnOrRpcPrio_C ----- */
    uint8 _UEGO_stCipeAdpnOrRpcPrio_C;
    /* ----- Parameter UEGO_stCipeVomCdn_C ----- */
    uint8 _UEGO_stCipeVomCdn_C;
    /* ----- Parameter UEGO_tiDurnCipeAdpnFinish_C ----- */
    uint16 _UEGO_tiDurnCipeAdpnFinish_C;
    /* ----- Parameter UEGO_tiDurnRpcFinish_C ----- */
    uint16 _UEGO_tiDurnRpcFinish_C;
    /* ----- Parameter UEGO_uBattMax_C ----- */
    sint16 _UEGO_uBattMax_C;
    /* ----- Parameter UEGO_uBattMin_C ----- */
    sint16 _UEGO_uBattMin_C;
    /* ----- Parameter UEGO_vVehVIdleThd_C ----- */
    sint16 _UEGO_vVehVIdleThd_C;
} DATA_UEGO_CenSrv_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CenSrv_DataFast_t DATA_UEGO_CenSrv_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CenSrv","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CenSrv_DataFast_t * const VECT_UEGO_CenSrv_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CenSrv","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema SingleBitNoReIni +++++ */

/* +++++ Addressschema SingleBitReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for local Parameter UEGO_idxHWES1B1_C -- */
#ifndef UEGO_idxHWES1B1_C
#define UEGO_idxHWES1B1_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B1_C)
#endif

#ifndef RP_UEGO_idxHWES1B1_C
#define RP_UEGO_idxHWES1B1_C (DATA_UEGO_CenSrv_DataFast._UEGO_idxHWES1B1_C)
#endif

#ifndef __UEGO_idxHWES1B1_C
#define __UEGO_idxHWES1B1_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B1_C)
#endif

/* -- Macro for local Parameter UEGO_idxHWES1B2_C -- */
#ifndef UEGO_idxHWES1B2_C
#define UEGO_idxHWES1B2_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B2_C)
#endif

#ifndef RP_UEGO_idxHWES1B2_C
#define RP_UEGO_idxHWES1B2_C (DATA_UEGO_CenSrv_DataFast._UEGO_idxHWES1B2_C)
#endif

#ifndef __UEGO_idxHWES1B2_C
#define __UEGO_idxHWES1B2_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B2_C)
#endif

/* -- Macro for local Parameter UEGO_idxTypS1B1_C -- */
#ifndef UEGO_idxTypS1B1_C
#define UEGO_idxTypS1B1_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxTypS1B1_C)
#endif

#ifndef RP_UEGO_idxTypS1B1_C
#define RP_UEGO_idxTypS1B1_C (DATA_UEGO_CenSrv_DataFast._UEGO_idxTypS1B1_C)
#endif

#ifndef __UEGO_idxTypS1B1_C
#define __UEGO_idxTypS1B1_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxTypS1B1_C)
#endif

/* -- Macro for local Parameter UEGO_idxTypS1B2_C -- */
#ifndef UEGO_idxTypS1B2_C
#define UEGO_idxTypS1B2_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxTypS1B2_C)
#endif

#ifndef RP_UEGO_idxTypS1B2_C
#define RP_UEGO_idxTypS1B2_C (DATA_UEGO_CenSrv_DataFast._UEGO_idxTypS1B2_C)
#endif

#ifndef __UEGO_idxTypS1B2_C
#define __UEGO_idxTypS1B2_C (VECT_UEGO_CenSrv_DataFast->_UEGO_idxTypS1B2_C)
#endif

/* -- Macro for local Parameter UEGO_stCipeAdpnOrRpcPrio_C -- */
#ifndef UEGO_stCipeAdpnOrRpcPrio_C
#define UEGO_stCipeAdpnOrRpcPrio_C (VECT_UEGO_CenSrv_DataFast->_UEGO_stCipeAdpnOrRpcPrio_C)
#endif

#ifndef RP_UEGO_stCipeAdpnOrRpcPrio_C
#define RP_UEGO_stCipeAdpnOrRpcPrio_C (DATA_UEGO_CenSrv_DataFast._UEGO_stCipeAdpnOrRpcPrio_C)
#endif

#ifndef __UEGO_stCipeAdpnOrRpcPrio_C
#define __UEGO_stCipeAdpnOrRpcPrio_C (VECT_UEGO_CenSrv_DataFast->_UEGO_stCipeAdpnOrRpcPrio_C)
#endif

/* -- Macro for local Parameter UEGO_stCipeVomCdn_C -- */
#ifndef UEGO_stCipeVomCdn_C
#define UEGO_stCipeVomCdn_C (VECT_UEGO_CenSrv_DataFast->_UEGO_stCipeVomCdn_C)
#endif

#ifndef RP_UEGO_stCipeVomCdn_C
#define RP_UEGO_stCipeVomCdn_C (DATA_UEGO_CenSrv_DataFast._UEGO_stCipeVomCdn_C)
#endif

#ifndef __UEGO_stCipeVomCdn_C
#define __UEGO_stCipeVomCdn_C (VECT_UEGO_CenSrv_DataFast->_UEGO_stCipeVomCdn_C)
#endif

/* -- Macro for local Parameter UEGO_tiDurnCipeAdpnFinish_C -- */
#ifndef UEGO_tiDurnCipeAdpnFinish_C
#define UEGO_tiDurnCipeAdpnFinish_C (VECT_UEGO_CenSrv_DataFast->_UEGO_tiDurnCipeAdpnFinish_C)
#endif

#ifndef RP_UEGO_tiDurnCipeAdpnFinish_C
#define RP_UEGO_tiDurnCipeAdpnFinish_C (DATA_UEGO_CenSrv_DataFast._UEGO_tiDurnCipeAdpnFinish_C)
#endif

#ifndef __UEGO_tiDurnCipeAdpnFinish_C
#define __UEGO_tiDurnCipeAdpnFinish_C (VECT_UEGO_CenSrv_DataFast->_UEGO_tiDurnCipeAdpnFinish_C)
#endif

/* -- Macro for local Parameter UEGO_tiDurnRpcFinish_C -- */
#ifndef UEGO_tiDurnRpcFinish_C
#define UEGO_tiDurnRpcFinish_C (VECT_UEGO_CenSrv_DataFast->_UEGO_tiDurnRpcFinish_C)
#endif

#ifndef RP_UEGO_tiDurnRpcFinish_C
#define RP_UEGO_tiDurnRpcFinish_C (DATA_UEGO_CenSrv_DataFast._UEGO_tiDurnRpcFinish_C)
#endif

#ifndef __UEGO_tiDurnRpcFinish_C
#define __UEGO_tiDurnRpcFinish_C (VECT_UEGO_CenSrv_DataFast->_UEGO_tiDurnRpcFinish_C)
#endif

/* -- Macro for local Parameter UEGO_uBattMax_C -- */
#ifndef UEGO_uBattMax_C
#define UEGO_uBattMax_C (VECT_UEGO_CenSrv_DataFast->_UEGO_uBattMax_C)
#endif

#ifndef RP_UEGO_uBattMax_C
#define RP_UEGO_uBattMax_C (DATA_UEGO_CenSrv_DataFast._UEGO_uBattMax_C)
#endif

#ifndef __UEGO_uBattMax_C
#define __UEGO_uBattMax_C (VECT_UEGO_CenSrv_DataFast->_UEGO_uBattMax_C)
#endif

/* -- Macro for local Parameter UEGO_uBattMin_C -- */
#ifndef UEGO_uBattMin_C
#define UEGO_uBattMin_C (VECT_UEGO_CenSrv_DataFast->_UEGO_uBattMin_C)
#endif

#ifndef RP_UEGO_uBattMin_C
#define RP_UEGO_uBattMin_C (DATA_UEGO_CenSrv_DataFast._UEGO_uBattMin_C)
#endif

#ifndef __UEGO_uBattMin_C
#define __UEGO_uBattMin_C (VECT_UEGO_CenSrv_DataFast->_UEGO_uBattMin_C)
#endif

/* -- Macro for local Parameter UEGO_vVehVIdleThd_C -- */
#ifndef UEGO_vVehVIdleThd_C
#define UEGO_vVehVIdleThd_C (VECT_UEGO_CenSrv_DataFast->_UEGO_vVehVIdleThd_C)
#endif

#ifndef RP_UEGO_vVehVIdleThd_C
#define RP_UEGO_vVehVIdleThd_C (DATA_UEGO_CenSrv_DataFast._UEGO_vVehVIdleThd_C)
#endif

#ifndef __UEGO_vVehVIdleThd_C
#define __UEGO_vVehVIdleThd_C (VECT_UEGO_CenSrv_DataFast->_UEGO_vVehVIdleThd_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema SingleBitNoReIni +++++ */

/* +++++ Addressschema SingleBitReIni +++++ */


#undef _DAT_H
#endif /* _UEGO_CENSRV_DAT_H */
