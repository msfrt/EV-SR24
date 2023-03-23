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
 * $Filename__:syc_shutdown_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MHD2KOR$ 
 * $Date______:03.08.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:syc_shutdown_pub$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     03.08.2010 MHD2KOR
 *   RCMS00811281-- Supporting project specific functions before and afte RAM 
 *   test during Syc_shutdown proc
 *   RCMS00812585-- Implememntation of shutdown counter in Syc_shutdown_proc
 * 
 * 1.10.1; 0     26.08.2009 SETATIYO
 *   correct version of header files included
 * 
 * 1.10.0; 0     29.07.2009 SETATIYO
 *   support of additional wakeup possibility in Shutdown via service
 *   Consideration of measures to avoid RAM-overwriting
 *   
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _SYC_SHUTDOWN_PUB_H
#define _SYC_SHUTDOWN_PUB_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "reset.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* show reset package that syc package is able to handle the new t15 reset concept */
#define SYC_T15RST_NEWHNDL 1

/**
 ***************************************************************************************************
 * moduledescription
 *          Shutdown control
 *
 * scope    API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* to indicate the availability of SyC_CheckCanWakeup() for other components */
#define SYC_CHECKCANWAKEUP_DEF 1
/* to indicate the availability of check of general wakeup events for other components */
#define SYC_CHECKGENWAKEUP_DEF 1


__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_Shutdown(void) __attribute__ ((noreturn));
extern void SyC_CheckCanWakeup(void);
extern void SyC_SetBgnShutdownFunc(void(*ptr)(void));
extern void SyC_SetBefRAMChkShutdownFunc(void(*ptr)(void));
extern void SyC_SetAftRAMChkShutdownFunc(void(*ptr)(void));

__PRAGMA_USE__CODE__syc__LowSpeed__END

#if defined (RESET_T15RST_NEWHNDL)
__PRAGMA_USE__CODE__syc__HighSpeed__START
extern void SyC_ShutdownIsr_Proc(void);
__PRAGMA_USE__CODE__syc__HighSpeed__END
#endif

/* pointers to shutdown function of NWM & second wakeup source detection */
#if !defined (RESET_T15RST_NEWHNDL)
/* in case of new t15 reset handling the pointers must be not visible, in order to hinder an direct access to the
pointers, because of destructive RAM test period */
extern bool (*SyC_ptrNwmShutdownFunc)(void)__attribute__ ((asection(".bss.protram","f=aw")));
extern bool (*SyC_ptrWakShutdownFunc)(void)__attribute__ ((asection(".bss.protram","f=aw")));
#endif
/**
 ***************************************************************************************************
 * Function for registering shutdown function of NWM.
 *
 * This function serves as an interface for registering a function that is called during shutdown
 * to detect CAN-wakeup events. It may be used by network management (NWM).
 ***************************************************************************************************
 */

#if defined (RESET_T15RST_NEWHNDL )
/* in case of new t15 reset handling the pointers must be not visible, in order to hinder an direct access to the
pointers, because of destructive RAM test period. That's why the function must be a real call instaed of inline */

__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_SetNwmShutdownFunc(bool (*ptr)(void));
__PRAGMA_USE__CODE__syc__LowSpeed__END

#else
MEMLAY_USE_FORCE_INLINE(void SyC_SetNwmShutdownFunc(bool (*ptr)(void)))
{
    /* set shutdown function of NWM */
    SyC_ptrNwmShutdownFunc = ptr;
}
#endif

/**
 ***************************************************************************************************
 * Function for registering shutdown function to detect second wakeup source.
 *
 * This function serves as an interface for registering a function that is called during shutdown
 * to detect second wakeup source events.
 ***************************************************************************************************
 */
#if defined (RESET_T15RST_NEWHNDL)
/* in case of new t15 reset handling the pointers must be not visible, in order to hinder an direct access to the
pointers, because of destructive RAM test period. That's why the function must be a real call instaed of inline */

__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_SetWakShutdownFunc(bool (*ptr)(void));
__PRAGMA_USE__CODE__syc__LowSpeed__END

#else
MEMLAY_USE_FORCE_INLINE(void SyC_SetWakShutdownFunc(bool (*ptr)(void)))
{
    /* set shutdown function to detect second wakeup source */
    SyC_ptrWakShutdownFunc = ptr;
}
#endif

#endif /* _SYC_SHUTDOWN_PUB_H */
