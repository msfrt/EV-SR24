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
 * $Filename__:dsq_inf.h$ 
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
 * $Name______:dsq_inf$ 
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
 *      File name: dsq_inf.h
 *      Version: \main\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DSQ
 * \scope   API
 *********************************************************************
 */

#ifndef _DSQ_INF_H
#define _DSQ_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */


/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "dsq_prot.h"       /* Prototype of status array                                          */
#include "dfc_prot.h"       /* limit of dfc numbers, used as lower boundary                       */
#include "dinh_prot.h"      /* interface definition for inhibit handler                           */


#ifndef _LIBRARYABILITY_H
 /* include the damos headerfile */
#include "dfc_dat.h"
#endif

#ifndef _LIBRARYABILITY_H
 /* include the configuration header */
#include "dsmconf_auto_confprot.h"
#endif


#endif
