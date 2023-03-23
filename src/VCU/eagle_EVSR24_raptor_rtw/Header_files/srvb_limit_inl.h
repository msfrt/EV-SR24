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
 * $Filename__:srvb_limit_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:18.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_limit_inl$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     18.08.2014 PIR5COB
 *   Lebels for ASM services got updated
 * 
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_LIMIT_INL_H
#define _SRVB_LIMIT_INL_H

/**
 ***********************************************************************************************************************
 * \file srvb_limit_inl.h
 * \brief Service Library Header (Inline) with LIMITATION FUNCTIONS
 *
 * Implementation of LIMITATION FUNCTIONS with 32-Bit inputs and 32- ,16- and 8-Bit output.
 * The output is satured to prevent overflows and underflows.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 * SrvB_RangeLimiter_U8,      SrvB_RangeLimiter_S8,      SrvB_RangeLimiter_U16,     SrvB_RangeLimiter_S16,
 * SrvB_RangeLimiter_U32,     SrvB_RangeLimiter_S32,
 *
 * SrvB_TypeLimiter_S32_S8,   SrvB_TypeLimiter_S32_U8,   SrvB_TypeLimiter_U32_S8,   SrvB_TypeLimiter_U32_U8,
 * SrvB_TypeLimiter_S32_S16,  SrvB_TypeLimiter_S32_U16,  SrvB_TypeLimiter_U32_S16,  SrvB_TypeLimiter_U32_U16
 * SrvB_TypeLimiter_U32_S32,  SrvB_TypeLimiter_S32_U32,
 *
 * SrvB_IntervalClosed_U32_B,       SrvB_IntervClosed_S32_B,       SrvB_IntervalOpen_U32_B,        SrvB_IntervalOpen_S32_B,
 * SrvB_IntervalOpen_U32_B,         SrvB_IntervOpen_S32_B,         SrvB_IntervRhOpen_U32_B,       SrvB_IntervRhOpen_S32_B,
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * \moduledescription
 *                      Limit functions
 *          Interval functions
 *
 * \scope               API
 **********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * LIMIT RANGE
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_U8
 *
 * \brief Limits an uint8 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param  uint8 X_u8    Input value
 * \param  uint8 Min_u8  Lower limit
 * \param  uint8 Max_u8  Upper limit
 * \return uint8         Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return               max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_RangeLimiter_U8_inline(uint8 X_u8, uint8 Min_u8, uint8 Max_u8))
{
    return ((X_u8 <= Min_u8) ? (Min_u8) : ( (X_u8 >= Max_u8) ? (Max_u8) : (X_u8) ));
}


/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_S8
 *
 * \brief Limits an sint8 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param   sint8 X_s8    Input value
 * \param   sint8 Min_s8  Lower limit
 * \param   sint8 Max_s8  Upper limit
 * \return  sint8         Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return                max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_RangeLimiter_S8_inline(sint8 X_s8, sint8 Min_s8, sint8 Max_s8))
{
    return ((X_s8 <= Min_s8) ? (Min_s8) : ( (X_s8 >= Max_s8) ? (Max_s8) : (X_s8) ));
}


/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_U16
 *
 * \brief Limits an uint16 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param   uint16 X_u16    Input value
 * \param   uint16 Min_u16  Lower limit
 * \param   uint16 Max_u16  Upper limit
 * \return  uint16          Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return                  max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_RangeLimiter_U16_inline(uint16 X_u16, uint16 Min_u16, uint16 Max_u16))
{
    return ((X_u16 <= Min_u16) ? (Min_u16) : ( (X_u16 >= Max_u16) ? (Max_u16) : (X_u16) ));
}


/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_S16
 *
 * \brief Limits an sint16 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param   sint16 X_s16    Input value
 * \param   sint16 Min_s16  Lower limit
 * \param   sint16 Max_s16  Upper limit
 * \return  sint16          Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return                  max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_RangeLimiter_S16_inline(sint16 X_s16, sint16 Min_s16, sint16 Max_s16))
{
    return ((X_s16 <= Min_s16) ? (Min_s16) : ( (X_s16 >= Max_s16) ? (Max_s16) : (X_s16) ));
}


/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_U32
 *
 * \brief Limits an uint32 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param  uint32 X_u32     Input value
 * \param  uint32 Min_u32   Lower limit
 * \param  uint32 Max_u32   Upper limit
 * \return uint32           Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return                  max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_RangeLimiter_U32_inline(uint32 X_u32, uint32 Min_u32, uint32 Max_u32))
{
    return ((X_u32 <= Min_u32) ? (Min_u32) : ( (X_u32 >= Max_u32) ? (Max_u32) : (X_u32) ));
}


/**
 **********************************************************************************************************************
 * SrvB_RangeLimiter_S32
 *
 * \brief Limits an sint32 input value to lower or upper limit
 *
 * Function returns input value if it is between lower an upper limit. Otherwhise a limited value will be returned.
 *
 * \param  sint32 X_s32     Input value
 * \param  sint32 Min_s32   Lower limit
 * \param  sint32 Max_s32   Upper limit
 * \return sint32           Return Input value if it is between Min and Max. If X is greater than upper limit
 * \return                  max will be returned. If X is less than lower limit Min will be returned.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_RangeLimiter_S32_inline(sint32 X_s32, sint32 Min_s32, sint32 Max_s32))
{
    return ((X_s32 <= Min_s32) ? (Min_s32) : ( (X_s32 >= Max_s32) ? (Max_s32) : (X_s32) ));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * LIMIT TYPE
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_S8
 *
 * \brief Limitation of a sint32 value to sint8.
 *
 * The input variable is limited thus the return value is between MINSINT8 and MAXSINT8.
 *
 * \param   sint32 X_s32   Value to be limited
 * \return  sint8          The value of X_s32 limited to sint8 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_TypeLimiter_S32_S8_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ( (sint8) ( (X_s32 <= (sint32) MINSINT8) ? (MINSINT8) : (
                       (X_s32 >= (sint32) MAXSINT8) ? (MAXSINT8) : (X_s32)
                                                                    ) ) );

#else

    /* The __SATB instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATB
    return __SATB(X_s32);
    #else
    asm volatile("  sat.b   %[X_s32]                   \n\
                 " : [X_s32] "+&d" (X_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((sint8)X_s32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U8
 *
 * \brief Limitation of a sint32 value to uint8.
 *
 * The input variable is limited thus the return value is between MINUINT8 and MAXUINT8.
 *
 * \param   sint32  X_s32   Value to be limited
 * \return  uint8           The value of X_s32 limited to uint8 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_TypeLimiter_S32_U8_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ( (uint8) ( (X_s32 <= (sint32) MINUINT8) ? (MINUINT8) : (
                       (X_s32 >= (sint32) MAXUINT8) ? (MAXUINT8) : (X_s32)
                                                                    ) ) );

#else

    /* The __SATBU instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATBU
    asm volatile("  max    %[X_s32], %[X_s32], 0   \n\
                 " : [X_s32] "+&d" (X_s32) );

    return __SATBU(X_s32);
    #else
    asm volatile("  max    %[X_s32], %[X_s32], 0   \n\
                    sat.bu %[X_s32]                \n\
                 " : [X_s32] "+&d" (X_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((uint8)X_s32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S8
 *
 * \brief Limitation of a uint32 value to sint8.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT8.
 *
 * \param    uint32 X_u32   Value to be limited
 * \return   sint8          The value of X_u32 limited to sint8 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_TypeLimiter_U32_S8_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((sint8)( (X_u32 >= (uint32) MAXSINT8) ? (MAXSINT8) : (X_u32)));

#else

    /* The __SATB instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATB
    asm volatile("  sat.bu  %[X_u32]                   \n\
                 " : [X_u32] "+&d" (X_u32) );

    return __SATB(X_u32);
    #else
    asm volatile("  sat.bu  %[X_u32]                   \n\
                    sat.b   %[X_u32]                   \n\
                 " : [X_u32] "+&d" (X_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((sint8)X_u32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_U8
 *
 * \brief Limitation of a uint32 value to uint8.
 *
 * The input variable is limited thus the return value is not greater than MAXUINT8.
 *
 * \param    uint32 X_u32   Value to be limited
 * \return   uint8          The value of X_u32 limited to uint8 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_TypeLimiter_U32_U8_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((uint8)((X_u32 >= (uint32) MAXUINT8) ? (MAXUINT8) : (X_u32)));

#else

    /* The __SATBU instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATBU
    return __SATBU(X_u32);
    #else
    asm volatile("  sat.bu   %[X_u32]                  \n\
                 " : [X_u32] "+&d" (X_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((uint8)X_u32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_S16
 *
 * \brief Limitation of a sint32 value to sint16.
 *
 * The input variable is limited thus the return value is between MINSINT16 and MAXSINT16.
 *
 * \param    sint32  X_s32   Value to be limited
 * \return   sint16          The value of X_s32 limited to sint16 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_TypeLimiter_S32_S16_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ( (sint16) ( (X_s32 <= (sint32) MINSINT16) ? (MINSINT16) : (
                        (X_s32 >= (sint32) MAXSINT16) ? (MAXSINT16) : (X_s32)
                                                                        ) ) );

#else

    /* The __SATH instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATH
    return __SATH(X_s32);
    #else
    asm volatile("  sat.h   %[X_s32]                   \n\
                 " : [X_s32] "+&d" (X_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)X_s32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U16
 *
 * \brief Limitation of a sint32 value to uint16.
 *
 * The input variable is limited thus the return value is between MINUINT16 and MAXUINT16.
 *
 * \param    sint32 X_s32   Value to be limited
 * \return   uint16         The value of X_s32 limited to uint16 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_TypeLimiter_S32_U16_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ( (uint16) ( (X_s32 <= (sint32) MINUINT16) ? (MINUINT16) : (
                        (X_s32 >= (sint32) MAXUINT16) ? (MAXUINT16) : (X_s32)
                                                                        ) ) );

#else

    /* The __SATHU instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATHU
    asm volatile("  max    %[X_s32], %[X_s32], 0   \n\
                 " : [X_s32] "+d" (X_s32) );

    return __SATHU(X_s32);
    #else
    asm volatile("  max    %[X_s32], %[X_s32], 0   \n\
                    sat.hu %[X_s32]                    \n\
                 " : [X_s32] "+d" (X_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((uint16)X_s32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S16
 *
 * \brief Limitation of a uint32 value to sint16.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT16.
 *
 * \param   uint32  X_u32   Value to be limited
 * \return  sint16          The value of X_u32 limited to sint16 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_TypeLimiter_U32_S16_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((sint16)((X_u32 >= (uint32) MAXSINT16) ? (MAXSINT16) : (X_u32)));

#else

    /* The __SATH instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATH
    asm volatile("  sat.hu  %[X_u32],                  \n\
                 " : [X_u32] "+&d" (X_u32) );

    return __SATH(X_u32);
    #else
    asm volatile("  sat.hu  %[X_u32],                  \n\
                    sat.h   %[X_u32]                   \n\
                 " : [X_u32] "+&d" (X_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)X_u32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_U16
 *
 * \brief Limitation of a uint32 value to uint16.
 *
 * The input variable is limited thus the return value is not greater than MAXUINT16.
 *
 * \param    uint32  X_u32   Value to be limited
 * \return   uint16          The value of X_u32 limited to uint16 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_TypeLimiter_U32_U16_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((uint16)( (X_u32 >= (uint32) MAXUINT16) ? (MAXUINT16) : (X_u32)));

#else

    /* The __SATHU instruction is a intrinsic define of the hightec compiler >= V3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
       It is used to avoid an extr instruction at return value level. */
    #ifdef __SATHU
    return __SATHU(X_u32);
    #else
    asm volatile("  sat.hu   %[X_u32]                  \n\
                 " : [X_u32] "+&d" (X_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ((uint16)X_u32);
    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S32
 *
 * \brief Limitation of a uint32 value to sint32.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT32.
 *
 * \param    uint32   X_u32   Value to be limited
 * \return   sint32           The value of X_u32 limited to sint32 range
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_TypeLimiter_U32_S32_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((sint32)((X_u32 >= (uint32) MAXSINT32) ? (MAXSINT32) : (X_u32)));

#else

    asm volatile("  jz.t   %[X_u32], 31, L1F_%=  # test if the upper bit cleared \n\
                                                 # saturate otherwise            \n\
                    mov    %[X_u32], -1          # load 0xFFFF FFFF              \n\
                    sh     %[X_u32], -1          # X_u32 contains 0x7FFF FFFF    \n\
            L1F_%=:                                                              \n\
                 ": [X_u32] "+&d" (X_u32) );

    return ((sint32) X_u32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U32
 *
 * \brief Limitation of a sint32 value to uint32.
 *
 * The input variable is limited thus the return value is not smaller than MINUINT32.
 *
 * \param    sint32  X_s32   Value to be limited
 * \return   uint32          The limited value of X_s32
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_TypeLimiter_S32_U32_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return ((uint32)( (X_s32 <= (sint32) MINUINT32) ? (MINUINT32) : ((uint32)X_s32)));

#else

    uint32 res_u32;
    asm volatile("  max   %[res_u32], %[X_s32], 0       \n\
                 ": [res_u32] "=d" (res_u32) : [X_s32] "d" (X_s32) );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * LIMIT INTERVAL
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_IntervalClosed_U32_B
 *
 * \brief Comparator 32bit with left and rigth border (min <= x => max)
 *
 * Return value is TRUE if input is between or equal min, max.
 * Return value is FALSE if input is greater than min, max.
 *
 * \param  uint32 X_u32    Input value
 * \param  uint32 Min_u32  Lower border
 * \param  uint32 Max_u32  Higher border
 * \return bool            TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalClosed_U32_B_inline(uint32 Min_u32, uint32 X_u32, uint32 Max_u32) )
{
    return ((bool)(((X_u32 >= Min_u32) && (X_u32 <= Max_u32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalClosed_S32_B
 *
 * \brief Comparator 32bit with left and rigth border (min <= x => max)
 *
 * Return value is TRUE if input is between or equal min, max.
 * Return value is FALSE if input is greater than min, max.
 *
 * \param  sint32 X_s32     Input value
 * \param  sint32 Min_s32   Lower border
 * \param  sint32 Max_s32   Higher border
 * \return bool             TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalClosed_S32_B_inline(sint32 Min_s32, sint32 X_s32, sint32 Max_s32) )
{
    return ((bool)(((X_s32 >= Min_s32) && (X_s32 <= Max_s32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalLeftOpen_U32_B
 *
 * \brief Comparator 32bit with left and rigth border (min < x >= max)
 *
 * Return value is TRUE if input is bigger than min and smaler or equal max.
 * Return value is FALSE if input is smaler or equal min.
 * Return value is FALSE if input is bigger than max.
 *
 * \param  uint32 X_u32    Input value
 * \param  uint32 Min_u32  Lower border
 * \param  uint32 Max_u32  Higher border
 * \return bool            TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalLeftOpen_U32_B_inline(uint32 Min_u32, uint32 X_u32, uint32 Max_u32) )
{
    return ((bool)(((X_u32 > Min_u32) && (X_u32 <= Max_u32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalLeftOpen_S32_B
 *
 * \brief Comparator 32bit with left and rigth border (min < x >= max)
 *
 * Return value is TRUE if input is bigger than min and smaler or equal max.
 * Return value is FALSE if input is smaler or equal min.
 * Return value is FALSE if input is bigger than max.
 *
 * \param  sint32 X_s32     Input value
 * \param  sint32 Min_s32   Lower border
 * \param  sint32 Max_s32   Higher border
 * \return bool             TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalLeftOpen_S32_B_inline(sint32 Min_s32, sint32 X_s32, sint32 Max_s32) )
{
    return ((bool)(((X_s32 > Min_s32) && (X_s32 <= Max_s32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalOpen_U32_B
 *
 * \brief Comparator 32bit with left and rigth border (min < x > max)
 *
 * Return value is TRUE if input is between min, max.
 * Return value is FALSE if input is greater or equal than min, max.
 *
 * \param  uint32 X_u32    Input value
 * \param  uint32 Min_u32  Lower border
 * \param  uint32 Max_u32  Higher border
 * \return bool            TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalOpen_U32_B_inline(uint32 Min_u32, uint32 X_u32, uint32 Max_u32) )
{
    return ((bool)( ((X_u32 > Min_u32) && (X_u32 < Max_u32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalOpen_S32_B
 *
 * \brief Comparator 32bit with left and rigth border (min < x > max)
 *
 * Return value is TRUE if input is between min, max.
 * Return value is FALSE if input is greater or equal than min, max.
 *
 * \param  sint32 X_s32    Input value
 * \param  sint32 Min_s32  Lower border
 * \param  sint32 Max_s32  Higher border
 * \return bool            TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalOpen_S32_B_inline(sint32 Min_s32, sint32 X_s32, sint32 Max_s32) )
{
    return ((bool)(((X_s32 > Min_s32) && (X_s32 < Max_s32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalRhOpen_U32_B
 *
 * \brief Comparator with left and rigth border (min <= x > max)
 *
 * Return value is TRUE if input is bigger or equal min and smaler than max.
 * Return value is FALSE if input is smaler than min.
 * Return value is FALSE if input is bigger or equal max.
 *
 * \param  uint32 X_u32     Input value
 * \param  uint32 Min_u32   Lower border
 * \param  uint32 Max_u32   Higher border
 * \return bool             TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalRhOpen_U32_B_inline(uint32 Min_u32, uint32 X_u32, uint32 Max_u32) )
{
    return ((bool)(((X_u32 >= Min_u32) && (X_u32 < Max_u32)) ? (TRUE) : (FALSE)));
}


/**
 ***********************************************************************************************************************
 * SrvB_IntervalRhOpen_S32_B
 *
 * \brief Comparator with left and rigth border (min <= x > max)
 *
 * Return value is TRUE if input is bigger or equal min and smaler than max.
 * Return value is FALSE if input is smaler than min.
 * Return value is FALSE if input is bigger or equal max.
 *
 * \param  sint32 X_s32     Input value
 * \param  sint32 Min_s32   Lower border
 * \param  sint32 Max_s32   Higher border
 * \return bool             TRUE or FALSE depending on inpup value.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_IntervalRhOpen_S32_B_inline(sint32 Min_s32, sint32 X_s32, sint32 Max_s32) )
{
    return ((bool)(((X_s32 >= Min_s32) && (X_s32 < Max_s32)) ? (TRUE) : (FALSE)));
}


/* _SRVB_LIMIT_INL_H */
#endif
