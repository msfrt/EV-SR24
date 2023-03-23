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
 * $Filename__:e_std_type.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:26.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_std_type$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/*******************************************************************************
 *    MODULE:       Standard Header                                            *
 *                                                                             *
 *    FILE:         e_std_type.h                                               *
 *                                                                             *
 *    DESCRIPTION:  Header used for definitions within the Kernel              *
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
 
This header is not intended to be included by the application directly. 
Use E_INFACE.H to include this header.
For standard type definitions in applications use std_type.h


 History:
 --------

who    when                 what
-------------------------------------------------------------------------------
Zr  10.07.2001  xxxxx       moved to line 03b
Zr  10.07.2001  37370       removed prototypes for boot OS
Gw  26.11.2002  39470       a) constant-limits: definitions faulty
                            b) changed responsibilities for this file, updated comments
Gw  26.11.2002  45308       Modification of std_type.h to allow uint64 definition for other
                            compilers than the diab, use __use64integers__ compiler switch
Gw  26.11.2002  45818       Additional struct-/union-type-definitions in std_type.h
Sz  06.02.2003  46277       Removed integral literal suffixes for 8- and 16 bit at 
                            defintions of FALSE, MAXUINT8 and MAXUINT16
Vr  27.02.2003  42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Sz  15.05.2003  47762       HIGH_BYTE_FIRST implemented incorrect          
Ew  25.06.2003  48776       Sign bit is at wrong position of types in std_type.h
Sz  02.12.2003  51492       position of sign bit of sint32s and sint64s wrong
Sz  02.12.2003  49502       Improve MISRA compliance of MINSINT32 definition
Sz  13.02.2004  52699       Added description of usage of this header, removed unused parts
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE VIOLATION: Warning 620 Suspicious constant L or one.
                            [Classified:Mistake]
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE 52 VIOLATION: Warning 506 constant value boolean.
                            [Classified:Unknown]
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE 18 VIOLATION: Numerical constant requires suffix.
                            [Classified:Mistake] 
*/

#ifndef _E_STD_TYPE_H
#define _E_STD_TYPE_H

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/* boolean values */
#define OS_FALSE           (0)
/*MISRA RULE 52 VIOLATION: Warning 506 constant value boolean.[Classified:Unknown].*/                        
#define OS_TRUE            (!OS_FALSE)


#define OS_VALID           (0)    
#define OS_NOT_VALID       (!OS_VALID)

/* NULL pointer */
#ifndef OS_NULL
#define OS_NULL            (0)
#endif

/* limits of data types */ 
#define OS_MAXUINT8        (0xff)
#define OS_MAXSINT8        (0x7f)
#define OS_MINSINT8        (-(OS_MAXSINT8) - 1)
#define OS_MAXUINT16       (0xffff)
#define OS_MAXSINT16       (0x7fff)
#define OS_MINSINT16       (-(OS_MAXSINT16) - 1)
#define OS_MAXUINT32       (0xffffffffuL)
#define OS_MAXSINT32       (0x7fffffffL)
#define OS_MINSINT32       (-(OS_MAXSINT32) - 1L)
#define OS_MAXREAL32       (3.40282347E38F)
#define OS_MINREAL32       (1.17549435E-38F)
#define OS_MAXREAL64       (1.7976931348623157E308)
#define OS_MINREAL64       (2.2250738585072016E-308)


/* definition of bit masks */
#define OS_MBIT0           (0x00000001)
#define OS_MBIT1           (0x00000002)
#define OS_MBIT2           (0x00000004)
#define OS_MBIT3           (0x00000008)
#define OS_MBIT4           (0x00000010)
#define OS_MBIT5           (0x00000020)
#define OS_MBIT6           (0x00000040)
#define OS_MBIT7           (0x00000080)
#define OS_MBIT8           (0x00000100)
#define OS_MBIT9           (0x00000200)
#define OS_MBITA           (0x00000400)
#define OS_MBITB           (0x00000800)
#define OS_MBITC           (0x00001000)
#define OS_MBITD           (0x00002000)
#define OS_MBITE           (0x00004000)
#define OS_MBITF           (0x00008000)
#define OS_MBIT10          (0x00010000)
#define OS_MBIT11          (0x00020000)
#define OS_MBIT12          (0x00040000)
#define OS_MBIT13          (0x00080000)
#define OS_MBIT14          (0x00100000)
#define OS_MBIT15          (0x00200000)
#define OS_MBIT16          (0x00400000)
#define OS_MBIT17          (0x00800000)
#define OS_MBIT18          (0x01000000)
#define OS_MBIT19          (0x02000000)
#define OS_MBIT1A          (0x04000000)
#define OS_MBIT1B          (0x08000000)
#define OS_MBIT1C          (0x10000000)
#define OS_MBIT1D          (0x20000000)
#define OS_MBIT1E          (0x40000000)
#define OS_MBIT1F          (0x80000000u)


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

#if !defined(_C166)
    /* tasking compiler uses bit type */
    typedef unsigned char  T_os_bit;   
#endif


typedef unsigned char  T_os_bool;

typedef unsigned char  T_os_bit8;
typedef unsigned short T_os_bit16;
typedef unsigned long  T_os_bit32;

typedef unsigned int   T_os_uint;
typedef signed int     T_os_sint;
typedef double         T_os_real;

typedef unsigned char  T_os_uint8;
typedef signed char    T_os_sint8;
typedef unsigned short T_os_uint16;
typedef signed short   T_os_sint16;
typedef unsigned long  T_os_uint32;
typedef signed long    T_os_sint32;
typedef float          T_os_real32;
typedef double         T_os_real64;

/******************************************/
#if defined(__DCC__)  || defined(__use64integers__)
    #ifndef __E_TARTYP_H
        #ifndef __QA_C_CHECKER 
            /* diab compiler supports long long type. */
            /* explicitly define  __use64integers__ for other compilers supporting this type. */
            typedef unsigned long long T_os_uint64;
            typedef signed long long   T_os_sint64;
        #else
            typedef unsigned long T_os_uint64;
            typedef signed long   T_os_sint64;
        #endif
    #endif
#endif


#endif /* _E_STD_TYPE_H */

/*************************************************************************************************/



