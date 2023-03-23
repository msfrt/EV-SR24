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
 * $Filename__:epmhcas_sigeval_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:17.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmhcas_sigeval_inf$ 
 * $Variant___:1.22.0_3$ 
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
 * 1.22.0_3; 0     17.07.2009 TUC2SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMHCAS_SIGEVAL_INF_H
#define _EPMHCAS_SIGEVAL_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmhcas_sigeval
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmhcas_sigeval_dat.h"

#define EPMHCAS_ISR_SELECT


#ifndef EPMHWE_SWTCPU_SY
  #error >>>> 'EPMHWE_SWTCPU_SY' undefined !
#endif

#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #include "pcp_mnemonics.h"
 #include "pcp_pramdef_auto_conf.h"
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


/* _EPMHCAS_SIGEVAL_INF_H                                                                         */
#endif
