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
 * $Filename__:core_env.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZT2FE$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:core_env$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   .
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: core_env.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _CORE_ENV_H
#define _CORE_ENV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * export interface headerfile of component CORE_ENV
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* set global define __use64integers__                          */
/* required by std_type.h for definition of long long data type */

#define __use64integers__

/*
 ***************************************************************************************************
 * Re-export section
 ***************************************************************************************************
 */

/* Standard types */
#include "std_type.h"

/* Compiler specifics */
#include "compiler_medc17.h"
/* AUTOSAR specific compiler.h */
#include "Compiler.h"

/* CPU type & specifics */
#include "machine.h"

/*
 ***************************************************************************************************
 * Own includes
 ***************************************************************************************************
 */

#include "core_env_pub.h"

/* end of _CORE_ENV_H */
#endif
