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
 * $Filename__:srvb.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:10.08.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb$ 
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
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
 * 
 * 1.13.0; 0     09.02.2010 VKA2FE
 *   Derived from B_SRVB.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * 1.10.0; 0     16.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * 1.9.0; 0     29.08.2008 VKA2FE
 *   Component Toolbox-Import
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_H
#define _SRVB_H


/*
 ***********************************************************************************************************************
 * Import exported interfaces needed by header files and inline header files
 ***********************************************************************************************************************
 */

/* CPU is required for hardware timers which needs the TIM4 register */
#include "cpu.h"

/* Memlay is required to alocate the routines in SPRAM or make them INLINE */
#include "memlay.h"


/*
 ***********************************************************************************************************************
 * Configuration of package and import own exported interfaces, macros and datatypes
 ***********************************************************************************************************************
 */

/* Configuration of memory-location */
#include "srvb_conf.h"

/* Common definitions and types */
#include "srvb_pub.h"


/*
 ***********************************************************************************************************************
 * DGS Implementations
 ***********************************************************************************************************************
 */

#include "srvb_limit.h"
#include "srvb_limit_inl.h"
#include "srvb_add.h"
#include "srvb_add_inl.h"
#include "srvb_sub.h"
#include "srvb_sub_inl.h"
#include "srvb_mul.h"
#include "srvb_mul_inl.h"
#include "srvb_div.h"
#include "srvb_div_inl.h"
#include "srvb_bit.h"
#include "srvb_bit_inl.h"
#include "srvb_control.h"
#include "srvb_control_inl.h"
#include "srvb_mem.h"
#include "srvb_mem_inl.h"
#include "srvb_sort.h"
#include "srvb_stat.h"
#include "srvb_stat_inl.h"
#include "srvb_timer.h"
#include "srvb_timer_inl.h"

/*
 ***********************************************************************************************************************
 * DS/GS Adapter
 ***********************************************************************************************************************
 */

#include "srvb_adapter.h"
#include "srvb_adapter_inl.h"


/* _SRVB_H */
#endif
