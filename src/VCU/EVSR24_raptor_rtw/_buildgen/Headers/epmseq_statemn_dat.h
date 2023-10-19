#ifndef _EPMSEQ_STATEMN_DAT_H
#define _EPMSEQ_STATEMN_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmSeq_nMaxStrtInt_C */
#ifndef _EpmSeq_nMaxStrtInt_C_DEF
#define _EpmSeq_nMaxStrtInt_C_DEF
#define EpmSeq_nMaxStrtInt_CM EpmSeq_nMaxStrtInt_C
#endif /* _EpmSeq_nMaxStrtInt_C_DEF */

/* Defined Parameter EpmSeq_phiDelayMax_CA */
#ifndef _EpmSeq_phiDelayMax_CA_DEF
#define _EpmSeq_phiDelayMax_CA_DEF
#define EpmSeq_phiDelayMax_CAM EpmSeq_phiDelayMax_CA
#endif /* _EpmSeq_phiDelayMax_CA_DEF */

/* Defined Parameter EpmSeq_phiInt_CA */
#ifndef _EpmSeq_phiInt_CA_DEF
#define _EpmSeq_phiInt_CA_DEF
#define EpmSeq_phiInt_CAM EpmSeq_phiInt_CA
#endif /* _EpmSeq_phiInt_CA_DEF */

/* Defined Parameter EpmSeq_phiStrtInt_CA */
#ifndef _EpmSeq_phiStrtInt_CA_DEF
#define _EpmSeq_phiStrtInt_CA_DEF
#define EpmSeq_phiStrtInt_CAM EpmSeq_phiStrtInt_CA
#endif /* _EpmSeq_phiStrtInt_CA_DEF */

/* Defined Parameter EpmSeq_swtInt_C */
#ifndef _EpmSeq_swtInt_C_DEF
#define _EpmSeq_swtInt_C_DEF
#define EpmSeq_swtInt_CM EpmSeq_swtInt_C
#endif /* _EpmSeq_swtInt_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


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


/* Referenced System Constant CRS_BACKUP_SY */


/* CRS_BACKUP_SY Typ=sw */
#ifndef CRS_BACKUP_SY
  #define CRS_BACKUP_SY 0L
#elif (CRS_BACKUP_SY != 0L)
  #error >>>> 'CRS_BACKUP_SY' multiple defined
#endif


/* Referenced System Constant EPM_NRAGEVE_SC */


/* EPM_NRAGEVE_SC Typ=ub */
#ifndef EPM_NRAGEVE_SC
  #define EPM_NRAGEVE_SC 0L
#elif (EPM_NRAGEVE_SC != 0L)
  #error >>>> 'EPM_NRAGEVE_SC' multiple defined
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


/* Referenced System Constant NUMCYLACT_SY */


/* NUMCYLACT_SY Typ=sw */
#ifndef NUMCYLACT_SY
  #define NUMCYLACT_SY 8L
#elif (NUMCYLACT_SY != 8L)
  #error >>>> 'NUMCYLACT_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: EpmSeq_numIncDiffInt */
/* EpmSeq_numIncDiffInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSeq_numInt */
/* EpmSeq_numInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSeq_numIntTyp */
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSeq_phiNxtInt */


/* Exported Variable: EpmSeq_stInt */


/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* Imported Variable: Epm_phiCyl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPM_PHICYL_EXT__
#define __EPM_PHICYL_EXT__
extern sint16 Epm_phiCyl[8];
#endif
#endif

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

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
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


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

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

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmSeq_nMaxStrtInt_C -- */
#ifndef EpmSeq_nMaxStrtInt_C
#define EpmSeq_nMaxStrtInt_C (VECT_EpmSeq_StateMn_dir->_EpmSeq_nMaxStrtInt_C)
#endif

#ifndef RP_EpmSeq_nMaxStrtInt_C
#define RP_EpmSeq_nMaxStrtInt_C (DATA_EpmSeq_StateMn_dir._EpmSeq_nMaxStrtInt_C)
#endif

#ifndef __EpmSeq_nMaxStrtInt_C
#define __EpmSeq_nMaxStrtInt_C (VECT_EpmSeq_StateMn_dir->_EpmSeq_nMaxStrtInt_C)
#endif

/* -- Macro for local Parameter EpmSeq_phiDelayMax_CA -- */
#ifndef EpmSeq_phiDelayMax_CA
#define EpmSeq_phiDelayMax_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiDelayMax_CA)
#endif

#ifndef RP_EpmSeq_phiDelayMax_CA
#define RP_EpmSeq_phiDelayMax_CA (DATA_EpmSeq_StateMn_dir._EpmSeq_phiDelayMax_CA)
#endif

#ifndef __EpmSeq_phiDelayMax_CA
#define __EpmSeq_phiDelayMax_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiDelayMax_CA)
#endif

/* -- Macro for local Parameter EpmSeq_phiInt_CA -- */
#ifndef EpmSeq_phiInt_CA
#define EpmSeq_phiInt_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiInt_CA)
#endif

#ifndef RP_EpmSeq_phiInt_CA
#define RP_EpmSeq_phiInt_CA (DATA_EpmSeq_StateMn_dir._EpmSeq_phiInt_CA)
#endif

#ifndef __EpmSeq_phiInt_CA
#define __EpmSeq_phiInt_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiInt_CA)
#endif

/* -- Macro for local Parameter EpmSeq_phiStrtInt_CA -- */
#ifndef EpmSeq_phiStrtInt_CA
#define EpmSeq_phiStrtInt_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiStrtInt_CA)
#endif

#ifndef RP_EpmSeq_phiStrtInt_CA
#define RP_EpmSeq_phiStrtInt_CA (DATA_EpmSeq_StateMn_dir._EpmSeq_phiStrtInt_CA)
#endif

#ifndef __EpmSeq_phiStrtInt_CA
#define __EpmSeq_phiStrtInt_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiStrtInt_CA)
#endif

/* -- Macro for local Parameter EpmSeq_swtInt_C -- */
#ifndef EpmSeq_swtInt_C
#define EpmSeq_swtInt_C (VECT_EpmSeq_StateMn_dir->_EpmSeq_swtInt_C)
#endif

#ifndef RP_EpmSeq_swtInt_C
#define RP_EpmSeq_swtInt_C (DATA_EpmSeq_StateMn_dir._EpmSeq_swtInt_C)
#endif

#ifndef __EpmSeq_swtInt_C
#define __EpmSeq_swtInt_C (VECT_EpmSeq_StateMn_dir->_EpmSeq_swtInt_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMSEQ_STATEMN_DAT_H */
