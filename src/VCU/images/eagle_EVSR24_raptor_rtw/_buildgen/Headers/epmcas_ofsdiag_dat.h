#ifndef _EPMCAS_OFSDIAG_DAT_H
#define _EPMCAS_OFSDIAG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCaS_numOfsErr_C */
#ifndef _EpmCaS_numOfsErr_C_DEF
#define _EpmCaS_numOfsErr_C_DEF
#define EpmCaS_numOfsErr_CM EpmCaS_numOfsErr_C
#endif /* _EpmCaS_numOfsErr_C_DEF */

/* Defined Parameter EpmCaS_phiMntErrMax_C */
#ifndef _EpmCaS_phiMntErrMax_C_DEF
#define _EpmCaS_phiMntErrMax_C_DEF
#define EpmCaS_phiMntErrMax_CM EpmCaS_phiMntErrMax_C
#endif /* _EpmCaS_phiMntErrMax_C_DEF */

/* Defined Parameter EpmCaS_phiMntErrMin_C */
#ifndef _EpmCaS_phiMntErrMin_C_DEF
#define _EpmCaS_phiMntErrMin_C_DEF
#define EpmCaS_phiMntErrMin_CM EpmCaS_phiMntErrMin_C
#endif /* _EpmCaS_phiMntErrMin_C_DEF */

/* Defined Parameter EpmCaS_phiOfsMax_C */
#ifndef _EpmCaS_phiOfsMax_C_DEF
#define _EpmCaS_phiOfsMax_C_DEF
#define EpmCaS_phiOfsMax_CM EpmCaS_phiOfsMax_C
#endif /* _EpmCaS_phiOfsMax_C_DEF */

/* Defined Parameter EpmCaS_phiOfsMin_C */
#ifndef _EpmCaS_phiOfsMin_C_DEF
#define _EpmCaS_phiOfsMin_C_DEF
#define EpmCaS_phiOfsMin_CM EpmCaS_phiOfsMin_C
#endif /* _EpmCaS_phiOfsMin_C_DEF */

/* Defined Parameter EpmCaS_stOfsDiagMode_C */
#ifndef _EpmCaS_stOfsDiagMode_C_DEF
#define _EpmCaS_stOfsDiagMode_C_DEF
#define EpmCaS_stOfsDiagMode_CM EpmCaS_stOfsDiagMode_C
#endif /* _EpmCaS_stOfsDiagMode_C_DEF */

/* Defined Parameter EpmCaS_tiOfsPT1_C */
#ifndef _EpmCaS_tiOfsPT1_C_DEF
#define _EpmCaS_tiOfsPT1_C_DEF
#define EpmCaS_tiOfsPT1_CM EpmCaS_tiOfsPT1_C
#endif /* _EpmCaS_tiOfsPT1_C_DEF */

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


/* Referenced System Constant CAS_ADAP_SY */


/* CAS_ADAP_SY Typ=sw */
#ifndef CAS_ADAP_SY
  #define CAS_ADAP_SY 2L
#elif (CAS_ADAP_SY != 2L)
  #error >>>> 'CAS_ADAP_SY' multiple defined
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


/* Referenced System Constant EPMCAS_NUMSEG_SC */


/* EPMCAS_NUMSEG_SC Typ=ub */
#ifndef EPMCAS_NUMSEG_SC
  #define EPMCAS_NUMSEG_SC 10L
#elif (EPMCAS_NUMSEG_SC != 10L)
  #error >>>> 'EPMCAS_NUMSEG_SC' multiple defined
#endif


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
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


/* Local Variable: EpmCaS_ctOfsErr_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_CTOFSERR_MP_EXT__
#define __EPMCAS_CTOFSERR_MP_EXT__
extern uint8 EpmCaS_ctOfsErr_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_numBufEntry_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_NUMBUFENTRY_MP_EXT__
#define __EPMCAS_NUMBUFENTRY_MP_EXT__
extern uint8 EpmCaS_numBufEntry_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_numSegTeeth_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_NUMSEGTEETH_MP_EXT__
#define __EPMCAS_NUMSEGTEETH_MP_EXT__
extern uint8 EpmCaS_numSegTeeth_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_numValidTeeth_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_NUMVALIDTEETH_MP_EXT__
#define __EPMCAS_NUMVALIDTEETH_MP_EXT__
extern uint8 EpmCaS_numValidTeeth_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiMissedSeg_mp */
/* MpA_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIMISSEDSEG_MP_EXT__
#define __EPMCAS_PHIMISSEDSEG_MP_EXT__
extern sint16 EpmCaS_phiMissedSeg_mp[1]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiOfsTolc_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIOFSTOLC_MP_EXT__
#define __EPMCAS_PHIOFSTOLC_MP_EXT__
extern sint16 EpmCaS_phiOfsTolc_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiSegLenTolc_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHISEGLENTOLC_MP_EXT__
#define __EPMCAS_PHISEGLENTOLC_MP_EXT__
extern sint16 EpmCaS_phiSegLenTolc_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiSpeedSegLen_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHISPEEDSEGLEN_MP_EXT__
#define __EPMCAS_PHISPEEDSEGLEN_MP_EXT__
extern sint16 EpmCaS_phiSpeedSegLen_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: EpmCaS_phiCaSOfsAvg */


/* Exported Variable: EpmCaS_phiOfsCorr */
/* EpmCaS_phiOfsCorr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_stOfs */


/* Exported Variable: EpmCaS_stOfsErr */


/* Imported Variable: EpmCaS_phiDiffAvrgLim */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCaS_phiDiffAvrgLim is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmRRS_bEngSwOff */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmRRS_bEngSwOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmCaS_Adap -- */
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
			
/* Parameter EpmCaS_numSegSerLst_C in Addressschema dir is referenced from function EpmCaS_Seg */ 

		
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

/* -- No referenced PTA Structures of EpmRRS_AgDetect -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					
/* -- Referenced PTA Structures of EpmSyn_CaSPos -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EpmSyn_dCaSSegMsk_C */


#ifndef _EpmSyn_dCaSSegMsk_C_DEF
#define _EpmSyn_dCaSSegMsk_C_DEF
#define EpmSyn_dCaSSegMsk_CM EpmSyn_dCaSSegMsk_C
#endif /* _EPMSYN_DCASSEGMSK_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter EpmSyn_dCaSSegMsk_C in Addressschema dir is referenced from function EpmSyn_CaSPos */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMSYN_CASPOS_DIR_T_DEF
#define DATA_EPMSYN_CASPOS_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmSyn_dCaSSegMsk_C ----- */
    uint8 _EpmSyn_dCaSSegMsk_C;
} DATA_EpmSyn_CaSPos_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmSyn_CaSPos_dir_t DATA_EpmSyn_CaSPos_dir
    __attribute__ ((asection (".pta_datadir_EpmSyn_CaSPos","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmSyn_CaSPos_dir_t * const VECT_EpmSyn_CaSPos_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmSyn_CaSPos","f=as")));
#endif

/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter EpmCaS_numSegSerLst_C -- */
#ifndef EpmCaS_numSegSerLst_C
#define EpmCaS_numSegSerLst_C\
    (VECT_EpmCaS_Seg_dir->_EpmCaS_numSegSerLst_C)
#endif

#ifndef RP_EpmCaS_numSegSerLst_C
#define RP_EpmCaS_numSegSerLst_C\
    (DATA_EpmCaS_Seg_dir._EpmCaS_numSegSerLst_C)
#endif

/* -- Macro for referenced Parameter EpmSyn_dCaSSegMsk_C -- */
#ifndef EpmSyn_dCaSSegMsk_C
#define EpmSyn_dCaSSegMsk_C\
    (VECT_EpmSyn_CaSPos_dir->_EpmSyn_dCaSSegMsk_C)
#endif

#ifndef RP_EpmSyn_dCaSSegMsk_C
#define RP_EpmSyn_dCaSSegMsk_C\
    (DATA_EpmSyn_CaSPos_dir._EpmSyn_dCaSSegMsk_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCAS_OFSDIAG_DIR_T_DEF
#define DATA_EPMCAS_OFSDIAG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCaS_numOfsErr_C ----- */
    uint8 _EpmCaS_numOfsErr_C;
    /* ----- Parameter EpmCaS_phiMntErrMax_C ----- */
    sint16 _EpmCaS_phiMntErrMax_C;
    /* ----- Parameter EpmCaS_phiMntErrMin_C ----- */
    sint16 _EpmCaS_phiMntErrMin_C;
    /* ----- Parameter EpmCaS_phiOfsMax_C ----- */
    sint16 _EpmCaS_phiOfsMax_C;
    /* ----- Parameter EpmCaS_phiOfsMin_C ----- */
    sint16 _EpmCaS_phiOfsMin_C;
    /* ----- Parameter EpmCaS_stOfsDiagMode_C ----- */
    uint8 _EpmCaS_stOfsDiagMode_C;
    /* ----- Parameter EpmCaS_tiOfsPT1_C ----- */
    uint16 _EpmCaS_tiOfsPT1_C;
} DATA_EpmCaS_OfsDiag_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCaS_OfsDiag_dir_t DATA_EpmCaS_OfsDiag_dir
    __attribute__ ((asection (".pta_datadir_EpmCaS_OfsDiag","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCaS_OfsDiag_dir_t * const VECT_EpmCaS_OfsDiag_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCaS_OfsDiag","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCaS_numOfsErr_C -- */
#ifndef EpmCaS_numOfsErr_C
#define EpmCaS_numOfsErr_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_numOfsErr_C)
#endif

#ifndef RP_EpmCaS_numOfsErr_C
#define RP_EpmCaS_numOfsErr_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_numOfsErr_C)
#endif

#ifndef __EpmCaS_numOfsErr_C
#define __EpmCaS_numOfsErr_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_numOfsErr_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiMntErrMax_C -- */
#ifndef EpmCaS_phiMntErrMax_C
#define EpmCaS_phiMntErrMax_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiMntErrMax_C)
#endif

#ifndef RP_EpmCaS_phiMntErrMax_C
#define RP_EpmCaS_phiMntErrMax_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_phiMntErrMax_C)
#endif

#ifndef __EpmCaS_phiMntErrMax_C
#define __EpmCaS_phiMntErrMax_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiMntErrMax_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiMntErrMin_C -- */
#ifndef EpmCaS_phiMntErrMin_C
#define EpmCaS_phiMntErrMin_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiMntErrMin_C)
#endif

#ifndef RP_EpmCaS_phiMntErrMin_C
#define RP_EpmCaS_phiMntErrMin_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_phiMntErrMin_C)
#endif

#ifndef __EpmCaS_phiMntErrMin_C
#define __EpmCaS_phiMntErrMin_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiMntErrMin_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiOfsMax_C -- */
#ifndef EpmCaS_phiOfsMax_C
#define EpmCaS_phiOfsMax_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiOfsMax_C)
#endif

#ifndef RP_EpmCaS_phiOfsMax_C
#define RP_EpmCaS_phiOfsMax_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_phiOfsMax_C)
#endif

#ifndef __EpmCaS_phiOfsMax_C
#define __EpmCaS_phiOfsMax_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiOfsMax_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiOfsMin_C -- */
#ifndef EpmCaS_phiOfsMin_C
#define EpmCaS_phiOfsMin_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiOfsMin_C)
#endif

#ifndef RP_EpmCaS_phiOfsMin_C
#define RP_EpmCaS_phiOfsMin_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_phiOfsMin_C)
#endif

#ifndef __EpmCaS_phiOfsMin_C
#define __EpmCaS_phiOfsMin_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_phiOfsMin_C)
#endif

/* -- Macro for local Parameter EpmCaS_stOfsDiagMode_C -- */
#ifndef EpmCaS_stOfsDiagMode_C
#define EpmCaS_stOfsDiagMode_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_stOfsDiagMode_C)
#endif

#ifndef RP_EpmCaS_stOfsDiagMode_C
#define RP_EpmCaS_stOfsDiagMode_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_stOfsDiagMode_C)
#endif

#ifndef __EpmCaS_stOfsDiagMode_C
#define __EpmCaS_stOfsDiagMode_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_stOfsDiagMode_C)
#endif

/* -- Macro for local Parameter EpmCaS_tiOfsPT1_C -- */
#ifndef EpmCaS_tiOfsPT1_C
#define EpmCaS_tiOfsPT1_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_tiOfsPT1_C)
#endif

#ifndef RP_EpmCaS_tiOfsPT1_C
#define RP_EpmCaS_tiOfsPT1_C (DATA_EpmCaS_OfsDiag_dir._EpmCaS_tiOfsPT1_C)
#endif

#ifndef __EpmCaS_tiOfsPT1_C
#define __EpmCaS_tiOfsPT1_C (VECT_EpmCaS_OfsDiag_dir->_EpmCaS_tiOfsPT1_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCAS_OFSDIAG_DAT_H */
