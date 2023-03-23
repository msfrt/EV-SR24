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
 * $Filename__:syc_main_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MHD2KOR$
 * $Date______:16.12.2011$
 * $Class_____:SWHDR$
 * $Name______:syc_main_pub$
 * $Variant___:1.17.0$
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
 * 1.17.0; 1     16.12.2011 MHD2KOR
 *   RCMS01238498
 *   Support of CJ721 done
 * 
 * 1.17.0; 0     07.10.2011 MHD2KOR
 *   Improvement of irregular switch off detection
 * 
 * 1.16.0; 1     21.09.2011 VIY3KOR
 *   Review changes.
 * 
 * 1.16.0; 0     13.09.2011 VIY3KOR
 *   Implement new callback functions for CRQ 381246: Ford Migration from Nestor
 *    to Sdom.
 *   
 * 
 * 1.15.0; 0     04.10.2010 VIY3KOR
 *   RCMS00933601: Delay for Digital Sensors.
 * 
 * 1.10.0; 0     25.03.2009 SETATIYO
 *   Component Toolbox-Import
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
#ifndef _SYC_MAIN_PUB_H
#define _SYC_MAIN_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *          System/ECU state
 *
 * scope    API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "execon.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define SYC_CTIRRSWOFMAXVAL 250

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__syc__LowSpeed__START
void SyC_MainBoot_Proc_Ini(void);
void SyC_Main_Proc0_0_Ini(void);
void SyC_Main_Proc_0_Ini(void);
void SyC_Main_Proc_1_Ini(void);
void SyC_Main_Proc_2_Ini(void);
void SyC_Main_Proc_1_IniEnd(void);
void SyC_Main_Proc_Delay_IniEnd(void);
void SyC_Main_Proc_2_IniEnd(void);
void SyC_Main_Proc_Bg (void);
__PRAGMA_USE__CODE__syc__LowSpeed__END

__PRAGMA_USE__CODE__syc__NormalSpeed__START
void SyC_Main_Proc_10ms(void);
void SyC_MainInput_Proc_10ms(void);
__PRAGMA_USE__CODE__syc__NormalSpeed__END

__PRAGMA_USE__syc__10ms__RAM__x32__START
extern void (*SyC_ptrCallback_Main)(void);
__PRAGMA_USE__syc__10ms__RAM__x32__END

static inline void SyC_SetCallback_Main(void (*ptr)(void));

/**
 *******************************************************************************
 * Function for registering call back function.
 *
 * This function serves as an interface for registering a call back function.
 * It may be called by other functions if there is a
 * need to perform some action before generating a CALWUP reset.
 *******************************************************************************
 */

static inline void SyC_SetCallback_Main(void (*ptr)(void))
{
    /* set ATI function */
    SyC_ptrCallback_Main = ptr;
}


#endif /* _SYC_MAIN_PUB_H */
