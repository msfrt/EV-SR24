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
 * $Filename__:pwmin_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:25.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pwmin_prot$ 
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
 * 1.14.0; 0     25.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pwmin_prot.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PWMIN_PROT_H
#define _PWMIN_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PwmIn - Pulse Width Modulated Input Signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
typedef struct
{
    uint32 tiPer_u32;
    uint32 tiPlsDur_u32;
    uint8  stSig_u8;
} PwmIn_MonFuncRslt_t;

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Calculation of pointer to signal configuration structure.
 *
 * This macro calculates the configuration data access pointer based on the signal name. To be
 * prior calling the Pwm_InMon() interface.
 *
 * \param         uint    idx
 * \return        pointer to signal configuration data
 * \seealso       Pwm_InMon()
 ***************************************************************************************************
 */
#define PwmIn_CalcSigPtr(idx)    (&Pwmin_ConfigData_a[(idx)])

/**
 ***************************************************************************************************
 * Redefine old (sole) monitoting interface to new one with routing capabilities
 *
 * Hint: The old macro PwmIn_DcmDirectMon was used without ';' at end of line so the redefinition
 * adds the ';' for Pwm_InMon() compatibility. It must not be used with a ';' at the end.
 *
 * \param         see Pwm_InMon()
 * \return        see Pwm_InMon()
 * \seealso       Pwm_InMon()
 ***************************************************************************************************
 */
/* MISRA RULE 90 VIOLATION: for compatibility ";" used */
#define PwmIn_DcmDirectMon(a, b)    Pwm_InMon(a, b);


/* _PWMIN_PROT_H                                                                                  */
#endif
