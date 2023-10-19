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
 * $Filename__:uacc_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HMA2KOR$ 
 * $Date______:08.11.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:uacc_inf$ 
 * $Variant___:2.9.0$ 
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
 * 2.9.0; 0     08.11.2010 HMA2KOR
 *   Migrated from clearcase :
 *   B_UACC.9.0.1
 *   B_UACC_Conf.9.0.1
 * 
 * 2.8.0; 0     14.10.2010 JIS2SI
 *   add DIABAS_AVS_SY
 * 
 * 2.7.0; 1     08.01.2009 MXA2SI
 *   B_UACC.7.0.0 migrated from ClearCase (Nestor)
 * 
 * 2.7.0; 0     17.10.2008 STGOLLNI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :uacc_inf
 *        Variant :B_UACC.7.0.0
 *        Revision :0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _UACC_INF_H
#define _UACC_INF_H


/*
***************************************************************************************************
* Public Includes
***************************************************************************************************
*/
#include "uacc_dat.h"            /* This is required for the visibility of ETC_Act_SY system constant */
#include "srvb.h"
#include "diagcom.h"
#include "dme.h"

#include "cpu.h"

#include "ats.h"


#include "eep.h"

#ifndef ETC_Act_SY
#error '>>>> ETC_Act_SY not defined!'
#endif

#ifndef DIABAS_AVS_SY
#error '>>>> DIABAS_AVS_SY not defined!'
#endif

/* Check for ETC package is enabled */
#if(ETC_Act_SY != 0)
#include "etc.h"
#endif

#if(DIABAS_AVS_SY == 1)
#include "avs.h"
#endif

#include "signals.h"

#include "uacc.h"




#endif
