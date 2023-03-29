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
 * $Filename__:i14229appl_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DAH5KOR$ 
 * $Date______:11.06.2015$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229appl_inf$ 
 * $Variant___:NEWEAGLE$ 
 * $Revision__:1$ 
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
 * NEWEAGLE; 1     11.06.2015 DAH5KOR
 *   ComDia package customised for New Eagle projects
 * 
 * NEWEAGLE; 0     11.11.2014 DAH5KOR
 *   Prototype implementation for New Eagle
 * 
 * 18.1.1; 0     05.06.2013 JAG2ABT
 *   removed compiler warnings
 * 
 * 18.1.0; 0     27.02.2013 JAG2ABT
 *   for PVER
 * 
 * 18.0.0; 0     20.09.2010 DUE2ABT
 *   new version for maserati
 * 
 * 6.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from clearcase : B_BASSVR_Conf.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229APPL_INF_H
#define _I14229APPL_INF_H


/*
***************************************************************************************************
* Public Includes
***************************************************************************************************
*/

#include "uacc.h"                   /*This file is included here because the "basutil_pub.h" cannot
                                      contain includes*/
#include "diag.h"



#include "basutil.h"           /*i14229_pub included in the i14229.h has a dependency on basutil.h*/
#include "i14229_prot.h"
#include "i14229appl_dsm_prot.h"
#include "i14229.h"
#include "i14229_cc_prot.h" /* comminucation control service */

#include "cpu.h"
#include "srvb.h"              /* include header for SrvB_MemCopy() */
#include "dsm.h"
#include "reset.h"

//#include "i14229_advseca_prot.h"
//#include "i14229_rdtc_prot.h"
#include "i14229appl_confprot.h"

/* dependency to other packages */
#include "cpu.h"
#include "dsm.h"
#include "dsm_friends.h"

/* include header for dnm and frm function in i14229_appl.c:I14229_CC_EnableDisableRxTx
   Remove the following header if the projects are not using the dnm and frm modules  */

#include "eep.h"              /* sector change before jump to CB  */
//#include "frm.h"


/*
***************************************************************************************************
* Protected Includes
***************************************************************************************************
*/

/*
 ***************************************************************************************************
 * Other Inline Functions
 ***************************************************************************************************
 */



/* *************************************************************************************************
 * Generated message header files
 ***************************************************************************************************
 */


#endif
