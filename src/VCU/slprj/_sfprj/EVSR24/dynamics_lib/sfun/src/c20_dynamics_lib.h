#ifndef __c20_dynamics_lib_h__
#define __c20_dynamics_lib_h__

/* Forward Declarations */
struct SFc20_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c20_dynamics_libStackData
#define typedef_c20_dynamics_libStackData

typedef struct {
} c20_dynamics_libStackData;

#endif                                 /* typedef_c20_dynamics_libStackData */

#ifndef struct_SFc20_dynamics_libInstanceStruct
#define struct_SFc20_dynamics_libInstanceStruct

struct SFc20_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c20_is_active_c20_dynamics_lib;
  uint8_T c20_JITStateAnimation[1];
  uint8_T c20_JITTransitionAnimation[1];
  void *c20_fEmlrtCtx;
  real32_T *c20_rearNSMWT;
  real32_T *c20_rearTotalWT;
  real32_T *c20_rearElWT;
  real_T *c20_rearGeoWT;
};

#endif                                 /* struct_SFc20_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c20_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c20_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c20_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
