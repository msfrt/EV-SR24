#ifndef _DIAGCOMAPPL_DAT_H
#define _DIAGCOMAPPL_DAT_H

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


/* Referenced System Constant DIAGCOM_BOOTPART_SY */


/* DIAGCOM_BOOTPART_SY Typ=ub */
#ifndef DIAGCOM_BOOTPART_SY
  #define DIAGCOM_BOOTPART_SY 0L
#elif (DIAGCOM_BOOTPART_SY != 0L)
  #error >>>> 'DIAGCOM_BOOTPART_SY' multiple defined
#endif


/* Referenced System Constant DIAGCOM_RDPI_SY */


/* DIAGCOM_RDPI_SY Typ=ub */
#ifndef DIAGCOM_RDPI_SY
  #define DIAGCOM_RDPI_SY 0L
#elif (DIAGCOM_RDPI_SY != 0L)
  #error >>>> 'DIAGCOM_RDPI_SY' multiple defined
#endif


/* Referenced System Constant DIAGCOM_RESPONEVT_SY */


/* DIAGCOM_RESPONEVT_SY Typ=ub */
#ifndef DIAGCOM_RESPONEVT_SY
  #define DIAGCOM_RESPONEVT_SY 1L
#elif (DIAGCOM_RESPONEVT_SY != 1L)
  #error >>>> 'DIAGCOM_RESPONEVT_SY' multiple defined
#endif


/* Referenced System Constant DIAGCOM_RINGBUF_SY */


/* DIAGCOM_RINGBUF_SY Typ=ub */
#ifndef DIAGCOM_RINGBUF_SY
  #define DIAGCOM_RINGBUF_SY 0L
#elif (DIAGCOM_RINGBUF_SY != 0L)
  #error >>>> 'DIAGCOM_RINGBUF_SY' multiple defined
#endif


/* Referenced System Constant SY_CANVAR */


/* SY_CANVAR Typ=sw */
#ifndef SY_CANVAR
  #define SY_CANVAR 5L
#elif (SY_CANVAR != 5L)
  #error >>>> 'SY_CANVAR' multiple defined
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
#endif /* _DIAGCOMAPPL_DAT_H */
