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
 * $Filename__:e_rtaser.h$ 
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
 * $Name______:e_rtaser$ 
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
 * Contains: RTAtrace v2.0 comms layer API types, macros and externs
 *
 * Copyright (C) LiveDevices Ltd. 2003
 *
 * $Header: /Minerva/ERCOSEK_TRICORE4.3/TARGET/TRICORE/AS/ERCOSEK/e_RTAser.h 3     21/10/03 10:20 Nmerriam $
 *
 * Notes:
 *
 *************************************************************************************************/

#ifndef __E_RTASER_H
#define __E_RTASER_H

#define TCSS_IDLE 0
#define TCSS_BUSY 1

extern int TCSS_State;

void UploadTraceData(void);

void osTraceInitUART(void);
void osTraceCommTxByte(const char c);
void osTraceCommDisableTxIntrpt(void);
void osTraceCommEnableTxIntrpt(void);
osTraceBool osTraceCommTxReady(void);

#endif /* __E_RTASER_H */

