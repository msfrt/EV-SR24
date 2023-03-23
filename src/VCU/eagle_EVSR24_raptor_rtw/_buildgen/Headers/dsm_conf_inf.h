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
 * $Filename__:dsm_conf_inf.h$ 
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
 * $Name______:dsm_conf_inf$ 
 * $Variant___:2.0.0$ 
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
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsm_conf_inf.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for _DSM_CONF_INF_H
 * \scope   API
 *********************************************************************
 */

#ifndef _DSM_CONF_INF_H
#define _DSM_CONF_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "memlay.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */


/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

/* necessary to get _SY conditions for control/disable bit positions in dfcconf_prot.h
libraryability is not longer supported for a library conform implementation 
every access to configurable data must be via linkable objects  */
#ifndef _LIBRARYABILITY_H
#include "dfc_dat.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "dsm_confprot.h"
#endif

#include "dsmdur_prot.h"
#include "dfes_prot.h"
#include "dfc_prot.h"


#ifndef _LIBRARYABILITY_H
#include "dsm_conf_dat.h"
#include "dsm_msg.h"
#endif

#endif
