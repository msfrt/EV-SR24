/* Include files */

#include "dynamics_lib_sfun.h"
#include "c19_dynamics_lib.h"
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
static void initialize_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance);
static void enable_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void c19_do_animation_call_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_st);
static void initSimStructsc19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance);
static real32_T c19_eML_blk_kernel(SFc19_dynamics_libInstanceStruct
  *chartInstance, real32_T c19_b_frontNSMWT, real32_T c19_b_frontElWT, real_T
  c19_b_frontGeoWT);
static real32_T c19_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_nullptr, const char_T *c19_identifier);
static real32_T c19_b_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static uint8_T c19_c_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_nullptr, const char_T *c19_identifier);
static uint8_T c19_d_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void init_dsm_address_info(SFc19_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc19_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c19_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c19_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c19_errCode;
  c19_errCode = cudaGetLastError();
  if (c19_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c19_errCode), (char_T *)
                       cudaGetErrorName(c19_errCode), (char_T *)
                       cudaGetErrorString(c19_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c19_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c19_JITStateAnimation,
                        chartInstance->c19_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c19_JITTransitionAnimation[0] = 0U;
  *chartInstance->c19_frontTotalWT = c19_eML_blk_kernel(chartInstance,
    *chartInstance->c19_frontNSMWT, *chartInstance->c19_frontElWT,
    *chartInstance->c19_frontGeoWT);
  c19_do_animation_call_c19_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c19_do_animation_call_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c19_b_y = NULL;
  const mxArray *c19_c_y = NULL;
  const mxArray *c19_st;
  const mxArray *c19_y = NULL;
  c19_st = NULL;
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellmatrix(2, 1), false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", chartInstance->c19_frontTotalWT, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y",
    &chartInstance->c19_is_active_c19_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c19_y, 1, c19_c_y);
  sf_mex_assign(&c19_st, c19_y, false);
  return c19_st;
}

static void set_sim_state_c19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_st)
{
  const mxArray *c19_u;
  c19_u = sf_mex_dup(c19_st);
  *chartInstance->c19_frontTotalWT = c19_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c19_u, 0)), "frontTotalWT");
  chartInstance->c19_is_active_c19_dynamics_lib = c19_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 1)),
     "is_active_c19_dynamics_lib");
  sf_mex_destroy(&c19_u);
  sf_mex_destroy(&c19_st);
}

static void initSimStructsc19_dynamics_lib(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc19_dynamics_lib
  (SFc19_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c19_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  sf_mex_assign(&c19_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c19_nameCaptureInfo;
}

static real32_T c19_eML_blk_kernel(SFc19_dynamics_libInstanceStruct
  *chartInstance, real32_T c19_b_frontNSMWT, real32_T c19_b_frontElWT, real_T
  c19_b_frontGeoWT)
{
  return (c19_b_frontNSMWT + c19_b_frontElWT) + static_cast<real32_T>
    (c19_b_frontGeoWT);
}

static real32_T c19_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_nullptr, const char_T *c19_identifier)
{
  emlrtMsgIdentifier c19_thisId;
  real32_T c19_y;
  c19_thisId.fIdentifier = const_cast<const char_T *>(c19_identifier);
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_nullptr),
    &c19_thisId);
  sf_mex_destroy(&c19_nullptr);
  return c19_y;
}

static real32_T c19_b_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  real32_T c19_f;
  real32_T c19_y;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_f, 0, 1, 0U, 0, 0U, 0);
  c19_y = c19_f;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static uint8_T c19_c_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_nullptr, const char_T *c19_identifier)
{
  emlrtMsgIdentifier c19_thisId;
  uint8_T c19_y;
  c19_thisId.fIdentifier = const_cast<const char_T *>(c19_identifier);
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_nullptr),
    &c19_thisId);
  sf_mex_destroy(&c19_nullptr);
  return c19_y;
}

static uint8_T c19_d_emlrt_marshallIn(SFc19_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint8_T c19_b_u;
  uint8_T c19_y;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_b_u, 1, 3, 0U, 0, 0U, 0);
  c19_y = c19_b_u;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void init_dsm_address_info(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc19_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c19_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c19_frontNSMWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c19_frontTotalWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c19_frontElWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c19_frontGeoWT = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c19_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2281896112U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3041804723U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2116558729U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(822124920U);
}

mxArray *sf_c19_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c19_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c19_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c19_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yDpF4Dy04ry80pC8ksSc8JDYO"
    "EEo8l3j4IDZfoh9gcQ8I8Umn9A/Mzi+MTkksyy1PhkQ8v4lEpgPGUmF8fnZCYhzAUBAHsWHYI="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s3L65rUiZohatpj0LGvJmUG";
}

static void sf_opaque_initialize_c19_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c19_dynamics_lib(void *chartInstanceVar)
{
  enable_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c19_dynamics_lib(void *chartInstanceVar)
{
  disable_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c19_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c19_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c19_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c19_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c19_dynamics_lib
      ((SFc19_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc19_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc19_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c19_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc19_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c19_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc19_dynamics_lib((SFc19_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c19_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWFuP20QUnqTLqkWl2gckUIVEH1ElpG1LUZEQ7DaXJSjLRiRppb6sJvZJPOx4xjuXXEBIvPP",
    "KG78DiQd+AD+BV/5BH3nkjOOkwQmJxytBi7DkOGP7m++cM+c2JpXWKcHjFp6P3iZkH6/X8ayS+f",
    "FaNq6snPP7e+TjbPzr64QEMoQRiK4dDtmU+B3Cxh2qaKyJ/yFoDF+CltwaJkVLDGVxLBNDUCACn",
    "CCRynjxahZbzsRF04rAMeunEQuibiQtDx/jhDQ8E3z2d7yJNR1krDMFgWkChCZS0o6iJqej7VZQ",
    "ZlKLILjQNva2lQbTtYlTVZ9abljCoTGFoCW0oWgFvUPfrqEGambqZ2Snr+4u0DJOOKOiuK0jqru",
    "QoHcY6Cch/p5Zg9YryIt8AyaokYpR3oh5LaKqKLbDUc5TdGvubWcTmzoM7GjExMhZV9kYBOqPfl",
    "LAVsOaHIOiIzgTfryB064xTRd46ZcFsYbF8ISq4wD9QEPoF4PowLpLcWmhh9N4YUHQAYeW7ik2x",
    "jXyzRstF0ql8oaN556kS2FT3sYYV1WX5G0GokY5137YnkzaMAae8tepoSWwc34PsNYs7En0Dhe5",
    "ntFvBbu0kGFrUoSsuFeOc6i0SHyBCb8AnMUuDCBEMy9FX060K46sNjKuYejX2+2CfOvYljCghjS",
    "AwvlaUaYBBU79ypM3ZNoFEqLRSibVsvAM8xgsBSV6aEV9ItUF2ti3MLywlYsEPzSEI6iDgTTJNd",
    "C7n1BuC8oca8zKzj36GrOsHy9iXfyUAgc0iCB0NZBxOMU8ixMUXWLtyucxajtmZlYHHSiWFI0ki",
    "wkdi5+zUm+WQF9cCDkRTSXjbtbFbPErAMwaVAksZY+xlKpZE4UvJrWCy16a3X0bBmdnajgdON84",
    "AYHV0OnqqjcNMKoaAttNFOgq2C77GtsRoZk22ALOGmkMhGkffERe9MF7G/rgg5U++CA7g3sfnYc",
    "z7EZZoM85G7h5DlfmuVmgn1704dtwZA1HlrjF9b0VfGUDL1m55vluVP/6/rUcXxXvVCqVNTu9ke",
    "PZy+H2MztdTr8VH3z3+/O7P/1w98dvvv9lF39ljb+S/ne4n6t++5Vb2fidRa+0zMzjteTl3v1sh",
    "x+8lfMDN9YP2h8+VH32TEbUJF8dtk/Gn8f9k3S+6zvkrebkXdy/4/ozDNw0D6igFWb7Hjemdt6P",
    "p/u3FXn3d9jjxoo/EfL806vh3zwqEjc3c/Zy46GSwvSkofxpL+/H5eW5c3Q1/Jy/s0Of2zl9bqf",
    "9+zl1WRrO8xlhPU7L+r0v7lXh+x9XfB2K1JNrJXFl+cg/jLuqfr518lV//3BLPiO59w9eYj225V",
    "Gffull0+s34tfPvJuNP1nu0WsR4+GGXUL2GBv54aan/xH//sPTfov+reHsl30YffbgWFA+w23Bf",
    "NuV3e4o901u+UgB1Zv3Xv9GPVlcy/RfEyZCOdHv37v/8P5V6tOfGgsLQg==",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c19_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c19_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1853716593U));
  ssSetChecksum1(S,(4041310260U));
  ssSetChecksum2(S,(714388778U));
  ssSetChecksum3(S,(3163257755U));
}

static void mdlRTW_c19_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c19_dynamics_lib(SimStruct *S)
{
  SFc19_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc19_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc19_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc19_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc19_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c19_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c19_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c19_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c19_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c19_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c19_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c19_dynamics_lib;
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

  mdl_setup_runtime_resources_c19_dynamics_lib(chartInstance);
}

void c19_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c19_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
