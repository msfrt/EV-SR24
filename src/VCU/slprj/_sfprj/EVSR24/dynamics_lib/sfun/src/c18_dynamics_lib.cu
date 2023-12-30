/* Include files */

#include "dynamics_lib_sfun.h"
#include "c18_dynamics_lib.h"
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
static void initialize_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance);
static void enable_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void c18_do_animation_call_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_st);
static void initSimStructsc18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance);
static real32_T c18_eML_blk_kernel(SFc18_dynamics_libInstanceStruct
  *chartInstance, real_T c18_b_suspendedMass, real_T c18_b_MM5_ay, real_T
  c18_b_deltaZ, real32_T c18_b_antiRollRearAxleAndTire, real32_T
  c18_b_antiRollTotal, real_T c18_b_rearTrack);
static real32_T c18_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier);
static real32_T c18_b_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static uint8_T c18_c_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier);
static uint8_T c18_d_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void init_dsm_address_info(SFc18_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc18_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c18_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c18_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c18_errCode;
  c18_errCode = cudaGetLastError();
  if (c18_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c18_errCode), (char_T *)
                       cudaGetErrorName(c18_errCode), (char_T *)
                       cudaGetErrorString(c18_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c18_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c18_JITStateAnimation,
                        chartInstance->c18_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c18_JITTransitionAnimation[0] = 0U;
  *chartInstance->c18_rearElWT = c18_eML_blk_kernel(chartInstance,
    *chartInstance->c18_suspendedMass, *chartInstance->c18_MM5_ay,
    *chartInstance->c18_deltaZ, *chartInstance->c18_antiRollRearAxleAndTire,
    *chartInstance->c18_antiRollTotal, *chartInstance->c18_rearTrack);
  c18_do_animation_call_c18_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c18_do_animation_call_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c18_b_y = NULL;
  const mxArray *c18_c_y = NULL;
  const mxArray *c18_st;
  const mxArray *c18_y = NULL;
  c18_st = NULL;
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellmatrix(2, 1), false);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", chartInstance->c18_rearElWT, 1, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y",
    &chartInstance->c18_is_active_c18_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c18_y, 1, c18_c_y);
  sf_mex_assign(&c18_st, c18_y, false);
  return c18_st;
}

static void set_sim_state_c18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_u;
  c18_u = sf_mex_dup(c18_st);
  *chartInstance->c18_rearElWT = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 0)), "rearElWT");
  chartInstance->c18_is_active_c18_dynamics_lib = c18_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 1)),
     "is_active_c18_dynamics_lib");
  sf_mex_destroy(&c18_u);
  sf_mex_destroy(&c18_st);
}

static void initSimStructsc18_dynamics_lib(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc18_dynamics_lib
  (SFc18_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c18_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  sf_mex_assign(&c18_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c18_nameCaptureInfo;
}

static real32_T c18_eML_blk_kernel(SFc18_dynamics_libInstanceStruct
  *chartInstance, real_T c18_b_suspendedMass, real_T c18_b_MM5_ay, real_T
  c18_b_deltaZ, real32_T c18_b_antiRollRearAxleAndTire, real32_T
  c18_b_antiRollTotal, real_T c18_b_rearTrack)
{
  return static_cast<real32_T>(c18_b_suspendedMass * c18_b_MM5_ay * c18_b_deltaZ)
    * (c18_b_antiRollRearAxleAndTire / c18_b_antiRollTotal) /
    static_cast<real32_T>(c18_b_rearTrack);
}

static real32_T c18_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier)
{
  emlrtMsgIdentifier c18_thisId;
  real32_T c18_y;
  c18_thisId.fIdentifier = const_cast<const char_T *>(c18_identifier);
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nullptr),
    &c18_thisId);
  sf_mex_destroy(&c18_nullptr);
  return c18_y;
}

static real32_T c18_b_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  real32_T c18_f;
  real32_T c18_y;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_f, 0, 1, 0U, 0, 0U, 0);
  c18_y = c18_f;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static uint8_T c18_c_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier)
{
  emlrtMsgIdentifier c18_thisId;
  uint8_T c18_y;
  c18_thisId.fIdentifier = const_cast<const char_T *>(c18_identifier);
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nullptr),
    &c18_thisId);
  sf_mex_destroy(&c18_nullptr);
  return c18_y;
}

static uint8_T c18_d_emlrt_marshallIn(SFc18_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  uint8_T c18_b_u;
  uint8_T c18_y;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_b_u, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_b_u;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void init_dsm_address_info(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc18_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c18_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c18_rearElWT = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_suspendedMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c18_MM5_ay = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_deltaZ = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c18_antiRollRearAxleAndTire = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c18_antiRollTotal = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c18_rearTrack = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c18_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3878572157U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(325660021U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2063972600U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1311154427U);
}

mxArray *sf_c18_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c18_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c18_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c18_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0izig62fBop8DSb8AlF+UmljkmhMewgcVp8wdCg6U6Y"
    "fYH0DAH1Jo/gDxM4vjE5NLMstS45MNLeJTKoHxk5lcHJ+TmYQwFwQAK5sblw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sxh5L5hbwm5Sj8oFJtl3WXE";
}

static void sf_opaque_initialize_c18_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_dynamics_lib(void *chartInstanceVar)
{
  enable_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c18_dynamics_lib(void *chartInstanceVar)
{
  disable_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c18_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c18_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c18_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c18_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c18_dynamics_lib
      ((SFc18_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc18_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc18_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c18_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc18_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c18_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc18_dynamics_lib((SFc18_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c18_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWFtvG0UUHptgpahEEUICVQj6yAtSL4qUBwRJfaGuEmKxToP6Eo13j71DZme2c/EF9YV/0Z/",
    "AI8/8An4CP4NHHjmzXrtm7do7tgQtYqXNZnbnm3PON+c2JpX2OcHrAO/jjwmp4XMf7yqZXu/m48",
    "rCPX2/R77Mx7+9R0goIxiACGy/z8bE7xI26VBFE038L0ET+A605NYwKdqiL8tjmeiDAhHiAqlUx",
    "kuuZonlTNy0rAidZH0VszAOYml59AgXpNGF4JPXyU2t6aDEBlMQmhZAZGIl7SBucTpYz4Iyo3oM",
    "4Y22iTdXGkxgU2eqPrfcsJRDcwxhW2hDkQW9wd7AUAN1M/Yj2dmrgxlaJilnVJTnOqY6gBS9w8B",
    "lGuHfC2uQvZJyUV6PCWqkYpQ3E16PqSqL7XDU8xzdmnvzbBLTgJ4dDJgYOHaVTUCg/egnJbjq1+",
    "UQFB3AhfCTGzrrmuNsg+d+WRJrWAJPqToN0Q80RH4xiA6sA4pbC11cxgsLgvY4tHVXsSHukW/ea",
    "LtQ2ipv2GTqSXorbCa3OcRd1VvKbYWiTjnXftiuTM9gCDyT36CGboGdyvcAa82irkTvcJHrGf1W",
    "sOcWcmxdioiV98phAZUViW8x4ZeAs8SFAURI81z1+UKb4shqI5M6hn7j7KykvGVsWxhQfRpC6Xy",
    "tKNOACmd+5Sk3YtoFEqKRJZNZWXqFaQxuBSW6b0VjJNUNcuxbGF5x5SLBDw3RABpgIEtyTfTup5",
    "TbkjonGrOyc49LjVnWTy5iXfxsBQ5pGEPkaiDjcI55Fhcou8Xalc9TtHbIzKQBOlQsLRtJFhM6F",
    "j/HUneSwqW4EXIkWkomQd7FrPErAMwaVAksZY+wlKpJC5Uvp7WC590su/s2DI5najjtOd/4BgRW",
    "Q2erq940xKhqCmw3UaFdsAH7EdsRoZk22AJOmlkMRFkffEJe9cF7K/rgw4U++DC/w/vH19EEu1E",
    "W6mvOem6dewvr3C7RT8/68HU4soQjc9zs+fkCvrJCLll4Zn3/wvxb1b/PrxXkVWfvsoss8fV+Qd",
    "5eAV/L+Xrx8uef+Isn77z89Uo++/SDx0W7i3pUlvSoZP873C9Vv3PLQT7+ZNYzzTP0cCmJubmPN",
    "/jDRwV/cGM9jo/OjuLeKDkKfjiWrSeGP7z6vjndpw36Vgv6zt7fdX0aBnCWD1TYjvLzjxtTO+3L",
    "i/tZ28DHrQW/IuSPr3fDf3hSxK/ia7/A136WK6hq8qvuwWv80k+Puye74afyOxvsuFOw407Wv19",
    "Tl6XhupgRluN0W3/3xb0t8v7Hld+HMvWktiVuW3nkH8btap9vnXzb599bk89IYf7hG2zHujzq0y",
    "+9aXb9Tvz6mM/y8VfzM3o9ZjxacUrIP2Mj31/19T/i33968jfr25qOv/yH0WcPTwXlEzwWTI9d+",
    "euOcr/JzT9ht6JXn73+jXoye246t9wuxLcbj5iI5Eh/cf/B0YNd6tNfub4HXA==",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c18_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c18_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2175309948U));
  ssSetChecksum1(S,(55213164U));
  ssSetChecksum2(S,(1868020376U));
  ssSetChecksum3(S,(1209146970U));
}

static void mdlRTW_c18_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c18_dynamics_lib(SimStruct *S)
{
  SFc18_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc18_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc18_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc18_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc18_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c18_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c18_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c18_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c18_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c18_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c18_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c18_dynamics_lib;
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

  mdl_setup_runtime_resources_c18_dynamics_lib(chartInstance);
}

void c18_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c18_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
