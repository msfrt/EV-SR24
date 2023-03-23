#ifndef _T15_DD_DAT_H
#define _T15_DD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class T15_DisableRst ++++++++++++++++++++++ */
#ifndef _T15_DISABLERST_IMPL_
#define _T15_DISABLERST_IMPL_

/* Class T15_DisableRst has no Attributes -> Wrapper is not generated */

#endif /* _T15_DISABLERST_IMPL_ */


/* ++++++++++++++++++++ Class T15_EnableRst ++++++++++++++++++++++ */
#ifndef _T15_ENABLERST_IMPL_
#define _T15_ENABLERST_IMPL_

/* Class T15_EnableRst has no Attributes -> Wrapper is not generated */

#endif /* _T15_ENABLERST_IMPL_ */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CJ930WAKEUP_SC */


/* CJ930WAKEUP_SC Typ=ub */
#ifndef CJ930WAKEUP_SC
  #define CJ930WAKEUP_SC 0L
#elif (CJ930WAKEUP_SC != 0L)
  #error >>>> 'CJ930WAKEUP_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: T15_stRaw */
/* T15_stRaw is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */



#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class T15_DisableRst ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class T15_EnableRst ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class T15_DisableRst, Instance T15_DisableRst */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance T15_DisableRst is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

#endif /* _D_FILE_ */
/* --------------- */
/* Local OML-Class T15_EnableRst, Instance T15_EnableRst */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance T15_EnableRst is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

#endif /* _D_FILE_ */
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


/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _T15_DD_DAT_H */
