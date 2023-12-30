/* Include files */

#include "dynamics_lib_sfun.h"
#include "c13_dynamics_lib.h"
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
static void initialize_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance);
static void enable_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void c13_do_animation_call_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_st);
static void initSimStructsc13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance);
static real_T c13_eML_blk_kernel(SFc13_dynamics_libInstanceStruct *chartInstance,
  real_T c13_b_frontSpringStiffness, real_T c13_b_frontSpringMotionRatio);
static real_T c13_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_nullptr, const char_T *c13_identifier);
static real_T c13_b_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static uint8_T c13_c_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_nullptr, const char_T *c13_identifier);
static uint8_T c13_d_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void init_dsm_address_info(SFc13_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc13_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c13_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c13_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c13_errCode;
  c13_errCode = cudaGetLastError();
  if (c13_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c13_errCode), (char_T *)
                       cudaGetErrorName(c13_errCode), (char_T *)
                       cudaGetErrorString(c13_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c13_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c13_JITStateAnimation,
                        chartInstance->c13_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c13_JITTransitionAnimation[0] = 0U;
  *chartInstance->c13_frontWheelRate = c13_eML_blk_kernel(chartInstance,
    *chartInstance->c13_frontSpringStiffness,
    *chartInstance->c13_frontSpringMotionRatio);
  c13_do_animation_call_c13_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c13_do_animation_call_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c13_b_y = NULL;
  const mxArray *c13_c_y = NULL;
  const mxArray *c13_st;
  const mxArray *c13_y = NULL;
  c13_st = NULL;
  c13_st = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_createcellmatrix(2, 1), false);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", chartInstance->c13_frontWheelRate,
    0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c13_y, 0, c13_b_y);
  c13_c_y = NULL;
  sf_mex_assign(&c13_c_y, sf_mex_create("y",
    &chartInstance->c13_is_active_c13_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c13_y, 1, c13_c_y);
  sf_mex_assign(&c13_st, c13_y, false);
  return c13_st;
}

static void set_sim_state_c13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_st)
{
  const mxArray *c13_u;
  c13_u = sf_mex_dup(c13_st);
  *chartInstance->c13_frontWheelRate = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 0)), "frontWheelRate");
  chartInstance->c13_is_active_c13_dynamics_lib = c13_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 1)),
     "is_active_c13_dynamics_lib");
  sf_mex_destroy(&c13_u);
  sf_mex_destroy(&c13_st);
}

static void initSimStructsc13_dynamics_lib(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc13_dynamics_lib
  (SFc13_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c13_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c13_nameCaptureInfo = NULL;
  c13_nameCaptureInfo = NULL;
  sf_mex_assign(&c13_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c13_nameCaptureInfo;
}

static real_T c13_eML_blk_kernel(SFc13_dynamics_libInstanceStruct *chartInstance,
  real_T c13_b_frontSpringStiffness, real_T c13_b_frontSpringMotionRatio)
{
  return c13_b_frontSpringStiffness / (c13_b_frontSpringMotionRatio *
    c13_b_frontSpringMotionRatio);
}

static real_T c13_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_nullptr, const char_T *c13_identifier)
{
  emlrtMsgIdentifier c13_thisId;
  real_T c13_y;
  c13_thisId.fIdentifier = const_cast<const char_T *>(c13_identifier);
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nullptr),
    &c13_thisId);
  sf_mex_destroy(&c13_nullptr);
  return c13_y;
}

static real_T c13_b_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  real_T c13_d;
  real_T c13_y;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_d, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static uint8_T c13_c_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_nullptr, const char_T *c13_identifier)
{
  emlrtMsgIdentifier c13_thisId;
  uint8_T c13_y;
  c13_thisId.fIdentifier = const_cast<const char_T *>(c13_identifier);
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nullptr),
    &c13_thisId);
  sf_mex_destroy(&c13_nullptr);
  return c13_y;
}

static uint8_T c13_d_emlrt_marshallIn(SFc13_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  uint8_T c13_b_u;
  uint8_T c13_y;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_b_u, 1, 3, 0U, 0, 0U, 0);
  c13_y = c13_b_u;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void init_dsm_address_info(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc13_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c13_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c13_frontSpringStiffness = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c13_frontWheelRate = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c13_frontSpringMotionRatio = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c13_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3010871865U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3322241292U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3655968327U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1438991017U);
}

mxArray *sf_c13_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c13_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c13_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c13_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yHpF4Dy04ry80rCM1JTc4ISS1"
    "IhYrDwIt89Cg6U6YfYH0DAP1Jo/gHxM4vjE5NLMstS45MNjeNTKoHxlJlcHJ+TmYQwFwQAP3MeU"
    "g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c13_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "swZnH3WG6KgyPoyYFsXa5UE";
}

static void sf_opaque_initialize_c13_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c13_dynamics_lib(void *chartInstanceVar)
{
  enable_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c13_dynamics_lib(void *chartInstanceVar)
{
  disable_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c13_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c13_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c13_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c13_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc13_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c13_dynamics_lib
      ((SFc13_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc13_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc13_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c13_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc13_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c13_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c13_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc13_dynamics_lib((SFc13_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c13_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN2O20QUnkTLqq3Kai+QQBVVK64QElLbVREXCHabnzZilw2bbBd6s5rYJ/ZoxzPu/CQb7pF",
    "4Bp6AF0DiEXgELvoQXCKuOOM4aeqExOOVoEU4cpyx/c13zpnzNyG1zhHBYwfPT98jZBuv1/Csk+",
    "nxVj6uLZzT+1vks3z86w1CAhlCBKJnh0N2SfwOYZMuVTTRxP8QNIET0JJbw6ToiKEsj2ViCApEg",
    "BOkUhkvXs0Sy5m4aFsROGZ9FrMg7sXS8vARTkjDY8Enf8ebWtNFxiZTEJg2QGhiJW0UtzmN1ltB",
    "mXEjhuBC28TbVhpMz6ZOVX1kuWEph9YlBB2hDUUr6A369gw10DCXfkZ2+ureDC2TlDMqyts6pro",
    "HKXqHgdM0xO9ja9B6JXmRb8AENVIxylsJb8RUlcV2Ocp5hG7Nve1sEtOEgY0iJiJnXWUTEKg/+k",
    "kJWw0bcgSKRnAs/HgDp13rMlvguV+WxBqWwFOqDgL0Aw2hXwyiA+sexaWFPk7jhQVBBxw6uq/YC",
    "NfIN290XChVyhs2mXqSroTNeFsjXFVdkbcdiAblXPth+zI9hBHwjL9JDa2AnfJ7gLVmYV+id7jI",
    "9Yx+K9hzCzm2IUXIynvlqIDKisRXmPBLwFniwgBCNPNc9PlEm+LIaiOTBoZ+8/CwJN8ytiMMqCE",
    "NoHS+VpRpQIEzv/LkDZl2gYRotJLJtCw9wzQGK0GJHlrRHEt1gTb2LQwvbeUiwQ8NYQRNMJAluR",
    "Z691PKbUmZE41Z2bnHqcYs68eLWBc/lcABDWIIXQ1kHI4wz+IEZZdYu/J5gNqOmJk0QQeKpWUjy",
    "WJCx+LnrNSfpHAqLoQci7aSSS/vYtb4FQBmDaoElrJHWErVpI3Cl5NawfN+lt19GwZnZ2o4HTjf",
    "eAwCq6HT1VVvGmBUtQS2myjQVbA99h22I0IzbbAFnLSyGAizPnifvOyDt1b0wbsLffBufgb3987",
    "DCXajLNDnnA3cPPcW5rlZop+e9eHrcGQJR+a42fXDBXxtBS9ZuBb5rtdffb9e4Kvjp1YjS3Z6u8",
    "CzVcBt53aKRj/dePHDB99/9OPtkz9f/Pz1Jv7aEn8t++1wv9T99is7+fj9Wa80z8yjpeTl3n2yw",
    "Q/eLfiBG+vxM/Fk7+zxJ19Gk66cfNvW39CHp61svmsb5K0X5J3dv+v6MwzcLA+ooBPm+x43pnba",
    "j2f7twV5tzfY4/qCPxHy+xdXw7+zXyZudgr2cuOhksKcxQD8BBPcq35cXZ67+1fDT/m7G/S5VdD",
    "nVta/n1OXpeG8mBGW47Sq3/vi3hS+/3Hl16FMPalXxFXlI/8w7qr6+dbJN/39e2vyGSm8v/sa67",
    "Euj/r0S6+bXr8Rv37mTj7+fL5Hb8SMhyt2CfljbOSHq57+R/z7D0/7zfq3lrNf/sfos70DQfkEt",
    "wXTbVd+u6vcf3LzRwqoXr33+jfqyey6qf+6WYhvNx4zEcqx/vj+g4cPrlKf/gLpgAti",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c13_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c13_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(178812519U));
  ssSetChecksum1(S,(2233632988U));
  ssSetChecksum2(S,(1377671722U));
  ssSetChecksum3(S,(1370873082U));
}

static void mdlRTW_c13_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c13_dynamics_lib(SimStruct *S)
{
  SFc13_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc13_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc13_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc13_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc13_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c13_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c13_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c13_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c13_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c13_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c13_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c13_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c13_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c13_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c13_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c13_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c13_dynamics_lib;
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

  mdl_setup_runtime_resources_c13_dynamics_lib(chartInstance);
}

void c13_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c13_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c13_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c13_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c13_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
