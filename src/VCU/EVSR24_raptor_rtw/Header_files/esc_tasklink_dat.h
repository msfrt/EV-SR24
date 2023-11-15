#ifndef _ESC_TASKLINK_DAT_H
#define _ESC_TASKLINK_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter ESC_stS1FrstSched_C */
#ifndef _ESC_stS1FrstSched_C_DEF
#define _ESC_stS1FrstSched_C_DEF
#define ESC_stS1FrstSched_CM ESC_stS1FrstSched_C
#endif /* _ESC_stS1FrstSched_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DRCTSTRT_SY */


/* DRCTSTRT_SY Typ=sw */
#ifndef DRCTSTRT_SY
  #define DRCTSTRT_SY 0L
#elif (DRCTSTRT_SY != 0L)
  #error >>>> 'DRCTSTRT_SY' multiple defined
#endif


/* Referenced System Constant ENGRESTRT_SY */


/* ENGRESTRT_SY Typ=ub */
#ifndef ENGRESTRT_SY
  #define ENGRESTRT_SY 0L
#elif (ENGRESTRT_SY != 0L)
  #error >>>> 'ENGRESTRT_SY' multiple defined
#endif


/* Referenced System Constant EPM_TDCDSTCLB_SC */


/* EPM_TDCDSTCLB_SC Typ=sw */
#ifndef EPM_TDCDSTCLB_SC
  #define EPM_TDCDSTCLB_SC 0L
#elif (EPM_TDCDSTCLB_SC != 0L)
  #error >>>> 'EPM_TDCDSTCLB_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: EpmSeq_numInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_tiDrv */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_tiDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
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

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_ESC_TASKLINK_DIR_T_DEF
#define DATA_ESC_TASKLINK_DIR_T_DEF
typedef struct
{
    /* ----- Parameter ESC_stS1FrstSched_C ----- */
    uint8 _ESC_stS1FrstSched_C;
} DATA_ESC_TaskLink_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_ESC_TaskLink_dir_t DATA_ESC_TaskLink_dir
    __attribute__ ((asection (".pta_datadir_ESC_TaskLink","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_ESC_TaskLink_dir_t * const VECT_ESC_TaskLink_dir
    __attribute__ ((asection (".sdata.pta_vectdir_ESC_TaskLink","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter ESC_stS1FrstSched_C -- */
#ifndef ESC_stS1FrstSched_C
#define ESC_stS1FrstSched_C (VECT_ESC_TaskLink_dir->_ESC_stS1FrstSched_C)
#endif

#ifndef RP_ESC_stS1FrstSched_C
#define RP_ESC_stS1FrstSched_C (DATA_ESC_TaskLink_dir._ESC_stS1FrstSched_C)
#endif

#ifndef __ESC_stS1FrstSched_C
#define __ESC_stS1FrstSched_C (VECT_ESC_TaskLink_dir->_ESC_stS1FrstSched_C)
#endif


#undef _DAT_H
#endif /* _ESC_TASKLINK_DAT_H */
