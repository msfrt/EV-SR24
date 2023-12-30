#ifndef __c22_dynamics_lib_h__
#define __c22_dynamics_lib_h__

/* Forward Declarations */
struct SFc22_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c22_dynamics_libStackData
#define typedef_c22_dynamics_libStackData

typedef struct {
} c22_dynamics_libStackData;

#endif                                 /* typedef_c22_dynamics_libStackData */

#ifndef struct_SFc22_dynamics_libInstanceStruct
#define struct_SFc22_dynamics_libInstanceStruct

struct SFc22_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c22_is_active_c22_dynamics_lib;
  uint8_T c22_JITStateAnimation[1];
  uint8_T c22_JITTransitionAnimation[1];
  void *c22_fEmlrtCtx;
  real32_T *c22_dynamicLoadFR;
  real_T *c22_totalMass;
  real32_T *c22_totalMassDistribution;
  real_T *c22_totalDownForce;
  real32_T *c22_downForceDistribution;
  real32_T *c22_totalFrontWT;
  real_T *c22_gravity;
};

#endif                                 /* struct_SFc22_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c22_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c22_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c22_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
