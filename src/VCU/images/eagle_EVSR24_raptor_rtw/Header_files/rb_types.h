/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:rb_types.h$
 * $Author____:VKA2FE$
 * $Function__:PSA DS specific variant of FC: SrvA_Ascet, derived from ClearCase
 *              for migration$
 * $Domain____:SDOM$
 * $User______:RAT1COB$
 * $Date______:22.07.2010$
 * $Class_____:SWHDR$
 * $Name______:rb_types$
 * $Variant___:1.14.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 1     22.07.2010 RAT1COB
 *   Removing MISRA warnings
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/


#ifndef _RB_TYPES_H
#define _RB_TYPES_H


/**
 **********************************************************************************************************************
 * \moduledescription
 *           Rb Specific Add Ons to AUTOSAR Standard and Platform Dependent Types
 * \scope    INTERN
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include "Std_Types.h"

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* Limits of Standard Data Types */
#define Rb_MAXUINT8        (0xff)
#define Rb_MINUINT8        (0x0)
#define Rb_MAXSINT8        (0x7f)
#define Rb_MINSINT8        (-(Rb_MAXSINT8) - 1)
#define Rb_MAXUINT16       (0xffff)
#define Rb_MINUINT16       (0x0)
#define Rb_MAXSINT16       (0x7fff)
#define Rb_MINSINT16       (-(Rb_MAXSINT16) - 1)
#define Rb_MAXUINT32       (0xfffffffful)
#define Rb_MINUINT32       (0x0ul)
#define Rb_MAXSINT32       (0x7fffffffl)
#define Rb_MINSINT32       (-(Rb_MAXSINT32) - 1l)
#define Rb_MAXREAL32       (3.40282347E38F)
#define Rb_MINREAL32       (1.17549435E-38F)
#define Rb_MAXREAL64       (1.7976931348623157E308)
#define Rb_MINREAL64       (2.2250738585072016E-308)


/* Definition of Bit Masks */
#define Rb_MBIT0           (0x00000001ul)
#define Rb_MBIT1           (0x00000002ul)
#define Rb_MBIT2           (0x00000004ul)
#define Rb_MBIT3           (0x00000008ul)
#define Rb_MBIT4           (0x00000010ul)
#define Rb_MBIT5           (0x00000020ul)
#define Rb_MBIT6           (0x00000040ul)
#define Rb_MBIT7           (0x00000080ul)
#define Rb_MBIT8           (0x00000100ul)
#define Rb_MBIT9           (0x00000200ul)
#define Rb_MBITA           (0x00000400ul)
#define Rb_MBITB           (0x00000800ul)
#define Rb_MBITC           (0x00001000ul)
#define Rb_MBITD           (0x00002000ul)
#define Rb_MBITE           (0x00004000ul)
#define Rb_MBITF           (0x00008000ul)
#define Rb_MBIT10          (0x00010000ul)
#define Rb_MBIT11          (0x00020000ul)
#define Rb_MBIT12          (0x00040000ul)
#define Rb_MBIT13          (0x00080000ul)
#define Rb_MBIT14          (0x00100000ul)
#define Rb_MBIT15          (0x00200000ul)
#define Rb_MBIT16          (0x00400000ul)
#define Rb_MBIT17          (0x00800000ul)
#define Rb_MBIT18          (0x01000000ul)
#define Rb_MBIT19          (0x02000000ul)
#define Rb_MBIT1A          (0x04000000ul)
#define Rb_MBIT1B          (0x08000000ul)
#define Rb_MBIT1C          (0x10000000ul)
#define Rb_MBIT1D          (0x20000000ul)
#define Rb_MBIT1E          (0x40000000ul)
#define Rb_MBIT1F          (0x80000000ul)


/******************************************/
/* Rb_Sint16_un */
typedef struct
{
    #if (CPU_BYTE_ORDER == MSB_FIRST)
    sint8 h;
    uint8 l;
    #else
    uint8 l;
    sint8 h;
    #endif
} Rb_Sint16_st;
/* MISRA RULE 18.4 VIOLATION: a union is needed */
typedef union
{
    sint16         s16;
    Rb_Sint16_st   s16s;
} Rb_Sint16_un;

/******************************************/
/* Rb_Uint16_un */
typedef struct
{
    #if (CPU_BYTE_ORDER == MSB_FIRST)
    uint8 h;
    uint8 l;
    #else
    uint8 l;
    uint8 h;
    #endif
} Rb_Uint16_st;
/* MISRA RULE 18.4 VIOLATION: a union is needed */
typedef union
{
    uint16         u16;
    Rb_Uint16_st   u16s;
} Rb_Uint16_un;

/******************************************/
/* sint32u */
typedef struct
{
    #if (CPU_BYTE_ORDER == MSB_FIRST)
    sint16 h;
    uint16 l;
    #else
    uint16 l;
    sint16 h;
    #endif
} Rb_Sint32_st;
/* MISRA RULE 18.4 VIOLATION: a union is needed */
typedef union
{
    sint32         s32;
    Rb_Sint32_st   s32s;
} Rb_Sint32_un;

/******************************************/
/* uint32u */
typedef struct
{
    #if (CPU_BYTE_ORDER == MSB_FIRST)
    uint16 h;
    uint16 l;
    #else
    uint16 l;
    uint16 h;
    #endif
} Rb_Uint32_st;
/* MISRA RULE 18.4 VIOLATION: a union is needed */
typedef union
{
    uint32         u32;
    Rb_Uint32_st   u32s;
} Rb_Uint32_un;


/* _RB_TYPES_H */
#endif
