
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
 * $Filename__:codegen_srv_mul_limit.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_mul_limit$
 * $Variant___:1.0.0$
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
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
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
/*                                                                       */
/*************************************************************************/


#ifndef _CODEGEN_SRV_MUL_LIMIT_H
#define _CODEGEN_SRV_MUL_LIMIT_H

/* Mul_limit_**_s8  begin*/
/* Mul_limit_s8*_s8 */
#define Mul_limit_s8s8_s8(x,y)          SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u8_s8(x,y)          SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s16_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u16_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s32_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_s8(x,y)         SrvB_Mul_U32S32_S8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_s8 */
#define Mul_limit_u8s8_s8(x,y)          SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u8_s8(x,y)          SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8s16_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u16_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8s32_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_s8(x,y)         SrvB_Mul_U32U32_S8(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_s8    */
#define Mul_limit_s16s8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s32_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_s8(x,y)        SrvB_Mul_U32S32_S8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_s8    */
#define Mul_limit_u16s8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16s16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16s32_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_s8(x,y)        SrvB_Mul_U32U32_S8(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_s8    */
#define Mul_limit_s32s8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_s8(x,y)         SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_s8(x,y)        SrvB_Mul_S32S32_S8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_s8(x,y)        SrvB_Mul_U32S32_S8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_s8    */
#define Mul_limit_u32s8_s8(x,y)         SrvB_Mul_U32S32_S8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_s8(x,y)         SrvB_Mul_U32U32_S8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_s8(x,y)        SrvB_Mul_U32S32_S8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_s8(x,y)        SrvB_Mul_U32U32_S8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_s8(x,y)        SrvB_Mul_U32S32_S8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_s8(x,y)        SrvB_Mul_U32U32_S8(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_s8  end*/

/* Mul_limit_**_u8  begin*/
/* Mul_limit_s8*_u8 */
#define Mul_limit_s8s8_u8(x,y)          SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u8_u8(x,y)          SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s16_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u16_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s32_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_u8(x,y)         SrvB_Mul_U32S32_U8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_u8 */
#define Mul_limit_u8s8_u8(x,y)          SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u8_u8(x,y)          SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u8s16_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u16_u8(x,y)         SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u8s32_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_u8(x,y)         SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_u8    */
#define Mul_limit_s16s8_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u8_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s16_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u16_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s32_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_u8(x,y)        SrvB_Mul_U32S32_U8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_u8    */
#define Mul_limit_u16s8_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u8_u8(x,y)         SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u16s16_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u16_u8(x,y)        SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u16s32_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_u8(x,y)        SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_u8    */
#define Mul_limit_s32s8_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_u8(x,y)         SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_u8(x,y)        SrvB_Mul_S32S32_U8(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_u8(x,y)        SrvB_Mul_U32S32_U8(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_u8    */
#define Mul_limit_u32s8_u8(x,y)         SrvB_Mul_U32S32_U8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_u8(x,y)         SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_u8(x,y)        SrvB_Mul_U32S32_U8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_u8(x,y)        SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_u8(x,y)        SrvB_Mul_U32S32_U8(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_u8(x,y)        SrvB_Mul_U32U32_U8(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_u8  end*/

/* Mul_limit_**_s16 begin*/
/* Mul_limit_s8*_s16    */
#define Mul_limit_s8s8_s16(x,y)         Mul_NOLIMIT_s8s8_s16(((x)),((y)))
#define Mul_limit_s8u8_s16(x,y)         Mul_NOLIMIT_s8u8_s16(((x)),((y)))
#define Mul_limit_s8s16_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u16_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s32_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_s16(x,y)        SrvB_Mul_U32S32_S16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_s16    */
#define Mul_limit_u8s8_s16(x,y)         Mul_NOLIMIT_u8s8_s16(((x)),((y)))
#define Mul_limit_u8u8_s16(x,y)         SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8s16_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u16_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8s32_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_s16(x,y)        SrvB_Mul_U32U32_S16(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_s16   */
#define Mul_limit_s16s8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s32_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_s16(x,y)       SrvB_Mul_U32S32_S16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_s16   */
#define Mul_limit_u16s8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16s16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16s32_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_s16(x,y)       SrvB_Mul_U32U32_S16(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_s16   */
#define Mul_limit_s32s8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_s16(x,y)        SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_s16(x,y)       SrvB_Mul_S32S32_S16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_s16(x,y)       SrvB_Mul_U32S32_S16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_s16   */
#define Mul_limit_u32s8_s16(x,y)        SrvB_Mul_U32S32_S16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_s16(x,y)        SrvB_Mul_U32U32_S16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_s16(x,y)       SrvB_Mul_U32S32_S16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_s16(x,y)       SrvB_Mul_U32U32_S16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_s16(x,y)       SrvB_Mul_U32S32_S16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_s16(x,y)       SrvB_Mul_U32U32_S16(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_s16 end*/

/* Mul_limit_**_u16 begin*/
/* Mul_limit_s8*_u16    */
#define Mul_limit_s8s8_u16(x,y)         SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u8_u16(x,y)         SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s16_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u16_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s32_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_u16(x,y)        SrvB_Mul_U32S32_U16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_u16    */
#define Mul_limit_u8s8_u16(x,y)         SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u8_u16(x,y)         Mul_NOLIMIT_u8u8_u16(((x)),((y)))
#define Mul_limit_u8s16_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u16_u16(x,y)        SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u8s32_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_u16(x,y)        SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_u16   */
#define Mul_limit_s16s8_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u8_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s16_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u16_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s32_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_u16(x,y)       SrvB_Mul_U32S32_U16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_u16   */
#define Mul_limit_u16s8_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u8_u16(x,y)        SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u16s16_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u16_u16(x,y)       SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u16s32_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_u16(x,y)       SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_u16   */
#define Mul_limit_s32s8_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_u16(x,y)        SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_u16(x,y)       SrvB_Mul_S32S32_U16(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_u16(x,y)       SrvB_Mul_U32S32_U16(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_u16   */
#define Mul_limit_u32s8_u16(x,y)        SrvB_Mul_U32S32_U16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_u16(x,y)        SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_u16(x,y)       SrvB_Mul_U32S32_U16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_u16(x,y)       SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_u16(x,y)       SrvB_Mul_U32S32_U16(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_u16(x,y)       SrvB_Mul_U32U32_U16(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_u16 end*/

/* Mul_limit_**_s32 begin*/
/* Mul_limit_s8*_s32    */
#define Mul_limit_s8s8_s32(x,y)         Mul_NOLIMIT_s8s8_s32(((x)),((y)))
#define Mul_limit_s8u8_s32(x,y)         Mul_NOLIMIT_s8u8_s32(((x)),((y)))
#define Mul_limit_s8s16_s32(x,y)        Mul_NOLIMIT_s8s16_s32(((x)),((y)))
#define Mul_limit_s8u16_s32(x,y)        Mul_NOLIMIT_s8u16_s32(((x)),((y)))
#define Mul_limit_s8s32_s32(x,y)        SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_s32(x,y)        SrvB_Mul_U32S32_S32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_s32    */
#define Mul_limit_u8s8_s32(x,y)         Mul_NOLIMIT_u8s8_s32(((x)),((y)))
#define Mul_limit_u8u8_s32(x,y)         Mul_NOLIMIT_u8u8_s32(((x)),((y)))
#define Mul_limit_u8s16_s32(x,y)        Mul_NOLIMIT_u8s16_s32(((x)),((y)))
#define Mul_limit_u8u16_s32(x,y)        Mul_NOLIMIT_u8u16_s32(((x)),((y)))
#define Mul_limit_u8s32_s32(x,y)        SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_s32(x,y)        SrvB_Mul_U32U32_S32(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_s32   */
#define Mul_limit_s16s8_s32(x,y)        Mul_NOLIMIT_s16s8_s32(((x)),((y)))
#define Mul_limit_s16u8_s32(x,y)        Mul_NOLIMIT_s16u8_s32(((x)),((y)))
#define Mul_limit_s16s16_s32(x,y)       Mul_NOLIMIT_s16s16_s32(((x)),((y)))
#define Mul_limit_s16u16_s32(x,y)       Mul_NOLIMIT_s16u16_s32(((x)),((y)))
#define Mul_limit_s16s32_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_s32(x,y)       SrvB_Mul_U32S32_S32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_s32   */
#define Mul_limit_u16s8_s32(x,y)        Mul_NOLIMIT_u16s8_s32(((x)),((y)))
#define Mul_limit_u16u8_s32(x,y)        Mul_NOLIMIT_u16u8_s32(((x)),((y)))
#define Mul_limit_u16s16_s32(x,y)       Mul_NOLIMIT_u16s16_s32(((x)),((y)))
#define Mul_limit_u16u16_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16s32_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_s32(x,y)       SrvB_Mul_U32U32_S32(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_s32   */
#define Mul_limit_s32s8_s32(x,y)        SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_s32(x,y)        SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_s32(x,y)       SrvB_Mul_S32S32_S32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_s32(x,y)       SrvB_Mul_U32S32_S32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_s32   */
#define Mul_limit_u32s8_s32(x,y)        SrvB_Mul_U32S32_S32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_s32(x,y)        SrvB_Mul_U32U32_S32(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_s32(x,y)       SrvB_Mul_U32S32_S32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_s32(x,y)       SrvB_Mul_U32U32_S32(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_s32(x,y)       SrvB_Mul_U32S32_S32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_s32(x,y)       SrvB_Mul_U32U32_S32(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_s32 end*/

/* Mul_limit_**_u32 begin*/
/* Mul_limit_s8*_u32    */
#define Mul_limit_s8s8_u32(x,y)         SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u8_u32(x,y)         SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s16_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u16_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8s32_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s8u32_u32(x,y)        SrvB_Mul_U32S32_U32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u8*_u32    */
#define Mul_limit_u8s8_u32(x,y)         SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u8_u32(x,y)         Mul_NOLIMIT_u8u8_u32(((x)),((y)))
#define Mul_limit_u8s16_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u16_u32(x,y)        Mul_NOLIMIT_u8u16_u32(((x)),((y)))
#define Mul_limit_u8s32_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u8u32_u32(x,y)        SrvB_Mul_U32U32_U32(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s16*_u32   */
#define Mul_limit_s16s8_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u8_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s16_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u16_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16s32_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s16u32_u32(x,y)       SrvB_Mul_U32S32_U32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u16*_u32   */
#define Mul_limit_u16s8_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u8_u32(x,y)        Mul_NOLIMIT_u16u8_u32(((x)),((y)))
#define Mul_limit_u16s16_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u16_u32(x,y)       Mul_NOLIMIT_u16u16_u32(((x)),((y)))
#define Mul_limit_u16s32_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_u16u32_u32(x,y)       SrvB_Mul_U32U32_U32(((uint32)(x)),((uint32)(y)))

/* Mul_limit_s32*_u32   */
#define Mul_limit_s32s8_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u8_u32(x,y)        SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s16_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u16_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32s32_u32(x,y)       SrvB_Mul_S32S32_U32(((sint32)(x)),((sint32)(y)))
#define Mul_limit_s32u32_u32(x,y)       SrvB_Mul_U32S32_U32(((uint32)(y)),((sint32)(x)))

/* Mul_limit_u32*_u32   */
#define Mul_limit_u32s8_u32(x,y)        SrvB_Mul_U32S32_U32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u8_u32(x,y)        SrvB_Mul_U32U32_U32(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s16_u32(x,y)       SrvB_Mul_U32S32_U32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u16_u32(x,y)       SrvB_Mul_U32U32_U32(((uint32)(x)),((uint32)(y)))
#define Mul_limit_u32s32_u32(x,y)       SrvB_Mul_U32S32_U32(((uint32)(x)),((sint32)(y)))
#define Mul_limit_u32u32_u32(x,y)       SrvB_Mul_U32U32_U32(((uint32)(x)),((uint32)(y)))
/* Mul_limit_**_u32 end*/

#endif /* _CODEGEN_SRV_MUL_LIMIT_H */
