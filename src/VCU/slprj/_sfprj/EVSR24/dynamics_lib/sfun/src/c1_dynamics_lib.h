#ifndef __c1_dynamics_lib_h__
#define __c1_dynamics_lib_h__

/* Forward Declarations */
struct SFc1_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c1_dynamics_libStackData
#define typedef_c1_dynamics_libStackData

typedef struct {
} c1_dynamics_libStackData;

#endif                                 /* typedef_c1_dynamics_libStackData */

#ifndef struct_SFc1_dynamics_libInstanceStruct
#define struct_SFc1_dynamics_libInstanceStruct

struct SFc1_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c1_is_active_c1_dynamics_lib;
  uint8_T c1_JITStateAnimation[1];
  uint8_T c1_JITTransitionAnimation[1];
  void *c1_fEmlrtCtx;
  real_T *c1_wheelBase;
  real_T *c1_deltaZ;
  real_T *c1_suspendedMassWeightDistribution;
  real_T *c1_suspendedMassCGCoordinatesZ;
  real_T *c1_frontRollCenterHeight;
  real_T *c1_rearRollCenterHeight;
};

#endif                                 /* struct_SFc1_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c1_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c1_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
