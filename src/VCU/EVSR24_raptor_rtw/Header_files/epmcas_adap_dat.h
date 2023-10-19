#ifndef _EPMCAS_ADAP_DAT_H
#define _EPMCAS_ADAP_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCaS_facAdapFil_C */
#ifndef _EpmCaS_facAdapFil_C_DEF
#define _EpmCaS_facAdapFil_C_DEF
#define EpmCaS_facAdapFil_CM EpmCaS_facAdapFil_C
#endif /* _EpmCaS_facAdapFil_C_DEF */

/* Defined Parameter EpmCaS_phiDiffAdapMax_C */
#ifndef _EpmCaS_phiDiffAdapMax_C_DEF
#define _EpmCaS_phiDiffAdapMax_C_DEF
#define EpmCaS_phiDiffAdapMax_CM EpmCaS_phiDiffAdapMax_C
#endif /* _EpmCaS_phiDiffAdapMax_C_DEF */

/* Defined Parameter EpmCaS_phiDiffLim_C */
#ifndef _EpmCaS_phiDiffLim_C_DEF
#define _EpmCaS_phiDiffLim_C_DEF
#define EpmCaS_phiDiffLim_CM EpmCaS_phiDiffLim_C
#endif /* _EpmCaS_phiDiffLim_C_DEF */

/* Defined Parameter EpmCaS_phiDiffRefAdapMax_C */
#ifndef _EpmCaS_phiDiffRefAdapMax_C_DEF
#define _EpmCaS_phiDiffRefAdapMax_C_DEF
#define EpmCaS_phiDiffRefAdapMax_CM EpmCaS_phiDiffRefAdapMax_C
#endif /* _EpmCaS_phiDiffRefAdapMax_C_DEF */

/* Defined Parameter EpmCaS_phiMntMax_C */
#ifndef _EpmCaS_phiMntMax_C_DEF
#define _EpmCaS_phiMntMax_C_DEF
#define EpmCaS_phiMntMax_CM EpmCaS_phiMntMax_C
#endif /* _EpmCaS_phiMntMax_C_DEF */

/* Defined Parameter EpmCaS_swtAdapStgy_C */
#ifndef _EpmCaS_swtAdapStgy_C_DEF
#define _EpmCaS_swtAdapStgy_C_DEF
#define EpmCaS_swtAdapStgy_CM EpmCaS_swtAdapStgy_C
#endif /* _EpmCaS_swtAdapStgy_C_DEF */

/* Defined Parameter EpmCaS_swtForceRefAdap_C */
#ifndef _EpmCaS_swtForceRefAdap_C_DEF
#define _EpmCaS_swtForceRefAdap_C_DEF
#define EpmCaS_swtForceRefAdap_CM EpmCaS_swtForceRefAdap_C
#endif /* _EpmCaS_swtForceRefAdap_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CAMSFT_ADPNCLB_SC */


/* CAMSFT_ADPNCLB_SC Typ=sw */
#ifndef CAMSFT_ADPNCLB_SC
  #define CAMSFT_ADPNCLB_SC 0L
#elif (CAMSFT_ADPNCLB_SC != 0L)
  #error >>>> 'CAMSFT_ADPNCLB_SC' multiple defined
#endif


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


/* Referenced System Constant CAS_FAC_ADAP_SY */


/* CAS_FAC_ADAP_SY Typ=fl4 */
#ifndef CAS_FAC_ADAP_SY
  #define CAS_FAC_ADAP_SY 1000L
#elif (CAS_FAC_ADAP_SY != 1000L)
  #error >>>> 'CAS_FAC_ADAP_SY' multiple defined
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


/* Referenced System Constant EPMCAS_NUMSEG_SC */


/* EPMCAS_NUMSEG_SC Typ=ub */
#ifndef EPMCAS_NUMSEG_SC
  #define EPMCAS_NUMSEG_SC 10L
#elif (EPMCAS_NUMSEG_SC != 10L)
  #error >>>> 'EPMCAS_NUMSEG_SC' multiple defined
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


/* Referenced System Constant NUMCASMAX */


/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif


/* Referenced System Constant POSTDRV_SOFTRST_SY */


/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: EpmCaS_phiAdapLimFil_mp */
/* MpA_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIADAPLIMFIL_MP_EXT__
#define __EPMCAS_PHIADAPLIMFIL_MP_EXT__
extern sint16 EpmCaS_phiAdapLimFil_mp[1]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_phiAdapRefPosI1_mp */
/* MpA_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIADAPREFPOSI1_MP_EXT__
#define __EPMCAS_PHIADAPREFPOSI1_MP_EXT__
extern sint16 EpmCaS_phiAdapRefPosI1_mp[10]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCaS_bRefAdapExternReq */
#ifdef _DAT_H
#ifndef __EPMCAS_BREFADAPEXTERNREQ_EXT__
#define __EPMCAS_BREFADAPEXTERNREQ_EXT__
extern uint8 EpmCaS_bRefAdapExternReq;
#endif
#endif


/* Local Variable: EpmCaS_bResetAfterErr */
#ifdef _DAT_H
#ifndef __EPMCAS_BRESETAFTERERR_EXT__
#define __EPMCAS_BRESETAFTERERR_EXT__
extern uint8 EpmCaS_bResetAfterErr[1];
#endif
#endif


/* Local Variable: EpmCaS_ctTriesAdap */
#ifdef _DAT_H
#ifndef __EPMCAS_CTTRIESADAP_EXT__
#define __EPMCAS_CTTRIESADAP_EXT__
extern uint16 EpmCaS_ctTriesAdap[1];
#endif
#endif


/* Local Variable: EpmCaS_phiDiffAvrg */
#ifdef _DAT_H
#ifndef __EPMCAS_PHIDIFFAVRG_EXT__
#define __EPMCAS_PHIDIFFAVRG_EXT__
extern sint16 EpmCaS_phiDiffAvrg[1];
#endif
#endif


/* Local Variable: EpmCaS_phiDiffCal2Adap */


/* Local Variable: EpmCaS_stEEPReadSuccesful */
#ifdef _DAT_H
#ifndef __EPMCAS_STEEPREADSUCCESFUL_EXT__
#define __EPMCAS_STEEPREADSUCCESFUL_EXT__
extern uint8 EpmCaS_stEEPReadSuccesful;
#endif
#endif


/* Local Variable: EpmCaS_stRefAdap */


/* Local Variable: EpmCaS_swtForceRefAdapOld */
#ifdef _DAT_H
#ifndef __EPMCAS_SWTFORCEREFADAPOLD_EXT__
#define __EPMCAS_SWTFORCEREFADAPOLD_EXT__
extern uint8 EpmCaS_swtForceRefAdapOld;
#endif
#endif


/* Exported Variable: EpmCaS_phiAdap */
/* EpmCaS_phiAdap is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_phiDiffAvrgLim */
/* EpmCaS_phiDiffAvrgLim is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCaS_stAdap */


/* Exported Variable: EpmCaS_stAdapErr */
#ifdef _DAT_H
#ifndef __EPMCAS_STADAPERR_EXT__
#define __EPMCAS_STADAPERR_EXT__
extern uint8 EpmCaS_stAdapErr[1];
#endif
#endif


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


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCAS_ADAP_DIR_T_DEF
#define DATA_EPMCAS_ADAP_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCaS_facAdapFil_C ----- */
    sint32 _EpmCaS_facAdapFil_C;
    /* ----- Parameter EpmCaS_phiDiffAdapMax_C ----- */
    sint16 _EpmCaS_phiDiffAdapMax_C;
    /* ----- Parameter EpmCaS_phiDiffLim_C ----- */
    sint16 _EpmCaS_phiDiffLim_C;
    /* ----- Parameter EpmCaS_phiDiffRefAdapMax_C ----- */
    sint16 _EpmCaS_phiDiffRefAdapMax_C;
    /* ----- Parameter EpmCaS_phiMntMax_C ----- */
    sint16 _EpmCaS_phiMntMax_C;
    /* ----- Parameter EpmCaS_swtAdapStgy_C ----- */
    uint8 _EpmCaS_swtAdapStgy_C;
    /* ----- Parameter EpmCaS_swtForceRefAdap_C ----- */
    uint8 _EpmCaS_swtForceRefAdap_C;
} DATA_EpmCaS_Adap_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCaS_Adap_dir_t DATA_EpmCaS_Adap_dir
    __attribute__ ((asection (".pta_datadir_EpmCaS_Adap","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCaS_Adap_dir_t * const VECT_EpmCaS_Adap_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCaS_Adap","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCaS_facAdapFil_C -- */
#ifndef EpmCaS_facAdapFil_C
#define EpmCaS_facAdapFil_C (VECT_EpmCaS_Adap_dir->_EpmCaS_facAdapFil_C)
#endif

#ifndef RP_EpmCaS_facAdapFil_C
#define RP_EpmCaS_facAdapFil_C (DATA_EpmCaS_Adap_dir._EpmCaS_facAdapFil_C)
#endif

#ifndef __EpmCaS_facAdapFil_C
#define __EpmCaS_facAdapFil_C (VECT_EpmCaS_Adap_dir->_EpmCaS_facAdapFil_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiDiffAdapMax_C -- */
#ifndef EpmCaS_phiDiffAdapMax_C
#define EpmCaS_phiDiffAdapMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffAdapMax_C)
#endif

#ifndef RP_EpmCaS_phiDiffAdapMax_C
#define RP_EpmCaS_phiDiffAdapMax_C (DATA_EpmCaS_Adap_dir._EpmCaS_phiDiffAdapMax_C)
#endif

#ifndef __EpmCaS_phiDiffAdapMax_C
#define __EpmCaS_phiDiffAdapMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffAdapMax_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiDiffLim_C -- */
#ifndef EpmCaS_phiDiffLim_C
#define EpmCaS_phiDiffLim_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffLim_C)
#endif

#ifndef RP_EpmCaS_phiDiffLim_C
#define RP_EpmCaS_phiDiffLim_C (DATA_EpmCaS_Adap_dir._EpmCaS_phiDiffLim_C)
#endif

#ifndef __EpmCaS_phiDiffLim_C
#define __EpmCaS_phiDiffLim_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffLim_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiDiffRefAdapMax_C -- */
#ifndef EpmCaS_phiDiffRefAdapMax_C
#define EpmCaS_phiDiffRefAdapMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffRefAdapMax_C)
#endif

#ifndef RP_EpmCaS_phiDiffRefAdapMax_C
#define RP_EpmCaS_phiDiffRefAdapMax_C (DATA_EpmCaS_Adap_dir._EpmCaS_phiDiffRefAdapMax_C)
#endif

#ifndef __EpmCaS_phiDiffRefAdapMax_C
#define __EpmCaS_phiDiffRefAdapMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiDiffRefAdapMax_C)
#endif

/* -- Macro for local Parameter EpmCaS_phiMntMax_C -- */
#ifndef EpmCaS_phiMntMax_C
#define EpmCaS_phiMntMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiMntMax_C)
#endif

#ifndef RP_EpmCaS_phiMntMax_C
#define RP_EpmCaS_phiMntMax_C (DATA_EpmCaS_Adap_dir._EpmCaS_phiMntMax_C)
#endif

#ifndef __EpmCaS_phiMntMax_C
#define __EpmCaS_phiMntMax_C (VECT_EpmCaS_Adap_dir->_EpmCaS_phiMntMax_C)
#endif

/* -- Macro for local Parameter EpmCaS_swtAdapStgy_C -- */
#ifndef EpmCaS_swtAdapStgy_C
#define EpmCaS_swtAdapStgy_C (VECT_EpmCaS_Adap_dir->_EpmCaS_swtAdapStgy_C)
#endif

#ifndef RP_EpmCaS_swtAdapStgy_C
#define RP_EpmCaS_swtAdapStgy_C (DATA_EpmCaS_Adap_dir._EpmCaS_swtAdapStgy_C)
#endif

#ifndef __EpmCaS_swtAdapStgy_C
#define __EpmCaS_swtAdapStgy_C (VECT_EpmCaS_Adap_dir->_EpmCaS_swtAdapStgy_C)
#endif

/* -- Macro for local Parameter EpmCaS_swtForceRefAdap_C -- */
#ifndef EpmCaS_swtForceRefAdap_C
#define EpmCaS_swtForceRefAdap_C (VECT_EpmCaS_Adap_dir->_EpmCaS_swtForceRefAdap_C)
#endif

#ifndef RP_EpmCaS_swtForceRefAdap_C
#define RP_EpmCaS_swtForceRefAdap_C (DATA_EpmCaS_Adap_dir._EpmCaS_swtForceRefAdap_C)
#endif

#ifndef __EpmCaS_swtForceRefAdap_C
#define __EpmCaS_swtForceRefAdap_C (VECT_EpmCaS_Adap_dir->_EpmCaS_swtForceRefAdap_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCAS_ADAP_DAT_H */
