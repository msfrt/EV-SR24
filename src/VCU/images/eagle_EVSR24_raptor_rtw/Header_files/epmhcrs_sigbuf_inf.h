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
 * $Filename__:epmhcrs_sigbuf_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LDB2FE$ 
 * $Date______:10.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmhcrs_sigbuf_inf$ 
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
 * 1.22.0_3; 0     10.07.2009 LDB2FE
 *   Initial import from Clearcase 
 *      File name: epmhcrs_sigbuf_inf.h
 *      Version: \main \basis\b_Epm\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMHCRS_SIGBUF_INF_H
#define _EPMHCRS_SIGBUF_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmhcrs_sigbuf
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


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmhcrs_sigbuf_dat.h"
#include "epmhcrs_msg.h"
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


/* _EPMHCRS_SIGBUF_INF_H                                                                          */
#endif
