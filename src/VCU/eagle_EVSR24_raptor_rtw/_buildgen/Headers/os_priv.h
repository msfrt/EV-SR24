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
 * $Filename__:os_priv.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:KLMEYER$
 * $Date______:16.03.2011$
 * $Class_____:SWHDR$
 * $Name______:os_priv$
 * $Variant___:1.14.0_TTT$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0_TTT; 0     16.03.2011 KLMEYER
 *   Pavast-Export of the OS_ErrorCtr for ODX-Interface. To fulfill this 
 *   request, 
 *   remove the definition of the OS_ErroCtr from os_priv.h.
 *   
 * 
 * 1.13.0_TTT; 0     24.11.2009 KLMEYER
 *   GS-Version
 * 
 * 1.13.0; 0     29.09.2009 AWL2SI
 *   B_OS_Conf.13.0.0
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _OS_PRIV_H
#define _OS_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      {!Description MUST start in this line - replace text inclusive brackets!}
 *
 * \scope               [CONF][API][INTERN] {[] means that the content is optional - remove them}
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
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

__PRAGMA_USE__eos__50ms_1s__RAM__x8__START
extern bool B_CycleInitActive;
extern sint8 OS_cntActvTask_20ms;
extern sint8 OS_cntActvTask_50ms;
extern sint8 OS_cntActvTask_100ms;
extern sint8 OS_cntActvTask_200ms;
extern sint8 OS_cntActvTask_1000ms;
__PRAGMA_USE__eos__50ms_1s__RAM__x8__END

__PRAGMA_USE__eos__50ms_1s__RAM__x16__START
extern uint16 OS_cntIniDrvTask;
extern uint16 OS_cntReIniTask;
extern uint16 OS_cntEngReStrtTask;
extern uint16 OS_cntIniTask;
extern uint16 OS_cntIniEndTask;
extern uint16 OS_cntPreDrvBgTask;
__PRAGMA_USE__eos__50ms_1s__RAM__x16__END

__PRAGMA_USE__eos__1_5ms__RAM__x16__START
extern uint16 OS_cntPreDrv1msTask;
extern uint16 OS_cntPreDrv2msTask;
extern uint16 OS_cntPreDrv5msTask;
extern uint16 OS_cntPreDrv10msTask;
__PRAGMA_USE__eos__1_5ms__RAM__x16__END

__PRAGMA_USE__eos__50ms_1s__RAM__x16__START
extern uint16 OS_cntPreDrv20msTask;
extern uint16 OS_cntPreDrv50msTask;
extern uint16 OS_cntPreDrv100msTask;
extern uint16 OS_cntPreDrv200msTask;
extern uint16 OS_cntPreDrv1000msTask;
extern uint16 OS_cntDrvBgTask;
__PRAGMA_USE__eos__50ms_1s__RAM__x16__END

__PRAGMA_USE__eos__1_5ms__RAM__x16__START
extern uint16 OS_cntDrv1msTask;
extern uint16 OS_cntDrv2msTask;
extern uint16 OS_cntDrv5msTask;
extern uint16 OS_cntDrv10msTask;

extern uint16 OS_cntTrans1msTask;
extern uint16 OS_cntTrans2msTask;
extern uint16 OS_cntTrans5msTask;
extern uint16 OS_cntTrans10msTask;
__PRAGMA_USE__eos__1_5ms__RAM__x16__END

__PRAGMA_USE__eos__50ms_1s__RAM__x16__START
extern uint16 OS_cntDrv20msTask;
extern uint16 OS_cntDrv50msTask;
extern uint16 OS_cntDrv100msTask;
extern uint16 OS_cntDrv200msTask;
extern uint16 OS_cntDrv1000msTask;
extern uint16 OS_cntPostDrvBgTask;
__PRAGMA_USE__eos__50ms_1s__RAM__x16__END

__PRAGMA_USE__eos__1_5ms__RAM__x16__START
extern uint16 OS_cntPostDrv1msTask;
extern uint16 OS_cntPostDrv2msTask;
extern uint16 OS_cntPostDrv5msTask;
extern uint16 OS_cntPostDrv10msTask;
__PRAGMA_USE__eos__1_5ms__RAM__x16__END

__PRAGMA_USE__eos__50ms_1s__RAM__x16__START
extern uint16 OS_cntPostDrv20msTask;
extern uint16 OS_cntPostDrv50msTask;
extern uint16 OS_cntPostDrv100msTask;
extern uint16 OS_cntPostDrv200msTask;
extern uint16 OS_cntPostDrv1000msTask;
extern uint16 OS_cntDsmClearTask;
extern uint16 OS_cntMoTask;
extern uint16 OS_cntSyncIniTask;
__PRAGMA_USE__eos__50ms_1s__RAM__x16__END

__PRAGMA_USE__eos__nsync__RAM__x16__START
extern uint16 OS_cntSyncFirstTask;
extern uint16 OS_cntEpmNoSyncTask;
extern uint16 OS_cntSyncPreTask;
extern uint16 OS_cntSyncS0Task;
extern uint16 OS_cntSyncS1Task;
__PRAGMA_USE__eos__nsync__RAM__x16__END

__PRAGMA_USE__CODE__eos__NormalSpeed__START
extern void OS_dummyIsrTask_Proc(void);
__PRAGMA_USE__CODE__eos__NormalSpeed__END

__PRAGMA_USE__CODE__eos__LowSpeed__START
extern void OS_lstIniTask_Proc(void);
extern void OS_lstIniEndTask_Proc(void);
extern void OS_lstIniDrvTask_Proc(void);
extern void OS_lstReIniTask_Proc(void);
extern void OS_lstPreDrvBgTask_Proc(void);
__PRAGMA_USE__CODE__eos__LowSpeed__END

__PRAGMA_USE__CODE__eos__NormalSpeed__START
extern void OS_lstPreDrv1msTask_Proc(void);
extern void OS_lstPreDrv2msTask_Proc(void);
extern void OS_lstPreDrv5msTask_Proc(void);
extern void OS_lstPreDrv10msTask_Proc(void);
extern void OS_lstPreDrv20msTask_Proc(void);
extern void OS_lstPreDrv50msTask_Proc(void);
extern void OS_lstPreDrv100msTask_Proc(void);
extern void OS_lstPreDrv200msTask_Proc(void);
extern void OS_lstPreDrv1000msTask_Proc(void);
extern void OS_lstDrvBgTask_Proc(void);
extern void OS_lstDrv1msTask_Proc(void);
extern void OS_lstDrv2msTask_Proc(void);
extern void OS_lstDrv5msTask_Proc(void);
extern void OS_lstDrv10msTask_Proc(void);
extern void OS_lstDrv20msTask_Proc(void);
extern void OS_lstDrv50msTask_Proc(void);
extern void OS_lstDrv100msTask_Proc(void);
extern void OS_lstDrv200msTask_Proc(void);
extern void OS_lstDrv1000msTask_Proc(void);
extern void OS_lstPostDrvBgTask_Proc(void);
extern void OS_lstPostDrv1msTask_Proc(void);
extern void OS_lstPostDrv2msTask_Proc(void);
extern void OS_lstPostDrv5msTask_Proc(void);
extern void OS_lstPostDrv10msTask_Proc(void);
extern void OS_lstPostDrv20msTask_Proc(void);
extern void OS_lstPostDrv50msTask_Proc(void);
extern void OS_lstPostDrv100msTask_Proc(void);
extern void OS_lstPostDrv200msTask_Proc(void);
extern void OS_lstPostDrv1000msTask_Proc(void);
extern void OS_lstTrans1msTask_Proc(void);
extern void OS_lstTrans2msTask_Proc(void);
extern void OS_lstTrans5msTask_Proc(void);
extern void OS_lstTrans10msTask_Proc(void);
extern void OS_lstDsmClearTask_Proc(void);
extern void OS_lstSyncIniTask_Proc(void);
extern void OS_lstEngReStrtTask_Proc(void);
extern void OS_lstSyncFirstTask_Proc(void);
extern void OS_lstEpmNoSyncTask_Proc(void);
extern void OS_lstSyncPreTask_Proc(void);
extern void OS_lstSyncS0Task_Proc(void);
extern void OS_lstSyncS1Task_Proc(void);
extern void OS_lstMoTask_Proc(void);
__PRAGMA_USE__CODE__eos__NormalSpeed__END

/* _TEMPLATE_H */
#endif

