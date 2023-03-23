#ifndef _SYC_PREDRV_DAT_H
#define _SYC_PREDRV_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter SyC_tiPreDrvMax_C */
#ifndef _SyC_tiPreDrvMax_C_DEF
#define _SyC_tiPreDrvMax_C_DEF
#define SyC_tiPreDrvMax_CM SyC_tiPreDrvMax_C
#endif /* _SyC_tiPreDrvMax_C_DEF */

/* Defined Parameter SyC_tiPreDrvResv_C */
#ifndef _SyC_tiPreDrvResv_C_DEF
#define _SyC_tiPreDrvResv_C_DEF
#define SyC_tiPreDrvResv_CM SyC_tiPreDrvResv_C
#endif /* _SyC_tiPreDrvResv_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CJ930WAKEUP_SC */


/* CJ930WAKEUP_SC Typ=ub */
#ifndef CJ930WAKEUP_SC
  #define CJ930WAKEUP_SC 0L
#elif (CJ930WAKEUP_SC != 0L)
  #error >>>> 'CJ930WAKEUP_SC' multiple defined
#endif


/* Referenced System Constant CJ930_SY */


/* CJ930_SY Typ=sw */
#ifndef CJ930_SY
  #define CJ930_SY 0L
#elif (CJ930_SY != 0L)
  #error >>>> 'CJ930_SY' multiple defined
#endif


/* Referenced System Constant CY320_SY */


/* CY320_SY Typ=sw */
#ifndef CY320_SY
  #define CY320_SY 0L
#elif (CY320_SY != 0L)
  #error >>>> 'CY320_SY' multiple defined
#endif


/* Referenced System Constant CY327_SY */


/* CY327_SY Typ=sw */
#ifndef CY327_SY
  #define CY327_SY 1L
#elif (CY327_SY != 1L)
  #error >>>> 'CY327_SY' multiple defined
#endif


/* Referenced System Constant PERMSPLYSYS_SY */


/* PERMSPLYSYS_SY Typ=ub */
#ifndef PERMSPLYSYS_SY
  #define PERMSPLYSYS_SY 0L
#elif (PERMSPLYSYS_SY != 0L)
  #error >>>> 'PERMSPLYSYS_SY' multiple defined
#endif


/* Referenced System Constant SYC_CAL_PERMSPLYSYS_SY */


/* SYC_CAL_PERMSPLYSYS_SY Typ=ub */
#ifndef SYC_CAL_PERMSPLYSYS_SY
  #define SYC_CAL_PERMSPLYSYS_SY 0L
#elif (SYC_CAL_PERMSPLYSYS_SY != 0L)
  #error >>>> 'SYC_CAL_PERMSPLYSYS_SY' multiple defined
#endif


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
/* +++++ Addressschema envRam8 +++++ */
#pragma section .bss.envram.a1 aw

/* Exported Variable: SyC_ctTiPreDrvMax */
#ifdef _DAT_H
#ifndef __SYC_CTTIPREDRVMAX_EXT__
#define __SYC_CTTIPREDRVMAX_EXT__
extern uint8 SyC_ctTiPreDrvMax;
#endif
#endif


/* Exported Variable: SyC_stHistTiPreDrvMax */
#ifdef _DAT_H
#ifndef __SYC_STHISTTIPREDRVMAX_EXT__
#define __SYC_STHISTTIPREDRVMAX_EXT__
extern uint8 SyC_stHistTiPreDrvMax;
#endif
#endif

/* Footer */
#pragma section 

/* +++++ Addressschema intRam +++++ */


/* Local Variable: SyC_stPreDrvDel */


/* Local Variable: SyC_stSwtOn_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_STSWTON_MP_EXT__
#define __SYC_STSWTON_MP_EXT__
extern uint8 SyC_stSwtOn_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Exported Variable: SyC_stPreDrv */
/* SyC_stPreDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stT15 */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stT15 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: T15_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* T15_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Imported Variable: MoCCom_ctErrMMMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCCom_ctErrMMMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MRly_st */
#define IMPORTED
#ifndef _D_FILE_ 
/* MRly_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema MsgRamI16 +++++ */
/* MsgRamI16Header */
#pragma section .sbss.a2 aws 


/* Imported Variable: MRly_stAct */
#define IMPORTED
#ifndef _D_FILE_ 
/* MRly_stAct is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema protRam8 +++++ */
#pragma section .bss.protram.a1 aw

/* Local Variable: SyC_stIgnoreNwmPreDrive */
#ifdef _DAT_H
#ifndef __SYC_STIGNORENWMPREDRIVE_EXT__
#define __SYC_STIGNORENWMPREDRIVE_EXT__
#ifdef _SYC_PREDRV_INF_H
static uint8 SyC_stIgnoreNwmPreDrive;
#endif
#endif
#endif


/* Local Variable: SyC_stShortenPreDrive */
#ifdef _DAT_H
#ifndef __SYC_STSHORTENPREDRIVE_EXT__
#define __SYC_STSHORTENPREDRIVE_EXT__
#ifdef _SYC_PREDRV_INF_H
static uint8 SyC_stShortenPreDrive;
#endif
#endif
#endif


/* Exported Variable: SyC_stPreDrvFin */
#ifdef _DAT_H
#ifndef __SYC_STPREDRVFIN_EXT__
#define __SYC_STPREDRVFIN_EXT__
extern uint8 SyC_stPreDrvFin;
#endif
#endif

/* Footer */
#pragma section 


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
/* -- No referenced PTA Structures of MoCCom_Co -- */
/* -- No referenced PTA Structures of MRly_VD -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of T15_VD -- */
/* +++++ Addressschema DSERAP +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_SYC_PREDRV_DIR_T_DEF
#define DATA_SYC_PREDRV_DIR_T_DEF
typedef struct
{
    /* ----- Parameter SyC_tiPreDrvMax_C ----- */
    uint16 _SyC_tiPreDrvMax_C;
    /* ----- Parameter SyC_tiPreDrvResv_C ----- */
    uint8 _SyC_tiPreDrvResv_C;
} DATA_SyC_PreDrv_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_SyC_PreDrv_dir_t DATA_SyC_PreDrv_dir
    __attribute__ ((asection (".pta_datadir_SyC_PreDrv","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_SyC_PreDrv_dir_t * const VECT_SyC_PreDrv_dir
    __attribute__ ((asection (".sdata.pta_vectdir_SyC_PreDrv","f=as")));
#endif

/* +++++ Addressschema envRam8 +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema protRam8 +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter SyC_tiPreDrvMax_C -- */
#ifndef SyC_tiPreDrvMax_C
#define SyC_tiPreDrvMax_C (VECT_SyC_PreDrv_dir->_SyC_tiPreDrvMax_C)
#endif

#ifndef RP_SyC_tiPreDrvMax_C
#define RP_SyC_tiPreDrvMax_C (DATA_SyC_PreDrv_dir._SyC_tiPreDrvMax_C)
#endif

#ifndef __SyC_tiPreDrvMax_C
#define __SyC_tiPreDrvMax_C (VECT_SyC_PreDrv_dir->_SyC_tiPreDrvMax_C)
#endif

/* -- Macro for local Parameter SyC_tiPreDrvResv_C -- */
#ifndef SyC_tiPreDrvResv_C
#define SyC_tiPreDrvResv_C (VECT_SyC_PreDrv_dir->_SyC_tiPreDrvResv_C)
#endif

#ifndef RP_SyC_tiPreDrvResv_C
#define RP_SyC_tiPreDrvResv_C (DATA_SyC_PreDrv_dir._SyC_tiPreDrvResv_C)
#endif

#ifndef __SyC_tiPreDrvResv_C
#define __SyC_tiPreDrvResv_C (VECT_SyC_PreDrv_dir->_SyC_tiPreDrvResv_C)
#endif

/* +++++ Addressschema envRam8 +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema protRam8 +++++ */


#undef _DAT_H
#endif /* _SYC_PREDRV_DAT_H */
