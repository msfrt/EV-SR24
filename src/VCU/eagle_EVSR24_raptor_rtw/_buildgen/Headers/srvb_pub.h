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
 * $Filename__:srvb_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_pub$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_PUB_H
#define _SRVB_PUB_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 *                        Basic service library.
 *                        Temporary maintained before deletion of file as sson as  all users
 *                        complained with new header file concept.
 *
 * \scope             API
 *
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * defines
 ***********************************************************************************************************************
 */

/* limitatations of 64 bit variables   */
#define SRVB_MAXSINT64      ((sint64) (0x7FFFFFFFFFFFFFFF))
#define SRVB_MINSINT64      ((sint64) (0x8000000000000000))
#define SRVB_MAXUINT64      ((uint64) (0xFFFFFFFFFFFFFFFF))
#define SRVB_MINUINT64      ((uint64) (0x0000000000000000))


/* absolute values of signed variables */
/* casted as uint variables            */
#define SRVB_ABS_MAXSINT64  ((uint64) (0x7FFFFFFFFFFFFFFF))
#define SRVB_ABS_MINSINT64  ((uint64) (0x8000000000000000))
#define SRVB_ABS_MAXSINT32  ((uint32) (0x7FFFFFFF))
#define SRVB_ABS_MINSINT32  ((uint32) (0x80000000))
#define SRVB_ABS_MAXSINT16  ((uint16) (0x7FFF))
#define SRVB_ABS_MINSINT16  ((uint16) (0x8000))
#define SRVB_ABS_MAXSINT8   ((uint8)  (0x7F))
#define SRVB_ABS_MINSINT8   ((uint8)  (0x80))


/*
 ***********************************************************************************************************************
 * type defs and enums
 ***********************************************************************************************************************
 */

/* none */


/* _SRVB_PUB_H */
#endif
