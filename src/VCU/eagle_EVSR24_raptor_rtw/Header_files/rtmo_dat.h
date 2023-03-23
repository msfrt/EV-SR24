#ifndef _RTMO_DAT_H
#define _RTMO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Rtmo_adCalling_u32 */
#ifndef _Rtmo_adCalling_u32_DEF
#define _Rtmo_adCalling_u32_DEF
#define Rtmo_adCalling_u32M Rtmo_adCalling_u32
#endif /* _Rtmo_adCalling_u32_DEF */

/* Defined Parameter Rtmo_adData_u32 */
#ifndef _Rtmo_adData_u32_DEF
#define _Rtmo_adData_u32_DEF
#define Rtmo_adData_u32M Rtmo_adData_u32
#endif /* _Rtmo_adData_u32_DEF */

/* Defined Parameter Rtmo_stSampleTime_u8 */
#ifndef _Rtmo_stSampleTime_u8_DEF
#define _Rtmo_stSampleTime_u8_DEF
#define Rtmo_stSampleTime_u8M Rtmo_stSampleTime_u8
#endif /* _Rtmo_stSampleTime_u8_DEF */

/* Defined Parameter Rtmo_swLoadMode_u8 */
#ifndef _Rtmo_swLoadMode_u8_DEF
#define _Rtmo_swLoadMode_u8_DEF
#define Rtmo_swLoadMode_u8M Rtmo_swLoadMode_u8
#endif /* _Rtmo_swLoadMode_u8_DEF */

/* Defined Parameter Rtmo_swMode_u8 */
#ifndef _Rtmo_swMode_u8_DEF
#define _Rtmo_swMode_u8_DEF
#define Rtmo_swMode_u8M Rtmo_swMode_u8
#endif /* _Rtmo_swMode_u8_DEF */

/* Defined Parameter Rtmo_tiIntOverhead_Tick */
#ifndef _Rtmo_tiIntOverhead_Tick_DEF
#define _Rtmo_tiIntOverhead_Tick_DEF
#define Rtmo_tiIntOverhead_TickM Rtmo_tiIntOverhead_Tick
#endif /* _Rtmo_tiIntOverhead_Tick_DEF */

/* Defined Parameter Rtmo_tiOverhead_Tick */
#ifndef _Rtmo_tiOverhead_Tick_DEF
#define _Rtmo_tiOverhead_Tick_DEF
#define Rtmo_tiOverhead_TickM Rtmo_tiOverhead_Tick
#endif /* _Rtmo_tiOverhead_Tick_DEF */

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


/* Exported Variable: Rtmo_ctInterrupt_u16 */
#ifdef _DAT_H
#ifndef __RTMO_CTINTERRUPT_U16_EXT__
#define __RTMO_CTINTERRUPT_U16_EXT__
extern uint16 Rtmo_ctInterrupt_u16;
#endif
#endif


/* Exported Variable: Rtmo_ctReentrantSample_u32 */
#ifdef _DAT_H
#ifndef __RTMO_CTREENTRANTSAMPLE_U32_EXT__
#define __RTMO_CTREENTRANTSAMPLE_U32_EXT__
extern uint32 Rtmo_ctReentrantSample_u32;
#endif
#endif


/* Exported Variable: Rtmo_ctSampleProc_u8 */


/* Exported Variable: Rtmo_ctSample_u16 */
#ifdef _DAT_H
#ifndef __RTMO_CTSAMPLE_U16_EXT__
#define __RTMO_CTSAMPLE_U16_EXT__
extern uint32 Rtmo_ctSample_u16;
#endif
#endif


/* Exported Variable: Rtmo_flState_u8 */
#ifdef _DAT_H
#ifndef __RTMO_FLSTATE_U8_EXT__
#define __RTMO_FLSTATE_U8_EXT__
extern uint8 Rtmo_flState_u8;
#endif
#endif


/* Exported Variable: Rtmo_tiAvrg_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TIAVRG_TICK_EXT__
#define __RTMO_TIAVRG_TICK_EXT__
extern uint32 Rtmo_tiAvrg_Tick;
#endif
#endif


/* Exported Variable: Rtmo_tiLoad_u16 */
#ifdef _DAT_H
#ifndef __RTMO_TILOAD_U16_EXT__
#define __RTMO_TILOAD_U16_EXT__
extern uint16 Rtmo_tiLoad_u16;
#endif
#endif


/* Exported Variable: Rtmo_tiMaxCalldist_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TIMAXCALLDIST_TICK_EXT__
#define __RTMO_TIMAXCALLDIST_TICK_EXT__
extern uint32 Rtmo_tiMaxCalldist_Tick;
#endif
#endif


/* Exported Variable: Rtmo_tiMaxLoadRun_u16 */


/* Exported Variable: Rtmo_tiMaxLoad_u16 */


/* Exported Variable: Rtmo_tiMax_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TIMAX_TICK_EXT__
#define __RTMO_TIMAX_TICK_EXT__
extern uint32 Rtmo_tiMax_Tick;
#endif
#endif


/* Exported Variable: Rtmo_tiMinCalldist_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TIMINCALLDIST_TICK_EXT__
#define __RTMO_TIMINCALLDIST_TICK_EXT__
extern uint32 Rtmo_tiMinCalldist_Tick;
#endif
#endif


/* Exported Variable: Rtmo_tiMin_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TIMIN_TICK_EXT__
#define __RTMO_TIMIN_TICK_EXT__
extern uint32 Rtmo_tiMin_Tick;
#endif
#endif


/* Exported Variable: Rtmo_tiSampleDuration_Tick */
#ifdef _DAT_H
#ifndef __RTMO_TISAMPLEDURATION_TICK_EXT__
#define __RTMO_TISAMPLEDURATION_TICK_EXT__
extern uint32 Rtmo_tiSampleDuration_Tick;
#endif
#endif



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
#ifndef DATA_RTMO_DIR_T_DEF
#define DATA_RTMO_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Rtmo_adCalling_u32 ----- */
    uint32 _Rtmo_adCalling_u32;
    /* ----- Parameter Rtmo_adData_u32 ----- */
    uint32 _Rtmo_adData_u32;
    /* ----- Parameter Rtmo_stSampleTime_u8 ----- */
    uint8 _Rtmo_stSampleTime_u8;
    /* ----- Parameter Rtmo_swLoadMode_u8 ----- */
    uint8 _Rtmo_swLoadMode_u8;
    /* ----- Parameter Rtmo_swMode_u8 ----- */
    uint8 _Rtmo_swMode_u8;
    /* ----- Parameter Rtmo_tiIntOverhead_Tick ----- */
    uint32 _Rtmo_tiIntOverhead_Tick;
    /* ----- Parameter Rtmo_tiOverhead_Tick ----- */
    uint32 _Rtmo_tiOverhead_Tick;
} DATA_Rtmo_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Rtmo_dir_t DATA_Rtmo_dir
    __attribute__ ((asection (".pta_datadir_Rtmo","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Rtmo_dir_t * const VECT_Rtmo_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Rtmo","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Rtmo_adCalling_u32 -- */
#ifndef Rtmo_adCalling_u32
#define Rtmo_adCalling_u32 (VECT_Rtmo_dir->_Rtmo_adCalling_u32)
#endif

#ifndef RP_Rtmo_adCalling_u32
#define RP_Rtmo_adCalling_u32 (DATA_Rtmo_dir._Rtmo_adCalling_u32)
#endif

#ifndef __Rtmo_adCalling_u32
#define __Rtmo_adCalling_u32 (VECT_Rtmo_dir->_Rtmo_adCalling_u32)
#endif

/* -- Macro for local Parameter Rtmo_adData_u32 -- */
#ifndef Rtmo_adData_u32
#define Rtmo_adData_u32 (VECT_Rtmo_dir->_Rtmo_adData_u32)
#endif

#ifndef RP_Rtmo_adData_u32
#define RP_Rtmo_adData_u32 (DATA_Rtmo_dir._Rtmo_adData_u32)
#endif

#ifndef __Rtmo_adData_u32
#define __Rtmo_adData_u32 (VECT_Rtmo_dir->_Rtmo_adData_u32)
#endif

/* -- Macro for local Parameter Rtmo_stSampleTime_u8 -- */
#ifndef Rtmo_stSampleTime_u8
#define Rtmo_stSampleTime_u8 (VECT_Rtmo_dir->_Rtmo_stSampleTime_u8)
#endif

#ifndef RP_Rtmo_stSampleTime_u8
#define RP_Rtmo_stSampleTime_u8 (DATA_Rtmo_dir._Rtmo_stSampleTime_u8)
#endif

#ifndef __Rtmo_stSampleTime_u8
#define __Rtmo_stSampleTime_u8 (VECT_Rtmo_dir->_Rtmo_stSampleTime_u8)
#endif

/* -- Macro for local Parameter Rtmo_swLoadMode_u8 -- */
#ifndef Rtmo_swLoadMode_u8
#define Rtmo_swLoadMode_u8 (VECT_Rtmo_dir->_Rtmo_swLoadMode_u8)
#endif

#ifndef RP_Rtmo_swLoadMode_u8
#define RP_Rtmo_swLoadMode_u8 (DATA_Rtmo_dir._Rtmo_swLoadMode_u8)
#endif

#ifndef __Rtmo_swLoadMode_u8
#define __Rtmo_swLoadMode_u8 (VECT_Rtmo_dir->_Rtmo_swLoadMode_u8)
#endif

/* -- Macro for local Parameter Rtmo_swMode_u8 -- */
#ifndef Rtmo_swMode_u8
#define Rtmo_swMode_u8 (VECT_Rtmo_dir->_Rtmo_swMode_u8)
#endif

#ifndef RP_Rtmo_swMode_u8
#define RP_Rtmo_swMode_u8 (DATA_Rtmo_dir._Rtmo_swMode_u8)
#endif

#ifndef __Rtmo_swMode_u8
#define __Rtmo_swMode_u8 (VECT_Rtmo_dir->_Rtmo_swMode_u8)
#endif

/* -- Macro for local Parameter Rtmo_tiIntOverhead_Tick -- */
#ifndef Rtmo_tiIntOverhead_Tick
#define Rtmo_tiIntOverhead_Tick (VECT_Rtmo_dir->_Rtmo_tiIntOverhead_Tick)
#endif

#ifndef RP_Rtmo_tiIntOverhead_Tick
#define RP_Rtmo_tiIntOverhead_Tick (DATA_Rtmo_dir._Rtmo_tiIntOverhead_Tick)
#endif

#ifndef __Rtmo_tiIntOverhead_Tick
#define __Rtmo_tiIntOverhead_Tick (VECT_Rtmo_dir->_Rtmo_tiIntOverhead_Tick)
#endif

/* -- Macro for local Parameter Rtmo_tiOverhead_Tick -- */
#ifndef Rtmo_tiOverhead_Tick
#define Rtmo_tiOverhead_Tick (VECT_Rtmo_dir->_Rtmo_tiOverhead_Tick)
#endif

#ifndef RP_Rtmo_tiOverhead_Tick
#define RP_Rtmo_tiOverhead_Tick (DATA_Rtmo_dir._Rtmo_tiOverhead_Tick)
#endif

#ifndef __Rtmo_tiOverhead_Tick
#define __Rtmo_tiOverhead_Tick (VECT_Rtmo_dir->_Rtmo_tiOverhead_Tick)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _RTMO_DAT_H */
