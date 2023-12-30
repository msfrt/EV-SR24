/* Include files */

#include "dynamics_lib_sfun.h"
#include "c4_dynamics_lib.h"
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
static void initialize_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance);
static void enable_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void c4_do_animation_call_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_st);
static void initSimStructsc4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance);
static real_T c4_eML_blk_kernel(SFc4_dynamics_libInstanceStruct *chartInstance,
  real_T c4_b_rearARBStiffness, real_T c4_b_rearTrack, real_T
  c4_b_rearARBMotionRatio);
static real_T c4_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c4_nullptr, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint8_T c4_c_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void init_dsm_address_info(SFc4_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc4_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c4_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c4_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c4_errCode;
  c4_errCode = cudaGetLastError();
  if (c4_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c4_errCode), (char_T *)
                       cudaGetErrorName(c4_errCode), (char_T *)
                       cudaGetErrorString(c4_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c4_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c4_JITStateAnimation,
                        chartInstance->c4_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  *chartInstance->c4_antiRollRearARB = c4_eML_blk_kernel(chartInstance,
    *chartInstance->c4_rearARBStiffness, *chartInstance->c4_rearTrack,
    *chartInstance->c4_rearARBMotionRatio);
  c4_do_animation_call_c4_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c4_do_animation_call_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(2, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_antiRollRearARB, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_antiRollRearARB = c4_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 0)), "antiRollRearARB");
  chartInstance->c4_is_active_c4_dynamics_lib = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
     "is_active_c4_dynamics_lib");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_dynamics_lib(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc4_dynamics_lib
  (SFc4_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c4_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_eML_blk_kernel(SFc4_dynamics_libInstanceStruct *chartInstance,
  real_T c4_b_rearARBStiffness, real_T c4_b_rearTrack, real_T
  c4_b_rearARBMotionRatio)
{
  real_T c4_a;
  c4_a = c4_b_rearTrack / 1000.0;
  return c4_b_rearARBStiffness * 1000.0 * (c4_a * c4_a) * 1.5574077246549023 /
    (c4_b_rearARBMotionRatio * c4_b_rearARBMotionRatio);
}

static real_T c4_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = const_cast<const char_T *>(c4_identifier);
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = const_cast<const char_T *>(c4_identifier);
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void init_dsm_address_info(SFc4_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc4_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_rearARBStiffness = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_antiRollRearARB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_rearARBMotionRatio = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3516175568U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2841939300U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3590592761U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2804909940U);
}

mxArray *sf_c4_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c4_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c4_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yPpF4DyE/NKMoPyc3KCUhOLHI"
    "OcwP6AhRf57lFwoEw/xP4AAv6RRPMPiJ9ZHJ+YXJJZlhqfbBKfUgmMpszk4viczCQkc0EAADpoH"
    "hw="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sJciLkJhy6etiry8Gxy23lD";
}

static void sf_opaque_initialize_c4_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_dynamics_lib(void *chartInstanceVar)
{
  enable_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_dynamics_lib(void *chartInstanceVar)
{
  disable_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_dynamics_lib
      ((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc4_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc4_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_dynamics_lib((SFc4_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc4_dynamics_lib((SFc4_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWM2P20QUn6TLqkVl2wMSVCBRceKCVLaAioTo7uZjSbXLRutskbisJvZLPMp47M5HEvfP4c6",
    "dvwDxJ3Dkwp0jBw68cZw0dULicSRoEZYcZ2z/5vfem/c1JrXOOcHjAM9H7xKyj9ebeNbJ7HgjH9",
    "eWztn9PfJlPv75TUL8OIAhCM8MBmxK3A5hoi6VNFLE/RA0gktQMTeaxaIjBnF5LBMDkCB8nCCJp",
    "XbiVSwynIlR2wjfMqtvQ+aHXhgbHpzghDS4EDz9O97E6C4yNpkEX7cBAh3K2AzDNqfDzVaQetII",
    "wR8pEznbSoH2TGJVVeeGa5ZwaE3B7wilKVpBbdHX01RDQ0/djGz1Vd4cHUcJZ1SUt3VIlQcJeoe",
    "GqyTA3wuj0XoleZGvzwTVsWSUtyLeCKksi+1ylPMc3Zo721lHugl9MxwyMbTWlSYCgfqjn5Sw1a",
    "ARj0HSIVwIN17fateaZgu88MuSWM0ieErlsY9+oCBwi0F0YOVRXFro4TROWBC0z6GjepKNcY1c8",
    "0bHhlKlvGGimSepStiMtzXGVVUVedu+aFDOlRu2FydnMAae8TepphWwM34HsFIs6MXoHTZyHaPf",
    "CPbMQI5txCJg5b1yXEBlReIbTPgl4CyyYQABmnkh+mKibXFklI6jBoZ+8+ysJN8qtiM0yAH1oXS",
    "+lpQpQIEzv3LkDZiygYRotJLOtCw9wywGK0GJGhjRnMRyhDZ2LQwvbGUjwQ0NwRCaoCFLci307q",
    "eUm5IyRwqzsnWPK4VZ1o0XsTZ+KoF96ocQ2BrIOJxjnsUJyi6xsuXzGLUdM502QfmSJWUjyWBCx",
    "+JnrdRLE7gSIxFPRFvGkZd3MRv8CgCzBpUCS9kJllKZtlH4clJLeNbLsrtrw2DtTDWnfesbpyCw",
    "GlpdbfWmPkZVS2C7iQLtgvXYc2xHhGJKYwuYtrIYCLI++Ii86IP31vTBd5b64Lv52P/0OkixGWW",
    "+uuasn83zYGme2yX66XkfvglHVnBkgZtfP1rC19bwkqVrke9W/eX3bxT46ninVqut2OmtAs9eAb",
    "ef2+qLP3/47b2ffn3+vXh8+uGdg942/toKfy37b3E/1t32Kwf5+P15r7TIzOOV5GXf/XqLH7xT8",
    "AM7Vk98djZ6Eqafg2YyfXQ6TQ8f8mY2380t8tYL8s7v37f9GQZulgek3wnyfY8dUzPrx7P925K8",
    "+1vscWvJnwj5/fFu+LePqsYNlmV2GXOOOyZ5fHnykh9Xl+f+0W74GX93iz73Cvrcy/r3a2qzNFw",
    "XM8JqnFb1e1fc68L3P678OpSpJzcq4qrykX8Yt6t+rnXydX//wYZ8Rgrv332F9diUR136pVdNr1",
    "+IWz/zQT7+arFHb4SMB2t2CfljbOQH657+R/z7D0f7zfu3lrVf/mH0u4fHgvIUtwWzbVd+uyvtN",
    "7nFIwlUrd97/Rv1ZH7d1n/dLsS3HU+YCOKJ+viTw88Od6lPfwGWLgrW",
    ""
  };

  static char newstr [1481] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c4_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3853384761U));
  ssSetChecksum1(S,(2061551131U));
  ssSetChecksum2(S,(1195339426U));
  ssSetChecksum3(S,(1410207522U));
}

static void mdlRTW_c4_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_dynamics_lib(SimStruct *S)
{
  SFc4_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc4_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc4_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc4_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_dynamics_lib;
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

  mdl_setup_runtime_resources_c4_dynamics_lib(chartInstance);
}

void c4_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
