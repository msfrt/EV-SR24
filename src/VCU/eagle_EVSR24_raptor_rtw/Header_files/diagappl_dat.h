#ifndef _DIAGAPPL_DAT_H
#define _DIAGAPPL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Diag_stOBDPtcol_C */
#ifndef _Diag_stOBDPtcol_C_DEF
#define _Diag_stOBDPtcol_C_DEF
#define Diag_stOBDPtcol_CM Diag_stOBDPtcol_C
#endif /* _Diag_stOBDPtcol_C_DEF */

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


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DIAGAPPL_DIR_T_DEF
#define DATA_DIAGAPPL_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Diag_stOBDPtcol_C ----- */
    uint8 _Diag_stOBDPtcol_C;
} DATA_DiagAppl_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DiagAppl_dir_t DATA_DiagAppl_dir
    __attribute__ ((asection (".pta_datadir_DiagAppl","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DiagAppl_dir_t * const VECT_DiagAppl_dir
    __attribute__ ((asection (".sdata.pta_vectdir_DiagAppl","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Diag_stOBDPtcol_C -- */
#ifndef Diag_stOBDPtcol_C
#define Diag_stOBDPtcol_C (VECT_DiagAppl_dir->_Diag_stOBDPtcol_C)
#endif

#ifndef RP_Diag_stOBDPtcol_C
#define RP_Diag_stOBDPtcol_C (DATA_DiagAppl_dir._Diag_stOBDPtcol_C)
#endif

#ifndef __Diag_stOBDPtcol_C
#define __Diag_stOBDPtcol_C (VECT_DiagAppl_dir->_Diag_stOBDPtcol_C)
#endif


#undef _DAT_H
#endif /* _DIAGAPPL_DAT_H */
