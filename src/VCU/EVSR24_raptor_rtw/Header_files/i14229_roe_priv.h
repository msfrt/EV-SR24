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
 * $Filename__:i14229_roe_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_roe_priv$ 
 * $Variant___:3.8.0$ 
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
 * 3.8.0; 0     14.12.2009 MXA2SI
 *   Platform
 *   
 *   
 *   
 *   Migrated from clearcase :
 *   
 *   B_BASSVR.8.0.0
 *   
 *   B_BASSVR_Conf.8.0.0
 * 
 * 3.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229_roe_priv.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _I14229_ROE_PRIV_H
#define _I14229_ROE_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Private Header-file for  response on event service
 *
 * \scope              [INTERN]
 ***************************************************************************************************
 */

/*
 **************************************************************************************************
 *    Include files
 **************************************************************************************************
 */

/*
 **************************************************************************************************
 * Defines and macros
 **************************************************************************************************
 */

/* Positions of parameters in request and response: */
#define ROE_EVTYPE        0x00
#define ROE_EWT_REQ       0x01
#define ROE_EWT_RESP      0x02
#define ROE_NOIE          0x01

/* event type parameters */
#define ROE_ETR1_REQ      0x02
#define ROE_ETR1_RESP     0x03

/* Event types */
#define ROE_CLEAR_EVENT   0x00

#define ROE_STOPROE       0x00
#define ROE_NEW_DTC       0x01
#define ROE_TIMER_INT     0x02
#define ROE_CH_RECV       0x03
#define ROE_REPORT_ACT    0x04
#define ROE_STARTROE      0x05
#define ROE_CLEARROE      0x06

/* bitmask for event type field */
#define ROE_MASK_EVTYPE   0x3f
/* bitmask for suppress positive response */
#define ROE_MASK_POSRESP   0x80
/* bitmask for store event  */
#define ROE_MASK_STORE_EVENT   0x40

/* response required */
#define ROE_RESP_REQD      0x01
#define ROE_NO_RESP_REQD   0x02

/*  length of bytes upto Response SID in request msg */
#define ROE_STD_HDRLEN      0x02

 /* response length clear ROE */
#define ROE_RLEN_CLRROE  3

/* response length start/stop ROE */
#define ROE_RLEN_STROE  3

#define INFINITE_W_TIME     0xfffffffful

#define ROE_TPR     1
#define ROE_ITTR    2




#endif
