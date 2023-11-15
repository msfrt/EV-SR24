#ifndef _EPMCRS_SEG_DAT_H
#define _EPMCRS_SEG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCrS_stTTMeasure_C */
#ifndef _EpmCrS_stTTMeasure_C_DEF
#define _EpmCrS_stTTMeasure_C_DEF
#define EpmCrS_stTTMeasure_CM EpmCrS_stTTMeasure_C
#endif /* _EpmCrS_stTTMeasure_C_DEF */

/* Defined Parameter EpmCrS_swtMeasActvnS1_C */
#ifndef _EpmCrS_swtMeasActvnS1_C_DEF
#define _EpmCrS_swtMeasActvnS1_C_DEF
#define EpmCrS_swtMeasActvnS1_CM EpmCrS_swtMeasActvnS1_C
#endif /* _EpmCrS_swtMeasActvnS1_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CRSTYP_SY */


/* CRSTYP_SY Typ=sw */
#ifndef CRSTYP_SY
  #define CRSTYP_SY 0L
#elif (CRSTYP_SY != 0L)
  #error >>>> 'CRSTYP_SY' multiple defined
#endif


/* Referenced System Constant CRS_ANGLECOR_SY */


/* CRS_ANGLECOR_SY Typ=sw */
#ifndef CRS_ANGLECOR_SY
  #define CRS_ANGLECOR_SY 0L
#elif (CRS_ANGLECOR_SY != 0L)
  #error >>>> 'CRS_ANGLECOR_SY' multiple defined
#endif


/* Referenced System Constant CRS_BACKUP_SY */


/* CRS_BACKUP_SY Typ=sw */
#ifndef CRS_BACKUP_SY
  #define CRS_BACKUP_SY 0L
#elif (CRS_BACKUP_SY != 0L)
  #error >>>> 'CRS_BACKUP_SY' multiple defined
#endif


/* Referenced System Constant CRS_TAA_SY */


/* CRS_TAA_SY Typ=sw */
#ifndef CRS_TAA_SY
  #define CRS_TAA_SY 0L
#elif (CRS_TAA_SY != 0L)
  #error >>>> 'CRS_TAA_SY' multiple defined
#endif


/* Referenced System Constant EPMCRS_NUMINCOUT_SC */


/* EPMCRS_NUMINCOUT_SC Typ=ub */
#ifndef EPMCRS_NUMINCOUT_SC
  #define EPMCRS_NUMINCOUT_SC 60L
#elif (EPMCRS_NUMINCOUT_SC != 60L)
  #error >>>> 'EPMCRS_NUMINCOUT_SC' multiple defined
#endif


/* Referenced System Constant EPMCRS_TIINCOUTPVBL_SC */


/* EPMCRS_TIINCOUTPVBL_SC Typ=sw */
#ifndef EPMCRS_TIINCOUTPVBL_SC
  #define EPMCRS_TIINCOUTPVBL_SC 1L
#elif (EPMCRS_TIINCOUTPVBL_SC != 1L)
  #error >>>> 'EPMCRS_TIINCOUTPVBL_SC' multiple defined
#endif


/* Referenced System Constant EPMCRS_TIINCOUT_SC */


/* EPMCRS_TIINCOUT_SC Typ=ub */
#ifndef EPMCRS_TIINCOUT_SC
  #define EPMCRS_TIINCOUT_SC 1L
#elif (EPMCRS_TIINCOUT_SC != 1L)
  #error >>>> 'EPMCRS_TIINCOUT_SC' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
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


/* Referenced System Constant EPM_SPD_CALC_SY */


/* EPM_SPD_CALC_SY Typ=sw */
#ifndef EPM_SPD_CALC_SY
  #define EPM_SPD_CALC_SY 0L
#elif (EPM_SPD_CALC_SY != 0L)
  #error >>>> 'EPM_SPD_CALC_SY' multiple defined
#endif


/* Referenced System Constant EPM_TDCDSTCLB_SC */


/* EPM_TDCDSTCLB_SC Typ=sw */
#ifndef EPM_TDCDSTCLB_SC
  #define EPM_TDCDSTCLB_SC 0L
#elif (EPM_TDCDSTCLB_SC != 0L)
  #error >>>> 'EPM_TDCDSTCLB_SC' multiple defined
#endif


/* Referenced System Constant EPM_TIMING_SY */


/* EPM_TIMING_SY Typ=sw */
#ifndef EPM_TIMING_SY
  #define EPM_TIMING_SY 0L
#elif (EPM_TIMING_SY != 0L)
  #error >>>> 'EPM_TIMING_SY' multiple defined
#endif


/* Referenced System Constant HEM_SY */


/* HEM_SY Typ=sw */
#ifndef HEM_SY
  #define HEM_SY 0L
#elif (HEM_SY != 0L)
  #error >>>> 'HEM_SY' multiple defined
#endif


/* Referenced System Constant NUMCYLMAX_SY */


/* NUMCYLMAX_SY Typ=sw */
#ifndef NUMCYLMAX_SY
  #define NUMCYLMAX_SY 8L
#elif (NUMCYLMAX_SY != 8L)
  #error >>>> 'NUMCYLMAX_SY' multiple defined
#endif


/* Local System Constant EPMCRS_TI_NS_Q1_2_Q50 */


/* EPMCRS_TI_NS_Q1_2_Q50 Typ=ul */
#ifndef EPMCRS_TI_NS_Q1_2_Q50
  #define EPMCRS_TI_NS_Q1_2_Q50 50L
#elif (EPMCRS_TI_NS_Q1_2_Q50 != 50L)
  #error >>>> 'EPMCRS_TI_NS_Q1_2_Q50' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: EpmCrS_stGapInct_mp */
/* MpA_bool( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCRS_STGAPINCT_MP_EXT__
#define __EPMCRS_STGAPINCT_MP_EXT__
extern bool EpmCrS_stGapInct_mp[60]    __attribute__ ((asection (".bss.mpram","f=aw")));
#endif
#endif


/* Local Variable: EpmCrS_tiInctLoResl_mp */
/* MpA_u16( N_DclFm ) */
#ifdef _DAT_H
#ifndef __EPMCRS_TIINCTLORESL_MP_EXT__
#define __EPMCRS_TIINCTLORESL_MP_EXT__
extern uint16 EpmCrS_tiInctLoResl_mp[60]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCrS_tiInc_mp */
/* MpA_s32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCRS_TIINC_MP_EXT__
#define __EPMCRS_TIINC_MP_EXT__
extern sint32 EpmCrS_tiInc_mp[60]    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCrS_ctSegMax */
#ifdef _DAT_H
#ifndef __EPMCRS_CTSEGMAX_EXT__
#define __EPMCRS_CTSEGMAX_EXT__
extern sint32 EpmCrS_ctSegMax;
#endif
#endif


/* Local Variable: EpmCrS_numNewInc_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCRS_NUMNEWINC_MP_EXT__
#define __EPMCRS_NUMNEWINC_MP_EXT__
extern uint8 EpmCrS_numNewInc_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmCrS_numSeg2TDC */
#ifdef _DAT_H
#ifndef __EPMCRS_NUMSEG2TDC_EXT__
#define __EPMCRS_NUMSEG2TDC_EXT__
extern sint32 EpmCrS_numSeg2TDC;
#endif
#endif


/* Local Variable: EpmCrS_numSegPerTDC */
#ifdef _DAT_H
#ifndef __EPMCRS_NUMSEGPERTDC_EXT__
#define __EPMCRS_NUMSEGPERTDC_EXT__
extern sint16 EpmCrS_numSegPerTDC;
#endif
#endif


/* Exported Variable: EpmCrS_ctInc */
/* EpmCrS_ctInc is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_numIncPerSeg */
/* EpmCrS_numIncPerSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_numNewIncOutp */
/* EpmCrS_numNewIncOutp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_numSeg */
/* EpmCrS_numSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_phiAgClk */
/* EpmCrS_phiAgClk is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_phiInc */
/* EpmCrS_phiInc is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_phiIntSeg */
/* EpmCrS_phiIntSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_phiSeg */
/* EpmCrS_phiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_stSigMode */
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_tiInc */
/* EpmCrS_tiInc is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_tiSeg */
/* EpmCrS_tiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_tiSegCurr */
/* EpmCrS_tiSegCurr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_stToothCkCor */
/* Epm_stToothCkCor is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmHCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHInt_AgIncTrans */
#define IMPORTED
#ifndef _D_FILE_ 

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

/* Imported Variable: EpmSyn_phiInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_phiInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_ctCyl */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_ctCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmHInt_IntGen -- */
 					 					
/* -- Referenced PTA Structures of EpmSeq_StateMn -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EpmSeq_nMaxStrtInt_C */


#ifndef _EpmSeq_nMaxStrtInt_C_DEF
#define _EpmSeq_nMaxStrtInt_C_DEF
#define EpmSeq_nMaxStrtInt_CM EpmSeq_nMaxStrtInt_C
#endif /* _EPMSEQ_NMAXSTRTINT_C_DEF */

/* Referenced Parameter EpmSeq_phiDelayMax_CA */


#ifndef _EpmSeq_phiDelayMax_CA_DEF
#define _EpmSeq_phiDelayMax_CA_DEF
#define EpmSeq_phiDelayMax_CAM EpmSeq_phiDelayMax_CA
#endif /* _EPMSEQ_PHIDELAYMAX_CA_DEF */

/* Referenced Parameter EpmSeq_phiInt_CA */


#ifndef _EpmSeq_phiInt_CA_DEF
#define _EpmSeq_phiInt_CA_DEF
#define EpmSeq_phiInt_CAM EpmSeq_phiInt_CA
#endif /* _EPMSEQ_PHIINT_CA_DEF */

/* Referenced Parameter EpmSeq_phiStrtInt_CA */


#ifndef _EpmSeq_phiStrtInt_CA_DEF
#define _EpmSeq_phiStrtInt_CA_DEF
#define EpmSeq_phiStrtInt_CAM EpmSeq_phiStrtInt_CA
#endif /* _EPMSEQ_PHISTRTINT_CA_DEF */

/* Referenced Parameter EpmSeq_swtInt_C */


#ifndef _EpmSeq_swtInt_C_DEF
#define _EpmSeq_swtInt_C_DEF
#define EpmSeq_swtInt_CM EpmSeq_swtInt_C
#endif /* _EPMSEQ_SWTINT_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter EpmSeq_phiInt_CA in Addressschema dir is referenced from function EpmSeq_StateMn */ 

					
/* Parameter EpmSeq_swtInt_C in Addressschema dir is referenced from function EpmSeq_StateMn */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMSEQ_STATEMN_DIR_T_DEF
#define DATA_EPMSEQ_STATEMN_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmSeq_nMaxStrtInt_C ----- */
    sint16 _EpmSeq_nMaxStrtInt_C;
    /* ----- Parameter EpmSeq_phiDelayMax_CA ----- */
    sint16 _EpmSeq_phiDelayMax_CA[2];
    /* ----- Parameter EpmSeq_phiInt_CA ----- */
    sint16 _EpmSeq_phiInt_CA[2];
    /* ----- Parameter EpmSeq_phiStrtInt_CA ----- */
    sint16 _EpmSeq_phiStrtInt_CA[2];
    /* ----- Parameter EpmSeq_swtInt_C ----- */
    uint8 _EpmSeq_swtInt_C;
} DATA_EpmSeq_StateMn_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmSeq_StateMn_dir_t DATA_EpmSeq_StateMn_dir
    __attribute__ ((asection (".pta_datadir_EpmSeq_StateMn","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmSeq_StateMn_dir_t * const VECT_EpmSeq_StateMn_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmSeq_StateMn","f=as")));
#endif

/* -- No referenced PTA Structures of EpmSyn_CrSPos -- */
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

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter EpmSeq_phiInt_CA -- */
#ifndef EpmSeq_phiInt_CA
#define EpmSeq_phiInt_CA\
    (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiInt_CA)
#endif

#ifndef RP_EpmSeq_phiInt_CA
#define RP_EpmSeq_phiInt_CA\
    (DATA_EpmSeq_StateMn_dir._EpmSeq_phiInt_CA)
#endif

/* -- Macro for referenced Parameter EpmSeq_swtInt_C -- */
#ifndef EpmSeq_swtInt_C
#define EpmSeq_swtInt_C\
    (VECT_EpmSeq_StateMn_dir->_EpmSeq_swtInt_C)
#endif

#ifndef RP_EpmSeq_swtInt_C
#define RP_EpmSeq_swtInt_C\
    (DATA_EpmSeq_StateMn_dir._EpmSeq_swtInt_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCRS_SEG_DIR_T_DEF
#define DATA_EPMCRS_SEG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCrS_stTTMeasure_C ----- */
    uint8 _EpmCrS_stTTMeasure_C;
    /* ----- Parameter EpmCrS_swtMeasActvnS1_C ----- */
    uint8 _EpmCrS_swtMeasActvnS1_C;
} DATA_EpmCrS_Seg_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCrS_Seg_dir_t DATA_EpmCrS_Seg_dir
    __attribute__ ((asection (".pta_datadir_EpmCrS_Seg","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCrS_Seg_dir_t * const VECT_EpmCrS_Seg_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCrS_Seg","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCrS_stTTMeasure_C -- */
#ifndef EpmCrS_stTTMeasure_C
#define EpmCrS_stTTMeasure_C (VECT_EpmCrS_Seg_dir->_EpmCrS_stTTMeasure_C)
#endif

#ifndef RP_EpmCrS_stTTMeasure_C
#define RP_EpmCrS_stTTMeasure_C (DATA_EpmCrS_Seg_dir._EpmCrS_stTTMeasure_C)
#endif

#ifndef __EpmCrS_stTTMeasure_C
#define __EpmCrS_stTTMeasure_C (VECT_EpmCrS_Seg_dir->_EpmCrS_stTTMeasure_C)
#endif

/* -- Macro for local Parameter EpmCrS_swtMeasActvnS1_C -- */
#ifndef EpmCrS_swtMeasActvnS1_C
#define EpmCrS_swtMeasActvnS1_C (VECT_EpmCrS_Seg_dir->_EpmCrS_swtMeasActvnS1_C)
#endif

#ifndef RP_EpmCrS_swtMeasActvnS1_C
#define RP_EpmCrS_swtMeasActvnS1_C (DATA_EpmCrS_Seg_dir._EpmCrS_swtMeasActvnS1_C)
#endif

#ifndef __EpmCrS_swtMeasActvnS1_C
#define __EpmCrS_swtMeasActvnS1_C (VECT_EpmCrS_Seg_dir->_EpmCrS_swtMeasActvnS1_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCRS_SEG_DAT_H */
