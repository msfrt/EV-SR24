#ifndef __c7_dynamics_lib_h__
#define __c7_dynamics_lib_h__

/* Forward Declarations */
struct SFc7_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c7_dynamics_libStackData
#define typedef_c7_dynamics_libStackData

typedef struct {
} c7_dynamics_libStackData;

#endif                                 /* typedef_c7_dynamics_libStackData */

#ifndef struct_SFc7_dynamics_libInstanceStruct
#define struct_SFc7_dynamics_libInstanceStruct

struct SFc7_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c7_is_active_c7_dynamics_lib;
  uint8_T c7_JITStateAnimation[1];
  uint8_T c7_JITTransitionAnimation[1];
  void *c7_fEmlrtCtx;
  real_T *c7_frontNonSuspendedMass;
  real32_T *c7_frontNSMWT;
  real_T *c7_MM5_ay;
  real32_T *c7_frontNonSuspendedMassCGHeight;
  real_T *c7_frontTrack;
};

#endif                                 /* struct_SFc7_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c7_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c7_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
