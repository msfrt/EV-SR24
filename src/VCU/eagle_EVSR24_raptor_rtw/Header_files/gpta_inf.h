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
 * $Filename__:gpta_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GS72FE$
 * $Date______:09.07.2010$
 * $Class_____:SWHDR$
 * $Name______:gpta_inf$
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
 * 1.14.0; 0     09.07.2010 GS72FE
 *   adding optional customer specific parts selected by two new system 
 *   constants
 * 
 * 1.10.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: gpta_inf.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _GPTA_INF_H
#define _GPTA_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      GPTA - General Purpose Timer Array
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "gpta.h"

#include "port.h"
#include "reg.h"
#include "srvb.h"
#ifdef CPU_PCP_AVL
#include "pcp.h"
#include "pcp_pramdef_auto_conf.h"
#endif

#include REG_GPTA0_H
#include REG_GPTA1_H
#include REG_LTCA2_H

#ifndef _LIBRARYABILITY_H

/* if DAMOS is available, include generated data header file */
/* switch is defined in gpta_pub.h                           */
#if (GPTA_USE_DAMOS)
#include "gpta_dat.h"
#endif

#endif



/*
 ***************************************************************************************************
 * Library functions with inline/no-inline implementation (always include the code)
 ***************************************************************************************************
 */

/* GPTA_INF_H                                                                                     */
#endif
