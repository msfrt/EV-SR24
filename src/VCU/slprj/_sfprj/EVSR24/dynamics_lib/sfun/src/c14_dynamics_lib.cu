/* Include files */

#include "dynamics_lib_sfun.h"
#include "c14_dynamics_lib.h"
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
static void initialize_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void initialize_params_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct *
  chartInstance);
static void mdl_start_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_terminate_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance);
static void enable_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void disable_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void sf_gateway_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void ext_mode_exec_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void c14_do_animation_call_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance);
static void set_sim_state_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_st);
static void initSimStructsc14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance);
static real32_T c14_eML_blk_kernel(SFc14_dynamics_libInstanceStruct
  *chartInstance, real_T c14_b_antiRollFrontSprings, real32_T
  c14_b_antiRollFrontARB, real32_T c14_b_antiRollFrontTires);
static real32_T c14_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier);
static real32_T c14_b_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId);
static uint8_T c14_c_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier);
static uint8_T c14_d_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void init_dsm_address_info(SFc14_dynamics_libInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc14_dynamics_libInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  emlrtLicenseCheckR2022a(chartInstance->c14_fEmlrtCtx,
    "EMLRT:runTime:MexFunctionNeedsLicense", "distrib_computing_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  _sfTime_ = sf_get_time(chartInstance->S);
  emlrtInitGPU(chartInstance->c14_fEmlrtCtx);
  cudaGetLastError();
}

static void initialize_params_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct *
  chartInstance)
{
}

static void mdl_start_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  cudaError_t c14_errCode;
  c14_errCode = cudaGetLastError();
  if (c14_errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(c14_errCode), (char_T *)
                       cudaGetErrorName(c14_errCode), (char_T *)
                       cudaGetErrorString(c14_errCode), (char_T *)
                       "SimGPUErrorChecks", chartInstance->c14_fEmlrtCtx);
  }
}

static void mdl_setup_runtime_resources_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance)
{
  sfSetAnimationVectors(chartInstance->S, chartInstance->c14_JITStateAnimation,
                        chartInstance->c14_JITTransitionAnimation);
}

static void mdl_cleanup_runtime_resources_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance)
{
}

static void enable_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c14_JITTransitionAnimation[0] = 0U;
  *chartInstance->c14_antiRollFrontAxleAndTire = c14_eML_blk_kernel
    (chartInstance, *chartInstance->c14_antiRollFrontSprings,
     *chartInstance->c14_antiRollFrontARB,
     *chartInstance->c14_antiRollFrontTires);
  c14_do_animation_call_c14_dynamics_lib(chartInstance);
}

static void ext_mode_exec_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void c14_do_animation_call_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance)
{
  const mxArray *c14_b_y = NULL;
  const mxArray *c14_c_y = NULL;
  const mxArray *c14_st;
  const mxArray *c14_y = NULL;
  c14_st = NULL;
  c14_st = NULL;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_createcellmatrix(2, 1), false);
  c14_b_y = NULL;
  sf_mex_assign(&c14_b_y, sf_mex_create("y",
    chartInstance->c14_antiRollFrontAxleAndTire, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c14_y, 0, c14_b_y);
  c14_c_y = NULL;
  sf_mex_assign(&c14_c_y, sf_mex_create("y",
    &chartInstance->c14_is_active_c14_dynamics_lib, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c14_y, 1, c14_c_y);
  sf_mex_assign(&c14_st, c14_y, false);
  return c14_st;
}

static void set_sim_state_c14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_st)
{
  const mxArray *c14_u;
  c14_u = sf_mex_dup(c14_st);
  *chartInstance->c14_antiRollFrontAxleAndTire = c14_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 0)),
     "antiRollFrontAxleAndTire");
  chartInstance->c14_is_active_c14_dynamics_lib = c14_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 1)),
     "is_active_c14_dynamics_lib");
  sf_mex_destroy(&c14_u);
  sf_mex_destroy(&c14_st);
}

static void initSimStructsc14_dynamics_lib(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void initSubchartIOPointersc14_dynamics_lib
  (SFc14_dynamics_libInstanceStruct *chartInstance)
{
}

const mxArray *sf_c14_dynamics_lib_get_eml_resolved_functions_info()
{
  const mxArray *c14_nameCaptureInfo = NULL;
  c14_nameCaptureInfo = NULL;
  sf_mex_assign(&c14_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c14_nameCaptureInfo;
}

static real32_T c14_eML_blk_kernel(SFc14_dynamics_libInstanceStruct
  *chartInstance, real_T c14_b_antiRollFrontSprings, real32_T
  c14_b_antiRollFrontARB, real32_T c14_b_antiRollFrontTires)
{
  return (static_cast<real32_T>(c14_b_antiRollFrontSprings) +
          c14_b_antiRollFrontARB) * c14_b_antiRollFrontTires /
    ((static_cast<real32_T>(c14_b_antiRollFrontSprings) + c14_b_antiRollFrontARB)
     + c14_b_antiRollFrontTires);
}

static real32_T c14_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier)
{
  emlrtMsgIdentifier c14_thisId;
  real32_T c14_y;
  c14_thisId.fIdentifier = const_cast<const char_T *>(c14_identifier);
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_nullptr),
    &c14_thisId);
  sf_mex_destroy(&c14_nullptr);
  return c14_y;
}

static real32_T c14_b_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  real32_T c14_f;
  real32_T c14_y;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_f, 0, 1, 0U, 0, 0U, 0);
  c14_y = c14_f;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static uint8_T c14_c_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier)
{
  emlrtMsgIdentifier c14_thisId;
  uint8_T c14_y;
  c14_thisId.fIdentifier = const_cast<const char_T *>(c14_identifier);
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_y = c14_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_nullptr),
    &c14_thisId);
  sf_mex_destroy(&c14_nullptr);
  return c14_y;
}

static uint8_T c14_d_emlrt_marshallIn(SFc14_dynamics_libInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  uint8_T c14_b_u;
  uint8_T c14_y;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_b_u, 1, 3, 0U, 0, 0U, 0);
  c14_y = c14_b_u;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void init_dsm_address_info(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc14_dynamics_libInstanceStruct
  *chartInstance)
{
  chartInstance->c14_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c14_antiRollFrontAxleAndTire = (real32_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c14_antiRollFrontSprings = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c14_antiRollFrontARB = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c14_antiRollFrontTires = (real32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c14_dynamics_lib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1060234072U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(980335451U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3189463588U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4073111086U);
}

mxArray *sf_c14_dynamics_lib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c14_dynamics_lib_jit_fallback_info(void)
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

mxArray *sf_c14_dynamics_lib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c14_dynamics_lib(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAWYGJgYAPSHEDMxAABrFA+I1SMES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfg8k/SxY9Esg6ReA8hPzSjKD8nNy3Iry80"
    "ocK3JSHfNSQjKLUvmg6ihzl4IDZfoh9gcQ8JcUmr9A/Mzi+MTkksyy1PhkQ5P4lEpgfGUmF8fnZ"
    "CYhzAUBAIuPIkw="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c14_dynamics_lib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "szgPCLVfBNLzBqi6PctNnzB";
}

static void sf_opaque_initialize_c14_dynamics_lib(void *chartInstanceVar)
{
  initialize_params_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    chartInstanceVar);
  initialize_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c14_dynamics_lib(void *chartInstanceVar)
{
  enable_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c14_dynamics_lib(void *chartInstanceVar)
{
  disable_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c14_dynamics_lib(void *chartInstanceVar)
{
  sf_gateway_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c14_dynamics_lib(SimStruct* S)
{
  return get_sim_state_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c14_dynamics_lib(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c14_dynamics_lib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc14_dynamics_libInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dynamics_lib_optimization_info();
    }

    mdl_cleanup_runtime_resources_c14_dynamics_lib
      ((SFc14_dynamics_libInstanceStruct*) chartInstanceVar);
    ((SFc14_dynamics_libInstanceStruct*) chartInstanceVar)->
      ~SFc14_dynamics_libInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c14_dynamics_lib(void *chartInstanceVar)
{
  mdl_start_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc14_dynamics_libInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c14_dynamics_lib(void *chartInstanceVar)
{
  mdl_terminate_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c14_dynamics_lib(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc14_dynamics_lib((SFc14_dynamics_libInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c14_dynamics_lib_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWMtu20YUHSmu0RRp4EWBBEaAZNlNgCR9IIuitZ6NANkWItkFujFG5KU48HBIz0MPf0f2/ZU",
    "uuugn9CcKdFmgm96hKEWlVIlDAW1SlABFDckz59479zUklc4pweM+nicPCTnE64d4Vsn8+CAbV1",
    "bO+f0D8lU2/vkjQrzYhxGIvgkCNiVuhzBRj0oaKeJ+CBrBa1AxN5rFoiOCuDiWiQAkCA8nSGKpn",
    "XgViwxn4rpthGeZ1Xch88J+GBvu13FC6p8LPvs73sToHjI2mQRPtwF8HcrYjMI2p6PtVpB60gjB",
    "u1YmcraVAt03iVVVnRquWcKhNQWvI5SmaAW1Q9++phoaeupmZKuv6i/QcZRwRkVxW4dU9SFB79B",
    "wkfj4e240Wq8gL/INmaA6lozyVsQbIZVFsT2Ocp6iW3NnO+tIN2FoRiMmRta60kQgUH/0kwK2Ch",
    "rxGCQdwblw4/Wsdq1pusBLvyyI1SyCSyprHvqBAt8tBtGBVZ/i0sIAp3HCgqBDDh01kGyMa+SaN",
    "zo2lErlDRPNPUmVwqa8rTGuqirJ2/ZEg3Ku3LCDOOnCGHjK36SalsDO+R3ASjF/EKN32Mh1jH4j",
    "2I2BDNuIhc+Ke+U4h0qLxBkm/AJwFtkwAB/NvBR9OdGuODJKx1EDQ7/Z7RbkW8d2hAYZUA8K52t",
    "JmQIUOPUrR16fKRtIiEYr6VTLwjPMY7AUlKjAiOYkltdoY9fC8NZWNhLc0OCPoAka0iTXQu++pN",
    "wUlDlSmJWte1wozLJuvIi18VMK7FEvBN/WQMbhFPMsTlB0iZUtnzXUdsz0rAnKkywpGkkGEzoWP",
    "2ulwSyBC3Et4oloyzjqZ13MFr8CwKxBpcBSVsdSKmdtFL6Y1BJuBml2d20YrJ2p5nRofeNbEFgN",
    "ra62elMPo6olsN1EgfbB9tkttiNCMaWxBZy10hjw530wedsHH2zog49W+uCj7PSef37lz7AbZZ6",
    "64mxo53m2Ms+9Av30og/fhiNrOLLELa6fruArG3jJyjXPd7f61/fv5PiqeKdSqazZ6eMcz0EOd5",
    "jZ6dXLX5/+9Iax4x/+mAQPHt3s4q+s8VfS/xb3Y9Vtv3I/Gz9a9ErLzDxeS1723Vc7/OBBzg/sW",
    "N2Oeo3uZVA/697Wb9iXPU+fidt6Ot/RDnmrOXkX95/Y/gwDN80D0uv42b7HjqmZ9+N2/pcr8h7u",
    "sMfdFX8i5Ldv9sN/clLEXg9z9rJjLMvsdcw5ZiOha1MONeEPcFu06s/l5Xpysh9+zt/boddxTq/",
    "jtI+/ojZbw1U+M6zHa1n/d8W9L3z/44qvQ5G6cqckriwf+Ydx++rnWi/f9/efbclnJPf+0Tusx7",
    "Y86tI3vWt6/ULc+prH2fjr5V69ETLub9gtZI+xoQ82Pf2P+PfvjvZb9HEta7/sA+n3n9UE5TPcH",
    "sy3X9ntnrTf5paPJFC1eQ/2b9ST5Xf8Hf3KvVx82/GECT+eqKfPX3zxYp/69CdDZw76",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c14_dynamics_lib(SimStruct *S)
{
  const char* newstr = sf_c14_dynamics_lib_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(770521160U));
  ssSetChecksum1(S,(1768527044U));
  ssSetChecksum2(S,(2012978970U));
  ssSetChecksum3(S,(1897666406U));
}

static void mdlRTW_c14_dynamics_lib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c14_dynamics_lib(SimStruct *S)
{
  SFc14_dynamics_libInstanceStruct *chartInstance;
  chartInstance = (SFc14_dynamics_libInstanceStruct *)utMalloc(sizeof
    (SFc14_dynamics_libInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc14_dynamics_libInstanceStruct));
  chartInstance = new (chartInstance) SFc14_dynamics_libInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c14_dynamics_lib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c14_dynamics_lib;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c14_dynamics_lib;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c14_dynamics_lib;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c14_dynamics_lib;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c14_dynamics_lib;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c14_dynamics_lib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c14_dynamics_lib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c14_dynamics_lib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c14_dynamics_lib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c14_dynamics_lib;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c14_dynamics_lib;
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

  mdl_setup_runtime_resources_c14_dynamics_lib(chartInstance);
}

void c14_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c14_dynamics_lib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c14_dynamics_lib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c14_dynamics_lib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c14_dynamics_lib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
