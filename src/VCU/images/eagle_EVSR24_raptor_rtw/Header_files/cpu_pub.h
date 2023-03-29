/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:cpu_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DCK5KOR$ 
 * $Date______:08.11.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:cpu_pub$ 
 * $Variant___:1.10.2$ 
 * $Revision__:3$ 
 * $Type______:H$ 
 * $State_____:AVAILABLE$ 
 * $Generated_:$ 
 ************************************************************************* 
 * 
 * $UniqueName:$ 
 * $Component_:$ 
 * 
 * 
 ************************************************************************* 
 * List Of Changes 
 * 
 * $History
 * 
 * 1.10.2; 3     08.11.2013 DCK5KOR
 *   RQONE00274297 :
 *    Mapping of APIs RbPtCel_AcquireLock () to Cpu_SuspendInt() and API 
 *   RbPtCel_ReleaseLock() to  Cpu_ResumeInt() in cpu_pub.h file.
 * 
 * 1.10.2; 2     08.11.2013 DCK5KOR
 *   RQONE00274297 :
 *   
 *   Mapping of APIs RbPtCel_AcquireLock () 
 *   to Cpu_SuspendInt() and API RbPtCel_ReleaseLock() to  Cpu_ResumeInt() in 
 *   cpu_pub.h file.
 * 
 * 1.10.2; 1     27.02.2013 GSI4KOR
 *   RQONE00153806 Bugfixes Provided:-
 *   1)In Cpu_DisableSRN macro in cpu_pub.h file, after resetting the SRE bit 
 *   delay specific to controller is provided.
 *   2)In Cpu_ClrntReq macro in cpu_pub.h file, after the SRR bit is cleared, 
 *   SRR bit is checked for synchronization and delay specific to controller is 
 *   provided.
 * 
 * 1.10.2; 0     05.02.2013 GSI4KOR
 *   RQONE00142594 
 *   Bugfixes Provided:-
 *   1)In Cpu_DisableSRN macro in cpu_pub.h file, after resetting the SRE bit 
 *   delay specific to controller is provided.
 *   2)In Cpu_ClrIntReq macro in cpu_pub.h file, after the SRR bit is cleared, 
 *   SRR bit is checked for synchronization and delay specific to controller is 
 *   provided.
 * 
 * 1.10.0; 2     26.04.2010 AHT2FE
 *   Added TC_1793
 * 
 * 1.10.0; 1     16.03.2010 AHT2FE
 *   Added support for TC_1793
 * 
 * 1.10.0; 0     11.02.2010 AHT2FE
 *   RCMS00736171:
 *   Anbindung des ECU-Innentemperaturfuehlers 
 *   und Implementierung einer entsprechenden 
 *   OBD Ueberwachungsstrategie (Anteil HWE 
 *   von C5977)
 * 
 * 1.9.0; 0     24.11.2009 AWL2SI
 *   B_CPU.9.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPU_PUB_H
#define _CPU_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Cpu module - public interface header
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 DEBUG FEATURE: enable Cpu_Suspend/Resume time measurement by setting this define to a value != 0
 */
#ifndef CPU_DEBUG_INTSUSP
#define CPU_DEBUG_INTSUSP   (0)
#endif

/**
 set this to FALSE to be independent from DAMOS (for delivery to external customers)
 */
#ifndef CPU_USE_DAMOS
#define CPU_USE_DAMOS       (TRUE)
#endif

/* define for memlay >= 12.0.0 to be sure that CPU package has the detect debugger bugfix */
#define CPU_DETECT_DEBUGGER_BUGFIXED

/* all inline function are declared as static, so they are always inlined. */
/* consequences: - there is no "linkable" instance of the functions        */
/*               - function pointers to these functions can not be defined */
/** local inline keyword */
#define CPU_INLINE              static __inline__

/* force inlining independent from compiler settings */
#define CPU_INLINE_ALWAYS       __attribute__ (( always_inline ))
#define CPU_INLINE_PROTOTYPE    CPU_INLINE  CPU_INLINE_ALWAYS

/**
 Number of ticks per time units
 */
#define CPU_TICKS_PER_US_U32   (MACHINE_TICKS_PER_US)
#define CPU_TICKS_PER_10US_U32 ((MACHINE_TICKS_PER_US) * 10UL)
#define CPU_TICKS_PER_MS_U32   ((MACHINE_TICKS_PER_US) * 1000UL)
#define CPU_TICKS_PER_S_U32    ((MACHINE_TICKS_PER_US) * 1000000UL)

/**
 ***************************************************************************************************
 * Enforce a sequence point in the code.
 *
 * This macro inserts a "sequence point" in the assembly code generated by the compiler.
 * The optimizer is not allowed to move instructions beyond sequence points while re-ordering.
 ***************************************************************************************************
 */

#define CPU_SET_SEQUENCE_POINT() asm volatile ("" ::: "memory")

/**
 ***************************************************************************************************
 * Conversion macros time <-> ticks.
 ***************************************************************************************************
 */

/* Comparison in overflow check has been changed from ">" to ">=" to avoid QAC warning  */
/* "dangerous comparison of unsigned data with zero" when passing a 0 as parameter.     */
/* The behaviour remains the same, of course.                                           */

/* conversion macros us -> ticks */
#define CPU_US_TO_TIM0TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 0ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 0ULL))
#define CPU_US_TO_TIM1TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 4ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 4ULL))
#define CPU_US_TO_TIM2TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 8ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 8ULL))
#define CPU_US_TO_TIM3TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 12ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 12ULL))
#define CPU_US_TO_TIM4TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 16ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 16ULL))
#define CPU_US_TO_TIM5TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 20ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 20ULL))
#define CPU_US_TO_TIM6TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 32ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_US_U32) >> 32ULL))

/* conversion macros ms -> ticks */
#define CPU_MS_TO_TIM0TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 0ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 0ULL))
#define CPU_MS_TO_TIM1TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 4ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 4ULL))
#define CPU_MS_TO_TIM2TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 8ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 8ULL))
#define CPU_MS_TO_TIM3TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 12ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 12ULL))
#define CPU_MS_TO_TIM4TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 16ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 16ULL))
#define CPU_MS_TO_TIM5TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 20ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 20ULL))
#define CPU_MS_TO_TIM6TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 32ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_MS_U32) >> 32ULL))

/* conversion macros s -> ticks */
#define CPU_S_TO_TIM0TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 0ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 0ULL))
#define CPU_S_TO_TIM1TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 4ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 4ULL))
#define CPU_S_TO_TIM2TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 8ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 8ULL))
#define CPU_S_TO_TIM3TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 12ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 12ULL))
#define CPU_S_TO_TIM4TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 16ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 16ULL))
#define CPU_S_TO_TIM5TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 20ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 20ULL))
#define CPU_S_TO_TIM6TICKS(time)\
  (uint32)(((((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 32ULL) >= 0xFFFFFFFFULL) ? \
  0xFFFFFFFFULL \
  : (((uint64)(time) * (uint64)CPU_TICKS_PER_S_U32) >> 32ULL))

/* define an internal macro for float division with saturation to MAXUINT32 */
#define CPU_FDIV(a,b) ( (((a)/(b))  > (real32)MAXUINT32)  ? MAXUINT32 : (uint32)((a)/(b)) )

/* conversion macros ticks -> us */
#define CPU_TIM0TICKS_TO_US(ticks)\
  (((ticks) / CPU_TICKS_PER_US_U32))
#define CPU_TIM1TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 16.0F, (real32)CPU_TICKS_PER_US_U32))
#define CPU_TIM2TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 256.0F, (real32)CPU_TICKS_PER_US_U32))
#define CPU_TIM3TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 4096.0F, (real32)CPU_TICKS_PER_US_U32))
#define CPU_TIM4TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 65536.0F, (real32)CPU_TICKS_PER_US_U32))
#define CPU_TIM5TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 1048576.0F, (real32)CPU_TICKS_PER_US_U32))
#define CPU_TIM6TICKS_TO_US(ticks)\
  (CPU_FDIV((real32)(ticks) * 4294967296.0F, (real32)CPU_TICKS_PER_US_U32))

/* conversion macros ticks -> ms */
#define CPU_TIM0TICKS_TO_MS(ticks)\
  (((ticks) / CPU_TICKS_PER_MS_U32))
#define CPU_TIM1TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 16.0F, (real32)CPU_TICKS_PER_MS_U32))
#define CPU_TIM2TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 256.0F, (real32)CPU_TICKS_PER_MS_U32))
#define CPU_TIM3TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 4096.0F, (real32)CPU_TICKS_PER_MS_U32))
#define CPU_TIM4TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 65536.0F, (real32)CPU_TICKS_PER_MS_U32))
#define CPU_TIM5TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 1048576.0F, (real32)CPU_TICKS_PER_MS_U32))
#define CPU_TIM6TICKS_TO_MS(ticks)\
  (CPU_FDIV((real32)(ticks) * 4294967296.0F, (real32)CPU_TICKS_PER_MS_U32))

/* conversion macros ticks -> s */
#define CPU_TIM0TICKS_TO_S(ticks)\
  (((ticks) / CPU_TICKS_PER_S_U32))
#define CPU_TIM1TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 16.0F, (real32)CPU_TICKS_PER_S_U32))
#define CPU_TIM2TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 256.0F, (real32)CPU_TICKS_PER_S_U32))
#define CPU_TIM3TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 4096.0F, (real32)CPU_TICKS_PER_S_U32))
#define CPU_TIM4TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 65536.0F, (real32)CPU_TICKS_PER_S_U32))
#define CPU_TIM5TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 1048576.0F, (real32)CPU_TICKS_PER_S_U32))
#define CPU_TIM6TICKS_TO_S(ticks)\
  (CPU_FDIV((real32)(ticks) * 4294967296.0F, (real32)CPU_TICKS_PER_S_U32))


/* shorter names for TIM0 */
#define CPU_US_TO_TICKS CPU_US_TO_TIM0TICKS
#define CPU_MS_TO_TICKS CPU_MS_TO_TIM0TICKS
#define CPU_S_TO_TICKS  CPU_S_TO_TIM0TICKS
#define CPU_TICKS_TO_US CPU_TIM0TICKS_TO_US
#define CPU_TICKS_TO_MS CPU_TIM0TICKS_TO_MS
#define CPU_TICKS_TO_S  CPU_TIM0TICKS_TO_S

/* legacy function name for watchdog service */
#define Cpu_ServeWatchdog      Cpu_Watchdog_Proc

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**
 struct that hold the status of the memory checker hardware.
 This structure is used to realize concurrent memory checker tasks.
 */
typedef struct
{
    uint32 dCRCVal_u32;  /* current CRC32 result */
    bool   stDMA_b;      /* state of DMA channel */
} Cpu_CRCState_t;

/* this is only needed, when debugging of interrupt suspend times is enabled */
typedef struct
{
    uint32 tiMaxIntDis_u32;
    uint32 adMaxIntDis_u32;
} Cpu_DebugInfo_t;

/* cpu monitoring structure */
typedef struct
{
    uint16 rMaxUStackCons_u16;
    uint16 rMaxSStackCons_u16;
    uint16 rMaxCSACons_u16;
} Cpu_NvMon_t;

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern Cpu_DebugInfo_t Cpu_DebugInfo_s;
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern uint8 Cpu_ctIntSuspLvl_u8;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

/*
 ***************************************************************************************************
 * Function Prototypes
 ***************************************************************************************************
 */

/* RAM init function */
__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Cpu_InitRAM(uint32* adDest_pu32, const uint32* adSrc_pcu32, uint32 xSizeDest_u32,
                        uint32 xSizeSrc_u32, uint32 xPattern_u32);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

/* function to modify ENDINIT bit */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cpu_ResetEndinit(void);
extern void Cpu_SetEndinit(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* memory checker functions */
__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void   Cpu_CRCTaskStart(Cpu_CRCState_t* stCRC_ps);
extern void   Cpu_CRCTaskEnd(const Cpu_CRCState_t* stCRC_pcs);
extern uint32 Cpu_CalcCRC(uint32* adBuffer_pu32, uint32 xStartVal_u32, uint32 xSize_u32);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

/* watchdog timeout setup function */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cpu_SetWatchdogTimeout(uint32 tiWatchdog_u32);

/* watchdog timeout read function */
extern uint32 Cpu_GetWatchdogTimeout(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* byte swapping functions */
__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Cpu_SwapByteBuf16(uint8* xBuffer_pu8, uint32 numBytes_u32);
extern void Cpu_SwapByteBuf32(uint8* xBuffer_pu8, uint32 numBytes_u32);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

/* debugger detection */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool Cpu_DetectDebugger(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* CSA/Stack monitoring */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cpu_Mon_ResetMaxValues(void);
extern void Cpu_Mon_GetMaxValues(Cpu_NvMon_t* adMaxValues_pcs);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* CPU Die temperature */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool Cpu_GetDieTempRaw(uint32* RawTemp_pu32);
extern bool Cpu_GetDieTempPhys(sint32* PhysTemp_pu32);
extern uint32 Cpu_DieTemp_GetErrorInfo(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/*
 ***************************************************************************************************
 * Process Prototypes
 ***************************************************************************************************
 */

/* Cpu module initialization process */
__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Cpu_Proc_Ini(void);
extern void Cpu_Proc_IniEnd(void);
extern void Cpu_Mon_Proc_Ini(void);
extern void Cpu_DieTemp_Proc_Ini(void);

/* CSA/Stack monitoring */
extern void Cpu_Mon_Proc(void);

/* Cpu error handling processes */
extern void Cpu_ErrorInt_Proc_Ini(void);
extern void Cpu_ErrorInt_Proc(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

/* watchdog service process */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cpu_Watchdog_Proc(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* CPU die temperature process */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cpu_DieTemp_Proc(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/**
 ***************************************************************************************************
 * Read out a portion of the system timer (STM).
 *
 * Read the specified 32bit sub-timer of the STM.
 * This is implemented as macro to be fast and use minimum ressources.
 *
 * \param TIMER - sub-timer to be read. (Valid values are TIM0 ... TIM6)
 * \return value of subtimer (32 bit)
 ***************************************************************************************************
 */

#define Cpu_GetSysTimePart(TIMER) Cpu_Get##TIMER

#define Cpu_GetTIM0 STM.TIM0
#define Cpu_GetTIM1 STM.TIM1
#define Cpu_GetTIM2 STM.TIM2
#define Cpu_GetTIM3 STM.TIM3
#define Cpu_GetTIM4 STM.TIM4
#define Cpu_GetTIM5 STM.TIM5
#define Cpu_GetTIM6 STM.TIM6

/**
 ***************************************************************************************************
 * Disable CPU interrupts globally.
 *
 * MDG1 macro - mapped to Cpu_SuspendInt
 ***************************************************************************************************
 */
 
#define RbPtCel_AcquireLock() Cpu_SuspendInt()


/**
 ***************************************************************************************************
 * Enable CPU interrupts globally.
 *
 * MDG1 macro - mapped to Cpu_ResumeInt
 ***************************************************************************************************
 */
 
#define RbPtCel_ReleaseLock() Cpu_ResumeInt()
/**
 ***************************************************************************************************
 * Read out the timer that is the basis for system ticks.
 *
 * This macro returns the 32bit system tick value that can be processed with the
 * CPU_x_TO_TICKS and CPU_TICKS_TO_x macros.
 *
 * \return value of system tick timer
 ***************************************************************************************************
 */

#define Cpu_GetSysTicks() Cpu_GetTIM0

/**
 ***************************************************************************************************
 * Disable CPU interrupts globally.
 *
 * Legacy macro - mapped to Cpu_SuspendInt
 ***************************************************************************************************
 */

#define Cpu_DisableInt()    Cpu_SuspendInt()
/**
 ***************************************************************************************************
 * Enable CPU interrupts globally.
 *
 * Legacy macro - mapped to Cpu_ResumeInt
 ***************************************************************************************************
 */

#define Cpu_EnableInt()     Cpu_ResumeInt()

/**
 ***************************************************************************************************
 * Disable CPU interrupts globally.
 *
 * GS standard macro - mapped to Cpu_SuspendInt
 *
 * Macro is defined with trailing semicolon, as it is used without semicolon in current
 * implementations in GS application SW.
 ***************************************************************************************************
 */

#define STD_SUSPEND_INTERRUPTS    Cpu_SuspendInt();

/**
 ***************************************************************************************************
 * Enable CPU interrupts globally.
 *
 * GS standard macro - mapped to Cpu_ResumeInt
 *
 * Macro is defined with trailing semicolon, as it is used without semicolon in current
 * implementations in GS application SW.
 ***************************************************************************************************
 */

#define STD_RESUME_INTERRUPTS     Cpu_ResumeInt();

/**
 ***************************************************************************************************
 * Suspend CPU interrupts.
 *
 * This macro stores the state of the global CPU interrupt enable flag and disables the interrupts.
 * Interrupts routed to the PCP interrupt system are not affected by this operation!
 * The "memory" clobber in the asm statement inserts a sequence point into the code and prevents
 * the compiler from re-ordering memory accesses in a unwanted manner.
 *
 * \seealso Cpu_ResumeInt()
 ***************************************************************************************************
 */

#if (CPU_DEBUG_INTSUSP == 0)
/* IGNORE RULE 0845:    Macro is already defined in C:\toolbase\qac\xxx\Scripts\qac_medc17_p_c.tpl
                        This was done to avoid warnings about this macro in other modules.
                        So the warning Redefinition of object-like macro as a function-like macro
                        is not correct here.
*/
#define Cpu_SuspendInt()                                                                           \
{                                                                                                  \
    /* we use a very long variable name to reduce the probability that the local variable */       \
    /* is eclipsed by any variable defined in the application code.                       */       \
    uint32 stPreviousStateOfCpuIntSystem_u32;                                                      \
    /* MISRA RULE 5 VIOLATION: use of character necessary for asm instruction */                   \
    asm volatile ("mfcr %0, $icr ; disable":"=d" (stPreviousStateOfCpuIntSystem_u32)::"memory");   \
/* IGNORE RULE 3411:    To balance Cpu_SuspendInt and Cpu_ResumeInt unbalanced brackets are used */\
    do { } while(0) /* this ugly statement is necessary to cheat MISRA checker */
#else
/* IGNORE RULE 0845:    Macro is already defined in C:\toolbase\qac\xxx\Scripts\qac_medc17_p_c.tpl
                        This was done to avoid warnings about this macro in other modules.
                        So the warning Redefinition of object-like macro as a function-like macro
                        is not correct here.
*/
#define Cpu_SuspendInt()                                                                           \
{                                                                                                  \
    /* local var to measure the interrupt disable time */                                          \
    uint32 tiCurrIntDis_u32;                                                                       \
    /* we use a very long variable name to reduce the probability that the local variable */       \
    /* is eclipsed by any variable defined in the application code.                       */       \
    uint32 stPreviousStateOfCpuIntSystem_u32;                                                      \
    asm volatile ("mfcr %0, $icr ; disable":"=d" (stPreviousStateOfCpuIntSystem_u32)::"memory");   \
    tiCurrIntDis_u32 = Cpu_GetSysTimePart(TIM0);                                                   \
    /* increment interrupt suspend level counter */                                                \
    Cpu_ctIntSuspLvl_u8++;                                                                         \
    CPU_SET_SEQUENCE_POINT();                                                                      \
/* IGNORE RULE 3411:    To balance Cpu_SuspendInt and Cpu_ResumeInt unbalanced brackets are used */\
    do { } while(0) /* this ugly statement is necessary to cheat MISRA checker */
#endif

/**
 ***************************************************************************************************
 * Resume CPU interrupt status.
 *
 * This macro sets the state of the CPU interrupt system to its previous state.
 * Interrupts routed to the PCP interrupt system are not affected by this operation!
 * The "memory" clobber in the asm statement inserts a sequence point into the code and prevents
 * the compiler from re-ordering memory accesses in a unwanted manner.
 *
 * \seealso Cpu_SuspendInt()
 ***************************************************************************************************
 */

#if (CPU_DEBUG_INTSUSP == 0)
/* IGNORE RULE 0845:    Macro is already defined in C:\toolbase\qac\xxx\Scripts\qac_medc17_p_c.tpl
                        This was done to avoid warnings about this macro in other modules.
                        So the warning Redefinition of object-like macro as a function-like macro
                        is not correct here.
*/
#define Cpu_ResumeInt()                                                                            \
    /* enable interrupt system only, if it was enabled prior to calling Cpu_SuspendInt() */        \
    asm volatile ("jz.t %0,8,0f; enable; 0:"::"d" (stPreviousStateOfCpuIntSystem_u32):"memory");   \
/* IGNORE RULE 3411:    To balance Cpu_SuspendInt and Cpu_ResumeInt unbalanced brackets are used */\
} do { } while(0) /* this ugly statement is necessary to cheat MISRA checker */
#else
/* IGNORE RULE 0845:    Macro is already defined in C:\toolbase\qac\xxx\Scripts\qac_medc17_p_c.tpl
                        This was done to avoid warnings about this macro in other modules.
                        So the warning Redefinition of object-like macro as a function-like macro
                        is not correct here.
*/
#define Cpu_ResumeInt()                                                                            \
    CPU_SET_SEQUENCE_POINT();                                                                      \
    /* measure current disable time */                                                             \
    tiCurrIntDis_u32 = Cpu_GetSysTimePart(TIM0) - tiCurrIntDis_u32;                                \
    /* decrement interrupt suspend level counter */                                                \
    Cpu_ctIntSuspLvl_u8--;                                                                         \
    /* ignore disable times > 1s (may be caused by halt/go in debugger) */                         \
    if (tiCurrIntDis_u32 < CPU_S_TO_TICKS(1UL))                                                    \
    {                                                                                              \
        /* check if current value is new maximum */                                                \
        if (tiCurrIntDis_u32 > Cpu_DebugInfo_s.tiMaxIntDis_u32)                                    \
        {                                                                                          \
            /* store disable time */                                                               \
            Cpu_DebugInfo_s.tiMaxIntDis_u32 = tiCurrIntDis_u32;                                    \
            /* store program counter of caller for tracking purposes */                            \
            asm volatile ("mfcr %0, $pc":"=d" (Cpu_DebugInfo_s.adMaxIntDis_u32) : : "memory" );    \
        }                                                                                          \
    }                                                                                              \
    /* enable interrupt system only, if it was enabled prior to calling Cpu_SuspendInt() */        \
    asm volatile ("jz.t %0,8,0f; enable; 0:"::"d" (stPreviousStateOfCpuIntSystem_u32):"memory");   \
/* IGNORE RULE 3411:    To balance Cpu_SuspendInt and Cpu_ResumeInt unbalanced brackets are used */\
} do { } while(0) /* this ugly statement is necessary to cheat MISRA checker */
#endif

/**
 ***************************************************************************************************
 * Enable interrupt service request node.
 *
 * This macro sets the enable enable flag of a specific SRN.
 * The "memory" clobber in the asm statement inserts a sequence point into the code and prevents
 * the compiler from re-ordering memory accesses in a unwanted manner.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \seealso Cpu_DisableSRN
 ***************************************************************************************************
 */

#define Cpu_EnableSRN(SRC_REGISTER)     asm volatile ("":::"memory");   \
                                        ((SRC_REGISTER) |= SRE);        \
                                        asm volatile ("":::"memory")

/**
 ***************************************************************************************************
 * Disable interrupt service request node.
 *
 * This macro resets the enable enable flag of a specific SRN.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \seealso Cpu_DisableSRN
 ***************************************************************************************************
 */
 /*This macro provides a delay of 11 NOPs														  */
 
#define Cpu_NopDelay_DisableSRN	    _nop();														   \
									_nop();                                                        \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();														   \
									_nop();
/**
 ***************************************************************************************************
 * Disable interrupt service request node.
 *
 * This macro resets the enable enable flag of a specific SRN.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \seealso Cpu_DisableSRN
 ***************************************************************************************************
 */
 

/* Check the machine type and set the delay depending on the machine type                         */ 
/* A delay of 11 FPI cycles is required to ensure that the pending arbitration is completed       */
/* For controllers where Ffpi=FCpu/2 the delay provided is 22 NOPS                                */

#if ((MACHINE_TYPE == TC_1797)||(MACHINE_TYPE == TC_1782)||(MACHINE_TYPE == TC_1767)||(MACHINE_TYPE == TC_1796)||(MACHINE_TYPE == TC_1792))
#define Cpu_DisableSRN(SRC_REGISTER)    asm volatile ("":::"memory");  						       \
    ((SRC_REGISTER) &= ~SRE);      																   \
	Cpu_NopDelay_DisableSRN;																	   \
    Cpu_NopDelay_DisableSRN;   		                                                               \
	asm volatile ("":::"memory")
/* For controllers where Ffpi=FCpu the delay provided is 11 NOPS                                  */
#elif ((MACHINE_TYPE == TC_1724)||(MACHINE_TYPE == TC_1766))
#define Cpu_DisableSRN(SRC_REGISTER)    asm volatile ("":::"memory");  						       \
    ((SRC_REGISTER) &= ~SRE);      																   \
	Cpu_NopDelay_DisableSRN;																	   \
 	asm volatile ("":::"memory")
/* For controllers where Ffpi=FCpu/3 the delay provided is 33 NOPS                                */
#elif ((MACHINE_TYPE == TC_1793))
#define Cpu_DisableSRN(SRC_REGISTER)    asm volatile ("":::"memory");  				        	   \
    ((SRC_REGISTER) &= ~SRE);      																   \
	Cpu_NopDelay_DisableSRN;																	   \
    Cpu_NopDelay_DisableSRN;  		                                                               \
	Cpu_NopDelay_DisableSRN;  		                                                               \
	asm volatile ("":::"memory")
#endif
																   																								   
/**
 ***************************************************************************************************
 * Set interrupt request of an interrupt service request node.
 *
 * This macro sets the "request set bit" of a specific SRN.
 * The "memory" clobber in the asm statement inserts a sequence point into the code and prevents
 * the compiler from re-ordering memory accesses in a unwanted manner.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \seealso Cpu_ClrIntReq
 ***************************************************************************************************
 */

#define Cpu_SetIntReq(SRC_REGISTER)     asm volatile ("":::"memory");   \
                                        ((SRC_REGISTER) |= SETR);       \
                                        asm volatile ("":::"memory")

/**
 ***************************************************************************************************
 * Clear interrupt request of an interrupt service request node.
 *
 * This macro clears the "request set bit" of a specific SRN.
 * The "memory" clobber in the asm statement inserts a sequence point into the code and prevents
 * the compiler from re-ordering memory accesses in a unwanted manner.
 * After the clearing of "the request set bit" of the specific SRN a machine dependent delays is introduced.
 * \param SRC_REGISTER - service request control register of SRN
 * \seealso Cpu_SetIntReq
 ***************************************************************************************************
 */
/* A delay of 11 FPI cycles is required to ensure that the pending arbitration is completed    */
/* For controllers where Ffpi=FCpu/2 the delay provided is 22 NOPS                             */

#if ((MACHINE_TYPE == TC_1797)||(MACHINE_TYPE == TC_1782)||(MACHINE_TYPE == TC_1767)||(MACHINE_TYPE == TC_1796)||(MACHINE_TYPE == TC_1792))
#define Cpu_ClrIntReq(SRC_REGISTER)   	asm volatile ("":::"memory");   						   \
	((SRC_REGISTER) |= CLRR);										       					       \
	((bool)(((SRC_REGISTER) & SRR) != 0UL));                                                       \
	Cpu_NopDelay_DisableSRN;																	   \
    Cpu_NopDelay_DisableSRN;   		                                                               \
	asm volatile ("":::"memory")
/* For controllers where Ffpi=FCpu the delay provided is 11 NOPS                                  */
#elif ((MACHINE_TYPE == TC_1724)||(MACHINE_TYPE == TC_1766))
#define Cpu_ClrIntReq(SRC_REGISTER)     asm volatile ("":::"memory");							   \
	((SRC_REGISTER) |= CLRR);										       					       \
	((bool)(((SRC_REGISTER) & SRR) != 0UL));                                                       \
	Cpu_NopDelay_DisableSRN;																	   \
 	asm volatile ("":::"memory")
/* For controllers where Ffpi=FCpu/3 the delay provided is 33 NOPS                                */
#elif ((MACHINE_TYPE == TC_1793))
#define Cpu_ClrIntReq(SRC_REGISTER)     asm volatile ("":::"memory");   						   \
    ((SRC_REGISTER) |= CLRR);										       					       \
	((bool)(((SRC_REGISTER) & SRR) != 0UL));                                                       \
	Cpu_NopDelay_DisableSRN;																	   \
    Cpu_NopDelay_DisableSRN;                                                                       \
    Cpu_NopDelay_DisableSRN;                                                                       \
	asm volatile ("":::"memory")
#endif


/**
 ***************************************************************************************************
 * Return interrupt pending flag of an interrupt service request node.
 *
 * This macro returns the "service request flag" of a specific SRN which shows, if an interrupt
 * request is pending.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \return interrupt pending status
 * \retval TRUE - interrupt is pending
 * \retval FALSE - no interrupt pending
 ***************************************************************************************************
 */

#define Cpu_IsIntPending(SRC_REGISTER) ((bool)(((SRC_REGISTER) & SRR) != 0UL))

/**
 ***************************************************************************************************
 * Set service request priority number of a service request node.
 *
 * This macro sets a SRNs service request priority.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \param PRIO - service request priority number
 ***************************************************************************************************
 */

#define Cpu_SetSRNPrio(SRC_REGISTER,PRIO)                                     \
{                                                                             \
    uint32 xTempSrcReg_u32 = (SRC_REGISTER);                                  \
    (SRC_REGISTER) = ( (xTempSrcReg_u32 & ~SRPN_MSK) | ((PRIO) & SRPN_MSK) ); \
} do {} while(0)

/**
 ***************************************************************************************************
 * Set service request priority number and TOS (type of service) of a service request node.
 *
 * This macro sets a SRNs service request priority and the type of service (TOS) bitfield.
 *
 * \param SRC_REGISTER - service request control register of SRN
 * \param PRIO - service request priority number
 * \param TOS  - type of service
 ***************************************************************************************************
 */

#define CPU_PRIO_TOS_MSK (SRPN_MSK | TOS_MSK)

#define Cpu_SetSRNPrioTOS(SRC_REGISTER,PRIO,TOS)                    \
{                                                                   \
    uint32 xTempSrcReg_u32 = (SRC_REGISTER);                        \
    (SRC_REGISTER) = ( (xTempSrcReg_u32 & ~CPU_PRIO_TOS_MSK)        \
                    | ((PRIO) & SRPN_MSK)                   \
                    | ( ((TOS) << 10ul) & TOS_MSK ) );      \
} do {} while(0)

/**
 ***************************************************************************************************
 * Read out the Chip Revision Number.
 *
 * Extract the Chip Revision Number from the CHIPID register.
 * This number indicates the revision number of the Tricore device (01H = first revision).
 * This number can be used e.g. for major step identification purposes. 
 * The value of this number is defined in the Tricore Data Sheet.
 *
 * \return Chip Revision Number
 ***************************************************************************************************
 */

#define Cpu_GetRev() ((uint8)(SCU.CHIPID & REV_MSK))

/**
 ***************************************************************************************************
 * Read out the Chip Identification Number.
 *
 * Extract the Chip Identification Number from the CHIPID register.
 * This value defines the product by a unique number.
 *
 * \return Chip Identification Number
 ***************************************************************************************************
 */

#define Cpu_GetID()  ((uint8)((SCU.CHIPID & MOD_MSK) >> 8UL))

/**
 ***************************************************************************************************
 * Set start value of CRC32 calculation.
 *
 * This macro sets the start value for CRC32 calculation with memory checker by writing the
 * desired value to the memory checker's result register.
 *
 * \param VALUE - desired start value for CRC32 calculation
 ***************************************************************************************************
 */

#define Cpu_SetCRCStart(VALUE) (MCHK.RR = (VALUE))

/**
 ***************************************************************************************************
 * Compute CRC32 checksum.
 *
 * This macro calculates a CRC32 checksum using the current content of the memory checker
 * result register and the new value passed as a parameter to the function.
 *
 * \param VALUE - new value for CRC32 checksum calculation
 ***************************************************************************************************
 */

#define Cpu_DoCRC(VALUE) (MCHK.IR = (VALUE))

/**
 ***************************************************************************************************
 * Get CRC32 result.
 *
 * This macro retrieves the result of a CRC32 calculation from the memory checker's result
 * register.
 *
 * \return CRC32 checksum result (32 bits wide)
 ***************************************************************************************************
 */

#define Cpu_GetCRC() (MCHK.RR)

/**
 ***************************************************************************************************
 * Check for presence of emulation device extension (ED).
 *
 * This macro checks the SFR bit that indicates the presence of an ED extension.
 *
 * \return presence of ED extension
 * \retval TRUE  - the processor is an ED (emulation device)
 * \retval FALSE - the processor is a mass production device without high-end calibration support
 ***************************************************************************************************
 */
#if((MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1766))
  #define Cpu_IsED() (Reg_GetBit(SCU, STAT, STAT_EEA))
#elif(  (MACHINE_TYPE == TC_1724) \
     || (MACHINE_TYPE == TC_1767) \
     || (MACHINE_TYPE == TC_1782) \
     || (MACHINE_TYPE == TC_1793) \
     || (MACHINE_TYPE == TC_1797))
  #define Cpu_IsED() (Reg_GetBit(SCU, CHIPID, CHIPID_EEA))
#else
  #error "MACHINE_TYPE not supported"
#endif

/**
 ***************************************************************************************************
 * TC1796/66: Return status of NMI (non-maskable interrupt).
 * TC1797/67: Return status of WDT Trapdis enable
 *
 * This macro checks, whether NMI/WDT is enabled and returns true in this case.
 *
 * \return state of NMI/WDT
 * \retval TRUE  - the non-maskable interrupt/WDT is enabled
 * \retval FALSE - the non-maskable interrupt/WDT is disabled
 ***************************************************************************************************
 */

#if((MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1766))
  #define Cpu_GetNMIENState() (Reg_GetBit(SCU, CON, CON_NMIEN))
  #define Cpu_GetWDTENState() (Reg_GetBit(SCU, CON, CON_NMIEN))
#elif(  (MACHINE_TYPE == TC_1724) \
     || (MACHINE_TYPE == TC_1767) \
     || (MACHINE_TYPE == TC_1782) \
     || (MACHINE_TYPE == TC_1793) \
     || (MACHINE_TYPE == TC_1797))
  /* Macro Cpu_GetNMIENState() is deprecated, don't use it anymore. */
  /* In later versions of CPU-Module this macro maybe removed. */
  /* Todo: Remove Macro Cpu_GetNMIENState(), at least for TC17x7. TC17x7 has no "NMI". */
  /* (very likely only SYC uses this macro) */
  #define Cpu_GetNMIENState() (!Reg_GetBit(SCU, TRAPDIS, TRAPDIS_WDTT))
  #define Cpu_GetWDTENState() (!Reg_GetBit(SCU, TRAPDIS, TRAPDIS_WDTT))
#else
  #error "MACHINE_TYPE not supported"
#endif


/**
 ***************************************************************************************************
 * Return debugger activity status.
 *
 * This macro checks, whether the ECU is in debug mode, that is if debugger is attached and active.
 *
 * \return debugger state
 * \retval TRUE  - the debugger is attached and active
 * \retval FALSE - the debugger is disconnected or inactive
 ***************************************************************************************************
 */

#define Cpu_GetDebugActState() (Cpu_DetectDebugger())

/**
 ***************************************************************************************************
 * Interface for OBS HAL.
 *
 * This macros are used by the OBS HAL to access the CPU DIE Temperature functions
 *
 ***************************************************************************************************
 */
#define Cpu_ObsGetTemperature(device,channel,val)      Cpu_GetDieTempPhys(val)
#define Cpu_ObsGetTemperatureRaw(device,channel,val)   Cpu_GetDieTempRaw(val)
#define Cpu_ObsGetErrorInfoTemperature(device,channel) Cpu_DieTemp_GetErrorInfo()

/* end of #ifdef block - _CPU_PUB_H */
#endif
