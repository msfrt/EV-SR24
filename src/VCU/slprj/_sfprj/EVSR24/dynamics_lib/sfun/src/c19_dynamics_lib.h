#ifndef __c19_dynamics_lib_h__
#define __c19_dynamics_lib_h__

/* Forward Declarations */
struct SFc19_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c19_dynamics_libStackData
#define typedef_c19_dynamics_libStackData

typedef struct {
} c19_dynamics_libStackData;

#endif                                 /* typedef_c19_dynamics_libStackData */

#ifndef struct_SFc19_dynamics_libInstanceStruct
#define struct_SFc19_dynamics_libInstanceStruct

struct SFc19_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c19_is_active_c19_dynamics_lib;
  uint8_T c19_JITStateAnimation[1];
  uint8_T c19_JITTransitionAnimation[1];
  void *c19_fEmlrtCtx;
  real32_T *c19_frontNSMWT;
  real32_T *c19_frontTotalWT;
  real32_T *c19_frontElWT;
  real_T *c19_frontGeoWT;
};

#endif                                 /* struct_SFc19_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c19_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c19_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c19_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
