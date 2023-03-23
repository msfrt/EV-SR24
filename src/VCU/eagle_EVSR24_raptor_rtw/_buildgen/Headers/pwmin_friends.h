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
 * $Filename__:pwmin_friends.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MVA8COB$ 
 * $Date______:31.12.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:pwmin_friends$ 
 * $Variant___:1.20.3$ 
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
 * 1.20.3; 0     31.12.2013 MVA8COB
 *   Include MOFSTRT_IN_INF_H in the pwmin_friends.h header file, to support for
 *    stepper motor application
 * 
 * 1.13.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmin_friends.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PWMIN_FRIENDS_H
#define _PWMIN_FRIENDS_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      PwmIn - Pulse Width Modulated Input Signals
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * List of friend components
 ***************************************************************************************************
 */
#ifndef _PWM_H
#error "The global interface of PWM must be included first"
#endif

#if  !(defined(_MOFAPP_CO_INF_H)   ||    \
       defined(_MOFCCTL_CO_INF_H)  ||    \
       defined(_MOFVSS_CO_INF_H)   ||    \
       defined(_MOFCLTH_CO_INF_H)  ||    \
       defined(_MOFSTSYS_CO_INF_H) ||    \
       defined(_MOFSTRT_IN_INF_H)  ||    \
       defined(_TESTCD_PWMIN_H) )
#error "Friends interfaces can only be used by dedicated components."
#endif

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */
/* necessary re-export of gpta.h is already done within pwm.h                                     */
#include "port.h"
#include "cpu.h"
#include "srvb.h"


/*
 ***************************************************************************************************
 * Prot-Section: include all required protected headers inside the component
 ***************************************************************************************************
 */
#include "pwmin_prot.h"

/*
 ***************************************************************************************************
 * INL Section: include all inline functions of the atomic components which shall be exported
 ***************************************************************************************************
 */
#include "pwmin_inl.h"


/* _PWMIN_FRIENDS_H                                                                               */
#endif
