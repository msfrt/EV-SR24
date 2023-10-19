#ifndef _EPM_OPMODE_DAT_H
#define _EPM_OPMODE_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Epm_nALESyncMax_C */
#ifndef _Epm_nALESyncMax_C_DEF
#define _Epm_nALESyncMax_C_DEF
#define Epm_nALESyncMax_CM Epm_nALESyncMax_C
#endif /* _Epm_nALESyncMax_C_DEF */

/* Defined Parameter Epm_nNoSyncVerify_C */
#ifndef _Epm_nNoSyncVerify_C_DEF
#define _Epm_nNoSyncVerify_C_DEF
#define Epm_nNoSyncVerify_CM Epm_nNoSyncVerify_C
#endif /* _Epm_nNoSyncVerify_C_DEF */

/* Defined Parameter Epm_numReSync_C */
#ifndef _Epm_numReSync_C_DEF
#define _Epm_numReSync_C_DEF
#define Epm_numReSync_CM Epm_numReSync_C
#endif /* _Epm_numReSync_C_DEF */

/* Defined Parameter Epm_phiDiffMax_C */
#ifndef _Epm_phiDiffMax_C_DEF
#define _Epm_phiDiffMax_C_DEF
#define Epm_phiDiffMax_CM Epm_phiDiffMax_C
#endif /* _Epm_phiDiffMax_C_DEF */

/* Defined Parameter Epm_phiIgrOfs_C */
#ifndef _Epm_phiIgrOfs_C_DEF
#define _Epm_phiIgrOfs_C_DEF
#define Epm_phiIgrOfs_CM Epm_phiIgrOfs_C
#endif /* _Epm_phiIgrOfs_C_DEF */

/* Defined Parameter Epm_swtBlkInjCaSSync_C */
#ifndef _Epm_swtBlkInjCaSSync_C_DEF
#define _Epm_swtBlkInjCaSSync_C_DEF
#define Epm_swtBlkInjCaSSync_CM Epm_swtBlkInjCaSSync_C
#endif /* _Epm_swtBlkInjCaSSync_C_DEF */

/* Defined Parameter Epm_swtOpModeStgy_C */
#ifndef _Epm_swtOpModeStgy_C_DEF
#define _Epm_swtOpModeStgy_C_DEF
#define Epm_swtOpModeStgy_CM Epm_swtOpModeStgy_C
#endif /* _Epm_swtOpModeStgy_C_DEF */

/* Defined Parameter Epm_tiLockReSync_C */
#ifndef _Epm_tiLockReSync_C_DEF
#define _Epm_tiLockReSync_C_DEF
#define Epm_tiLockReSync_CM Epm_tiLockReSync_C
#endif /* _Epm_tiLockReSync_C_DEF */

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


/* Referenced System Constant CAS_BACKUP_SY */


/* CAS_BACKUP_SY Typ=sw */
#ifndef CAS_BACKUP_SY
  #define CAS_BACKUP_SY 2L
#elif (CAS_BACKUP_SY != 2L)
  #error >>>> 'CAS_BACKUP_SY' multiple defined
#endif


/* Referenced System Constant CAS_DIAG_SY */


/* CAS_DIAG_SY Typ=sw */
#ifndef CAS_DIAG_SY
  #define CAS_DIAG_SY 3L
#elif (CAS_DIAG_SY != 3L)
  #error >>>> 'CAS_DIAG_SY' multiple defined
#endif


/* Referenced System Constant CAS_I1_SY */


/* CAS_I1_SY Typ=sw */
#ifndef CAS_I1_SY
  #define CAS_I1_SY 1L
#elif (CAS_I1_SY != 1L)
  #error >>>> 'CAS_I1_SY' multiple defined
#endif


/* Referenced System Constant CAS_I2_SY */


/* CAS_I2_SY Typ=sw */
#ifndef CAS_I2_SY
  #define CAS_I2_SY 0L
#elif (CAS_I2_SY != 0L)
  #error >>>> 'CAS_I2_SY' multiple defined
#endif


/* Referenced System Constant CAS_O1_SY */


/* CAS_O1_SY Typ=sw */
#ifndef CAS_O1_SY
  #define CAS_O1_SY 0L
#elif (CAS_O1_SY != 0L)
  #error >>>> 'CAS_O1_SY' multiple defined
#endif


/* Referenced System Constant CAS_O2_SY */


/* CAS_O2_SY Typ=sw */
#ifndef CAS_O2_SY
  #define CAS_O2_SY 0L
#elif (CAS_O2_SY != 0L)
  #error >>>> 'CAS_O2_SY' multiple defined
#endif


/* Referenced System Constant CMBTYP_DS */


/* CMBTYP_DS Typ=ub */
#ifndef CMBTYP_DS
  #define CMBTYP_DS 0L
#elif (CMBTYP_DS != 0L)
  #error >>>> 'CMBTYP_DS' multiple defined
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


/* Referenced System Constant CRS_BACKUP_CASTYP_SY */


/* CRS_BACKUP_CASTYP_SY Typ=sw */
#ifndef CRS_BACKUP_CASTYP_SY
  #define CRS_BACKUP_CASTYP_SY 2L
#elif (CRS_BACKUP_CASTYP_SY != 2L)
  #error >>>> 'CRS_BACKUP_CASTYP_SY' multiple defined
#endif


/* Referenced System Constant CRS_BACKUP_DYN_SY */


/* CRS_BACKUP_DYN_SY Typ=sw */
#ifndef CRS_BACKUP_DYN_SY
  #define CRS_BACKUP_DYN_SY 0L
#elif (CRS_BACKUP_DYN_SY != 0L)
  #error >>>> 'CRS_BACKUP_DYN_SY' multiple defined
#endif


/* Referenced System Constant CRS_BACKUP_SY */


/* CRS_BACKUP_SY Typ=sw */
#ifndef CRS_BACKUP_SY
  #define CRS_BACKUP_SY 0L
#elif (CRS_BACKUP_SY != 0L)
  #error >>>> 'CRS_BACKUP_SY' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMGAP */


/* EPMHCRS_NUMGAP Typ=sl */
#ifndef EPMHCRS_NUMGAP
  #define EPMHCRS_NUMGAP 1L
#elif (EPMHCRS_NUMGAP != 1L)
  #error >>>> 'EPMHCRS_NUMGAP' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Referenced System Constant EPMRRS_SY */


/* EPMRRS_SY Typ=sw */
#ifndef EPMRRS_SY
  #define EPMRRS_SY 2L
#elif (EPMRRS_SY != 2L)
  #error >>>> 'EPMRRS_SY' multiple defined
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


/* Referenced System Constant EPM_N_RES_REV */


/* EPM_N_RES_REV Typ=sl */
#ifndef EPM_N_RES_REV
  #define EPM_N_RES_REV 2L
#elif (EPM_N_RES_REV != 2L)
  #error >>>> 'EPM_N_RES_REV' multiple defined
#endif


/* Referenced System Constant EPM_PHIMAX */


/* EPM_PHIMAX Typ=fl4 */
#ifndef EPM_PHIMAX
  #define EPM_PHIMAX 32768L
#elif (EPM_PHIMAX != 32768L)
  #error >>>> 'EPM_PHIMAX' multiple defined
#endif


/* Referenced System Constant EPM_PHIMAXMSK */


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif


/* Referenced System Constant EPM_SYNCSLV_SY */


/* EPM_SYNCSLV_SY Typ=sw */
#ifndef EPM_SYNCSLV_SY
  #define EPM_SYNCSLV_SY 0L
#elif (EPM_SYNCSLV_SY != 0L)
  #error >>>> 'EPM_SYNCSLV_SY' multiple defined
#endif


/* Referenced System Constant EPM_TIMING_SY */


/* EPM_TIMING_SY Typ=sw */
#ifndef EPM_TIMING_SY
  #define EPM_TIMING_SY 0L
#elif (EPM_TIMING_SY != 0L)
  #error >>>> 'EPM_TIMING_SY' multiple defined
#endif


/* Local System Constant EPM_TI_SHORTINT */


/* EPM_TI_SHORTINT Typ=sl */
#ifndef EPM_TI_SHORTINT
  #define EPM_TI_SHORTINT 2500L
#elif (EPM_TI_SHORTINT != 2500L)
  #error >>>> 'EPM_TI_SHORTINT' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: Epm_ctTDCPhys_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_CTTDCPHYS_MP_EXT__
#define __EPM_CTTDCPHYS_MP_EXT__
extern uint8 Epm_ctTDCPhys_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: Epm_phiIntDelay_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_PHIINTDELAY_MP_EXT__
#define __EPM_PHIINTDELAY_MP_EXT__
extern sint16 Epm_phiIntDelay_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Epm_stCaSNoErr_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_STCASNOERR_MP_EXT__
#define __EPM_STCASNOERR_MP_EXT__
extern uint8 Epm_stCaSNoErr_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: Epm_stCheckStopPosValid_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_STCHECKSTOPPOSVALID_MP_EXT__
#define __EPM_STCHECKSTOPPOSVALID_MP_EXT__
extern uint8 Epm_stCheckStopPosValid_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: Epm_stReSyncReason_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_STRESYNCREASON_MP_EXT__
#define __EPM_STRESYNCREASON_MP_EXT__
extern uint8 Epm_stReSyncReason_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: Epm_stStrtModeECU_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_STSTRTMODEECU_MP_EXT__
#define __EPM_STSTRTMODEECU_MP_EXT__
extern uint8 Epm_stStrtModeECU_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: Epm_nEngVerify */
#ifdef _DAT_H
#ifndef __EPM_NENGVERIFY_EXT__
#define __EPM_NENGVERIFY_EXT__
extern sint16 Epm_nEngVerify;
#endif
#endif


/* Local Variable: Epm_phiCurrPos */
#ifdef _DAT_H
#ifndef __EPM_PHICURRPOS_EXT__
#define __EPM_PHICURRPOS_EXT__
extern sint16 Epm_phiCurrPos;
#endif
#endif


/* Local Variable: Epm_stALEDiag */
#ifdef _DAT_H
#ifndef __EPM_STALEDIAG_EXT__
#define __EPM_STALEDIAG_EXT__
extern uint8 Epm_stALEDiag;
#endif
#endif


/* Local Variable: Epm_stPosDGI */
#ifdef _DAT_H
#ifndef __EPM_STPOSDGI_EXT__
#define __EPM_STPOSDGI_EXT__
extern uint8 Epm_stPosDGI;
#endif
#endif


/* Local Variable: Epm_stSyncRestore */
#ifdef _DAT_H
#ifndef __EPM_STSYNCRESTORE_EXT__
#define __EPM_STSYNCRESTORE_EXT__
extern uint8 Epm_stSyncRestore;
#endif
#endif


/* Local Variable: Epm_tiLockReSync_mp */
#ifdef _DAT_H
#ifndef __EPM_TILOCKRESYNC_MP_EXT__
#define __EPM_TILOCKRESYNC_MP_EXT__
extern sint16 Epm_tiLockReSync_mp;
#endif
#endif


/* Exported Variable: Epm_ctCyl */
/* Epm_ctCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_ctReSync */
#ifdef _DAT_H
#ifndef __EPM_CTRESYNC_EXT__
#define __EPM_CTRESYNC_EXT__
extern uint8 Epm_ctReSync;
#endif
#endif


/* Exported Variable: Epm_phiDiffRRS */
/* Epm_phiDiffRRS is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_stCmbTestReq */
/* Epm_stCmbTestReq is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_stOpMode */
/* Epm_stOpMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_stSync */
/* Epm_stSync is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmCaS_stOfsErr */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

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

/* Imported Variable: EpmRRS_bEngStopAg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmRRS_bEngStopAg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmRRS_bEngSwOff */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmRRS_bEngSwOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_phiNxtInt */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_numCaSSync */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMSYN_NUMCASSYNC_EXT__
#define __EPMSYN_NUMCASSYNC_EXT__
extern uint8 EpmSyn_numCaSSync;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiCaSPos */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPMSYN_PHICASPOS_EXT__
#define __EPMSYN_PHICASPOS_EXT__
extern sint16 EpmSyn_phiCaSPos[1];
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_phiInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiOffs */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stCaSPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stCrSPos */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_stCrSPos is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stCrSPosErr */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stGapPos */
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

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmCaS_OfsDiag -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					 					
/* -- Referenced PTA Structures of EpmCaS_Seg -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EPMCAS_DETECTBOTHEDGES */


#ifndef _EPMCAS_DETECTBOTHEDGES_DEF
#define _EPMCAS_DETECTBOTHEDGES_DEF


/* EPMCAS_DETECTBOTHEDGES Typ=ub */
#ifndef EPMCAS_DETECTBOTHEDGES
  #define EPMCAS_DETECTBOTHEDGES 2L
#elif (EPMCAS_DETECTBOTHEDGES != 2L)
  #error >>>> 'EPMCAS_DETECTBOTHEDGES' multiple defined
#endif

#endif /* _EPMCAS_DETECTBOTHEDGES_DEF */

/* Referenced Parameter EPMCAS_DETECTFALLINGEDGES */


#ifndef _EPMCAS_DETECTFALLINGEDGES_DEF
#define _EPMCAS_DETECTFALLINGEDGES_DEF


/* EPMCAS_DETECTFALLINGEDGES Typ=ub */
#ifndef EPMCAS_DETECTFALLINGEDGES
  #define EPMCAS_DETECTFALLINGEDGES 0L
#elif (EPMCAS_DETECTFALLINGEDGES != 0L)
  #error >>>> 'EPMCAS_DETECTFALLINGEDGES' multiple defined
#endif

#endif /* _EPMCAS_DETECTFALLINGEDGES_DEF */

/* Referenced Parameter EPMCAS_DETECTRISINGEDGES */


#ifndef _EPMCAS_DETECTRISINGEDGES_DEF
#define _EPMCAS_DETECTRISINGEDGES_DEF


/* EPMCAS_DETECTRISINGEDGES Typ=ub */
#ifndef EPMCAS_DETECTRISINGEDGES
  #define EPMCAS_DETECTRISINGEDGES 1L
#elif (EPMCAS_DETECTRISINGEDGES != 1L)
  #error >>>> 'EPMCAS_DETECTRISINGEDGES' multiple defined
#endif

#endif /* _EPMCAS_DETECTRISINGEDGES_DEF */

/* Referenced Parameter EpmCaS_dSegSeries_CA */


#ifndef _EpmCaS_dSegSeries_CA_DEF
#define _EpmCaS_dSegSeries_CA_DEF
#define EpmCaS_dSegSeries_CAM EpmCaS_dSegSeries_CA
#endif /* _EPMCAS_DSEGSERIES_CA_DEF */

/* Referenced Parameter EpmCaS_facPlausHigh_GCUR */


#ifndef _EpmCaS_facPlausHigh_GCUR_DEF
#define _EpmCaS_facPlausHigh_GCUR_DEF
#define EpmCaS_facPlausHigh_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_facPlausHigh_GCUR))
#endif /* _EPMCAS_FACPLAUSHIGH_GCUR_DEF */

/* Referenced Parameter EpmCaS_facPlausLow_GCUR */


#ifndef _EpmCaS_facPlausLow_GCUR_DEF
#define _EpmCaS_facPlausLow_GCUR_DEF
#define EpmCaS_facPlausLow_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_facPlausLow_GCUR))
#endif /* _EPMCAS_FACPLAUSLOW_GCUR_DEF */

/* Referenced Parameter EpmCaS_facPlaus_DST */


#ifndef _EpmCaS_facPlaus_DST_DEF
#define _EpmCaS_facPlaus_DST_DEF
#define EpmCaS_facPlaus_DSTM(input_x)\
    (SrvX_DistrSearchS16((input_x),\
    EpmCaS_facPlaus_DST[0], &EpmCaS_facPlaus_DST[1]))
#endif /* _EPMCAS_FACPLAUS_DST_DEF */

/* Referenced Parameter EpmCaS_nCaSSigInvld_C */


#ifndef _EpmCaS_nCaSSigInvld_C_DEF
#define _EpmCaS_nCaSSigInvld_C_DEF
#define EpmCaS_nCaSSigInvld_CM EpmCaS_nCaSSigInvld_C
#endif /* _EPMCAS_NCASSIGINVLD_C_DEF */

/* Referenced Parameter EpmCaS_nCaSSigVld_C */


#ifndef _EpmCaS_nCaSSigVld_C_DEF
#define _EpmCaS_nCaSSigVld_C_DEF
#define EpmCaS_nCaSSigVld_CM EpmCaS_nCaSSigVld_C
#endif /* _EPMCAS_NCASSIGVLD_C_DEF */

/* Referenced Parameter EpmCaS_numSegSerLst_C */


#ifndef _EpmCaS_numSegSerLst_C_DEF
#define _EpmCaS_numSegSerLst_C_DEF
#define EpmCaS_numSegSerLst_CM EpmCaS_numSegSerLst_C
#endif /* _EPMCAS_NUMSEGSERLST_C_DEF */

/* Referenced Parameter EpmCaS_phiLoLimIn_C */


#ifndef _EpmCaS_phiLoLimIn_C_DEF
#define _EpmCaS_phiLoLimIn_C_DEF
#define EpmCaS_phiLoLimIn_CM EpmCaS_phiLoLimIn_C
#endif /* _EPMCAS_PHILOLIMIN_C_DEF */

/* Referenced Parameter EpmCaS_phiNCor_CUR */


#ifndef _EpmCaS_phiNCor_CUR_DEF
#define _EpmCaS_phiNCor_CUR_DEF
#define EpmCaS_phiNCor_CURM(input_x) (SrvX_IpoCurveS16((input_x), EpmCaS_phiNCor_CUR))
#define KL_EpmCaS_phiNCor_CUR SrvX_IpoCurveS16(Epm_nEng, EpmCaS_phiNCor_CUR)
#endif /* _EPMCAS_PHINCOR_CUR_DEF */

/* Referenced Parameter EpmCaS_phiSegLenTol_CA */


#ifndef _EpmCaS_phiSegLenTol_CA_DEF
#define _EpmCaS_phiSegLenTol_CA_DEF
#define EpmCaS_phiSegLenTol_CAM EpmCaS_phiSegLenTol_CA
#endif /* _EPMCAS_PHISEGLENTOL_CA_DEF */

/* Referenced Parameter EpmCaS_phiSegLen_CA */


#ifndef _EpmCaS_phiSegLen_CA_DEF
#define _EpmCaS_phiSegLen_CA_DEF
#define EpmCaS_phiSegLen_CAM EpmCaS_phiSegLen_CA
#endif /* _EPMCAS_PHISEGLEN_CA_DEF */

/* Referenced Parameter EpmCaS_phiSegOfs_CA */


#ifndef _EpmCaS_phiSegOfs_CA_DEF
#define _EpmCaS_phiSegOfs_CA_DEF
#define EpmCaS_phiSegOfs_CAM EpmCaS_phiSegOfs_CA
#endif /* _EPMCAS_PHISEGOFS_CA_DEF */

/* Referenced Parameter EpmCaS_phiTempCor05_DST */


#ifndef _EpmCaS_phiTempCor05_DST_DEF
#define _EpmCaS_phiTempCor05_DST_DEF
#define EpmCaS_phiTempCor05_DSTM(input_x)\
    (SrvX_DistrSearchS16((input_x),\
    EpmCaS_phiTempCor05_DST[0], &EpmCaS_phiTempCor05_DST[1]))
#endif /* _EPMCAS_PHITEMPCOR05_DST_DEF */

/* Referenced Parameter EpmCaS_phiTempCorI1_GCUR */


#ifndef _EpmCaS_phiTempCorI1_GCUR_DEF
#define _EpmCaS_phiTempCorI1_GCUR_DEF
#define EpmCaS_phiTempCorI1_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_phiTempCorI1_GCUR))
#endif /* _EPMCAS_PHITEMPCORI1_GCUR_DEF */

/* Referenced Parameter EpmCaS_phiUpLimIn_C */


#ifndef _EpmCaS_phiUpLimIn_C_DEF
#define _EpmCaS_phiUpLimIn_C_DEF
#define EpmCaS_phiUpLimIn_CM EpmCaS_phiUpLimIn_C
#endif /* _EPMCAS_PHIUPLIMIN_C_DEF */

/* Referenced Parameter EpmCaS_stActEdge_C */


#ifndef _EpmCaS_stActEdge_C_DEF
#define _EpmCaS_stActEdge_C_DEF
#define EpmCaS_stActEdge_CM EpmCaS_stActEdge_C
#endif /* _EPMCAS_STACTEDGE_C_DEF */

/* Referenced Parameter EpmCaS_stMinSyncCaSAg_C */


#ifndef _EpmCaS_stMinSyncCaSAg_C_DEF
#define _EpmCaS_stMinSyncCaSAg_C_DEF
#define EpmCaS_stMinSyncCaSAg_CM EpmCaS_stMinSyncCaSAg_C
#endif /* _EPMCAS_STMINSYNCCASAG_C_DEF */

/* Referenced Parameter EpmCaS_swtSeg_C */


#ifndef _EpmCaS_swtSeg_C_DEF
#define _EpmCaS_swtSeg_C_DEF
#define EpmCaS_swtSeg_CM EpmCaS_swtSeg_C
#endif /* _EPMCAS_SWTSEG_C_DEF */

/* Referenced Parameter EpmCaS_tiGlitchFilter_C */


#ifndef _EpmCaS_tiGlitchFilter_C_DEF
#define _EpmCaS_tiGlitchFilter_C_DEF
#define EpmCaS_tiGlitchFilter_CM EpmCaS_tiGlitchFilter_C
#endif /* _EPMCAS_TIGLITCHFILTER_C_DEF */

/* Referenced Parameter EpmCaS_tiTimeout_C */


#ifndef _EpmCaS_tiTimeout_C_DEF
#define _EpmCaS_tiTimeout_C_DEF
#define EpmCaS_tiTimeout_CM EpmCaS_tiTimeout_C
#endif /* _EPMCAS_TITIMEOUT_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter EpmCaS_stActEdge_C in Addressschema dir is referenced from function EpmCaS_Seg */ 

					
/* Parameter EpmCaS_tiGlitchFilter_C in Addressschema dir is referenced from function EpmCaS_Seg */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCAS_SEG_DIR_T_DEF
#define DATA_EPMCAS_SEG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCaS_dSegSeries_CA ----- */
    uint8 _EpmCaS_dSegSeries_CA[10];
    /* ----- Parameter EpmCaS_facPlausHigh_GCUR ----- */
    sint16 _EpmCaS_facPlausHigh_GCUR[3];
    /* ----- Parameter EpmCaS_facPlausLow_GCUR ----- */
    sint16 _EpmCaS_facPlausLow_GCUR[3];
    /* ----- Parameter EpmCaS_facPlaus_DST ----- */
    sint16 _EpmCaS_facPlaus_DST[1+3];
    /* ----- Parameter EpmCaS_nCaSSigInvld_C ----- */
    sint16 _EpmCaS_nCaSSigInvld_C;
    /* ----- Parameter EpmCaS_nCaSSigVld_C ----- */
    sint16 _EpmCaS_nCaSSigVld_C;
    /* ----- Parameter EpmCaS_numSegSerLst_C ----- */
    uint8 _EpmCaS_numSegSerLst_C;
    /* ----- Parameter EpmCaS_phiLoLimIn_C ----- */
    sint16 _EpmCaS_phiLoLimIn_C;
    /* ----- Parameter EpmCaS_phiNCor_CUR ----- */
    sint16 _EpmCaS_phiNCor_CUR[1+2*6];
    /* ----- Parameter EpmCaS_phiSegLenTol_CA ----- */
    sint16 _EpmCaS_phiSegLenTol_CA[10];
    /* ----- Parameter EpmCaS_phiSegLen_CA ----- */
    sint16 _EpmCaS_phiSegLen_CA[10];
    /* ----- Parameter EpmCaS_phiSegOfs_CA ----- */
    sint16 _EpmCaS_phiSegOfs_CA[1];
    /* ----- Parameter EpmCaS_phiTempCor05_DST ----- */
    sint16 _EpmCaS_phiTempCor05_DST[1+3];
    /* ----- Parameter EpmCaS_phiTempCorI1_GCUR ----- */
    sint16 _EpmCaS_phiTempCorI1_GCUR[3];
    /* ----- Parameter EpmCaS_phiUpLimIn_C ----- */
    sint16 _EpmCaS_phiUpLimIn_C;
    /* ----- Parameter EpmCaS_stActEdge_C ----- */
    uint8 _EpmCaS_stActEdge_C;
    /* ----- Parameter EpmCaS_stMinSyncCaSAg_C ----- */
    uint8 _EpmCaS_stMinSyncCaSAg_C;
    /* ----- Parameter EpmCaS_swtSeg_C ----- */
    uint8 _EpmCaS_swtSeg_C;
    /* ----- Parameter EpmCaS_tiGlitchFilter_C ----- */
    sint32 _EpmCaS_tiGlitchFilter_C;
    /* ----- Parameter EpmCaS_tiTimeout_C ----- */
    sint32 _EpmCaS_tiTimeout_C;
} DATA_EpmCaS_Seg_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCaS_Seg_dir_t DATA_EpmCaS_Seg_dir
    __attribute__ ((asection (".pta_datadir_EpmCaS_Seg","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCaS_Seg_dir_t * const VECT_EpmCaS_Seg_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCaS_Seg","f=as")));
#endif

/* -- No referenced PTA Structures of EpmCrS_Plaus -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmRRS_AgDetect -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSyn_CaSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSyn_CrSPos -- */
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
			
/* Parameter Epm_numFireSeg_C in Addressschema dir is referenced from function Epm_Ini */ 

		
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

/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter EpmCaS_stActEdge_C -- */
#ifndef EpmCaS_stActEdge_C
#define EpmCaS_stActEdge_C\
    (VECT_EpmCaS_Seg_dir->_EpmCaS_stActEdge_C)
#endif

#ifndef RP_EpmCaS_stActEdge_C
#define RP_EpmCaS_stActEdge_C\
    (DATA_EpmCaS_Seg_dir._EpmCaS_stActEdge_C)
#endif

/* -- Macro for referenced Parameter EpmCaS_tiGlitchFilter_C -- */
#ifndef EpmCaS_tiGlitchFilter_C
#define EpmCaS_tiGlitchFilter_C\
    (VECT_EpmCaS_Seg_dir->_EpmCaS_tiGlitchFilter_C)
#endif

#ifndef RP_EpmCaS_tiGlitchFilter_C
#define RP_EpmCaS_tiGlitchFilter_C\
    (DATA_EpmCaS_Seg_dir._EpmCaS_tiGlitchFilter_C)
#endif

/* -- Macro for referenced Parameter Epm_numFireSeg_C -- */
#ifndef Epm_numFireSeg_C
#define Epm_numFireSeg_C\
    (VECT_Epm_Ini_dir->_Epm_numFireSeg_C)
#endif

#ifndef RP_Epm_numFireSeg_C
#define RP_Epm_numFireSeg_C\
    (DATA_Epm_Ini_dir._Epm_numFireSeg_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPM_OPMODE_DIR_T_DEF
#define DATA_EPM_OPMODE_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Epm_nALESyncMax_C ----- */
    sint16 _Epm_nALESyncMax_C;
    /* ----- Parameter Epm_nNoSyncVerify_C ----- */
    sint16 _Epm_nNoSyncVerify_C;
    /* ----- Parameter Epm_numReSync_C ----- */
    uint8 _Epm_numReSync_C;
    /* ----- Parameter Epm_phiDiffMax_C ----- */
    sint16 _Epm_phiDiffMax_C;
    /* ----- Parameter Epm_phiIgrOfs_C ----- */
    sint16 _Epm_phiIgrOfs_C;
    /* ----- Parameter Epm_swtBlkInjCaSSync_C ----- */
    uint8 _Epm_swtBlkInjCaSSync_C;
    /* ----- Parameter Epm_swtOpModeStgy_C ----- */
    uint8 _Epm_swtOpModeStgy_C;
    /* ----- Parameter Epm_tiLockReSync_C ----- */
    sint16 _Epm_tiLockReSync_C;
} DATA_Epm_OpMode_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Epm_OpMode_dir_t DATA_Epm_OpMode_dir
    __attribute__ ((asection (".pta_datadir_Epm_OpMode","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Epm_OpMode_dir_t * const VECT_Epm_OpMode_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Epm_OpMode","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Epm_nALESyncMax_C -- */
#ifndef Epm_nALESyncMax_C
#define Epm_nALESyncMax_C (VECT_Epm_OpMode_dir->_Epm_nALESyncMax_C)
#endif

#ifndef RP_Epm_nALESyncMax_C
#define RP_Epm_nALESyncMax_C (DATA_Epm_OpMode_dir._Epm_nALESyncMax_C)
#endif

#ifndef __Epm_nALESyncMax_C
#define __Epm_nALESyncMax_C (VECT_Epm_OpMode_dir->_Epm_nALESyncMax_C)
#endif

/* -- Macro for local Parameter Epm_nNoSyncVerify_C -- */
#ifndef Epm_nNoSyncVerify_C
#define Epm_nNoSyncVerify_C (VECT_Epm_OpMode_dir->_Epm_nNoSyncVerify_C)
#endif

#ifndef RP_Epm_nNoSyncVerify_C
#define RP_Epm_nNoSyncVerify_C (DATA_Epm_OpMode_dir._Epm_nNoSyncVerify_C)
#endif

#ifndef __Epm_nNoSyncVerify_C
#define __Epm_nNoSyncVerify_C (VECT_Epm_OpMode_dir->_Epm_nNoSyncVerify_C)
#endif

/* -- Macro for local Parameter Epm_numReSync_C -- */
#ifndef Epm_numReSync_C
#define Epm_numReSync_C (VECT_Epm_OpMode_dir->_Epm_numReSync_C)
#endif

#ifndef RP_Epm_numReSync_C
#define RP_Epm_numReSync_C (DATA_Epm_OpMode_dir._Epm_numReSync_C)
#endif

#ifndef __Epm_numReSync_C
#define __Epm_numReSync_C (VECT_Epm_OpMode_dir->_Epm_numReSync_C)
#endif

/* -- Macro for local Parameter Epm_phiDiffMax_C -- */
#ifndef Epm_phiDiffMax_C
#define Epm_phiDiffMax_C (VECT_Epm_OpMode_dir->_Epm_phiDiffMax_C)
#endif

#ifndef RP_Epm_phiDiffMax_C
#define RP_Epm_phiDiffMax_C (DATA_Epm_OpMode_dir._Epm_phiDiffMax_C)
#endif

#ifndef __Epm_phiDiffMax_C
#define __Epm_phiDiffMax_C (VECT_Epm_OpMode_dir->_Epm_phiDiffMax_C)
#endif

/* -- Macro for local Parameter Epm_phiIgrOfs_C -- */
#ifndef Epm_phiIgrOfs_C
#define Epm_phiIgrOfs_C (VECT_Epm_OpMode_dir->_Epm_phiIgrOfs_C)
#endif

#ifndef RP_Epm_phiIgrOfs_C
#define RP_Epm_phiIgrOfs_C (DATA_Epm_OpMode_dir._Epm_phiIgrOfs_C)
#endif

#ifndef __Epm_phiIgrOfs_C
#define __Epm_phiIgrOfs_C (VECT_Epm_OpMode_dir->_Epm_phiIgrOfs_C)
#endif

/* -- Macro for local Parameter Epm_swtBlkInjCaSSync_C -- */
#ifndef Epm_swtBlkInjCaSSync_C
#define Epm_swtBlkInjCaSSync_C (VECT_Epm_OpMode_dir->_Epm_swtBlkInjCaSSync_C)
#endif

#ifndef RP_Epm_swtBlkInjCaSSync_C
#define RP_Epm_swtBlkInjCaSSync_C (DATA_Epm_OpMode_dir._Epm_swtBlkInjCaSSync_C)
#endif

#ifndef __Epm_swtBlkInjCaSSync_C
#define __Epm_swtBlkInjCaSSync_C (VECT_Epm_OpMode_dir->_Epm_swtBlkInjCaSSync_C)
#endif

/* -- Macro for local Parameter Epm_swtOpModeStgy_C -- */
#ifndef Epm_swtOpModeStgy_C
#define Epm_swtOpModeStgy_C (VECT_Epm_OpMode_dir->_Epm_swtOpModeStgy_C)
#endif

#ifndef RP_Epm_swtOpModeStgy_C
#define RP_Epm_swtOpModeStgy_C (DATA_Epm_OpMode_dir._Epm_swtOpModeStgy_C)
#endif

#ifndef __Epm_swtOpModeStgy_C
#define __Epm_swtOpModeStgy_C (VECT_Epm_OpMode_dir->_Epm_swtOpModeStgy_C)
#endif

/* -- Macro for local Parameter Epm_tiLockReSync_C -- */
#ifndef Epm_tiLockReSync_C
#define Epm_tiLockReSync_C (VECT_Epm_OpMode_dir->_Epm_tiLockReSync_C)
#endif

#ifndef RP_Epm_tiLockReSync_C
#define RP_Epm_tiLockReSync_C (DATA_Epm_OpMode_dir._Epm_tiLockReSync_C)
#endif

#ifndef __Epm_tiLockReSync_C
#define __Epm_tiLockReSync_C (VECT_Epm_OpMode_dir->_Epm_tiLockReSync_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPM_OPMODE_DAT_H */
