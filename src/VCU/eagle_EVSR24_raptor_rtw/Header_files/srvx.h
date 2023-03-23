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
 * $Filename__:srvx.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:23.04.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx$ 
 * $Variant___:1.18.0$ 
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
 * 1.18.0; 0     23.04.2013 PIR5COB
 *   The following changes has been made in FC : SrvX:
 *   
 *   1. Bugfix is provided for the fixed intervel interpolation functionalities.
 * 
 * 1.17.0; 0     02.11.2012 PIR5COB
 *   New adapter is included for address calculation of interpolation 
 *   functionality.
 *   
 * 
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvX
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX.12.0.0
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVX.11.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVX.10.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_H
#define _SRVX_H


/*
 ***********************************************************************************************************************
 * Import exported interfaces needed by header files and inline header files
 ***********************************************************************************************************************
 */

/* Memlay is required to alocate the routines in SPRAM or make them INLINE */
#include "memlay.h"

/* Extended services may call basic services */
#include "srvb.h"


/*
 ***********************************************************************************************************************
 * Configuration of package and import own exported interfaces, macros and datatypes
 ***********************************************************************************************************************
 */

/* Memlay is required to alocate the routines in SPRAM or make them INLINE */
#include "srvx_conf.h"


/*
 ***********************************************************************************************************************
 * DGS Implementations
 ***********************************************************************************************************************
 */

#include "srvx_exp.h"
#include "srvx_control.h"
#include "srvx_control_inl.h"
#include "srvx_controller.h"
#include "srvx_controller_inl.h"
#include "srvx_exp_inl.h"
#include "srvx_filter.h"
#include "srvx_filter_inl.h"
#include "srvx_ipo.h"
#include "srvx_ipocurve_inl.h"
#include "srvx_ipomap_inl.h"
#include "srvx_iposearch_inl.h"

/*
 ***********************************************************************************************************************
 * DS/GS Adapter
 ***********************************************************************************************************************
 */

#include "srvx_adapter.h"
#include "srvx_adapter_inl.h"

/*  _SRVX_H */
#endif
