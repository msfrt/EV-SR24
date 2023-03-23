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
 * $Filename__:dcanappl_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:05.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:dcanappl_inf$ 
 * $Variant___:8.9.0$ 
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
 * 8.9.0; 0     05.11.2009 MXA2SI
 *   Platform 
 *   
 *   Migrated from clearcase:
 *   B_DIAG.9.0.0
 *   B_DIAG_Conf.9.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dcanappl_inf.h
 *      Version: \main\basis\b_CORE\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DCANAPPL_INF_H
#define _DCANAPPL_INF_H


/**
 *********************************************************************
 * \moduldescription
 *       header file (functional) for dcanappl_std module
 *
 * \scope  API
 *********************************************************************
 */


/*
 *******************************************************************************
 * Includes
 *******************************************************************************
 */

/* Public Imports of dcanappl_std */

/* Public Header of Diag STC */
#include "diag.h"

#ifdef DIAG_ISOTP_ENABLE

/* Public Header of IsoTp */
#include "isotp.h"

#endif


#ifdef DIAG_TP20_ENABLE

/* Public Header of Tp20 */
#include "tp20.h"

#endif

/* Public Header of Dcan STC */
#include "dcan.h"
/* Public Header of Can STC for CAN_A declaration used in dcan_auto_conf.c */
#include "can.h"


#endif /* _DCANAPPL_INF_H */
