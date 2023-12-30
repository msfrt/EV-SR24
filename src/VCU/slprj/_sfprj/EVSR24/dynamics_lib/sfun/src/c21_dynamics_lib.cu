/* Include files */

#include "dynamics_lib_sfun.h"
#include "c21_dynamics_lib.h"
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
static void initialize_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance);
static void enable_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void c21_do_animation_call_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_st);
static void initSimStructsc21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance);
static real32_T c21_eML_blk_kernel(SFc21_dynamics_libInstanceStruct
  *chartInstance, real_T c21_b_totalMass, real32_T c21_b_totalMassDistribution,
  real_T c21_b_totalDownForce, real32_T c21_b_downForceDistribution, real32_T
  c21_b_totalFrontWT, real_T c21_b_gravity);
static real32_T c21_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier);
static real32_T c21_b_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static uint8_T c21_c_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier);
static uint8_T c21_d_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info(SFc21_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc21_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c21_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c21_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c21_errCode;
  c21_errCode = cudaGetLastError();
  if (c21_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c21_errCode), (char_T *)
                       cudaGetErrorName(c21_errCode), (char_T *)
                       cudaGetErrorString(c21_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c21_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c21_JITStateAnimation,
                        chartInstance->c21_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_JITTransitionAnimation[0] = 0U;
  *chartInstance->c21_dynamicLoadFL = c21_eML_blk_kernel(chartInstance,
    *chartInstance->c21_totalMass, *chartInstance->c21_totalMassDistribution,
    *chartInstance->c21_totalDownForce,
    *chartInstance->c21_downForceDistribution, *chartInstance->c21_totalFrontWT,
    *chartInstance->c21_gravity);
  c21_do_animation_call_c21_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c21_do_animation_call_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c21_b_y = NULL;
  const mxArray *c21_c_y = NULL;
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(2, 1), false);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", chartInstance->c21_dynamicLoadFL, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y",
    &chartInstance->c21_is_active_c21_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  c21_u = sf_mex_dup(c21_st);
  *chartInstance->c21_dynamicLoadFL = c21_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c21_u, 0)), "dynamicLoadFL");
  chartInstance->c21_is_active_c21_dynamics_lib = c21_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c21_u, 1)),
     "is_active_c21_dynamics_lib");
  sf_mex_destroy(&c21_u);
  sf_mex_destroy(&c21_st);
}

static void initSimStructsc21_dynamics_lib(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc21_dynamics_lib
  (SFc21_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c21_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c21_nameCaptureInfo;
}

static real32_T c21_eML_blk_kernel(SFc21_dynamics_libInstanceStruct
  *chartInstance, real_T c21_b_totalMass, real32_T c21_b_totalMassDistribution,
  real_T c21_b_totalDownForce, real32_T c21_b_downForceDistribution, real32_T
  c21_b_totalFrontWT, real_T c21_b_gravity)
{
  return ((static_cast<real32_T>(c21_b_totalMass) * c21_b_totalMassDistribution /
           100.0F * 0.5F + static_cast<real32_T>(c21_b_totalDownForce) *
           c21_b_downForceDistribution / 100.0F / 2.0F) - c21_b_totalFrontWT) *
    static_cast<real32_T>(c21_b_gravity);
}

static real32_T c21_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier)
{
  emlrtMsgIdentifier c21_thisId;
  real32_T c21_y;
  c21_thisId.fIdentifier = const_cast<const char_T *>(c21_identifier);
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_nullptr),
    &c21_thisId);
  sf_mex_destroy(&c21_nullptr);
  return c21_y;
}

static real32_T c21_b_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real32_T c21_f;
  real32_T c21_y;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_f, 0, 1, 0U, 0, 0U, 0);
  c21_y = c21_f;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static uint8_T c21_c_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier)
{
  emlrtMsgIdentifier c21_thisId;
  uint8_T c21_y;
  c21_thisId.fIdentifier = const_cast<const char_T *>(c21_identifier);
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_nullptr),
    &c21_thisId);
  sf_mex_destroy(&c21_nullptr);
  return c21_y;
}

static uint8_T c21_d_emlrt_marshallIn(SFc21_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_b_u;
  uint8_T c21_y;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_b_u, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_b_u;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void init_dsm_address_info(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc21_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c21_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c21_dynamicLoadFL = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_totalMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c21_totalMassDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c21_totalDownForce = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_downForceDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c21_totalFrontWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c21_gravity = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c21_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2673803551U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3444221098U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1266948562U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2428351321U);
}

mxArray *sf_c21_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c21_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c21_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c21_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4DyUyqBPslM9slPTHHzgY"
    "YTLLzId4+CA2X6IfYHEPCPFJp/QPzM4vjE5JLMstT4ZCPDeKjviuNzMpMQ5oIAAJgTHZw="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sY4GhcpqgfuFhGlNJtBVvd";
}

static void sf_opaque_initialize_c21_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_dynamics_lib(void *chartInstanceVar)
{
  enable_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c21_dynamics_lib(void *chartInstanceVar)
{
  disable_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c21_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c21_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c21_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c21_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c21_dynamics_lib
      ((SFc21_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc21_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc21_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c21_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc21_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c21_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc21_dynamics_lib((SFc21_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c21_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWM1v40QUn4QS7cLuqgcEaIXEcuOCtFtAAoGgbT5KULqNSFoEl2piP8ejjsfufCQNF/4EpD1",
    "x5MqNI38CF+78GRw58sZ2ssEJiceRYBdhyXXHnt+8937zviak1j0leN3D+/B1Qhr4vIV3nWTXi/",
    "m4tnRn7/fIx/n4l5cI8WIfxiAGJgjYDXG7hIn6VNJIEfdL0Ai+ABVzo1ksuiKIy2OZCECC8HCBJ",
    "JbaSa5ikeFMXHWM8Kxk9WXIvHAQxob7x7gg9c8En/2d3MToPkpsMQme7gD4OpSxGYcdTsebWZB6",
    "2gzBu1ImcuZKgR6YxJqqTg3XLOHQvgGvK5SmyILaYu9AUw1NfeNGsrVXDeboOEo4o6I81yFVA0j",
    "QOzScJz7+PTMa2SspF+WNmKA6lozydsSbIZVlsX2Oep6iW3NnnnWkWzAy4zETY8uuNBEItB/9pA",
    "RXQTOegKRjOBNucj1rXfsm3eCFX5bEahbBBZVHHvqBAt8tBtGB1YDi1sIQl3HCgqAjDl01lGyCe",
    "+SaN7o2lCrlDRNlnqQqYVO57Qnuqqoot+OJJuVcuWGHcdKDCfBUfotqWgGbyXcAK8X8YYzeYSPX",
    "MfqNYNcGcmwzFj4r75WTAiotEo8x4ZeAs8iGAfhI80L1xULb4sgoHUdNDP1Wr1dS3iq2KzTIgHp",
    "QOl9LyhSgwqlfOcr1mbKBhGhkSadWll4hi8FKUKICI1rTWF4hx66F4SlXNhLc0OCPoQUa0iTXRu",
    "++oNyU1DlSmJWte5wrzLJuchFr46cS2KNeCL6tgYzDKeZZXKDsFitbPo/Q2gnTsxYoT7KkbCQZT",
    "OhY/CxLw1kC5+JKxFPRkXE0yLuYDX4FgFmDSoGl7BhLqZx1UPlyWku4HqbZ3bVhsDxTzenI+sYJ",
    "CKyG1lZbvamHUdUW2G6iQrtgB+wbbEeEYkpjCzhrpzHgZ30wedoH763pg/eX+uD9/PYOHl36M+x",
    "GmacuORvZdR4urXOnRD8978M34cgKjixw8+fbS/jaGrlk6Wnnf7A0/3b9r/MbBXn1+bv0Iit83S",
    "3I2yvgGzlfP377/Vs/vPDdRz/9+qF8+cmTZtHuoh61FT1q6f8W93Pd7dxyLx+/Me+ZFhl6spLE7",
    "NzPtvjDqwV/sGP11XsnoZdcjwPTCU/448/18cXEz9a7tUXfekHf+fsHtk/DAE7zgfS6fn7+sWNq",
    "sr68uJ+NLXzcXvIrQn7/dDf8K4dl4udugS87zmOnF1O/0yv4c3V9Hhzuhs/k97fYc79gz/20j7+",
    "kNlvDZTEzrMZrVb93xT0v8v7Hld+HMnWlURFXVR75h3G72udaL5/3+Q835DNSmL//DNuxKY+69E",
    "3Pml2/Ebd+5s18/MnirN4MGffXnBbyz9jQB+u+/kf8+w9H/l7Lx23LX/4D6dfvHgnKZ3g8yI5f+",
    "eu+tL/NLT5JoGr9GezfqCeL3/G39Ct3CvFtx1Mm/Hiq3nl08P7BLvXpT1/lCiI=",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c21_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c21_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(563642281U));
  ssSetChecksum1(S,(999228320U));
  ssSetChecksum2(S,(1916390832U));
  ssSetChecksum3(S,(1133679115U));
}

static void mdlRTW_c21_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c21_dynamics_lib(SimStruct *S)
{
  SFc21_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc21_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc21_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc21_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc21_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c21_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c21_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c21_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c21_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c21_dynamics_lib;
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

  mdl_setup_runtime_resources_c21_dynamics_lib(chartInstance);
}

void c21_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c21_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
