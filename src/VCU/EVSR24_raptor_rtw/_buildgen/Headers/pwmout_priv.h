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
 * $Filename__:pwmout_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:INTECKEN$ 
 * $Date______:28.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:pwmout_priv$ 
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
 * 1.15.0; 0     28.06.2010 INTECKEN
 *   RCMS00638034 - Pwmout: new CommonPWM (synchronous LTC method)
 * 
 * 1.12.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmout_priv.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PWMOUT_PRIV_H
#define _PWMOUT_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                           PwmOut - Pulse width modulated output signals.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/// remember polarity to avoid FPI bus access
#define PWMOUT_POSITIVE_DC  (1ul)
/// remember polarity to avoid FPI bus access
#define PWMOUT_NEGATIVE_DC  (0ul)
/// immediate update request, restart new period
#define PWMOUT_IMMEDIATE    (1ul)
/// update request syncronised to period boundary
#define PWMOUT_NOTIMMEDIATE (0ul)

#define PWMOUT_LTC_CUDCLR   ((uint16)(((1<<GPTA0_LTCCTR_CUDCLR_LEN)-1)<<GPTA0_LTCCTR_CUDCLR_POS))

#define PWMOUT_CPWM_NUMBER_BP  (12ul)
#define PWMOUT_CPWM_NUMBER_MSK (0xF000ul)
#define PWMOUT_CPWM_OFFSET_MSK (0x000Ful)

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef enum
{
/// good healthy init state
    PWMOUT_DEBUGNONE_E,
/// catch short periods <=0
    PWMOUT_PERIOD2SMALL_E,
/// this peripheral supports 16 bits only
    PWMOUT_PERIOD2LARGE16_E,
/// this peripheral supports 24 bits only
    PWMOUT_PERIOD2LARGE24_E,
/// catch duty cycles > 100%
    PWMOUT_DUTY2LARGE_E,
/// catch duty cycles < 0%
    PWMOUT_DUTYNEGATIVE_E,
/// limit to 32 bit range
    PWMOUT_DATA64BIT_E,
/// IRQ latency condition on GTC's not met
    PWMOUT_LATENCY_GTCIRQ_E,
/// Pulses supported on GTC's only
    PWMOUT_LTCPULSE_E,
/// Period in Buffer <= 0
    PWMOUT_ZERO_BUFFER_E,
/// this element is always last: total number of elements
    PWMOUT_DEBUGLAST_E
} Pwmout_debug_e;


/* Bit positions used for internal status information */

#define PWMOUT_HBRIDGEADVLVL_POS 1
#define PWMOUT_HBRIDGEADVLVL_LEN 1
#define PWMOUT_FREEWHLENBL_POS   2
#define PWMOUT_FREEWHLENBL_LEN   1


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/**
  Pwmout_DebugInfo_e - Use a write breakpoint to trap first occurence of Bug.
  Error cause can be identified by enumerator.
*/
__PRAGMA_USE__pwm__1_5ms__InitRAM__x32__START
extern Pwmout_debug_e Pwmout_DebugInfo_e;
__PRAGMA_USE__pwm__1_5ms__InitRAM__x32__END

/* _PWMOUT_PRIV_H                                                                                 */
#endif
