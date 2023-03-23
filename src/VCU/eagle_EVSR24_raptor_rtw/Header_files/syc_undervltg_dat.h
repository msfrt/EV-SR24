#ifndef _SYC_UNDERVLTG_DAT_H
#define _SYC_UNDERVLTG_DAT_H

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


/* Local Variable: SyC_ctInit */


/* Local Variable: SyC_ctUnderVltg */


/* Local Variable: SyC_tiUnderVltg_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TIUNDERVLTG_MP_EXT__
#define __SYC_TIUNDERVLTG_MP_EXT__
extern uint8 SyC_tiUnderVltg_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif



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


/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _SYC_UNDERVLTG_DAT_H */
