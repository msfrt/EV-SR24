/* Include files */

#include "dynamics_lib_sfun.h"
#include "c5_dynamics_lib.h"
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
static void initialize_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance);
static void enable_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void c5_do_animation_call_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_st);
static void initSimStructsc5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance);
static real32_T c5_eML_blk_kernel(SFc5_dynamics_libInstanceStruct *chartInstance,
  real_T c5_b_frontTrack, real32_T c5_b_frontTireStiffness);
static real32_T c5_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_nullptr, const char_T *c5_identifier);
static real32_T c5_b_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint8_T c5_c_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_nullptr, const char_T *c5_identifier);
static uint8_T c5_d_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void init_dsm_address_info(SFc5_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc5_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c5_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c5_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c5_errCode;
  c5_errCode = cudaGetLastError();
  if (c5_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c5_errCode), (char_T *)
                       cudaGetErrorName(c5_errCode), (char_T *)
                       cudaGetErrorString(c5_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c5_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c5_JITStateAnimation,
                        chartInstance->c5_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  *chartInstance->c5_antiRollFrontTires = c5_eML_blk_kernel(chartInstance,
    *chartInstance->c5_frontTrack, *chartInstance->c5_frontTireStiffness);
  c5_do_animation_call_c5_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c5_do_animation_call_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(2, 1), false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", chartInstance->c5_antiRollFrontTires,
    1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_antiRollFrontTires = c5_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 0)), "antiRollFrontTires");
  chartInstance->c5_is_active_c5_dynamics_lib = c5_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
     "is_active_c5_dynamics_lib");
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void initSimStructsc5_dynamics_lib(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc5_dynamics_lib
  (SFc5_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c5_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static real32_T c5_eML_blk_kernel(SFc5_dynamics_libInstanceStruct *chartInstance,
  real_T c5_b_frontTrack, real32_T c5_b_frontTireStiffness)
{
  real_T c5_a;
  c5_a = c5_b_frontTrack / 1000.0;
  return static_cast<real32_T>(c5_a * c5_a * 1.5574077246549023) *
    c5_b_frontTireStiffness * 1000.0F / 2.0F;
}

static real32_T c5_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_nullptr, const char_T *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  real32_T c5_y;
  c5_thisId.fIdentifier = const_cast<const char_T *>(c5_identifier);
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nullptr), &c5_thisId);
  sf_mex_destroy(&c5_nullptr);
  return c5_y;
}

static real32_T c5_b_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real32_T c5_f;
  real32_T c5_y;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_f, 0, 1, 0U, 0, 0U, 0);
  c5_y = c5_f;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint8_T c5_c_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_nullptr, const char_T *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_y;
  c5_thisId.fIdentifier = const_cast<const char_T *>(c5_identifier);
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nullptr), &c5_thisId);
  sf_mex_destroy(&c5_nullptr);
  return c5_y;
}

static uint8_T c5_d_emlrt_marshallIn(SFc5_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_b_u;
  uint8_T c5_y;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_b_u;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void init_dsm_address_info(SFc5_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc5_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_frontTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_antiRollFrontTires = (real32_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c5_frontTireStiffness = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3107291137U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4055247592U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3894949891U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3894335377U);
}

mxArray *sf_c5_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c5_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c5_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Ash6ReA8hPzSjKD8nNy3Iry80"
    "pCMotSiyHyfAwImnx3KThQph9ifwABf0mi+QvEzyyOT0wuySxLjU82jU+pBEZXZnJxfE5mEgOq/"
    "wCB7R/k"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sKWXgFHw0v60WmuNXaku1L";
}

static void sf_opaque_initialize_c5_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_dynamics_lib(void *chartInstanceVar)
{
  enable_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_dynamics_lib(void *chartInstanceVar)
{
  disable_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c5_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_dynamics_lib
      ((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc5_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc5_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc5_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c5_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_dynamics_lib((SFc5_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc5_dynamics_lib((SFc5_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWM2P20QUn0TLiqJSVggBlZDoEQ5I26IiDgh2mw8asR9Rk92tuKwm9os9ynjszkc++A/4O7h",
    "x5w4XxJ/AjQs3LpwQR97YThqckHgcCVpUrxzv2P7N770372tMap1TgsctPI/eJmQfry/jWSfZ8V",
    "I+ri2d2f098kk+/ukVQrzYhwBEzwyHbErcDmGiLpU0UsT9EDSCR6BibjSLRUcM4/JYJoYgQXg4Q",
    "RJL7cSrWGQ4E6O2EZ5lVlch88JeGBvuP8AJqX8u+OyfeBOju8jYZBI83QbwdShjE4RtToPNVpB6",
    "0gjBGykTOdtKge6ZxKqqTg3XLOHQmoLXEUpTtILaom9PUw0NPXUzstVX9eboOEo4o6K8rUOqepC",
    "gd2i4SHz8PTcarVeSF/kGTFAdS0Z5K+KNkMqy2C5HOU/RrbmznXWkmzAwQcBEYK0rTQQC9Uc/KW",
    "GrYSMeg6QBnAs3Xs9q15qmC7zwy5JYzSK4pPLYQz9Q4LvFIDqw6lFcWujjNE5YEHTAoaP6ko1xj",
    "VzzRseGUqW8YaLMk1QlbMrbGuOqqoq8bU80KOfKDduPkxMYA0/5m1TTCtiM3wGsFPP7MXqHjVzH",
    "6DeCPTGQYxux8Fl5rxwXUGmROMOEXwLOIhsG4KOZF6IvJtoWR0bpOGpg6DdPTkryrWI7QoMcUg9",
    "K52tJmQIUOPUrR16fKRtIiEYr6VTL0jNkMVgJStTQiOYkliO0sWtheGorGwluaPADaIKGNMm10L",
    "svKTclZY4UZmXrHhcKs6wbL2Jt/FQCe9QLwbc1kHE4xTyLE5RdYmXL5zFqO2Z61gTlSZaUjSSDC",
    "R2Ln7VSf5bAhRiJeCLaMo56eRezwa8AMGtQKbCUPcBSKmdtFL6c1BKe9NPs7towWDtTzenA+sbn",
    "ILAaWl1t9aYeRlVLYLuJAu2C7bGvsB0RiimNLeCslcaAn/XB5GkfvLemD35tqQ8+yMfe/Wt/hs0",
    "o89Q1Z4N0nsOleW6W6KfnffgmHFnBkQVufn1vCV9bw0uWrkW+G/W/v18v8NXxr1YjK3Z6tcCzV8",
    "Dt57b67fL9H85+mc6+Ib/++PUf3363jb+2wl9L/7e47+tu+5Vb+fidea+0yMzjleRl3324xQ/eL",
    "PiBHasvrh4H7YeTw/FHh1eROXtMR+buSTbfwRZ56wV55/fv2P4MAzfNA9Lr+Pm+x46pyfpxO//H",
    "S/Lub7HHjSV/IuT3z3bDv3FUxl6vF+xlx1iW2aOYc8xGQvdxP6RW/bm6XHeOdsNn/N0tet0u6HU",
    "77eOvqc3WcF3MDKv6VfV/V9zzwvcCV34dytSVekVcVT7yL+N21c+1Xj7v7x9uyGek8P7BM6zHpj",
    "zq0jc9a3r9TNz6mnfz8aeLvXojZNxfs1vIH2NDP1z39H/i33862u+tfNyy9ss/kH754bGgfIbbg",
    "2z7ld/uSvttbvFIAlXr92D/RT1ZfMff0q/cLMS3HU+Y8OOJ+uDuvfv3dqlPfwHiOA4g",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c5_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3240711915U));
  ssSetChecksum1(S,(2037964622U));
  ssSetChecksum2(S,(3336831139U));
  ssSetChecksum3(S,(3047880329U));
}

static void mdlRTW_c5_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_dynamics_lib(SimStruct *S)
{
  SFc5_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc5_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc5_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc5_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c5_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c5_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c5_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c5_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c5_dynamics_lib;
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

  mdl_setup_runtime_resources_c5_dynamics_lib(chartInstance);
}

void c5_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
