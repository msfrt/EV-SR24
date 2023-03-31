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
 * $Filename__:ignclpsdd.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignclpsdd$ 
 * $Variant___:1.3.0$ 
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
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef IGNCLPSDD_H
#define IGNCLPSDD_H

#include "cdrv_memlay.h"  /* Definition of Cdrv specific locating sections */

/* Indication SPI Error */
#define IGNCLPS_SPI_ERROR_8BIT	0x80
#define IGNCLPS_SPI_ERROR_32BIT	0x80000000

/* function prototype declaration */

CODE_NORM(void Spi_Act_Trans(void));

/* Function prototypes for CK240 Device Driver Functions*/
#if (defined (SY_CK240) && (SY_CK240 > 0))
CODE_NORM(uint8 IgnClPs_CK240_GetDiag(uint8,uint8));
CODE_NORM(uint8 IgnClPs_CK240_GetIdent(uint8));
#endif

/* Function prototypes for CK200 Device Driver Functions */
#if (defined(SY_CK200) && (SY_CK200 > 0))
CODE_NORM(uint32 IgnClPs_CK200_GetIdent(uint8));
CODE_NORM(uint8 IgnClPs_CK200_GetDiag(uint8,uint8));
CODE_NORM(uint32 IgnClPs_CK200_GetInit(uint8));
CODE_NORM(bool IgnClPs_CK200_SetInit(uint8, uint16));
CODE_NORM(uint32 IgnClPs_CK200_VerifyInit(uint8));
CODE_NORM(bool IgnClPs_CK200_SetClock(uint8,uint8));
#endif


#endif
