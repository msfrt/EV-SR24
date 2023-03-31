#ifndef _CJ135_DAT_H
#define _CJ135_DAT_H

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

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: Cj135_tiHtrPlsUs_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CJ135_TIHTRPLSUS_MP_EXT__
#define __CJ135_TIHTRPLSUS_MP_EXT__
extern uint16 Cj135_tiHtrPlsUs_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cj135_tiRdSigProcStrt_mp */
/* Mp_u32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CJ135_TIRDSIGPROCSTRT_MP_EXT__
#define __CJ135_TIRDSIGPROCSTRT_MP_EXT__
extern uint32 Cj135_tiRdSigProcStrt_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
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


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema extRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema extRam +++++ */


#undef _DAT_H
#endif /* _CJ135_DAT_H */
