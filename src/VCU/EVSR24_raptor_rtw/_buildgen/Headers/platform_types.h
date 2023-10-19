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
 * $Filename__:platform_types.h$
 * $Author____:LEH2ABT$
 * $Function__:Component Toolbox-Import$
 * $Domain____:SDOM$
 * $User______:MZT2FE$
 * $Date______:25.06.2010$
 * $Class_____:SWHDR$
 * $Name______:platform_types$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/


#ifndef _PLATFORM_TYPES_H
#define _PLATFORM_TYPES_H

/**
 **********************************************************************************************************************
 * \moduledescription
 *           AUTOSAR Platform Dependent Types
 *           According to Document Version 2.3.0, Part of Release 4.0, Revision 1
 * \scope    INTERN
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* File version information */
#define PLATFORM_MAJOR_VERSION  2
#define PLATFORM_MINOR_VERSION  3
#define PLATFORM_PATCH_VERSION  0


/* CPU register type width */
#define CPU_TYPE_8        8
#define CPU_TYPE_16       16
#define CPU_TYPE_32       32

/* Bit order definition  */
#define MSB_FIRST         0             /* Big endian bit ordering      */
#define LSB_FIRST         1             /* Little endian bit ordering   */

/* Byte order definition */
#define HIGH_BYTE_FIRST   0             /* Big endian byte ordering     */
#define LOW_BYTE_FIRST    1             /* Little endian byte ordering  */


/* Platform type and endianess definitions for TC17xx */
#define CPU_TYPE          CPU_TYPE_32
#define CPU_BIT_ORDER     LSB_FIRST
#define CPU_BYTE_ORDER    LOW_BYTE_FIRST


/* Standard Symbols for TRUE and FALSE */
/* Only to be used in conjunction with the boolean type */
#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif


/* Standard Integer Data Types */
typedef signed char     sint8;          /*        -128 .. +127          */
typedef unsigned char   uint8;          /*           0 .. 255           */
typedef signed short    sint16;         /*      -32768 .. +32767        */
typedef unsigned short  uint16;         /*           0 .. 65535         */
typedef signed long     sint32;         /* -2147483648 .. +2147483647   */
typedef unsigned long   uint32;         /*           0 .. 4294967295    */

/* Standard Float Data Types */
typedef float   float32;
typedef double  float64;

/* Boolean Data Type */
typedef unsigned char   boolean;

/* Optimized Integer Data Types */
typedef signed long     sint8_least;    /* At least 7 bit + 1 bit sign  */
typedef unsigned long   uint8_least;    /* At least 8 bit               */
typedef signed long     sint16_least;   /* At least 15 bit + 1 bit sign */
typedef unsigned long   uint16_least;   /* At least 16 bit              */
typedef signed long     sint32_least;   /* At least 31 bit + 1 bit sign */
typedef unsigned long   uint32_least;   /* At least 32 bit              */

/* _PLATFORM_TYPES_H */
#endif
