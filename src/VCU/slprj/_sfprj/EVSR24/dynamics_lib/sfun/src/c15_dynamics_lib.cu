/* Include files */

#include "dynamics_lib_sfun.h"
#include "c15_dynamics_lib.h"
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

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance);
static void enable_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void c15_do_animation_call_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_st);
static void initSimStructsc15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance);
static real32_T c15_eML_blk_kernel(SFc15_dynamics_libInstanceStruct
  *chartInstance, real_T c15_b_antiRollRearSprings, real_T c15_b_antiRollRearARB,
  real32_T c15_b_antiRollRearTires);
static real32_T c15_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier);
static real32_T c15_b_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static uint8_T c15_c_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier);
static uint8_T c15_d_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void init_dsm_address_info(SFc15_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc15_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c15_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c15_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c15_errCode;
  c15_errCode = cudaGetLastError();
  if (c15_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c15_errCode), (char_T *)
                       cudaGetErrorName(c15_errCode), (char_T *)
                       cudaGetErrorString(c15_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c15_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c15_JITStateAnimation,
                        chartInstance->c15_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c15_JITTransitionAnimation[0] = 0U;
  *chartInstance->c15_antiRollRearAxleAndTire = c15_eML_blk_kernel(chartInstance,
    *chartInstance->c15_antiRollRearSprings, *chartInstance->c15_antiRollRearARB,
    *chartInstance->c15_antiRollRearTires);
  c15_do_animation_call_c15_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c15_do_animation_call_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c15_b_y = NULL;
  const mxArray *c15_c_y = NULL;
  const mxArray *c15_st;
  const mxArray *c15_y = NULL;
  c15_st = NULL;
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellmatrix(2, 1), false);
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y",
    chartInstance->c15_antiRollRearAxleAndTire, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y",
    &chartInstance->c15_is_active_c15_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c15_y, 1, c15_c_y);
  sf_mex_assign(&c15_st, c15_y, false);
  return c15_st;
}

static void set_sim_state_c15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_st)
{
  const mxArray *c15_u;
  c15_u = sf_mex_dup(c15_st);
  *chartInstance->c15_antiRollRearAxleAndTire = c15_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 0)),
     "antiRollRearAxleAndTire");
  chartInstance->c15_is_active_c15_dynamics_lib = c15_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 1)),
     "is_active_c15_dynamics_lib");
  sf_mex_destroy(&c15_u);
  sf_mex_destroy(&c15_st);
}

static void initSimStructsc15_dynamics_lib(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc15_dynamics_lib
  (SFc15_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c15_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  sf_mex_assign(&c15_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c15_nameCaptureInfo;
}

static real32_T c15_eML_blk_kernel(SFc15_dynamics_libInstanceStruct
  *chartInstance, real_T c15_b_antiRollRearSprings, real_T c15_b_antiRollRearARB,
  real32_T c15_b_antiRollRearTires)
{
  return static_cast<real32_T>(c15_b_antiRollRearSprings + c15_b_antiRollRearARB)
    * c15_b_antiRollRearTires / (static_cast<real32_T>(c15_b_antiRollRearSprings
    + c15_b_antiRollRearARB) + c15_b_antiRollRearTires);
}

static real32_T c15_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier)
{
  emlrtMsgIdentifier c15_thisId;
  real32_T c15_y;
  c15_thisId.fIdentifier = const_cast<const char_T *>(c15_identifier);
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_nullptr),
    &c15_thisId);
  sf_mex_destroy(&c15_nullptr);
  return c15_y;
}

static real32_T c15_b_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  real32_T c15_f;
  real32_T c15_y;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_f, 0, 1, 0U, 0, 0U, 0);
  c15_y = c15_f;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static uint8_T c15_c_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier)
{
  emlrtMsgIdentifier c15_thisId;
  uint8_T c15_y;
  c15_thisId.fIdentifier = const_cast<const char_T *>(c15_identifier);
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_nullptr),
    &c15_thisId);
  sf_mex_destroy(&c15_nullptr);
  return c15_y;
}

static uint8_T c15_d_emlrt_marshallIn(SFc15_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  uint8_T c15_b_u;
  uint8_T c15_y;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_b_u, 1, 3, 0U, 0, 0U, 0);
  c15_y = c15_b_u;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void init_dsm_address_info(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc15_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c15_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c15_antiRollRearAxleAndTire = (real32_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c15_antiRollRearSprings = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c15_antiRollRearARB = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c15_antiRollRearTires = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c15_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(460049933U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(14324852U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(820815212U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3565248949U);
}

mxArray *sf_c15_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c15_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c15_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c15_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Isj6ReA8hPzSjKD8nNyglITix"
    "wrclId81JCMotSwf6BhRv57lJwoEw/xP4AAv6SQvMXiJ9ZHJ+YXJJZlhqfbGgan1IJjK/M5OL4n"
    "MwkhLkgAAAUqSHM"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sd1kXtovyIdHqHeTwYna1wE";
}

static void sf_opaque_initialize_c15_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c15_dynamics_lib(void *chartInstanceVar)
{
  enable_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c15_dynamics_lib(void *chartInstanceVar)
{
  disable_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c15_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c15_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c15_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c15_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c15_dynamics_lib
      ((SFc15_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc15_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc15_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c15_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc15_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c15_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc15_dynamics_lib((SFc15_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c15_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE2P20QYdrbLiqJS7QEJVFWiRySE1C2qxAGVTfPBRtqwUZMt0Mtq4nkTjzKe8c5HPnrgBjf",
    "EX+En9Mg/gP/AhSNH3nGcNHVC4nEkaBGWHGdsP/O87zvv1ziotNoBHrfxPP0gCI7w+jaeB8H8eC",
    "sbV1bO+f3D4PNs/Ms7QRBKCkMQXTsYsGngdwgbd4gisQ78D0FieAJacmuYFC0xkMWxTAxAgQhxg",
    "kQq48WrWWw5E6OmFaFj1l9HLIy6kbScPsYJCb0QfPZ3vIk1HWSsMwWhaQJQEylph1GTk+F2Kygz",
    "qUUQjrSNvW2lwXRt4lTVbcsNSzg0phC2hDYEraB36Ns1xEDNTP2M7PTV3QVaxglnRBS3dUR0FxL",
    "0DgOXCcXfC2vQegV5ka/PBDFSMcIbMa9FRBXFdjjK2Ua35t52NrGpQ98Oh0wMnXWVjUGg/ugnBW",
    "w1qMkxKDKEC+HHGzrtGtN0gZd+WRBrWAxPiaqG6AcaqF8MogPrLsGlhR5O44UFQfocWrqn2BjXy",
    "DdvtFwolcobNp57ki6FTXkbY1xVXZK3GYoa4Vz7YXsyOYcx8JS/TgwpgZ3ze4C1ZrQn0Ttc5HpG",
    "vxXs2kKGrUlBWXGvHOdQaZH4ChN+ATiLXRgARTMvRV9OtCuOrDYyrmHo18/PC/KtY1vCgBqQEAr",
    "na0WYBhQ49StPXsq0CyREo5VMqmXhGeYxWAoa6IEV9YlUI7Sxb2F4aSsXCX5ooEOog4E0yTXQu5",
    "8SbgvKHGvMys49LjVmWT9exLr4KQUOSRgBdTWQcWhjnsUJii6xduWzitqOmZnVQYeKJUUjyWJCx",
    "+LnrNSbJXApRkJORFPJuJt1MVv8CgCzBlECS9ljLKVq1kThi0mt4LqXZnffhsHZmRhO+s43vgSB",
    "1dDp6qo3CTGqGgLbTRRoH2yXPcd2RGimDbaAs0YaA3TeBwcv++DDDX3w8UoffJyd4cnDKzrDbpS",
    "F+oqzvpvn/so8twr004s+fBsuWMMFS9zi+tEKvrKBN1i55vluHrz6/o0c3wHeqVQqa3Z6N8dzmM",
    "MdZXY6+p3+9P35sxcf//pz+7sfWz/s4q+s8VfS/w734sBvv3I7G99d9ErLzDxeS17u3bMdfvB+z",
    "g/cWNOT0TdGjmctenZ9Br3Jt4KcTBrpfMc75D3Iybu4f8/1Zxi4aR5QYYtm+x43Jnbej7v5P1uR",
    "92iHPW6u+FMQ/PHFfvj3TsvaC8syeyI5xx2Tqk45VAXt4a7oFX8uL9e90/3wc/7ODr3u5PS6k/b",
    "xV8Rla7jKZ4b1eC3r/764N4Xvf1zxdShSV26UxJXlC/5h3L76+dbLN/39+1vyWZB7//g11mNbHv",
    "Xpm143vX4L/PqaD7Pxo+VevRYxTjfsFrLH2NAPNj39j/j3n572W/QlDWe/7APps0+rgvAZbg/m2",
    "6/sdke5b3PLRwqI3rwH+zfqyfI7/o5+5VYuvt14wgSVE/3JyYOHD/apT38BYyIPhA==",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c15_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c15_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2405755654U));
  ssSetChecksum1(S,(3227143301U));
  ssSetChecksum2(S,(1303435051U));
  ssSetChecksum3(S,(2252967294U));
}

static void mdlRTW_c15_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c15_dynamics_lib(SimStruct *S)
{
  SFc15_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc15_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc15_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc15_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc15_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c15_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c15_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c15_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c15_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c15_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c15_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c15_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c15_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c15_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c15_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c15_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c15_dynamics_lib;
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

  mdl_setup_runtime_resources_c15_dynamics_lib(chartInstance);
}

void c15_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c15_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
