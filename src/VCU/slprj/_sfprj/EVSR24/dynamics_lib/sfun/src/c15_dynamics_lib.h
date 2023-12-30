#ifndef __c15_dynamics_lib_h__
#define __c15_dynamics_lib_h__

/* Forward Declarations */
struct SFc15_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c15_dynamics_libStackData
#define typedef_c15_dynamics_libStackData

typedef struct {
} c15_dynamics_libStackData;

#endif                                 /* typedef_c15_dynamics_libStackData */

#ifndef struct_SFc15_dynamics_libInstanceStruct
#define struct_SFc15_dynamics_libInstanceStruct

struct SFc15_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c15_is_active_c15_dynamics_lib;
  uint8_T c15_JITStateAnimation[1];
  uint8_T c15_JITTransitionAnimation[1];
  void *c15_fEmlrtCtx;
  real32_T *c15_antiRollRearAxleAndTire;
  real_T *c15_antiRollRearSprings;
  real_T *c15_antiRollRearARB;
  real32_T *c15_antiRollRearTires;
};

#endif                                 /* struct_SFc15_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c15_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c15_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c15_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
