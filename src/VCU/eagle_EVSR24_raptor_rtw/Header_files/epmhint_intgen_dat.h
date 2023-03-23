#ifndef _EPMHINT_INTGEN_DAT_H
#define _EPMHINT_INTGEN_DAT_H

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


/* Referenced System Constant EPMHCRS_NUMINC */


/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif


/* Referenced System Constant EPMHWE_RTM_SY */


/* EPMHWE_RTM_SY Typ=sw */
#ifndef EPMHWE_RTM_SY
  #define EPMHWE_RTM_SY 0L
#elif (EPMHWE_RTM_SY != 0L)
  #error >>>> 'EPMHWE_RTM_SY' multiple defined
#endif


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
#endif


/* Referenced System Constant EPM_NRAGEVE_SC */


/* EPM_NRAGEVE_SC Typ=ub */
#ifndef EPM_NRAGEVE_SC
  #define EPM_NRAGEVE_SC 0L
#elif (EPM_NRAGEVE_SC != 0L)
  #error >>>> 'EPM_NRAGEVE_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmHInt_tiInt4DelMeas */
#ifdef _DAT_H
#ifndef __EPMHINT_TIINT4DELMEAS_EXT__
#define __EPMHINT_TIINT4DELMEAS_EXT__
extern uint32 EpmHInt_tiInt4DelMeas;
#endif
#endif


/* Exported Variable: EpmHInt_AgIncTrans */



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

/* -- No referenced PTA Structures of EpmHCrS_SigEval -- */
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
#endif /* _EPMHINT_INTGEN_DAT_H */
