#ifndef __c3_steeringWheel_lib_h__
#define __c3_steeringWheel_lib_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc3_steeringWheel_libInstanceStruct
#define typedef_SFc3_steeringWheel_libInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c3_is_active_c3_steeringWheel_lib;
  uint32_T c3_is_c3_steeringWheel_lib;
  uint8_T c3_JITStateAnimation[2];
  uint8_T c3_JITTransitionAnimation[3];
  uint32_T c3_presentTicks;
  uint32_T c3_elapsedTicks;
  uint32_T c3_previousTicks;
  real_T c3_durationOperatorLastReferenceTime_1;
  boolean_T c3_condWasTrueAtLastTimeStep_1;
  real_T c3_chartDisableTime;
  real_T c3_b_durationOperatorLastReferenceTime_1;
  boolean_T c3_b_condWasTrueAtLastTimeStep_1;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_fEmlrtCtx;
  boolean_T *c3_SM_sw;
  real_T *c3_SM_switch;
} SFc3_steeringWheel_libInstanceStruct;

#endif                                 /* typedef_SFc3_steeringWheel_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_steeringWheel_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c3_steeringWheel_lib_get_check_sum(mxArray *plhs[]);
extern void c3_steeringWheel_lib_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
