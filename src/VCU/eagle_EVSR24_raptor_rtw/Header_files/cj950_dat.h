#ifndef _CJ950_DAT_H
#define _CJ950_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter CJ950_xUsedDev_CW */
#ifndef _CJ950_xUsedDev_CW_DEF
#define _CJ950_xUsedDev_CW_DEF
#define CJ950_xUsedDev_CWM CJ950_xUsedDev_CW
#endif /* _CJ950_xUsedDev_CW_DEF */

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
#ifndef DATA_CJ950_DIR_T_DEF
#define DATA_CJ950_DIR_T_DEF
typedef struct
{
    /* ----- Parameter CJ950_xUsedDev_CW ----- */
    uint8 _CJ950_xUsedDev_CW;
} DATA_Cj950_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Cj950_dir_t DATA_Cj950_dir
    __attribute__ ((asection (".pta_datadir_Cj950","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Cj950_dir_t * const VECT_Cj950_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Cj950","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter CJ950_xUsedDev_CW -- */
#ifndef CJ950_xUsedDev_CW
#define CJ950_xUsedDev_CW (VECT_Cj950_dir->_CJ950_xUsedDev_CW)
#endif

#ifndef RP_CJ950_xUsedDev_CW
#define RP_CJ950_xUsedDev_CW (DATA_Cj950_dir._CJ950_xUsedDev_CW)
#endif

#ifndef __CJ950_xUsedDev_CW
#define __CJ950_xUsedDev_CW (VECT_Cj950_dir->_CJ950_xUsedDev_CW)
#endif


#undef _DAT_H
#endif /* _CJ950_DAT_H */
