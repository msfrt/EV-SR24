#ifndef __c2_dynamics_lib_h__
#define __c2_dynamics_lib_h__

/* Forward Declarations */
struct SFc2_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c2_dynamics_libStackData
#define typedef_c2_dynamics_libStackData

typedef struct {
} c2_dynamics_libStackData;

#endif                                 /* typedef_c2_dynamics_libStackData */

#ifndef struct_SFc2_dynamics_libInstanceStruct
#define struct_SFc2_dynamics_libInstanceStruct

struct SFc2_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c2_is_active_c2_dynamics_lib;
  uint8_T c2_JITStateAnimation[1];
  uint8_T c2_JITTransitionAnimation[1];
  void *c2_fEmlrtCtx;
  real_T *c2_rearSpringStiffness;
  real_T *c2_rearWheelRate;
  real_T *c2_rearSpringMotionRatio;
};

#endif                                 /* struct_SFc2_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c2_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c2_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
