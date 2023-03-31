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
 * $Filename__:dsm.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:ABM1KOR$ 
 * $Date______:18.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsm$ 
 * $Variant___:2.14.0$ 
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
 * 2.14.0; 0     18.03.2010 ABM1KOR
 *   (303391): Header file correction , and adaptation platform DSMbas
 *   to DSMAPL 10.4.0 (BMW specific DSMAPL).
 * 
 * 2.13.0; 0     13.03.2010 ABM1KOR
 *   (303391): Changes to implement 2 ECU interface feature.
 * 
 * 2.4.0; 0     15.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   ResponseOnEvent extension
 *   XDI ULF report
 *   TCSORT freezeframe timing
 *   PTO support for heavy duty
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsm.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DSM_H
#define _DSM_H

/**
 **************************************************************************************************
 * \moduledescription
 *              Public DSM Headerfile with DSM API Definition (Packet Interface)
 *              DSM = Diagnostic system management
 *              This file includes all necessary public submodule include files
 *
 *
 *
 * \scope           API
 **************************************************************************************************
 */

/*
 **************************************************************************************************
 * Includes
 **************************************************************************************************
 */

/* srvb.h is temporarily included here for export interface for other core packages because of
dependency for srvb.h and cpu.h. This will be removed when other core packages correct their include
strategy*/

#include "srvb.h"                       /* include service lib, because the dsm headers use
                                           its macros                                             */

/* memlay.h is temporarily included here as export interface for other core packages because of
dependency for dfes_prot.h. This will be removed when other packages correct their include
strategy by using dsm_friends.h instead of directly including dfes_prot.h */

#include "memlay.h"

/***************************************************************************************************
 Fixed public header files
***************************************************************************************************/
#include "dinh_pub.h"                   /* support of inhibit handler                             */
#include "dfc_pub.h"                    /* support fault check native interface                   */
#include "dsq_pub.h"                    /* support signal quality interface                       */
#include "dsched_pub.h"                 /* support of scheduler                                   */
#include "ddrc_pub.h"                   /* support of integrated debouncing                       */
#include "dfes_pub.h"                   /* support of dfes                                        */
#include "dfes_dia_pub.h"               /* support of dsm diagnostic interface of dfes            */
#include "dtr_pub.h"                    /* support of diagnostic test results                     */
#include "dsmdur_pub.h"                 /* access to duration counter values                      */
#include "dsmaux_pub.h"                 /* support of trigger information                         */
#include "diumpr_pub.h"                 /* support of in use monitor performace ratio             */
#include "dsmrdy_pub.h"                 /* support of direct setting of ready/complete via ASW    */
 


/***************************************************************************************************
 automatic generated public files
***************************************************************************************************/
#ifndef _LIBRARYABILITY_H
#include "dfc_auto_pub.h"               /* extern definitions of all checks                       */
#include "dsq_auto_pub.h"               /* extern definitions of all signal qualities             */
#include "dfp_auto_pub.h"               /* extern definitions of all legacy fault paths           */
#include "dinh_auto_pub.h"              /* extern definitions of all checks and signal qualities  */
#include "dtr_auto_pub.h"               /* extern definitions of all dtr                          */
#include "dfes_auto_pub.h"              /* configuration values of dfes                           */
#include "dsmdur_auto_pub.h"            /* configuration information of dsmdur                    */
#include "dsmaux_auto_pub.h"            /* configuration information of dsmaux (trigger ...)      */
#include "dfes_fltcls_cust_auto_pub.h"  /* customer specific fault class parameter                */
#include "dsmconf_auto_pub.h"           /* project specific application data                      */
#include "diumpr_auto_pub.h"            /* IUMPR group name - group position mapping via #define  */
#endif  /* _LIBRARYABILITY_H */

/***************************************************************************************************
 public header files, depending on configuration
***************************************************************************************************/
#include "dfp_pub.h"                    /* support for legacy fault paths, interfaces configurable*/

#endif
