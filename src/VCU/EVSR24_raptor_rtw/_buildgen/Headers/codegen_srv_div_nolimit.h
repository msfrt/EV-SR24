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
 * $Filename__:codegen_srv_div_nolimit.h$
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
 * $Date______:17.10.2014$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_div_nolimit$
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
 * 1.1.0; 0     17.10.2014 DAJ2KOR
 *   Support for Div_NOLIMIT_u32u8_s32 and Div_NOLIMIT_u32s8_s32
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

#ifndef _CODEGEN_SRV_DIV_NOLIMIT_H
#define _CODEGEN_SRV_DIV_NOLIMIT_H

/*********************************************************************************/
/* Division (no limitation) */
/*********************************************************************************/

/* In the following divisions limit_S16_S8 is needed because of division by 0 */
/* unlimited division s8, result is s8 */
#define Div_NOLIMIT_s8s8_s8(x, y)       (Div_limit_s8s8_s8((x), (y)))
#define Div_NOLIMIT_s8u8_s8(x, y)       (Div_limit_s8u8_s8((x), (y)))

/* unlimited division u8, result is s8 */
#define Div_NOLIMIT_u8s8_s8(x, y)       (Div_limit_u8s8_s8((x), (y)))
#define Div_NOLIMIT_u8u8_s8(x, y)       (Div_limit_u8u8_s8((x), (y)))

/* unlimited division s16, result is s8 */
#define Div_NOLIMIT_s16s8_s8(x, y)      (Div_limit_s16s8_s8((x), (y)))
#define Div_NOLIMIT_s16u8_s8(x, y)      (Div_limit_s16u8_s8((x), (y)))
#define Div_NOLIMIT_s16s16_s8(x, y)     (Div_limit_s16s16_s8((x), (y)))

/* unlimited division u16, result is s8 */
#define Div_NOLIMIT_u16s8_s8(x, y)      (Div_limit_u16s8_s8((x), (y)))
#define Div_NOLIMIT_u16u8_s8(x, y)      (Div_limit_u16u8_s8((x), (y)))
#define Div_NOLIMIT_u16u16_s8(x, y)     (Div_limit_u16u16_s8((x), (y)))

/* unlimited division s32, result is s8 */
#define Div_NOLIMIT_s32s16_s8(x, y)     (Div_limit_s32s16_s8((x), (y)))

/* unlimited division s8, result is u8 */
#define Div_NOLIMIT_s8s8_u8(x, y)       (Div_limit_s8s8_u8((x), (y)))
#define Div_NOLIMIT_s8u8_u8(x, y)       (Div_limit_s8u8_u8((x), (y)))

/* unlimited division u8, result is u8 */
#define Div_NOLIMIT_u8s8_u8(x, y)       (Div_limit_u8s8_u8((x), (y)))
#define Div_NOLIMIT_u8u8_u8(x, y)       (Div_limit_u8u8_u8((x), (y)))

/* unlimited division s16, result is u8 */
#define Div_NOLIMIT_s16s8_u8(x, y)      (Div_limit_s16s8_u8((x), (y)))
#define Div_NOLIMIT_s16u8_u8(x, y)      (Div_limit_s16u8_u8((x), (y)))
#define Div_NOLIMIT_s16s16_u8(x, y)     (Div_limit_s16s16_u8((x), (y)))
#define Div_NOLIMIT_s16u16_u8(x, y)     (Div_limit_s16u16_u8((x), (y)))

/* unlimited division u16, result is u8 */
#define Div_NOLIMIT_u16s8_u8(x, y)      (Div_limit_u16s8_u8((x), (y)))
#define Div_NOLIMIT_u16u8_u8(x, y)      (Div_limit_u16u8_u8((x), (y)))
#define Div_NOLIMIT_u16s16_u8(x, y)     (Div_limit_u16s16_u8((x), (y)))
#define Div_NOLIMIT_u16u16_u8(x, y)     (Div_limit_u16u16_u8((x), (y)))

/* unlimited division u32, result is u8 */
#define Div_NOLIMIT_u32u16_u8(x, y)     (Div_limit_u32u16_u8((x), (y)))

/* unlimited division s16, result is s16 */
#define Div_NOLIMIT_s16s8_s16(x, y)     (Div_limit_s16s8_s16((x), (y)))
#define Div_NOLIMIT_s16u8_s16(x, y)     (Div_limit_s16u8_s16((x), (y)))
#define Div_NOLIMIT_s16s16_s16(x, y)    (Div_limit_s16s16_s16((x), (y)))
#define Div_NOLIMIT_s16u16_s16(x, y)    (Div_limit_s16u16_s16((x), (y)))

/* unlimited division u16, result is s16 */
#define Div_NOLIMIT_u16s8_s16(x, y)     (Div_limit_u16s8_s16((x), (y)))
#define Div_NOLIMIT_u16u8_s16(x, y)     (Div_limit_u16u8_s16((x), (y)))
#define Div_NOLIMIT_u16s16_s16(x, y)    (Div_limit_u16s16_s16((x), (y)))
#define Div_NOLIMIT_u16u16_s16(x, y)    (Div_limit_u16u16_s16((x), (y)))

/* unlimited division s32, result is s16 */
#define Div_NOLIMIT_s32s8_s16(x, y)     (Div_limit_s32s8_s16((x), (y)))
#define Div_NOLIMIT_s32u8_s16(x, y)     (Div_limit_s32u8_s16((x), (y)))
#define Div_NOLIMIT_s32s16_s16(x, y)    (Div_limit_s32s16_s16((x), (y)))
#define Div_NOLIMIT_s32u16_s16(x, y)    (Div_limit_s32u16_s16((x), (y)))
#define Div_NOLIMIT_s32s32_s16(x, y)    (Div_limit_s32s32_s16((x), (y)))

/* unlimited division u32, result is s16 */
#define Div_NOLIMIT_u32u32_s16(x, y)    (Div_limit_u32u32_s16((x), (y)))

/* unlimited division s16, result is u16 */
#define Div_NOLIMIT_s16s8_u16(x, y)     (Div_limit_s16s8_u16((x), (y)))
#define Div_NOLIMIT_s16u8_u16(x, y)     (Div_limit_s16u8_u16((x), (y)))
#define Div_NOLIMIT_s16s16_u16(x, y)    (Div_limit_s16s16_u16((x), (y)))
#define Div_NOLIMIT_s16u16_u16(x, y)    (Div_limit_s16u16_u16((x), (y)))

/* unlimited division u16, result is u16 */
#define Div_NOLIMIT_u16s8_u16(x, y)     (Div_limit_u16s8_u16((x), (y)))
#define Div_NOLIMIT_u16u8_u16(x, y)     (Div_limit_u16u8_u16((x), (y)))
#define Div_NOLIMIT_u16s16_u16(x, y)    (Div_limit_u16s16_u16((x), (y)))
#define Div_NOLIMIT_u16u16_u16(x, y)    (Div_limit_u16u16_u16((x), (y)))

/* unlimited division s32, result is u16 */
#define Div_NOLIMIT_s32s8_u16(x, y)     (Div_limit_s32s8_u16((x), (y)))
#define Div_NOLIMIT_s32u8_u16(x, y)     (Div_limit_s32u8_u16((x), (y)))
#define Div_NOLIMIT_s32s16_u16(x, y)    (Div_limit_s32s16_u16((x), (y)))
#define Div_NOLIMIT_s32u16_u16(x, y)    (Div_limit_s32u16_u16((x), (y)))
#define Div_NOLIMIT_s32s32_u16(x, y)    (Div_limit_s32s32_u16((x), (y)))
#define Div_NOLIMIT_s32u32_u16(x, y)    (Div_limit_s32u32_u16((x), (y)))

/* unlimited division u32, result is u16 */
#define Div_NOLIMIT_u32s8_u16(x, y)     (Div_limit_u32s8_u16((x), (y)))
#define Div_NOLIMIT_u32u8_u16(x, y)     (Div_limit_u32u8_u16((x), (y)))
#define Div_NOLIMIT_u32s16_u16(x, y)    (Div_limit_u32s16_u16((x), (y)))
#define Div_NOLIMIT_u32u16_u16(x, y)    (Div_limit_u32u16_u16((x), (y)))
#define Div_NOLIMIT_u32s32_u16(x, y)    (Div_limit_u32s32_u16((x), (y)))
#define Div_NOLIMIT_u32u32_u16(x, y)    (Div_limit_u32u32_u16((x), (y)))

/* unlimited division s32, result is s32 */
#define Div_NOLIMIT_s32s8_s32(x, y)     (Div_limit_s32s8_s32((x), (y)))
#define Div_NOLIMIT_s32u8_s32(x, y)     (Div_limit_s32u8_s32((x), (y)))
#define Div_NOLIMIT_s32s16_s32(x, y)    (Div_limit_s32s16_s32((x), (y)))
#define Div_NOLIMIT_s32u16_s32(x, y)    (Div_limit_s32u16_s32((x), (y)))
#define Div_NOLIMIT_s32s32_s32(x, y)    (Div_limit_s32s32_s32((x), (y)))

/* unlimited division u32, result is s32 */
#define Div_NOLIMIT_u32u32_s32(x, y)    (Div_limit_u32u32_s32((x), (y)))

/* unlimited division s32, result is u32 */
#define Div_NOLIMIT_s32s8_u32(x, y)     (Div_limit_s32s8_u32((x), (y)))
#define Div_NOLIMIT_s32u8_u32(x, y)     (Div_limit_s32u8_u32((x), (y)))
#define Div_NOLIMIT_s32s16_u32(x, y)    (Div_limit_s32s16_u32((x), (y)))
#define Div_NOLIMIT_s32u16_u32(x, y)    (Div_limit_s32u16_u32((x), (y)))
#define Div_NOLIMIT_s32s32_u32(x, y)    (Div_limit_s32s32_u32((x), (y)))
#define Div_NOLIMIT_s32u32_u32(x, y)    (Div_limit_s32u32_u32((x), (y)))

/* unlimited division u32, result is u32 */
#define Div_NOLIMIT_u32s8_u32(x, y)     (Div_limit_u32s8_u32((x), (y)))
#define Div_NOLIMIT_u32u8_u32(x, y)     (Div_limit_u32u8_u32((x), (y)))
#define Div_NOLIMIT_u32s16_u32(x, y)    (Div_limit_u32s16_u32((x), (y)))
#define Div_NOLIMIT_u32u16_u32(x, y)    (Div_limit_u32u16_u32((x), (y)))
#define Div_NOLIMIT_u32s32_u32(x, y)    (Div_limit_u32s32_u32((x), (y)))
#define Div_NOLIMIT_u32u32_u32(x, y)    (Div_limit_u32u32_u32((x), (y)))

/*EBY-767*/
#define Div_NOLIMIT_u32s8_s32(x, y)     (Div_limit_u32s8_s32((x), (y)))
#define Div_NOLIMIT_u32u8_s32(x, y)     (Div_limit_u32u8_s32((x), (y)))

#endif /* _CODEGEN_SRV_DIV_NOLIMIT_H */

