#ifndef _GPTA_DAT_H
#define _GPTA_DAT_H

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


/* Referenced System Constant GPTA_ASCSEL_SC */


/* GPTA_ASCSEL_SC Typ=ub */
#ifndef GPTA_ASCSEL_SC
  #define GPTA_ASCSEL_SC 0L
#elif (GPTA_ASCSEL_SC != 0L)
  #error >>>> 'GPTA_ASCSEL_SC' multiple defined
#endif


/* Referenced System Constant GPTA_BSSSEL_SC */


/* GPTA_BSSSEL_SC Typ=ub */
#ifndef GPTA_BSSSEL_SC
  #define GPTA_BSSSEL_SC 0L
#elif (GPTA_BSSSEL_SC != 0L)
  #error >>>> 'GPTA_BSSSEL_SC' multiple defined
#endif


/* Referenced System Constant GPTA_TOGSEL_SC */


/* GPTA_TOGSEL_SC Typ=sw */
#ifndef GPTA_TOGSEL_SC
  #define GPTA_TOGSEL_SC 0L
#elif (GPTA_TOGSEL_SC != 0L)
  #error >>>> 'GPTA_TOGSEL_SC' multiple defined
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



/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */


#undef _DAT_H
#endif /* _GPTA_DAT_H */
