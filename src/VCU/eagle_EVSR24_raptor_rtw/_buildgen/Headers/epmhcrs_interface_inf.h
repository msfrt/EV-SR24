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
 * $Filename__:epmhcrs_interface_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:interface header$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:28.02.2011$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_interface_inf$
 * $Variant___:1.26.0_1$
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
 * 1.26.0_1; 0     28.02.2011 OMO2FE
 *   Remove dependency to processor-type from epm interface header
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
 * 1.22.0_1; 1     16.10.2009 TUC2SI
 *   header fixed
 * 
 * 1.22.0_1; 0     10.07.2009 LDB2FE
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_INTERFACE_INF_H
#define _EPMHCRS_INTERFACE_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmhcrs_interface
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
#include "dio.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"

#ifndef _LIBRARYABILITY_H
#include "epmhcrs_interface_dat.h"
#endif

#ifndef EPMHWE_SWTCPU_SY
  #error >>>> 'EPMHWE_SWTCPU_SY' undefined !
#endif

#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #include "pcp.h"
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


/* _EPMHCRS_INTERFACE_INF_H                                                                       */
#endif
