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
 * $Filename__:syc_stopcnt_priv.h$
 * $Author____:PMR1KOR$
 * $Function__:Test improvements and Review Points are Added$
 * $Domain____:SDOM$
 * $User______:PMR1KOR$
 * $Date______:02.07.2012$
 * $Class_____:SWHDR$
 * $Name______:syc_stopcnt_priv$
 * $Variant___:1.17.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 ***************************************************************************************************
 </RBHead>*/
#ifndef _SYC_STOPCNT_PRIV_H
#define _SYC_STOPCNT_PRIV_H

/*
******************************************************************************
* Function prototypes
******************************************************************************
*/
#if (SYC_STOPCNTWAKEUP_SC == 1)
/* Funtion Prototypes */
void SyC_StopCnt_WakeupStatus(void);
void SyC_StopCnt_PreDrvWakeEventReq(void);
void SyC_StopCnt_Wakeup_Programing(void);

MEMLAY_USE_PROTRAM(extern bool, SyC_stPreDrvWakeEventReq);
#endif

extern Eep_SyC_t Eep_SyC_s;  /* EEP data buffer */
extern uint8 stOrder;
#endif /* _SYC_STOPCNT_PRIV_H */
