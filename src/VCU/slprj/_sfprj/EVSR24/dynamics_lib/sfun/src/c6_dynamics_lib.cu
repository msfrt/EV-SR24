/* Include files */

#include "dynamics_lib_sfun.h"
#include "c6_dynamics_lib.h"
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
static void initialize_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance);
static void enable_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void c6_do_animation_call_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_st);
static void initSimStructsc6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance);
static real32_T c6_eML_blk_kernel(SFc6_dynamics_libInstanceStruct *chartInstance,
  real_T c6_b_rearTrack, real32_T c6_b_rearTireStiffness);
static real32_T c6_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_nullptr, const char_T *c6_identifier);
static real32_T c6_b_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint8_T c6_c_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_nullptr, const char_T *c6_identifier);
static uint8_T c6_d_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void init_dsm_address_info(SFc6_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc6_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c6_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c6_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c6_errCode;
  c6_errCode = cudaGetLastError();
  if (c6_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c6_errCode), (char_T *)
                       cudaGetErrorName(c6_errCode), (char_T *)
                       cudaGetErrorString(c6_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c6_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c6_JITStateAnimation,
                        chartInstance->c6_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  *chartInstance->c6_antiRollRearTires = c6_eML_blk_kernel(chartInstance,
    *chartInstance->c6_rearTrack, *chartInstance->c6_rearTireStiffness);
  c6_do_animation_call_c6_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c6_do_animation_call_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(2, 1), false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", chartInstance->c6_antiRollRearTires,
    1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_antiRollRearTires = c6_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 0)), "antiRollRearTires");
  chartInstance->c6_is_active_c6_dynamics_lib = c6_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 1)),
     "is_active_c6_dynamics_lib");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void initSimStructsc6_dynamics_lib(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc6_dynamics_lib
  (SFc6_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c6_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static real32_T c6_eML_blk_kernel(SFc6_dynamics_libInstanceStruct *chartInstance,
  real_T c6_b_rearTrack, real32_T c6_b_rearTireStiffness)
{
  real_T c6_a;
  c6_a = c6_b_rearTrack / 1000.0;
  return static_cast<real32_T>(c6_a * c6_a * 1.5574077246549023) *
    c6_b_rearTireStiffness * 1000.0F / 2.0F;
}

static real32_T c6_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_nullptr, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  real32_T c6_y;
  c6_thisId.fIdentifier = const_cast<const char_T *>(c6_identifier);
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_nullptr), &c6_thisId);
  sf_mex_destroy(&c6_nullptr);
  return c6_y;
}

static real32_T c6_b_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real32_T c6_f;
  real32_T c6_y;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_f, 0, 1, 0U, 0, 0U, 0);
  c6_y = c6_f;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_nullptr, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  c6_thisId.fIdentifier = const_cast<const char_T *>(c6_identifier);
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_nullptr), &c6_thisId);
  sf_mex_destroy(&c6_nullptr);
  return c6_y;
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_b_u;
  uint8_T c6_y;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void init_dsm_address_info(SFc6_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc6_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_antiRollRearTires = (real32_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c6_rearTireStiffness = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2669533888U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3588063520U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3314497866U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1599914973U);
}

mxArray *sf_c6_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c6_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Asi6ReA8hPzSjKD8nNyglITi0"
    "Iyi1KLofJ8SDT57lJwoEw/xP4AAv6SRPMXiJ9ZHJ+YXJJZlhqfbBafUgmMrszk4viczCQ0/wEAC"
    "N4fZA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s4Y8RfVSyjyHTTXuB2WgM8G";
}

static void sf_opaque_initialize_c6_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_dynamics_lib(void *chartInstanceVar)
{
  enable_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_dynamics_lib(void *chartInstanceVar)
{
  disable_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c6_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_dynamics_lib
      ((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc6_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc6_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc6_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c6_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_dynamics_lib((SFc6_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc6_dynamics_lib((SFc6_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c6_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWM1v40QUn0SlYtHuUiSkZQUSe+QA0lI+1AOCtvnYRmpoVKdd4FJN7Od46HjsnY+k4Y/hwo0",
    "DEv8BR7hw5s/ghODGG8fJBickHkeCXYQrxx3bv/m99+Z9jUmt0yV43MXz8DVCdvH6Ip51Mj1eyM",
    "e1hXN6f4d8lI9/fIkQPwlgCMIzYchuiNshTNyjksaKuB+CxnAOKuFGs0R0RJiUxzIRggTh4wRpI",
    "rUTr2Kx4Uxct43wLbN6HDE/8qLE8OAYJ6TBmeCTv+NNje4hY5NJ8HUbINCRTMwwanM6XG8FqceN",
    "CPxrZWJnWynQnkmtqqpruGYph9YN+B2hNEUrqA36eppqaOgbNyNbfZU3QydxyhkV5W0dUeVBit6",
    "h4SIN8PfMaLReSV7kGzBBdSIZ5a2YNyIqy2J7HOXsoltzZzvrWDdhYIZDJobWutLEIFB/9JMStg",
    "obyQgkHcKZcOP1rXatm2yB535ZEqtZDJdUHvnoBwoCtxhEB1YexaWFPk7jhAVBBxw6qi/ZCNfIN",
    "W90bChVyhsmnnqSqoTNeFsjXFVVkbftiwblXLlh+0l6CiPgGX+TaloBO+V3ACvFgn6C3mEj1zH6",
    "jWBPDOTYRiICVt4rRwVUViQ+xYRfAs5iGwYQoJnnos8n2hRHRukkbmDoN09PS/ItYztCgwypD6X",
    "ztaRMAQqc+ZUjb8CUDSREo5V0pmXpGaYxWAlKVGhEc5zIa7Sxa2F4aisbCW5oCIbQBA1Zkmuhd1",
    "9SbkrKHCvMytY9LhRmWTdexNr4qQT2qR9BYGsg49DFPIsTlF1iZcvnEWo7YnrSBOVLlpaNJIMJH",
    "YuftVJ/ksKFuBbJWLRlEnt5F7PGrwAwa1ApsJQdYymVkzYKX05qCU/6WXZ3bRisnanmdGB94xEI",
    "rIZWV1u9qY9R1RLYbqJA22A99hW2I0IxpbEFnLSyGAimfTB52gfvrOiDX17og/fysf/hVTDBZpT",
    "56oqzQTbPw4V5bpfop2d9+DocWcKROW52fWsBX1vBSxauRb5b9b++Xy/w1fGvViNLdrpT4Nkp4H",
    "ZzW30Tf/f96z/9do/9fPLtH3fe/noTf22Jv5b9b3E/1N32K3fz8RuzXmmemUdLycu+e7LBD+4V/",
    "MCO1fufH5yHl97ky8lJv/+ZOd5/POwePMrm29sgb70g7+z+A9ufYeBmeUD6nSDf99gxNdN+3M5/",
    "sCDv7gZ73FrwJ0J+/WQ7/KuHZez1SsFedoxlmZ0nnOOOSfZxO6RW+HN1uR4cboef8vc26HW/oNf",
    "9rI+/ojZbw1UxMyzrV9X/XXHPC9//uPLrUKau1CviqvKRfxi3rX6u9fJ5f//hmnxGCu/vPcN6rM",
    "ujLn3Ts6bXL8Str3kzH38836s3IsaDFbuF/DE29OGqp/8R//7d0X6zPq5l7Zd/IP3ivSNB+QS3B",
    "9PtV367J+23ufkjCVSt3oP9G/Vk/h1/Q79yuxDfdjxmIkjG6p139z/Y36Y+/QkJyAy2",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c6_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2980998563U));
  ssSetChecksum1(S,(402049307U));
  ssSetChecksum2(S,(2856898153U));
  ssSetChecksum3(S,(2653687289U));
}

static void mdlRTW_c6_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_dynamics_lib(SimStruct *S)
{
  SFc6_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc6_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc6_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc6_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c6_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_dynamics_lib;
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

  mdl_setup_runtime_resources_c6_dynamics_lib(chartInstance);
}

void c6_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
