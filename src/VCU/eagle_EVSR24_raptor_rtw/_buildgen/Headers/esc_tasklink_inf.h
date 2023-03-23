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
 * $Filename__:esc_tasklink_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NF72FE$ 
 * $Date______:04.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:esc_tasklink_inf$ 
 * $Variant___:2.16.0$ 
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
 * 2.16.0; 0     04.12.2008 NF72FE
 *   transfer of ESC.15.2.0 from CC to SDOM
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ESC_TASKLINK_INF_H
#define _ESC_TASKLINK_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  private interface of ESC
 *
 * \scope INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "esc.h"
#include "epm.h"
#include "esc_msg.h"
/* IGNORE RULE 5220: ETAS header uses include protection starting with double underscore  */
#include "e_inface.h"
#include "syc.h"
#include "cpu.h"                 //the states of HESrv_stMSid are defined in cpu.h
#include "srvb.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */
#include "esc_stack_dat.h"
#include "esc_prot.h"
#include "esc_tasklink_dat.h"

// #include "esc_auto_conf.h"
/* Instead of the following external statement, the commented include statement above should used.  */
/* But this is not possible without getting warnings. With epm.h and with esc_auto_conf.h some      */
/* InjVlv-processes are included. To avoid warnings only the necessary interface of esc_auto_conf.h */
/* is defined directly here. */
extern void ESC_syncEpmHE_Cntnr( void );

/*
 ***************************************************************************************************
 * Inline Includes
 ***************************************************************************************************
 */


/* _ESC_TASKLINK_INF_H */
#endif
