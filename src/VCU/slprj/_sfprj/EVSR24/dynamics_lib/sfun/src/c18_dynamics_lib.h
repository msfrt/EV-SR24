#ifndef __c18_dynamics_lib_h__
#define __c18_dynamics_lib_h__

/* Forward Declarations */
struct SFc18_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c18_dynamics_libStackData
#define typedef_c18_dynamics_libStackData

typedef struct {
} c18_dynamics_libStackData;

#endif                                 /* typedef_c18_dynamics_libStackData */

#ifndef struct_SFc18_dynamics_libInstanceStruct
#define struct_SFc18_dynamics_libInstanceStruct

struct SFc18_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c18_is_active_c18_dynamics_lib;
  uint8_T c18_JITStateAnimation[1];
  uint8_T c18_JITTransitionAnimation[1];
  void *c18_fEmlrtCtx;
  real32_T *c18_rearElWT;
  real_T *c18_suspendedMass;
  real_T *c18_MM5_ay;
  real_T *c18_deltaZ;
  real32_T *c18_antiRollRearAxleAndTire;
  real32_T *c18_antiRollTotal;
  real_T *c18_rearTrack;
};

#endif                                 /* struct_SFc18_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c18_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c18_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c18_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
