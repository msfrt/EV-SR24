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
 * $Filename__:gpta.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:24.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:gpta$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     24.11.2009 AWL2SI
 *   B_GPTA.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GPTA_H
#define _GPTA_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      GPTA - General Purpose Timer Array
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */
#include "reg.h"
#include "cpu.h"

/* the following used macros are defined inside reg.h depending on the used machine type */
#include REG_GPTA0_H
#include REG_GPTA1_H
#include REG_LTCA2_H

/*
 ***************************************************************************************************
 * FCT Section: include public header of the FCT
 ***************************************************************************************************
 */
#ifndef _LIBRARYABILITY_H
#include "gpta_auto_conf.h"
#endif

#include "gpta_pub.h"
#include "gpta_bss_pcp.h"
#include "gpta_mok_pcp.h"


/* _GPTA_H                                                                                        */
#endif
