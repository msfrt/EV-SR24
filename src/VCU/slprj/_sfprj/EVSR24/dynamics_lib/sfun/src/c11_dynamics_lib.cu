/* Include files */

#include "dynamics_lib_sfun.h"
#include "c11_dynamics_lib.h"
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
static void initialize_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance);
static void enable_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void c11_do_animation_call_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_st);
static void initSimStructsc11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance);
static real_T c11_eML_blk_kernel(SFc11_dynamics_libInstanceStruct *chartInstance,
  real_T c11_b_frontTrack, real_T c11_b_frontWheelRate);
static real_T c11_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier);
static real_T c11_b_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static uint8_T c11_c_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier);
static uint8_T c11_d_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void init_dsm_address_info(SFc11_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc11_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c11_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c11_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c11_errCode;
  c11_errCode = cudaGetLastError();
  if (c11_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c11_errCode), (char_T *)
                       cudaGetErrorName(c11_errCode), (char_T *)
                       cudaGetErrorString(c11_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c11_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c11_JITStateAnimation,
                        chartInstance->c11_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_JITTransitionAnimation[0] = 0U;
  *chartInstance->c11_antiRollFrontSprings = c11_eML_blk_kernel(chartInstance,
    *chartInstance->c11_frontTrack, *chartInstance->c11_frontWheelRate);
  c11_do_animation_call_c11_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c11_do_animation_call_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(2, 1), false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y",
    chartInstance->c11_antiRollFrontSprings, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y",
    &chartInstance->c11_is_active_c11_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  c11_u = sf_mex_dup(c11_st);
  *chartInstance->c11_antiRollFrontSprings = c11_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c11_u, 0)), "antiRollFrontSprings");
  chartInstance->c11_is_active_c11_dynamics_lib = c11_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 1)),
     "is_active_c11_dynamics_lib");
  sf_mex_destroy(&c11_u);
  sf_mex_destroy(&c11_st);
}

static void initSimStructsc11_dynamics_lib(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc11_dynamics_lib
  (SFc11_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c11_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static real_T c11_eML_blk_kernel(SFc11_dynamics_libInstanceStruct *chartInstance,
  real_T c11_b_frontTrack, real_T c11_b_frontWheelRate)
{
  real_T c11_a;
  c11_a = c11_b_frontTrack / 1000.0;
  return c11_a * c11_a * 1.5574077246549023 * (c11_b_frontWheelRate * 1000.0) /
    2.0;
}

static real_T c11_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  c11_thisId.fIdentifier = const_cast<const char_T *>(c11_identifier);
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static real_T c11_b_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_d;
  real_T c11_y;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static uint8_T c11_c_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  uint8_T c11_y;
  c11_thisId.fIdentifier = const_cast<const char_T *>(c11_identifier);
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static uint8_T c11_d_emlrt_marshallIn(SFc11_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint8_T c11_b_u;
  uint8_T c11_y;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_b_u, 1, 3, 0U, 0, 0U, 0);
  c11_y = c11_b_u;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void init_dsm_address_info(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc11_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c11_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c11_frontTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c11_antiRollFrontSprings = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c11_frontWheelRate = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1117483395U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3344270233U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2357246692U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(479213669U);
}

mxArray *sf_c11_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c11_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c11_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c11_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Isg6ReA8hPzSjKD8nNy3Iry80"
    "qCC4oy89KLYeEFo8l3l4IDZfoh9gcQ8JcUmr9A/Mzi+MTkksyy1PhkQ8P4lEpgfGUmF8fnZCYhz"
    "AUBAFUoIPY="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sguz5aP2MdkthwhiEaEoDKC";
}

static void sf_opaque_initialize_c11_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_dynamics_lib(void *chartInstanceVar)
{
  enable_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c11_dynamics_lib(void *chartInstanceVar)
{
  disable_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c11_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c11_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c11_dynamics_lib
      ((SFc11_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc11_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc11_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c11_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc11_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c11_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc11_dynamics_lib((SFc11_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c11_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE+P20QUn0TLiqJS7aECVCFRCQnBAam7qBIHBLtNHIjYsFGdLRKX1cR+iUcZz7jzJ9n0wld",
    "AfAz4Chw4coIb4lvAkRPijeOkwQmJJ5GgRXjleMf2b37vvXn/xqTW7hA8buF5+hohh3h9Ec86mR",
    "0vFOPa0jm7f0A+KMY/vERIJGMYggjtYMCuid8hbNqliqaa+B+CpvAQtOTWMCnaYiCrY5kYgAIR4",
    "QSZVMaLV7PUciZGLSsix6w/T1iUhIm0PH6AE9L4QvDp3/Fm1nSRsckURKYFEJtESTtMWpwON1tB",
    "mUkjgWikbeptKw0mtJlTVXcsNyzjEFxD1BbaULSC3qJvaKiBhrn2M7LTV4dztEwzzqiobuuE6hA",
    "y9A4Dl1mMvxfWoPUq8iJfnwlqpGKUBylvJFRVxXY5ytlBt+bedjapaULfDodMDJ11lU1BoP7oJx",
    "VsNWjIMSg6hAvhxxs57YLrfIEXflkRa1gKj6g6i9APNMR+MYgOrEOKSws9nMYLC4L2ObR1T7Exr",
    "pFv3mi7UNopb9h05kl6J2zOG4xxVfWOvK1INCjn2g/bk9k5jIHn/E1q6A7YGb8HWGsW9yR6h4tc",
    "z+i3gj22UGAbUsSsuleOS6i8SHyGCb8CnKUuDCBGMy9EX0y0LY6sNjJtYOg3z88r8q1i28KAGtA",
    "IKudrRZkGFDj3K0/emGkXSIhGK5lcy8ozzGJwJyjRAyuaE6lGaGPfwvDUVi4S/NAQD6EJBvIkF6",
    "B3P6LcVpQ51ZiVnXtcasyyfryIdfGzEziiUQKxq4GMQwfzLE5QdYm1K59nqO2YmWkTdKRYVjWSL",
    "CZ0LH7OSr1pBpdiJOREtJRMw6KL2eBXAJg1qBJYyh5gKVXTFgpfTWoFj3t5dvdtGJydqeG073zj",
    "YxBYDZ2urnrTCKMqENhuokD7YEP2BNsRoZk22AJOgzwG4lkfTJ72wQdr+uCjpT74qDij4+OreIr",
    "dKIv0FWd9N8+9pXluVuin5334JhxZwZEFbn59ewlfW8NLlq5lvhv1v75fL/HV8a9WIyt2ernEc1",
    "DCHRZ2Gn/561ff/PTOHz9//eNb33375ivb+Gsr/LX8f4f7vu63X7lVjF+f90qLzDxeSV7u3U+2+",
    "MGrJT9wYz20T+7T7kknHplkkrCABrL5aSOf72iLvPWSvPP7d11/hoGb5wEVteNi3+PG1M76cTf/",
    "+0vyHm6xx40lfyLkt4/2w98+rWKv2yV7uTGWZfZQco7ZSJgwUxiZuuzPu8t193Q//Iy/u0WvOyW",
    "97uR9/BV12RquyplhNV539X9f3PPC9z+u+jpUqSv1HXG78pF/GLevfr718nl//96GfEZK7x89w3",
    "psyqM+fdOzptcvxK+veaMYf7jYqzcSxuM1u4XiMTb0g3VP/yP+/bun/eZ9XODsV3wg/eK9M0H5F",
    "LcHs+1Xcbur3Le5xSMFVK/fg/0b9WTxHX9Lv3KzFN9uPGEilhP97vHJ/ZN96tOftX8Pyg==",
    ""
  };

  static char newstr [1497] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c11_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c11_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2431614838U));
  ssSetChecksum1(S,(4264153002U));
  ssSetChecksum2(S,(651072214U));
  ssSetChecksum3(S,(371436476U));
}

static void mdlRTW_c11_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c11_dynamics_lib(SimStruct *S)
{
  SFc11_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc11_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc11_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc11_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc11_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c11_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c11_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c11_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c11_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c11_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c11_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c11_dynamics_lib;
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

  mdl_setup_runtime_resources_c11_dynamics_lib(chartInstance);
}

void c11_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c11_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
