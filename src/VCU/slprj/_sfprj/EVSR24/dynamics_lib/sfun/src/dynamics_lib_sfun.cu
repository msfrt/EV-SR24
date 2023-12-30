/* Include files */

#include "dynamics_lib_sfun.h"
#include "c1_dynamics_lib.h"
#include "c2_dynamics_lib.h"
#include "c3_dynamics_lib.h"
#include "c4_dynamics_lib.h"
#include "c5_dynamics_lib.h"
#include "c6_dynamics_lib.h"
#include "c7_dynamics_lib.h"
#include "c8_dynamics_lib.h"
#include "c9_dynamics_lib.h"
#include "c10_dynamics_lib.h"
#include "c11_dynamics_lib.h"
#include "c12_dynamics_lib.h"
#include "c13_dynamics_lib.h"
#include "c14_dynamics_lib.h"
#include "c15_dynamics_lib.h"
#include "c16_dynamics_lib.h"
#include "c17_dynamics_lib.h"
#include "c18_dynamics_lib.h"
#include "c19_dynamics_lib.h"
#include "c20_dynamics_lib.h"
#include "c21_dynamics_lib.h"
#include "c22_dynamics_lib.h"
#include "c23_dynamics_lib.h"
#include "c24_dynamics_lib.h"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void dynamics_lib_initializer()
{
}

void dynamics_lib_terminator()
{
}

/* SFunction Glue Code */
unsigned int sf_dynamics_lib_method_dispatcher(SimStruct *simstructPtr, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_dynamics_lib_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_dynamics_lib_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>2 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"library")) {
      char machineName[100];
      mxGetString(prhs[2], machineName,sizeof(machineName)/sizeof(char));
      machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
      if (!strcmp(machineName,"dynamics_lib")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2606188159U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3554487681U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(452373930U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4159005797U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 1:
            {
              extern void sf_c1_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c1_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 2:
            {
              extern void sf_c2_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c2_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 3:
            {
              extern void sf_c3_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c3_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 4:
            {
              extern void sf_c4_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c4_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 5:
            {
              extern void sf_c5_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c5_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 6:
            {
              extern void sf_c6_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c6_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 7:
            {
              extern void sf_c7_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c7_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 8:
            {
              extern void sf_c8_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c8_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 9:
            {
              extern void sf_c9_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c9_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 10:
            {
              extern void sf_c10_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c10_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 11:
            {
              extern void sf_c11_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c11_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 12:
            {
              extern void sf_c12_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c12_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 13:
            {
              extern void sf_c13_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c13_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 14:
            {
              extern void sf_c14_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c14_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 15:
            {
              extern void sf_c15_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c15_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 16:
            {
              extern void sf_c16_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c16_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 17:
            {
              extern void sf_c17_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c17_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 18:
            {
              extern void sf_c18_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c18_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 19:
            {
              extern void sf_c19_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c19_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 20:
            {
              extern void sf_c20_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c20_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 21:
            {
              extern void sf_c21_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c21_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 22:
            {
              extern void sf_c22_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c22_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 23:
            {
              extern void sf_c23_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c23_dynamics_lib_get_check_sum(plhs);
              break;
            }

           case 24:
            {
              extern void sf_c24_dynamics_lib_get_check_sum(mxArray *plhs[]);
              sf_c24_dynamics_lib_get_check_sum(plhs);
              break;
            }

           default:
            ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
          }
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_dynamics_lib_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(instanceChksum, "sfSTahroaTAfMgdzbanaRZD") == 0) {
          extern const mxArray
            *sf_c1_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c1_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 2:
      {
        if (strcmp(instanceChksum, "ss7rWVwETCFpW2ESquArRkC") == 0) {
          extern const mxArray
            *sf_c2_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 3:
      {
        if (strcmp(instanceChksum, "sGGEig4Er6ZO31InGfGRTDB") == 0) {
          extern const mxArray
            *sf_c3_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c3_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 4:
      {
        if (strcmp(instanceChksum, "sJciLkJhy6etiry8Gxy23lD") == 0) {
          extern const mxArray
            *sf_c4_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 5:
      {
        if (strcmp(instanceChksum, "sKWXgFHw0v60WmuNXaku1L") == 0) {
          extern const mxArray
            *sf_c5_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c5_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 6:
      {
        if (strcmp(instanceChksum, "s4Y8RfVSyjyHTTXuB2WgM8G") == 0) {
          extern const mxArray
            *sf_c6_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c6_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 7:
      {
        if (strcmp(instanceChksum, "s9nDEkOrUZWchYTJDrDyuND") == 0) {
          extern const mxArray
            *sf_c7_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c7_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 8:
      {
        if (strcmp(instanceChksum, "sBgkeG5mq506CydKSQt6XiD") == 0) {
          extern const mxArray
            *sf_c8_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c8_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 9:
      {
        if (strcmp(instanceChksum, "sAGiMnv3VbPrE8CeRPeSl2B") == 0) {
          extern const mxArray
            *sf_c9_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c9_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 10:
      {
        if (strcmp(instanceChksum, "sWyfhtqFOhK8Ezx2ndVFl") == 0) {
          extern const mxArray
            *sf_c10_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c10_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 11:
      {
        if (strcmp(instanceChksum, "sguz5aP2MdkthwhiEaEoDKC") == 0) {
          extern const mxArray
            *sf_c11_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c11_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 12:
      {
        if (strcmp(instanceChksum, "szELbKLmqydMgM0SPDKjlvF") == 0) {
          extern const mxArray
            *sf_c12_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c12_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 13:
      {
        if (strcmp(instanceChksum, "swZnH3WG6KgyPoyYFsXa5UE") == 0) {
          extern const mxArray
            *sf_c13_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c13_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 14:
      {
        if (strcmp(instanceChksum, "szgPCLVfBNLzBqi6PctNnzB") == 0) {
          extern const mxArray
            *sf_c14_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c14_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 15:
      {
        if (strcmp(instanceChksum, "sd1kXtovyIdHqHeTwYna1wE") == 0) {
          extern const mxArray
            *sf_c15_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c15_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 16:
      {
        if (strcmp(instanceChksum, "sDJSVGoPns7QjX5GxCg1f5C") == 0) {
          extern const mxArray
            *sf_c16_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c16_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 17:
      {
        if (strcmp(instanceChksum, "sKZiLMSeDjbdnuSb2DtURk") == 0) {
          extern const mxArray
            *sf_c17_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c17_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 18:
      {
        if (strcmp(instanceChksum, "sxh5L5hbwm5Sj8oFJtl3WXE") == 0) {
          extern const mxArray
            *sf_c18_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c18_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 19:
      {
        if (strcmp(instanceChksum, "s3L65rUiZohatpj0LGvJmUG") == 0) {
          extern const mxArray
            *sf_c19_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c19_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 20:
      {
        if (strcmp(instanceChksum, "sklQdNloCdlTDXMMCBdhIRH") == 0) {
          extern const mxArray
            *sf_c20_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c20_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 21:
      {
        if (strcmp(instanceChksum, "sY4GhcpqgfuFhGlNJtBVvd") == 0) {
          extern const mxArray
            *sf_c21_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c21_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 22:
      {
        if (strcmp(instanceChksum, "sxNq7wXLKWBjWUIBjayGiPB") == 0) {
          extern const mxArray
            *sf_c22_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c22_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 23:
      {
        if (strcmp(instanceChksum, "sN9KeYWMcIt6DcjNgjMRWlF") == 0) {
          extern const mxArray
            *sf_c23_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c23_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 24:
      {
        if (strcmp(instanceChksum, "sj7vP3DMWbyUIuJfHF7tAf") == 0) {
          extern const mxArray
            *sf_c24_dynamics_lib_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c24_dynamics_lib_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_dynamics_lib_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sfSTahroaTAfMgdzbanaRZD") == 0) {
          extern mxArray *sf_c1_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c1_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "ss7rWVwETCFpW2ESquArRkC") == 0) {
          extern mxArray *sf_c2_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c2_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sGGEig4Er6ZO31InGfGRTDB") == 0) {
          extern mxArray *sf_c3_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c3_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sJciLkJhy6etiry8Gxy23lD") == 0) {
          extern mxArray *sf_c4_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c4_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sKWXgFHw0v60WmuNXaku1L") == 0) {
          extern mxArray *sf_c5_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c5_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "s4Y8RfVSyjyHTTXuB2WgM8G") == 0) {
          extern mxArray *sf_c6_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c6_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "s9nDEkOrUZWchYTJDrDyuND") == 0) {
          extern mxArray *sf_c7_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c7_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sBgkeG5mq506CydKSQt6XiD") == 0) {
          extern mxArray *sf_c8_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c8_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sAGiMnv3VbPrE8CeRPeSl2B") == 0) {
          extern mxArray *sf_c9_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c9_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sWyfhtqFOhK8Ezx2ndVFl") == 0) {
          extern mxArray *sf_c10_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c10_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sguz5aP2MdkthwhiEaEoDKC") == 0) {
          extern mxArray *sf_c11_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c11_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "szELbKLmqydMgM0SPDKjlvF") == 0) {
          extern mxArray *sf_c12_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c12_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "swZnH3WG6KgyPoyYFsXa5UE") == 0) {
          extern mxArray *sf_c13_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c13_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "szgPCLVfBNLzBqi6PctNnzB") == 0) {
          extern mxArray *sf_c14_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c14_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sd1kXtovyIdHqHeTwYna1wE") == 0) {
          extern mxArray *sf_c15_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c15_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sDJSVGoPns7QjX5GxCg1f5C") == 0) {
          extern mxArray *sf_c16_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c16_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sKZiLMSeDjbdnuSb2DtURk") == 0) {
          extern mxArray *sf_c17_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c17_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sxh5L5hbwm5Sj8oFJtl3WXE") == 0) {
          extern mxArray *sf_c18_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c18_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "s3L65rUiZohatpj0LGvJmUG") == 0) {
          extern mxArray *sf_c19_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c19_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sklQdNloCdlTDXMMCBdhIRH") == 0) {
          extern mxArray *sf_c20_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c20_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sY4GhcpqgfuFhGlNJtBVvd") == 0) {
          extern mxArray *sf_c21_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c21_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sxNq7wXLKWBjWUIBjayGiPB") == 0) {
          extern mxArray *sf_c22_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c22_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sN9KeYWMcIt6DcjNgjMRWlF") == 0) {
          extern mxArray *sf_c23_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c23_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sj7vP3DMWbyUIuJfHF7tAf") == 0) {
          extern mxArray *sf_c24_dynamics_lib_third_party_uses_info(void);
          plhs[0] = sf_c24_dynamics_lib_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dynamics_lib_jit_fallback_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sfSTahroaTAfMgdzbanaRZD") == 0) {
          extern mxArray *sf_c1_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c1_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "ss7rWVwETCFpW2ESquArRkC") == 0) {
          extern mxArray *sf_c2_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c2_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sGGEig4Er6ZO31InGfGRTDB") == 0) {
          extern mxArray *sf_c3_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c3_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sJciLkJhy6etiry8Gxy23lD") == 0) {
          extern mxArray *sf_c4_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c4_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sKWXgFHw0v60WmuNXaku1L") == 0) {
          extern mxArray *sf_c5_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c5_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "s4Y8RfVSyjyHTTXuB2WgM8G") == 0) {
          extern mxArray *sf_c6_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c6_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "s9nDEkOrUZWchYTJDrDyuND") == 0) {
          extern mxArray *sf_c7_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c7_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sBgkeG5mq506CydKSQt6XiD") == 0) {
          extern mxArray *sf_c8_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c8_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sAGiMnv3VbPrE8CeRPeSl2B") == 0) {
          extern mxArray *sf_c9_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c9_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sWyfhtqFOhK8Ezx2ndVFl") == 0) {
          extern mxArray *sf_c10_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c10_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sguz5aP2MdkthwhiEaEoDKC") == 0) {
          extern mxArray *sf_c11_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c11_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "szELbKLmqydMgM0SPDKjlvF") == 0) {
          extern mxArray *sf_c12_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c12_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "swZnH3WG6KgyPoyYFsXa5UE") == 0) {
          extern mxArray *sf_c13_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c13_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "szgPCLVfBNLzBqi6PctNnzB") == 0) {
          extern mxArray *sf_c14_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c14_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sd1kXtovyIdHqHeTwYna1wE") == 0) {
          extern mxArray *sf_c15_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c15_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sDJSVGoPns7QjX5GxCg1f5C") == 0) {
          extern mxArray *sf_c16_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c16_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sKZiLMSeDjbdnuSb2DtURk") == 0) {
          extern mxArray *sf_c17_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c17_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sxh5L5hbwm5Sj8oFJtl3WXE") == 0) {
          extern mxArray *sf_c18_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c18_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "s3L65rUiZohatpj0LGvJmUG") == 0) {
          extern mxArray *sf_c19_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c19_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sklQdNloCdlTDXMMCBdhIRH") == 0) {
          extern mxArray *sf_c20_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c20_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sY4GhcpqgfuFhGlNJtBVvd") == 0) {
          extern mxArray *sf_c21_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c21_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sxNq7wXLKWBjWUIBjayGiPB") == 0) {
          extern mxArray *sf_c22_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c22_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sN9KeYWMcIt6DcjNgjMRWlF") == 0) {
          extern mxArray *sf_c23_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c23_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sj7vP3DMWbyUIuJfHF7tAf") == 0) {
          extern mxArray *sf_c24_dynamics_lib_jit_fallback_info(void);
          plhs[0] = sf_c24_dynamics_lib_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dynamics_lib_get_post_codegen_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sfSTahroaTAfMgdzbanaRZD") == 0) {
          const char *sf_c1_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c1_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "ss7rWVwETCFpW2ESquArRkC") == 0) {
          const char *sf_c2_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c2_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sGGEig4Er6ZO31InGfGRTDB") == 0) {
          const char *sf_c3_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c3_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sJciLkJhy6etiry8Gxy23lD") == 0) {
          const char *sf_c4_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c4_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sKWXgFHw0v60WmuNXaku1L") == 0) {
          const char *sf_c5_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c5_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "s4Y8RfVSyjyHTTXuB2WgM8G") == 0) {
          const char *sf_c6_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c6_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "s9nDEkOrUZWchYTJDrDyuND") == 0) {
          const char *sf_c7_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c7_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sBgkeG5mq506CydKSQt6XiD") == 0) {
          const char *sf_c8_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c8_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sAGiMnv3VbPrE8CeRPeSl2B") == 0) {
          const char *sf_c9_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c9_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sWyfhtqFOhK8Ezx2ndVFl") == 0) {
          const char *sf_c10_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c10_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sguz5aP2MdkthwhiEaEoDKC") == 0) {
          const char *sf_c11_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c11_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "szELbKLmqydMgM0SPDKjlvF") == 0) {
          const char *sf_c12_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c12_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "swZnH3WG6KgyPoyYFsXa5UE") == 0) {
          const char *sf_c13_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c13_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "szgPCLVfBNLzBqi6PctNnzB") == 0) {
          const char *sf_c14_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c14_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sd1kXtovyIdHqHeTwYna1wE") == 0) {
          const char *sf_c15_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c15_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sDJSVGoPns7QjX5GxCg1f5C") == 0) {
          const char *sf_c16_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c16_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sKZiLMSeDjbdnuSb2DtURk") == 0) {
          const char *sf_c17_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c17_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sxh5L5hbwm5Sj8oFJtl3WXE") == 0) {
          const char *sf_c18_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c18_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "s3L65rUiZohatpj0LGvJmUG") == 0) {
          const char *sf_c19_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c19_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sklQdNloCdlTDXMMCBdhIRH") == 0) {
          const char *sf_c20_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c20_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sY4GhcpqgfuFhGlNJtBVvd") == 0) {
          const char *sf_c21_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c21_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sxNq7wXLKWBjWUIBjayGiPB") == 0) {
          const char *sf_c22_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c22_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sN9KeYWMcIt6DcjNgjMRWlF") == 0) {
          const char *sf_c23_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c23_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sj7vP3DMWbyUIuJfHF7tAf") == 0) {
          const char *sf_c24_dynamics_lib_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c24_dynamics_lib_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dynamics_lib_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sfSTahroaTAfMgdzbanaRZD") == 0) {
          extern mxArray *sf_c1_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "ss7rWVwETCFpW2ESquArRkC") == 0) {
          extern mxArray *sf_c2_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sGGEig4Er6ZO31InGfGRTDB") == 0) {
          extern mxArray *sf_c3_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sJciLkJhy6etiry8Gxy23lD") == 0) {
          extern mxArray *sf_c4_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sKWXgFHw0v60WmuNXaku1L") == 0) {
          extern mxArray *sf_c5_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "s4Y8RfVSyjyHTTXuB2WgM8G") == 0) {
          extern mxArray *sf_c6_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "s9nDEkOrUZWchYTJDrDyuND") == 0) {
          extern mxArray *sf_c7_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c7_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sBgkeG5mq506CydKSQt6XiD") == 0) {
          extern mxArray *sf_c8_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c8_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sAGiMnv3VbPrE8CeRPeSl2B") == 0) {
          extern mxArray *sf_c9_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c9_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sWyfhtqFOhK8Ezx2ndVFl") == 0) {
          extern mxArray *sf_c10_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c10_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sguz5aP2MdkthwhiEaEoDKC") == 0) {
          extern mxArray *sf_c11_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c11_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "szELbKLmqydMgM0SPDKjlvF") == 0) {
          extern mxArray *sf_c12_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c12_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "swZnH3WG6KgyPoyYFsXa5UE") == 0) {
          extern mxArray *sf_c13_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c13_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "szgPCLVfBNLzBqi6PctNnzB") == 0) {
          extern mxArray *sf_c14_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c14_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sd1kXtovyIdHqHeTwYna1wE") == 0) {
          extern mxArray *sf_c15_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c15_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sDJSVGoPns7QjX5GxCg1f5C") == 0) {
          extern mxArray *sf_c16_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c16_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sKZiLMSeDjbdnuSb2DtURk") == 0) {
          extern mxArray *sf_c17_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c17_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sxh5L5hbwm5Sj8oFJtl3WXE") == 0) {
          extern mxArray *sf_c18_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c18_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "s3L65rUiZohatpj0LGvJmUG") == 0) {
          extern mxArray *sf_c19_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c19_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sklQdNloCdlTDXMMCBdhIRH") == 0) {
          extern mxArray *sf_c20_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c20_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sY4GhcpqgfuFhGlNJtBVvd") == 0) {
          extern mxArray *sf_c21_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c21_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sxNq7wXLKWBjWUIBjayGiPB") == 0) {
          extern mxArray *sf_c22_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c22_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sN9KeYWMcIt6DcjNgjMRWlF") == 0) {
          extern mxArray *sf_c23_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c23_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sj7vP3DMWbyUIuJfHF7tAf") == 0) {
          extern mxArray *sf_c24_dynamics_lib_updateBuildInfo_args_info(void);
          plhs[0] = sf_c24_dynamics_lib_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void dynamics_lib_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_dynamics_lib_optimization_info(void);
mxArray* load_dynamics_lib_optimization_info(boolean_T isRtwGen, boolean_T
  isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_dynamics_lib_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("dynamics_lib",
      "EVSR24");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_dynamics_lib_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
