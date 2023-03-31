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
 * $Filename__:eec_friends.h$ 
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
 * $Name______:eec_friends$ 
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
 *      File name: eec_friends.h
 *      Version: \main\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EEC_FRIENDS_H
#define _EEC_FRIENDS_H

/**
 ***************************************************************************************************
 * \moduledescription
 * EEC header file for friends.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * List of friends components
 ***************************************************************************************************
 */

#if !(defined(_EEC_INF_H) || defined(_DME_INF_H))
#error "Friends interfaces can only be used by dedicated components."
#endif


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prot-Section: include all required protected headers inside the component
 ***************************************************************************************************
 */

#include "eec_prot.h"


/* _EEC_FRIENDS_H */
#endif
