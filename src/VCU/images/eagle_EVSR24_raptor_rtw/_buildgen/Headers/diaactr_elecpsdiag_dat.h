#ifndef _DIAACTR_ELECPSDIAG_DAT_H
#define _DIAACTR_ELECPSDIAG_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model DiaActr_SigPrmClass_t defined by actual function DiaActr_ElecPsDiag */
#ifndef _DiaActr_SigPrmClass_t_DEF
#define _DiaActr_SigPrmClass_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 nrTstPls_C;
    sint16 tiBtwElecFlt_C;
    sint16 tiBtwOTFlt_C;
} DiaActr_SigPrmClass_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 nrTstPls_C;
    sint16 tiBtwElecFlt_C;
    sint16 tiBtwOTFlt_C;
} DiaActr_SigPrmClass_t;
#endif

#endif /* _DiaActr_SigPrmClass_t_DEF */



/* Defined Parameter DiaActr_ElecPsDiag_DbgSigId_C */
#ifndef _DiaActr_ElecPsDiag_DbgSigId_C_DEF
#define _DiaActr_ElecPsDiag_DbgSigId_C_DEF
#define DiaActr_ElecPsDiag_DbgSigId_CM DiaActr_ElecPsDiag_DbgSigId_C
#endif /* _DiaActr_ElecPsDiag_DbgSigId_C_DEF */

/* Defined Parameter DiaActr_ElecPsDiag_DbgSigTyp_C */
#ifndef _DiaActr_ElecPsDiag_DbgSigTyp_C_DEF
#define _DiaActr_ElecPsDiag_DbgSigTyp_C_DEF
#define DiaActr_ElecPsDiag_DbgSigTyp_CM DiaActr_ElecPsDiag_DbgSigTyp_C
#endif /* _DiaActr_ElecPsDiag_DbgSigTyp_C_DEF */

/* Defined Parameter DiaActr_ElecPsDiag_SigOutDurgOpenLd_C */
#ifndef _DiaActr_ElecPsDiag_SigOutDurgOpenLd_C_DEF
#define _DiaActr_ElecPsDiag_SigOutDurgOpenLd_C_DEF
#define DiaActr_ElecPsDiag_SigOutDurgOpenLd_CM DiaActr_ElecPsDiag_SigOutDurgOpenLd_C
#endif /* _DiaActr_ElecPsDiag_SigOutDurgOpenLd_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DEDIA_DBG_SC */


/* DEDIA_DBG_SC Typ=sw */
#ifndef DEDIA_DBG_SC
  #define DEDIA_DBG_SC 0L
#elif (DEDIA_DBG_SC != 0L)
  #error >>>> 'DEDIA_DBG_SC' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_NRMAX */


/* DIAACTR_ERRTYPE_NRMAX Typ=ub */
#ifndef DIAACTR_ERRTYPE_NRMAX
  #define DIAACTR_ERRTYPE_NRMAX 4L
#elif (DIAACTR_ERRTYPE_NRMAX != 4L)
  #error >>>> 'DIAACTR_ERRTYPE_NRMAX' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_OL */


/* DIAACTR_ERRTYPE_OL Typ=ub */
#ifndef DIAACTR_ERRTYPE_OL
  #define DIAACTR_ERRTYPE_OL 3L
#elif (DIAACTR_ERRTYPE_OL != 3L)
  #error >>>> 'DIAACTR_ERRTYPE_OL' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_OT */


/* DIAACTR_ERRTYPE_OT Typ=ub */
#ifndef DIAACTR_ERRTYPE_OT
  #define DIAACTR_ERRTYPE_OT 4L
#elif (DIAACTR_ERRTYPE_OT != 4L)
  #error >>>> 'DIAACTR_ERRTYPE_OT' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_SCB */


/* DIAACTR_ERRTYPE_SCB Typ=ub */
#ifndef DIAACTR_ERRTYPE_SCB
  #define DIAACTR_ERRTYPE_SCB 1L
#elif (DIAACTR_ERRTYPE_SCB != 1L)
  #error >>>> 'DIAACTR_ERRTYPE_SCB' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_SCG */


/* DIAACTR_ERRTYPE_SCG Typ=ub */
#ifndef DIAACTR_ERRTYPE_SCG
  #define DIAACTR_ERRTYPE_SCG 2L
#elif (DIAACTR_ERRTYPE_SCG != 2L)
  #error >>>> 'DIAACTR_ERRTYPE_SCG' multiple defined
#endif


/* Local System Constant DIAACTR_ERRTYPE_UNDEFINED */


/* DIAACTR_ERRTYPE_UNDEFINED Typ=ub */
#ifndef DIAACTR_ERRTYPE_UNDEFINED
  #define DIAACTR_ERRTYPE_UNDEFINED 0L
#elif (DIAACTR_ERRTYPE_UNDEFINED != 0L)
  #error >>>> 'DIAACTR_ERRTYPE_UNDEFINED' multiple defined
#endif


/* Local System Constant DIAACTR_SIGTYPE_DIGOUT */


/* DIAACTR_SIGTYPE_DIGOUT Typ=ub */
#ifndef DIAACTR_SIGTYPE_DIGOUT
  #define DIAACTR_SIGTYPE_DIGOUT 1L
#elif (DIAACTR_SIGTYPE_DIGOUT != 1L)
  #error >>>> 'DIAACTR_SIGTYPE_DIGOUT' multiple defined
#endif


/* Local System Constant DIAACTR_SIGTYPE_PMD */


/* DIAACTR_SIGTYPE_PMD Typ=ub */
#ifndef DIAACTR_SIGTYPE_PMD
  #define DIAACTR_SIGTYPE_PMD 3L
#elif (DIAACTR_SIGTYPE_PMD != 3L)
  #error >>>> 'DIAACTR_SIGTYPE_PMD' multiple defined
#endif


/* Local System Constant DIAACTR_SIGTYPE_PWMOUT */


/* DIAACTR_SIGTYPE_PWMOUT Typ=ub */
#ifndef DIAACTR_SIGTYPE_PWMOUT
  #define DIAACTR_SIGTYPE_PWMOUT 2L
#elif (DIAACTR_SIGTYPE_PWMOUT != 2L)
  #error >>>> 'DIAACTR_SIGTYPE_PWMOUT' multiple defined
#endif


/* Local System Constant DIAACTR_SIGTYPE_UNDEFINED */


/* DIAACTR_SIGTYPE_UNDEFINED Typ=ub */
#ifndef DIAACTR_SIGTYPE_UNDEFINED
  #define DIAACTR_SIGTYPE_UNDEFINED 0L
#elif (DIAACTR_SIGTYPE_UNDEFINED != 0L)
  #error >>>> 'DIAACTR_SIGTYPE_UNDEFINED' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: DiaActrElecPsDiag_stSigCfg_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DIAACTRELECPSDIAG_STSIGCFG_MP_EXT__
#define __DIAACTRELECPSDIAG_STSIGCFG_MP_EXT__
extern uint8 DiaActrElecPsDiag_stSigCfg_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: DiaActrElecPsDiag_stSigErrInfo_mp */
/* Mp_u32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DIAACTRELECPSDIAG_STSIGERRINFO_MP_EXT__
#define __DIAACTRELECPSDIAG_STSIGERRINFO_MP_EXT__
extern uint32 DiaActrElecPsDiag_stSigErrInfo_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: DiaActrElecPsDiag_stSig_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DIAACTRELECPSDIAG_STSIG_MP_EXT__
#define __DIAACTRELECPSDIAG_STSIG_MP_EXT__
extern uint8 DiaActrElecPsDiag_stSig_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Local Variable: DiaActrElecPsDiag_stTestPls_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DIAACTRELECPSDIAG_STTESTPLS_MP_EXT__
#define __DIAACTRELECPSDIAG_STTESTPLS_MP_EXT__
extern uint8 DiaActrElecPsDiag_stTestPls_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif



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

/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DIAACTR_ELECPSDIAG_DIR_T_DEF
#define DATA_DIAACTR_ELECPSDIAG_DIR_T_DEF
typedef struct
{
    /* ----- Parameter DiaActr_ElecPsDiag_DbgSigId_C ----- */
    uint32 _DiaActr_ElecPsDiag_DbgSigId_C;
    /* ----- Parameter DiaActr_ElecPsDiag_DbgSigTyp_C ----- */
    uint8 _DiaActr_ElecPsDiag_DbgSigTyp_C;
    /* ----- Parameter DiaActr_ElecPsDiag_SigOutDurgOpenLd_C ----- */
    uint8 _DiaActr_ElecPsDiag_SigOutDurgOpenLd_C;
} DATA_DiaActr_ElecPsDiag_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DiaActr_ElecPsDiag_dir_t DATA_DiaActr_ElecPsDiag_dir
    __attribute__ ((asection (".pta_datadir_DiaActr_ElecPsDiag","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DiaActr_ElecPsDiag_dir_t * const VECT_DiaActr_ElecPsDiag_dir
    __attribute__ ((asection (".sdata.pta_vectdir_DiaActr_ElecPsDiag","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter DiaActr_ElecPsDiag_DbgSigId_C -- */
#ifndef DiaActr_ElecPsDiag_DbgSigId_C
#define DiaActr_ElecPsDiag_DbgSigId_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_DbgSigId_C)
#endif

#ifndef RP_DiaActr_ElecPsDiag_DbgSigId_C
#define RP_DiaActr_ElecPsDiag_DbgSigId_C (DATA_DiaActr_ElecPsDiag_dir._DiaActr_ElecPsDiag_DbgSigId_C)
#endif

#ifndef __DiaActr_ElecPsDiag_DbgSigId_C
#define __DiaActr_ElecPsDiag_DbgSigId_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_DbgSigId_C)
#endif

/* -- Macro for local Parameter DiaActr_ElecPsDiag_DbgSigTyp_C -- */
#ifndef DiaActr_ElecPsDiag_DbgSigTyp_C
#define DiaActr_ElecPsDiag_DbgSigTyp_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_DbgSigTyp_C)
#endif

#ifndef RP_DiaActr_ElecPsDiag_DbgSigTyp_C
#define RP_DiaActr_ElecPsDiag_DbgSigTyp_C (DATA_DiaActr_ElecPsDiag_dir._DiaActr_ElecPsDiag_DbgSigTyp_C)
#endif

#ifndef __DiaActr_ElecPsDiag_DbgSigTyp_C
#define __DiaActr_ElecPsDiag_DbgSigTyp_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_DbgSigTyp_C)
#endif

/* -- Macro for local Parameter DiaActr_ElecPsDiag_SigOutDurgOpenLd_C -- */
#ifndef DiaActr_ElecPsDiag_SigOutDurgOpenLd_C
#define DiaActr_ElecPsDiag_SigOutDurgOpenLd_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_SigOutDurgOpenLd_C)
#endif

#ifndef RP_DiaActr_ElecPsDiag_SigOutDurgOpenLd_C
#define RP_DiaActr_ElecPsDiag_SigOutDurgOpenLd_C (DATA_DiaActr_ElecPsDiag_dir._DiaActr_ElecPsDiag_SigOutDurgOpenLd_C)
#endif

#ifndef __DiaActr_ElecPsDiag_SigOutDurgOpenLd_C
#define __DiaActr_ElecPsDiag_SigOutDurgOpenLd_C (VECT_DiaActr_ElecPsDiag_dir->_DiaActr_ElecPsDiag_SigOutDurgOpenLd_C)
#endif

/* +++++ Addressschema extRam +++++ */


#undef _DAT_H
#endif /* _DIAACTR_ELECPSDIAG_DAT_H */
