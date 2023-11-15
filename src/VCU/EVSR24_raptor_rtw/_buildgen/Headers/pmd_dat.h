#ifndef _PMD_DAT_H
#define _PMD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter PMD_PeriMonEn_C */
#ifndef _PMD_PeriMonEn_C_DEF
#define _PMD_PeriMonEn_C_DEF
#define PMD_PeriMonEn_CM PMD_PeriMonEn_C
#endif /* _PMD_PeriMonEn_C_DEF */

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
#ifndef DATA_PMD_DIR_T_DEF
#define DATA_PMD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter PMD_PeriMonEn_C ----- */
    uint8 _PMD_PeriMonEn_C;
} DATA_Pmd_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Pmd_dir_t DATA_Pmd_dir
    __attribute__ ((asection (".pta_datadir_Pmd","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Pmd_dir_t * const VECT_Pmd_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Pmd","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter PMD_PeriMonEn_C -- */
#ifndef PMD_PeriMonEn_C
#define PMD_PeriMonEn_C (VECT_Pmd_dir->_PMD_PeriMonEn_C)
#endif

#ifndef RP_PMD_PeriMonEn_C
#define RP_PMD_PeriMonEn_C (DATA_Pmd_dir._PMD_PeriMonEn_C)
#endif

#ifndef __PMD_PeriMonEn_C
#define __PMD_PeriMonEn_C (VECT_Pmd_dir->_PMD_PeriMonEn_C)
#endif


#undef _DAT_H
#endif /* _PMD_DAT_H */
