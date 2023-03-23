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
 * $Filename__:os_shell_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:16.03.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:os_shell_inf$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     16.03.2011 KLMEYER
 *   add a Pavast-Export of the OS_ErrorCtr for ODX-Interface. To fulfill this 
 *   request, 
 *   move the definition and interface of the variables to Pavast and let Damos 
 *   generate them.
 *   
 * 
 * 1.13.0; 0     29.09.2009 AWL2SI
 *   B_OS.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _OS_SHELL_INF_H
#define _OS_SHELL_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      Interface header file for OS
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "os.h"                          /* 0 .. n includes of the own component   */
#include "os_shell_dat.h"                /* include externals of Pavast-Def.-Data  */

#include "cpu.h"
#include "memlay.h"                      /* get Memlay-Process-Names for os-process-schedule-list */

#include "reg.h"
#if (MACHINE_TYPE == TC_1796)
#include "regs_1796.h"
#include "stm_1796.h"
#elif (MACHINE_TYPE == TC_1766)
#include "regs_1766.h"
#endif
#include REG_CSFR_H

#if (OS_RTMOENABLE == TRUE)
    #include "rtmo.h"
#endif

#include "port.h"
#include "execon.h"
#include "reset.h"


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


/* _OS_SHELL_INF_H                                                                          */
#endif
