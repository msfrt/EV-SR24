#ifndef _EPMHCRS_SIGEVAL_DAT_H
#define _EPMHCRS_SIGEVAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




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


/* Referenced System Constant CRS_ALTPIN_SY */


/* CRS_ALTPIN_SY Typ=sw */
#ifndef CRS_ALTPIN_SY
  #define CRS_ALTPIN_SY 0L
#elif (CRS_ALTPIN_SY != 0L)
  #error >>>> 'CRS_ALTPIN_SY' multiple defined
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


/* Referenced System Constant CRS_TAA_SY */


/* CRS_TAA_SY Typ=sw */
#ifndef CRS_TAA_SY
  #define CRS_TAA_SY 0L
#elif (CRS_TAA_SY != 0L)
  #error >>>> 'CRS_TAA_SY' multiple defined
#endif


/* Referenced System Constant CRS_TOOTHAVRG_SY */


/* CRS_TOOTHAVRG_SY Typ=sw */
#ifndef CRS_TOOTHAVRG_SY
  #define CRS_TOOTHAVRG_SY 1L
#elif (CRS_TOOTHAVRG_SY != 1L)
  #error >>>> 'CRS_TOOTHAVRG_SY' multiple defined
#endif


/* Referenced System Constant EPMHWE_RTM_SY */


/* EPMHWE_RTM_SY Typ=sw */
#ifndef EPMHWE_RTM_SY
  #define EPMHWE_RTM_SY 0L
#elif (EPMHWE_RTM_SY != 0L)
  #error >>>> 'EPMHWE_RTM_SY' multiple defined
#endif


/* Referenced System Constant EPMHWE_SWTCPU_SY */


/* EPMHWE_SWTCPU_SY Typ=sw */
#ifndef EPMHWE_SWTCPU_SY
  #define EPMHWE_SWTCPU_SY 0L
#elif (EPMHWE_SWTCPU_SY != 0L)
  #error >>>> 'EPMHWE_SWTCPU_SY' multiple defined
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


/* Referenced System Constant EPM_NUMCRSREVWCY_SY */


/* EPM_NUMCRSREVWCY_SY Typ=sl */
#ifndef EPM_NUMCRSREVWCY_SY
  #define EPM_NUMCRSREVWCY_SY 2L
#elif (EPM_NUMCRSREVWCY_SY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY_SY' multiple defined
#endif


/* Referenced System Constant EPM_PHIMAXMSK */


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif


/* Referenced System Constant TWCOR_HIRES_SC */


/* TWCOR_HIRES_SC Typ=sw */
#ifndef TWCOR_HIRES_SC
  #define TWCOR_HIRES_SC 0L
#elif (TWCOR_HIRES_SC != 0L)
  #error >>>> 'TWCOR_HIRES_SC' multiple defined
#endif


/* Local System Constant EPMHCRS_NUMGAP */


/* EPMHCRS_NUMGAP Typ=sl */
#ifndef EPMHCRS_NUMGAP
  #define EPMHCRS_NUMGAP 1L
#elif (EPMHCRS_NUMGAP != 1L)
  #error >>>> 'EPMHCRS_NUMGAP' multiple defined
#endif


/* Local System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Local System Constant EPMHCRS_NUMINCGAP */


/* EPMHCRS_NUMINCGAP Typ=sl */
#ifndef EPMHCRS_NUMINCGAP
  #define EPMHCRS_NUMINCGAP 3L
#elif (EPMHCRS_NUMINCGAP != 3L)
  #error >>>> 'EPMHCRS_NUMINCGAP' multiple defined
#endif


/* Local System Constant EPMHCRS_SIGBUF_MAX */


/* EPMHCRS_SIGBUF_MAX Typ=sl */
#ifndef EPMHCRS_SIGBUF_MAX
  #define EPMHCRS_SIGBUF_MAX 62L
#elif (EPMHCRS_SIGBUF_MAX != 62L)
  #error >>>> 'EPMHCRS_SIGBUF_MAX' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: EpmHCrS_swtDisblNewSync_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMHCRS_SWTDISBLNEWSYNC_MP_EXT__
#define __EPMHCRS_SWTDISBLNEWSYNC_MP_EXT__
extern uint8 EpmHCrS_swtDisblNewSync_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: EpmHCrS_swtKeepDGISync_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMHCRS_SWTKEEPDGISYNC_MP_EXT__
#define __EPMHCRS_SWTKEEPDGISYNC_MP_EXT__
extern uint8 EpmHCrS_swtKeepDGISync_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmHCrS_tiIncTransRaw */


/* Exported Variable: EpmHCrS_AgIncTrans */


/* Exported Variable: EpmHCrS_ctIncEngPos */


/* Exported Variable: EpmHCrS_ctIncEngPosStrt */


/* Exported Variable: EpmHCrS_ctResyncUpperLvl */
#ifdef _DAT_H
#ifndef __EPMHCRS_CTRESYNCUPPERLVL_EXT__
#define __EPMHCRS_CTRESYNCUPPERLVL_EXT__
extern uint8 EpmHCrS_ctResyncUpperLvl;
#endif
#endif


/* Exported Variable: EpmHCrS_stRotDir */


/* Exported Variable: EpmHCrS_stSigErr */


/* Exported Variable: EpmHCrS_stSigMode */


/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSyn_phiInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSyn_phiInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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
 
 					
/* -- Referenced PTA Structures of EpmHCrS_Interface -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EpmHCrS_swtDGIEna_C */


#ifndef _EpmHCrS_swtDGIEna_C_DEF
#define _EpmHCrS_swtDGIEna_C_DEF
#define EpmHCrS_swtDGIEna_CM EpmHCrS_swtDGIEna_C
#endif /* _EPMHCRS_SWTDGIENA_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter EpmHCrS_swtDGIEna_C in Addressschema dir is referenced from function EpmHCrS_Interface */ 

		
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

/* -- No referenced PTA Structures of EpmSyn_CrSPos -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter EpmHCrS_swtDGIEna_C -- */
#ifndef EpmHCrS_swtDGIEna_C
#define EpmHCrS_swtDGIEna_C\
    (VECT_EpmHCrS_Interface_dir->_EpmHCrS_swtDGIEna_C)
#endif

#ifndef RP_EpmHCrS_swtDGIEna_C
#define RP_EpmHCrS_swtDGIEna_C\
    (DATA_EpmHCrS_Interface_dir._EpmHCrS_swtDGIEna_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMHCRS_SIGEVAL_DAT_H */
