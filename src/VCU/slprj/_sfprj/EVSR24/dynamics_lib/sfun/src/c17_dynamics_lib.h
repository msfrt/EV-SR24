#ifndef __c17_dynamics_lib_h__
#define __c17_dynamics_lib_h__

/* Forward Declarations */
struct SFc17_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c17_dynamics_libStackData
#define typedef_c17_dynamics_libStackData

typedef struct {
} c17_dynamics_libStackData;

#endif                                 /* typedef_c17_dynamics_libStackData */

#ifndef struct_SFc17_dynamics_libInstanceStruct
#define struct_SFc17_dynamics_libInstanceStruct

struct SFc17_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c17_is_active_c17_dynamics_lib;
  uint8_T c17_JITStateAnimation[1];
  uint8_T c17_JITTransitionAnimation[1];
  void *c17_fEmlrtCtx;
  real32_T *c17_frontElWT;
  real_T *c17_suspendedMass;
  real_T *c17_MM5_ay;
  real_T *c17_deltaZ;
  real32_T *c17_antiRollFrontAxleAndTire;
  real32_T *c17_antiRollTotal;
  real_T *c17_frontTrack;
};

#endif                                 /* struct_SFc17_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c17_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c17_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c17_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
