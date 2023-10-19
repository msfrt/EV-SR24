/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************  
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:codegen_sysc.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_sysc$
 * $Variant___:1.0.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SYSC_H
#define _CODEGEN_SYSC_H

/*************************************************************************/
/* SystemStates                                                          */
/*************************************************************************/

#define SYC_WAITPREDRV_IMPL_SyC_WaitPreDrv()     (SyC_WaitPreDrv())
#define SyC_WaitPreDrvIMPL()                     (SyC_WaitPreDrv())

#define SYC_WAITPOSTDRV_IMPL_SyC_WaitPostDrv()   (SyC_WaitPostDrv())
#define SyC_WaitPostDrvIMPL()                    (SyC_WaitPostDrv())

#define SYC_POSTDRVFIN_IMPL_SyC_PostDrvFin()     (SyC_PostDrvFin())
#define SyC_PostDrvFinIMPL()                     (SyC_PostDrvFin())

#define RESET_ECUWASOFF_IMPL_Reset_EcuWasOff()   (Reset_EcuWasOff())
#define Reset_EcuWasOffIMPL()                    (Reset_EcuWasOff())

#endif  /*#ifndef _CODEGEN_SYSC_H*/

