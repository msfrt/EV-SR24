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
 * $Filename__:dtr_inf.h$ 
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
 * $Name______:dtr_inf$ 
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
 *      File name: dtr_inf.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DTR
 * \scope   API
 *********************************************************************
 */

#ifndef _DTR_INF_H
#define _DTR_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "eep.h"
#include "srvb.h"
#include "dsm.h"            /* Interface Type definitions, equates and prototypes                 */
                            /* from DSM point of view - ASW; normal use of DSM service            */
                            /* especially "dtr_auto_pub.h" is included via "dsm.h" !!             */
#include "dsm_confprot.h"   /* DSM Service macro definitions */
/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "dtr_prot.h"      /*  especially extern declaration of DTR_numLegacyElements             */
#include "dfes_prot.h"     /*  especially extern declaration of DFES_stCtlSetting                 */

#ifndef _LIBRARYABILITY_H
#include "dtr_dat.h"
#endif

#endif
