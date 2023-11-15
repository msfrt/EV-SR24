#ifndef _BASSVRAPPL_CHECKPROG_DAT_H
#define _BASSVRAPPL_CHECKPROG_DAT_H

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


/* Referenced System Constant I14229_RDTCSEVERITY_SY */


/* I14229_RDTCSEVERITY_SY Typ=ub */
#ifndef I14229_RDTCSEVERITY_SY
  #define I14229_RDTCSEVERITY_SY 0L
#elif (I14229_RDTCSEVERITY_SY != 0L)
  #error >>>> 'I14229_RDTCSEVERITY_SY' multiple defined
#endif


/* Referenced System Constant SY_CANVAR */


/* SY_CANVAR Typ=sw */
#ifndef SY_CANVAR
  #define SY_CANVAR 5L
#elif (SY_CANVAR != 5L)
  #error >>>> 'SY_CANVAR' multiple defined
#endif


/* Referenced System Constant SY_HEV */


/* SY_HEV Typ=sw */
#ifndef SY_HEV
  #define SY_HEV 0L
#elif (SY_HEV != 0L)
  #error >>>> 'SY_HEV' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: T15_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* T15_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: VehV_v */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __VEHV_V_EXT__
#define __VEHV_V_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 VehV_v;
#else /* local or exported variable - write access */
extern sint16 VehV_v;
#endif /* IMPORTED */
#endif /* __VEHV_V_EXT__ */
#endif /* _DAT_H */

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

/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of T15_VD -- */
/* +++++ Addressschema DSERAP +++++ */

/* Referenced DSerap Structure will not be generated */
 

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
#endif /* _BASSVRAPPL_CHECKPROG_DAT_H */
