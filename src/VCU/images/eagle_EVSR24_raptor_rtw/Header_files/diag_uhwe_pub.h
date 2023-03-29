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
 * $Filename__:diag_uhwe_pub.h$ 
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
 * $Name______:diag_uhwe_pub$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag_uhwe_pub.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 


#ifndef _DIAG_UHWE_PUB_H
#define _DIAG_UHWE_PUB_H

/**
 *********************************************************************
 * \moduldescription
 *          target dependencies in diag module
 *
 * \scope  INTERN
 *********************************************************************
 */


/*
 *******************************************************************************
 * Defines and macros
 *******************************************************************************
 */

/* interrupt disabling and enabling */

/* use suspend/resume macros from Cpu module here */
#define DIAG_BEGIN_ATOMIC(p)    Cpu_SuspendInt()
#define DIAG_END_ATOMIC(p)      Cpu_ResumeInt()

/*
 Number of ticks per microsecond.
*/
#define DIAG_TICKS_PER_US       CPU_TICKS_PER_US_U32

/**
 Conversion microseconds to ticks.
 This macro converts a time in microseconds into system ticks.
 */
#define DIAG_US_TO_TICKS(microsecs)  (CPU_US_TO_TICKS(microsecs))

/**
 Conversion milliseconds to ticks.
 This macro converts a time in milliseconds into system ticks.
 */
#define DIAG_MS_TO_TICKS(millisecs)  (CPU_MS_TO_TICKS(millisecs))

/**
 Conversion seconds to ticks.
 This macro converts a time in milliseconds into system ticks.
 */
#define DIAG_S_TO_TICKS(secs)        (CPU_S_TO_TICKS(secs))

/**
 Conversion ticks to microseconds.
 This macro converts a time in system ticks into microseconds.
 */
#define DIAG_TICKS_TO_US(ticks)      (CPU_TICKS_TO_US(ticks))

/**
 Conversion ticks to milliseconds.
 This macro converts a time in system ticks into milliseconds.
 */
#define DIAG_TICKS_TO_MS(TICKS)      (CPU_TICKS_TO_MS(ticks))

/**
 Conversion ticks to milliseconds.
 This macro converts a time in system ticks into milliseconds.
 */
#define DIAG_TICKS_TO_S(TICKS)       (CPU_TICKS_TO_S(ticks))

#define DIAG_MS_TO_TICKS_LIB(millisecs)  (CPU_MS_TO_TICKS(millisecs))

#define DIAG_US_TO_TICKS_LIB(microsecs)  (CPU_US_TO_TICKS(microsecs))

/* Min/max operations */
#define DIAG_MAX(a, b) (((a) >= (b)) ? (a) : (b))
#define DIAG_MIN(a, b) (((a) <= (b)) ? (a) : (b))


/*
 * Macros to access system time
 */

#define DIAG_SYSTEM_TIME_LOW        Cpu_GetTIM0
#define DUART_FRAME_ERR_DB32        UART_ST_FRAME_ERR_DB32

#endif
