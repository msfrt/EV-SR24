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
 * $Filename__:cj135_inl.h$
 *
 * $Author____:EGF2FE$
 *
 * $Function__:Kind of user branch for storing the changes for implementation of
 *              Keep Alive at CJ135$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ABE3KOR$
 * $Date______:10.05.2012$
 * $Class_____:SWHDR$
 * $Name______:cj135_inl$
 * $Variant___:1.6.0$
 * $Revision__:1$
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
 * 1.6.0; 1     10.05.2012 ABE3KOR
 *   Cj125_CheckPmError() is corrected.
 *   Only the requested chips data is erased in Cj135_stDrvErr_b32.
 * 
 * 1.6.0; 0     23.12.2011 ABE3KOR
 *   The MISRA warning comments are introduced.
 * 
 * 1.5.0; 0     11.08.2011 EGF2FE
 *   Keep alive implemented
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _CJ135_INL_H
#define _CJ135_INL_H

#ifndef NO_CJ135_IN_SYSTEM
/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the inline function of the driver for the CJ125
 *
 * \scope          API
 ***************************************************************************************************
 */
static __inline__ bit32 Cj135_CheckPmErrorIni (uint32 ctChipIDX_u32) __attribute__ ((always_inline));
static __inline__ bit32 Cj135_CheckPmError(uint32 ctChipIDX_u32) __attribute__ ((always_inline));
/**
 ***************************************************************************************************
 * Cj135_CheckPmErrorIni - Analyse if there were errors during initialization
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... 1:error 0:no error
 *
 ***************************************************************************************************
 */
/* IGNORE RULE 3480: These are inline functions and hence are part of header file.      */
static __inline__ bit32 Cj135_CheckPmErrorIni (uint32 ctChipIDX_u32)
{
    ctChipIDX_u32--;

    return ((Cj135_stIniErr_b32 >> ctChipIDX_u32) & 0x1);
}
/**
 ***************************************************************************************************
 * Cj135_CheckPmError - Analyse if there was error during drive inside CJ125
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... 1:error 0:no error
 *
 ***************************************************************************************************
 */

/* IGNORE RULE 3480: These are inline functions are hence a part of the header file.      */
static __inline__ bit32 Cj135_CheckPmError(uint32 ctChipIDX_u32)
{

    bit32       xRetVal_b32;  /* Return Value */

    ctChipIDX_u32--;

    /* To avoid higher priority 10ms from changing the read value */
    Cpu_SuspendInt();

    xRetVal_b32 = ((Cj135_stDrvErr_b32 >> ctChipIDX_u32) & 0x1);
    /* Reset the internal variable */
    Cj135_stDrvErr_b32 &= ~(uint32)(1 << ctChipIDX_u32);

    /* Resume the interrupts */
    Cpu_ResumeInt();

    return (xRetVal_b32);

}
#endif

#endif
