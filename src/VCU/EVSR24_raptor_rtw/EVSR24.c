/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EVSR24.c
 *
 * Code generated for Simulink model 'EVSR24'.
 *
 * Model version                  : 8.333
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Oct 17 21:06:40 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EVSR24.h"
#include "rtwtypes.h"
#include "EVSR24_private.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "zero_crossing_types.h"
#include <string.h>

/* Named constants for Chart: '<S267>/debounceResolver' */
#define EVSR24_IN_NO_ACTIVE_CHILD      ((uint8_T)0U)
#define EVSR24_IN_Off                  ((uint8_T)1U)
#define EVSR24_IN_On                   ((uint8_T)2U)

/* Named constants for Chart: '<S290>/bspcAppsFault' */
#define EVSR24_IN_BSPC_APPS_Fault      ((uint8_T)1U)
#define EVSR24_IN_NO_ACTIVE_CHILD_h    ((uint8_T)0U)
#define EVSR24_IN_Normal               ((uint8_T)2U)

/* Named constants for Chart: '<S290>/contactorState' */
#define EVSR24_IN_ChargeCircuit        ((uint8_T)1U)
#define EVSR24_IN_Charging             ((uint8_T)1U)
#define EVSR24_IN_ChargingStandby      ((uint8_T)2U)
#define EVSR24_IN_PrechargeCircuit     ((uint8_T)2U)
#define EVSR24_IN_PrechargeOpen        ((uint8_T)3U)

/* Block signals (default storage) */
BlockIO_EVSR24 EVSR24_B;

/* Block states (default storage) */
D_Work_EVSR24 EVSR24_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_EVSR24 EVSR24_PrevZCSigState;

/* Real-time model */
static RT_MODEL_EVSR24 EVSR24_M_;
RT_MODEL_EVSR24 *const EVSR24_M = &EVSR24_M_;

/* Block : EVSR24/raptor_timed_trigger */

/* Named constants for Chart: '<S267>/debounceResolver' */
#define EVSR24_IN_NO_ACTIVE_CHILD      ((uint8_T)0U)
#define EVSR24_IN_Off                  ((uint8_T)1U)
#define EVSR24_IN_On                   ((uint8_T)2U)

/* Named constants for Chart: '<S290>/bspcAppsFault' */
#define EVSR24_IN_BSPC_APPS_Fault      ((uint8_T)1U)
#define EVSR24_IN_NO_ACTIVE_CHILD_h    ((uint8_T)0U)
#define EVSR24_IN_Normal               ((uint8_T)2U)

/* Named constants for Chart: '<S290>/contactorState' */
#define EVSR24_IN_ChargeCircuit        ((uint8_T)1U)
#define EVSR24_IN_Charging             ((uint8_T)1U)
#define EVSR24_IN_ChargingStandby      ((uint8_T)2U)
#define EVSR24_IN_PrechargeCircuit     ((uint8_T)2U)
#define EVSR24_IN_PrechargeOpen        ((uint8_T)3U)

void Timer_ooqlV(void)
{
  /* Timer_ooqlV  ------   Foreground  */

  /* New Eagle LLC 2018
   * Foreground Running @ 10.0 ms
   * Tick Step Size	: 0.01
   * Tick Data TypeId	: 7
   * Large Time Base Needed : 0
   * Needs Absolute Time : 1
   * Needs Elapsed Time : 0
   */
  if ((AppMonitorState_Data() <= APPMON_RUN) ||
      ((AppMonitorState_Data() == APPMON_STEP) && (Timer_ooqlV_Steps_Data() > 0)
       )) {
    if ((Timer_ooqlV_Steps_Data() > 0) && (AppMonitorState_Data() == APPMON_STEP))
      Timer_ooqlV_Steps_Data() = (uint16_T)(Timer_ooqlV_Steps_Data() - 1);

    {
      EVSR24_Foreground();
    }
  }
}

/* Block : EVSR24/Power Up_Down/raptor_timed_trigger */

/* Named constants for Chart: '<S267>/debounceResolver' */
#define EVSR24_IN_NO_ACTIVE_CHILD      ((uint8_T)0U)
#define EVSR24_IN_Off                  ((uint8_T)1U)
#define EVSR24_IN_On                   ((uint8_T)2U)

/* Named constants for Chart: '<S290>/bspcAppsFault' */
#define EVSR24_IN_BSPC_APPS_Fault      ((uint8_T)1U)
#define EVSR24_IN_NO_ACTIVE_CHILD_h    ((uint8_T)0U)
#define EVSR24_IN_Normal               ((uint8_T)2U)

/* Named constants for Chart: '<S290>/contactorState' */
#define EVSR24_IN_ChargeCircuit        ((uint8_T)1U)
#define EVSR24_IN_Charging             ((uint8_T)1U)
#define EVSR24_IN_ChargingStandby      ((uint8_T)2U)
#define EVSR24_IN_PrechargeCircuit     ((uint8_T)2U)
#define EVSR24_IN_PrechargeOpen        ((uint8_T)3U)

void Timer_BGND_G6Wyo(void)
{
  /* Timer_BGND_G6Wyo  ------   Background  */

  /* New Eagle LLC 2018
   * Background Running @ 50.0 ms
   * Tick Step Size	: 0.01
   * Tick Data TypeId	: 7
   * Large Time Base Needed : 0
   * Needs Absolute Time : 1
   * Needs Elapsed Time : 0
   */
  if ((AppMonitorState_Data() <= APPMON_RUN) ||
      ((AppMonitorState_Data() == APPMON_STEP) && (Timer_BGND_G6Wyo_Steps_Data()
        > 0) )) {
    if ((Timer_BGND_G6Wyo_Steps_Data() > 0) && (AppMonitorState_Data() ==
         APPMON_STEP))
      Timer_BGND_G6Wyo_Steps_Data() = (uint16_T)(Timer_BGND_G6Wyo_Steps_Data() -
        1);

    {
      EVSR24_Background();
    }
  }
}

/* System initialize for function-call system: '<S2>/Background' */
void EVSR24_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_digital_in): '<S295>/raptor_digital_in' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S295>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S296>/raptor_delta_time' */
  EVSR24_DWork.raptor_delta_time_DWORK1 = raptor_ticks();

  /* InitializeConditions for UnitDelay: '<S296>/Unit Delay2' */
  EVSR24_DWork.UnitDelay2_DSTATE = true;
}

/* System reset for function-call system: '<S2>/Background' */
void EVSR24_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S296>/raptor_delta_time' */
  EVSR24_DWork.raptor_delta_time_DWORK1 = raptor_ticks();

  /* InitializeConditions for UnitDelay: '<S296>/Unit Delay2' */
  EVSR24_DWork.UnitDelay2_DSTATE = true;
}

/* Output and update for function-call system: '<S2>/Background' */
void EVSR24_Background(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_delta_time;
  boolean_T rtb_raptor_digital_in;
  real_T rtb_MultiportSwitch1;
  boolean_T rtb_Logic;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_raptor_sfun_nv_status;

  /* S-Function (raptor_sfun_digital_in): '<S295>/raptor_digital_in' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_digital_in = swsh_ignswSt();
  }

  /* S-Function (raptor_sfun_delta_time): '<S296>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = (raptor_GetDeltaTime_ms
      (&EVSR24_DWork.raptor_delta_time_DWORK1) * 0.001f);
  }

  /* MultiPortSwitch: '<S296>/Multiport Switch1' incorporates:
   *  Constant: '<S296>/Constant'
   *  RelationalOperator: '<S300>/FixPt Relational Operator'
   *  Sum: '<S296>/Add'
   *  UnitDelay: '<S296>/Unit Delay'
   *  UnitDelay: '<S300>/Delay Input1'
   */
  if (rtb_raptor_digital_in == EVSR24_DWork.DelayInput1_DSTATE) {
    rtb_MultiportSwitch1 = rtb_raptor_delta_time + EVSR24_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1 = 0.0;
  }

  /* End of MultiPortSwitch: '<S296>/Multiport Switch1' */
  /* UnitDelay: '<S296>/Unit Delay2' */
  rtb_raptor_sfun_nv_status = EVSR24_DWork.UnitDelay2_DSTATE;

  /* CombinatorialLogic: '<S296>/Logic' incorporates:
   *  Logic: '<S296>/Logical Operator1'
   *  Logic: '<S296>/Logical Operator2'
   *  Logic: '<S296>/Logical Operator3'
   *  RelationalOperator: '<S296>/Relational Operator'
   *  RelationalOperator: '<S296>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S296>/raptor_adjustment3'
   *  S-Function (raptor_sfun_adjustment): '<S296>/raptor_adjustment4'
   */
  rtb_Logic = EVSR24_ConstP.Logic_table[((((uint32_T)(rtb_raptor_digital_in &&
    (rtb_MultiportSwitch1 >= (KeySwHiTimeThr_Data()))) << 1) + (uint32_T)
    ((!rtb_raptor_digital_in) && (rtb_MultiportSwitch1 >= (KeySwLoTimeThr_Data()))))
    << 1) + rtb_raptor_sfun_nv_status];

  /* Logic: '<S295>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S295>/raptor_data_read1'
   */
  rtb_LogicalOperator1_h = (rtb_Logic || KeepModuleOn_Data());

  /* Outputs for Triggered SubSystem: '<S295>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S297>/Trigger'
   */
  if ((!rtb_LogicalOperator1_h) &&
      (EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S297>/raptor_data_write' incorporates:
     *  Constant: '<S297>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S297>/Function-Call Generator' incorporates:
     *  SubSystem: '<S297>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S301>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S297>/Function-Call Generator' */
  }

  EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S295>/Raise Shutdown Event' */
  /* Outputs for Enabled and Triggered SubSystem: '<S295>/Raise Startup Event' incorporates:
   *  EnablePort: '<S298>/Enable'
   *  TriggerPort: '<S298>/Trigger'
   */
  if (FgndTasksStopped_Data() && (rtb_LogicalOperator1_h &&
       (EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE != POS_ZCSIG))) {
    /* S-Function (fcgen): '<S298>/Function-Call Generator' incorporates:
     *  SubSystem: '<S298>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S302>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S298>/Function-Call Generator' */
  }

  /* End of S-Function (raptor_sfun_data_read): '<S295>/raptor_data_read' */

  /* Outputs for Triggered SubSystem: '<S295>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S297>/Trigger'
   */
  EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S295>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S295>/Raise Startup Event' */

  /* UnitDelay: '<S295>/Unit Delay' */
  rtb_LogicalOperator2_c = EVSR24_DWork.UnitDelay_DSTATE_ez;

  /* Outputs for Triggered SubSystem: '<S295>/Store EEPROM' incorporates:
   *  TriggerPort: '<S299>/Trigger'
   */
  if ((!EVSR24_DWork.UnitDelay_DSTATE_ez) &&
      (EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (fcgen): '<S299>/Function-Call Generator' incorporates:
     *  SubSystem: '<S299>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S303>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S299>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S295>/Unit Delay' */
  EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_LogicalOperator2_c;

  /* End of Outputs for SubSystem: '<S295>/Store EEPROM' */

  /* S-Function (raptor_sfun_data_write): '<S295>/raptor_data_write' */
  KeySw_Bgnd_Data() = rtb_Logic;

  /* S-Function (raptor_sfun_nv_status): '<S295>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S295>/Logical Operator2' incorporates:
   *  UnitDelay: '<S295>/Unit Delay1'
   */
  rtb_raptor_sfun_nv_status = (rtb_raptor_sfun_nv_status ||
    rtb_LogicalOperator1_h || EVSR24_DWork.UnitDelay1_DSTATE);

  /* S-Function (raptor_sfun_digital_out): '<S295>/raptor_digital_out' */
  /* S-Function Block: POWER_HOLD */
  {
    {
      if (rtb_raptor_sfun_nv_status && !swsh_ignswSt()) {
        SyC_WaitPostDrv();
      }
    }
  }

  /* Update for UnitDelay: '<S300>/Delay Input1' */
  EVSR24_DWork.DelayInput1_DSTATE = rtb_raptor_digital_in;

  /* Update for UnitDelay: '<S296>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S296>/Unit Delay2' */
  EVSR24_DWork.UnitDelay2_DSTATE = rtb_Logic;

  /* Update for UnitDelay: '<S295>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_ez = rtb_LogicalOperator1_h;

  /* Update for UnitDelay: '<S295>/Unit Delay1' */
  EVSR24_DWork.UnitDelay1_DSTATE = rtb_LogicalOperator2_c;
}

/*
 * System initialize for atomic system:
 *    '<S267>/debounceResolver'
 *    '<S268>/debounceResolver'
 *    '<S269>/debounceResolver'
 *    '<S270>/debounceResolver'
 *    '<S271>/debounceResolver'
 *    '<S272>/debounceResolver'
 *    '<S273>/debounceResolver'
 *    '<S274>/debounceResolver'
 */
void EVSR24_debounceResolver_Init(rtDW_debounceResolver_EVSR24 *localDW)
{
  localDW->is_active_c3_steeringWheel_lib = 0U;
  localDW->is_c3_steeringWheel_lib = EVSR24_IN_NO_ACTIVE_CHILD;
}

/*
 * System reset for atomic system:
 *    '<S267>/debounceResolver'
 *    '<S268>/debounceResolver'
 *    '<S269>/debounceResolver'
 *    '<S270>/debounceResolver'
 *    '<S271>/debounceResolver'
 *    '<S272>/debounceResolver'
 *    '<S273>/debounceResolver'
 *    '<S274>/debounceResolver'
 */
void EVSR24_debounceResolver_Reset(rtDW_debounceResolver_EVSR24 *localDW)
{
  localDW->is_active_c3_steeringWheel_lib = 0U;
  localDW->is_c3_steeringWheel_lib = EVSR24_IN_NO_ACTIVE_CHILD;
}

/*
 * Enable for atomic system:
 *    '<S267>/debounceResolver'
 *    '<S268>/debounceResolver'
 *    '<S269>/debounceResolver'
 *    '<S270>/debounceResolver'
 *    '<S271>/debounceResolver'
 *    '<S272>/debounceResolver'
 *    '<S273>/debounceResolver'
 *    '<S274>/debounceResolver'
 */
void EVSR24_debounceResolver_Enable(RT_MODEL_EVSR24 * const EVSR24_M,
  rtDW_debounceResolver_EVSR24 *localDW)
{
  real_T durationOperatorLastReferenceTime_1_tmp;
  durationOperatorLastReferenceTime_1_tmp = ((EVSR24_M->Timing.clockTick0) *
    0.01) - localDW->chartDisableTime;
  localDW->durationOperatorLastReferenceTime_1 +=
    durationOperatorLastReferenceTime_1_tmp;
  localDW->durationOperatorLastReferenceTime_1_j +=
    durationOperatorLastReferenceTime_1_tmp;
}

/*
 * Disable for atomic system:
 *    '<S267>/debounceResolver'
 *    '<S268>/debounceResolver'
 *    '<S269>/debounceResolver'
 *    '<S270>/debounceResolver'
 *    '<S271>/debounceResolver'
 *    '<S272>/debounceResolver'
 *    '<S273>/debounceResolver'
 *    '<S274>/debounceResolver'
 */
void EVSR24_debounceResolver_Disable(RT_MODEL_EVSR24 * const EVSR24_M,
  rtDW_debounceResolver_EVSR24 *localDW)
{
  localDW->chartDisableTime = ((EVSR24_M->Timing.clockTick0) * 0.01);
}

/*
 * Output and update for atomic system:
 *    '<S267>/debounceResolver'
 *    '<S268>/debounceResolver'
 *    '<S269>/debounceResolver'
 *    '<S270>/debounceResolver'
 *    '<S271>/debounceResolver'
 *    '<S272>/debounceResolver'
 *    '<S273>/debounceResolver'
 *    '<S274>/debounceResolver'
 */
void EVSR24_debounceResolver(RT_MODEL_EVSR24 * const EVSR24_M, boolean_T
  rtu_SM_sw, rtDW_debounceResolver_EVSR24 *localDW)
{
  boolean_T condIsTrue_tmp;
  boolean_T tmp;

  /* '<S275>:8:2' */
  condIsTrue_tmp = !rtu_SM_sw;
  tmp = !condIsTrue_tmp;
  if (tmp || (!localDW->condWasTrueAtLastTimeStep_1)) {
    localDW->durationOperatorLastReferenceTime_1 = ((EVSR24_M->Timing.clockTick0)
      * 0.01);
  }

  localDW->condWasTrueAtLastTimeStep_1 = condIsTrue_tmp;

  /* '<S275>:7:2' */
  if (!localDW->condWasTrueAtLastTimeStep_1_p) {
    localDW->durationOperatorLastReferenceTime_1_j =
      ((EVSR24_M->Timing.clockTick0) * 0.01);
  }

  localDW->condWasTrueAtLastTimeStep_1_p = true;

  /* Chart: '<S267>/debounceResolver' */
  /* Gateway: digitalSwitch/debounceResolver */
  /* During: digitalSwitch/debounceResolver */
  if (localDW->is_active_c3_steeringWheel_lib == 0U) {
    /* Entry: digitalSwitch/debounceResolver */
    localDW->is_active_c3_steeringWheel_lib = 1U;

    /* Entry Internal: digitalSwitch/debounceResolver */
    /* Transition: '<S275>:5' */
    localDW->durationOperatorLastReferenceTime_1_j =
      ((EVSR24_M->Timing.clockTick0) * 0.01);
    localDW->is_c3_steeringWheel_lib = EVSR24_IN_Off;

    /* Entry 'Off': '<S275>:4' */
    /* '<S275>:7:2' */
  } else if (localDW->is_c3_steeringWheel_lib == EVSR24_IN_Off) {
    /* During 'Off': '<S275>:4' */
    /* '<S275>:7:2' */
    if (((EVSR24_M->Timing.clockTick0) * 0.01) -
        localDW->durationOperatorLastReferenceTime_1_j > 0.01) {
      /* Transition: '<S275>:7' */
      /* Exit 'Off': '<S275>:4' */
      localDW->durationOperatorLastReferenceTime_1 =
        ((EVSR24_M->Timing.clockTick0) * 0.01);
      localDW->is_c3_steeringWheel_lib = EVSR24_IN_On;

      /* Entry 'On': '<S275>:6' */
      /* '<S275>:8:2' */
      localDW->condWasTrueAtLastTimeStep_1 = condIsTrue_tmp;
    }
  } else {
    /* During 'On': '<S275>:6' */
    /* '<S275>:8:2' */
    if (tmp || (!localDW->condWasTrueAtLastTimeStep_1)) {
      localDW->durationOperatorLastReferenceTime_1 =
        ((EVSR24_M->Timing.clockTick0) * 0.01);
    }

    localDW->condWasTrueAtLastTimeStep_1 = condIsTrue_tmp;
    if (((EVSR24_M->Timing.clockTick0) * 0.01) -
        localDW->durationOperatorLastReferenceTime_1 > 0.01) {
      /* Transition: '<S275>:8' */
      /* Exit 'On': '<S275>:6' */
      localDW->durationOperatorLastReferenceTime_1_j =
        ((EVSR24_M->Timing.clockTick0) * 0.01);
      localDW->is_c3_steeringWheel_lib = EVSR24_IN_Off;

      /* Entry 'Off': '<S275>:4' */
      /* '<S275>:7:2' */
    }
  }

  /* End of Chart: '<S267>/debounceResolver' */
}

/* System initialize for function-call system: '<Root>/Foreground' */
void EVSR24_Foreground_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in' */

  /* S-Function Block: INPUT5 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in1' */

  /* S-Function Block: INPUT6 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S203>/raptor_analog_in' */

  /* S-Function Block: INPUT3 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S203>/raptor_analog_in1' */

  /* S-Function Block: INPUT4 */
  {
  }

  /* Start for S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in3' */

  /* S-Function Block: INPUT44 */
  {
  }

  /* Start for S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in' */

  /* S-Function Block: INPUT43 */
  {
  }

  /* Start for S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in1' */

  /* S-Function Block: INPUT41 */
  {
  }

  /* Start for S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in2' */

  /* S-Function Block: INPUT42 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S202>/raptor_analog_in' */

  /* S-Function Block: INPUT9 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in' */

  /* S-Function Block: INPUT10 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in1' */

  /* S-Function Block: INPUT11 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in2' */

  /* S-Function Block: INPUT12 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in2' */

  /* S-Function Block: INPUT7 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in3' */

  /* S-Function Block: INPUT8 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in' */

  /* S-Function Block: INPUT13 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in1' */

  /* S-Function Block: INPUT14 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in2' */

  /* S-Function Block: INPUT15 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in3' */

  /* S-Function Block: INPUT16 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S201>/raptor_analog_in' */

  /* S-Function Block: INPUT17 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in' */

  /* S-Function Block: INPUT20 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in1' */

  /* S-Function Block: INPUT21 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in10' */

  /* S-Function Block: INPUT31 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in11' */

  /* S-Function Block: INPUT32 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in2' */

  /* S-Function Block: INPUT22 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in3' */

  /* S-Function Block: INPUT23 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in4' */

  /* S-Function Block: INPUT24 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in5' */

  /* S-Function Block: INPUT25 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in6' */

  /* S-Function Block: INPUT26 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in7' */

  /* S-Function Block: INPUT27 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in8' */

  /* S-Function Block: INPUT28 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in9' */

  /* S-Function Block: INPUT29 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S205>/raptor_analog_in' */

  /* S-Function Block: INPUT18 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in6' */

  /* S-Function Block: INPUT39 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in2' */

  /* S-Function Block: INPUT35 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in3' */

  /* S-Function Block: INPUT36 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in1' */

  /* S-Function Block: INPUT34 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in' */

  /* S-Function Block: INPUT33 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in7' */

  /* S-Function Block: INPUT40 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in5' */

  /* S-Function Block: INPUT38 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in4' */

  /* S-Function Block: INPUT37 */
  {
  }

  /* SystemInitialize for Chart: '<S290>/contactorState' */
  EVSR24_DWork.is_ChargeCircuit = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_DWork.is_PrechargeCircuit = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_DWork.is_active_c3_EVSR24 = 0U;
  EVSR24_DWork.is_c3_EVSR24 = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_B.SM_prechargeState_bool = false;
  EVSR24_B.SM_dischargeState_bool = false;
  EVSR24_B.SM_mainMinusState_bool = false;

  /* InitializeConditions for DiscreteIntegrator: '<S129>/Integrator' */
  EVSR24_DWork.Integrator_PREV_U = 0.0;

  /* SystemInitialize for Chart: '<S267>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver);

  /* SystemInitialize for Chart: '<S268>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_o);

  /* SystemInitialize for Chart: '<S269>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_b);

  /* SystemInitialize for Chart: '<S270>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_bj);

  /* SystemInitialize for Chart: '<S271>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_i);

  /* SystemInitialize for Chart: '<S272>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_j);

  /* SystemInitialize for Chart: '<S273>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_g);

  /* SystemInitialize for Chart: '<S274>/debounceResolver' */
  EVSR24_debounceResolver_Init(&EVSR24_DWork.sf_debounceResolver_ia);

  /* SystemInitialize for Chart: '<S290>/bspcAppsFault' */
  EVSR24_DWork.is_active_c2_EVSR24 = 0U;
  EVSR24_DWork.is_c2_EVSR24 = EVSR24_IN_NO_ACTIVE_CHILD_h;
}

/* System reset for function-call system: '<Root>/Foreground' */
void EVSR24_Foreground_Reset(void)
{
  /* SystemReset for Chart: '<S290>/contactorState' */
  EVSR24_DWork.is_ChargeCircuit = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_DWork.is_PrechargeCircuit = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_DWork.is_active_c3_EVSR24 = 0U;
  EVSR24_DWork.is_c3_EVSR24 = EVSR24_IN_NO_ACTIVE_CHILD_h;
  EVSR24_B.SM_prechargeState_bool = false;
  EVSR24_B.SM_dischargeState_bool = false;
  EVSR24_B.SM_mainMinusState_bool = false;

  /* SystemReset for Chart: '<S267>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver);

  /* SystemReset for Chart: '<S268>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_o);

  /* SystemReset for Chart: '<S269>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_b);

  /* SystemReset for Chart: '<S270>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_bj);

  /* SystemReset for Chart: '<S271>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_i);

  /* SystemReset for Chart: '<S272>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_j);

  /* SystemReset for Chart: '<S273>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_g);

  /* SystemReset for Chart: '<S274>/debounceResolver' */
  EVSR24_debounceResolver_Reset(&EVSR24_DWork.sf_debounceResolver_ia);

  /* SystemReset for Chart: '<S290>/bspcAppsFault' */
  EVSR24_DWork.is_active_c2_EVSR24 = 0U;
  EVSR24_DWork.is_c2_EVSR24 = EVSR24_IN_NO_ACTIVE_CHILD_h;
}

/* Enable for function-call system: '<Root>/Foreground' */
void EVSR24_Foreground_Enable(void)
{
  /* Enable for Chart: '<S290>/contactorState' */
  EVSR24_DWork.durationOperatorLastReferenceTime_1 +=
    ((EVSR24_M->Timing.clockTick0) * 0.01) - EVSR24_DWork.chartDisableTime;

  /* Enable for Chart: '<S267>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver);

  /* Enable for Chart: '<S268>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_o);

  /* Enable for Chart: '<S269>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_b);

  /* Enable for Chart: '<S270>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_bj);

  /* Enable for Chart: '<S271>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_i);

  /* Enable for Chart: '<S272>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_j);

  /* Enable for Chart: '<S273>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_g);

  /* Enable for Chart: '<S274>/debounceResolver' */
  EVSR24_debounceResolver_Enable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_ia);
}

/* Disable for function-call system: '<Root>/Foreground' */
void EVSR24_Foreground_Disable(void)
{
  /* Disable for Chart: '<S290>/contactorState' */
  EVSR24_DWork.chartDisableTime = ((EVSR24_M->Timing.clockTick0) * 0.01);

  /* Disable for Enabled SubSystem: '<S87>/Enabled Subsystem' */
  EVSR24_DWork.EnabledSubsystem_MODE = false;

  /* End of Disable for SubSystem: '<S87>/Enabled Subsystem' */

  /* Disable for Chart: '<S267>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver);

  /* Disable for Chart: '<S268>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_o);

  /* Disable for Chart: '<S269>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_b);

  /* Disable for Chart: '<S270>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_bj);

  /* Disable for Chart: '<S271>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_i);

  /* Disable for Chart: '<S272>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_j);

  /* Disable for Chart: '<S273>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_g);

  /* Disable for Chart: '<S274>/debounceResolver' */
  EVSR24_debounceResolver_Disable(EVSR24_M, &EVSR24_DWork.sf_debounceResolver_ia);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void EVSR24_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_STMM_counterMsg300;
  real_T rtb_STMM_segmentTemp100;
  real_T rtb_STMM_segmentTemp101;
  real_T rtb_STMM_segmentTemp102;
  real_T rtb_STMM_counterMsg301;
  real_T rtb_STMM_segmentTemp103;
  real_T rtb_STMM_segmentTemp104;
  real_T rtb_STMM_segmentTemp105;
  real_T rtb_STMM_counterMsg302;
  real_T rtb_STMM_segmentTemp106;
  real_T rtb_STMM_segmentTemp107;
  real_T rtb_STMM_segmentTemp108;
  real_T rtb_STMM_counterMsg303;
  real_T rtb_STMM_segmentTemp109;
  real_T rtb_STMM_segmentTemp110;
  real_T rtb_STMM_segmentTemp111;
  real_T rtb_STMM_counterMsg308;
  real_T rtb_STMM_segmentTemp300;
  real_T rtb_STMM_segmentTemp301;
  real_T rtb_STMM_segmentTemp302;
  real_T rtb_STMM_counterMsg309;
  real_T rtb_STMM_segmentTemp303;
  real_T rtb_STMM_segmentTemp304;
  real_T rtb_STMM_segmentTemp305;
  real_T rtb_STMM_counterMsg310;
  real_T rtb_STMM_segmentTemp306;
  real_T rtb_STMM_segmentTemp307;
  real_T rtb_STMM_segmentTemp308;
  real_T rtb_STMM_counterMsg311;
  real_T rtb_STMM_segmentTemp309;
  real_T rtb_STMM_segmentTemp310;
  real_T rtb_STMM_segmentTemp311;
  real_T rtb_STMM_counterMsg316;
  real_T rtb_STMM_segmentTemp500;
  real_T rtb_STMM_segmentTemp501;
  real_T rtb_STMM_segmentTemp502;
  real_T rtb_STMM_counterMsg317;
  real_T rtb_STMM_segmentTemp503;
  real_T rtb_STMM_segmentTemp504;
  real_T rtb_STMM_segmentTemp505;
  real_T rtb_STMM_counterMsg318;
  real_T rtb_STMM_segmentTemp506;
  real_T rtb_STMM_segmentTemp507;
  real_T rtb_STMM_segmentTemp508;
  real_T rtb_STMM_counterMsg319;
  real_T rtb_STMM_segmentTemp509;
  real_T rtb_STMM_segmentTemp510;
  real_T rtb_STMM_segmentTemp511;
  real_T rtb_STMM_counterMsg324;
  real_T rtb_STMM_segmentTemp700;
  real_T rtb_STMM_segmentTemp701;
  real_T rtb_STMM_segmentTemp702;
  real_T rtb_STMM_counterMsg325;
  real_T rtb_STMM_segmentTemp703;
  real_T rtb_STMM_segmentTemp704;
  real_T rtb_STMM_segmentTemp705;
  real_T rtb_STMM_counterMsg326;
  real_T rtb_STMM_segmentTemp706;
  real_T rtb_STMM_segmentTemp707;
  real_T rtb_STMM_segmentTemp708;
  real_T rtb_STMM_counterMsg327;
  real_T rtb_STMM_segmentTemp709;
  real_T rtb_STMM_segmentTemp710;
  real_T rtb_STMM_segmentTemp711;
  real_T rtb_STMM_counterMsg304;
  real_T rtb_STMM_segmentTemp200;
  real_T rtb_STMM_segmentTemp201;
  real_T rtb_STMM_segmentTemp202;
  real_T rtb_STMM_counterMsg305;
  real_T rtb_STMM_segmentTemp203;
  real_T rtb_STMM_segmentTemp204;
  real_T rtb_STMM_segmentTemp205;
  real_T rtb_STMM_counterMsg306;
  real_T rtb_STMM_segmentTemp206;
  real_T rtb_STMM_segmentTemp207;
  real_T rtb_STMM_segmentTemp208;
  real_T rtb_STMM_counterMsg307;
  real_T rtb_STMM_segmentTemp209;
  real_T rtb_STMM_segmentTemp210;
  real_T rtb_STMM_segmentTemp211;
  real_T rtb_STMM_counterMsg312;
  real_T rtb_STMM_segmentTemp400;
  real_T rtb_STMM_segmentTemp401;
  real_T rtb_STMM_segmentTemp402;
  real_T rtb_STMM_counterMsg313;
  real_T rtb_STMM_segmentTemp403;
  real_T rtb_STMM_segmentTemp404;
  real_T rtb_STMM_segmentTemp405;
  real_T rtb_STMM_counterMsg314;
  real_T rtb_STMM_segmentTemp406;
  real_T rtb_STMM_segmentTemp407;
  real_T rtb_STMM_segmentTemp408;
  real_T rtb_STMM_counterMsg315;
  real_T rtb_STMM_segmentTemp409;
  real_T rtb_STMM_segmentTemp410;
  real_T rtb_STMM_segmentTemp411;
  real_T rtb_STMM_counterMsg320;
  real_T rtb_STMM_segmentTemp600;
  real_T rtb_STMM_segmentTemp601;
  real_T rtb_STMM_segmentTemp602;
  real_T rtb_STMM_counterMsg321;
  real_T rtb_STMM_segmentTemp603;
  real_T rtb_STMM_segmentTemp604;
  real_T rtb_STMM_segmentTemp605;
  real_T rtb_STMM_counterMsg322;
  real_T rtb_STMM_segmentTemp606;
  real_T rtb_STMM_segmentTemp607;
  real_T rtb_STMM_segmentTemp608;
  real_T rtb_STMM_counterMsg323;
  real_T rtb_STMM_segmentTemp609;
  real_T rtb_STMM_segmentTemp610;
  real_T rtb_STMM_segmentTemp611;
  real_T rtb_STMM_counterMsg328;
  real_T rtb_STMM_segmentTemp800;
  real_T rtb_STMM_segmentTemp801;
  real_T rtb_STMM_segmentTemp802;
  real_T rtb_STMM_counterMsg329;
  real_T rtb_STMM_segmentTemp803;
  real_T rtb_STMM_segmentTemp804;
  real_T rtb_STMM_segmentTemp805;
  real_T rtb_STMM_counterMsg330;
  real_T rtb_STMM_segmentTemp806;
  real_T rtb_STMM_segmentTemp807;
  real_T rtb_STMM_segmentTemp808;
  real_T rtb_STMM_counterMsg331;
  real_T rtb_STMM_segmentTemp809;
  real_T rtb_STMM_segmentTemp810;
  real_T rtb_STMM_segmentTemp811;
  real_T rtb_MM5_ay;
  real_T rtb_MM5_yawRate;
  real_T rtb_raptor_table_interpolate_1d;
  real_T rtb_raptor_table_interpolate_1d_a;
  real_T rtb_raptor_table_interpolate_1d_h;
  real_T rtb_raptor_adjustment_h;
  real_T rtb_raptor_adjustment1_o;
  real_T rtb_raptor_adjustment2_h;
  real_T rtb_raptor_adjustment_ho;
  real_T rtb_raptor_adjustment1_m;
  real_T rtb_raptor_adjustment2_o;
  real_T rtb_MM5_ax;
  real_T rtb_MM5_rollRate;
  real_T rtb_MM5_az;
  real_T rtb_raptor_table_interpolate_2d;
  real_T rtb_raptor_table_interpolate_2d_j;
  real_T rtb_raptor_table_interpolate_2d_p;
  real_T rtb_raptor_table_interpolate_1d_n;
  real_T rtb_raptor_table_interpolate_1d_p;
  real_T rtb_raptor_table_interpolate_1d_m;
  real_T rtb_raptor_table_interpolate_2d_c;
  real_T rtb_raptor_table_interpolate_2d_pv;
  real_T rtb_raptor_table_interpolate_2d_d;
  real_T rtb_raptor_table_interpolate_1d_ps;
  real_T rtb_raptor_table_interpolate_1d_k;
  real_T rtb_raptor_table_interpolate_1d_o;
  real_T rtb_raptor_table_interpolate_2d_n;
  real_T rtb_raptor_table_interpolate_2d_dt;
  real_T rtb_raptor_table_interpolate_2d_b;
  real_T rtb_raptor_adjustment1_b;
  real_T rtb_raptor_table_interpolate_1d_n2;
  real_T rtb_raptor_adjustment_e;
  real_T rtb_raptor_table_interpolate_1d_mp;
  real_T rtb_raptor_table_interpolate_1d_na;
  real_T rtb_raptor_table_interpolate_1d_l;
  real_T rtb_raptor_table_interpolate_1d_f;
  real_T rtb_raptor_table_interpolate_1d_pf;
  real_T rtb_raptor_table_interpolate_1d_lq;
  real_T rtb_raptor_table_interpolate_1d_b;
  real_T rtb_raptor_table_interpolate_1d_bh;
  real_T rtb_raptor_table_interpolate_1d_i;
  real_T rtb_raptor_table_interpolate_1d_oc;
  real_T rtb_raptor_table_interpolate_1d_d;
  real_T rtb_raptor_table_interpolate_1d_my;
  real_T rtb_raptor_table_interpolate_1d_kt;
  real_T rtb_raptor_table_interpolate_1d_it;
  real_T rtb_raptor_table_interpolate_1d_om;
  real_T rtb_raptor_table_interpolate_1d_j;
  real_T rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  real32_T rtb_raptor_table_interpolate_1d_lx;
  real32_T rtb_raptor_adjustment1_d;
  real32_T rtb_raptor_adjustment2_n;
  real32_T rtb_raptor_adjustment3_ob;
  real32_T rtb_raptor_adjustment1_bd;
  real32_T rtb_raptor_adjustment2_b;
  real32_T rtb_raptor_adjustment3_oc;
  real32_T rtb_raptor_adjustment4_ku;
  real32_T rtb_raptor_adjustment5_l1;
  real32_T rtb_raptor_adjustment6_n;
  real32_T rtb_raptor_adjustment1_no;
  real32_T rtb_raptor_adjustment2_m;
  real32_T rtb_raptor_adjustment3_i;
  real32_T rtb_raptor_adjustment4_c;
  real32_T rtb_raptor_adjustment5_b;
  real32_T rtb_raptor_adjustment6_g;
  real32_T rtb_raptor_adjustment1_c0;
  real32_T rtb_raptor_adjustment1_et;
  real32_T rtb_raptor_adjustment6_p;
  real32_T rtb_raptor_adjustment1_hs;
  real32_T rtb_raptor_adjustment6_p2;
  real32_T rtb_raptor_adjustment1_i;
  real32_T rtb_raptor_adjustment6_d;
  real32_T rtb_raptor_adjustment1_dp;
  real32_T rtb_raptor_adjustment6_k;
  real32_T rtb_raptor_adjustment1_l;
  real32_T rtb_raptor_adjustment6_dg;
  real32_T rtb_raptor_adjustment1_lq;
  real32_T rtb_raptor_adjustment6_h;
  real32_T rtb_raptor_adjustment1_la;
  real32_T rtb_raptor_adjustment6_b;
  real32_T rtb_raptor_adjustment1_n2;
  real32_T rtb_raptor_adjustment6_e;
  uint16_T rtb_Age;
  uint16_T rtb_Age_h;
  uint16_T rtb_Age_a;
  uint16_T rtb_Age_aa;
  uint16_T rtb_Age_o;
  uint16_T rtb_Age_d;
  uint16_T rtb_Age_c;
  uint16_T rtb_Age_i;
  uint16_T rtb_Age_b;
  uint16_T rtb_Age_ho;
  uint16_T rtb_Age_k;
  uint16_T rtb_Age_hc;
  uint16_T rtb_Age_g;
  uint16_T rtb_Age_m;
  uint16_T rtb_Age_bt;
  uint16_T rtb_Age_l;
  uint16_T rtb_Age_n;
  uint16_T rtb_Age_ck;
  uint16_T rtb_Age_l0;
  uint16_T rtb_Age_nn;
  uint16_T rtb_Age_j;
  uint16_T rtb_Age_e;
  uint16_T rtb_Age_ac;
  uint16_T rtb_Age_d3;
  uint16_T rtb_Age_k3;
  uint16_T rtb_Age_az;
  uint16_T rtb_Age_l5;
  uint16_T rtb_Age_dy;
  uint16_T rtb_Age_bu;
  uint16_T rtb_Age_ic;
  uint16_T rtb_Age_ih;
  uint16_T rtb_Age_kb;
  uint16_T rtb_Age_p;
  uint16_T rtb_raptor_analog_in;
  uint16_T rtb_raptor_analog_in_h;
  uint16_T rtb_Age_dj;
  uint16_T rtb_Age_kbp;
  uint16_T rtb_Age_h2;
  uint16_T rtb_Age_dx;
  uint16_T rtb_Age_j2;
  uint16_T rtb_Age_bw;
  uint16_T rtb_Age_c4;
  uint16_T rtb_Age_lg;
  uint16_T rtb_Age_f;
  uint16_T rtb_Age_p1;
  uint16_T rtb_Age_an;
  uint16_T rtb_Age_g1;
  uint16_T rtb_Age_ckg;
  uint16_T rtb_Age_aw;
  uint16_T rtb_Age_dyv;
  uint16_T rtb_Age_dp;
  uint16_T rtb_Age_dl;
  uint16_T rtb_Age_ae;
  uint16_T rtb_Age_m1;
  uint16_T rtb_Age_l4;
  uint16_T rtb_Age_hf;
  uint16_T rtb_Age_ob;
  uint16_T rtb_Age_kw;
  uint16_T rtb_Age_d0;
  uint16_T rtb_Age_bm;
  uint16_T rtb_Age_cx;
  uint16_T rtb_Age_ot;
  uint16_T rtb_Age_mx;
  uint16_T rtb_Age_kc;
  uint16_T rtb_Age_n4;
  uint16_T rtb_Age_lj;
  uint16_T rtb_Age_mi;
  uint16_T rtb_Age_j5;
  uint16_T rtb_Age_a5;
  uint16_T rtb_Age_ek;
  uint16_T rtb_Age_o2;
  uint16_T rtb_Age_ic5;
  uint16_T rtb_Age_lz;
  uint16_T rtb_Age_ch;
  uint16_T rtb_Age_bi;
  uint16_T rtb_Age_du;
  uint16_T rtb_Age_kz;
  uint16_T rtb_Age_gj;
  uint16_T rtb_Age_b4;
  uint16_T rtb_Age_oq;
  uint16_T rtb_Age_d5;
  uint16_T rtb_Age_nu;
  uint16_T rtb_Age_gv;
  uint16_T rtb_Age_py;
  uint16_T rtb_Age_is;
  uint16_T rtb_Age_dd;
  uint16_T rtb_Age_fw;
  uint16_T rtb_Age_db;
  uint16_T rtb_Age_ed;
  boolean_T rtb_raptor_adjustment2_l;
  boolean_T rtb_raptor_adjustment2_d;
  boolean_T rtb_raptor_adjustment2_j;
  boolean_T rtb_raptor_adjustment2_e;
  boolean_T rtb_raptor_adjustment2_nz;
  boolean_T rtb_raptor_adjustment2_o1;
  boolean_T rtb_raptor_adjustment2_el;
  boolean_T rtb_raptor_adjustment2_ni;
  boolean_T rtb_raptor_adjustment2_ji;
  boolean_T rtb_raptor_adjustment2_o4;
  boolean_T rtb_raptor_adjustment2_i;
  boolean_T rtb_raptor_adjustment2_gz;
  boolean_T rtb_raptor_adjustment2_na;
  boolean_T rtb_raptor_adjustment2_cl;
  boolean_T rtb_raptor_adjustment2_do;
  boolean_T rtb_raptor_adjustment2_nq;
  boolean_T rtb_raptor_digital_in6;
  boolean_T rtb_raptor_digital_in2;
  boolean_T rtb_raptor_digital_in3;
  boolean_T rtb_raptor_digital_in1;
  boolean_T rtb_raptor_digital_in_b;
  boolean_T rtb_raptor_digital_in7;
  boolean_T rtb_raptor_digital_in5;
  boolean_T rtb_raptor_digital_in4;
  boolean_T rtb_raptor_adjustment1_ab;
  real_T Integrator;
  real_T rtb_DataTypeConversion;
  real_T rtb_DataTypeConversion2;
  real_T rtb_DataTypeConversion2_d;
  real_T rtb_DataTypeConversion2_e;
  real_T rtb_DataTypeConversion2_i;
  real_T rtb_DerivativeGain;
  real_T rtb_IN_brakePos_pct;
  real_T rtb_IN_brakePos_pct_n;
  real_T rtb_IN_throttlePos_deg_f;
  real_T rtb_IN_throttlePos_pct;
  real_T rtb_IN_throttlePos_pct_d;
  real_T rtb_Max;
  real_T rtb_Subtract;
  real_T rtb_Sum;
  real_T rtb_Switch2_fj;
  int32_T tmp;
  real32_T rtb_DATA_maxMotorTorque_Nm;
  real32_T rtb_DataTypeConversion_b_tmp_tmp;
  real32_T rtb_DataTypeConversion_j;
  real32_T rtb_DataTypeConversion_kr_tmp_tmp;
  real32_T rtb_DataTypeConversion_m;
  real32_T rtb_IN_frontLeftWheelSpeed_revolutionsPerMin;
  real32_T rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_o;
  real32_T rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_ou;
  real32_T rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p;
  real32_T rtb_raptor_adjustment1_p;
  real32_T rtb_raptor_adjustment_no;
  real32_T rtb_raptor_data_read_b;
  uint32_T rtb_MultiportSwitch;
  uint32_T rtb_MultiportSwitch_ag;
  uint32_T rtb_MultiportSwitch_bx;
  uint32_T rtb_MultiportSwitch_i;
  uint32_T rtb_MultiportSwitch_j;
  uint32_T rtb_MultiportSwitch_jf;
  uint32_T rtb_MultiportSwitch_k;
  uint32_T rtb_MultiportSwitch_m;
  uint32_T rtb_MultiportSwitch_nj;
  uint32_T rtb_MultiportSwitch_ov;
  uint32_T rtb_MultiportSwitch_pp;
  uint32_T rtb_MultiportSwitch_ps;
  uint32_T rtb_Sum_a;
  uint32_T rtb_Sum_h;
  uint32_T rtb_Sum_ip;
  uint32_T rtb_Sum_j;
  uint32_T rtb_Sum_jt;
  uint32_T rtb_Sum_k;
  uint32_T rtb_Sum_ps;
  uint32_T rtb_UnitDelay_o;
  uint16_T rtb_raptor_analog_in1;
  uint16_T rtb_raptor_analog_in10;
  uint16_T rtb_raptor_analog_in11;
  uint16_T rtb_raptor_analog_in2;
  uint16_T rtb_raptor_analog_in3;
  uint16_T rtb_raptor_analog_in4;
  uint16_T rtb_raptor_analog_in5;
  uint16_T rtb_raptor_analog_in6;
  uint16_T rtb_raptor_analog_in7;
  uint16_T rtb_raptor_analog_in8;
  uint16_T rtb_raptor_analog_in9;
  uint16_T rtb_raptor_analog_in_f;
  boolean_T rtb_IN_breakeVoltHigh_bool_j;
  boolean_T rtb_IN_errorBrake_bool;
  boolean_T rtb_IN_frontLeftHallEffectHigh_bool;
  boolean_T rtb_IN_frontLeftHallEffectLow_bool;
  boolean_T rtb_RelationalOperator_c;
  boolean_T rtb_RelationalOperator_d;
  boolean_T rtb_RelationalOperator_dd;
  boolean_T rtb_RelationalOperator_f;
  boolean_T rtb_RelationalOperator_fy;
  boolean_T rtb_RelationalOperator_h;
  boolean_T rtb_RelationalOperator_he;
  boolean_T rtb_RelationalOperator_hw;
  boolean_T rtb_RelationalOperator_ii;
  boolean_T rtb_RelationalOperator_j;
  boolean_T rtb_RelationalOperator_jz;
  boolean_T rtb_RelationalOperator_l;
  boolean_T rtb_RelationalOperator_o;

  /* Sum: '<S31>/Sum' incorporates:
   *  UnitDelay: '<S31>/Unit Delay'
   */
  rtb_Sum_ps = EVSR24_DWork.UnitDelay_DSTATE_b + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_b + 1U < 1U) {
    rtb_Sum_ps = MAX_uint32_T;
  }

  /* RelationalOperator: '<S31>/Relational Operator' incorporates:
   *  Sum: '<S31>/Sum'
   */
  rtb_RelationalOperator_d = (EVSR24_ConstB.DataTypeConversion_f <= rtb_Sum_ps);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg33' */

  /* S-Function Block:<S265>/raptor_can_rxmsg33 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9185__0001(&rtb_Age, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg300  */
    {
      uint32_T tSTMM_counterMsg300 ;
      tSTMM_counterMsg300 = 0;
      tSTMM_counterMsg300 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg300 = (((real_T) tSTMM_counterMsg300 ) );
    }

    /* Signal: STMM_segmentTemp100 */
    {
      uint32_T tSTMM_segmentTemp100;
      tSTMM_segmentTemp100 = 0;
      tSTMM_segmentTemp100 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp100 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp100 & 32768)
        tSTMM_segmentTemp100 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp100 = (((real_T) ((int32_T) tSTMM_segmentTemp100) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp101 */
    {
      uint32_T tSTMM_segmentTemp101;
      tSTMM_segmentTemp101 = 0;
      tSTMM_segmentTemp101 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp101 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp101 & 32768)
        tSTMM_segmentTemp101 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp101 = (((real_T) ((int32_T) tSTMM_segmentTemp101) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp102 */
    {
      uint32_T tSTMM_segmentTemp102;
      tSTMM_segmentTemp102 = 0;
      tSTMM_segmentTemp102 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp102 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp102 & 32768)
        tSTMM_segmentTemp102 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp102 = (((real_T) ((int32_T) tSTMM_segmentTemp102) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg1' */

  /* S-Function Block:<S265>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9160__0001(&rtb_Age_h, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg301  */
    {
      uint32_T tSTMM_counterMsg301 ;
      tSTMM_counterMsg301 = 0;
      tSTMM_counterMsg301 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg301 = (((real_T) tSTMM_counterMsg301 ) );
    }

    /* Signal: STMM_segmentTemp103 */
    {
      uint32_T tSTMM_segmentTemp103;
      tSTMM_segmentTemp103 = 0;
      tSTMM_segmentTemp103 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp103 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp103 & 32768)
        tSTMM_segmentTemp103 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp103 = (((real_T) ((int32_T) tSTMM_segmentTemp103) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp104 */
    {
      uint32_T tSTMM_segmentTemp104;
      tSTMM_segmentTemp104 = 0;
      tSTMM_segmentTemp104 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp104 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp104 & 32768)
        tSTMM_segmentTemp104 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp104 = (((real_T) ((int32_T) tSTMM_segmentTemp104) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp105 */
    {
      uint32_T tSTMM_segmentTemp105;
      tSTMM_segmentTemp105 = 0;
      tSTMM_segmentTemp105 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp105 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp105 & 32768)
        tSTMM_segmentTemp105 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp105 = (((real_T) ((int32_T) tSTMM_segmentTemp105) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg6' */

  /* S-Function Block:<S265>/raptor_can_rxmsg6 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9188__0001(&rtb_Age_a, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg302  */
    {
      uint32_T tSTMM_counterMsg302 ;
      tSTMM_counterMsg302 = 0;
      tSTMM_counterMsg302 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg302 = (((real_T) tSTMM_counterMsg302 ) );
    }

    /* Signal: STMM_segmentTemp106 */
    {
      uint32_T tSTMM_segmentTemp106;
      tSTMM_segmentTemp106 = 0;
      tSTMM_segmentTemp106 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp106 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp106 & 32768)
        tSTMM_segmentTemp106 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp106 = (((real_T) ((int32_T) tSTMM_segmentTemp106) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp107 */
    {
      uint32_T tSTMM_segmentTemp107;
      tSTMM_segmentTemp107 = 0;
      tSTMM_segmentTemp107 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp107 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp107 & 32768)
        tSTMM_segmentTemp107 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp107 = (((real_T) ((int32_T) tSTMM_segmentTemp107) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp108 */
    {
      uint32_T tSTMM_segmentTemp108;
      tSTMM_segmentTemp108 = 0;
      tSTMM_segmentTemp108 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp108 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp108 & 32768)
        tSTMM_segmentTemp108 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp108 = (((real_T) ((int32_T) tSTMM_segmentTemp108) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg10' */

  /* S-Function Block:<S265>/raptor_can_rxmsg10 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9161__0001(&rtb_Age_aa, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg303  */
    {
      uint32_T tSTMM_counterMsg303 ;
      tSTMM_counterMsg303 = 0;
      tSTMM_counterMsg303 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg303 = (((real_T) tSTMM_counterMsg303 ) );
    }

    /* Signal: STMM_segmentTemp109 */
    {
      uint32_T tSTMM_segmentTemp109;
      tSTMM_segmentTemp109 = 0;
      tSTMM_segmentTemp109 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp109 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp109 & 32768)
        tSTMM_segmentTemp109 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp109 = (((real_T) ((int32_T) tSTMM_segmentTemp109) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp110 */
    {
      uint32_T tSTMM_segmentTemp110;
      tSTMM_segmentTemp110 = 0;
      tSTMM_segmentTemp110 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp110 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp110 & 32768)
        tSTMM_segmentTemp110 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp110 = (((real_T) ((int32_T) tSTMM_segmentTemp110) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp111 */
    {
      uint32_T tSTMM_segmentTemp111;
      tSTMM_segmentTemp111 = 0;
      tSTMM_segmentTemp111 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp111 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp111 & 32768)
        tSTMM_segmentTemp111 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp111 = (((real_T) ((int32_T) tSTMM_segmentTemp111) /
        (real_T) 10.0) );
    }
  }

  /* Chart: '<S290>/contactorState' */
  /* '<S293>:90:2' */
  EVSR24_DWork.durationOperatorLastReferenceTime_1 =
    ((EVSR24_M->Timing.clockTick0) * 0.01);

  /* Gateway: Foreground/Outputs/stateMachine/controlStates/contactorState */
  /* During: Foreground/Outputs/stateMachine/controlStates/contactorState */
  if (EVSR24_DWork.is_active_c3_EVSR24 == 0U) {
    /* Entry: Foreground/Outputs/stateMachine/controlStates/contactorState */
    EVSR24_DWork.is_active_c3_EVSR24 = 1U;

    /* Entry Internal: Foreground/Outputs/stateMachine/controlStates/contactorState */
    /* Transition: '<S293>:117' */
    EVSR24_DWork.is_c3_EVSR24 = EVSR24_IN_PrechargeCircuit;

    /* Entry Internal 'PrechargeCircuit': '<S293>:87' */
    /* Transition: '<S293>:97' */
    EVSR24_DWork.is_PrechargeCircuit = EVSR24_IN_PrechargeOpen;

    /* Entry 'PrechargeOpen': '<S293>:92' */
    EVSR24_B.SM_prechargeState_bool = false;
    EVSR24_B.SM_mainMinusState_bool = false;
    EVSR24_B.SM_dischargeState_bool = false;
  } else {
    switch (EVSR24_DWork.is_c3_EVSR24) {
     case EVSR24_IN_ChargeCircuit:
      /* During 'ChargeCircuit': '<S293>:79' */
      if (EVSR24_DWork.is_ChargeCircuit == EVSR24_IN_Charging) {
        /* During 'Charging': '<S293>:84' */
        /* Transition: '<S293>:86' */
        EVSR24_DWork.is_ChargeCircuit = EVSR24_IN_ChargingStandby;
      } else {
        /* During 'ChargingStandby': '<S293>:81' */
      }
      break;

     case EVSR24_IN_PrechargeCircuit:
      /* During 'PrechargeCircuit': '<S293>:87' */
      /* Transition: '<S293>:152' */
      /* Exit Internal 'PrechargeCircuit': '<S293>:87' */
      EVSR24_DWork.is_PrechargeCircuit = EVSR24_IN_NO_ACTIVE_CHILD_h;
      EVSR24_DWork.is_c3_EVSR24 = EVSR24_IN_ChargeCircuit;

      /* Entry 'ChargeCircuit': '<S293>:79' */
      /* Entry Internal 'ChargeCircuit': '<S293>:79' */
      /* Transition: '<S293>:82' */
      EVSR24_DWork.is_ChargeCircuit = EVSR24_IN_ChargingStandby;
      break;

     default:
      /* During 'ReadyToDrive': '<S293>:118' */
      /* Transition: '<S293>:155' */
      /* Exit Internal 'ReadyToDrive': '<S293>:118' */
      /* Exit 'ReadyToDrive': '<S293>:118' */
      EVSR24_DWork.is_c3_EVSR24 = EVSR24_IN_PrechargeCircuit;

      /* Entry Internal 'PrechargeCircuit': '<S293>:87' */
      /* Transition: '<S293>:97' */
      EVSR24_DWork.is_PrechargeCircuit = EVSR24_IN_PrechargeOpen;

      /* Entry 'PrechargeOpen': '<S293>:92' */
      EVSR24_B.SM_prechargeState_bool = false;
      EVSR24_B.SM_mainMinusState_bool = false;
      EVSR24_B.SM_dischargeState_bool = false;
      break;
    }
  }

  /* End of Chart: '<S290>/contactorState' */

  /* Outputs for Enabled SubSystem: '<S31>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S71>/Enable'
   */
  if (rtb_RelationalOperator_d) {
    /* S-Function (fcgen): '<S71>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty'
     */
    /* MinMax: '<S16>/Max' */
    if ((rtb_STMM_segmentTemp100 >= rtb_STMM_segmentTemp101) || rtIsNaN
        (rtb_STMM_segmentTemp101)) {
      rtb_Max = rtb_STMM_segmentTemp100;
    } else {
      rtb_Max = rtb_STMM_segmentTemp101;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp102)) && (!rtIsNaN
         (rtb_STMM_segmentTemp102))) {
      rtb_Max = rtb_STMM_segmentTemp102;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp103)) && (!rtIsNaN
         (rtb_STMM_segmentTemp103))) {
      rtb_Max = rtb_STMM_segmentTemp103;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp104)) && (!rtIsNaN
         (rtb_STMM_segmentTemp104))) {
      rtb_Max = rtb_STMM_segmentTemp104;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp105)) && (!rtIsNaN
         (rtb_STMM_segmentTemp105))) {
      rtb_Max = rtb_STMM_segmentTemp105;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp106)) && (!rtIsNaN
         (rtb_STMM_segmentTemp106))) {
      rtb_Max = rtb_STMM_segmentTemp106;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp107)) && (!rtIsNaN
         (rtb_STMM_segmentTemp107))) {
      rtb_Max = rtb_STMM_segmentTemp107;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp108)) && (!rtIsNaN
         (rtb_STMM_segmentTemp108))) {
      rtb_Max = rtb_STMM_segmentTemp108;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp109)) && (!rtIsNaN
         (rtb_STMM_segmentTemp109))) {
      rtb_Max = rtb_STMM_segmentTemp109;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp110)) && (!rtIsNaN
         (rtb_STMM_segmentTemp110))) {
      rtb_Max = rtb_STMM_segmentTemp110;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp111)) && (!rtIsNaN
         (rtb_STMM_segmentTemp111))) {
      rtb_Max = rtb_STMM_segmentTemp111;
    }

    /* End of MinMax: '<S16>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S16>/raptor_adjustment1' */
    rtb_raptor_adjustment1_et = (CTRL_upperThreshCellSeg1LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S16>/raptor_adjustment6' */
    rtb_raptor_adjustment6_p = (CTRL_upperThreshCellSeg1HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S34>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_mf = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment1TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_mf);
      }

      idx = 0;
      CTRL_cellSegment1TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S34>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_mp = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_mf, CTRL_cellSegment1TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment1TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_mf;
    }

    /* S-Function (raptor_sfun_table_axis): '<S35>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_o = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment1TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_o);
      }

      idx = 0;
      CTRL_cellSegment1TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S35>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_na = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_o, CTRL_cellSegment1TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment1TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_o;
    }

    /* End of Outputs for S-Function (fcgen): '<S71>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S31>/Enabled Subsystem' */

  /* Sum: '<S30>/Sum' incorporates:
   *  UnitDelay: '<S30>/Unit Delay'
   */
  rtb_MultiportSwitch_ov = EVSR24_DWork.UnitDelay_DSTATE_a + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_a + 1U < 1U) {
    rtb_MultiportSwitch_ov = MAX_uint32_T;
  }

  /* RelationalOperator: '<S30>/Relational Operator' incorporates:
   *  Sum: '<S30>/Sum'
   */
  rtb_RelationalOperator_f = (EVSR24_ConstB.DataTypeConversion_db <=
    rtb_MultiportSwitch_ov);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg7' */

  /* S-Function Block:<S265>/raptor_can_rxmsg7 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9189__0001(&rtb_Age_o, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg308  */
    {
      uint32_T tSTMM_counterMsg308 ;
      tSTMM_counterMsg308 = 0;
      tSTMM_counterMsg308 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg308 = (((real_T) tSTMM_counterMsg308 ) );
    }

    /* Signal: STMM_segmentTemp300 */
    {
      uint32_T tSTMM_segmentTemp300;
      tSTMM_segmentTemp300 = 0;
      tSTMM_segmentTemp300 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp300 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp300 & 32768)
        tSTMM_segmentTemp300 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp300 = (((real_T) ((int32_T) tSTMM_segmentTemp300) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp301 */
    {
      uint32_T tSTMM_segmentTemp301;
      tSTMM_segmentTemp301 = 0;
      tSTMM_segmentTemp301 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp301 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp301 & 32768)
        tSTMM_segmentTemp301 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp301 = (((real_T) ((int32_T) tSTMM_segmentTemp301) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp302 */
    {
      uint32_T tSTMM_segmentTemp302;
      tSTMM_segmentTemp302 = 0;
      tSTMM_segmentTemp302 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp302 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp302 & 32768)
        tSTMM_segmentTemp302 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp302 = (((real_T) ((int32_T) tSTMM_segmentTemp302) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg8' */

  /* S-Function Block:<S265>/raptor_can_rxmsg8 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9190__0001(&rtb_Age_d, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg309  */
    {
      uint32_T tSTMM_counterMsg309 ;
      tSTMM_counterMsg309 = 0;
      tSTMM_counterMsg309 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg309 = (((real_T) tSTMM_counterMsg309 ) );
    }

    /* Signal: STMM_segmentTemp303 */
    {
      uint32_T tSTMM_segmentTemp303;
      tSTMM_segmentTemp303 = 0;
      tSTMM_segmentTemp303 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp303 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp303 & 32768)
        tSTMM_segmentTemp303 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp303 = (((real_T) ((int32_T) tSTMM_segmentTemp303) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp304 */
    {
      uint32_T tSTMM_segmentTemp304;
      tSTMM_segmentTemp304 = 0;
      tSTMM_segmentTemp304 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp304 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp304 & 32768)
        tSTMM_segmentTemp304 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp304 = (((real_T) ((int32_T) tSTMM_segmentTemp304) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp305 */
    {
      uint32_T tSTMM_segmentTemp305;
      tSTMM_segmentTemp305 = 0;
      tSTMM_segmentTemp305 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp305 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp305 & 32768)
        tSTMM_segmentTemp305 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp305 = (((real_T) ((int32_T) tSTMM_segmentTemp305) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg9' */

  /* S-Function Block:<S265>/raptor_can_rxmsg9 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9191__0001(&rtb_Age_c, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg310  */
    {
      uint32_T tSTMM_counterMsg310 ;
      tSTMM_counterMsg310 = 0;
      tSTMM_counterMsg310 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg310 = (((real_T) tSTMM_counterMsg310 ) );
    }

    /* Signal: STMM_segmentTemp306 */
    {
      uint32_T tSTMM_segmentTemp306;
      tSTMM_segmentTemp306 = 0;
      tSTMM_segmentTemp306 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp306 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp306 & 32768)
        tSTMM_segmentTemp306 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp306 = (((real_T) ((int32_T) tSTMM_segmentTemp306) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp307 */
    {
      uint32_T tSTMM_segmentTemp307;
      tSTMM_segmentTemp307 = 0;
      tSTMM_segmentTemp307 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp307 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp307 & 32768)
        tSTMM_segmentTemp307 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp307 = (((real_T) ((int32_T) tSTMM_segmentTemp307) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp308 */
    {
      uint32_T tSTMM_segmentTemp308;
      tSTMM_segmentTemp308 = 0;
      tSTMM_segmentTemp308 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp308 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp308 & 32768)
        tSTMM_segmentTemp308 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp308 = (((real_T) ((int32_T) tSTMM_segmentTemp308) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg11' */

  /* S-Function Block:<S265>/raptor_can_rxmsg11 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9162__0001(&rtb_Age_i, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg311  */
    {
      uint32_T tSTMM_counterMsg311 ;
      tSTMM_counterMsg311 = 0;
      tSTMM_counterMsg311 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg311 = (((real_T) tSTMM_counterMsg311 ) );
    }

    /* Signal: STMM_segmentTemp309 */
    {
      uint32_T tSTMM_segmentTemp309;
      tSTMM_segmentTemp309 = 0;
      tSTMM_segmentTemp309 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp309 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp309 & 32768)
        tSTMM_segmentTemp309 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp309 = (((real_T) ((int32_T) tSTMM_segmentTemp309) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp310 */
    {
      uint32_T tSTMM_segmentTemp310;
      tSTMM_segmentTemp310 = 0;
      tSTMM_segmentTemp310 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp310 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp310 & 32768)
        tSTMM_segmentTemp310 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp310 = (((real_T) ((int32_T) tSTMM_segmentTemp310) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp311 */
    {
      uint32_T tSTMM_segmentTemp311;
      tSTMM_segmentTemp311 = 0;
      tSTMM_segmentTemp311 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp311 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp311 & 32768)
        tSTMM_segmentTemp311 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp311 = (((real_T) ((int32_T) tSTMM_segmentTemp311) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S30>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  if (rtb_RelationalOperator_f) {
    /* S-Function (fcgen): '<S70>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty1'
     */
    /* MinMax: '<S17>/Max' */
    if ((rtb_STMM_segmentTemp300 >= rtb_STMM_segmentTemp301) || rtIsNaN
        (rtb_STMM_segmentTemp301)) {
      rtb_Max = rtb_STMM_segmentTemp300;
    } else {
      rtb_Max = rtb_STMM_segmentTemp301;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp302)) && (!rtIsNaN
         (rtb_STMM_segmentTemp302))) {
      rtb_Max = rtb_STMM_segmentTemp302;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp303)) && (!rtIsNaN
         (rtb_STMM_segmentTemp303))) {
      rtb_Max = rtb_STMM_segmentTemp303;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp304)) && (!rtIsNaN
         (rtb_STMM_segmentTemp304))) {
      rtb_Max = rtb_STMM_segmentTemp304;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp305)) && (!rtIsNaN
         (rtb_STMM_segmentTemp305))) {
      rtb_Max = rtb_STMM_segmentTemp305;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp306)) && (!rtIsNaN
         (rtb_STMM_segmentTemp306))) {
      rtb_Max = rtb_STMM_segmentTemp306;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp307)) && (!rtIsNaN
         (rtb_STMM_segmentTemp307))) {
      rtb_Max = rtb_STMM_segmentTemp307;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp308)) && (!rtIsNaN
         (rtb_STMM_segmentTemp308))) {
      rtb_Max = rtb_STMM_segmentTemp308;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp309)) && (!rtIsNaN
         (rtb_STMM_segmentTemp309))) {
      rtb_Max = rtb_STMM_segmentTemp309;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp310)) && (!rtIsNaN
         (rtb_STMM_segmentTemp310))) {
      rtb_Max = rtb_STMM_segmentTemp310;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp311)) && (!rtIsNaN
         (rtb_STMM_segmentTemp311))) {
      rtb_Max = rtb_STMM_segmentTemp311;
    }

    /* End of MinMax: '<S17>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S17>/raptor_adjustment1' */
    rtb_raptor_adjustment1_hs = (CTRL_upperThreshCellSeg3LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S17>/raptor_adjustment6' */
    rtb_raptor_adjustment6_p2 = (CTRL_upperThreshCellSeg3HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S38>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_bw = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment3TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_bw);
      }

      idx = 0;
      CTRL_cellSegment3TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S38>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_l = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_bw, CTRL_cellSegment3TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment3TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_bw;
    }

    /* S-Function (raptor_sfun_table_axis): '<S39>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_nz = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment3TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_nz);
      }

      idx = 0;
      CTRL_cellSegment3TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S39>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_f = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_nz, CTRL_cellSegment3TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment3TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_nz;
    }

    /* End of Outputs for S-Function (fcgen): '<S70>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S30>/Enabled Subsystem' */

  /* Sum: '<S29>/Sum' incorporates:
   *  UnitDelay: '<S29>/Unit Delay'
   */
  rtb_MultiportSwitch_ps = EVSR24_DWork.UnitDelay_DSTATE_i + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_i + 1U < 1U) {
    rtb_MultiportSwitch_ps = MAX_uint32_T;
  }

  /* RelationalOperator: '<S29>/Relational Operator' incorporates:
   *  Sum: '<S29>/Sum'
   */
  rtb_RelationalOperator_jz = (EVSR24_ConstB.DataTypeConversion_g <=
    rtb_MultiportSwitch_ps);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg16' */

  /* S-Function Block:<S265>/raptor_can_rxmsg16 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9167__0001(&rtb_Age_b, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg316  */
    {
      uint32_T tSTMM_counterMsg316 ;
      tSTMM_counterMsg316 = 0;
      tSTMM_counterMsg316 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg316 = (((real_T) tSTMM_counterMsg316 ) );
    }

    /* Signal: STMM_segmentTemp500 */
    {
      uint32_T tSTMM_segmentTemp500;
      tSTMM_segmentTemp500 = 0;
      tSTMM_segmentTemp500 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp500 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp500 & 32768)
        tSTMM_segmentTemp500 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp500 = (((real_T) ((int32_T) tSTMM_segmentTemp500) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp501 */
    {
      uint32_T tSTMM_segmentTemp501;
      tSTMM_segmentTemp501 = 0;
      tSTMM_segmentTemp501 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp501 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp501 & 32768)
        tSTMM_segmentTemp501 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp501 = (((real_T) ((int32_T) tSTMM_segmentTemp501) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp502 */
    {
      uint32_T tSTMM_segmentTemp502;
      tSTMM_segmentTemp502 = 0;
      tSTMM_segmentTemp502 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp502 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp502 & 32768)
        tSTMM_segmentTemp502 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp502 = (((real_T) ((int32_T) tSTMM_segmentTemp502) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg17' */

  /* S-Function Block:<S265>/raptor_can_rxmsg17 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9168__0001(&rtb_Age_ho, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg317  */
    {
      uint32_T tSTMM_counterMsg317 ;
      tSTMM_counterMsg317 = 0;
      tSTMM_counterMsg317 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg317 = (((real_T) tSTMM_counterMsg317 ) );
    }

    /* Signal: STMM_segmentTemp503 */
    {
      uint32_T tSTMM_segmentTemp503;
      tSTMM_segmentTemp503 = 0;
      tSTMM_segmentTemp503 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp503 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp503 & 32768)
        tSTMM_segmentTemp503 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp503 = (((real_T) ((int32_T) tSTMM_segmentTemp503) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp504 */
    {
      uint32_T tSTMM_segmentTemp504;
      tSTMM_segmentTemp504 = 0;
      tSTMM_segmentTemp504 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp504 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp504 & 32768)
        tSTMM_segmentTemp504 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp504 = (((real_T) ((int32_T) tSTMM_segmentTemp504) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp505 */
    {
      uint32_T tSTMM_segmentTemp505;
      tSTMM_segmentTemp505 = 0;
      tSTMM_segmentTemp505 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp505 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp505 & 32768)
        tSTMM_segmentTemp505 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp505 = (((real_T) ((int32_T) tSTMM_segmentTemp505) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg18' */

  /* S-Function Block:<S265>/raptor_can_rxmsg18 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9169__0001(&rtb_Age_k, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg318  */
    {
      uint32_T tSTMM_counterMsg318 ;
      tSTMM_counterMsg318 = 0;
      tSTMM_counterMsg318 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg318 = (((real_T) tSTMM_counterMsg318 ) );
    }

    /* Signal: STMM_segmentTemp506 */
    {
      uint32_T tSTMM_segmentTemp506;
      tSTMM_segmentTemp506 = 0;
      tSTMM_segmentTemp506 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp506 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp506 & 32768)
        tSTMM_segmentTemp506 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp506 = (((real_T) ((int32_T) tSTMM_segmentTemp506) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp507 */
    {
      uint32_T tSTMM_segmentTemp507;
      tSTMM_segmentTemp507 = 0;
      tSTMM_segmentTemp507 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp507 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp507 & 32768)
        tSTMM_segmentTemp507 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp507 = (((real_T) ((int32_T) tSTMM_segmentTemp507) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp508 */
    {
      uint32_T tSTMM_segmentTemp508;
      tSTMM_segmentTemp508 = 0;
      tSTMM_segmentTemp508 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp508 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp508 & 32768)
        tSTMM_segmentTemp508 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp508 = (((real_T) ((int32_T) tSTMM_segmentTemp508) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg19' */

  /* S-Function Block:<S265>/raptor_can_rxmsg19 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9170__0001(&rtb_Age_hc, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg319  */
    {
      uint32_T tSTMM_counterMsg319 ;
      tSTMM_counterMsg319 = 0;
      tSTMM_counterMsg319 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg319 = (((real_T) tSTMM_counterMsg319 ) );
    }

    /* Signal: STMM_segmentTemp509 */
    {
      uint32_T tSTMM_segmentTemp509;
      tSTMM_segmentTemp509 = 0;
      tSTMM_segmentTemp509 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp509 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp509 & 32768)
        tSTMM_segmentTemp509 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp509 = (((real_T) ((int32_T) tSTMM_segmentTemp509) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp510 */
    {
      uint32_T tSTMM_segmentTemp510;
      tSTMM_segmentTemp510 = 0;
      tSTMM_segmentTemp510 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp510 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp510 & 32768)
        tSTMM_segmentTemp510 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp510 = (((real_T) ((int32_T) tSTMM_segmentTemp510) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp511 */
    {
      uint32_T tSTMM_segmentTemp511;
      tSTMM_segmentTemp511 = 0;
      tSTMM_segmentTemp511 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp511 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp511 & 32768)
        tSTMM_segmentTemp511 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp511 = (((real_T) ((int32_T) tSTMM_segmentTemp511) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S29>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  if (rtb_RelationalOperator_jz) {
    /* S-Function (fcgen): '<S69>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty2'
     */
    /* MinMax: '<S18>/Max' */
    if ((rtb_STMM_segmentTemp500 >= rtb_STMM_segmentTemp501) || rtIsNaN
        (rtb_STMM_segmentTemp501)) {
      rtb_Max = rtb_STMM_segmentTemp500;
    } else {
      rtb_Max = rtb_STMM_segmentTemp501;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp502)) && (!rtIsNaN
         (rtb_STMM_segmentTemp502))) {
      rtb_Max = rtb_STMM_segmentTemp502;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp503)) && (!rtIsNaN
         (rtb_STMM_segmentTemp503))) {
      rtb_Max = rtb_STMM_segmentTemp503;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp504)) && (!rtIsNaN
         (rtb_STMM_segmentTemp504))) {
      rtb_Max = rtb_STMM_segmentTemp504;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp505)) && (!rtIsNaN
         (rtb_STMM_segmentTemp505))) {
      rtb_Max = rtb_STMM_segmentTemp505;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp506)) && (!rtIsNaN
         (rtb_STMM_segmentTemp506))) {
      rtb_Max = rtb_STMM_segmentTemp506;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp507)) && (!rtIsNaN
         (rtb_STMM_segmentTemp507))) {
      rtb_Max = rtb_STMM_segmentTemp507;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp508)) && (!rtIsNaN
         (rtb_STMM_segmentTemp508))) {
      rtb_Max = rtb_STMM_segmentTemp508;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp509)) && (!rtIsNaN
         (rtb_STMM_segmentTemp509))) {
      rtb_Max = rtb_STMM_segmentTemp509;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp510)) && (!rtIsNaN
         (rtb_STMM_segmentTemp510))) {
      rtb_Max = rtb_STMM_segmentTemp510;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp511)) && (!rtIsNaN
         (rtb_STMM_segmentTemp511))) {
      rtb_Max = rtb_STMM_segmentTemp511;
    }

    /* End of MinMax: '<S18>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S18>/raptor_adjustment1' */
    rtb_raptor_adjustment1_i = (CTRL_upperThreshCellSeg5LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S18>/raptor_adjustment6' */
    rtb_raptor_adjustment6_d = (CTRL_upperThreshCellSeg5HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S42>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_dy = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment5TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_dy);
      }

      idx = 0;
      CTRL_cellSegment5TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S42>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_pf = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_dy, CTRL_cellSegment5TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment5TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_dy;
    }

    /* S-Function (raptor_sfun_table_axis): '<S43>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_ns = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment5TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_ns);
      }

      idx = 0;
      CTRL_cellSegment5TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S43>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_lq = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_ns, CTRL_cellSegment5TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment5TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_ns;
    }

    /* End of Outputs for S-Function (fcgen): '<S69>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S29>/Enabled Subsystem' */

  /* Sum: '<S24>/Sum' incorporates:
   *  UnitDelay: '<S24>/Unit Delay'
   */
  rtb_MultiportSwitch = EVSR24_DWork.UnitDelay_DSTATE_bi + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_bi + 1U < 1U) {
    rtb_MultiportSwitch = MAX_uint32_T;
  }

  /* RelationalOperator: '<S24>/Relational Operator' incorporates:
   *  Sum: '<S24>/Sum'
   */
  rtb_RelationalOperator_hw = (EVSR24_ConstB.DataTypeConversion <=
    rtb_MultiportSwitch);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg24' */

  /* S-Function Block:<S265>/raptor_can_rxmsg24 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9176__0001(&rtb_Age_g, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg324  */
    {
      uint32_T tSTMM_counterMsg324 ;
      tSTMM_counterMsg324 = 0;
      tSTMM_counterMsg324 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg324 = (((real_T) tSTMM_counterMsg324 ) );
    }

    /* Signal: STMM_segmentTemp700 */
    {
      uint32_T tSTMM_segmentTemp700;
      tSTMM_segmentTemp700 = 0;
      tSTMM_segmentTemp700 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp700 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp700 & 32768)
        tSTMM_segmentTemp700 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp700 = (((real_T) ((int32_T) tSTMM_segmentTemp700) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp701 */
    {
      uint32_T tSTMM_segmentTemp701;
      tSTMM_segmentTemp701 = 0;
      tSTMM_segmentTemp701 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp701 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp701 & 32768)
        tSTMM_segmentTemp701 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp701 = (((real_T) ((int32_T) tSTMM_segmentTemp701) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp702 */
    {
      uint32_T tSTMM_segmentTemp702;
      tSTMM_segmentTemp702 = 0;
      tSTMM_segmentTemp702 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp702 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp702 & 32768)
        tSTMM_segmentTemp702 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp702 = (((real_T) ((int32_T) tSTMM_segmentTemp702) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg25' */

  /* S-Function Block:<S265>/raptor_can_rxmsg25 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9177__0001(&rtb_Age_m, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg325  */
    {
      uint32_T tSTMM_counterMsg325 ;
      tSTMM_counterMsg325 = 0;
      tSTMM_counterMsg325 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg325 = (((real_T) tSTMM_counterMsg325 ) );
    }

    /* Signal: STMM_segmentTemp703 */
    {
      uint32_T tSTMM_segmentTemp703;
      tSTMM_segmentTemp703 = 0;
      tSTMM_segmentTemp703 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp703 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp703 & 32768)
        tSTMM_segmentTemp703 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp703 = (((real_T) ((int32_T) tSTMM_segmentTemp703) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp704 */
    {
      uint32_T tSTMM_segmentTemp704;
      tSTMM_segmentTemp704 = 0;
      tSTMM_segmentTemp704 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp704 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp704 & 32768)
        tSTMM_segmentTemp704 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp704 = (((real_T) ((int32_T) tSTMM_segmentTemp704) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp705 */
    {
      uint32_T tSTMM_segmentTemp705;
      tSTMM_segmentTemp705 = 0;
      tSTMM_segmentTemp705 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp705 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp705 & 32768)
        tSTMM_segmentTemp705 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp705 = (((real_T) ((int32_T) tSTMM_segmentTemp705) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg26' */

  /* S-Function Block:<S265>/raptor_can_rxmsg26 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9178__0001(&rtb_Age_bt, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg326  */
    {
      uint32_T tSTMM_counterMsg326 ;
      tSTMM_counterMsg326 = 0;
      tSTMM_counterMsg326 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg326 = (((real_T) tSTMM_counterMsg326 ) );
    }

    /* Signal: STMM_segmentTemp706 */
    {
      uint32_T tSTMM_segmentTemp706;
      tSTMM_segmentTemp706 = 0;
      tSTMM_segmentTemp706 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp706 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp706 & 32768)
        tSTMM_segmentTemp706 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp706 = (((real_T) ((int32_T) tSTMM_segmentTemp706) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp707 */
    {
      uint32_T tSTMM_segmentTemp707;
      tSTMM_segmentTemp707 = 0;
      tSTMM_segmentTemp707 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp707 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp707 & 32768)
        tSTMM_segmentTemp707 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp707 = (((real_T) ((int32_T) tSTMM_segmentTemp707) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp708 */
    {
      uint32_T tSTMM_segmentTemp708;
      tSTMM_segmentTemp708 = 0;
      tSTMM_segmentTemp708 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp708 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp708 & 32768)
        tSTMM_segmentTemp708 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp708 = (((real_T) ((int32_T) tSTMM_segmentTemp708) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg27' */

  /* S-Function Block:<S265>/raptor_can_rxmsg27 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9179__0001(&rtb_Age_l, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg327  */
    {
      uint32_T tSTMM_counterMsg327 ;
      tSTMM_counterMsg327 = 0;
      tSTMM_counterMsg327 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg327 = (((real_T) tSTMM_counterMsg327 ) );
    }

    /* Signal: STMM_segmentTemp709 */
    {
      uint32_T tSTMM_segmentTemp709;
      tSTMM_segmentTemp709 = 0;
      tSTMM_segmentTemp709 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp709 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp709 & 32768)
        tSTMM_segmentTemp709 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp709 = (((real_T) ((int32_T) tSTMM_segmentTemp709) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp710 */
    {
      uint32_T tSTMM_segmentTemp710;
      tSTMM_segmentTemp710 = 0;
      tSTMM_segmentTemp710 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp710 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp710 & 32768)
        tSTMM_segmentTemp710 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp710 = (((real_T) ((int32_T) tSTMM_segmentTemp710) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp711 */
    {
      uint32_T tSTMM_segmentTemp711;
      tSTMM_segmentTemp711 = 0;
      tSTMM_segmentTemp711 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp711 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp711 & 32768)
        tSTMM_segmentTemp711 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp711 = (((real_T) ((int32_T) tSTMM_segmentTemp711) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S24>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S64>/Enable'
   */
  if (rtb_RelationalOperator_hw) {
    /* S-Function (fcgen): '<S64>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty3'
     */
    /* MinMax: '<S19>/Max' */
    if ((rtb_STMM_segmentTemp700 >= rtb_STMM_segmentTemp701) || rtIsNaN
        (rtb_STMM_segmentTemp701)) {
      rtb_Max = rtb_STMM_segmentTemp700;
    } else {
      rtb_Max = rtb_STMM_segmentTemp701;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp702)) && (!rtIsNaN
         (rtb_STMM_segmentTemp702))) {
      rtb_Max = rtb_STMM_segmentTemp702;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp703)) && (!rtIsNaN
         (rtb_STMM_segmentTemp703))) {
      rtb_Max = rtb_STMM_segmentTemp703;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp704)) && (!rtIsNaN
         (rtb_STMM_segmentTemp704))) {
      rtb_Max = rtb_STMM_segmentTemp704;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp705)) && (!rtIsNaN
         (rtb_STMM_segmentTemp705))) {
      rtb_Max = rtb_STMM_segmentTemp705;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp706)) && (!rtIsNaN
         (rtb_STMM_segmentTemp706))) {
      rtb_Max = rtb_STMM_segmentTemp706;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp707)) && (!rtIsNaN
         (rtb_STMM_segmentTemp707))) {
      rtb_Max = rtb_STMM_segmentTemp707;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp708)) && (!rtIsNaN
         (rtb_STMM_segmentTemp708))) {
      rtb_Max = rtb_STMM_segmentTemp708;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp709)) && (!rtIsNaN
         (rtb_STMM_segmentTemp709))) {
      rtb_Max = rtb_STMM_segmentTemp709;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp710)) && (!rtIsNaN
         (rtb_STMM_segmentTemp710))) {
      rtb_Max = rtb_STMM_segmentTemp710;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp711)) && (!rtIsNaN
         (rtb_STMM_segmentTemp711))) {
      rtb_Max = rtb_STMM_segmentTemp711;
    }

    /* End of MinMax: '<S19>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S19>/raptor_adjustment1' */
    rtb_raptor_adjustment1_n2 = (CTRL_upperThreshCellSeg7LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S19>/raptor_adjustment6' */
    rtb_raptor_adjustment6_e = (CTRL_upperThreshCellSeg7HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S46>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_p1 = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment7TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_p1);
      }

      idx = 0;
      CTRL_cellSegment7TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S46>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_om = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_p1, CTRL_cellSegment7TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment7TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_p1;
    }

    /* S-Function (raptor_sfun_table_axis): '<S47>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_io = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment7TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_io);
      }

      idx = 0;
      CTRL_cellSegment7TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S47>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_j = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_io, CTRL_cellSegment7TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment7TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_io;
    }

    /* End of Outputs for S-Function (fcgen): '<S64>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S24>/Enabled Subsystem' */

  /* Sum: '<S28>/Sum' incorporates:
   *  UnitDelay: '<S28>/Unit Delay'
   */
  rtb_MultiportSwitch_ag = EVSR24_DWork.UnitDelay_DSTATE_n + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_n + 1U < 1U) {
    rtb_MultiportSwitch_ag = MAX_uint32_T;
  }

  /* RelationalOperator: '<S28>/Relational Operator' incorporates:
   *  Sum: '<S28>/Sum'
   */
  rtb_RelationalOperator_ii = (EVSR24_ConstB.DataTypeConversion_p <=
    rtb_MultiportSwitch_ag);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg2' */

  /* S-Function Block:<S265>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9171__0001(&rtb_Age_n, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg304  */
    {
      uint32_T tSTMM_counterMsg304 ;
      tSTMM_counterMsg304 = 0;
      tSTMM_counterMsg304 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg304 = (((real_T) tSTMM_counterMsg304 ) );
    }

    /* Signal: STMM_segmentTemp200 */
    {
      uint32_T tSTMM_segmentTemp200;
      tSTMM_segmentTemp200 = 0;
      tSTMM_segmentTemp200 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp200 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp200 & 32768)
        tSTMM_segmentTemp200 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp200 = (((real_T) ((int32_T) tSTMM_segmentTemp200) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp201 */
    {
      uint32_T tSTMM_segmentTemp201;
      tSTMM_segmentTemp201 = 0;
      tSTMM_segmentTemp201 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp201 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp201 & 32768)
        tSTMM_segmentTemp201 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp201 = (((real_T) ((int32_T) tSTMM_segmentTemp201) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp202 */
    {
      uint32_T tSTMM_segmentTemp202;
      tSTMM_segmentTemp202 = 0;
      tSTMM_segmentTemp202 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp202 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp202 & 32768)
        tSTMM_segmentTemp202 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp202 = (((real_T) ((int32_T) tSTMM_segmentTemp202) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg3' */

  /* S-Function Block:<S265>/raptor_can_rxmsg3 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9182__0001(&rtb_Age_ck, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg305  */
    {
      uint32_T tSTMM_counterMsg305 ;
      tSTMM_counterMsg305 = 0;
      tSTMM_counterMsg305 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg305 = (((real_T) tSTMM_counterMsg305 ) );
    }

    /* Signal: STMM_segmentTemp203 */
    {
      uint32_T tSTMM_segmentTemp203;
      tSTMM_segmentTemp203 = 0;
      tSTMM_segmentTemp203 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp203 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp203 & 32768)
        tSTMM_segmentTemp203 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp203 = (((real_T) ((int32_T) tSTMM_segmentTemp203) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp204 */
    {
      uint32_T tSTMM_segmentTemp204;
      tSTMM_segmentTemp204 = 0;
      tSTMM_segmentTemp204 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp204 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp204 & 32768)
        tSTMM_segmentTemp204 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp204 = (((real_T) ((int32_T) tSTMM_segmentTemp204) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp205 */
    {
      uint32_T tSTMM_segmentTemp205;
      tSTMM_segmentTemp205 = 0;
      tSTMM_segmentTemp205 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp205 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp205 & 32768)
        tSTMM_segmentTemp205 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp205 = (((real_T) ((int32_T) tSTMM_segmentTemp205) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg4' */

  /* S-Function Block:<S265>/raptor_can_rxmsg4 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9186__0001(&rtb_Age_l0, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg306  */
    {
      uint32_T tSTMM_counterMsg306 ;
      tSTMM_counterMsg306 = 0;
      tSTMM_counterMsg306 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg306 = (((real_T) tSTMM_counterMsg306 ) );
    }

    /* Signal: STMM_segmentTemp206 */
    {
      uint32_T tSTMM_segmentTemp206;
      tSTMM_segmentTemp206 = 0;
      tSTMM_segmentTemp206 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp206 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp206 & 32768)
        tSTMM_segmentTemp206 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp206 = (((real_T) ((int32_T) tSTMM_segmentTemp206) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp207 */
    {
      uint32_T tSTMM_segmentTemp207;
      tSTMM_segmentTemp207 = 0;
      tSTMM_segmentTemp207 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp207 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp207 & 32768)
        tSTMM_segmentTemp207 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp207 = (((real_T) ((int32_T) tSTMM_segmentTemp207) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp208 */
    {
      uint32_T tSTMM_segmentTemp208;
      tSTMM_segmentTemp208 = 0;
      tSTMM_segmentTemp208 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp208 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp208 & 32768)
        tSTMM_segmentTemp208 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp208 = (((real_T) ((int32_T) tSTMM_segmentTemp208) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg5' */

  /* S-Function Block:<S265>/raptor_can_rxmsg5 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9187__0001(&rtb_Age_nn, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg307  */
    {
      uint32_T tSTMM_counterMsg307 ;
      tSTMM_counterMsg307 = 0;
      tSTMM_counterMsg307 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg307 = (((real_T) tSTMM_counterMsg307 ) );
    }

    /* Signal: STMM_segmentTemp209 */
    {
      uint32_T tSTMM_segmentTemp209;
      tSTMM_segmentTemp209 = 0;
      tSTMM_segmentTemp209 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp209 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp209 & 32768)
        tSTMM_segmentTemp209 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp209 = (((real_T) ((int32_T) tSTMM_segmentTemp209) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp210 */
    {
      uint32_T tSTMM_segmentTemp210;
      tSTMM_segmentTemp210 = 0;
      tSTMM_segmentTemp210 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp210 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp210 & 32768)
        tSTMM_segmentTemp210 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp210 = (((real_T) ((int32_T) tSTMM_segmentTemp210) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp211 */
    {
      uint32_T tSTMM_segmentTemp211;
      tSTMM_segmentTemp211 = 0;
      tSTMM_segmentTemp211 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp211 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp211 & 32768)
        tSTMM_segmentTemp211 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp211 = (((real_T) ((int32_T) tSTMM_segmentTemp211) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S28>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  if (rtb_RelationalOperator_ii) {
    /* S-Function (fcgen): '<S68>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty4'
     */
    /* MinMax: '<S20>/Max' */
    if ((rtb_STMM_segmentTemp200 >= rtb_STMM_segmentTemp201) || rtIsNaN
        (rtb_STMM_segmentTemp201)) {
      rtb_Max = rtb_STMM_segmentTemp200;
    } else {
      rtb_Max = rtb_STMM_segmentTemp201;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp202)) && (!rtIsNaN
         (rtb_STMM_segmentTemp202))) {
      rtb_Max = rtb_STMM_segmentTemp202;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp203)) && (!rtIsNaN
         (rtb_STMM_segmentTemp203))) {
      rtb_Max = rtb_STMM_segmentTemp203;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp204)) && (!rtIsNaN
         (rtb_STMM_segmentTemp204))) {
      rtb_Max = rtb_STMM_segmentTemp204;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp205)) && (!rtIsNaN
         (rtb_STMM_segmentTemp205))) {
      rtb_Max = rtb_STMM_segmentTemp205;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp206)) && (!rtIsNaN
         (rtb_STMM_segmentTemp206))) {
      rtb_Max = rtb_STMM_segmentTemp206;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp207)) && (!rtIsNaN
         (rtb_STMM_segmentTemp207))) {
      rtb_Max = rtb_STMM_segmentTemp207;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp208)) && (!rtIsNaN
         (rtb_STMM_segmentTemp208))) {
      rtb_Max = rtb_STMM_segmentTemp208;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp209)) && (!rtIsNaN
         (rtb_STMM_segmentTemp209))) {
      rtb_Max = rtb_STMM_segmentTemp209;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp210)) && (!rtIsNaN
         (rtb_STMM_segmentTemp210))) {
      rtb_Max = rtb_STMM_segmentTemp210;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp211)) && (!rtIsNaN
         (rtb_STMM_segmentTemp211))) {
      rtb_Max = rtb_STMM_segmentTemp211;
    }

    /* End of MinMax: '<S20>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S20>/raptor_adjustment1' */
    rtb_raptor_adjustment1_dp = (CTRL_upperThreshCellSeg2LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S20>/raptor_adjustment6' */
    rtb_raptor_adjustment6_k = (CTRL_upperThreshCellSeg2HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S50>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_ka = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment2TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_ka);
      }

      idx = 0;
      CTRL_cellSegment2TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S50>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_b = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_ka, CTRL_cellSegment2TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment2TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_ka;
    }

    /* S-Function (raptor_sfun_table_axis): '<S51>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_kl = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment2TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_kl);
      }

      idx = 0;
      CTRL_cellSegment2TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S51>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_bh = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_kl, CTRL_cellSegment2TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment2TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_kl;
    }

    /* End of Outputs for S-Function (fcgen): '<S68>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S28>/Enabled Subsystem' */

  /* Sum: '<S27>/Sum' incorporates:
   *  UnitDelay: '<S27>/Unit Delay'
   */
  rtb_MultiportSwitch_j = EVSR24_DWork.UnitDelay_DSTATE_l + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_l + 1U < 1U) {
    rtb_MultiportSwitch_j = MAX_uint32_T;
  }

  /* RelationalOperator: '<S27>/Relational Operator' incorporates:
   *  Sum: '<S27>/Sum'
   */
  rtb_RelationalOperator_he = (EVSR24_ConstB.DataTypeConversion_o <=
    rtb_MultiportSwitch_j);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg12' */

  /* S-Function Block:<S265>/raptor_can_rxmsg12 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9163__0001(&rtb_Age_j, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg312  */
    {
      uint32_T tSTMM_counterMsg312 ;
      tSTMM_counterMsg312 = 0;
      tSTMM_counterMsg312 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg312 = (((real_T) tSTMM_counterMsg312 ) );
    }

    /* Signal: STMM_segmentTemp400 */
    {
      uint32_T tSTMM_segmentTemp400;
      tSTMM_segmentTemp400 = 0;
      tSTMM_segmentTemp400 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp400 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp400 & 32768)
        tSTMM_segmentTemp400 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp400 = (((real_T) ((int32_T) tSTMM_segmentTemp400) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp401 */
    {
      uint32_T tSTMM_segmentTemp401;
      tSTMM_segmentTemp401 = 0;
      tSTMM_segmentTemp401 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp401 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp401 & 32768)
        tSTMM_segmentTemp401 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp401 = (((real_T) ((int32_T) tSTMM_segmentTemp401) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp402 */
    {
      uint32_T tSTMM_segmentTemp402;
      tSTMM_segmentTemp402 = 0;
      tSTMM_segmentTemp402 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp402 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp402 & 32768)
        tSTMM_segmentTemp402 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp402 = (((real_T) ((int32_T) tSTMM_segmentTemp402) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg13' */

  /* S-Function Block:<S265>/raptor_can_rxmsg13 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9164__0001(&rtb_Age_e, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg313  */
    {
      uint32_T tSTMM_counterMsg313 ;
      tSTMM_counterMsg313 = 0;
      tSTMM_counterMsg313 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg313 = (((real_T) tSTMM_counterMsg313 ) );
    }

    /* Signal: STMM_segmentTemp403 */
    {
      uint32_T tSTMM_segmentTemp403;
      tSTMM_segmentTemp403 = 0;
      tSTMM_segmentTemp403 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp403 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp403 & 32768)
        tSTMM_segmentTemp403 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp403 = (((real_T) ((int32_T) tSTMM_segmentTemp403) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp404 */
    {
      uint32_T tSTMM_segmentTemp404;
      tSTMM_segmentTemp404 = 0;
      tSTMM_segmentTemp404 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp404 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp404 & 32768)
        tSTMM_segmentTemp404 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp404 = (((real_T) ((int32_T) tSTMM_segmentTemp404) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp405 */
    {
      uint32_T tSTMM_segmentTemp405;
      tSTMM_segmentTemp405 = 0;
      tSTMM_segmentTemp405 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp405 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp405 & 32768)
        tSTMM_segmentTemp405 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp405 = (((real_T) ((int32_T) tSTMM_segmentTemp405) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg14' */

  /* S-Function Block:<S265>/raptor_can_rxmsg14 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9165__0001(&rtb_Age_ac, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg314  */
    {
      uint32_T tSTMM_counterMsg314 ;
      tSTMM_counterMsg314 = 0;
      tSTMM_counterMsg314 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg314 = (((real_T) tSTMM_counterMsg314 ) );
    }

    /* Signal: STMM_segmentTemp406 */
    {
      uint32_T tSTMM_segmentTemp406;
      tSTMM_segmentTemp406 = 0;
      tSTMM_segmentTemp406 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp406 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp406 & 32768)
        tSTMM_segmentTemp406 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp406 = (((real_T) ((int32_T) tSTMM_segmentTemp406) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp407 */
    {
      uint32_T tSTMM_segmentTemp407;
      tSTMM_segmentTemp407 = 0;
      tSTMM_segmentTemp407 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp407 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp407 & 32768)
        tSTMM_segmentTemp407 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp407 = (((real_T) ((int32_T) tSTMM_segmentTemp407) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp408 */
    {
      uint32_T tSTMM_segmentTemp408;
      tSTMM_segmentTemp408 = 0;
      tSTMM_segmentTemp408 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp408 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp408 & 32768)
        tSTMM_segmentTemp408 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp408 = (((real_T) ((int32_T) tSTMM_segmentTemp408) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg15' */

  /* S-Function Block:<S265>/raptor_can_rxmsg15 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9166__0001(&rtb_Age_d3, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg315  */
    {
      uint32_T tSTMM_counterMsg315 ;
      tSTMM_counterMsg315 = 0;
      tSTMM_counterMsg315 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg315 = (((real_T) tSTMM_counterMsg315 ) );
    }

    /* Signal: STMM_segmentTemp409 */
    {
      uint32_T tSTMM_segmentTemp409;
      tSTMM_segmentTemp409 = 0;
      tSTMM_segmentTemp409 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp409 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp409 & 32768)
        tSTMM_segmentTemp409 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp409 = (((real_T) ((int32_T) tSTMM_segmentTemp409) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp410 */
    {
      uint32_T tSTMM_segmentTemp410;
      tSTMM_segmentTemp410 = 0;
      tSTMM_segmentTemp410 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp410 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp410 & 32768)
        tSTMM_segmentTemp410 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp410 = (((real_T) ((int32_T) tSTMM_segmentTemp410) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp411 */
    {
      uint32_T tSTMM_segmentTemp411;
      tSTMM_segmentTemp411 = 0;
      tSTMM_segmentTemp411 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp411 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp411 & 32768)
        tSTMM_segmentTemp411 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp411 = (((real_T) ((int32_T) tSTMM_segmentTemp411) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S27>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S67>/Enable'
   */
  if (rtb_RelationalOperator_he) {
    /* S-Function (fcgen): '<S67>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty5'
     */
    /* MinMax: '<S21>/Max' */
    if ((rtb_STMM_segmentTemp400 >= rtb_STMM_segmentTemp401) || rtIsNaN
        (rtb_STMM_segmentTemp401)) {
      rtb_Max = rtb_STMM_segmentTemp400;
    } else {
      rtb_Max = rtb_STMM_segmentTemp401;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp402)) && (!rtIsNaN
         (rtb_STMM_segmentTemp402))) {
      rtb_Max = rtb_STMM_segmentTemp402;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp403)) && (!rtIsNaN
         (rtb_STMM_segmentTemp403))) {
      rtb_Max = rtb_STMM_segmentTemp403;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp404)) && (!rtIsNaN
         (rtb_STMM_segmentTemp404))) {
      rtb_Max = rtb_STMM_segmentTemp404;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp405)) && (!rtIsNaN
         (rtb_STMM_segmentTemp405))) {
      rtb_Max = rtb_STMM_segmentTemp405;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp406)) && (!rtIsNaN
         (rtb_STMM_segmentTemp406))) {
      rtb_Max = rtb_STMM_segmentTemp406;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp407)) && (!rtIsNaN
         (rtb_STMM_segmentTemp407))) {
      rtb_Max = rtb_STMM_segmentTemp407;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp408)) && (!rtIsNaN
         (rtb_STMM_segmentTemp408))) {
      rtb_Max = rtb_STMM_segmentTemp408;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp409)) && (!rtIsNaN
         (rtb_STMM_segmentTemp409))) {
      rtb_Max = rtb_STMM_segmentTemp409;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp410)) && (!rtIsNaN
         (rtb_STMM_segmentTemp410))) {
      rtb_Max = rtb_STMM_segmentTemp410;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp411)) && (!rtIsNaN
         (rtb_STMM_segmentTemp411))) {
      rtb_Max = rtb_STMM_segmentTemp411;
    }

    /* End of MinMax: '<S21>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S21>/raptor_adjustment1' */
    rtb_raptor_adjustment1_l = (CTRL_upperThreshCellSeg4LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S21>/raptor_adjustment6' */
    rtb_raptor_adjustment6_dg = (CTRL_upperThreshCellSeg4HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S54>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_mm = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment4TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_mm);
      }

      idx = 0;
      CTRL_cellSegment4TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S54>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_i = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_mm, CTRL_cellSegment4TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment4TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_mm;
    }

    /* S-Function (raptor_sfun_table_axis): '<S55>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_mi = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment4TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_mi);
      }

      idx = 0;
      CTRL_cellSegment4TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S55>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_oc = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_mi, CTRL_cellSegment4TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment4TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_mi;
    }

    /* End of Outputs for S-Function (fcgen): '<S67>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S27>/Enabled Subsystem' */

  /* Sum: '<S26>/Sum' incorporates:
   *  UnitDelay: '<S26>/Unit Delay'
   */
  rtb_MultiportSwitch_jf = EVSR24_DWork.UnitDelay_DSTATE_bm + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_bm + 1U < 1U) {
    rtb_MultiportSwitch_jf = MAX_uint32_T;
  }

  /* RelationalOperator: '<S26>/Relational Operator' incorporates:
   *  Sum: '<S26>/Sum'
   */
  rtb_RelationalOperator_o = (EVSR24_ConstB.DataTypeConversion_n <=
    rtb_MultiportSwitch_jf);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg20' */

  /* S-Function Block:<S265>/raptor_can_rxmsg20 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9172__0001(&rtb_Age_k3, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg320  */
    {
      uint32_T tSTMM_counterMsg320 ;
      tSTMM_counterMsg320 = 0;
      tSTMM_counterMsg320 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg320 = (((real_T) tSTMM_counterMsg320 ) );
    }

    /* Signal: STMM_segmentTemp600 */
    {
      uint32_T tSTMM_segmentTemp600;
      tSTMM_segmentTemp600 = 0;
      tSTMM_segmentTemp600 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp600 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp600 & 32768)
        tSTMM_segmentTemp600 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp600 = (((real_T) ((int32_T) tSTMM_segmentTemp600) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp601 */
    {
      uint32_T tSTMM_segmentTemp601;
      tSTMM_segmentTemp601 = 0;
      tSTMM_segmentTemp601 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp601 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp601 & 32768)
        tSTMM_segmentTemp601 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp601 = (((real_T) ((int32_T) tSTMM_segmentTemp601) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp602 */
    {
      uint32_T tSTMM_segmentTemp602;
      tSTMM_segmentTemp602 = 0;
      tSTMM_segmentTemp602 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp602 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp602 & 32768)
        tSTMM_segmentTemp602 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp602 = (((real_T) ((int32_T) tSTMM_segmentTemp602) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg21' */

  /* S-Function Block:<S265>/raptor_can_rxmsg21 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9173__0001(&rtb_Age_az, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg321  */
    {
      uint32_T tSTMM_counterMsg321 ;
      tSTMM_counterMsg321 = 0;
      tSTMM_counterMsg321 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg321 = (((real_T) tSTMM_counterMsg321 ) );
    }

    /* Signal: STMM_segmentTemp603 */
    {
      uint32_T tSTMM_segmentTemp603;
      tSTMM_segmentTemp603 = 0;
      tSTMM_segmentTemp603 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp603 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp603 & 32768)
        tSTMM_segmentTemp603 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp603 = (((real_T) ((int32_T) tSTMM_segmentTemp603) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp604 */
    {
      uint32_T tSTMM_segmentTemp604;
      tSTMM_segmentTemp604 = 0;
      tSTMM_segmentTemp604 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp604 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp604 & 32768)
        tSTMM_segmentTemp604 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp604 = (((real_T) ((int32_T) tSTMM_segmentTemp604) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp605 */
    {
      uint32_T tSTMM_segmentTemp605;
      tSTMM_segmentTemp605 = 0;
      tSTMM_segmentTemp605 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp605 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp605 & 32768)
        tSTMM_segmentTemp605 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp605 = (((real_T) ((int32_T) tSTMM_segmentTemp605) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg22' */

  /* S-Function Block:<S265>/raptor_can_rxmsg22 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9174__0001(&rtb_Age_l5, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg322  */
    {
      uint32_T tSTMM_counterMsg322 ;
      tSTMM_counterMsg322 = 0;
      tSTMM_counterMsg322 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg322 = (((real_T) tSTMM_counterMsg322 ) );
    }

    /* Signal: STMM_segmentTemp606 */
    {
      uint32_T tSTMM_segmentTemp606;
      tSTMM_segmentTemp606 = 0;
      tSTMM_segmentTemp606 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp606 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp606 & 32768)
        tSTMM_segmentTemp606 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp606 = (((real_T) ((int32_T) tSTMM_segmentTemp606) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp607 */
    {
      uint32_T tSTMM_segmentTemp607;
      tSTMM_segmentTemp607 = 0;
      tSTMM_segmentTemp607 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp607 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp607 & 32768)
        tSTMM_segmentTemp607 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp607 = (((real_T) ((int32_T) tSTMM_segmentTemp607) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp608 */
    {
      uint32_T tSTMM_segmentTemp608;
      tSTMM_segmentTemp608 = 0;
      tSTMM_segmentTemp608 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp608 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp608 & 32768)
        tSTMM_segmentTemp608 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp608 = (((real_T) ((int32_T) tSTMM_segmentTemp608) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg23' */

  /* S-Function Block:<S265>/raptor_can_rxmsg23 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9175__0001(&rtb_Age_dy, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg323  */
    {
      uint32_T tSTMM_counterMsg323 ;
      tSTMM_counterMsg323 = 0;
      tSTMM_counterMsg323 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg323 = (((real_T) tSTMM_counterMsg323 ) );
    }

    /* Signal: STMM_segmentTemp609 */
    {
      uint32_T tSTMM_segmentTemp609;
      tSTMM_segmentTemp609 = 0;
      tSTMM_segmentTemp609 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp609 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp609 & 32768)
        tSTMM_segmentTemp609 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp609 = (((real_T) ((int32_T) tSTMM_segmentTemp609) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp610 */
    {
      uint32_T tSTMM_segmentTemp610;
      tSTMM_segmentTemp610 = 0;
      tSTMM_segmentTemp610 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp610 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp610 & 32768)
        tSTMM_segmentTemp610 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp610 = (((real_T) ((int32_T) tSTMM_segmentTemp610) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp611 */
    {
      uint32_T tSTMM_segmentTemp611;
      tSTMM_segmentTemp611 = 0;
      tSTMM_segmentTemp611 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp611 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp611 & 32768)
        tSTMM_segmentTemp611 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp611 = (((real_T) ((int32_T) tSTMM_segmentTemp611) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S26>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S66>/Enable'
   */
  if (rtb_RelationalOperator_o) {
    /* S-Function (fcgen): '<S66>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty6'
     */
    /* MinMax: '<S22>/Max' */
    if ((rtb_STMM_segmentTemp600 >= rtb_STMM_segmentTemp601) || rtIsNaN
        (rtb_STMM_segmentTemp601)) {
      rtb_Max = rtb_STMM_segmentTemp600;
    } else {
      rtb_Max = rtb_STMM_segmentTemp601;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp602)) && (!rtIsNaN
         (rtb_STMM_segmentTemp602))) {
      rtb_Max = rtb_STMM_segmentTemp602;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp603)) && (!rtIsNaN
         (rtb_STMM_segmentTemp603))) {
      rtb_Max = rtb_STMM_segmentTemp603;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp604)) && (!rtIsNaN
         (rtb_STMM_segmentTemp604))) {
      rtb_Max = rtb_STMM_segmentTemp604;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp605)) && (!rtIsNaN
         (rtb_STMM_segmentTemp605))) {
      rtb_Max = rtb_STMM_segmentTemp605;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp606)) && (!rtIsNaN
         (rtb_STMM_segmentTemp606))) {
      rtb_Max = rtb_STMM_segmentTemp606;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp607)) && (!rtIsNaN
         (rtb_STMM_segmentTemp607))) {
      rtb_Max = rtb_STMM_segmentTemp607;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp608)) && (!rtIsNaN
         (rtb_STMM_segmentTemp608))) {
      rtb_Max = rtb_STMM_segmentTemp608;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp609)) && (!rtIsNaN
         (rtb_STMM_segmentTemp609))) {
      rtb_Max = rtb_STMM_segmentTemp609;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp610)) && (!rtIsNaN
         (rtb_STMM_segmentTemp610))) {
      rtb_Max = rtb_STMM_segmentTemp610;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp611)) && (!rtIsNaN
         (rtb_STMM_segmentTemp611))) {
      rtb_Max = rtb_STMM_segmentTemp611;
    }

    /* End of MinMax: '<S22>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S22>/raptor_adjustment1' */
    rtb_raptor_adjustment1_lq = (CTRL_upperThreshCellSeg6LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S22>/raptor_adjustment6' */
    rtb_raptor_adjustment6_h = (CTRL_upperThreshCellSeg6HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S58>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_nl = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment6TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_nl);
      }

      idx = 0;
      CTRL_cellSegment6TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S58>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_d = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_nl, CTRL_cellSegment6TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment6TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_nl;
    }

    /* S-Function (raptor_sfun_table_axis): '<S59>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_lk = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment6TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_lk);
      }

      idx = 0;
      CTRL_cellSegment6TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S59>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_my = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_lk, CTRL_cellSegment6TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment6TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_lk;
    }

    /* End of Outputs for S-Function (fcgen): '<S66>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S26>/Enabled Subsystem' */

  /* Sum: '<S25>/Sum' incorporates:
   *  UnitDelay: '<S25>/Unit Delay'
   */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_h + 1U;
  if (EVSR24_DWork.UnitDelay_DSTATE_h + 1U < 1U) {
    rtb_UnitDelay_o = MAX_uint32_T;
  }

  /* End of Sum: '<S25>/Sum' */

  /* RelationalOperator: '<S25>/Relational Operator' */
  rtb_RelationalOperator_l = (EVSR24_ConstB.DataTypeConversion_d <=
    rtb_UnitDelay_o);

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg28' */

  /* S-Function Block:<S265>/raptor_can_rxmsg28 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9180__0001(&rtb_Age_bu, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg328  */
    {
      uint32_T tSTMM_counterMsg328 ;
      tSTMM_counterMsg328 = 0;
      tSTMM_counterMsg328 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg328 = (((real_T) tSTMM_counterMsg328 ) );
    }

    /* Signal: STMM_segmentTemp800 */
    {
      uint32_T tSTMM_segmentTemp800;
      tSTMM_segmentTemp800 = 0;
      tSTMM_segmentTemp800 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp800 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp800 & 32768)
        tSTMM_segmentTemp800 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp800 = (((real_T) ((int32_T) tSTMM_segmentTemp800) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp801 */
    {
      uint32_T tSTMM_segmentTemp801;
      tSTMM_segmentTemp801 = 0;
      tSTMM_segmentTemp801 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp801 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp801 & 32768)
        tSTMM_segmentTemp801 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp801 = (((real_T) ((int32_T) tSTMM_segmentTemp801) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp802 */
    {
      uint32_T tSTMM_segmentTemp802;
      tSTMM_segmentTemp802 = 0;
      tSTMM_segmentTemp802 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp802 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp802 & 32768)
        tSTMM_segmentTemp802 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp802 = (((real_T) ((int32_T) tSTMM_segmentTemp802) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg29' */

  /* S-Function Block:<S265>/raptor_can_rxmsg29 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9181__0001(&rtb_Age_ic, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg329  */
    {
      uint32_T tSTMM_counterMsg329 ;
      tSTMM_counterMsg329 = 0;
      tSTMM_counterMsg329 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg329 = (((real_T) tSTMM_counterMsg329 ) );
    }

    /* Signal: STMM_segmentTemp803 */
    {
      uint32_T tSTMM_segmentTemp803;
      tSTMM_segmentTemp803 = 0;
      tSTMM_segmentTemp803 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp803 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp803 & 32768)
        tSTMM_segmentTemp803 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp803 = (((real_T) ((int32_T) tSTMM_segmentTemp803) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp804 */
    {
      uint32_T tSTMM_segmentTemp804;
      tSTMM_segmentTemp804 = 0;
      tSTMM_segmentTemp804 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp804 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp804 & 32768)
        tSTMM_segmentTemp804 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp804 = (((real_T) ((int32_T) tSTMM_segmentTemp804) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp805 */
    {
      uint32_T tSTMM_segmentTemp805;
      tSTMM_segmentTemp805 = 0;
      tSTMM_segmentTemp805 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp805 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp805 & 32768)
        tSTMM_segmentTemp805 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp805 = (((real_T) ((int32_T) tSTMM_segmentTemp805) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg30' */

  /* S-Function Block:<S265>/raptor_can_rxmsg30 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9183__0001(&rtb_Age_ih, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg330  */
    {
      uint32_T tSTMM_counterMsg330 ;
      tSTMM_counterMsg330 = 0;
      tSTMM_counterMsg330 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg330 = (((real_T) tSTMM_counterMsg330 ) );
    }

    /* Signal: STMM_segmentTemp806 */
    {
      uint32_T tSTMM_segmentTemp806;
      tSTMM_segmentTemp806 = 0;
      tSTMM_segmentTemp806 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp806 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp806 & 32768)
        tSTMM_segmentTemp806 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp806 = (((real_T) ((int32_T) tSTMM_segmentTemp806) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp807 */
    {
      uint32_T tSTMM_segmentTemp807;
      tSTMM_segmentTemp807 = 0;
      tSTMM_segmentTemp807 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp807 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp807 & 32768)
        tSTMM_segmentTemp807 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp807 = (((real_T) ((int32_T) tSTMM_segmentTemp807) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp808 */
    {
      uint32_T tSTMM_segmentTemp808;
      tSTMM_segmentTemp808 = 0;
      tSTMM_segmentTemp808 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp808 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp808 & 32768)
        tSTMM_segmentTemp808 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp808 = (((real_T) ((int32_T) tSTMM_segmentTemp808) /
        (real_T) 10.0) );
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S265>/raptor_can_rxmsg31' */

  /* S-Function Block:<S265>/raptor_can_rxmsg31 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9184__0001(&rtb_Age_kb, NULL, NULL, &data[0], 8);

    /* Signal: STMM_counterMsg331  */
    {
      uint32_T tSTMM_counterMsg331 ;
      tSTMM_counterMsg331 = 0;
      tSTMM_counterMsg331 |= (((uint32_T)data[0U]) & 15) ;
      rtb_STMM_counterMsg331 = (((real_T) tSTMM_counterMsg331 ) );
    }

    /* Signal: STMM_segmentTemp809 */
    {
      uint32_T tSTMM_segmentTemp809;
      tSTMM_segmentTemp809 = 0;
      tSTMM_segmentTemp809 |= ((uint32_T)data[2U]) ;
      tSTMM_segmentTemp809 |= ((uint32_T)data[3U]) << 8;
      if (tSTMM_segmentTemp809 & 32768)
        tSTMM_segmentTemp809 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp809 = (((real_T) ((int32_T) tSTMM_segmentTemp809) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp810 */
    {
      uint32_T tSTMM_segmentTemp810;
      tSTMM_segmentTemp810 = 0;
      tSTMM_segmentTemp810 |= ((uint32_T)data[4U]) ;
      tSTMM_segmentTemp810 |= ((uint32_T)data[5U]) << 8;
      if (tSTMM_segmentTemp810 & 32768)
        tSTMM_segmentTemp810 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp810 = (((real_T) ((int32_T) tSTMM_segmentTemp810) /
        (real_T) 10.0) );
    }

    /* Signal: STMM_segmentTemp811 */
    {
      uint32_T tSTMM_segmentTemp811;
      tSTMM_segmentTemp811 = 0;
      tSTMM_segmentTemp811 |= ((uint32_T)data[6U]) ;
      tSTMM_segmentTemp811 |= ((uint32_T)data[7U]) << 8;
      if (tSTMM_segmentTemp811 & 32768)
        tSTMM_segmentTemp811 |= (uint32_T)-65536;
      rtb_STMM_segmentTemp811 = (((real_T) ((int32_T) tSTMM_segmentTemp811) /
        (real_T) 10.0) );
    }
  }

  /* Outputs for Enabled SubSystem: '<S25>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S65>/Enable'
   */
  if (rtb_RelationalOperator_l) {
    /* S-Function (fcgen): '<S65>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/accFanDuty7'
     */
    /* MinMax: '<S23>/Max' */
    if ((rtb_STMM_segmentTemp800 >= rtb_STMM_segmentTemp801) || rtIsNaN
        (rtb_STMM_segmentTemp801)) {
      rtb_Max = rtb_STMM_segmentTemp800;
    } else {
      rtb_Max = rtb_STMM_segmentTemp801;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp802)) && (!rtIsNaN
         (rtb_STMM_segmentTemp802))) {
      rtb_Max = rtb_STMM_segmentTemp802;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp803)) && (!rtIsNaN
         (rtb_STMM_segmentTemp803))) {
      rtb_Max = rtb_STMM_segmentTemp803;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp804)) && (!rtIsNaN
         (rtb_STMM_segmentTemp804))) {
      rtb_Max = rtb_STMM_segmentTemp804;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp805)) && (!rtIsNaN
         (rtb_STMM_segmentTemp805))) {
      rtb_Max = rtb_STMM_segmentTemp805;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp806)) && (!rtIsNaN
         (rtb_STMM_segmentTemp806))) {
      rtb_Max = rtb_STMM_segmentTemp806;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp807)) && (!rtIsNaN
         (rtb_STMM_segmentTemp807))) {
      rtb_Max = rtb_STMM_segmentTemp807;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp808)) && (!rtIsNaN
         (rtb_STMM_segmentTemp808))) {
      rtb_Max = rtb_STMM_segmentTemp808;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp809)) && (!rtIsNaN
         (rtb_STMM_segmentTemp809))) {
      rtb_Max = rtb_STMM_segmentTemp809;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp810)) && (!rtIsNaN
         (rtb_STMM_segmentTemp810))) {
      rtb_Max = rtb_STMM_segmentTemp810;
    }

    if ((!(rtb_Max >= rtb_STMM_segmentTemp811)) && (!rtIsNaN
         (rtb_STMM_segmentTemp811))) {
      rtb_Max = rtb_STMM_segmentTemp811;
    }

    /* End of MinMax: '<S23>/Max' */

    /* S-Function (raptor_sfun_adjustment): '<S23>/raptor_adjustment1' */
    rtb_raptor_adjustment1_la = (CTRL_upperThreshCellSeg8LV_Data());

    /* S-Function (raptor_sfun_adjustment): '<S23>/raptor_adjustment6' */
    rtb_raptor_adjustment6_b = (CTRL_upperThreshCellSeg8HV_Data());

    /* S-Function (raptor_sfun_table_axis): '<S62>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_bwq = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment8TempToLVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_bwq);
      }

      idx = 0;
      CTRL_cellSegment8TempToLVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S62>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_kt = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_bwq, CTRL_cellSegment8TempToLVDuty_Data(),
         11u);
      CTRL_cellSegment8TempToLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_bwq;
    }

    /* S-Function (raptor_sfun_table_axis): '<S63>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_d5 = TableAxis_real32_T( rtb_Max,
          CTRL_cellSegment8TempToHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_d5);
      }

      idx = 0;
      CTRL_cellSegment8TempToHVDuty_LookupX_IN_Data() = rtb_Max;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S63>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_it = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_d5, CTRL_cellSegment8TempToHVDuty_Data(),
         11u);
      CTRL_cellSegment8TempToHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_d5;
    }

    /* End of Outputs for S-Function (fcgen): '<S65>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S25>/Enabled Subsystem' */

  /* MultiPortSwitch: '<S24>/Multiport Switch' incorporates:
   *  Constant: '<S24>/Constant2'
   */
  if (rtb_RelationalOperator_hw) {
    rtb_MultiportSwitch = 0U;
  }

  /* End of MultiPortSwitch: '<S24>/Multiport Switch' */

  /* MultiPortSwitch: '<S25>/Multiport Switch' incorporates:
   *  Constant: '<S25>/Constant2'
   */
  if (!rtb_RelationalOperator_l) {
    rtb_MultiportSwitch_pp = rtb_UnitDelay_o;
  } else {
    rtb_MultiportSwitch_pp = 0U;
  }

  /* End of MultiPortSwitch: '<S25>/Multiport Switch' */

  /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
   *  Constant: '<S26>/Constant2'
   */
  if (rtb_RelationalOperator_o) {
    rtb_MultiportSwitch_jf = 0U;
  }

  /* End of MultiPortSwitch: '<S26>/Multiport Switch' */

  /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
   *  Constant: '<S27>/Constant2'
   */
  if (rtb_RelationalOperator_he) {
    rtb_MultiportSwitch_j = 0U;
  }

  /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

  /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
   *  Constant: '<S28>/Constant2'
   */
  if (rtb_RelationalOperator_ii) {
    rtb_MultiportSwitch_ag = 0U;
  }

  /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

  /* MultiPortSwitch: '<S29>/Multiport Switch' incorporates:
   *  Constant: '<S29>/Constant2'
   */
  if (rtb_RelationalOperator_jz) {
    rtb_MultiportSwitch_ps = 0U;
  }

  /* End of MultiPortSwitch: '<S29>/Multiport Switch' */

  /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
   *  Constant: '<S30>/Constant2'
   */
  if (rtb_RelationalOperator_f) {
    rtb_MultiportSwitch_ov = 0U;
  }

  /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

  /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
   *  Constant: '<S31>/Constant2'
   */
  if (rtb_RelationalOperator_d != 0) {
    rtb_Sum_ps = 0U;
  }

  /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

  /* UnitDelay: '<S73>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_i1;

  /* Sum: '<S73>/Sum' */
  rtb_MultiportSwitch_nj = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_MultiportSwitch_nj = MAX_uint32_T;
  }

  /* RelationalOperator: '<S73>/Relational Operator' incorporates:
   *  Sum: '<S73>/Sum'
   */
  rtb_RelationalOperator_d = (EVSR24_ConstB.DataTypeConversion_os <=
    rtb_MultiportSwitch_nj);

  /* S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in' */
  /* S-Function Block: INPUT5 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA019();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S207>/Data Type Conversion' */
  rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment4' */
  rtb_IN_throttlePos_deg_f = (IN_brakePressureF_vToPsi_Data());

  /* Product: '<S207>/Product' incorporates:
   *  DataTypeConversion: '<S207>/Data Type Conversion'
   */
  rtb_Max = (real_T)rtb_raptor_analog_in11 * rtb_IN_throttlePos_deg_f;

  /* S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in1' */
  /* S-Function Block: INPUT6 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA037();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S208>/Data Type Conversion' */
  rtb_DataTypeConversion_j = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment4' */
  rtb_IN_throttlePos_deg_f = (IN_brakePressureR_vToPsi_Data());

  /* Product: '<S208>/Product' incorporates:
   *  DataTypeConversion: '<S208>/Data Type Conversion'
   */
  rtb_DataTypeConversion = (real_T)rtb_raptor_analog_in11 *
    rtb_IN_throttlePos_deg_f;

  /* Outputs for Enabled SubSystem: '<S73>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S75>/Enable'
   */
  if (rtb_RelationalOperator_d) {
    /* S-Function (fcgen): '<S75>/Function-Call Generator' incorporates:
     *  SubSystem: '<S9>/brakeBias'
     */
    /* S-Function (raptor_sfun_adjustment): '<S72>/raptor_adjustment' */
    rtb_raptor_adjustment_e = (CTRL_upperThreshBrakeBias_Data());

    /* S-Function (raptor_sfun_adjustment): '<S72>/raptor_adjustment1' */
    rtb_raptor_adjustment1_c0 = (CTRL_dbzBrakeBias_Data());

    /* End of Outputs for S-Function (fcgen): '<S75>/Function-Call Generator' */

    /* MultiPortSwitch: '<S73>/Multiport Switch' incorporates:
     *  Constant: '<S73>/Constant2'
     */
    rtb_MultiportSwitch_nj = 0U;
  }

  /* End of Outputs for SubSystem: '<S73>/Enabled Subsystem' */

  /* UnitDelay: '<S77>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_p;

  /* Sum: '<S77>/Sum' */
  rtb_MultiportSwitch_bx = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_MultiportSwitch_bx = MAX_uint32_T;
  }

  /* RelationalOperator: '<S77>/Relational Operator' incorporates:
   *  Sum: '<S77>/Sum'
   */
  rtb_RelationalOperator_d = (EVSR24_ConstB.DataTypeConversion_fe <=
    rtb_MultiportSwitch_bx);

  /* RelationalOperator: '<S207>/GreaterThan1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment1'
   */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p >
    (IN_brakeHighF_v_Data()));

  /* RelationalOperator: '<S207>/Less Than1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment'
   */
  rtb_RelationalOperator_l = (rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p <
    (IN_brakeLowF_v_Data()));

  /* Logic: '<S207>/OR' */
  rtb_IN_errorBrake_bool = (rtb_RelationalOperator_o || rtb_RelationalOperator_l);

  /* Product: '<S207>/Product1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment5'
   */
  rtb_IN_brakePos_pct = rtb_Max * (IN_brakePressureF_psiToPct_Data());

  /* Switch: '<S207>/Switch1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment3'
   */
  if (rtb_IN_errorBrake_bool) {
    rtb_IN_brakePos_pct = (IN_brakePosF_zero_Data());
  } else {
    /* Switch: '<S207>/Switch2' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S207>/raptor_adjustment2'
     */
    if ((IN_brakePosOverrideF_bool_Data())) {
      /* S-Function (raptor_sfun_override): '<S207>/raptor_override' */
      if (IN_brakePosOverrideF_pct_OvrSts_Data()) {
        EVSR24_B.raptor_override_h = IN_brakePosOverrideF_pct_OvrVal_Data();
      } else {
        EVSR24_B.raptor_override_h = rtb_IN_brakePos_pct;
      }

      rtb_IN_brakePos_pct = EVSR24_B.raptor_override_h;
    }

    /* End of Switch: '<S207>/Switch2' */
  }

  /* End of Switch: '<S207>/Switch1' */

  /* Outputs for Enabled SubSystem: '<S77>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S79>/Enable'
   */
  if (rtb_RelationalOperator_d) {
    /* S-Function (fcgen): '<S79>/Function-Call Generator' incorporates:
     *  SubSystem: '<S10>/brakelight'
     */
    /* S-Function (raptor_sfun_adjustment): '<S76>/raptor_adjustment' */
    rtb_raptor_adjustment_no = (CTRL_upperThreshBrakelight_Data());

    /* RelationalOperator: '<S78>/LowerRelop1' */
    rtb_RelationalOperator_f = (rtb_IN_brakePos_pct > rtb_raptor_adjustment_no);

    /* Switch: '<S78>/Switch2' incorporates:
     *  RelationalOperator: '<S78>/UpperRelop'
     *  Switch: '<S78>/Switch'
     */
    if (rtb_RelationalOperator_f) {
      rtb_Switch2_fj = rtb_raptor_adjustment_no;
    } else if (rtb_IN_brakePos_pct < 0.0) {
      /* Switch: '<S78>/Switch' incorporates:
       *  Constant: '<S76>/Constant2'
       */
      rtb_Switch2_fj = 0.0;
    } else {
      rtb_Switch2_fj = rtb_IN_brakePos_pct;
    }

    /* End of Switch: '<S78>/Switch2' */

    /* Switch: '<S76>/Switch' */
    if (rtb_Switch2_fj > 5.0) {
      /* S-Function (raptor_sfun_adjustment): '<S76>/raptor_adjustment1' */
      rtb_raptor_adjustment1_ab = (CTRL_brakelight_bool_Data());
      rtb_RelationalOperator_f = rtb_raptor_adjustment1_ab;
    } else {
      rtb_RelationalOperator_f = false;
    }

    /* End of Switch: '<S76>/Switch' */

    /* S-Function (raptor_sfun_override): '<S76>/raptor_override' */
    if (CTRL_brakelight_bool_OvrSts_Data()) {
      EVSR24_B.CTRL_brakelight_bool = CTRL_brakelight_bool_OvrVal_Data();
    } else {
      EVSR24_B.CTRL_brakelight_bool = rtb_RelationalOperator_f;
    }

    /* End of Outputs for S-Function (fcgen): '<S79>/Function-Call Generator' */

    /* MultiPortSwitch: '<S77>/Multiport Switch' incorporates:
     *  Constant: '<S77>/Constant2'
     */
    rtb_MultiportSwitch_bx = 0U;
  }

  /* End of Outputs for SubSystem: '<S77>/Enabled Subsystem' */

  /* S-Function (raptor_sfun_analog_in): '<S203>/raptor_analog_in' */
  /* S-Function Block: INPUT3 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA017();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* RelationalOperator: '<S229>/GreaterThan' incorporates:
   *  DataTypeConversion: '<S229>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment1'
   */
  rtb_RelationalOperator_d = (rtb_raptor_analog_in11 > (IN_throttleHigh1_v_Data()));

  /* RelationalOperator: '<S229>/Less Than' incorporates:
   *  DataTypeConversion: '<S229>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment'
   */
  rtb_RelationalOperator_f = (rtb_raptor_analog_in11 < (IN_throttleLow1_v_Data()));

  /* Logic: '<S229>/OR' */
  rtb_RelationalOperator_jz = (rtb_RelationalOperator_d ||
    rtb_RelationalOperator_f);

  /* S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment5' */
  rtb_IN_throttlePos_deg_f = (IN_throttle1_degPerV_Data());

  /* Product: '<S229>/Product' incorporates:
   *  DataTypeConversion: '<S229>/Data Type Conversion'
   */
  rtb_Switch2_fj = (real_T)rtb_raptor_analog_in11 * rtb_IN_throttlePos_deg_f;

  /* Sum: '<S229>/Sum' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment4'
   */
  rtb_IN_throttlePos_deg_f = rtb_Switch2_fj + (IN_throttleOffset1_deg_Data());

  /* Product: '<S229>/Product1' incorporates:
   *  Gain: '<S229>/pctPerDeg'
   *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment6'
   */
  rtb_IN_throttlePos_pct = 1.6666666666666667 * rtb_IN_throttlePos_deg_f *
    (IN_throttlePos1_pctPerDeg_Data());

  /* Switch: '<S229>/Switch1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment3'
   */
  if (rtb_RelationalOperator_jz) {
    rtb_IN_throttlePos_pct = (IN_throttlePos1_zero_Data());
  } else {
    /* Switch: '<S229>/Switch' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S229>/raptor_adjustment2'
     */
    if ((IN_throttleOverride1_bool_Data())) {
      /* S-Function (raptor_sfun_override): '<S229>/raptor_override1' */
      if (IN_throttleOverride1_pct_OvrSts_Data()) {
        EVSR24_B.raptor_override1_o = IN_throttleOverride1_pct_OvrVal_Data();
      } else {
        EVSR24_B.raptor_override1_o = rtb_IN_throttlePos_pct;
      }

      IN_throttleOverride1_pct_Data() = EVSR24_B.raptor_override1_o;
      rtb_IN_throttlePos_pct = EVSR24_B.raptor_override1_o;
    }

    /* End of Switch: '<S229>/Switch' */
  }

  /* End of Switch: '<S229>/Switch1' */
  /* S-Function (raptor_sfun_analog_in): '<S203>/raptor_analog_in1' */
  /* S-Function Block: INPUT4 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA018();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* RelationalOperator: '<S230>/GreaterThan' incorporates:
   *  DataTypeConversion: '<S230>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment1'
   */
  rtb_RelationalOperator_hw = (rtb_raptor_analog_in11 > (IN_throttleHigh2_v_Data
    ()));

  /* RelationalOperator: '<S230>/Less Than' incorporates:
   *  DataTypeConversion: '<S230>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment'
   */
  rtb_RelationalOperator_ii = (rtb_raptor_analog_in11 < (IN_throttleLow2_v_Data()));

  /* Logic: '<S230>/OR' */
  rtb_RelationalOperator_he = (rtb_RelationalOperator_hw ||
    rtb_RelationalOperator_ii);

  /* S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment5' */
  rtb_Switch2_fj = (IN_throttle2_degPerV_Data());

  /* Sum: '<S230>/Sum' incorporates:
   *  DataTypeConversion: '<S230>/Data Type Conversion'
   *  Product: '<S230>/Product'
   *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment4'
   */
  rtb_Switch2_fj = (real_T)rtb_raptor_analog_in11 * rtb_Switch2_fj +
    (IN_throttleOffset2_deg_Data());

  /* Product: '<S230>/Product1' incorporates:
   *  Gain: '<S230>/pctPerDeg'
   *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment6'
   */
  rtb_IN_throttlePos_pct_d = 1.6666666666666667 * rtb_Switch2_fj *
    (IN_throttlePos2_pctPerDeg_Data());

  /* Switch: '<S230>/Switch1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment3'
   */
  if (rtb_RelationalOperator_he) {
    rtb_IN_throttlePos_pct_d = (IN_throttlePos2_zero_Data());
  } else {
    /* Switch: '<S230>/Switch' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S230>/raptor_adjustment2'
     */
    if ((IN_throttleOverride2_bool_Data())) {
      /* S-Function (raptor_sfun_override): '<S230>/raptor_override1' */
      if (IN_throttleOverride2_pct_OvrSts_Data()) {
        EVSR24_B.raptor_override1_p = IN_throttleOverride2_pct_OvrVal_Data();
      } else {
        EVSR24_B.raptor_override1_p = rtb_IN_throttlePos_pct_d;
      }

      IN_throttleOverride2_pct_Data() = EVSR24_B.raptor_override1_p;
      rtb_IN_throttlePos_pct_d = EVSR24_B.raptor_override1_p;
    }

    /* End of Switch: '<S230>/Switch' */
  }

  /* End of Switch: '<S230>/Switch1' */
  /* RelationalOperator: '<S208>/GreaterThan1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment1'
   */
  rtb_IN_breakeVoltHigh_bool_j = (rtb_DataTypeConversion_j >
    (IN_brakeHighR_v_Data()));

  /* RelationalOperator: '<S208>/Less Than1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment'
   */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_DataTypeConversion_j <
    (IN_brakeLowR_v_Data()));

  /* Logic: '<S208>/OR' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_breakeVoltHigh_bool_j ||
    rtb_IN_frontLeftHallEffectHigh_bool);

  /* Product: '<S208>/Product1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment5'
   */
  rtb_IN_brakePos_pct_n = rtb_DataTypeConversion *
    (IN_brakePressureR_psiToPct_Data());

  /* Switch: '<S208>/Switch1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment3'
   */
  if (rtb_IN_frontLeftHallEffectLow_bool) {
    rtb_IN_brakePos_pct_n = (IN_brakePosR_zero_Data());
  } else {
    /* Switch: '<S208>/Switch2' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S208>/raptor_adjustment2'
     */
    if ((IN_brakePosOverrideR_bool_Data())) {
      /* S-Function (raptor_sfun_override): '<S208>/raptor_override' */
      if (IN_brakePosOverrideR_pct_OvrSts_Data()) {
        EVSR24_B.raptor_override = IN_brakePosOverrideR_pct_OvrVal_Data();
      } else {
        EVSR24_B.raptor_override = rtb_IN_brakePos_pct_n;
      }

      rtb_IN_brakePos_pct_n = EVSR24_B.raptor_override;
    }

    /* End of Switch: '<S208>/Switch2' */
  }

  /* End of Switch: '<S208>/Switch1' */

  /* UnitDelay: '<S81>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_nf;

  /* Sum: '<S81>/Sum' */
  rtb_MultiportSwitch_k = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_MultiportSwitch_k = MAX_uint32_T;
  }

  /* UnitDelay: '<S87>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_p3;

  /* Sum: '<S87>/Sum' */
  rtb_MultiportSwitch_m = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_MultiportSwitch_m = MAX_uint32_T;
  }

  /* RelationalOperator: '<S87>/Relational Operator' incorporates:
   *  Sum: '<S87>/Sum'
   */
  rtb_RelationalOperator_j = (EVSR24_ConstB.DataTypeConversion_h <=
    rtb_MultiportSwitch_m);

  /* UnitDelay: '<S189>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_hk;

  /* Sum: '<S189>/Sum' */
  rtb_Sum_ip = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_ip = MAX_uint32_T;
  }

  /* RelationalOperator: '<S189>/Relational Operator' incorporates:
   *  Sum: '<S189>/Sum'
   */
  rtb_RelationalOperator_h = (EVSR24_ConstB.DataTypeConversion_b <= rtb_Sum_ip);

  /* UnitDelay: '<S188>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_k;

  /* Sum: '<S188>/Sum' */
  rtb_Sum_j = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_j = MAX_uint32_T;
  }

  /* RelationalOperator: '<S188>/Relational Operator' incorporates:
   *  Sum: '<S188>/Sum'
   */
  rtb_RelationalOperator_c = (EVSR24_ConstB.DataTypeConversion_i <= rtb_Sum_j);

  /* S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in3' */
  /* S-Function Block: INPUT44 */
  {
    uint32 freq_temp = 0;
    uint32 duty_temp = 0;
    if (swsh_PWMin_Period_Duty_ECUK048((uint32*) &freq_temp, (uint32*)
         &duty_temp)) {
      if (freq_temp > 0) {
        real32_T freqHz = 1000000;
        freqHz /= freq_temp;
        freqHz *= 100;
        rtb_UnitDelay_o = freqHz;
      } else {
        rtb_UnitDelay_o = 0;
      }
    } else {
      rtb_UnitDelay_o = 0;
    }
  }

  /* DataTypeConversion: '<S257>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (real32_T)rtb_UnitDelay_o;

  /* Product: '<S257>/Divide' incorporates:
   *  DataTypeConversion: '<S257>/Data Type Conversion'
   *  S-Function (raptor_sfun_data_read): '<S257>/raptor_data_read1'
   */
  rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p = (real32_T)rtb_UnitDelay_o /
    DATA_wheelTooth_ct_Data();

  /* DataTypeConversion: '<S257>/Data Type Conversion2' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Gain: '<S257>/metersPerMinToMilesPerHour'
   *  Product: '<S257>/Product2'
   *  S-Function (raptor_sfun_data_read): '<S257>/raptor_data_read2'
   */
  rtb_DataTypeConversion2 = 6.28318548F * DATA_unloadedWheelRadius_m_Data() *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p * 0.03728F;

  /* S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in' */
  /* S-Function Block: INPUT43 */
  {
    uint32 freq_temp = 0;
    uint32 duty_temp = 0;
    if (swsh_PWMin_Period_Duty_ECUK029((uint32*) &freq_temp, (uint32*)
         &duty_temp)) {
      if (freq_temp > 0) {
        real32_T freqHz = 1000000;
        freqHz /= freq_temp;
        freqHz *= 100;
        rtb_UnitDelay_o = freqHz;
      } else {
        rtb_UnitDelay_o = 0;
      }
    } else {
      rtb_UnitDelay_o = 0;
    }
  }

  /* DataTypeConversion: '<S256>/Data Type Conversion' */
  rtb_raptor_adjustment_no = (real32_T)rtb_UnitDelay_o;

  /* Product: '<S256>/Divide' incorporates:
   *  DataTypeConversion: '<S256>/Data Type Conversion'
   *  S-Function (raptor_sfun_data_read): '<S256>/raptor_data_read1'
   */
  rtb_IN_frontLeftWheelSpeed_revolutionsPerMin = (real32_T)rtb_UnitDelay_o /
    DATA_wheelTooth_ct_Data();

  /* DataTypeConversion: '<S256>/Data Type Conversion2' incorporates:
   *  Gain: '<S256>/Gain1'
   *  Gain: '<S256>/metersPerMinToMilesPerHour'
   *  Product: '<S256>/Product2'
   *  S-Function (raptor_sfun_data_read): '<S256>/raptor_data_read2'
   */
  rtb_DataTypeConversion2_e = 6.28318548F * DATA_unloadedWheelRadius_m_Data() *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin * 0.03728F;

  /* Outputs for Enabled SubSystem: '<S188>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S192>/Enable'
   */
  if (rtb_RelationalOperator_c) {
    /* S-Function (fcgen): '<S192>/Function-Call Generator' incorporates:
     *  SubSystem: '<S15>/groundSpeed'
     */
    /* MinMax: '<S186>/Min' */
    if ((rtb_DataTypeConversion2 <= rtb_DataTypeConversion2_e) || rtIsNaN
        (rtb_DataTypeConversion2_e)) {
      /* MinMax: '<S186>/Min' */
      EVSR24_B.CTRL_groundSpeed_mph = rtb_DataTypeConversion2;
    } else {
      /* MinMax: '<S186>/Min' */
      EVSR24_B.CTRL_groundSpeed_mph = rtb_DataTypeConversion2_e;
    }

    /* End of MinMax: '<S186>/Min' */

    /* S-Function (raptor_sfun_measurement): '<S186>/raptor_measurement' */
    CTRL_groundSpeed_mph_Data() = EVSR24_B.CTRL_groundSpeed_mph;

    /* End of Outputs for S-Function (fcgen): '<S192>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S188>/Enabled Subsystem' */

  /* UnitDelay: '<S187>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_o;

  /* Sum: '<S187>/Sum' */
  rtb_Sum_a = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_a = MAX_uint32_T;
  }

  /* RelationalOperator: '<S187>/Relational Operator' incorporates:
   *  Sum: '<S187>/Sum'
   */
  rtb_RelationalOperator_fy = (EVSR24_ConstB.DataTypeConversion_k <= rtb_Sum_a);

  /* S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in1' */
  /* S-Function Block: INPUT41 */
  {
    uint32 freq_temp = 0;
    uint32 duty_temp = 0;
    if (swsh_PWMin_Period_Duty_ECUA035((uint32*) &freq_temp, (uint32*)
         &duty_temp)) {
      if (freq_temp > 0) {
        real32_T freqHz = 1000000;
        freqHz /= freq_temp;
        freqHz *= 100;
        rtb_UnitDelay_o = freqHz;
      } else {
        rtb_UnitDelay_o = 0;
      }
    } else {
      rtb_UnitDelay_o = 0;
    }
  }

  /* DataTypeConversion: '<S259>/Data Type Conversion' */
  rtb_DataTypeConversion_b_tmp_tmp = (real32_T)rtb_UnitDelay_o;

  /* Product: '<S259>/Divide' incorporates:
   *  DataTypeConversion: '<S259>/Data Type Conversion'
   *  S-Function (raptor_sfun_data_read): '<S259>/raptor_data_read1'
   */
  rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_ou = (real32_T)rtb_UnitDelay_o /
    DATA_wheelTooth_ct_Data();

  /* DataTypeConversion: '<S259>/Data Type Conversion2' incorporates:
   *  Gain: '<S259>/Gain1'
   *  Gain: '<S259>/metersPerMinToMilesPerHour'
   *  Product: '<S259>/Product2'
   *  S-Function (raptor_sfun_data_read): '<S259>/raptor_data_read2'
   */
  rtb_DataTypeConversion2_d = 6.28318548F * DATA_unloadedWheelRadius_m_Data() *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_ou * 0.03728F;

  /* S-Function (raptor_sfun_freq_in): '<S206>/raptor_freq_in2' */
  /* S-Function Block: INPUT42 */
  {
    uint32 freq_temp = 0;
    uint32 duty_temp = 0;
    if (swsh_PWMin_Period_Duty_ECUK018((uint32*) &freq_temp, (uint32*)
         &duty_temp)) {
      if (freq_temp > 0) {
        real32_T freqHz = 1000000;
        freqHz /= freq_temp;
        freqHz *= 100;
        rtb_UnitDelay_o = freqHz;
      } else {
        rtb_UnitDelay_o = 0;
      }
    } else {
      rtb_UnitDelay_o = 0;
    }
  }

  /* DataTypeConversion: '<S258>/Data Type Conversion' */
  rtb_DataTypeConversion_kr_tmp_tmp = (real32_T)rtb_UnitDelay_o;

  /* Product: '<S258>/Divide' incorporates:
   *  DataTypeConversion: '<S258>/Data Type Conversion'
   *  S-Function (raptor_sfun_data_read): '<S258>/raptor_data_read1'
   */
  rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_o = (real32_T)rtb_UnitDelay_o /
    DATA_wheelTooth_ct_Data();

  /* Gain: '<S258>/metersPerMinToMilesPerHour' incorporates:
   *  Gain: '<S258>/Gain1'
   *  Product: '<S258>/Product2'
   *  S-Function (raptor_sfun_data_read): '<S258>/raptor_data_read2'
   */
  rtb_DataTypeConversion_m = 6.28318548F * DATA_unloadedWheelRadius_m_Data() *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_o * 0.03728F;

  /* DataTypeConversion: '<S258>/Data Type Conversion2' */
  rtb_DataTypeConversion2_i = rtb_DataTypeConversion_m;

  /* Outputs for Enabled SubSystem: '<S187>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S191>/Enable'
   */
  if (rtb_RelationalOperator_fy) {
    /* S-Function (fcgen): '<S191>/Function-Call Generator' incorporates:
     *  SubSystem: '<S15>/driveSpeed'
     */
    /* MinMax: '<S185>/Max' */
    if ((rtb_DataTypeConversion2_d >= rtb_DataTypeConversion2_i) || rtIsNaN
        (rtb_DataTypeConversion2_i)) {
      /* MinMax: '<S185>/Max' */
      EVSR24_B.CTRL_driveSpeed_mph = rtb_DataTypeConversion2_d;
    } else {
      /* MinMax: '<S185>/Max' */
      EVSR24_B.CTRL_driveSpeed_mph = rtb_DataTypeConversion2_i;
    }

    /* End of MinMax: '<S185>/Max' */

    /* S-Function (raptor_sfun_measurement): '<S185>/raptor_measurement' */
    CTRL_driveSpeed_mph_Data() = EVSR24_B.CTRL_driveSpeed_mph;

    /* End of Outputs for S-Function (fcgen): '<S191>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S187>/Enabled Subsystem' */

  /* Outputs for Enabled SubSystem: '<S189>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S193>/Enable'
   */
  if (rtb_RelationalOperator_h) {
    /* S-Function (fcgen): '<S193>/Function-Call Generator' incorporates:
     *  SubSystem: '<S15>/slipRatio'
     */
    /* S-Function (raptor_sfun_adjustment): '<S190>/raptor_adjustment1' */
    rtb_raptor_adjustment1_p = (CTRL_slipRatioUpperThresh_Data());

    /* Saturate: '<S190>/preventZeroDivision' */
    if (EVSR24_B.CTRL_driveSpeed_mph <= 0.0001) {
      rtb_Subtract = 0.0001;
    } else {
      rtb_Subtract = EVSR24_B.CTRL_driveSpeed_mph;
    }

    /* Sum: '<S190>/Subtract' incorporates:
     *  Product: '<S190>/Divide'
     *  S-Function (raptor_sfun_adjustment): '<S190>/raptor_adjustment'
     *  Saturate: '<S190>/preventZeroDivision'
     */
    rtb_Subtract = (CTRL_slipConstant_Data()) - EVSR24_B.CTRL_groundSpeed_mph /
      rtb_Subtract;

    /* Switch: '<S194>/Switch2' incorporates:
     *  RelationalOperator: '<S194>/LowerRelop1'
     *  RelationalOperator: '<S194>/UpperRelop'
     *  Switch: '<S194>/Switch'
     */
    if (rtb_Subtract > rtb_raptor_adjustment1_p) {
      rtb_Subtract = rtb_raptor_adjustment1_p;
    } else if (rtb_Subtract < 0.0) {
      /* Switch: '<S194>/Switch' incorporates:
       *  Constant: '<S190>/Constant'
       */
      rtb_Subtract = 0.0;
    }

    /* End of Switch: '<S194>/Switch2' */

    /* Gain: '<S190>/Gain' */
    EVSR24_B.CTRL_slipRatio = 100.0 * rtb_Subtract;

    /* S-Function (raptor_sfun_measurement): '<S190>/raptor_measurement' */
    CTRL_slipRatio_Data() = EVSR24_B.CTRL_slipRatio;

    /* End of Outputs for S-Function (fcgen): '<S193>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S189>/Enabled Subsystem' */

  /* UnitDelay: '<S88>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_e;

  /* Sum: '<S88>/Sum' */
  rtb_Sum_h = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_h = MAX_uint32_T;
  }

  /* RelationalOperator: '<S88>/Relational Operator' incorporates:
   *  Sum: '<S88>/Sum'
   */
  rtb_RelationalOperator_dd = (EVSR24_ConstB.DataTypeConversion_h3 <= rtb_Sum_h);

  /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S91>/Enable'
   */
  if (rtb_RelationalOperator_dd) {
    /* RelationalOperator: '<S86>/GreaterThanOrEqual' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S86>/raptor_adjustment'
     */
    EVSR24_B.GreaterThanOrEqual = (EVSR24_B.CTRL_slipRatio >=
      (IN_slipThreshold_Data()));

    /* End of Outputs for S-Function (fcgen): '<S91>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S263>/raptor_can_rxmsg1' */

  /* S-Function Block:<S263>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9068__0001(&rtb_Age_p, NULL, NULL, &data[0], 8);

    /* Signal: MM5_ay      */
    {
      uint32_T tMM5_ay ;
      tMM5_ay = 0;
      tMM5_ay |= ((uint32_T)data[4U]) ;
      tMM5_ay |= ((uint32_T)data[5U]) << 8;
      rtb_MM5_ay = (((real_T) tMM5_ay / (real_T) -7849.2935635792774) + (real_T)
                    4.1745795);
    }

    /* Signal: MM5_yawRate */
    {
      uint32_T tMM5_yawRate;
      tMM5_yawRate = 0;
      tMM5_yawRate |= ((uint32_T)data[0U]) ;
      tMM5_yawRate |= ((uint32_T)data[1U]) << 8;
      rtb_MM5_yawRate = (((real_T) tMM5_yawRate / (real_T) 200.0) + (real_T)
                         -163.9);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S202>/raptor_analog_in' */
  /* S-Function Block: INPUT9 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA041();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S226>/Data Type Conversion' */
  rtb_DataTypeConversion_m = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_table_axis): '<S227>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis = TableAxis_real32_T( rtb_DataTypeConversion_m,
        IN_tcSetTable_LookupX_Data(), 12u, EVSR24_B.raptor_table_axis);
    }

    idx = 0;
    IN_tcSetTable_LookupX_IN_Data() = rtb_DataTypeConversion_m;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S227>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_raptor_table_interpolate_1d_lx = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis, IN_tcSetTable_Data(), 12u);
    IN_tcSetTable_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis;
  }

  /* Outputs for Enabled SubSystem: '<S87>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_RelationalOperator_j) {
    if (!EVSR24_DWork.EnabledSubsystem_MODE) {
      /* Enable for S-Function (fcgen): '<S90>/Function-Call Generator' incorporates:
       *  SubSystem: '<S13>/tractionControl'
       */
      EVSR24_DWork.tractionControl_RESET_ELAPS_T = true;

      /* Enable for DiscreteIntegrator: '<S129>/Integrator' */
      EVSR24_DWork.Integrator_SYSTEM_ENABLE = 1U;

      /* End of Enable for S-Function (fcgen): '<S90>/Function-Call Generator' */
      EVSR24_DWork.EnabledSubsystem_MODE = true;
    }

    /* S-Function (fcgen): '<S90>/Function-Call Generator' incorporates:
     *  SubSystem: '<S13>/tractionControl'
     */
    if (EVSR24_DWork.tractionControl_RESET_ELAPS_T) {
      rtb_UnitDelay_o = 0U;
    } else {
      rtb_UnitDelay_o = EVSR24_M->Timing.clockTick0 -
        EVSR24_DWork.tractionControl_PREV_T;
    }

    EVSR24_DWork.tractionControl_PREV_T = EVSR24_M->Timing.clockTick0;
    EVSR24_DWork.tractionControl_RESET_ELAPS_T = false;

    /* Switch: '<S89>/Switch1' incorporates:
     *  S-Function (raptor_sfun_adjustment): '<S89>/raptor_adjustment'
     */
    if ((CTRL_tcOverride_bool_Data()) > 0.0F) {
      /* S-Function (raptor_sfun_override): '<S89>/raptor_override' */
      if (IN_tcSet_OvrSts_Data()) {
        EVSR24_B.raptor_override_j = IN_tcSet_OvrVal_Data();
      } else {
        EVSR24_B.raptor_override_j = rtb_raptor_table_interpolate_1d_lx;
      }

      rtb_raptor_adjustment1_p = EVSR24_B.raptor_override_j;
    } else {
      rtb_raptor_adjustment1_p = rtb_raptor_table_interpolate_1d_lx;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* S-Function (raptor_sfun_table_axis): '<S95>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_l = TableAxis_real32_T
          ( EVSR24_B.CTRL_groundSpeed_mph, CTRL_yawRateToAimSlip_LookupY_Data(),
           10u, EVSR24_B.raptor_table_axis_y_l);
      }

      idx = 0;
      CTRL_yawRateToAimSlip_LookupY_IN_Data() = EVSR24_B.CTRL_groundSpeed_mph;
    }

    /* S-Function (raptor_sfun_table_axis): '<S95>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_f = TableAxis_real32_T( rtb_MM5_yawRate,
          CTRL_yawRateToAimSlip_LookupX_Data(), 13u,
          EVSR24_B.raptor_table_axis_x_f);
      }

      idx = 0;
      CTRL_yawRateToAimSlip_LookupX_IN_Data() = rtb_MM5_yawRate;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S95>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_DerivativeGain = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_l, EVSR24_B.raptor_table_axis_x_f,
         &CTRL_yawRateToAimSlip_Data()[0][0], 10, 13);
      CTRL_yawRateToAimSlip_X_IN_IDX_Data() = EVSR24_B.raptor_table_axis_x_f;
      CTRL_yawRateToAimSlip_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_y_l;
    }

    /* Product: '<S89>/Product' */
    rtb_DerivativeGain *= rtb_raptor_adjustment1_p;

    /* S-Function (raptor_sfun_measurement): '<S89>/raptor_measurement' */
    CTRL_slipAim_Data() = rtb_DerivativeGain;

    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S89>/Constant3'
     *  Sum: '<S89>/Subtract'
     */
    if (EVSR24_B.GreaterThanOrEqual) {
      rtb_DerivativeGain -= EVSR24_B.CTRL_slipRatio;
    } else {
      rtb_DerivativeGain = 0.0;
    }

    /* End of Switch: '<S89>/Switch' */

    /* S-Function (raptor_sfun_measurement): '<S89>/raptor_measurement1' */
    CTRL_slipAimError_Data() = rtb_DerivativeGain;

    /* S-Function (raptor_sfun_adjustment): '<S89>/raptor_adjustment2' */
    rtb_raptor_adjustment1_p = (CTRL_upperThreshPIDIn_Data());

    /* Switch: '<S94>/Switch2' incorporates:
     *  RelationalOperator: '<S94>/LowerRelop1'
     *  RelationalOperator: '<S94>/UpperRelop'
     *  Switch: '<S94>/Switch'
     */
    if (rtb_DerivativeGain > rtb_raptor_adjustment1_p) {
      rtb_Subtract = rtb_raptor_adjustment1_p;
    } else if (rtb_DerivativeGain < 0.0) {
      /* Switch: '<S94>/Switch' incorporates:
       *  Constant: '<S89>/Constant2'
       */
      rtb_Subtract = 0.0;
    } else {
      rtb_Subtract = rtb_DerivativeGain;
    }

    /* End of Switch: '<S94>/Switch2' */

    /* DiscreteIntegrator: '<S129>/Integrator' */
    if (EVSR24_DWork.Integrator_SYSTEM_ENABLE != 0) {
      /* DiscreteIntegrator: '<S129>/Integrator' */
      Integrator = EVSR24_DWork.Integrator_DSTATE;
    } else {
      /* DiscreteIntegrator: '<S129>/Integrator' */
      Integrator = 0.01 * (real_T)rtb_UnitDelay_o *
        EVSR24_DWork.Integrator_PREV_U + EVSR24_DWork.Integrator_DSTATE;
    }

    /* End of DiscreteIntegrator: '<S129>/Integrator' */

    /* Gain: '<S121>/Derivative Gain' */
    rtb_DerivativeGain = 10.0 * rtb_Subtract;

    /* SampleTimeMath: '<S124>/Tsamp'
     *
     * About '<S124>/Tsamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_DerivativeGain /= (real_T)rtb_UnitDelay_o * 0.01;

    /* Sum: '<S138>/Sum' incorporates:
     *  Delay: '<S122>/UD'
     *  Gain: '<S134>/Proportional Gain'
     *  Sum: '<S122>/Diff'
     */
    rtb_Sum = (10.0 * rtb_Subtract + Integrator) + (rtb_DerivativeGain -
      EVSR24_DWork.UD_DSTATE);

    /* S-Function (raptor_sfun_measurement): '<S89>/raptor_measurement2' */
    CTRL_tcPowerReduction_pct_Data() = rtb_Sum;

    /* S-Function (raptor_sfun_adjustment): '<S89>/raptor_adjustment1' */
    rtb_raptor_adjustment1_p = (CTRL_upperThreshPwrReduction_Data());

    /* Switch: '<S93>/Switch2' incorporates:
     *  RelationalOperator: '<S93>/LowerRelop1'
     *  RelationalOperator: '<S93>/UpperRelop'
     *  Switch: '<S93>/Switch'
     */
    if (rtb_Sum > rtb_raptor_adjustment1_p) {
      /* Switch: '<S93>/Switch2' */
      EVSR24_B.Switch2 = rtb_raptor_adjustment1_p;
    } else if (rtb_Sum < 0.0) {
      /* Switch: '<S93>/Switch' incorporates:
       *  Constant: '<S89>/Constant1'
       *  Switch: '<S93>/Switch2'
       */
      EVSR24_B.Switch2 = 0.0;
    } else {
      /* Switch: '<S93>/Switch2' incorporates:
       *  Switch: '<S93>/Switch'
       */
      EVSR24_B.Switch2 = rtb_Sum;
    }

    /* End of Switch: '<S93>/Switch2' */

    /* Update for DiscreteIntegrator: '<S129>/Integrator' */
    EVSR24_DWork.Integrator_SYSTEM_ENABLE = 0U;
    EVSR24_DWork.Integrator_DSTATE = Integrator;
    EVSR24_DWork.Integrator_PREV_U = rtb_Subtract;

    /* Update for Delay: '<S122>/UD' */
    EVSR24_DWork.UD_DSTATE = rtb_DerivativeGain;

    /* End of Outputs for S-Function (fcgen): '<S90>/Function-Call Generator' */
  } else {
    EVSR24_DWork.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S87>/Enabled Subsystem' */

  /* Outputs for Enabled SubSystem: '<S81>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S83>/Enable'
   */
  /* RelationalOperator: '<S81>/Relational Operator' incorporates:
   *  Sum: '<S81>/Sum'
   */
  if (EVSR24_ConstB.DataTypeConversion_py <= rtb_MultiportSwitch_k) {
    /* S-Function (raptor_sfun_adjustment): '<S80>/raptor_adjustment1' */
    rtb_DerivativeGain = (CTRL_bspcThrottleThresh_pct_Data());

    /* S-Function (raptor_sfun_adjustment): '<S80>/raptor_adjustment' */
    rtb_Subtract = (CTRL_bspcBrakeThresh_pct_Data());

    /* S-Function (fcgen): '<S83>/Function-Call Generator' incorporates:
     *  SubSystem: '<S12>/torqueCommand'
     */
    /* Switch: '<S82>/Switch1' incorporates:
     *  Logic: '<S80>/AND'
     *  Logic: '<S80>/OR'
     *  Logic: '<S80>/OR1'
     *  Product: '<S82>/Product'
     *  RelationalOperator: '<S80>/GreaterThan'
     *  RelationalOperator: '<S80>/GreaterThan1'
     *  RelationalOperator: '<S80>/GreaterThan2'
     *  RelationalOperator: '<S80>/GreaterThan3'
     *  S-Function (raptor_sfun_adjustment): '<S80>/raptor_adjustment'
     *  S-Function (raptor_sfun_adjustment): '<S80>/raptor_adjustment1'
     *  S-Function (raptor_sfun_adjustment): '<S82>/raptor_adjustment'
     */
    if (((rtb_IN_throttlePos_pct > rtb_DerivativeGain) ||
         (rtb_IN_throttlePos_pct_d > rtb_DerivativeGain)) &&
        ((rtb_IN_brakePos_pct > rtb_Subtract) || (rtb_IN_brakePos_pct_n >
          rtb_Subtract))) {
      rtb_IN_brakePos_pct_n = (CTRL_bspcTorqueOverride_Nm_Data());
    } else {
      /* S-Function (raptor_sfun_table_axis): '<S85>/raptor_table_axis' */
      {
        int idx;
        extern uint16_T TableAxis_real32_T(const real32_T invalue, const
          real32_T * data, const uint32_T width, const uint16_T prev);
        for (idx=0;idx<1;idx++) {
          EVSR24_B.raptor_table_axis_it = TableAxis_real32_T
            ( rtb_IN_throttlePos_pct, CTRL_throttleToNm_LookupX_Data(), 81u,
             EVSR24_B.raptor_table_axis_it);
        }

        idx = 0;
        CTRL_throttleToNm_LookupX_IN_Data() = rtb_IN_throttlePos_pct;
      }

      /* S-Function (raptor_sfun_table_interpolate_1d): '<S85>/raptor_table_interpolate_1d' */
      {
        extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
          real32_T * data, const uint16_T width);
        rtb_raptor_table_interpolate_1d_n2 = TableInterpolate1D_real32_T
          ( EVSR24_B.raptor_table_axis_it, CTRL_throttleToNm_Data(), 81u);
        CTRL_throttleToNm_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_it;
      }

      /* Switch: '<S82>/Switch' incorporates:
       *  Constant: '<S82>/Constant'
       *  Gain: '<S82>/Gain'
       */
      if (EVSR24_B.GreaterThanOrEqual) {
        rtb_IN_brakePos_pct_n = 0.01 * EVSR24_B.Switch2;
      } else {
        rtb_IN_brakePos_pct_n = 1.0;
      }

      /* End of Switch: '<S82>/Switch' */

      /* S-Function (raptor_sfun_data_read): '<S82>/raptor_data_read' */
      rtb_DATA_maxMotorTorque_Nm = DATA_maxMotorTorque_Nm_Data();

      /* Switch: '<S84>/Switch2' incorporates:
       *  RelationalOperator: '<S84>/LowerRelop1'
       *  RelationalOperator: '<S84>/UpperRelop'
       *  Switch: '<S84>/Switch'
       */
      if (rtb_raptor_table_interpolate_1d_n2 > rtb_DATA_maxMotorTorque_Nm) {
        rtb_DerivativeGain = rtb_DATA_maxMotorTorque_Nm;
      } else if (rtb_raptor_table_interpolate_1d_n2 < 0.0) {
        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S82>/Constant1'
         */
        rtb_DerivativeGain = 0.0;
      } else {
        rtb_DerivativeGain = rtb_raptor_table_interpolate_1d_n2;
      }

      /* End of Switch: '<S84>/Switch2' */
      rtb_IN_brakePos_pct_n *= rtb_DerivativeGain;
    }

    /* End of Switch: '<S82>/Switch1' */

    /* S-Function (raptor_sfun_override): '<S82>/raptor_override' */
    if (CTRL_torqueCommand_Nm_OvrSts_Data()) {
      EVSR24_B.CTRL_torqueCommand_Nm = CTRL_torqueCommand_Nm_OvrVal_Data();
    } else {
      EVSR24_B.CTRL_torqueCommand_Nm = rtb_IN_brakePos_pct_n;
    }

    CTRL_torqueCommand_Nm_Data() = EVSR24_B.CTRL_torqueCommand_Nm;

    /* S-Function (raptor_sfun_adjustment): '<S82>/raptor_adjustment1' */
    rtb_raptor_adjustment1_b = (CTRL_torqueCommandOverride_bool_Data());

    /* End of Outputs for S-Function (fcgen): '<S83>/Function-Call Generator' */

    /* MultiPortSwitch: '<S81>/Multiport Switch' incorporates:
     *  Constant: '<S81>/Constant2'
     */
    rtb_MultiportSwitch_k = 0U;
  }

  /* End of RelationalOperator: '<S81>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S81>/Enabled Subsystem' */

  /* MultiPortSwitch: '<S87>/Multiport Switch' incorporates:
   *  Constant: '<S87>/Constant2'
   */
  if (rtb_RelationalOperator_j) {
    rtb_MultiportSwitch_m = 0U;
  }

  /* End of MultiPortSwitch: '<S87>/Multiport Switch' */

  /* MultiPortSwitch: '<S88>/Multiport Switch' incorporates:
   *  Constant: '<S88>/Constant2'
   */
  if (rtb_RelationalOperator_dd != 0) {
    rtb_Sum_h = 0U;
  }

  /* End of MultiPortSwitch: '<S88>/Multiport Switch' */

  /* UnitDelay: '<S148>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_g;

  /* Sum: '<S148>/Sum' */
  rtb_MultiportSwitch_i = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_MultiportSwitch_i = MAX_uint32_T;
  }

  /* RelationalOperator: '<S148>/Relational Operator' incorporates:
   *  Sum: '<S148>/Sum'
   */
  rtb_RelationalOperator_dd = (EVSR24_ConstB.DataTypeConversion_dr <=
    rtb_MultiportSwitch_i);

  /* S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in' */
  /* S-Function Block: INPUT10 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA042();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S213>/Data Type Conversion1' */
  rtb_IN_brakePos_pct_n = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_table_axis): '<S216>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_b = TableAxis_real32_T( rtb_IN_brakePos_pct_n,
        IN_coolantTempVToDegMotorIn_LookupX_Data(), 20u,
        EVSR24_B.raptor_table_axis_b);
    }

    idx = 0;
    IN_coolantTempVToDegMotorIn_LookupX_IN_Data() = rtb_IN_brakePos_pct_n;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S216>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_raptor_table_interpolate_1d = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_b, IN_coolantTempVToDegMotorIn_Data(), 20u);
    IN_coolantTempVToDegMotorIn_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_b;
  }

  /* Switch: '<S213>/Switch' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S213>/raptor_adjustment2'
   */
  if ((IN_coolantTempMotorIn_bool_Data())) {
    /* S-Function (raptor_sfun_override): '<S213>/raptor_override1' */
    if (IN_coolantTempMotorIn_deg_OvrSts_Data()) {
      EVSR24_B.raptor_override1_ok = IN_coolantTempMotorIn_deg_OvrVal_Data();
    } else {
      EVSR24_B.raptor_override1_ok = rtb_raptor_table_interpolate_1d;
    }

    IN_coolantTempMotorIn_deg_Data() = EVSR24_B.raptor_override1_ok;
    rtb_DerivativeGain = EVSR24_B.raptor_override1_ok;
  } else {
    rtb_DerivativeGain = rtb_raptor_table_interpolate_1d;
  }

  /* End of Switch: '<S213>/Switch' */

  /* S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in1' */
  /* S-Function Block: INPUT11 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA055();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S211>/Data Type Conversion1' */
  rtb_IN_brakePos_pct = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_table_axis): '<S214>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_k = TableAxis_real32_T( rtb_IN_brakePos_pct,
        IN_coolantTempVToDegInverterIn_LookupX_Data(), 20u,
        EVSR24_B.raptor_table_axis_k);
    }

    idx = 0;
    IN_coolantTempVToDegInverterIn_LookupX_IN_Data() = rtb_IN_brakePos_pct;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S214>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_raptor_table_interpolate_1d_a = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_k, IN_coolantTempVToDegInverterIn_Data(), 20u);
    IN_coolantTempVToDegInverterIn_Y_IN_IDX_Data() =
      EVSR24_B.raptor_table_axis_k;
  }

  /* Switch: '<S211>/Switch' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S211>/raptor_adjustment2'
   */
  if ((IN_coolantTempInverterIn_bool_Data())) {
    /* S-Function (raptor_sfun_override): '<S211>/raptor_override1' */
    if (IN_coolantTempInverterIn_deg_OvrSts_Data()) {
      EVSR24_B.raptor_override1_jd = IN_coolantTempInverterIn_deg_OvrVal_Data();
    } else {
      EVSR24_B.raptor_override1_jd = rtb_raptor_table_interpolate_1d_a;
    }

    IN_coolantTempInverterIn_deg_Data() = EVSR24_B.raptor_override1_jd;
    rtb_Subtract = EVSR24_B.raptor_override1_jd;
  } else {
    rtb_Subtract = rtb_raptor_table_interpolate_1d_a;
  }

  /* End of Switch: '<S211>/Switch' */

  /* S-Function (raptor_sfun_analog_in): '<S199>/raptor_analog_in2' */
  /* S-Function Block: INPUT12 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA059();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S212>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_table_axis): '<S215>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_kh = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_coolantTempVToDegInverterOut_LookupX_Data(), 20u,
         EVSR24_B.raptor_table_axis_kh);
    }

    idx = 0;
    IN_coolantTempVToDegInverterOut_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S215>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_raptor_table_interpolate_1d_h = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_kh, IN_coolantTempVToDegInverterOut_Data(),
       20u);
    IN_coolantTempVToDegInverterOut_Y_IN_IDX_Data() =
      EVSR24_B.raptor_table_axis_kh;
  }

  /* Switch: '<S212>/Switch' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S212>/raptor_adjustment2'
   */
  if ((IN_coolantTempInverterOut_bool_Data())) {
    /* S-Function (raptor_sfun_override): '<S212>/raptor_override1' */
    if (IN_coolantTempInverterOut_deg_OvrSts_Data()) {
      EVSR24_B.raptor_override1_cn = IN_coolantTempInverterOut_deg_OvrVal_Data();
    } else {
      EVSR24_B.raptor_override1_cn = rtb_raptor_table_interpolate_1d_h;
    }

    IN_coolantTempInverterOut_deg_Data() = EVSR24_B.raptor_override1_cn;
    Integrator = EVSR24_B.raptor_override1_cn;
  } else {
    Integrator = rtb_raptor_table_interpolate_1d_h;
  }

  /* End of Switch: '<S212>/Switch' */

  /* Outputs for Enabled SubSystem: '<S148>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S176>/Enable'
   */
  if (rtb_RelationalOperator_dd) {
    /* S-Function (fcgen): '<S176>/Function-Call Generator' incorporates:
     *  SubSystem: '<S14>/fanDutyLeft'
     */
    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment1' */
    rtb_raptor_adjustment1_no = (CTRL_upperThreshCoolantInverterInLVLeft_Data());

    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment2' */
    rtb_raptor_adjustment2_m = (CTRL_upperThreshCoolantMotorInLVLeft_Data());

    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment3' */
    rtb_raptor_adjustment3_i = (CTRL_upperThreshCoolantInverterOutLVLeft_Data());

    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment4' */
    rtb_raptor_adjustment4_c = (CTRL_upperThreshCoolantInverterInHVLeft_Data());

    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment5' */
    rtb_raptor_adjustment5_b = (CTRL_upperThreshCoolantMotorInHVLeft_Data());

    /* S-Function (raptor_sfun_adjustment): '<S146>/raptor_adjustment6' */
    rtb_raptor_adjustment6_g = (CTRL_upperThreshCoolantInverterOutHVLeft_Data());

    /* S-Function (raptor_sfun_table_axis): '<S158>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_pr = TableAxis_real32_T( rtb_DerivativeGain,
          CTRL_coolantTempMotorInToLeftHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_pr);
      }

      idx = 0;
      CTRL_coolantTempMotorInToLeftHVDuty_LookupX_IN_Data() = rtb_DerivativeGain;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S158>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_ps = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_pr,
         CTRL_coolantTempMotorInToLeftHVDuty_Data(), 11u);
      CTRL_coolantTempMotorInToLeftHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_pr;
    }

    /* S-Function (raptor_sfun_table_axis): '<S159>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_gi = TableAxis_real32_T( rtb_Subtract,
          CTRL_coolantTempInverterInToLeftHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_gi);
      }

      idx = 0;
      CTRL_coolantTempInverterInToLeftHVDuty_LookupX_IN_Data() = rtb_Subtract;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S159>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_k = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_gi,
         CTRL_coolantTempInverterInToLeftHVDuty_Data(), 11u);
      CTRL_coolantTempInverterInToLeftHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_gi;
    }

    /* S-Function (raptor_sfun_table_axis): '<S160>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_j0 = TableAxis_real32_T( Integrator,
          CTRL_coolantTempInverterOutToLeftHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_j0);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToLeftHVDuty_LookupX_IN_Data() = Integrator;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S160>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_o = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_j0,
         CTRL_coolantTempInverterOutToLeftHVDuty_Data(), 11u);
      CTRL_coolantTempInverterOutToLeftHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_j0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S161>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_h = TableAxis_real32_T( 0.0,
          CTRL_coolantTempMotorInToLeftLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_h);
      }

      idx = 0;
      CTRL_coolantTempMotorInToLeftLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S161>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_h = TableAxis_real32_T( rtb_DerivativeGain,
          CTRL_coolantTempMotorInToLeftLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_h);
      }

      idx = 0;
      CTRL_coolantTempMotorInToLeftLVDuty_LookupY_IN_Data() = rtb_DerivativeGain;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S161>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_n = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_h, EVSR24_B.raptor_table_axis_x_h,
         &CTRL_coolantTempMotorInToLeftLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempMotorInToLeftLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_h;
      CTRL_coolantTempMotorInToLeftLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_h;
    }

    /* S-Function (raptor_sfun_table_axis): '<S162>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_l = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterInToLeftLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_l);
      }

      idx = 0;
      CTRL_coolantTempInverterInToLeftLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S162>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_kl = TableAxis_real32_T( rtb_Subtract,
          CTRL_coolantTempInverterInToLeftLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_kl);
      }

      idx = 0;
      CTRL_coolantTempInverterInToLeftLVDuty_LookupY_IN_Data() = rtb_Subtract;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S162>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_dt = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_kl, EVSR24_B.raptor_table_axis_x_l,
         &CTRL_coolantTempInverterInToLeftLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempInverterInToLeftLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_l;
      CTRL_coolantTempInverterInToLeftLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_kl;
    }

    /* S-Function (raptor_sfun_table_axis): '<S163>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_mm = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterOutToLeftLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_mm);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToLeftLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S163>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_d = TableAxis_real32_T( Integrator,
          CTRL_coolantTempInverterOutToLeftLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_d);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToLeftLVDuty_LookupY_IN_Data() = Integrator;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S163>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_b = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_d, EVSR24_B.raptor_table_axis_x_mm,
         &CTRL_coolantTempInverterOutToLeftLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempInverterOutToLeftLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_mm;
      CTRL_coolantTempInverterOutToLeftLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_d;
    }

    /* End of Outputs for S-Function (fcgen): '<S176>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S148>/Enabled Subsystem' */

  /* UnitDelay: '<S149>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_f;

  /* Sum: '<S149>/Sum' */
  rtb_Sum_jt = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_jt = MAX_uint32_T;
  }

  /* RelationalOperator: '<S149>/Relational Operator' incorporates:
   *  Sum: '<S149>/Sum'
   */
  rtb_RelationalOperator_j = (EVSR24_ConstB.DataTypeConversion_a <= rtb_Sum_jt);

  /* Outputs for Enabled SubSystem: '<S149>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S177>/Enable'
   */
  if (rtb_RelationalOperator_j) {
    /* S-Function (fcgen): '<S177>/Function-Call Generator' incorporates:
     *  SubSystem: '<S14>/fanDutyRight'
     */
    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment1' */
    rtb_raptor_adjustment1_bd = (CTRL_upperThreshCoolantInverterInLVRight_Data());

    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment2' */
    rtb_raptor_adjustment2_b = (CTRL_upperThreshCoolantMotorInLVRight_Data());

    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment3' */
    rtb_raptor_adjustment3_oc = (CTRL_upperThreshCoolantInverterOutLVRight_Data());

    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment4' */
    rtb_raptor_adjustment4_ku = (CTRL_upperThreshCoolantInverterInHVRight_Data());

    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment5' */
    rtb_raptor_adjustment5_l1 = (CTRL_upperThreshCoolantMotorInHVRight_Data());

    /* S-Function (raptor_sfun_adjustment): '<S147>/raptor_adjustment6' */
    rtb_raptor_adjustment6_n = (CTRL_upperThreshCoolantInverterOutHVRight_Data());

    /* S-Function (raptor_sfun_table_axis): '<S170>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_k5 = TableAxis_real32_T( rtb_DerivativeGain,
          CTRL_coolantTempMotorInToRightHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_k5);
      }

      idx = 0;
      CTRL_coolantTempMotorInToRightHVDuty_LookupX_IN_Data() =
        rtb_DerivativeGain;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S170>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_n = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_k5,
         CTRL_coolantTempMotorInToRightHVDuty_Data(), 11u);
      CTRL_coolantTempMotorInToRightHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_k5;
    }

    /* S-Function (raptor_sfun_table_axis): '<S171>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_b2 = TableAxis_real32_T( rtb_Subtract,
          CTRL_coolantTempInverterInToRightHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_b2);
      }

      idx = 0;
      CTRL_coolantTempInverterInToRightHVDuty_LookupX_IN_Data() = rtb_Subtract;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S171>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_p = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_b2,
         CTRL_coolantTempInverterInToRightHVDuty_Data(), 11u);
      CTRL_coolantTempInverterInToRightHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_b2;
    }

    /* S-Function (raptor_sfun_table_axis): '<S172>/raptor_table_axis' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_m1 = TableAxis_real32_T( Integrator,
          CTRL_coolantTempInverterOutToRightHVDuty_LookupX_Data(), 11u,
          EVSR24_B.raptor_table_axis_m1);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToRightHVDuty_LookupX_IN_Data() = Integrator;
    }

    /* S-Function (raptor_sfun_table_interpolate_1d): '<S172>/raptor_table_interpolate_1d' */
    {
      extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
        real32_T * data, const uint16_T width);
      rtb_raptor_table_interpolate_1d_m = TableInterpolate1D_real32_T
        ( EVSR24_B.raptor_table_axis_m1,
         CTRL_coolantTempInverterOutToRightHVDuty_Data(), 11u);
      CTRL_coolantTempInverterOutToRightHVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_m1;
    }

    /* S-Function (raptor_sfun_table_axis): '<S173>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_j = TableAxis_real32_T( 0.0,
          CTRL_coolantTempMotorInToRightLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_j);
      }

      idx = 0;
      CTRL_coolantTempMotorInToRightLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S173>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_m = TableAxis_real32_T( rtb_DerivativeGain,
          CTRL_coolantTempMotorInToRightLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_m);
      }

      idx = 0;
      CTRL_coolantTempMotorInToRightLVDuty_LookupY_IN_Data() =
        rtb_DerivativeGain;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S173>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_c = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_m, EVSR24_B.raptor_table_axis_x_j,
         &CTRL_coolantTempMotorInToRightLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempMotorInToRightLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_j;
      CTRL_coolantTempMotorInToRightLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_m;
    }

    /* S-Function (raptor_sfun_table_axis): '<S174>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_m = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterInToRightLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_m);
      }

      idx = 0;
      CTRL_coolantTempInverterInToRightLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S174>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_kq = TableAxis_real32_T( rtb_Subtract,
          CTRL_coolantTempInverterInToRightLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_kq);
      }

      idx = 0;
      CTRL_coolantTempInverterInToRightLVDuty_LookupY_IN_Data() = rtb_Subtract;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S174>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_pv = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_kq, EVSR24_B.raptor_table_axis_x_m,
         &CTRL_coolantTempInverterInToRightLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempInverterInToRightLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_m;
      CTRL_coolantTempInverterInToRightLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_kq;
    }

    /* S-Function (raptor_sfun_table_axis): '<S175>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_i = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterOutToRightLVDuty_LookupX_Data(), 14u,
          EVSR24_B.raptor_table_axis_x_i);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToRightLVDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S175>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_ks = TableAxis_real32_T( Integrator,
          CTRL_coolantTempInverterOutToRightLVDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_ks);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToRightLVDuty_LookupY_IN_Data() = Integrator;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S175>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_d = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_ks, EVSR24_B.raptor_table_axis_x_i,
         &CTRL_coolantTempInverterOutToRightLVDuty_Data()[0][0], 11, 14);
      CTRL_coolantTempInverterOutToRightLVDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_i;
      CTRL_coolantTempInverterOutToRightLVDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_ks;
    }

    /* End of Outputs for S-Function (fcgen): '<S177>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S149>/Enabled Subsystem' */

  /* MultiPortSwitch: '<S148>/Multiport Switch' incorporates:
   *  Constant: '<S148>/Constant2'
   */
  if (rtb_RelationalOperator_dd) {
    rtb_MultiportSwitch_i = 0U;
  }

  /* End of MultiPortSwitch: '<S148>/Multiport Switch' */

  /* MultiPortSwitch: '<S149>/Multiport Switch' incorporates:
   *  Constant: '<S149>/Constant2'
   */
  if (rtb_RelationalOperator_j != 0) {
    rtb_Sum_jt = 0U;
  }

  /* End of MultiPortSwitch: '<S149>/Multiport Switch' */

  /* UnitDelay: '<S150>/Unit Delay' */
  rtb_UnitDelay_o = EVSR24_DWork.UnitDelay_DSTATE_m;

  /* Sum: '<S150>/Sum' */
  rtb_Sum_k = rtb_UnitDelay_o + 1U;
  if (rtb_UnitDelay_o + 1U < 1U) {
    rtb_Sum_k = MAX_uint32_T;
  }

  /* RelationalOperator: '<S150>/Relational Operator' incorporates:
   *  Sum: '<S150>/Sum'
   */
  rtb_RelationalOperator_dd = (EVSR24_ConstB.DataTypeConversion_f4 <= rtb_Sum_k);

  /* Outputs for Enabled SubSystem: '<S150>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S178>/Enable'
   */
  if (rtb_RelationalOperator_dd) {
    /* S-Function (fcgen): '<S178>/Function-Call Generator' incorporates:
     *  SubSystem: '<S14>/wpDuty'
     */
    /* S-Function (raptor_sfun_adjustment): '<S151>/raptor_adjustment1' */
    rtb_raptor_adjustment1_d = (CTRL_upperThreshCoolantInverterIn_Data());

    /* S-Function (raptor_sfun_adjustment): '<S151>/raptor_adjustment2' */
    rtb_raptor_adjustment2_n = (CTRL_upperThreshCoolantMotorIn_Data());

    /* S-Function (raptor_sfun_adjustment): '<S151>/raptor_adjustment3' */
    rtb_raptor_adjustment3_ob = (CTRL_upperThreshCoolantInverterOut_Data());

    /* S-Function (raptor_sfun_table_axis): '<S182>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x = TableAxis_real32_T( 0.0,
          CTRL_coolantTempMotorInToWpDuty_LookupX_Data(), 8u,
          EVSR24_B.raptor_table_axis_x);
      }

      idx = 0;
      CTRL_coolantTempMotorInToWpDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S182>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y = TableAxis_real32_T( rtb_DerivativeGain,
          CTRL_coolantTempMotorInToWpDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y);
      }

      idx = 0;
      CTRL_coolantTempMotorInToWpDuty_LookupY_IN_Data() = rtb_DerivativeGain;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S182>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y, EVSR24_B.raptor_table_axis_x,
         &CTRL_coolantTempMotorInToWpDuty_Data()[0][0], 11, 8);
      CTRL_coolantTempMotorInToWpDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x;
      CTRL_coolantTempMotorInToWpDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y;
    }

    /* S-Function (raptor_sfun_table_axis): '<S183>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_a = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterInToWpDuty_LookupX_Data(), 8u,
          EVSR24_B.raptor_table_axis_x_a);
      }

      idx = 0;
      CTRL_coolantTempInverterInToWpDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S183>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_c = TableAxis_real32_T( rtb_Subtract,
          CTRL_coolantTempInverterInToWpDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_c);
      }

      idx = 0;
      CTRL_coolantTempInverterInToWpDuty_LookupY_IN_Data() = rtb_Subtract;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S183>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_j = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_c, EVSR24_B.raptor_table_axis_x_a,
         &CTRL_coolantTempInverterInToWpDuty_Data()[0][0], 11, 8);
      CTRL_coolantTempInverterInToWpDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_a;
      CTRL_coolantTempInverterInToWpDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_c;
    }

    /* S-Function (raptor_sfun_table_axis): '<S184>/raptor_table_axis_x' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_x_ag = TableAxis_real32_T( 0.0,
          CTRL_coolantTempInverterOutToWpDuty_LookupX_Data(), 8u,
          EVSR24_B.raptor_table_axis_x_ag);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToWpDuty_LookupX_IN_Data() = 0.0;
    }

    /* S-Function (raptor_sfun_table_axis): '<S184>/raptor_table_axis_y' */
    {
      int idx;
      extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T *
        data, const uint32_T width, const uint16_T prev);
      for (idx=0;idx<1;idx++) {
        EVSR24_B.raptor_table_axis_y_k = TableAxis_real32_T( Integrator,
          CTRL_coolantTempInverterOutToWpDuty_LookupY_Data(), 11u,
          EVSR24_B.raptor_table_axis_y_k);
      }

      idx = 0;
      CTRL_coolantTempInverterOutToWpDuty_LookupY_IN_Data() = Integrator;
    }

    /* S-Function (raptor_sfun_table_interpolate_2d): '<S184>/raptor_table_interpolate_2d' */
    {
      extern real32_T TableInterpolate2D_real32_T( const uint16_T row_idx, const
        uint16_T col_idx, const real32_T * data, const uint16_T row_sz, const
        uint16_T col_sz);
      rtb_raptor_table_interpolate_2d_p = TableInterpolate2D_real32_T
        ( EVSR24_B.raptor_table_axis_y_k, EVSR24_B.raptor_table_axis_x_ag,
         &CTRL_coolantTempInverterOutToWpDuty_Data()[0][0], 11, 8);
      CTRL_coolantTempInverterOutToWpDuty_X_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_x_ag;
      CTRL_coolantTempInverterOutToWpDuty_Y_IN_IDX_Data() =
        EVSR24_B.raptor_table_axis_y_k;
    }

    /* End of Outputs for S-Function (fcgen): '<S178>/Function-Call Generator' */
  }

  /* End of Outputs for SubSystem: '<S150>/Enabled Subsystem' */

  /* MultiPortSwitch: '<S150>/Multiport Switch' incorporates:
   *  Constant: '<S150>/Constant2'
   */
  if (rtb_RelationalOperator_dd != 0) {
    rtb_Sum_k = 0U;
  }

  /* End of MultiPortSwitch: '<S150>/Multiport Switch' */

  /* MultiPortSwitch: '<S187>/Multiport Switch' incorporates:
   *  Constant: '<S187>/Constant2'
   */
  if (rtb_RelationalOperator_fy != 0) {
    rtb_Sum_a = 0U;
  }

  /* End of MultiPortSwitch: '<S187>/Multiport Switch' */

  /* MultiPortSwitch: '<S188>/Multiport Switch' incorporates:
   *  Constant: '<S188>/Constant2'
   */
  if (rtb_RelationalOperator_c != 0) {
    rtb_Sum_j = 0U;
  }

  /* End of MultiPortSwitch: '<S188>/Multiport Switch' */

  /* MultiPortSwitch: '<S189>/Multiport Switch' incorporates:
   *  Constant: '<S189>/Constant2'
   */
  if (rtb_RelationalOperator_h != 0) {
    rtb_Sum_ip = 0U;
  }

  /* End of MultiPortSwitch: '<S189>/Multiport Switch' */

  /* S-Function (raptor_sfun_fault_def): '<S207>/raptor_fault_def' */

  /* Fault Reference : IN_brakeVLowF_bool */
  {
    {
      updateFaultInput(6, rtb_RelationalOperator_l,
                       IN_brakeVLowF_bool_X_Limit_Data(),
                       IN_brakeVLowF_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S207>/raptor_fault_def1' */

  /* Fault Reference : IN_brakeVHighF_bool */
  {
    {
      updateFaultInput(4, rtb_RelationalOperator_o,
                       IN_brakeVHighF_bool_X_Limit_Data(),
                       IN_brakeVHighF_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S207>/raptor_fault_def3' */

  /* Fault Reference : IN_brakeErrorF_bool */
  {
    {
      updateFaultInput(2, rtb_IN_errorBrake_bool,
                       IN_brakeErrorF_bool_X_Limit_Data(),
                       IN_brakeErrorF_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S207>/raptor_measurement' */
  IN_brakePressureF_psi_Data() = rtb_Max;

  /* S-Function (raptor_sfun_fault_def): '<S208>/raptor_fault_def' */

  /* Fault Reference : IN_brakeVLowR_bool */
  {
    {
      updateFaultInput(7, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_brakeVLowR_bool_X_Limit_Data(),
                       IN_brakeVLowR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S208>/raptor_fault_def1' */

  /* Fault Reference : IN_brakeVHighR_bool */
  {
    {
      updateFaultInput(5, rtb_IN_breakeVoltHigh_bool_j,
                       IN_brakeVHighR_bool_X_Limit_Data(),
                       IN_brakeVHighR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S208>/raptor_fault_def3' */

  /* Fault Reference : IN_brakeErrorR_bool */
  {
    {
      updateFaultInput(3, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_brakeErrorR_bool_X_Limit_Data(),
                       IN_brakeErrorR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S208>/raptor_measurement' */
  IN_brakePressureR_psi_Data() = rtb_DataTypeConversion;

  /* S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in2' */
  /* S-Function Block: INPUT7 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA038();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S209>/Data Type Conversion' */
  rtb_DataTypeConversion = rtb_raptor_analog_in11;

  /* Logic: '<S209>/AND2' incorporates:
   *  Logic: '<S209>/AND'
   *  Logic: '<S209>/AND1'
   *  Logic: '<S209>/NOT'
   *  RelationalOperator: '<S209>/GreaterThanOrEqual'
   *  RelationalOperator: '<S209>/GreaterThanOrEqual1'
   *  RelationalOperator: '<S209>/LessThanOrEqual'
   *  RelationalOperator: '<S209>/LessThanOrEqual1'
   *  S-Function (raptor_sfun_adjustment): '<S209>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S209>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S209>/raptor_adjustment2'
   *  S-Function (raptor_sfun_adjustment): '<S209>/raptor_adjustment3'
   */
  rtb_RelationalOperator_o = ((rtb_DataTypeConversion <=
    (IN_bspdBrakeBadHigh_Data())) && (rtb_DataTypeConversion >=
    (IN_bspdBrakeBadLow_Data())) && ((!(rtb_DataTypeConversion >=
    (IN_bspdBrakeGoodLow_Data()))) || (!(rtb_DataTypeConversion <=
    (IN_bspdBrakeGoodHigh_Data())))));

  /* S-Function (raptor_sfun_fault_def): '<S209>/raptor_fault_def7' */

  /* Fault Reference : IN_bspdBrakeError_bool */
  {
    {
      updateFaultInput(8, rtb_RelationalOperator_o,
                       IN_bspdBrakeError_bool_X_Limit_Data(),
                       IN_bspdBrakeError_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S209>/raptor_measurement' */
  IN_bspdBrakeError_v_Data() = rtb_DataTypeConversion;

  /* S-Function (raptor_sfun_analog_in): '<S198>/raptor_analog_in3' */
  /* S-Function Block: INPUT8 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA040();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* DataTypeConversion: '<S210>/Data Type Conversion' */
  rtb_DataTypeConversion = rtb_raptor_analog_in11;

  /* Logic: '<S210>/AND2' incorporates:
   *  Logic: '<S210>/AND'
   *  Logic: '<S210>/AND1'
   *  Logic: '<S210>/NOT'
   *  RelationalOperator: '<S210>/GreaterThanOrEqual'
   *  RelationalOperator: '<S210>/GreaterThanOrEqual1'
   *  RelationalOperator: '<S210>/LessThanOrEqual'
   *  RelationalOperator: '<S210>/LessThanOrEqual1'
   *  S-Function (raptor_sfun_adjustment): '<S210>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S210>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S210>/raptor_adjustment2'
   *  S-Function (raptor_sfun_adjustment): '<S210>/raptor_adjustment3'
   */
  rtb_RelationalOperator_o = ((rtb_DataTypeConversion <=
    (IN_bspdStatusBadHigh_Data())) && (rtb_DataTypeConversion >=
    (IN_bspdStatusBadLow_Data())) && ((!(rtb_DataTypeConversion >=
    (IN_bspdStatusGoodLow_Data()))) || (!(rtb_DataTypeConversion <=
    (IN_bspdStatusGoodHigh_Data())))));

  /* S-Function (raptor_sfun_fault_def): '<S210>/raptor_fault_def7' */

  /* Fault Reference : IN_bspdStatusError_bool */
  {
    {
      updateFaultInput(9, rtb_RelationalOperator_o,
                       IN_bspdStatusError_bool_X_Limit_Data(),
                       IN_bspdStatusError_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S210>/raptor_measurement' */
  IN_bspdStatusError_v_Data() = rtb_DataTypeConversion;

  /* S-Function (raptor_sfun_adjustment): '<S211>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_coolantTempLowInverterIn_v_Data());

  /* RelationalOperator: '<S211>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_brakePos_pct <
    rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S211>/raptor_fault_def' */

  /* Fault Reference : IN_coolantTempVLowInverterIn_bool */
  {
    {
      updateFaultInput(16, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_coolantTempVLowInverterIn_bool_X_Limit_Data(),
                       IN_coolantTempVLowInverterIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S211>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_coolantTempHighInverterIn_v_Data());

  /* RelationalOperator: '<S211>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_IN_brakePos_pct >
    rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S211>/raptor_fault_def1' */

  /* Fault Reference : IN_coolantTempVHighInverterIn_bool */
  {
    {
      updateFaultInput(13, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_coolantTempVHighInverterIn_bool_X_Limit_Data(),
                       IN_coolantTempVHighInverterIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S211>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S211>/raptor_fault_def3' */

  /* Fault Reference : IN_coolantTempErrorInverterIn_bool */
  {
    {
      updateFaultInput(10, rtb_RelationalOperator_o,
                       IN_coolantTempErrorInverterIn_bool_X_Limit_Data(),
                       IN_coolantTempErrorInverterIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S212>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_coolantTempLowInverterOut_v_Data());

  /* RelationalOperator: '<S212>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S212>/raptor_fault_def' */

  /* Fault Reference : IN_coolantTempVLowInverterOut_bool */
  {
    {
      updateFaultInput(17, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_coolantTempVLowInverterOut_bool_X_Limit_Data(),
                       IN_coolantTempVLowInverterOut_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S212>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_coolantTempHighInverterOut_v_Data());

  /* RelationalOperator: '<S212>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S212>/raptor_fault_def1' */

  /* Fault Reference : IN_coolantTempVHighInverterOut_bool */
  {
    {
      updateFaultInput(14, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_coolantTempVHighInverterOut_bool_X_Limit_Data(),
                       IN_coolantTempVHighInverterOut_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S212>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S212>/raptor_fault_def3' */

  /* Fault Reference : IN_coolantTempErrorInverterOut_bool */
  {
    {
      updateFaultInput(11, rtb_RelationalOperator_o,
                       IN_coolantTempErrorInverterOut_bool_X_Limit_Data(),
                       IN_coolantTempErrorInverterOut_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S213>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_coolantTempLowMotorIn_v_Data());

  /* RelationalOperator: '<S213>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_brakePos_pct_n <
    rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S213>/raptor_fault_def' */

  /* Fault Reference : IN_coolantTempVLowMotorIn_bool */
  {
    {
      updateFaultInput(18, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_coolantTempVLowMotorIn_bool_X_Limit_Data(),
                       IN_coolantTempVLowMotorIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S213>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_coolantTempHighMotorIn_v_Data());

  /* RelationalOperator: '<S213>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_IN_brakePos_pct_n >
    rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S213>/raptor_fault_def1' */

  /* Fault Reference : IN_coolantTempVHighMotorIn_bool */
  {
    {
      updateFaultInput(15, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_coolantTempVHighMotorIn_bool_X_Limit_Data(),
                       IN_coolantTempVHighMotorIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S213>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S213>/raptor_fault_def3' */

  /* Fault Reference : IN_coolantTempErrorMotorIn_bool */
  {
    {
      updateFaultInput(12, rtb_RelationalOperator_o,
                       IN_coolantTempErrorMotorIn_bool_X_Limit_Data(),
                       IN_coolantTempErrorMotorIn_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in' */
  /* S-Function Block: INPUT13 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA062();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in1' */
  /* S-Function Block: INPUT14 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA082();
      rtb_raptor_analog_in10 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in2' */
  /* S-Function Block: INPUT15 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA084();
      rtb_raptor_analog_in1 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S200>/raptor_analog_in3' */
  /* S-Function Block: INPUT16 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA097();
      rtb_raptor_analog_in_f = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S217>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_adjustment): '<S217>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_rotorTempLowFL_v_Data());

  /* RelationalOperator: '<S217>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S217>/raptor_fault_def' */

  /* Fault Reference : IN_rotorTempVLowFL_bool */
  {
    {
      updateFaultInput(39, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_rotorTempVLowFL_bool_X_Limit_Data(),
                       IN_rotorTempVLowFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S217>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_rotorTempHighFL_v_Data());

  /* RelationalOperator: '<S217>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S217>/raptor_fault_def1' */

  /* Fault Reference : IN_rotorTempVHighFL_bool */
  {
    {
      updateFaultInput(35, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_rotorTempVHighFL_bool_X_Limit_Data(),
                       IN_rotorTempVHighFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S217>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S217>/raptor_fault_def3' */

  /* Fault Reference : IN_rotorTempErrorFL_bool */
  {
    {
      updateFaultInput(31, rtb_RelationalOperator_o,
                       IN_rotorTempErrorFL_bool_X_Limit_Data(),
                       IN_rotorTempErrorFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S221>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_l = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_rotorTempVToDegFL_LookupX_Data(), 17u, EVSR24_B.raptor_table_axis_l);
    }

    idx = 0;
    IN_rotorTempVToDegFL_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S221>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_l, IN_rotorTempVToDegFL_Data(), 17u);
    IN_rotorTempVToDegFL_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_l;
  }

  /* S-Function (raptor_sfun_override): '<S217>/raptor_override1' */
  if (IN_rotorTempFL_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1 = IN_rotorTempFL_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1 = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_rotorTempFL_deg_Data() = EVSR24_B.raptor_override1;

  /* S-Function (raptor_sfun_adjustment): '<S217>/raptor_adjustment2' */
  rtb_raptor_adjustment2_l = (IN_rotorTempFL_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in10;

  /* S-Function (raptor_sfun_adjustment): '<S218>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_rotorTempLowRL_v_Data());

  /* RelationalOperator: '<S218>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S218>/raptor_fault_def' */

  /* Fault Reference : IN_rotorTempVLowRL_bool */
  {
    {
      updateFaultInput(41, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_rotorTempVLowRL_bool_X_Limit_Data(),
                       IN_rotorTempVLowRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S218>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_rotorTempHighRL_v_Data());

  /* RelationalOperator: '<S218>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S218>/raptor_fault_def1' */

  /* Fault Reference : IN_rotorTempVHighRL_bool */
  {
    {
      updateFaultInput(37, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_rotorTempVHighRL_bool_X_Limit_Data(),
                       IN_rotorTempVHighRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S218>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S218>/raptor_fault_def3' */

  /* Fault Reference : IN_rotorTempErrorRL_bool */
  {
    {
      updateFaultInput(33, rtb_RelationalOperator_o,
                       IN_rotorTempErrorRL_bool_X_Limit_Data(),
                       IN_rotorTempErrorRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S222>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_g = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_rotorTempVToDegRL_LookupX_Data(), 17u, EVSR24_B.raptor_table_axis_g);
    }

    idx = 0;
    IN_rotorTempVToDegRL_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S222>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_g, IN_rotorTempVToDegRL_Data(), 17u);
    IN_rotorTempVToDegRL_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_g;
  }

  /* S-Function (raptor_sfun_override): '<S218>/raptor_override1' */
  if (IN_rotorTempRL_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_b = IN_rotorTempRL_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_b = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_rotorTempRL_deg_Data() = EVSR24_B.raptor_override1_b;

  /* S-Function (raptor_sfun_adjustment): '<S218>/raptor_adjustment2' */
  rtb_raptor_adjustment2_d = (IN_rotorTempRL_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S219>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_adjustment): '<S219>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_rotorTempLowFR_v_Data());

  /* RelationalOperator: '<S219>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S219>/raptor_fault_def' */

  /* Fault Reference : IN_rotorTempVLowFR_bool */
  {
    {
      updateFaultInput(40, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_rotorTempVLowFR_bool_X_Limit_Data(),
                       IN_rotorTempVLowFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S219>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_rotorTempHighFR_v_Data());

  /* RelationalOperator: '<S219>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S219>/raptor_fault_def1' */

  /* Fault Reference : IN_rotorTempVHighFR_bool */
  {
    {
      updateFaultInput(36, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_rotorTempVHighFR_bool_X_Limit_Data(),
                       IN_rotorTempVHighFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S219>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S219>/raptor_fault_def3' */

  /* Fault Reference : IN_rotorTempErrorFR_bool */
  {
    {
      updateFaultInput(32, rtb_RelationalOperator_o,
                       IN_rotorTempErrorFR_bool_X_Limit_Data(),
                       IN_rotorTempErrorFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S223>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_j = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_rotorTempVToDegFR_LookupX_Data(), 17u, EVSR24_B.raptor_table_axis_j);
    }

    idx = 0;
    IN_rotorTempVToDegFR_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S223>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_j, IN_rotorTempVToDegFR_Data(), 17u);
    IN_rotorTempVToDegFR_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_j;
  }

  /* S-Function (raptor_sfun_override): '<S219>/raptor_override1' */
  if (IN_rotorTempFR_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_n = IN_rotorTempFR_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_n = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_rotorTempFR_deg_Data() = EVSR24_B.raptor_override1_n;

  /* S-Function (raptor_sfun_adjustment): '<S219>/raptor_adjustment2' */
  rtb_raptor_adjustment2_j = (IN_rotorTempFR_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S220>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in_f;

  /* S-Function (raptor_sfun_adjustment): '<S220>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_rotorTempLowRR_v_Data());

  /* RelationalOperator: '<S220>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S220>/raptor_fault_def' */

  /* Fault Reference : IN_rotorTempVLowRR_bool */
  {
    {
      updateFaultInput(42, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_rotorTempVLowRR_bool_X_Limit_Data(),
                       IN_rotorTempVLowRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S220>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_rotorTempHighRR_v_Data());

  /* RelationalOperator: '<S220>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S220>/raptor_fault_def1' */

  /* Fault Reference : IN_rotorTempVHighRR_bool */
  {
    {
      updateFaultInput(38, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_rotorTempVHighRR_bool_X_Limit_Data(),
                       IN_rotorTempVHighRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S220>/OR' */
  rtb_RelationalOperator_o = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S220>/raptor_fault_def3' */

  /* Fault Reference : IN_rotorTempErrorRR_bool */
  {
    {
      updateFaultInput(34, rtb_RelationalOperator_o,
                       IN_rotorTempErrorRR_bool_X_Limit_Data(),
                       IN_rotorTempErrorRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S224>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_d = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_rotorTempVToDegRR_LookupX_Data(), 17u, EVSR24_B.raptor_table_axis_d);
    }

    idx = 0;
    IN_rotorTempVToDegRR_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S224>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_d, IN_rotorTempVToDegRR_Data(), 17u);
    IN_rotorTempVToDegRR_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_d;
  }

  /* S-Function (raptor_sfun_override): '<S220>/raptor_override1' */
  if (IN_rotorTempRR_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_e = IN_rotorTempRR_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_e = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_rotorTempRR_deg_Data() = EVSR24_B.raptor_override1_e;

  /* S-Function (raptor_sfun_adjustment): '<S220>/raptor_adjustment2' */
  rtb_raptor_adjustment2_e = (IN_rotorTempRR_bool_Data());

  /* S-Function (raptor_sfun_analog_in): '<S201>/raptor_analog_in' */
  /* S-Function Block: INPUT17 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA102();
      rtb_raptor_analog_in = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S225>/raptor_measurement' incorporates:
   *  S-Function (raptor_sfun_analog_in): '<S201>/raptor_analog_in'
   */
  IN_startSwitchSig_v_Data() = rtb_raptor_analog_in;

  /* S-Function (raptor_sfun_adjustment): '<S225>/raptor_adjustment' */
  rtb_raptor_adjustment_h = (IN_startSwitchNOHighUpperThresh_Data());

  /* S-Function (raptor_sfun_adjustment): '<S225>/raptor_adjustment1' */
  rtb_raptor_adjustment1_o = (IN_startSwitchNOHighLowerThresh_Data());

  /* S-Function (raptor_sfun_adjustment): '<S225>/raptor_adjustment2' */
  rtb_raptor_adjustment2_h = (IN_startSwitchNOLowLowerThresh_Data());

  /* S-Function (raptor_sfun_measurement): '<S226>/raptor_measurement' */
  IN_tcSetInput_Data() = rtb_DataTypeConversion_m;

  /* S-Function (raptor_sfun_adjustment): '<S228>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_appsThreshold_Data());

  /* RelationalOperator: '<S228>/GreaterThan' incorporates:
   *  Abs: '<S228>/Abs'
   *  Sum: '<S228>/Subtract'
   */
  rtb_IN_frontLeftHallEffectLow_bool = (fabsf((real32_T)(rtb_IN_throttlePos_pct
    - rtb_IN_throttlePos_pct_d)) > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S228>/raptor_fault_def2' */

  /* Fault Reference : IN_appsError_bool */
  {
    {
      updateFaultInput(1, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_appsError_bool_X_Limit_Data(),
                       IN_appsError_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S229>/raptor_fault_def' */

  /* Fault Reference : IN_throttleVLow1_bool */
  {
    {
      updateFaultInput(47, rtb_RelationalOperator_f,
                       IN_throttleVLow1_bool_X_Limit_Data(),
                       IN_throttleVLow1_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S229>/raptor_fault_def1' */

  /* Fault Reference : IN_throttleVHigh1_bool */
  {
    {
      updateFaultInput(45, rtb_RelationalOperator_d,
                       IN_throttleVHigh1_bool_X_Limit_Data(),
                       IN_throttleVHigh1_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S229>/raptor_fault_def3' */

  /* Fault Reference : IN_throttleError1_bool */
  {
    {
      updateFaultInput(43, rtb_RelationalOperator_jz,
                       IN_throttleError1_bool_X_Limit_Data(),
                       IN_throttleError1_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S229>/raptor_measurement' */
  IN_throttlePos1_deg_Data() = rtb_IN_throttlePos_deg_f;

  /* S-Function (raptor_sfun_fault_def): '<S230>/raptor_fault_def' */

  /* Fault Reference : IN_throttleVLow2_bool */
  {
    {
      updateFaultInput(48, rtb_RelationalOperator_ii,
                       IN_throttleVLow2_bool_X_Limit_Data(),
                       IN_throttleVLow2_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S230>/raptor_fault_def1' */

  /* Fault Reference : IN_throttleVHigh2_bool */
  {
    {
      updateFaultInput(46, rtb_RelationalOperator_hw,
                       IN_throttleVHigh2_bool_X_Limit_Data(),
                       IN_throttleVHigh2_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_fault_def): '<S230>/raptor_fault_def3' */

  /* Fault Reference : IN_throttleError2_bool */
  {
    {
      updateFaultInput(44, rtb_RelationalOperator_he,
                       IN_throttleError2_bool_X_Limit_Data(),
                       IN_throttleError2_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S230>/raptor_measurement' */
  IN_throttlePos2_deg_Data() = rtb_Switch2_fj;

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in' */
  /* S-Function Block: INPUT20 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK011();
      rtb_raptor_analog_in_f = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in1' */
  /* S-Function Block: INPUT21 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK013();
      rtb_raptor_analog_in1 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in10' */
  /* S-Function Block: INPUT31 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK041();
      rtb_raptor_analog_in10 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in11' */
  /* S-Function Block: INPUT32 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK075();
      rtb_raptor_analog_in11 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in2' */
  /* S-Function Block: INPUT22 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK030();
      rtb_raptor_analog_in2 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in3' */
  /* S-Function Block: INPUT23 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK034();
      rtb_raptor_analog_in3 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in4' */
  /* S-Function Block: INPUT24 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK035();
      rtb_raptor_analog_in4 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in5' */
  /* S-Function Block: INPUT25 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK042();
      rtb_raptor_analog_in5 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in6' */
  /* S-Function Block: INPUT26 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK045();
      rtb_raptor_analog_in6 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in7' */
  /* S-Function Block: INPUT27 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK051();
      rtb_raptor_analog_in7 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in8' */
  /* S-Function Block: INPUT28 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUK058();
      rtb_raptor_analog_in8 = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_analog_in): '<S204>/raptor_analog_in9' */
  /* S-Function Block: INPUT29 */
  {
    {
      static uint16_T last_value = 0;
      static uint8_T hold = 0;
      if ((MoCADC_stMsg & 0x08) || (MoCADC_stMsg & 0x03)) {
        hold = INPUT29_ADCMon_HoldCount_Data();
      }

      if (hold > 0) {
        hold--;

        //Level 3 monitoring test for APP is active
        rtb_raptor_analog_in9 = last_value;
      } else {
        int16_T input = swsh_Read_ADC_ECUK065();
        last_value = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
        rtb_raptor_analog_in9 = last_value;
      }
    }
  }

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S231>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in_f;

  /* S-Function (raptor_sfun_adjustment): '<S231>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFLI_v_Data());

  /* RelationalOperator: '<S231>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S231>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFLI_bool */
  {
    {
      updateFaultInput(73, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFLI_bool_X_Limit_Data(),
                       IN_tireTempVLowFLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S231>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFLI_v_Data());

  /* RelationalOperator: '<S231>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S231>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFLI_bool */
  {
    {
      updateFaultInput(61, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFLI_bool_X_Limit_Data(),
                       IN_tireTempVHighFLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S231>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S231>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFLI_bool */
  {
    {
      updateFaultInput(49, rtb_RelationalOperator_d,
                       IN_tireTempErrorFLI_bool_X_Limit_Data(),
                       IN_tireTempErrorFLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S243>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_a = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFLI_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_a);
    }

    idx = 0;
    IN_tireTempVToDegFLI_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S243>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_a, IN_tireTempVToDegFLI_Data(), 8u);
    IN_tireTempVToDegFLI_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_a;
  }

  /* S-Function (raptor_sfun_override): '<S231>/raptor_override1' */
  if (IN_tireTempFLI_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_bc = IN_tireTempFLI_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_bc = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFLI_deg_Data() = EVSR24_B.raptor_override1_bc;

  /* S-Function (raptor_sfun_adjustment): '<S231>/raptor_adjustment2' */
  rtb_raptor_adjustment2_nz = (IN_tireTempFLI_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S232>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_adjustment): '<S232>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFLM_v_Data());

  /* RelationalOperator: '<S232>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S232>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFLM_bool */
  {
    {
      updateFaultInput(74, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFLM_bool_X_Limit_Data(),
                       IN_tireTempVLowFLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S232>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFLM_v_Data());

  /* RelationalOperator: '<S232>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S232>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFLM_bool */
  {
    {
      updateFaultInput(62, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFLM_bool_X_Limit_Data(),
                       IN_tireTempVHighFLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S232>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S232>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFLM_bool */
  {
    {
      updateFaultInput(50, rtb_RelationalOperator_d,
                       IN_tireTempErrorFLM_bool_X_Limit_Data(),
                       IN_tireTempErrorFLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S244>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_jz = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFLM_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_jz);
    }

    idx = 0;
    IN_tireTempVToDegFLM_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S244>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_jz, IN_tireTempVToDegFLM_Data(), 8u);
    IN_tireTempVToDegFLM_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_jz;
  }

  /* S-Function (raptor_sfun_override): '<S232>/raptor_override1' */
  if (IN_tireTempFLM_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_m = IN_tireTempFLM_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_m = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFLM_deg_Data() = EVSR24_B.raptor_override1_m;

  /* S-Function (raptor_sfun_adjustment): '<S232>/raptor_adjustment2' */
  rtb_raptor_adjustment2_o1 = (IN_tireTempFLM_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S233>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in2;

  /* S-Function (raptor_sfun_adjustment): '<S233>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFLO_v_Data());

  /* RelationalOperator: '<S233>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S233>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFLO_bool */
  {
    {
      updateFaultInput(75, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFLO_bool_X_Limit_Data(),
                       IN_tireTempVLowFLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S233>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFLO_v_Data());

  /* RelationalOperator: '<S233>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S233>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFLO_bool */
  {
    {
      updateFaultInput(63, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFLO_bool_X_Limit_Data(),
                       IN_tireTempVHighFLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S233>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S233>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFLO_bool */
  {
    {
      updateFaultInput(51, rtb_RelationalOperator_d,
                       IN_tireTempErrorFLO_bool_X_Limit_Data(),
                       IN_tireTempErrorFLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S245>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_l2 = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFLO_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_l2);
    }

    idx = 0;
    IN_tireTempVToDegFLO_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S245>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_l2, IN_tireTempVToDegFLO_Data(), 8u);
    IN_tireTempVToDegFLO_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_l2;
  }

  /* S-Function (raptor_sfun_override): '<S233>/raptor_override1' */
  if (IN_tireTempFLO_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_g = IN_tireTempFLO_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_g = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFLO_deg_Data() = EVSR24_B.raptor_override1_g;

  /* S-Function (raptor_sfun_adjustment): '<S233>/raptor_adjustment2' */
  rtb_raptor_adjustment2_el = (IN_tireTempFLO_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S234>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in6;

  /* S-Function (raptor_sfun_adjustment): '<S234>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFRI_v_Data());

  /* RelationalOperator: '<S234>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S234>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFRI_bool */
  {
    {
      updateFaultInput(76, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFRI_bool_X_Limit_Data(),
                       IN_tireTempVLowFRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S234>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFRI_v_Data());

  /* RelationalOperator: '<S234>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S234>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFRI_bool */
  {
    {
      updateFaultInput(64, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFRI_bool_X_Limit_Data(),
                       IN_tireTempVHighFRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S234>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S234>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFRI_bool */
  {
    {
      updateFaultInput(52, rtb_RelationalOperator_d,
                       IN_tireTempErrorFRI_bool_X_Limit_Data(),
                       IN_tireTempErrorFRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S246>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_n = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFRI_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_n);
    }

    idx = 0;
    IN_tireTempVToDegFRI_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S246>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_n, IN_tireTempVToDegFRI_Data(), 8u);
    IN_tireTempVToDegFRI_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_n;
  }

  /* S-Function (raptor_sfun_override): '<S234>/raptor_override1' */
  if (IN_tireTempFRI_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_h = IN_tireTempFRI_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_h = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFRI_deg_Data() = EVSR24_B.raptor_override1_h;

  /* S-Function (raptor_sfun_adjustment): '<S234>/raptor_adjustment2' */
  rtb_raptor_adjustment2_ni = (IN_tireTempFRI_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S235>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in7;

  /* S-Function (raptor_sfun_adjustment): '<S235>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFRM_v_Data());

  /* RelationalOperator: '<S235>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S235>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFRM_bool */
  {
    {
      updateFaultInput(77, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFRM_bool_X_Limit_Data(),
                       IN_tireTempVLowFRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S235>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFRM_v_Data());

  /* RelationalOperator: '<S235>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S235>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFRM_bool */
  {
    {
      updateFaultInput(65, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFRM_bool_X_Limit_Data(),
                       IN_tireTempVHighFRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S235>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S235>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFRM_bool */
  {
    {
      updateFaultInput(53, rtb_RelationalOperator_d,
                       IN_tireTempErrorFRM_bool_X_Limit_Data(),
                       IN_tireTempErrorFRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S247>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_p = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFRM_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_p);
    }

    idx = 0;
    IN_tireTempVToDegFRM_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S247>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_p, IN_tireTempVToDegFRM_Data(), 8u);
    IN_tireTempVToDegFRM_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_p;
  }

  /* S-Function (raptor_sfun_override): '<S235>/raptor_override1' */
  if (IN_tireTempFRM_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_i = IN_tireTempFRM_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_i = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFRM_deg_Data() = EVSR24_B.raptor_override1_i;

  /* S-Function (raptor_sfun_adjustment): '<S235>/raptor_adjustment2' */
  rtb_raptor_adjustment2_ji = (IN_tireTempFRM_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S236>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in8;

  /* S-Function (raptor_sfun_adjustment): '<S236>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowFRO_v_Data());

  /* RelationalOperator: '<S236>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S236>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowFRO_bool */
  {
    {
      updateFaultInput(78, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowFRO_bool_X_Limit_Data(),
                       IN_tireTempVLowFRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S236>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighFRO_v_Data());

  /* RelationalOperator: '<S236>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S236>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighFRO_bool */
  {
    {
      updateFaultInput(66, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighFRO_bool_X_Limit_Data(),
                       IN_tireTempVHighFRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S236>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S236>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorFRO_bool */
  {
    {
      updateFaultInput(54, rtb_RelationalOperator_d,
                       IN_tireTempErrorFRO_bool_X_Limit_Data(),
                       IN_tireTempErrorFRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S248>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_ah = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegFRO_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_ah);
    }

    idx = 0;
    IN_tireTempVToDegFRO_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S248>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_ah, IN_tireTempVToDegFRO_Data(), 8u);
    IN_tireTempVToDegFRO_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_ah;
  }

  /* S-Function (raptor_sfun_override): '<S236>/raptor_override1' */
  if (IN_tireTempFRO_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_c = IN_tireTempFRO_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_c = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempFRO_deg_Data() = EVSR24_B.raptor_override1_c;

  /* S-Function (raptor_sfun_adjustment): '<S236>/raptor_adjustment2' */
  rtb_raptor_adjustment2_o4 = (IN_tireTempFRO_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S237>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in3;

  /* S-Function (raptor_sfun_adjustment): '<S237>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRLI_v_Data());

  /* RelationalOperator: '<S237>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S237>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRLI_bool */
  {
    {
      updateFaultInput(79, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRLI_bool_X_Limit_Data(),
                       IN_tireTempVLowRLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S237>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRLI_v_Data());

  /* RelationalOperator: '<S237>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S237>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRLI_bool */
  {
    {
      updateFaultInput(67, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRLI_bool_X_Limit_Data(),
                       IN_tireTempVHighRLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S237>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S237>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRLI_bool */
  {
    {
      updateFaultInput(55, rtb_RelationalOperator_d,
                       IN_tireTempErrorRLI_bool_X_Limit_Data(),
                       IN_tireTempErrorRLI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S249>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_i = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRLI_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_i);
    }

    idx = 0;
    IN_tireTempVToDegRLI_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S249>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_i, IN_tireTempVToDegRLI_Data(), 8u);
    IN_tireTempVToDegRLI_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_i;
  }

  /* S-Function (raptor_sfun_override): '<S237>/raptor_override1' */
  if (IN_tireTempRLI_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_hx = IN_tireTempRLI_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_hx = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRLI_deg_Data() = EVSR24_B.raptor_override1_hx;

  /* S-Function (raptor_sfun_adjustment): '<S237>/raptor_adjustment2' */
  rtb_raptor_adjustment2_i = (IN_tireTempRLI_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S238>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in4;

  /* S-Function (raptor_sfun_adjustment): '<S238>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRLM_v_Data());

  /* RelationalOperator: '<S238>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S238>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRLM_bool */
  {
    {
      updateFaultInput(80, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRLM_bool_X_Limit_Data(),
                       IN_tireTempVLowRLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S238>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRLM_v_Data());

  /* RelationalOperator: '<S238>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S238>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRLM_bool */
  {
    {
      updateFaultInput(68, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRLM_bool_X_Limit_Data(),
                       IN_tireTempVHighRLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S238>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S238>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRLM_bool */
  {
    {
      updateFaultInput(56, rtb_RelationalOperator_d,
                       IN_tireTempErrorRLM_bool_X_Limit_Data(),
                       IN_tireTempErrorRLM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S250>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_gt = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRLM_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_gt);
    }

    idx = 0;
    IN_tireTempVToDegRLM_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S250>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_gt, IN_tireTempVToDegRLM_Data(), 8u);
    IN_tireTempVToDegRLM_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_gt;
  }

  /* S-Function (raptor_sfun_override): '<S238>/raptor_override1' */
  if (IN_tireTempRLM_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_nc = IN_tireTempRLM_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_nc = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRLM_deg_Data() = EVSR24_B.raptor_override1_nc;

  /* S-Function (raptor_sfun_adjustment): '<S238>/raptor_adjustment2' */
  rtb_raptor_adjustment2_gz = (IN_tireTempRLM_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S239>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in5;

  /* S-Function (raptor_sfun_adjustment): '<S239>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRLO_v_Data());

  /* RelationalOperator: '<S239>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S239>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRLO_bool */
  {
    {
      updateFaultInput(81, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRLO_bool_X_Limit_Data(),
                       IN_tireTempVLowRLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S239>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRLO_v_Data());

  /* RelationalOperator: '<S239>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S239>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRLO_bool */
  {
    {
      updateFaultInput(69, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRLO_bool_X_Limit_Data(),
                       IN_tireTempVHighRLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S239>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S239>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRLO_bool */
  {
    {
      updateFaultInput(57, rtb_RelationalOperator_d,
                       IN_tireTempErrorRLO_bool_X_Limit_Data(),
                       IN_tireTempErrorRLO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S251>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_px = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRLO_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_px);
    }

    idx = 0;
    IN_tireTempVToDegRLO_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S251>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_px, IN_tireTempVToDegRLO_Data(), 8u);
    IN_tireTempVToDegRLO_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_px;
  }

  /* S-Function (raptor_sfun_override): '<S239>/raptor_override1' */
  if (IN_tireTempRLO_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_j = IN_tireTempRLO_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_j = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRLO_deg_Data() = EVSR24_B.raptor_override1_j;

  /* S-Function (raptor_sfun_adjustment): '<S239>/raptor_adjustment2' */
  rtb_raptor_adjustment2_na = (IN_tireTempRLO_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S240>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in9;

  /* S-Function (raptor_sfun_adjustment): '<S240>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRRI_v_Data());

  /* RelationalOperator: '<S240>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S240>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRRI_bool */
  {
    {
      updateFaultInput(82, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRRI_bool_X_Limit_Data(),
                       IN_tireTempVLowRRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S240>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRRI_v_Data());

  /* RelationalOperator: '<S240>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S240>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRRI_bool */
  {
    {
      updateFaultInput(70, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRRI_bool_X_Limit_Data(),
                       IN_tireTempVHighRRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S240>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S240>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRRI_bool */
  {
    {
      updateFaultInput(58, rtb_RelationalOperator_d,
                       IN_tireTempErrorRRI_bool_X_Limit_Data(),
                       IN_tireTempErrorRRI_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S252>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_m = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRRI_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_m);
    }

    idx = 0;
    IN_tireTempVToDegRRI_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S252>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_m, IN_tireTempVToDegRRI_Data(), 8u);
    IN_tireTempVToDegRRI_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_m;
  }

  /* S-Function (raptor_sfun_override): '<S240>/raptor_override1' */
  if (IN_tireTempRRI_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_ns = IN_tireTempRRI_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_ns = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRRI_deg_Data() = EVSR24_B.raptor_override1_ns;

  /* S-Function (raptor_sfun_adjustment): '<S240>/raptor_adjustment2' */
  rtb_raptor_adjustment2_cl = (IN_tireTempRRI_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S241>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in10;

  /* S-Function (raptor_sfun_adjustment): '<S241>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRRM_v_Data());

  /* RelationalOperator: '<S241>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S241>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRRM_bool */
  {
    {
      updateFaultInput(83, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRRM_bool_X_Limit_Data(),
                       IN_tireTempVLowRRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S241>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRRM_v_Data());

  /* RelationalOperator: '<S241>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S241>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRRM_bool */
  {
    {
      updateFaultInput(71, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRRM_bool_X_Limit_Data(),
                       IN_tireTempVHighRRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S241>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S241>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRRM_bool */
  {
    {
      updateFaultInput(59, rtb_RelationalOperator_d,
                       IN_tireTempErrorRRM_bool_X_Limit_Data(),
                       IN_tireTempErrorRRM_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S253>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_e = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRRM_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_e);
    }

    idx = 0;
    IN_tireTempVToDegRRM_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S253>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_e, IN_tireTempVToDegRRM_Data(), 8u);
    IN_tireTempVToDegRRM_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_e;
  }

  /* S-Function (raptor_sfun_override): '<S241>/raptor_override1' */
  if (IN_tireTempRRM_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_a = IN_tireTempRRM_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_a = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRRM_deg_Data() = EVSR24_B.raptor_override1_a;

  /* S-Function (raptor_sfun_adjustment): '<S241>/raptor_adjustment2' */
  rtb_raptor_adjustment2_do = (IN_tireTempRRM_bool_Data());

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S242>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_analog_in11;

  /* S-Function (raptor_sfun_adjustment): '<S242>/raptor_adjustment' */
  rtb_raptor_data_read_b = (IN_tireTempLowRRO_v_Data());

  /* RelationalOperator: '<S242>/Less Than' */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_IN_frontLeftWheelSpeed_radiansPerSec
    < rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S242>/raptor_fault_def' */

  /* Fault Reference : IN_tireTempVLowRRO_bool */
  {
    {
      updateFaultInput(84, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_tireTempVLowRRO_bool_X_Limit_Data(),
                       IN_tireTempVLowRRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_adjustment): '<S242>/raptor_adjustment1' */
  rtb_raptor_data_read_b = (IN_tireTempHighRRO_v_Data());

  /* RelationalOperator: '<S242>/GreaterThan' */
  rtb_IN_frontLeftHallEffectHigh_bool =
    (rtb_IN_frontLeftWheelSpeed_radiansPerSec > rtb_raptor_data_read_b);

  /* S-Function (raptor_sfun_fault_def): '<S242>/raptor_fault_def1' */

  /* Fault Reference : IN_tireTempVHighRRO_bool */
  {
    {
      updateFaultInput(72, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_tireTempVHighRRO_bool_X_Limit_Data(),
                       IN_tireTempVHighRRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S242>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S242>/raptor_fault_def3' */

  /* Fault Reference : IN_tireTempErrorRRO_bool */
  {
    {
      updateFaultInput(60, rtb_RelationalOperator_d,
                       IN_tireTempErrorRRO_bool_X_Limit_Data(),
                       IN_tireTempErrorRRO_bool_Y_Limit_Data(), 0);
    }
  }

  /* S-Function (raptor_sfun_table_axis): '<S254>/raptor_table_axis' */
  {
    int idx;
    extern uint16_T TableAxis_real32_T(const real32_T invalue, const real32_T
      * data, const uint32_T width, const uint16_T prev);
    for (idx=0;idx<1;idx++) {
      EVSR24_B.raptor_table_axis_e4 = TableAxis_real32_T
        ( rtb_IN_frontLeftWheelSpeed_radiansPerSec,
         IN_tireTempVToDegRRO_LookupX_Data(), 8u, EVSR24_B.raptor_table_axis_e4);
    }

    idx = 0;
    IN_tireTempVToDegRRO_LookupX_IN_Data() =
      rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  /* S-Function (raptor_sfun_table_interpolate_1d): '<S254>/raptor_table_interpolate_1d' */
  {
    extern real32_T TableInterpolate1D_real32_T( const uint16_T idx, const
      real32_T * data, const uint16_T width);
    rtb_IN_frontLeftWheelSpeed_radiansPerSec = TableInterpolate1D_real32_T
      ( EVSR24_B.raptor_table_axis_e4, IN_tireTempVToDegRRO_Data(), 8u);
    IN_tireTempVToDegRRO_Y_IN_IDX_Data() = EVSR24_B.raptor_table_axis_e4;
  }

  /* S-Function (raptor_sfun_override): '<S242>/raptor_override1' */
  if (IN_tireTempRRO_deg_OvrSts_Data()) {
    EVSR24_B.raptor_override1_f = IN_tireTempRRO_deg_OvrVal_Data();
  } else {
    EVSR24_B.raptor_override1_f = rtb_IN_frontLeftWheelSpeed_radiansPerSec;
  }

  IN_tireTempRRO_deg_Data() = EVSR24_B.raptor_override1_f;

  /* S-Function (raptor_sfun_adjustment): '<S242>/raptor_adjustment2' */
  rtb_raptor_adjustment2_nq = (IN_tireTempRRO_bool_Data());

  /* S-Function (raptor_sfun_analog_in): '<S205>/raptor_analog_in' */
  /* S-Function Block: INPUT18 */
  {
    {
      int16_T input = swsh_Read_ADC_ECUA103();
      rtb_raptor_analog_in_h = (uint16_T) ((input > 0 ? input : 0) * 0.32768f);
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S255>/raptor_measurement' incorporates:
   *  S-Function (raptor_sfun_analog_in): '<S205>/raptor_analog_in'
   */
  IN_tsSwitchSig_v_Data() = rtb_raptor_analog_in_h;

  /* S-Function (raptor_sfun_adjustment): '<S255>/raptor_adjustment' */
  rtb_raptor_adjustment_ho = (IN_tsSwitchNOHighUpperThresh_Data());

  /* S-Function (raptor_sfun_adjustment): '<S255>/raptor_adjustment1' */
  rtb_raptor_adjustment1_m = (IN_tsSwitchNOHighLowerThresh_Data());

  /* S-Function (raptor_sfun_adjustment): '<S255>/raptor_adjustment2' */
  rtb_raptor_adjustment2_o = (IN_tsSwitchNOLowLowerThresh_Data());

  /* RelationalOperator: '<S256>/Less Than1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S256>/raptor_adjustment'
   */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_raptor_adjustment_no <
    (IN_hallEffectLowFL_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S256>/raptor_fault_def' */

  /* Fault Reference : IN_hallEffectVLowFL_bool */
  {
    {
      updateFaultInput(27, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_hallEffectVLowFL_bool_X_Limit_Data(),
                       IN_hallEffectVLowFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* RelationalOperator: '<S256>/GreaterThan1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S256>/raptor_adjustment1'
   */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_raptor_adjustment_no >
    (IN_hallEffectHighFL_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S256>/raptor_fault_def1' */

  /* Fault Reference : IN_hallEffectVHighFL_bool */
  {
    {
      updateFaultInput(23, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_hallEffectVHighFL_bool_X_Limit_Data(),
                       IN_hallEffectVHighFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S256>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S256>/raptor_fault_def3' */

  /* Fault Reference : IN_hallEffectErrorFL_bool */
  {
    {
      updateFaultInput(19, rtb_RelationalOperator_d,
                       IN_hallEffectErrorFL_bool_X_Limit_Data(),
                       IN_hallEffectErrorFL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Gain: '<S256>/Gain' */
  rtb_raptor_data_read_b = 0.0166666675F *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin;

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S256>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_data_read_b;

  /* S-Function (raptor_sfun_measurement): '<S256>/raptor_measurement' */
  IN_wheelSpeedFL_rpm_Data() = rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_data_read): '<S256>/raptor_data_read' */
  rtb_raptor_data_read_b = DATA_unloadedWheelRadius_m_Data();

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S256>/Constant'
   *  Product: '<S256>/Product'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec =
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin * 6.2831853071795862;

  /* Product: '<S256>/Product1' */
  rtb_IN_brakePos_pct = rtb_raptor_data_read_b *
    rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_measurement): '<S256>/raptor_measurement1' */
  IN_wheelSpeedFL_mps_Data() = rtb_IN_brakePos_pct;

  /* S-Function (raptor_sfun_measurement): '<S256>/raptor_measurement2' */
  IN_groundSpeedFL_mph_Data() = rtb_DataTypeConversion2_e;

  /* RelationalOperator: '<S257>/Less Than1' incorporates:
   *  DataTypeConversion: '<S257>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S257>/raptor_adjustment'
   */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_DataTypeConversion_j <
    (IN_hallEffectLowFR_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S257>/raptor_fault_def' */

  /* Fault Reference : IN_hallEffectVLowFR_bool */
  {
    {
      updateFaultInput(28, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_hallEffectVLowFR_bool_X_Limit_Data(),
                       IN_hallEffectVLowFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* RelationalOperator: '<S257>/GreaterThan1' incorporates:
   *  DataTypeConversion: '<S257>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S257>/raptor_adjustment1'
   */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_DataTypeConversion_j >
    (IN_hallEffectHighFR_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S257>/raptor_fault_def1' */

  /* Fault Reference : IN_hallEffectVHighFR_bool */
  {
    {
      updateFaultInput(24, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_hallEffectVHighFR_bool_X_Limit_Data(),
                       IN_hallEffectVHighFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S257>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S257>/raptor_fault_def3' */

  /* Fault Reference : IN_hallEffectErrorFR_bool */
  {
    {
      updateFaultInput(20, rtb_RelationalOperator_d,
                       IN_hallEffectErrorFR_bool_X_Limit_Data(),
                       IN_hallEffectErrorFR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Gain: '<S257>/Gain' */
  rtb_raptor_data_read_b = 0.0166666675F *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p;

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S257>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_data_read_b;

  /* S-Function (raptor_sfun_measurement): '<S257>/raptor_measurement' */
  IN_wheelSpeedFR_rpm_Data() = rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_data_read): '<S257>/raptor_data_read' */
  rtb_raptor_data_read_b = DATA_unloadedWheelRadius_m_Data();

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S257>/Constant'
   *  Product: '<S257>/Product'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec =
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_p * 6.2831853071795862;

  /* Product: '<S257>/Product1' */
  rtb_IN_brakePos_pct = rtb_raptor_data_read_b *
    rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_measurement): '<S257>/raptor_measurement1' */
  IN_wheelSpeedFR_mps_Data() = rtb_IN_brakePos_pct;

  /* S-Function (raptor_sfun_measurement): '<S257>/raptor_measurement2' */
  IN_groundSpeedFR_mph_Data() = rtb_DataTypeConversion2;

  /* RelationalOperator: '<S258>/Less Than1' incorporates:
   *  DataTypeConversion: '<S258>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S258>/raptor_adjustment'
   */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_DataTypeConversion_kr_tmp_tmp <
    (IN_hallEffectLowRL_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S258>/raptor_fault_def' */

  /* Fault Reference : IN_hallEffectVLowRL_bool */
  {
    {
      updateFaultInput(29, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_hallEffectVLowRL_bool_X_Limit_Data(),
                       IN_hallEffectVLowRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* RelationalOperator: '<S258>/GreaterThan1' incorporates:
   *  DataTypeConversion: '<S258>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S258>/raptor_adjustment1'
   */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_DataTypeConversion_kr_tmp_tmp >
    (IN_hallEffectHighRL_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S258>/raptor_fault_def1' */

  /* Fault Reference : IN_hallEffectVHighRL_bool */
  {
    {
      updateFaultInput(25, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_hallEffectVHighRL_bool_X_Limit_Data(),
                       IN_hallEffectVHighRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S258>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S258>/raptor_fault_def3' */

  /* Fault Reference : IN_hallEffectErrorRL_bool */
  {
    {
      updateFaultInput(21, rtb_RelationalOperator_d,
                       IN_hallEffectErrorRL_bool_X_Limit_Data(),
                       IN_hallEffectErrorRL_bool_Y_Limit_Data(), 0);
    }
  }

  /* Gain: '<S258>/Gain' */
  rtb_raptor_data_read_b = 0.0166666675F *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_o;

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S258>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_data_read_b;

  /* S-Function (raptor_sfun_measurement): '<S258>/raptor_measurement' */
  IN_wheelSpeedRL_rpm_Data() = rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_data_read): '<S258>/raptor_data_read' */
  rtb_raptor_data_read_b = DATA_unloadedWheelRadius_m_Data();

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S258>/Constant'
   *  Product: '<S258>/Product'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec =
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_o * 6.2831853071795862;

  /* Product: '<S258>/Product1' */
  rtb_IN_brakePos_pct = rtb_raptor_data_read_b *
    rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_measurement): '<S258>/raptor_measurement1' */
  IN_wheelSpeedRL_mps_Data() = rtb_IN_brakePos_pct;

  /* S-Function (raptor_sfun_measurement): '<S258>/raptor_measurement2' */
  IN_groundSpeedRL_mph_Data() = rtb_DataTypeConversion2_i;

  /* RelationalOperator: '<S259>/Less Than1' incorporates:
   *  DataTypeConversion: '<S259>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S259>/raptor_adjustment'
   */
  rtb_IN_frontLeftHallEffectLow_bool = (rtb_DataTypeConversion_b_tmp_tmp <
    (IN_hallEffectLowRR_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S259>/raptor_fault_def' */

  /* Fault Reference : IN_hallEffectVLowRR_bool */
  {
    {
      updateFaultInput(30, rtb_IN_frontLeftHallEffectLow_bool,
                       IN_hallEffectVLowRR_bool_X_Limit_Data(),
                       IN_hallEffectVLowRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* RelationalOperator: '<S259>/GreaterThan1' incorporates:
   *  DataTypeConversion: '<S259>/Data Type Conversion'
   *  S-Function (raptor_sfun_adjustment): '<S259>/raptor_adjustment1'
   */
  rtb_IN_frontLeftHallEffectHigh_bool = (rtb_DataTypeConversion_b_tmp_tmp >
    (IN_hallEffectHighRR_hz_Data()));

  /* S-Function (raptor_sfun_fault_def): '<S259>/raptor_fault_def1' */

  /* Fault Reference : IN_hallEffectVHighRR_bool */
  {
    {
      updateFaultInput(26, rtb_IN_frontLeftHallEffectHigh_bool,
                       IN_hallEffectVHighRR_bool_X_Limit_Data(),
                       IN_hallEffectVHighRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Logic: '<S259>/OR' */
  rtb_RelationalOperator_d = (rtb_IN_frontLeftHallEffectHigh_bool ||
    rtb_IN_frontLeftHallEffectLow_bool);

  /* S-Function (raptor_sfun_fault_def): '<S259>/raptor_fault_def3' */

  /* Fault Reference : IN_hallEffectErrorRR_bool */
  {
    {
      updateFaultInput(22, rtb_RelationalOperator_d,
                       IN_hallEffectErrorRR_bool_X_Limit_Data(),
                       IN_hallEffectErrorRR_bool_Y_Limit_Data(), 0);
    }
  }

  /* Gain: '<S259>/Gain' */
  rtb_raptor_data_read_b = 0.0166666675F *
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_ou;

  /* Product: '<S259>/Product' incorporates:
   *  DataTypeConversion: '<S259>/Data Type Conversion1'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec = rtb_raptor_data_read_b;

  /* S-Function (raptor_sfun_measurement): '<S259>/raptor_measurement' */
  IN_wheelSpeedRR_rpm_Data() = rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_data_read): '<S259>/raptor_data_read' */
  rtb_raptor_data_read_b = DATA_unloadedWheelRadius_m_Data();

  /* Product: '<S259>/Product' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_IN_frontLeftWheelSpeed_radiansPerSec =
    rtb_IN_frontLeftWheelSpeed_revolutionsPerMin_ou * 6.2831853071795862;

  /* Product: '<S259>/Product1' */
  rtb_IN_brakePos_pct = rtb_raptor_data_read_b *
    rtb_IN_frontLeftWheelSpeed_radiansPerSec;

  /* S-Function (raptor_sfun_measurement): '<S259>/raptor_measurement1' */
  IN_wheelSpeedRR_mps_Data() = rtb_IN_brakePos_pct;

  /* S-Function (raptor_sfun_measurement): '<S259>/raptor_measurement2' */
  IN_groundSpeedRR_mph_Data() = rtb_DataTypeConversion2_d;

  /* S-Function (raptor_sfun_can_rxmsg): '<S263>/raptor_can_rxmsg' */

  /* S-Function Block:<S263>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9067__0001(&rtb_Age_dj, NULL, NULL, &data[0], 8);

    /* Signal: MM5_ax       */
    {
      uint32_T tMM5_ax ;
      tMM5_ax = 0;
      tMM5_ax |= ((uint32_T)data[4U]) ;
      tMM5_ax |= ((uint32_T)data[5U]) << 8;
      rtb_MM5_ax = (((real_T) tMM5_ax / (real_T) -7849.2935635792774) + (real_T)
                    4.1745795);
    }

    /* Signal: MM5_rollRate */
    {
      uint32_T tMM5_rollRate;
      tMM5_rollRate = 0;
      tMM5_rollRate |= ((uint32_T)data[0U]) ;
      tMM5_rollRate |= ((uint32_T)data[1U]) << 8;
      rtb_MM5_rollRate = (((real_T) tMM5_rollRate / (real_T) -200.0) + (real_T)
                          163.9);
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S263>/raptor_can_rxmsg2' */

  /* S-Function Block:<S263>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    can_get_9069__0001(&rtb_Age_kbp, NULL, NULL, &data[0], 8);

    /* Signal: MM5_az */
    {
      uint32_T tMM5_az;
      tMM5_az = 0;
      tMM5_az |= ((uint32_T)data[4U]) ;
      tMM5_az |= ((uint32_T)data[5U]) << 8;
      rtb_MM5_az = (((real_T) tMM5_az / (real_T) -7849.2935635792774) + (real_T)
                    4.1745795);
    }
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg1' */

  /* S-Function Block:<S260>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_packCurr          not connected */

    /* Signal: BMS_packSOC           not connected */

    /* Signal: BMS_packVolt          not connected */

    /* Signal: BMS_rollingCounter200 not connected */
    can_get_9017__0001(&rtb_Age_h2, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg10' */

  /* S-Function Block:<S260>/raptor_can_rxmsg10 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_packChargeCurrLim   not connected */

    /* Signal: BMS_packChargeCurrLimkW not connected */

    /* Signal: BMS_rollingCounter209   not connected */

    /* Signal: BMS_totalPackADC        not connected */
    can_get_9018__0001(&rtb_Age_dx, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg11' */

  /* S-Function Block:<S260>/raptor_can_rxmsg11 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_packDischargeCurrLim   not connected */

    /* Signal: BMS_packDischargeCurrLimkW not connected */

    /* Signal: BMS_packOpenVolt           not connected */

    /* Signal: BMS_rollingCounter210      not connected */
    can_get_9019__0001(&rtb_Age_j2, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg12' */

  /* S-Function Block:<S260>/raptor_can_rxmsg12 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_avgPackCurr       not connected */

    /* Signal: BMS_maxPackCCL        not connected */

    /* Signal: BMS_maxPackDCL        not connected */

    /* Signal: BMS_rollingCounter211 not connected */
    can_get_9020__0001(&rtb_Age_bw, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg13' */

  /* S-Function Block:<S260>/raptor_can_rxmsg13 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_adaptiveSOC       not connected */

    /* Signal: BMS_fanSpeed          not connected */

    /* Signal: BMS_fanVolt           not connected */

    /* Signal: BMS_requestedFanSpeed not connected */

    /* Signal: BMS_rollingCounter212 not connected */
    can_get_9021__0001(&rtb_Age_c4, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg14' */

  /* S-Function Block:<S260>/raptor_can_rxmsg14 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_adaptiveAmphours      not connected */

    /* Signal: BMS_adaptiveTotalCapacity not connected */

    /* Signal: BMS_currLimStatus         not connected */

    /* Signal: BMS_rollingCounter213     not connected */
    can_get_9022__0001(&rtb_Age_lg, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg15' */

  /* S-Function Block:<S260>/raptor_can_rxmsg15 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_dtcStatus1        not connected */

    /* Signal: BMS_maxCellNumber     not connected */

    /* Signal: BMS_populatedCells    not connected */

    /* Signal: BMS_rollingCounter214 not connected */

    /* Signal: BMS_totalPackCycles   not connected */
    can_get_9023__0001(&rtb_Age_f, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg16' */

  /* S-Function Block:<S260>/raptor_can_rxmsg16 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_dtcStatus2        not connected */

    /* Signal: BMS_failsafeStatus    not connected */

    /* Signal: BMS_relayState        not connected */

    /* Signal: BMS_rollingCounter215 not connected */
    can_get_9024__0001(&rtb_Age_p1, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg17' */

  /* S-Function Block:<S260>/raptor_can_rxmsg17 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_j1772ACCurrLim    not connected */

    /* Signal: BMS_j1772ACPwrLim     not connected */

    /* Signal: BMS_j1772ACVolt       not connected */

    /* Signal: BMS_j1772PlugState    not connected */

    /* Signal: BMS_rollingCounter216 not connected */
    can_get_9025__0001(&rtb_Age_an, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg2' */

  /* S-Function Block:<S260>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_maxPackVolt       not connected */

    /* Signal: BMS_minPackVolt       not connected */

    /* Signal: BMS_packSummedVolt    not connected */

    /* Signal: BMS_rollingCounter201 not connected */
    can_get_9026__0001(&rtb_Age_g1, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg3' */

  /* S-Function Block:<S260>/raptor_can_rxmsg3 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_packAmphours      not connected */

    /* Signal: BMS_packDOD           not connected */

    /* Signal: BMS_packResistance    not connected */

    /* Signal: BMS_packSOH           not connected */

    /* Signal: BMS_rollingCounter202 not connected */
    can_get_9027__0001(&rtb_Age_ckg, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg4' */

  /* S-Function Block:<S260>/raptor_can_rxmsg4 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_avgTemp             not connected */

    /* Signal: BMS_highestTemp         not connected */

    /* Signal: BMS_highestThermistorID not connected */

    /* Signal: BMS_internalTemp        not connected */

    /* Signal: BMS_lowestTemp          not connected */

    /* Signal: BMS_lowestThermistorID  not connected */

    /* Signal: BMS_rollingCounter203   not connected */
    can_get_9028__0001(&rtb_Age_aw, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg5' */

  /* S-Function Block:<S260>/raptor_can_rxmsg5 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_avgCellVolt       not connected */

    /* Signal: BMS_highCellVolt      not connected */

    /* Signal: BMS_lowCellVolt       not connected */

    /* Signal: BMS_rollingCounter204 not connected */
    can_get_9029__0001(&rtb_Age_dyv, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg6' */

  /* S-Function Block:<S260>/raptor_can_rxmsg6 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_avgCellOpenVolt   not connected */

    /* Signal: BMS_highCellOpenVolt  not connected */

    /* Signal: BMS_lowCellOpenVolt   not connected */

    /* Signal: BMS_rollingCounter205 not connected */
    can_get_9030__0001(&rtb_Age_dp, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg7' */

  /* S-Function Block:<S260>/raptor_can_rxmsg7 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_avgCellInternalResistance  not connected */

    /* Signal: BMS_highCellInternalResistance not connected */

    /* Signal: BMS_lowCellInternalResistance  not connected */

    /* Signal: BMS_rollingCounter206          not connected */
    can_get_9031__0001(&rtb_Age_dl, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg8' */

  /* S-Function Block:<S260>/raptor_can_rxmsg8 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_maxCellVolt       not connected */

    /* Signal: BMS_minCellVolt       not connected */

    /* Signal: BMS_pwrInputVolt      not connected */

    /* Signal: BMS_rollingCounter207 not connected */
    can_get_9032__0001(&rtb_Age_ae, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S260>/raptor_can_rxmsg9' */

  /* S-Function Block:<S260>/raptor_can_rxmsg9 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: BMS_highCellOpenVoltID   not connected */

    /* Signal: BMS_highCellResistanceID not connected */

    /* Signal: BMS_highCellVoltID       not connected */

    /* Signal: BMS_lowCellOpenVoltID    not connected */

    /* Signal: BMS_lowCellResistanceID  not connected */

    /* Signal: BMS_lowCellVoltID        not connected */

    /* Signal: BMS_rollingCounter208    not connected */
    can_get_9033__0001(&rtb_Age_m1, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S261>/raptor_can_rxmsg2' */

  /* S-Function Block:<S261>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: DD_boardTemp     not connected */

    /* Signal: DD_counterMsg250 not connected */

    /* Signal: DD_teensyTemp    not connected */
    can_get_9035__0001(&rtb_Age_l4, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg1' */

  /* S-Function Block:<S262>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_controlBoardTemp not connected */

    /* Signal: PM_rtd1Temp         not connected */

    /* Signal: PM_rtd2Temp         not connected */

    /* Signal: PM_rtd3Temp         not connected */
    can_get_9041__0001(&rtb_Age_hf, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg10' */

  /* S-Function Block:<S262>/raptor_can_rxmsg10 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_refVolt120 not connected */

    /* Signal: PM_refVolt15  not connected */

    /* Signal: PM_refVolt25  not connected */

    /* Signal: PM_refVolt50  not connected */
    can_get_9042__0001(&rtb_Age_ob, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg11' */

  /* S-Function Block:<S262>/raptor_can_rxmsg11 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_postFaultHi not connected */

    /* Signal: PM_postFaultLo not connected */

    /* Signal: PM_runFaultHi  not connected */

    /* Signal: PM_runFaultLo  not connected */
    can_get_9043__0001(&rtb_Age_kw, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg12' */

  /* S-Function Block:<S262>/raptor_can_rxmsg12 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_commandedTorque not connected */

    /* Signal: PM_powerOnTimer    not connected */

    /* Signal: PM_torqueFeedback  not connected */
    can_get_9044__0001(&rtb_Age_d0, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg13' */

  /* S-Function Block:<S262>/raptor_can_rxmsg13 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_fluxWeakeningOutput not connected */

    /* Signal: PM_idCommand           not connected */

    /* Signal: PM_iqCommand           not connected */

    /* Signal: PM_modulationIndex     not connected */
    can_get_9045__0001(&rtb_Age_bm, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg14' */

  /* S-Function Block:<S262>/raptor_can_rxmsg14 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_datecodeMMDD      not connected */

    /* Signal: PM_datecodeYYYY      not connected */

    /* Signal: PM_projectCodeEEPVer not connected */

    /* Signal: PM_swVersion         not connected */
    can_get_9046__0001(&rtb_Age_cx, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg15' */

  /* S-Function Block:<S262>/raptor_can_rxmsg15 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_bufferRecord  not connected */

    /* Signal: PM_bufferSegment not connected */

    /* Signal: PM_diagData1     not connected */

    /* Signal: PM_diagData2     not connected */

    /* Signal: PM_diagData3     not connected */
    can_get_9047__0001(&rtb_Age_ot, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg16' */

  /* S-Function Block:<S262>/raptor_can_rxmsg16 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_fastDCBusVolt      not connected */

    /* Signal: PM_fastMotorSpeed     not connected */

    /* Signal: PM_fastTorqueCommand  not connected */

    /* Signal: PM_fastTorqueFeedback not connected */
    can_get_9048__0001(&rtb_Age_mx, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg17' */

  /* S-Function Block:<S262>/raptor_can_rxmsg17 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_dataCommand             not connected */

    /* Signal: PM_parameterAddressCommand not connected */

    /* Signal: PM_readWriteCommand        not connected */
    can_get_9049__0001(&rtb_Age_kc, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg18' */

  /* S-Function Block:<S262>/raptor_can_rxmsg18 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_dataResponse             not connected */

    /* Signal: PM_parameterAddressResponse not connected */

    /* Signal: PM_writeSuccess             not connected */
    can_get_9050__0001(&rtb_Age_n4, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg19' */

  /* S-Function Block:<S262>/raptor_can_rxmsg19 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_bmsActive             not connected */

    /* Signal: PM_bmsTorqueLimiting     not connected */

    /* Signal: PM_counterMsg170         not connected */

    /* Signal: PM_directionCommand      not connected */

    /* Signal: PM_inverterCommandMode   not connected */

    /* Signal: PM_inverterDischargeMode not connected */

    /* Signal: PM_inverterEnableLockout not connected */

    /* Signal: PM_inverterEnableState   not connected */

    /* Signal: PM_inverterRunMode       not connected */

    /* Signal: PM_inverterState         not connected */

    /* Signal: PM_lowSpeedLimiting      not connected */

    /* Signal: PM_maxSpeedLimiting      not connected */

    /* Signal: PM_pwmFrequency          not connected */

    /* Signal: PM_relayStatus1          not connected */

    /* Signal: PM_relayStatus2          not connected */

    /* Signal: PM_relayStatus3          not connected */

    /* Signal: PM_relayStatus4          not connected */

    /* Signal: PM_relayStatus5          not connected */

    /* Signal: PM_relayStatus6          not connected */

    /* Signal: PM_startModeActive       not connected */

    /* Signal: PM_vsmState              not connected */
    can_get_9051__0001(&rtb_Age_lj, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg2' */

  /* S-Function Block:<S262>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_gateDriverBoard not connected */

    /* Signal: PM_moduleATemp     not connected */

    /* Signal: PM_moduleBTemp     not connected */

    /* Signal: PM_moduleCTemp     not connected */
    can_get_9052__0001(&rtb_Age_mi, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg3' */

  /* S-Function Block:<S262>/raptor_can_rxmsg3 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_motorTemp     not connected */

    /* Signal: PM_rtd4Temp      not connected */

    /* Signal: PM_rtd5Temp      not connected */

    /* Signal: PM_torqueShudder not connected */
    can_get_9053__0001(&rtb_Age_j5, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg4' */

  /* S-Function Block:<S262>/raptor_can_rxmsg4 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_analogInputVolt1 not connected */

    /* Signal: PM_analogInputVolt2 not connected */

    /* Signal: PM_analogInputVolt3 not connected */

    /* Signal: PM_analogInputVolt4 not connected */

    /* Signal: PM_analogInputVolt5 not connected */

    /* Signal: PM_analogInputVolt6 not connected */
    can_get_9054__0001(&rtb_Age_a5, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg5' */

  /* S-Function Block:<S262>/raptor_can_rxmsg5 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_digitalInputStatus1 not connected */

    /* Signal: PM_digitalInputStatus2 not connected */

    /* Signal: PM_digitalInputStatus3 not connected */

    /* Signal: PM_digitalInputStatus4 not connected */

    /* Signal: PM_digitalInputStatus5 not connected */

    /* Signal: PM_digitalInputStatus6 not connected */

    /* Signal: PM_digitalInputStatus7 not connected */

    /* Signal: PM_digitalInputStatus8 not connected */
    can_get_9055__0001(&rtb_Age_ek, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg6' */

  /* S-Function Block:<S262>/raptor_can_rxmsg6 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_deltaResolverFiltered     not connected */

    /* Signal: PM_electricalMotorAngle      not connected */

    /* Signal: PM_electricalOutputFrequency not connected */

    /* Signal: PM_motorSpeed                not connected */
    can_get_9056__0001(&rtb_Age_o2, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg7' */

  /* S-Function Block:<S262>/raptor_can_rxmsg7 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_dcBusCurrent  not connected */

    /* Signal: PM_phaseACurrent not connected */

    /* Signal: PM_phaseBCurrent not connected */

    /* Signal: PM_phaseCCurrent not connected */
    can_get_9057__0001(&rtb_Age_ic5, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg8' */

  /* S-Function Block:<S262>/raptor_can_rxmsg8 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_dcBusVolt  not connected */

    /* Signal: PM_outputVolt not connected */

    /* Signal: PM_vabVdVolt  not connected */

    /* Signal: PM_vbcVqVolt  not connected */
    can_get_9058__0001(&rtb_Age_lz, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S262>/raptor_can_rxmsg9' */

  /* S-Function Block:<S262>/raptor_can_rxmsg9 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PM_fluxCommand  not connected */

    /* Signal: PM_fluxFeedback not connected */

    /* Signal: PM_id           not connected */

    /* Signal: PM_iq           not connected */
    can_get_9059__0001(&rtb_Age_ch, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg1' */

  /* S-Function Block:<S264>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg401 not connected */

    /* Signal: PDM_pdmCurrentAvg not connected */

    /* Signal: PDM_pdmCurrentMax not connected */

    /* Signal: PDM_pdmCurrentMin not connected */
    can_get_9085__0001(&rtb_Age_bi, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg10' */

  /* S-Function Block:<S264>/raptor_can_rxmsg10 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg409     not connected */

    /* Signal: PDM_fanLeftDutyCycle  not connected */

    /* Signal: PDM_fanRightDutyCycle not connected */

    /* Signal: PDM_teensyTemp        not connected */

    /* Signal: PDM_wpDutyCycle       not connected */
    can_get_9086__0001(&rtb_Age_du, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg11' */

  /* S-Function Block:<S264>/raptor_can_rxmsg11 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_uptime not connected */
    can_get_9087__0001(&rtb_Age_kz, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg12' */

  /* S-Function Block:<S264>/raptor_can_rxmsg12 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg411 not connected */

    /* Signal: PDM_glvVoltAvg    not connected */

    /* Signal: PDM_glvVoltMax    not connected */

    /* Signal: PDM_glvVoltMin    not connected */
    can_get_9088__0001(&rtb_Age_gj, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg13' */

  /* S-Function Block:<S264>/raptor_can_rxmsg13 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg412 not connected */

    /* Signal: PDM_dataVoltAvg   not connected */

    /* Signal: PDM_dataVoltMax   not connected */

    /* Signal: PDM_dataVoltMin   not connected */
    can_get_9089__0001(&rtb_Age_b4, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg14' */

  /* S-Function Block:<S264>/raptor_can_rxmsg14 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg413    not connected */

    /* Signal: PDM_keepAliveVoltAvg not connected */

    /* Signal: PDM_keepAliveVoltMax not connected */

    /* Signal: PDM_keepAliveVoltMin not connected */
    can_get_9090__0001(&rtb_Age_oq, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg15' */

  /* S-Function Block:<S264>/raptor_can_rxmsg15 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_carMiles       not connected */

    /* Signal: PDM_counterMsg414  not connected */

    /* Signal: PDM_runtimeHours   not connected */

    /* Signal: PDM_runtimeMinutes not connected */
    can_get_9091__0001(&rtb_Age_d5, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg2' */

  /* S-Function Block:<S264>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_boardTemp             not connected */

    /* Signal: PDM_brakelightVoltAvg     not connected */

    /* Signal: PDM_coolingOverrideActive not connected */

    /* Signal: PDM_counterMsg400         not connected */

    /* Signal: PDM_vehicleState          not connected */
    can_get_9092__0001(&rtb_Age_nu, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg3' */

  /* S-Function Block:<S264>/raptor_can_rxmsg3 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg402 not connected */

    /* Signal: PDM_pdmVoltAvg    not connected */

    /* Signal: PDM_pdmVoltMax    not connected */

    /* Signal: PDM_pdmVoltMin    not connected */
    can_get_9093__0001(&rtb_Age_gv, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg4' */

  /* S-Function Block:<S264>/raptor_can_rxmsg4 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg403      not connected */

    /* Signal: PDM_fanRightCurrentAvg not connected */

    /* Signal: PDM_fanRightCurrentMax not connected */

    /* Signal: PDM_fanRightCurrentMin not connected */
    can_get_9094__0001(&rtb_Age_py, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg5' */

  /* S-Function Block:<S264>/raptor_can_rxmsg5 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg404   not connected */

    /* Signal: PDM_fanRightVoltAvg not connected */

    /* Signal: PDM_fanRightVoltMax not connected */

    /* Signal: PDM_fanRightVoltMin not connected */
    can_get_9095__0001(&rtb_Age_is, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg6' */

  /* S-Function Block:<S264>/raptor_can_rxmsg6 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg405     not connected */

    /* Signal: PDM_fanLeftCurrentAvg not connected */

    /* Signal: PDM_fanLeftCurrentMax not connected */

    /* Signal: PDM_fanLeftCurrentMin not connected */
    can_get_9096__0001(&rtb_Age_dd, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg7' */

  /* S-Function Block:<S264>/raptor_can_rxmsg7 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg406  not connected */

    /* Signal: PDM_fanLeftVoltAvg not connected */

    /* Signal: PDM_fanLeftVoltMax not connected */

    /* Signal: PDM_fanLeftVoltMin not connected */
    can_get_9097__0001(&rtb_Age_fw, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg8' */

  /* S-Function Block:<S264>/raptor_can_rxmsg8 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg407 not connected */

    /* Signal: PDM_wpCurrentAvg  not connected */

    /* Signal: PDM_wpCurrentMax  not connected */

    /* Signal: PDM_wpCurrentMin  not connected */
    can_get_9098__0001(&rtb_Age_db, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S264>/raptor_can_rxmsg9' */

  /* S-Function Block:<S264>/raptor_can_rxmsg9 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: PDM_counterMsg408 not connected */

    /* Signal: PDM_wpVoltAvg     not connected */

    /* Signal: PDM_wpVoltMax     not connected */

    /* Signal: PDM_wpVoltMin     not connected */
    can_get_9099__0001(&rtb_Age_ed, NULL, NULL, &data[0], 8);
  }

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in6' */
  /* S-Function Block: INPUT39 */
  {
    rtb_raptor_digital_in6 = swsh_DIO_in_ECUK028();
  }

  /* S-Function (raptor_sfun_measurement): '<S267>/raptor_measurement' */
  IN_coolPolarity_bool_Data() = rtb_raptor_digital_in6;

  /* Switch: '<S267>/Switch' incorporates:
   *  Logic: '<S267>/AND'
   *  Logic: '<S267>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S267>/raptor_adjustment'
   */
  if ((IN_coolPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in6;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in6;
  }

  /* End of Switch: '<S267>/Switch' */

  /* Chart: '<S267>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in2' */
  /* S-Function Block: INPUT35 */
  {
    rtb_raptor_digital_in2 = swsh_DIO_in_ECUK049();
  }

  /* S-Function (raptor_sfun_measurement): '<S268>/raptor_measurement' */
  IN_Polarity_bool_Data() = rtb_raptor_digital_in2;

  /* Switch: '<S268>/Switch' incorporates:
   *  Logic: '<S268>/AND'
   *  Logic: '<S268>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S268>/raptor_adjustment'
   */
  if ((IN_PolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in2;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in2;
  }

  /* End of Switch: '<S268>/Switch' */

  /* Chart: '<S268>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_o);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in3' */
  /* S-Function Block: INPUT36 */
  {
    rtb_raptor_digital_in3 = swsh_DIO_in_ECUK014();
  }

  /* S-Function (raptor_sfun_measurement): '<S269>/raptor_measurement' */
  IN_markPolarity_bool_Data() = rtb_raptor_digital_in3;

  /* Switch: '<S269>/Switch' incorporates:
   *  Logic: '<S269>/AND'
   *  Logic: '<S269>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S269>/raptor_adjustment'
   */
  if ((IN_markPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in3;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in3;
  }

  /* End of Switch: '<S269>/Switch' */

  /* Chart: '<S269>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_b);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in1' */
  /* S-Function Block: INPUT34 */
  {
    rtb_raptor_digital_in1 = swsh_DIO_in_ECUK047();
  }

  /* S-Function (raptor_sfun_measurement): '<S270>/raptor_measurement' */
  IN_pageDownPolarity_bool_Data() = rtb_raptor_digital_in1;

  /* Switch: '<S270>/Switch' incorporates:
   *  Logic: '<S270>/AND'
   *  Logic: '<S270>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S270>/raptor_adjustment'
   */
  if ((IN_pageDownPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in1;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in1;
  }

  /* End of Switch: '<S270>/Switch' */

  /* Chart: '<S270>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_bj);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in' */
  /* S-Function Block: INPUT33 */
  {
    rtb_raptor_digital_in_b = swsh_DIO_in_ECUA057();
  }

  /* S-Function (raptor_sfun_measurement): '<S271>/raptor_measurement' */
  IN_pageUpPolarity_bool_Data() = rtb_raptor_digital_in_b;

  /* Switch: '<S271>/Switch' incorporates:
   *  Logic: '<S271>/AND'
   *  Logic: '<S271>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S271>/raptor_adjustment'
   */
  if ((IN_pageUpPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in_b;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in_b;
  }

  /* End of Switch: '<S271>/Switch' */

  /* Chart: '<S271>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_i);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in7' */
  /* S-Function Block: INPUT40 */
  {
    rtb_raptor_digital_in7 = swsh_DIO_in_ECUK033();
  }

  /* S-Function (raptor_sfun_measurement): '<S272>/raptor_measurement' */
  IN_pttPolarity_bool_Data() = rtb_raptor_digital_in7;

  /* Switch: '<S272>/Switch' incorporates:
   *  Logic: '<S272>/AND'
   *  Logic: '<S272>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S272>/raptor_adjustment'
   */
  if ((IN_pttPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in7;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in7;
  }

  /* End of Switch: '<S272>/Switch' */

  /* Chart: '<S272>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_j);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in5' */
  /* S-Function Block: INPUT38 */
  {
    rtb_raptor_digital_in5 = swsh_DIO_in_ECUK017();
  }

  /* S-Function (raptor_sfun_measurement): '<S273>/raptor_measurement' */
  IN_pwrDownPolarity_bool_Data() = rtb_raptor_digital_in5;

  /* Switch: '<S273>/Switch' incorporates:
   *  Logic: '<S273>/AND'
   *  Logic: '<S273>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S273>/raptor_adjustment'
   */
  if ((IN_pwrDownPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in5;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in5;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Chart: '<S273>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_g);

  /* S-Function (raptor_sfun_digital_in): '<S266>/raptor_digital_in4' */
  /* S-Function Block: INPUT37 */
  {
    rtb_raptor_digital_in4 = swsh_DIO_in_ECUK016();
  }

  /* S-Function (raptor_sfun_measurement): '<S274>/raptor_measurement' */
  IN_pwrUpPolarity_bool_Data() = rtb_raptor_digital_in4;

  /* Switch: '<S274>/Switch' incorporates:
   *  Logic: '<S274>/AND'
   *  Logic: '<S274>/NOT'
   *  S-Function (raptor_sfun_adjustment): '<S274>/raptor_adjustment'
   */
  if ((IN_pwrUpPolarityOverride_bool_Data())) {
    rtb_RelationalOperator_d = rtb_raptor_digital_in4;
  } else {
    rtb_RelationalOperator_d = !rtb_raptor_digital_in4;
  }

  /* End of Switch: '<S274>/Switch' */

  /* Chart: '<S274>/debounceResolver' */
  EVSR24_debounceResolver(EVSR24_M, rtb_RelationalOperator_d,
    &EVSR24_DWork.sf_debounceResolver_ia);

  /* Switch: '<S292>/Switch1' incorporates:
   *  Constant: '<S292>/Constant2'
   *  S-Function (raptor_sfun_time): '<S292>/raptor_time'
   *  S-Function (raptor_sfun_time): '<S292>/raptor_time1'
   *  Switch: '<S292>/Switch'
   */
  if ((GetAbsTime()) > 12.0) {
    rtb_IN_throttlePos_deg_f = 0.0;
  } else {
    rtb_IN_throttlePos_deg_f = ((GetAbsTime()) > 11.0);
  }

  /* End of Switch: '<S292>/Switch1' */

  /* Chart: '<S290>/bspcAppsFault' incorporates:
   *  Switch: '<S294>/Switch'
   */
  /* Gateway: Foreground/Outputs/stateMachine/controlStates/bspcAppsFault */
  /* During: Foreground/Outputs/stateMachine/controlStates/bspcAppsFault */
  if (EVSR24_DWork.is_active_c2_EVSR24 == 0U) {
    /* Entry: Foreground/Outputs/stateMachine/controlStates/bspcAppsFault */
    EVSR24_DWork.is_active_c2_EVSR24 = 1U;

    /* Entry Internal: Foreground/Outputs/stateMachine/controlStates/bspcAppsFault */
    /* Transition: '<S291>:2' */
    EVSR24_DWork.is_c2_EVSR24 = EVSR24_IN_Normal;

    /* Entry 'Normal': '<S291>:1' */
  } else if (EVSR24_DWork.is_c2_EVSR24 == EVSR24_IN_BSPC_APPS_Fault) {
    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S294>/Constant1'
     *  S-Function (raptor_sfun_time): '<S294>/raptor_time'
     */
    /* During 'BSPC_APPS_Fault': '<S291>:3' */
    /* Transition: '<S291>:21' */
    if ((GetAbsTime()) > 13.0) {
      tmp = 3;
    } else {
      tmp = 100;
    }

    if ((tmp < 5) && (rtb_IN_throttlePos_deg_f == 0.0)) {
      /* Transition: '<S291>:15' */
      /* Transition: '<S291>:16' */
      EVSR24_DWork.is_c2_EVSR24 = EVSR24_IN_Normal;

      /* Entry 'Normal': '<S291>:1' */
    }

    /* During 'Normal': '<S291>:1' */
    /* Transition: '<S291>:18' */
  } else if (rtb_IN_throttlePos_deg_f == 1.0) {
    /* Transition: '<S291>:19' */
    /* Transition: '<S291>:20' */
    EVSR24_DWork.is_c2_EVSR24 = EVSR24_IN_BSPC_APPS_Fault;

    /* Entry 'BSPC_APPS_Fault': '<S291>:3' */
  }

  /* End of Chart: '<S290>/bspcAppsFault' */
  /* S-Function (raptor_sfun_can_txmsg): '<S287>/raptor_can_txmsg' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S287>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S287>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S287>/raptor_adjustment2'
   *  S-Function (raptor_sfun_adjustment): '<S287>/raptor_adjustment3'
   *  S-Function (raptor_sfun_adjustment): '<S287>/raptor_adjustment4'
   *  S-Function (raptor_sfun_data_read): '<S287>/raptor_data_read'
   */

  /* S-Function Block:<S287>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: VCU_torqueLimitCommand */
    /* VCU_torqueLimitCommand - StartBit: 48U, BitLength: 16U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real32_T)DATA_maxMotorTorque_Nm_Data() < -3276.8)
        tempS = (int32_T)-32768.0;
      else if ((real32_T)DATA_maxMotorTorque_Nm_Data() > 3276.7000000000003)
        tempS = (int32_T)32767.0;
      else if ((real32_T)DATA_maxMotorTorque_Nm_Data() < 0)
        tempS = (int32_T)(int32_T)((DATA_maxMotorTorque_Nm_Data()) * 10.0f);
      else
        tempS = (int32_T)((DATA_maxMotorTorque_Nm_Data()) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[6U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[7U] |= temp_shift;

    /* Signal: VCU_counterMsg192      */
    /* VCU_counterMsg192      - StartBit: 44U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 4);
    temp_shift &= ((uint8_T)240U);
    data[5U] |= temp_shift;

    /* Signal: VCU_speedModeEnable    */
    /* VCU_speedModeEnable    - StartBit: 42U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)(((OUT_speedModeEnable_bool_Data())));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)4U);
    data[5U] |= temp_shift;

    /* Signal: VCU_inverterDischarge  */
    /* VCU_inverterDischarge  - StartBit: 41U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)(((OUT_dischargeEnable_bool_Data())));
    }

    temp_shift = (uint8_T)(temp << 1);
    temp_shift &= ((uint8_T)2U);
    data[5U] |= temp_shift;

    /* Signal: VCU_inverterEnable     */
    /* VCU_inverterEnable     - StartBit: 40U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)(((OUT_inverterEnable_bool_Data())));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)1U);
    data[5U] |= temp_shift;

    /* Signal: VCU_directionCommand   */
    /* VCU_directionCommand   - StartBit: 32U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)(((OUT_directionCommand_bool_Data())));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)1U);
    data[4U] |= temp_shift;

    /* Signal: VCU_speedCommand       */
    /* VCU_speedCommand       - StartBit: 16U, BitLength: 16U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real32_T)(OUT_speedCommand_rpm_Data()) < -32768.0)
        tempS = (int32_T)-32768.0;
      else if ((real32_T)(OUT_speedCommand_rpm_Data()) > 32767.0)
        tempS = (int32_T)32767.0;
      else if ((real32_T)(OUT_speedCommand_rpm_Data()) < 0)
        tempS = (int32_T)(int32_T)(((OUT_speedCommand_rpm_Data())));
      else
        tempS = (int32_T)(((OUT_speedCommand_rpm_Data())));
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[3U] |= temp_shift;

    /* Signal: VCU_torqueCommand      */
    /* VCU_torqueCommand      - StartBit: 0U, BitLength: 16U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -3276.8)
        tempS = (int32_T)-32768.0;
      else if ((real_T)0.0 > 3276.7000000000003)
        tempS = (int32_T)32767.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;
    can_send_6920__0001(192U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S286>/raptor_can_txmsg1' */

  /* S-Function Block:<S286>/raptor_can_txmsg1 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: CMD_driverNotificationLightB */
    /* CMD_driverNotificationLightB - StartBit: 0U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;

    /* Signal: CMD_driverNotificationLightG */
    /* CMD_driverNotificationLightG - StartBit: 8U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;

    /* Signal: CMD_driverNotificationLightR */
    /* CMD_driverNotificationLightR - StartBit: 16U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    can_send_6902__0001(251U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S286>/raptor_can_txmsg2' */

  /* S-Function Block:<S286>/raptor_can_txmsg2 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: CMD_driverMessageChar0 */
    /* CMD_driverMessageChar0 - StartBit: 0U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;

    /* Signal: CMD_driverMessageChar1 */
    /* CMD_driverMessageChar1 - StartBit: 8U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;

    /* Signal: CMD_driverMessageChar2 */
    /* CMD_driverMessageChar2 - StartBit: 16U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;

    /* Signal: CMD_driverMessageChar3 */
    /* CMD_driverMessageChar3 - StartBit: 24U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;

    /* Signal: CMD_driverMessageChar4 */
    /* CMD_driverMessageChar4 - StartBit: 32U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: CMD_driverMessageChar5 */
    /* CMD_driverMessageChar5 - StartBit: 40U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[5U] |= temp_shift;

    /* Signal: CMD_driverMessageChar6 */
    /* CMD_driverMessageChar6 - StartBit: 48U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[6U] |= temp_shift;

    /* Signal: CMD_driverMessageChar7 */
    /* CMD_driverMessageChar7 - StartBit: 56U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[7U] |= temp_shift;
    can_send_6903__0001(252U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S286>/raptor_can_txmsg' */

  /* S-Function Block:<S286>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: CMD_brakeLightOverride */
    /* CMD_brakeLightOverride - StartBit: 24U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -128.0)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 127.0)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0));
      else
        tempS = (int32_T)((0.0));
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;

    /* Signal: CMD_fanLeftOverride    */
    /* CMD_fanLeftOverride    - StartBit: 0U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -128.0)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 127.0)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0));
      else
        tempS = (int32_T)((0.0));
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;

    /* Signal: CMD_fanRightOverride   */
    /* CMD_fanRightOverride   - StartBit: 8U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -128.0)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 127.0)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0));
      else
        tempS = (int32_T)((0.0));
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;

    /* Signal: CMD_wpOverride         */
    /* CMD_wpOverride         - StartBit: 16U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -128.0)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 127.0)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0));
      else
        tempS = (int32_T)((0.0));
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    can_send_6901__0002(250U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S288>/raptor_can_txmsg1' */

  /* S-Function Block:<S288>/raptor_can_txmsg1 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: VCU_brakeLight     */
    /* VCU_brakeLight     - StartBit: 7U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 7);
    temp_shift &= ((uint8_T)128U);
    data[0U] |= temp_shift;

    /* Signal: VCU_counterMsg194  */
    /* VCU_counterMsg194  - StartBit: 0U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)15U);
    data[0U] |= temp_shift;

    /* Signal: VCU_radFanLeftPct  */
    /* VCU_radFanLeftPct  - StartBit: 8U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;

    /* Signal: VCU_radFanRightPct */
    /* VCU_radFanRightPct - StartBit: 16U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;

    /* Signal: VCU_wpPct          */
    /* VCU_wpPct          - StartBit: 24U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;
    can_send_6931__0001(194U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S288>/raptor_can_txmsg2' */

  /* S-Function Block:<S288>/raptor_can_txmsg2 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: VCU_accFan1Pct    */
    /* VCU_accFan1Pct    - StartBit: 8U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;

    /* Signal: VCU_accFan2Pct    */
    /* VCU_accFan2Pct    - StartBit: 16U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;

    /* Signal: VCU_accFan3Pct    */
    /* VCU_accFan3Pct    - StartBit: 24U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;

    /* Signal: VCU_accFan4Pct    */
    /* VCU_accFan4Pct    - StartBit: 32U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: VCU_accFan5Pct    */
    /* VCU_accFan5Pct    - StartBit: 40U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[5U] |= temp_shift;

    /* Signal: VCU_accFan6Pct    */
    /* VCU_accFan6Pct    - StartBit: 48U, BitLength: 8U, Endian: 0U */
    {
      /* signal type is signed */
      int32_T tempS;
      if ((real_T)0.0 < -12.8)
        tempS = (int32_T)-128.0;
      else if ((real_T)0.0 > 12.700000000000001)
        tempS = (int32_T)127.0;
      else if ((real_T)0.0 < 0)
        tempS = (int32_T)(int32_T)((0.0) * 10.0f);
      else
        tempS = (int32_T)((0.0) * 10.0f);
      temp = *((uint32_T*)&tempS);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[6U] |= temp_shift;

    /* Signal: VCU_counterMsg195 */
    /* VCU_counterMsg195 - StartBit: 0U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)15U);
    data[0U] |= temp_shift;
    can_send_6932__0001(195U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S288>/raptor_can_txmsg' */

  /* S-Function Block:<S288>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: VCU_counterMsg193 */
    /* VCU_counterMsg193 - StartBit: 0U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)15U);
    data[0U] |= temp_shift;

    /* Signal: VCU_dataPower     */
    /* VCU_dataPower     - StartBit: 7U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 7);
    temp_shift &= ((uint8_T)128U);
    data[0U] |= temp_shift;

    /* Signal: VCU_glvPower      */
    /* VCU_glvPower      - StartBit: 6U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 6);
    temp_shift &= ((uint8_T)64U);
    data[0U] |= temp_shift;
    can_send_6930__0001(193U & 0x7FF, 0, 8U, &data[0]);
  }

  /* Update for UnitDelay: '<S31>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_b = rtb_Sum_ps;

  /* Update for UnitDelay: '<S30>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_a = rtb_MultiportSwitch_ov;

  /* Update for UnitDelay: '<S29>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_i = rtb_MultiportSwitch_ps;

  /* Update for UnitDelay: '<S24>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_bi = rtb_MultiportSwitch;

  /* Update for UnitDelay: '<S28>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_n = rtb_MultiportSwitch_ag;

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_l = rtb_MultiportSwitch_j;

  /* Update for UnitDelay: '<S26>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_bm = rtb_MultiportSwitch_jf;

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_h = rtb_MultiportSwitch_pp;

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_i1 = rtb_MultiportSwitch_nj;

  /* Update for UnitDelay: '<S77>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_p = rtb_MultiportSwitch_bx;

  /* Update for UnitDelay: '<S81>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_nf = rtb_MultiportSwitch_k;

  /* Update for UnitDelay: '<S87>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_p3 = rtb_MultiportSwitch_m;

  /* Update for UnitDelay: '<S189>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_hk = rtb_Sum_ip;

  /* Update for UnitDelay: '<S188>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_k = rtb_Sum_j;

  /* Update for UnitDelay: '<S187>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_o = rtb_Sum_a;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_e = rtb_Sum_h;

  /* Update for UnitDelay: '<S148>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_g = rtb_MultiportSwitch_i;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_f = rtb_Sum_jt;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  EVSR24_DWork.UnitDelay_DSTATE_m = rtb_Sum_k;
}

/* Model step function */
void EVSR24_step(void)
{
  /* S-Function (raptor_sfun_target_def): '<Root>/raptor_target_def' */

  /*
   * New Eagle LLC 2011
   */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  EVSR24_M->Timing.clockTick0++;
}

/* Model initialize function */
void EVSR24_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)EVSR24_M, 0,
                sizeof(RT_MODEL_EVSR24));

  /* block I/O */
  (void) memset(((void *) &EVSR24_B), 0,
                sizeof(BlockIO_EVSR24));

  {
    EVSR24_B.raptor_override1 = 0.0;
    EVSR24_B.raptor_override1_b = 0.0;
    EVSR24_B.raptor_override1_n = 0.0;
    EVSR24_B.raptor_override1_e = 0.0;
    EVSR24_B.raptor_override1_bc = 0.0;
    EVSR24_B.raptor_override1_m = 0.0;
    EVSR24_B.raptor_override1_g = 0.0;
    EVSR24_B.raptor_override1_h = 0.0;
    EVSR24_B.raptor_override1_i = 0.0;
    EVSR24_B.raptor_override1_c = 0.0;
    EVSR24_B.raptor_override1_hx = 0.0;
    EVSR24_B.raptor_override1_nc = 0.0;
    EVSR24_B.raptor_override1_j = 0.0;
    EVSR24_B.raptor_override1_ns = 0.0;
    EVSR24_B.raptor_override1_a = 0.0;
    EVSR24_B.raptor_override1_f = 0.0;
    EVSR24_B.raptor_override1_p = 0.0;
    EVSR24_B.raptor_override1_o = 0.0;
    EVSR24_B.raptor_override1_ok = 0.0;
    EVSR24_B.raptor_override1_cn = 0.0;
    EVSR24_B.raptor_override1_jd = 0.0;
    EVSR24_B.raptor_override = 0.0;
    EVSR24_B.raptor_override_h = 0.0;
    EVSR24_B.CTRL_slipRatio = 0.0;
    EVSR24_B.CTRL_groundSpeed_mph = 0.0;
    EVSR24_B.CTRL_driveSpeed_mph = 0.0;
    EVSR24_B.Switch2 = 0.0;
    EVSR24_B.CTRL_torqueCommand_Nm = 0.0;
    EVSR24_B.raptor_override_j = 0.0F;
  }

  /* states (dwork) */
  (void) memset((void *)&EVSR24_DWork, 0,
                sizeof(D_Work_EVSR24));
  EVSR24_DWork.Integrator_DSTATE = 0.0;
  EVSR24_DWork.UD_DSTATE = 0.0;
  EVSR24_DWork.UnitDelay_DSTATE = 0.0;
  EVSR24_DWork.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.chartDisableTime = 0.0;
  EVSR24_DWork.Integrator_PREV_U = 0.0;
  EVSR24_DWork.sf_debounceResolver_ia.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_ia.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_ia.durationOperatorLastReferenceTime_1_j =
    0.0;
  EVSR24_DWork.sf_debounceResolver_g.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_g.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_g.durationOperatorLastReferenceTime_1_j = 0.0;
  EVSR24_DWork.sf_debounceResolver_j.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_j.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_j.durationOperatorLastReferenceTime_1_j = 0.0;
  EVSR24_DWork.sf_debounceResolver_i.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_i.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_i.durationOperatorLastReferenceTime_1_j = 0.0;
  EVSR24_DWork.sf_debounceResolver_bj.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_bj.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_bj.durationOperatorLastReferenceTime_1_j =
    0.0;
  EVSR24_DWork.sf_debounceResolver_b.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_b.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_b.durationOperatorLastReferenceTime_1_j = 0.0;
  EVSR24_DWork.sf_debounceResolver_o.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver_o.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver_o.durationOperatorLastReferenceTime_1_j = 0.0;
  EVSR24_DWork.sf_debounceResolver.durationOperatorLastReferenceTime_1 = 0.0;
  EVSR24_DWork.sf_debounceResolver.chartDisableTime = 0.0;
  EVSR24_DWork.sf_debounceResolver.durationOperatorLastReferenceTime_1_j = 0.0;

  /* Start for S-Function (raptor_sfun_xcp): '<S3>/raptor_xcp_update' */

  /* S-Function Block - Start: <S3>/raptor_xcp_update */
  {
    XCP1_XCP_CAN_PreStart(XCP1__XCP_BC_ID_Data(), XCP1__XCP_RX_ID_Data(),
                          XCP1__XCP_TX_ID_Data());
  }

  /* Start for S-Function (raptor_sfun_fault_manager): '<Root>/raptor_fault_manager' */

  /* Fault Manager */
  {
    initFaultManager();
  }

  EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = ZERO_ZCSIG;
  EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = POS_ZCSIG;
  EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  EVSR24_Foreground_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  EVSR24_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */
  EVSR24_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  EVSR24_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void EVSR24_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
