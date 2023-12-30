#ifndef __c9_dynamics_lib_h__
#define __c9_dynamics_lib_h__

/* Forward Declarations */
struct SFc9_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c9_dynamics_libStackData
#define typedef_c9_dynamics_libStackData

typedef struct {
} c9_dynamics_libStackData;

#endif                                 /* typedef_c9_dynamics_libStackData */

#ifndef struct_SFc9_dynamics_libInstanceStruct
#define struct_SFc9_dynamics_libInstanceStruct

struct SFc9_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c9_is_active_c9_dynamics_lib;
  uint8_T c9_JITStateAnimation[1];
  uint8_T c9_JITTransitionAnimation[1];
  void *c9_fEmlrtCtx;
  real_T *c9_suspendedMass;
  real_T *c9_frontGeoWT;
  real_T *c9_suspendedMassWeightDistribution;
  real_T *c9_MM5_ay;
  real_T *c9_frontRollCenterHeight;
  real_T *c9_frontTrack;
};

#endif                                 /* struct_SFc9_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c9_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c9_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
