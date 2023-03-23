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
 * $Filename__:mofsrv_lib_srvb_muldiv.h$
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
 * $Name______:mofsrv_lib_srvb_muldiv$
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


#ifndef _MOFSRV_LIB_SRVB_MULDIV_H
#define _MOFSRV_LIB_SRVB_MULDIV_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S16	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_U16	MoFSrv_Lib_SrvB_MulDiv_S32S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U16	MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U32	MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U32_inline


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_U32U32U32_U32  copied from SWHDR : srvb_div_inl / 1.14.3; 0
 *
 * \brief Multiplies two uint32 variables, divides the interim value by a third one and limits the result to a uint32
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint32
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to uint32
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32)
{
    return MoFSrv_Lib_SrvB_Div_U64U32_U32_inline(MoFSrv_Lib_SrvB_Mul_U32U32_U64_inline(X_u32, Y_u32), Z_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_U32U32U32_U16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
 *
 * \brief Multiplies two uint32 variables, dividesthe interim value by a third one and limits the result to an uint16
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint16
 * \retval   ((X_u32 * Y_u32)  /  Z_u32 )saturated to uint16
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_U16(MoFSrv_Lib_SrvB_MulDiv_U32U32U32_U32_inline(X_u32, Y_u32, Z_u32));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_S32  copied from SWHDR : srvb_div_inl / 1.14.3; 0
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint32
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to sint32
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32)
{
    return MoFSrv_Lib_SrvB_Div_S64S32_S32_inline(MoFSrv_Lib_SrvB_Mul_S32S32_S64_inline(X_s32, Y_s32), Z_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_S16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint16
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to sint16
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32_inline(X_s32, Y_s32, Z_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_U16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   uint16
 * \retval   ((X_u32 * Y_u32)  /  Z_u32 ) saturated to uint16
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulDiv_S32S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline(MoFSrv_Lib_SrvB_MulDiv_S32S32S32_S32_inline(X_s32, Y_s32, Z_s32));
}


#endif /* _MOFSRV_LIB_SRVB_MULDIV_H */
