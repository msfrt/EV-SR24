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
 * $Filename__:e_rtav.h$ 
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
 * $Name______:e_rtav$ 
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
/*************************************************************************************************
 *
 * Belongs to products: RTAtrace
 *
 * Contains: RTAtrace v2.0 ERCOSek version and target information
 *
 * Copyright (C) LiveDevices Ltd. 2003
 *
 * $Header: /Minerva/ERCOSEK_TRICORE4.3/TARGET/TRICORE/AS/ERCOSEK/e_RTAv.h 7     10/10/03 15:38 Nmerriam $
 *
 * Notes: Built for ERCOSek v4.2: TriCore and Tasking compiler
 *
 *************************************************************************************************/

#ifndef __E_RTAV_H
#define __E_RTAV_H


/*-------------------------------------------------------------------------------------------------
 *	  Version-specific macros
 *-------------------------------------------------------------------------------------------------
 */

#define OSTRACE_OSEK_TYPES (1)
#define OSTRACE_OS_PREFIX (1)


/*-------------------------------------------------------------------------------------------------
 *	  Target-specific macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

#define osTrace_di() _disable()
extern unsigned int osTraceGetStackData(void);

#define OSTRACE_GetStackData() ((osTraceTimeType)(osTraceGetStackData()))


/*-------------------------------------------------------------------------------------------------
 *	  Target-specific prototypes
 *-------------------------------------------------------------------------------------------------
 */

void osTraceIsrTT(void);

/*-------------------------------------------------------------------------------------------------
 *	  Target-specific structure packing information
 *-------------------------------------------------------------------------------------------------
 */

#define OSTRACE_BUFFER_INCREMENT() (((OSTRACE_TIME_SIZE) + (OSTRACE_KIND_SIZE) + (OSTRACE_INFO_SIZE)) / 8)


#endif /* __E_RTAV_H */

/*************************************************************************************************/
