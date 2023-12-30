#ifndef __c5_dynamics_lib_h__
#define __c5_dynamics_lib_h__

/* Forward Declarations */
struct SFc5_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c5_dynamics_libStackData
#define typedef_c5_dynamics_libStackData

typedef struct {
} c5_dynamics_libStackData;

#endif                                 /* typedef_c5_dynamics_libStackData */

#ifndef struct_SFc5_dynamics_libInstanceStruct
#define struct_SFc5_dynamics_libInstanceStruct

struct SFc5_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c5_is_active_c5_dynamics_lib;
  uint8_T c5_JITStateAnimation[1];
  uint8_T c5_JITTransitionAnimation[1];
  void *c5_fEmlrtCtx;
  real_T *c5_frontTrack;
  real32_T *c5_antiRollFrontTires;
  real32_T *c5_frontTireStiffness;
};

#endif                                 /* struct_SFc5_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c5_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c5_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
