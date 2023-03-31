#ifndef _DEVLIB_TRANSSTAGE_DAT_H
#define _DEVLIB_TRANSSTAGE_DAT_H

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


/* Local System Constant DEVLIB_FRZVAL_MODE */


/* DEVLIB_FRZVAL_MODE Typ=ub */
#ifndef DEVLIB_FRZVAL_MODE
  #define DEVLIB_FRZVAL_MODE 1L
#elif (DEVLIB_FRZVAL_MODE != 1L)
  #error >>>> 'DEVLIB_FRZVAL_MODE' multiple defined
#endif


/* Local System Constant DEVLIB_JMPVAL_MODE */


/* DEVLIB_JMPVAL_MODE Typ=ub */
#ifndef DEVLIB_JMPVAL_MODE
  #define DEVLIB_JMPVAL_MODE 2L
#elif (DEVLIB_JMPVAL_MODE != 2L)
  #error >>>> 'DEVLIB_JMPVAL_MODE' multiple defined
#endif


/* Local System Constant DEVLIB_RMPVAL_MODE */


/* DEVLIB_RMPVAL_MODE Typ=ub */
#ifndef DEVLIB_RMPVAL_MODE
  #define DEVLIB_RMPVAL_MODE 4L
#elif (DEVLIB_RMPVAL_MODE != 4L)
  #error >>>> 'DEVLIB_RMPVAL_MODE' multiple defined
#endif


/* Local System Constant DEVLIB_SENSVAL_MODE */


/* DEVLIB_SENSVAL_MODE Typ=ub */
#ifndef DEVLIB_SENSVAL_MODE
  #define DEVLIB_SENSVAL_MODE 0L
#elif (DEVLIB_SENSVAL_MODE != 0L)
  #error >>>> 'DEVLIB_SENSVAL_MODE' multiple defined
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
#endif /* _DEVLIB_TRANSSTAGE_DAT_H */
