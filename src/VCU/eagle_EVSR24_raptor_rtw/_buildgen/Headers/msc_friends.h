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
 * $Filename__:msc_friends.h$ 
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
 * $Name______:msc_friends$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: msc_friends.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MSC_FRIENDS_H
#define _MSC_FRIENDS_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * MSC header file for friends.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * List of friends components
 ***********************************************************************************************************************
 */

#if !(defined(_MSC_INF_H) || defined(_PCP_INF_H))
#error "Friends interfaces can only be used by dedicated components."
#endif


/*
 ***********************************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***********************************************************************************************************************
 */

#include "reg.h"
#include REG_MSC_H

/*
 ***********************************************************************************************************************
 * Prot-Section: include all required protected headers inside the component
 ***********************************************************************************************************************
 */

#include "msc_prot.h"
#ifndef _LIBRARYABILITY_H
#include "msc_auto_confprot.h"
#endif


/* _MSC_FRIENDS_H */
#endif
