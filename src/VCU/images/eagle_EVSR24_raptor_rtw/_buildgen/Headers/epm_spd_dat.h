#ifndef _EPM_SPD_DAT_H
#define _EPM_SPD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Epm_tiSpd2Zero_C */
#ifndef _Epm_tiSpd2Zero_C_DEF
#define _Epm_tiSpd2Zero_C_DEF
#define Epm_tiSpd2Zero_CM Epm_tiSpd2Zero_C
#endif /* _Epm_tiSpd2Zero_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ANGLE_RES */


/* ANGLE_RES Typ=fl4 */
#ifndef ANGLE_RES
  #define ANGLE_RES 46L
#elif (ANGLE_RES != 46L)
  #error >>>> 'ANGLE_RES' multiple defined
#endif


/* Referenced System Constant ANGLE_RES_INV_FL */
/* N_RefFm: ANGLE_RES_INV_FL */
#ifndef ANGLE_RES_INV_FL
  #define ANGLE_RES_INV_FL 0.0219726562500f
#endif

/* Referenced System Constant CRSSENSTYP_SY */


/* CRSSENSTYP_SY Typ=sw */
#ifndef CRSSENSTYP_SY
  #define CRSSENSTYP_SY 1L
#elif (CRSSENSTYP_SY != 1L)
  #error >>>> 'CRSSENSTYP_SY' multiple defined
#endif


/* Referenced System Constant CRSTYP_SY */


/* CRSTYP_SY Typ=sw */
#ifndef CRSTYP_SY
  #define CRSTYP_SY 0L
#elif (CRSTYP_SY != 0L)
  #error >>>> 'CRSTYP_SY' multiple defined
#endif


/* Referenced System Constant CRS_BACKUP_SY */


/* CRS_BACKUP_SY Typ=sw */
#ifndef CRS_BACKUP_SY
  #define CRS_BACKUP_SY 0L
#elif (CRS_BACKUP_SY != 0L)
  #error >>>> 'CRS_BACKUP_SY' multiple defined
#endif


/* Referenced System Constant ENG_N_L_RES */


/* ENG_N_L_RES Typ=sl */
#ifndef ENG_N_L_RES
  #define ENG_N_L_RES 40L
#elif (ENG_N_L_RES != 40L)
  #error >>>> 'ENG_N_L_RES' multiple defined
#endif


/* Referenced System Constant ENG_N_RES_REV */


/* ENG_N_RES_REV Typ=fl4 */
#ifndef ENG_N_RES_REV
  #define ENG_N_RES_REV 2L
#elif (ENG_N_RES_REV != 2L)
  #error >>>> 'ENG_N_RES_REV' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Referenced System Constant EPM_ATS_SY */


/* EPM_ATS_SY Typ=sw */
#ifndef EPM_ATS_SY
  #define EPM_ATS_SY 0L
#elif (EPM_ATS_SY != 0L)
  #error >>>> 'EPM_ATS_SY' multiple defined
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


/* Referenced System Constant EPM_SPD_CALC_SY */


/* EPM_SPD_CALC_SY Typ=sw */
#ifndef EPM_SPD_CALC_SY
  #define EPM_SPD_CALC_SY 0L
#elif (EPM_SPD_CALC_SY != 0L)
  #error >>>> 'EPM_SPD_CALC_SY' multiple defined
#endif


/* Referenced System Constant HEM_SY */


/* HEM_SY Typ=sw */
#ifndef HEM_SY
  #define HEM_SY 0L
#elif (HEM_SY != 0L)
  #error >>>> 'HEM_SY' multiple defined
#endif


/* Local System Constant EPM_ADDTOOTH */


/* EPM_ADDTOOTH Typ=sl */
#ifndef EPM_ADDTOOTH
  #define EPM_ADDTOOTH 2L
#elif (EPM_ADDTOOTH != 2L)
  #error >>>> 'EPM_ADDTOOTH' multiple defined
#endif


/* Local System Constant EPM_FACSPD_RND */


/* EPM_FACSPD_RND Typ=sl */
#ifndef EPM_FACSPD_RND
  #define EPM_FACSPD_RND 8L
#elif (EPM_FACSPD_RND != 8L)
  #error >>>> 'EPM_FACSPD_RND' multiple defined
#endif


/* Local System Constant EPM_NENG10MSMAX */


/* EPM_NENG10MSMAX Typ=sl */
#ifndef EPM_NENG10MSMAX
  #define EPM_NENG10MSMAX 5100L
#elif (EPM_NENG10MSMAX != 5100L)
  #error >>>> 'EPM_NENG10MSMAX' multiple defined
#endif


/* Local System Constant EPM_NMAX */


/* EPM_NMAX Typ=sl */
#ifndef EPM_NMAX
  #define EPM_NMAX 20000L
#elif (EPM_NMAX != 20000L)
  #error >>>> 'EPM_NMAX' multiple defined
#endif


/* Local System Constant EPM_NMIN */


/* EPM_NMIN Typ=sl */
#ifndef EPM_NMIN
  #define EPM_NMIN 40L
#elif (EPM_NMIN != 40L)
  #error >>>> 'EPM_NMIN' multiple defined
#endif


/* Local System Constant EPM_NZERO */


/* EPM_NZERO Typ=sl */
#ifndef EPM_NZERO
  #define EPM_NZERO 0L
#elif (EPM_NZERO != 0L)
  #error >>>> 'EPM_NZERO' multiple defined
#endif


/* Local System Constant EPM_OFFSSPD_RND */


/* EPM_OFFSSPD_RND Typ=sl */
#ifndef EPM_OFFSSPD_RND
  #define EPM_OFFSSPD_RND 4L
#elif (EPM_OFFSSPD_RND != 4L)
  #error >>>> 'EPM_OFFSSPD_RND' multiple defined
#endif


/* Local System Constant EPM_ONETOOTH */


/* EPM_ONETOOTH Typ=sl */
#ifndef EPM_ONETOOTH
  #define EPM_ONETOOTH 1L
#elif (EPM_ONETOOTH != 1L)
  #error >>>> 'EPM_ONETOOTH' multiple defined
#endif


/* Local System Constant EPM_SIXTEETH */


/* EPM_SIXTEETH Typ=sl */
#ifndef EPM_SIXTEETH
  #define EPM_SIXTEETH 6L
#elif (EPM_SIXTEETH != 6L)
  #error >>>> 'EPM_SIXTEETH' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: Epm_numValidTeeth_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_NUMVALIDTEETH_MP_EXT__
#define __EPM_NUMVALIDTEETH_MP_EXT__
extern sint16 Epm_numValidTeeth_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Epm_tiSegNTEETH_mp */
/* Mp_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_TISEGNTEETH_MP_EXT__
#define __EPM_TISEGNTEETH_MP_EXT__
extern sint32 Epm_tiSegNTEETH_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: Epm_tiSegONETOOTH_mp */
/* Mp_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_TISEGONETOOTH_MP_EXT__
#define __EPM_TISEGONETOOTH_MP_EXT__
extern sint32 Epm_tiSegONETOOTH_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: Epm_tiSegPARTSEG_mp */
/* Mp_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_TISEGPARTSEG_MP_EXT__
#define __EPM_TISEGPARTSEG_MP_EXT__
extern sint32 Epm_tiSegPARTSEG_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: Epm_tiSegRaw_mp */
/* Mp_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_TISEGRAW_MP_EXT__
#define __EPM_TISEGRAW_MP_EXT__
extern sint32 Epm_tiSegRaw_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: Epm_tiSpd2Zero */
#ifdef _DAT_H
#ifndef __EPM_TISPD2ZERO_EXT__
#define __EPM_TISPD2ZERO_EXT__
extern uint16 Epm_tiSpd2Zero;
#endif
#endif


/* Exported Variable: Epm_nEng */
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEng10ms */
/* Epm_nEng10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngCurr */
/* Epm_nEngCurr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngInc10ms */
/* Epm_nEngInc10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngLRes */
/* Epm_nEngLRes is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngRaw */
/* Epm_nEngRaw is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngTooth10ms */
/* Epm_nEngTooth10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_stSpd */
/* Epm_stSpd is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmCaS_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCaS_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCaS_stNEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCaS_stNEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_numIncPerSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_numIncPerSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_phiSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_phiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_stDiagErrSig */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMCRS_STDIAGERRSIG_EXT__
#define __EPMCRS_STDIAGERRSIG_EXT__
extern uint8 EpmCrS_stDiagErrSig;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_stDiagNoSig */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMCRS_STDIAGNOSIG_EXT__
#define __EPMCRS_STDIAGNOSIG_EXT__
extern uint8 EpmCrS_stDiagNoSig;
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

/* Imported Variable: EpmCrS_tiSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_tiSegCurr */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSegCurr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmRRS_stEngStop */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMRRS_STENGSTOP_EXT__
#define __EPMRRS_STENGSTOP_EXT__
extern uint8 EpmRRS_stEngStop;
#endif
#endif

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

/* -- No referenced PTA Structures of EpmCaS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					
/* -- Referenced PTA Structures of EpmCrS_Diag -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EpmCrS_dnEngMax_C */


#ifndef _EpmCrS_dnEngMax_C_DEF
#define _EpmCrS_dnEngMax_C_DEF
#define EpmCrS_dnEngMax_CM EpmCrS_dnEngMax_C
#endif /* _EPMCRS_DNENGMAX_C_DEF */

/* Referenced Parameter EpmCrS_nDiagOff_C */


#ifndef _EpmCrS_nDiagOff_C_DEF
#define _EpmCrS_nDiagOff_C_DEF
#define EpmCrS_nDiagOff_CM EpmCrS_nDiagOff_C
#endif /* _EPMCRS_NDIAGOFF_C_DEF */

/* Referenced Parameter EpmCrS_nDiagOn_C */


#ifndef _EpmCrS_nDiagOn_C_DEF
#define _EpmCrS_nDiagOn_C_DEF
#define EpmCrS_nDiagOn_CM EpmCrS_nDiagOn_C
#endif /* _EPMCRS_NDIAGON_C_DEF */

/* Referenced Parameter EpmCrS_nMaxDGIPlaus_C */


#ifndef _EpmCrS_nMaxDGIPlaus_C_DEF
#define _EpmCrS_nMaxDGIPlaus_C_DEF
#define EpmCrS_nMaxDGIPlaus_CM EpmCrS_nMaxDGIPlaus_C
#endif /* _EPMCRS_NMAXDGIPLAUS_C_DEF */

/* Referenced Parameter EpmCrS_numErrSigIncDef_C */


#ifndef _EpmCrS_numErrSigIncDef_C_DEF
#define _EpmCrS_numErrSigIncDef_C_DEF
#define EpmCrS_numErrSigIncDef_CM EpmCrS_numErrSigIncDef_C
#endif /* _EPMCRS_NUMERRSIGINCDEF_C_DEF */

/* Referenced Parameter EpmCrS_numErrSigIncOK_C */


#ifndef _EpmCrS_numErrSigIncOK_C_DEF
#define _EpmCrS_numErrSigIncOK_C_DEF
#define EpmCrS_numErrSigIncOK_CM EpmCrS_numErrSigIncOK_C
#endif /* _EPMCRS_NUMERRSIGINCOK_C_DEF */

/* Referenced Parameter EpmCrS_numErrSigMaxDef_C */


#ifndef _EpmCrS_numErrSigMaxDef_C_DEF
#define _EpmCrS_numErrSigMaxDef_C_DEF
#define EpmCrS_numErrSigMaxDef_CM EpmCrS_numErrSigMaxDef_C
#endif /* _EPMCRS_NUMERRSIGMAXDEF_C_DEF */

/* Referenced Parameter EpmCrS_numErrSigMinOK_C */


#ifndef _EpmCrS_numErrSigMinOK_C_DEF
#define _EpmCrS_numErrSigMinOK_C_DEF
#define EpmCrS_numErrSigMinOK_CM EpmCrS_numErrSigMinOK_C
#endif /* _EPMCRS_NUMERRSIGMINOK_C_DEF */

/* Referenced Parameter EpmCrS_numNoSigDef_C */


#ifndef _EpmCrS_numNoSigDef_C_DEF
#define _EpmCrS_numNoSigDef_C_DEF
#define EpmCrS_numNoSigDef_CM EpmCrS_numNoSigDef_C
#endif /* _EPMCRS_NUMNOSIGDEF_C_DEF */

/* Referenced Parameter EpmCrS_numPosDGIInc_C */


#ifndef _EpmCrS_numPosDGIInc_C_DEF
#define _EpmCrS_numPosDGIInc_C_DEF
#define EpmCrS_numPosDGIInc_CM EpmCrS_numPosDGIInc_C
#endif /* _EPMCRS_NUMPOSDGIINC_C_DEF */

/* Referenced Parameter EpmCrS_numPosDGIMax_C */


#ifndef _EpmCrS_numPosDGIMax_C_DEF
#define _EpmCrS_numPosDGIMax_C_DEF
#define EpmCrS_numPosDGIMax_CM EpmCrS_numPosDGIMax_C
#endif /* _EPMCRS_NUMPOSDGIMAX_C_DEF */

/* Referenced Parameter EpmCrS_numPulseDGIInc_C */


#ifndef _EpmCrS_numPulseDGIInc_C_DEF
#define _EpmCrS_numPulseDGIInc_C_DEF
#define EpmCrS_numPulseDGIInc_CM EpmCrS_numPulseDGIInc_C
#endif /* _EPMCRS_NUMPULSEDGIINC_C_DEF */

/* Referenced Parameter EpmCrS_numPulseDGIMax_C */


#ifndef _EpmCrS_numPulseDGIMax_C_DEF
#define _EpmCrS_numPulseDGIMax_C_DEF
#define EpmCrS_numPulseDGIMax_CM EpmCrS_numPulseDGIMax_C
#endif /* _EPMCRS_NUMPULSEDGIMAX_C_DEF */

/* Referenced Parameter EpmCrS_numRRNotPlausInc_C */


#ifndef _EpmCrS_numRRNotPlausInc_C_DEF
#define _EpmCrS_numRRNotPlausInc_C_DEF
#define EpmCrS_numRRNotPlausInc_CM EpmCrS_numRRNotPlausInc_C
#endif /* _EPMCRS_NUMRRNOTPLAUSINC_C_DEF */

/* Referenced Parameter EpmCrS_numRRNotPlausMax_C */


#ifndef _EpmCrS_numRRNotPlausMax_C_DEF
#define _EpmCrS_numRRNotPlausMax_C_DEF
#define EpmCrS_numRRNotPlausMax_CM EpmCrS_numRRNotPlausMax_C
#endif /* _EPMCRS_NUMRRNOTPLAUSMAX_C_DEF */

/* Referenced Parameter EpmCrS_phiDiffDGI_C */


#ifndef _EpmCrS_phiDiffDGI_C_DEF
#define _EpmCrS_phiDiffDGI_C_DEF
#define EpmCrS_phiDiffDGI_CM EpmCrS_phiDiffDGI_C
#endif /* _EPMCRS_PHIDIFFDGI_C_DEF */

/* Referenced Parameter EpmCrS_stDiagT50Reset_C */


#ifndef _EpmCrS_stDiagT50Reset_C_DEF
#define _EpmCrS_stDiagT50Reset_C_DEF
#define EpmCrS_stDiagT50Reset_CM EpmCrS_stDiagT50Reset_C
#endif /* _EPMCRS_STDIAGT50RESET_C_DEF */

/* Referenced Parameter EpmCrS_swtEnableDiag_C */


#ifndef _EpmCrS_swtEnableDiag_C_DEF
#define _EpmCrS_swtEnableDiag_C_DEF
#define EpmCrS_swtEnableDiag_CM EpmCrS_swtEnableDiag_C
#endif /* _EPMCRS_SWTENABLEDIAG_C_DEF */

/* Referenced Parameter EpmCrS_VehV_v_Max_C */


#ifndef _EpmCrS_VehV_v_Max_C_DEF
#define _EpmCrS_VehV_v_Max_C_DEF
#define EpmCrS_VehV_v_Max_CM EpmCrS_VehV_v_Max_C
#endif /* _EPMCRS_VEHV_V_MAX_C_DEF */

/* Referenced Parameter EpmCrS_VehV_v_Min_C */


#ifndef _EpmCrS_VehV_v_Min_C_DEF
#define _EpmCrS_VehV_v_Min_C_DEF
#define EpmCrS_VehV_v_Min_CM EpmCrS_VehV_v_Min_C
#endif /* _EPMCRS_VEHV_V_MIN_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter EpmCrS_nDiagOff_C in Addressschema dir is referenced from function EpmCrS_Diag */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCRS_DIAG_DIR_T_DEF
#define DATA_EPMCRS_DIAG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCrS_dnEngMax_C ----- */
    sint16 _EpmCrS_dnEngMax_C;
    /* ----- Parameter EpmCrS_nDiagOff_C ----- */
    sint16 _EpmCrS_nDiagOff_C;
    /* ----- Parameter EpmCrS_nDiagOn_C ----- */
    sint16 _EpmCrS_nDiagOn_C;
    /* ----- Parameter EpmCrS_nMaxDGIPlaus_C ----- */
    sint16 _EpmCrS_nMaxDGIPlaus_C;
    /* ----- Parameter EpmCrS_numErrSigIncDef_C ----- */
    sint16 _EpmCrS_numErrSigIncDef_C;
    /* ----- Parameter EpmCrS_numErrSigIncOK_C ----- */
    sint16 _EpmCrS_numErrSigIncOK_C;
    /* ----- Parameter EpmCrS_numErrSigMaxDef_C ----- */
    sint16 _EpmCrS_numErrSigMaxDef_C;
    /* ----- Parameter EpmCrS_numErrSigMinOK_C ----- */
    sint16 _EpmCrS_numErrSigMinOK_C;
    /* ----- Parameter EpmCrS_numNoSigDef_C ----- */
    sint16 _EpmCrS_numNoSigDef_C;
    /* ----- Parameter EpmCrS_numPosDGIInc_C ----- */
    uint8 _EpmCrS_numPosDGIInc_C;
    /* ----- Parameter EpmCrS_numPosDGIMax_C ----- */
    uint8 _EpmCrS_numPosDGIMax_C;
    /* ----- Parameter EpmCrS_numPulseDGIInc_C ----- */
    sint16 _EpmCrS_numPulseDGIInc_C;
    /* ----- Parameter EpmCrS_numPulseDGIMax_C ----- */
    sint16 _EpmCrS_numPulseDGIMax_C;
    /* ----- Parameter EpmCrS_numRRNotPlausInc_C ----- */
    sint16 _EpmCrS_numRRNotPlausInc_C;
    /* ----- Parameter EpmCrS_numRRNotPlausMax_C ----- */
    sint16 _EpmCrS_numRRNotPlausMax_C;
    /* ----- Parameter EpmCrS_phiDiffDGI_C ----- */
    sint16 _EpmCrS_phiDiffDGI_C;
    /* ----- Parameter EpmCrS_stDiagT50Reset_C ----- */
    uint8 _EpmCrS_stDiagT50Reset_C;
    /* ----- Parameter EpmCrS_swtEnableDiag_C ----- */
    uint8 _EpmCrS_swtEnableDiag_C;
    /* ----- Parameter EpmCrS_VehV_v_Max_C ----- */
    sint16 _EpmCrS_VehV_v_Max_C;
    /* ----- Parameter EpmCrS_VehV_v_Min_C ----- */
    sint16 _EpmCrS_VehV_v_Min_C;
} DATA_EpmCrS_Diag_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCrS_Diag_dir_t DATA_EpmCrS_Diag_dir
    __attribute__ ((asection (".pta_datadir_EpmCrS_Diag","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCrS_Diag_dir_t * const VECT_EpmCrS_Diag_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCrS_Diag","f=as")));
#endif

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmRRS_AgDetect -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter EpmCrS_nDiagOff_C -- */
#ifndef EpmCrS_nDiagOff_C
#define EpmCrS_nDiagOff_C\
    (VECT_EpmCrS_Diag_dir->_EpmCrS_nDiagOff_C)
#endif

#ifndef RP_EpmCrS_nDiagOff_C
#define RP_EpmCrS_nDiagOff_C\
    (DATA_EpmCrS_Diag_dir._EpmCrS_nDiagOff_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPM_SPD_DIR_T_DEF
#define DATA_EPM_SPD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Epm_tiSpd2Zero_C ----- */
    uint16 _Epm_tiSpd2Zero_C;
} DATA_Epm_Spd_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Epm_Spd_dir_t DATA_Epm_Spd_dir
    __attribute__ ((asection (".pta_datadir_Epm_Spd","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Epm_Spd_dir_t * const VECT_Epm_Spd_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Epm_Spd","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Epm_tiSpd2Zero_C -- */
#ifndef Epm_tiSpd2Zero_C
#define Epm_tiSpd2Zero_C (VECT_Epm_Spd_dir->_Epm_tiSpd2Zero_C)
#endif

#ifndef RP_Epm_tiSpd2Zero_C
#define RP_Epm_tiSpd2Zero_C (DATA_Epm_Spd_dir._Epm_tiSpd2Zero_C)
#endif

#ifndef __Epm_tiSpd2Zero_C
#define __Epm_tiSpd2Zero_C (VECT_Epm_Spd_dir->_Epm_tiSpd2Zero_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPM_SPD_DAT_H */
