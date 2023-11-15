#ifndef _EPMSRV_LIB_DAT_H
#define _EPMSRV_LIB_DAT_H

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


/* Referenced System Constant ANGLE_RES_FL */
/* N_RefFm: ANGLE_RES_FL */
#ifndef ANGLE_RES_FL
  #define ANGLE_RES_FL 45.5111111111f
#endif

/* Referenced System Constant CRS_MIAP_SY */


/* CRS_MIAP_SY Typ=sw */
#ifndef CRS_MIAP_SY
  #define CRS_MIAP_SY 0L
#elif (CRS_MIAP_SY != 0L)
  #error >>>> 'CRS_MIAP_SY' multiple defined
#endif


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Referenced System Constant EPM_NUMCRSREVWCY */


/* EPM_NUMCRSREVWCY Typ=sl */
#ifndef EPM_NUMCRSREVWCY
  #define EPM_NUMCRSREVWCY 2L
#elif (EPM_NUMCRSREVWCY != 2L)
  #error >>>> 'EPM_NUMCRSREVWCY' multiple defined
#endif


/* Referenced System Constant EPM_N_RES_FL */
/* N_RefFm: EPM_N_RES_FL */
#ifndef EPM_N_RES_FL
  #define EPM_N_RES_FL 0.500000000000f
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


/* Local System Constant EPMSRV_FACAG */


/* EPMSRV_FACAG Typ=sl */
#ifndef EPMSRV_FACAG
  #define EPMSRV_FACAG 240L
#elif (EPMSRV_FACAG != 240L)
  #error >>>> 'EPMSRV_FACAG' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmSrv_stCnvAgT2Ag_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMSRV_STCNVAGT2AG_MP_EXT__
#define __EPMSRV_STCNVAGT2AG_MP_EXT__
extern uint8 EpmSrv_stCnvAgT2Ag_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Imported Variable: EpmSyn_phiOffs */
#define IMPORTED
#ifndef _D_FILE_ 

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

/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

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

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMSRV_LIB_DAT_H */
