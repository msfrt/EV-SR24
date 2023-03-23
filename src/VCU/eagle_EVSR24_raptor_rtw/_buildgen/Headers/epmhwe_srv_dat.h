#ifndef _EPMHWE_SRV_DAT_H
#define _EPMHWE_SRV_DAT_H

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


/* Referenced System Constant ANGLE_RES_FL */
/* N_RefFm: ANGLE_RES_FL */
#ifndef ANGLE_RES_FL
  #define ANGLE_RES_FL 45.5111111111f
#endif

/* Referenced System Constant EPM_GPTAUSED_SC */


/* EPM_GPTAUSED_SC Typ=sw */
#ifndef EPM_GPTAUSED_SC
  #define EPM_GPTAUSED_SC 0L
#elif (EPM_GPTAUSED_SC != 0L)
  #error >>>> 'EPM_GPTAUSED_SC' multiple defined
#endif


/* Referenced System Constant EPM_N_RES_FL */
/* N_RefFm: EPM_N_RES_FL */
#ifndef EPM_N_RES_FL
  #define EPM_N_RES_FL 0.500000000000f
#endif

/* Referenced System Constant FAC_USEC_TO_RPM */


/* FAC_USEC_TO_RPM Typ=fl4 */
#ifndef FAC_USEC_TO_RPM
  #define FAC_USEC_TO_RPM 60000000L
#elif (FAC_USEC_TO_RPM != 60000000L)
  #error >>>> 'FAC_USEC_TO_RPM' multiple defined
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
#endif /* _EPMHWE_SRV_DAT_H */
