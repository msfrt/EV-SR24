/* Include files */

#include "dynamics_lib_sfun.h"
#include "c12_dynamics_lib.h"
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
static void initialize_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance);
static void enable_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void c12_do_animation_call_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_st);
static void initSimStructsc12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance);
static real_T c12_eML_blk_kernel(SFc12_dynamics_libInstanceStruct *chartInstance,
  real_T c12_b_rearTrack, real_T c12_b_rearWheelRate);
static real_T c12_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_nullptr, const char_T *c12_identifier);
static real_T c12_b_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static uint8_T c12_c_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_nullptr, const char_T *c12_identifier);
static uint8_T c12_d_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void init_dsm_address_info(SFc12_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc12_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c12_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c12_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c12_errCode;
  c12_errCode = cudaGetLastError();
  if (c12_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c12_errCode), (char_T *)
                       cudaGetErrorName(c12_errCode), (char_T *)
                       cudaGetErrorString(c12_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c12_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c12_JITStateAnimation,
                        chartInstance->c12_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c12_JITTransitionAnimation[0] = 0U;
  *chartInstance->c12_antiRollRearSprings = c12_eML_blk_kernel(chartInstance,
    *chartInstance->c12_rearTrack, *chartInstance->c12_rearWheelRate);
  c12_do_animation_call_c12_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c12_do_animation_call_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  const mxArray *c12_st;
  const mxArray *c12_y = NULL;
  c12_st = NULL;
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellmatrix(2, 1), false);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y",
    chartInstance->c12_antiRollRearSprings, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y",
    &chartInstance->c12_is_active_c12_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c12_y, 1, c12_c_y);
  sf_mex_assign(&c12_st, c12_y, false);
  return c12_st;
}

static void set_sim_state_c12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_st)
{
  const mxArray *c12_u;
  c12_u = sf_mex_dup(c12_st);
  *chartInstance->c12_antiRollRearSprings = c12_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c12_u, 0)), "antiRollRearSprings");
  chartInstance->c12_is_active_c12_dynamics_lib = c12_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1)),
     "is_active_c12_dynamics_lib");
  sf_mex_destroy(&c12_u);
  sf_mex_destroy(&c12_st);
}

static void initSimStructsc12_dynamics_lib(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc12_dynamics_lib
  (SFc12_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c12_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c12_nameCaptureInfo = NULL;
  c12_nameCaptureInfo = NULL;
  sf_mex_assign(&c12_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c12_nameCaptureInfo;
}

static real_T c12_eML_blk_kernel(SFc12_dynamics_libInstanceStruct *chartInstance,
  real_T c12_b_rearTrack, real_T c12_b_rearWheelRate)
{
  real_T c12_a;
  c12_a = c12_b_rearTrack / 1000.0;
  return c12_a * c12_a * 1.5574077246549023 * (c12_b_rearWheelRate * 1000.0) /
    2.0;
}

static real_T c12_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_nullptr, const char_T *c12_identifier)
{
  emlrtMsgIdentifier c12_thisId;
  real_T c12_y;
  c12_thisId.fIdentifier = const_cast<const char_T *>(c12_identifier);
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_nullptr),
    &c12_thisId);
  sf_mex_destroy(&c12_nullptr);
  return c12_y;
}

static real_T c12_b_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  real_T c12_d;
  real_T c12_y;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_d, 1, 0, 0U, 0, 0U, 0);
  c12_y = c12_d;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static uint8_T c12_c_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_nullptr, const char_T *c12_identifier)
{
  emlrtMsgIdentifier c12_thisId;
  uint8_T c12_y;
  c12_thisId.fIdentifier = const_cast<const char_T *>(c12_identifier);
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_nullptr),
    &c12_thisId);
  sf_mex_destroy(&c12_nullptr);
  return c12_y;
}

static uint8_T c12_d_emlrt_marshallIn(SFc12_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  uint8_T c12_b_u;
  uint8_T c12_y;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_b_u, 1, 3, 0U, 0, 0U, 0);
  c12_y = c12_b_u;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void init_dsm_address_info(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc12_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c12_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c12_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c12_antiRollRearSprings = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c12_rearWheelRate = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c12_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(49291795U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2150116786U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2148149072U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1297981808U);
}

mxArray *sf_c12_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c12_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c12_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c12_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Asj6ReA8hPzSjKD8nNyglITi4"
    "ILijLz0osZYOEFo8l3l4IDZfoh9gcQ8JcUmr9A/Mzi+MTkksyy1PhkQ6P4lEpgfGUmF8fnZCYxo"
    "PgPANzoIHY="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "szELbKLmqydMgM0SPDKjlvF";
}

static void sf_opaque_initialize_c12_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c12_dynamics_lib(void *chartInstanceVar)
{
  enable_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c12_dynamics_lib(void *chartInstanceVar)
{
  disable_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c12_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c12_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c12_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c12_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c12_dynamics_lib
      ((SFc12_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc12_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc12_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c12_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc12_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c12_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc12_dynamics_lib((SFc12_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c12_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN2O20QUnkTLilalWgkkUFWJ3sEN0nYRggsEu80PRE3YqM4WiZvVxD6Jhx3PeOcn2fQdkJB",
    "4B16AByh3cMctD9ELJG645IzjpMEJiccrQYvwyvGO7W++c86cvzGpdXoEj9t4Hr9FyD5eX8WzTu",
    "bHK/m4tnLO7++Rj/PxzzcJCWUEYxCBHY3YFfE7hE36VNFEE/9D0AQegZbcGiZFR4xkeSwTI1AgQ",
    "pwglcp48WqWWM7ERduK0DHrL2MWxkEsLY8e4IQ0OhV89ne8qTV9ZGwyBaFpA0QmVtKO4zan4+1W",
    "UGbaiCG80DbxtpUGE9jUqap7lhuWcmhdQdgR2lC0gt6hb2CogYa58jOy01cHC7RMUs6oKG/rmOo",
    "AUvQOA2dphL+n1qD1SvIi35AJaqRilLcS3oipKovtc5Szh27Nve1sEtOEoR2PmRg76yqbgED90U",
    "9K2GrUkBNQdAynwo83dNq1rrIFXvplSaxhCTym6iREP9AQ+cUgOrAOKC4tDHAaLywIOuTQ0QPFJ",
    "rhGvnmj40KpUt6wydyTdCVsxtua4KrqirztUDQo59oPO5BpFybAM/4mNbQCds7vAdaaRQOJ3uEi",
    "1zP6rWCXFnJsQ4qIlffKSQGVFYkvMOGXgLPEhQFEaOal6MuJdsWR1UYmDQz9Zrdbkm8d2xEG1Ii",
    "GUDpfK8o0oMCZX3nyRky7QEI0WslkWpaeYR6DlaBEj6xoTqW6QBv7FobntnKR4IeGaAxNMJAluR",
    "Z692PKbUmZE41Z2bnHmcYs68eLWBc/lcAhDWOIXA1kHHqYZ3GCskusXfk8QW0nzMyaoEPF0rKRZ",
    "DGhY/FzVhrMUjgTF0JORVvJJMi7mC1+BYBZgyqBpewBllI1a6Pw5aRWcDnIsrtvw+DsTA2nQ+cb",
    "n4HAauh0ddWbhhhVLYHtJgp0HWzAnmA7IjTTBlvAWSuLgWjeB5PnffDehj74YKUPPsjP8P7ReTT",
    "DbpSF+pyzoZvncGWeWyX66UUfvg1H1nBkiVtc313B1zbwkpVrke9G/a/v1wt8dfyr1cianV4r8O",
    "wVcPu5nX7/4adnH3777PunT4Nfvht+884u/toafy373+F+rPvtV27n47uLXmmZmSdrycu9+/kOP",
    "3iz4AdurJ+0usOH3eRyFvXGvcOg33z4NZ+0s/kOdshbL8i7uH/P9WcYuFkeUGEnyvc9bkztvB93",
    "83+0Iu/+DnvcWPEnQn779Hr4N47L2Ov1gr3cGMsyeyQ5xx2TClKFganX/Lm6XPeOr4ef8/d36HW",
    "noNedrI8/py5bw3kxM6zHa1X/98W9LHz/48qvQ5m6Uq+Iq8pH/mHcdfXzrZcv+/uHW/IZKbx/8A",
    "LrsS2P+vRNL5pevxK/vubtfPzJcq/eiBmPNuwW8sfY0I82Pf2P+PcfnvZb9HEtZ7/8A+lX758Iy",
    "me4PZhvv/LbfeW+zS0fKaB68x7s36gny+/4O/qVW4X4duMpE5Gc6vfuH31wdJ369CcimRAQ",
    ""
  };

  static char newstr [1497] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c12_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c12_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3972510707U));
  ssSetChecksum1(S,(2800521271U));
  ssSetChecksum2(S,(3478372287U));
  ssSetChecksum3(S,(663577235U));
}

static void mdlRTW_c12_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c12_dynamics_lib(SimStruct *S)
{
  SFc12_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc12_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc12_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc12_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc12_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c12_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c12_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c12_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c12_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c12_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c12_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c12_dynamics_lib;
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

  mdl_setup_runtime_resources_c12_dynamics_lib(chartInstance);
}

void c12_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c12_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
