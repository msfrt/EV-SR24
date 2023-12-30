/* Include files */

#include "dynamics_lib_sfun.h"
#include "c17_dynamics_lib.h"
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
static void initialize_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance);
static void enable_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void c17_do_animation_call_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_st);
static void initSimStructsc17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance);
static real32_T c17_eML_blk_kernel(SFc17_dynamics_libInstanceStruct
  *chartInstance, real_T c17_b_suspendedMass, real_T c17_b_MM5_ay, real_T
  c17_b_deltaZ, real32_T c17_b_antiRollFrontAxleAndTire, real32_T
  c17_b_antiRollTotal, real_T c17_b_frontTrack);
static real32_T c17_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_nullptr, const char_T *c17_identifier);
static real32_T c17_b_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static uint8_T c17_c_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_nullptr, const char_T *c17_identifier);
static uint8_T c17_d_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static void init_dsm_address_info(SFc17_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc17_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c17_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c17_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c17_errCode;
  c17_errCode = cudaGetLastError();
  if (c17_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c17_errCode), (char_T *)
                       cudaGetErrorName(c17_errCode), (char_T *)
                       cudaGetErrorString(c17_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c17_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c17_JITStateAnimation,
                        chartInstance->c17_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c17_JITTransitionAnimation[0] = 0U;
  *chartInstance->c17_frontElWT = c17_eML_blk_kernel(chartInstance,
    *chartInstance->c17_suspendedMass, *chartInstance->c17_MM5_ay,
    *chartInstance->c17_deltaZ, *chartInstance->c17_antiRollFrontAxleAndTire,
    *chartInstance->c17_antiRollTotal, *chartInstance->c17_frontTrack);
  c17_do_animation_call_c17_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c17_do_animation_call_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c17_b_y = NULL;
  const mxArray *c17_c_y = NULL;
  const mxArray *c17_st;
  const mxArray *c17_y = NULL;
  c17_st = NULL;
  c17_st = NULL;
  c17_y = NULL;
  sf_mex_assign(&c17_y, sf_mex_createcellmatrix(2, 1), false);
  c17_b_y = NULL;
  sf_mex_assign(&c17_b_y, sf_mex_create("y", chartInstance->c17_frontElWT, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c17_y, 0, c17_b_y);
  c17_c_y = NULL;
  sf_mex_assign(&c17_c_y, sf_mex_create("y",
    &chartInstance->c17_is_active_c17_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c17_y, 1, c17_c_y);
  sf_mex_assign(&c17_st, c17_y, false);
  return c17_st;
}

static void set_sim_state_c17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_st)
{
  const mxArray *c17_u;
  c17_u = sf_mex_dup(c17_st);
  *chartInstance->c17_frontElWT = c17_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c17_u, 0)), "frontElWT");
  chartInstance->c17_is_active_c17_dynamics_lib = c17_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c17_u, 1)),
     "is_active_c17_dynamics_lib");
  sf_mex_destroy(&c17_u);
  sf_mex_destroy(&c17_st);
}

static void initSimStructsc17_dynamics_lib(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc17_dynamics_lib
  (SFc17_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c17_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c17_nameCaptureInfo = NULL;
  c17_nameCaptureInfo = NULL;
  sf_mex_assign(&c17_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c17_nameCaptureInfo;
}

static real32_T c17_eML_blk_kernel(SFc17_dynamics_libInstanceStruct
  *chartInstance, real_T c17_b_suspendedMass, real_T c17_b_MM5_ay, real_T
  c17_b_deltaZ, real32_T c17_b_antiRollFrontAxleAndTire, real32_T
  c17_b_antiRollTotal, real_T c17_b_frontTrack)
{
  return static_cast<real32_T>(c17_b_suspendedMass * c17_b_MM5_ay * c17_b_deltaZ)
    * (c17_b_antiRollFrontAxleAndTire / c17_b_antiRollTotal) /
    static_cast<real32_T>(c17_b_frontTrack);
}

static real32_T c17_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_nullptr, const char_T *c17_identifier)
{
  emlrtMsgIdentifier c17_thisId;
  real32_T c17_y;
  c17_thisId.fIdentifier = const_cast<const char_T *>(c17_identifier);
  c17_thisId.fParent = NULL;
  c17_thisId.bParentIsCell = false;
  c17_y = c17_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_nullptr),
    &c17_thisId);
  sf_mex_destroy(&c17_nullptr);
  return c17_y;
}

static real32_T c17_b_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  real32_T c17_f;
  real32_T c17_y;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_f, 0, 1, 0U, 0, 0U, 0);
  c17_y = c17_f;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static uint8_T c17_c_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_nullptr, const char_T *c17_identifier)
{
  emlrtMsgIdentifier c17_thisId;
  uint8_T c17_y;
  c17_thisId.fIdentifier = const_cast<const char_T *>(c17_identifier);
  c17_thisId.fParent = NULL;
  c17_thisId.bParentIsCell = false;
  c17_y = c17_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_nullptr),
    &c17_thisId);
  sf_mex_destroy(&c17_nullptr);
  return c17_y;
}

static uint8_T c17_d_emlrt_marshallIn(SFc17_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  uint8_T c17_b_u;
  uint8_T c17_y;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_b_u, 1, 3, 0U, 0, 0U, 0);
  c17_y = c17_b_u;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static void init_dsm_address_info(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc17_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c17_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c17_frontElWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c17_suspendedMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c17_MM5_ay = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c17_deltaZ = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c17_antiRollFrontAxleAndTire = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c17_antiRollTotal = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c17_frontTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c17_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2358284852U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2715706970U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3374312784U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(329161484U);
}

mxArray *sf_c17_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c17_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c17_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c17_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyLpF4Dy04ry80pcc8JDoOJ8SD"
    "T57lFwoEw/xP4AAv6RQvMPiJ9ZHJ+YXJJZlhqfbGgen1IJjKfM5OL4nMwkVP8BADitHCc="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c17_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sKZiLMSeDjbdnuSb2DtURk";
}

static void sf_opaque_initialize_c17_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c17_dynamics_lib(void *chartInstanceVar)
{
  enable_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c17_dynamics_lib(void *chartInstanceVar)
{
  disable_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c17_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c17_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c17_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c17_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc17_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c17_dynamics_lib
      ((SFc17_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc17_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc17_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c17_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc17_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c17_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c17_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc17_dynamics_lib((SFc17_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c17_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN2O20QUnkRL1EWl7AWiqEJib5C4QWoXIRBCdLf5gYgNG9XZVqqQVhP7JB4yHrvzk2x4EF6",
    "BR4BHAPECfQzu4IILzthOGpyQeBwJWoQlr3fs+eac8835m5Bat0fwuoX36VuENPB5A+86ya5X8n",
    "Ft5c7eH5BP8/FPrxLixwGMQXhmNGLXxO0SJupTSSNF3C9BI3gIKuZGs1h0xSguj2ViBBKEjwsks",
    "dROchWLDGdi0jHCt5LV45D5oRfGhgcPcEEaXAg+/zu5idF9lNhiEnzdAQh0KGMzDjucjrezIPWs",
    "GYI/USZy5kqB9kxiTVU9wzVLOLSvwe8KpSmyoHbY62mqoamv3Ui29ipvgY6jhDMqynMdUuVBgt6",
    "h4TIJ8O+F0cheSbkob8gE1bFklLcj3gypLIvtc9Szh27NnXnWkW7B0IzHTIwtu9JEINB+9JMSXI",
    "2a8RQkHcOFcJPrW+va1+kGL/2yJFazCB5ReeajHygI3GIQHVh5FLcWBriMExYEHXLoqoFkU9wj1",
    "7zRtaFUKW+YKPMkVQmbym1PcVdVRbkdXzQp58oNO4iTc5gCT+W3qKYVsJl8B7BSLBjE6B02ch2j",
    "3wj21ECObcYiYOW9clpApUXiK0z4JeAssmEAAdK8VH250K44MkrHURNDv3V+XlLeOrYrNMgR9aF",
    "0vpaUKUCFU79ylBswZQMJ0ciSTq0svUIWg5WgRI2MaM1iOUGOXQvDc65sJLihIRhDCzSkSa6N3v",
    "2IclNS50hhVrbucakwy7rJRayNn0pgn/ohBLYGMg49zLO4QNktVrZ8nqG1U6bnLVC+ZEnZSDKY0",
    "LH4WZYG8wQuxUTEM9GRceTlXcwWvwLArEGlwFL2AEupnHdQ+XJaS3g6SLO7a8Ngeaaa06H1jc9B",
    "YDW0ttrqTX2MqrbAdhMV2gfrsW+xHRGKKY0t4LydxkCQ9cHkeR98sKEPPlrpg4/y27/30VUwx26",
    "U+eqKs6Fd5+7KOjdL9NOLPnwbjqzhyBK3eL63gq9tkEtWnnb+xyvzD+t/nd8oyKsv3qUXWePrtY",
    "K8gwK+kfPlHRz/8rr4/tlvn/z89Xc/vPtH0e6iHrU1PWrp/xb3Y93t3HIrH7+96JmWGXq6lsTs3",
    "C92+MObBX+wY/XlE3be86D1zTAQxhuetPTlw0m23o0d+tYL+i7eH9s+DQM4zQfS7wb5+ceOqcn6",
    "8uJ+NnbwcbjiV4T8en8//BunZeLnsMCXHY9kLHSbPx5s8Ofq+hyf7ofP5Pd32HOnYM+dtI+/ojZ",
    "bw1UxM6zbV9XvXXEvi7z/ceX3oUxdaVTEVZVH/mHcvva51suXff7dLfmMFOYfvcB2bMujLn3Ti2",
    "bXM+LWz7yTjz9bntWbIePBhtNC/hkb+tGmr/8R//7dkb/b+bht+ct/IH3ywZmgfI7Hg+z4lb/uS",
    "/vb3PKTBKo2n8H+jXqy/B1/R79ysxDfdjxjIohn6v17Jx+e7FOf/gTokQmS",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c17_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c17_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3407873107U));
  ssSetChecksum1(S,(3634851343U));
  ssSetChecksum2(S,(1556691703U));
  ssSetChecksum3(S,(4230330262U));
}

static void mdlRTW_c17_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c17_dynamics_lib(SimStruct *S)
{
  SFc17_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc17_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc17_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc17_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc17_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c17_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c17_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c17_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c17_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c17_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c17_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c17_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c17_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c17_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c17_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c17_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c17_dynamics_lib;
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

  mdl_setup_runtime_resources_c17_dynamics_lib(chartInstance);
}

void c17_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c17_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c17_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c17_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c17_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
