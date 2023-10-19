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
 * $Filename__:ignclps_conck.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TVH2SI$ 
 * $Date______:06.02.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignclps_conck$ 
 * $Variant___:1.4.2$ 
 * $Revision__:1$ 
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
 * 1.4.2; 1     06.02.2012 TVH2SI
 *   - Correction for sw analyser warnings
 *   - Documentation update
 * 
 * 1.4.2; 0     01.02.2012 TVH2SI
 *   CK200 oscillator calibration fault fixed
 * 
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef IGNCLPS_CONCK_PRIV_H
#define IGNCLPS_CONCK_PRIV_H

#include "common.h"
#include "dsm.h"
#include "ignclps.h"
#include "spi.h"
#include "ignclpsdd.h"					/* Public header file containing interface between ignclpsdd and ignclps_conck*/
#include "IGNH.H"
#include "IGNCLPS_CONF.H"


/* Least significant Two Bits */
#define IGNCLPS_LSB_2BITS 0x03
/* Upper limit of engine speed in 100ms process */
#define IGNCLPS_NENGLIMIT	2800

/* After the RAM is initialised its contents will be Zero. Zero indicates Short Circuit to Ground. */
/* Channel OK status is indicated by 0x03*/

#define IGNCLPS_POWERSTAGE_OK   0x03

#if (defined (SY_CK240) && (SY_CK240 > 0))
  /* Identification number of CK240 */
    #define IGNCLPS_ID			0xA6
#elif (defined (SY_CK200) && (SY_CK200 > 0))
  /* Identification number of CK200 */
    #define IGNCLPS_ID			0xA5
#else
   #error >>>> Neither 'SY_CK240' nor 'SY_CK200' defined!
#endif

#if (defined(SY_CK200) && (SY_CK200 > 0))
	#define IGNCLPS_IGNITIONCOIL_OK	0x03	/* Ignition coil diagnosis bits */ 
	#define	HW_RESET_CHK	0x10000			/* for checking INIT_REG <HW_RST> */
	#define	INIT_DATA_CHK	0x3FFFFF		/* for checking initialization data received after verify init*/
	#define	IGNCLPS_CK200_IDENT_MSK	0xFF	
	#define	IGNCLPS_OCT	0xFF				/* for reading from Ident<7:0>*/

	#define CK200_MIN_CLOCK		0x00
	#define CK200_MAX_CLOCK		0x3F	/* Maximum allowable oscillator calibration value */
	#define IGNCLPS_INITCLOCK	0x20		/* clock register of CK200 ,oscio = '1' and osc_cal<5:0> = '100000' */

	#define	CK200_SPITICKS	0x1E
	#define	IGNCLPS_FREQ_NRM	((CK200_OSCILLATOR_FREQ/IGNCLPS_SPI_SSC_BAUD_RATE)*(CK200_SPITICKS))
	#define IGNCLPS_OSCMIN		((IGNCLPS_FREQ_NRM *(100 - IGNCLPS_OSC_TOLERANCE)) / 100)
	#define IGNCLPS_OSCMAX		((IGNCLPS_FREQ_NRM *(100 + IGNCLPS_OSC_TOLERANCE)) / 100)


/* Variables used for oscillator calibration */
	typedef enum IgnClPs_OscCalStat		/* state machine for oscillator calibration */
	{
 		IGNCLPS_S_CHECK_OSC_TOLERANCE = 0,     /* State :Check for the Oscillator Tolerance */
 		IGNCLPS_S_ADJUST_OSC,                 /* State : Adjust Oscillator Frequency       */
	 	IGNCLPS_S_OSC_CALIBRATED               /* State : Oscillator Calibrated             */
   	}IgnClPs_OscCalState_t;

	static IgnClPs_OscCalState_t IgnClPs_OscCalState[SY_CK200];



/* Variables used for CK200 initialization */
	typedef enum IgnClPs_ConfStat			/* state machine for oscillator calibration */
	{
		IGNCLPS_S_INITIALIZATION_IN_PROGRESS = 0,
		IGNCLPS_S_VERIFY_INITIALIZATION,
		IGNCLPS_S_INITIALIZATION_COMPLETE
	}IgnClPs_ConfState_t;

	static IgnClPs_ConfState_t IgnClPs_ConfState[SY_CK200];

	/* General Defines for SET_DATA-Makro */
	/* CURRENT */

	#define CURRENT_SHIFT	0x8
	/* MODE */
	#define MODE_SHIFT		0xe
	/* LSSO */
	#define LSSO_SHIFT		0xf

	#define CK200_SET_INITDATA(LSSO,MODE,CURRENT,TCOMP)\
							  (((LSSO) << LSSO_SHIFT) | ((MODE) << MODE_SHIFT) | \
							  ((CURRENT) << CURRENT_SHIFT)| (TCOMP))


 
#endif	/* ifdef SY_CK200 */

/* Process Prototype declarations */
CODE_NORM (void ignclps_conck_proc_ini(void));
CODE_NORM (void ignclps_conck_proc1_100ms(void));
CODE_NORM (void ignclps_conck_proc2_100ms(void));
#if (defined(SY_CK200) && (SY_CK200 > 0))
CODE_NORM (void ignclps_conck_proc_10ms(void));
CODE_NORM (void ignclps_conck_proc_50ms(void));
#endif

#endif
