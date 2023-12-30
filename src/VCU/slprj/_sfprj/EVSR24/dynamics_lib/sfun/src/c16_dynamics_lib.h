#ifndef __c16_dynamics_lib_h__
#define __c16_dynamics_lib_h__

/* Forward Declarations */
struct SFc16_dynamics_libInstanceStruct;

/* Type Definitions */
#ifndef typedef_c16_dynamics_libStackData
#define typedef_c16_dynamics_libStackData

typedef struct {
} c16_dynamics_libStackData;

#endif                                 /* typedef_c16_dynamics_libStackData */

#ifndef struct_SFc16_dynamics_libInstanceStruct
#define struct_SFc16_dynamics_libInstanceStruct

struct SFc16_dynamics_libInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c16_is_active_c16_dynamics_lib;
  uint8_T c16_JITStateAnimation[1];
  uint8_T c16_JITTransitionAnimation[1];
  void *c16_fEmlrtCtx;
  real32_T *c16_antiRollFrontAxleAndTire;
  real32_T *c16_antiRollTotal;
  real32_T *c16_antiRollRearAxleAndTire;
};

#endif                                 /* struct_SFc16_dynamics_libInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_dynamics_lib_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c16_dynamics_lib_get_check_sum(mxArray *plhs[]);
extern void c16_dynamics_lib_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
