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
 * $Filename__:srvf_control_inl.h$ 
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
 * $Name______:srvf_control_inl$ 
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

#ifndef _SRVF_CONTROL_INL_H
#define _SRVF_CONTROL_INL_H


/*
 **********************************************************************************************************************
 *
 * List of functions:
 *
 * SrvF_SwitchHystLR_R32_B            SrvF_SwitchHystDR_R32_B
 * SrvF_SwitchHystLD_R32_B            SrvF_SwitchHystCHD_R32_B
 *
 * SrvF_RampCalcJump_inline           SrvF_RampCalcSwitch_R32_inline       SrvF_RampOut_R32_inline
 * SrvF_RampSetParam_inline           SrvF_RampInitState_inline            SrvF_RampCheckActivity_inline
 * SrvF_RampGetSwitchPos_inline
 *
 **********************************************************************************************************************
 */


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


MEMLAY_USE_FORCE_INLINE(bool SrvF_SwitchHystLR_R32_B_inline(real32 X_r32, real32 Lsp_r32, real32 Rsp_r32,
                                                            bool * State_pb))
{
    if(X_r32 > Rsp_r32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_r32 < Lsp_r32)
        {
            *State_pb = FALSE;
        }
        /* No else: Previous state will be returned */
    }

    return *State_pb;
}


MEMLAY_USE_FORCE_INLINE(bool SrvF_SwitchHystDR_R32_B_inline(real32 X_r32, real32 Delta_r32, real32 Rsp_r32,
                                                            bool * State_pb))
{
    return SrvF_SwitchHystLR_R32_B_inline(X_r32, Rsp_r32-Delta_r32, Rsp_r32, State_pb);
}


MEMLAY_USE_FORCE_INLINE(bool SrvF_SwitchHystLD_R32_B_inline(real32 X_r32, real32 Lsp_r32, real32 Delta_r32,
                                                            bool * State_pb))
{
    return SrvF_SwitchHystLR_R32_B_inline(X_r32, Lsp_r32, Lsp_r32 + Delta_r32, State_pb);
}


MEMLAY_USE_FORCE_INLINE(bool SrvF_SwitchHystCHD_R32_B_inline(real32 X_r32, real32 Center_r32, real32 HalfDelta_r32,
                                                             bool * State_pb))
{
    return SrvF_SwitchHystLR_R32_B_inline(X_r32, Center_r32-HalfDelta_r32, Center_r32 + HalfDelta_r32, State_pb);
}


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


/**
 **********************************************************************************************************************
 * Activation service for Jump Functionality of ramp functionality
 *
 * Activates Jump Functionality. Must be called before ramp calc service is called.
 *
 * \param   real32 X_r32                         Input value X
 * \param   SrvF_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  real32                               None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_RampCalcJump_inline(real32 X_r32, SrvF_StateRamp_t * const State_cpst))
{
    real32 delta_r32;

    delta_r32 = X_r32 - State_cpst->State;

    if (((delta_r32 < 0.0F) && (State_cpst->Dir == SRVF_RAMPDIR_RISING)) ||
        ((delta_r32 > 0.0F) && (State_cpst->Dir == SRVF_RAMPDIR_FALLING)))
    {
        State_cpst->State = X_r32;
        State_cpst->Dir   = SRVF_RAMPDIR_END;
    }
}


/**
 **********************************************************************************************************************
 * Activation service for Switch Functionality of ramp functionality
 *
 * Activates Switch Functionality. Must be called before ramp calc service is called.
 *
 * \param   real32 Xa_r32                        Value for input A
 * \param   real32 Xb_r32                        Value for input B
 * \param   bool Switch_b                        Switch between input A and B
 * \param   SrvF_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  real32                               Return value, is input A or B based on parameter Switch_b
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_RampCalcSwitch_R32_inline(real32 Xa_r32, real32 Xb_r32, bool Switch_b,
                                                              SrvF_StateRamp_t * const State_cpst))
{
    real32 X_r32;

    if (Switch_b != FALSE)
    {
        X_r32 = Xa_r32;

        if (State_cpst->Switch != SRVF_RAMPSWITCH_XA)
        {
            State_cpst->Dir    = SRVF_RAMPDIR_END;
            State_cpst->Switch = SRVF_RAMPSWITCH_XA;
        }
    }
    else
    {
        X_r32 = Xb_r32;

        if (State_cpst->Switch != SRVF_RAMPSWITCH_XB)
        {
            State_cpst->Dir    = SRVF_RAMPDIR_END;
            State_cpst->Switch = SRVF_RAMPSWITCH_XB;
        }
    }

    return (X_r32);
}


/**
 **********************************************************************************************************************
 * Out service for ramp functionality
 *
 * Returns the real32 value of ramp functionality.
 *
 * \param   const SrvF_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  real32                                     None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_RampOut_R32_inline(const SrvF_StateRamp_t * const State_cpst))
{
    return (State_cpst->State);
}


/**
 **********************************************************************************************************************
 * Setting positive and negative slope of ramp functionality
 *
 * With SrvF_RampSetParam positive and negative slope values can be set to parameter structure.
 *
 *
 * \param   SrvF_ParamRamp_t * const Param_pcst   Boolean input value
 * \param   real32 SlopeValPos_r32                Positive slope value to be set
 * \param   real32 SlopeValNeg_r32                Negative slope value to be set
 * \return  void                                  None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_RampSetParam_inline(SrvF_ParamRamp_t * const Param_pcst,
                                                      real32 SlopeValPos_r32, real32 SlopeValNeg_r32))
{
    Param_pcst->SlopePos_C = SlopeValPos_r32;
    Param_pcst->SlopeNeg_C = SlopeValNeg_r32;
}


/**
 **********************************************************************************************************************
 * Setting initial value of internal states of ramp functionality
 *
 * With SrvF_RampInitState initial values of states structure can be set for ramp functionality
 *
 * \param   SrvF_StateRamp_t * const State_cpst   Pointer to state structure of ramp functionality
 * \param   real32 Val_r32                        Initial value to be set
 * \return  void                                  None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_RampInitState_inline(SrvF_StateRamp_t * const State_cpst, real32 Val_r32))
{
    State_cpst->State  = Val_r32;
    State_cpst->Dir    = SRVF_RAMPDIR_END;
    State_cpst->Switch = SRVF_RAMPSWITCH_XA;
}


/**
 **********************************************************************************************************************
 * Check if ramp target is reached
 *
 * SrvF_RampCheckActivity checks if ramp service has finished ramping to target value or ramp service is still working.
 *
 * \param   SrvF_StateRamp_t * const State_cpst   Pointer to state of ramp service
 * \return  bool                                  TRUE: Target is reached, FALSE: Target is not reached
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_RampCheckActivity_inline(const SrvF_StateRamp_t * const State_cpst))
{
    return ((bool)(State_cpst->Dir != SRVF_RAMPDIR_END) ? TRUE : FALSE);
}


/**
 **********************************************************************************************************************
 * Get information which input value (A or B) will currently be reached from ramp switch functionality
 *
 * Current information will be given readout from flags of ramp switch service
 *
 * \param   SrvF_StateRamp_t * const State_cpst   Pointer to flags of ramp switch service
 * \return  bool                                  TRUE: Ramp is switched to input A, FALSE: Ramp is switched to input B
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_RampGetSwitchPos_inline(const SrvF_StateRamp_t * const State_cpst))
{
    return ((bool)(State_cpst->Switch > 0) ? TRUE : FALSE);
}


/* _SRVF_CONTROL_INL_H */
#endif
