/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:std_type.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:22.07.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:std_type$ 
 * $Variant___:1.14.0$ 
 * $Revision__:2$ 
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
 * 1.14.0; 2     22.07.2010 RAT1COB
 *   Removing MISRA warnings
 * 
 * 1.14.0; 1     29.06.2010 MZT2FE
 *   Update.
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   .
 * 
 * 1.9.0; 0     25.08.2008 KLMEYER
 *   Initial import from Clearcase 
 *      File name: std_type.h
 *      Version: \main\12
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/*******************************************************************************
 *    MODULE:       Standard Header                                            *
 *                                                                             *
 *    FILE:         std_type.h                                                 *
 *                                                                             *
 *    DESCRIPTION:  project independend header file used by ETAS and BOSCH     *
 *                                                                             *
 *    AUTHOR:       ETAS/PSC1-Gw                                               *
 *                                                                             *
 *    CREATED:      12.11.1999  16:22:16                                       *
 *                                                                             *
 *    COPYRIGHT:    ETAS GmbH                                                  *
 *                  ROBERT BOSCH GmbH                                          *
 *                  Stuttgart                                                  *
 *                  All rights reserved                                        *
 *******************************************************************************


 Notes:         Changes to this file are only
                allowed after consulting all
                involved persons/departments.


 Responsibles:  ETAS  PSC1      Claus Spizig
                BOSCH GS/EC     Uwe Daemmrich
                BOSCH GS/EC     Klaus-Gerd Meyer
                BOSCH DS/ESP2   Markus Elmar
                BOSCH AE/EWG    Tobias Ernst


 History:
 --------

who    when             what
-------------------------------------------------------------------------------
Zr  10.07.2001  xxxxx   moved to line 03b
Zr  10.07.2001  37370   removed prototypes for boot OS
Gw  26.11.2002  39470   a) constant-limits: definitions faulty
                        b) changed responsibilities for this file, updated comments
Gw  26.11.2002  45308   Modification of std_type.h to allow uint64 definition for other
                        compilers than the diab, use __use64integers__ compiler switch
Gw  26.11.2002  45818   Additional struct-/union-type-definitions in std_type.h
Sz  06.02.2003  46277   Removed integral literal suffixes for 8- and 16 bit at
                        defintions of FALSE, MAXUINT8 and MAXUINT16
Sz  15.05.2003  47762   HIGH_BYTE_FIRST implemented incorrect
Ew  26.05.2003  48776   Sign bit is at wrong position of types in std_type.h
Bn  23.02.2005  44805   NESTOR header inserted for use in MEDC17 environment
Hc  18.07.2005  31365   data type _bit inserted for use with other targets than TriCore
Bn  25.04.2006          #defines for MINUINTx added (needed by ASCET generated code)
Ks  17.05.2010          Modification because of AUTOSAR, include of "Std_Types.h", removing some definitions
*/

#ifndef _STD_TYPE_H
#define _STD_TYPE_H

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include "Std_Types.h"
#include "Rb_Types.h"


/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/* FALSE is defined in "Platform_Types.h"            */
/* Redefine TRUE because of different old definition */
#undef  TRUE
#define TRUE            (!FALSE)

#define VALID           (0)
#define NOT_VALID       (!VALID)

/* NULL pointer */
#ifndef NULL
#define NULL            (0)
#endif

/* limits of data types */
#define MAXUINT8        (0xff)
#define MINUINT8        (0x0)
#define MAXSINT8        (0x7f)
#define MINSINT8        (-(MAXSINT8) - 1)
#define MAXUINT16       (0xffff)
#define MINUINT16       (0x0)
#define MAXSINT16       (0x7fff)
#define MINSINT16       (-(MAXSINT16) - 1)
#define MAXUINT32       (0xfffffffful)
#define MINUINT32       (0x0ul)
#define MAXSINT32       (0x7fffffffl)
#define MINSINT32       (-(MAXSINT32) - 1l)
#define MAXREAL32       (3.40282347E38F)
#define MINREAL32       (1.17549435E-38F)
#define MAXREAL64       (1.7976931348623157E308)
#define MINREAL64       (2.2250738585072016E-308)

/* compatibility defines for not UBK conform software: ASCET */
/* these defines should be removed as fast as possible */
#define UINT8_MAX       MAXUINT8
#define UINT8_MIN       MINUINT8
#define SINT8_MAX       MAXSINT8
#define SINT8_MIN       MINSINT8
#define UINT16_MAX      MAXUINT16
#define UINT16_MIN      MINUINT16
#define SINT16_MAX      MAXSINT16
#define SINT16_MIN      MINSINT16
#define UINT32_MAX      MAXUINT32
#define UINT32_MIN      MINUINT32
#define SINT32_MAX      MAXSINT32
#define SINT32_MIN      MINSINT32

#define b_BBasT         uint8
#define w_BBasT         uint16
#define l_BBasT         uint32

#define b_MASK          (uint8)0xFFu
#define w_MASK          (uint16)0xFFFFu
#define l_MASK          (uint32)0xFFFFFFFFul

/* definition of bit masks */
#define MBIT0           (0x00000001)
#define MBIT1           (0x00000002)
#define MBIT2           (0x00000004)
#define MBIT3           (0x00000008)
#define MBIT4           (0x00000010)
#define MBIT5           (0x00000020)
#define MBIT6           (0x00000040)
#define MBIT7           (0x00000080)
#define MBIT8           (0x00000100)
#define MBIT9           (0x00000200)
#define MBITA           (0x00000400)
#define MBITB           (0x00000800)
#define MBITC           (0x00001000)
#define MBITD           (0x00002000)
#define MBITE           (0x00004000)
#define MBITF           (0x00008000)
#define MBIT10          (0x00010000)
#define MBIT11          (0x00020000)
#define MBIT12          (0x00040000)
#define MBIT13          (0x00080000)
#define MBIT14          (0x00100000)
#define MBIT15          (0x00200000)
#define MBIT16          (0x00400000)
#define MBIT17          (0x00800000)
#define MBIT18          (0x01000000)
#define MBIT19          (0x02000000)
#define MBIT1A          (0x04000000)
#define MBIT1B          (0x08000000)
#define MBIT1C          (0x10000000)
#define MBIT1D          (0x20000000)
#define MBIT1E          (0x40000000)
#define MBIT1F          (0x80000000)


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

#if !defined(_C166)
    /* tasking compiler uses bit type */
    typedef unsigned char  bit;
#endif

#if !defined(__tricore__)
    /* TriCore compiler uses _bit type. It is limited to global and static variables */
    typedef unsigned char  _bit;
#endif


typedef unsigned char  bool;

typedef unsigned char  bit8;
typedef unsigned short bit16;
typedef unsigned long  bit32;

typedef unsigned int   uint;
typedef signed int     sint;
typedef double         real;

typedef float          real32;
typedef double         real64;

/******************************************/
/* sint16u */
typedef struct
{
  #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
   sint8 h;
   uint8 l;
  #else
   uint8 l;
   sint8 h;
  #endif
} sint16s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
typedef union
{
   sint16    s16;
   sint16s   s16s;
} sint16u;

/******************************************/
/* uint16u */
typedef struct
{
  #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
   uint8 h;
   uint8 l;
  #else
   uint8 l;
   uint8 h;
  #endif
} uint16s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
typedef union
{
   uint16    u16;
   uint16s   u16s;
} uint16u;

/******************************************/
/* sint32u */
typedef struct
{
  #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
   sint16 h;
   uint16 l;
  #else
   uint16 l;
   sint16 h;
  #endif
} sint32s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
typedef union
{
   sint32    s32;
   sint32s   s32s;
} sint32u;

/******************************************/
/* uint32u */
typedef struct
{
  #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
   uint16 h;
   uint16 l;
  #else
   uint16 l;
   uint16 h;
  #endif
} uint32s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
typedef union
{
   uint32    u32;
   uint32s   u32s;
} uint32u;
/******************************************/


#if defined(__DCC__)  || defined(__use64integers__)
    #ifndef __E_TARTYP_H
        #ifndef __QA_C_CHECKER
            /* diab compiler supports long long type. */
            /* explicitly define  __use64integers__ for other compilers supporting this type. */
            typedef unsigned long long uint64;
            typedef signed long long   sint64;
        #else
            typedef unsigned long uint64;
            typedef signed long   sint64;
        #endif
    #endif

    /******************************************/
    /* sint64u */
    typedef struct
    {
      #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
       sint32 h;
       uint32 l;
      #else
       uint32 l;
       sint32 h;
      #endif
    } sint64s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
    typedef union
    {
       sint64    s64;
       sint64s   s64s;
    } sint64u;

    /******************************************/
    /* uint64u */
    typedef struct
    {
      #if ((defined (HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))
       uint32 h;
       uint32 l;
      #else
       uint32 l;
       uint32 h;
      #endif
    } uint64s;
/* MISRA RULE 18.4 VIOLATION: a union is useful here to save ressources */
    typedef union
    {
       uint64    u64;
       uint64s   u64s;
    } uint64u;

#endif


#endif /* _STD_TYPE_H */

/*************************************************************************************************/
