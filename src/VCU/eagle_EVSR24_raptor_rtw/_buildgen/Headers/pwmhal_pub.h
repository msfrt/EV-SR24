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
 * $Filename__:pwmhal_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:INTECKEN$
 * $Date______:18.06.2010$
 * $Class_____:SWHDR$
 * $Name______:pwmhal_pub$
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
 * 1.15.0; 0     18.06.2010 INTECKEN
 *   removed MISRA warnings
 * 
 * 1.12.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmhal_pub.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWMHAL_PUB_H
#define _PWMHAL_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      PWMHAL - Hardware abstraction layer of PWM module
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

#define Pwm_Out                                   PwmSetOutV4

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern void Pwm_In    (uint idx, Pwmin_Result_t* xResult_ps);
extern void Pwm_InXt  (uint idx, Pwmin_ResultXt_t* xResult_ps);
extern void Pwm_InPer (uint idx, Pwmin_ResultPer_t* xResult_ps);
__PRAGMA_USE__CODE__pwm__NormalSpeed__END

/* _PWMHAL_PUB_H                                                                                  */
#endif
