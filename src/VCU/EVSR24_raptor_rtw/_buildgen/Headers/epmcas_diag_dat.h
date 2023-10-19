#ifndef _EPMCAS_DIAG_DAT_H
#define _EPMCAS_DIAG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCaS_flgSwtSnglEdgeTol_C */
#ifndef _EpmCaS_flgSwtSnglEdgeTol_C_DEF
#define _EpmCaS_flgSwtSnglEdgeTol_C_DEF
#define EpmCaS_flgSwtSnglEdgeTol_CM EpmCaS_flgSwtSnglEdgeTol_C
#endif /* _EpmCaS_flgSwtSnglEdgeTol_C_DEF */

/* Defined Parameter EpmCaS_numErrSigDef_C */
#ifndef _EpmCaS_numErrSigDef_C_DEF
#define _EpmCaS_numErrSigDef_C_DEF
#define EpmCaS_numErrSigDef_CM EpmCaS_numErrSigDef_C
#endif /* _EpmCaS_numErrSigDef_C_DEF */

/* Defined Parameter EpmCaS_numErrSigOk_C */
#ifndef _EpmCaS_numErrSigOk_C_DEF
#define _EpmCaS_numErrSigOk_C_DEF
#define EpmCaS_numErrSigOk_CM EpmCaS_numErrSigOk_C
#endif /* _EpmCaS_numErrSigOk_C_DEF */

/* Defined Parameter EpmCaS_numNoSigDef_C */
#ifndef _EpmCaS_numNoSigDef_C_DEF
#define _EpmCaS_numNoSigDef_C_DEF
#define EpmCaS_numNoSigDef_CM EpmCaS_numNoSigDef_C
#endif /* _EpmCaS_numNoSigDef_C_DEF */

/* Defined Parameter EpmCaS_stDiagMode_C */
#ifndef _EpmCaS_stDiagMode_C_DEF
#define _EpmCaS_stDiagMode_C_DEF
#define EpmCaS_stDiagMode_CM EpmCaS_stDiagMode_C
#endif /* _EpmCaS_stDiagMode_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CAMSFT_VARIINTK_SC */


/* CAMSFT_VARIINTK_SC Typ=sw */
#ifndef CAMSFT_VARIINTK_SC
  #define CAMSFT_VARIINTK_SC 0L
#elif (CAMSFT_VARIINTK_SC != 0L)
  #error >>>> 'CAMSFT_VARIINTK_SC' multiple defined
#endif


/* Referenced System Constant CAMSFT_VARIOUTL_SC */


/* CAMSFT_VARIOUTL_SC Typ=sw */
#ifndef CAMSFT_VARIOUTL_SC
  #define CAMSFT_VARIOUTL_SC 0L
#elif (CAMSFT_VARIOUTL_SC != 0L)
  #error >>>> 'CAMSFT_VARIOUTL_SC' multiple defined
#endif


/* Referenced System Constant CASTYP_SY */


/* CASTYP_SY Typ=sw */
#ifndef CASTYP_SY
  #define CASTYP_SY 1L
#elif (CASTYP_SY != 1L)
  #error >>>> 'CASTYP_SY' multiple defined
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


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant EPMCAS_DETECTBOTHEDGES */


/* EPMCAS_DETECTBOTHEDGES Typ=ub */
#ifndef EPMCAS_DETECTBOTHEDGES
  #define EPMCAS_DETECTBOTHEDGES 2L
#elif (EPMCAS_DETECTBOTHEDGES != 2L)
  #error >>>> 'EPMCAS_DETECTBOTHEDGES' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Referenced System Constant EPM_DIAGSPC_SY */


/* EPM_DIAGSPC_SY Typ=sw */
#ifndef EPM_DIAGSPC_SY
  #define EPM_DIAGSPC_SY 0L
#elif (EPM_DIAGSPC_SY != 0L)
  #error >>>> 'EPM_DIAGSPC_SY' multiple defined
#endif


/* Referenced System Constant EPM_NUMCRSREVWCY */


/* EPM_NUMCRSREVWCY Typ=sl */
#ifndef EPM_NUMCRSREVWCY
  #define EPM_NUMCRSREVWCY 2L
#elif (EPM_NUMCRSREVWCY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY' multiple defined
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


/* Referenced System Constant NUMCASMAX */


/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Exported Variable: EpmCaS_stDiag */


/* Exported Variable: EpmCaS_stDiagErr */


/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCaS_bActivatePatmat */
#ifdef _DAT_H
#ifndef __EPMCAS_BACTIVATEPATMAT_EXT__
#define __EPMCAS_BACTIVATEPATMAT_EXT__
extern uint8 EpmCaS_bActivatePatmat[1];
#endif
#endif


/* Local Variable: EpmCaS_cntrEdgeLstCyc */
#ifdef _DAT_H
#ifndef __EPMCAS_CNTREDGELSTCYC_EXT__
#define __EPMCAS_CNTREDGELSTCYC_EXT__
extern uint16 EpmCaS_cntrEdgeLstCyc[1];
#endif
#endif


/* Local Variable: EpmCaS_ctEdgeLst */
#ifdef _DAT_H
#ifndef __EPMCAS_CTEDGELST_EXT__
#define __EPMCAS_CTEDGELST_EXT__
extern sint16 EpmCaS_ctEdgeLst[1];
#endif
#endif


/* Local Variable: EpmCaS_ctErrSig */
#ifdef _DAT_H
#ifndef __EPMCAS_CTERRSIG_EXT__
#define __EPMCAS_CTERRSIG_EXT__
extern uint16 EpmCaS_ctErrSig[1];
#endif
#endif


/* Local Variable: EpmCaS_ctNoSig */
#ifdef _DAT_H
#ifndef __EPMCAS_CTNOSIG_EXT__
#define __EPMCAS_CTNOSIG_EXT__
extern uint16 EpmCaS_ctNoSig[1];
#endif
#endif


/* Local Variable: EpmCaS_ctRevNoSig */
#ifdef _DAT_H
#ifndef __EPMCAS_CTREVNOSIG_EXT__
#define __EPMCAS_CTREVNOSIG_EXT__
extern uint16 EpmCaS_ctRevNoSig[1];
#endif
#endif


/* Local Variable: EpmCaS_ctRevSig */
#ifdef _DAT_H
#ifndef __EPMCAS_CTREVSIG_EXT__
#define __EPMCAS_CTREVSIG_EXT__
extern uint16 EpmCaS_ctRevSig[1];
#endif
#endif


/* Local Variable: EpmCaS_ctSigOk */
#ifdef _DAT_H
#ifndef __EPMCAS_CTSIGOK_EXT__
#define __EPMCAS_CTSIGOK_EXT__
extern uint16 EpmCaS_ctSigOk[1];
#endif
#endif


/* Local Variable: EpmCaS_numCurrEdge */
#ifdef _DAT_H
#ifndef __EPMCAS_NUMCURREDGE_EXT__
#define __EPMCAS_NUMCURREDGE_EXT__
extern uint16 EpmCaS_numCurrEdge[1];
#endif
#endif


/* Local Variable: EpmCaS_stCaSLvl */
#ifdef _DAT_H
#ifndef __EPMCAS_STCASLVL_EXT__
#define __EPMCAS_STCASLVL_EXT__
extern uint8 EpmCaS_stCaSLvl[1];
#endif
#endif


/* Local Variable: EpmCaS_stSegFault */
#ifdef _DAT_H
#ifndef __EPMCAS_STSEGFAULT_EXT__
#define __EPMCAS_STSEGFAULT_EXT__
extern bool EpmCaS_stSegFault[1];
#endif
#endif


/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stCaSPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stOpMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stOpMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmSyn_CaSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

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


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCAS_DIAG_DIR_T_DEF
#define DATA_EPMCAS_DIAG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCaS_flgSwtSnglEdgeTol_C ----- */
    uint8 _EpmCaS_flgSwtSnglEdgeTol_C;
    /* ----- Parameter EpmCaS_numErrSigDef_C ----- */
    uint16 _EpmCaS_numErrSigDef_C;
    /* ----- Parameter EpmCaS_numErrSigOk_C ----- */
    uint16 _EpmCaS_numErrSigOk_C;
    /* ----- Parameter EpmCaS_numNoSigDef_C ----- */
    uint16 _EpmCaS_numNoSigDef_C;
    /* ----- Parameter EpmCaS_stDiagMode_C ----- */
    uint8 _EpmCaS_stDiagMode_C;
} DATA_EpmCaS_Diag_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCaS_Diag_dir_t DATA_EpmCaS_Diag_dir
    __attribute__ ((asection (".pta_datadir_EpmCaS_Diag","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCaS_Diag_dir_t * const VECT_EpmCaS_Diag_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCaS_Diag","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCaS_flgSwtSnglEdgeTol_C -- */
#ifndef EpmCaS_flgSwtSnglEdgeTol_C
#define EpmCaS_flgSwtSnglEdgeTol_C (VECT_EpmCaS_Diag_dir->_EpmCaS_flgSwtSnglEdgeTol_C)
#endif

#ifndef RP_EpmCaS_flgSwtSnglEdgeTol_C
#define RP_EpmCaS_flgSwtSnglEdgeTol_C (DATA_EpmCaS_Diag_dir._EpmCaS_flgSwtSnglEdgeTol_C)
#endif

#ifndef __EpmCaS_flgSwtSnglEdgeTol_C
#define __EpmCaS_flgSwtSnglEdgeTol_C (VECT_EpmCaS_Diag_dir->_EpmCaS_flgSwtSnglEdgeTol_C)
#endif

/* -- Macro for local Parameter EpmCaS_numErrSigDef_C -- */
#ifndef EpmCaS_numErrSigDef_C
#define EpmCaS_numErrSigDef_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numErrSigDef_C)
#endif

#ifndef RP_EpmCaS_numErrSigDef_C
#define RP_EpmCaS_numErrSigDef_C (DATA_EpmCaS_Diag_dir._EpmCaS_numErrSigDef_C)
#endif

#ifndef __EpmCaS_numErrSigDef_C
#define __EpmCaS_numErrSigDef_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numErrSigDef_C)
#endif

/* -- Macro for local Parameter EpmCaS_numErrSigOk_C -- */
#ifndef EpmCaS_numErrSigOk_C
#define EpmCaS_numErrSigOk_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numErrSigOk_C)
#endif

#ifndef RP_EpmCaS_numErrSigOk_C
#define RP_EpmCaS_numErrSigOk_C (DATA_EpmCaS_Diag_dir._EpmCaS_numErrSigOk_C)
#endif

#ifndef __EpmCaS_numErrSigOk_C
#define __EpmCaS_numErrSigOk_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numErrSigOk_C)
#endif

/* -- Macro for local Parameter EpmCaS_numNoSigDef_C -- */
#ifndef EpmCaS_numNoSigDef_C
#define EpmCaS_numNoSigDef_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numNoSigDef_C)
#endif

#ifndef RP_EpmCaS_numNoSigDef_C
#define RP_EpmCaS_numNoSigDef_C (DATA_EpmCaS_Diag_dir._EpmCaS_numNoSigDef_C)
#endif

#ifndef __EpmCaS_numNoSigDef_C
#define __EpmCaS_numNoSigDef_C (VECT_EpmCaS_Diag_dir->_EpmCaS_numNoSigDef_C)
#endif

/* -- Macro for local Parameter EpmCaS_stDiagMode_C -- */
#ifndef EpmCaS_stDiagMode_C
#define EpmCaS_stDiagMode_C (VECT_EpmCaS_Diag_dir->_EpmCaS_stDiagMode_C)
#endif

#ifndef RP_EpmCaS_stDiagMode_C
#define RP_EpmCaS_stDiagMode_C (DATA_EpmCaS_Diag_dir._EpmCaS_stDiagMode_C)
#endif

#ifndef __EpmCaS_stDiagMode_C
#define __EpmCaS_stDiagMode_C (VECT_EpmCaS_Diag_dir->_EpmCaS_stDiagMode_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCAS_DIAG_DAT_H */
