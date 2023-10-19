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
 * $Filename__:basutil_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:29.03.2011$
 * $Class_____:SWHDR$
 * $Name______:basutil_inf$
 * $Variant___:35.0.0$
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
 * 35.0.0; 0     29.03.2011 JAG2ABT
 *   Variant for Ferrari and Maserati
 * 
 * 25.0.0; 0     10.11.2010 DUE2ABT
 *   first version for maserati
 * 
 * 3.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: basutil_inf.h
 *      Version: \main\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _BASUTIL_INF_H
#define _BASUTIL_INF_H


/*
***************************************************************************************************
* Public Includes
***************************************************************************************************
*/

#include PROJECT_H                  /* project specific header file       */
#include "dme.h"
#include "reset.h"
#include "memlay.h"
#include "cpu.h"
#include "uacc.h"
#include "diagcom.h"                /*This file is included here because the "basutil_pub.h" cannot
                                      contain includes*/
#include "basutil.h"

#ifndef SY_CANVAR
  #error >>>> 'SY_CANVAR' undefined
#elif (SY_CANVAR == 5)
  #include "i14229.h"
#elif (SY_CANVAR == 4)
  #include "i14230.h"
#else
  #error >>>> 'SY_CANVAR' multiple defined
#endif

/*
***************************************************************************************************
* Protected Includes
***************************************************************************************************
*/

/*
 ***************************************************************************************************
 * Other Inline Functions
 ***************************************************************************************************
 */



/* *************************************************************************************************
 * Generated message header files
 ***************************************************************************************************
 */


#endif
