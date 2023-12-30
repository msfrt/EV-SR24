/* Include files */

#include "steeringWheel_lib_sfun.h"
#include "c3_steeringWheel_lib.h"
#include <string.h>
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
const int32_T CALL_EVENT = -1;
const uint8_T c3_IN_NO_ACTIVE_CHILD = 0U;
const uint8_T c3_IN_NO_ACTIVE_LEAF = 0U;
const uint32_T c3_IN_Off = 1U;
const uint32_T c3_IN_On = 2U;

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);
static void initialize_params_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void mdl_start_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct *
  chartInstance);
static void mdl_terminate_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void enable_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);
static void disable_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);
static void c3_set_sim_state_side_effects_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void sf_gateway_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void c3_durationGlobalUpdateFunctionc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void c3_update_jit_animation_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void c3_do_animation_call_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void set_sim_state_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance, const mxArray *c3_st);
static void initSimStructsc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void initSubchartIOPointersc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static void c3_durationReferenceTimeUpdate(SFc3_steeringWheel_libInstanceStruct *
  chartInstance);
static void c3_b_durationReferenceTimeUpdate
  (SFc3_steeringWheel_libInstanceStruct *chartInstance);
static real_T c3_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static uint8_T c3_c_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static uint8_T c3_d_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static uint32_T c3_e_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static uint32_T c3_f_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static boolean_T c3_g_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static boolean_T c3_h_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *c3_i_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static const mxArray *c3_j_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc3_steeringWheel_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_is_active_c3_steeringWheel_lib = 0U;
  chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_NO_ACTIVE_CHILD;
  if (sf_get_output_port_reusable(chartInstance->S, 1) == 0) {
    *chartInstance->c3_SM_switch = 0.0;
  }
}

static void initialize_params_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
}

static void mdl_start_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct *
  chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
}

static void mdl_setup_runtime_resources_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c3_JITStateAnimation,
                        chartInstance->c3_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void enable_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_durationOperatorLastReferenceTime_1 += _sfTime_ -
    chartInstance->c3_chartDisableTime;
  chartInstance->c3_b_durationOperatorLastReferenceTime_1 += _sfTime_ -
    chartInstance->c3_chartDisableTime;
}

static void disable_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_chartDisableTime = _sfTime_;
}

static void c3_set_sim_state_side_effects_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if ((chartInstance->c3_is_c3_steeringWheel_lib == c3_IN_Off) && (sf_mex_sub
         (chartInstance->c3_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 2) == 0.0)) {
      chartInstance->c3_b_durationOperatorLastReferenceTime_1 = _sfTime_;
      chartInstance->c3_b_condWasTrueAtLastTimeStep_1 = false;
    }

    if ((chartInstance->c3_is_c3_steeringWheel_lib == c3_IN_On) && (sf_mex_sub
         (chartInstance->c3_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 3) == 0.0)) {
      chartInstance->c3_durationOperatorLastReferenceTime_1 = _sfTime_;
      chartInstance->c3_condWasTrueAtLastTimeStep_1 = false;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void sf_gateway_c3_steeringWheel_lib(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
  c3_set_sim_state_side_effects_c3_steeringWheel_lib(chartInstance);
  _sfTime_ = sf_get_time(chartInstance->S);
  memset(&chartInstance->c3_JITTransitionAnimation[0], 0, 3U * sizeof(uint8_T));
  c3_durationGlobalUpdateFunctionc3_steeringWheel_lib(chartInstance);
  if (chartInstance->c3_is_active_c3_steeringWheel_lib == 0U) {
    chartInstance->c3_is_active_c3_steeringWheel_lib = 1U;
    chartInstance->c3_JITTransitionAnimation[0U] = 1U;
    chartInstance->c3_b_condWasTrueAtLastTimeStep_1 = false;
    chartInstance->c3_b_durationOperatorLastReferenceTime_1 = _sfTime_;
    chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_Off;
    c3_b_durationReferenceTimeUpdate(chartInstance);
  } else {
    switch (chartInstance->c3_is_c3_steeringWheel_lib) {
     case c3_IN_Off:
      c3_b_durationReferenceTimeUpdate(chartInstance);
      if (_sfTime_ - chartInstance->c3_b_durationOperatorLastReferenceTime_1 >
          0.01) {
        chartInstance->c3_JITTransitionAnimation[1U] = 1U;
        *chartInstance->c3_SM_switch = 0.0;
        chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_NO_ACTIVE_CHILD;
        chartInstance->c3_condWasTrueAtLastTimeStep_1 = false;
        chartInstance->c3_durationOperatorLastReferenceTime_1 = _sfTime_;
        chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_On;
        c3_durationReferenceTimeUpdate(chartInstance);
      }
      break;

     case c3_IN_On:
      c3_durationReferenceTimeUpdate(chartInstance);
      if (_sfTime_ - chartInstance->c3_durationOperatorLastReferenceTime_1 >
          0.01) {
        chartInstance->c3_JITTransitionAnimation[2U] = 1U;
        *chartInstance->c3_SM_switch = 1.0;
        chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_NO_ACTIVE_CHILD;
        chartInstance->c3_b_condWasTrueAtLastTimeStep_1 = false;
        chartInstance->c3_b_durationOperatorLastReferenceTime_1 = _sfTime_;
        chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_Off;
        c3_b_durationReferenceTimeUpdate(chartInstance);
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      chartInstance->c3_is_c3_steeringWheel_lib = c3_IN_NO_ACTIVE_CHILD;
      break;
    }
  }

  c3_update_jit_animation_c3_steeringWheel_lib(chartInstance);
  c3_do_animation_call_c3_steeringWheel_lib(chartInstance);
}

static void ext_mode_exec_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
}

static void c3_durationGlobalUpdateFunctionc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  c3_durationReferenceTimeUpdate(chartInstance);
  c3_b_durationReferenceTimeUpdate(chartInstance);
}

static void c3_update_jit_animation_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  chartInstance->c3_JITStateAnimation[0U] = static_cast<uint8_T>
    (chartInstance->c3_is_c3_steeringWheel_lib == c3_IN_Off);
  chartInstance->c3_JITStateAnimation[1U] = static_cast<uint8_T>
    (chartInstance->c3_is_c3_steeringWheel_lib == c3_IN_On);
}

static void c3_do_animation_call_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(8, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", chartInstance->c3_SM_switch, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_steeringWheel_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y",
    &chartInstance->c3_is_c3_steeringWheel_lib, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &chartInstance->c3_previousTicks, 7,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y",
    &chartInstance->c3_b_durationOperatorLastReferenceTime_1, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y",
    &chartInstance->c3_durationOperatorLastReferenceTime_1, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y",
    &chartInstance->c3_b_condWasTrueAtLastTimeStep_1, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y",
    &chartInstance->c3_condWasTrueAtLastTimeStep_1, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 7, c3_i_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_SM_switch = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "SM_switch");
  chartInstance->c3_is_active_c3_steeringWheel_lib = c3_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
     "is_active_c3_steeringWheel_lib");
  chartInstance->c3_is_c3_steeringWheel_lib = c3_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 2)),
     "is_c3_steeringWheel_lib");
  chartInstance->c3_previousTicks = c3_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 3)), "previousTicks");
  chartInstance->c3_b_durationOperatorLastReferenceTime_1 = c3_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
     "durationOperatorLastReferenceTime_1");
  chartInstance->c3_durationOperatorLastReferenceTime_1 = c3_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
     "durationOperatorLastReferenceTime_1");
  chartInstance->c3_b_condWasTrueAtLastTimeStep_1 = c3_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 6)),
     "condWasTrueAtLastTimeStep_1");
  chartInstance->c3_condWasTrueAtLastTimeStep_1 = c3_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 7)),
     "condWasTrueAtLastTimeStep_1");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_jit_animation_c3_steeringWheel_lib(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void initSimStructsc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
}

static void initSubchartIOPointersc3_steeringWheel_lib
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c3_steeringWheel_lib_get_eml_resolved_functions_info()
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static void c3_durationReferenceTimeUpdate(SFc3_steeringWheel_libInstanceStruct *
  chartInstance)
{
  boolean_T c3_condIsTrue;
  c3_condIsTrue = !*chartInstance->c3_SM_sw;
  if ((!c3_condIsTrue) || (!chartInstance->c3_condWasTrueAtLastTimeStep_1)) {
    chartInstance->c3_durationOperatorLastReferenceTime_1 = _sfTime_;
  }

  chartInstance->c3_condWasTrueAtLastTimeStep_1 = c3_condIsTrue;
}

static void c3_b_durationReferenceTimeUpdate
  (SFc3_steeringWheel_libInstanceStruct *chartInstance)
{
  if (!chartInstance->c3_b_condWasTrueAtLastTimeStep_1) {
    chartInstance->c3_b_durationOperatorLastReferenceTime_1 = _sfTime_;
  }

  chartInstance->c3_b_condWasTrueAtLastTimeStep_1 = true;
}

static real_T c3_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_d;
  real_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static uint8_T c3_c_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static uint32_T c3_e_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint32_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static uint32_T c3_f_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint32_T c3_b_u;
  uint32_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 7, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static boolean_T c3_g_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static boolean_T c3_h_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_b;
  boolean_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *c3_i_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_nullptr), &c3_thisId), true);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static const mxArray *c3_j_emlrt_marshallIn(SFc3_steeringWheel_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), true);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc3_steeringWheel_libInstanceStruct
  *chartInstance)
{
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_SM_sw = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_SM_switch = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_steeringWheel_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(27400614U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1792988785U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(999508065U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1825472735U);
}

mxArray *sf_c3_steeringWheel_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_steeringWheel_lib_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("GPUAcceleration");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("chartInfo");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_steeringWheel_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_steeringWheel_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrVlM9LwzAUx1OZczs4dttAkKHgwZvMgzfrzYJD2QrzFmL65oJbWpJ06n/tn2DSFi2hELAR9MH"
    "j9fvg+5oP+YGCaIZ0DHSGBwh1de3p3ENl7Fc6qNWy3/nSE53qPQPTl4JGia6cbAtN8reIr9Ji/h"
    "X6nt9tmB/U5verfhkf1+38Z2HBV/N3Gvz9mn9Y6cUMy1em6LrqD2r15+uZhO385f8fHDzHFo/RT"
    "GJCFdsBplMsFYBg/Hm5BtjgDXvyxXfihe/WwTey+EYlXyOYH65zL1yuc3hocRmdCdixNJcxoy/S"
    "2zmctuQZFv5HB8+pxWN0kguiWMrvM9AfqbgjUs1hBQI4hZhtAV94vG9tOcf/hPPSy3663pUji9N"
    "omvJkSWQscrhRBtKwLRRkf4pv/Ot8nwz6bFI="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_steeringWheel_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s92zbuxMlE7MLwbgoNNx2oB";
}

static void sf_opaque_initialize_c3_steeringWheel_lib(void *chartInstanceVar)
{
  initialize_params_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
  initialize_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_steeringWheel_lib(void *chartInstanceVar)
{
  enable_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c3_steeringWheel_lib(void *chartInstanceVar)
{
  disable_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c3_steeringWheel_lib(void *chartInstanceVar)
{
  sf_gateway_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_steeringWheel_lib(SimStruct* S)
{
  return get_sim_state_c3_steeringWheel_lib
    ((SFc3_steeringWheel_libInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_steeringWheel_lib(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c3_steeringWheel_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_steeringWheel_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_steeringWheel_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_steeringWheel_lib
      ((SFc3_steeringWheel_libInstanceStruct*) chartInstanceVar);
    ((SFc3_steeringWheel_libInstanceStruct*) chartInstanceVar)->
      ~SFc3_steeringWheel_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_steeringWheel_lib(void *chartInstanceVar)
{
  mdl_start_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc3_steeringWheel_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c3_steeringWheel_lib(void *chartInstanceVar)
{
  mdl_terminate_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_steeringWheel_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_steeringWheel_lib((SFc3_steeringWheel_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc3_steeringWheel_lib
      ((SFc3_steeringWheel_libInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_steeringWheel_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [25] = {
    "eNrtWd1uG0UUXrshJKipogqJSKC0ohJCSIg2AVEkBEn8A5bsOKqdBnFjxrvH3lFmZ7fz458+BG/",
    "AK/Qa8QR9BiQueAMuueTMeu26G2Pv2FZIJVbabI53vznnO3POmTO7Tq5Sc/C4g+fePcfZxOsWnn",
    "lndLyVyLmpc/T7hvN1Ir98x3Hc0IMu8IbudOjAsTu4Ds6IIIF07A9OAngCMmRa0ZBXeCfMjqW8A",
    "wK4iwNEoVBWeiUNNKP8sqy5azTLC5+6fsMPNfNOcEDi1Tkb/pveSKsz1FikAlxVBvCUL0Ld9cuM",
    "dOd7Qah+wQf3UurA2lcSVENHhqqsaaZoxKA0ALfCpSLoBbmAb0MRBQU1sHOy4SsbY3QYRIwSnt3",
    "XPpENiDA6FJxHHv6ta4Xey6gX9bUpJyoUlLBSwAo+EVmxZwztrGFYM2s/q0AVoa27Xcq7xrtCB8",
    "CRP8ZJBl91CmEPBOlCndvpdQ270iCe4ElcZsQqGsBTIo5djAMJnl0OYgDLBsGphSYOY4UFTtoMK",
    "rIpaA/nyLZuVEwqLVU3dDCKJLkUNtZb6uGsyiX1ll1eIIxJO2wzjKrQAxbrLxJFlsCO9FuApaRe",
    "M8ToMJlrmf2a02caEmwh5B7NHpW9FCpeJE6x4GeA08CkAXjo5onpk4EW5ZGWKgwKmPrFajWjvqv",
    "YClcgOsSFzPVaECoBDY7jylKvR6VJJESjl1TMMvMIoxxcCurIjubFfigu0ce2C8MrX5lMsEOD14",
    "UiKIiLXAmj+ylhOqPNgcSqbMLjXGKVtdOLWJM/S4Fd4vrgmTWQMqhhncUBsk6xNMvnMbLtUTUsg",
    "nQFjbJmksaCjouf8VJzGME5v+Rhn5dFGDSSLmZOXAFg1SCC41J2gkupGJbR+GxWC3jWjKu7bcNg",
    "/EwUI20TG98Bx9XQcDWrN3Exq0oc2000aBVsgz7HdoRLKhW2gMNSnANe3Ad/77zqgzdm9MHvTvX",
    "Bu4nsHrZwIBA48oUPwFqMtsd99cOp8W5n6Kuz4JwrOGeCG18/nsLnZuh1pq5pfdv5+Xbm8b9cgj",
    "uawu2k9GykcJuJz/4k0S+/vtiHx789ePHZz3/8vor+v96227fcSeQPxj3TpEL3rhSxLPHwXioej",
    "Cy/Onje1oMaK31Zq/bb3fD0dHAQnoz8tcDerZS9Y/m+6dMwgeN6INyKl+x/jEz0qC834z+esndz",
    "gT+2p+IJPfntaviPjtLxMMtf2yl/GblRa8k+Va4/I46Xt+f+0Wr4kf6zBXz2U3z24z6+RUy1htb",
    "syrAefh+uhd8y8Y38ZhJbD69P1sJrURzupHgZORLQo6GWTYoVYW1xeLgin90Y/8MCPg9SfIzs6d",
    "H6V4/MQhiKKpHqCSTvPcxurfVojfm2Ks+9N4Tn52uZz0V15f0UTyO7uIe5ILhd1nCsDEnDraEgu",
    "lH89q6F37L9gi3O+R+3VtxNmIcsfXjumnHONeNW5We7v3jTn384p545qed3bzCPeXXUZp9503gN",
    "8nb7wHuJ/M3kHWfBp8yb8ZYluV0F0pl1N9H/Mjff3vyceNpZYO/mVJ7/lLPjeTeR78b7XWRY8Qb",
    "N0Lzjq5Foyp6tBfZvrGh/LkMemWduvZZHt5x6p7OUvnxGffnX9OUd893lJsb3347dvI/3bSUT38",
    "mHvx8PjzlhQ0lHr/DGP58J881pcksAkbPfLf4X63bW/dztVP01cp9yL+zLTx8dfHGwSr/yDzbBa",
    "CI=",
    ""
  };

  static char newstr [1729] = "";
  newstr[0] = '\0';
  for (i = 0; i < 25; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_steeringWheel_lib(SimStruct *S)
{
  const char* newstr = sf_c3_steeringWheel_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2641388001U));
  ssSetChecksum1(S,(1696509624U));
  ssSetChecksum2(S,(2921577016U));
  ssSetChecksum3(S,(3671952943U));
}

static void mdlRTW_c3_steeringWheel_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlSetupRuntimeResources_c3_steeringWheel_lib(SimStruct *S)
{
  SFc3_steeringWheel_libInstanceStruct *chartInstance;
  chartInstance = (SFc3_steeringWheel_libInstanceStruct *)utMalloc(sizeof
    (SFc3_steeringWheel_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_steeringWheel_libInstanceStruct));
  chartInstance = new (chartInstance) SFc3_steeringWheel_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_steeringWheel_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_steeringWheel_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_steeringWheel_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c3_steeringWheel_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_steeringWheel_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_steeringWheel_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_steeringWheel_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_steeringWheel_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_steeringWheel_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_steeringWheel_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_steeringWheel_lib;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_steeringWheel_lib;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c3_steeringWheel_lib(chartInstance);
}

void c3_steeringWheel_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_steeringWheel_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_steeringWheel_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_steeringWheel_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_steeringWheel_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
