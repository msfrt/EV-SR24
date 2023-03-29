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
 * $Filename__:dfes_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MGO5KOR$
 * $Date______:26.05.2014$
 * $Class_____:SWHDR$
 * $Name______:dfes_inf$
 * $Variant___:2.30.0$
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
 * 2.30.0; 0     26.05.2014 MGO5KOR
 *   Updates in DSM_DebRepCheck return value for Static-Disabled DFCs.
 *   Mx17 relevant Finding in DFES - Similar Condition handling i.e similar 
 *   condition for coolant temperature (PID 05 ) is updated as per the document
 * 
 * 2.18.0; 0     17.04.2012 THOMILL0
 *   RQONE00032942 - Fix of MDG1 Integration issues
 * 
 * 2.17.0; 0     16.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 2.15.0; 0     21.12.2011 PKA2SI
 *   DCM DID support for environment data
 * 
 * 2.11.0; 0     04.03.2011 PKA2SI
 *   support of AUTOSAR DTCGroups
 * 
 * 2.6.0; 0     18.03.2010 ABM1KOR
 *   (303391): Header file correction.
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfes_inf.h
 *      Version: \main\18
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DFES
 * \scope   API
 *********************************************************************
 */

#ifndef _DFES_INF_H
#define _DFES_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "srvb.h"             /* include service lib, because the dsm headers use its macros      */
#include "cpu.h"              /* enable / disable interrupt definition                            */
#include "signals.h"
#include "memlay.h"
#include "os.h"               /* ActivateTask, OS_DSM_Clear_Task                                  */
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
#include "dfc_confprot.h"   /* mask and access macros to configurable control,disable mask        */
#endif

#include "dfc_prot.h"          /* Status array prototype                                          */
/* prototypes, access macros and definitions for fcm handling */
#include "ddrc_prot.h"         /* access to debounce counters at clear */
#include "dsmdur_prot.h"       /* exchange function for dsmdur counters as prototype              */
#include "dfes_prot.h"         /* Mask and access macros for the status words from the lib        */
#include "dinh_prot.h"         /* Mask and access macros for the status words from the lib        */
#include "dsq_prot.h"          /* Mask and access macros for the status words from the lib        */

#include "dfes_dia_prot.h"
#include "dsmrdy_prot.h"   /* prototype for readiness clear */
#include "dinh_prot.h"     /* prototype to clear mode 7 visibility in FIds */
#include "dfp_prot.h"      /* prototype to clear mode 7 visibility in FIds */
#include "dsm_confprot.h"
#include "dsmaux_prot.h"
#include "dtr_prot.h"
#include "diumpr_prot.h"   /* make DIUMPR_stEnaPDTC visible (unconditional! exists if(IUMPR_SY)   */


#ifndef _LIBRARYABILITY_H
#include "dfes_dat.h"
    #if (DSM2AUTOSAR_SC > 0)
    #include "dsm2autosar_dem_dcm_conf.h"
    #endif
#include "dsmaux_auto_confprot.h"
#include "dfc_dat.h"
#include "dfes_auto_pub.h"
#else
#include "dsmaux_priv.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "dsm_conf_dat.h"
#include "dsmconf_auto_confprot.h"

#if (((DSM_DSM2SG_SY > 0) && (DSM2SG_FID_SY > 0)))
#include "dcompfid_prot.h"
#endif

#if (((DSM_DSM2SG_SY > 0) && (DSM2SG_DFC_SY > 0)))
#include "dcompdfc_prot.h"
#endif

#if (DSM_DISBLGRPSIZE_SY > 0)
#include "dsmappl_disblgrp_prot.h"
#endif

#if ((DFES_CNF_NUM_ENV_DID > 0) || (DFES_CNF_NUM_FRZFR_DID > 0))
#include "dcm.h"
#endif

#include "dfes_inl.h"
#include "dfc_inl.h"
#endif

#endif
