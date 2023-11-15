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
 * $Filename__:pmd_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:16.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmd_priv$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pmd_priv.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMD_PRIV_H
#define _PMD_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern variables
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__50ms_1s__RAM__x8__START
extern bool   Pmd_stEepWrOk_b;
__PRAGMA_USE__hwe__50ms_1s__RAM__x8__END

__PRAGMA_USE__hwe__50ms_1s__RAM__x32__START
extern bit32 Pmd_stDrvErrVal_b32;
extern bit32 Pmd_stIniErrVal_b32;
__PRAGMA_USE__hwe__50ms_1s__RAM__x32__END

#ifdef PMD_PM_DSM_REPORT
__PRAGMA_USE__hwe__50ms_1s__RAM__x32__START
extern bit32  Pmd_stIniErrForDSM_b32;
__PRAGMA_USE__hwe__50ms_1s__RAM__x32__END
#endif

#ifdef PMD_PM_DSM_REPORT
__PRAGMA_USE__hwe__50ms_1s__RAM__x16__START
extern uint16 Pmd_SystemTimeLastDeb_u16 ;
__PRAGMA_USE__hwe__50ms_1s__RAM__x16__END
#endif

MEMLAY_USE_PROTRAM(extern bool, Pmd_stDrvResetDone_b);
MEMLAY_USE_PROTRAM(extern bool, Pmd_stIniResetDone_b);


__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bit32  Pmd_IniChkFuncs(void);
extern bit32  Pmd_DrvChkFuncs(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END


#endif /* _PMD_PRIV_H */
