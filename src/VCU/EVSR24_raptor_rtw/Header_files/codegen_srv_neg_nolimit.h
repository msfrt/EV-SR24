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
 * $Filename__:codegen_srv_neg_nolimit.h$
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
 * $Name______:codegen_srv_neg_nolimit$
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

#ifndef _CODEGEN_SRV_NEG_NOLIMIT_H
#define _CODEGEN_SRV_NEG_NOLIMIT_H

/*********************************************************************************/
/* Negation unlimited*/
/*********************************************************************************/

#ifdef SrvB_Neg_S32_S8

/* unlimited negation, result is s8 */
#define Neg_NOLIMIT_s8_s8(x)    (SrvB_Neg_S32_S8((sint32)(x)))
#define neg_NOLIMIT_S8_S8(x)    (SrvB_Neg_S32_S8((sint32)(x)))

#else  /* SrvB_Neg_S32_S8 undefined */

/* unlimited negation, result is s8 */
#define Neg_NOLIMIT_s8_s8(x)    (neg_NOLIMIT_S32_S8((sint32)(x)))
#define neg_NOLIMIT_S8_S8(x)    (neg_NOLIMIT_S32_S8((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint8 neg_NOLIMIT_S32_S8(sint32 x);
INLINE_FUNCTION sint8 neg_NOLIMIT_S32_S8(sint32 x)
{
    return ((sint8)(-x));
}

#endif  /* SrvB_Neg_S32_S8 */


#ifdef SrvB_Neg_S32_S16

/* unlimited negation, result is s16 */
#define Neg_NOLIMIT_s8_s16(x)   (SrvB_Neg_S32_S16((sint32)(x)))
#define neg_NOLIMIT_S8_S16(x)   (SrvB_Neg_S32_S16((sint32)(x)))

#define Neg_NOLIMIT_u8_s16(x)   (SrvB_Neg_S32_S16((sint32)(x)))
#define neg_NOLIMIT_U8_S16(x)   (SrvB_Neg_S32_S16((sint32)(x)))

#define Neg_NOLIMIT_s16_s16(x)  (SrvB_Neg_S32_S16((sint32)(x)))
#define Neg_NOLIMIT_S16_S16(x)  (SrvB_Neg_S32_S16((sint32)(x)))

#else  /* SrvB_Neg_S32_S16 undefined */

/* unlimited negation, result is s16 */
#define Neg_NOLIMIT_s8_s16(x)   (neg_NOLIMIT_S32_S16((sint32)(x)))
#define neg_NOLIMIT_S8_S16(x)   (neg_NOLIMIT_S32_S16((sint32)(x)))

#define Neg_NOLIMIT_u8_s16(x)   (neg_NOLIMIT_S32_S16((sint32)(x)))
#define neg_NOLIMIT_U8_S16(x)   (neg_NOLIMIT_S32_S16((sint32)(x)))

#define Neg_NOLIMIT_s16_s16(x)  (neg_NOLIMIT_S32_S16((sint32)(x)))
#define neg_NOLIMIT_S16_S16(x)  (neg_NOLIMIT_S32_S16((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint16 neg_NOLIMIT_S32_S16(sint32 x);
INLINE_FUNCTION sint16 neg_NOLIMIT_S32_S16(sint32 x)
{
    return ((sint16)(-x));
}

#endif  /* SrvB_Neg_S32_S16 */


#ifdef SrvB_Neg_S32_S32

/* unlimited negation, result is s32 */
#define Neg_NOLIMIT_s8_s32(x)   (SrvB_Neg_S32_S32((sint32)(x)))
#define neg_NOLIMIT_S8_S32(x)   (SrvB_Neg_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_u8_s32(x)   (SrvB_Neg_S32_S32((sint32)(x)))
#define neg_NOLIMIT_U8_S32(x)   (SrvB_Neg_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_s16_s32(x)  (SrvB_Neg_S32_S32((sint32)(x)))
#define neg_NOLIMIT_S16_S32(x)  (SrvB_Neg_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_u16_s32(x)  (SrvB_Neg_S32_S32((sint32)(x)))
#define neg_NOLIMIT_U16_S32(x)  (SrvB_Neg_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_s32_s32(x)  (SrvB_Neg_S32_S32((sint32)(x)))
#define neg_NOLIMIT_S32_S32(x)  (SrvB_Neg_S32_S32((sint32)(x)))

#else  /* SrvB_Neg_S32_S32 undefined */

/* unlimited negation, result is s32 */
#define Neg_NOLIMIT_s8_s32(x)   (neg_NOLIMIT_S32_S32((sint32)(x)))
#define neg_NOLIMIT_S8_S32(x)   (neg_NOLIMIT_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_u8_s32(x)   (neg_NOLIMIT_S32_S32((sint32)(x)))
#define neg_NOLIMIT_U8_S32(x)   (neg_NOLIMIT_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_s16_s32(x)  (neg_NOLIMIT_S32_S32((sint32)(x)))
#define neg_NOLIMIT_S16_S32(x)  (neg_NOLIMIT_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_u16_s32(x)  (neg_NOLIMIT_S32_S32((sint32)(x)))
#define neg_NOLIMIT_U16_S32(x)  (neg_NOLIMIT_S32_S32((sint32)(x)))

#define Neg_NOLIMIT_s32_s32(x)  (neg_NOLIMIT_S32_S32((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint32 neg_NOLIMIT_S32_S32(sint32 x);
INLINE_FUNCTION sint32 neg_NOLIMIT_S32_S32(sint32 x)
{
    return ((sint32)(-x));
}

#endif  /* SrvB_Neg_S32_S32 */

#endif /* _CODEGEN_SRV_NEG_NOLIMIT_H */

