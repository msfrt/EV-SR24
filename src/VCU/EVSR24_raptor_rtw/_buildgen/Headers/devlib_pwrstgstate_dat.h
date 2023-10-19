#ifndef _DEVLIB_PWRSTGSTATE_DAT_H
#define _DEVLIB_PWRSTGSTATE_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model DevLib_BattHysPar_t defined by actual function DevLib_PwrStgState */
#ifndef _DevLib_BattHysPar_t_DEF
#define _DevLib_BattHysPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysPar_t;
#endif

#endif /* _DevLib_BattHysPar_t_DEF */

/* Parameter-Model DevLib_HysBattCorFac_t defined by actual function DevLib_PwrStgState */
#ifndef _DevLib_HysBattCorFac_t_DEF
#define _DevLib_HysBattCorFac_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 facLowHysLo_C;
    sint16 facLowHysHi_C;
    sint16 facHighHysLo_C;
    sint16 facHighHysHi_C;
} DevLib_HysBattCorFac_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 facLowHysLo_C;
    sint16 facLowHysHi_C;
    sint16 facHighHysLo_C;
    sint16 facHighHysHi_C;
} DevLib_HysBattCorFac_t;
#endif

#endif /* _DevLib_HysBattCorFac_t_DEF */

/* Parameter-Model DevLib_BattHysPar_t instantiated in actual function DevLib_PwrStgState */
#ifndef _DevLib_BattHysPar_t_DEF
#define _DevLib_BattHysPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysPar_t;
#endif

#endif /* _DevLib_BattHysPar_t_DEF */
/* Parameter-Model DevLib_HysBattCorFac_t instantiated in actual function DevLib_PwrStgState */
#ifndef _DevLib_HysBattCorFac_t_DEF
#define _DevLib_HysBattCorFac_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 facLowHysLo_C;
    sint16 facLowHysHi_C;
    sint16 facHighHysLo_C;
    sint16 facHighHysHi_C;
} DevLib_HysBattCorFac_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 facLowHysLo_C;
    sint16 facLowHysHi_C;
    sint16 facHighHysLo_C;
    sint16 facHighHysHi_C;
} DevLib_HysBattCorFac_t;
#endif

#endif /* _DevLib_HysBattCorFac_t_DEF */


/* Defined Parameter Devlib_PsDisbl */
#ifndef _Devlib_PsDisbl_DEF
#define _Devlib_PsDisbl_DEF
#endif /* _Devlib_PsDisbl_DEF */

/* Defined Parameter Devlib_PwrStg */
#ifndef _Devlib_PwrStg_DEF
#define _Devlib_PwrStg_DEF
#endif /* _Devlib_PwrStg_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DEVLIB_PWRSTGSTATEMOCSOPCHK_SY */


/* DEVLIB_PWRSTGSTATEMOCSOPCHK_SY Typ=ub */
#ifndef DEVLIB_PWRSTGSTATEMOCSOPCHK_SY
  #define DEVLIB_PWRSTGSTATEMOCSOPCHK_SY 0L
#elif (DEVLIB_PWRSTGSTATEMOCSOPCHK_SY != 0L)
  #error >>>> 'DEVLIB_PWRSTGSTATEMOCSOPCHK_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: DevLib_stPwrStgEnaCond */
/* DevLib_stPwrStgEnaCond is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema IramI16 +++++ */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 


/* Imported Variable: BattU_facCor */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __BATTU_FACCOR_EXT__
#define __BATTU_FACCOR_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 BattU_facCor;
#else /* local or exported variable - write access */
extern sint16 BattU_facCor;
#endif /* IMPORTED */
#endif /* __BATTU_FACCOR_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: BattU_u */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __BATTU_U_EXT__
#define __BATTU_U_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 BattU_u;
#else /* local or exported variable - write access */
extern sint16 BattU_u;
#endif /* IMPORTED */
#endif /* __BATTU_U_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 


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
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DEVLIB_PWRSTGSTATE_DIR_T_DEF
#define DATA_DEVLIB_PWRSTGSTATE_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Devlib_PsDisbl ----- */
    DevLib_HysBattCorFac_t _Devlib_PsDisbl;
    /* ----- Parameter Devlib_PwrStg ----- */
    DevLib_BattHysPar_t _Devlib_PwrStg;
} DATA_DevLib_PwrStgState_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DevLib_PwrStgState_dir_t DATA_DevLib_PwrStgState_dir
    __attribute__ ((asection (".pta_datadir_DevLib_PwrStgState","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DevLib_PwrStgState_dir_t * const VECT_DevLib_PwrStgState_dir
    __attribute__ ((asection (".sdata.pta_vectdir_DevLib_PwrStgState","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Devlib_PsDisbl -- */
#ifndef Devlib_PsDisbl
#define Devlib_PsDisbl (VECT_DevLib_PwrStgState_dir->_Devlib_PsDisbl)
#endif

#ifndef RP_Devlib_PsDisbl
#define RP_Devlib_PsDisbl (DATA_DevLib_PwrStgState_dir._Devlib_PsDisbl)
#endif

#ifndef __Devlib_PsDisbl
#define __Devlib_PsDisbl (VECT_DevLib_PwrStgState_dir->_Devlib_PsDisbl)
#endif

/* -- Macro for local Parameter Devlib_PwrStg -- */
#ifndef Devlib_PwrStg
#define Devlib_PwrStg (VECT_DevLib_PwrStgState_dir->_Devlib_PwrStg)
#endif

#ifndef RP_Devlib_PwrStg
#define RP_Devlib_PwrStg (DATA_DevLib_PwrStgState_dir._Devlib_PwrStg)
#endif

#ifndef __Devlib_PwrStg
#define __Devlib_PwrStg (VECT_DevLib_PwrStgState_dir->_Devlib_PwrStg)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DEVLIB_PWRSTGSTATE_DAT_H */
