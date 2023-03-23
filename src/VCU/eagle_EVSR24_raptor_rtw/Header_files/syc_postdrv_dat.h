#ifndef _SYC_POSTDRV_DAT_H
#define _SYC_POSTDRV_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter SyC_tiPostDrvMax_C */
#ifndef _SyC_tiPostDrvMax_C_DEF
#define _SyC_tiPostDrvMax_C_DEF
#define SyC_tiPostDrvMax_CM SyC_tiPostDrvMax_C
#endif /* _SyC_tiPostDrvMax_C_DEF */

/* Defined Parameter SyC_tiPostDrvMin_C */
#ifndef _SyC_tiPostDrvMin_C_DEF
#define _SyC_tiPostDrvMin_C_DEF
#define SyC_tiPostDrvMin_CM SyC_tiPostDrvMin_C
#endif /* _SyC_tiPostDrvMin_C_DEF */

/* Defined Parameter SyC_tiPostDrvResv_C */
#ifndef _SyC_tiPostDrvResv_C_DEF
#define _SyC_tiPostDrvResv_C_DEF
#define SyC_tiPostDrvResv_CM SyC_tiPostDrvResv_C
#endif /* _SyC_tiPostDrvResv_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant SYC_UNLIMNWM_SY */


/* SYC_UNLIMNWM_SY Typ=ub */
#ifndef SYC_UNLIMNWM_SY
  #define SYC_UNLIMNWM_SY 0L
#elif (SYC_UNLIMNWM_SY != 0L)
  #error >>>> 'SYC_UNLIMNWM_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: SyC_ctTiPostDrvMax */


/* Local Variable: SyC_stHistTiPostDrvMax */


/* Local Variable: SyC_stPostDrvFin */


/* Exported Variable: SyC_stPostDrv */
/* SyC_stPostDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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
#ifndef DATA_SYC_POSTDRV_DIR_T_DEF
#define DATA_SYC_POSTDRV_DIR_T_DEF
typedef struct
{
    /* ----- Parameter SyC_tiPostDrvMax_C ----- */
    uint16 _SyC_tiPostDrvMax_C;
    /* ----- Parameter SyC_tiPostDrvMin_C ----- */
    uint16 _SyC_tiPostDrvMin_C;
    /* ----- Parameter SyC_tiPostDrvResv_C ----- */
    uint16 _SyC_tiPostDrvResv_C;
} DATA_SyC_PostDrv_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_SyC_PostDrv_dir_t DATA_SyC_PostDrv_dir
    __attribute__ ((asection (".pta_datadir_SyC_PostDrv","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_SyC_PostDrv_dir_t * const VECT_SyC_PostDrv_dir
    __attribute__ ((asection (".sdata.pta_vectdir_SyC_PostDrv","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter SyC_tiPostDrvMax_C -- */
#ifndef SyC_tiPostDrvMax_C
#define SyC_tiPostDrvMax_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvMax_C)
#endif

#ifndef RP_SyC_tiPostDrvMax_C
#define RP_SyC_tiPostDrvMax_C (DATA_SyC_PostDrv_dir._SyC_tiPostDrvMax_C)
#endif

#ifndef __SyC_tiPostDrvMax_C
#define __SyC_tiPostDrvMax_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvMax_C)
#endif

/* -- Macro for local Parameter SyC_tiPostDrvMin_C -- */
#ifndef SyC_tiPostDrvMin_C
#define SyC_tiPostDrvMin_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvMin_C)
#endif

#ifndef RP_SyC_tiPostDrvMin_C
#define RP_SyC_tiPostDrvMin_C (DATA_SyC_PostDrv_dir._SyC_tiPostDrvMin_C)
#endif

#ifndef __SyC_tiPostDrvMin_C
#define __SyC_tiPostDrvMin_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvMin_C)
#endif

/* -- Macro for local Parameter SyC_tiPostDrvResv_C -- */
#ifndef SyC_tiPostDrvResv_C
#define SyC_tiPostDrvResv_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvResv_C)
#endif

#ifndef RP_SyC_tiPostDrvResv_C
#define RP_SyC_tiPostDrvResv_C (DATA_SyC_PostDrv_dir._SyC_tiPostDrvResv_C)
#endif

#ifndef __SyC_tiPostDrvResv_C
#define __SyC_tiPostDrvResv_C (VECT_SyC_PostDrv_dir->_SyC_tiPostDrvResv_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _SYC_POSTDRV_DAT_H */
