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
 * $Filename__:dsmrdy_inf.h$ 
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
 * $Name______:dsmrdy_inf$ 
 * $Variant___:2.6.0$ 
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
 * 2.6.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.3.0; 0     10.08.2009 ILK2SI
 *   decentral visiblity buffer
 * 
 * 2.1.0; 0     29.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmrdy_inf.h
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DSMRDY
 * \scope   API
 *********************************************************************
 */

#ifndef _DSMRDY_INF_H
#define _DSMRDY_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "srvb.h"
#include "memlay.h"
#include "signals.h"

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

#include "dfc_prot.h"         /* Status array prototype                                           */
#include "dfes_prot.h"        /* Mask and access macros for the status words from the lib         */
#include "dfes_dia_prot.h"
#include "dsmrdy_prot.h"
#include "dsmrdy_pub.h"
#include "dsm_confprot.h"
#include "dinh_prot.h"
#include "dsmaux_prot.h"      /* visibility of  end of start  flag  DSMAUX_stStrtEnd              */
#include "dfp_prot.h"         /* visibility of DFP -> DFC mapping DSM_DfpToDFC[]                  */


#ifndef _LIBRARYABILITY_H
#include "dsmrdy_dat.h"
#endif


#ifndef _LIBRARYABILITY_H
#if (DSM_DISBLGRPSIZE_SY > 0)
#include "dsmappl_disblgrp_prot.h"
#endif
#include "dfes_dat.h"
#include "dfes_inl.h"
#include "dfc_inl.h"
#endif

#endif
