#ifndef _DEVLIB_PWMOUTERRHNDLR_DAT_H
#define _DEVLIB_PWMOUTERRHNDLR_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DevLib_PWMOutDbgSig_C */
#ifndef _DevLib_PWMOutDbgSig_C_DEF
#define _DevLib_PWMOutDbgSig_C_DEF
#define DevLib_PWMOutDbgSig_CM DevLib_PWMOutDbgSig_C
#endif /* _DevLib_PWMOutDbgSig_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DEVLIB_DBG_SY */


/* DEVLIB_DBG_SY Typ=ub */
#ifndef DEVLIB_DBG_SY
  #define DEVLIB_DBG_SY 0L
#elif (DEVLIB_DBG_SY != 0L)
  #error >>>> 'DEVLIB_DBG_SY' multiple defined
#endif


/* Referenced System Constant FACT_RES_REV */


/* FACT_RES_REV Typ=sl */
#ifndef FACT_RES_REV
  #define FACT_RES_REV 8192L
#elif (FACT_RES_REV != 8192L)
  #error >>>> 'FACT_RES_REV' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: DevLib_stPWMOutErr_mp */
/* Mp_u32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DEVLIB_STPWMOUTERR_MP_EXT__
#define __DEVLIB_STPWMOUTERR_MP_EXT__
extern uint32 DevLib_stPWMOutErr_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
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
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DEVLIB_PWMOUTERRHNDLR_DIR_T_DEF
#define DATA_DEVLIB_PWMOUTERRHNDLR_DIR_T_DEF
typedef struct
{
    /* ----- Parameter DevLib_PWMOutDbgSig_C ----- */
    uint16 _DevLib_PWMOutDbgSig_C;
} DATA_DevLib_PWMOutErrHndlr_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DevLib_PWMOutErrHndlr_dir_t DATA_DevLib_PWMOutErrHndlr_dir
    __attribute__ ((asection (".pta_datadir_DevLib_PWMOutErrHndlr","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DevLib_PWMOutErrHndlr_dir_t * const VECT_DevLib_PWMOutErrHndlr_dir
    __attribute__ ((asection (".sdata.pta_vectdir_DevLib_PWMOutErrHndlr","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter DevLib_PWMOutDbgSig_C -- */
#ifndef DevLib_PWMOutDbgSig_C
#define DevLib_PWMOutDbgSig_C (VECT_DevLib_PWMOutErrHndlr_dir->_DevLib_PWMOutDbgSig_C)
#endif

#ifndef RP_DevLib_PWMOutDbgSig_C
#define RP_DevLib_PWMOutDbgSig_C (DATA_DevLib_PWMOutErrHndlr_dir._DevLib_PWMOutDbgSig_C)
#endif

#ifndef __DevLib_PWMOutDbgSig_C
#define __DevLib_PWMOutDbgSig_C (VECT_DevLib_PWMOutErrHndlr_dir->_DevLib_PWMOutDbgSig_C)
#endif

/* +++++ Addressschema extRam +++++ */


#undef _DAT_H
#endif /* _DEVLIB_PWMOUTERRHNDLR_DAT_H */
