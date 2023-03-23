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
 * $Filename__:mofsrv_lib_srvb_abs.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:10.07.2011$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_srvb_abs$
 * $Variant___:18.0.0$
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
 * 18.0.0; 0     10.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_SRVB_ABS_H
#define _MOFSRV_LIB_SRVB_ABS_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_Abs_S32_S16	MoFSrv_Lib_SrvB_Abs_S32_S16_inline
#define	MoFSrv_Lib_SrvB_Abs_S32_S32	MoFSrv_Lib_SrvB_Abs_S32_S32_inline
#define	MoFSrv_Lib_SrvB_Abs_S32_S8	MoFSrv_Lib_SrvB_Abs_S32_S8_inline
#define	MoFSrv_Lib_SrvB_Abs_S32_U16	MoFSrv_Lib_SrvB_Abs_S32_U16_inline
#define	MoFSrv_Lib_SrvB_Abs_S32_U32	MoFSrv_Lib_SrvB_Abs_S32_U32_inline
#define	MoFSrv_Lib_SrvB_Abs_S32_U8	MoFSrv_Lib_SrvB_Abs_S32_U8_inline


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U8  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of a sint32 operand with uint8 saturation.
 *
 * \param   sint32  X_s32
 * \return  uint8
 * \retval  Absolute value of X_s32 saturated to uint8
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Abs_S32_U8_inline(sint32 X_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Abs_S32_U8_inline(sint32 X_s32)
{
    sint32 result_s32;

    /* the __SATBU instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.bu instruction but within control of the compiler.
    */
    #ifdef __SATBU
    asm volatile("absdifs %0,%1, 0  \n\
                 ":"=d" (result_s32 ): "d" (X_s32) );
                /*         0           1   */
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATBU(result_s32);

    /* SRVB_IMPL_ASM_ENABLE==0 */
    #else
    asm volatile("absdifs %0,%1, 0  \n\
                  sat.bu %0, %0     \n\
                 ":"=d" (result_s32 ): "d" (X_s32) );
                /*         0           1   */

     /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (uint8)(result_s32);

    #endif
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U16  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of a sint32 operand with uint16 saturation.
 *
 * \param   sint32  X_s32
 * \return  uint16
 * \return  Absolute value of X_s32 saturated to uint16
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Abs_S32_U16_inline(sint32 X_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Abs_S32_U16_inline(sint32 X_s32)
{
    uint16 result_u16;

    /* This Asm code is generated (Abs(Sx) -> Uy) */
    asm volatile("    \n\
             abs %[result_u16], %[X_s32]  # compute absolute value     \n\
             sat.hu %[result_u16]         # limit the result to an u16 \n\
        "
        : [result_u16]"=d"(result_u16)
        : [X_s32]"d"(X_s32)
        );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (result_u16);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U32  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of sint32 operand with uint32 saturation.
 *
 * \param   sint32  X_s32
 * \return  Absolute value of X_s32 saturated to uint32
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Abs_S32_U32_inline(sint32 X_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Abs_S32_U32_inline(sint32 X_s32)
{
    uint32 result_u32;

    /* This Asm code is generated (Abs(Sx) -> Uy) */
    asm volatile("    \n\
             abs %[result_u32], %[X_s32] # compute absolute value \n\
        "
        : [result_u32]"=d"(result_u32)
        : [X_s32]"d"(X_s32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (result_u32);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S8  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of sint32 operand with sint8 saturation.
 *
 * \param   sint32   X_s32
 * \return  sint8
 * \retval  Absolute value of X_s32 saturated to sint8
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Abs_S32_S8_inline(sint32 X_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Abs_S32_S8_inline(sint32 X_s32)
{
    sint8 result_s8;

    /* This Asm code is generated (Abs(Sx) -> Sy) */
    asm volatile("    \n\
             abss %[result_s8], %[X_s32]  # compute saturated absolute value \n\
             sat.b %[result_s8]           # limit the result to a s8         \n\
        "
        : [result_s8]"=d"(result_s8)
        : [X_s32]"d"(X_s32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return result_s8;
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S16  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of sint32 operand with sint16 saturation.
 *
 * \param   sint32  X_s32
 * \return  sint16
 * \retval  Absolute value of X_s32 saturated to sint16
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Abs_S32_S16_inline(sint32 X_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Abs_S32_S16_inline(sint32 X_s32)
{
    sint32 result_s32;

    /* the __SATH instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
    */
    #ifdef __SATH
    asm volatile("absdifs %0,%1, 0  \n\
                 ": "=d" (result_s32) : "d" (X_s32) );
                 /*         0           1   */
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATH(result_s32);
    #else
    asm volatile("absdifs %0,%1, 0  \n\
                  sat.h   %0,%0     \n\
                 ": "=d" (result_s32) : "d" (X_s32) );
                 /*         0           1   */
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)result_s32);
    #endif
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S32  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Absolute value of sint32 operand with sint32 saturation.
 *
 * \param  sint32   X_s32
 * \return sint32
 * \retval Absolute value of X_s32 saturated to sint32
 *
 **********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Abs_S32_S32_inline(sint32 X_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Abs_S32_S32_inline(sint32 X_s32)
{
    sint32 result_s32;

    asm volatile("absdifs %0,%1, 0 "
                :"=d"(result_s32) : "d"(X_s32) );
                /*          0       1   */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (result_s32);
}


#endif /* _MOFSRV_LIB_SRVB_ABS_H */
