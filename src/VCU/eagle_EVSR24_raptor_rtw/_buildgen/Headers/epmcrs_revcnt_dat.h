#ifndef _EPMCRS_REVCNT_DAT_H
#define _EPMCRS_REVCNT_DAT_H

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


/* Referenced System Constant EPMCRS_REVSTRTCONT_SC */


/* EPMCRS_REVSTRTCONT_SC Typ=ub */
#ifndef EPMCRS_REVSTRTCONT_SC
  #define EPMCRS_REVSTRTCONT_SC 0L
#elif (EPMCRS_REVSTRTCONT_SC != 0L)
  #error >>>> 'EPMCRS_REVSTRTCONT_SC' multiple defined
#endif


/* Referenced System Constant REVCNT_RES_EXP */


/* REVCNT_RES_EXP Typ=sl */
#ifndef REVCNT_RES_EXP
  #define REVCNT_RES_EXP 4L
#elif (REVCNT_RES_EXP != 4L)
  #error >>>> 'REVCNT_RES_EXP' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCrS_ctRevCnt */
#ifdef _DAT_H
#ifndef __EPMCRS_CTREVCNT_EXT__
#define __EPMCRS_CTREVCNT_EXT__
extern uint16 EpmCrS_ctRevCnt;
#endif
#endif


/* Local Variable: EpmCrS_ctRevIniInt */
#ifdef _DAT_H
#ifndef __EPMCRS_CTREVINIINT_EXT__
#define __EPMCRS_CTREVINIINT_EXT__
extern uint16 EpmCrS_ctRevIniInt;
#endif
#endif


/* Local Variable: EpmCrS_stSyncIniFlag */
#ifdef _DAT_H
#ifndef __EPMCRS_STSYNCINIFLAG_EXT__
#define __EPMCRS_STSYNCINIFLAG_EXT__
extern uint8 EpmCrS_stSyncIniFlag;
#endif
#endif


/* Exported Variable: EpmCrS_ctRevIni */
/* EpmCrS_ctRevIni is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_ctRevStrt */
/* EpmCrS_ctRevStrt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: EpmCrS_ctRevStrtExtd */
/* EpmCrS_ctRevStrtExtd is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: CoEng_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* CoEng_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_numSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_numSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stSync */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stSync is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of CoEng_StEng -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema DSERAP +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

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
#endif /* _EPMCRS_REVCNT_DAT_H */
