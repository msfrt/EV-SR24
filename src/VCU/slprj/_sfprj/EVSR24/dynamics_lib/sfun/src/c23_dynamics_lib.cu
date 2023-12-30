/* Include files */

#include "dynamics_lib_sfun.h"
#include "c23_dynamics_lib.h"
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
static void initialize_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance);
static void enable_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void c23_do_animation_call_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_st);
static void initSimStructsc23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance);
static real32_T c23_eML_blk_kernel(SFc23_dynamics_libInstanceStruct
  *chartInstance, real_T c23_b_totalMass, real32_T c23_b_totalMassDistribution,
  real_T c23_b_totalDownForce, real32_T c23_b_downForceDistribution, real32_T
  c23_b_totalRearWT, real_T c23_b_gravity);
static real32_T c23_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_nullptr, const char_T *c23_identifier);
static real32_T c23_b_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static uint8_T c23_c_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_nullptr, const char_T *c23_identifier);
static uint8_T c23_d_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void init_dsm_address_info(SFc23_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc23_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c23_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c23_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c23_errCode;
  c23_errCode = cudaGetLastError();
  if (c23_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c23_errCode), (char_T *)
                       cudaGetErrorName(c23_errCode), (char_T *)
                       cudaGetErrorString(c23_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c23_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c23_JITStateAnimation,
                        chartInstance->c23_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c23_JITTransitionAnimation[0] = 0U;
  *chartInstance->c23_dynamicLoadRL = c23_eML_blk_kernel(chartInstance,
    *chartInstance->c23_totalMass, *chartInstance->c23_totalMassDistribution,
    *chartInstance->c23_totalDownForce,
    *chartInstance->c23_downForceDistribution, *chartInstance->c23_totalRearWT, *
    chartInstance->c23_gravity);
  c23_do_animation_call_c23_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c23_do_animation_call_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c23_b_y = NULL;
  const mxArray *c23_c_y = NULL;
  const mxArray *c23_st;
  const mxArray *c23_y = NULL;
  c23_st = NULL;
  c23_st = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_createcellmatrix(2, 1), false);
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", chartInstance->c23_dynamicLoadRL, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c23_y, 0, c23_b_y);
  c23_c_y = NULL;
  sf_mex_assign(&c23_c_y, sf_mex_create("y",
    &chartInstance->c23_is_active_c23_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c23_y, 1, c23_c_y);
  sf_mex_assign(&c23_st, c23_y, false);
  return c23_st;
}

static void set_sim_state_c23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_st)
{
  const mxArray *c23_u;
  c23_u = sf_mex_dup(c23_st);
  *chartInstance->c23_dynamicLoadRL = c23_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c23_u, 0)), "dynamicLoadRL");
  chartInstance->c23_is_active_c23_dynamics_lib = c23_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c23_u, 1)),
     "is_active_c23_dynamics_lib");
  sf_mex_destroy(&c23_u);
  sf_mex_destroy(&c23_st);
}

static void initSimStructsc23_dynamics_lib(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc23_dynamics_lib
  (SFc23_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c23_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c23_nameCaptureInfo = NULL;
  c23_nameCaptureInfo = NULL;
  sf_mex_assign(&c23_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c23_nameCaptureInfo;
}

static real32_T c23_eML_blk_kernel(SFc23_dynamics_libInstanceStruct
  *chartInstance, real_T c23_b_totalMass, real32_T c23_b_totalMassDistribution,
  real_T c23_b_totalDownForce, real32_T c23_b_downForceDistribution, real32_T
  c23_b_totalRearWT, real_T c23_b_gravity)
{
  return ((static_cast<real32_T>(c23_b_totalMass) * (100.0F -
            c23_b_totalMassDistribution) / 100.0F * 0.5F + static_cast<real32_T>
           (c23_b_totalDownForce) * (100.0F - c23_b_downForceDistribution) /
           100.0F / 2.0F) - c23_b_totalRearWT) * static_cast<real32_T>
    (c23_b_gravity);
}

static real32_T c23_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_nullptr, const char_T *c23_identifier)
{
  emlrtMsgIdentifier c23_thisId;
  real32_T c23_y;
  c23_thisId.fIdentifier = const_cast<const char_T *>(c23_identifier);
  c23_thisId.fParent = NULL;
  c23_thisId.bParentIsCell = false;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_nullptr),
    &c23_thisId);
  sf_mex_destroy(&c23_nullptr);
  return c23_y;
}

static real32_T c23_b_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  real32_T c23_f;
  real32_T c23_y;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_f, 0, 1, 0U, 0, 0U, 0);
  c23_y = c23_f;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static uint8_T c23_c_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_nullptr, const char_T *c23_identifier)
{
  emlrtMsgIdentifier c23_thisId;
  uint8_T c23_y;
  c23_thisId.fIdentifier = const_cast<const char_T *>(c23_identifier);
  c23_thisId.fParent = NULL;
  c23_thisId.bParentIsCell = false;
  c23_y = c23_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_nullptr),
    &c23_thisId);
  sf_mex_destroy(&c23_nullptr);
  return c23_y;
}

static uint8_T c23_d_emlrt_marshallIn(SFc23_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  uint8_T c23_b_u;
  uint8_T c23_y;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_b_u, 1, 3, 0U, 0, 0U, 0);
  c23_y = c23_b_u;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void init_dsm_address_info(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc23_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c23_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c23_dynamicLoadRL = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c23_totalMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c23_totalMassDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c23_totalDownForce = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c23_downForceDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c23_totalRearWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c23_gravity = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c23_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(103796622U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(832532404U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3650621661U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2062090635U);
}

mxArray *sf_c23_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c23_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c23_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c23_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4DyUyqBPslM9slPTAnygY"
    "YTLLzId4+CA2X6IfYHEPCPFJp/QPzM4vjE5JLMstT4ZCPjeKjviuNzMpMQ5oIAAKNnHao="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c23_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sN9KeYWMcIt6DcjNgjMRWlF";
}

static void sf_opaque_initialize_c23_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c23_dynamics_lib(void *chartInstanceVar)
{
  enable_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c23_dynamics_lib(void *chartInstanceVar)
{
  disable_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c23_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c23_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c23_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c23_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc23_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c23_dynamics_lib
      ((SFc23_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc23_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc23_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c23_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc23_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c23_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c23_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc23_dynamics_lib((SFc23_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c23_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE9vG0UUH1vBaqu2ygGJqkKiRy5IbSIQSKhN6j/Fqp1YWScRcIgmu8/eaWZnN/PHjjly4si",
    "RD8EH4CPwEfgQHLggceTNeu2atbF31hK0iJU2m9md37z3fvP+jUml3SV43cf74AEhNXzewrtKpt",
    "c72biycE/f75DPs/HPdwjx4wCGIDwzGLAb4nYJE/WopJEi7pegEZyAirnRLBZtMYiLY5kYgATh4",
    "wJJLLWTXMUiw5m4ahnhW8nqPGR+6IWx4cFzXJAGx4JP/k5uYnQPJTaYBF+3AAIdytgMwxanw/Us",
    "SD2uh+BfKRM5c6VAeyaxpqqu4ZolHJo34LeF0hRZUBvs9TTVUNc3biRbe5U3Q8dRwhkVxbkOqfI",
    "gQe/QcJoE+PfYaGSvoFyUd8kE1bFklDcjXg+pLIrtcdSzi27NnXnWkW7ApRkOmRhadqWJQKD96C",
    "cFuBrU4xFIOoRj4SbXt9Y1b9INnvtlQaxmEZxReeijHygI3GIQHVh5FLcW+riMExYEveTQVn3JR",
    "rhHrnmjbUOpVN4w0dSTVClsKrc5wl1VJeW2fFGnnCs3bD9OOjACnspvUE1LYKfyHcBKsaAfo3fY",
    "yHWMfiPYtYEMW49FwIp75SiHSovEESb8AnAW2TCAAGmeqz5faFMcGaXjqI6h3+h0CspbxraFBjm",
    "gPhTO15IyBahw6leOcgOmbCAhGlnSqZWFV5jGYCkoUQMjGuNYXiHHroXhNVc2EtzQEAyhARrSJN",
    "dE7z6j3BTUOVKYla17nCrMsm5yEWvjpxTYp34Iga2BjEMX8ywuUHSLlS2fh2jtiOlJA5QvWVI0k",
    "gwmdCx+lqX+JIFTcSXisWjJOPKyLmaNXwFg1qBSYCl7jqVUTlqofDGtJVz30+zu2jBYnqnm9NL6",
    "xgsQWA2trbZ6Ux+jqimw3USFtsF67BtsR4RiSmMLOGmmMRBM+2Dyug/eWdEH7y70wbvZ7e/tXwQ",
    "T7EaZry44u7TrPF5Y526BfnrWh6/DkSUcmeNmzw8X8JUVcsnC087/dGH+7epf59dy8qqzd+lFlv",
    "i6l5O3k8PXMr6uf/zh6YPvf/3u92+9/Scvvz7L253Xo7KkRyX93+J+qrqdW+5n4/dnPdM8Q4+Wk",
    "pid+8UGf3gv5w92rI4+ewlfnnf9tv6k4b86Gr7qnpzzVrrerQ36VnP6zt4/sn0aBnCaD6TfDrLz",
    "jx1TM+3L8/tZ28DH7QW/IuS3Z9vh3z0oEj/3cnzZcRY7nZgGJ52cP5fX59HBdvip/N4Gex7m7Hm",
    "Y9vEX1GZruMhnhuV4Lev3rri3Rd7/uOL7UKSu1Eriysoj/zBuW/tc6+XbPv/xmnxGcvN332A71u",
    "VRl77pTbPrF+LWz3yQjZ/Oz+r1kPFgxWkh+4wN/WDV1/+If//hyN+sf2ta/rIfSL/aPxSUT/B4M",
    "D1+Za970v42N/8kgarVZ7B/o57Mf8ff0K/czcW3HY+ZCOKx+ujJ3sd729SnPwEhtQpG",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c23_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c23_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1050193009U));
  ssSetChecksum1(S,(2297204760U));
  ssSetChecksum2(S,(861111029U));
  ssSetChecksum3(S,(1448823601U));
}

static void mdlRTW_c23_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c23_dynamics_lib(SimStruct *S)
{
  SFc23_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc23_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc23_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc23_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc23_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c23_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c23_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c23_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c23_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c23_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c23_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c23_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c23_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c23_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c23_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c23_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c23_dynamics_lib;
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

  mdl_setup_runtime_resources_c23_dynamics_lib(chartInstance);
}

void c23_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c23_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c23_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c23_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c23_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
