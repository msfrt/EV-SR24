/* Include files */

#include "dynamics_lib_sfun.h"
#include "c22_dynamics_lib.h"
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
static void initialize_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance);
static void enable_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void c22_do_animation_call_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_st);
static void initSimStructsc22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance);
static real32_T c22_eML_blk_kernel(SFc22_dynamics_libInstanceStruct
  *chartInstance, real_T c22_b_totalMass, real32_T c22_b_totalMassDistribution,
  real_T c22_b_totalDownForce, real32_T c22_b_downForceDistribution, real32_T
  c22_b_totalFrontWT, real_T c22_b_gravity);
static real32_T c22_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_nullptr, const char_T *c22_identifier);
static real32_T c22_b_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static uint8_T c22_c_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_nullptr, const char_T *c22_identifier);
static uint8_T c22_d_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static void init_dsm_address_info(SFc22_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc22_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c22_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c22_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c22_errCode;
  c22_errCode = cudaGetLastError();
  if (c22_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c22_errCode), (char_T *)
                       cudaGetErrorName(c22_errCode), (char_T *)
                       cudaGetErrorString(c22_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c22_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c22_JITStateAnimation,
                        chartInstance->c22_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c22_JITTransitionAnimation[0] = 0U;
  *chartInstance->c22_dynamicLoadFR = c22_eML_blk_kernel(chartInstance,
    *chartInstance->c22_totalMass, *chartInstance->c22_totalMassDistribution,
    *chartInstance->c22_totalDownForce,
    *chartInstance->c22_downForceDistribution, *chartInstance->c22_totalFrontWT,
    *chartInstance->c22_gravity);
  c22_do_animation_call_c22_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c22_do_animation_call_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c22_b_y = NULL;
  const mxArray *c22_c_y = NULL;
  const mxArray *c22_st;
  const mxArray *c22_y = NULL;
  c22_st = NULL;
  c22_st = NULL;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_createcellmatrix(2, 1), false);
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", chartInstance->c22_dynamicLoadFR, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c22_y, 0, c22_b_y);
  c22_c_y = NULL;
  sf_mex_assign(&c22_c_y, sf_mex_create("y",
    &chartInstance->c22_is_active_c22_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c22_y, 1, c22_c_y);
  sf_mex_assign(&c22_st, c22_y, false);
  return c22_st;
}

static void set_sim_state_c22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_st)
{
  const mxArray *c22_u;
  c22_u = sf_mex_dup(c22_st);
  *chartInstance->c22_dynamicLoadFR = c22_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c22_u, 0)), "dynamicLoadFR");
  chartInstance->c22_is_active_c22_dynamics_lib = c22_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c22_u, 1)),
     "is_active_c22_dynamics_lib");
  sf_mex_destroy(&c22_u);
  sf_mex_destroy(&c22_st);
}

static void initSimStructsc22_dynamics_lib(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc22_dynamics_lib
  (SFc22_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c22_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c22_nameCaptureInfo = NULL;
  c22_nameCaptureInfo = NULL;
  sf_mex_assign(&c22_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c22_nameCaptureInfo;
}

static real32_T c22_eML_blk_kernel(SFc22_dynamics_libInstanceStruct
  *chartInstance, real_T c22_b_totalMass, real32_T c22_b_totalMassDistribution,
  real_T c22_b_totalDownForce, real32_T c22_b_downForceDistribution, real32_T
  c22_b_totalFrontWT, real_T c22_b_gravity)
{
  return ((static_cast<real32_T>(c22_b_totalMass) * c22_b_totalMassDistribution /
           100.0F * 0.5F + static_cast<real32_T>(c22_b_totalDownForce) *
           c22_b_downForceDistribution / 100.0F / 2.0F) + c22_b_totalFrontWT) *
    static_cast<real32_T>(c22_b_gravity);
}

static real32_T c22_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_nullptr, const char_T *c22_identifier)
{
  emlrtMsgIdentifier c22_thisId;
  real32_T c22_y;
  c22_thisId.fIdentifier = const_cast<const char_T *>(c22_identifier);
  c22_thisId.fParent = NULL;
  c22_thisId.bParentIsCell = false;
  c22_y = c22_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_nullptr),
    &c22_thisId);
  sf_mex_destroy(&c22_nullptr);
  return c22_y;
}

static real32_T c22_b_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  real32_T c22_f;
  real32_T c22_y;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_f, 0, 1, 0U, 0, 0U, 0);
  c22_y = c22_f;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static uint8_T c22_c_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_nullptr, const char_T *c22_identifier)
{
  emlrtMsgIdentifier c22_thisId;
  uint8_T c22_y;
  c22_thisId.fIdentifier = const_cast<const char_T *>(c22_identifier);
  c22_thisId.fParent = NULL;
  c22_thisId.bParentIsCell = false;
  c22_y = c22_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_nullptr),
    &c22_thisId);
  sf_mex_destroy(&c22_nullptr);
  return c22_y;
}

static uint8_T c22_d_emlrt_marshallIn(SFc22_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  uint8_T c22_b_u;
  uint8_T c22_y;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_b_u, 1, 3, 0U, 0, 0U, 0);
  c22_y = c22_b_u;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void init_dsm_address_info(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc22_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c22_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c22_dynamicLoadFR = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c22_totalMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c22_totalMassDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c22_totalDownForce = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c22_downForceDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c22_totalFrontWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c22_gravity = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c22_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2691231917U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3488839858U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2052365322U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(932011506U);
}

mxArray *sf_c22_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c22_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c22_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c22_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4DyUyqBPslM9slPTHELgo"
    "YTLLzId4+CA2X6IfYHEPCPFJp/QPzM4vjE5JLMstT4ZCOjeKjviuNzMpMQ5oIAAJ23HaM="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c22_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sxNq7wXLKWBjWUIBjayGiPB";
}

static void sf_opaque_initialize_c22_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c22_dynamics_lib(void *chartInstanceVar)
{
  enable_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c22_dynamics_lib(void *chartInstanceVar)
{
  disable_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c22_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c22_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c22_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c22_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc22_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c22_dynamics_lib
      ((SFc22_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc22_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc22_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c22_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc22_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c22_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c22_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc22_dynamics_lib((SFc22_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c22_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE2P20QYnkRL1FZttQckUIVEj1yQyiIEB0R381Uist2oyXYRElpN7Df2dMdj73zkA4k/gbh",
    "x41dw5sRP4MABiT/AEfXEO46TBickHkeCFmHJ6x17nnnf95n3a0IqnVOC1128j98kpIbPG3hXyf",
    "x6LRtXVu75+wPycTb+6RYhXuxDAKJvRiM2JW6XMFGPShop4n4JGsETUDE3msWiI0ZxcSwTI5AgP",
    "FwgiaV2kqtYZDgTV20jPCtZXYTMC/thbLhfxwWpfyb47O/kJkb3UGKTSfB0G8DXoYxNELY5Dbaz",
    "IPWkEYJ3pUzkzJUC3TeJNVWdGq5ZwqE1Ba8jlKbIgtphb19TDQ09dSPZ2qv6C3QcJZxRUZzrkKo",
    "+JOgdGs4TH/+eGY3sFZSL8oZMUB1LRnkr4o2QyqLYHkc9T9GtuTPPOtJNGJogYCKw7EoTgUD70U",
    "8KcDVqxGOQNIAz4SbXs9a1pukGL/2yIFazCJ5SeeKhHyjw3WIQHVj1KW4tDHAZJywIOuTQUQPJx",
    "rhHrnmjY0OpVN4w0dyTVClsKrc1xl1VJeW2PdGgnCs37CBOujAGnspvUk1LYOfyHcBKMX8Qo3fY",
    "yHWMfiPYtYEM24iFz4p75TiHSovEY0z4BeAssmEAPtK8VH250K44MkrHUQNDv9ntFpS3ju0IDXJ",
    "EPSicryVlClDh1K8c5fpM2UBCNLKkUysLrzCPwVJQokZGNCexvEKOXQvDC65sJLihwQ+gCRrSJN",
    "dC735KuSmoc6QwK1v3OFeYZd3kItbGTymwR70QfFsDGYdTzLO4QNEtVrZ8nqC1Y6ZnTVCeZEnRS",
    "DKY0LH4WZYGswTOxZWIJ6It46ifdTFb/AoAswaVAktZHUupnLVR+WJaS7gepNndtWGwPFPN6dD6",
    "xiMQWA2trbZ6Uw+jqiWw3USF9sH22VfYjgjFlMYWcNZKY8Cf98HkRR98sKEPPlzpgw+z2zs6uvR",
    "n2I0yT11yNrTrPFhZ53aBfnrRh2/DkTUcWeIWz3dW8JUNcsnK087/aGX+zepf59dy8qqLd+lF1v",
    "i6k5N3kMPXMr6+/SX69dZ33wfffPn86+c//qbyduf1qKzpUUn/t7gfqm7nlrvZ+K1Fz7TM0OO1J",
    "GbnfrrDH97I+YMdq+nj6w8nn3c/u6g/uzjv1J/R2SPWq6fr3dihbzWn7+L9fdunYQCn+UB6HT87",
    "/9gxNfO+PL+ftR183FzxK0J+f7gf/vXjIvFzJ8eXHWex042p336S8+fy+tw/3g8/l9/bYc+9nD3",
    "30j7+ktpsDZf5zLAer2X93hX3qsj7H1d8H4rUlVpJXFl55B/G7Wufa7181ec/2JLPSG7+4Utsx7",
    "Y86tI3vWx2/Uzc+pm3s/Eny7N6I2Tc33BayD5jQz/a9PU/4t9/OPK36N9alr/sB9Iv3j8RlM/we",
    "DA/fmWve9L+Nrf8JIGqzWewf6OeLH/H39Gv3M7Ftx1PmPDjiXr3vaMPjvapT38CaSINGg==",
    ""
  };

  static char newstr [1497] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c22_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c22_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3765296276U));
  ssSetChecksum1(S,(1738709770U));
  ssSetChecksum2(S,(2113559954U));
  ssSetChecksum3(S,(1944306426U));
}

static void mdlRTW_c22_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c22_dynamics_lib(SimStruct *S)
{
  SFc22_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc22_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc22_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc22_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc22_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c22_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c22_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c22_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c22_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c22_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c22_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c22_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c22_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c22_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c22_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c22_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c22_dynamics_lib;
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

  mdl_setup_runtime_resources_c22_dynamics_lib(chartInstance);
}

void c22_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c22_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c22_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c22_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c22_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
