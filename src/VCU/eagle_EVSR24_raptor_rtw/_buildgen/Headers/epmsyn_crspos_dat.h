#ifndef _EPMSYN_CRSPOS_DAT_H
#define _EPMSYN_CRSPOS_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmSyn_phiIncCor_CUR */
#ifndef _EpmSyn_phiIncCor_CUR_DEF
#define _EpmSyn_phiIncCor_CUR_DEF
#define EpmSyn_phiIncCor_CURM(input_x) (SrvX_IpoCurveS16((input_x), EpmSyn_phiIncCor_CUR))
#define KL_EpmSyn_phiIncCor_CUR SrvX_IpoCurveS16(Epm_nEng, EpmSyn_phiIncCor_CUR)
#endif /* _EpmSyn_phiIncCor_CUR_DEF */

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


/* Referenced System Constant EPMHCRS_NUMGAP */


/* EPMHCRS_NUMGAP Typ=sl */
#ifndef EPMHCRS_NUMGAP
  #define EPMHCRS_NUMGAP 1L
#elif (EPMHCRS_NUMGAP != 1L)
  #error >>>> 'EPMHCRS_NUMGAP' multiple defined
#endif


/* Referenced System Constant EPMSYN_PHIINCCOR_CURX_SC */


/* EPMSYN_PHIINCCOR_CURX_SC Typ=ub */
#ifndef EPMSYN_PHIINCCOR_CURX_SC
  #define EPMSYN_PHIINCCOR_CURX_SC 4L
#elif (EPMSYN_PHIINCCOR_CURX_SC != 4L)
  #error >>>> 'EPMSYN_PHIINCCOR_CURX_SC' multiple defined
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


/* Referenced System Constant TDC_ADAP_SY */


/* TDC_ADAP_SY Typ=sw */
#ifndef TDC_ADAP_SY
  #define TDC_ADAP_SY 0L
#elif (TDC_ADAP_SY != 0L)
  #error >>>> 'TDC_ADAP_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmSyn_GetAngleCnt_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMSYN_GETANGLECNT_MP_EXT__
#define __EPMSYN_GETANGLECNT_MP_EXT__
extern sint16 EpmSyn_GetAngleCnt_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmSyn_phiAgClk_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMSYN_PHIAGCLK_MP_EXT__
#define __EPMSYN_PHIAGCLK_MP_EXT__
extern sint16 EpmSyn_phiAgClk_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmSyn_phiIncCor_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMSYN_PHIINCCOR_MP_EXT__
#define __EPMSYN_PHIINCCOR_MP_EXT__
extern sint16 EpmSyn_phiIncCor_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Exported Variable: EpmSyn_ctIncEngPos_10ms */
/* EpmSyn_ctIncEngPos_10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSyn_numIntTyp */
/* EpmSyn_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSyn_phiDiff */
/* EpmSyn_phiDiff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSyn_phiInt */
/* EpmSyn_phiInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSyn_phiOffs */


/* Exported Variable: EpmSyn_phiOffsCor */


/* Exported Variable: EpmSyn_stCrSPos */
/* EpmSyn_stCrSPos is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmSyn_stCrSPosErr */


/* Imported Variable: EpmCrS_ctInc */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_ctInc is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmHCrS_ctIncEngPos */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
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
			
/* Parameter Epm_phiGap2Zero_C in Addressschema dir is referenced from function Epm_Ini */ 

		
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

/* -- Macro for referenced Parameter Epm_phiGap2Zero_C -- */
#ifndef Epm_phiGap2Zero_C
#define Epm_phiGap2Zero_C\
    (VECT_Epm_Ini_dir->_Epm_phiGap2Zero_C)
#endif

#ifndef RP_Epm_phiGap2Zero_C
#define RP_Epm_phiGap2Zero_C\
    (DATA_Epm_Ini_dir._Epm_phiGap2Zero_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMSYN_CRSPOS_DIR_T_DEF
#define DATA_EPMSYN_CRSPOS_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmSyn_phiIncCor_CUR ----- */
    sint16 _EpmSyn_phiIncCor_CUR[1+2*4];
} DATA_EpmSyn_CrSPos_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmSyn_CrSPos_dir_t DATA_EpmSyn_CrSPos_dir
    __attribute__ ((asection (".pta_datadir_EpmSyn_CrSPos","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmSyn_CrSPos_dir_t * const VECT_EpmSyn_CrSPos_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmSyn_CrSPos","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmSyn_phiIncCor_CUR -- */
#ifndef EpmSyn_phiIncCor_CUR
#define EpmSyn_phiIncCor_CUR (VECT_EpmSyn_CrSPos_dir->_EpmSyn_phiIncCor_CUR)
#endif

#ifndef RP_EpmSyn_phiIncCor_CUR
#define RP_EpmSyn_phiIncCor_CUR (DATA_EpmSyn_CrSPos_dir._EpmSyn_phiIncCor_CUR)
#endif

#ifndef __EpmSyn_phiIncCor_CUR
#define __EpmSyn_phiIncCor_CUR (VECT_EpmSyn_CrSPos_dir->_EpmSyn_phiIncCor_CUR)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMSYN_CRSPOS_DAT_H */
