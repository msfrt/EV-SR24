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
 * $Filename__:codegen_srv_abs_nolimit.h$
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
 * $Name______:codegen_srv_abs_nolimit$
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

#ifndef _CODEGEN_SRV_ABS_NOLIMIT_H
#define _CODEGEN_SRV_ABS_NOLIMIT_H

/*********************************************************************************/
/* Absolute values */
/*********************************************************************************/

#ifdef SrvB_Abs_S32_S8

/* unlimited absolute value, result is s8 */
#define Abs_NOLIMIT_s8_s8(x)            (SrvB_Abs_S32_S8((sint32)(x)))
#define Abs_NOLIMIT_s16_s8(x)           (SrvB_Abs_S32_S8((sint32)(x)))
#define Abs_NOLIMIT_s32_s8(x)           (SrvB_Abs_S32_S8((sint32)(x)))

#define abs_NOLIMIT_S8_S8(x)            (SrvB_Abs_S32_S8((sint32)(x)))
#define abs_NOLIMIT_S16_S8(x)           (SrvB_Abs_S32_S8((sint32)(x)))
#define abs_NOLIMIT_S32_S8(x)           (SrvB_Abs_S32_S8((sint32)(x)))

#else /* SrvB_Abs_S32_S8 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is s8 */
#define Abs_NOLIMIT_s8_s8(x)            (abs_NOLIMIT_S32_S8((sint32)(x)))
#define Abs_NOLIMIT_s16_s8(x)           (abs_NOLIMIT_S32_S8((sint32)(x)))
#define Abs_NOLIMIT_s32_s8(x)           (abs_NOLIMIT_S32_S8((sint32)(x)))

#define abs_NOLIMIT_S8_S8(x)            (abs_NOLIMIT_S32_S8((sint32)(x)))
#define abs_NOLIMIT_S16_S8(x)           (abs_NOLIMIT_S32_S8((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint8  abs_NOLIMIT_S32_S8(sint32 x);
INLINE_FUNCTION sint8  abs_NOLIMIT_S32_S8(sint32 x)
{
    if (x < 0)
    {
        x = -x;
    }
    return ((sint8)x);
}

#endif  /* SrvB_Abs_S32_S8 */


#ifdef SrvB_Abs_S32_U8

/* unlimited absolute value, result is u8 */
#define Abs_NOLIMIT_s8_u8(x)            (SrvB_Abs_S32_U8((sint32)(x)))
#define Abs_NOLIMIT_s16_u8(x)           (SrvB_Abs_S32_U8((sint32)(x)))
#define Abs_NOLIMIT_s32_u8(x)           (SrvB_Abs_S32_U8((sint32)(x)))

#define abs_NOLIMIT_S8_U8(x)            (SrvB_Abs_S32_U8((sint32)(x)))
#define abs_NOLIMIT_S16_U8(x)           (SrvB_Abs_S32_U8((sint32)(x)))
#define abs_NOLIMIT_S32_U8(x)           (SrvB_Abs_S32_U8((sint32)(x)))

#else /* SrvB_Abs_S32_U8 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is u8 */
#define Abs_NOLIMIT_s8_u8(x)            (abs_NOLIMIT_S32_U8((sint32)(x)))
#define Abs_NOLIMIT_s16_u8(x)           (abs_NOLIMIT_S32_U8((sint32)(x)))
#define Abs_NOLIMIT_s32_u8(x)           (abs_NOLIMIT_S32_U8((sint32)(x)))

#define abs_NOLIMIT_S8_U8(x)            (abs_NOLIMIT_S32_U8((sint32)(x)))
#define abs_NOLIMIT_S16_U8(x)           (abs_NOLIMIT_S32_U8((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint8  abs_NOLIMIT_S32_U8(sint32 x);
INLINE_FUNCTION uint8  abs_NOLIMIT_S32_U8(sint32 x)
{
    if (x < 0)
    {
        x = -x;
    }
    return ((uint8)x);
}

#endif  /* SrvB_Abs_S32_U8 */


#ifdef SrvB_Abs_S32_S16

/* unlimited absolute value, result is s16 */
#define Abs_NOLIMIT_s8_s16(x)           (SrvB_Abs_S32_S16((sint32)(x)))
#define Abs_NOLIMIT_s16_s16(x)          (SrvB_Abs_S32_S16((sint32)(x)))
#define Abs_NOLIMIT_s32_s16(x)          (SrvB_Abs_S32_S16((sint32)(x)))

#define abs_NOLIMIT_S8_S16(x)           (SrvB_Abs_S32_S16((sint32)(x)))
#define abs_NOLIMIT_S16_S16(x)          (SrvB_Abs_S32_S16((sint32)(x)))
#define abs_NOLIMIT_S32_S16(x)          (SrvB_Abs_S32_S16((sint32)(x)))

#else /* SrvB_Abs_S32_S16 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is s16 */
#define Abs_NOLIMIT_s8_s16(x)           (abs_NOLIMIT_S32_S16((sint32)(x)))
#define Abs_NOLIMIT_s16_s16(x)          (abs_NOLIMIT_S32_S16((sint32)(x)))
#define Abs_NOLIMIT_s32_s16(x)          (abs_NOLIMIT_S32_S16((sint32)(x)))

#define abs_NOLIMIT_S8_S16(x)           (abs_NOLIMIT_S32_S16((sint32)(x)))
#define abs_NOLIMIT_S16_S16(x)          (abs_NOLIMIT_S32_S16((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint16  abs_NOLIMIT_S32_S16(sint32 x);
INLINE_FUNCTION sint16  abs_NOLIMIT_S32_S16(sint32 x)
{
    if (x < 0)
    {
        x = -x;
    }
    return ((sint16)x);
}

#endif  /* SrvB_Abs_S32_S16 */


#ifdef SrvB_Abs_S32_U16

/* unlimited absolute value, result is u16 */
#define Abs_NOLIMIT_s8_u16(x)           (SrvB_Abs_S32_U16((sint32)(x)))
#define Abs_NOLIMIT_s16_u16(x)          (SrvB_Abs_S32_U16((sint32)(x)))
#define Abs_NOLIMIT_s32_u16(x)          (SrvB_Abs_S32_U16((sint32)(x)))

#define abs_NOLIMIT_S8_U16(x)           (SrvB_Abs_S32_U16((sint32)(x)))
#define abs_NOLIMIT_S16_U16(x)          (SrvB_Abs_S32_U16((sint32)(x)))
#define abs_NOLIMIT_S32_U16(x)          (SrvB_Abs_S32_U16((sint32)(x)))

#else /* SrvB_Abs_S32_U16 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is u16 */
#define Abs_NOLIMIT_s8_u16(x)           (abs_NOLIMIT_S32_U16((sint32)(x)))
#define Abs_NOLIMIT_s16_u16(x)          (abs_NOLIMIT_S32_U16((sint32)(x)))
#define Abs_NOLIMIT_s32_u16(x)          (abs_NOLIMIT_S32_U16((sint32)(x)))

#define abs_NOLIMIT_S8_U16(x)           (abs_NOLIMIT_S32_U16((sint32)(x)))
#define abs_NOLIMIT_S16_U16(x)          (abs_NOLIMIT_S32_U16((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint16  abs_NOLIMIT_S32_U16(sint32 x);
INLINE_FUNCTION uint16  abs_NOLIMIT_S32_U16(sint32 x)
{
    if (x < 0)
    {
        x = -x;
    }
    return ((uint16)x);
}

#endif  /* SrvB_Abs_S32_U16 */


#ifdef SrvB_Abs_S32_S32

/* unlimited absolute value, result is s32 */
#define Abs_NOLIMIT_s8_s32(x)           (SrvB_Abs_S32_S32((sint32)(x)))
#define Abs_NOLIMIT_s16_s32(x)          (SrvB_Abs_S32_S32((sint32)(x)))
#define Abs_NOLIMIT_s32_s32(x)          (SrvB_Abs_S32_S32((sint32)(x)))

#define abs_NOLIMIT_S8_S32(x)           (SrvB_Abs_S32_S32((sint32)(x)))
#define abs_NOLIMIT_S16_S32(x)          (SrvB_Abs_S32_S32((sint32)(x)))
#define abs_NOLIMIT_S32_S32(x)          (SrvB_Abs_S32_S32((sint32)(x)))

#else /* SrvB_Abs_S32_S32 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is s32 */
#define Abs_NOLIMIT_s8_s32(x)           (abs_NOLIMIT_S32_S32((sint32)(x)))
#define Abs_NOLIMIT_s16_s32(x)          (abs_NOLIMIT_S32_S32((sint32)(x)))
#define Abs_NOLIMIT_s32_s32(x)          (abs_NOLIMIT_S32_S32((sint32)(x)))

#define abs_NOLIMIT_S8_S32(x)           (abs_NOLIMIT_S32_S32((sint32)(x)))
#define abs_NOLIMIT_S16_S32(x)          (abs_NOLIMIT_S32_S32((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint32  abs_NOLIMIT_S32_S32(sint32 x);
INLINE_FUNCTION sint32  abs_NOLIMIT_S32_S32(sint32 x)
{
    if (x < (sint32)0)
    {
        x = -x;
    }
    return (x);
}

#endif  /* SrvB_Abs_S32_S32 */


#ifdef SrvB_Abs_S32_U32

/* unlimited absolute value, result is u32 */
#define Abs_NOLIMIT_s8_u32(x)           (SrvB_Abs_S32_U32((sint32)(x)))
#define Abs_NOLIMIT_s16_u32(x)          (SrvB_Abs_S32_U32((sint32)(x)))
#define Abs_NOLIMIT_s32_u32(x)          (SrvB_Abs_S32_U32((sint32)(x)))

#define abs_NOLIMIT_S8_U32(x)           (SrvB_Abs_S32_U32((sint32)(x)))
#define abs_NOLIMIT_S16_U32(x)          (SrvB_Abs_S32_U32((sint32)(x)))
#define abs_NOLIMIT_S32_U32(x)          (SrvB_Abs_S32_U32((sint32)(x)))

#else /* SrvB_Abs_S32_U32 undefined */

/* Overflow is checked by ASCET where critical */
/* unlimited absolute value, result is u32 */
#define Abs_NOLIMIT_s8_u32(x)           (abs_NOLIMIT_S32_U32((sint32)(x)))
#define Abs_NOLIMIT_s16_u32(x)          (abs_NOLIMIT_S32_U32((sint32)(x)))
#define Abs_NOLIMIT_s32_u32(x)          (abs_NOLIMIT_S32_U32((sint32)(x)))

#define abs_NOLIMIT_S8_U32(x)           (abs_NOLIMIT_S32_U32((sint32)(x)))
#define abs_NOLIMIT_S16_U32(x)          (abs_NOLIMIT_S32_U32((sint32)(x)))

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint32  abs_NOLIMIT_S32_U32(sint32 x);
INLINE_FUNCTION uint32  abs_NOLIMIT_S32_U32(sint32 x)
{
    if (x < (sint32)0)
    {
        x = -x;
    }
    return ((uint32)x);
}

#endif  /* SrvB_Abs_S32_U32 */

#endif /* _CODEGEN_SRV_ABS_NOLIMIT_H */

