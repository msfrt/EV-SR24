/* Include files */

#include "dynamics_lib_sfun.h"
#include "c20_dynamics_lib.h"
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
static void initialize_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance);
static void enable_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void c20_do_animation_call_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_st);
static void initSimStructsc20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance);
static real32_T c20_eML_blk_kernel(SFc20_dynamics_libInstanceStruct
  *chartInstance, real32_T c20_b_rearNSMWT, real32_T c20_b_rearElWT, real_T
  c20_b_rearGeoWT);
static real32_T c20_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_nullptr, const char_T *c20_identifier);
static real32_T c20_b_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static uint8_T c20_c_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_nullptr, const char_T *c20_identifier);
static uint8_T c20_d_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static void init_dsm_address_info(SFc20_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc20_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c20_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c20_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c20_errCode;
  c20_errCode = cudaGetLastError();
  if (c20_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c20_errCode), (char_T *)
                       cudaGetErrorName(c20_errCode), (char_T *)
                       cudaGetErrorString(c20_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c20_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c20_JITStateAnimation,
                        chartInstance->c20_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c20_JITTransitionAnimation[0] = 0U;
  *chartInstance->c20_rearTotalWT = c20_eML_blk_kernel(chartInstance,
    *chartInstance->c20_rearNSMWT, *chartInstance->c20_rearElWT,
    *chartInstance->c20_rearGeoWT);
  c20_do_animation_call_c20_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c20_do_animation_call_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c20_b_y = NULL;
  const mxArray *c20_c_y = NULL;
  const mxArray *c20_st;
  const mxArray *c20_y = NULL;
  c20_st = NULL;
  c20_st = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_createcellmatrix(2, 1), false);
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", chartInstance->c20_rearTotalWT, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c20_y, 0, c20_b_y);
  c20_c_y = NULL;
  sf_mex_assign(&c20_c_y, sf_mex_create("y",
    &chartInstance->c20_is_active_c20_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c20_y, 1, c20_c_y);
  sf_mex_assign(&c20_st, c20_y, false);
  return c20_st;
}

static void set_sim_state_c20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_st)
{
  const mxArray *c20_u;
  c20_u = sf_mex_dup(c20_st);
  *chartInstance->c20_rearTotalWT = c20_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c20_u, 0)), "rearTotalWT");
  chartInstance->c20_is_active_c20_dynamics_lib = c20_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c20_u, 1)),
     "is_active_c20_dynamics_lib");
  sf_mex_destroy(&c20_u);
  sf_mex_destroy(&c20_st);
}

static void initSimStructsc20_dynamics_lib(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc20_dynamics_lib
  (SFc20_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c20_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c20_nameCaptureInfo = NULL;
  c20_nameCaptureInfo = NULL;
  sf_mex_assign(&c20_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c20_nameCaptureInfo;
}

static real32_T c20_eML_blk_kernel(SFc20_dynamics_libInstanceStruct
  *chartInstance, real32_T c20_b_rearNSMWT, real32_T c20_b_rearElWT, real_T
  c20_b_rearGeoWT)
{
  return (c20_b_rearNSMWT + c20_b_rearElWT) + static_cast<real32_T>
    (c20_b_rearGeoWT);
}

static real32_T c20_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_nullptr, const char_T *c20_identifier)
{
  emlrtMsgIdentifier c20_thisId;
  real32_T c20_y;
  c20_thisId.fIdentifier = const_cast<const char_T *>(c20_identifier);
  c20_thisId.fParent = NULL;
  c20_thisId.bParentIsCell = false;
  c20_y = c20_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_nullptr),
    &c20_thisId);
  sf_mex_destroy(&c20_nullptr);
  return c20_y;
}

static real32_T c20_b_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  real32_T c20_f;
  real32_T c20_y;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_f, 0, 1, 0U, 0, 0U, 0);
  c20_y = c20_f;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static uint8_T c20_c_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_nullptr, const char_T *c20_identifier)
{
  emlrtMsgIdentifier c20_thisId;
  uint8_T c20_y;
  c20_thisId.fIdentifier = const_cast<const char_T *>(c20_identifier);
  c20_thisId.fParent = NULL;
  c20_thisId.bParentIsCell = false;
  c20_y = c20_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_nullptr),
    &c20_thisId);
  sf_mex_destroy(&c20_nullptr);
  return c20_y;
}

static uint8_T c20_d_emlrt_marshallIn(SFc20_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  uint8_T c20_b_u;
  uint8_T c20_y;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_b_u, 1, 3, 0U, 0, 0U, 0);
  c20_y = c20_b_u;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void init_dsm_address_info(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc20_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c20_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c20_rearNSMWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c20_rearTotalWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c20_rearElWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c20_rearGeoWT = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c20_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3249489784U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3351134557U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(413153145U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1910199332U);
}

mxArray *sf_c20_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c20_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c20_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c20_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyPpF4Dyi1ITi0LySxJzwkMYYO"
    "EEo8l3j4IDZfoh9gcQ8I8Umn9A/Mzi+MTkksyy1PhkI4P4lEpgPGUmF8fnZCYxoPgPAAHDHPk="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c20_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sklQdNloCdlTDXMMCBdhIRH";
}

static void sf_opaque_initialize_c20_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c20_dynamics_lib(void *chartInstanceVar)
{
  enable_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c20_dynamics_lib(void *chartInstanceVar)
{
  disable_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c20_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c20_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c20_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c20_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc20_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c20_dynamics_lib
      ((SFc20_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc20_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc20_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c20_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc20_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c20_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c20_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc20_dynamics_lib((SFc20_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c20_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN2O20QUnmSXVUtLtRdIRRUSveQGaVmExAUqu+skNNKmG5psi7hZzdon8SjjGXd+kg0PwiM",
    "gHqFvAI/AG3CHuINLzjhOGpyQeBwJWoQlr3dsf/PNOT4/34TU2h2Cxz08P3uPkAO83sKzTmbHW/",
    "m4tnTO7u+Tz/PxT28TEsoIhiB6djBgN8TvEDbpUkUTTfwPQRN4Clpya5gUbTGQ5bFMDECBCHGCV",
    "CrjxatZYjkTo5YVoWPWz2MWxr1YWh6d4YQ0uhB8+ne8qTVdZGwwBaFpAUQmVtIO4xanw81eUGYS",
    "xBCOtE28faXB9GzqTNUdyw1LOTRvIGwLbSh6QW+xt2eogcDc+DnZ2at7c7RMUs6oKO/rmOoepBg",
    "dBi7TCP9eWIPeK8mLfNdMUCMVo7yZ8CCmqiy2y3GdHQxr7u1nk5gGXNvhkImh866yCQi0H+OkhK",
    "8GgRyDokO4EH68obOueZN94EVclsQalsAzqk5DjAMNkV8OYgDrHsVPC32cxgsLgl5zaOu+YmP8R",
    "r51o+1SqVLdsMksknQlbMbbHONX1RV5W6EIKOfaD9uX6TmMgWf8DWpoBeyM3wOsNYv6EqPDZa5n",
    "9lvBXljIsYEUESsfleMCKmsST7Dgl4CzxKUBROjmxdIXE23LI6uNTAJM/cb5eUm+VWxbGFADGkL",
    "peq0o04ALzuLKkzdi2iUSotFLJrOy9AyzHKwEJXpgRWMi1Qh97NsYXvnKZYIfGqIhNMBAVuSaGN",
    "3PKLcl15xorMouPC41Vlk/XsS6/KkEDmkYQ+R6IOPQwTqLE5T9xNq1z1O0dszMtAE6VCwtm0kWC",
    "zo2P+el/jSFSzESciJaSia9XMVsiCsArBpUCWxlZ9hK1bSFiy+3agUv+ll19xUMzs/UcHrtYuNL",
    "ENgNna2ue9MQs6opUG7ignbB9ti3KEeEZtqgBJw2sxyIMh18Ql7p4P01OvhwSQcf5md4fHQVTVG",
    "NslBfcXbt5jlamuduCT091+GbcGQFRxa4+fXDJXxtDS9Zuhb5btf/+v5ega+Od2q12oqf3inw7B",
    "dwB7mffm2ff6+/U5e//B7s/XD/x5fb+Gsr/LXsf4d7Wffbr9zLx+/PtdKiMo9Xipd79/GWOLhfi",
    "AM31iP+VfSEyyDi/cbXnU5wFsXtp4+z+W5tWW+9sN75/YdOn2HiZnVAhe0o3/e4MbUzPZ7t35bW",
    "e7DFH7eX4omQ377YDf/uSZm8uVPw152sRlDVl4by5/2VOK6+nocnu+Fn/N0t9jwo2PMg0+9X1FV",
    "puCpWhNU8rRr3vrg3he9/XPnvUKaf7FXEVeUj/zBuV/t8++Sb/v7RhnpGCu8fvsZ2bKqjPnrpdb",
    "PrZ+KnZz7Ix48We/QgZjxas0vIH6OQH6x7+h+J7z88/TfXb03nv/yH0W8+ORWUT3FbMNt25be7y",
    "v0mt3iEqkWv33v9G/1kft2mv+4W8tuNJ0xEcqI/+vj40+Nd+tOf6X4KuQ==",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c20_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c20_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2790017518U));
  ssSetChecksum1(S,(1433572979U));
  ssSetChecksum2(S,(54786023U));
  ssSetChecksum3(S,(3100055464U));
}

static void mdlRTW_c20_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c20_dynamics_lib(SimStruct *S)
{
  SFc20_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc20_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc20_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc20_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc20_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c20_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c20_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c20_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c20_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c20_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c20_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c20_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c20_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c20_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c20_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c20_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c20_dynamics_lib;
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

  mdl_setup_runtime_resources_c20_dynamics_lib(chartInstance);
}

void c20_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c20_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c20_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c20_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c20_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
