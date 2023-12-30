#ifndef __c11_dynamics_lib_h__
#define __c11_dynamics_lib_h__

/* Forward Declarations */
struct SFc11_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c11_dynamics_libStackData
#define typedef_c11_dynamics_libStackData

typedef struct {
} c11_dynamics_libStackData;

#endif                                 /* typedef_c11_dynamics_libStackData */

#ifndef struct_SFc11_dynamics_libInstanceStruct
#define struct_SFc11_dynamics_libInstanceStruct

struct SFc11_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c11_is_active_c11_dynamics_lib;
  uint8_T c11_JITStateAnimation[1];
  uint8_T c11_JITTransitionAnimation[1];
  void *c11_fEmlrtCtx;
  real_T *c11_frontTrack;
  real_T *c11_antiRollFrontSprings;
  real_T *c11_frontWheelRate;
};

#endif                                 /* struct_SFc11_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c11_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c11_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
