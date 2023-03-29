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
 * $Filename__:eep.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RUO1KOR$ 
 * $Date______:25.10.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:eep$ 
 * $Variant___:1.29.0$ 
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
 * 1.29.0; 0     25.10.2013 RUO1KOR
 *   Milestone Mc:EEP_1.29.0 release
 *   10. RQONE00267580: Enhancement: Remove dependency on FEE package when Mx17 
 *   legacy EEP used
 * 
 * 1.24.0; 0     21.05.2012 RUO1KOR
 *     Feature: Introduction of New interface eep_readNoHist
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EEP_H                             /* protect multiple includes             */
#define _EEP_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      EEP Eeprom and Emulation Handler.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "memlay.h"      /* Needed for AC step workaround (Using memlay macros in "eeepdd_pub.h") */


/*
 ***************************************************************************************************
 * STC Section: include public header of the structural component Y
 ***************************************************************************************************
 */

#include "eephal_pub.h"

#include "eeepdd_pub.h"



#ifndef _LIBRARYABILITY_H
#include "eep_auto_conf.h"
#ifndef EEP_USE_MX17_DRIVER
	#include "Fee_Cfg.h"
#endif
#include "eephal_dat.h"
#endif


/* _EEP_H */
#endif
