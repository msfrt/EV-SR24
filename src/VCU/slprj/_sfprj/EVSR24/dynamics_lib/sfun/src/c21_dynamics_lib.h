#ifndef __c21_dynamics_lib_h__
#define __c21_dynamics_lib_h__

/* Forward Declarations */
struct SFc21_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c21_dynamics_libStackData
#define typedef_c21_dynamics_libStackData

typedef struct {
} c21_dynamics_libStackData;

#endif                                 /* typedef_c21_dynamics_libStackData */

#ifndef struct_SFc21_dynamics_libInstanceStruct
#define struct_SFc21_dynamics_libInstanceStruct

struct SFc21_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c21_is_active_c21_dynamics_lib;
  uint8_T c21_JITStateAnimation[1];
  uint8_T c21_JITTransitionAnimation[1];
  void *c21_fEmlrtCtx;
  real32_T *c21_dynamicLoadFL;
  real_T *c21_totalMass;
  real32_T *c21_totalMassDistribution;
  real_T *c21_totalDownForce;
  real32_T *c21_downForceDistribution;
  real32_T *c21_totalFrontWT;
  real_T *c21_gravity;
};

#endif                                 /* struct_SFc21_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c21_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c21_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c21_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
