#ifndef _SYC_CALWAKEUP_DAT_H
#define _SYC_CALWAKEUP_DAT_H

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


/* Referenced System Constant CJ930_NUMCHP_SY */


/* CJ930_NUMCHP_SY Typ=sw */
#ifndef CJ930_NUMCHP_SY
  #define CJ930_NUMCHP_SY 0L
#elif (CJ930_NUMCHP_SY != 0L)
  #error >>>> 'CJ930_NUMCHP_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: SyC_stMn */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stMn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stPreDrvDel */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stT15 */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stT15 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_PreDrv -- */
/* +++++ Addressschema dir +++++ */

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
#endif /* _SYC_CALWAKEUP_DAT_H */
