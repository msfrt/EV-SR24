#ifndef __c4_dynamics_lib_h__
#define __c4_dynamics_lib_h__

/* Forward Declarations */
struct SFc4_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c4_dynamics_libStackData
#define typedef_c4_dynamics_libStackData

typedef struct {
} c4_dynamics_libStackData;

#endif                                 /* typedef_c4_dynamics_libStackData */

#ifndef struct_SFc4_dynamics_libInstanceStruct
#define struct_SFc4_dynamics_libInstanceStruct

struct SFc4_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c4_is_active_c4_dynamics_lib;
  uint8_T c4_JITStateAnimation[1];
  uint8_T c4_JITTransitionAnimation[1];
  void *c4_fEmlrtCtx;
  real_T *c4_rearARBStiffness;
  real_T *c4_antiRollRearARB;
  real_T *c4_rearTrack;
  real_T *c4_rearARBMotionRatio;
};

#endif                                 /* struct_SFc4_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c4_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c4_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
