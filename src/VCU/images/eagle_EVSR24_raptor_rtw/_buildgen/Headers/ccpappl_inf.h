/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:ccpappl_inf.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HMA2KOR$
 * $Date______:24.03.2011$
 * $Class_____:SWHDR$
 * $Name______:ccpappl_inf$
 * $Variant___:7.13.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 7.13.0; 0     24.03.2011 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.14.0.0
 *   Changes includes the following CREQs in Clearcase
 *   RCMS00976696: Adapter module canif_ccp.c moved to CCP
 * 
 * 7.12.0; 0     30.09.2010 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.13.0.0
 * 
 * 7.11.0; 0     10.08.2009 MXA2SI
 *   Platform
 *   Migrated from clearcase
 *   B_CCP.11.0.0
 *   B_CCP_Conf.11.0.0
 * 
 * 7.10.0; 0     06.08.2009 MXA2SI
 *   Migrated from platform
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CCPAPPL_INF_H
#define _CCPAPPL_INF_H


#include "syc.h"
#include "ccp_services_prot.h"
#include "ccp.h"
#if(CCP_CAN_DRIVER == MEDC17_CAN)
#include "can.h"
/* Included for ACCPR Check for CCP Measurement*/
#include "accpr.h"                                     /* Include accpr.h only when using MEDC17 CAN driver */
#endif
#include "cpu.h"


#include "memlay.h"
#include "dme.h"
#include "reset.h"


/* Mcop configuration file for the CalWup variable SyC_stMn */
#include "ccpappl_msg.h"

#if(CCP_CAN_DRIVER == CUBAS_CANIF)
#include "comstack_types.h"
#include "canif.h"
#endif


/* The below headers should be included only if PCP is selected for data trnsmission */
#if ( CCP_PCP != FALSE )
#include "pcp.h"
#endif


/**
 ***************************************************************************************************
 * \moduledescription
 *                      interface header file for atomic component ccpappl_std
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Other Inline Functions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Library functions with inline/no-inline implementation (always include the code)
 ***************************************************************************************************
 */

/*_CCPAPPL_INF_H                                                                                  */
#endif
