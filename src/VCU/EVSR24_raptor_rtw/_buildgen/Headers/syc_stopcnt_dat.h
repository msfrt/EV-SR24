#ifndef _SYC_STOPCNT_DAT_H
#define _SYC_STOPCNT_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter SyC_tiDiaStopCnt_C */
#ifndef _SyC_tiDiaStopCnt_C_DEF
#define _SyC_tiDiaStopCnt_C_DEF
#define SyC_tiDiaStopCnt_CM SyC_tiDiaStopCnt_C
#endif /* _SyC_tiDiaStopCnt_C_DEF */

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


/* Referenced System Constant ECUOFF_TMR_EXT_SY */


/* ECUOFF_TMR_EXT_SY Typ=ub */
#ifndef ECUOFF_TMR_EXT_SY
  #define ECUOFF_TMR_EXT_SY 0L
#elif (ECUOFF_TMR_EXT_SY != 0L)
  #error >>>> 'ECUOFF_TMR_EXT_SY' multiple defined
#endif


/* Referenced System Constant ECUOFF_TMR_SY */


/* ECUOFF_TMR_SY Typ=sw */
#ifndef ECUOFF_TMR_SY
  #define ECUOFF_TMR_SY 4L
#elif (ECUOFF_TMR_SY != 4L)
  #error >>>> 'ECUOFF_TMR_SY' multiple defined
#endif


/* Referenced System Constant SYC_STOPCNTWAKEUP_SC */


/* SYC_STOPCNTWAKEUP_SC Typ=ub */
#ifndef SYC_STOPCNTWAKEUP_SC
  #define SYC_STOPCNTWAKEUP_SC 0L
#elif (SYC_STOPCNTWAKEUP_SC != 0L)
  #error >>>> 'SYC_STOPCNTWAKEUP_SC' multiple defined
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


/* Local Variable: SyC_stStopCntXPostDrv_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __SYC_STSTOPCNTXPOSTDRV_MP_EXT__
#define __SYC_STSTOPCNTXPOSTDRV_MP_EXT__
extern uint8 SyC_stStopCntXPostDrv_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* Exported Variable: SyC_stVldTiEcuOff */
/* SyC_stVldTiEcuOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: SyC_tiEcuOff */
/* SyC_tiEcuOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: BattU_stPwrFail */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __BATTU_STPWRFAIL_EXT__
#define __BATTU_STPWRFAIL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 BattU_stPwrFail;
#else /* local or exported variable - write access */
extern uint8 BattU_stPwrFail;
#endif /* IMPORTED */
#endif /* __BATTU_STPWRFAIL_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_ctIrrSwOff */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_ctIrrSwOff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema protRam32 +++++ */
#pragma section .bss.protram.a4 aw

/* Local Variable: SyC_xStopCntCalWup_u32 */
#ifdef _DAT_H
#ifndef __SYC_XSTOPCNTCALWUP_U32_EXT__
#define __SYC_XSTOPCNTCALWUP_U32_EXT__
#ifdef _SYC_STOPCNT_INF_H
static uint32 SyC_xStopCntCalWup_u32;
#endif
#endif
#endif

/* Footer */
#pragma section 

/* +++++ Addressschema protRam8 +++++ */
#pragma section .bss.protram.a1 aw

/* Local Variable: SyC_stECUOffTimeCalc_u8 */
#ifdef _DAT_H
#ifndef __SYC_STECUOFFTIMECALC_U8_EXT__
#define __SYC_STECUOFFTIMECALC_U8_EXT__
#ifdef _SYC_STOPCNT_INF_H
static uint8 SyC_stECUOffTimeCalc_u8;
#endif
#endif
#endif


/* Local Variable: SyC_stStopCntStrt_u8 */
#ifdef _DAT_H
#ifndef __SYC_STSTOPCNTSTRT_U8_EXT__
#define __SYC_STSTOPCNTSTRT_U8_EXT__
#ifdef _SYC_STOPCNT_INF_H
static uint8 SyC_stStopCntStrt_u8;
#endif
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
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
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
#ifndef DATA_SYC_STOPCNT_DIR_T_DEF
#define DATA_SYC_STOPCNT_DIR_T_DEF
typedef struct
{
    /* ----- Parameter SyC_tiDiaStopCnt_C ----- */
    uint8 _SyC_tiDiaStopCnt_C;
} DATA_SyC_StopCnt_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_SyC_StopCnt_dir_t DATA_SyC_StopCnt_dir
    __attribute__ ((asection (".pta_datadir_SyC_StopCnt","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_SyC_StopCnt_dir_t * const VECT_SyC_StopCnt_dir
    __attribute__ ((asection (".sdata.pta_vectdir_SyC_StopCnt","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema protRam32 +++++ */

/* +++++ Addressschema protRam8 +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter SyC_tiDiaStopCnt_C -- */
#ifndef SyC_tiDiaStopCnt_C
#define SyC_tiDiaStopCnt_C (VECT_SyC_StopCnt_dir->_SyC_tiDiaStopCnt_C)
#endif

#ifndef RP_SyC_tiDiaStopCnt_C
#define RP_SyC_tiDiaStopCnt_C (DATA_SyC_StopCnt_dir._SyC_tiDiaStopCnt_C)
#endif

#ifndef __SyC_tiDiaStopCnt_C
#define __SyC_tiDiaStopCnt_C (VECT_SyC_StopCnt_dir->_SyC_tiDiaStopCnt_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema protRam32 +++++ */

/* +++++ Addressschema protRam8 +++++ */


#undef _DAT_H
#endif /* _SYC_STOPCNT_DAT_H */
