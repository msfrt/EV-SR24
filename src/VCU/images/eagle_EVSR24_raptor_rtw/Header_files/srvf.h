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
 * $Filename__:srvf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SYA2COB$
 * $Date______:21.08.2014$
 * $Class_____:SWHDR$
 * $Name______:srvf$
 * $Variant___:1.22.0$
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
 * 1.22.0; 0     21.08.2014 SYA2COB
 *   Addition of new API SrvF_Extract_FloatBitFields_R32
 * 
 * 1.18.0; 0     25.04.2013 PIR5COB
 *   The following changes has been made in FC : SrvF:
 *   1. New mixed integer and float data type interpolation functionalities are 
 *   added.
 *   2. New float memory copy functionality is added.
 *   3. New float equality comparison function is added.
 *   
 *   Additionally, the variable DX in the function srvf_exp is renamed as Dx_r32
 *    to remove a build error due to multiple definitions.
 * 
 * 1.17.0; 0     21.11.2012 PIR5COB
 *   New adapter is added for address calculation of interpolation 
 *   functionality.
 * 
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvF
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVF.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVF.11.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVF.10.0.0
 * 
 * 1.9.0; 0     29.08.2008 VKA2FE
 *   Component Toolbox-Import
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

#ifndef _SRVF_H
#define _SRVF_H


/*
 ***********************************************************************************************************************
 * Import exported interfaces needed by header files and inline header files
 ***********************************************************************************************************************
 */

/* Memlay is required to alocate the routines in SPRAM or make them INLINE */
#include "memlay.h"

/* Is needed because some basic services are used inside float services (e.g. ramps) */
#include "srvb.h"
#include "srvx.h"

/*
 ***********************************************************************************************************************
 * Configuration of package and import own exported interfaces, macros and datatypes
 ***********************************************************************************************************************
 */

/* Configuration of memory-location */
#include "srvf_conf.h"

/* Common definitions and types */
#include "srvf_pub.h"

/*
 ***********************************************************************************************************************
 * DGS Implementations
 ***********************************************************************************************************************
 */
#include "srvf_convert.h"
#include "srvf_convert_inl.h"
#include "srvf_logexp.h"
#include "srvf_control.h"
#include "srvf_control_inl.h"
#include "srvf_controller.h"
#include "srvf_controller_inl.h"
#include "srvf_filter.h"
#include "srvf_filter_inl.h"
#include "srvf_ipo.h"
#include "srvf_limit.h"
#include "srvf_limit_inl.h"
#include "srvf_sort.h"
#include "srvf_stat.h"
#include "srvf_stat_inl.h"
#include "srvf_trig.h"

/*
 ***********************************************************************************************************************
 * DS/GS Adapter
 ***********************************************************************************************************************
 */

#include "srvf_adapter.h"
#include "srvf_adapter_inl.h"

/* _SRVF_H */
#endif
