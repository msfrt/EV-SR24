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
 * $Filename__:srvf_control.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_control$ 
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
 *   Migrated from ClearCase, derived from B_SRVF.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_CONTROL_H
#define _SRVF_CONTROL_H


/* Structure typedef for ramp functionality */
typedef struct
{
  real32 State;              /* Internal state value                   */
  sint8  Dir;                /* State for jump functionality           */
  sint8  Switch;             /* State for switch functionality         */
} SrvF_StateRamp_t;


/* Structure typedef for slope parameters   */
typedef struct
{
    real32 SlopePos_C;       /* Slope if the ramp has to be increased  */
    real32 SlopeNeg_C;       /* Slope if the ramp has to be decreased  */
} SrvF_ParamRamp_t;


/* Defines for ramp functionality           */
#define SRVF_RAMPDIR_RISING        (1)   /* Definition for a rising ramp                          */
#define SRVF_RAMPDIR_FALLING       (-1)  /* Definition for a fallin ramp                          */
#define SRVF_RAMPDIR_END           (0)   /* Definition for a ramp that has reached its end value  */

#define SRVF_RAMPSWITCH_XA         (1)   /* Definition for switch functionality: Use target A     */
#define SRVF_RAMPSWITCH_XB         (-1)  /* Definition for switch functionality: Use target B     */


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


/* SRVF_RAMPCALC_LOCATION ********************************************************************************************/
#if   (SRVF_RAMPCALC_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_RampCalc(real32 X_r32, SrvF_StateRamp_t * const State_cpst,
                              const SrvF_ParamRamp_t * const Param_cpcst, real32 dT_r32);

#elif (SRVF_RAMPCALC_LOCATION == SRVF_LOCATION_INLINE)

    #error >>>> 'The function SrvF_RampCalc can\'t be inlined: Configuration not supported'

#elif (SRVF_RAMPCALC_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_RampCalc(real32 X_r32, SrvF_StateRamp_t * const State_cpst,
                                                    const SrvF_ParamRamp_t * const Param_cpcst, real32 dT_r32));

#else
    #error >>>> 'Configuration for SrvF_RampCalc not supported'

/* SRVF_RAMPCALC_LOCATION */
#endif


/* SRVF_RAMPCALCJUMP_LOCATION *****************************************************************************************/
#if (SRVF_RAMPCALCJUMP_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_RampCalcJump(real32 X_r32, SrvF_StateRamp_t * const State_cpst);

#elif (SRVF_RAMPCALCJUMP_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampCalcJump SrvF_RampCalcJump_inline

#elif (SRVF_RAMPCALCJUMP_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_RampCalcJump(real32 X_r32, SrvF_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvF_RampCalcJump is not supported'

/* SRVF_RAMPCALCJUMP_LOCATION */
#endif


/* SRVF_RAMPCALCSWITCH_R32_LOCATION **********************************************************************************/
#if (SRVF_RAMPCALCSWITCH_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_RampCalcSwitch_R32(real32 Xa_r32, real32 Xb_r32, bool Switch_b,
                                          SrvF_StateRamp_t * const State_cpst);

#elif (SRVF_RAMPCALCSWITCH_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampCalcSwitch_R32 SrvF_RampCalcSwitch_R32_inline

#elif (SRVF_RAMPCALCSWITCH_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_RampCalcSwitch_R32(real32 Xa_r32, real32 Xb_r32, bool Switch_b,
                                                                SrvF_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvF_RampCalcSwitch_R32 is not supported'

/* SRVF_RAMPCALCSWITCH_R32_LOCATION */
#endif


/* SRVF_RAMPOUT_R32_LOCATION *****************************************************************************************/
#if (SRVF_RAMPOUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_RampOut_R32(const SrvF_StateRamp_t * const State_cpst);

#elif (SRVF_RAMPOUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampOut_R32 SrvF_RampOut_R32_inline

#elif (SRVF_RAMPOUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_RampOut_R32(const SrvF_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvF_RampOut_R32 is not supported'

/* SRVF_RAMPOUT_R32_LOCATION */
#endif


/* SRVF_RAMPSETPARAM_LOCATION ****************************************************************************************/
#if (SRVF_RAMPSETPARAM_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_RampSetParam(SrvF_ParamRamp_t * const Param_pcst, real32 SlopeValPos_r32, real32 SlopeValNeg_r32);

#elif (SRVF_RAMPSETPARAM_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampSetParam SrvF_RampSetParam_inline

#elif (SRVF_RAMPSETPARAM_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_RampSetParam(SrvF_ParamRamp_t * const Param_pcst,
                                                        real32 SlopeValPos_r32, real32 SlopeValNeg_r32));

#else
    #error >>>> 'Configuration for SrvF_RampSetParam is not supported'

/* SRVF_RAMPSETPARAM_LOCATION */
#endif


/* SRVF_RAMPINITSTATE_LOCATION ***************************************************************************************/
#if (SRVF_RAMPINITSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_RampInitState(SrvF_StateRamp_t * const State_cpst, real32 Val_r32);

#elif (SRVF_RAMPINITSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampInitState SrvF_RampInitState_inline

#elif (SRVF_RAMPINITSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_RampInitState(SrvF_StateRamp_t * const State_cpst, real32 Val_r32));

#else
    #error >>>> 'Configuration for SrvF_RampInitState is not supported'

/* SRVF_RAMPINITSTATE_LOCATION */
#endif


/* SRVF_RAMPCHECKACTIVITY_LOCATION ***********************************************************************************/
#if (SRVF_RAMPCHECKACTIVITY_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_RampCheckActivity(const SrvF_StateRamp_t * const State_cpst);

#elif (SRVF_RAMPCHECKACTIVITY_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampCheckActivity SrvF_RampCheckActivity_inline

#elif (SRVF_RAMPCHECKACTIVITY_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_RampCheckActivity(const SrvF_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvF_RampCheckActivity is not supported'

/* SRVF_RAMPCHECKACTIVITY_LOCATION */
#endif


/* SRVF_RAMPGETSWITCHPOS_LOCATION ************************************************************************************/
#if (SRVF_RAMPGETSWITCHPOS_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_RampGetSwitchPos(const SrvF_StateRamp_t * const State_cpst);

#elif (SRVF_RAMPGETSWITCHPOS_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RampGetSwitchPos SrvF_RampGetSwitchPos_inline

#elif (SRVF_RAMPGETSWITCHPOS_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_RampGetSwitchPos(const SrvF_StateRamp_t * const State_cpst));

#else
    #error >>>> 'Configuration for SrvF_RampGetSwitchPos is not supported'

/* SRVF_RAMPGETSWITCHPOS_LOCATION */
#endif


/*
 **********************************************************************************************************************
 *
 *
 *
 * HYSTERESIS SERVICES
 *
 *
 *
 **********************************************************************************************************************
 */


/* SRVF_SWITCHHYSTLR_R32_B_LOCATION ************************************************/
#if (SRVF_SWITCHHYSTLR_R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_SwitchHystLR_R32_B(real32 X_r32, real32 Lsp_r32, real32 Rsp_r32, bool * State_pb);

#elif (SRVF_SWITCHHYSTLR_R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_SwitchHystLR_R32_B SrvF_SwitchHystLR_R32_B_inline

#elif (SRVF_SWITCHHYSTLR_R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_SwitchHystLR_R32_B(real32 X_r32, real32 Lsp_r32, real32 Rsp_r32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvF_SwitchHystLR_R32_B is not supported'

/* SRVF_SWITCHHYSTLR_R32_B_LOCATION */
#endif

/* SRVF_SWITCHHYSTDR_R32_B_LOCATION ************************************************/
#if (SRVF_SWITCHHYSTDR_R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_SwitchHystDR_R32_B(real32 X_r32, real32 Delta_r32, real32 Rsp_r32, bool * State_pb);

#elif (SRVF_SWITCHHYSTDR_R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_SwitchHystDR_R32_B SrvF_SwitchHystDR_R32_B_inline

#elif (SRVF_SWITCHHYSTDR_R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_SwitchHystDR_R32_B(real32 X_r32, real32 Delta_r32, real32 Rsp_r32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvF_SwitchHystDR_R32_B is not supported'

/* SRVF_SWITCHHYSTDR_R32_B_LOCATION */
#endif

/* SRVF_SWITCHHYSTLD_R32_B_LOCATION ************************************************/
#if (SRVF_SWITCHHYSTLD_R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_SwitchHystLD_R32_B(real32 X_r32, real32 Lsp_r32, real32 Delta_r32, bool * State_pb);

#elif (SRVF_SWITCHHYSTLD_R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_SwitchHystLD_R32_B SrvF_SwitchHystLD_R32_B_inline

#elif (SRVF_SWITCHHYSTLD_R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_SwitchHystLD_R32_B(real32 X_r32, real32 Lsp_r32, real32 Delta_r32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvF_SwitchHystLD_R32_B is not supported'

/* SRVF_SWITCHHYSTLD_R32_B_LOCATION */
#endif

/* SRVF_SWITCHHYSTCHD_R32_B_LOCATION ************************************************/
#if (SRVF_SWITCHHYSTCHD_R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_SwitchHystCHD_R32_B(real32 X_r32, real32 Center_r32, real32 HalfDelta_r32, bool * State_pb);

#elif (SRVF_SWITCHHYSTCHD_R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_SwitchHystCHD_R32_B SrvF_SwitchHystCHD_R32_B_inline

#elif (SRVF_SWITCHHYSTCHD_R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_SwitchHystCHD_R32_B(real32 X_r32, real32 Center_r32, real32 HalfDelta_r32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvF_SwitchHystCHD_R32_B is not supported'

/* SRVF_SWITCHHYSTCHD_R32_B_LOCATION */
#endif


/* _SRVF_CONTROL_H */
#endif
