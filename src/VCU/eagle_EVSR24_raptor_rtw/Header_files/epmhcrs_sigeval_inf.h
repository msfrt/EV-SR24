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
 * $Filename__:epmhcrs_sigeval_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:03.03.2011$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_sigeval_inf$
 * $Variant___:1.31.0$
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
 * 1.31.0; 0     03.03.2011 OMO2FE
 *   Remove dependency to processor-type from epm interface header
 * 
 * 1.29.0; 0     21.02.2011 OMO2FE
 *   Remove dependency to processor-type from epm_inf.h files
 * 
 * 1.24.0; 0     23.04.2010 NF72FE
 *   check for existance of new processor-defines before including the header to
 *    avoid compiler-warnings
 * 
 * 1.23.0; 0     29.03.2010 PUC2FE
 *   enlarge the script to support the controller
 *   TC1724,
 *   TC1782,
 *   TC1793
 * 
 * 1.22.0_4; 0     17.07.2009 TUC2SI
 *   changes after testintegration
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_SIGEVAL_INF_H
#define _EPMHCRS_SIGEVAL_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmhcrs_sigeval
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"
#include "reset.h"
#include "cpu.h"
#if !EPMHWE_SWTCPU_SY   // PCP
 #include "pcp.h"
#endif
#include "srvb.h"



/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmhcrs_sigeval_dat.h"
#include "epmhcrs_msg.h"
#define EPMHCRS_INC_SELECT
#define EPMHCRS_DGI_SELECT
#define EPMHCRS_TIMEOUT_SELECT
#endif

#ifndef EPMHWE_SWTCPU_SY
  #error >>>> 'EPMHWE_SWTCPU_SY' undefined !
#endif

#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #include "pcp_pramdef_auto_conf.h"
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


/* _EPMHCRS_SIGEVAL_INF_H                                                                         */
#endif
