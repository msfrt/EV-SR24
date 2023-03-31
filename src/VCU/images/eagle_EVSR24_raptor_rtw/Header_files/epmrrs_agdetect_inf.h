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
 * $Filename__:epmrrs_agdetect_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RTI2FE$
 * $Date______:15.10.2012$
 * $Class_____:SWHDR$
 * $Name______:epmrrs_agdetect_inf$
 * $Variant___:1.38.0$
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
 * 1.38.0; 0     15.10.2012 RTI2FE
 *   Reverse rotation prediction from tooth time
 * 
 * 1.22.1; 0     06.10.2009 TUC2SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :epmrrs_agdetect_inf
 *        Variant :1.100
 *        Revision :3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _EPMRRS_AGDETECT_INF_H
#define _EPMRRS_AGDETECT_INF_H

/*
 ***************************************************************************************************
 * \moduledescription
 *  interface atomic header for EpmRRS (engine position management reverse rotation stop)
 *
 * \scope               [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern includes for used states and statevariables
 ***************************************************************************************************
 */
#include "epm.h"                    // for Epm_stSync_t
#include "esc.h"                    // for DT
#include "syc.h"                    // for SYC_POSTDRIVE
#include "coeng.h"

#include "epm_prot.h"               // protected epm variables, system- and feature-constants
/*
 ***************************************************************************************************
 * Protected atomic includes
 ***************************************************************************************************
 */
#ifndef _LIBRARYABILITY_H
#include "epmrrs_agdetect_dat.h"               // protected epm variables, system- and feature-constants
#endif // _LIBRARYABILITY_H

/*
 ***************************************************************************************************
 * Extern and owned messages includes
 ***************************************************************************************************
 */
#include "epmrrs_msg.h"             // for all used messages, file is only generated for condition
/*
 ***************************************************************************************************
 * Extern services and functions includes
 ***************************************************************************************************
 */
#include "dsm.h"                    // fault path manager
#include "eep.h"                    // state of envram
#include "memlay.h"                 // use of envram
#include "srvb.h"                   // basic calculation
#include "srvx.h"                   // extended calculation

#if (CMBTYP_SY == CMBTYP_GS)
  #include "igndd.h"                // gs ignition fade out function
#endif // #endif CMBTYP_GS


/* _EPMRRS_AGDETECT_INF_H */
#endif
