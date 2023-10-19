/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EVSR24.h
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

#ifndef RTW_HEADER_EVSR24_h_
#define RTW_HEADER_EVSR24_h_
#ifndef EVSR24_COMMON_INCLUDES_
#define EVSR24_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "data.h"
#include "sws_dio.h"
#include "gnu_pragma_conf.h"
#include "memlay_pub.h"
#include "syc_postdrv_pub.h"
#include "sws_pwmout.h"
#include "swadp_pub.h"
#include "sws_adc.h"
#include "mocadc_msg.h"
#include "sws_pwmin.h"
#include "raptor_time.h"
#include "xcp_protocol.h"
#include "AppMonitor1.h"
#include "can_CAN1.h"
#include "can_CAN2.h"
#include "faultmanager.h"
#endif                                 /* EVSR24_COMMON_INCLUDES_ */

#include "EVSR24_types.h"
#include "rtGetInf.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Block states (default storage) for system '<S267>/debounceResolver' */
typedef struct {
  real_T durationOperatorLastReferenceTime_1;/* '<S267>/debounceResolver' */
  real_T chartDisableTime;             /* '<S267>/debounceResolver' */
  real_T durationOperatorLastReferenceTime_1_j;/* '<S267>/debounceResolver' */
  uint32_T presentTicks;               /* '<S267>/debounceResolver' */
  uint32_T elapsedTicks;               /* '<S267>/debounceResolver' */
  uint32_T previousTicks;              /* '<S267>/debounceResolver' */
  uint8_T is_c3_steeringWheel_lib;     /* '<S267>/debounceResolver' */
  uint8_T is_active_c3_steeringWheel_lib;/* '<S267>/debounceResolver' */
  boolean_T condWasTrueAtLastTimeStep_1;/* '<S267>/debounceResolver' */
  boolean_T condWasTrueAtLastTimeStep_1_p;/* '<S267>/debounceResolver' */
} rtDW_debounceResolver_EVSR24;

/* Block signals (default storage) */
typedef struct {
  real_T raptor_override1;             /* '<S217>/raptor_override1' */
  real_T raptor_override1_b;           /* '<S218>/raptor_override1' */
  real_T raptor_override1_n;           /* '<S219>/raptor_override1' */
  real_T raptor_override1_e;           /* '<S220>/raptor_override1' */
  real_T raptor_override1_bc;          /* '<S231>/raptor_override1' */
  real_T raptor_override1_m;           /* '<S232>/raptor_override1' */
  real_T raptor_override1_g;           /* '<S233>/raptor_override1' */
  real_T raptor_override1_h;           /* '<S234>/raptor_override1' */
  real_T raptor_override1_i;           /* '<S235>/raptor_override1' */
  real_T raptor_override1_c;           /* '<S236>/raptor_override1' */
  real_T raptor_override1_hx;          /* '<S237>/raptor_override1' */
  real_T raptor_override1_nc;          /* '<S238>/raptor_override1' */
  real_T raptor_override1_j;           /* '<S239>/raptor_override1' */
  real_T raptor_override1_ns;          /* '<S240>/raptor_override1' */
  real_T raptor_override1_a;           /* '<S241>/raptor_override1' */
  real_T raptor_override1_f;           /* '<S242>/raptor_override1' */
  real_T raptor_override1_p;           /* '<S230>/raptor_override1' */
  real_T raptor_override1_o;           /* '<S229>/raptor_override1' */
  real_T raptor_override1_ok;          /* '<S213>/raptor_override1' */
  real_T raptor_override1_cn;          /* '<S212>/raptor_override1' */
  real_T raptor_override1_jd;          /* '<S211>/raptor_override1' */
  real_T raptor_override;              /* '<S208>/raptor_override' */
  real_T raptor_override_h;            /* '<S207>/raptor_override' */
  real_T CTRL_slipRatio;               /* '<S190>/Gain' */
  real_T CTRL_groundSpeed_mph;         /* '<S186>/Min' */
  real_T CTRL_driveSpeed_mph;          /* '<S185>/Max' */
  real_T Switch2;                      /* '<S93>/Switch2' */
  real_T CTRL_torqueCommand_Nm;        /* '<S82>/raptor_override' */
  real32_T raptor_override_j;          /* '<S89>/raptor_override' */
  uint16_T raptor_table_axis;          /* '<S227>/raptor_table_axis' */
  uint16_T raptor_table_axis_b;        /* '<S216>/raptor_table_axis' */
  uint16_T raptor_table_axis_k;        /* '<S214>/raptor_table_axis' */
  uint16_T raptor_table_axis_kh;       /* '<S215>/raptor_table_axis' */
  uint16_T raptor_table_axis_l;        /* '<S221>/raptor_table_axis' */
  uint16_T raptor_table_axis_g;        /* '<S222>/raptor_table_axis' */
  uint16_T raptor_table_axis_j;        /* '<S223>/raptor_table_axis' */
  uint16_T raptor_table_axis_d;        /* '<S224>/raptor_table_axis' */
  uint16_T raptor_table_axis_a;        /* '<S243>/raptor_table_axis' */
  uint16_T raptor_table_axis_jz;       /* '<S244>/raptor_table_axis' */
  uint16_T raptor_table_axis_l2;       /* '<S245>/raptor_table_axis' */
  uint16_T raptor_table_axis_n;        /* '<S246>/raptor_table_axis' */
  uint16_T raptor_table_axis_p;        /* '<S247>/raptor_table_axis' */
  uint16_T raptor_table_axis_ah;       /* '<S248>/raptor_table_axis' */
  uint16_T raptor_table_axis_i;        /* '<S249>/raptor_table_axis' */
  uint16_T raptor_table_axis_gt;       /* '<S250>/raptor_table_axis' */
  uint16_T raptor_table_axis_px;       /* '<S251>/raptor_table_axis' */
  uint16_T raptor_table_axis_m;        /* '<S252>/raptor_table_axis' */
  uint16_T raptor_table_axis_e;        /* '<S253>/raptor_table_axis' */
  uint16_T raptor_table_axis_e4;       /* '<S254>/raptor_table_axis' */
  uint16_T raptor_table_axis_x;        /* '<S182>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y;        /* '<S182>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_a;      /* '<S183>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_c;      /* '<S183>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_ag;     /* '<S184>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_k;      /* '<S184>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_k5;       /* '<S170>/raptor_table_axis' */
  uint16_T raptor_table_axis_b2;       /* '<S171>/raptor_table_axis' */
  uint16_T raptor_table_axis_m1;       /* '<S172>/raptor_table_axis' */
  uint16_T raptor_table_axis_x_j;      /* '<S173>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_m;      /* '<S173>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_m;      /* '<S174>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_kq;     /* '<S174>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_i;      /* '<S175>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_ks;     /* '<S175>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_pr;       /* '<S158>/raptor_table_axis' */
  uint16_T raptor_table_axis_gi;       /* '<S159>/raptor_table_axis' */
  uint16_T raptor_table_axis_j0;       /* '<S160>/raptor_table_axis' */
  uint16_T raptor_table_axis_x_h;      /* '<S161>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_h;      /* '<S161>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_l;      /* '<S162>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_kl;     /* '<S162>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_mm;     /* '<S163>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_y_d;      /* '<S163>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_y_l;      /* '<S95>/raptor_table_axis_y' */
  uint16_T raptor_table_axis_x_f;      /* '<S95>/raptor_table_axis_x' */
  uint16_T raptor_table_axis_it;       /* '<S85>/raptor_table_axis' */
  uint16_T raptor_table_axis_mf;       /* '<S34>/raptor_table_axis' */
  uint16_T raptor_table_axis_o;        /* '<S35>/raptor_table_axis' */
  uint16_T raptor_table_axis_bw;       /* '<S38>/raptor_table_axis' */
  uint16_T raptor_table_axis_nz;       /* '<S39>/raptor_table_axis' */
  uint16_T raptor_table_axis_dy;       /* '<S42>/raptor_table_axis' */
  uint16_T raptor_table_axis_ns;       /* '<S43>/raptor_table_axis' */
  uint16_T raptor_table_axis_ka;       /* '<S50>/raptor_table_axis' */
  uint16_T raptor_table_axis_kl;       /* '<S51>/raptor_table_axis' */
  uint16_T raptor_table_axis_mm;       /* '<S54>/raptor_table_axis' */
  uint16_T raptor_table_axis_mi;       /* '<S55>/raptor_table_axis' */
  uint16_T raptor_table_axis_nl;       /* '<S58>/raptor_table_axis' */
  uint16_T raptor_table_axis_lk;       /* '<S59>/raptor_table_axis' */
  uint16_T raptor_table_axis_bwq;      /* '<S62>/raptor_table_axis' */
  uint16_T raptor_table_axis_d5;       /* '<S63>/raptor_table_axis' */
  uint16_T raptor_table_axis_p1;       /* '<S46>/raptor_table_axis' */
  uint16_T raptor_table_axis_io;       /* '<S47>/raptor_table_axis' */
  boolean_T SM_prechargeState_bool;    /* '<S290>/contactorState' */
  boolean_T SM_dischargeState_bool;    /* '<S290>/contactorState' */
  boolean_T SM_mainMinusState_bool;    /* '<S290>/contactorState' */
  boolean_T GreaterThanOrEqual;        /* '<S86>/GreaterThanOrEqual' */
  boolean_T CTRL_brakelight_bool;      /* '<S76>/raptor_override' */
} BlockIO_EVSR24;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S129>/Integrator' */
  real_T UD_DSTATE;                    /* '<S122>/UD' */
  real_T UnitDelay_DSTATE;             /* '<S296>/Unit Delay' */
  real_T durationOperatorLastReferenceTime_1;/* '<S290>/contactorState' */
  real_T chartDisableTime;             /* '<S290>/contactorState' */
  real_T Integrator_PREV_U;            /* '<S129>/Integrator' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S31>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S30>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_i;         /* '<S29>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_bi;        /* '<S24>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_n;         /* '<S28>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_l;         /* '<S27>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_bm;        /* '<S26>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S25>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_i1;        /* '<S73>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S77>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_nf;        /* '<S81>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p3;        /* '<S87>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_hk;        /* '<S189>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_k;         /* '<S188>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_o;         /* '<S187>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_e;         /* '<S88>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_g;         /* '<S148>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_f;         /* '<S149>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_m;         /* '<S150>/Unit Delay' */
  uint32_T presentTicks;               /* '<S290>/contactorState' */
  uint32_T elapsedTicks;               /* '<S290>/contactorState' */
  uint32_T previousTicks;              /* '<S290>/contactorState' */
  uint32_T tractionControl_PREV_T;     /* '<S13>/tractionControl' */
  uint32_T raptor_delta_time_DWORK1;   /* '<S296>/raptor_delta_time' */
  boolean_T DelayInput1_DSTATE;        /* '<S300>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S296>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ez;       /* '<S295>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE;         /* '<S295>/Unit Delay1' */
  uint8_T is_c3_EVSR24;                /* '<S290>/contactorState' */
  uint8_T is_ChargeCircuit;            /* '<S290>/contactorState' */
  uint8_T is_PrechargeCircuit;         /* '<S290>/contactorState' */
  uint8_T is_active_c3_EVSR24;         /* '<S290>/contactorState' */
  uint8_T is_c2_EVSR24;                /* '<S290>/bspcAppsFault' */
  uint8_T is_active_c2_EVSR24;         /* '<S290>/bspcAppsFault' */
  uint8_T Integrator_SYSTEM_ENABLE;    /* '<S129>/Integrator' */
  boolean_T tractionControl_RESET_ELAPS_T;/* '<S13>/tractionControl' */
  boolean_T EnabledSubsystem_MODE;     /* '<S87>/Enabled Subsystem' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_ia;/* '<S274>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_g;/* '<S273>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_j;/* '<S272>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_i;/* '<S271>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_bj;/* '<S270>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_b;/* '<S269>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver_o;/* '<S268>/debounceResolver' */
  rtDW_debounceResolver_EVSR24 sf_debounceResolver;/* '<S267>/debounceResolver' */
} D_Work_EVSR24;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState StoreEEPROM_Trig_ZCE;     /* '<S295>/Store EEPROM' */
  ZCSigState RaiseStartupEvent_Trig_ZCE;/* '<S295>/Raise Startup Event' */
  ZCSigState RaiseShutdownEvent_Trig_ZCE;/* '<S295>/Raise Shutdown Event' */
} PrevZCSigStates_EVSR24;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32_T DataTypeConversion;   /* '<S24>/Data Type Conversion' */
  const uint32_T DataTypeConversion_d; /* '<S25>/Data Type Conversion' */
  const uint32_T DataTypeConversion_n; /* '<S26>/Data Type Conversion' */
  const uint32_T DataTypeConversion_o; /* '<S27>/Data Type Conversion' */
  const uint32_T DataTypeConversion_p; /* '<S28>/Data Type Conversion' */
  const uint32_T DataTypeConversion_g; /* '<S29>/Data Type Conversion' */
  const uint32_T DataTypeConversion_db;/* '<S30>/Data Type Conversion' */
  const uint32_T DataTypeConversion_f; /* '<S31>/Data Type Conversion' */
  const uint32_T DataTypeConversion_os;/* '<S73>/Data Type Conversion' */
  const uint32_T DataTypeConversion_fe;/* '<S77>/Data Type Conversion' */
  const uint32_T DataTypeConversion_py;/* '<S81>/Data Type Conversion' */
  const uint32_T DataTypeConversion_h; /* '<S87>/Data Type Conversion' */
  const uint32_T DataTypeConversion_h3;/* '<S88>/Data Type Conversion' */
  const uint32_T DataTypeConversion_dr;/* '<S148>/Data Type Conversion' */
  const uint32_T DataTypeConversion_a; /* '<S149>/Data Type Conversion' */
  const uint32_T DataTypeConversion_f4;/* '<S150>/Data Type Conversion' */
  const uint32_T DataTypeConversion_k; /* '<S187>/Data Type Conversion' */
  const uint32_T DataTypeConversion_i; /* '<S188>/Data Type Conversion' */
  const uint32_T DataTypeConversion_b; /* '<S189>/Data Type Conversion' */
} ConstBlockIO_EVSR24;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S296>/Logic'
   */
  boolean_T Logic_table[8];
} ConstParam_EVSR24;

/* Real-time Model Data Structure */
struct tag_RTM_EVSR24 {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO_EVSR24 EVSR24_B;

/* Block states (default storage) */
extern D_Work_EVSR24 EVSR24_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_EVSR24 EVSR24_PrevZCSigState;
extern const ConstBlockIO_EVSR24 EVSR24_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam_EVSR24 EVSR24_ConstP;

/* Model entry point functions */
extern void EVSR24_initialize(void);
extern void EVSR24_step(void);
extern void EVSR24_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EVSR24 *const EVSR24_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'EVSR24'
 * '<S1>'   : 'EVSR24/Foreground'
 * '<S2>'   : 'EVSR24/Power Up_Down'
 * '<S3>'   : 'EVSR24/raptor_xcp_def'
 * '<S4>'   : 'EVSR24/Foreground/ControlsAlgorithms'
 * '<S5>'   : 'EVSR24/Foreground/Inputs'
 * '<S6>'   : 'EVSR24/Foreground/Outputs'
 * '<S7>'   : 'EVSR24/Foreground/ControlsAlgorithms/controls'
 * '<S8>'   : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty'
 * '<S9>'   : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakeBias'
 * '<S10>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakelight'
 * '<S11>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/bspd'
 * '<S12>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand'
 * '<S13>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl'
 * '<S14>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty'
 * '<S15>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip'
 * '<S16>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty'
 * '<S17>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty1'
 * '<S18>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty2'
 * '<S19>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty3'
 * '<S20>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty4'
 * '<S21>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty5'
 * '<S22>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty6'
 * '<S23>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty7'
 * '<S24>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector'
 * '<S25>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector1'
 * '<S26>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector2'
 * '<S27>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector3'
 * '<S28>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector4'
 * '<S29>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector5'
 * '<S30>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector6'
 * '<S31>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector7'
 * '<S32>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty/Saturation Dynamic1'
 * '<S33>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty/Saturation Dynamic6'
 * '<S34>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty/raptor_table_1d1'
 * '<S35>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty/raptor_table_1d3'
 * '<S36>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty1/Saturation Dynamic1'
 * '<S37>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty1/Saturation Dynamic6'
 * '<S38>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty1/raptor_table_1d1'
 * '<S39>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty1/raptor_table_1d3'
 * '<S40>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty2/Saturation Dynamic1'
 * '<S41>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty2/Saturation Dynamic6'
 * '<S42>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty2/raptor_table_1d1'
 * '<S43>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty2/raptor_table_1d3'
 * '<S44>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty3/Saturation Dynamic1'
 * '<S45>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty3/Saturation Dynamic6'
 * '<S46>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty3/raptor_table_1d1'
 * '<S47>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty3/raptor_table_1d3'
 * '<S48>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty4/Saturation Dynamic1'
 * '<S49>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty4/Saturation Dynamic6'
 * '<S50>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty4/raptor_table_1d1'
 * '<S51>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty4/raptor_table_1d3'
 * '<S52>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty5/Saturation Dynamic1'
 * '<S53>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty5/Saturation Dynamic6'
 * '<S54>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty5/raptor_table_1d1'
 * '<S55>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty5/raptor_table_1d3'
 * '<S56>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty6/Saturation Dynamic1'
 * '<S57>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty6/Saturation Dynamic6'
 * '<S58>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty6/raptor_table_1d1'
 * '<S59>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty6/raptor_table_1d3'
 * '<S60>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty7/Saturation Dynamic1'
 * '<S61>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty7/Saturation Dynamic6'
 * '<S62>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty7/raptor_table_1d1'
 * '<S63>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/accFanDuty7/raptor_table_1d3'
 * '<S64>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector/Enabled Subsystem'
 * '<S65>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector1/Enabled Subsystem'
 * '<S66>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector2/Enabled Subsystem'
 * '<S67>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector3/Enabled Subsystem'
 * '<S68>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector4/Enabled Subsystem'
 * '<S69>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector5/Enabled Subsystem'
 * '<S70>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector6/Enabled Subsystem'
 * '<S71>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/airCoolingDuty/raptor_function_call_collector7/Enabled Subsystem'
 * '<S72>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakeBias/brakeBias'
 * '<S73>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakeBias/raptor_function_call_collector'
 * '<S74>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakeBias/brakeBias/Saturation Dynamic'
 * '<S75>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakeBias/raptor_function_call_collector/Enabled Subsystem'
 * '<S76>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakelight/brakelight'
 * '<S77>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakelight/raptor_function_call_collector'
 * '<S78>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakelight/brakelight/Saturation Dynamic'
 * '<S79>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/brakelight/raptor_function_call_collector/Enabled Subsystem'
 * '<S80>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/bspd/bspc'
 * '<S81>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand/raptor_function_call_collector'
 * '<S82>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand/torqueCommand'
 * '<S83>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand/raptor_function_call_collector/Enabled Subsystem'
 * '<S84>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand/torqueCommand/Saturation Dynamic'
 * '<S85>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/torqueCommand/torqueCommand/raptor_table_1d1'
 * '<S86>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/muEstimator'
 * '<S87>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/raptor_function_call_collector1'
 * '<S88>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/raptor_function_call_collector2'
 * '<S89>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl'
 * '<S90>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/raptor_function_call_collector1/Enabled Subsystem'
 * '<S91>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/raptor_function_call_collector2/Enabled Subsystem'
 * '<S92>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller'
 * '<S93>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/Saturation Dynamic'
 * '<S94>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/Saturation Dynamic1'
 * '<S95>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/raptor_table_2d'
 * '<S96>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Anti-windup'
 * '<S97>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/D Gain'
 * '<S98>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter'
 * '<S99>'  : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter ICs'
 * '<S100>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/I Gain'
 * '<S101>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Ideal P Gain'
 * '<S102>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Ideal P Gain Fdbk'
 * '<S103>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Integrator'
 * '<S104>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Integrator ICs'
 * '<S105>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/N Copy'
 * '<S106>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/N Gain'
 * '<S107>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/P Copy'
 * '<S108>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Parallel P Gain'
 * '<S109>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Reset Signal'
 * '<S110>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Saturation'
 * '<S111>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Saturation Fdbk'
 * '<S112>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Sum'
 * '<S113>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Sum Fdbk'
 * '<S114>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tracking Mode'
 * '<S115>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tracking Mode Sum'
 * '<S116>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tsamp - Integral'
 * '<S117>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tsamp - Ngain'
 * '<S118>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/postSat Signal'
 * '<S119>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/preSat Signal'
 * '<S120>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Anti-windup/Passthrough'
 * '<S121>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/D Gain/Internal Parameters'
 * '<S122>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter/Differentiator'
 * '<S123>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter/Differentiator/Tsamp'
 * '<S124>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S125>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S126>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/I Gain/Internal Parameters'
 * '<S127>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Ideal P Gain/Passthrough'
 * '<S128>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S129>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Integrator/Discrete'
 * '<S130>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Integrator ICs/Internal IC'
 * '<S131>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S132>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/N Gain/Passthrough'
 * '<S133>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/P Copy/Disabled'
 * '<S134>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S135>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Reset Signal/Disabled'
 * '<S136>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Saturation/Passthrough'
 * '<S137>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Saturation Fdbk/Disabled'
 * '<S138>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Sum/Sum_PID'
 * '<S139>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Sum Fdbk/Disabled'
 * '<S140>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tracking Mode/Disabled'
 * '<S141>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S142>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tsamp - Integral/Passthrough'
 * '<S143>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S144>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/postSat Signal/Forward_Path'
 * '<S145>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/tractionControl/tractionControl/PID Controller/preSat Signal/Forward_Path'
 * '<S146>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft'
 * '<S147>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight'
 * '<S148>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector'
 * '<S149>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector1'
 * '<S150>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector2'
 * '<S151>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty'
 * '<S152>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic1'
 * '<S153>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic2'
 * '<S154>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic3'
 * '<S155>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic4'
 * '<S156>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic5'
 * '<S157>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/Saturation Dynamic6'
 * '<S158>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_1d1'
 * '<S159>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_1d2'
 * '<S160>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_1d3'
 * '<S161>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_2d'
 * '<S162>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_2d1'
 * '<S163>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyLeft/raptor_table_2d2'
 * '<S164>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic1'
 * '<S165>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic2'
 * '<S166>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic3'
 * '<S167>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic4'
 * '<S168>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic5'
 * '<S169>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/Saturation Dynamic6'
 * '<S170>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_1d1'
 * '<S171>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_1d2'
 * '<S172>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_1d3'
 * '<S173>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_2d'
 * '<S174>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_2d1'
 * '<S175>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/fanDutyRight/raptor_table_2d2'
 * '<S176>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector/Enabled Subsystem'
 * '<S177>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector1/Enabled Subsystem'
 * '<S178>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/raptor_function_call_collector2/Enabled Subsystem'
 * '<S179>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/Saturation Dynamic1'
 * '<S180>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/Saturation Dynamic2'
 * '<S181>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/Saturation Dynamic3'
 * '<S182>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/raptor_table_2d'
 * '<S183>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/raptor_table_2d1'
 * '<S184>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/waterCoolingDuty/wpDuty/raptor_table_2d2'
 * '<S185>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/driveSpeed'
 * '<S186>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/groundSpeed'
 * '<S187>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector1'
 * '<S188>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector2'
 * '<S189>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector3'
 * '<S190>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/slipRatio'
 * '<S191>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector1/Enabled Subsystem'
 * '<S192>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector2/Enabled Subsystem'
 * '<S193>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/raptor_function_call_collector3/Enabled Subsystem'
 * '<S194>' : 'EVSR24/Foreground/ControlsAlgorithms/controls/wheelSlip/slipRatio/Saturation Dynamic'
 * '<S195>' : 'EVSR24/Foreground/Inputs/analogInputs'
 * '<S196>' : 'EVSR24/Foreground/Inputs/canInputs'
 * '<S197>' : 'EVSR24/Foreground/Inputs/digitalInputs'
 * '<S198>' : 'EVSR24/Foreground/Inputs/analogInputs/brakePressure'
 * '<S199>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp'
 * '<S200>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp'
 * '<S201>' : 'EVSR24/Foreground/Inputs/analogInputs/startSwitch'
 * '<S202>' : 'EVSR24/Foreground/Inputs/analogInputs/tcDial'
 * '<S203>' : 'EVSR24/Foreground/Inputs/analogInputs/throttleInput'
 * '<S204>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp'
 * '<S205>' : 'EVSR24/Foreground/Inputs/analogInputs/tsSwitch'
 * '<S206>' : 'EVSR24/Foreground/Inputs/analogInputs/wheelSpeed'
 * '<S207>' : 'EVSR24/Foreground/Inputs/analogInputs/brakePressure/brakePressureF'
 * '<S208>' : 'EVSR24/Foreground/Inputs/analogInputs/brakePressure/brakePressureR'
 * '<S209>' : 'EVSR24/Foreground/Inputs/analogInputs/brakePressure/bspdBrakeError'
 * '<S210>' : 'EVSR24/Foreground/Inputs/analogInputs/brakePressure/bspdStatusError'
 * '<S211>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempInverterIn'
 * '<S212>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempInverterOut'
 * '<S213>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempMotorIn'
 * '<S214>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempInverterIn/raptor_table_1d'
 * '<S215>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempInverterOut/raptor_table_1d'
 * '<S216>' : 'EVSR24/Foreground/Inputs/analogInputs/coolantTemp/coolantTempMotorIn/raptor_table_1d'
 * '<S217>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp'
 * '<S218>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp1'
 * '<S219>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp2'
 * '<S220>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp3'
 * '<S221>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp/raptor_table_1d'
 * '<S222>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp1/raptor_table_1d'
 * '<S223>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp2/raptor_table_1d'
 * '<S224>' : 'EVSR24/Foreground/Inputs/analogInputs/rotorTemp/rotorTemp3/raptor_table_1d'
 * '<S225>' : 'EVSR24/Foreground/Inputs/analogInputs/startSwitch/Subsystem'
 * '<S226>' : 'EVSR24/Foreground/Inputs/analogInputs/tcDial/tcDial'
 * '<S227>' : 'EVSR24/Foreground/Inputs/analogInputs/tcDial/tcDial/raptor_table_1d'
 * '<S228>' : 'EVSR24/Foreground/Inputs/analogInputs/throttleInput/APPS'
 * '<S229>' : 'EVSR24/Foreground/Inputs/analogInputs/throttleInput/throttle1Input'
 * '<S230>' : 'EVSR24/Foreground/Inputs/analogInputs/throttleInput/throttle2Input'
 * '<S231>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLI'
 * '<S232>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLM'
 * '<S233>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLO'
 * '<S234>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRI'
 * '<S235>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRM'
 * '<S236>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRO'
 * '<S237>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLI'
 * '<S238>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLM'
 * '<S239>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLO'
 * '<S240>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRI'
 * '<S241>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRM'
 * '<S242>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRO'
 * '<S243>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLI/raptor_table_1d'
 * '<S244>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLM/raptor_table_1d'
 * '<S245>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFLO/raptor_table_1d'
 * '<S246>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRI/raptor_table_1d'
 * '<S247>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRM/raptor_table_1d'
 * '<S248>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempFRO/raptor_table_1d'
 * '<S249>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLI/raptor_table_1d'
 * '<S250>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLM/raptor_table_1d'
 * '<S251>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRLO/raptor_table_1d'
 * '<S252>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRI/raptor_table_1d'
 * '<S253>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRM/raptor_table_1d'
 * '<S254>' : 'EVSR24/Foreground/Inputs/analogInputs/tireTemp/tireTempRRO/raptor_table_1d'
 * '<S255>' : 'EVSR24/Foreground/Inputs/analogInputs/tsSwitch/tsSwitch'
 * '<S256>' : 'EVSR24/Foreground/Inputs/analogInputs/wheelSpeed/wheelSpeedFL'
 * '<S257>' : 'EVSR24/Foreground/Inputs/analogInputs/wheelSpeed/wheelSpeedFR'
 * '<S258>' : 'EVSR24/Foreground/Inputs/analogInputs/wheelSpeed/wheelSpeedRL'
 * '<S259>' : 'EVSR24/Foreground/Inputs/analogInputs/wheelSpeed/wheelSpeedRR'
 * '<S260>' : 'EVSR24/Foreground/Inputs/canInputs/bmsIn'
 * '<S261>' : 'EVSR24/Foreground/Inputs/canInputs/ddIn'
 * '<S262>' : 'EVSR24/Foreground/Inputs/canInputs/inverterIn'
 * '<S263>' : 'EVSR24/Foreground/Inputs/canInputs/mm5'
 * '<S264>' : 'EVSR24/Foreground/Inputs/canInputs/pdmIn'
 * '<S265>' : 'EVSR24/Foreground/Inputs/canInputs/stmmIn'
 * '<S266>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel'
 * '<S267>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/coolSwitch'
 * '<S268>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/digitalSwitch1'
 * '<S269>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/markSwitch'
 * '<S270>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pageDown'
 * '<S271>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pageUp'
 * '<S272>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pttSwitch'
 * '<S273>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pwrDownSwitch'
 * '<S274>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pwrUpSwitch'
 * '<S275>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/coolSwitch/debounceResolver'
 * '<S276>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/digitalSwitch1/debounceResolver'
 * '<S277>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/markSwitch/debounceResolver'
 * '<S278>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pageDown/debounceResolver'
 * '<S279>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pageUp/debounceResolver'
 * '<S280>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pttSwitch/debounceResolver'
 * '<S281>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pwrDownSwitch/debounceResolver'
 * '<S282>' : 'EVSR24/Foreground/Inputs/digitalInputs/steeringWheel/pwrUpSwitch/debounceResolver'
 * '<S283>' : 'EVSR24/Foreground/Outputs/analogOutputs'
 * '<S284>' : 'EVSR24/Foreground/Outputs/canOutputs'
 * '<S285>' : 'EVSR24/Foreground/Outputs/stateMachine'
 * '<S286>' : 'EVSR24/Foreground/Outputs/canOutputs/cmd'
 * '<S287>' : 'EVSR24/Foreground/Outputs/canOutputs/inverterOut'
 * '<S288>' : 'EVSR24/Foreground/Outputs/canOutputs/pdmOut'
 * '<S289>' : 'EVSR24/Foreground/Outputs/stateMachine/analogStates'
 * '<S290>' : 'EVSR24/Foreground/Outputs/stateMachine/controlStates'
 * '<S291>' : 'EVSR24/Foreground/Outputs/stateMachine/controlStates/bspcAppsFault'
 * '<S292>' : 'EVSR24/Foreground/Outputs/stateMachine/controlStates/bspcTorqueOverrideSim1'
 * '<S293>' : 'EVSR24/Foreground/Outputs/stateMachine/controlStates/contactorState'
 * '<S294>' : 'EVSR24/Foreground/Outputs/stateMachine/controlStates/throttlePctSim'
 * '<S295>' : 'EVSR24/Power Up_Down/Background'
 * '<S296>' : 'EVSR24/Power Up_Down/Background/Debounce'
 * '<S297>' : 'EVSR24/Power Up_Down/Background/Raise Shutdown Event'
 * '<S298>' : 'EVSR24/Power Up_Down/Background/Raise Startup Event'
 * '<S299>' : 'EVSR24/Power Up_Down/Background/Store EEPROM'
 * '<S300>' : 'EVSR24/Power Up_Down/Background/Debounce/Detect Change'
 * '<S301>' : 'EVSR24/Power Up_Down/Background/Raise Shutdown Event/raptor_shutdown'
 * '<S302>' : 'EVSR24/Power Up_Down/Background/Raise Startup Event/raptor_startup'
 * '<S303>' : 'EVSR24/Power Up_Down/Background/Store EEPROM/raptor_store_nv'
 */
#endif                                 /* RTW_HEADER_EVSR24_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
