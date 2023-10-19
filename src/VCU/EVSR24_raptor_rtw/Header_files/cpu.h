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
 * $Filename__:cpu.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:cpu$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: cpu.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPU_H
#define _CPU_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              CPU module interface headerfile
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/* register access macros */
#include "reg.h"

/* register definitions of peripherals used inside Cpu module */
#include REG_GENERAL_H
#include REG_STM_H
#include REG_SCU_H
#include REG_MCHK_H

/* needed for memory allocation macros */
#include "memlay.h"

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component Cpu
 ***************************************************************************************************
 */

/* module public interface */
#include "cpu_pub.h"

/* auto-generated configuration headerfile */
#ifndef _LIBRARYABILITY_H
#include "cpu_auto_conf.h"
#endif

/*
 ***************************************************************************************************
 * INL Section: include all inline functions of the atomic component Cpu
 ***************************************************************************************************
 */

#include "cpu_inl.h"

/* end of #ifdef block _CPU_H */
#endif
