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
 * $Filename__:dfp_inf.h$ 
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
 * $Name______:dfp_inf$ 
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
 *      File name: dfp_inf.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DFP
 * \scope   API
 *********************************************************************
 */

#ifndef _DFP_INF_H
#define _DFP_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "srvb.h"             /* include service lib, because the dsm headers use its macros      */
#include "memlay.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */


/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "dsm_confprot.h"   /* DSM Service macro definitions */
#include "dfc_prot.h"         /* Status array prototype                                           */
/* prototypes, access macros and definitions for fcm handling */
#include "dsmdur_prot.h"       /* exchange function for dsmdur counters as prototype              */
#include "dfes_prot.h"        /* Mask and access macros for the status words from the lib         */
#include "dinh_prot.h"         /* Mask and access macros for the status words from the lib        */
#include "dsq_prot.h"          /* Mask and access macros for the status words from the lib        */

#include "dfes_dia_prot.h"
#include "dsmrdy_prot.h"   /* prototype for readiness clear */
#include "dinh_prot.h"     /* prototype to clear mode 7 visibility in FIds */
#include "dfp_prot.h"      /* prototype to clear mode 7 visibility in FIds */
#endif
