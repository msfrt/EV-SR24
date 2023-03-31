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
 * $Filename__:esc_stack_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:GAI2KOR$ 
 * $Date______:15.07.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:esc_stack_inf$ 
 * $Variant___:1.18.0$ 
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
 * 1.18.0; 1     15.07.2011 GAI2KOR
 *   Correcting the build errors for ESC_SYNCTASK_SC == 1
 * 
 * 1.18.0; 0     13.04.2011 GAI2KOR
 *   esc_msg.h file inclusion is put under ESC_SYNCTASK_SC != 1 check
 * 
 * 1.16.0; 0     03.12.2008 NF72FE
 *   common ESC
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ESC_STACK_INF_H
#define _ESC_STACK_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  private interface of ESC
 *
 * \scope INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "cpu.h"
#include "esc.h"
/* IGNORE RULE 5220: ETAS header uses include protection starting with double underscore  */
#include "e_inface.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */
#include "esc_stack_dat.h"
#if (ESC_SYNCTASK_SC != 1)
#include "epm.h"
#include "esc_msg.h"
#endif
#include "esc_prot.h"
#include "srvb.h"

/*
 ***************************************************************************************************
 * Inline Includes
 ***************************************************************************************************
 */


/* _ESC_STACK_INF_H */
#endif
