#ifndef _RESET_DAT_H
#define _RESET_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Reset_rstFlMRErrBuf_C */
#ifndef _Reset_rstFlMRErrBuf_C_DEF
#define _Reset_rstFlMRErrBuf_C_DEF
#define Reset_rstFlMRErrBuf_CM Reset_rstFlMRErrBuf_C
#endif /* _Reset_rstFlMRErrBuf_C_DEF */

/* Defined Parameter Reset_rstHistBuf_C */
#ifndef _Reset_rstHistBuf_C_DEF
#define _Reset_rstHistBuf_C_DEF
#define Reset_rstHistBuf_CM Reset_rstHistBuf_C
#endif /* _Reset_rstHistBuf_C_DEF */

/* Defined Parameter Reset_rstTrapErrIntrBuf_C */
#ifndef _Reset_rstTrapErrIntrBuf_C_DEF
#define _Reset_rstTrapErrIntrBuf_C_DEF
#define Reset_rstTrapErrIntrBuf_CM Reset_rstTrapErrIntrBuf_C
#endif /* _Reset_rstTrapErrIntrBuf_C_DEF */

/* Defined Parameter Reset_xGrpId_C */
#ifndef _Reset_xGrpId_C_DEF
#define _Reset_xGrpId_C_DEF
#define Reset_xGrpId_CM Reset_xGrpId_C
#endif /* _Reset_xGrpId_C_DEF */

/* Defined Parameter Reset_xTrgId_C */
#ifndef _Reset_xTrgId_C_DEF
#define _Reset_xTrgId_C_DEF
#define Reset_xTrgId_CM Reset_xTrgId_C
#endif /* _Reset_xTrgId_C_DEF */

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
/* +++++ Addressschema dir +++++ */


/* Exported Variable: Reset_Env */


/* +++++ Addressschema extRam +++++ */


/* Exported Variable: Reset_FlMRErrBuf */


/* Exported Variable: Reset_TrapErrIntrBuf */


/* Exported Variable: Reset_xHistBuf */



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
#ifndef DATA_RESET_DIR_T_DEF
#define DATA_RESET_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Reset_rstFlMRErrBuf_C ----- */
    uint8 _Reset_rstFlMRErrBuf_C;
    /* ----- Parameter Reset_rstHistBuf_C ----- */
    uint8 _Reset_rstHistBuf_C;
    /* ----- Parameter Reset_rstTrapErrIntrBuf_C ----- */
    uint8 _Reset_rstTrapErrIntrBuf_C;
    /* ----- Parameter Reset_xGrpId_C ----- */
    uint8 _Reset_xGrpId_C;
    /* ----- Parameter Reset_xTrgId_C ----- */
    uint16 _Reset_xTrgId_C;
} DATA_Reset_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Reset_dir_t DATA_Reset_dir
    __attribute__ ((asection (".pta_datadir_Reset","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Reset_dir_t * const VECT_Reset_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Reset","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Reset_rstFlMRErrBuf_C -- */
#ifndef Reset_rstFlMRErrBuf_C
#define Reset_rstFlMRErrBuf_C (VECT_Reset_dir->_Reset_rstFlMRErrBuf_C)
#endif

#ifndef RP_Reset_rstFlMRErrBuf_C
#define RP_Reset_rstFlMRErrBuf_C (DATA_Reset_dir._Reset_rstFlMRErrBuf_C)
#endif

#ifndef __Reset_rstFlMRErrBuf_C
#define __Reset_rstFlMRErrBuf_C (VECT_Reset_dir->_Reset_rstFlMRErrBuf_C)
#endif

/* -- Macro for local Parameter Reset_rstHistBuf_C -- */
#ifndef Reset_rstHistBuf_C
#define Reset_rstHistBuf_C (VECT_Reset_dir->_Reset_rstHistBuf_C)
#endif

#ifndef RP_Reset_rstHistBuf_C
#define RP_Reset_rstHistBuf_C (DATA_Reset_dir._Reset_rstHistBuf_C)
#endif

#ifndef __Reset_rstHistBuf_C
#define __Reset_rstHistBuf_C (VECT_Reset_dir->_Reset_rstHistBuf_C)
#endif

/* -- Macro for local Parameter Reset_rstTrapErrIntrBuf_C -- */
#ifndef Reset_rstTrapErrIntrBuf_C
#define Reset_rstTrapErrIntrBuf_C (VECT_Reset_dir->_Reset_rstTrapErrIntrBuf_C)
#endif

#ifndef RP_Reset_rstTrapErrIntrBuf_C
#define RP_Reset_rstTrapErrIntrBuf_C (DATA_Reset_dir._Reset_rstTrapErrIntrBuf_C)
#endif

#ifndef __Reset_rstTrapErrIntrBuf_C
#define __Reset_rstTrapErrIntrBuf_C (VECT_Reset_dir->_Reset_rstTrapErrIntrBuf_C)
#endif

/* -- Macro for local Parameter Reset_xGrpId_C -- */
#ifndef Reset_xGrpId_C
#define Reset_xGrpId_C (VECT_Reset_dir->_Reset_xGrpId_C)
#endif

#ifndef RP_Reset_xGrpId_C
#define RP_Reset_xGrpId_C (DATA_Reset_dir._Reset_xGrpId_C)
#endif

#ifndef __Reset_xGrpId_C
#define __Reset_xGrpId_C (VECT_Reset_dir->_Reset_xGrpId_C)
#endif

/* -- Macro for local Parameter Reset_xTrgId_C -- */
#ifndef Reset_xTrgId_C
#define Reset_xTrgId_C (VECT_Reset_dir->_Reset_xTrgId_C)
#endif

#ifndef RP_Reset_xTrgId_C
#define RP_Reset_xTrgId_C (DATA_Reset_dir._Reset_xTrgId_C)
#endif

#ifndef __Reset_xTrgId_C
#define __Reset_xTrgId_C (VECT_Reset_dir->_Reset_xTrgId_C)
#endif

/* +++++ Addressschema extRam +++++ */


#undef _DAT_H
#endif /* _RESET_DAT_H */
