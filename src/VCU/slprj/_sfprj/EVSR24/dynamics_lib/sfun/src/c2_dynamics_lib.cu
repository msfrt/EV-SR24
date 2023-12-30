/* Include files */

#include "dynamics_lib_sfun.h"
#include "c2_dynamics_lib.h"
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
static void initialize_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance);
static void enable_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void initSimStructsc2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance);
static real_T c2_eML_blk_kernel(SFc2_dynamics_libInstanceStruct *chartInstance,
  real_T c2_b_rearSpringStiffness, real_T c2_b_rearSpringMotionRatio);
static real_T c2_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_c_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c2_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c2_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c2_errCode;
  c2_errCode = cudaGetLastError();
  if (c2_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c2_errCode), (char_T *)
                       cudaGetErrorName(c2_errCode), (char_T *)
                       cudaGetErrorString(c2_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c2_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c2_JITStateAnimation,
                        chartInstance->c2_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  *chartInstance->c2_rearWheelRate = c2_eML_blk_kernel(chartInstance,
    *chartInstance->c2_rearSpringStiffness,
    *chartInstance->c2_rearSpringMotionRatio);
  c2_do_animation_call_c2_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c2_do_animation_call_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(2, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_rearWheelRate, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_rearWheelRate = c2_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 0)), "rearWheelRate");
  chartInstance->c2_is_active_c2_dynamics_lib = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)),
     "is_active_c2_dynamics_lib");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_dynamics_lib(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc2_dynamics_lib
  (SFc2_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c2_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_eML_blk_kernel(SFc2_dynamics_libInstanceStruct *chartInstance,
  real_T c2_b_rearSpringStiffness, real_T c2_b_rearSpringMotionRatio)
{
  return c2_b_rearSpringStiffness / (c2_b_rearSpringMotionRatio *
    c2_b_rearSpringMotionRatio);
}

static real_T c2_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c2_nullptr, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = const_cast<const char_T *>(c2_identifier);
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId);
  sf_mex_destroy(&c2_nullptr);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_d;
  real_T c2_y;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = const_cast<const char_T *>(c2_identifier);
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId);
  sf_mex_destroy(&c2_nullptr);
  return c2_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_y;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info(SFc2_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc2_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_rearSpringStiffness = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_rearWheelRate = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_rearSpringMotionRatio = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(144108107U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2729250480U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3658348481U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1914598297U);
}

mxArray *sf_c2_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c2_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4Dyi1ITi8IzUlNzghJLUq"
    "HhBAsv8t2j4ECZfoj9AQT8I4nmHxA/szg+Mbkksyw1PtkoPqUSGE2ZycXxOZlJSOaCAADHMB2d"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "ss7rWVwETCFpW2ESquArRkC";
}

static void sf_opaque_initialize_c2_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_dynamics_lib(void *chartInstanceVar)
{
  enable_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_dynamics_lib(void *chartInstanceVar)
{
  disable_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_dynamics_lib
      ((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc2_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc2_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_dynamics_lib((SFc2_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc2_dynamics_lib((SFc2_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE9v40QUn0Sl2l1tlz0gLSutRI9ckJYiBEgI2nUcCGppVKetxIFqYr/Eo4zH7vzJHy58BCS",
    "+A1+AE0eOiBs3PgZHbvDGcbLBCYknkWAX4chxxvZvfu+9ef8mpNY6I3g8wPP91wnZx+sdPOtker",
    "xSjGsL5/T+HvmwGP90j5AwjaAPIjC9HhsTt0OYpE0lTRRxPwRN4AJUyo1mqWiJXlody0QPJIgQJ",
    "8hSqZ14FUsMZ2LQNCK0zOo6ZmEcxKnh0TOckEbngk/+jjczuo2MDSYh1E2ASMcyNf24yWl/vRWk",
    "HnkxhANlEmdbKdCByayq6sxwzTIO/hjCllCaohXUBn0DTTV4euxmZKuvCmboNMk4o6K6rWOqAsj",
    "QOzRcZhF+nxuN1qvIi3xdJqhOJaPcT7gXU1kV2+Yo5xm6NXe2s050A7qm32eib60rTQIC9Uc/qW",
    "CrnpcOQdI+nAs33tBq54/zBZ77ZUWsZglcUXkSoh8oiNxiEB1YBRSXFjo4jRMWBO1yaKmOZENcI",
    "9e80bKhtFXeMMnUk9RW2JzXH+Kqqi15m6HwKOfKDdtJs1MYAs/5G1TTLbBTfgewUizqpOgdNnId",
    "o98IdmugwHqpiFh1rxyWUHmR+BwTfgU4S2wYQIRmnos+n2hTHBml08TD0G+cnlbkW8a2hAbZoyF",
    "UzteSMgUocO5XjrwRUzaQEI1W0rmWlWeYxuBWUKJ6RjRGqRygjV0Lw3Nb2UhwQ0PUhwZoyJOcj9",
    "59RbmpKHOiMCtb97hUmGXdeBFr42crcEjDGCJbAxmHM8yzOEHVJVa2fJ6gtkOmJw1QoWRZ1Ugym",
    "NCx+FkrdSYZXIqBSEeiKdMkKLqYNX4FgFmDSoGl7BmWUjlpovDVpJZw28mzu2vDYO1MNadd6xuf",
    "gMBqaHW11ZuGGFW+wHYTBdoFG7CvsB0RiimNLeDEz2MgyvvgY/K8D95b0Qe/utAHPyzG4dFNNMF",
    "mlIXqhrNuPs/ThXnuV+inZ334OhxZwpE5bnZ9cwFfW8FLFq5lvrv1v75fL/HV8VOrkSU7HZR49k",
    "q4/cJWf3zwzdeHtS9//OX7b8fdnz/7bhN/bYm/lv+2uB/qbvuVB8X4yaxXmmfm4VLysu9+usEPH",
    "pX84FFeK9+T11cjv+M1s+sjP7g1J/Ji4OXz3dkgb70k7+z+oe3PMHDzPCDDVlTse+yYmmk/nu/f",
    "FuTd32CPuwv+RMhvH++Gf+24StwclOx1kOcIKq9jAH6B+a3kx9vLc3i8G37K396gz+OSPo/z/v2",
    "G2iwNN+WMsByn2/q9K+5l4fsfV30dqtST+pa4bfnIP4zbVT/XOvmyv/90TT4jpfcfvsB6rMujLv",
    "3Si6bXr8Stn3mjGH8036N7MePRil1C8Rgb+d6qp/8R//7d0X6z/s239iv+GP3inRNB+QS3BdNtV",
    "3G7Le1/cvNH2LWo1Xuvf6OezK6b+q/7pfi24xETUTpSb7199O7RLvXpT7uTCv4=",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c2_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2140092927U));
  ssSetChecksum1(S,(3227386144U));
  ssSetChecksum2(S,(2022879953U));
  ssSetChecksum3(S,(2773142114U));
}

static void mdlRTW_c2_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_dynamics_lib(SimStruct *S)
{
  SFc2_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc2_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc2_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc2_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_dynamics_lib;
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

  mdl_setup_runtime_resources_c2_dynamics_lib(chartInstance);
}

void c2_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
