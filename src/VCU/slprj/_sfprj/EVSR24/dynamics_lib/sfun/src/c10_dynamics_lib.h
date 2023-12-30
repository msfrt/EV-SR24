#ifndef __c10_dynamics_lib_h__
#define __c10_dynamics_lib_h__

/* Forward Declarations */
struct SFc10_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c10_dynamics_libStackData
#define typedef_c10_dynamics_libStackData

typedef struct {
} c10_dynamics_libStackData;

#endif                                 /* typedef_c10_dynamics_libStackData */

#ifndef struct_SFc10_dynamics_libInstanceStruct
#define struct_SFc10_dynamics_libInstanceStruct

struct SFc10_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c10_is_active_c10_dynamics_lib;
  uint8_T c10_JITStateAnimation[1];
  uint8_T c10_JITTransitionAnimation[1];
  void *c10_fEmlrtCtx;
  real_T *c10_suspendedMass;
  real_T *c10_rearGeoWT;
  real_T *c10_suspendedMassWeightDistribution;
  real_T *c10_MM5_ay;
  real_T *c10_rearRollCenterHeight;
  real_T *c10_rearTrack;
};

#endif                                 /* struct_SFc10_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c10_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c10_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c10_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
