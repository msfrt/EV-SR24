#ifndef _MILLMP_DD_DAT_H
#define _MILLMP_DD_DAT_H

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


/* Referenced System Constant ERRLMP_ATSINTVMOD_SY */


/* ERRLMP_ATSINTVMOD_SY Typ=ub */
#ifndef ERRLMP_ATSINTVMOD_SY
  #define ERRLMP_ATSINTVMOD_SY 0L
#elif (ERRLMP_ATSINTVMOD_SY != 0L)
  #error >>>> 'ERRLMP_ATSINTVMOD_SY' multiple defined
#endif


/* Referenced System Constant MILLMP_PWRSTG_SY */


/* MILLMP_PWRSTG_SY Typ=ub */
#ifndef MILLMP_PWRSTG_SY
  #define MILLMP_PWRSTG_SY 0L
#elif (MILLMP_PWRSTG_SY != 0L)
  #error >>>> 'MILLMP_PWRSTG_SY' multiple defined
#endif


/* Referenced System Constant MILLMP_SUPRT_ATS_SY */


/* MILLMP_SUPRT_ATS_SY Typ=ub */
#ifndef MILLMP_SUPRT_ATS_SY
  #define MILLMP_SUPRT_ATS_SY 0L
#elif (MILLMP_SUPRT_ATS_SY != 0L)
  #error >>>> 'MILLMP_SUPRT_ATS_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema dir +++++ */


/* Local Variable: MILLmp_tiRmnBln */


/* Exported Variable: ErrLmp_stMIL */
/* ErrLmp_stMIL is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MILLmp_stMIL */
/* MILLmp_stMIL is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MILLmp_stPs */
/* MILLmp_stPs is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: MILLmp_stReqBln */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MILLmp_stReqOn */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema intRam +++++ */


/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MILLmp_VD -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */


#undef _DAT_H
#endif /* _MILLMP_DD_DAT_H */
