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
 * $Filename__:diumpr_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PAK3COB$
 * $Date______:12.02.2013$
 * $Class_____:SWHDR$
 * $Name______:diumpr_inf$
 * $Variant___:2.17.0$
 * $Revision__:2$
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
 * 2.17.0; 2     12.02.2013 PAK3COB
 *   Message updation to indicate evap and cold start denominator increment 
 *   completed
 * 
 * 2.17.0; 1     05.02.2013 PAK3COB
 *   To implement review changes
 * 
 * 2.17.0; 0     16.01.2013 PAK3COB
 *   message update for coldstart and evap denominator increament.
 * 
 * 2.15.0; 0     21.06.2012 PKA2SI
 *   CARB OBD LEV3 update (mainly hybrid features)
 * 
 * 2.8.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.3.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   freeze calibrated ratios with static disabled DFC
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diumpr_inf.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DIUMPR_INF_H
#define _DIUMPR_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Diagnostic In Use Monitor Performace Ratio
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "srvb.h"

#ifndef _LIBRARYABILITY_H
#include "eep.h"
#endif

#include "signals.h"
#include "esc.h"
#include "dsm.h"


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

/* necessary to get _SY conditions for control/disable bit positions in dfc_confprot.h
libraryability is not longer supported for a library conform implementation
every access to configurable data must be via linkable objects  */
#ifndef _LIBRARYABILITY_H
#include "dfc_dat.h"
#include "dfc_confprot.h"   /* mask and access macros to configurable control,disable mask        */
#include "dfes_dat.h"
#include "dfes_inl.h"
#include "dfc_inl.h"        /* access to disable mask */
#include "diumpr_dat.h"
#endif

#ifndef _LIBRARYABILITY_H
#include "diumpr_auto_confprot.h"
#endif

#include "diumpr_prot.h"
#include "dsmaux_prot.h"
#include "dinh_prot.h"
#include "dfc_prot.h"
#include "dfes_prot.h"
#include "dsm_confprot.h"
#include "diumpr_msg.h"

#ifndef _LIBRARYABILITY_H
#include "diumpr_inl.h"
#endif

#endif
