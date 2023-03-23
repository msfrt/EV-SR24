
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
 * $Filename__:mofsrv_lib_codegen_mulshright_limit.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:30.01.2012$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_codegen_mulshright_limit$
 * $Variant___:18.0.1$
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
 * 18.0.1; 1     30.01.2012 GWR2SI
 *   correct MoFSrv_Lib_MulShRight_limit_u32s8_u32 and 
 *   MoFSrv_Lib_MulShRight_limit_u32s16_u32
 * 
 * 18.0.1; 0     20.01.2012 GWR2SI
 *   correct mapping of MoFSrv_Lib_MulShRight_limit_u32s8_s32(x, y, n), 
 *   MoFSrv_Lib_MulShRight_limit_u32s16_s32(x, y, n) and 
 *   MoFSrv_Lib_MulShRight_limit_u32s32_s32(x, y, n)
 * 
 * 18.0.0; 0     10.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


/*************************************************************************/
/*                                                                       */
/*                                                                       */
/*                   Adapter for code generated files                    */
/*             maps generated funtion call to suited services            */
/*                                                                       */
/*  based on SWHDR : codegen_mulshright_limit / 1.1.1; 2                 */
/*************************************************************************/


#ifndef _MOFSRV_LIB_CODEGEN_MULSHRIGHT_LIMIT_H
#define _MOFSRV_LIB_CODEGEN_MULSHRIGHT_LIMIT_H

/* s8 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_s8 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_s8 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_s8 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_s8 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_s8 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_s8 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_s8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S8((uint32)(x), (uint32)(y), (n))
/* s8 return value End */

/* u8 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_u8 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_u8 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_u8 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_u8 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_u8 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U8((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_u8 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U8((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_u8(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U8((uint32)(x), (uint32)(y), (n))
/* u8 return value End */

/* s16 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_s16 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_s16 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_s16 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_s16 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_s16 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_s8 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_s16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S16((uint32)(x), (uint32)(y), (n))
/* s16 return value End */

/* u16 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_u16 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_u16 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_u16 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_u16 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_u16 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U16((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_u16 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U16((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_u16(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U16((uint32)(x), (uint32)(y), (n))
/* u16 return value End */

/* s32 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_s32 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_s32 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_s32 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_s32 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_s32 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_S32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_s32 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_S32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_s32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_S32((uint32)(x), (uint32)(y), (n))
/* s32 return value End */

/* u32 return value Begin */
/* MoFSrv_Lib_MulShRight_limit_s8*_u32 */
#define MoFSrv_Lib_MulShRight_limit_s8s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s8u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u8*_u32 */
#define MoFSrv_Lib_MulShRight_limit_u8s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u8u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s16*_u32 */
#define MoFSrv_Lib_MulShRight_limit_s16s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s16u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u16*_u32 */
#define MoFSrv_Lib_MulShRight_limit_u16s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u16u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

/* MoFSrv_Lib_MulShRight_limit_s32*_u32 */
#define MoFSrv_Lib_MulShRight_limit_s32s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_S32S32_U32((sint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_s32u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(y), (sint32)(x), (n))

/* MoFSrv_Lib_MulShRight_limit_u32*_u32 */
#define MoFSrv_Lib_MulShRight_limit_u32s8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u8_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u16_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32s32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32S32_U32((uint32)(x), (sint32)(y), (n))

#define MoFSrv_Lib_MulShRight_limit_u32u32_u32(x, y, n)	\
        MoFSrv_Lib_SrvB_MulShRight_U32U32_U32((uint32)(x), (uint32)(y), (n))
/* u32 return value End */

#endif /* _MOFSRV_LIB_CODEGEN_MULSHRIGHT_LIMIT_H */
