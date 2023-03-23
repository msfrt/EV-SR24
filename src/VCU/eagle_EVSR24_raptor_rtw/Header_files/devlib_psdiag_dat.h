#ifndef _DEVLIB_PSDIAG_DAT_H
#define _DEVLIB_PSDIAG_DAT_H

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


/* Referenced System Constant DEVLIB_PSOFFOPNLD_SY */


/* DEVLIB_PSOFFOPNLD_SY Typ=ub */
#ifndef DEVLIB_PSOFFOPNLD_SY
  #define DEVLIB_PSOFFOPNLD_SY 0L
#elif (DEVLIB_PSOFFOPNLD_SY != 0L)
  #error >>>> 'DEVLIB_PSOFFOPNLD_SY' multiple defined
#endif


/* Local System Constant DEVLIB_DGK_ACTV */


/* DEVLIB_DGK_ACTV Typ=ub */
#ifndef DEVLIB_DGK_ACTV
  #define DEVLIB_DGK_ACTV 1L
#elif (DEVLIB_DGK_ACTV != 1L)
  #error >>>> 'DEVLIB_DGK_ACTV' multiple defined
#endif


/* Local System Constant DEVLIB_DGK_NOTACTV */


/* DEVLIB_DGK_NOTACTV Typ=ub */
#ifndef DEVLIB_DGK_NOTACTV
  #define DEVLIB_DGK_NOTACTV 0L
#elif (DEVLIB_DGK_NOTACTV != 0L)
  #error >>>> 'DEVLIB_DGK_NOTACTV' multiple defined
#endif

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

/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */


#undef _DAT_H
#endif /* _DEVLIB_PSDIAG_DAT_H */
