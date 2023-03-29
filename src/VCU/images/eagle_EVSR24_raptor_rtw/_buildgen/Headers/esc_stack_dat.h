#ifndef _ESC_STACK_DAT_H
#define _ESC_STACK_DAT_H

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


/* Referenced System Constant ESC_SELNNOTSTDTISYNCNTSK_SC */


/* ESC_SELNNOTSTDTISYNCNTSK_SC Typ=sw */
#ifndef ESC_SELNNOTSTDTISYNCNTSK_SC
  #define ESC_SELNNOTSTDTISYNCNTSK_SC 0L
#elif (ESC_SELNNOTSTDTISYNCNTSK_SC != 0L)
  #error >>>> 'ESC_SELNNOTSTDTISYNCNTSK_SC' multiple defined
#endif


/* Referenced System Constant ESC_SYNCTASK_SC */


/* ESC_SYNCTASK_SC Typ=sw */
#ifndef ESC_SYNCTASK_SC
  #define ESC_SYNCTASK_SC 0L
#elif (ESC_SYNCTASK_SC != 0L)
  #error >>>> 'ESC_SYNCTASK_SC' multiple defined
#endif


/* Local System Constant ESC_DT_NESTING_DEPTH */


/* ESC_DT_NESTING_DEPTH Typ=sl */
#ifndef ESC_DT_NESTING_DEPTH
  #define ESC_DT_NESTING_DEPTH 10L
#elif (ESC_DT_NESTING_DEPTH != 10L)
  #error >>>> 'ESC_DT_NESTING_DEPTH' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: ESC_stErr */


/* Exported Variable: ESC_tiSampling */


/* Exported Variable: ESC_tiSampling_s */
#ifdef _DAT_H
#ifndef __ESC_TISAMPLING_S_EXT__
#define __ESC_TISAMPLING_S_EXT__
extern sint32 ESC_tiSampling_s;
#endif
#endif


/* Imported Variable: EpmCrS_tiSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_tiSegCurr */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSegCurr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED


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

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _ESC_STACK_DAT_H */
