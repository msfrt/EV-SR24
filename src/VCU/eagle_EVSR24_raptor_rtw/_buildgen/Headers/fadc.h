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
 * $Filename__:fadc.h$ 
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
 * $Name______:fadc$ 
 * $Variant___:1.2.0$ 
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
 * 1.2.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: fadc.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FADC_H
#define _FADC_H


/*
 ***********************************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***********************************************************************************************************************
 */

#include "adc.h"
#include "dsm.h"
#include "reg.h"

/* the following used macros are defined inside reg.h depending on the used machine type */
#include REG_FADC_H


/*
 ***********************************************************************************************************************
 * FCT Section: include public headers of all atomic components
 ***********************************************************************************************************************
 */

#include "fadc_pub.h"

#ifndef _LIBRARYABILITY_H
#include "fadc_auto_conf.h"
#endif


/*
 ***********************************************************************************************************************
 * INL Section: include all inline functions of the atomic components which shall be exported
 ***********************************************************************************************************************
 */

#include "fadc_inl.h"


/* _FADC_H */
#endif
