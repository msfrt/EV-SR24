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
 * $Filename__:dsmdur_inf.h$ 
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
 * $Name______:dsmdur_inf$ 
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
 *      File name: dsmdur_inf.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DSMDUR
 * \scope   API
 *********************************************************************
 */

#ifndef _DSMDUR_INF_H
#define _DSMDUR_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "srvb.h"
#include "memlay.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */

#ifndef _LIBRARYABILITY_H
#include "eep.h"
#endif

/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */
#include "dfc_prot.h"
#include "dfes_prot.h"
#include "dsmdur_prot.h"
#include "dfes_dia_prot.h"    /* prototypes of dia interface configuration variables              */
#include "dsm_confprot.h"
#include "dsmaux_prot.h"


#ifndef _LIBRARYABILITY_H
#include "dsmdur_dat.h"
#endif

#endif
