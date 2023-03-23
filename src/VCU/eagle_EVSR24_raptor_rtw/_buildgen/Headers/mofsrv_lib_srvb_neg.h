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
 * $Filename__:mofsrv_lib_srvb_neg.h$
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
 * $Name______:mofsrv_lib_srvb_neg$
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


#ifndef _MOFSRV_LIB_SRVB_NEG_H
#define _MOFSRV_LIB_SRVB_NEG_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_Neg_S32_S16	MoFSrv_Lib_SrvB_Neg_S32_S16_inline
#define	MoFSrv_Lib_SrvB_Neg_S32_S32	MoFSrv_Lib_SrvB_Neg_S32_S32_inline
#define	MoFSrv_Lib_SrvB_Neg_S32_S8	MoFSrv_Lib_SrvB_Neg_S32_S8_inline
#define	MoFSrv_Lib_SrvB_Neg_S32_U16	MoFSrv_Lib_SrvB_Neg_S32_U16_inline
#define	MoFSrv_Lib_SrvB_Neg_S32_U32	MoFSrv_Lib_SrvB_Neg_S32_U32_inline
#define	MoFSrv_Lib_SrvB_Neg_S32_U8	MoFSrv_Lib_SrvB_Neg_S32_U8_inline
#define	MoFSrv_Lib_SrvB_Neg_U32_S16	MoFSrv_Lib_SrvB_Neg_U32_S16_inline
#define	MoFSrv_Lib_SrvB_Neg_U32_S32	MoFSrv_Lib_SrvB_Neg_U32_S32_inline
#define	MoFSrv_Lib_SrvB_Neg_U32_S8	MoFSrv_Lib_SrvB_Neg_U32_S8_inline

/**
 **********************************************************************************************************************
 * SrvB_Neg_S32_S32  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Invert the sign of a sint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Examle 1:  a = 5 -> b = -5
 * Examle 2:  a = MINSINT32 -> b = MAXSINT32
 *
 * Warning: Users of assembler implementation must not input MINSINT32!
 *
 * \param   sint32  X_s32    Input value
 * \return  sint32  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Neg_S32_S32_inline(sint32 X_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Neg_S32_S32_inline(sint32 X_s32)
{
    sint32 res_s32;
    asm volatile("  rsubs   %[res_s32], %[X_s32], 0        # reverse substract with saturatation \n\
                 " : [res_s32] "=d" (res_s32) : [X_s32]"d"(X_s32) );

    /* MISRA RULE 30 VIOLATION: The variable is written in the asm statement */
    return (res_s32);
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_S16  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXSINT16
*
* \param   sint32  X_s32    Input value
* \return  sint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Neg_S32_S16_inline(sint32 X_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Neg_S32_S16_inline(sint32 X_s32)
{
    X_s32 = MoFSrv_Lib_SrvB_Neg_S32_S32_inline(X_s32);
    return ( (sint16) MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_S8  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXSINT8
*
* \param   sint32  X_s32    Input value
* \return  sint8  Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Neg_S32_S8_inline(sint32 X_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Neg_S32_S8_inline(sint32 X_s32)
{
    X_s32 = MoFSrv_Lib_SrvB_Neg_S32_S32_inline(X_s32);
    return ( (sint8) MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_U16  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXUINT16
*
* \param   sint32  X_s32    Input value
* \return  uint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Neg_S32_U16_inline(sint32 X_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Neg_S32_U16_inline(sint32 X_s32)
{
    X_s32 = MoFSrv_Lib_SrvB_Neg_S32_S32_inline(X_s32);
    return ( (uint16) MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_U32  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXSINT32+1
*
* \param   sint32  X_s32    Input value
* \return  uint32  Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Neg_S32_U32_inline(sint32 X_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Neg_S32_U32_inline(sint32 X_s32)
{
    uint32 res_u32;


    asm volatile("  min     %[res_u32], %[X_s32], 0 # keep the negative part        \n\
                    rsub    %[res_u32]              # negation                      \n\
                 " : [res_u32] "=&d" (res_u32) : [X_s32]"d"(X_s32) );

    /* MISRA RULE 30 VIOLATION: The variable is written in the asm statement */
    return (res_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_Neg_S32_U8  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Invert the sign of a sint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Examle 1:  a = 5 -> b = -5
 * Examle 2:  a = MINSINT32 -> b = MAXUINT8
 *
 * \param   sint32  X_s32    Input value
 * \return  uint8  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Neg_S32_U8_inline(sint32 X_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Neg_S32_U8_inline(sint32 X_s32)
{
    X_s32 = MoFSrv_Lib_SrvB_Neg_S32_S32_inline(X_s32);
    return ((uint8)MoFSrv_Lib_SrvB_TypeLimiter_S32_U8_inline(X_s32));
}


/**
 **********************************************************************************************************************
 * SrvB_Neg_U32_S32  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
 *
 * \brief Invert the sign of a uint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Examle 1:  a = 5 -> b = -5
 * Examle 2:  a = MINSINT32 -> b = MAXSINT32
 *
 * \param   uint32  X_u32    Input value
 * \return  sint32  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Neg_U32_S32_inline(uint32 X_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Neg_U32_S32_inline(uint32 X_u32)
{
    asm volatile(" jz.t   %[X_u32], 31, 1f      # test if the upper bit cleared    \n\
                                                # saturate otherwise               \n\
                   movh   %[X_u32], 0x8000      # load MINSINT32                   \n\
                   1:                                                              \n\
                   rsub   %[X_u32]              # negation                         \n\
                 " :  [X_u32]"+d"(X_u32) );

                 return ((sint32) X_u32);
}


/**
**********************************************************************************************************************
* SrvB_Neg_U32_S16  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXSINT16
*
* \param   uint32  X_u32    Input value
* \return  sint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Neg_U32_S16_inline(uint32 X_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Neg_U32_S16_inline(uint32 X_u32)
{
    return ((sint16)MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(MoFSrv_Lib_SrvB_Neg_U32_S32_inline(X_u32)));
}


/**
**********************************************************************************************************************
* SrvB_Neg_U32_S8  copied from SWHDR : srvb_stat_inl / 1.14.0; 0
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Examle 1:  a = 5 -> b = -5
* Examle 2:  a = MINSINT32 -> b = MAXSINT8
*
* \param   uint32  X_u32    Input value
* \return  sint8   Input value with inverted sign, satured
**********************************************************************************************************************
*/
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Neg_U32_S8_inline(uint32 X_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Neg_U32_S8_inline(uint32 X_u32)
{
    return ((sint8)MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(MoFSrv_Lib_SrvB_Neg_U32_S32_inline(X_u32)));
}


#endif /* _MOFSRV_LIB_SRVB_NEG_H */
