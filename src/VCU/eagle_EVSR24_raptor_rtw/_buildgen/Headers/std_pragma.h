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
 * $Filename__:std_pragma.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:23.04.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:std_pragma$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     23.04.2013 PIR5COB
 *   The following changes has been made in FC : SrvA_Ascet:
 *   
 *   1. New PRAGMA is addded for honda project
 * 
 * 1.9.0; 0     28.12.2012 PIR5COB
 *   Updation of std_pragma.h to support new compilers
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/* MISRA RULE 0883 VIOLATION: repeated inclusion is necessary  */


/* Hinweise, entfernte Pragmas... */
/* ===============================================================================*/




/* Zuweisungen für verschiedene Pragmas */
/* ===============================================================================*/


/* Zuweisungen für Programm-Sammel-Section */
/* Immer als Paar: START_Section/STOP_Section. */
/* Durch das Paar wird der Programmkode für eine bestimmte Section eingeklammert. */
/* Bei manchen Compilern kann die STOP-Section leer sein */
/* ===============================================================================*/

/* Die Codesektionen Fast_Codemem und Slow_Codemem dienen zur Aufnahme von Programmkode, */
/* der keiner bestimmten Tasks zugeordnet ist (zB allg. Unterprogramme). Fast und */
/* Slow bezieht sich auf die Geschw. des Codespeichers */

/*************************************************************************************/
/*                                                                                   */
/*                       Translation table for the old Pragmas                       */
/*       Since the Mx17 doesn't support any pragmas but the allowed ones             */
/*          This table helps the integrator to correct the old pragmas               */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*                             Pragmas for processes                                 */
/*        ====================================================================       */
/*                                                                                   */
/*  Raster Mx17                Supported Pragmas        Old pragmas (for information)*/
/*                                                      (if different from new ones) */
/*                                                                                   */
/*  !No raster!                Fast_Codemem                                          */
/*  !No raster!                Slow_Codemem                                          */
/*                                                                                   */
/*  OS_Ini_Task                Task_rini                Task_ini                     */
/*                                                      Task_driveModeInit           */
/*                                                      Task_rDriveModeInit          */
/*  OS_IniEnd_Task             Task_rini2               Task_ini2                    */
/*                             Task_rini2Pre            Task_ini2Pre                 */
/*  OS_ReIni_Task              Task_rReIni                                           */
/*  OS_IniEnd_Task             Task_rIniEnd                                          */
/*  OS_IniDrv_Task             Task_rIniDrv                                          */
/*  TnSyncIni_Task             Task_rinisyn             Task_inisyn                  */
/*                                                      Task_resetsyn                */
/*  TnSyncFirst_Task           Task_rfirstsyn                                        */
/*                                                                                   */
/*  TnSyncPre_Task             Task_rsynPreDrive                                     */
/*  OS_predrive_r1ms_Task      Task_r1msPreDrive                                     */
/*  OS_predrive_r2ms_Task      Task_r2msPreDrive                                     */
/*  OS_predrive_r5ms_Task      Task_r5msPreDrive                                     */
/*  OS_predrive_r10ms_Task     Task_r10msPreDrive                                    */
/*  OS_predrive_r20ms_Task     Task_r20msPreDrive                                    */
/*  OS_predrive_r50ms_Task     Task_r50msPreDrive                                    */
/*  OS_predrive_r100ms_Task    Task_r100msPreDrive                                   */
/*  OS_predrive_r200ms_Task    Task_r200msPreDrive                                   */
/*  OS_predrive_r1000ms_Task   Task_r1000msPreDrive                                  */
/*  OS_predrive_Bg_Task        Task_rbgPredrive                                      */
/*                                                                                   */
/*  InjUn_nTask                ???????????????????                                   */
/*  TnSyncDistab_Task          ???????????????????                                   */
/*                                                                                   */
/*  OS_EngReStrt_Task          Task_rProc_EngReStrt                                  */
/*                                                                                   */
/*  TnSyncS0_Task              Task_rsyn                Task_syn                     */
/*  TnSyncS1_Task              Task_rsyns               Task_syns                    */
/*  OS_drive_r1ms_Task         Task_r1ms                                             */
/*  OS_drive_r2ms_Task         Task_r2ms                                             */
/*  OS_drive_r5ms_Task         Task_r5ms                                             */
/*  OS_drive_r10ms_Task        Task_r10ms                                            */
/*                             Task_r10ms_a                                          */
/*                             Task_r10ms_b                                          */
/*                             Task_r10ms_c                                          */
/*                             Task_r10ms_d                                          */
/*  OS_drive_r20ms_Task        Task_r20ms                                            */
/*  OS_drive_r50ms_Task        Task_r50ms                                            */
/*  OS_drive_r100ms_Task       Task_r100ms                                           */
/*  OS_drive_r200ms_Task       Task_r200ms                                           */
/*  OS_drive_r1000ms_Task      Task_r1000ms                                          */
/*  OS_drive_Bg_Task           Task_rbg                 Task_bg                      */
/*                                                                                   */
/*  TnSyncPost_Task            Task_rSwoffSyn           Task_swoffsyn                */
/*                                                                                   */
/*                                                                                   */
/*  OS_postdrive_r1ms_Task     Task_r1msSwOff           Task_swoff_r1ms              */
/*                                                      Task_rSwoff_1ms              */
/*  OS_postdrive_r2ms_Task     Task_r2msSwOff           Task_swoff_r2ms              */
/*                                                      Task_rSwoff_2ms              */
/*  OS_postdrive_r5ms_Task     Task_r5msSwOff                                        */
/*                                                                                   */
/*  OS_postdrive_r10ms_Task    Task_r10msSwOff          Task_swoff_r10ms             */
/*                                                      Task_rSwoff_10ms             */
/*  OS_postdrive_r20ms_Task    Task_r20msSwOff          Task_swoff_r20ms             */
/*                                                      Task_rSwoff_20ms             */
/*  OS_postdrive_r50ms_Task    Task_r50msSwOff          Task_swoff_r50ms             */
/*                                                      Task_rSwoff_50ms             */
/*  OS_postdrive_r100ms_Task   Task_r100msSwOff         Task_swoff_r100ms            */
/*                                                      Task_swoff_r100ms            */
/*  OS_postdrive_r200ms_Task   Task_r200msSwOff         Task_swoff_r200ms            */
/*                                                      Task_rSwoff_200ms            */
/*  OS_postdrive_r1000ms_Task  Task_r1000msSwOff        Task_swoff_r1000ms           */
/*                                                      Task_rSwoff_1000ms           */
/*  OS_postdrive_Bg_Task       Task_rbgSwOff            Task_swoff_bg                */
/*                                                      Task_rSwoff_bg               */
/*  OS_FcmClr_Task             Task_rfcmclr             taskFcmClr                   */
/*                                                                                   */
/*  OS_Int0                    ??????????????????                                    */
/*  OS_Int2                    ??????????????????                                    */
/*  OS_Int5                    ??????????????????                                    */
/*  OS_Int6                    ??????????????????                                    */
/*  OS_Int8                    ??????????????????                                    */
/*  OS_Int9                    ??????????????????                                    */
/*  OS_Int10                   ??????????????????                                    */
/*  OS_Int28                   ??????????????????                                    */
/*  OS_Int29                   ??????????????????                                    */
/*  OS_Int30                   ??????????????????                                    */
/*  OS_Int31                   ??????????????????                                    */
/*  OS_Int36                   ??????????????????                                    */
/*  OS_Int37                   ??????????????????                                    */
/*  OS_Int38                   ??????????????????                                    */
/*  OS_Int39                   ??????????????????                                    */
/*  OS_Int40                   ??????????????????                                    */
/*  OS_Int47                   ??????????????????                                    */
/*  OS_Int48                   ??????????????????                                    */
/*  OS_Int50                   ??????????????????                                    */
/*  OS_Int51                   ??????????????????                                    */
/*  OS_Int54                   ??????????????????                                    */
/*  OS_Int55                   ??????????????????                                    */
/*  OS_Int56                   ??????????????????                                    */
/*  OS_Int57                   ??????????????????                                    */
/*  OS_Int58                   ??????????????????                                    */
/*  OS_Int59                   ??????????????????                                    */
/*                                                                                   */
/*************************************************************************************/


/*************************************************************************************/
/*   Defines for new processnames Proc_* for ONE tasklist                            */
/*************************************************************************************/

#ifdef START_SECTION_Task_rProc_1ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_1ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_1ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_1ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_2ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_2ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_2ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_2ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_5ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_5ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_5ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_5ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_10ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_10ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_10ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_10ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_20ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_20ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_20ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_20ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_50ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_50ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_50ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_50ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_100ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_100ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_100ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_100ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_200ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_200ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_200ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_200ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_1000ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_1000ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_1000ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_1000ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_Bg
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_Bg
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_Bg
    #pragma section
    #undef STOP_SECTION_Task_rProc_Bg
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_Ini
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_Ini
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_Ini
    #pragma section
    #undef STOP_SECTION_Task_rProc_Ini
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_IniEnd
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_IniEnd
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_IniEnd
    #pragma section
    #undef STOP_SECTION_Task_rProc_IniEnd
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_IniDrv
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_IniDrv
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_IniDrv
    #pragma section
    #undef STOP_SECTION_Task_rProc_IniDrv
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_ReIni
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_ReIni
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_ReIni
    #pragma section
    #undef STOP_SECTION_Task_rProc_ReIni
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_DSM_Clear
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_DSM_Clear
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_DSM_Clear
    #pragma section
    #undef STOP_SECTION_Task_rProc_DSM_Clear
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_Ini
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_Ini
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_Ini
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_Ini
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_IniEnd
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_IniEnd
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_IniEnd
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_IniEnd
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_2ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_2ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_2ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_2ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_10ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_10ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_10ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_10ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_20ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_20ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_20ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_20ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_100ms
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_100ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_100ms
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_100ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_Bg
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_Bg
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_Bg
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_Bg
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_CalWup_Alarm
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_CalWup_Alarm
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_CalWup_Alarm
    #pragma section
    #undef STOP_SECTION_Task_rProc_CalWup_Alarm
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_SyncIni
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_SyncIni
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_SyncIni
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncIni
    #undef PRAGMA_UNUSED
#endif


// Proc_EngReStrt gab es schon, siehe unten


#ifdef START_SECTION_Task_rProc_SyncFirst
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_SyncFirst
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_SyncFirst
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncFirst
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_SyncPre
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_SyncPre
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_SyncPre
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncPre
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_SyncS0
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_SyncS0
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_SyncS0
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncS0
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_SyncS1
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_SyncS1
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_SyncS1
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncS1
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_rProc_EpmNoSync
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_EpmNoSync
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_EpmNoSync
    #pragma section
    #undef STOP_SECTION_Task_rProc_EpmNoSync
    #undef PRAGMA_UNUSED
#endif




/*************************************************************************************/
/*   Raster: !No raster!                                                             */
/*   Pragma: Fast_Codemem                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Fast_Codemem
    #pragma section .text ax
    #undef START_SECTION_Fast_Codemem
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Fast_Codemem
    #pragma section
    #undef STOP_SECTION_Fast_Codemem
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: !No raster!                                                             */
/*   Pragma: Slow_Codemem                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Slow_Codemem
    #pragma section .text ax
    #undef START_SECTION_Slow_Codemem
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Slow_Codemem
    #pragma section
    #undef STOP_SECTION_Slow_Codemem
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_Ini_Task                                                             */
/*   Pragma: Task_rini                                                               */
/*************************************************************************************/

#ifdef START_SECTION_Task_rini
    #pragma section .text ax
    #undef START_SECTION_Task_rini
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rini
    #pragma section
    #undef STOP_SECTION_Task_rini
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_IniEnd_Task                                                          */
/*   Pragma: Task_rini2                                                              */
/*   Pragma: Task_rini2pre                                                           */
/*************************************************************************************/

#ifdef START_SECTION_Task_rini2
    #pragma section .text ax
    #undef START_SECTION_Task_rini2
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rini2
    #pragma section
    #undef STOP_SECTION_Task_rini2
    #undef PRAGMA_UNUSED
#endif

#ifdef START_SECTION_Task_rini2pre
    #pragma section .text ax
    #undef START_SECTION_Task_rini2pre
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rini2pre
    #pragma section
    #undef STOP_SECTION_Task_rini2pre
    #undef PRAGMA_UNUSED
#endif

#ifdef START_SECTION_Task_ini2pre
    #pragma section .text ax
    #undef START_SECTION_Task_ini2pre
    #undef PRAGMA_UNUSED
	#error 'Uncorrect section   : Task_ini2pre'
	#error 'Must be replaced by : Task_rini2pre'
#endif

#ifdef STOP_SECTION_Task_ini2pre
    #pragma section
    #undef STOP_SECTION_Task_ini2pre
    #undef PRAGMA_UNUSED
	#error 'Uncorrect section   : Task_ini2pre'
	#error 'Must be replaced by : Task_rini2pre'
#endif

/*************************************************************************************/
/*   Raster: OS_ReIni_Task                                                           */
/*   Pragma: Task_rReIni                                                             */
/*************************************************************************************/

#ifdef START_SECTION_Task_rReIni
    #pragma section .text ax
    #undef START_SECTION_Task_rReIni
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rReIni
    #pragma section
    #undef STOP_SECTION_Task_rReIni
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_IniEnd_Task                                                           */
/*   Pragma: Task_rIniEnd                                                             */
/*************************************************************************************/

#ifdef START_SECTION_Task_rIniEnd
    #pragma section .text ax
    #undef START_SECTION_Task_rIniEnd
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rIniEnd
    #pragma section
    #undef STOP_SECTION_Task_rIniEnd
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_IniDrv_Task                                                           */
/*   Pragma: Task_rIniDrv                                                             */
/*************************************************************************************/

#ifdef START_SECTION_Task_rIniDrv
    #pragma section .text ax
    #undef START_SECTION_Task_rIniDrv
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rIniDrv
    #pragma section
    #undef STOP_SECTION_Task_rIniDrv
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncIni_Task                                                          */
/*   Pragma: Task_rinisyn                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Task_rinisyn
    #pragma section .text ax
    #undef START_SECTION_Task_rinisyn
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rinisyn
    #pragma section
    #undef STOP_SECTION_Task_rinisyn
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncFirst_Task                                                        */
/*   Pragma: Task_rfirstsyn                                                           */
/*************************************************************************************/

#ifdef START_SECTION_Task_rfirstsyn
    #pragma section .text ax
    #undef START_SECTION_Task_rfirstsyn
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rfirstsyn
    #pragma section
    #undef STOP_SECTION_Task_rfirstsyn
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncPre_Task                                                          */
/*   Pragma: Task_rsynPreDrive                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Task_rsynPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_rsynPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rsynPreDrive
    #pragma section
    #undef STOP_SECTION_Task_rsynPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r1ms_Task                                                   */
/*   Pragma: Task_r1msPreDrive                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r1msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r1msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r2ms_Task                                                   */
/*   Pragma: Task_r2msPreDrive                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Task_r2msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r2msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r2msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r2msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r5ms_Task                                                   */
/*   Pragma: Task_r5msPreDrive                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Task_r5msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r5msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r5msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r5msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r10ms_Task                                                  */
/*   Pragma: Task_r10msPreDrive                                                      */
/*************************************************************************************/

#ifdef START_SECTION_Task_r10msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r10msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r10msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r20ms_Task                                                  */
/*   Pragma: Task_r20msPreDrive                                                      */
/*************************************************************************************/

#ifdef START_SECTION_Task_r20msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r20msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r20msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r20msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r50ms_Task                                                  */
/*   Pragma: Task_r50msPreDrive                                                      */
/*************************************************************************************/

#ifdef START_SECTION_Task_r50msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r50msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r50msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r50msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r100ms_Task                                                 */
/*   Pragma: Task_r100msPreDrive                                                     */
/*************************************************************************************/

#ifdef START_SECTION_Task_r100msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r100msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r100msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r100msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r200ms_Task                                                 */
/*   Pragma: Task_r200msPreDrive                                                     */
/*************************************************************************************/

#ifdef START_SECTION_Task_r200msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r200msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r200msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r200msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_r1000ms_Task                                                */
/*   Pragma: Task_r1000msPreDrive                                                    */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1000msPreDrive
    #pragma section .text ax
    #undef START_SECTION_Task_r1000msPreDrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1000msPreDrive
    #pragma section
    #undef STOP_SECTION_Task_r1000msPreDrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_predrive_Bg_Task                                                     */
/*   Pragma: Task_rbgPredrive                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_rbgPredrive
    #pragma section .text ax
    #undef START_SECTION_Task_rbgPredrive
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rbgPredrive
    #pragma section
    #undef STOP_SECTION_Task_rbgPredrive
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_EngReStrt_Task                                                       */
/*   Pragma: Task_rProc_EngReStrt                                                    */
/*************************************************************************************/

#ifdef START_SECTION_Task_rProc_EngReStrt
    #pragma section .text ax
    #undef START_SECTION_Task_rProc_EngReStrt
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rProc_EngReStrt
    #pragma section
    #undef STOP_SECTION_Task_rProc_EngReStrt
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncS0_Task                                                           */
/*   Pragma: Task_rsyn                                                               */
/*************************************************************************************/

#ifdef START_SECTION_Task_rsyn
    #pragma section .text ax
    #undef START_SECTION_Task_rsyn
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rsyn
    #pragma section
    #undef STOP_SECTION_Task_rsyn
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncS1_Task                                                           */
/*   Pragma: Task_rsyns                                                              */
/*************************************************************************************/

#ifdef START_SECTION_Task_rsyns
    #pragma section .text ax
    #undef START_SECTION_Task_rsyns
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rsyns
    #pragma section
    #undef STOP_SECTION_Task_rsyns
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r1ms_Task                                                      */
/*   Pragma: Task_r1ms                                                               */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1ms
    #pragma section .text ax
    #undef START_SECTION_Task_r1ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1ms
    #pragma section
    #undef STOP_SECTION_Task_r1ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r2ms_Task                                                      */
/*   Pragma: Task_r2ms                                                               */
/*************************************************************************************/

#ifdef START_SECTION_Task_r2ms
    #pragma section .text ax
    #undef START_SECTION_Task_r2ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r2ms
    #pragma section
    #undef STOP_SECTION_Task_r2ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r5ms_Task                                                      */
/*   Pragma: Task_r5ms                                                               */
/*************************************************************************************/

#ifdef START_SECTION_Task_r5ms
    #pragma section .text ax
    #undef START_SECTION_Task_r5ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r5ms
    #pragma section
    #undef STOP_SECTION_Task_r5ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r10ms_Task                                                     */
/*   Pragma: Task_r10ms                                                              */
/*   Pragma: Task_r10ms_a                                                            */
/*   Pragma: Task_r10ms_b                                                            */
/*   Pragma: Task_r10ms_c                                                            */
/*   Pragma: Task_r10ms_d                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Task_r10ms
    #pragma section .text ax
    #undef START_SECTION_Task_r10ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10ms
    #pragma section
    #undef STOP_SECTION_Task_r10ms
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_r10ms_a
    #pragma section .text ax
    #undef START_SECTION_Task_r10ms_a
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10ms_a
    #pragma section
    #undef STOP_SECTION_Task_r10ms_a
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_r10ms_b
    #pragma section .text ax
    #undef START_SECTION_Task_r10ms_b
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10ms_b
    #pragma section
    #undef STOP_SECTION_Task_r10ms_b
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_r10ms_c
    #pragma section .text ax
    #undef START_SECTION_Task_r10ms_c
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10ms_c
    #pragma section
    #undef STOP_SECTION_Task_r10ms_c
    #undef PRAGMA_UNUSED
#endif


#ifdef START_SECTION_Task_r10ms_d
    #pragma section .text ax
    #undef START_SECTION_Task_r10ms_d
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10ms_d
    #pragma section
    #undef STOP_SECTION_Task_r10ms_d
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r20ms_Task                                                     */
/*   Pragma: Task_r20ms                                                              */
/*************************************************************************************/

#ifdef START_SECTION_Task_r20ms
    #pragma section .text ax
    #undef START_SECTION_Task_r20ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r20ms
    #pragma section
    #undef STOP_SECTION_Task_r20ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r50ms_Task                                                     */
/*   Pragma: Task_r50ms                                                              */
/*************************************************************************************/

#ifdef START_SECTION_Task_r50ms
    #pragma section .text ax
    #undef START_SECTION_Task_r50ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r50ms
    #pragma section
    #undef STOP_SECTION_Task_r50ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r100ms_Task                                                    */
/*   Pragma: Task_r100ms                                                             */
/*************************************************************************************/

#ifdef START_SECTION_Task_r100ms
    #pragma section .text ax
    #undef START_SECTION_Task_r100ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r100ms
    #pragma section
    #undef STOP_SECTION_Task_r100ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r200ms_Task                                                    */
/*   Pragma: Task_r200ms                                                             */
/*************************************************************************************/

#ifdef START_SECTION_Task_r200ms
    #pragma section .text ax
    #undef START_SECTION_Task_r200ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r200ms
    #pragma section
    #undef STOP_SECTION_Task_r200ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_r1000ms_Task                                                   */
/*   Pragma: Task_r1000ms                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1000ms
    #pragma section .text ax
    #undef START_SECTION_Task_r1000ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1000ms
    #pragma section
    #undef STOP_SECTION_Task_r1000ms
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_drive_Bg_Task                                                        */
/*   Pragma: Task_rbg                                                                */
/*************************************************************************************/

#ifdef START_SECTION_Task_rbg
    #pragma section .text ax
    #undef START_SECTION_Task_rbg
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rbg
    #pragma section
    #undef STOP_SECTION_Task_rbg
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: TnSyncPost_Task                                                         */
/*   Pragma: Task_rSwoffSyn                                                          */
/*************************************************************************************/

#ifdef START_SECTION_Task_rSwoffSyn
    #pragma section .text ax
    #undef START_SECTION_Task_rSwoffSyn
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rSwoffSyn
    #pragma section
    #undef STOP_SECTION_Task_rSwoffSyn
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r1ms_Task                                                  */
/*   Pragma: Task_r1msSwOff                                                          */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r1msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r1msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r2ms_Task                                                  */
/*   Pragma: Task_r2msSwOff                                                          */
/*************************************************************************************/

#ifdef START_SECTION_Task_r2msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r2msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r2msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r2msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r5ms_Task                                                  */
/*   Pragma: Task_r5msSwOff                                                          */
/*************************************************************************************/

#ifdef START_SECTION_Task_r5msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r5msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r5msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r5msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r10ms_Task                                                 */
/*   Pragma: Task_r10msSwOff                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Task_r10msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r10msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r10msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r10msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r20ms_Task                                                 */
/*   Pragma: Task_r20msSwOff                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Task_r20msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r20msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r20msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r20msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r50ms_Task                                                 */
/*   Pragma: Task_r50msSwOff                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Task_r50msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r50msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r50msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r50msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r100ms_Task                                                */
/*   Pragma: Task_r100msSwOff                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_r100msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r100msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r100msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r100msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r200ms_Task                                                */
/*   Pragma: Task_r200msSwOff                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_r200msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r200msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r200msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r200msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_r1000ms_Task                                               */
/*   Pragma: Task_r1000msSwOff                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Task_r1000msSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_r1000msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_r1000msSwOff
    #pragma section
    #undef STOP_SECTION_Task_r1000msSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_postdrive_Bg_Task                                                    */
/*   Pragma: Task_rbgSwOff                                                           */
/*************************************************************************************/

#ifdef START_SECTION_Task_rbgSwOff
    #pragma section .text ax
    #undef START_SECTION_Task_rbgSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rbgSwOff
    #pragma section
    #undef STOP_SECTION_Task_rbgSwOff
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Raster: OS_FcmClr_Task                                                          */
/*   Pragma: Task_rfcmclr                                                            */
/*************************************************************************************/

#ifdef START_SECTION_Task_rfcmclr
    #pragma section .text ax
    #undef START_SECTION_Task_rfcmclr
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_rfcmclr
    #pragma section
    #undef STOP_SECTION_Task_rfcmclr
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*                                                                                   */
/*                  End of program's localisation pragmas                            */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*                                                                                   */
/*                  Begin of memory's localisation pragmas                           */
/*                                                                                   */
/*************************************************************************************/


/*************************************************************************************/
/*                Pragmas for static variables and structures                        */
/*        ====================================================================       */
/*                                                                                   */
/*  								Memory location     							 */
/*                                                                                   */
/*					Official pragma supported by the Plattform						 */
/*                                                                                   */
/*	Section's name								Volatile	Speed	Protected	Size */
/*                                                                                   */
/*  static_volatile_FastRam_8bit				Yes			Fast	No			8	 */
/*  static_volatile_SlowRam_8bit				Yes			Slow	No			8	 */
/*  static_nonvolatile_FastRam_8bit				No			Fast	No			8	 */
/*  static_nonvolatile_SlowRam_8bit				No			Slow	No			8	 */
/*                                                                                   */
/*  static_volatile_FastRam_16bit				Yes			Fast	No			16 	 */
/*  static_volatile_SlowRam_16bit				Yes			Slow	No			16 	 */
/*  static_nonvolatile_FastRam_16bit			No			Fast	No			16 	 */
/*  static_nonvolatile_SlowRam_16bit			No			Slow	No			16 	 */
/*                                                                                   */
/*  static_volatile_FastRam_32bit				Yes			Fast	No			32 	 */
/*  static_volatile_SlowRam_32bit				Yes			Slow	No			32 	 */
/*  static_nonvolatile_FastRam_32bit			No			Fast	No			32 	 */
/*  static_nonvolatile_SlowRam_32bit			No			Slow	No			32 	 */
/*                                                                                   */
/*  static_volatile_SwRstProtRam_8bit			Yes			----	Yes			8 	 */
/*  static_volatile_SwRstProtRam_16bit			Yes			----	Yes			16 	 */
/*  static_volatile_SwRstProtRam_32bit			Yes			----	Yes			32 	 */
/*                                                                                   */
/*					Old pragma not supported by the Plattform						 */
/*					  !!!   Will be removed soon	 !!!		 		   			 */
/*                                                                                   */
/*  static_volatile_IRAM_8bit														 */
/*  static_volatile_XRAM_8bit														 */
/*  static_volatile_IRAM_16bit														 */
/*  static_volatile_XRAM_16bit														 */
/*  static_volatile_IRAM_32bit														 */
/*  static_volatile_XRAM_32bit														 */
/*  FarAbsolute                                                                      */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*   Memory: Volatile, Fast, 8bits                                                   */
/*   Pragma: static_volatile_FastRam_8bit                                            */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_FastRam_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a1" awBz
    #else
        #pragma section .zbss.asw.a1 awz
    #endif
    #undef START_SECTION_static_volatile_FastRam_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_FastRam_8bit
    #pragma section
    #undef STOP_SECTION_static_volatile_FastRam_8bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, Slow, 8bits                                                   */
/*   Pragma: static_volatile_SlowRam_8bit                                            */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SlowRam_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a1" awBz
    #else
        #pragma section .zbss.asw.a1 awz
    #endif
    #undef START_SECTION_static_volatile_SlowRam_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SlowRam_8bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SlowRam_8bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Fast, 8bits                                                */
/*   Pragma: static_nonvolatile_FastRam_8bit                                         */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_FastRam_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a1" awB
    #else
        #pragma section .bss.envram.a1 aw
    #endif
    #undef START_SECTION_static_nonvolatile_FastRam_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_FastRam_8bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_FastRam_8bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Slow, 8bits                                                */
/*   Pragma: static_nonvolatile_SlowRam_8bit                                         */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_SlowRam_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a1" awB
    #else
        #pragma section .bss.envram.a1 aw
    #endif
    #undef START_SECTION_static_nonvolatile_SlowRam_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_SlowRam_8bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_SlowRam_8bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, Fast, 16bits                                                  */
/*   Pragma: static_volatile_FastRam_16bit                                           */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_FastRam_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a2" awBz
    #else
        #pragma section .zbss.asw.a2 awz
    #endif
    #undef START_SECTION_static_volatile_FastRam_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_FastRam_16bit
    #pragma section
    #undef STOP_SECTION_static_volatile_FastRam_16bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, Slow, 16bits                                                  */
/*   Pragma: static_volatile_SlowRam_16bit                                           */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SlowRam_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a2" awBz
    #else
        #pragma section .zbss.asw.a2 awz
    #endif
    #undef START_SECTION_static_volatile_SlowRam_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SlowRam_16bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SlowRam_16bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Fast, 16bits                                               */
/*   Pragma: static_nonvolatile_FastRam_16bit                                        */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_FastRam_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a2" awB
    #else
        #pragma section .bss.envram.a2 aw
    #endif
    #undef START_SECTION_static_nonvolatile_FastRam_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_FastRam_16bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_FastRam_16bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Slow, 16bits                                               */
/*   Pragma: static_nonvolatile_SlowRam_16bit                                        */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_SlowRam_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a2" awB
    #else
        #pragma section .bss.envram.a2 aw
    #endif
    #undef START_SECTION_static_nonvolatile_SlowRam_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_SlowRam_16bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_SlowRam_16bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, Fast, 32bits                                                  */
/*   Pragma: static_volatile_FastRam_32bit                                           */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_FastRam_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".sbss.a4" awBs
    #else
        #pragma section .sbss.a4 aws
    #endif
    #undef START_SECTION_static_volatile_FastRam_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_FastRam_32bit
    #pragma section
    #undef STOP_SECTION_static_volatile_FastRam_32bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, Slow, 32bits                                                  */
/*   Pragma: static_volatile_SlowRam_32bit                                           */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SlowRam_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".sbss.a4" awBs
    #else
        #pragma section .sbss.a4 aws
    #endif
    #undef START_SECTION_static_volatile_SlowRam_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SlowRam_32bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SlowRam_32bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Fast, 32bits                                               */
/*   Pragma: static_nonvolatile_FastRam_32bit                                        */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_FastRam_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a4" awB
    #else
        #pragma section .bss.envram.a4 aw
    #endif
    #undef START_SECTION_static_nonvolatile_FastRam_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_FastRam_32bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_FastRam_32bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: NonVolatile, Slow, 32bits                                               */
/*   Pragma: static_nonvolatile_SlowRam_32bit                                        */
/*************************************************************************************/

#ifdef START_SECTION_static_nonvolatile_SlowRam_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.envram.a4" awB
    #else
        #pragma section .bss.envram.a4 aw
    #endif
    #undef START_SECTION_static_nonvolatile_SlowRam_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_nonvolatile_SlowRam_32bit
    #pragma section
    #undef STOP_SECTION_static_nonvolatile_SlowRam_32bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, Software-Reset protected, 8bits                               */
/*   Pragma: static_volatile_SwRstProtRam_8bit                                       */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SwRstProtRam_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.protram.a1" awB
    #else
        #pragma section .bss.protram.a1 aw
    #endif
    #undef START_SECTION_static_volatile_SwRstProtRam_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SwRstProtRam_8bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SwRstProtRam_8bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, Software-Reset protected, 16bits                              */
/*   Pragma: static_volatile_SwRstProtRam_16bit                                      */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SwRstProtRam_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.protram.a2" awB
    #else
        #pragma section .bss.protram.a2 aw
    #endif
    #undef START_SECTION_static_volatile_SwRstProtRam_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SwRstProtRam_16bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SwRstProtRam_16bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, Software-Reset protected, 32bits                              */
/*   Pragma: static_volatile_SwRstProtRam_32bit                                      */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_SwRstProtRam_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".bss.protram.a4" awB
    #else
        #pragma section .bss.protram.a4 aw
    #endif
    #undef START_SECTION_static_volatile_SwRstProtRam_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_static_volatile_SwRstProtRam_32bit
    #pragma section
    #undef STOP_SECTION_static_volatile_SwRstProtRam_32bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*                                                                                   */
/*               End of official memory's localisation pragmas                       */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*                                                                                   */
/*					Old pragma not supported by the Plattform						 */
/*					  They are now generating an error					   			 */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*  static_volatile_IRAM_8bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_IRAM_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a1" awBz
    #else
        #pragma section .zbss.asw.a1 awz
    #endif
    #undef START_SECTION_static_volatile_IRAM_8bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_8bit'
	#error 'Must be replaced by : static_volatile_FastRam_8bit'
#endif

#ifdef STOP_SECTION_static_volatile_IRAM_8bit
    #pragma section
    #undef STOP_SECTION_static_volatile_IRAM_8bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_8bit'
	#error 'Must be replaced by : static_volatile_FastRam_8bit'
#endif


/*************************************************************************************/
/*  static_volatile_XRAM_8bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_XRAM_8bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a1" awBz
    #else
        #pragma section .zbss.asw.a1 awz
    #endif
    #undef START_SECTION_static_volatile_XRAM_8bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_8bit'
	#error 'Must be replaced by : static_volatile_SlowRam_8bit'
#endif

#ifdef STOP_SECTION_static_volatile_XRAM_8bit
    #pragma section
    #undef STOP_SECTION_static_volatile_XRAM_8bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_8bit'
	#error 'Must be replaced by : static_volatile_SlowRam_8bit'
#endif


/*************************************************************************************/
/*  static_volatile_IRAM_16bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_IRAM_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a2" awBz
    #else
        #pragma section .zbss.asw.a2 awz
    #endif
    #undef START_SECTION_static_volatile_IRAM_16bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_16bit'
	#error 'Must be replaced by : static_volatile_FastRam_16bit'
#endif

#ifdef STOP_SECTION_static_volatile_IRAM_16bit
    #pragma section
    #undef STOP_SECTION_static_volatile_IRAM_16bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_16bit'
	#error 'Must be replaced by : static_volatile_FastRam_16bit'
#endif


/*************************************************************************************/
/*  static_volatile_XRAM_16bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_XRAM_16bit
    #if (__GNUC__ >= 4)
        #pragma section ".zbss.asw.a2" awBz
    #else
        #pragma section .zbss.asw.a2 awz
    #endif
    #undef START_SECTION_static_volatile_XRAM_16bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_16bit'
	#error 'Must be replaced by : static_volatile_SlowRam_16bit'
#endif

#ifdef STOP_SECTION_static_volatile_XRAM_16bit
    #pragma section
    #undef STOP_SECTION_static_volatile_XRAM_16bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_16bit'
	#error 'Must be replaced by : static_volatile_SlowRam_16bit'
#endif


/*************************************************************************************/
/*  static_volatile_IRAM_32bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_IRAM_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".sbss.a4" awBs
    #else
        #pragma section .sbss.a4 aws
    #endif
    #undef START_SECTION_static_volatile_IRAM_32bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_32bit'
	#error 'Must be replaced by : static_volatile_FastRam_32bit'
#endif

#ifdef STOP_SECTION_static_volatile_IRAM_32bit
    #pragma section
    #undef STOP_SECTION_static_volatile_IRAM_32bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_IRAM_32bit'
	#error 'Must be replaced by : static_volatile_FastRam_32bit'
#endif


/*************************************************************************************/
/*  static_volatile_XRAM_32bit														 */
/*************************************************************************************/

#ifdef START_SECTION_static_volatile_XRAM_32bit
    #if (__GNUC__ >= 4)
        #pragma section ".sbss.a4" awBs
    #else
        #pragma section .sbss.a4 aws
    #endif
    #undef START_SECTION_static_volatile_XRAM_32bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_32bit'
	#error 'Must be replaced by : static_volatile_SlowRam_32bit'
#endif

#ifdef STOP_SECTION_static_volatile_XRAM_32bit
    #pragma section
    #undef STOP_SECTION_static_volatile_XRAM_32bit
    #undef PRAGMA_UNUSED
	#error 'Obsolete section    : static_volatile_XRAM_32bit'
	#error 'Must be replaced by : static_volatile_SlowRam_32bit'
#endif


/*************************************************************************************/
/*  FarAbsolute                                                                      */
/*************************************************************************************/

#ifdef START_SECTION_FarAbsolute
    #pragma section .sdata.rodata as
    #undef START_SECTION_FarAbsolute
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_FarAbsolute
    #pragma section
    #undef STOP_SECTION_FarAbsolute
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*  Honda project                                                                      */
/*************************************************************************************/

#ifdef START_SECTION_Task_rProc_SyncSx
    #pragma section
    #undef START_SECTION_Task_rProc_SyncSx
    #undef PRAGMA_UNUSED
#endif
#ifdef STOP_SECTION_Task_rProc_SyncSx
    #pragma section
    #undef STOP_SECTION_Task_rProc_SyncSx
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*                                                                                   */
/*							  End of STD_PRAGM.H									 */
/*                                                                                   */
/*************************************************************************************/
