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
 * $Filename__:swadp_pub.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:SW Adapter$
 * $Domain____:SDOM$
 * $User______:DAH5KOR$
 * $Date______:01.08.2017$
 * $Class_____:SWHDR$
 * $Name______:swadp_pub$
 * $Variant___:103.0.0_81D00$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 103.0.0_81D00; 1     01.08.2017 DAH5KOR
 *   SWADP changes to accomodate all the Crank CAM configurations for New Eagle
 * 
 * 103.0.0_81D00; 0     13.06.2017 DAH5KOR
 *   Monitoring level 3 WDA line activation function added
 * 
 * 1.0.0_81C00; 0     15.05.2017 DAH5KOR
 *   Cj135 interface functions modified for Bank 1 and Bank 2 sensors
 * 
 * 1.0.0_NEWEAGLE; 8     26.01.2017 DAH5KOR
 *   Changes for the LSU functions
 * 
 * 1.0.0_NEWEAGLE; 7     30.11.2016 DAH5KOR
 *   Camshaft adaptation request included
 * 
 * 1.0.0_NEWEAGLE; 6     13.06.2016 DAH5KOR
 *   Cj135, CAM sensor interfaces added
 * 
 * 1.0.0_NEWEAGLE; 5     30.03.2016 DAH5KOR
 *   EEP blocks reduced. CRC algorithm implementation
 * 
 * 1.0.0_NEWEAGLE; 4     29.10.2015 DAH5KOR
 *   Cpu_Ticks and B_kl15 status added
 * 
 * 1.0.0_NEWEAGLE; 3     26.06.2015 DAH5KOR
 *   New Eagle specific modification are done
 * 
 * 1.0.0_NEWEAGLE; 2     29.04.2015 DAH5KOR
 *   Knock and H Bridge interfaces added
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _SWADP_PUB_H                                
#define _SWADP_PUB_H
 /*
 ***************************************************************************************************
 *CIL function for 32 bit CRC with a byte of data
 ***************************************************************************************************
 */
 extern uint32 sws_crc32_8 (uint8 *dData, uint32 dSize, uint32 dLastCRCValue);


/*
 ***************************************************************************************************
 *CIL functions for EPM functionality
 ***************************************************************************************************
 */
 extern sint16 swsh_Read_EPM_EngineSpeed(void);
 extern sint16 swsh_Read_EPM_EngineSpeed10ms(void);
 extern sint16 swsh_Read_EPM_EngineSpeedGradSeg(void);
 extern sint16 swsh_Read_EPM_EngineSpeedGradWorkCycle(void);
 extern uint8 swsh_Read_EPM_SWCylinderCounter(void);
 extern uint8 swsh_Read_EPM_StatusMode(void);
 extern uint8 swsh_Read_EPM_StatusSync(void);
 extern sint16 swsh_Read_EPM_CurCrsAngle(void);
  
 /*
 ***************************************************************************************************
 *CIL functions for Injection functionality
 ***************************************************************************************************
 */
 extern void swsh_Write_InjCDrv_PostInjState(bool value);
 extern void swsh_Write_InjCDrv_EndOfStart(bool value);
 extern void swsh_Write_InjCDrv_InjCutOff(uint8 evz_austot_C);
 extern void swsh_Write_InjCDrv_EffInjTi(uint32 te_l_C);
 extern void swsh_Write_InjCDrv_EffInjTiCylInd(uint32 value[]);
 extern void swsh_Write_InjCDrv_BattCorr(uint16 tvub_w_C);
 extern void swsh_Write_InjCDrv_InjEndAngleArray(uint8 value[]);
 extern void swsh_Write_InjCDrv_InjAbortAngle(uint8 wea_C);
 extern void swsh_Write_InjCDrv_EndAngleSimInj(uint8 weestsim_C);
 extern void swsh_Write_InjCDrv_InletCloseAngletoTDC1(uint8 wes_C);
 extern void swsh_Write_InjCDrv_SimMisfireInj(uint16 flgstinj_w_C);
 extern void swsh_Write_MinInjTime (uint16 mininjtime);
 extern uint16 swsh_Read_InjCDrv_InjCounter(void);
 /*
 ***************************************************************************************************
 *CIL functions for Ignition functionality
 ***************************************************************************************************
 */
 extern void swsh_Write_IgnCDrv_SimMisfireIgn(uint16 flgstign_w_C);
 extern void swsh_Write_IgnCDrv_IgnCutOff(bool B_nlzoff_C);
 extern void swsh_Write_IgnCDrv_NumFollowUpSpark(uint8 fubaanz_C);
 extern void swsh_Write_IgnCDrv_OpeningTime(uint16 offz_w_C);
 extern void swsh_Write_IgnCDrv_DwellTimeSparkBand(uint16 szfuba_w_C);
 extern void swsh_Write_IgnCDrv_DwellTime(uint16 szout_w_C);
 extern void swsh_Write_IgnCDrv_IgnitionAnglSetArray(sint8 zwcalcar_C[]);
 extern uint16 swsh_Read_IgnCDrv_IgnCounter(void);
 extern uint16 swsh_Read_IgnCDrv_IgnFadeOutMask(void);
 /* Battery voltage reading from BSW*/
 extern uint16 swsh_Read_BatteryVoltage(void);
 /*
 *********************************************************************************
 Interface functions from ASW to BSW 
Information required by BSW are read from ASW using these functions
***********************************************************************************
 */

extern void swsh_Write_OverRunFuelCutOff(bool value);
extern void swsh_Write_EndOfStart(bool value);
extern void swsh_Write_AirBagActive(bool value);
extern void swsh_Write_EngineCoolantTemp(uint8 value);
extern void swsh_Write_EnvAirTemp(sint16 value);
extern void swsh_Write_EnvPressure(sint16 value);
extern void swsh_Write_AccelPosition(sint16 value);
extern void swsh_Write_TotalDistance(sint32 value);
extern void swsh_Write_VehicleSpeed(sint16 value);
extern void swsh_Write_EngineStatus(uint8 value);
extern void swsh_Write_StarterActive(uint8 value);

/* 
***************************************************************************************************
Input for LSU operation
***************************************************************************************************
*/
extern void swsh_Write_DewpointEnd(bool value, uint8 sensnum);
extern void swsh_Write_InjectorActive(bool value);
extern void swsh_Write_ReqdLambdaLSUloc(uint16 value, uint8 sensnum);
extern void swsh_Write_ExhGasMFlow(uint16 value, uint8 sensnum);
extern void swsh_Write_WallTempS1 (sint16 value);
extern void swsh_Write_WallTempS2 (sint16 value);
extern void swsh_Write_ExhGTempUpstsen(uint16 value, uint8 sensnum);
extern void swsh_Write_EngModeIdle(uint16 value);
extern void swsh_Write_lambdaOffset (sint16 value, uint8 sensnum);

/* 
***************************************************************************************************
Output from CJ135 chip
***************************************************************************************************
*/
extern void swsh_Write_LSUHtrCtrl_user(uint8 SensorNumber, uint16 Period, uint16 Duty);
extern sint16 swsh_Read_LSUSensorValue_user(uint8 SensorNumber);
extern sint16 swsh_Read_LSUPumpcrnt_user(uint8 SensorNumber);
extern uint16 swsh_Read_LSURp_user(uint8 SensorNumber);
extern uint16 swsh_Read_LSURn_user(uint8 SensorNumber);
extern uint16 swsh_Read_LSUTemp_user(uint8 SensorNumber);
extern uint8 swsh_Read_LSUMode (uint8 SensorNumber);

/* 
***************************************************************************************************
CAM sensor variables exported for VVT control
***************************************************************************************************
*/
extern bool swsh_Read_crnklmphm (void);
extern bool swsh_Read_adapexhcam (void);
extern bool swsh_Read_adapincam (void);
extern uint32 swsh_Read_lastcamflank (uint8 sensnum);
extern sint16 swsh_Read_anginltvalveopen (uint8 sensnum);
extern sint16 swsh_Read_angexhvalveopen (uint8 sensnum);
extern sint16* swsh_Read_camangleadap (uint8 sensnum);
extern void swsh_Write_caminadapreq (bool status);
extern void swsh_Write_camexhadapreq (bool status);/* (It is needed for systems with exhaust camshaft control)*/

/*
 ***************************************************************************************************
 *CIL functions for knock functionality
 ***************************************************************************************************
  */
  extern uint8 swsh_Write_KnCDrv_SensorDiagReq(void);
  extern uint8 swsh_Write_KnCDrv_KnockSensorNumber (uint8 cylkr);
  extern uint8 swsh_Write_KnCDrv_AmplificationFactor(uint8 cylkr);
  extern sint16 swsh_Write_KnCDrv_MeasureWindowBegin(void);
  extern sint16 swsh_Write_KnCDrv_MeasureWindowLength(void); 
  extern sint16 swsh_Write_KnCDrv_FilterSelection(uint8 cylkr);
  extern uint8 swsh_Read_KnCDrv_CylCount(void);
  extern uint8 swsh_Read_KnCDrv_IntRslvld(void);
  extern uint32* swsh_Read_KnCDrv_IntValue(void);
  extern bool swsh_Read_KnCDrv_StatusMeasWindow(void);
  extern uint8 swsh_Read_KnCDrv_RlsChkMeasWin(void);
  extern uint32 swsh_Read_KnCDrv_StatusKnockDriver(void);
 /*
 ***************************************************************************************************
 *CIL functions for Level 3 monitoring
 ***************************************************************************************************
  */ 
  
  extern void swsh_Write_MonPrtlResp (uint32 SwshPrtlResp);
  /*
 ***************************************************************************************************
 *CIL functions for H Bridge signals
 ***************************************************************************************************
  */
extern void swsh_Write_HBridgePeriodDuty(uint8 HBridgeNumber, uint32 Period, sint16 Duty);
extern void swsh_Write_HBridgeShutOff(uint8 HBridgeNumber, bool value);
extern uint32 swsh_Read_HBridgeErrorInfo(uint8 HBridgeNumber);
extern uint32 swsh_tick2us(void);
extern uint8 swsh_ignswSt(void);
#endif                                                  
