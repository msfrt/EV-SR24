/* Include files */

#include "dynamics_lib_sfun.h"
#include "c16_dynamics_lib.h"
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
static void initialize_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance);
static void enable_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void c16_do_animation_call_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_st);
static void initSimStructsc16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance);
static real32_T c16_eML_blk_kernel(SFc16_dynamics_libInstanceStruct
  *chartInstance, real32_T c16_b_antiRollFrontAxleAndTire, real32_T
  c16_b_antiRollRearAxleAndTire);
static real32_T c16_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_nullptr, const char_T *c16_identifier);
static real32_T c16_b_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId);
static uint8_T c16_c_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_nullptr, const char_T *c16_identifier);
static uint8_T c16_d_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId);
static void init_dsm_address_info(SFc16_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc16_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c16_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c16_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c16_errCode;
  c16_errCode = cudaGetLastError();
  if (c16_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c16_errCode), (char_T *)
                       cudaGetErrorName(c16_errCode), (char_T *)
                       cudaGetErrorString(c16_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c16_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c16_JITStateAnimation,
                        chartInstance->c16_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c16_JITTransitionAnimation[0] = 0U;
  *chartInstance->c16_antiRollTotal = c16_eML_blk_kernel(chartInstance,
    *chartInstance->c16_antiRollFrontAxleAndTire,
    *chartInstance->c16_antiRollRearAxleAndTire);
  c16_do_animation_call_c16_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c16_do_animation_call_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c16_b_y = NULL;
  const mxArray *c16_c_y = NULL;
  const mxArray *c16_st;
  const mxArray *c16_y = NULL;
  c16_st = NULL;
  c16_st = NULL;
  c16_y = NULL;
  sf_mex_assign(&c16_y, sf_mex_createcellmatrix(2, 1), false);
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", chartInstance->c16_antiRollTotal, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_y, 0, c16_b_y);
  c16_c_y = NULL;
  sf_mex_assign(&c16_c_y, sf_mex_create("y",
    &chartInstance->c16_is_active_c16_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_y, 1, c16_c_y);
  sf_mex_assign(&c16_st, c16_y, false);
  return c16_st;
}

static void set_sim_state_c16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_st)
{
  const mxArray *c16_u;
  c16_u = sf_mex_dup(c16_st);
  *chartInstance->c16_antiRollTotal = c16_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c16_u, 0)), "antiRollTotal");
  chartInstance->c16_is_active_c16_dynamics_lib = c16_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c16_u, 1)),
     "is_active_c16_dynamics_lib");
  sf_mex_destroy(&c16_u);
  sf_mex_destroy(&c16_st);
}

static void initSimStructsc16_dynamics_lib(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc16_dynamics_lib
  (SFc16_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c16_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c16_nameCaptureInfo = NULL;
  c16_nameCaptureInfo = NULL;
  sf_mex_assign(&c16_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c16_nameCaptureInfo;
}

static real32_T c16_eML_blk_kernel(SFc16_dynamics_libInstanceStruct
  *chartInstance, real32_T c16_b_antiRollFrontAxleAndTire, real32_T
  c16_b_antiRollRearAxleAndTire)
{
  return c16_b_antiRollFrontAxleAndTire + c16_b_antiRollRearAxleAndTire;
}

static real32_T c16_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_nullptr, const char_T *c16_identifier)
{
  emlrtMsgIdentifier c16_thisId;
  real32_T c16_y;
  c16_thisId.fIdentifier = const_cast<const char_T *>(c16_identifier);
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_y = c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_nullptr),
    &c16_thisId);
  sf_mex_destroy(&c16_nullptr);
  return c16_y;
}

static real32_T c16_b_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId)
{
  real32_T c16_f;
  real32_T c16_y;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), &c16_f, 0, 1, 0U, 0, 0U, 0);
  c16_y = c16_f;
  sf_mex_destroy(&c16_u);
  return c16_y;
}

static uint8_T c16_c_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_nullptr, const char_T *c16_identifier)
{
  emlrtMsgIdentifier c16_thisId;
  uint8_T c16_y;
  c16_thisId.fIdentifier = const_cast<const char_T *>(c16_identifier);
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_y = c16_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_nullptr),
    &c16_thisId);
  sf_mex_destroy(&c16_nullptr);
  return c16_y;
}

static uint8_T c16_d_emlrt_marshallIn(SFc16_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId)
{
  uint8_T c16_b_u;
  uint8_T c16_y;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), &c16_b_u, 1, 3, 0U, 0, 0U, 0);
  c16_y = c16_b_u;
  sf_mex_destroy(&c16_u);
  return c16_y;
}

static void init_dsm_address_info(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc16_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c16_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c16_antiRollFrontAxleAndTire = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c16_antiRollTotal = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c16_antiRollRearAxleAndTire = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c16_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(174450961U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3519221386U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1871786123U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1137890561U);
}

mxArray *sf_c16_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c16_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c16_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c16_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4DyE/NKMoPyc3JC8ksSc6"
    "DhBAsv8t2j4ECZfoj9AQT8I4XmHxA/szg+Mbkksyw1PtnQLD6lEhhPmcnF8TmZSQhzQQAA5CId8"
    "g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c16_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sDJSVGoPns7QjX5GxCg1f5C";
}

static void sf_opaque_initialize_c16_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c16_dynamics_lib(void *chartInstanceVar)
{
  enable_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c16_dynamics_lib(void *chartInstanceVar)
{
  disable_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c16_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c16_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c16_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c16_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc16_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c16_dynamics_lib
      ((SFc16_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc16_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc16_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c16_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc16_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c16_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c16_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc16_dynamics_lib((SFc16_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c16_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWMuOG0UULVvDKImSaBZIoChSsmSDlAmaABKCmfgxGM0wJu0ZEEIalbuv7WKqqzr18IMvCAt",
    "+gJ9gi1ix5BPgG9iwhB232m3HtI3d1ZYgQbTVbld3nzr33rqvMqm0Tgket/F853VCdvF6Dc8qmR",
    "6vZOPKwjm9v0Pey8Y/3SAklBH0QQS212Nj4ncIG7eporEm/oegMTwBLbk1TIqW6MniWCZ6oECEO",
    "EEilfHi1Sy2nImrphWhY9afDlg4CAbS8ugxTkijM8Enf8ebWNNGxjpTEJomQGQGStr+oMlpf70V",
    "lBnVBhBeaRt720qDCWziVNWnlhuWcGiMIWwJbShaQW/QNzDUQM2M/Yzs9NXBDC3jhDMqitt6QHU",
    "ACXqHgfMkwu8za9B6BXmRr8sENVIxyhsxrw2oKoptc5TzFN2ae9vZxKYOXdvvM9F31lU2BoH6o5",
    "8UsFWvJoegaB/OhB9v6LRrjNMFnvtlQaxhMVxQdRSiH2iI/GIQHVgHFJcWOjiNFxYE7XJo6Y5iQ",
    "1wj37zRcqFUKm/YeOpJuhQ25W0McVV1Sd5mKGqUc+2H7cjkBIbAU/46NbQEdsrvAdaaRR2J3uEi",
    "1zP6rWBPLWTYmhQRK+6VwxwqLRIfY8IvAGexCwOI0Mxz0ecTbYojq42Maxj69ZOTgnzL2JYwoHo",
    "0hML5WlGmAQVO/cqTN2LaBRKi0Uom1bLwDNMYLAUlumdFfSTVFdrYtzA8t5WLBD80RH2og4E0yT",
    "XQuy8otwVljjVmZece5xqzrB8vYl38lAKHNBxA5Gog43CKeRYnKLrE2pXPI9R2yMykDjpULCkaS",
    "RYTOhY/Z6XOJIFzcSXkSDSVjIOsi1njVwCYNagSWMoeYylVkyYKX0xqBU87aXb3bRicnanhtOt8",
    "4xgEVkOnq6veNMSoaghsN1GgbbAB+wrbEaGZNtgCThppDERpH3xInvfBOyv64L2FPngvO8P9R5f",
    "RBLtRFupLzrpungcL89ws0E/P+vB1OLKEI3Pc7PrGAr6ygpcsXPN816t/fb+a46vip1IhS3a6le",
    "PZyeF2Mzs9++OLH76++8t37/746Jtnv4bfbuKvLPFX0t8O933Vb79yOxvfnfVK88w8XEpe7t0PN",
    "/jBazk/cGNd/yi4OJZtod/+5MvPDo7Htf5+76CWzndtg7zVnLyz+/ddf4aBm+YBFbaibN/jxtRO",
    "+/F0/7Yg7+4Ge1xf8CdCfvtgO/yrh0Xi5lbOXm6MZZk9kZx3pEm7v0U/Li/P/cPt8FP+9gZ97uT",
    "0uZP275fUZWm4zGeE5Tgt6/e+uJeF739c8XUoUk+qJXFl+cg/jNtWP986+bK//2BNPiO59/deYD",
    "3W5VGffulF0+tn4tfP3MvG78/36LUB49GKXUL2GBv53qqn/xH//t3TfrP+reHsl/0x+vlbR4LyC",
    "W4Lptuu7HZbuf/k5o8UUL167/Vv1JPZdVP/dTMX3248YiKSI/3m/sODh9vUpz8Be5sL1g==",
    ""
  };

  static char newstr [1497] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c16_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c16_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3126655368U));
  ssSetChecksum1(S,(2950241417U));
  ssSetChecksum2(S,(2369175609U));
  ssSetChecksum3(S,(2590239624U));
}

static void mdlRTW_c16_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c16_dynamics_lib(SimStruct *S)
{
  SFc16_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc16_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc16_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc16_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc16_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c16_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c16_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c16_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c16_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c16_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c16_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c16_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c16_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c16_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c16_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c16_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c16_dynamics_lib;
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

  mdl_setup_runtime_resources_c16_dynamics_lib(chartInstance);
}

void c16_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c16_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c16_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c16_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c16_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
