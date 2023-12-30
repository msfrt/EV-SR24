#ifndef __c12_dynamics_lib_h__
#define __c12_dynamics_lib_h__

/* Forward Declarations */
struct SFc12_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c12_dynamics_libStackData
#define typedef_c12_dynamics_libStackData

typedef struct {
} c12_dynamics_libStackData;

#endif                                 /* typedef_c12_dynamics_libStackData */

#ifndef struct_SFc12_dynamics_libInstanceStruct
#define struct_SFc12_dynamics_libInstanceStruct

struct SFc12_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c12_is_active_c12_dynamics_lib;
  uint8_T c12_JITStateAnimation[1];
  uint8_T c12_JITTransitionAnimation[1];
  void *c12_fEmlrtCtx;
  real_T *c12_rearTrack;
  real_T *c12_antiRollRearSprings;
  real_T *c12_rearWheelRate;
};

#endif                                 /* struct_SFc12_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c12_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c12_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c12_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
