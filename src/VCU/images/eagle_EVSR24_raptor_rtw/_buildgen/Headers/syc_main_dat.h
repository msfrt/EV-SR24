#ifndef _SYC_MAIN_DAT_H
#define _SYC_MAIN_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter SyC_stTest_C */
#ifndef _SyC_stTest_C_DEF
#define _SyC_stTest_C_DEF
#define SyC_stTest_CM SyC_stTest_C
#endif /* _SyC_stTest_C_DEF */

/* Defined Parameter SyC_swtTestEna_C */
#ifndef _SyC_swtTestEna_C_DEF
#define _SyC_swtTestEna_C_DEF
#define SyC_swtTestEna_CM SyC_swtTestEna_C
#endif /* _SyC_swtTestEna_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CJ721_SC */


/* CJ721_SC Typ=sw */
#ifndef CJ721_SC
  #define CJ721_SC 0L
#elif (CJ721_SC != 0L)
  #error >>>> 'CJ721_SC' multiple defined
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


/* Referenced System Constant DEFDSTRTTMNGFORDIGSENS_SY */


/* DEFDSTRTTMNGFORDIGSENS_SY Typ=ub */
#ifndef DEFDSTRTTMNGFORDIGSENS_SY
  #define DEFDSTRTTMNGFORDIGSENS_SY 0L
#elif (DEFDSTRTTMNGFORDIGSENS_SY != 0L)
  #error >>>> 'DEFDSTRTTMNGFORDIGSENS_SY' multiple defined
#endif


/* Referenced System Constant POSTDRV_SOFTRST_SY */


/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif


/* Referenced System Constant SYC_T15POSTPREDRV_SWRST_SY */


/* SYC_T15POSTPREDRV_SWRST_SY Typ=ub */
#ifndef SYC_T15POSTPREDRV_SWRST_SY
  #define SYC_T15POSTPREDRV_SWRST_SY 0L
#elif (SYC_T15POSTPREDRV_SWRST_SY != 0L)
  #error >>>> 'SYC_T15POSTPREDRV_SWRST_SY' multiple defined
#endif


/* Referenced System Constant SYC_T15RSTSIM_SY */


/* SYC_T15RSTSIM_SY Typ=ub */
#ifndef SYC_T15RSTSIM_SY
  #define SYC_T15RSTSIM_SY 1L
#elif (SYC_T15RSTSIM_SY != 1L)
  #error >>>> 'SYC_T15RSTSIM_SY' multiple defined
#endif


/* Referenced System Constant SYC_WREEPBLK_SY */


/* SYC_WREEPBLK_SY Typ=ub */
#ifndef SYC_WREEPBLK_SY
  #define SYC_WREEPBLK_SY 1L
#elif (SYC_WREEPBLK_SY != 1L)
  #error >>>> 'SYC_WREEPBLK_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: SyC_ctShutdown_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_CTSHUTDOWN_MP_EXT__
#define __SYC_CTSHUTDOWN_MP_EXT__
extern uint16 SyC_ctShutdown_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: SyC_tiBoot_mp */
/* Mp_u32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TIBOOT_MP_EXT__
#define __SYC_TIBOOT_MP_EXT__
extern uint32 SyC_tiBoot_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: SyC_tiIniEnd_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TIINIEND_MP_EXT__
#define __SYC_TIINIEND_MP_EXT__
extern uint16 SyC_tiIniEnd_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: SyC_tiIniSyn_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TIINISYN_MP_EXT__
#define __SYC_TIINISYN_MP_EXT__
extern uint16 SyC_tiIniSyn_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: SyC_tiIni_mp */
/* Mp_u32( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TIINI_MP_EXT__
#define __SYC_TIINI_MP_EXT__
extern uint32 SyC_tiIni_mp    __attribute__ ((asection (".bss.mpram.a4","f=aw")));
#endif
#endif


/* Local Variable: SyC_tiShutdown_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_TISHUTDOWN_MP_EXT__
#define __SYC_TISHUTDOWN_MP_EXT__
extern uint16 SyC_tiShutdown_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Exported Variable: SyC_ctIrrSwOff */
/* SyC_ctIrrSwOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_stMn */
/* SyC_stMn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_stMnOld */
/* SyC_stMnOld is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_stSub */
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_stSubOld */
/* SyC_stSubOld is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_stT15 */
/* SyC_stT15 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_tiDrv */
/* SyC_tiDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_tiFrst10ms */
/* SyC_tiFrst10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_tiPostDrv */
/* SyC_tiPostDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_tiPreDrv */
/* SyC_tiPreDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: SyC_stPostDrv */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stPostDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stPreDrv */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stPreDrv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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


/* Imported Variable: MoCCom_stWDAActvMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCCom_stWDAActvMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_stIrvErrReacMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* Mo_stIrvErrReacMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
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
/* -- No referenced PTA Structures of Mo_Glbl -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of OCWDA_Co -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_PostDrv -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_PreDrv -- */
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
#ifndef DATA_SYC_MAIN_DIR_T_DEF
#define DATA_SYC_MAIN_DIR_T_DEF
typedef struct
{
    /* ----- Parameter SyC_stTest_C ----- */
    uint8 _SyC_stTest_C;
    /* ----- Parameter SyC_swtTestEna_C ----- */
    uint8 _SyC_swtTestEna_C;
} DATA_SyC_Main_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_SyC_Main_dir_t DATA_SyC_Main_dir
    __attribute__ ((asection (".pta_datadir_SyC_Main","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_SyC_Main_dir_t * const VECT_SyC_Main_dir
    __attribute__ ((asection (".sdata.pta_vectdir_SyC_Main","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter SyC_stTest_C -- */
#ifndef SyC_stTest_C
#define SyC_stTest_C (VECT_SyC_Main_dir->_SyC_stTest_C)
#endif

#ifndef RP_SyC_stTest_C
#define RP_SyC_stTest_C (DATA_SyC_Main_dir._SyC_stTest_C)
#endif

#ifndef __SyC_stTest_C
#define __SyC_stTest_C (VECT_SyC_Main_dir->_SyC_stTest_C)
#endif

/* -- Macro for local Parameter SyC_swtTestEna_C -- */
#ifndef SyC_swtTestEna_C
#define SyC_swtTestEna_C (VECT_SyC_Main_dir->_SyC_swtTestEna_C)
#endif

#ifndef RP_SyC_swtTestEna_C
#define RP_SyC_swtTestEna_C (DATA_SyC_Main_dir._SyC_swtTestEna_C)
#endif

#ifndef __SyC_swtTestEna_C
#define __SyC_swtTestEna_C (VECT_SyC_Main_dir->_SyC_swtTestEna_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _SYC_MAIN_DAT_H */
