#ifndef _MEDC_COMPU_CORE_DAT_H
#define _MEDC_COMPU_CORE_DAT_H

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


/* Referenced System Constant KI_1_NRM */


/* KI_1_NRM Typ=sl */
#ifndef KI_1_NRM
  #define KI_1_NRM 5L
#elif (KI_1_NRM != 5L)
  #error >>>> 'KI_1_NRM' multiple defined
#endif


/* Referenced System Constant KI_RES_REV */


/* KI_RES_REV Typ=fl4 */
#ifndef KI_RES_REV
  #define KI_RES_REV 2147L
#elif (KI_RES_REV != 2147L)
  #error >>>> 'KI_RES_REV' multiple defined
#endif


/* Referenced System Constant KP_1_NRM */


/* KP_1_NRM Typ=fl4 */
#ifndef KP_1_NRM
  #define KP_1_NRM 9L
#elif (KP_1_NRM != 9L)
  #error >>>> 'KP_1_NRM' multiple defined
#endif


/* Referenced System Constant KP_RES_REV */


/* KP_RES_REV Typ=sl */
#ifndef KP_RES_REV
  #define KP_RES_REV 32768L
#elif (KP_RES_REV != 32768L)
  #error >>>> 'KP_RES_REV' multiple defined
#endif


/* Referenced System Constant PERIOD_RES */


/* PERIOD_RES Typ=fl4 */
#ifndef PERIOD_RES
  #define PERIOD_RES 1000L
#elif (PERIOD_RES != 1000L)
  #error >>>> 'PERIOD_RES' multiple defined
#endif


/* Referenced System Constant RMP_RES */


/* RMP_RES Typ=fl4 */
#ifndef RMP_RES
  #define RMP_RES 1L
#elif (RMP_RES != 1L)
  #error >>>> 'RMP_RES' multiple defined
#endif


/* Referenced System Constant TIMEDELAY_S_2_NRM */


/* TIMEDELAY_S_2_NRM Typ=sl */
#ifndef TIMEDELAY_S_2_NRM
  #define TIMEDELAY_S_2_NRM 8L
#elif (TIMEDELAY_S_2_NRM != 8L)
  #error >>>> 'TIMEDELAY_S_2_NRM' multiple defined
#endif


/* Referenced System Constant TIME_DEB_RES */


/* TIME_DEB_RES Typ=sl */
#ifndef TIME_DEB_RES
  #define TIME_DEB_RES 1L
#elif (TIME_DEB_RES != 1L)
  #error >>>> 'TIME_DEB_RES' multiple defined
#endif


/* Referenced System Constant TIME_DT_RES */


/* TIME_DT_RES Typ=sl */
#ifndef TIME_DT_RES
  #define TIME_DT_RES 1L
#elif (TIME_DT_RES != 1L)
  #error >>>> 'TIME_DT_RES' multiple defined
#endif


/* Referenced System Constant TIME_GPTA_CLOCK_50ns */


/* TIME_GPTA_CLOCK_50ns Typ=fl4 */
#ifndef TIME_GPTA_CLOCK_50ns
  #define TIME_GPTA_CLOCK_50ns 0L
#elif (TIME_GPTA_CLOCK_50ns != 0L)
  #error >>>> 'TIME_GPTA_CLOCK_50ns' multiple defined
#endif


/* Referenced System Constant TIME_GT0_CLOCK_400ns */


/* TIME_GT0_CLOCK_400ns Typ=fl4 */
#ifndef TIME_GT0_CLOCK_400ns
  #define TIME_GT0_CLOCK_400ns 0L
#elif (TIME_GT0_CLOCK_400ns != 0L)
  #error >>>> 'TIME_GT0_CLOCK_400ns' multiple defined
#endif


/* Referenced System Constant TIME_RED_RES */


/* TIME_RED_RES Typ=fl4 */
#ifndef TIME_RED_RES
  #define TIME_RED_RES 1L
#elif (TIME_RED_RES != 1L)
  #error >>>> 'TIME_RED_RES' multiple defined
#endif


/* Referenced System Constant TIME_TICK */


/* TIME_TICK Typ=fl4 */
#ifndef TIME_TICK
  #define TIME_TICK 1L
#elif (TIME_TICK != 1L)
  #error >>>> 'TIME_TICK' multiple defined
#endif


/* Local System Constant GPTA_CLC0_NS_RES */


/* GPTA_CLC0_NS_RES Typ=sl */
#ifndef GPTA_CLC0_NS_RES
  #define GPTA_CLC0_NS_RES 50L
#elif (GPTA_CLC0_NS_RES != 50L)
  #error >>>> 'GPTA_CLC0_NS_RES' multiple defined
#endif


/* Local System Constant GPTA_CLC6_NS_RES */


/* GPTA_CLC6_NS_RES Typ=sl */
#ifndef GPTA_CLC6_NS_RES
  #define GPTA_CLC6_NS_RES 400L
#elif (GPTA_CLC6_NS_RES != 400L)
  #error >>>> 'GPTA_CLC6_NS_RES' multiple defined
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

/* -- No referenced PTA Structures of MEDC_FixConst_Core -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS -- */

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
#endif /* _MEDC_COMPU_CORE_DAT_H */
