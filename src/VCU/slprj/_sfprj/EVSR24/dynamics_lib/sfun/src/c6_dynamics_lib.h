#ifndef __c6_dynamics_lib_h__
#define __c6_dynamics_lib_h__

/* Forward Declarations */
struct SFc6_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c6_dynamics_libStackData
#define typedef_c6_dynamics_libStackData

typedef struct {
} c6_dynamics_libStackData;

#endif                                 /* typedef_c6_dynamics_libStackData */

#ifndef struct_SFc6_dynamics_libInstanceStruct
#define struct_SFc6_dynamics_libInstanceStruct

struct SFc6_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c6_is_active_c6_dynamics_lib;
  uint8_T c6_JITStateAnimation[1];
  uint8_T c6_JITTransitionAnimation[1];
  void *c6_fEmlrtCtx;
  real_T *c6_rearTrack;
  real32_T *c6_antiRollRearTires;
  real32_T *c6_rearTireStiffness;
};

#endif                                 /* struct_SFc6_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c6_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c6_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
