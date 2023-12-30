/* Include files */

#include "dynamics_lib_sfun.h"
#include "c10_dynamics_lib.h"
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
static void initialize_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance);
static void enable_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void c10_do_animation_call_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_st);
static void initSimStructsc10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance);
static real_T c10_eML_blk_kernel(SFc10_dynamics_libInstanceStruct *chartInstance,
  real_T c10_b_suspendedMass, real_T c10_b_suspendedMassWeightDistribution,
  real_T c10_b_MM5_ay, real_T c10_b_rearRollCenterHeight, real_T c10_b_rearTrack);
static real_T c10_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier);
static real_T c10_b_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static uint8_T c10_c_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier);
static uint8_T c10_d_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void init_dsm_address_info(SFc10_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc10_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c10_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c10_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c10_errCode;
  c10_errCode = cudaGetLastError();
  if (c10_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c10_errCode), (char_T *)
                       cudaGetErrorName(c10_errCode), (char_T *)
                       cudaGetErrorString(c10_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c10_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c10_JITStateAnimation,
                        chartInstance->c10_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c10_JITTransitionAnimation[0] = 0U;
  *chartInstance->c10_rearGeoWT = c10_eML_blk_kernel(chartInstance,
    *chartInstance->c10_suspendedMass,
    *chartInstance->c10_suspendedMassWeightDistribution,
    *chartInstance->c10_MM5_ay, *chartInstance->c10_rearRollCenterHeight,
    *chartInstance->c10_rearTrack);
  c10_do_animation_call_c10_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c10_do_animation_call_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c10_b_y = NULL;
  const mxArray *c10_c_y = NULL;
  const mxArray *c10_st;
  const mxArray *c10_y = NULL;
  c10_st = NULL;
  c10_st = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_createcellmatrix(2, 1), false);
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", chartInstance->c10_rearGeoWT, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c10_y, 0, c10_b_y);
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y",
    &chartInstance->c10_is_active_c10_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c10_y, 1, c10_c_y);
  sf_mex_assign(&c10_st, c10_y, false);
  return c10_st;
}

static void set_sim_state_c10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_st)
{
  const mxArray *c10_u;
  c10_u = sf_mex_dup(c10_st);
  *chartInstance->c10_rearGeoWT = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c10_u, 0)), "rearGeoWT");
  chartInstance->c10_is_active_c10_dynamics_lib = c10_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 1)),
     "is_active_c10_dynamics_lib");
  sf_mex_destroy(&c10_u);
  sf_mex_destroy(&c10_st);
}

static void initSimStructsc10_dynamics_lib(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc10_dynamics_lib
  (SFc10_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c10_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_nameCaptureInfo = NULL;
  sf_mex_assign(&c10_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c10_nameCaptureInfo;
}

static real_T c10_eML_blk_kernel(SFc10_dynamics_libInstanceStruct *chartInstance,
  real_T c10_b_suspendedMass, real_T c10_b_suspendedMassWeightDistribution,
  real_T c10_b_MM5_ay, real_T c10_b_rearRollCenterHeight, real_T c10_b_rearTrack)
{
  return c10_b_suspendedMass * ((100.0 - c10_b_suspendedMassWeightDistribution) /
    100.0) * c10_b_MM5_ay * c10_b_rearRollCenterHeight / c10_b_rearTrack;
}

static real_T c10_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier)
{
  emlrtMsgIdentifier c10_thisId;
  real_T c10_y;
  c10_thisId.fIdentifier = const_cast<const char_T *>(c10_identifier);
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_nullptr),
    &c10_thisId);
  sf_mex_destroy(&c10_nullptr);
  return c10_y;
}

static real_T c10_b_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  real_T c10_d;
  real_T c10_y;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_d, 1, 0, 0U, 0, 0U, 0);
  c10_y = c10_d;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static uint8_T c10_c_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier)
{
  emlrtMsgIdentifier c10_thisId;
  uint8_T c10_y;
  c10_thisId.fIdentifier = const_cast<const char_T *>(c10_identifier);
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_nullptr),
    &c10_thisId);
  sf_mex_destroy(&c10_nullptr);
  return c10_y;
}

static uint8_T c10_d_emlrt_marshallIn(SFc10_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  uint8_T c10_b_u;
  uint8_T c10_y;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_b_u, 1, 3, 0U, 0, 0U, 0);
  c10_y = c10_b_u;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void init_dsm_address_info(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc10_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c10_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c10_suspendedMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c10_rearGeoWT = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_suspendedMassWeightDistribution = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c10_MM5_ay = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_rearRollCenterHeight = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c10_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c10_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(202376942U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(337017653U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(948754008U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1146897419U);
}

mxArray *sf_c10_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c10_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c10_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c10_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyLpF4Dyi1ITi9xT88NDoOJ8SD"
    "T57lFwoEw/xP4AAv6RQvMPiJ9ZHJ+YXJJZlhqfbGgQn1IJjKfM5OL4nMwkVP8BACOwHAs="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sWyfhtqFOhK8Ezx2ndVFl";
}

static void sf_opaque_initialize_c10_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c10_dynamics_lib(void *chartInstanceVar)
{
  enable_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_dynamics_lib(void *chartInstanceVar)
{
  disable_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c10_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c10_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c10_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c10_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c10_dynamics_lib
      ((SFc10_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc10_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc10_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c10_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc10_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c10_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc10_dynamics_lib((SFc10_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c10_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWNuKI0UYroSZYUfWZQRFWQQXr7wRZkeEvVh0ZnNYgzNOMJkZ8MKh0v0nXUx1dU8dcti3UAR",
    "fxUfwBQS99Mo78XIv/avTycZOTKo6oLtiQ6ep7vrqP9R/+Cqk0jojeN3D+/gdQvbweQfvKpleu/",
    "m4snBP3++Qx/n4x9cICZIQBiA6pt9nY+J3CRO3qaSxIv6XoDF8CSrhRrNEtEQ/cccy0QcJIsAF0",
    "kRqL7mKxYYzcdM0IrCS1VXEgqgTJYaHT3BBGp4LPvk7uanRbZRYZxIC3QQIdSQTM4ianA7We0Hq",
    "US2C4EaZ2NtXCnTHpNZUdWa4ZimHxhiCllCaohfUBns7mmqo6bGfk629qjNDJ3HKGRXuvo6o6kC",
    "K0aHhIg3x99xo9J6jXJTXY4LqRDLKGzGvRVS6Ytsc9TzDsObeftaxrkPPDAZMDKx3pYlBoP0YJw",
    "6+6teSIUg6gHPhJzew1jXG2QbP49IRq1kMl1SeBBgHCkK/HMQAVh2KWwtdXMYLC4L2OLRUV7Ih7",
    "pFv3WjZVCpVN0w8jSRVCpvJbQxxV1VJuc1A1Cjnyg/bTdJTGALP5NeppiWwU/keYKVY2E0wOmzm",
    "ema/EezWQI6tJSJk7lE5LKCyJvEFFnwHOIttGkCIbp6rPl9oUx4ZpZO4hqlfPz11lLeMbQkNsk8",
    "DcK7XkjIFqHAWV55yQ6ZsIiEavaQzK51XmOZgKShRfSPqo0TeoI99G8MLX9lM8ENDOIA6aMiKXA",
    "Oj+5Jy46hzrLAq2/C4UFhl/eQi1uZPKXBAgwhC2wMZhzOss7iA6xYr2z5P0Noh05M6qECy1DWTD",
    "BZ0bH7WS91JChfiRiQj0ZRJ3MlZzJq4AsCqQaXAVvYEW6mcNFF5N60l3Haz6u5LGKyfqea0Z2Pj",
    "KQjshtZW271pgFnVEEg3UaFtsB32DOmIUExppICTRpYD4ZQHkxc8eGcFDz5Y4MEH+R08PLwOJ8h",
    "GWaCuOevZdQ4X1rnrwKdnPHwdjizhyBw3e36wgK+skEsWnnb+o4X5+9W/zt8tyKvO3tlrdm5YwL",
    "9ekLdTwO/l/vqNf//dT8/f//VbevnG7798/U3R7qIelSU9KmQm/4eq37nlXj5+d8aZ5hV6uFTE7",
    "NzPNsTDW4V4sGN1NelH+rZ5Hn3+qPFsfCTCyybP17uzQd9qQd/Z+weWp2ECZ/VABq0wP//YMTVT",
    "Xl7cz70N/thfiCtC/vh0O/ybxy75s1/w135WK6h8CslVd0U8l9fnwfF2+Kn89gZ77hfsuZ/x+Gt",
    "qqzVcFyvDsn1l494X96rI+x/nvg8ufWW3JK6sPPIP47a1z7dfvurzD9fUM1KYf/AS27Gujvrwpp",
    "fNrp+JH595Lx9/Mj+r1yLGwxWnhfwzEvr+qq//kfh+7um/t/Nxw/ov/4P0q49OBOUTPB5Mj1/56",
    "7a0/83NPyFrUavPYP9GPyEr+PgqvnK3kN92PGIiTEbqw4dHHx9t05/+BPapCqM=",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c10_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c10_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2492951783U));
  ssSetChecksum1(S,(3777165525U));
  ssSetChecksum2(S,(290873746U));
  ssSetChecksum3(S,(2438912494U));
}

static void mdlRTW_c10_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c10_dynamics_lib(SimStruct *S)
{
  SFc10_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc10_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc10_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc10_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc10_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c10_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c10_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c10_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c10_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c10_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c10_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c10_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c10_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c10_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c10_dynamics_lib;
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

  mdl_setup_runtime_resources_c10_dynamics_lib(chartInstance);
}

void c10_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c10_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
