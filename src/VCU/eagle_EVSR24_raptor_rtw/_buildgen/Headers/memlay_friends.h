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
 * $Filename__:memlay_friends.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:12.02.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:memlay_friends$ 
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
 * 1.13.0; 0     12.02.2010 JWI2SI
 *   add tc1793
 * 
 * 1.10.0; 0     19.01.2009 KLMEYER
 *   Initial import from Clearcase 
 *      File name: memlay_friends.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MEMLAY_FRIENDS_H
#define _MEMLAY_FRIENDS_H

/**
 ***************************************************************************************************
 * \moduledescription
 * MEMLAY header file for friends.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * List of friends components
 ***************************************************************************************************
 */

/* _MEMLAY_CONF_H for compatibility only, will be removed */
#if !(defined(_MEMLAY_INF_H) || defined(_MEMLAY_CONF_H) || \
      defined(_DME_INF_H) || defined(_ETKS_INF_H))
#error "Friends interfaces can only be used by dedicated components."
#endif


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "sb.h"

#if (MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1793)
/* Overlay register header reexported for protected interface MemLay_OCRamOverlaySet_cas */
#include "reg.h"
#include REG_OVC_H
#endif



/*
 ***************************************************************************************************
 * Prot-Section: include all required protected headers inside the component
 ***************************************************************************************************
 */

#include "memlay_prot.h"


/* _MEMLAY_FRIENDS_H */
#endif
