#ifndef __c3_dynamics_lib_h__
#define __c3_dynamics_lib_h__

/* Forward Declarations */
struct SFc3_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c3_dynamics_libStackData
#define typedef_c3_dynamics_libStackData

typedef struct {
} c3_dynamics_libStackData;

#endif                                 /* typedef_c3_dynamics_libStackData */

#ifndef struct_SFc3_dynamics_libInstanceStruct
#define struct_SFc3_dynamics_libInstanceStruct

struct SFc3_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c3_is_active_c3_dynamics_lib;
  uint8_T c3_JITStateAnimation[1];
  uint8_T c3_JITTransitionAnimation[1];
  void *c3_fEmlrtCtx;
  real_T *c3_frontARBStiffness;
  real32_T *c3_antiRollFrontARB;
  real_T *c3_frontTrack;
  real32_T *c3_frontARBMotionRatio;
};

#endif                                 /* struct_SFc3_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c3_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c3_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
