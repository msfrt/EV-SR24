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
 * $Filename__:srvb_timer.h$
 *
 * $Author____:VKA2FE$
 *
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:VKA2FE$
 * $Date______:31.01.2011$
 * $Class_____:SWHDR$
 * $Name______:srvb_timer$
 * $Variant___:1.14.3$
 * $Revision__:0$
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
 * 1.14.3; 0     31.01.2011 VKA2FE
 *   Removal of a nested comment
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _SRVB_TIMER_H
#define _SRVB_TIMER_H


/*
 ************************************************************************************************************************
 * external variables
 ************************************************************************************************************************
 */

__PRAGMA_USE__srv__1_5ms__InitRAM__x8__START
extern uint8 SrvB_tiSWTmr10msU8;
extern uint8 SrvB_tiSWTmr100msU8;
__PRAGMA_USE__srv__1_5ms__InitRAM__x8__END

__PRAGMA_USE__srv__1_5ms__RAM__x8__START
extern uint8 SrvB_tiTmpTmrU8;
__PRAGMA_USE__srv__1_5ms__RAM__x8__END

__PRAGMA_USE__srv__1_5ms__InitRAM__x16__START
extern sint16 SrvB_tiSWTmrS16; /* extern ref. to 16 bit reference time */
__PRAGMA_USE__srv__1_5ms__InitRAM__x16__END

__PRAGMA_USE__srv__1_5ms__InitRAM__x32__START
extern sint32 SrvB_tiSWTmrS32; /* extern ref. to 32 bit reference time */
__PRAGMA_USE__srv__1_5ms__InitRAM__x32__END


/*
 ************************************************************************************************************************
 * Type definition
 ************************************************************************************************************************
 */

/** 16-bit HW-timer struct */
typedef struct
{
    sint16 tiStrd; /* stored timer-value */

} SrvB_HWTmrS16_t;


/** 32-bit HW-timer struct */
typedef struct
{
    sint32 tiStrd; /* stored timer-value */

} SrvB_HWTmrS32_t;


/** 8-bit SW-timer struct */
typedef struct
{
    uint8 tiStrd;       /* stored timer-value */
} SrvB_SWTmr10msU8_t, SrvB_SWTmr100msU8_t;


/** 16-bit SW-timer struct */
typedef struct
{
    sint16 tiStrd;      /* stored timer-value */
} SrvB_SWTmrS16_t;


/** 32-bit SW-timer struct */
typedef struct
{
    sint32 tiStrd;      /* stored timer-value */
} SrvB_SWTmrS32_t;


/*
 ************************************************************************************************************************
 * configurations
 ************************************************************************************************************************
 */


/* SRVB_SWTMRINC10MSINI_LOCATION *************************************************************************************/
#if   (SRVB_SWTMRINC10MSINI_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SWTmrInc_10ms_Ini(void);

#elif (SRVB_SWTMRINC10MSINI_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'The ini function SrvB_SWTmrInc_10ms_Ini can\'t be inlined: Configuration not supported'

#elif (SRVB_SWTMRINC10MSINI_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SWTmrInc_10ms_Ini(void));

#else

    #error >>>> 'Configuration for SrvB_SWTmrInc_10ms_Ini not supported'

/* SRVB_SWTMRINC10MSINI_LOCATION */
#endif

/* SRVB_SWTMRINC10MSPROC_LOCATION *************************************************************************************/
#if   (SRVB_SWTMRINC10MSPROC_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SWTmrInc_10ms_Proc(void);

#elif (SRVB_SWTMRINC10MSPROC_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'The process SrvB_SWTmrInc_10ms_Proc can\'t be inlined: Configuration not supported'

#elif (SRVB_SWTMRINC10MSPROC_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SWTmrInc_10ms_Proc(void));

#else

    #error >>>> 'Configuration for SrvB_SWTmrInc_10ms_Proc not supported'

/* SRVB_SWTMRINC10MSPROC_LOCATION */
#endif

/*** SRVB_GETHWTMRS16_LOCATION ***/
#if (SRVB_GETHWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_GetHWTmrS16(void);

#elif (SRVB_GETHWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetHWTmrS16 SrvB_GetHWTmrS16_inline

#elif (SRVB_GETHWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_GetHWTmrS16(void));

#else
    #error >>>> 'Configuration for SrvB_GetHWTmrS16 is not supported'

/* SRVB_GETHWTMRS16_LOCATION */
#endif

/*** SRVB_STARTHWTMRS16_LOCATION ***/
#if (SRVB_STARTHWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartHWTmrS16(SrvB_HWTmrS16_t* tmrPtr);

#elif (SRVB_STARTHWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartHWTmrS16 SrvB_StartHWTmrS16_inline

#elif (SRVB_STARTHWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartHWTmrS16(SrvB_HWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartHWTmrS16 is not supported'

/* SRVB_STARTHWTMRS16_LOCATION */
#endif

/*** SRVB_STOPHWTMRS16_LOCATION ***/
#if (SRVB_STOPHWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopHWTmrS16(SrvB_HWTmrS16_t* tmrPtr);

#elif (SRVB_STOPHWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopHWTmrS16 SrvB_StopHWTmrS16_inline

#elif (SRVB_STOPHWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopHWTmrS16(SrvB_HWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopHWTmrS16 is not supported'

/* SRVB_STOPHWTMRS16_LOCATION */
#endif

/*** SRVB_TESTHWTMRS16_LOCATION ***/
#if (SRVB_TESTHWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestHWTmrS16(const SrvB_HWTmrS16_t* tmrPtr);

#elif (SRVB_TESTHWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestHWTmrS16 SrvB_TestHWTmrS16_inline

#elif (SRVB_TESTHWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestHWTmrS16(const SrvB_HWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestHWTmrS16 is not supported'

/* SRVB_TESTHWTMRS16_LOCATION */
#endif

/*** SRVB_DIFFHWTMRS16_LOCATION ***/
#if (SRVB_DIFFHWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_DiffHWTmrS16(const SrvB_HWTmrS16_t* tmrPtr);

#elif (SRVB_DIFFHWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffHWTmrS16 SrvB_DiffHWTmrS16_inline

#elif (SRVB_DIFFHWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_DiffHWTmrS16(const SrvB_HWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffHWTmrS16 is not supported'

/* SRVB_DIFFHWTMRS16_LOCATION */
#endif

/*** SRVB_GETHWTMRS32_LOCATION ***/
#if (SRVB_GETHWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_GetHWTmrS32(void);

#elif (SRVB_GETHWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetHWTmrS32 SrvB_GetHWTmrS32_inline

#elif (SRVB_GETHWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_GetHWTmrS32(void));

#else
    #error >>>> 'Configuration for SrvB_GetHWTmrS32 is not supported'

/* SRVB_GETHWTMRS32_LOCATION */
#endif

/*** SRVB_STARTHWTMRS32_LOCATION ***/
#if (SRVB_STARTHWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartHWTmrS32(SrvB_HWTmrS32_t* tmrPtr);

#elif (SRVB_STARTHWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartHWTmrS32 SrvB_StartHWTmrS32_inline

#elif (SRVB_STARTHWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartHWTmrS32(SrvB_HWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartHWTmrS32 is not supported'

/* SRVB_STARTHWTMRS32_LOCATION */
#endif

/*** SRVB_STOPHWTMRS32_LOCATION ***/
#if (SRVB_STOPHWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopHWTmrS32(SrvB_HWTmrS32_t* tmrPtr);

#elif (SRVB_STOPHWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopHWTmrS32 SrvB_StopHWTmrS32_inline

#elif (SRVB_STOPHWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopHWTmrS32(SrvB_HWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopHWTmrS32 is not supported'

/* SRVB_STOPHWTMRS32_LOCATION */
#endif

/*** SRVB_TESTHWTMRS32_LOCATION ***/
#if (SRVB_TESTHWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestHWTmrS32(const SrvB_HWTmrS32_t* tmrPtr);

#elif (SRVB_TESTHWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestHWTmrS32 SrvB_TestHWTmrS32_inline

#elif (SRVB_TESTHWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestHWTmrS32(const SrvB_HWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestHWTmrS32 is not supported'

/* SRVB_TESTHWTMRS32_LOCATION */
#endif

/*** SRVB_DIFFHWTMRS32_LOCATION ***/
#if (SRVB_DIFFHWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_DiffHWTmrS32(const SrvB_HWTmrS32_t* tmrPtr);

#elif (SRVB_DIFFHWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffHWTmrS32 SrvB_DiffHWTmrS32_inline

#elif (SRVB_DIFFHWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_DiffHWTmrS32(const SrvB_HWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffHWTmrS32 is not supported'

/* SRVB_DIFFHWTMRS32_LOCATION */
#endif

/*** SRVB_GETSWTMR10MSU8_LOCATION ***/
#if (SRVB_GETSWTMR10MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_GetSWTmr10msU8(void);

#elif (SRVB_GETSWTMR10MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetSWTmr10msU8 SrvB_GetSWTmr10msU8_inline

#elif (SRVB_GETSWTMR10MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_GetSWTmr10msU8(void));

#else
    #error >>>> 'Configuration for SrvB_GetSWTmr10msU8 is not supported'

/* SRVB_GETSWTMR10MSU8_LOCATION */
#endif

/*** SRVB_STARTSWTMR10MSU8_LOCATION ***/
#if (SRVB_STARTSWTMR10MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartSWTmr10msU8(SrvB_SWTmr10msU8_t* tmrPtr);

#elif (SRVB_STARTSWTMR10MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartSWTmr10msU8 SrvB_StartSWTmr10msU8_inline

#elif (SRVB_STARTSWTMR10MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartSWTmr10msU8(SrvB_SWTmr10msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartSWTmr10msU8 is not supported'

/* SRVB_STARTSWTMR10MSU8_LOCATION */
#endif

/*** SRVB_STOPSWTMR10MSU8_LOCATION ***/
#if (SRVB_STOPSWTMR10MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopSWTmr10msU8(SrvB_SWTmr10msU8_t* tmrPtr);

#elif (SRVB_STOPSWTMR10MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopSWTmr10msU8 SrvB_StopSWTmr10msU8_inline

#elif (SRVB_STOPSWTMR10MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopSWTmr10msU8(SrvB_SWTmr10msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopSWTmr10msU8 is not supported'

/* SRVB_STOPSWTMR10MSU8_LOCATION */
#endif

/*** SRVB_TESTSWTMR10MSU8_LOCATION ***/
#if (SRVB_TESTSWTMR10MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestSWTmr10msU8(const SrvB_SWTmr10msU8_t* tmrPtr);

#elif (SRVB_TESTSWTMR10MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestSWTmr10msU8 SrvB_TestSWTmr10msU8_inline

#elif (SRVB_TESTSWTMR10MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestSWTmr10msU8(const SrvB_SWTmr10msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestSWTmr10msU8 is not supported'

/* SRVB_TESTSWTMR10MSU8_LOCATION */
#endif

/*** SRVB_DIFFSWTMR10MSU8_LOCATION ***/
#if (SRVB_DIFFSWTMR10MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_DiffSWTmr10msU8(const SrvB_SWTmr10msU8_t* tmrPtr);

#elif (SRVB_DIFFSWTMR10MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffSWTmr10msU8 SrvB_DiffSWTmr10msU8_inline

#elif (SRVB_DIFFSWTMR10MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_DiffSWTmr10msU8(const SrvB_SWTmr10msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffSWTmr10msU8 is not supported'

/* SRVB_DIFFSWTMR10MSU8_LOCATION */
#endif

/*** SRVB_GETSWTMR100MSU8_LOCATION ***/
#if (SRVB_GETSWTMR100MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_GetSWTmr100msU8(void);

#elif (SRVB_GETSWTMR100MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetSWTmr100msU8 SrvB_GetSWTmr100msU8_inline

#elif (SRVB_GETSWTMR100MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_GetSWTmr100msU8(void));

#else
    #error >>>> 'Configuration for SrvB_GetSWTmr100msU8 is not supported'

/* SRVB_GETSWTMR100MSU8_LOCATION */
#endif

/*** SRVB_STARTSWTMR100MSU8_LOCATION ***/
#if (SRVB_STARTSWTMR100MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartSWTmr100msU8(SrvB_SWTmr100msU8_t* tmrPtr);

#elif (SRVB_STARTSWTMR100MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartSWTmr100msU8 SrvB_StartSWTmr100msU8_inline

#elif (SRVB_STARTSWTMR100MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartSWTmr100msU8(SrvB_SWTmr100msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartSWTmr100msU8 is not supported'

/* SRVB_STARTSWTMR100MSU8_LOCATION */
#endif

/*** SRVB_STOPSWTMR100MSU8_LOCATION ***/
#if (SRVB_STOPSWTMR100MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopSWTmr100msU8(SrvB_SWTmr100msU8_t* tmrPtr);

#elif (SRVB_STOPSWTMR100MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopSWTmr100msU8 SrvB_StopSWTmr100msU8_inline

#elif (SRVB_STOPSWTMR100MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopSWTmr100msU8(SrvB_SWTmr100msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopSWTmr100msU8 is not supported'

/* SRVB_STOPSWTMR100MSU8_LOCATION */
#endif

/*** SRVB_TESTSWTMR100MSU8_LOCATION ***/
#if (SRVB_TESTSWTMR100MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestSWTmr100msU8(const SrvB_SWTmr100msU8_t* tmrPtr);

#elif (SRVB_TESTSWTMR100MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestSWTmr100msU8 SrvB_TestSWTmr100msU8_inline

#elif (SRVB_TESTSWTMR100MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestSWTmr100msU8(const SrvB_SWTmr100msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestSWTmr100msU8 is not supported'

/* SRVB_TESTSWTMR100MSU8_LOCATION */
#endif

/*** SRVB_DIFFSWTMR100MSU8_LOCATION ***/
#if (SRVB_DIFFSWTMR100MSU8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_DiffSWTmr100msU8(const SrvB_SWTmr100msU8_t* tmrPtr);

#elif (SRVB_DIFFSWTMR100MSU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffSWTmr100msU8 SrvB_DiffSWTmr100msU8_inline

#elif (SRVB_DIFFSWTMR100MSU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_DiffSWTmr100msU8(const SrvB_SWTmr100msU8_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffSWTmr100msU8 is not supported'

/* SRVB_DIFFSWTMR100MSU8_LOCATION */
#endif

/*** SRVB_GETSWTMRS16_LOCATION ***/
#if (SRVB_GETSWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_GetSWTmrS16(void);

#elif (SRVB_GETSWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetSWTmrS16 SrvB_GetSWTmrS16_inline

#elif (SRVB_GETSWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_GetSWTmrS16(void));

#else
    #error >>>> 'Configuration for SrvB_GetSWTmrS16 is not supported'

/* SRVB_GETSWTMRS16_LOCATION */
#endif

/*** SRVB_STARTSWTMRS16_LOCATION ***/
#if (SRVB_STARTSWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartSWTmrS16(SrvB_SWTmrS16_t* tmrPtr);

#elif (SRVB_STARTSWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartSWTmrS16 SrvB_StartSWTmrS16_inline

#elif (SRVB_STARTSWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartSWTmrS16(SrvB_SWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartSWTmrS16 is not supported'

/* SRVB_STARTSWTMRS16_LOCATION */
#endif

/*** SRVB_STOPSWTMRS16_LOCATION ***/
#if (SRVB_STOPSWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopSWTmrS16(SrvB_SWTmrS16_t* tmrPtr);

#elif (SRVB_STOPSWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopSWTmrS16 SrvB_StopSWTmrS16_inline

#elif (SRVB_STOPSWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopSWTmrS16(SrvB_SWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopSWTmrS16 is not supported'

/* SRVB_STOPSWTMRS16_LOCATION */
#endif

/*** SRVB_TESTSWTMRS16_LOCATION ***/
#if (SRVB_TESTSWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestSWTmrS16(const SrvB_SWTmrS16_t* tmrPtr);

#elif (SRVB_TESTSWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestSWTmrS16 SrvB_TestSWTmrS16_inline

#elif (SRVB_TESTSWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestSWTmrS16(const SrvB_SWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestSWTmrS16 is not supported'

/* SRVB_TESTSWTMRS16_LOCATION */
#endif

/*** SRVB_DIFFSWTMRS16_LOCATION ***/
#if (SRVB_DIFFSWTMRS16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_DiffSWTmrS16(const SrvB_SWTmrS16_t* tmrPtr);

#elif (SRVB_DIFFSWTMRS16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffSWTmrS16 SrvB_DiffSWTmrS16_inline

#elif (SRVB_DIFFSWTMRS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_DiffSWTmrS16(const SrvB_SWTmrS16_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffSWTmrS16 is not supported'

/* SRVB_DIFFSWTMRS16_LOCATION */
#endif

/*** SRVB_GETSWTMRS32_LOCATION ***/
#if (SRVB_GETSWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_GetSWTmrS32(void);

#elif (SRVB_GETSWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetSWTmrS32 SrvB_GetSWTmrS32_inline

#elif (SRVB_GETSWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_GetSWTmrS32(void));

#else
    #error >>>> 'Configuration for SrvB_GetSWTmrS32 is not supported'

/* SRVB_GETSWTMRS32_LOCATION */
#endif

/*** SRVB_STARTSWTMRS32_LOCATION ***/
#if (SRVB_STARTSWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StartSWTmrS32(SrvB_SWTmrS32_t* tmrPtr);

#elif (SRVB_STARTSWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StartSWTmrS32 SrvB_StartSWTmrS32_inline

#elif (SRVB_STARTSWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StartSWTmrS32(SrvB_SWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StartSWTmrS32 is not supported'

/* SRVB_STARTSWTMRS32_LOCATION */
#endif

/*** SRVB_STOPSWTMRS32_LOCATION ***/
#if (SRVB_STOPSWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_StopSWTmrS32(SrvB_SWTmrS32_t* tmrPtr);

#elif (SRVB_STOPSWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_StopSWTmrS32 SrvB_StopSWTmrS32_inline

#elif (SRVB_STOPSWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_StopSWTmrS32(SrvB_SWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_StopSWTmrS32 is not supported'

/* SRVB_STOPSWTMRS32_LOCATION */
#endif

/*** SRVB_TESTSWTMRS32_LOCATION ***/
#if (SRVB_TESTSWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TestSWTmrS32(const SrvB_SWTmrS32_t* tmrPtr);

#elif (SRVB_TESTSWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TestSWTmrS32 SrvB_TestSWTmrS32_inline

#elif (SRVB_TESTSWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TestSWTmrS32(const SrvB_SWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_TestSWTmrS32 is not supported'

/* SRVB_TESTSWTMRS32_LOCATION */
#endif

/*** SRVB_DIFFSWTMRS32_LOCATION ***/
#if (SRVB_DIFFSWTMRS32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_DiffSWTmrS32(const SrvB_SWTmrS32_t* tmrPtr);

#elif (SRVB_DIFFSWTMRS32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_DiffSWTmrS32 SrvB_DiffSWTmrS32_inline

#elif (SRVB_DIFFSWTMRS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_DiffSWTmrS32(const SrvB_SWTmrS32_t* tmrPtr));

#else
    #error >>>> 'Configuration for SrvB_DiffSWTmrS32 is not supported'

/* SRVB_DIFFSWTMRS32_LOCATION */
#endif


 /* _SRVB_TIMER_H */
#endif
