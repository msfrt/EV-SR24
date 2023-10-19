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
 * $Filename__:cj125_inl.h$
 *
 * $Author____:LENZSI$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:EGF2FE$
 * $Date______:28.10.2010$
 * $Class_____:SWHDR$
 * $Name______:cj125_inl$
 * $Variant___:1.10.0$
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
 * 1.10.0; 0     28.10.2010 EGF2FE
 *   MISRA warnings removed
 * 
 * 1.8.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cj125_inl.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _CJ125_INL_H
#define _CJ125_INL_H

#ifndef NO_CJ125_IN_SYSTEM
/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the inline function of the driver for the CJ125
 *
 * \scope          API
 ***************************************************************************************************
 */
static __inline__ bit32 Cj125_CheckPmErrorIni (uint32 ctChipIDX_u32) __attribute__ ((always_inline));
static __inline__ bit32 Cj125_CheckPmError(uint32 ctChipIDX_u32) __attribute__ ((always_inline));
/**
 ***************************************************************************************************
 * Cj125_CheckPmErrorIni - Analyse if there was error initialization
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... 1:error 0:no error
 *
 ***************************************************************************************************
 */

static __inline__ bit32 Cj125_CheckPmErrorIni (uint32 ctChipIDX_u32)
{
    ctChipIDX_u32--;

    return (Cj125_stIniErr_b32[ctChipIDX_u32]);
}
/**
 ***************************************************************************************************
 * Cj125_CheckPmError - Analyse if there was error during drive inside CJ125
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... 1:error 0:no error
 *
 ***************************************************************************************************
 */

static __inline__ bit32 Cj125_CheckPmError(uint32 ctChipIDX_u32)
{

    bit32       xRetVal_b32;  /* Return Value */

    /* To avoid higher priority 10ms from changing the read value */
    Cpu_SuspendInt();

    ctChipIDX_u32--;

    xRetVal_b32 = Cj125_stDrvErr_b32[ctChipIDX_u32];
    /* Reset the internal variable */
    Cj125_stDrvErr_b32[ctChipIDX_u32] = 0;

    /* Resume the interrupts */
    Cpu_ResumeInt();

    return (xRetVal_b32);

}
#endif

#endif
