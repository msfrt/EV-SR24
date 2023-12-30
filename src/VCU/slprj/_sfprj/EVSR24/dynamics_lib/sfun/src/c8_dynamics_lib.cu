/* Include files */

#include "dynamics_lib_sfun.h"
#include "c8_dynamics_lib.h"
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
static void initialize_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance);
static void enable_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void c8_do_animation_call_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_st);
static void initSimStructsc8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance);
static real32_T c8_eML_blk_kernel(SFc8_dynamics_libInstanceStruct *chartInstance,
  real_T c8_b_rearNonSuspendedMass, real_T c8_b_MM5_ay, real32_T
  c8_b_rearNonSuspendedMassCGHeight, real_T c8_b_rearTrack);
static real32_T c8_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier);
static real32_T c8_b_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static uint8_T c8_c_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier);
static uint8_T c8_d_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void init_dsm_address_info(SFc8_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc8_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c8_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c8_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c8_errCode;
  c8_errCode = cudaGetLastError();
  if (c8_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c8_errCode), (char_T *)
                       cudaGetErrorName(c8_errCode), (char_T *)
                       cudaGetErrorString(c8_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c8_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c8_JITStateAnimation,
                        chartInstance->c8_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  *chartInstance->c8_rearNSMWT = c8_eML_blk_kernel(chartInstance,
    *chartInstance->c8_rearNonSuspendedMass, *chartInstance->c8_MM5_ay,
    *chartInstance->c8_rearNonSuspendedMassCGHeight,
    *chartInstance->c8_rearTrack);
  c8_do_animation_call_c8_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c8_do_animation_call_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_st;
  const mxArray *c8_y = NULL;
  c8_st = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellmatrix(2, 1), false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", chartInstance->c8_rearNSMWT, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c8_y, 0, c8_b_y);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y",
    &chartInstance->c8_is_active_c8_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_y, 1, c8_c_y);
  sf_mex_assign(&c8_st, c8_y, false);
  return c8_st;
}

static void set_sim_state_c8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  c8_u = sf_mex_dup(c8_st);
  *chartInstance->c8_rearNSMWT = c8_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c8_u, 0)), "rearNSMWT");
  chartInstance->c8_is_active_c8_dynamics_lib = c8_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 1)),
     "is_active_c8_dynamics_lib");
  sf_mex_destroy(&c8_u);
  sf_mex_destroy(&c8_st);
}

static void initSimStructsc8_dynamics_lib(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc8_dynamics_lib
  (SFc8_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c8_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static real32_T c8_eML_blk_kernel(SFc8_dynamics_libInstanceStruct *chartInstance,
  real_T c8_b_rearNonSuspendedMass, real_T c8_b_MM5_ay, real32_T
  c8_b_rearNonSuspendedMassCGHeight, real_T c8_b_rearTrack)
{
  return static_cast<real32_T>(c8_b_rearNonSuspendedMass * 2.0 * c8_b_MM5_ay) *
    c8_b_rearNonSuspendedMassCGHeight / static_cast<real32_T>(c8_b_rearTrack);
}

static real32_T c8_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  real32_T c8_y;
  c8_thisId.fIdentifier = const_cast<const char_T *>(c8_identifier);
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_y = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr), &c8_thisId);
  sf_mex_destroy(&c8_nullptr);
  return c8_y;
}

static real32_T c8_b_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  real32_T c8_f;
  real32_T c8_y;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_f, 0, 1, 0U, 0, 0U, 0);
  c8_y = c8_f;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static uint8_T c8_c_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  uint8_T c8_y;
  c8_thisId.fIdentifier = const_cast<const char_T *>(c8_identifier);
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_y = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr), &c8_thisId);
  sf_mex_destroy(&c8_nullptr);
  return c8_y;
}

static uint8_T c8_d_emlrt_marshallIn(SFc8_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_b_u;
  uint8_T c8_y;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_b_u, 1, 3, 0U, 0, 0U, 0);
  c8_y = c8_b_u;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void init_dsm_address_info(SFc8_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc8_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_rearNonSuspendedMass = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c8_rearNSMWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_MM5_ay = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_rearNonSuspendedMassCGHeight = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c8_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4255991394U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2081089437U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1405941125U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(469218498U);
}

mxArray *sf_c8_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c8_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c8_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyLpF4Dyi1ITi/yCfcNDoOJ8SD"
    "T57lFwoEw/xP4AAv6RRPMPiJ9ZHJ+YXJJZlhqfbBGfUgmMpszk4viczCQ0/wEA+YMbsw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sBgkeG5mq506CydKSQt6XiD";
}

static void sf_opaque_initialize_c8_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c8_dynamics_lib(void *chartInstanceVar)
{
  enable_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c8_dynamics_lib(void *chartInstanceVar)
{
  disable_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c8_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_dynamics_lib
      ((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc8_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc8_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc8_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c8_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_dynamics_lib((SFc8_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc8_dynamics_lib((SFc8_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE2P20QYnoRl1UVLqQRSqYTUCi5ckJairXpAdHfzUSI23YCzLUKI1cR+E48yHnvnI9nwO/g",
    "L/QuoPXPhzImfwQ2OvOM4aXBC4nEkaBEjeb1j+5n3Y96PZ0IqrTbBcR2v++8Ssov3a3hVyXS8ns",
    "0rC9f0+Q75NJv//AYhfhzAAIRn+n12RdyGMFGHShop4j4EjeArUDE3msWiJfpxcSwTfZAgfFwgi",
    "aV2kqtYZDgTw6YRvpWsnoTMD70wNjw4wQVpcCb45O/kJkZ3UGKdSfB1EyDQoYzNIGxyOljvBanH",
    "tRD8oTKRs68UaM8k1lTVNlyzhEPjCvyWUJqiF9QGez1NNdT0lZuTrb3Km6HjKOGMiuK+DqnyIMH",
    "o0HCeBPj3zGj0XkG5KK/HBNWxZJQ3Il4LqSyK7XDUs41hzZ39rCNdh54ZDJgYWO9KE4FA+zFOCv",
    "iqX4tHIOkAzoSbXN9a17hKN3gelwWxmkXwmMpjH+NAQeCWgxjAyqO4tdDFZZywIGiPQ0t1JRvhH",
    "rnWjZZNpVJ1w0TTSFKlsKncxgh3VZWU2/RFjXKu3LDdODmFEfBUfp1qWgI7le8AVooF3Rijw2au",
    "Y/YbwS4NZNhaLAJWPCpHOVTaJB5hwS8AZ5FNAwjQzXPV5wttyiOjdBzVMPXrp6cF5S1jW0KD7FM",
    "fCtdrSZkCVDiNK0e5AVM2kRCNXtKplYVXmOZgKShRfSPq41gO0ceujeGFr2wmuKEhGEAdNKRFro",
    "HR/ZhyU1DnSGFVtuFxrrDKuslFrM2fUmCf+iEEtgcyDm2ss7hA0S1Wtn0eo7Ujpid1UL5kSdFMM",
    "ljQsflZL3UnCZyLoYjHoinjyMtYzJq4AsCqQaXAVnaCrVROmqh8Ma0lXHbT6u5KGKyfqea0Z2Pj",
    "IQjshtZW272pj1nVEEg3UaFtsB77HumIUExppICTRpoDQcqDj8gLHryzgge/tcCDb2Rz//5FMEE",
    "yynx1wVkvXedgYZ39Anx6xsPX4cgSjsxxs/uHC/jKCrlk4Z6Xt1f96/c7OXlVfFLBkffTm2Q9bj",
    "fz1QfPv+0+ffu1/nc//PjTL+//vr9JfmVJfiX93+KeVd3OK9ez+XszrjSvzKOl4mW//XxDHNzMx",
    "YGdq5PBEB4eRpeHB/dqk+AL70t972tWT9e7tkHfak7f2fM7lp9h4qZ1QPqtIDv32Dk1Uz6ent8W",
    "9N3d4I+9hXgi5LcH2+HfOSqSN3s5f+2lNYLKR177SXdFHJfX587Rdvip/M4Ge27l7LmV8vcLaqs",
    "0XOQrwrJ9ZePeFfeqyPsfV3wfivSTnZK4svLIP4zb1j7XPvmqf3+wpp6R3Pc3XmI71tVRF770st",
    "n1K3HjM7ez+WfzM3otZDxYcUrIXiOR7696+x+J7z8c/Tfjbw3rv+yH0W8+ORaUT/BYMD12ZY870",
    "v4mN3+FrEWtPnv9G/1kdt/Ev/Zz+W3nYyaCeKw++vju4d1t+tOfbaUHpg==",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c8_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1415362851U));
  ssSetChecksum1(S,(1711477669U));
  ssSetChecksum2(S,(3283522654U));
  ssSetChecksum3(S,(217522898U));
}

static void mdlRTW_c8_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_dynamics_lib(SimStruct *S)
{
  SFc8_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc8_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc8_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc8_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c8_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c8_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c8_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c8_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c8_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c8_dynamics_lib;
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

  mdl_setup_runtime_resources_c8_dynamics_lib(chartInstance);
}

void c8_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
