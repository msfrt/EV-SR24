#ifndef _FADC_DAT_H
#define _FADC_DAT_H

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


/* Local System Constant FADC_ADDL1_REGVAL */


/* FADC_ADDL1_REGVAL Typ=sl */
#ifndef FADC_ADDL1_REGVAL
  #define FADC_ADDL1_REGVAL 0L
#elif (FADC_ADDL1_REGVAL != 0L)
  #error >>>> 'FADC_ADDL1_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL2_REGVAL */


/* FADC_ADDL2_REGVAL Typ=sl */
#ifndef FADC_ADDL2_REGVAL
  #define FADC_ADDL2_REGVAL 1L
#elif (FADC_ADDL2_REGVAL != 1L)
  #error >>>> 'FADC_ADDL2_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL3_REGVAL */


/* FADC_ADDL3_REGVAL Typ=sl */
#ifndef FADC_ADDL3_REGVAL
  #define FADC_ADDL3_REGVAL 2L
#elif (FADC_ADDL3_REGVAL != 2L)
  #error >>>> 'FADC_ADDL3_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL4_REGVAL */


/* FADC_ADDL4_REGVAL Typ=sl */
#ifndef FADC_ADDL4_REGVAL
  #define FADC_ADDL4_REGVAL 3L
#elif (FADC_ADDL4_REGVAL != 3L)
  #error >>>> 'FADC_ADDL4_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL5_REGVAL */


/* FADC_ADDL5_REGVAL Typ=sl */
#ifndef FADC_ADDL5_REGVAL
  #define FADC_ADDL5_REGVAL 4L
#elif (FADC_ADDL5_REGVAL != 4L)
  #error >>>> 'FADC_ADDL5_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL6_REGVAL */


/* FADC_ADDL6_REGVAL Typ=sl */
#ifndef FADC_ADDL6_REGVAL
  #define FADC_ADDL6_REGVAL 5L
#elif (FADC_ADDL6_REGVAL != 5L)
  #error >>>> 'FADC_ADDL6_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL7_REGVAL */


/* FADC_ADDL7_REGVAL Typ=sl */
#ifndef FADC_ADDL7_REGVAL
  #define FADC_ADDL7_REGVAL 6L
#elif (FADC_ADDL7_REGVAL != 6L)
  #error >>>> 'FADC_ADDL7_REGVAL' multiple defined
#endif


/* Local System Constant FADC_ADDL8_REGVAL */


/* FADC_ADDL8_REGVAL Typ=sl */
#ifndef FADC_ADDL8_REGVAL
  #define FADC_ADDL8_REGVAL 7L
#elif (FADC_ADDL8_REGVAL != 7L)
  #error >>>> 'FADC_ADDL8_REGVAL' multiple defined
#endif


/* Local System Constant FADC_GN1_REGVAL */


/* FADC_GN1_REGVAL Typ=sl */
#ifndef FADC_GN1_REGVAL
  #define FADC_GN1_REGVAL 0L
#elif (FADC_GN1_REGVAL != 0L)
  #error >>>> 'FADC_GN1_REGVAL' multiple defined
#endif


/* Local System Constant FADC_GN2_REGVAL */


/* FADC_GN2_REGVAL Typ=sl */
#ifndef FADC_GN2_REGVAL
  #define FADC_GN2_REGVAL 1L
#elif (FADC_GN2_REGVAL != 1L)
  #error >>>> 'FADC_GN2_REGVAL' multiple defined
#endif


/* Local System Constant FADC_GN4_REGVAL */


/* FADC_GN4_REGVAL Typ=sl */
#ifndef FADC_GN4_REGVAL
  #define FADC_GN4_REGVAL 2L
#elif (FADC_GN4_REGVAL != 2L)
  #error >>>> 'FADC_GN4_REGVAL' multiple defined
#endif


/* Local System Constant FADC_GN8_REGVAL */


/* FADC_GN8_REGVAL Typ=sl */
#ifndef FADC_GN8_REGVAL
  #define FADC_GN8_REGVAL 3L
#elif (FADC_GN8_REGVAL != 3L)
  #error >>>> 'FADC_GN8_REGVAL' multiple defined
#endif


/* Local System Constant FADC_MAVL1_REGVAL */


/* FADC_MAVL1_REGVAL Typ=sl */
#ifndef FADC_MAVL1_REGVAL
  #define FADC_MAVL1_REGVAL 0L
#elif (FADC_MAVL1_REGVAL != 0L)
  #error >>>> 'FADC_MAVL1_REGVAL' multiple defined
#endif


/* Local System Constant FADC_MAVL2_REGVAL */


/* FADC_MAVL2_REGVAL Typ=sl */
#ifndef FADC_MAVL2_REGVAL
  #define FADC_MAVL2_REGVAL 1L
#elif (FADC_MAVL2_REGVAL != 1L)
  #error >>>> 'FADC_MAVL2_REGVAL' multiple defined
#endif


/* Local System Constant FADC_MAVL3_REGVAL */


/* FADC_MAVL3_REGVAL Typ=sl */
#ifndef FADC_MAVL3_REGVAL
  #define FADC_MAVL3_REGVAL 2L
#elif (FADC_MAVL3_REGVAL != 2L)
  #error >>>> 'FADC_MAVL3_REGVAL' multiple defined
#endif


/* Local System Constant FADC_MAVL4_REGVAL */


/* FADC_MAVL4_REGVAL Typ=sl */
#ifndef FADC_MAVL4_REGVAL
  #define FADC_MAVL4_REGVAL 3L
#elif (FADC_MAVL4_REGVAL != 3L)
  #error >>>> 'FADC_MAVL4_REGVAL' multiple defined
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
#endif /* _FADC_DAT_H */
