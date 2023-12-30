#ifndef __c14_dynamics_lib_h__
#define __c14_dynamics_lib_h__

/* Forward Declarations */
struct SFc14_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c14_dynamics_libStackData
#define typedef_c14_dynamics_libStackData

typedef struct {
} c14_dynamics_libStackData;

#endif                                 /* typedef_c14_dynamics_libStackData */

#ifndef struct_SFc14_dynamics_libInstanceStruct
#define struct_SFc14_dynamics_libInstanceStruct

struct SFc14_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c14_is_active_c14_dynamics_lib;
  uint8_T c14_JITStateAnimation[1];
  uint8_T c14_JITTransitionAnimation[1];
  void *c14_fEmlrtCtx;
  real32_T *c14_antiRollFrontAxleAndTire;
  real_T *c14_antiRollFrontSprings;
  real32_T *c14_antiRollFrontARB;
  real32_T *c14_antiRollFrontTires;
};

#endif                                 /* struct_SFc14_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c14_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c14_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c14_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
