/* Include files */

#include "dynamics_lib_sfun.h"
#include "c1_dynamics_lib.h"
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
static void initialize_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_start_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance);
static void enable_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void c1_do_animation_call_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance);
static real_T c1_eML_blk_kernel(SFc1_dynamics_libInstanceStruct *chartInstance,
  real_T c1_b_wheelBase, real_T c1_b_suspendedMassWeightDistribution, real_T
  c1_b_suspendedMassCGCoordinatesZ, real_T c1_b_frontRollCenterHeight, real_T
  c1_b_rearRollCenterHeight);
static real_T c1_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c1_nullptr, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_c_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static uint8_T c1_d_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void init_dsm_address_info(SFc1_dynamics_libInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c1_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c1_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void mdl_start_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c1_errCode;
  c1_errCode = cudaGetLastError();
  if (c1_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c1_errCode), (char_T *)
                       cudaGetErrorName(c1_errCode), (char_T *)
                       cudaGetErrorString(c1_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c1_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c1_JITStateAnimation,
                        chartInstance->c1_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  *chartInstance->c1_deltaZ = c1_eML_blk_kernel(chartInstance,
    *chartInstance->c1_wheelBase,
    *chartInstance->c1_suspendedMassWeightDistribution,
    *chartInstance->c1_suspendedMassCGCoordinatesZ,
    *chartInstance->c1_frontRollCenterHeight,
    *chartInstance->c1_rearRollCenterHeight);
  c1_do_animation_call_c1_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c1_do_animation_call_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(2, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", chartInstance->c1_deltaZ, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_deltaZ = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 0)), "deltaZ");
  chartInstance->c1_is_active_c1_dynamics_lib = c1_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
     "is_active_c1_dynamics_lib");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_dynamics_lib(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc1_dynamics_lib
  (SFc1_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c1_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static real_T c1_eML_blk_kernel(SFc1_dynamics_libInstanceStruct *chartInstance,
  real_T c1_b_wheelBase, real_T c1_b_suspendedMassWeightDistribution, real_T
  c1_b_suspendedMassCGCoordinatesZ, real_T c1_b_frontRollCenterHeight, real_T
  c1_b_rearRollCenterHeight)
{
  return c1_b_suspendedMassCGCoordinatesZ - ((c1_b_rearRollCenterHeight -
    c1_b_frontRollCenterHeight) / c1_b_wheelBase * ((100.0 -
    c1_b_suspendedMassWeightDistribution) / 100.0 * c1_b_wheelBase) +
    c1_b_frontRollCenterHeight);
}

static real_T c1_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct *chartInstance,
  const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_d;
  real_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_c_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint8_T c1_d_emlrt_marshallIn(SFc1_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void init_dsm_address_info(SFc1_dynamics_libInstanceStruct *chartInstance)
{
}

static void init_simulink_io_address(SFc1_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_wheelBase = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_deltaZ = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_suspendedMassWeightDistribution = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_suspendedMassCGCoordinatesZ = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c1_frontRollCenterHeight = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c1_rearRollCenterHeight = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(114917123U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(904154887U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1546643183U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4111119175U);
}

mxArray *sf_c1_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c1_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0izig62fBop8NSb8AlJ+SmlOSGAUNH2g4ke8OBQfK9E"
    "PsDyDgD0k0f4D4mcXxicklmWWp8cmG8SmVwOjJTC6Oz8lMQjIXBACSpRq3"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sfSTahroaTAfMgdzbanaRZD";
}

static void sf_opaque_initialize_c1_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_dynamics_lib(void *chartInstanceVar)
{
  enable_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_dynamics_lib(void *chartInstanceVar)
{
  disable_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_dynamics_lib(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_dynamics_lib
      ((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc1_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc1_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_dynamics_lib((SFc1_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_dynamics_lib((SFc1_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE2P20QYnkS7EUWl9IBUKiHRIxektoDEAcFu8wGRNt2wzhZphbSa2K/t0Y7H7nwkm/4Dzvw",
    "GTlw48wu4cOdnwA0JDrzjOGnqhMTjSNAiLDnW2PPM+zHvxzMhjf6A4HUL74/fJqSFz9fwbpL5dV",
    "iMGyv3/P0B+aQY//Q6IX4aQATCM2HIronbJUwypJImirhfgiZwBirlRrNU9EWYVscyEYIE4eMCW",
    "Sq1k1zFEsOZuOoZ4VvJ6quY+bEXp4YHj3BBGpwKPvs7uZnRQ5TYYRJ83QMIdCxTE8U9TqPtXpB6",
    "2o7Bv1ImcfaVAu2ZzJqqBoZrlnHoXoPfF0pT9ILaYa+nqYa2vnZzsrVXeQt0mmScUVHd1zFVHmQ",
    "YHRrOswB/T41G71WUi/LGTFCdSkZ5N+HtmMqq2CFHPQcY1tzZzzrRHRibKGIist6VJgGB9mOcVP",
    "BV2E4nIGkEp8JNrm+t617nG7yMy4pYzRJ4QuWxj3GgIHDLQQxg5VHcWhjhMk5YEHTMoa9Gkk1wj",
    "1zrRt+mUq26YZJ5JKla2Fxud4K7qmrK7fmiTTlXbthRmp3ABHguv0M1rYGdy3cAK8WCUYrRYTPX",
    "MfuNYE8NFNh2KgJWPSonJVTeJB5jwa8AZ4lNAwjQzUvVlwvtyiOjdJq0MfU7JycV5a1j+0KDDKk",
    "Pleu1pEwBKpzHlaPcgCmbSIhGL+ncysorzHOwFpSo0IjONJVX6GPXxvDcVzYT3NAQRNABDXmR62",
    "J0P6HcVNQ5UViVbXicK6yybnIRa/OnFtinfgyB7YGMwwDrLC5QdYuVbZ/HaO2E6VkHlC9ZVjWTD",
    "BZ0bH7WS6NZBufiSqRT0ZNp4hUsZktcAWDVoFJgK3uErVTOeqh8Na0lPB3l1d2VMFg/U83p2MbG",
    "5yCwG1pbbfemPmZVVyDdRIX2wXrsGdIRoZjSSAFn3TwHgpwHH5HnPPhgAw9+c4UH3y7G/oPLYIZ",
    "klPnqkrNxvs79lXVuVuDTCx6+DUfWcGSJWzzfW8E3NsglK8+c96/Mv9F8cf5hSV5z8c5eBX7VX2",
    "+U5B2U8K3CZz9/8/WfZ9+rD3/87jfz+I9vvyzbXdajsaZHgyzk/9B0O7fcKsbvLDjTskJP1oqYn",
    "fvFjni4U4qHO3ld9EYUST0dHYeDKHg2poKeXXTm+7RD32ZJ38X7e5anYQLn9UD6/aA4/9gxNXNe",
    "Xt7P1g5/3FiJK0J+/Ww//FtHZfwmf7VK/mrldYZrevFiHNfX497Rfvi5/OEOO+6W7Lib8/dLaqs",
    "0XJYrwnqe1o13V9yrIu9/XPV9qNJPDmvi6soj/zBuX/tc++SrPv/+lnpGSvNvv8R2bKujLnzpZb",
    "PrF+LGY94txp8uz+jtmPFgwymh+IxEPtz09T8S3787+m/B27rWf8UfoxcfHAvKZ3gsmB+7itdDa",
    "f+TW36SQNXms9e/0U/IBh6+ia/cLOW3HU+ZCNKpev/Bw48e7tOf/gIlNgnY",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c1_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4233923021U));
  ssSetChecksum1(S,(879995730U));
  ssSetChecksum2(S,(1978770874U));
  ssSetChecksum3(S,(1368652622U));
}

static void mdlRTW_c1_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_dynamics_lib(SimStruct *S)
{
  SFc1_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc1_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc1_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc1_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_dynamics_lib;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_dynamics_lib;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_dynamics_lib;
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

  mdl_setup_runtime_resources_c1_dynamics_lib(chartInstance);
}

void c1_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
