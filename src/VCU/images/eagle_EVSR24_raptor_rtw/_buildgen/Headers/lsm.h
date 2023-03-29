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
 * $Filename__:lsm.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KAH3KOR$ 
 * $Date______:08.02.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:lsm$ 
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
 * 1.11.0; 0     08.02.2012 KAH3KOR
 *   The inclusion of header files of the respective chips are now moved to 
 *   lsmhal_auto_conf.h
 * 
 * 1.10.0; 1     03.08.2010 BAP2KOR
 *   cj135 integration
 * 
 * 1.10.0; 0     23.10.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: lsm.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LSM_H
#define _LSM_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Lsm - Lambda Sensor Module
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "dsm.h"

/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */

#ifndef _LIBRARYABILITY_H
#include "lsmhal_auto_conf.h"
#endif
/* _STM_H  */
#endif
