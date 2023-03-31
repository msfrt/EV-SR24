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
 * $Filename__:epmcrs_diag_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:11.05.2012$
 * $Class_____:SWHDR$
 * $Name______:epmcrs_diag_inf$
 * $Variant___:1.34.0$
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
 * 1.34.0; 0     11.05.2012 OMO2FE
 *   header concept restructuring for polarity check
 * 
 * 1.23.0; 1     08.03.2010 OMO2FE
 *   changes due to polarity check
 * 
 * 1.23.0; 0     14.12.2009 CAD2SI
 *   Add feature sensor polarity check
 * 
 * 1.22.0; 0     13.07.2009 TUC2SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :epmcrs_diag_inf
 *        Variant :1.100
 *        Revision :1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCRS_DIAG_INF_H
#define _EPMCRS_DIAG_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmcrs_diag
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"
#include "srvb.h"
#include "dsm.h"
#include "coeng.h"
#include "cpu.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmcrs_diag_dat.h"
#include "epmcrs_msg.h"
#if ((EPM_DIAGSPC_SY == 1) || (EPM_DIAGSPC_SY == 3))
#include "epmhspc_check_auto_conf.h"
#endif
#endif

#ifndef CMBTYP_SY
    #error >>>> 'CMBTYP_SY' not defined!
#endif
#ifndef CMBTYP_DS
    #error >>>> 'CMBTYP_DS' not defined!
#endif
#ifndef EPM_SYNCSLV_SY
    #error >>>> 'SYNCSLV_SY' not defined!
#endif

#if ((CMBTYP_SY == CMBTYP_DS) && (EPM_SYNCSLV_SY == 1))
#include "can.h"                /* needed for master/slave CAN communication */
#endif  // ((CMBTYP_SY == CMBTYP_DS) && (EPM_SYNCSLV_SY == 1))

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


/* _EPMCRS_DIAG_INF_H                                                                             */
#endif
