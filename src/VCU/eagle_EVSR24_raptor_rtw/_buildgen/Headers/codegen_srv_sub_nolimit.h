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
 * $Filename__:codegen_srv_sub_nolimit.h$
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
 * $Name______:codegen_srv_sub_nolimit$
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
 * $FDEF______:$
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


#ifndef _CODEGEN_SRV_SUB_NOLIMIT_H
#define _CODEGEN_SRV_SUB_NOLIMIT_H

/*********************************************************************************/
/* Subtraction (no limitation) */
/*********************************************************************************/

/* unlimited substraction s8, result is s8 */
#define Sub_NOLIMIT_s8s8_s8(x, y)       ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_s8(x, y)       ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_s8(x, y)      ((sint8)(Sub_limit_s8u32_s8((x),(y))))

/* unlimited substraction u8, result is s8 */
#define Sub_NOLIMIT_u8s8_s8(x, y)       ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_s8(x, y)       ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_s8(x, y)      ((sint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s8 */
#define Sub_NOLIMIT_s16s8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_s8(x, y)     ((sint8)(Sub_limit_s16u32_s8((x),(y))))

/* unlimited substraction u16, result is s8 */
#define Sub_NOLIMIT_u16s8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_s8(x, y)     ((sint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s8 */
#define Sub_NOLIMIT_s32s8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_s8(x, y)      ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_s8(x, y)     ((sint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_s8(x, y)     ((sint8)(Sub_limit_s32u32_s8((x),(y))))

/* unlimited substraction u32, result is s8 */
#define Sub_NOLIMIT_u32s8_s8(x, y)      ((sint8)(Sub_limit_u32s8_s8((x),(y))))
#define Sub_NOLIMIT_u32u8_s8(x, y)      ((sint8)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_s8(x, y)     ((sint8)(Sub_limit_u32s16_s8((x),(y))))
#define Sub_NOLIMIT_u32u16_s8(x, y)     ((sint8)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_s8(x, y)     ((sint8)(Sub_limit_u32s32_s8((x),(y))))
#define Sub_NOLIMIT_u32u32_s8(x, y)     ((sint8)((uint32)(x) - (uint32)(y)))


/* unlimited substraction s8, result is u8 */
#define Sub_NOLIMIT_s8s8_u8(x, y)       ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_u8(x, y)       ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_u8(x, y)      ((uint8)(Sub_limit_s8u32_u8((x),(y))))

/* unlimited substraction u8, result is u8 */
#define Sub_NOLIMIT_u8s8_u8(x, y)       ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_u8(x, y)       ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_u8(x, y)      ((uint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u8 */
#define Sub_NOLIMIT_s16s8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_u8(x, y)     ((uint8)(Sub_limit_s16u32_u8((x),(y))))

/* unlimited substraction u16, result is u8 */
#define Sub_NOLIMIT_u16s8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_u8(x, y)     ((uint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u8 */
#define Sub_NOLIMIT_s32s8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_u8(x, y)      ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_u8(x, y)     ((uint8)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_u8(x, y)     ((uint8)(Sub_limit_s32u32_u8((x),(y))))

/* unlimited substraction u32, result is u8 */
#define Sub_NOLIMIT_u32s8_u8(x, y)      ((uint8)(Sub_limit_u32s8_u8((x),(y))))
#define Sub_NOLIMIT_u32u8_u8(x, y)      ((uint8)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_u8(x, y)     ((uint8)(Sub_limit_u32s16_u8((x),(y))))
#define Sub_NOLIMIT_u32u16_u8(x, y)     ((uint8)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_u8(x, y)     ((uint8)(Sub_limit_u32s32_u8((x),(y))))
#define Sub_NOLIMIT_u32u32_u8(x, y)     ((uint8)((uint32)(x) - (uint32)(y)))


/* unlimited substraction s8, result is s16 */
#define Sub_NOLIMIT_s8s8_s16(x, y)      ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_s16(x, y)      ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_s16(x, y)     ((sint16)(Sub_limit_s8u32_s16((x),(y))))

/* unlimited substraction u8, result is s16 */
#define Sub_NOLIMIT_u8s8_s16(x, y)      ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_s16(x, y)      ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_s16(x, y)     ((sint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s16 */
#define Sub_NOLIMIT_s16s8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_s16(x, y)    ((sint16)(Sub_limit_s16u32_s16((x),(y))))

/* unlimited substraction u16, result is s16 */
#define Sub_NOLIMIT_u16s8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_s16(x, y)    ((sint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s16 */
#define Sub_NOLIMIT_s32s8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_s16(x, y)     ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_s16(x, y)    ((sint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_s16(x, y)    ((sint16)(Sub_limit_s32u32_s16((x),(y))))

/* unlimited substraction u32, result is s16 */
#define Sub_NOLIMIT_u32s8_s16(x, y)     ((sint16)(Sub_limit_u32s8_s16((x),(y))))
#define Sub_NOLIMIT_u32u8_s16(x, y)     ((sint16)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_s16(x, y)    ((sint16)(Sub_limit_u32s16_s16((x),(y))))
#define Sub_NOLIMIT_u32u16_s16(x, y)    ((sint16)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_s16(x, y)    ((sint16)(Sub_limit_u32s32_s16((x),(y))))
#define Sub_NOLIMIT_u32u32_s16(x, y)    ((sint16)((uint32)(x) - (uint32)(y)))


/* unlimited substraction s8, result is u16 */
#define Sub_NOLIMIT_s8s8_u16(x, y)      ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_u16(x, y)      ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_u16(x, y)     ((uint16)(Sub_limit_s8u32_u16((x),(y))))

/* unlimited substraction u8, result is u16 */
#define Sub_NOLIMIT_u8s8_u16(x, y)      ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_u16(x, y)      ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_u16(x, y)     ((uint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u16 */
#define Sub_NOLIMIT_s16s8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_u16(x, y)    ((uint16)(Sub_limit_s16u32_u16((x),(y))))

/* unlimited substraction u16, result is u16 */
#define Sub_NOLIMIT_u16s8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_u16(x, y)    ((uint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u16 */
#define Sub_NOLIMIT_s32s8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_u16(x, y)     ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_u16(x, y)    ((uint16)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_u16(x, y)    ((uint16)(Sub_limit_s32u32_u16((x),(y))))

/* unlimited substraction u32, result is u16 */
#define Sub_NOLIMIT_u32s8_u16(x, y)     ((uint16)(Sub_limit_u32s8_u16((x),(y))))
#define Sub_NOLIMIT_u32u8_u16(x, y)     ((uint16)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_u16(x, y)    ((uint16)(Sub_limit_u32s16_u16((x),(y))))
#define Sub_NOLIMIT_u32u16_u16(x, y)    ((uint16)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_u16(x, y)    ((uint16)(Sub_limit_u32s32_u16((x),(y))))
#define Sub_NOLIMIT_u32u32_u16(x, y)    ((uint16)((uint32)(x) - (uint32)(y)))


/* unlimited substraction s8, result is s32 */
#define Sub_NOLIMIT_s8s8_s32(x, y)      ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_s32(x, y)      ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_s32(x, y)     ((sint32)(Sub_limit_s8u32_s32((x),(y))))

/* unlimited substraction u8, result is s32 */
#define Sub_NOLIMIT_u8s8_s32(x, y)      ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_s32(x, y)      ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_s32(x, y)     ((sint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s32 */
#define Sub_NOLIMIT_s16s8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_s32(x, y)    ((sint32)(Sub_limit_s16u32_s32((x),(y))))

/* unlimited substraction u16, result is s32 */
#define Sub_NOLIMIT_u16s8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_s32(x, y)    ((sint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s32 */
#define Sub_NOLIMIT_s32s8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_s32(x, y)     ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_s32(x, y)    ((sint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_s32(x, y)    ((sint32)(Sub_limit_s32u32_s32((x),(y))))

/* unlimited substraction u32, result is s32 */
#define Sub_NOLIMIT_u32s8_s32(x, y)     ((sint32)(Sub_limit_u32s8_s32((x),(y))))
#define Sub_NOLIMIT_u32u8_s32(x, y)     ((sint32)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_s32(x, y)    ((sint32)(Sub_limit_u32s16_s32((x),(y))))
#define Sub_NOLIMIT_u32u16_s32(x, y)    ((sint32)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_s32(x, y)    ((sint32)(Sub_limit_u32s32_s32((x),(y))))
#define Sub_NOLIMIT_u32u32_s32(x, y)    ((sint32)((uint32)(x) - (uint32)(y)))


/* unlimited substraction s8, result is u32 */
#define Sub_NOLIMIT_s8s8_u32(x, y)      ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u8_u32(x, y)      ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s16_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u16_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8s32_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s8u32_u32(x, y)     ((uint32)(Sub_limit_s8u32_u32((x),(y))))

/* unlimited substraction u8, result is u32 */
#define Sub_NOLIMIT_u8s8_u32(x, y)      ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u8_u32(x, y)      ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s16_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u16_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8s32_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u8u32_u32(x, y)     ((uint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u32 */
#define Sub_NOLIMIT_s16s8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16s32_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s16u32_u32(x, y)    ((uint32)(Sub_limit_s16u32_u32((x),(y))))

/* unlimited substraction u16, result is u32 */
#define Sub_NOLIMIT_u16s8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16s32_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_u16u32_u32(x, y)    ((uint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u32 */
#define Sub_NOLIMIT_s32s8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u8_u32(x, y)     ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u16_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32s32_u32(x, y)    ((uint32)((sint32)(x) - (sint32)(y)))
#define Sub_NOLIMIT_s32u32_u32(x, y)    ((uint32)(Sub_limit_s32u32_u32((x),(y))))

/* unlimited substraction u32, result is u32 */
#define Sub_NOLIMIT_u32s8_u32(x, y)     ((uint32)(Sub_limit_u32s8_u32((x),(y))))
#define Sub_NOLIMIT_u32u8_u32(x, y)     ((uint32)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s16_u32(x, y)    ((uint32)(Sub_limit_u32s16_u32((x),(y))))
#define Sub_NOLIMIT_u32u16_u32(x, y)    ((uint32)((uint32)(x) - (uint32)(y)))
#define Sub_NOLIMIT_u32s32_u32(x, y)    ((uint32)(Sub_limit_u32s32_u32((x),(y))))
#define Sub_NOLIMIT_u32u32_u32(x, y)    ((uint32)((uint32)(x) - (uint32)(y)))

#endif /* _CODEGEN_SRV_SUB_NOLIMIT_H */

