/* Include files */

#include "dynamics_lib_sfun.h"
#include "c7_dynamics_lib.h"
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
static void initialize_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance);
static void enable_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void c7_do_animation_call_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_st);
static void initSimStructsc7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance);
static real32_T c7_eML_blk_kernel(SFc7_dynamics_libInstanceStruct *chartInstance,
  real_T c7_b_frontNonSuspendedMass, real_T c7_b_MM5_ay, real32_T
  c7_b_frontNonSuspendedMassCGHeight, real_T c7_b_frontTrack);
static real32_T c7_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_nullptr, const char_T *c7_identifier);
static real32_T c7_b_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static uint8_T c7_c_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_nullptr, const char_T *c7_identifier);
static uint8_T c7_d_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void init_dsm_address_info(SFc7_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc7_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c7_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c7_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c7_errCode;
  c7_errCode = cudaGetLastError();
  if (c7_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c7_errCode), (char_T *)
                       cudaGetErrorName(c7_errCode), (char_T *)
                       cudaGetErrorString(c7_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c7_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c7_JITStateAnimation,
                        chartInstance->c7_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c7_JITTransitionAnimation[0] = 0U;
  *chartInstance->c7_frontNSMWT = c7_eML_blk_kernel(chartInstance,
    *chartInstance->c7_frontNonSuspendedMass, *chartInstance->c7_MM5_ay,
    *chartInstance->c7_frontNonSuspendedMassCGHeight,
    *chartInstance->c7_frontTrack);
  c7_do_animation_call_c7_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c7_do_animation_call_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c7_b_y = NULL;
  const mxArray *c7_c_y = NULL;
  const mxArray *c7_st;
  const mxArray *c7_y = NULL;
  c7_st = NULL;
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellmatrix(2, 1), false);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", chartInstance->c7_frontNSMWT, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y",
    &chartInstance->c7_is_active_c7_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 1, c7_c_y);
  sf_mex_assign(&c7_st, c7_y, false);
  return c7_st;
}

static void set_sim_state_c7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_st)
{
  const mxArray *c7_u;
  c7_u = sf_mex_dup(c7_st);
  *chartInstance->c7_frontNSMWT = c7_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c7_u, 0)), "frontNSMWT");
  chartInstance->c7_is_active_c7_dynamics_lib = c7_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
     "is_active_c7_dynamics_lib");
  sf_mex_destroy(&c7_u);
  sf_mex_destroy(&c7_st);
}

static void initSimStructsc7_dynamics_lib(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc7_dynamics_lib
  (SFc7_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c7_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c7_nameCaptureInfo;
}

static real32_T c7_eML_blk_kernel(SFc7_dynamics_libInstanceStruct *chartInstance,
  real_T c7_b_frontNonSuspendedMass, real_T c7_b_MM5_ay, real32_T
  c7_b_frontNonSuspendedMassCGHeight, real_T c7_b_frontTrack)
{
  return static_cast<real32_T>(c7_b_frontNonSuspendedMass * 2.0 * c7_b_MM5_ay) *
    c7_b_frontNonSuspendedMassCGHeight / static_cast<real32_T>(c7_b_frontTrack);
}

static real32_T c7_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_nullptr, const char_T *c7_identifier)
{
  emlrtMsgIdentifier c7_thisId;
  real32_T c7_y;
  c7_thisId.fIdentifier = const_cast<const char_T *>(c7_identifier);
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_nullptr), &c7_thisId);
  sf_mex_destroy(&c7_nullptr);
  return c7_y;
}

static real32_T c7_b_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  real32_T c7_f;
  real32_T c7_y;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_f, 0, 1, 0U, 0, 0U, 0);
  c7_y = c7_f;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static uint8_T c7_c_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_nullptr, const char_T *c7_identifier)
{
  emlrtMsgIdentifier c7_thisId;
  uint8_T c7_y;
  c7_thisId.fIdentifier = const_cast<const char_T *>(c7_identifier);
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_nullptr), &c7_thisId);
  sf_mex_destroy(&c7_nullptr);
  return c7_y;
}

static uint8_T c7_d_emlrt_marshallIn(SFc7_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_b_u;
  uint8_T c7_y;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_b_u, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_b_u;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void init_dsm_address_info(SFc7_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc7_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c7_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c7_frontNonSuspendedMass = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c7_frontNSMWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_MM5_ay = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_frontNonSuspendedMassCGHeight = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c7_frontTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c7_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(34771236U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3503627148U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(700666491U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1655269721U);
}

mxArray *sf_c7_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c7_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c7_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c7_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyHpF4Dy04ry80r8gn3DQyDifA"
    "wImnz3KDhQph9ifwAB/0ii+QfEzyyOT0wuySxLjU82j0+pBEZTZnJxfE5mEgOq/wBy/xwz"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s9nDEkOrUZWchYTJDrDyuND";
}

static void sf_opaque_initialize_c7_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_dynamics_lib(void *chartInstanceVar)
{
  enable_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_dynamics_lib(void *chartInstanceVar)
{
  disable_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c7_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c7_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c7_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c7_dynamics_lib
      ((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc7_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc7_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c7_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc7_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c7_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_dynamics_lib((SFc7_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc7_dynamics_lib((SFc7_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c7_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE+P20QUn0TLqq2WUqRKtBISe0RISKUItZUquts4KUGbboSzXdHLMrFf4lHGY3f+JBu+FNd",
    "+ASQOiDNfgBMXTogjbxwnDU5IPI4ELWIkr3ds/+b33pv3b0Jq7Q7BcR2v+7cI2cf7FbzqZDbeyu",
    "e1pWv2fI88zOc/XCMkSEIYgvDNYMAuidsQJu5SSWNF3IegMXwFKuFGs0S0xSApj2ViABJEgAuki",
    "dROvIrFhjMxahkRWGZ1HrEg8qPE8PAxLkjDU8Gnf8ebGt1FRo9JCHQLINSRTMwwanE63GwFqSeN",
    "CIKRMrGzrRRo36RWVdUxXLOUQ/MSgrZQmqIV1BZ9fU01NPSlm5Gtvsqfo5M45YyK8raOqPIhRe/",
    "QcJaG+PfUaLReSV7k6zNBdSIZ5c2YNyIqy2K7HOXsoFtzZzvrWHvQN8MhE0NrXWliEKg/+kkJWw",
    "0ayRgkHcKpcOMNrHbNy2yDF35ZEqtZDM+oPA7QDxSEbjGIDqx8ilsLPVzGCQuC9jm0VU+yMe6Ra",
    "95o21CqlDdMPPMkVQmb8TbHuKuqIm8rEA3KuXLD9pL0BMbAM36PaloBO+N3ACvFwl6C3mEj1zH6",
    "jWAvDOTYRiJCVt4rxwVUViSeYsIvAWexDQMI0cwL0RcLbYsjo3QSNzD0vZOTknyr2LbQIAc0gNL",
    "5WlKmAAXO/MqRN2TKBhKi0Uo607L0CrMYrAQlamCEN0nkCG3sWhhe2cpGghsawiF4oCFLck307m",
    "eUm5IyxwqzsnWPM4VZ1o0XsTZ+KoEDGkQQ2hrIOHQwz+ICZbdY2fJ5jNqOmZ56oALJ0rKRZDChY",
    "/GzVupNUzgTI5FMREsmsZ93MRv8CgCzBpUCS9ljLKVy2kLhy0kt4UUvy+6uDYO1M9Wc9q1vPAGB",
    "1dDqaqs3DTCqmgLbTRRoF6zPvsV2RCimNLaA02YWA2HWBx+RV33w3po++J2lPvhGPg/uXYRTbEZ",
    "ZoC4462fr3Fla56BEPz3vwzfhyAqOLHDz+4dL+NoaXrJ0L/Jdrf/1+70CXx2f1HAU7fQ22Yzbz2",
    "31468/0Y9+/+beg+8O3o0Pv/9lG39thb+W/W9xL+tu55Xr+fz9ea+0yMzjleRlv/1iix+8V/ADO",
    "1cPhNccncqz5+dB9HXvS096U/PUy9a7skXeekHe+fND259h4GZ5QAbtMD/32Dk1s348O78tybu/",
    "xR5Xl/yJkN8e7Ya/eVQmbq4V7GXnA5lgrfM7571VP64uz+HRbvgZf3eLPrcL+tzO+vcLarM0XBQ",
    "zwqp+Vf3eFfem8P2PK78PZerJXkVcVT7yD+N21c+1Tr7p39/ZkM9I4fsbr7Eem/KoS7/0uun1M3",
    "HrZz7I558vzuiNiPFwzSkhf42N/GDd2/+If//haL95/9a09st/GH3+6bGgfIrHgtmxK3/clfY3u",
    "cUrCVStP3v9G/Vkft/Wfx0U4tvOJ0yEyUR9/Mndz+7uUp/+BHxMCWE=",
    ""
  };

  static char newstr [1481] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c7_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c7_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1640950732U));
  ssSetChecksum1(S,(929101354U));
  ssSetChecksum2(S,(286043961U));
  ssSetChecksum3(S,(3854901357U));
}

static void mdlRTW_c7_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c7_dynamics_lib(SimStruct *S)
{
  SFc7_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc7_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc7_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc7_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc7_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c7_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c7_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c7_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c7_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c7_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c7_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c7_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c7_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c7_dynamics_lib;
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

  mdl_setup_runtime_resources_c7_dynamics_lib(chartInstance);
}

void c7_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c7_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
