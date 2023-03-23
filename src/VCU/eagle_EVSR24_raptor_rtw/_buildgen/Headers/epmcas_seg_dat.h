#ifndef _EPMCAS_SEG_DAT_H
#define _EPMCAS_SEG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCaS_dSegSeries_CA */
#ifndef _EpmCaS_dSegSeries_CA_DEF
#define _EpmCaS_dSegSeries_CA_DEF
#define EpmCaS_dSegSeries_CAM EpmCaS_dSegSeries_CA
#endif /* _EpmCaS_dSegSeries_CA_DEF */

/* Defined Parameter EpmCaS_facPlausHigh_GCUR */
#ifndef _EpmCaS_facPlausHigh_GCUR_DEF
#define _EpmCaS_facPlausHigh_GCUR_DEF
#define EpmCaS_facPlausHigh_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_facPlausHigh_GCUR))
#endif /* _EpmCaS_facPlausHigh_GCUR_DEF */

/* Defined Parameter EpmCaS_facPlausLow_GCUR */
#ifndef _EpmCaS_facPlausLow_GCUR_DEF
#define _EpmCaS_facPlausLow_GCUR_DEF
#define EpmCaS_facPlausLow_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_facPlausLow_GCUR))
#endif /* _EpmCaS_facPlausLow_GCUR_DEF */

/* Defined Parameter EpmCaS_facPlaus_DST */
#ifndef _EpmCaS_facPlaus_DST_DEF
#define _EpmCaS_facPlaus_DST_DEF
#define EpmCaS_facPlaus_DSTM(input_x)\
    (SrvX_DistrSearchS16((input_x),\
    EpmCaS_facPlaus_DST[0], &EpmCaS_facPlaus_DST[1]))
#endif /* _EpmCaS_facPlaus_DST_DEF */

/* Defined Parameter EpmCaS_nCaSSigInvld_C */
#ifndef _EpmCaS_nCaSSigInvld_C_DEF
#define _EpmCaS_nCaSSigInvld_C_DEF
#define EpmCaS_nCaSSigInvld_CM EpmCaS_nCaSSigInvld_C
#endif /* _EpmCaS_nCaSSigInvld_C_DEF */

/* Defined Parameter EpmCaS_nCaSSigVld_C */
#ifndef _EpmCaS_nCaSSigVld_C_DEF
#define _EpmCaS_nCaSSigVld_C_DEF
#define EpmCaS_nCaSSigVld_CM EpmCaS_nCaSSigVld_C
#endif /* _EpmCaS_nCaSSigVld_C_DEF */

/* Defined Parameter EpmCaS_numSegSerLst_C */
#ifndef _EpmCaS_numSegSerLst_C_DEF
#define _EpmCaS_numSegSerLst_C_DEF
#define EpmCaS_numSegSerLst_CM EpmCaS_numSegSerLst_C
#endif /* _EpmCaS_numSegSerLst_C_DEF */

/* Defined Parameter EpmCaS_phiLoLimIn_C */
#ifndef _EpmCaS_phiLoLimIn_C_DEF
#define _EpmCaS_phiLoLimIn_C_DEF
#define EpmCaS_phiLoLimIn_CM EpmCaS_phiLoLimIn_C
#endif /* _EpmCaS_phiLoLimIn_C_DEF */

/* Defined Parameter EpmCaS_phiNCor_CUR */
#ifndef _EpmCaS_phiNCor_CUR_DEF
#define _EpmCaS_phiNCor_CUR_DEF
#define EpmCaS_phiNCor_CURM(input_x) (SrvX_IpoCurveS16((input_x), EpmCaS_phiNCor_CUR))
#define KL_EpmCaS_phiNCor_CUR SrvX_IpoCurveS16(Epm_nEng, EpmCaS_phiNCor_CUR)
#endif /* _EpmCaS_phiNCor_CUR_DEF */

/* Defined Parameter EpmCaS_phiSegLenTol_CA */
#ifndef _EpmCaS_phiSegLenTol_CA_DEF
#define _EpmCaS_phiSegLenTol_CA_DEF
#define EpmCaS_phiSegLenTol_CAM EpmCaS_phiSegLenTol_CA
#endif /* _EpmCaS_phiSegLenTol_CA_DEF */

/* Defined Parameter EpmCaS_phiSegLen_CA */
#ifndef _EpmCaS_phiSegLen_CA_DEF
#define _EpmCaS_phiSegLen_CA_DEF
#define EpmCaS_phiSegLen_CAM EpmCaS_phiSegLen_CA
#endif /* _EpmCaS_phiSegLen_CA_DEF */

/* Defined Parameter EpmCaS_phiSegOfs_CA */
#ifndef _EpmCaS_phiSegOfs_CA_DEF
#define _EpmCaS_phiSegOfs_CA_DEF
#define EpmCaS_phiSegOfs_CAM EpmCaS_phiSegOfs_CA
#endif /* _EpmCaS_phiSegOfs_CA_DEF */

/* Defined Parameter EpmCaS_phiTempCor05_DST */
#ifndef _EpmCaS_phiTempCor05_DST_DEF
#define _EpmCaS_phiTempCor05_DST_DEF
#define EpmCaS_phiTempCor05_DSTM(input_x)\
    (SrvX_DistrSearchS16((input_x),\
    EpmCaS_phiTempCor05_DST[0], &EpmCaS_phiTempCor05_DST[1]))
#endif /* _EpmCaS_phiTempCor05_DST_DEF */

/* Defined Parameter EpmCaS_phiTempCorI1_GCUR */
#ifndef _EpmCaS_phiTempCorI1_GCUR_DEF
#define _EpmCaS_phiTempCorI1_GCUR_DEF
#define EpmCaS_phiTempCorI1_GCURM(input_x)\
    (SrvX_IpoGroupCurveS16((input_x),\
    EpmCaS_phiTempCorI1_GCUR))
#endif /* _EpmCaS_phiTempCorI1_GCUR_DEF */

/* Defined Parameter EpmCaS_phiUpLimIn_C */
#ifndef _EpmCaS_phiUpLimIn_C_DEF
#define _EpmCaS_phiUpLimIn_C_DEF
#define EpmCaS_phiUpLimIn_CM EpmCaS_phiUpLimIn_C
#endif /* _EpmCaS_phiUpLimIn_C_DEF */

/* Defined Parameter EpmCaS_stActEdge_C */
#ifndef _EpmCaS_stActEdge_C_DEF
#define _EpmCaS_stActEdge_C_DEF
#define EpmCaS_stActEdge_CM EpmCaS_stActEdge_C
#endif /* _EpmCaS_stActEdge_C_DEF */

/* Defined Parameter EpmCaS_stMinSyncCaSAg_C */
#ifndef _EpmCaS_stMinSyncCaSAg_C_DEF
#define _EpmCaS_stMinSyncCaSAg_C_DEF
#define EpmCaS_stMinSyncCaSAg_CM EpmCaS_stMinSyncCaSAg_C
#endif /* _EpmCaS_stMinSyncCaSAg_C_DEF */

/* Defined Parameter EpmCaS_swtSeg_C */
#ifndef _EpmCaS_swtSeg_C_DEF
#define _EpmCaS_swtSeg_C_DEF
#define EpmCaS_swtSeg_CM EpmCaS_swtSeg_C
#endif /* _EpmCaS_swtSeg_C_DEF */

/* Defined Parameter EpmCaS_tiGlitchFilter_C */
#ifndef _EpmCaS_tiGlitchFilter_C_DEF
#define _EpmCaS_tiGlitchFilter_C_DEF
#define EpmCaS_tiGlitchFilter_CM EpmCaS_tiGlitchFilter_C
#endif /* _EpmCaS_tiGlitchFilter_C_DEF */

/* Defined Parameter EpmCaS_tiTimeout_C */
#ifndef _EpmCaS_tiTimeout_C_DEF
#define _EpmCaS_tiTimeout_C_DEF
#define EpmCaS_tiTimeout_CM EpmCaS_tiTimeout_C
#endif /* _EpmCaS_tiTimeout_C_DEF */

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


/* Referenced System Constant CAS_ADAP_SY */


/* CAS_ADAP_SY Typ=sw */
#ifndef CAS_ADAP_SY
  #define CAS_ADAP_SY 2L
#elif (CAS_ADAP_SY != 2L)
  #error >>>> 'CAS_ADAP_SY' multiple defined
#endif


/* Referenced System Constant CAS_ANGLE_SY */


/* CAS_ANGLE_SY Typ=sw */
#ifndef CAS_ANGLE_SY
  #define CAS_ANGLE_SY 1L
#elif (CAS_ANGLE_SY != 1L)
  #error >>>> 'CAS_ANGLE_SY' multiple defined
#endif


/* Referenced System Constant CAS_DELAY_SC */


/* CAS_DELAY_SC Typ=sw */
#ifndef CAS_DELAY_SC
  #define CAS_DELAY_SC 0L
#elif (CAS_DELAY_SC != 0L)
  #error >>>> 'CAS_DELAY_SC' multiple defined
#endif


/* Referenced System Constant CAS_FAC_PLAUS_SY */


/* CAS_FAC_PLAUS_SY Typ=fl4 */
#ifndef CAS_FAC_PLAUS_SY
  #define CAS_FAC_PLAUS_SY 1000L
#elif (CAS_FAC_PLAUS_SY != 1000L)
  #error >>>> 'CAS_FAC_PLAUS_SY' multiple defined
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


/* Referenced System Constant CAS_SEGCOR_SY */


/* CAS_SEGCOR_SY Typ=sw */
#ifndef CAS_SEGCOR_SY
  #define CAS_SEGCOR_SY 0L
#elif (CAS_SEGCOR_SY != 0L)
  #error >>>> 'CAS_SEGCOR_SY' multiple defined
#endif


/* Referenced System Constant EPMCAS_FACPLAUS_DSTX_SC */


/* EPMCAS_FACPLAUS_DSTX_SC Typ=ub */
#ifndef EPMCAS_FACPLAUS_DSTX_SC
  #define EPMCAS_FACPLAUS_DSTX_SC 3L
#elif (EPMCAS_FACPLAUS_DSTX_SC != 3L)
  #error >>>> 'EPMCAS_FACPLAUS_DSTX_SC' multiple defined
#endif


/* Referenced System Constant EPMCAS_NUMSEGLEN_SC */


/* EPMCAS_NUMSEGLEN_SC Typ=ub */
#ifndef EPMCAS_NUMSEGLEN_SC
  #define EPMCAS_NUMSEGLEN_SC 10L
#elif (EPMCAS_NUMSEGLEN_SC != 10L)
  #error >>>> 'EPMCAS_NUMSEGLEN_SC' multiple defined
#endif


/* Referenced System Constant EPMCAS_NUMSEG_SC */


/* EPMCAS_NUMSEG_SC Typ=ub */
#ifndef EPMCAS_NUMSEG_SC
  #define EPMCAS_NUMSEG_SC 10L
#elif (EPMCAS_NUMSEG_SC != 10L)
  #error >>>> 'EPMCAS_NUMSEG_SC' multiple defined
#endif


/* Referenced System Constant EPMCAS_PHINCOR_CURX_SC */


/* EPMCAS_PHINCOR_CURX_SC Typ=ub */
#ifndef EPMCAS_PHINCOR_CURX_SC
  #define EPMCAS_PHINCOR_CURX_SC 6L
#elif (EPMCAS_PHINCOR_CURX_SC != 6L)
  #error >>>> 'EPMCAS_PHINCOR_CURX_SC' multiple defined
#endif


/* Referenced System Constant EPMCAS_PHITEMPCOR05_DSTX_SC */


/* EPMCAS_PHITEMPCOR05_DSTX_SC Typ=ub */
#ifndef EPMCAS_PHITEMPCOR05_DSTX_SC
  #define EPMCAS_PHITEMPCOR05_DSTX_SC 3L
#elif (EPMCAS_PHITEMPCOR05_DSTX_SC != 3L)
  #error >>>> 'EPMCAS_PHITEMPCOR05_DSTX_SC' multiple defined
#endif


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
#endif


/* Referenced System Constant EPM_NMAX */


/* EPM_NMAX Typ=sl */
#ifndef EPM_NMAX
  #define EPM_NMAX 20000L
#elif (EPM_NMAX != 20000L)
  #error >>>> 'EPM_NMAX' multiple defined
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


/* Referenced System Constant FAC_USEC_TO_RPM */


/* FAC_USEC_TO_RPM Typ=fl4 */
#ifndef FAC_USEC_TO_RPM
  #define FAC_USEC_TO_RPM 60000000L
#elif (FAC_USEC_TO_RPM != 60000000L)
  #error >>>> 'FAC_USEC_TO_RPM' multiple defined
#endif


/* Referenced System Constant NUMCASMAX */


/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif


/* Local System Constant EPMCAS_DETECTBOTHEDGES */


/* EPMCAS_DETECTBOTHEDGES Typ=ub */
#ifndef EPMCAS_DETECTBOTHEDGES
  #define EPMCAS_DETECTBOTHEDGES 2L
#elif (EPMCAS_DETECTBOTHEDGES != 2L)
  #error >>>> 'EPMCAS_DETECTBOTHEDGES' multiple defined
#endif


/* Local System Constant EPMCAS_DETECTFALLINGEDGES */


/* EPMCAS_DETECTFALLINGEDGES Typ=ub */
#ifndef EPMCAS_DETECTFALLINGEDGES
  #define EPMCAS_DETECTFALLINGEDGES 0L
#elif (EPMCAS_DETECTFALLINGEDGES != 0L)
  #error >>>> 'EPMCAS_DETECTFALLINGEDGES' multiple defined
#endif


/* Local System Constant EPMCAS_DETECTRISINGEDGES */


/* EPMCAS_DETECTRISINGEDGES Typ=ub */
#ifndef EPMCAS_DETECTRISINGEDGES
  #define EPMCAS_DETECTRISINGEDGES 1L
#elif (EPMCAS_DETECTRISINGEDGES != 1L)
  #error >>>> 'EPMCAS_DETECTRISINGEDGES' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCaS_ctEdgeEquidInt */
#ifdef _DAT_H
#ifndef __EPMCAS_CTEDGEEQUIDINT_EXT__
#define __EPMCAS_CTEDGEEQUIDINT_EXT__
extern sint8 EpmCaS_ctEdgeEquidInt[1];
#endif
#endif


/* Local Variable: EpmCaS_nCaS_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_NCAS_MP_EXT__
#define __EPMCAS_NCAS_MP_EXT__
extern sint16 EpmCaS_nCaS_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiEdgeInt */
#ifdef _DAT_H
#ifndef __EPMCAS_PHIEDGEINT_EXT__
#define __EPMCAS_PHIEDGEINT_EXT__
extern sint16 EpmCaS_phiEdgeInt[1];
#endif
#endif


/* Local Variable: EpmCaS_phiRefPos */


/* Local Variable: EpmCaS_stAgPhaShift_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_STAGPHASHIFT_MP_EXT__
#define __EPMCAS_STAGPHASHIFT_MP_EXT__
extern uint8 EpmCaS_stAgPhaShift_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_stPhaAdpn_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_STPHAADPN_MP_EXT__
#define __EPMCAS_STPHAADPN_MP_EXT__
extern uint8 EpmCaS_stPhaAdpn_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_stPhaRefAdpn_mp */
/* MpA_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_STPHAREFADPN_MP_EXT__
#define __EPMCAS_STPHAREFADPN_MP_EXT__
extern uint8 EpmCaS_stPhaRefAdpn_mp[1]    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_stPosValid */
#ifdef _DAT_H
#ifndef __EPMCAS_STPOSVALID_EXT__
#define __EPMCAS_STPOSVALID_EXT__
extern bool EpmCaS_stPosValid[1];
#endif
#endif


/* Local Variable: EpmCaS_tiDifAgPhaLstEdge_mp */
/* MpA_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_TIDIFAGPHALSTEDGE_MP_EXT__
#define __EPMCAS_TIDIFAGPHALSTEDGE_MP_EXT__
extern sint32 EpmCaS_tiDifAgPhaLstEdge_mp[1]    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_tiDifAgPhaLstTwoEdges_mp */
/* MpA_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_TIDIFAGPHALSTTWOEDGES_MP_EXT__
#define __EPMCAS_TIDIFAGPHALSTTWOEDGES_MP_EXT__
extern sint32 EpmCaS_tiDifAgPhaLstTwoEdges_mp[1]    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_tiEdgeInt */
#ifdef _DAT_H
#ifndef __EPMCAS_TIEDGEINT_EXT__
#define __EPMCAS_TIEDGEINT_EXT__
extern sint32 EpmCaS_tiEdgeInt[1];
#endif
#endif


/* Local Variable: EpmCaS_tiNEngRstTimer */
#ifdef _DAT_H
#ifndef __EPMCAS_TINENGRSTTIMER_EXT__
#define __EPMCAS_TINENGRSTTIMER_EXT__
extern sint32 EpmCaS_tiNEngRstTimer;
#endif
#endif


/* Exported Variable: EpmCaS_allCaSEdges */
/* EpmCaS_allCaSEdges is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_CASI1ctEdge10msU8 */
/* EpmCaS_CASI1ctEdge10msU8 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_ctEdgeEquid */
/* EpmCaS_ctEdgeEquid is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_nEng */
/* EpmCaS_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_numSegSerLst */
/* EpmCaS_numSegSerLst is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_phiCor */
/* EpmCaS_phiCor is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_phiDiffLim */
/* EpmCaS_phiDiffLim is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_phiEdge */
/* EpmCaS_phiEdge is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_phiTempCor */
/* EpmCaS_phiTempCor is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_stNEng */
/* EpmCaS_stNEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_stphiDiffLim */
/* EpmCaS_stphiDiffLim is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_tiEdge */
/* EpmCaS_tiEdge is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EngDa_tEng */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __ENGDA_TENG_EXT__
#define __ENGDA_TENG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 EngDa_tEng;
#else /* local or exported variable - write access */
extern sint16 EngDa_tEng;
#endif /* IMPORTED */
#endif /* __ENGDA_TENG_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCaS_stAdap */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_stCaSPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stSync */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stSync is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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
 
/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmSyn_CaSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
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


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

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

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCaS_dSegSeries_CA -- */
#ifndef EpmCaS_dSegSeries_CA
#define EpmCaS_dSegSeries_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_dSegSeries_CA)
#endif

#ifndef RP_EpmCaS_dSegSeries_CA
#define RP_EpmCaS_dSegSeries_CA (DATA_EpmCaS_Seg_dir._EpmCaS_dSegSeries_CA)
#endif

#ifndef __EpmCaS_dSegSeries_CA
#define __EpmCaS_dSegSeries_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_dSegSeries_CA)
#endif

/* -- Macro for local Parameter EpmCaS_facPlausHigh_GCUR -- */
#ifndef EpmCaS_facPlausHigh_GCUR
#define EpmCaS_facPlausHigh_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlausHigh_GCUR)
#endif

#ifndef RP_EpmCaS_facPlausHigh_GCUR
#define RP_EpmCaS_facPlausHigh_GCUR (DATA_EpmCaS_Seg_dir._EpmCaS_facPlausHigh_GCUR)
#endif

#ifndef __EpmCaS_facPlausHigh_GCUR
#define __EpmCaS_facPlausHigh_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlausHigh_GCUR)
#endif

/* -- Macro for local Parameter EpmCaS_facPlausLow_GCUR -- */
#ifndef EpmCaS_facPlausLow_GCUR
#define EpmCaS_facPlausLow_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlausLow_GCUR)
#endif

#ifndef RP_EpmCaS_facPlausLow_GCUR
#define RP_EpmCaS_facPlausLow_GCUR (DATA_EpmCaS_Seg_dir._EpmCaS_facPlausLow_GCUR)
#endif

#ifndef __EpmCaS_facPlausLow_GCUR
#define __EpmCaS_facPlausLow_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlausLow_GCUR)
#endif

/* -- Macro for local Parameter EpmCaS_facPlaus_DST -- */
#ifndef EpmCaS_facPlaus_DST
#define EpmCaS_facPlaus_DST (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlaus_DST)
#endif

#ifndef RP_EpmCaS_facPlaus_DST
#define RP_EpmCaS_facPlaus_DST (DATA_EpmCaS_Seg_dir._EpmCaS_facPlaus_DST)
#endif

#ifndef __EpmCaS_facPlaus_DST
#define __EpmCaS_facPlaus_DST (VECT_EpmCaS_Seg_dir->_EpmCaS_facPlaus_DST)
#endif

/* -- Macro for local Parameter EpmCaS_nCaSSigInvld_C -- */
#ifndef EpmCaS_nCaSSigInvld_C
#define EpmCaS_nCaSSigInvld_C (VECT_EpmCaS_Seg_dir->_EpmCaS_nCaSSigInvld_C)
#endif

#ifndef RP_EpmCaS_nCaSSigInvld_C
#define RP_EpmCaS_nCaSSigInvld_C (DATA_EpmCaS_Seg_dir._EpmCaS_nCaSSigInvld_C)
#endif

#ifndef __EpmCaS_nCaSSigInvld_C
#define __EpmCaS_nCaSSigInvld_C (VECT_EpmCaS_Seg_dir->_EpmCaS_nCaSSigInvld_C)
#endif

/* -- Macro for local Parameter EpmCaS_nCaSSigVld_C -- */
#ifndef EpmCaS_nCaSSigVld_C
#define EpmCaS_nCaSSigVld_C (VECT_EpmCaS_Seg_dir->_EpmCaS_nCaSSigVld_C)
#endif

#ifndef RP_EpmCaS_nCaSSigVld_C
#define RP_EpmCaS_nCaSSigVld_C (DATA_EpmCaS_Seg_dir._EpmCaS_nCaSSigVld_C)
#endif

#ifndef __EpmCaS_nCaSSigVld_C
#define __EpmCaS_nCaSSigVld_C (VECT_EpmCaS_Seg_dir->_EpmCaS_nCaSSigVld_C)
#endif

/* -- Macro for local Parameter EpmCaS_numSegSerLst_C -- */
#ifndef EpmCaS_numSegSerLst_C
#define EpmCaS_numSegSerLst_C (VECT_EpmCaS_Seg_dir->_EpmCaS_numSegSerLst_C)
#endif

#ifndef RP_EpmCaS_numSegSerLst_C
#define RP_EpmCaS_numSegSerLst_C (DATA_EpmCaS_Seg_dir._EpmCaS_numSegSerLst_C)
#endif

#ifndef __EpmCaS_numSegSerLst_C
#define __EpmCaS_numSegSerLst_C (VECT_EpmCaS_Seg_dir->_EpmCaS_numSegSerLst_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiLoLimIn_C -- */
#ifndef EpmCaS_phiLoLimIn_C
#define EpmCaS_phiLoLimIn_C (VECT_EpmCaS_Seg_dir->_EpmCaS_phiLoLimIn_C)
#endif

#ifndef RP_EpmCaS_phiLoLimIn_C
#define RP_EpmCaS_phiLoLimIn_C (DATA_EpmCaS_Seg_dir._EpmCaS_phiLoLimIn_C)
#endif

#ifndef __EpmCaS_phiLoLimIn_C
#define __EpmCaS_phiLoLimIn_C (VECT_EpmCaS_Seg_dir->_EpmCaS_phiLoLimIn_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiNCor_CUR -- */
#ifndef EpmCaS_phiNCor_CUR
#define EpmCaS_phiNCor_CUR (VECT_EpmCaS_Seg_dir->_EpmCaS_phiNCor_CUR)
#endif

#ifndef RP_EpmCaS_phiNCor_CUR
#define RP_EpmCaS_phiNCor_CUR (DATA_EpmCaS_Seg_dir._EpmCaS_phiNCor_CUR)
#endif

#ifndef __EpmCaS_phiNCor_CUR
#define __EpmCaS_phiNCor_CUR (VECT_EpmCaS_Seg_dir->_EpmCaS_phiNCor_CUR)
#endif

/* -- Macro for local Parameter EpmCaS_phiSegLenTol_CA -- */
#ifndef EpmCaS_phiSegLenTol_CA
#define EpmCaS_phiSegLenTol_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegLenTol_CA)
#endif

#ifndef RP_EpmCaS_phiSegLenTol_CA
#define RP_EpmCaS_phiSegLenTol_CA (DATA_EpmCaS_Seg_dir._EpmCaS_phiSegLenTol_CA)
#endif

#ifndef __EpmCaS_phiSegLenTol_CA
#define __EpmCaS_phiSegLenTol_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegLenTol_CA)
#endif

/* -- Macro for local Parameter EpmCaS_phiSegLen_CA -- */
#ifndef EpmCaS_phiSegLen_CA
#define EpmCaS_phiSegLen_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegLen_CA)
#endif

#ifndef RP_EpmCaS_phiSegLen_CA
#define RP_EpmCaS_phiSegLen_CA (DATA_EpmCaS_Seg_dir._EpmCaS_phiSegLen_CA)
#endif

#ifndef __EpmCaS_phiSegLen_CA
#define __EpmCaS_phiSegLen_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegLen_CA)
#endif

/* -- Macro for local Parameter EpmCaS_phiSegOfs_CA -- */
#ifndef EpmCaS_phiSegOfs_CA
#define EpmCaS_phiSegOfs_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegOfs_CA)
#endif

#ifndef RP_EpmCaS_phiSegOfs_CA
#define RP_EpmCaS_phiSegOfs_CA (DATA_EpmCaS_Seg_dir._EpmCaS_phiSegOfs_CA)
#endif

#ifndef __EpmCaS_phiSegOfs_CA
#define __EpmCaS_phiSegOfs_CA (VECT_EpmCaS_Seg_dir->_EpmCaS_phiSegOfs_CA)
#endif

/* -- Macro for local Parameter EpmCaS_phiTempCor05_DST -- */
#ifndef EpmCaS_phiTempCor05_DST
#define EpmCaS_phiTempCor05_DST (VECT_EpmCaS_Seg_dir->_EpmCaS_phiTempCor05_DST)
#endif

#ifndef RP_EpmCaS_phiTempCor05_DST
#define RP_EpmCaS_phiTempCor05_DST (DATA_EpmCaS_Seg_dir._EpmCaS_phiTempCor05_DST)
#endif

#ifndef __EpmCaS_phiTempCor05_DST
#define __EpmCaS_phiTempCor05_DST (VECT_EpmCaS_Seg_dir->_EpmCaS_phiTempCor05_DST)
#endif

/* -- Macro for local Parameter EpmCaS_phiTempCorI1_GCUR -- */
#ifndef EpmCaS_phiTempCorI1_GCUR
#define EpmCaS_phiTempCorI1_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_phiTempCorI1_GCUR)
#endif

#ifndef RP_EpmCaS_phiTempCorI1_GCUR
#define RP_EpmCaS_phiTempCorI1_GCUR (DATA_EpmCaS_Seg_dir._EpmCaS_phiTempCorI1_GCUR)
#endif

#ifndef __EpmCaS_phiTempCorI1_GCUR
#define __EpmCaS_phiTempCorI1_GCUR (VECT_EpmCaS_Seg_dir->_EpmCaS_phiTempCorI1_GCUR)
#endif

/* -- Macro for local Parameter EpmCaS_phiUpLimIn_C -- */
#ifndef EpmCaS_phiUpLimIn_C
#define EpmCaS_phiUpLimIn_C (VECT_EpmCaS_Seg_dir->_EpmCaS_phiUpLimIn_C)
#endif

#ifndef RP_EpmCaS_phiUpLimIn_C
#define RP_EpmCaS_phiUpLimIn_C (DATA_EpmCaS_Seg_dir._EpmCaS_phiUpLimIn_C)
#endif

#ifndef __EpmCaS_phiUpLimIn_C
#define __EpmCaS_phiUpLimIn_C (VECT_EpmCaS_Seg_dir->_EpmCaS_phiUpLimIn_C)
#endif

/* -- Macro for local Parameter EpmCaS_stActEdge_C -- */
#ifndef EpmCaS_stActEdge_C
#define EpmCaS_stActEdge_C (VECT_EpmCaS_Seg_dir->_EpmCaS_stActEdge_C)
#endif

#ifndef RP_EpmCaS_stActEdge_C
#define RP_EpmCaS_stActEdge_C (DATA_EpmCaS_Seg_dir._EpmCaS_stActEdge_C)
#endif

#ifndef __EpmCaS_stActEdge_C
#define __EpmCaS_stActEdge_C (VECT_EpmCaS_Seg_dir->_EpmCaS_stActEdge_C)
#endif

/* -- Macro for local Parameter EpmCaS_stMinSyncCaSAg_C -- */
#ifndef EpmCaS_stMinSyncCaSAg_C
#define EpmCaS_stMinSyncCaSAg_C (VECT_EpmCaS_Seg_dir->_EpmCaS_stMinSyncCaSAg_C)
#endif

#ifndef RP_EpmCaS_stMinSyncCaSAg_C
#define RP_EpmCaS_stMinSyncCaSAg_C (DATA_EpmCaS_Seg_dir._EpmCaS_stMinSyncCaSAg_C)
#endif

#ifndef __EpmCaS_stMinSyncCaSAg_C
#define __EpmCaS_stMinSyncCaSAg_C (VECT_EpmCaS_Seg_dir->_EpmCaS_stMinSyncCaSAg_C)
#endif

/* -- Macro for local Parameter EpmCaS_swtSeg_C -- */
#ifndef EpmCaS_swtSeg_C
#define EpmCaS_swtSeg_C (VECT_EpmCaS_Seg_dir->_EpmCaS_swtSeg_C)
#endif

#ifndef RP_EpmCaS_swtSeg_C
#define RP_EpmCaS_swtSeg_C (DATA_EpmCaS_Seg_dir._EpmCaS_swtSeg_C)
#endif

#ifndef __EpmCaS_swtSeg_C
#define __EpmCaS_swtSeg_C (VECT_EpmCaS_Seg_dir->_EpmCaS_swtSeg_C)
#endif

/* -- Macro for local Parameter EpmCaS_tiGlitchFilter_C -- */
#ifndef EpmCaS_tiGlitchFilter_C
#define EpmCaS_tiGlitchFilter_C (VECT_EpmCaS_Seg_dir->_EpmCaS_tiGlitchFilter_C)
#endif

#ifndef RP_EpmCaS_tiGlitchFilter_C
#define RP_EpmCaS_tiGlitchFilter_C (DATA_EpmCaS_Seg_dir._EpmCaS_tiGlitchFilter_C)
#endif

#ifndef __EpmCaS_tiGlitchFilter_C
#define __EpmCaS_tiGlitchFilter_C (VECT_EpmCaS_Seg_dir->_EpmCaS_tiGlitchFilter_C)
#endif

/* -- Macro for local Parameter EpmCaS_tiTimeout_C -- */
#ifndef EpmCaS_tiTimeout_C
#define EpmCaS_tiTimeout_C (VECT_EpmCaS_Seg_dir->_EpmCaS_tiTimeout_C)
#endif

#ifndef RP_EpmCaS_tiTimeout_C
#define RP_EpmCaS_tiTimeout_C (DATA_EpmCaS_Seg_dir._EpmCaS_tiTimeout_C)
#endif

#ifndef __EpmCaS_tiTimeout_C
#define __EpmCaS_tiTimeout_C (VECT_EpmCaS_Seg_dir->_EpmCaS_tiTimeout_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCAS_SEG_DAT_H */
