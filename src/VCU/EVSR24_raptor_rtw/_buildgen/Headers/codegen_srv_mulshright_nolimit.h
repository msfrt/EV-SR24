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
 * $Filename__:codegen_srv_mulshright_nolimit.h$
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
 * $User______:DAJ2KOR$
 * $Date______:18.10.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_mulshright_nolimit$
 * $Variant___:1.1.0$
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
 * 1.1.0; 0     18.10.2012 DAJ2KOR
 *   Casting improved for MulShr NoLimit adapters.
 * 
 * 1.0.0; 1     03.04.2012 PRG2SI
 *   Correction of MulShRight_NOLIMIT_u16u16_s32
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

#ifndef _CODEGEN_SRV_MULSHRIGHT_NOLIMIT_H
#define _CODEGEN_SRV_MULSHRIGHT_NOLIMIT_H

/*********************************************************************************/
/* Multiplication with additional right shift (no limitation) */
/*********************************************************************************/

/* unlimited mulShiftRight s8, result is s16 */
#define MulShRight_NOLIMIT_s8s16_s16(x, y, shift)   ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s8u16_s16(x, y, shift)   ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is s16 */
#define MulShRight_NOLIMIT_u8s16_s16(x, y, shift)   ((sint16)(((sint32)(y) * (sint32)(x)) >> (shift)))
#define MulShRight_NOLIMIT_u8u16_s16(x, y, shift)   ((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is s16 */
#define MulShRight_NOLIMIT_s16s8_s16(x, y, shift)   ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u8_s16(x, y, shift)   ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16s16_s16(x, y, shift)  ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u16_s16(x, y, shift)  ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is s16 */
#define MulShRight_NOLIMIT_u16s8_s16(x, y, shift)   ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u8_s16(x, y, shift)   ((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16s16_s16(x, y, shift)  ((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u16_s16(x, y, shift)  ((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s8, result is u16 */
#define MulShRight_NOLIMIT_s8s16_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s8u16_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is u16 */
#define MulShRight_NOLIMIT_u8s16_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u8u16_u16(x, y, shift)   ((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is u16 */
#define MulShRight_NOLIMIT_s16s8_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u8_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16s16_u16(x, y, shift)  ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u16_u16(x, y, shift)  ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is u16 */
#define MulShRight_NOLIMIT_u16s8_u16(x, y, shift)   ((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u8_u16(x, y, shift)   ((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16s16_u16(x, y, shift)  ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u16_u16(x, y, shift)  ((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s8, result is s32 */
#define MulShRight_NOLIMIT_s8s16_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s8u16_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is s32 */
#define MulShRight_NOLIMIT_u8s16_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u8u16_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is s32 */
#define MulShRight_NOLIMIT_s16s8_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u8_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16s16_s32(x, y, shift)  ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_s16u16_s32(x, y, shift)  ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is s32 */
#define MulShRight_NOLIMIT_u16s8_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u8_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16s16_s32(x, y, shift)  ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u16_s32(x, y, shift)	((sint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is u32 */
#define MulShRight_NOLIMIT_u8u16_u32(x, y, shift)   ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is u32 */
#define MulShRight_NOLIMIT_u16u8_u32(x, y, shift)   ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MulShRight_NOLIMIT_u16u16_u32(x, y, shift)  ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

#endif /* _CODEGEN_SRV_MULSHRIGHT_NOLIMIT_H */

