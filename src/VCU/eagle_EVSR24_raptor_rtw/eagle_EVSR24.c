/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: eagle_EVSR24.c
 *
 * Code generated for Simulink model 'eagle_EVSR24'.
 *
 * Model version                  : 8.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Feb 22 21:12:12 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "eagle_EVSR24.h"
#include "eagle_EVSR24_private.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include <string.h>

/* Block states (default storage) */
D_Work_eagle_EVSR24 eagle_EVSR24_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_eagle_EVSR24 eagle_EVSR24_PrevZCSigState;

// Block : eagle_EVSR24/raptor_timed_trigger
void Timer_ooqlV(void)
{
  /* Timer_ooqlV  ------   Foreground  */
  {
    {
      eagle_EVSR24_Foreground();
    }
  }
}

// Block : eagle_EVSR24/Power Up_Down/raptor_timed_trigger
void Timer_BGND_G6Wyo(void)
{
  /* Timer_BGND_G6Wyo  ------   Background  */
  {
    {
      eagle_EVSR24_Background();
    }
  }
}

/* System initialize for function-call system: '<S2>/Background' */
void eagle_EVSR24_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_digital_in): '<S4>/raptor_digital_in' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S4>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S5>/raptor_delta_time' */
  eagle_EVSR24_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay2' */
  eagle_EVSR24_DWork.UnitDelay2_DSTATE = true;
}

/* System reset for function-call system: '<S2>/Background' */
void eagle_EVSR24_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S5>/raptor_delta_time' */
  eagle_EVSR24_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay2' */
  eagle_EVSR24_DWork.UnitDelay2_DSTATE = true;
}

/* Output and update for function-call system: '<S2>/Background' */
void eagle_EVSR24_Background(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_delta_time;
  boolean_T rtb_raptor_digital_in;
  real_T rtb_MultiportSwitch1;
  boolean_T rtb_Logic;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_raptor_sfun_nv_status;

  /* S-Function (raptor_sfun_digital_in): '<S4>/raptor_digital_in' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_digital_in = swsh_ignswSt();
  }

  /* S-Function (raptor_sfun_delta_time): '<S5>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = (GetDeltaTime_ms
      (&eagle_EVSR24_DWork.raptor_delta_time_DWORK1) * 0.001f);
  }

  /* MultiPortSwitch: '<S5>/Multiport Switch1' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S9>/FixPt Relational Operator'
   *  Sum: '<S5>/Add'
   *  UnitDelay: '<S5>/Unit Delay'
   *  UnitDelay: '<S9>/Delay Input1'
   */
  if (rtb_raptor_digital_in == eagle_EVSR24_DWork.DelayInput1_DSTATE) {
    rtb_MultiportSwitch1 = rtb_raptor_delta_time +
      eagle_EVSR24_DWork.UnitDelay_DSTATE_b;
  } else {
    rtb_MultiportSwitch1 = 0.0;
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch1' */
  /* UnitDelay: '<S5>/Unit Delay2' */
  rtb_raptor_sfun_nv_status = eagle_EVSR24_DWork.UnitDelay2_DSTATE;

  /* CombinatorialLogic: '<S5>/Logic' incorporates:
   *  Logic: '<S5>/Logical Operator1'
   *  Logic: '<S5>/Logical Operator2'
   *  Logic: '<S5>/Logical Operator3'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S5>/raptor_adjustment3'
   *  S-Function (raptor_sfun_adjustment): '<S5>/raptor_adjustment4'
   */
  rtb_Logic = eagle_EVSR24_ConstP.Logic_table[((((uint32_T)
    (rtb_raptor_digital_in && (rtb_MultiportSwitch1 >= (KeySwHiTimeThr_Data())))
    << 1) + (uint32_T)((!rtb_raptor_digital_in) && (rtb_MultiportSwitch1 >=
    (KeySwLoTimeThr_Data())))) << 1) + rtb_raptor_sfun_nv_status];

  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S4>/raptor_data_read1'
   */
  rtb_LogicalOperator1_h = (rtb_Logic || KeepModuleOn_Data());

  /* Outputs for Triggered SubSystem: '<S4>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S6>/Trigger'
   */
  if ((!rtb_LogicalOperator1_h) &&
      (eagle_EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S6>/raptor_data_write' incorporates:
     *  Constant: '<S6>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S6>/Function-Call Generator' incorporates:
     *  SubSystem: '<S6>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S10>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S6>/Function-Call Generator' */
  }

  eagle_EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S4>/Raise Shutdown Event' */
  /* Outputs for Enabled and Triggered SubSystem: '<S4>/Raise Startup Event' incorporates:
   *  EnablePort: '<S7>/Enable'
   *  TriggerPort: '<S7>/Trigger'
   */
  if (FgndTasksStopped_Data() && (rtb_LogicalOperator1_h &&
       (eagle_EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE != POS_ZCSIG))) {
    /* S-Function (fcgen): '<S7>/Function-Call Generator' incorporates:
     *  SubSystem: '<S7>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S11>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S7>/Function-Call Generator' */
  }

  /* End of S-Function (raptor_sfun_data_read): '<S4>/raptor_data_read' */

  /* Outputs for Triggered SubSystem: '<S4>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S6>/Trigger'
   */
  eagle_EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S4>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S4>/Raise Startup Event' */

  /* UnitDelay: '<S4>/Unit Delay' */
  rtb_LogicalOperator2_c = eagle_EVSR24_DWork.UnitDelay_DSTATE_e;

  /* Outputs for Triggered SubSystem: '<S4>/Store EEPROM' incorporates:
   *  TriggerPort: '<S8>/Trigger'
   */
  if ((!eagle_EVSR24_DWork.UnitDelay_DSTATE_e) &&
      (eagle_EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (fcgen): '<S8>/Function-Call Generator' incorporates:
     *  SubSystem: '<S8>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S12>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S8>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S4>/Unit Delay' */
  eagle_EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_LogicalOperator2_c;

  /* End of Outputs for SubSystem: '<S4>/Store EEPROM' */

  /* S-Function (raptor_sfun_data_write): '<S4>/raptor_data_write' */
  KeySw_Bgnd_Data() = rtb_Logic;

  /* S-Function (raptor_sfun_nv_status): '<S4>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S4>/Logical Operator2' incorporates:
   *  UnitDelay: '<S4>/Unit Delay1'
   */
  rtb_raptor_sfun_nv_status = (rtb_raptor_sfun_nv_status ||
    rtb_LogicalOperator1_h || eagle_EVSR24_DWork.UnitDelay1_DSTATE);

  /* S-Function (raptor_sfun_digital_out): '<S4>/raptor_digital_out' */
  /* S-Function Block: POWER_HOLD */
  {
    {
      if (rtb_raptor_sfun_nv_status && !swsh_ignswSt()) {
        SyC_WaitPostDrv();
      }
    }
  }

  /* Update for UnitDelay: '<S9>/Delay Input1' */
  eagle_EVSR24_DWork.DelayInput1_DSTATE = rtb_raptor_digital_in;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  eagle_EVSR24_DWork.UnitDelay_DSTATE_b = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S5>/Unit Delay2' */
  eagle_EVSR24_DWork.UnitDelay2_DSTATE = rtb_Logic;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  eagle_EVSR24_DWork.UnitDelay_DSTATE_e = rtb_LogicalOperator1_h;

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  eagle_EVSR24_DWork.UnitDelay1_DSTATE = rtb_LogicalOperator2_c;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void eagle_EVSR24_Foreground(void)
{
  real_T rtb_Add_j;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_Add_j = eagle_EVSR24_DWork.UnitDelay_DSTATE + 1.0;

  /* S-Function (raptor_sfun_measurement): '<S1>/raptor_measurement' */
  Counter_Data() = rtb_Add_j;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  eagle_EVSR24_DWork.UnitDelay_DSTATE = rtb_Add_j;
}

/* Model step function */
void eagle_EVSR24_step(void)
{
  /* S-Function (raptor_sfun_target_def): '<Root>/raptor_target_def' */

  /*
   * New Eagle LLC 2011
   */
}

/* Model initialize function */
void eagle_EVSR24_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)&eagle_EVSR24_DWork, 0,
                sizeof(D_Work_eagle_EVSR24));
  eagle_EVSR24_DWork.UnitDelay_DSTATE = 0.0;
  eagle_EVSR24_DWork.UnitDelay_DSTATE_b = 0.0;

  /* Start for S-Function (raptor_sfun_xcp): '<S3>/raptor_xcp_update' */

  /* S-Function Block - Start: <S3>/raptor_xcp_update */
  {
    CAN1_XCP_CAN_PreStart(CAN1__XCP_BC_ID_Data(), CAN1__XCP_RX_ID_Data(),
                          CAN1__XCP_TX_ID_Data());
  }

  eagle_EVSR24_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = ZERO_ZCSIG;
  eagle_EVSR24_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = POS_ZCSIG;
  eagle_EVSR24_PrevZCSigState.StoreEEPROM_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  eagle_EVSR24_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void eagle_EVSR24_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
