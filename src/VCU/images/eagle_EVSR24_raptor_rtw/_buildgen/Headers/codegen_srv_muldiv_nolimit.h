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
 * $Filename__:codegen_srv_muldiv_nolimit.h$
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
 * $Name______:codegen_srv_muldiv_nolimit$
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

#ifndef _CODEGEN_SRV_MULDIV_NOLIMIT_H
#define _CODEGEN_SRV_MULDIV_NOLIMIT_H

/*********************************************************************************/
/* Multiplication with additional division (no limitation) */
/*********************************************************************************/

/* limited MultiplicationDivision,  result is s16 */

#define MulDiv_NOLIMIT_s8s16s8_s16(x, y, z)     (MulDiv_limit_s8s16s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MulDiv_NOLIMIT_s8s16s16_s16(x, y, z)    (MulDiv_limit_s8s16s16_s16((x), (y), (z))) /* limiting routine (less code) */

#define MulDiv_NOLIMIT_s16s8s8_s16(x, y, z)     (MulDiv_limit_s16s8s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MulDiv_NOLIMIT_s16s8s16_s16(x, y, z)    (MulDiv_limit_s16s8s16_s16((x), (y), (z))) /* limiting routine (less code) */

#define MulDiv_NOLIMIT_s16s16s8_s16(x, y, z)    (MulDiv_limit_s16s16s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MulDiv_NOLIMIT_s16s16s16_s16(x, y, z)   (MulDiv_limit_s16s16s16_s16((x), (y), (z))) /* limiting routine (less code) */

/* limited MultiplicationDivision,  result is u16 */
#define MulDiv_NOLIMIT_u8u16u8_u16(x, y, z)     (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MulDiv_NOLIMIT_u8u16u16_u16(x, y, z)    (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */

#define MulDiv_NOLIMIT_u16u8u8_u16(x, y, z)     (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MulDiv_NOLIMIT_u16u8u16_u16(x, y, z)    (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */

#define MulDiv_NOLIMIT_u16u16u8_u16(x, y, z)    (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MulDiv_NOLIMIT_u16u16u16_u16(x, y, z)   (MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */

#endif /* _CODEGEN_SRV_MULDIV_NOLIMIT_H */

