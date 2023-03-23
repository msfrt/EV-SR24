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
 * $Filename__:syc.h$ 
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
 * $Name______:syc$ 
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
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
#ifndef _SYC_H /* protect multiple includes */
#define _SYC_H


/*
 ***************************************************************************************************
 * STC Section: include public header of other structural components
 ***************************************************************************************************
 */

#include "memlay.h"

/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */

#include "syc_main_pub.h"
#include "syc_predrv_pub.h"
#include "syc_postdrv_pub.h"
#include "syc_shutdown_pub.h"
#include "syc_calwakeup_pub.h"
#include "syc_deadline_pub.h"
#include "syc_undervltg_pub.h"
#include "syc_stopcnt_pub.h"

#endif /* _SYC_H */
