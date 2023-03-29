/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:syc_stopcnt_pub.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:PMR1KOR$
 * $Date______:28.06.2012$
 * $Class_____:SWHDR$
 * $Name______:syc_stopcnt_pub$
 * $Variant___:1.17.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.17.0; 1     28.06.2012 PMR1KOR
 *   Test improvements and Review Points are Added
 * 
 * 1.17.0; 0     06.04.2012 PMR1KOR
 *   STC wakeup changes are added
 * 
 * 1.15.0; 1     05.05.2011 MHD2KOR
 *   Changes done after initial testing and review
 * 
 * 1.15.0; 0     03.05.2011 MHD2KOR
 *   Supporting the calculation of ECU off time based on external COM message
 * 
 * 1.12.0; 0     07.12.2009 SETATIYO
 *   Diagnosis of ECU off time based on ESC151 (Hyundai)
 *   provide service bool SyC_NoStrtStopCnt (uint32) not to start StopCounter in
 *    Shutdown
 *   
 * 
 * 1.10.0; 0     19.05.2009 SETATIYO
 *   Calculation of ECU off time based on ESC-151, Consideration of Calibration 
 *   Wakeup and T15 reset in calculation of ECU off time for CY320
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\4
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/
#ifndef _SYC_STOPCNT_PUB_H
#define _SYC_STOPCNT_PUB_H

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
#define SYC_STOPCNT_DISABLE_REQID 0x0000A55Aul
/*
******************************************************************************
* Function prototypes
******************************************************************************
*/
__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_StopCnt_Proc_Ini (void) ;
extern void SyC_StopCnt_CalWup_Proc_Ini (void) ;
extern void SyC_StopCnt_Shutdown (void) ;
extern bool SyC_NoStrtStopCnt(uint32 Identifier_u32);
extern void SyC_StopCntExt_Proc_Ini (void);
uint8 SyC_StopCnt_SetWakeupTime (uint32 enquiredAswWakTime);
bool SyC_StopCnt_CancelWakeUp(void);
bool SyC_StopCnt_TestStcWak(void);
__PRAGMA_USE__CODE__syc__LowSpeed__END
			  
__PRAGMA_USE__CODE__syc__NormalSpeed__START
extern void SyC_StopCnt_Proc_10ms (void) ;
extern void SyC_StopCntExt_Proc_10ms (void);
__PRAGMA_USE__CODE__syc__NormalSpeed__END

MEMLAY_USE_ENVRAM(extern sint32, SyC_tiEcuOffExt_NVM);
MEMLAY_USE_ENVRAM(extern bool, SyC_Com_stVldMsg_NVM);

#endif /* _SYC_STOPCNT_PUB_H */
