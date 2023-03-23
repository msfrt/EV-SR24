#ifndef _EPM_INI_DAT_H
#define _EPM_INI_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Epm_numCyl_C */
#ifndef _Epm_numCyl_C_DEF
#define _Epm_numCyl_C_DEF
#define Epm_numCyl_CM Epm_numCyl_C
#endif /* _Epm_numCyl_C_DEF */

/* Defined Parameter Epm_numFireSeg_C */
#ifndef _Epm_numFireSeg_C_DEF
#define _Epm_numFireSeg_C_DEF
#define Epm_numFireSeg_CM Epm_numFireSeg_C
#endif /* _Epm_numFireSeg_C_DEF */

/* Defined Parameter Epm_phiGap2Zero_C */
#ifndef _Epm_phiGap2Zero_C_DEF
#define _Epm_phiGap2Zero_C_DEF
#define Epm_phiGap2Zero_CM Epm_phiGap2Zero_C
#endif /* _Epm_phiGap2Zero_C_DEF */

/* Defined Parameter Epm_phiTdc1_C */
#ifndef _Epm_phiTdc1_C_DEF
#define _Epm_phiTdc1_C_DEF
#define Epm_phiTdc1_CM Epm_phiTdc1_C
#endif /* _Epm_phiTdc1_C_DEF */

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


/* Referenced System Constant CRS_TOOTHAVRG_SY */


/* CRS_TOOTHAVRG_SY Typ=sw */
#ifndef CRS_TOOTHAVRG_SY
  #define CRS_TOOTHAVRG_SY 1L
#elif (CRS_TOOTHAVRG_SY != 1L)
  #error >>>> 'CRS_TOOTHAVRG_SY' multiple defined
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


/* Referenced System Constant EPMHCRS_NUMINCGAP */


/* EPMHCRS_NUMINCGAP Typ=sl */
#ifndef EPMHCRS_NUMINCGAP
  #define EPMHCRS_NUMINCGAP 3L
#elif (EPMHCRS_NUMINCGAP != 3L)
  #error >>>> 'EPMHCRS_NUMINCGAP' multiple defined
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


/* Referenced System Constant EPMSRV_FACAG */


/* EPMSRV_FACAG Typ=sl */
#ifndef EPMSRV_FACAG
  #define EPMSRV_FACAG 240L
#elif (EPMSRV_FACAG != 240L)
  #error >>>> 'EPMSRV_FACAG' multiple defined
#endif


/* Referenced System Constant EPM_TDCDSTCLB_SC */


/* EPM_TDCDSTCLB_SC Typ=sw */
#ifndef EPM_TDCDSTCLB_SC
  #define EPM_TDCDSTCLB_SC 0L
#elif (EPM_TDCDSTCLB_SC != 0L)
  #error >>>> 'EPM_TDCDSTCLB_SC' multiple defined
#endif


/* Referenced System Constant NUMCYLACT_SY */


/* NUMCYLACT_SY Typ=sw */
#ifndef NUMCYLACT_SY
  #define NUMCYLACT_SY 8L
#elif (NUMCYLACT_SY != 8L)
  #error >>>> 'NUMCYLACT_SY' multiple defined
#endif


/* Referenced System Constant NUMCYLCAL_SY */


/* NUMCYLCAL_SY Typ=sw */
#ifndef NUMCYLCAL_SY
  #define NUMCYLCAL_SY 1L
#elif (NUMCYLCAL_SY != 1L)
  #error >>>> 'NUMCYLCAL_SY' multiple defined
#endif


/* Referenced System Constant NUMCYLMAX_SY */


/* NUMCYLMAX_SY Typ=sw */
#ifndef NUMCYLMAX_SY
  #define NUMCYLMAX_SY 8L
#elif (NUMCYLMAX_SY != 8L)
  #error >>>> 'NUMCYLMAX_SY' multiple defined
#endif


/* Referenced System Constant TDC_UNEQLGEOM_SY */


/* TDC_UNEQLGEOM_SY Typ=sw */
#ifndef TDC_UNEQLGEOM_SY
  #define TDC_UNEQLGEOM_SY 0L
#elif (TDC_UNEQLGEOM_SY != 0L)
  #error >>>> 'TDC_UNEQLGEOM_SY' multiple defined
#endif


/* Local System Constant EPM_NUMCRSREVWCY */


/* EPM_NUMCRSREVWCY Typ=sl */
#ifndef EPM_NUMCRSREVWCY
  #define EPM_NUMCRSREVWCY 2L
#elif (EPM_NUMCRSREVWCY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY' multiple defined
#endif


/* Local System Constant EPM_NUMCRSREVWCY_SY */


/* EPM_NUMCRSREVWCY_SY Typ=sl */
#ifndef EPM_NUMCRSREVWCY_SY
  #define EPM_NUMCRSREVWCY_SY 2L
#elif (EPM_NUMCRSREVWCY_SY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY_SY' multiple defined
#endif


/* Local System Constant EPM_PHICRSREV */


/* EPM_PHICRSREV Typ=sl */
#ifndef EPM_PHICRSREV
  #define EPM_PHICRSREV 360L
#elif (EPM_PHICRSREV != 360L)
  #error >>>> 'EPM_PHICRSREV' multiple defined
#endif


/* Local System Constant EPM_PHIMAXMSK */


/* EPM_PHIMAXMSK Typ=sw */
#ifndef EPM_PHIMAXMSK
  #define EPM_PHIMAXMSK 32767L
#elif (EPM_PHIMAXMSK != 32767L)
  #error >>>> 'EPM_PHIMAXMSK' multiple defined
#endif


/* Local System Constant EPM_PHIMAX_SY */


/* EPM_PHIMAX_SY Typ=sw */
#ifndef EPM_PHIMAX_SY
  #define EPM_PHIMAX_SY 32767L
#elif (EPM_PHIMAX_SY != 32767L)
  #error >>>> 'EPM_PHIMAX_SY' multiple defined
#endif


/* Local System Constant NUMCASMAX */


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
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Epm_numCyl */
/* Epm_numCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_phiCyl */
#ifdef _DAT_H
#ifndef __EPM_PHICYL_EXT__
#define __EPM_PHICYL_EXT__
extern sint16 Epm_phiCyl[8];
#endif
#endif


/* Exported Variable: Epm_phiDiffTDC */
/* Epm_phiDiffTDC is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */



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
/* -- No referenced PTA Structures of EpmSrv_Lib -- */
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

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

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Epm_numCyl_C -- */
#ifndef Epm_numCyl_C
#define Epm_numCyl_C (VECT_Epm_Ini_dir->_Epm_numCyl_C)
#endif

#ifndef RP_Epm_numCyl_C
#define RP_Epm_numCyl_C (DATA_Epm_Ini_dir._Epm_numCyl_C)
#endif

#ifndef __Epm_numCyl_C
#define __Epm_numCyl_C (VECT_Epm_Ini_dir->_Epm_numCyl_C)
#endif

/* -- Macro for local Parameter Epm_numFireSeg_C -- */
#ifndef Epm_numFireSeg_C
#define Epm_numFireSeg_C (VECT_Epm_Ini_dir->_Epm_numFireSeg_C)
#endif

#ifndef RP_Epm_numFireSeg_C
#define RP_Epm_numFireSeg_C (DATA_Epm_Ini_dir._Epm_numFireSeg_C)
#endif

#ifndef __Epm_numFireSeg_C
#define __Epm_numFireSeg_C (VECT_Epm_Ini_dir->_Epm_numFireSeg_C)
#endif

/* -- Macro for local Parameter Epm_phiGap2Zero_C -- */
#ifndef Epm_phiGap2Zero_C
#define Epm_phiGap2Zero_C (VECT_Epm_Ini_dir->_Epm_phiGap2Zero_C)
#endif

#ifndef RP_Epm_phiGap2Zero_C
#define RP_Epm_phiGap2Zero_C (DATA_Epm_Ini_dir._Epm_phiGap2Zero_C)
#endif

#ifndef __Epm_phiGap2Zero_C
#define __Epm_phiGap2Zero_C (VECT_Epm_Ini_dir->_Epm_phiGap2Zero_C)
#endif

/* -- Macro for local Parameter Epm_phiTdc1_C -- */
#ifndef Epm_phiTdc1_C
#define Epm_phiTdc1_C (VECT_Epm_Ini_dir->_Epm_phiTdc1_C)
#endif

#ifndef RP_Epm_phiTdc1_C
#define RP_Epm_phiTdc1_C (DATA_Epm_Ini_dir._Epm_phiTdc1_C)
#endif

#ifndef __Epm_phiTdc1_C
#define __Epm_phiTdc1_C (VECT_Epm_Ini_dir->_Epm_phiTdc1_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPM_INI_DAT_H */
