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
 * $Filename__:execon.h$
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
 * $Name______:execon$
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
 *      File name: execon.h
 *      Version: \main\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EXECON_H
#define _EXECON_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              global header file for execon statemachine
 *
 * \scope           [API]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component execon
 ***************************************************************************************************
 */
/* execon will not be able to be library, because the execon_pub.h file needs the   */
/* execon_auto_conf.h file (typedefs). Due to this the ifndef command is commented  */
// #ifndef _LIBRARYABILITY_H
#include "execon_auto_conf.h"
// #endif

#include "execon_pub.h"



/* _EXECON_H                                                                                      */
#endif
