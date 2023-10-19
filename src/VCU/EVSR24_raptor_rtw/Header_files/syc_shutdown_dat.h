#ifndef _SYC_SHUTDOWN_DAT_H
#define _SYC_SHUTDOWN_DAT_H

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


/* Referenced System Constant CJ930_SY */


/* CJ930_SY Typ=sw */
#ifndef CJ930_SY
  #define CJ930_SY 0L
#elif (CJ930_SY != 0L)
  #error >>>> 'CJ930_SY' multiple defined
#endif


/* Referenced System Constant SYC_T15RSTSIM_SY */


/* SYC_T15RSTSIM_SY Typ=ub */
#ifndef SYC_T15RSTSIM_SY
  #define SYC_T15RSTSIM_SY 1L
#elif (SYC_T15RSTSIM_SY != 1L)
  #error >>>> 'SYC_T15RSTSIM_SY' multiple defined
#endif


/* Referenced System Constant SYC_WREEPBLK_SY */


/* SYC_WREEPBLK_SY Typ=ub */
#ifndef SYC_WREEPBLK_SY
  #define SYC_WREEPBLK_SY 1L
#elif (SYC_WREEPBLK_SY != 1L)
  #error >>>> 'SYC_WREEPBLK_SY' multiple defined
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
#endif /* _SYC_SHUTDOWN_DAT_H */
