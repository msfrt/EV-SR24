#ifndef _EXECON_DAT_H
#define _EXECON_DAT_H

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


/* Local System Constant SYC_DRIVE */


/* SYC_DRIVE Typ=ub */
#ifndef SYC_DRIVE
  #define SYC_DRIVE 4L
#elif (SYC_DRIVE != 4L)
  #error >>>> 'SYC_DRIVE' multiple defined
#endif


/* Local System Constant SYC_INI */


/* SYC_INI Typ=ub */
#ifndef SYC_INI
  #define SYC_INI 0L
#elif (SYC_INI != 0L)
  #error >>>> 'SYC_INI' multiple defined
#endif


/* Local System Constant SYC_INIEND */


/* SYC_INIEND Typ=ub */
#ifndef SYC_INIEND
  #define SYC_INIEND 2L
#elif (SYC_INIEND != 2L)
  #error >>>> 'SYC_INIEND' multiple defined
#endif


/* Local System Constant SYC_INISYN */


/* SYC_INISYN Typ=ub */
#ifndef SYC_INISYN
  #define SYC_INISYN 1L
#elif (SYC_INISYN != 1L)
  #error >>>> 'SYC_INISYN' multiple defined
#endif


/* Local System Constant SYC_POSTDRIVE */


/* SYC_POSTDRIVE Typ=ub */
#ifndef SYC_POSTDRIVE
  #define SYC_POSTDRIVE 5L
#elif (SYC_POSTDRIVE != 5L)
  #error >>>> 'SYC_POSTDRIVE' multiple defined
#endif


/* Local System Constant SYC_POST_OS_EXIT */


/* SYC_POST_OS_EXIT Typ=ub */
#ifndef SYC_POST_OS_EXIT
  #define SYC_POST_OS_EXIT 6L
#elif (SYC_POST_OS_EXIT != 6L)
  #error >>>> 'SYC_POST_OS_EXIT' multiple defined
#endif


/* Local System Constant SYC_PREDRIVE */


/* SYC_PREDRIVE Typ=ub */
#ifndef SYC_PREDRIVE
  #define SYC_PREDRIVE 3L
#elif (SYC_PREDRIVE != 3L)
  #error >>>> 'SYC_PREDRIVE' multiple defined
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
#endif /* _EXECON_DAT_H */
