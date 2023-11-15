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
 * $Filename__:dfc_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:THOMILL0$ 
 * $Date______:16.04.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:dfc_inf$ 
 * $Variant___:2.9.0$ 
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
 * 2.9.0; 0     16.04.2012 THOMILL0
 *   RQONE00032942 - Fix of MDG1 Integration issues
 * 
 * 2.6.0; 0     21.12.2011 PKA2SI
 *   DCM DID support for environment data
 * 
 * 2.4.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfc_inf.h
 *      Version: \main\14
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DFC
 * \scope   API
 *********************************************************************
 */

#ifndef _DFC_INF_H
#define _DFC_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "srvb.h"
#include "memlay.h"
#include "cpu.h"              /* Included for cpu interrupt suspend and resume functions          */
#include "signals.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */

/* The constants DFES_CNF_NUM_ENV_DID and DFES_CNF_NUM_FRZFR_DID are #defines in dfes_auto_pub.h  */
/* which is included in dsm.h. So it needs to be ensured that dsm.h is included before this #if   */
/* statement                                                                                      */
#if ((DFES_CNF_NUM_ENV_DID > 0) || (DFES_CNF_NUM_FRZFR_DID > 0))
#include "dcm.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "eep.h"              /* non volatile RAM support                                         */
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
#include "dfc_confprot.h"   /* mask and access macros to configurable control,disable mask        */
#endif

#include "ddrc_prot.h"      /* defines for debounce method names (necessary for structure def     */
#include "dfc_prot.h"       /* Mask and access macros for the status words from the lib           */
#include "dinh_prot.h"      /* interface definition for inhibit handler                           */
#include "dfes_prot.h"      /* interface definition for fault memory  handler                     */
#include "dsmaux_prot.h"    /* interface definition for reinit handling                           */
#include "ddrc_prot.h"      /* to access debounce ram                                             */

#include "dsm_confprot.h"

#if (DSM_DISBLGRPSIZE_SY > 0)
#include "dsmappl_disblgrp_prot.h"
#endif

#ifndef _LIBRARYABILITY_H
 /* include the configuration header */
#include "dsmconf_auto_confprot.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "dfc_dat.h"
#include "dsmaux_auto_confprot.h"
#include "ddrc_auto_prot.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "dfes_dat.h"       /* access to freeze frame frame calibration */
#include "dfes_inl.h"
#include "dfc_inl.h"
#endif


#endif
