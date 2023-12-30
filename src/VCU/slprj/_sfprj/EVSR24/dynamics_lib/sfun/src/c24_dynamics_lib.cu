/* Include files */

#include "dynamics_lib_sfun.h"
#include "c24_dynamics_lib.h"
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
static void initialize_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance);
static void enable_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void c24_do_animation_call_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_st);
static void initSimStructsc24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance);
static real32_T c24_eML_blk_kernel(SFc24_dynamics_libInstanceStruct
  *chartInstance, real_T c24_b_totalMass, real32_T c24_b_totalMassDistribution,
  real_T c24_b_totalDownForce, real32_T c24_b_downForceDistribution, real32_T
  c24_b_totalRearWT, real_T c24_b_gravity);
static real32_T c24_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_nullptr, const char_T *c24_identifier);
static real32_T c24_b_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static uint8_T c24_c_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_nullptr, const char_T *c24_identifier);
static uint8_T c24_d_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void init_dsm_address_info(SFc24_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc24_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c24_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c24_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c24_errCode;
  c24_errCode = cudaGetLastError();
  if (c24_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c24_errCode), (char_T *)
                       cudaGetErrorName(c24_errCode), (char_T *)
                       cudaGetErrorString(c24_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c24_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c24_JITStateAnimation,
                        chartInstance->c24_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c24_JITTransitionAnimation[0] = 0U;
  *chartInstance->c24_dynamicLoadRR = c24_eML_blk_kernel(chartInstance,
    *chartInstance->c24_totalMass, *chartInstance->c24_totalMassDistribution,
    *chartInstance->c24_totalDownForce,
    *chartInstance->c24_downForceDistribution, *chartInstance->c24_totalRearWT, *
    chartInstance->c24_gravity);
  c24_do_animation_call_c24_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c24_do_animation_call_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c24_b_y = NULL;
  const mxArray *c24_c_y = NULL;
  const mxArray *c24_st;
  const mxArray *c24_y = NULL;
  c24_st = NULL;
  c24_st = NULL;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_createcellmatrix(2, 1), false);
  c24_b_y = NULL;
  sf_mex_assign(&c24_b_y, sf_mex_create("y", chartInstance->c24_dynamicLoadRR, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c24_y, 0, c24_b_y);
  c24_c_y = NULL;
  sf_mex_assign(&c24_c_y, sf_mex_create("y",
    &chartInstance->c24_is_active_c24_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c24_y, 1, c24_c_y);
  sf_mex_assign(&c24_st, c24_y, false);
  return c24_st;
}

static void set_sim_state_c24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_st)
{
  const mxArray *c24_u;
  c24_u = sf_mex_dup(c24_st);
  *chartInstance->c24_dynamicLoadRR = c24_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c24_u, 0)), "dynamicLoadRR");
  chartInstance->c24_is_active_c24_dynamics_lib = c24_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c24_u, 1)),
     "is_active_c24_dynamics_lib");
  sf_mex_destroy(&c24_u);
  sf_mex_destroy(&c24_st);
}

static void initSimStructsc24_dynamics_lib(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc24_dynamics_lib
  (SFc24_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c24_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c24_nameCaptureInfo = NULL;
  c24_nameCaptureInfo = NULL;
  sf_mex_assign(&c24_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c24_nameCaptureInfo;
}

static real32_T c24_eML_blk_kernel(SFc24_dynamics_libInstanceStruct
  *chartInstance, real_T c24_b_totalMass, real32_T c24_b_totalMassDistribution,
  real_T c24_b_totalDownForce, real32_T c24_b_downForceDistribution, real32_T
  c24_b_totalRearWT, real_T c24_b_gravity)
{
  return ((static_cast<real32_T>(c24_b_totalMass) * (100.0F -
            c24_b_totalMassDistribution) / 100.0F * 0.5F + static_cast<real32_T>
           (c24_b_totalDownForce) * (100.0F - c24_b_downForceDistribution) /
           100.0F / 2.0F) + c24_b_totalRearWT) * static_cast<real32_T>
    (c24_b_gravity);
}

static real32_T c24_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_nullptr, const char_T *c24_identifier)
{
  emlrtMsgIdentifier c24_thisId;
  real32_T c24_y;
  c24_thisId.fIdentifier = const_cast<const char_T *>(c24_identifier);
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_nullptr),
    &c24_thisId);
  sf_mex_destroy(&c24_nullptr);
  return c24_y;
}

static real32_T c24_b_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  real32_T c24_f;
  real32_T c24_y;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_f, 0, 1, 0U, 0, 0U, 0);
  c24_y = c24_f;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static uint8_T c24_c_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_nullptr, const char_T *c24_identifier)
{
  emlrtMsgIdentifier c24_thisId;
  uint8_T c24_y;
  c24_thisId.fIdentifier = const_cast<const char_T *>(c24_identifier);
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_nullptr),
    &c24_thisId);
  sf_mex_destroy(&c24_nullptr);
  return c24_y;
}

static uint8_T c24_d_emlrt_marshallIn(SFc24_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  uint8_T c24_b_u;
  uint8_T c24_y;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_b_u, 1, 3, 0U, 0, 0U, 0);
  c24_y = c24_b_u;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void init_dsm_address_info(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc24_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c24_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c24_dynamicLoadRR = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c24_totalMass = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c24_totalMassDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c24_totalDownForce = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c24_downForceDistribution = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c24_totalRearWT = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c24_gravity = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c24_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4279468341U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(197420353U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2965155608U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3645350442U);
}

mxArray *sf_c24_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c24_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c24_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c24_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj08yLpF4DyUyqBPslM9slPTAkKgo"
    "YTLLzId4+CA2X6IfYHEPCPFJp/QPzM4vjE5JLMstT4ZCOTeKjviuNzMpMQ5oIAAKkLHbE="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c24_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sj7vP3DMWbyUIuJfHF7tAf";
}

static void sf_opaque_initialize_c24_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c24_dynamics_lib(void *chartInstanceVar)
{
  enable_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c24_dynamics_lib(void *chartInstanceVar)
{
  disable_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c24_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c24_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c24_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c24_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc24_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c24_dynamics_lib
      ((SFc24_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc24_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc24_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c24_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc24_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c24_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c24_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc24_dynamics_lib((SFc24_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c24_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWM2P20QUn6yWqEVttRKooAqJHrkglS1QhBDsNh80aMNGm2wrcVlN7Od42PGMOx/Jhn8BiX+",
    "GS/8ADly5ceHcK0eOvHGcNDgh8TgStAhLXu/Y85v33m/e14TUOl2C1y28j94mpI7Pa3jvkdn1Wj",
    "6uLd2z9/vks3z88+uEBDKEEYi+jSJ2RfwuYZMeVTTRxP8SNIEz0JJbw6ToiEiWxzIRgQIR4AKpV",
    "MZLrmaJ5Uxctq0InGT9JGZB3I+l5eFDXJCGp4JP/05uak0PJTaZgsC0AUITK2lHcZvT0WYWlJk0",
    "YggutU28udJg+jZ1puqu5YalHFpXEHSENhRZ0Fvs7RtqoGGu/Eh29ur+HC2TlDMqynMdU92HFL3",
    "DwHka4t9Ta5C9knJR3pAJaqRilLcS3oipKovtcdSzi27NvXk2iWnC0I5GTIwcu8omINB+9JMSXE",
    "UNOQZFR3Aq/OQGzrrWVbbBC78siTUsgcdUHQfoBxpCvxhEB9Z9ilsLA1zGCwuCDjl09ECxMe6Rb",
    "97ouFCqlDdsMvMkXQmbyW2NcVd1RbntQDQo59oPO5DpCYyBZ/Kb1NAK2Jl8D7DWLBxI9A4XuZ7R",
    "bwV7aiHHNqQIWXmvHBdQWZH4GhN+CThLXBhAiDQvVF8stC2OrDYyaWDoN09OSspbxXaEARXRAEr",
    "na0WZBlQ48ytPuSHTLpAQjSyZzMrSK8xisBKU6MiK5kSqS+TYtzC84MpFgh8awhE0wUCW5Fro3Y",
    "8ptyV1TjRmZece5xqzrJ9cxLr4qQQOaBBD6Gog49DFPIsLlN1i7crnMVo7ZmbaBB0olpaNJIsJH",
    "YufY2kwTeFcXAo5EW0lk37exWzwKwDMGlQJLGUPsZSqaRuVL6e1gqeDLLv7NgyOZ2o4HTrf+BIE",
    "VkNnq6veNMCoaglsN1GhXbB99h22I0IzbbAFnLayGAhnfTB50Qfvr+mDD5b64IP8Dg4/vAin2I2",
    "yQF9wNnTr3Fta50aJfnreh2/CkRUcWeDmz/eW8LU1csnS083/ZGn+9b2/zq8X5O3N32UXWeHrZk",
    "HefgFfz/n69OOf7I+3n6U//PaG/OX758+Ldhf1qK3oUcv+d7hne37nllv5+J15z7TI0OOVJObmP",
    "triD7cL/uDG+tsH4979ZvfJcHresV9Fj9oPzHE0W+/aFn33CvrO3991fRoGcJYPVNAJ8/OPG1M7",
    "68uL+1nfwsf1Jb8i5PcvdsO/eVQmfm4W+HLjPHZOJA3Pzgr+XF2fu0e74Wfye1vsuVOw507Wx19",
    "Ql63hopgZVuO1qt/74l4Vef/jyu9DmbpSr4irKo/8w7hd7fOtl6/6/Hsb8hkpzD94ie3YlEd9+q",
    "aXza5fiV8/824+/nxxVm/EjIdrTgv5Z2zoo3Vf/yP+/Ycnf2/l45bjL/+B9Jv7x4LyKR4PZsev/",
    "HVPud/mFp8UUL3+DPZv1JPF7/hb+pUbhfh24wkToZzo9z84/Ohwl/r0J38cC2I=",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c24_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c24_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1975793210U));
  ssSetChecksum1(S,(1891112627U));
  ssSetChecksum2(S,(1863572878U));
  ssSetChecksum3(S,(3890711505U));
}

static void mdlRTW_c24_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c24_dynamics_lib(SimStruct *S)
{
  SFc24_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc24_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc24_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc24_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc24_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c24_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c24_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c24_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c24_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c24_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c24_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c24_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c24_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c24_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c24_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c24_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c24_dynamics_lib;
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

  mdl_setup_runtime_resources_c24_dynamics_lib(chartInstance);
}

void c24_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c24_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c24_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c24_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c24_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
