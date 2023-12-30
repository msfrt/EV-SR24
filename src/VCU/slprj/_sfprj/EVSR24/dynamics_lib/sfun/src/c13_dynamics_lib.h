#ifndef __c13_dynamics_lib_h__
#define __c13_dynamics_lib_h__

/* Forward Declarations */
struct SFc13_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c13_dynamics_libStackData
#define typedef_c13_dynamics_libStackData

typedef struct {
} c13_dynamics_libStackData;

#endif                                 /* typedef_c13_dynamics_libStackData */

#ifndef struct_SFc13_dynamics_libInstanceStruct
#define struct_SFc13_dynamics_libInstanceStruct

struct SFc13_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c13_is_active_c13_dynamics_lib;
  uint8_T c13_JITStateAnimation[1];
  uint8_T c13_JITTransitionAnimation[1];
  void *c13_fEmlrtCtx;
  real_T *c13_frontSpringStiffness;
  real_T *c13_frontWheelRate;
  real_T *c13_frontSpringMotionRatio;
};

#endif                                 /* struct_SFc13_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c13_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c13_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c13_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
