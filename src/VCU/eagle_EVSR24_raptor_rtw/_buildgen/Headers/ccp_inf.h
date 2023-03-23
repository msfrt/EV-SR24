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
 * $Filename__:ccp_inf.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HMA2KOR$
 * $Date______:24.03.2011$
 * $Class_____:SWHDR$
 * $Name______:ccp_inf$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     24.03.2011 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.14.0.0
 *   Changes includes the following CREQs in Clearcase
 *   RCMS00976696: Adapter module canif_ccp.c moved to CCP
 * 
 * 1.13.0; 0     30.09.2010 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.13.0.0
 * 
 * 1.11.0; 0     10.08.2009 MXA2SI
 *   Platform
 *   Migrated from clearcase
 *   B_CCP.11.0.0
 *   B_CCP_Conf.11.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_inf.h
 *      Version: \main\3
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CCP_INF_H
#define _CCP_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      Interface header file for ccp_std
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "memlay.h"
#include "reset.h"
#include "cpu.h"                                        /* include of cpu       */
#include "ccp_services_prot.h"
#include "ccp.h"
#if(CCP_CAN_DRIVER == MEDC17_CAN)
#include "can.h"                                        /* Include can.h only when using MEDC17 CAN driver */
#endif



/* The below headers should be included only if PCP is selected for data trnsmission */
#if ( CCP_PCP != FALSE )
#include "pcp.h"
#include "pcp_mnemonics.h"
#include "pcp_pramdef_auto_conf.h"   /* include of the own component           */
#endif

#endif
