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
 * $Filename__:syc_calwakeup_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIY3KOR$ 
 * $Date______:21.09.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:syc_calwakeup_pub$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 1     21.09.2011 VIY3KOR
 *   Review changes.
 * 
 * 1.11.0; 0     13.09.2011 VIY3KOR
 *    Implement new callback functions for CRQ 381246: Ford Migration from 
 *   Nestor to Sdom.
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
#ifndef _SYC_CALWAKEUP_PUB_H
#define _SYC_CALWAKEUP_PUB_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* ExeCon is not used in AppMode CalWakeup, therefore the value for the state SYC_CALWAKEUP was */
/* chosen "far away" from the enumerator values in ExeCon to avoid conflicts.                   */
#define SYC_CALWAKEUP 100

/* define for compatibility between SyC and Calwup */
#define SYC_CALWAKEUPFINISH_DEF     1

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_CalWakeup_Proc_Ini(void);
extern void SyC_CalWakeupFinish(void);
__PRAGMA_USE__CODE__syc__LowSpeed__END

__PRAGMA_USE__CODE__syc__NormalSpeed__START
extern void SyC_CalWakeup_Proc_10ms(void);
__PRAGMA_USE__CODE__syc__NormalSpeed__END

__PRAGMA_USE__syc__10ms__RAM__x32__START
extern void (*SyC_ptrCallback_CalWakeup)(void);
__PRAGMA_USE__syc__10ms__RAM__x32__END		   

static inline void SyC_SetCallback_CalWakeup(void (*ptr)(void));

/**
 *******************************************************************************
 * Function for registering call back function.
 *
 * This function serves as an interface for registering a call back function.
 * It may be called by other functions if there is a
 * need to perform some action before generating a CALWUP reset.
 *******************************************************************************
 */
static inline void SyC_SetCallback_CalWakeup(void (*ptr)(void))
{
    /* set ATI function */
	SyC_ptrCallback_CalWakeup = ptr;
}

#endif /* _SYC_CALWAKEUP_PUB_H */
