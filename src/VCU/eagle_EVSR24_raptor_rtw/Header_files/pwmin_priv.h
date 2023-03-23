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
 * $Filename__:pwmin_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:INTECKEN$
 * $Date______:17.06.2010$
 * $Class_____:SWHDR$
 * $Name______:pwmin_priv$
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
 * 1.15.0; 0     17.06.2010 INTECKEN
 *   removed MISRA warnings
 * 
 * 1.14.0; 0     25.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pwmin_priv.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWMIN_PRIV_H
#define _PWMIN_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PwmIn - Pulse width modulated input signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * defines, type defs, enums, inlines, macros ...
 ***************************************************************************************************
 */

// internal MOK macros
#define PWMIN_MOK_BUF_SIZE               12

// OPS+T sensor spec explains start frame length of 1024us +-10%,
// SW limits should cover this range, +-20% chosen
#ifndef PWMIN_OPST_PERMIN_US_F
#define PWMIN_OPST_PERMIN_US_F           (0.8f)
#endif
#ifndef PWMIN_OPST_PERMAX_US_F
#define PWMIN_OPST_PERMAX_US_F           (1.2f)
#endif

#define PWMIN_MOKISR_TOUT_US            (100000)
#define PWMIN_MOKISR_MAX_NOISE_EDGES         (3)
#define PWMIN_MOKISR_NOISE_THRSHLD_US       (40)


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern void Pwmin_LtcDirect    (Pwmin_Signal_t xSignal, Pwmin_Result_t* xResult_ps);
extern void Pwmin_DcmDirect    (Pwmin_Signal_t xSignal, Pwmin_Result_t* xResult_ps);
extern void Pwmin_GtcIrq       (Pwmin_Signal_t xSignal, Pwmin_Result_t* xResult_ps);

extern void Pwmin_LtcPerDirect (Pwmin_Signal_t xSignal, Pwmin_ResultPer_t* xResult_ps);
extern void Pwmin_DcmPerDirect (Pwmin_Signal_t xSignal, Pwmin_ResultPer_t* xResult_ps);

extern void Pwmin_LtcIrq       (Pwmin_Signal_t xSignal, Pwmin_ResultXt_t* xResult_ps);
extern void Pwmin_DcmIrq       (Pwmin_Signal_t xSignal, Pwmin_ResultXt_t* xResult_ps);
extern void Pwmin_GtcIrqXt     (Pwmin_Signal_t xSignal, Pwmin_ResultXt_t* xResult_ps);
__PRAGMA_USE__CODE__pwm__NormalSpeed__END

/* _PWMIN_PRIV_H                                                                                  */
#endif
