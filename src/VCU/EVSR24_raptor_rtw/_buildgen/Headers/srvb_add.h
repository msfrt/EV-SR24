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
 * $Filename__:srvb_add.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:03.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_add$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * 1.10.0; 0     17.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_ADD_H
#define _SRVB_ADD_H


/* SRVB_ADD_S32S32_S32_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Add_S32S32_S32(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_S32 SrvB_Add_S32S32_S32_inline

#elif (SRVB_ADD_S32S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Add_S32S32_S32(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_S32 is not supported'

/* SRVB_ADD_S32S32_S32_LOCATION */
#endif


/* SRVB_ADD_U32S32_S32_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Add_U32S32_S32(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_S32 SrvB_Add_U32S32_S32_inline

#elif (SRVB_ADD_U32S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Add_U32S32_S32(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_S32 is not supported'

/* SRVB_ADD_U32S32_S32_LOCATION */
#endif


/* SRVB_ADD_U32U32_S32_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Add_U32U32_S32(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_S32 SrvB_Add_U32U32_S32_inline

#elif (SRVB_ADD_U32U32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Add_U32U32_S32(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_S32 is not supported'

/* SRVB_ADD_U32U32_S32_LOCATION */
#endif


/* SRVB_ADD_S32S32_U32_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Add_S32S32_U32(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_U32 SrvB_Add_S32S32_U32_inline

#elif (SRVB_ADD_S32S32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Add_S32S32_U32(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_U32 is not supported'

/* SRVB_ADD_S32S32_U32_LOCATION */
#endif


/* SRVB_ADD_U32S32_U32_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Add_U32S32_U32(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_U32 SrvB_Add_U32S32_U32_inline

#elif (SRVB_ADD_U32S32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Add_U32S32_U32(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_U32 is not supported'

/* SRVB_ADD_U32S32_U32_LOCATION */
#endif


/* SRVB_ADD_U32U32_U32_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Add_U32U32_U32(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_U32 SrvB_Add_U32U32_U32_inline

#elif (SRVB_ADD_U32U32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Add_U32U32_U32(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_U32 is not supported'

/* SRVB_ADD_U32U32_U32_LOCATION */
#endif


/* SRVB_ADD_S32S32_S16_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Add_S32S32_S16(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_S16 SrvB_Add_S32S32_S16_inline

#elif (SRVB_ADD_S32S32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Add_S32S32_S16(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_S16 is not supported'

/* SRVB_ADD_S32S32_S16_LOCATION */
#endif


/* SRVB_ADD_U32S32_S16_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Add_U32S32_S16(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_S16 SrvB_Add_U32S32_S16_inline

#elif (SRVB_ADD_U32S32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Add_U32S32_S16(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_S16 is not supported'

/* SRVB_ADD_U32S32_S16_LOCATION */
#endif


/* SRVB_ADD_U32U32_S16_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Add_U32U32_S16(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_S16 SrvB_Add_U32U32_S16_inline

#elif (SRVB_ADD_U32U32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Add_U32U32_S16(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_S16 is not supported'

/* SRVB_ADD_U32U32_S16_LOCATION */
#endif


/* SRVB_ADD_S32S32_U16_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Add_S32S32_U16(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_U16 SrvB_Add_S32S32_U16_inline

#elif (SRVB_ADD_S32S32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Add_S32S32_U16(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_U16 is not supported'

/* SRVB_ADD_S32S32_U16_LOCATION */
#endif


/* SRVB_ADD_U32S32_U16_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Add_U32S32_U16(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_U16 SrvB_Add_U32S32_U16_inline

#elif (SRVB_ADD_U32S32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Add_U32S32_U16(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_U16 is not supported'

/* SRVB_ADD_U32S32_U16_LOCATION */
#endif


/* SRVB_ADD_U32U32_U16_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Add_U32U32_U16(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_U16 SrvB_Add_U32U32_U16_inline

#elif (SRVB_ADD_U32U32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Add_U32U32_U16(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_U16 is not supported'

/* SRVB_ADD_U32U32_U16_LOCATION */
#endif


/* SRVB_ADD_S32S32_S8_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Add_S32S32_S8(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_S8 SrvB_Add_S32S32_S8_inline

#elif (SRVB_ADD_S32S32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Add_S32S32_S8(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_S8 is not supported'

/* SRVB_ADD_S32S32_S8_LOCATION */
#endif


/* SRVB_ADD_U32S32_S8_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Add_U32S32_S8(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_S8 SrvB_Add_U32S32_S8_inline

#elif (SRVB_ADD_U32S32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Add_U32S32_S8(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_S8 is not supported'

/* SRVB_ADD_U32S32_S8_LOCATION */
#endif


/* SRVB_ADD_U32U32_S8_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Add_U32U32_S8(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_S8 SrvB_Add_U32U32_S8_inline

#elif (SRVB_ADD_U32U32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Add_U32U32_S8(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_S8 is not supported'

/* SRVB_ADD_U32U32_S8_LOCATION */
#endif


/* SRVB_ADD_S32S32_U8_LOCATION ************************************************/
#if (SRVB_ADD_S32S32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Add_S32S32_U8(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_ADD_S32S32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_S32S32_U8 SrvB_Add_S32S32_U8_inline

#elif (SRVB_ADD_S32S32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Add_S32S32_U8(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_S32S32_U8 is not supported'

/* SRVB_ADD_S32S32_U8_LOCATION */
#endif


/* SRVB_ADD_U32S32_U8_LOCATION ************************************************/
#if (SRVB_ADD_U32S32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Add_U32S32_U8(uint32 X_u32, sint32 Y_s32);

#elif (SRVB_ADD_U32S32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32S32_U8 SrvB_Add_U32S32_U8_inline

#elif (SRVB_ADD_U32S32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Add_U32S32_U8(uint32 X_u32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32S32_U8 is not supported'

/* SRVB_ADD_U32S32_U8_LOCATION */
#endif


/* SRVB_ADD_U32U32_U8_LOCATION ************************************************/
#if (SRVB_ADD_U32U32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Add_U32U32_U8(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_ADD_U32U32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Add_U32U32_U8 SrvB_Add_U32U32_U8_inline

#elif (SRVB_ADD_U32U32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Add_U32U32_U8(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Add_U32U32_U8 is not supported'

/* SRVB_ADD_U32U32_U8_LOCATION */
#endif



/* _SRVB_ADD_H */
#endif
