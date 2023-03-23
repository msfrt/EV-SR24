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
 * $Filename__:uart_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:24.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:uart_inf$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: uart_inf.h
 *      Version: \main\basis\b_CORE\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 * Public headerfile of UART module.
 *
 * \scope          API
 ***************************************************************************************************
 */
#ifndef _UART_INF_H
#define _UART_INF_H


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "uart.h"
#include "cpu.h"

#ifdef UART_TJA1020_NSLP_WAIT
#include "dio.h"
#endif

#include "port.h"
#include "srvb.h"

#ifdef ASC_WUP_DETECTION_GPTA
#include "gpta.h"
#endif


/* _UARTINF__H */
#endif
