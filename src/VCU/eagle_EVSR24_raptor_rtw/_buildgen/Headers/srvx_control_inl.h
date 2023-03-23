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
 * $Filename__:srvx_control_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Migrated from ClearCase, Based on B_SRVX.13.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:19.12.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_control_inl$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_CONTROL_INL_H
#define _SRVX_CONTROL_INL_H


/*
 **********************************************************************************************************************
 * List of functions
 *
 * SrvX_DebounceBooleanInit_inline    SrvX_DebounceBooleanSetParam_inline
 *
 * SrvX_TrnOnDlyBooleanInit_inline    SrvX_TrnOnDlyBoolean_B_inline
 * SrvX_TrnOffDlyBooleanInit_inline   SrvX_TrnOffDlyBoolean_B_inline
 *
 * SrvX_RampCalcJump_inline           SrvX_RampCalcSwitch_S32_inline       SrvX_RampOut_S32_inline
 * SrvX_RampSetParam_inline           SrvX_RampInitState_inline            SrvX_RampCheckActivity_inline
 * SrvX_RampGetSwitchPos_inline
 *
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


/**
 **********************************************************************************************************************
 * Initialization of internal state of service SrvX_DebounceBoolean_B
 *
 * \param   SrvX_DebounceBooleanState_t * const State_cpst      Constant pointer of state structure
 * \param   bool X_b                                            Value for old X value
 * \return  none
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_DebounceBooleanInit_inline(SrvX_DebounceBooleanState_t * const State_cpst, bool X_b))
{
    State_cpst->Timer = 0L;
    State_cpst->XOld  = X_b;
}


/**
 **********************************************************************************************************************
 * Initialization of parameters of service SrvX_DebounceBoolean_B
 *
 * \param   SrvX_DebounceBooleanParam_t * const Param_cpcst     Pointer to parameter structure
 * \param   uint16 TimeHighLow_u16                              Time value for high-low switch of boolean signal
 * \param   uint16 TimeLowHigh_u16                              Time value for low-high switch of boolean signal
 * \return  none
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_DebounceBooleanSetParam_inline(SrvX_DebounceBooleanParam_t * const Param_cpcst,
                                                                 uint16 TimeHighLow_u16, uint16 TimeLowHigh_u16))
{
    Param_cpcst->TimeLowHigh_C = TimeLowHigh_u16;
    Param_cpcst->TimeHighLow_C = TimeHighLow_u16;
}


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

/**
 **********************************************************************************************************************
 * Initialization of internal time value for SrvX_TrnOnDlyS32
 *
 * \param   sint32 * const Time_cps32      Constant pointer of internal timer value
 * \return  none
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_TrnOnDlyBooleanInit_inline(sint32 * const Time_cps32))
{
    *Time_cps32 = 0;
}


/**
 **********************************************************************************************************************
 * Turn on delay of a boolean variable
 *
 * SrvX_TrnOnDlyS32_B detects if an boolean input value is set to "TRUE" for a period of time (given as DelayTime).
 * In that case TRUE is returned. In all other cases FALSE is returned.
 *
 * Conditions:
 * DelayTime_s32 must be > 0 and should not be set to MAXSINT32.
 *
 * \param   bool           Signal_b        Boolean input value
 * \param   sint32 * const Time_cps32      Constant pointer of internal timer value
 * \param   sint32         DelayTime_s32   Delay time
 * \param   sint32         dT_s32          Sample time dT
 * \return  Delayed boolean input value
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvX_TrnOnDlyBoolean_B_inline(bool Signal_b, sint32 * const Time_cps32,
                                                           sint32 DelayTime_s32, sint32 dT_s32))
{
    bool retval_b;


    /* Check if input value is still set */
    if (Signal_b != FALSE)
    {
        /* Check if delay time is expired */
        if (*Time_cps32 < DelayTime_s32)
        {
            /* Increment internal time value (basic service is used to avoid an overrun) */
            *Time_cps32 = SrvB_Add_S32S32_S32_inline(*Time_cps32, dT_s32);

            /* DelayTime is not expired */
            retval_b = FALSE;
        }
        else
        {
            /* Input value was set longer or exact for DelayTime */
            retval_b = TRUE;
        }
    }
    else
    {
        /* Input value was not set, reset internal timer */
        *Time_cps32 = 0;
        /* DelayTime was not expired */
        retval_b = FALSE;
    }

    return retval_b;
}


/**
 **********************************************************************************************************************
 * Initialization of internal time value for SrvX_TrnOffDlyS32
 *
 * \param   sint32 * const Time_cps32      Constant pointer of internal timer value
 * \return  none
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_TrnOffDlyBooleanInit_inline(sint32 * const Time_cps32))
{
    *Time_cps32 = MAXSINT32;
}


/**
 **********************************************************************************************************************
 * Turn off delay of a boolean variable
 *
 * SrvX_TrnOffDlyS32_B detects if an boolean input value is set to "FALSE" for a period of time (given as DelayTime).
 * In that case FALSE is returned. In all other cases TRUE is returned.
 *
 * Conditions:
 * DelayTime_s32 must be > 0 and should not be set to MAXSINT32.
 *
 * \param   bool           Signal_b        Boolean input value
 * \param   sint32 * const Time_cps32      Constant pointer of internal timer value
 * \param   sint32         DelayTime_s32   Delay time
 * \param   sint32         dT_s32          Sample time dT
 * \return  Delayed boolean input value
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvX_TrnOffDlyBoolean_B_inline(bool Signal_b, sint32 * const Time_cps32,
                                                            sint32 DelayTime_s32, sint32 dT_s32))
{
    bool retval_b;


    /* Check if input value is still not set */
    if (Signal_b == FALSE)
    {
        /* Check if delay time is expired */
        if (*Time_cps32 < DelayTime_s32)
        {
            /* Increment internal time value (basic service is used to avoid an overrun) */
            *Time_cps32 = SrvB_Add_S32S32_S32_inline(*Time_cps32, dT_s32);

            /* DelayTime is not expired */
            retval_b = TRUE;
        }
        else
        {
            /* Internal time value is set to maximum value because input is FALSE and output has to stay at FALSE */
            /* until input will be set to TRUE.                                                                   */
            *Time_cps32 = MAXSINT32;

            /* Input value was not set longer or exact for DelayTime */
            retval_b = FALSE;
        }
    }
    else
    {
        /* Input value was set, reset internal timer */
        *Time_cps32 = 0;
        /* DelayTime was not expired */
        retval_b = TRUE;
    }

    return retval_b;
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
 * \param   sint32 X_s32                         Input value X
 * \param   SrvX_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  sint32                               None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_RampCalcJump_inline(sint32 X_s32, SrvX_StateRamp_t * const State_cpst))
{
    if ((SrvB_Sub_S32S32_S32_inline(X_s32, State_cpst->State) * State_cpst->Dir) < 0)
    {
        State_cpst->State = X_s32;
        State_cpst->Dir = SRVX_RAMPDIR_END;
    }
}


/**
 **********************************************************************************************************************
 * Activation service for Switch Functionality of ramp functionality
 *
 * Activates Switch Functionality. Must be called before ramp calc service is called.
 *
 * \param   sint32 Xa_s32                        Value for input A
 * \param   sint32 Xb_s32                        Value for input B
 * \param   bool Switch_b                        Switch between input A and B
 * \param   SrvX_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  sint32                               Return value, is input A or B based on parameter Switch_b
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_RampCalcSwitch_S32_inline(sint32 Xa_s32, sint32 Xb_s32, bool Switch_b,
                                                              SrvX_StateRamp_t * const State_cpst))
{
    sint32 X_s32;

    if (Switch_b != FALSE)
    {
        X_s32 = Xa_s32;

        if (State_cpst->Switch != SRVX_RAMPSWITCH_XA)
        {
            State_cpst->Dir = SRVX_RAMPDIR_END;
            State_cpst->Switch = SRVX_RAMPSWITCH_XA;
        }
    }
    else
    {
        X_s32 = Xb_s32;

        if (State_cpst->Switch != SRVX_RAMPSWITCH_XB)
        {
            State_cpst->Dir = SRVX_RAMPDIR_END;
            State_cpst->Switch = SRVX_RAMPSWITCH_XB;
        }
    }

    return (X_s32);
}


/**
 **********************************************************************************************************************
 * Out service for ramp functionality
 *
 * Returns the sint32 value of ramp functionality.
 *
 * \param   const SrvX_StateRamp_t * const State_cpst  Pointer to status structure of ramp functionality
 * \return  sint32                                     None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_RampOut_S32_inline(const SrvX_StateRamp_t * const State_cpst))
{
    return (State_cpst->State);
}


/**
 **********************************************************************************************************************
 * Setting positive and negative slope of ramp functionality
 *
 * With SrvX_RampSetParam positive and negative slope values can be set to parameter structure.
 *
 *
 * \param   SrvX_ParamRamp_t * const Param_pcst   Boolean input value
 * \param   uint32 SlopeValPos_u32                Positive slope value to be set
 * \param   uint32 SlopeValNeg_u32                Negative slope value to be set
 * \return  void                                  None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_RampSetParam_inline(SrvX_ParamRamp_t * const Param_pcst,
                                                      uint32 SlopeValPos_u32, uint32 SlopeValNeg_u32))
{
    Param_pcst->SlopePos_C = SlopeValPos_u32;
    Param_pcst->SlopeNeg_C = SlopeValNeg_u32;
}


/**
 **********************************************************************************************************************
 * Setting initial value of internal states of ramp functionality
 *
 * With SrvX_RampInitState initial values of states structure can be set for ramp functionality
 *
 * \param   SrvX_StateRamp_t * const State_cpst   Pointer to state structure of ramp functionality
 * \param   sint32 Val_s32                        Initial value to be set
 * \return  void                                  None
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_RampInitState_inline(SrvX_StateRamp_t * const State_cpst, sint32 Val_s32))
{
    State_cpst->State  = Val_s32;
    State_cpst->Dir    = SRVX_RAMPDIR_END;
    State_cpst->Switch = SRVX_RAMPSWITCH_XA;
}


/**
 **********************************************************************************************************************
 * Check if ramp target is reached
 *
 * SrvX_RampCheckActivity checks if ramp service has finished ramping to target value or ramp service is still working.
 *
 * \param   SrvX_StateRamp_t * const State_cpst   Pointer to state of ramp service
 * \return  bool                                  TRUE: Target is reached, FALSE: Target is not reached
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvX_RampCheckActivity_inline(const SrvX_StateRamp_t * const State_cpcst))
{
    return ((bool)(State_cpcst->Dir != SRVX_RAMPDIR_END) ? TRUE : FALSE);
}


/**
 **********************************************************************************************************************
 * Get information which input value (A or B) will currently be reached from ramp switch functionality
 *
 * Current information will be given readout from flags of ramp switch service
 *
 * \param   SrvX_StateRamp_t * const State_cpst   Pointer to flags of ramp switch service
 * \return  bool                                  TRUE: Ramp is switched to input A, FALSE: Ramp is switched to input B
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvX_RampGetSwitchPos_inline(const SrvX_StateRamp_t * const State_cpcst))
{
    return ((bool)(State_cpcst->Switch > 0) ? TRUE : FALSE);
}


/* _SRVX_CONTROL_INL_H */
#endif
