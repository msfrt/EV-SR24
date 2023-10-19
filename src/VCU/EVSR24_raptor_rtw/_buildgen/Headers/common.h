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
 * $Filename__:common.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:CHN4KOR$
 * $Date______:28.06.2010$
 * $Class_____:SWHDR$
 * $Name______:common$
 * $Variant___:4600.0.0$
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
 * 4600.0.0; 0     28.06.2010 CHN4KOR
 *   Adaptation of BC EOS 1.15.0 or higher
 * 
 * 1.2.0_1; 0     29.04.2009 WRP2SI
 *   from common.h are the following includes removed:
 *   medc_axispoints_ds_dat.h
 *   medc_axispoints_custom_dat.h
 *   medc_models_custom_dat.h
 *   medc_fixconst_custom_dat.h
 *   
 *   They have to be added (if necessary) at FCL Common_Project at CONF package
 * 
 * 1.1.1; 0     13.08.2008 WRP2SI
 *   Component Toolbox-Import
 * 
 * 1.1.0; 0     31.07.2008 NESTORADMINSDOM
 *   migration from DS to DGS
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/




#ifndef _COMMON_H
#define _COMMON_H

/**
 ***************************************************************************************************
 * \moduledescription
 *           Common header file
 *
 * \scope    INTERN
 ***************************************************************************************************
 */

/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */

/* set global define __use64integers__                          */
/* required by std_type.h for definition of long long data type */

#define __use64integers__

/*--------------------------------------------------------------------------------------------------
 * Includes
 *--------------------------------------------------------------------------------------------------
 */
/* Standard types */
#include "std_type.h"

#include "esc.h"

/* Compiler specifics */
#include "compiler_medc17.h"

/* CPU type & specifics */
#include "machine.h"

#ifndef _LIBRARYABILITY_H

#include "medc_models_ds_gs_dat.h"
#include "medc_models_ds_dat.h"

#include "medc_fixconst_core_dat.h"
#include "medc_fixconst_ds_gs_dat.h"
#include "medc_fixconst_ds_dat.h"

#include "common_project.h"
#endif /* _LIBRARYABILITY_H */

#include "cpu.h"

#endif /* _COMMON_H */
