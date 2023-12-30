#ifndef __c23_dynamics_lib_h__
#define __c23_dynamics_lib_h__

/* Forward Declarations */
struct SFc23_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c23_dynamics_libStackData
#define typedef_c23_dynamics_libStackData

typedef struct {
} c23_dynamics_libStackData;

#endif                                 /* typedef_c23_dynamics_libStackData */

#ifndef struct_SFc23_dynamics_libInstanceStruct
#define struct_SFc23_dynamics_libInstanceStruct

struct SFc23_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c23_is_active_c23_dynamics_lib;
  uint8_T c23_JITStateAnimation[1];
  uint8_T c23_JITTransitionAnimation[1];
  void *c23_fEmlrtCtx;
  real32_T *c23_dynamicLoadRL;
  real_T *c23_totalMass;
  real32_T *c23_totalMassDistribution;
  real_T *c23_totalDownForce;
  real32_T *c23_downForceDistribution;
  real32_T *c23_totalRearWT;
  real_T *c23_gravity;
};

#endif                                 /* struct_SFc23_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c23_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c23_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c23_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
