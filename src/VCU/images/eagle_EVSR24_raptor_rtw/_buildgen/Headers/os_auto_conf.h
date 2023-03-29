/*File generated from os_postprocess.pl
***************************************************************************************************
*
* (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
*
***************************************************************************************************/

/* make Taskname and Timtable public through os.h (os_conf.h) */

#ifndef _OS_AUTO_CONF_H
#define _OS_AUTO_CONF_H

#define OS_RTMOENABLE     TRUE
#define OS_RTMO_INT_PRIO  62

/* no CAT1-ISR configured */

/* no MMO configured */

#define OS_SHDWN_INT_PRIO   63

#define OS_CYCLEINIT     TRUE /* Rasterinitialisierung TRUE=on/FALSE=off */

DeclareTask(OS_Ini_Task);
DeclareTask(OS_IniEnd_Task);
DeclareTask(OS_ReIni_Task);
DeclareTask(OS_IniDrv_Task);
DeclareTask(OS_Mo_Task);
DeclareTask(OS_SyncIni_Task);
DeclareTask(OS_EngReStrt_Task);
DeclareTask(OS_EpmNoSync_Task);
DeclareTask(OS_SyncS0_Task);
DeclareTask(OS_SyncS1_Task);
DeclareTask(OS_SyncPre_Task);
DeclareTask(OS_SyncFirst_Task);
DeclareTask(OS_PreDrv_1ms_Task);
DeclareTask(OS_PreDrv_2ms_Task);
DeclareTask(OS_PreDrv_5ms_Task);
DeclareTask(OS_PreDrv_10ms_Task);
DeclareTask(OS_PreDrv_20ms_Task);
DeclareTask(OS_PreDrv_50ms_Task);
DeclareTask(OS_PreDrv_100ms_Task);
DeclareTask(OS_PreDrv_200ms_Task);
DeclareTask(OS_PreDrv_1000ms_Task);
DeclareTask(OS_PreDrv_Bg_Task);
DeclareTask(OS_Drv_1ms_Task);
DeclareTask(OS_Drv_2ms_Task);
DeclareTask(OS_Drv_5ms_Task);
DeclareTask(OS_Drv_10ms_Task);
DeclareTask(OS_Drv_20ms_Task);
DeclareTask(OS_Drv_50ms_Task);
DeclareTask(OS_Drv_100ms_Task);
DeclareTask(OS_Drv_200ms_Task);
DeclareTask(OS_Drv_1000ms_Task);
DeclareTask(OS_Drv_Bg_Task);
DeclareTask(OS_PostDrv_1ms_Task);
DeclareTask(OS_PostDrv_2ms_Task);
DeclareTask(OS_PostDrv_5ms_Task);
DeclareTask(OS_PostDrv_10ms_Task);
DeclareTask(OS_PostDrv_20ms_Task);
DeclareTask(OS_PostDrv_50ms_Task);
DeclareTask(OS_PostDrv_100ms_Task);
DeclareTask(OS_PostDrv_200ms_Task);
DeclareTask(OS_PostDrv_1000ms_Task);
DeclareTask(OS_PostDrv_Bg_Task);
DeclareTask(OS_Trans_1ms_Task);
DeclareTask(OS_Trans_2ms_Task);
DeclareTask(OS_Trans_5ms_Task);
DeclareTask(OS_Trans_10ms_Task);
DeclareTask(OS_DSM_Clear_Task);
DeclareTask(OS_CalWup_Ini_Task);
DeclareTask(OS_CalWup_IniEnd_Task);
DeclareTask(OS_CalWup_2ms_Task);
DeclareTask(OS_CalWup_10ms_Task);
DeclareTask(OS_CalWup_20ms_Task);
DeclareTask(OS_CalWup_100ms_Task);
DeclareTask(OS_CalWup_Bg_Task);
DeclareTask(OS_CalWup_Alarm_Task);

#pragma section .rodata.erc_rom
extern T_os_timeTableDesc os_OS_Timetable_PreDrvDesc;
extern T_os_timeTableDesc os_OS_Timetable_DrvDesc;
extern T_os_timeTableDesc os_OS_Timetable_PostDrvDesc;
extern T_os_timeTableDesc os_OS_Timetable_TransDesc;
extern T_os_timeTableDesc os_OS_CalWup_TimetableDesc;
#pragma section

#endif
