#ifndef __c24_dynamics_lib_h__
#define __c24_dynamics_lib_h__

/* Forward Declarations */
struct SFc24_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c24_dynamics_libStackData
#define typedef_c24_dynamics_libStackData

typedef struct {
} c24_dynamics_libStackData;

#endif                                 /* typedef_c24_dynamics_libStackData */

#ifndef struct_SFc24_dynamics_libInstanceStruct
#define struct_SFc24_dynamics_libInstanceStruct

struct SFc24_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c24_is_active_c24_dynamics_lib;
  uint8_T c24_JITStateAnimation[1];
  uint8_T c24_JITTransitionAnimation[1];
  void *c24_fEmlrtCtx;
  real32_T *c24_dynamicLoadRR;
  real_T *c24_totalMass;
  real32_T *c24_totalMassDistribution;
  real_T *c24_totalDownForce;
  real32_T *c24_downForceDistribution;
  real32_T *c24_totalRearWT;
  real_T *c24_gravity;
};

#endif                                 /* struct_SFc24_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c24_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c24_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c24_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
