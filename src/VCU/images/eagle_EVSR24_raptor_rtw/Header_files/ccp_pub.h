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
 * $Filename__:ccp_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HMA2KOR$ 
 * $Date______:30.09.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:ccp_pub$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     30.09.2010 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.13.0.0
 * 
 * 1.10.0; 0     03.08.2009 MXA2SI
 *   Platform 
 *   Migrated from Clearcase.
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_pub.h
 *      Version: \main\13
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/



#ifndef _CCP_PUB_H
#define _CCP_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Public   Header File for CCP Driver * * \scope  INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 *    Function prototypes
 ***************************************************************************************************
 */

 /*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */

#define  CCP_DAQ0TX_SELECT
#define  CCP_DAQ1TX_SELECT
#define  CCP_DAQ2TX_SELECT
#define  CCP_DAQ3TX_SELECT
#define  CCP_DAQ4TX_SELECT


/* State of DAQ Measurement  */
#define     CCP_DAQ_MEASBUFF_FULL     0x10
#define     CCP_DAQ_MEASBUFF_EMPTY    0x20
#define     CCP_DAQ_MEASBUFF_BUSY     0x30
#define     CCP_NO_ACTIVE             0xFF

/* Status of additional DAQ existence*/
#define  	CCP_DAQ_ENABLE	    0x01
#define  	CCP_DAQ_DISABLE		0x00

/* CCP Users */
#define  	MEDC17_CAN		0x00
#define  	CUBAS_CANIF		0x01

#define     NONE        0x00

#endif
