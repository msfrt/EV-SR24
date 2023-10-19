/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:mofsrv_lib_srvb_limit.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:14.08.2011$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_srvb_limit$
 * $Variant___:18.0.0$
 * $Revision__:1$
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
 * 18.0.0; 1     14.08.2011 GWR2SI
 *   reorder some services for better compare with L1
 * 
 * 18.0.0; 0     04.08.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_SRVB_LIMIT_H
#define _MOFSRV_LIB_SRVB_LIMIT_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_TypeLimiter_S32_S16  MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_S32_U16  MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_S32_S8  MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_S32_U8  MoFSrv_Lib_SrvB_TypeLimiter_S32_U8_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_U32_U16  MoFSrv_Lib_SrvB_TypeLimiter_U32_U16_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_U32_S8  MoFSrv_Lib_SrvB_TypeLimiter_U32_S8_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_U32_U8  MoFSrv_Lib_SrvB_TypeLimiter_U32_U8_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_U32_S16  MoFSrv_Lib_SrvB_TypeLimiter_U32_S16_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_U32_S32  MoFSrv_Lib_SrvB_TypeLimiter_U32_S32_inline
#define	MoFSrv_Lib_SrvB_TypeLimiter_S32_U32  MoFSrv_Lib_SrvB_TypeLimiter_S32_U32_inline



/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_S8  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a sint32 value to sint8.
 *
 * The input variable is limited thus the return value is between MINSINT8 and MAXSINT8.
 *
 * \param   sint32 X_s32   Value to be limited
 * \return  sint8          The value of X_s32 limited to sint8 range
 **********************************************************************************************************************
 */
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(sint32 X_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(sint32 X_s32)
{
    asm volatile("  sat.b   %[X_s32]          \n\
                 " : [X_s32] "+&d" (X_s32) );

    return ((sint8) X_s32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U8  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a sint32 value to uint8.
 *
 * The input variable is limited thus the return value is between MINUINT8 and MAXUINT8.
 *
 * \param   sint32  X_s32   Value to be limited
 * \return  uint8           The value of X_s32 limited to uint8 range
 **********************************************************************************************************************
 */
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_TypeLimiter_S32_U8_inline(sint32 X_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_TypeLimiter_S32_U8_inline(sint32 X_s32)
{
    asm volatile("  max    %[X_s32], %[X_s32], 0      \n\
                    sat.bu %[X_s32]                   \n\
                 " : [X_s32] "+&d" (X_s32) );

    return ((uint8) X_s32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S8  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a uint32 value to sint8.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT8.
 *
 * \param    uint32 X_u32   Value to be limited
 * \return   sint8          The value of X_u32 limited to sint8 range
 **********************************************************************************************************************
 */
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_TypeLimiter_U32_S8_inline(uint32 X_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_TypeLimiter_U32_S8_inline(uint32 X_u32)
{
    asm volatile("  sat.bu  %[X_u32]                   \n\
                    sat.b   %[X_u32]                   \n\
                 " : [X_u32] "+&d" (X_u32) );

    return ((sint8) X_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_U8  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a uint32 value to uint8.
 *
 * The input variable is limited thus the return value is not greater than MAXUINT8.
 *
 * \param    uint32 X_u32   Value to be limited
 * \return   uint8          The value of X_u32 limited to uint8 range
 **********************************************************************************************************************
 */
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_TypeLimiter_U32_U8_inline(uint32 X_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_TypeLimiter_U32_U8_inline(uint32 X_u32)
{
    asm volatile("  sat.bu   %[X_u32]                     \n\
                 " : [X_u32] "+&d" (X_u32) );

    return ((uint8) X_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_S16  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a sint32 value to sint16.
 *
 * The input variable is limited thus the return value is between MINSINT16 and MAXSINT16.
 *
 * \param    sint32  X_s32   Value to be limited
 * \return   sint16          The value of X_s32 limited to sint16 range
 **********************************************************************************************************************
 */
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(sint32 X_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(sint32 X_s32)
{
    asm volatile("  sat.h   %[X_s32]                      \n\
                 " : [X_s32] "+&d" (X_s32) );

    return ((sint16) X_s32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U16  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a sint32 value to uint16.
 *
 * The input variable is limited thus the return value is between MINUINT16 and MAXUINT16.
 *
 * \param    sint32 X_s32   Value to be limited
 * \return   uint16         The value of X_s32 limited to uint16 range
 **********************************************************************************************************************
 */
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline(sint32 X_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline(sint32 X_s32)
{
    asm volatile("  max    %[X_s32], %[X_s32], 0       \n\
                    sat.hu %[X_s32]                    \n\
                 " : [X_s32] "+d" (X_s32) );

    return ((uint16)X_s32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S16  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a uint32 value to sint16.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT16.
 *
 * \param   uint32  X_u32   Value to be limited
 * \return  sint16          The value of X_u32 limited to sint16 range
 **********************************************************************************************************************
 */
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_TypeLimiter_U32_S16_inline(uint32 X_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_TypeLimiter_U32_S16_inline(uint32 X_u32)
{
    asm volatile("  sat.hu  %[X_u32],                  \n\
                    sat.h   %[X_u32]                   \n\
                 " : [X_u32] "+&d" (X_u32) );

    return ((sint16) X_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_U16  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a uint32 value to uint16.
 *
 * The input variable is limited thus the return value is not greater than MAXUINT16.
 *
 * \param    uint32  X_u32   Value to be limited
 * \return   uint16          The value of X_u32 limited to uint16 range
 **********************************************************************************************************************
 */
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_TypeLimiter_U32_U16_inline(uint32 X_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_TypeLimiter_U32_U16_inline(uint32 X_u32)
{
    asm volatile("  sat.hu   %[X_u32]                    \n\
                 " : [X_u32] "+&d" (X_u32) );

    return ((uint16) X_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_U32_S32  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a uint32 value to sint32.
 *
 * The input variable is limited thus the return value is not greater than MAXSINT32.
 *
 * \param    uint32   X_u32   Value to be limited
 * \return   sint32           The value of X_u32 limited to sint32 range
 **********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_TypeLimiter_U32_S32_inline(uint32 X_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_TypeLimiter_U32_S32_inline(uint32 X_u32)
{
    asm volatile("  jz.t   %[X_u32], 31, 1f      # test if the upper bit cleared \n\
                                                 # saturate otherwise            \n\
                    mov    %[X_u32], -1          # load 0xFFFF FFFF              \n\
                    sh     %[X_u32], -1          # X_u32 contains 0x7FFF FFFF    \n\
                1:                                                               \n\
                 ": [X_u32] "+&d" (X_u32) );

    return ((sint32) X_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_TypeLimiter_S32_U32  copied from SWHDR : srvb_limit_inl / 1.12.0; 0
 *
 * \brief Limitation of a sint32 value to uint32.
 *
 * The input variable is limited thus the return value is not smaller than MINUINT32.
 *
 * \param    sint32  X_s32   Value to be limited
 * \return   uint32          The limited value of X_s32
 **********************************************************************************************************************
 */
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_TypeLimiter_S32_U32_inline(sint32 X_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_TypeLimiter_S32_U32_inline(sint32 X_s32)
{
    uint32 res_u32;
    asm volatile("  max   %[res_u32], %[X_s32], 0       \n\
                 ": [res_u32] "=d" (res_u32) : [X_s32] "d" (X_s32) );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;
}


#endif /* _MOFSRV_LIB_SRVB_LIMIT_H */
