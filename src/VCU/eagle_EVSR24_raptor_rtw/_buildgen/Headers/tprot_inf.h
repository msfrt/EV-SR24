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
 * $Filename__:tprot_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:27.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:tprot_inf$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     27.01.2009 AWL2SI
 *   B_TPROT.9.0.0
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for TPROT
 *
 * \scope   API
 *********************************************************************
 */

#ifndef _TPROT_INF_H
#define _TPROT_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "uacc.h"
#include "eep.h"
#include "memlay.h"
#include "sb.h"
/*sb_auto_conf.h include is an exception as this is not exported by sb.h. Can be removed when the
export is added in sb.h */
#include "sb_auto_conf.h"
#include "cpu.h"
#include "reset.h"
#include "srvb.h"
#include "reg.h"
#include "tprot.h"
#include "tprot_auto_def_conf.h"


/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */
#include "tprot_rttp_errhan_prot.h"

#endif
