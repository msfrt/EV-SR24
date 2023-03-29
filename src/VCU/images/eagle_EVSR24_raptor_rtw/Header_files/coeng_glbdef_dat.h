#ifndef _COENG_GLBDEF_DAT_H
#define _COENG_GLBDEF_DAT_H

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


/* Local System Constant COENG_CRANKING */


/* COENG_CRANKING Typ=ub */
#ifndef COENG_CRANKING
  #define COENG_CRANKING 2L
#elif (COENG_CRANKING != 2L)
  #error >>>> 'COENG_CRANKING' multiple defined
#endif


/* Local System Constant COENG_FINISH */


/* COENG_FINISH Typ=ub */
#ifndef COENG_FINISH
  #define COENG_FINISH 5L
#elif (COENG_FINISH != 5L)
  #error >>>> 'COENG_FINISH' multiple defined
#endif


/* Local System Constant COENG_READY */


/* COENG_READY Typ=ub */
#ifndef COENG_READY
  #define COENG_READY 1L
#elif (COENG_READY != 1L)
  #error >>>> 'COENG_READY' multiple defined
#endif


/* Local System Constant COENG_RUNNING */


/* COENG_RUNNING Typ=ub */
#ifndef COENG_RUNNING
  #define COENG_RUNNING 3L
#elif (COENG_RUNNING != 3L)
  #error >>>> 'COENG_RUNNING' multiple defined
#endif


/* Local System Constant COENG_STANDBY */


/* COENG_STANDBY Typ=ub */
#ifndef COENG_STANDBY
  #define COENG_STANDBY 0L
#elif (COENG_STANDBY != 0L)
  #error >>>> 'COENG_STANDBY' multiple defined
#endif


/* Local System Constant COENG_STOPPING */


/* COENG_STOPPING Typ=ub */
#ifndef COENG_STOPPING
  #define COENG_STOPPING 4L
#elif (COENG_STOPPING != 4L)
  #error >>>> 'COENG_STOPPING' multiple defined
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
#endif /* _COENG_GLBDEF_DAT_H */
