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
 * $Filename__:codegen_measpnt.h$
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
 * $Name______:codegen_measpnt$
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

#ifndef _CODEGEN_MEASPNT_H
#define _CODEGEN_MEASPNT_H

/*************************************************************************/
/* Measurment point typedefs                                             */
/*************************************************************************/

typedef uint8  MEASPNT_CONT_U8;
typedef uint16 MEASPNT_CONT_U16;
typedef uint32 MEASPNT_CONT_U32;

typedef sint8  MEASPNT_CONT_S8;
typedef sint16 MEASPNT_CONT_S16;
typedef sint32 MEASPNT_CONT_S32;

typedef real32 MEASPNT_CONT_R32;

typedef uint8  MEASPNT_UDISC_U8;
typedef uint16 MEASPNT_UDISC_U16;
typedef uint32 MEASPNT_UDISC_U32;

typedef sint8  MEASPNT_SDISC_S8;
typedef sint16 MEASPNT_SDISC_S16;
typedef sint32 MEASPNT_SDISC_S32;

typedef uint8  MEASPNT_LOGIC_U8;
typedef bool   MEASPNT_LOGIC_BOOL;

typedef real32 MEASPNT_CONT_REAL;

/*************************************************************************/
/* Measurment point typedefs (Arrays)                                    */
/*************************************************************************/

typedef uint8*  MEASPNTA_U8;
typedef uint16* MEASPNTA_U16;
typedef uint32* MEASPNTA_U32;

typedef sint8*  MEASPNTA_S8;
typedef sint16* MEASPNTA_S16;
typedef sint32* MEASPNTA_S32;

typedef real32* MEASPNTA_R32;


/*************************************************************************/
/* Measurment point prototypes                                           */
/*************************************************************************/

INLINE_FUNCTION uint8 MEASPNT_CONT_U8_write (MEASPNT_CONT_U8 * s, uint8  val);
INLINE_FUNCTION uint16 MEASPNT_CONT_U16_write (MEASPNT_CONT_U16 * s, uint16  val);
INLINE_FUNCTION uint32 MEASPNT_CONT_U32_write (MEASPNT_CONT_U32 * s, uint32  val);
INLINE_FUNCTION sint8 MEASPNT_CONT_S8_write (MEASPNT_CONT_S8 * s, sint8  val);
INLINE_FUNCTION sint16 MEASPNT_CONT_S16_write (MEASPNT_CONT_S16 * s, sint16  val);
INLINE_FUNCTION sint32 MEASPNT_CONT_S32_write (MEASPNT_CONT_S32 * s, sint32  val);
INLINE_FUNCTION real32 MEASPNT_CONT_R32_write (MEASPNT_CONT_R32 * s, real32  val);
INLINE_FUNCTION uint8 MEASPNT_UDISC_U8_write (MEASPNT_UDISC_U8 * s, uint8  val);
INLINE_FUNCTION uint16 MEASPNT_UDISC_U16_write (MEASPNT_UDISC_U16 * s, uint16  val);
INLINE_FUNCTION uint32 MEASPNT_UDISC_U32_write (MEASPNT_UDISC_U32 * s, uint32  val);
INLINE_FUNCTION sint8 MEASPNT_SDISC_S8_write (MEASPNT_SDISC_S8 * s, sint8  val);
INLINE_FUNCTION sint16 MEASPNT_SDISC_S16_write (MEASPNT_SDISC_S16 * s, sint16  val);
INLINE_FUNCTION sint32 MEASPNT_SDISC_S32_write (MEASPNT_SDISC_S32 * s, sint32  val);
INLINE_FUNCTION uint8 MEASPNT_LOGIC_U8_write (MEASPNT_LOGIC_U8 * s, uint8  val);
INLINE_FUNCTION bool MEASPNT_LOGIC_BOOL_write( MEASPNT_LOGIC_BOOL * s, bool val );
INLINE_FUNCTION real32 MEASPNT_CONT_REAL_write( MEASPNT_CONT_REAL * s, real32 val );

/*************************************************************************/
/* Measurment point inline functions                                     */
/*************************************************************************/

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint8 MEASPNT_CONT_U8_write (MEASPNT_CONT_U8 * s, uint8  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint16 MEASPNT_CONT_U16_write (MEASPNT_CONT_U16 * s, uint16  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint32 MEASPNT_CONT_U32_write (MEASPNT_CONT_U32 * s, uint32  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint8 MEASPNT_CONT_S8_write (MEASPNT_CONT_S8 * s, sint8  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint16 MEASPNT_CONT_S16_write (MEASPNT_CONT_S16 * s, sint16  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint32 MEASPNT_CONT_S32_write (MEASPNT_CONT_S32 * s, sint32  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION real32 MEASPNT_CONT_R32_write (MEASPNT_CONT_R32 * s, real32  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint8 MEASPNT_UDISC_U8_write (MEASPNT_UDISC_U8 * s, uint8  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint16 MEASPNT_UDISC_U16_write (MEASPNT_UDISC_U16 * s, uint16  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint32 MEASPNT_UDISC_U32_write (MEASPNT_UDISC_U32 * s, uint32  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint8 MEASPNT_SDISC_S8_write (MEASPNT_SDISC_S8 * s, sint8  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint16 MEASPNT_SDISC_S16_write (MEASPNT_SDISC_S16 * s, sint16  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION sint32 MEASPNT_SDISC_S32_write (MEASPNT_SDISC_S32 * s, sint32  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION uint8 MEASPNT_LOGIC_U8_write (MEASPNT_LOGIC_U8 * s, uint8  val)
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION bool MEASPNT_LOGIC_BOOL_write( MEASPNT_LOGIC_BOOL * s, bool val )
{
    *s = val;
    return (val);
}

/* MISRA RULE 8.5 VIOLATION: Inline function which must be shared between several C-files are an allowed exception to this rule, if they are declared as static inline (UBK-PMT ECU Programming Guideline V1.1  */
INLINE_FUNCTION real32 MEASPNT_CONT_REAL_write( MEASPNT_CONT_REAL * s, real32 val )
{
    *s = val;
    return (val);
}

/*************************************************************************/
/* Measurment point inline functions  (Arrays)                           */
/*************************************************************************/

#define MEASPNTA_CONT_U8_write(s, val, idx) MEASPNTA_U8_write(*(s), val, idx)
#define MEASPNTA_CONT_U16_write(s, val, idx) MEASPNTA_U16_write(*(s), val, idx)
#define MEASPNTA_CONT_U32_write(s, val, idx) MEASPNTA_U32_write(*(s), val, idx)
#define MEASPNTA_CONT_S8_write(s, val, idx) MEASPNTA_S8_write(*(s), val, idx)
#define MEASPNTA_CONT_S16_write(s, val, idx) MEASPNTA_S16_write(*(s), val, idx)
#define MEASPNTA_CONT_S32_write(s, val, idx) MEASPNTA_S32_write(*(s), val, idx)
#define MEASPNTA_CONT_R32_write(s, val, idx) MEASPNTA_R32_write(*(s), val, idx)

#define MEASPNTA_UDISC_U8_write(s, val, idx) MEASPNTA_U8_write(*(s), val, idx)
#define MEASPNTA_UDISC_U16_write(s, val, idx) MEASPNTA_U16_write(*(s), val, idx)
#define MEASPNTA_UDISC_U32_write(s, val, idx) MEASPNTA_U32_write(*(s), val, idx)

#define MEASPNTA_SDISC_S8_write(s, val, idx) MEASPNTA_S8_write(*(s), val, idx)
#define MEASPNTA_SDISC_S16_write(s, val, idx) MEASPNTA_S16_write(*(s), val, idx)
#define MEASPNTA_SDISC_S32_write(s, val, idx) MEASPNTA_S32_write(*(s), val, idx)

#define MEASPNTA_LOGIC_U8_write(s, val, idx) MEASPNTA_U8_write(*(s), val, idx)


INLINE_FUNCTION uint8 MEASPNTA_U8_write (MEASPNTA_U8 s, uint8  val, uint16 idx);
INLINE_FUNCTION uint8 MEASPNTA_U8_write (MEASPNTA_U8 s, uint8  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION uint16 MEASPNTA_U16_write (MEASPNTA_U16 s, uint16  val, uint16 idx);
INLINE_FUNCTION uint16 MEASPNTA_U16_write (MEASPNTA_U16 s, uint16  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION uint32 MEASPNTA_U32_write (MEASPNTA_U32 s, uint32  val, uint16 idx);
INLINE_FUNCTION uint32 MEASPNTA_U32_write (MEASPNTA_U32 s, uint32  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION sint8 MEASPNTA_S8_write (MEASPNTA_S8 s, sint8  val, uint16 idx);
INLINE_FUNCTION sint8 MEASPNTA_S8_write (MEASPNTA_S8 s, sint8  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION sint16 MEASPNTA_S16_write (MEASPNTA_S16 s, sint16  val, uint16 idx);
INLINE_FUNCTION sint16 MEASPNTA_S16_write (MEASPNTA_S16 s, sint16  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION sint32 MEASPNTA_S32_write (MEASPNTA_S32 s, sint32  val, uint16 idx);
INLINE_FUNCTION sint32 MEASPNTA_S32_write (MEASPNTA_S32 s, sint32  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

INLINE_FUNCTION real32 MEASPNTA_R32_write (MEASPNTA_R32 s, real32  val, uint16 idx);
INLINE_FUNCTION real32 MEASPNTA_R32_write (MEASPNTA_R32 s, real32  val, uint16 idx)
{
        s[idx] = val;
        return (val);
}

#endif  /*#ifndef _CODEGEN_MEASPNT_H*/

