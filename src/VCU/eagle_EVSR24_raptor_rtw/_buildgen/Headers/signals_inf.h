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
 * $Filename__:signals_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AID3KOR$ 
 * $Date______:17.01.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:signals_inf$ 
 * $Variant___:1.18.0$ 
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
 * 1.18.0; 0     17.01.2011 AID3KOR
 *   Changes in inf.h for the build to go through on PVER : P1744A0CC985  
 *   VKI2KOR; 1
 * 
 * 1.10.0; 1     22.01.2009 HMN2FE
 *   Correction of file header by LWS update
 * 
 * 1.10.0; 0     17.12.2008 HMN2FE
 *   Signals 1.10.0 supports bit combiner Signals. BC Signals are Signals, where
 *    bit information is extracted from messages and combined into byte based 
 *   Signal values.
 *   BC Signals can be used for OBD or customer Signals
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for SIGNALS
 *
 * \scope   API
 *********************************************************************
 */

#ifndef _SIGNALS_INF_H
#define _SIGNALS_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "signals_std_dat.h"

#if (((DIABAS_VAR_SY == 3) || (DIABAS_VAR_SY == 5)) && (CMBTYP_SY == CMBTYP_DS))
#include "engda_tiengon_auto_conf.h"
#endif

#include "srvb.h"
#include "signals.h"

/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "signals_prot.h"





#endif
