#ifndef _EPMRRS_AGDETECT_DAT_H
#define _EPMRRS_AGDETECT_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmRRS_facExTTime_CA */
#ifndef _EpmRRS_facExTTime_CA_DEF
#define _EpmRRS_facExTTime_CA_DEF
#define EpmRRS_facExTTime_CAM EpmRRS_facExTTime_CA
#endif /* _EpmRRS_facExTTime_CA_DEF */

/* Defined Parameter EpmRRS_nEngMax_C */
#ifndef _EpmRRS_nEngMax_C_DEF
#define _EpmRRS_nEngMax_C_DEF
#define EpmRRS_nEngMax_CM EpmRRS_nEngMax_C
#endif /* _EpmRRS_nEngMax_C_DEF */

/* Defined Parameter EpmRRS_tiMaxToothTime_C */
#ifndef _EpmRRS_tiMaxToothTime_C_DEF
#define _EpmRRS_tiMaxToothTime_C_DEF
#define EpmRRS_tiMaxToothTime_CM EpmRRS_tiMaxToothTime_C
#endif /* _EpmRRS_tiMaxToothTime_C_DEF */

/* Defined Parameter EpmRRS_tiMinToothTime_C */
#ifndef _EpmRRS_tiMinToothTime_C_DEF
#define _EpmRRS_tiMinToothTime_C_DEF
#define EpmRRS_tiMinToothTime_CM EpmRRS_tiMinToothTime_C
#endif /* _EpmRRS_tiMinToothTime_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CASTYP_SY */


/* CASTYP_SY Typ=sw */
#ifndef CASTYP_SY
  #define CASTYP_SY 1L
#elif (CASTYP_SY != 1L)
  #error >>>> 'CASTYP_SY' multiple defined
#endif


/* Referenced System Constant CMBTYP_GS */


/* CMBTYP_GS Typ=ub */
#ifndef CMBTYP_GS
  #define CMBTYP_GS 1L
#elif (CMBTYP_GS != 1L)
  #error >>>> 'CMBTYP_GS' multiple defined
#endif


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant CRSSENSTYP_SY */


/* CRSSENSTYP_SY Typ=sw */
#ifndef CRSSENSTYP_SY
  #define CRSSENSTYP_SY 1L
#elif (CRSSENSTYP_SY != 1L)
  #error >>>> 'CRSSENSTYP_SY' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMGAP */


/* EPMHCRS_NUMGAP Typ=sl */
#ifndef EPMHCRS_NUMGAP
  #define EPMHCRS_NUMGAP 1L
#elif (EPMHCRS_NUMGAP != 1L)
  #error >>>> 'EPMHCRS_NUMGAP' multiple defined
#endif


/* Referenced System Constant EPMRRS_SY */


/* EPMRRS_SY Typ=sw */
#ifndef EPMRRS_SY
  #define EPMRRS_SY 2L
#elif (EPMRRS_SY != 2L)
  #error >>>> 'EPMRRS_SY' multiple defined
#endif


/* Referenced System Constant EPMRRS_TITEMP_CURX_SC */


/* EPMRRS_TITEMP_CURX_SC Typ=ub */
#ifndef EPMRRS_TITEMP_CURX_SC
  #define EPMRRS_TITEMP_CURX_SC 3L
#elif (EPMRRS_TITEMP_CURX_SC != 3L)
  #error >>>> 'EPMRRS_TITEMP_CURX_SC' multiple defined
#endif


/* Referenced System Constant EPMRVSROTYMETH_SY */


/* EPMRVSROTYMETH_SY Typ=sw */
#ifndef EPMRVSROTYMETH_SY
  #define EPMRVSROTYMETH_SY 0L
#elif (EPMRVSROTYMETH_SY != 0L)
  #error >>>> 'EPMRVSROTYMETH_SY' multiple defined
#endif


/* Referenced System Constant EPM_KEEPDGISYNC_SC */


/* EPM_KEEPDGISYNC_SC Typ=sw */
#ifndef EPM_KEEPDGISYNC_SC
  #define EPM_KEEPDGISYNC_SC 0L
#elif (EPM_KEEPDGISYNC_SC != 0L)
  #error >>>> 'EPM_KEEPDGISYNC_SC' multiple defined
#endif


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
#endif


/* Referenced System Constant EPM_NUMCRSREVWCY */


/* EPM_NUMCRSREVWCY Typ=sl */
#ifndef EPM_NUMCRSREVWCY
  #define EPM_NUMCRSREVWCY 2L
#elif (EPM_NUMCRSREVWCY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY' multiple defined
#endif


/* Referenced System Constant EPM_PHIMAXMSK */


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif


/* Referenced System Constant EPM_RVSROTPRED_SC */


/* EPM_RVSROTPRED_SC Typ=sw */
#ifndef EPM_RVSROTPRED_SC
  #define EPM_RVSROTPRED_SC 0L
#elif (EPM_RVSROTPRED_SC != 0L)
  #error >>>> 'EPM_RVSROTPRED_SC' multiple defined
#endif


/* Referenced System Constant STSP_SY */


/* STSP_SY Typ=ub */
#ifndef STSP_SY
  #define STSP_SY 0L
#elif (STSP_SY != 0L)
  #error >>>> 'STSP_SY' multiple defined
#endif


/* Referenced System Constant TIME_US_ZERO */


/* TIME_US_ZERO Typ=sl */
#ifndef TIME_US_ZERO
  #define TIME_US_ZERO 0L
#elif (TIME_US_ZERO != 0L)
  #error >>>> 'TIME_US_ZERO' multiple defined
#endif


/* Local System Constant ENGN2TIINCPERLOW_FACT */


/* ENGN2TIINCPERLOW_FACT Typ=ub */
#ifndef ENGN2TIINCPERLOW_FACT
  #define ENGN2TIINCPERLOW_FACT 16L
#elif (ENGN2TIINCPERLOW_FACT != 16L)
  #error >>>> 'ENGN2TIINCPERLOW_FACT' multiple defined
#endif


/* Local System Constant ENGN2TIINCPERLOW_SHFT */


/* ENGN2TIINCPERLOW_SHFT Typ=ub */
#ifndef ENGN2TIINCPERLOW_SHFT
  #define ENGN2TIINCPERLOW_SHFT 4L
#elif (ENGN2TIINCPERLOW_SHFT != 4L)
  #error >>>> 'ENGN2TIINCPERLOW_SHFT' multiple defined
#endif


/* Local System Constant EPMRRS_NUMPER */


/* EPMRRS_NUMPER Typ=ub */
#ifndef EPMRRS_NUMPER
  #define EPMRRS_NUMPER 16L
#elif (EPMRRS_NUMPER != 16L)
  #error >>>> 'EPMRRS_NUMPER' multiple defined
#endif


/* Local System Constant EPMRRS_TITOOTHPERTOL */


/* EPMRRS_TITOOTHPERTOL Typ=sl */
#ifndef EPMRRS_TITOOTHPERTOL
  #define EPMRRS_TITOOTHPERTOL 1000L
#elif (EPMRRS_TITOOTHPERTOL != 1000L)
  #error >>>> 'EPMRRS_TITOOTHPERTOL' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: EpmRRS_ctIncEngStop_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_CTINCENGSTOP_MP_EXT__
#define __EPMRRS_CTINCENGSTOP_MP_EXT__
extern uint16 EpmRRS_ctIncEngStop_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_ctIncRdPos_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_CTINCRDPOS_MP_EXT__
#define __EPMRRS_CTINCRDPOS_MP_EXT__
extern uint16 EpmRRS_ctIncRdPos_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_ctToothTimeout_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_CTTOOTHTIMEOUT_MP_EXT__
#define __EPMRRS_CTTOOTHTIMEOUT_MP_EXT__
extern uint16 EpmRRS_ctToothTimeout_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_phiCalcPos_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_PHICALCPOS_MP_EXT__
#define __EPMRRS_PHICALCPOS_MP_EXT__
extern sint16 EpmRRS_phiCalcPos_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_phiRdPos_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_PHIRDPOS_MP_EXT__
#define __EPMRRS_PHIRDPOS_MP_EXT__
extern sint16 EpmRRS_phiRdPos_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_stEngStopAg_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_STENGSTOPAG_MP_EXT__
#define __EPMRRS_STENGSTOPAG_MP_EXT__
extern uint8 EpmRRS_stEngStopAg_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_stReason_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_STREASON_MP_EXT__
#define __EPMRRS_STREASON_MP_EXT__
extern uint8 EpmRRS_stReason_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmRRS_tiToothPerDGI_mp */
/* MpA_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMRRS_TITOOTHPERDGI_MP_EXT__
#define __EPMRRS_TITOOTHPERDGI_MP_EXT__
extern sint32 EpmRRS_tiToothPerDGI_mp[4]    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: expollin_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EXPOLLIN_MP_EXT__
#define __EXPOLLIN_MP_EXT__
extern sint16 expollin_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: expolmax_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EXPOLMAX_MP_EXT__
#define __EXPOLMAX_MP_EXT__
extern sint16 expolmax_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: expolquad_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EXPOLQUAD_MP_EXT__
#define __EXPOLQUAD_MP_EXT__
extern sint16 expolquad_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmRRS_bAgDetectflgClr */
#ifdef _DAT_H
#ifndef __EPMRRS_BAGDETECTFLGCLR_EXT__
#define __EPMRRS_BAGDETECTFLGCLR_EXT__
extern uint8 EpmRRS_bAgDetectflgClr;
#endif
#endif


/* Local Variable: EpmRRS_stAgDetect */
#ifdef _DAT_H
#ifndef __EPMRRS_STAGDETECT_EXT__
#define __EPMRRS_STAGDETECT_EXT__
extern uint8 EpmRRS_stAgDetect;
#endif
#endif


/* Local Variable: EpmRRS_stEnable */
#ifdef _DAT_H
#ifndef __EPMRRS_STENABLE_EXT__
#define __EPMRRS_STENABLE_EXT__
extern bool EpmRRS_stEnable;
#endif
#endif


/* Local Variable: EpmRRS_stPlausAngle */
#ifdef _DAT_H
#ifndef __EPMRRS_STPLAUSANGLE_EXT__
#define __EPMRRS_STPLAUSANGLE_EXT__
extern uint8 EpmRRS_stPlausAngle;
#endif
#endif


/* Exported Variable: EpmRRS_bEngStopAg */
/* EpmRRS_bEngStopAg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_bEngSwOff */
/* EpmRRS_bEngSwOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_phiEngPos */
/* EpmRRS_phiEngPos is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_phiEngStop */
/* EpmRRS_phiEngStop is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_phiStopPos */
/* EpmRRS_phiStopPos is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_phiStopPosCyl */
/* EpmRRS_phiStopPosCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_stEngPos */
/* EpmRRS_stEngPos is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmRRS_stEngStop */
#ifdef _DAT_H
#ifndef __EPMRRS_STENGSTOP_EXT__
#define __EPMRRS_STENGSTOP_EXT__
extern uint8 EpmRRS_stEngStop;
#endif
#endif


/* Exported Variable: EpmRRS_stRotDir */
/* EpmRRS_stRotDir is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmCrS_phiIgnInc */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMCRS_PHIIGNINC_EXT__
#define __EPMCRS_PHIIGNINC_EXT__
extern sint16 EpmCrS_phiIgnInc;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHCrS_ctIncEngPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHCrS_ctIncEngPosStrt */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHCrS_stRotDir */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stRR */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_stRR is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng10ms */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stOpMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stOpMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Strt_stStaActv */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __STRT_STSTAACTV_EXT__
#define __STRT_STSTAACTV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 Strt_stStaActv;
#else /* local or exported variable - write access */
extern uint8 Strt_stStaActv;
#endif /* IMPORTED */
#endif /* __STRT_STSTAACTV_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED


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

/* -- No referenced PTA Structures of EpmCrS_Plaus -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmSyn_CaSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					
/* -- Referenced PTA Structures of Epm_Ini -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EPM_NUMCRSREVWCY */


#ifndef _EPM_NUMCRSREVWCY_DEF
#define _EPM_NUMCRSREVWCY_DEF


/* EPM_NUMCRSREVWCY Typ=sl */
#ifndef EPM_NUMCRSREVWCY
  #define EPM_NUMCRSREVWCY 2L
#elif (EPM_NUMCRSREVWCY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY' multiple defined
#endif

#endif /* _EPM_NUMCRSREVWCY_DEF */

/* Referenced Parameter EPM_NUMCRSREVWCY_SY */


#ifndef _EPM_NUMCRSREVWCY_SY_DEF
#define _EPM_NUMCRSREVWCY_SY_DEF


/* EPM_NUMCRSREVWCY_SY Typ=sl */
#ifndef EPM_NUMCRSREVWCY_SY
  #define EPM_NUMCRSREVWCY_SY 2L
#elif (EPM_NUMCRSREVWCY_SY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY_SY' multiple defined
#endif

#endif /* _EPM_NUMCRSREVWCY_SY_DEF */

/* Referenced Parameter Epm_numCyl_C */


#ifndef _Epm_numCyl_C_DEF
#define _Epm_numCyl_C_DEF
#define Epm_numCyl_CM Epm_numCyl_C
#endif /* _EPM_NUMCYL_C_DEF */

/* Referenced Parameter Epm_numFireSeg_C */


#ifndef _Epm_numFireSeg_C_DEF
#define _Epm_numFireSeg_C_DEF
#define Epm_numFireSeg_CM Epm_numFireSeg_C
#endif /* _EPM_NUMFIRESEG_C_DEF */

/* Referenced Parameter EPM_PHICRSREV */


#ifndef _EPM_PHICRSREV_DEF
#define _EPM_PHICRSREV_DEF


/* EPM_PHICRSREV Typ=sl */
#ifndef EPM_PHICRSREV
  #define EPM_PHICRSREV 360L
#elif (EPM_PHICRSREV != 360L)
  #error >>>> 'EPM_PHICRSREV' multiple defined
#endif

#endif /* _EPM_PHICRSREV_DEF */

/* Referenced Parameter Epm_phiGap2Zero_C */


#ifndef _Epm_phiGap2Zero_C_DEF
#define _Epm_phiGap2Zero_C_DEF
#define Epm_phiGap2Zero_CM Epm_phiGap2Zero_C
#endif /* _EPM_PHIGAP2ZERO_C_DEF */

/* Referenced Parameter EPM_PHIMAXMSK */


#ifndef _EPM_PHIMAXMSK_DEF
#define _EPM_PHIMAXMSK_DEF


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif

#endif /* _EPM_PHIMAXMSK_DEF */

/* Referenced Parameter EPM_PHIMAX_SY */


#ifndef _EPM_PHIMAX_SY_DEF
#define _EPM_PHIMAX_SY_DEF


/* EPM_PHIMAX_SY Typ=sw */
#ifndef EPM_PHIMAX_SY
  #define EPM_PHIMAX_SY 32767L
#elif (EPM_PHIMAX_SY != 32767L)
  #error >>>> 'EPM_PHIMAX_SY' multiple defined
#endif

#endif /* _EPM_PHIMAX_SY_DEF */

/* Referenced Parameter Epm_phiTdc1_C */


#ifndef _Epm_phiTdc1_C_DEF
#define _Epm_phiTdc1_C_DEF
#define Epm_phiTdc1_CM Epm_phiTdc1_C
#endif /* _EPM_PHITDC1_C_DEF */

/* Referenced Parameter NUMCASMAX */


#ifndef _NUMCASMAX_DEF
#define _NUMCASMAX_DEF


/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif

#endif /* _NUMCASMAX_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter Epm_phiGap2Zero_C in Addressschema dir is referenced from function Epm_Ini */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPM_INI_DIR_T_DEF
#define DATA_EPM_INI_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Epm_numCyl_C ----- */
    uint8 _Epm_numCyl_C;
    /* ----- Parameter Epm_numFireSeg_C ----- */
    uint8 _Epm_numFireSeg_C[8];
    /* ----- Parameter Epm_phiGap2Zero_C ----- */
    sint16 _Epm_phiGap2Zero_C;
    /* ----- Parameter Epm_phiTdc1_C ----- */
    sint16 _Epm_phiTdc1_C;
} DATA_Epm_Ini_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Epm_Ini_dir_t DATA_Epm_Ini_dir
    __attribute__ ((asection (".pta_datadir_Epm_Ini","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Epm_Ini_dir_t * const VECT_Epm_Ini_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Epm_Ini","f=as")));
#endif

/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_Core -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter Epm_phiGap2Zero_C -- */
#ifndef Epm_phiGap2Zero_C
#define Epm_phiGap2Zero_C\
    (VECT_Epm_Ini_dir->_Epm_phiGap2Zero_C)
#endif

#ifndef RP_Epm_phiGap2Zero_C
#define RP_Epm_phiGap2Zero_C\
    (DATA_Epm_Ini_dir._Epm_phiGap2Zero_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMRRS_AGDETECT_DIR_T_DEF
#define DATA_EPMRRS_AGDETECT_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmRRS_facExTTime_CA ----- */
    uint16 _EpmRRS_facExTTime_CA[3];
    /* ----- Parameter EpmRRS_nEngMax_C ----- */
    sint16 _EpmRRS_nEngMax_C;
    /* ----- Parameter EpmRRS_tiMaxToothTime_C ----- */
    uint8 _EpmRRS_tiMaxToothTime_C;
    /* ----- Parameter EpmRRS_tiMinToothTime_C ----- */
    uint8 _EpmRRS_tiMinToothTime_C;
} DATA_EpmRRS_AgDetect_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmRRS_AgDetect_dir_t DATA_EpmRRS_AgDetect_dir
    __attribute__ ((asection (".pta_datadir_EpmRRS_AgDetect","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmRRS_AgDetect_dir_t * const VECT_EpmRRS_AgDetect_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmRRS_AgDetect","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmRRS_facExTTime_CA -- */
#ifndef EpmRRS_facExTTime_CA
#define EpmRRS_facExTTime_CA (VECT_EpmRRS_AgDetect_dir->_EpmRRS_facExTTime_CA)
#endif

#ifndef RP_EpmRRS_facExTTime_CA
#define RP_EpmRRS_facExTTime_CA (DATA_EpmRRS_AgDetect_dir._EpmRRS_facExTTime_CA)
#endif

#ifndef __EpmRRS_facExTTime_CA
#define __EpmRRS_facExTTime_CA (VECT_EpmRRS_AgDetect_dir->_EpmRRS_facExTTime_CA)
#endif

/* -- Macro for local Parameter EpmRRS_nEngMax_C -- */
#ifndef EpmRRS_nEngMax_C
#define EpmRRS_nEngMax_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_nEngMax_C)
#endif

#ifndef RP_EpmRRS_nEngMax_C
#define RP_EpmRRS_nEngMax_C (DATA_EpmRRS_AgDetect_dir._EpmRRS_nEngMax_C)
#endif

#ifndef __EpmRRS_nEngMax_C
#define __EpmRRS_nEngMax_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_nEngMax_C)
#endif

/* -- Macro for local Parameter EpmRRS_tiMaxToothTime_C -- */
#ifndef EpmRRS_tiMaxToothTime_C
#define EpmRRS_tiMaxToothTime_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_tiMaxToothTime_C)
#endif

#ifndef RP_EpmRRS_tiMaxToothTime_C
#define RP_EpmRRS_tiMaxToothTime_C (DATA_EpmRRS_AgDetect_dir._EpmRRS_tiMaxToothTime_C)
#endif

#ifndef __EpmRRS_tiMaxToothTime_C
#define __EpmRRS_tiMaxToothTime_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_tiMaxToothTime_C)
#endif

/* -- Macro for local Parameter EpmRRS_tiMinToothTime_C -- */
#ifndef EpmRRS_tiMinToothTime_C
#define EpmRRS_tiMinToothTime_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_tiMinToothTime_C)
#endif

#ifndef RP_EpmRRS_tiMinToothTime_C
#define RP_EpmRRS_tiMinToothTime_C (DATA_EpmRRS_AgDetect_dir._EpmRRS_tiMinToothTime_C)
#endif

#ifndef __EpmRRS_tiMinToothTime_C
#define __EpmRRS_tiMinToothTime_C (VECT_EpmRRS_AgDetect_dir->_EpmRRS_tiMinToothTime_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMRRS_AGDETECT_DAT_H */
