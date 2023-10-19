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
 * $Filename__:ignclps_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignclps_conf$ 
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
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* Project specific configuration*/
#ifndef IGNCLPS_CONF_H
	#define IGNCLPS_CONF_H

	#define	IGNCLPS_INJENBL_LLMT	0x320	 /* 400 rpm lower engine spped limit for injection enable */	
	#define	IGNCLPS_OSC_TOLERANCE	0x05	/*Oscillator tolerance in percentage*/
	#define	IGNCLPS_OSCCALIB_FREQ	0x1770	/*10 minutes counter.*/


	#define	IGNCLPS_OSCCAL_ATTEMPTS	0x07	/*number of oscillator calibration attempts before registration of error in DSM*/
	#define	IGNCLPS_INITCK200_ATTEMPTS	0x07	/*number of CK200 initialization attempts before registration of error in DSM*/

	#define	IGNCLPS_SPI_SSC_BAUD_RATE	1000UL	  /*Baud rate for SPI SSC0 module */	
	#define	CK200_OSCILLATOR_FREQ	4000UL	/* Nominal frequency of CK200 Internal RC oscillator*/
#endif	 



