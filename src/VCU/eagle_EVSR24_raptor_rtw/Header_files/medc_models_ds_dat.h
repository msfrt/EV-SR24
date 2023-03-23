#ifndef _MEDC_MODELS_DS_DAT_H
#define _MEDC_MODELS_DS_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model ASMod_PT1UpDwn_t defined by actual function MEDC_Models_DS */
#ifndef _ASMod_PT1UpDwn_t_DEF
#define _ASMod_PT1UpDwn_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 tiUp_C;
    real32 tiDwn_C;
} ASMod_PT1UpDwn_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 tiUp_C;
    real32 tiDwn_C;
} ASMod_PT1UpDwn_t;
#endif

#endif /* _ASMod_PT1UpDwn_t_DEF */

/* Parameter-Model ASMod_Thr_t defined by actual function MEDC_Models_DS */
#ifndef _ASMod_Thr_t_DEF
#define _ASMod_Thr_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 rPresCrit_C;
    real32 facFlwCrit_C;
    real32 rPresLin_C;
    real32 facSlpLin_C;
} ASMod_Thr_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 rPresCrit_C;
    real32 facFlwCrit_C;
    real32 rPresLin_C;
    real32 facSlpLin_C;
} ASMod_Thr_t;
#endif

#endif /* _ASMod_Thr_t_DEF */

/* Parameter-Model DevLib_HBrgPar_t defined by actual function MEDC_Models_DS */
#ifndef _DevLib_HBrgPar_t_DEF
#define _DevLib_HBrgPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 rTstDtyCyc_C;
    sint16 tiDisblDiaTmpDef_C;
    sint16 tiDisblDiaPermDef_C;
    sint16 tiOpnLdDiaEna_C;
    sint16 tiMaxOpnLdDiaEna_C;
} DevLib_HBrgPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 rTstDtyCyc_C;
    sint16 tiDisblDiaTmpDef_C;
    sint16 tiDisblDiaPermDef_C;
    sint16 tiOpnLdDiaEna_C;
    sint16 tiMaxOpnLdDiaEna_C;
} DevLib_HBrgPar_t;
#endif

#endif /* _DevLib_HBrgPar_t_DEF */



/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_

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


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */



/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */


#undef _DAT_H
#endif /* _MEDC_MODELS_DS_DAT_H */
