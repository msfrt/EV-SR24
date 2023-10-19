#ifndef _EPMHCRS_INTERFACE_DAT_H
#define _EPMHCRS_INTERFACE_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmHCrS_swtDGIEna_C */
#ifndef _EpmHCrS_swtDGIEna_C_DEF
#define _EpmHCrS_swtDGIEna_C_DEF
#define EpmHCrS_swtDGIEna_CM EpmHCrS_swtDGIEna_C
#endif /* _EpmHCrS_swtDGIEna_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


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


/* Referenced System Constant CRS_ANGLECOR_SY */


/* CRS_ANGLECOR_SY Typ=sw */
#ifndef CRS_ANGLECOR_SY
  #define CRS_ANGLECOR_SY 0L
#elif (CRS_ANGLECOR_SY != 0L)
  #error >>>> 'CRS_ANGLECOR_SY' multiple defined
#endif


/* Referenced System Constant CRS_CY30CONF_SY */


/* CRS_CY30CONF_SY Typ=sw */
#ifndef CRS_CY30CONF_SY
  #define CRS_CY30CONF_SY 0L
#elif (CRS_CY30CONF_SY != 0L)
  #error >>>> 'CRS_CY30CONF_SY' multiple defined
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


/* Referenced System Constant EPM_PHIMAXMSK */


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: EpmHCrS_ctIncEngPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiOffs */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiOffsCor */
#define IMPORTED
#ifndef _D_FILE_ 

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
/* -- No referenced PTA Structures of EpmSyn_CrSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
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
#ifndef DATA_EPMHCRS_INTERFACE_DIR_T_DEF
#define DATA_EPMHCRS_INTERFACE_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmHCrS_swtDGIEna_C ----- */
    uint8 _EpmHCrS_swtDGIEna_C;
} DATA_EpmHCrS_Interface_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmHCrS_Interface_dir_t DATA_EpmHCrS_Interface_dir
    __attribute__ ((asection (".pta_datadir_EpmHCrS_Interface","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmHCrS_Interface_dir_t * const VECT_EpmHCrS_Interface_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmHCrS_Interface","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmHCrS_swtDGIEna_C -- */
#ifndef EpmHCrS_swtDGIEna_C
#define EpmHCrS_swtDGIEna_C (VECT_EpmHCrS_Interface_dir->_EpmHCrS_swtDGIEna_C)
#endif

#ifndef RP_EpmHCrS_swtDGIEna_C
#define RP_EpmHCrS_swtDGIEna_C (DATA_EpmHCrS_Interface_dir._EpmHCrS_swtDGIEna_C)
#endif

#ifndef __EpmHCrS_swtDGIEna_C
#define __EpmHCrS_swtDGIEna_C (VECT_EpmHCrS_Interface_dir->_EpmHCrS_swtDGIEna_C)
#endif


#undef _DAT_H
#endif /* _EPMHCRS_INTERFACE_DAT_H */
