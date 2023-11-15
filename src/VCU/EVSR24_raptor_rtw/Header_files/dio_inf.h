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
 * $Filename__:dio_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:30.03.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:dio_inf$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: dio_inf.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DIO_INF_H
#define _DIO_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * Import headerfile of DIO module.
 *
 * \scope          API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "dio.h"
#include "srvb.h"
#include "adci_friends.h"

#ifdef DIO_CIC751_ACTIVE
#include "cic751.h"
#endif

#ifdef DIO_CY100_ACTIVE
#include "cy100.h"
#endif

/* _DIO_INF_H */
#endif
