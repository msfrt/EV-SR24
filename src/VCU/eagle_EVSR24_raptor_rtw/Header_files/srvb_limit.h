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
 * $Filename__:srvb_limit.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_limit$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_LIMIT_H
#define _SRVB_LIMIT_H


/*** SRVB_RANGELIMITER_U8_LOCATION ***/
#if (SRVB_RANGELIMITER_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_RangeLimiter_U8(uint8 X_u8, uint8 Min_u8, uint8 Max_u8);

#elif (SRVB_RANGELIMITER_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_U8 SrvB_RangeLimiter_U8_inline

#elif (SRVB_RANGELIMITER_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_RangeLimiter_U8(uint8 X_u8, uint8 Min_u8, uint8 Max_u8));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_U8 is not supported'

/* SRVB_RANGELIMITER_U8_LOCATION */
#endif

/*** SRVB_RANGELIMITER_S8_LOCATION ***/
#if (SRVB_RANGELIMITER_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_RangeLimiter_S8(sint8 X_s8, sint8 Min_s8, sint8 Max_s8);

#elif (SRVB_RANGELIMITER_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_S8 SrvB_RangeLimiter_S8_inline

#elif (SRVB_RANGELIMITER_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_RangeLimiter_S8(sint8 X_s8, sint8 Min_s8, sint8 Max_s8));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_S8 is not supported'

/* SRVB_RANGELIMITER_S8_LOCATION */
#endif

/*** SRVB_RANGELIMITER_U16_LOCATION ***/
#if (SRVB_RANGELIMITER_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_RangeLimiter_U16(uint16 X_u16, uint16 Min_u16, uint16 Max_u16);

#elif (SRVB_RANGELIMITER_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_U16 SrvB_RangeLimiter_U16_inline

#elif (SRVB_RANGELIMITER_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_RangeLimiter_U16(uint16 X_u16, uint16 Min_u16, uint16 Max_u16));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_U16 is not supported'

/* SRVB_RANGELIMITER_U16_LOCATION */
#endif

/*** SRVB_RANGELIMITER_S16_LOCATION ***/
#if (SRVB_RANGELIMITER_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_RangeLimiter_S16(sint16 X_s16, sint16 Min_s16, sint16 Max_s16);

#elif (SRVB_RANGELIMITER_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_S16 SrvB_RangeLimiter_S16_inline

#elif (SRVB_RANGELIMITER_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_RangeLimiter_S16(sint16 X_s16, sint16 Min_s16, sint16 Max_s16));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_S16 is not supported'

/* SRVB_RANGELIMITER_S16_LOCATION */
#endif

/*** SRVB_RANGELIMITER_U32_LOCATION ***/
#if (SRVB_RANGELIMITER_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_RangeLimiter_U32(uint32 X_u32, uint32 Min_u32, uint32 Max_u32);

#elif (SRVB_RANGELIMITER_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_U32 SrvB_RangeLimiter_U32_inline

#elif (SRVB_RANGELIMITER_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_RangeLimiter_U32(uint32 X_u32, uint32 Min_u32, uint32 Max_u32));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_U32 is not supported'

/* SRVB_RANGELIMITER_U32_LOCATION */
#endif

/*** SRVB_RANGELIMITER_S32_LOCATION ***/
#if (SRVB_RANGELIMITER_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_RangeLimiter_S32(sint32 X_s32, sint32 Min_s32, sint32 Max_s32);

#elif (SRVB_RANGELIMITER_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RangeLimiter_S32 SrvB_RangeLimiter_S32_inline

#elif (SRVB_RANGELIMITER_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_RangeLimiter_S32(sint32 X_s32, sint32 Min_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvB_RangeLimiter_S32 is not supported'

/* SRVB_RANGELIMITER_S32_LOCATION */
#endif

/*** SRVB_TYPELIMITER_S32_S8_LOCATION ***/
#if (SRVB_TYPELIMITER_S32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_TypeLimiter_S32_S8(sint32 X_s32);

#elif (SRVB_TYPELIMITER_S32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_S32_S8 SrvB_TypeLimiter_S32_S8_inline

#elif (SRVB_TYPELIMITER_S32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_TypeLimiter_S32_S8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_S32_S8 is not supported'

/* SRVB_TYPELIMITER_S32_S8_LOCATION */
#endif

/*** SRVB_TYPELIMITER_S32_U8_LOCATION ***/
#if (SRVB_TYPELIMITER_S32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_TypeLimiter_S32_U8(sint32 X_s32);

#elif (SRVB_TYPELIMITER_S32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_S32_U8 SrvB_TypeLimiter_S32_U8_inline

#elif (SRVB_TYPELIMITER_S32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_TypeLimiter_S32_U8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_S32_U8 is not supported'

/* SRVB_TYPELIMITER_S32_U8_LOCATION */
#endif

/*** SRVB_TYPELIMITER_U32_S8_LOCATION ***/
#if (SRVB_TYPELIMITER_U32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_TypeLimiter_U32_S8(uint32 X_u32);

#elif (SRVB_TYPELIMITER_U32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_U32_S8 SrvB_TypeLimiter_U32_S8_inline

#elif (SRVB_TYPELIMITER_U32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_TypeLimiter_U32_S8(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_U32_S8 is not supported'

/* SRVB_TYPELIMITER_U32_S8_LOCATION */
#endif

/*** SRVB_TYPELIMITER_U32_U8_LOCATION ***/
#if (SRVB_TYPELIMITER_U32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_TypeLimiter_U32_U8(uint32 X_u32);

#elif (SRVB_TYPELIMITER_U32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_U32_U8 SrvB_TypeLimiter_U32_U8_inline

#elif (SRVB_TYPELIMITER_U32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_TypeLimiter_U32_U8(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_U32_U8 is not supported'

/* SRVB_TYPELIMITER_U32_U8_LOCATION */
#endif

/*** SRVB_TYPELIMITER_S32_S16_LOCATION ***/
#if (SRVB_TYPELIMITER_S32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_TypeLimiter_S32_S16(sint32 X_s32);

#elif (SRVB_TYPELIMITER_S32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_S32_S16 SrvB_TypeLimiter_S32_S16_inline

#elif (SRVB_TYPELIMITER_S32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_TypeLimiter_S32_S16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_S32_S16 is not supported'

/* SRVB_TYPELIMITER_S32_S16_LOCATION */
#endif

/*** SRVB_TYPELIMITER_S32_U16_LOCATION ***/
#if (SRVB_TYPELIMITER_S32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_TypeLimiter_S32_U16(sint32 X_s32);

#elif (SRVB_TYPELIMITER_S32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_S32_U16 SrvB_TypeLimiter_S32_U16_inline

#elif (SRVB_TYPELIMITER_S32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_TypeLimiter_S32_U16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_S32_U16 is not supported'

/* SRVB_TYPELIMITER_S32_U16_LOCATION */
#endif

/*** SRVB_TYPELIMITER_U32_S16_LOCATION ***/
#if (SRVB_TYPELIMITER_U32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_TypeLimiter_U32_S16(uint32 X_u32);

#elif (SRVB_TYPELIMITER_U32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_U32_S16 SrvB_TypeLimiter_U32_S16_inline

#elif (SRVB_TYPELIMITER_U32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_TypeLimiter_U32_S16(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_U32_S16 is not supported'

/* SRVB_TYPELIMITER_U32_S16_LOCATION */
#endif

/*** SRVB_TYPELIMITER_U32_U16_LOCATION ***/
#if (SRVB_TYPELIMITER_U32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_TypeLimiter_U32_U16(uint32 X_u32);

#elif (SRVB_TYPELIMITER_U32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_U32_U16 SrvB_TypeLimiter_U32_U16_inline

#elif (SRVB_TYPELIMITER_U32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_TypeLimiter_U32_U16(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_U32_U16 is not supported'

/* SRVB_TYPELIMITER_U32_U16_LOCATION */
#endif

/*** SRVB_TYPELIMITER_U32_S32_LOCATION ***/
#if (SRVB_TYPELIMITER_U32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_TypeLimiter_U32_S32(uint32 X_u32);

#elif (SRVB_TYPELIMITER_U32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_U32_S32 SrvB_TypeLimiter_U32_S32_inline

#elif (SRVB_TYPELIMITER_U32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_TypeLimiter_U32_S32(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_U32_S32 is not supported'

/* SRVB_TYPELIMITER_U32_S32_LOCATION */
#endif

/*** SRVB_TYPELIMITER_S32_U32_LOCATION ***/
#if (SRVB_TYPELIMITER_S32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_TypeLimiter_S32_U32(sint32 X_s32);

#elif (SRVB_TYPELIMITER_S32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TypeLimiter_S32_U32 SrvB_TypeLimiter_S32_U32_inline

#elif (SRVB_TYPELIMITER_S32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_TypeLimiter_S32_U32(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_TypeLimiter_S32_U32 is not supported'

/* SRVB_TYPELIMITER_S32_U32_LOCATION */
#endif


/*** SRVB_INTERVALCLOSED_U32_B_LOCATION ***/
#if (SRVB_INTERVALCLOSED_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalClosed_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32);

#elif (SRVB_INTERVALCLOSED_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalClosed_U32_B SrvB_IntervalClosed_U32_B_inline

#elif (SRVB_INTERVALCLOSED_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalClosed_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32));

#else
    #error >>>> 'Configuration for SrvB_IntervalClosed_U32_B is not supported'

/* SRVB_INTERVALCLOSED_U32_B_LOCATION */
#endif

/*** SRVB_INTERVALCLOSED_S32_B_LOCATION ***/
#if (SRVB_INTERVALCLOSED_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalClosed_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32);

#elif (SRVB_INTERVALCLOSED_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalClosed_S32_B SrvB_IntervalClosed_S32_B_inline

#elif (SRVB_INTERVALCLOSED_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalClosed_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvB_IntervalClosed_S32_B is not supported'

/* SRVB_INTERVALCLOSED_S32_B_LOCATION */
#endif

/*** SRVB_INTERVALLEFTOPEN_U32_B_LOCATION ***/
#if (SRVB_INTERVALLEFTOPEN_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalLeftOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32);

#elif (SRVB_INTERVALLEFTOPEN_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalLeftOpen_U32_B SrvB_IntervalLeftOpen_U32_B_inline

#elif (SRVB_INTERVALLEFTOPEN_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalLeftOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32));

#else
    #error >>>> 'Configuration for SrvB_IntervalLeftOpen_U32_B is not supported'

/* SRVB_INTERVALLEFTOPEN_U32_B_LOCATION */
#endif

/*** SRVB_INTERVALLEFTOPEN_S32_B_LOCATION ***/
#if (SRVB_INTERVALLEFTOPEN_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalLeftOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32);

#elif (SRVB_INTERVALLEFTOPEN_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalLeftOpen_S32_B SrvB_IntervalLeftOpen_S32_B_inline

#elif (SRVB_INTERVALLEFTOPEN_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalLeftOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvB_IntervalLeftOpen_S32_B is not supported'

/* SRVB_INTERVALLEFTOPEN_S32_B_LOCATION */
#endif

/*** SRVB_INTERVALOPEN_U32_B_LOCATION ***/
#if (SRVB_INTERVALOPEN_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32);

#elif (SRVB_INTERVALOPEN_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalOpen_U32_B SrvB_IntervalOpen_U32_B_inline

#elif (SRVB_INTERVALOPEN_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32));

#else
    #error >>>> 'Configuration for SrvB_IntervalOpen_U32_B is not supported'

/* SRVB_INTERVALOPEN_U32_B_LOCATION */
#endif

/*** SRVB_INTERVALOPEN_S32_B_LOCATION ***/
#if (SRVB_INTERVALOPEN_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32);

#elif (SRVB_INTERVALOPEN_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalOpen_S32_B SrvB_IntervalOpen_S32_B_inline

#elif (SRVB_INTERVALOPEN_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvB_IntervalOpen_S32_B is not supported'

/* SRVB_INTERVALOPEN_S32_B_LOCATION */
#endif

/*** SRVB_INTERVALRHOPEN_U32_B_LOCATION ***/
#if (SRVB_INTERVALRHOPEN_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalRhOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32);

#elif (SRVB_INTERVALRHOPEN_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalRhOpen_U32_B SrvB_IntervalRhOpen_U32_B_inline

#elif (SRVB_INTERVALRHOPEN_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalRhOpen_U32_B(uint32 Min_u32, uint32 X_u32, uint32 Max_u32));

#else
    #error >>>> 'Configuration for SrvB_IntervalRhOpen_U32_B is not supported'

/* SRVB_INTERVALRHOPEN_U32_B_LOCATION */
#endif

/*** SRVB_INTERVALRHOPEN_S32_B_LOCATION ***/
#if (SRVB_INTERVALRHOPEN_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_IntervalRhOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32);

#elif (SRVB_INTERVALRHOPEN_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_IntervalRhOpen_S32_B SrvB_IntervalRhOpen_S32_B_inline

#elif (SRVB_INTERVALRHOPEN_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_IntervalRhOpen_S32_B(sint32 Min_s32, sint32 X_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvB_IntervalRhOpen_S32_B is not supported'

/* SRVB_INTERVALRHOPEN_S32_B_LOCATION */
#endif



/* _SRVB_LIMIT_H */
#endif
