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
 * $Filename__:pwmin_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pwmin_inf$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmin_inf.h
 *      Version: \main\basis\b_CORE\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PWMIN_INF_H
#define _PWMIN_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PwmIn - Pulse Width Modulated Input Signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "reg.h"
#include REG_GPTA0_H
#include REG_GPTA1_H
#include REG_LTCA2_H
#include REG_PORT_H

#include "pwm.h"
#include "port.h"
#include "cpu.h"
#include "srvb.h"

#include "pwmin_prot.h"
#include "pwmin_inl.h"

#ifdef CPU_PCP_AVL
#include "pcp.h"
#include "pcp_pramdef_auto_conf.h"
#endif

/* _PWMIN_INF_H                                                                                   */
#endif
