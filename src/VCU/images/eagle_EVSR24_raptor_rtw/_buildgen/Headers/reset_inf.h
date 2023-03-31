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
 * $Filename__:reset_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MLN1KOR$ 
 * $Date______:30.05.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:reset_inf$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     30.05.2011 MLN1KOR
 *   Remove execon dependencies
 * 
 * 1.12.0; 0     19.08.2009 AWL2SI
 *   B_RESET.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _RESET_INF_H
#define _RESET_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "reset.h"
#include "cpu.h"
#include "reg.h"
#include "flash.h"
#include "dsm.h"
#include "pwr.h"
#include "spi.h"
#include "eep.h"
#include "port.h"

#ifdef RESET_CIC751SWRESET
#include "Cic751.h"
#endif

#ifdef RESET_T15RST_NEWHNDL
#include "syc.h"
#endif

#include REG_FLASH_H
#include REG_SCU_H
#include REG_MSC_H
#include REG_DMA_H


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */
#include "reset_prot.h"
#include "reset_dat.h"


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


/* _RESET_INF_H                                                                          */
#endif
