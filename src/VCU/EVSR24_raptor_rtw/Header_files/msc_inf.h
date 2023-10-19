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
 * $Filename__:msc_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO1SI$
 * $Date______:25.06.2010$
 * $Class_____:SWHDR$
 * $Name______:msc_inf$
 * $Variant___:1.12.0$
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
 * 1.12.0; 0     25.06.2010 MMO1SI
 *   Support automatic module configuration
 *   Add queuehandler latency calculation
 *   Correct upstream timeout calculation
 *   Correct Gpta header usage
 *   Correct GLOBDATA entries
 *   Update Confrules info
 *   Remove UD register clearing in init
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_inf.h
 *      Version: \main\basis\b_CORE\6
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _MSC_INF_H
#define _MSC_INF_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Import interface header for the MSC low level driver.
 *
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Public Includes
 ***********************************************************************************************************************
 */

#include "msc.h"
#include "msc_friends.h"

#include "cpu.h"
#include "memlay.h"
#include "gpta.h"

#if (defined CPU_PCP_AVL && !defined MSC_QHNDLR_CPU)
#include "pcp.h"
#include "pcp_pramdef_auto_conf.h"
#endif

#include "srvb.h"

#include "reg.h"
#include REG_MSC_H
#include REG_GENERAL_H
#include REG_SCU_H

/* if DAMOS is available, include generated data header file */
/* switch is defined in msc_pub.h                            */
#if (MSC_USE_DAMOS)
#include "msc_dat.h"
#endif

/* MSC_INF_H */
#endif
