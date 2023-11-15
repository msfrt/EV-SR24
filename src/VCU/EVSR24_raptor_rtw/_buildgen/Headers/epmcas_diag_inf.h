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
 * $Filename__:epmcas_diag_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:22.05.2012$
 * $Class_____:SWHDR$
 * $Name______:epmcas_diag_inf$
 * $Variant___:1.29.0$
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
 * 1.29.0; 0     22.05.2012 OMO2FE
 *   header concept restructuring for polarity check
 * 
 * 1.23.0; 1     08.03.2010 OMO2FE
 *   correction for sensor polarity check
 * 
 * 1.23.0; 0     14.12.2009 CAD2SI
 *   Add feature sensor polarity check
 * 
 * 1.20.1; 0     14.05.2009 LDB2FE
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :epmcas_diag_inf
 *        Variant :1.60
 *        Revision :0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCAS_DIAG_INF_H
#define _EPMCAS_DIAG_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmcas_diag
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"
#include "dsm.h"


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H

#include "epmcas_diag_dat.h"
#include "epmcas_msg.h"
#if ((EPM_DIAGSPC_SY == 2) || (EPM_DIAGSPC_SY == 3))
#include "epmhspc_check_auto_conf.h"
#endif
#endif

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


/* _EPMCAS_DIAG_INF_H                                                                             */
#endif
