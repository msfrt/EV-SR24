/*File generated from os_postprocess.pl
***************************************************************************************************
*
* (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
*
***************************************************************************************************/

/* internal Header for os_auto_conf.c */

#ifndef _OS_AUTO_CONF_PRIV_H
#define _OS_AUTO_CONF_PRIV_H

#define _OS_CONF_H



/* void os_activateOS_Ini_Task(void);*/
extern void SyC_MainBoot_Proc_Ini(void); /* Process */
extern void SyC_Deadline_Proc_Ini(void); /* Process */
extern void SyC_Main_Proc0_0_Ini(void); /* Process */
extern void MRly_VD_Proc_Ini_0(void); /* Process */
extern void Eru_Proc_Ini(void); /* Process */
extern void Gpta_Proc_Ini(void); /* Process */
extern void Msc_PrePort_Proc_Ini(void); /* Process */
extern void igndd_Proc_Ini(void); /* Process */
extern void SyC_UnderVltg_Proc_Ini(void); /* Process */
extern void Msc_Proc_Ini(void); /* Process */
extern void Dma_Proc_Ini(void); /* Process */
extern void Spi_Proc_Ini(void); /* Process */
extern void Cy327_Proc_Ini(void); /* Process */
extern void Fls_Init(void); /* Process */
extern void Fee_Init(void); /* Process */
extern void Dme_Proc_Ini(void); /* Process */
extern void Cj950_Proc_Ini(void); /* Process */
extern void MoCRAM_Co_RepEx_Proc(void); /* Process */
extern void MoCROM_Co_RepEx_Proc(void); /* Process */
extern void Eep_EnvRam_Proc_Ini(void); /* Process */
extern void Eep2MED_Proc_Ini(void); /* Process */
extern void DSMDSQ_Init(void); /* Process */
extern void DSMDFC_Init(void); /* Process */
extern void DSM_DRCInit(void); /* Process */
extern void DSCHED_Init(void); /* Process */
extern void DSMAppl_FadeOut_Proc_Ini(void); /* Process */
extern void DSMDur_Init(void); /* Process */
extern void DFES_Proc_Ini(void); /* Process */
extern void DINH_Proc_Ini(void); /* Process */
extern void DSMAUX_Proc_Ini(void); /* Process */
extern void DSMRdy_Init(void); /* Process */
extern void DFES_ChkClr_Proc_Ini(void); /* Process */
extern void MILLmp_VD_Proc_Ini(void); /* Process */
extern void MILLmp_DD_Proc_IniDrv(void); /* Process */
extern void MILLmp_VD_Proc_IniDrv(void); /* Process */
extern void SyC_Main_Proc_1_Ini(void); /* Process */
extern void SyC_PreDrv_Proc_Ini(void); /* Process */
extern void SyC_PostDrv_Proc_Ini(void); /* Process */
extern void SyC_StopCnt_Proc_Ini(void); /* Process */
extern void SyC2ME_Proc_Ini(void); /* Process */
extern void T15_DD_Proc_Ini(void); /* Process */
extern void T15_VD_Proc_Ini(void); /* Process */
extern void T152MED_Proc_Ini(void); /* Process */
extern void MRly_VD_Proc_Ini(void); /* Process */
extern void MRly2MED_Proc_Ini(void); /* Process */
extern void L9959_Proc_Ini(void); /* Process */
extern void ATS_Monitor_Proc_Ini(void); /* Process */
extern void Tprot_Rttp_Proc_Ini(void); /* Process */
extern void BasUtil_Random_Ini(void); /* Process */
extern void UAcc_Mem_Co_Proc_Ini(void); /* Process */
extern void AccPr_Co_Proc_Ini(void); /* Process */
extern void I14229_Co_Proc_Ini(void); /* Process */
extern void SWAdp_ini(void); /* Process */
extern void Can_Proc_Ini(void); /* Process */
extern void Uart_Init_proc_ini(void); /* Process */
extern void Lin_Co_Proc_Ini(void); /* Process */
extern void IsoTp_Co_Proc_Ini(void); /* Process */
extern void Dcan_Co_Proc_Ini(void); /* Process */
extern void Diag_Co_Proc_Ini(void); /* Process */
extern void OS_ErrorHook_Ini(void); /* Process */
extern void Ccp_Sess_Proc_Ini(void); /* Process */
extern void hwsig_ini(void); /* Process */
extern void can2frm_ini(void); /* Process */
extern void DevLib_PwrStgState_Proc_Ini(void); /* Process */
extern void EpmHwe_Proc_Ini(void); /* Process */
extern void Epm_Proc_Ini(void); /* Process */
extern void EpmCrS_AgClkPlaus_Proc_Ini(void); /* Process */
extern void EpmCaS_Adap_Proc_Ini(void); /* Process */
extern void Epm_SwAdp_Proc_Ini(void); /* Process */
extern void cdrv_shared_Proc_Ini(void); /* Process */
extern void injddpfi_Proc_Ini(void); /* Process */
extern void KnDetLTest_Proc_Ini(void); /* Process */
extern void DEVE_ini(void); /* Process */
extern void ignclps_conck_proc_ini(void); /* Process */
extern void MoCADC_Co_Proc_Ini(void); /* Process */
extern void OCWDA_Co_Proc_Ini(void); /* Process */
extern void CoEng_stEng_Proc_Ini(void); /* Process */
extern void MoExe_Co_Proc_Ini(void); /* Process */
extern void B2C_swshIni(void); /* Process */
extern void AdcI_Ini(void); /* Process */
extern void Fadc_Proc_Ini(void); /* Process */
extern void Adc_Ini(void); /* Process */
extern void Dio_Proc_Ini(void); /* Process */
extern void SyC_Main_Proc_2_Ini(void); /* Process */


/* void os_activateOS_IniEnd_Task(void);*/
extern void SyC_Main_Proc_1_IniEnd(void); /* Process */
extern void Msc_Proc_IniEnd(void); /* Process */
extern void Spi_Proc_IniEnd(void); /* Process */
extern void AdcI_Ini2(void); /* Process */
extern void PwmIn_Proc_Ini(void); /* Process */
extern void PwmOut_Proc_IniEnd(void); /* Process */
extern void Cj135_Proc_Ini(void); /* Process */
extern void Smp480_Proc_Ini(void); /* Process */
extern void Pmd_PeriMon_IniEnd(void); /* Process */
extern void hwsig_ini2(void); /* Process */
extern void EpmCaS_Seg_Proc_IniEnd(void); /* Process */
extern void EpmCaS_Diag_Proc_IniEnd(void); /* Process */
extern void EpmCaS_Meas_Proc_IniEnd(void); /* Process */
extern void Epm_Spd_Proc_IniEnd(void); /* Process */
extern void Epm_OpMode_Proc_IniEnd(void); /* Process */
extern void EpmCrS_Plaus_Proc_IniEnd(void); /* Process */
extern void EpmCrS_RevCnt_Proc_IniEnd(void); /* Process */
extern void EpmSyn_CaSPos_Proc_IniEnd(void); /* Process */
extern void EpmCrS_Diag_Proc_IniEnd(void); /* Process */
extern void EpmCaS_Adap_Proc_IniEnd(void); /* Process */
extern void EpmRRS_AgDetect_Proc_IniEnd(void); /* Process */
extern void Epm_SwAdp_Proc_IniEnd(void); /* Process */
extern void Epm_Last_Proc_IniEnd(void); /* Process */
extern void UEGO_CenSrv_Proc_IniDrv(void); /* Process */
extern void UEGO_CJ135DiagSnsr_Proc_IniDrv(void); /* Process */
extern void UEGO_CJ135RvsChrg_Proc_IniDrv(void); /* Process */
extern void UEGO_CJ135RTEval_Proc_IniDrv(void); /* Process */
extern void KnDetSigEval_Proc_IniEnd(void); /* Process */
extern void KnDetControl_Proc_IniEnd(void); /* Process */
extern void SWAdp_ini2(void); /* Process */
extern void MoCCom_Co_Proc_IniEnd(void); /* Process */
extern void MoCSOP_Co_Proc_IniEnd(void); /* Process */
extern void Fee_InitEnd(void); /* Process */
extern void SyC_Main_Proc_2_IniEnd(void); /* Process */
extern void SyC_PreDrv_Proc_IniEnd(void); /* Process */
extern void mcop_UpdtCopies_Proc(void); /* Process */


/* void os_activateOS_ReIni_Task(void);*/
extern void SyC2ME_Proc_ReIni(void); /* Process */
extern void MRly_VD_Proc_ReIni(void); /* Process */
extern void MRly2MED_Proc_ReIni(void); /* Process */
extern void EpmCaS_Adap_Proc_ReIni(void); /* Process */
extern void KnDetControl_Proc_ReIni1(void); /* Process */
extern void KnDetSigEval_Proc_ReIni(void); /* Process */
extern void KnDetLTest_Proc_ReIni(void); /* Process */
extern void KnDetControl_Proc_ReIni2(void); /* Process */
extern void KnDetControl_Proc_ReIni3(void); /* Process */
extern void KnDet_MeasWinCtl_Proc_ReIni(void); /* Process */
extern void MoCADC_Co_Proc_ReIni(void); /* Process */
extern void MoCROM_Co_Proc_ReIni(void); /* Process */
extern void OCWDA_Co_Proc_ReIni(void); /* Process */
extern void MoExe_Co_Proc_ReIni(void); /* Process */


/* void os_activateOS_IniDrv_Task(void);*/
extern void DSM_Proc_IniDrv(void); /* Process */
extern void Epm_OpMode_Proc_IniDrv(void); /* Process */
extern void EpmHwe_Proc_IniDrv(void); /* Process */
extern void MoCCom_Co_Proc_IniDrv(void); /* Process */
extern void MoCSOP_Co_Proc_IniDrv(void); /* Process */
extern void injddpfi_Proc_IniDrv(void); /* Process */
extern void CoEng_stEng_Proc_IniDrv(void); /* Process */


/* void os_activateOS_Mo_Task(void);*/
/* void os_OS_Mo_TaskContainer(void);*/
extern void MoCCom_Co_Proc(void); /* Process */
extern void MoCSOP_Co_Proc(void); /* Process */


/* void os_activateOS_SyncIni_Task(void);*/
/* void os_OS_SyncIni_TaskContainer(void);*/
extern void mcop_MsgRcvOS_SyncIni_Task_Proc(void); /* Process */
extern void EpmSyn_CrSPos_Proc_SyncIni(void); /* Process */
extern void EpmCaS_Seg_Proc_SyncIni(void); /* Process */
extern void EpmSyn_CaSPos_Proc_SyncIni(void); /* Process */
extern void EpmCrS_Seg_Proc_SyncIni(void); /* Process */
extern void EpmCrS_RevCnt_Proc_SyncIni(void); /* Process */
extern void EpmSeq_Proc_SyncIni(void); /* Process */
extern void Epm_OpMode_Proc_SyncIni(void); /* Process */
extern void EpmCrS_AgClkPlaus_Proc_SyncIni(void); /* Process */
extern void EpmCrS_Diag_Proc_SyncIni(void); /* Process */
extern void Epm_SpdGrd_Proc_SyncIni(void); /* Process */
extern void EpmCaS_OfsDiag_Proc_SyncIni(void); /* Process */
extern void Epm_SwAdp_Proc_SyncIni(void); /* Process */
extern void KnDetControl_Proc_SyncIni(void); /* Process */
extern void injddpfi_Proc_SyncIni(void); /* Process */
extern void ESC_Proc_SyncIni(void); /* Process */
extern void igndd_Proc_SyncIni(void); /* Process */
extern void mcop_MsgSndOS_SyncIni_Task_Proc(void); /* Process */


/* void os_activateOS_EngReStrt_Task(void);*/
/* void os_OS_EngReStrt_TaskContainer(void);*/
extern void injddpfi_Proc_EngReStrt(void); /* Process */
extern void igndd_Proc_EngReStrt(void); /* Process */


/* void os_activateOS_EpmNoSync_Task(void);*/
/* void os_OS_EpmNoSync_TaskContainer(void);*/
extern void Ccp_DaqSync_Proc(void); /* Process */


/* void os_activateOS_SyncS0_Task(void);*/
/* void os_OS_SyncS0_TaskContainer(void);*/
extern void mcop_MsgRcvOS_SyncS0_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_SEGTIME_Proc(void); /* Process */
extern void Epm_SwAdp_Proc_SyncS0(void); /* Process */
extern void B2C_swshSync(void); /* Process */
extern void SWAdp_syn(void); /* Process */
extern void injddpfi_Proc_SyncS0(void); /* Process */
extern void igndd_Proc_SyncS0(void); /* Process */
extern void hwsig_end_syn(void); /* Process */
extern void ESC_PopSampTime_Proc(void); /* Process */


/* void os_activateOS_SyncS1_Task(void);*/
/* void os_OS_SyncS1_TaskContainer(void);*/
extern void Epm_SwAdp_Proc_SyncS1(void); /* Process */


/* void os_activateOS_SyncPre_Task(void);*/
/* void os_OS_SyncPre_TaskContainer(void);*/
extern void mcop_MsgRcvOS_SyncPre_Task_Proc(void); /* Process */
extern void EpmHInt_Proc(void); /* Process */
extern void EpmCrS_Seg_First_Proc(void); /* Process */
extern void EpmSyn_CrSPos_Proc(void); /* Process */
extern void EpmSyn_CaSPos_Proc(void); /* Process */
extern void Epm_OpMode_Proc(void); /* Process */
extern void EpmCrS_AgClkPlaus_Proc(void); /* Process */
extern void EpmCrS_Seg_Syn_Proc(void); /* Process */
extern void Epm_Spd_Syn_Proc(void); /* Process */
extern void Epm_SpdGrd_Syn_Proc(void); /* Process */
extern void EpmCrS_RevCnt_Syn_Proc(void); /* Process */
extern void EpmCaS_Diag_Proc(void); /* Process */
extern void EpmCaS_Meas_Proc(void); /* Process */
extern void Epm_SwAdp_Proc_Sync(void); /* Process */
extern void ESC_Proc(void); /* Process */
extern void mcop_MsgSndOS_SyncPre_Task_Proc(void); /* Process */


/* void os_activateOS_SyncFirst_Task(void);*/
/* void os_OS_SyncFirst_TaskContainer(void);*/
extern void mcop_MsgRcvOS_SyncFirst_Task_Proc(void); /* Process */
extern void Epm_OpMode_Proc_SyncFirst(void); /* Process */
extern void Epm_SwAdp_Proc_SyncFirst(void); /* Process */
extern void KnDet_IniMeasWin_proc(void); /* Process */
extern void ESC_Proc_SyncFirst(void); /* Process */
extern void mcop_MsgSndOS_SyncFirst_Task_Proc(void); /* Process */


/* void os_activateOS_PreDrv_1ms_Task(void);*/
/* void os_OS_PreDrv_1ms_TaskContainer(void);*/
extern void ESC_PushSampTime_Proc_1ms(void); /* Process */
extern void Uart_1ms_Proc(void); /* Process */
extern void hwsig_beg_1msPreDrive(void); /* Process */
extern void SyC_Deadline_Proc_1ms(void); /* Process */
extern void hwsig_end_1msPreDrive(void); /* Process */


/* void os_activateOS_PreDrv_2ms_Task(void);*/
/* void os_OS_PreDrv_2ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PreDrv_2ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_2ms(void); /* Process */
extern void IsoTp_Co_Proc(void); /* Process */
extern void Cy327_Proc_2ms(void); /* Process */
extern void EpmCrS_Plaus_2ms_Proc(void); /* Process */
extern void L9959_Proc_2ms(void); /* Process */
extern void Ccp_Sess_Proc(void); /* Process */


/* void os_activateOS_PreDrv_5ms_Task(void);*/
/* void os_OS_PreDrv_5ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PreDrv_5ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_5ms(void); /* Process */
extern void Uart_DelayHighDevice0_Proc(void); /* Process */
extern void UEGO_CJ135Dia_Proc_5ms(void); /* Process */
extern void UEGO_CJ135DatEval_Proc_5ms(void); /* Process */
extern void UEGO_CJ135RvsChrg_Proc_5ms(void); /* Process */
extern void UEGO_CJ135IPmpEval_Proc_5ms(void); /* Process */
extern void UEGO_CJ135RTEval_Proc_5ms(void); /* Process */
extern void UEGO_CJ135Dia_Proc_5ms_last(void); /* Process */


/* void os_activateOS_PreDrv_10ms_Task(void);*/
/* void os_OS_PreDrv_10ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PreDrv_10ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_10ms(void); /* Process */
extern void Cy327_Rx_Proc(void); /* Process */
extern void T15_DD_Proc_10ms(void); /* Process */
extern void T15_VD_Proc_10ms(void); /* Process */
extern void T152MED_Proc_10ms(void); /* Process */
extern void SyC_MainInput_Proc_10ms(void); /* Process */
extern void SyC_Main_Proc_10ms(void); /* Process */
extern void SyC_PreDrv_Proc_10ms(void); /* Process */
extern void SyC_PostDrv_Proc_10ms(void); /* Process */
extern void SyC2ME_Proc_10ms(void); /* Process */
extern void CoEng_stEng_Proc(void); /* Process */
extern void Diag_Co_Proc(void); /* Process */
extern void Cj135_Proc_10ms(void); /* Process */
extern void Bsp742_Proc(void); /* Process */
extern void Cj950_Proc(void); /* Process */
extern void Smp480_Proc(void); /* Process */
extern void MED2BasSvr_Proc_10ms(void); /* Process */
extern void can2frm_10msPreDrive(void); /* Process */
extern void hwsig_beg_10msPreDrive(void); /* Process */
extern void Epm_Spd_10ms_Proc(void); /* Process */
extern void EpmCaS_Seg_10ms_Proc(void); /* Process */
extern void EpmRRS_AgDetect_10ms_Proc(void); /* Process */
extern void EpmSyn_CrSPos_10ms_Proc(void); /* Process */
extern void Epm_SwAdp_Proc_10ms(void); /* Process */
extern void EpmCaS_Meas_10ms_Proc(void); /* Process */
extern void L9959_Rx_Proc_10ms(void); /* Process */
extern void MoCADC_Co_Proc(void); /* Process */
extern void OCWDA_Co_Proc(void); /* Process */
extern void SWAdp_10msPreDrive(void); /* Process */
extern void UEGO_CenSrv_Proc_10ms(void); /* Process */
extern void UEGO_CJ135RTEval_Proc_10ms(void); /* Process */
extern void UEGO_CJ135Dia_Proc_10ms(void); /* Process */
extern void UEGO_CJ135DiagSnsr_Proc_10ms(void); /* Process */
extern void UEGO_CJ135RvsChrg_Proc_10ms(void); /* Process */
extern void UEGO_CJ135Ctl_Proc_10ms(void); /* Process */
extern void igndd_Proc_10ms(void); /* Process */
extern void MoExe_Co_Proc(void); /* Process */
extern void hwsig_end_10msPreDrive(void); /* Process */
extern void MRly_VD_Proc_10ms(void); /* Process */
extern void MRly2MED_Proc_10ms(void); /* Process */
extern void SyC_Deadline_Proc_10ms(void); /* Process */
extern void SyC_StopCnt_Proc_10ms(void); /* Process */
extern void Cy327_Tx_Proc(void); /* Process */
extern void L9959_Tx_Proc_10ms(void); /* Process */
extern void Dme_10ms_Proc(void); /* Process */
extern void mcop_MsgSndOS_PreDrv_10ms_Task_Proc(void); /* Process */
extern void Ccp_Daq_Proc_10ms(void); /* Process */
extern void SrvB_SWTmrInc_10ms_Proc(void); /* Process */


/* void os_activateOS_PreDrv_20ms_Task(void);*/
extern void mcop_MsgRcvOS_PreDrv_20ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_20ms(void); /* Process */
extern void DSMAppl_FadeOut_Proc(void); /* Process */
extern void DSCHED_20msProc(void); /* Process */
extern void DevLib_PwrStgState_Proc(void); /* Process */
extern void SWAdp_20msPreDrive(void); /* Process */
extern void EpmCrS_meanValInc_20ms_Proc(void); /* Process */


/* void os_activateOS_PreDrv_50ms_Task(void);*/
extern void ESC_PushSampTime_Proc_50ms(void); /* Process */
extern void ErrLmp2MED_50ms(void); /* Process */


/* void os_activateOS_PreDrv_100ms_Task(void);*/
extern void mcop_MsgRcvOS_PreDrv_100ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_100ms(void); /* Process */
extern void SyC2ME_Proc_100ms(void); /* Process */
extern void DDRC_Proc(void); /* Process */
extern void DSCHED_Proc(void); /* Process */
extern void DFES_100ms(void); /* Process */
extern void DFES_SimCond(void); /* Process */
extern void DIUMPR_Proc(void); /* Process */
extern void DTR_SWIfc_Proc(void); /* Process */
extern void DSMRdy_ScanProc(void); /* Process */
extern void ATS_Monitor_Proc(void); /* Process */
extern void Etc_Co_Proc(void); /* Process */
extern void Adc_UpdateRatiometric(void); /* Process */
extern void Eep_100ms_Proc(void); /* Process */
extern void Pmd_PeriMon_Proc(void); /* Process */
extern void EpmCrS_Diag_100ms_Proc(void); /* Process */
extern void EpmCaS_Adap_100ms_Proc(void); /* Process */
extern void EpmCaS_OfsDiag_100ms_Proc(void); /* Process */
extern void Epm_SwAdp_Proc_100ms(void); /* Process */
extern void SWAdp_100msPreDrive(void); /* Process */
extern void igndd_Proc_100ms(void); /* Process */
extern void MRly_DD_Proc_100ms(void); /* Process */
extern void mcop_MsgSndOS_PreDrv_100ms_Task_Proc(void); /* Process */
extern void Ccp_Daq_Proc_100ms(void); /* Process */


/* void os_activateOS_PreDrv_200ms_Task(void);*/
extern void mcop_MsgRcvOS_PreDrv_200ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_200ms(void); /* Process */
extern void DTRG2MED_200ms(void); /* Process */
extern void ErrLmp2MED_200ms(void); /* Process */
extern void Epm_Spd_OBDSrv_Proc_200ms(void); /* Process */
extern void Epm_SwAdp_Proc_200ms(void); /* Process */


/* void os_activateOS_PreDrv_1000ms_Task(void);*/
extern void mcop_MsgRcvOS_PreDrv_1000ms_Task_Proc(void); /* Process */
extern void ESC_PushSampTime_Proc_1000ms(void); /* Process */
extern void EpmCaS_SegTempCor_Proc_1000ms(void); /* Process */
extern void mcop_MsgSndOS_PreDrv_1000ms_Task_Proc(void); /* Process */


/* void os_activateOS_PreDrv_Bg_Task(void);*/
extern void mcop_MsgRcvOS_PreDrv_Bg_Task_Proc(void); /* Process */
extern void Fls_MainFunction(void); /* Process */
extern void Fee_MainFunction(void); /* Process */
extern void Tprot_Rttp_Proc(void); /* Process */
extern void Dme_Background_Proc(void); /* Process */
extern void DSM_MonInh(void); /* Process */
extern void DFES_ScanOrders(void); /* Process */
extern void DFES_ScanTriggers(void); /* Process */
extern void DFES_ScanOutState(void); /* Process */
extern void DFES_AuxBackgroundProc(void); /* Process */
extern void DFC_MeasProc(void); /* Process */
extern void DSQ_MeasProc(void); /* Process */
extern void DINH_MeasProc(void); /* Process */
extern void DSMAUX_Proc(void); /* Process */
extern void DSMDur_Proc(void); /* Process */
extern void BassvrAppl_PrepEEP_Proc_Bg(void); /* Process */
extern void UAcc_Mem_Background_Proc(void); /* Process */
extern void d2ctr_bg(void); /* Process */
extern void SyC_Main_Proc_Bg(void); /* Process */
extern void SyC_Deadline_Proc_Bg(void); /* Process */
extern void mcop_MsgSndOS_PreDrv_Bg_Task_Proc(void); /* Process */


/* void os_activateOS_Drv_1ms_Task(void);*/
/* void os_OS_Drv_1ms_TaskContainer(void);*/
extern void hwsig_beg_1ms(void); /* Process */
extern void B2C_swsh1ms(void); /* Process */
extern void hwsig_end_1ms(void); /* Process */


/* void os_activateOS_Drv_2ms_Task(void);*/
/* void os_OS_Drv_2ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_Drv_2ms_Task_Proc(void); /* Process */


/* void os_activateOS_Drv_5ms_Task(void);*/
/* void os_OS_Drv_5ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_Drv_5ms_Task_Proc(void); /* Process */
extern void B2C_swsh5ms(void); /* Process */


/* void os_activateOS_Drv_10ms_Task(void);*/
/* void os_OS_Drv_10ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_Drv_10ms_Task_Proc(void); /* Process */
extern void can2frm_10ms(void); /* Process */
extern void Lin_Co_Proc(void); /* Process */
extern void hwsig_beg_10ms(void); /* Process */
extern void MoCADC_Co_Diag_Proc(void); /* Process */
extern void OCWDA_Co_Diag_Proc(void); /* Process */
extern void SWAdp_10ms(void); /* Process */
extern void injddpfi_Proc_10ms(void); /* Process */
extern void ignclps_conck_proc_10ms(void); /* Process */
extern void B2C_swsh10ms(void); /* Process */
extern void hwsig_end_10ms(void); /* Process */
extern void mcop_MsgSndOS_Drv_10ms_Task_Proc(void); /* Process */


/* void os_activateOS_Drv_20ms_Task(void);*/
extern void mcop_MsgRcvOS_Drv_20ms_Task_Proc(void); /* Process */
extern void SWAdp_20ms(void); /* Process */
extern void B2C_swsh20ms(void); /* Process */


/* void os_activateOS_Drv_50ms_Task(void);*/
extern void MILLmp_DD_Proc_50ms(void); /* Process */
extern void ignclps_conck_proc_50ms(void); /* Process */
extern void B2C_swsh50ms(void); /* Process */


/* void os_activateOS_Drv_100ms_Task(void);*/
extern void mcop_MsgRcvOS_Drv_100ms_Task_Proc(void); /* Process */
extern void DECJ_100ms(void); /* Process */
extern void KnDetControl_Proc_100ms(void); /* Process */
extern void SWAdp_100ms(void); /* Process */
extern void DEVE_100ms(void); /* Process */
extern void ignclps_conck_proc1_100ms(void); /* Process */
extern void ignclps_dia_proc_100ms(void); /* Process */
extern void ignclps_conck_proc2_100ms(void); /* Process */
extern void B2C_swsh100ms(void); /* Process */
extern void mcop_MsgSndOS_Drv_100ms_Task_Proc(void); /* Process */


/* void os_activateOS_Drv_200ms_Task(void);*/
extern void mcop_MsgRcvOS_Drv_200ms_Task_Proc(void); /* Process */
extern void MILLmp_VD_Proc_200ms(void); /* Process */
extern void B2C_swsh200ms(void); /* Process */


/* void os_activateOS_Drv_1000ms_Task(void);*/
extern void mcop_MsgRcvOS_Drv_1000ms_Task_Proc(void); /* Process */
extern void I14229_SecA_1000ms(void); /* Process */
extern void MILLmp_VD_Proc_1000ms(void); /* Process */
extern void B2C_swsh1000ms(void); /* Process */
extern void mcop_MsgSndOS_Drv_1000ms_Task_Proc(void); /* Process */


/* void os_activateOS_Drv_Bg_Task(void);*/
extern void mcop_MsgRcvOS_Drv_Bg_Task_Proc(void); /* Process */
extern void mcop_MsgSndOS_Drv_Bg_Task_Proc(void); /* Process */


/* void os_activateOS_PostDrv_1ms_Task(void);*/
/* void os_OS_PostDrv_1ms_TaskContainer(void);*/
extern void hwsig_beg_1msSwOff(void); /* Process */
extern void hwsig_end_1msSwOff(void); /* Process */
extern void B2C_swsh1ms_SwOff(void); /* Process */


/* void os_activateOS_PostDrv_2ms_Task(void);*/
/* void os_OS_PostDrv_2ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PostDrv_2ms_Task_Proc(void); /* Process */


/* void os_activateOS_PostDrv_5ms_Task(void);*/
/* void os_OS_PostDrv_5ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PostDrv_5ms_Task_Proc(void); /* Process */
extern void B2C_swsh5ms_SwOff(void); /* Process */


/* void os_activateOS_PostDrv_10ms_Task(void);*/
/* void os_OS_PostDrv_10ms_TaskContainer(void);*/
extern void mcop_MsgRcvOS_PostDrv_10ms_Task_Proc(void); /* Process */
extern void can2frm_10msSwOff(void); /* Process */
extern void hwsig_beg_10msSwOff(void); /* Process */
extern void SWAdp_10msSwOff(void); /* Process */
extern void B2C_swsh10ms_SwOff(void); /* Process */
extern void hwsig_end_10msSwOff(void); /* Process */
extern void mcop_MsgSndOS_PostDrv_10ms_Task_Proc(void); /* Process */


/* void os_activateOS_PostDrv_20ms_Task(void);*/
extern void mcop_MsgRcvOS_PostDrv_20ms_Task_Proc(void); /* Process */
extern void SWAdp_20msSwOff(void); /* Process */
extern void B2C_swsh20ms_SwOff(void); /* Process */


/* void os_activateOS_PostDrv_50ms_Task(void);*/
extern void B2C_swsh50ms_SwOff(void); /* Process */


/* void os_activateOS_PostDrv_100ms_Task(void);*/
extern void mcop_MsgRcvOS_PostDrv_100ms_Task_Proc(void); /* Process */
extern void DECJ_100msSwOff(void); /* Process */
extern void SWAdp_100msSwOff(void); /* Process */
extern void B2C_swsh100ms_SwOff(void); /* Process */
extern void mcop_MsgSndOS_PostDrv_100ms_Task_Proc(void); /* Process */


/* void os_activateOS_PostDrv_200ms_Task(void);*/
extern void mcop_MsgRcvOS_PostDrv_200ms_Task_Proc(void); /* Process */
extern void B2C_swsh200ms_SwOff(void); /* Process */


/* void os_activateOS_PostDrv_1000ms_Task(void);*/
extern void mcop_MsgRcvOS_PostDrv_1000ms_Task_Proc(void); /* Process */
extern void B2C_swsh1000ms_SwOff(void); /* Process */
extern void mcop_MsgSndOS_PostDrv_1000ms_Task_Proc(void); /* Process */


/* void os_activateOS_PostDrv_Bg_Task(void);*/
extern void mcop_MsgRcvOS_PostDrv_Bg_Task_Proc(void); /* Process */
extern void MoCROM_Co_PostRomChk_Proc(void); /* Process */
extern void mcop_MsgSndOS_PostDrv_Bg_Task_Proc(void); /* Process */


/* void os_activateOS_Trans_1ms_Task(void);*/
/* void os_OS_Trans_1ms_TaskContainer(void);*/


/* void os_activateOS_Trans_2ms_Task(void);*/
/* void os_OS_Trans_2ms_TaskContainer(void);*/


/* void os_activateOS_Trans_5ms_Task(void);*/
/* void os_OS_Trans_5ms_TaskContainer(void);*/


/* void os_activateOS_Trans_10ms_Task(void);*/
/* void os_OS_Trans_10ms_TaskContainer(void);*/


/* void os_activateOS_DSM_Clear_Task(void);*/
extern void DTRG2MED_fcmclr(void); /* Process */
extern void EpmCrS_Diag_fcmclr(void); /* Process */
extern void EpmCaS_Adap_fcmclr(void); /* Process */
extern void EpmRRS_AgDetect_fcmclr(void); /* Process */
extern void EpmCaS_Diag_fcmclr(void); /* Process */
extern void EpmCaS_OfsDiag_fcmclr(void); /* Process */
extern void MRly_VD_Proc_Fcmclr(void); /* Process */
extern void DEVE_fcmclr(void); /* Process */
extern void UEGO_CJ135Dia_Proc_DSM_Clear(void); /* Process */
extern void DTR_Clear(void); /* Process */
extern void DSMAUX_Clear(void); /* Process */
extern void DSMDur_DSMClearTaskProc(void); /* Process */
extern void DFES_Clear(void); /* Process */


/* void os_activateOS_CalWup_Ini_Task(void);*/


/* void os_activateOS_CalWup_IniEnd_Task(void);*/


/* void os_activateOS_CalWup_2ms_Task(void);*/
/* void os_OS_CalWup_2ms_TaskContainer(void);*/


/* void os_activateOS_CalWup_10ms_Task(void);*/
/* void os_OS_CalWup_10ms_TaskContainer(void);*/


/* void os_activateOS_CalWup_20ms_Task(void);*/


/* void os_activateOS_CalWup_100ms_Task(void);*/


/* void os_activateOS_CalWup_Bg_Task(void);*/


/* void os_activateOS_CalWup_Alarm_Task(void);*/

#endif
