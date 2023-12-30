/* Include files */

#include "dynamics_lib_sfun.h"
#include "c3_dynamics_lib.h"
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
static void initialize_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance);
static void enable_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void c3_do_animation_call_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_st);
static void initSimStructsc3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance);
static real32_T c3_eML_blk_kernel(SFc3_dynamics_libInstanceStruct *chartInstance,
  real_T c3_b_frontARBStiffness, real_T c3_b_frontTrack, real32_T
  c3_b_frontARBMotionRatio);
static real32_T c3_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static real32_T c3_b_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static uint8_T c3_c_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier);
static uint8_T c3_d_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c3_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c3_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c3_errCode;
  c3_errCode = cudaGetLastError();
  if (c3_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c3_errCode), (char_T *)
                       cudaGetErrorName(c3_errCode), (char_T *)
                       cudaGetErrorString(c3_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c3_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c3_JITStateAnimation,
                        chartInstance->c3_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  *chartInstance->c3_antiRollFrontARB = c3_eML_blk_kernel(chartInstance,
    *chartInstance->c3_frontARBStiffness, *chartInstance->c3_frontTrack,
    *chartInstance->c3_frontARBMotionRatio);
  c3_do_animation_call_c3_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c3_do_animation_call_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(2, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", chartInstance->c3_antiRollFrontARB,
    1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_antiRollFrontARB = c3_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 0)), "antiRollFrontARB");
  chartInstance->c3_is_active_c3_dynamics_lib = c3_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
     "is_active_c3_dynamics_lib");
  sf_mex_destroy(&c3_u);
  sf_mex_destroy(&c3_st);
}

static void initSimStructsc3_dynamics_lib(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc3_dynamics_lib
  (SFc3_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c3_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static real32_T c3_eML_blk_kernel(SFc3_dynamics_libInstanceStruct *chartInstance,
  real_T c3_b_frontARBStiffness, real_T c3_b_frontTrack, real32_T
  c3_b_frontARBMotionRatio)
{
  real_T c3_a;
  c3_a = c3_b_frontTrack / 1000.0;
  return static_cast<real32_T>(c3_b_frontARBStiffness * 1000.0 * (c3_a * c3_a) *
    1.5574077246549023) / (c3_b_frontARBMotionRatio * c3_b_frontARBMotionRatio);
}

static real32_T c3_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  real32_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static real32_T c3_b_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real32_T c3_f;
  real32_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_f, 0, 1, 0U, 0, 0U, 0);
  c3_y = c3_f;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static uint8_T c3_c_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_nullptr, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = const_cast<const char_T *>(c3_identifier);
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nullptr), &c3_thisId);
  sf_mex_destroy(&c3_nullptr);
  return c3_y;
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc3_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_frontARBStiffness = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_antiRollFrontARB = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_frontTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_frontARBMotionRatio = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(626859362U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2458528930U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2688538396U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(373436868U);
}

mxArray *sf_c3_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c3_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0CyDpF4DixLySzKD8nBy3ovy8Es"
    "cgJz6oPGXuUXCgTD/E/gAC/pFE8w+In1kcn5hcklmWGp9sHJ9SCYymzOTi+JzMJCRzQQAAsKEen"
    "A=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sGGEig4Er6ZO31InGfGRTDB";
}

static void sf_opaque_initialize_c3_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_dynamics_lib(void *chartInstanceVar)
{
  enable_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_dynamics_lib(void *chartInstanceVar)
{
  disable_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c3_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_dynamics_lib
      ((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc3_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc3_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc3_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c3_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_dynamics_lib((SFc3_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc3_dynamics_lib((SFc3_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE+P20QUn2SXVYvasgckWgmJ3uCC1HYBcUB0N4kTIu2y0TpbUC+rif0Sj3Y8dudPsul34Mi",
    "ZM9+AKzc+Ah+DIyfEG8dJgxMSjyNBi7DkOGP7N7/33rx/Y1LrnhE87uH5+X1CDvB6C886mR1v5e",
    "Pa0jm7v0++yMe/vE1IkIQwAuGb4ZDdELdDmLhHJY0VcT8EjeECVMKNZonoimFSHsvEECSIACdIE",
    "6mdeBWLDWfium1EYJnVNxELIj9KDA8bOCENzwWf/h1vanQPGVtMQqDbAKGOZGJGUZvT0WYrSD1p",
    "RhBcKxM720qB9k1qVVVnhmuWcvBuIOgKpSlaQW3R19dUQ1PfuBnZ6qv8OTqJU86oKG/riCofUvQ",
    "ODZdpiL/nRqP1SvIi34AJqhPJKPdi3oyoLIvtcZTzDN2aO9tZx7oFAzMaMTGy1pUmBoH6o5+UsN",
    "WwmYxB0hGcCzfewGrn3WQLvPDLkljNYnhG5UmAfqAgdItBdGDlU1xa6OM0TlgQdMChq/qSjXGNX",
    "PNG14ZSpbxh4pknqUrYjNcb46qqirztQDQp58oN20/SUxgDz/hbVNMK2Bm/A1gpFvYT9A4buY7R",
    "bwR7YSDHNhMRsvJeOS6gsiLxNSb8EnAW2zCAEM28EH0x0bY4MkoncRNDv3V6WpJvFdsVGuSQBlA",
    "6X0vKFKDAmV858oZM2UBCNFpJZ1qWnmEWg5WgRA2NaE0SeY02di0Mr2xlI8ENDeEIWqAhS3Ieev",
    "czyk1JmWOFWdm6x6XCLOvGi1gbP5XAAQ0iCG0NZBzOMM/iBGWXWNnyeYLajpmetkAFkqVlI8lgQ",
    "sfiZ63Un6ZwKa5FMhFtmcR+3sVs8CsAzBpUCixlDSylctpG4ctJLeFFP8vurg2DtTPVnA6sb3RA",
    "YDW0utrqTQOMKk9gu4kC7YL12UtsR4RiSmMLOPWyGAizPviYvOqD99f0we8s9cGH+Tg4ugqn2Iy",
    "yQF1xNsjmebQ0z50S/fS8D9+EIys4ssDNrx8t4WtreMnStch3u/7X9/cKfHW8U6vVVux0t8CzX8",
    "Ad5Lb64cM/LtPv9sbf/nz3x/73jZfb+Gsr/LXsv8X9VHfbr9zLx+/Pe6VFZh6vJC/77ldb/OC9g",
    "h/Ysep0PDb6xJOfPT8/etwVnWHnot9qZPPd2iJvvSDv/P5D259h4GZ5QAbdMN/32DE1s348278t",
    "yXuwxR63l/yJkN+e7oZ/97hM3BwW7GVPLMvsIuEcs5HQJxeNZT+uLs/D493wM/7eFn0eFPR5kPX",
    "vV9RmabgqZoTVOK3q9664N4Xvf1z5dShTT/Yq4qrykX8Yt6t+rnXyTX//0YZ8RgrvH77GemzKoy",
    "790uum16/ErZ/5IB9/udijNyPGwzW7hPwxNvLDdU//I/79u6P95v2bZ+2Xfxh9fnQiKJ/itmC27",
    "cpv96T9Jrd4JIGq9Xuvf6OezK/b+q87hfi24wkTYTJRHz9+8umTXerTnzExCfU=",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c3_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1442719647U));
  ssSetChecksum1(S,(1979944304U));
  ssSetChecksum2(S,(2836250968U));
  ssSetChecksum3(S,(2051183956U));
}

static void mdlRTW_c3_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c3_dynamics_lib(SimStruct *S)
{
  SFc3_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc3_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc3_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc3_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c3_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_dynamics_lib;
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

  mdl_setup_runtime_resources_c3_dynamics_lib(chartInstance);
}

void c3_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
