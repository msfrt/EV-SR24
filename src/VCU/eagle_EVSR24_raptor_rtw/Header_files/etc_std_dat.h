#ifndef _ETC_STD_DAT_H
#define _ETC_STD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Etc_MaxReqTO_C */
#ifndef _Etc_MaxReqTO_C_DEF
#define _Etc_MaxReqTO_C_DEF
#define Etc_MaxReqTO_CM Etc_MaxReqTO_C
#endif /* _Etc_MaxReqTO_C_DEF */

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
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Etc_ctCurRunTst */
/* Etc_ctCurRunTst is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */



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
#ifndef DATA_ETC_STD_DIR_T_DEF
#define DATA_ETC_STD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Etc_MaxReqTO_C ----- */
    uint16 _Etc_MaxReqTO_C;
} DATA_ETC_Std_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_ETC_Std_dir_t DATA_ETC_Std_dir
    __attribute__ ((asection (".pta_datadir_ETC_Std","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_ETC_Std_dir_t * const VECT_ETC_Std_dir
    __attribute__ ((asection (".sdata.pta_vectdir_ETC_Std","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Etc_MaxReqTO_C -- */
#ifndef Etc_MaxReqTO_C
#define Etc_MaxReqTO_C (VECT_ETC_Std_dir->_Etc_MaxReqTO_C)
#endif

#ifndef RP_Etc_MaxReqTO_C
#define RP_Etc_MaxReqTO_C (DATA_ETC_Std_dir._Etc_MaxReqTO_C)
#endif

#ifndef __Etc_MaxReqTO_C
#define __Etc_MaxReqTO_C (VECT_ETC_Std_dir->_Etc_MaxReqTO_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _ETC_STD_DAT_H */
