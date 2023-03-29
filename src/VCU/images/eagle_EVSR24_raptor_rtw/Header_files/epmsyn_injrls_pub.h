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
 * $Filename__:epmsyn_injrls_pub.h$
 *
 * $Author____:SCK2FE$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DRE2FE$
 * $Date______:07.05.2012$
 * $Class_____:SWHDR$
 * $Name______:epmsyn_injrls_pub$
 * $Variant___:1.24.0$
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
 * 1.24.0; 0     07.05.2012 DRE2FE
 *   Takeover of 
 *   RCMS01273650 - 2 - Adaption of DSQ_EpmSynInjRls to overcome missbehaviour 
 *   in case of engine stop by ISS
 *   in latest platform development. 
 *   Removal of system constant mechanism (EPMSYN_INJRLS == 1 OR != 1) 
 *   introduced in SC : EpmSyn  1.23.0; 0 and SC : EpmSyn  8.0.0; 0.
 * 
 * 1.22.0; 0     03.05.2011 NF72FE
 *   RCMS00984454: Include of EpmSyn_InjRls to latest plattform-package
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMSYN_INJRLS_PUB_H                                   /* protect multiple includes              */
#define _EPMSYN_INJRLS_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header-file of FCT EPMSYN_INJRLS
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern void EpmSyn_InjRls_Proc_IniEnd(void);
extern void EpmSyn_InjRls_Proc_SyncIni(void);
extern void EpmSyn_InjRls_Proc(void);

/* _EPMSYN_INJRLS_PUB_H                                                                                   */
#endif
