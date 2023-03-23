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
 * $Filename__:ddrc_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PKA2SI$ 
 * $Date______:14.12.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:ddrc_inf$ 
 * $Variant___:2.5.0$ 
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
 * 2.5.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ddrc_inf.h
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DDRC
 * \scope   API
 *********************************************************************
 */

#ifndef _DDRC_INF_H
#define _DDRC_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "srvb.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */

#ifndef _LIBRARYABILITY_H
#include "eep.h"
#endif

/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

 /* necessary to get _SY conditions for control/disable bit positions in dfc_confprot.h
libraryability is not longer supported for a library conform implementation
every access to configurable data must be via linkable objects  */
#ifndef _LIBRARYABILITY_H
#include "dfc_dat.h"
#include "dfc_confprot.h"  /* mask and access macros to configurable control,disable mask        */
#endif

#include "dfc_prot.h"      /* Mask and access macros for the status words from the lib            */
#include "ddrc_prot.h"     /* defines for debounce method names (necessary for structure def.     */
#include "dsm_confprot.h"
#include "dfes_prot.h"     /* access to DFES_stCtlSetting */
#if (DSM_DISBLGRPSIZE_SY > 0)
#include "dsmappl_disblgrp_prot.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "ddrc_dat.h"      /* calibration values acces via DAMOS                                  */
#include "ddrc_auto_prot.h"
#include "dsmconf_auto_confprot.h"   /* include the configuration header */
#endif

#ifndef _LIBRARYABILITY_H
#include "dfes_dat.h"
#include "dfes_inl.h"
#include "dfc_inl.h"
#endif

#endif
