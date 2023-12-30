#ifndef __c8_dynamics_lib_h__
#define __c8_dynamics_lib_h__

/* Forward Declarations */
struct SFc8_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c8_dynamics_libStackData
#define typedef_c8_dynamics_libStackData

typedef struct {
} c8_dynamics_libStackData;

#endif                                 /* typedef_c8_dynamics_libStackData */

#ifndef struct_SFc8_dynamics_libInstanceStruct
#define struct_SFc8_dynamics_libInstanceStruct

struct SFc8_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c8_is_active_c8_dynamics_lib;
  uint8_T c8_JITStateAnimation[1];
  uint8_T c8_JITTransitionAnimation[1];
  void *c8_fEmlrtCtx;
  real_T *c8_rearNonSuspendedMass;
  real32_T *c8_rearNSMWT;
  real_T *c8_MM5_ay;
  real32_T *c8_rearNonSuspendedMassCGHeight;
  real_T *c8_rearTrack;
};

#endif                                 /* struct_SFc8_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c8_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c8_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
