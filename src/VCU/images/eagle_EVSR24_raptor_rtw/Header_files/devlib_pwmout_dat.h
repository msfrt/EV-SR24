#ifndef _DEVLIB_PWMOUT_DAT_H
#define _DEVLIB_PWMOUT_DAT_H

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


/* Referenced System Constant DTY_CYC_MAX */


/* DTY_CYC_MAX Typ=fl4 */
#ifndef DTY_CYC_MAX
  #define DTY_CYC_MAX 10000L
#elif (DTY_CYC_MAX != 10000L)
  #error >>>> 'DTY_CYC_MAX' multiple defined
#endif


/* Referenced System Constant DTY_CYC_MIN */


/* DTY_CYC_MIN Typ=fl4 */
#ifndef DTY_CYC_MIN
  #define DTY_CYC_MIN 0L
#elif (DTY_CYC_MIN != 0L)
  #error >>>> 'DTY_CYC_MIN' multiple defined
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

/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

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
#endif /* _DEVLIB_PWMOUT_DAT_H */
