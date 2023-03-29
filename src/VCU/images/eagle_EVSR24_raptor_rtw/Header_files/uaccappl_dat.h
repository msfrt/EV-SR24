#ifndef _UACCAPPL_DAT_H
#define _UACCAPPL_DAT_H

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


/* Referenced System Constant SY_CANVAR */


/* SY_CANVAR Typ=sw */
#ifndef SY_CANVAR
  #define SY_CANVAR 5L
#elif (SY_CANVAR != 5L)
  #error >>>> 'SY_CANVAR' multiple defined
#endif


/* Referenced System Constant SY_ZYLZG */


/* SY_ZYLZG Typ=ub */
#ifndef SY_ZYLZG
  #define SY_ZYLZG 8L
#elif (SY_ZYLZG != 8L)
  #error >>>> 'SY_ZYLZG' multiple defined
#endif


/* Referenced System Constant VEHVRNT_SC */


/* VEHVRNT_SC Typ=ub */
#ifndef VEHVRNT_SC
  #define VEHVRNT_SC 50L
#elif (VEHVRNT_SC != 50L)
  #error >>>> 'VEHVRNT_SC' multiple defined
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
#endif /* _UACCAPPL_DAT_H */
