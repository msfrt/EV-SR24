/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:srvx_control.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Migrated from ClearCase, Based on B_SRVX.13.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_control$ 
 * $Variant___:1.13.0$ 
 * $Revision__:0$ 
 * $Type______:H$ 
 * $State_____:AVAILABLE$ 
 * $Generated_:$ 
 ************************************************************************* 
 * 
 * $UniqueName:$ 
 * $Component_:$ 
 * 
 * 
 ************************************************************************* 
 * List Of Changes 
 * 
 * $History
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_CONTROL_H
#define _SRVX_CONTROL_H


/* Ramp functionality ***********************/

/* Structure typedef for ramp functionality */
typedef struct
{
    sint32 State;                 /* Internal state value                   */
    sint8  Dir;                   /* State for jump functionality           */
    sint8  Switch;                /* State for switch functionality         */
} SrvX_StateRamp_t;


/* Structure typedef for slope parameters   */
typedef struct
{
    uint32 SlopePos_C;            /* Slope if the ramp has to be increased  */
    uint32 SlopeNeg_C;            /* Slope if the ramp has to be decreased  */
} SrvX_ParamRamp_t;


/* Defines for ramp functionality           */
#define SRVX_RAMPDIR_RISING        (1)   /* Definition for a rising ramp                          */
#define SRVX_RAMPDIR_FALLING       (-1)  /* Definition for a fallin ramp                          */
#define SRVX_RAMPDIR_END           (0)   /* Definition for a ramp that has reached its end value  */

#define SRVX_RAMPSWITCH_XA         (1)   /* Definition for switch functionality: Use target A     */
#define SRVX_RAMPSWITCH_XB         (-1)  /* Definition for switch functionality: Use target B     */


/* Debounce element *************************/

/* SrvX_DebounceBooleanParam_t: Parameter struct for SrvX_DebounceBoolean_B service.              */
/* Contains the times for Low and High transition.                                                */
typedef struct
{
    uint16 TimeHighLow_C;         /* Time for a High to Low transition                            */
    uint16 TimeLowHigh_C;         /* Time for a Low to High transition                            */
} SrvX_DebounceBooleanParam_t;


/* SrvX_DebounceBooleanState_t: struct for SrvX_DebounceBoolean_B service.                        */
/* Saves the internal state and the software timers that are needed for debouncing.               */
typedef struct
{
    sint32 Timer;                 /* Timer for internal state                                     */
    bool   XOld;                  /* Old input value from last call                               */
} SrvX_DebounceBooleanState_t;


/*
 **********************************************************************************************************************
 * Configurable declarations
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 *
 *
 *
 * DEBOUNCE
 *
 *
 *
 **********************************************************************************************************************
 */

/* SRVX_DEBOUNCEBOOLEANINIT_LOCATION *********************************************************************************/
#if (SRVX_DEBOUNCEBOOLEANINIT_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_DebounceBooleanInit(SrvX_DebounceBooleanState_t * const State_cpst, bool X_b);

#elif (SRVX_DEBOUNCEBOOLEANINIT_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DebounceBooleanInit SrvX_DebounceBooleanInit_inline

#elif (SRVX_DEBOUNCEBOOLEANINIT_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_DebounceBooleanInit(SrvX_DebounceBooleanState_t * const State_cpst,
                                                               bool X_b));
#else
    #error >>>> 'Configuration for SrvX_DebounceBooleanInit is not supported'

/* SRVX_DEBOUNCEBOOLEANINIT_LOCATION */
#endif


/* SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION *****************************************************************************/
#if (SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_DebounceBooleanSetParam(SrvX_DebounceBooleanParam_t * const Param_cpcst,
                                             uint16 TimeHighLow_u16, uint16 TimeLowHigh_u16);

#elif (SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DebounceBooleanSetParam SrvX_DebounceBooleanSetParam_inline

#elif (SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_DebounceBooleanSetParam(SrvX_DebounceBooleanParam_t * const Param_cpcst,
                                                                   uint16 TimeHighLow_u16, uint16 TimeLowHigh_u16));
#else
    #error >>>> 'Configuration for SrvX_DebounceBooleanSetParam is not supported'

/* SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION */
#endif


/* SRVX_DEBOUNCEBOOLEAN_B_LOCATION ***********************************************************************************/
#if   (SRVX_DEBOUNCEBOOLEAN_B_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_DebounceBoolean_B(bool X_b, SrvX_DebounceBooleanState_t * const State_cpst,
                                       const SrvX_DebounceBooleanParam_t * const Param_cpcst, sint32 dT_s32);

#elif (SRVX_DEBOUNCEBOOLEAN_B_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_DebounceBoolean_B can\'t be inlined: Configuration not supported'

#elif (SRVX_DEBOUNCEBOOLEAN_B_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_DebounceBoolean_B(bool X_b,
                                                             SrvX_DebounceBooleanState_t * const State_cpst,
                                                             const SrvX_DebounceBooleanParam_t * const Param_cpcst,
                                                             sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_DebounceBoolean_B not supported'

/* SRVX_DEBOUNCEBOOLEAN_B_LOCATION */
#endif


/*
 **********************************************************************************************************************
 *
 *
 *
 * TURN ON / OFF DELAY
 *
 *
 *
 **********************************************************************************************************************
 */

/* SRVX_TRNONDLYBOOLEAN_B_LOCATION ***********************************************************************************/
#if (SRVX_TRNONDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_TrnOnDlyBoolean_B(bool Signal_b, sint32 * const Time_cps32, sint32 DelayTime_s32, sint32 dT_s32);

#elif (SRVX_TRNONDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_TrnOnDlyBoolean_B SrvX_TrnOnDlyBoolean_B_inline

#elif (SRVX_TRNONDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_TrnOnDlyBoolean_B(bool Signal_b, sint32 * const Time_cps32,
                                                             sint32 DelayTime_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_TrnOnDlyBoolean_B is not supported'

/* SRVX_TRNONDLYBOOLEAN_B_LOCATION */
#endif


/* SRVX_TRNONDLYBOOLEANINIT_LOCATION *********************************************************************************/
#if (SRVX_TRNONDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_TrnOnDlyBooleanInit(sint32 * const Time_cps32);

#elif (SRVX_TRNONDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_TrnOnDlyBooleanInit SrvX_TrnOnDlyBooleanInit_inline

#elif (SRVX_TRNONDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_TrnOnDlyBooleanInit(sint32 * const Time_cps32));

#else
    #error >>>> 'Configuration for SrvX_TrnOnDlyBooleanInit is not supported'

/* SRVX_TRNONDLYBOOLEANINIT_LOCATION */
#endif


/* SRVX_TRNOFFDLYBOOLEAN_B_LOCATION **********************************************************************************/
#if (SRVX_TRNOFFDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_TrnOffDlyBoolean_B(bool Signal_b, sint32 * const Time_cps32, sint32 DelayTime_s32, sint32 dT_s32);

#elif (SRVX_TRNOFFDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_TrnOffDlyBoolean_B SrvX_TrnOffDlyBoolean_B_inline

#elif (SRVX_TRNOFFDLYBOOLEAN_B_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_TrnOffDlyBoolean_B(bool Signal_b, sint32 * const Time_cps32,
                                                              sint32 DelayTime_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_TrnOffDlyBoolean_B is not supported'

/* SRVX_TRNOFFDLYBOOLEAN_B_LOCATION */
#endif


/* SRVX_TRNOFFDLYBOOLEANINIT_LOCATION ********************************************************************************/
#if (SRVX_TRNOFFDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_TrnOffDlyBooleanInit(sint32 * const Time_cps32);

#elif (SRVX_TRNOFFDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_TrnOffDlyBooleanInit SrvX_TrnOffDlyBooleanInit_inline

#elif (SRVX_TRNOFFDLYBOOLEANINIT_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_TrnOffDlyBooleanInit(sint32 * const Time_cps32));

#else
    #error >>>> 'Configuration for SrvX_TrnOffDlyBooleanInit is not supported'

/* SRVX_TRNOFFDLYBOOLEANINIT_LOCATION */
#endif


/*
 **********************************************************************************************************************
 *
 *
 *
 * RAMP SERVICES
 *
 *
 *
 **********************************************************************************************************************
 */


/* SRVX_RAMPCALC_LOCATION ********************************************************************************************/
#if   (SRVX_RAMPCALC_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_RampCalc(sint32 X_s32, SrvX_StateRamp_t * const State_cpst,
                              const SrvX_ParamRamp_t * const Param_cpcst, sint32 dT_s32);

#elif (SRVX_RAMPCALC_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_RampCalc can\'t be inlined: Configuration not supported'

#elif (SRVX_RAMPCALC_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_RampCalc(sint32 X_s32, SrvX_StateRamp_t * const State_cpst,
                                                    const SrvX_ParamRamp_t * const Param_cpcst, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_RampCalc not supported'

/* SRVX_RAMPCALC_LOCATION */
#endif


/* SRVX_RAMPCALCJUMP_LOCATION *****************************************************************************************/
#if (SRVX_RAMPCALCJUMP_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_RampCalcJump(sint32 X_s32, SrvX_StateRamp_t * const State_cpst);

#elif (SRVX_RAMPCALCJUMP_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampCalcJump SrvX_RampCalcJump_inline

#elif (SRVX_RAMPCALCJUMP_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_RampCalcJump(sint32 X_s32, SrvX_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvX_RampCalcJump is not supported'

/* SRVX_RAMPCALCJUMP_LOCATION */
#endif


/* SRVX_RAMPCALCSWITCH_S32_LOCATION **********************************************************************************/
#if (SRVX_RAMPCALCSWITCH_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_RampCalcSwitch_S32(sint32 Xa_s32, sint32 Xb_s32, bool Switch_b,
                                          SrvX_StateRamp_t * const State_cpst);

#elif (SRVX_RAMPCALCSWITCH_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampCalcSwitch_S32 SrvX_RampCalcSwitch_S32_inline

#elif (SRVX_RAMPCALCSWITCH_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_RampCalcSwitch_S32(sint32 Xa_s32, sint32 Xb_s32, bool Switch_b,
                                                                SrvX_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvX_RampCalcSwitch_S32 is not supported'

/* SRVX_RAMPCALCSWITCH_S32_LOCATION */
#endif


/* SRVX_RAMPOUT_S32_LOCATION *****************************************************************************************/
#if (SRVX_RAMPOUT_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_RampOut_S32(const SrvX_StateRamp_t * const State_cpst);

#elif (SRVX_RAMPOUT_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampOut_S32 SrvX_RampOut_S32_inline

#elif (SRVX_RAMPOUT_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_RampOut_S32(const SrvX_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvX_RampOut_S32 is not supported'

/* SRVX_RAMPOUT_S32_LOCATION */
#endif


/* SRVX_RAMPSETPARAM_LOCATION ****************************************************************************************/
#if (SRVX_RAMPSETPARAM_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_RampSetParam(SrvX_ParamRamp_t * const Param_pcst, uint32 SlopeValPos_u32, uint32 SlopeValNeg_u32);

#elif (SRVX_RAMPSETPARAM_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampSetParam SrvX_RampSetParam_inline

#elif (SRVX_RAMPSETPARAM_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_RampSetParam(SrvX_ParamRamp_t * const Param_pcst,
                                                        uint32 SlopeValPos_u32, uint32 SlopeValNeg_u32));

#else
    #error >>>> 'Configuration for SrvX_RampSetParam is not supported'

/* SRVX_RAMPSETPARAM_LOCATION */
#endif


/* SRVX_RAMPINITSTATE_LOCATION ***************************************************************************************/
#if (SRVX_RAMPINITSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_RampInitState(SrvX_StateRamp_t * const State_cpst, sint32 Val_s32);

#elif (SRVX_RAMPINITSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampInitState SrvX_RampInitState_inline

#elif (SRVX_RAMPINITSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_RampInitState(SrvX_StateRamp_t * const State_cpst, sint32 Val_s32));

#else
    #error >>>> 'Configuration for SrvX_RampInitState is not supported'

/* SRVX_RAMPINITSTATE_LOCATION */
#endif


/* SRVX_RAMPCHECKACTIVITY_LOCATION ***********************************************************************************/
#if (SRVX_RAMPCHECKACTIVITY_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_RampCheckActivity(const SrvX_StateRamp_t * const State_cpcst);

#elif (SRVX_RAMPCHECKACTIVITY_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampCheckActivity SrvX_RampCheckActivity_inline

#elif (SRVX_RAMPCHECKACTIVITY_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_RampCheckActivity(const SrvX_StateRamp_t * const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_RampCheckActivity is not supported'

/* SRVX_RAMPCHECKACTIVITY_LOCATION */
#endif


/* SRVX_RAMPGETSWITCHPOS_LOCATION ************************************************************************************/
#if (SRVX_RAMPGETSWITCHPOS_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_RampGetSwitchPos(const SrvX_StateRamp_t * const State_cpcst);

#elif (SRVX_RAMPGETSWITCHPOS_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_RampGetSwitchPos SrvX_RampGetSwitchPos_inline

#elif (SRVX_RAMPGETSWITCHPOS_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_RampGetSwitchPos(const SrvX_StateRamp_t * const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_RampGetSwitchPos is not supported'

/* SRVX_RAMPGETSWITCHPOS_LOCATION */
#endif


/* _SRVX_CONTROL_H */
#endif
