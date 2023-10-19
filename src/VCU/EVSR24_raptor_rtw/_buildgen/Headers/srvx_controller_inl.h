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
 * $Filename__:srvx_controller_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVX.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.12.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_controller_inl$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 0     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings 
 *   
 *   2. Removal of SAT specific switches.
 * 
 * 1.15.0; 0     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.13.2; 0     30.04.2010 VKA2FE
 *   Bugfix, derived from B_SRVX.13.0.2
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_CONTROLLER_INL_H
#define _SRVX_CONTROLLER_INL_H

/*
 ***********************************************************************************************************************
 * List of functions
 *
 * SrvX_CalcTeQ_S32
 * SrvX_CalcTeQApp_S32
 *
 * SrvX_CtrlSetLimit
 * SrvX_Out8Lim
 *
 * SrvX_PSetState
 * SrvX_POut_S8
 * SrvX_POut_S16
 *
 * SrvX_PT1SetState
 * SrvX_PT1Out_S8
 * SrvX_PT1Out_S16
 *
 * SrvX_DT1Typ1SetState
 * SrvX_DT1Typ1Out_S8
 * SrvX_DT1Typ1Out_S16
 * SrvX_DT1Typ2SetState
 * SrvX_DT1Typ2Out_S8
 * SrvX_DT1Typ2Out_S16
 *
 * SrvX_PDSetState
 * SrvX_PDSetParam
 * SrvX_PDOut_S8
 * SrvX_PDOut_S16
 *
 * SrvX_ISetState
 * SrvX_IOut_S8
 * SrvX_IOut_S16
 *
 * SrvX_PISetState
 * SrvX_PISetParam
 * SrvX_PIOut_S8
 * SrvX_PIOut_S16
 *
 * SrvX_PIDSetParam
 * SrvX_PIDSetState
 * SrvX_PIDOut_S8
 * SrvX_PIDOut_S16
 * SrvX_PID_fixPart
 * SrvX_PIDTyp1
 * SrvX_PIDTyp2
 * SrvX_CtrlPID_B
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * Time equivalent, precise and approximative
 *
 *
 *
 ***********************************************************************************************************************
 */


/**
 ***************************************************************************************************
 *
 * SrvX_CalcTeQ_S32
 *
 * \brief Calculation of time equivalent TeQ.
 *
 * Calculates time equivalent: TeQ = exp (-dT / T1)
 *
 * The parameter dT
 * physical unit [s] describes the sample time
 * dT is hold by the variable dT_s32 and is allways > 0
 * dT is given by a scaled varriable with the scaling factor 1000000 (1 us per bit)
 *
 * The parameter T1rec
 * physical unit [1/s] describes the reciprocal value of time constant T1
 * T1 has same unit and quantization like dT but value should be >> dT
 * Computation method of T1rec = 2^32 / (T1 * 10^6)
 *
 * \param   sint32   T1rec_s32    reciprocal value of T1
 * \param   sint32   dT_s32       sample time dT
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_CalcTeQ_S32_inline(sint32 T1rec_s32, sint32 dT_s32))
{
    /* HUGO HUGO HUGO HUGO HUGO ............................................ */
    /* NOTE: Scaling has to be to corrected together with the implementation */

    /* Input of Exp function is scaled with 2^16                      */
    return (SrvX_Exp(SrvB_MulShRight_S32S32_S32_inline(dT_s32, T1rec_s32, 16)));
}


/**
 ***************************************************************************************************
 *
 * SrvX_CalcTeQApp_S32
 *
 * \brief Calculation of approximation of time equivalent TeQ.
 *
 * Calculates approximation of time equivalent: TeQ = 1 - dT / T1
 *
 * The parameter dT
 * physical unit [s] describes the sample time
 * dT is hold by the variable dT_s32.
 * dT is given by a scaled varriable with the scaling factor 1000000 (1 us per bit)
 *
 * The parameter T1rec
 * physical unit [1/s] describes the reciprocal value of time constant T1
 * T1 has same unit and quantization like dT
 * Computation method of T1rec = 2^32 / (T1 * 10^6)
 *
 * \param   sint32   T1rec_s32    reciprocal value of T1
 * \param   sint32   dT_s32       sample time dT
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_CalcTeQApp_S32_inline(sint32 T1rec_s32, sint32 dT_s32))
{
    /* HUGO HUGO HUGO HUGO HUGO ............................................ */
    /* NOTE: Scaling has to be to corrected together with the implementation */

    /* Calculation of TeQ = 1 - dT / T1                               */
    /* 1 corresponds to 65536 (because of scaling factor 2^16)        */
    /* dT / T1 is calculated as dT * T1rec                            */
    return (0x10000L - (SrvB_MulShRight_S32S32_S32_inline(dT_s32, T1rec_s32, 16)));
}


/*
 ***********************************************************************************************************************
 * SrvX_SetLimit
 *
 * \brief Sets the Limits vor the Limited Controllers
 *
 * Checks if a given minimum is not smaller than MINSINT16
 * If the minimum is smaller than MINSINT16, the sclaled mimimum is set to (MINSINT16 << 16)
 * otherwise it is set to (minimum << 16)
 * Checks if a given maximum is not greater than MAXSINT16
 * If the m aximum is greater than MAXSINT16, the sclaled maximum is set to (MAXSINT16 << 16)
 * otherwise it is set to (maximum << 16)
 *
 * Equations:
 * Limits_cpst->Min_C = (MAX(minimum, MINSINT16)<<16)
 * Limits_cpst->Max_C = (MIN(maximum, MAXSINT16)<<16)
 *
 * \param   SrvX_Limits_t *const    Limits_cpst  const pointer to the structure holding the scaled  min and max
 * \param   sint32                  Min_s32     unscaled minimum
 * \param   sint32                  Max_s32     unscaled maximum
 * \return  void
 *
 ***********************************************************************************************************************
 */
 MEMLAY_USE_FORCE_INLINE(void SrvX_CtrlSetLimit_inline(SrvX_Limits_t *const Limits_cpst, sint32 Min_s32, sint32 Max_s32))
{
    if(Min_s32 >= MINSINT16)
    {
        Limits_cpst->Min_C = ((sint32)(((uint32) Min_s32) << 16 ));
    }
    else
    {
        Limits_cpst->Min_C = MINS16SHL16;
    }

    if(Max_s32 <= MAXSINT16)
    {
        Limits_cpst->Max_C = ((sint32)(((uint32) Max_s32) << 16 ));
    }
    else
    {
        Limits_cpst->Max_C = MAXS16SHL16;
    }
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * P Controller
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvX_PSetState
 *
 * \brief Initialises the state structure of a P controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Y1_s16.
 *
 *
 * \param   sint32 *const                 State_cps32  constant pointer to state structure
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PSetState_inline(sint32 *const State_cps32, sint16 Y1_s16))
{
    *State_cps32 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_POut_S16
 *
 * \brief Gets the 16 bit result of a P controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   const sint32 *const State_cpcs32    constant pointer to state structure
 * \return  sint16                              unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_POut_S16_inline(const sint32 *const State_cpcs32))
{
    return ((sint16) (((uint32) *State_cpcs32) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_POut_S8
 *
 * \brief Gets the 16 bit result of a P controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   const sint32 *const State_cpcs32    constant pointer to state structure
 * \return  sint16                              unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_POut_S8_inline(const sint32 *const State_cpcs32))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)*State_cpcs32) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PT1 Controller
 *
 *
 *
 ***********************************************************************************************************************
 */


 /**
 **********************************************************************************************************************
 *
 * SrvX_CtrlPT1SetState
 *
 * \brief Initialises the state structure of a PT1 controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Y1_s16.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = X1_s32.
 *
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_CtrlPT1SetState_inline(SrvX_StatePT1_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16))
{
    State_cpst->X1 = X1_s32;
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}

 /**
 **********************************************************************************************************************
 *
 * SrvX_PT1Out_S16
 *
 * \brief Gets the 16 bit result of a PT1 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_PT1Out_S16_inline(const SrvX_StatePT1_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PT1Out_S8
 *
 * \brief Gets the 8 bit result of a PT1 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                      unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_PT1Out_S8_inline(const SrvX_StatePT1_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * DT1 Controller
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ1SetState
 *
 * \brief Initialises the state structure of a DT1 Type 1 controller.
 *
 * The states Xn-2, Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-2, Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Y1_s16.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = X1_s32
 *
 * The state Xn-2
 * describes the input value, twoe time steps before the current time.
 * State_cpst->X2 holds Xn-1, unscaled: *State_cpst->X2 = X2_s32
 *
 * \param   SrvX_StateDT1Typ1_t *const    State_cpst   constant pointer to state structure
 * \param   sint32                        X2_s32       input value Xn-2, unscaled, two time step before current time
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_DT1Typ1SetState_inline(SrvX_StateDT1Typ1_t *const State_cpst, sint32 X1_s32,
                                                         sint32 X2_s32, sint16 Y1_s16))
{
    State_cpst->X2 = X2_s32;
    State_cpst->X1 = X1_s32;

    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ1Out_S16
 *
 * \brief Gets the 16 bit result of a DT1Typ1 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StateDT1Typ1_t *const    State_cpst   constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_DT1Typ1Out_S16_inline(const SrvX_StateDT1Typ1_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ1Out_S8
 *
 * \brief Gets the 8 bit result of a DT1Typ1 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StateDT1Typ1_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                          unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_DT1Typ1Out_S8_inline(const SrvX_StateDT1Typ1_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ2SetState
 *
 * \brief Initialises the state structure of a PT1 controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Y1_s16.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = X1_s32
 *
 * \param   SrvX_StateDT1Typ2_t *const    State_cpst   constant pointer to state structure
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_DT1Typ2SetState_inline(SrvX_StateDT1Typ2_t *const State_cpst, sint32 X1_s32,
                                                         sint16 Y1_s16))
{
    State_cpst->X1 = X1_s32;
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ2Out_S16
 *
 * \brief Gets the 16 bit result of a DT1Typ2 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StateDT1Typ2_t *const    State_cpst   constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_DT1Typ2Out_S16_inline(const SrvX_StateDT1Typ2_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_DT1Typ2Out_S8
 *
 * \brief Gets the 8 bit result of a DT1Typ2 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StateDT1Typ2_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                          unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_DT1Typ2Out_S8_inline(const SrvX_StateDT1Typ2_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PD Controller
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvX_PDSetState
 *
 * \brief Initialises the state structure of a PD controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Thus, the input parametere Y1_s16 is scaled by a left shift of 16 bits.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = Xn-1
 *
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PDSetState_inline(SrvX_StatePD_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16))
{
    State_cpst->X1 = X1_s32;
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PDParam
 *
 * \brief Initialises the param structure of a PD controller.
 *
 * The parameter Kp,
 * physical unit [s] describes the amplification of of input state.
 * Kp is hold by a parameter structure, component SrvX_ParamPD->Kp_C.
 * Kp has to be givem as a scaled variable named Param_st->Kp_C with the scaling factor: 2^16:
 * Kp is in the range of = [-100; 100] * 2^16
 * Example: For Kp = 1 the input has to be Param_st->Kp_C = 2^16 * 1.
 *
 * The parameter Tv,
 * physical unit [s] describes the rate time
 * Tv is hold by a parameter structure, component SrvX_ParamPD->Tv_C.
 * Tv is in the range of = [0,01; 100] * dT,  with respect to [Tv_min, Tv_max]
 * The scaling factor is 2^8 *  1.000.000 or 2^8 * Tv in us per bit.
 * Example: For Tv = 2us, the input has to be ParamPD->Tv_s32 = 2 * 2^8 = 2^9
 *
 * \param   SrvX_ParamPD_t *const         Param_cpst   constant pointer to param structure
 * \param   sint32                        Kp_s32       scaled input for the proportional amplification factor
 * \param   sint32                        Tv_s32       scaled input for the time rate
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PDSetParam_inline(SrvX_ParamPD_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32))
{
    Param_cpst->Kp_C = SrvB_RangeLimiter_S32_inline(Kp_s32, MINS8SHL16, MAXS8SHL16);
    Param_cpst->Tv_C = Tv_s32;
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PDOut_S16
 *
 * \brief Gets the 16 bit result of a PD controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StatePD_t *const        State_cpst    constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_PDOut_S16_inline(const SrvX_StatePD_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PDOut_S8
 *
 * \brief Gets the 8 bit result of a PT1 controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                      unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_PDOut_S8_inline(const SrvX_StatePD_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * I Controller
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvX_ISetState
 *
 * \brief Initialises the state structure of an I controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Thus, the input parametere Y1_s16 is scaled by a left shift of 16 bits.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = Xn-1
 *
 *
 * \param   SrvX_StateI_t *const        State_cpst   constant pointer to state structure
 * \param   sint32                      X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                      Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_ISetState_inline(SrvX_StateI_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16))
{
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
    State_cpst->X1 = X1_s32;
}


/**
 **********************************************************************************************************************
 *
 * SrvX_IOut_S16
 *
 * \brief Gets the 16 bit result of an I controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StateI_t *const        State_cpst   constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IOut_S16_inline(const SrvX_StateI_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_IOut_S8
 *
 * \brief Gets the 8 bit result of an I controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StateI_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                      unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IOut_S8_inline(const SrvX_StateI_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PI Controller
 *
 *
 *
 ***********************************************************************************************************************
 */
/**
 **********************************************************************************************************************
 *
 * SrvX_PISetState
 *
 * \brief Initialises the state structure of a PI either Type 1 or Type 2 controller.
 *
 * The states Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Thus, the input parametere Y1_s16 is scaled by a left shift of 16 bits.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = Xn-1
 *
 *
 * \param   SrvX_StatePI_t *const         State_cpst   constant pointer to state structure
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PISetState_inline(SrvX_StatePI_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16))
{
    State_cpst->X1 = X1_s32;
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIParam
 *
 * \brief Initialises the param structure of a PI, either Type 1 or Type 2, controller.
 *
 * The parameter Kp,
 * physical unit [s] describes the amplification of of input state.
 * Kp is hold by a parameter structure, component SrvX_ParamPD->Kp_C.
 * Kp has to be givem as a scaled variable named Param_st->Kp_C with the scaling factor: 2^16:
 * Kp is in the range of = [-100; 100] * 2^16
 * Example: For Kp = 1 the input has to be Param_st->Kp_C = 2^16 * 1.
 *
 * The parameter Tn,
 * physical unit [s] describes the delay time.
 * Tn is hold by a parameter structure, component SrvX_ParamPI->Tn_C.
 * Tn is in the range of  [0,01; 100] * dT, with respect to [Tn_min, Tn_max]
 * Tn is given by a reciprocal value to avoid a divison in the implementation.
 * Tn is additionally scaled by the factor 2^32.
 * Tn is and all together given by the equation: 2^32 / (1000000 * Tn) = 2^32 / Tn in us per bit.
 * Example: For Tn = 2us, the input has to be ParamPI->Tn_C = 2^32 / 2 = 2^31
 * Tn = 1s,  Input value ParamPD->Tv_s32 = 2^32 / 1.000.000 = 4.294
 *
 * \param   SrvX_ParamPI_t *const         Param_cpst   constant pointer to param structure
 * \param   sint32                        Kp_s32       scaled input for the proportional amplification factor
 * \param   sint32                        Tn_s32       scaled input for the delay time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PISetParam_inline(SrvX_ParamPI_t *const Param_cpst, sint32 Kp_s32, sint32 Tn_s32))
{
    Param_cpst->Kp_C = SrvB_RangeLimiter_S32_inline(Kp_s32, MINS8SHL16, MAXS8SHL16);
    Param_cpst->Tn_C = Tn_s32;
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIOut_S16
 *
 * \brief Gets the 16 bit result of a PI, either Type 1 or Type 2, controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StatePI_t *const        State_cpst   constant pointer to state structure
 * \return  sint16                                    unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_PIOut_S16_inline(const SrvX_StatePI_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIOut_S8
 *
 * \brief Gets the 8 bit result of a PI, either Type 1 or Type 2, controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StatePT1_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                      unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_PIOut_S8_inline(const SrvX_StatePI_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PID Controller
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvX_PIDSetState
 *
 * \brief Initialises the state structure of a PID, either Type 1 or Type 2, controller.
 *
 * The states Xn-2, Xn-1 and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-2, Xn-1 and Yn-1.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Y1_s16.
 *
 * The state Xn-1
 * describes the input value, one time step before the current time.
 * State_cpst->X1 holds Xn-1, unscaled: *State_cpst->X1 = X1_s32
 *
 * The state Xn-2
 * describes the input value, twoe time steps before the current time.
 * State_cpst->X2 holds Xn-1, unscaled: *State_cpst->X2 = X2_s32
 *
 * \param   SrvX_StateDT1Typ1_t *const    State_cpst   constant pointer to state structure
 * \param   sint32                        X2_s32       input value Xn-2, unscaled, two time step before current time
 * \param   sint32                        X1_s32       input value Xn-1, unscaled, one time step before current time
 * \param   sint16                        Y1_s16       input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PIDSetState_inline(SrvX_StatePID_t *const State_cpst, sint32 X1_s32, sint32 X2_s32,
                                                     sint16 Y1_s16))
{
    State_cpst->X1 = X1_s32;
    State_cpst->X2 = X2_s32;
    State_cpst->Y1 = (sint32) (((uint32) Y1_s16) << 16);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIDParam
 *
 * \brief Initialises the param structure of a PD controller.
 *
 * The parameter Kp,
 * physical unit [s] describes the amplification of of input state.
 * Kp is hold by a parameter structure, component SrvX_ParamPID->Kp_C.
 * Kp has to be givem as a scaled variable named Param_st->Kp_C with the scaling factor: 2^16:
 * Kp is in the range of = [-100; 100] * 2^16
 * Example: For Kp = 1 the input has to be Param_sts->Kp_C = 2^16 * 1.
 *
 * The parameter Tn,
 * physical unit [s] describes the delay time.
 * Tn is hold by a parameter structure, component SrvX_ParamPID->Tn_C.
 * Tn is in the range of  [0,01; 100] * dT, with respect to [Tn_min, Tn_max]
 * Tn is given by a reciprocal value to avoid a divison in the implementation.
 * Tn is additionally scaled by the factor 2^32.
 * Tn is and all together given by the equation: 2^32 / (1000000 * Tn) = 2^32 / Tn in us per bit.
 * Example: For Tn = 2us, the input has to be ParamPID->Tn_C = 2^32 / 2 = 2^31
 * Tn = 1s,  Input value ParamPID->Tv_s32 = 2^32 / 1.000.000 = 4.294
 *
 * The parameter Tv,
 * physical unit [s] describes the rate time
 * Tv is hold by a parameter structure, component SrvX_ParamPID->Tv_C.
 * Tv is in the range of = [0,01; 100] * dT, with respect to [Tv_min, Tv_max]
 * The scaling factor is 2^8 *  1.000.000 or 2^8 * Tv in us per bit.
 * Example: For Tv = 2us, the input has to be ParamPID->Tv_s32 = 2 * 2^8 = 2^9
 *
 * \param   SrvX_ParamPID_t *const        Param_cpst   constant pointer to param structure
 * \param   sint32                        Kp_s32       scaled input for the proportional amplification factor
 * \param   sint32                        Tv_s32       scaled input for the time rate
 * \param   sint32                        Tn_s32       scaled input for the delay time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PIDSetParam_inline(SrvX_ParamPID_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32,
                                                     sint32 Tn_s32))
{
    Param_cpst->Kp_C = SrvB_RangeLimiter_S32_inline(Kp_s32, MINS8SHL16, MAXS8SHL16);
    Param_cpst->Tv_C = Tv_s32;
    Param_cpst->Tn_C = Tn_s32;
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIDOut_S16
 *
 * \brief Gets the 16 bit result of a PID, either Type 1 or Type 2, controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   SrvX_StatePID_t *const        State_cpst   constant pointer to state structure
 * \return  sint16                                     unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_PIDOut_S16_inline(const SrvX_StatePID_t *const State_cpcst))
{
    return ((sint16) (((uint32) State_cpcst->Y1) >> 16));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIDOut_S8
 *
 * \brief Gets the 8 bit result of a PID, either Type 1 or Type 2, controller.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   SrvX_StatePID_t *const        State_cpst   constant pointer to state structure
 * \return  sint8                                      unscaled result of Y1 = state Yn-1
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_PIDOut_S8_inline(const SrvX_StatePID_t *const State_cpcst))
{
    return (SrvB_TypeLimiter_S32_S8_inline((sint16)(((uint32)State_cpcst->Y1) >> 16)));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PID_fixPart
 *
 * \brief Auxiliary funtion to calculate the service of both PID controllers.
 *
 * Implementation for the PID Type controllers:
 * Type 1: Yn = Yn-1 + Kp [ (1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn-1].
 * Type 2: Yn = Yn-1 + Kp [ (1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn].
 *                         |_________________________________________________|
 *
 * The function SrvX_PID_fixPart calculates the part [(1 + Tv/dT)(Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1)].
 *
 * Description of the variables is given in the files srvx_pidtyp1.c and srvx_pidtyp2.c
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PID_fixPart_inline(sint64u *const res_s64u, sint32 X0_s32,
                                                     SrvX_StatePID_t *const State_cpst,
                                                     const SrvX_ParamPID_t *const Param_st, sint32 dT_s32))
{
    sint64  tmp_s64;
    sint32  tmp_s32;


    /* Calculate (Tv / dT)                                                  */
    /* -------------------                                                  */
    /* dT is scaled with 1.000.000 and is never 0 => no zero divisor        */
    /* Tv is scaled with factor 2^8 *  1.000.000                            */
    /* Result is scaled with 2^8 and in range of [0.01, 100]                */
    tmp_s32 = Param_st->Tv_C / dT_s32;

    /* Calculate (Tv / dT) * (Xn-2 - Xn-1)                                  */
    /* -----------------------------------                                  */
    /* (Xn-2 - Xn-1) < 2^32 and (Tv / dT) < 2^8 * 100                       */
    tmp_s64 = (sint64)tmp_s32 * (((sint64)State_cpst->X2) - ((sint64)State_cpst->X1));

    /* Shift with 2^8 that result is scaled with 100 * 2^16 * 2^32 < 2^55   */
    tmp_s64 = (sint64) (((uint64) tmp_s64) << 8);

    /* Calculate: Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn-1                      */
    /* -----------------------------------------------                      */
    res_s64u->s64 += tmp_s64;

    /* Calculate (1 + (Tv / dT))                                            */
    /* -------------------------                                            */
    /* Use temp result from above, scaling is still 2^8 * [0.01, 100]       */
    tmp_s32 += ((sint32) (1u << 8));

    /* Calculate (1 + (Tv / dT)) * (Xn - Xn-1)                              */
    /* ---------------------------------------                              */
    /* (Xn - Xn-1) < 2^32 and (1 + (Tv / dT)) < 2^8 * 101                   */
    tmp_s64  = (sint64) tmp_s32 * (((sint64) X0_s32) - ((sint64) State_cpst->X1));

    /* Shift with 2^8 that result is scaled with 100 * 2^16 * 2^32 < 2^55   */
    tmp_s64  = (sint64) (((uint64) tmp_s64) << 8);

    /* Calc [(1 + Tv/dT)(Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn-1] */
    /* -------------------------------------------------------------------- */
    /* Result is smaller than 3 * 2^55 < 2^57,                              */
    /* Actual scaling is 2^16 * 2^32                                        */
    res_s64u->s64 += tmp_s64;

    /* Save X value: X2, X1                                                 */
    State_cpst->X2 = State_cpst->X1;
    State_cpst->X1 = X0_s32;
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIDTyp1
 *
 * \brief Auxiliary funtion to calculate the service of PID Type 1 controller.
 *
 * Implementation for the PID Type 1 controllers:
 * Type 1: Yn = Yn-1 + Kp [ (1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn-1].
 *                        |_________________________________________________________________|
 *
 * The function SrvX_PIDTyp1 calculates the part [(1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn-1].
 *
 * Description of the variables is given in the file srvx_pidtyp1.c
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PIDTyp1_inline(sint64u *const res_s64u, sint32 X0_s32,
                                                 SrvX_StatePID_t *const State_cpst,
                                                 const SrvX_ParamPID_t *const Param_st, sint32 dT_s32))
{
    /* Calculate the typical part for PID Type 1 controller: dT/Tn * Xn-1 */
    /* ------------------------------------------------------------------ */
    /* dT/Tn, range of the result is [0.01, 100] * 2^32                   */
    res_s64u->s64 = ((sint64)dT_s32) * ((sint64)Param_st->Tn_C);

    /* higher scaling to 2^48                                             */
    res_s64u->s64 = (sint64)(((uint64) res_s64u->s64) << 16);

    /* dT/Tn * Xn-1 and reduce scaling to 2^16 by using only the highword */
    /* result is smaller than 100 * 2^16 * 2^32 < 2^55                    */
    res_s64u->s64 = (sint64)res_s64u->s64s.h * (sint64)State_cpst->X1;

    /* add the fix part for both PID controllers                          */
    /* -----------------------------------------                          */
    SrvX_PID_fixPart_inline(res_s64u, X0_s32, State_cpst, Param_st, dT_s32);
}


/**
 **********************************************************************************************************************
 *
 * SrvX_PIDTyp2
 *
 * \brief Auxiliary funtion to calculate the service of PID Type 2 controller.
 *
 * Implementation for the PID Type 1 controllers:
 * Type 1: Yn = Yn-1 + Kp [ (1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn].
 *                        |_______________________________________________________________|
 *
 * The function SrvX_PIDTyp1 calculates the part [(1 + Tv/dT) * (Xn - Xn-1) + Tv/dT * (Xn-2 - Xn-1) + dT/Tn * Xn].
 *
 * Description of the variables is given in the file srvx_pidtyp2.c
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_PIDTyp2_inline(sint64u *const res_s64u, sint32 X0_s32,
                                                 SrvX_StatePID_t *const State_cpst,
                                                 const SrvX_ParamPID_t *const Param_st, sint32 dT_s32))
{
    /* Calculate the typical part for PID Type 2 controller: dT/Tn * Xn   */
    /* ----------------------------------------------------------------   */
    /* dT/Tn, range of the result is [0.01, 100] * 2^32                   */
    res_s64u->s64  = ((sint64) dT_s32) * ((sint64) Param_st->Tn_C);

    /* higher scaling to 2^48                                             */
    res_s64u->s64 = (sint64) (((uint64) res_s64u->s64) << 16);

    /* dT/Tn * Xn-1 and reduce scaling to 2^16 by using only the highword */
    /* result is smaller than 100 * 2^16 * 2^32 < 2^55                    */
    res_s64u->s64 = ((sint64)res_s64u->s64s.h) * ((sint64) X0_s32);

    /* add the fix part for both PID controllers                          */
    /* -----------------------------------------                          */
    SrvX_PID_fixPart_inline(res_s64u, X0_s32, State_cpst, Param_st, dT_s32);
}


/**
 ***********************************************************************************************************************
 * SrvX_CtrlPID_B
 *
 * \brief Conditioned Related limitation of a PI or PID controller
 *
 * Checks if a given result tmp_s64  = (tmpH_s32 * sint32 Kp_s32) is outside a range of +/- 2^16.
 * In this case, the endresult of the controller will exceedd the limitation.
 * As a consequnce the endresult is given without explicit calculation and the function returns TRUE for limitation.
 * Otherwise the function returns FALSE and the total calculation has to be done afterward.
 *
 * Equations:
 * tmp_s64 >  (1<<16)            => *Y1_cps32 = Max_s32   and TRUE is returned
 * tmp_s64 < ~(1<<16)            => *Y1_cps32 = Min_s32   and TRUE is returned
 * tmp_s64 C [~(1<<16), (1<<16)] => *Y1_cps32 = *Y1_cps32 and FALSE is returned
 *
 * \param   sint32      *const      Y1_cps32      const pointer to the changeable variable Y1
 * \param   sint                    tmpH_s32      input for the comparison
 * \param   sint                    Kp_s32        input for the comparison
 * \param   sint32                  Min_s32       Limit: Minimum
 * \param   sint32                  Max_s32       Limit: Maximum
 * \return  bool
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvX_CtrlPID_B_inline(sint32 *const Y1_cps32, sint32 tmpH_s32, sint32 Kp_s32,
                                                   sint32 Min_s32, sint32 Max_s32 ))
{
    bool    tmp_b;
    sint64  tmp_s64;
	/* If condition is added to take care of the negative overflow        */
	/* Actual overflow for '-'ive no. happens when the High byte is -2    */
	/* Because the value of High Byte is -1 for any negative value.        */
	/* It is to be decremented by '1' before doing further operations     */
	if(tmpH_s32 < 0)
	{
		tmpH_s32 ++;
	}
    tmp_s64 = (sint64)tmpH_s32 * (sint64)Kp_s32;

    if (tmp_s64 > (sint64) (1<<16))
    {
        *Y1_cps32 = Max_s32;
        tmp_b = TRUE;
    }
    else if (tmp_s64 < (sint64) (~(1<<16)))
    {
        *Y1_cps32 = Min_s32;
        tmp_b = TRUE;
    }
    else
    {
        tmp_b = FALSE;
    }

    return (tmp_b);
}


/**
 ***********************************************************************************************************************
 * SrvX_CtrlPID
 *
 * \brief Conditioned Related limitation of a PI or PID controller
 *
 * Checks if a given result res_s64u.s64 is outside a range of [Min_s32, Max_s32] * 2^16.
 * In this case, the end result of the controller will limited to [Min_s32, Max_s32].
 * As a consequnce the endresult is given without explicit calculation.
 * Otherwise the function will re-shift the input to scaling factor 2^16: res_s64u.s64 << 16.
 *
 * Equations:
 * tmp_s64 >  (1<<16)            => *Y1_cps32 = Max_s32   and TRUE is returned
 * tmp_s64 < ~(1<<16)            => *Y1_cps32 = Min_s32   and TRUE is returned
 * tmp_s64 C [~(1<<16), (1<<16)] => *Y1_cps32 = *Y1_cps32 and FALSE is returned
 *
 * \param   sint32      *const      Y1_cps32      const pointer to the changeable variable Y1
 * \param   sint                    tmpH_s32      input for the comparison
 * \param   sint                    Kp_s32        input for the comparison
 * \param   sint32                  Min_s32       Limit: Minimum
 * \param   sint32                  Max_s32       Limit: Maximum
 * \return  bool
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_CtrlPID_inline(sint32 *const Y1_cps32, sint64u res_s64u, sint32 Min_s32,
                                                 sint32 Max_s32 ))
{
        /* scaling factor of res_s64u is 2^32 */
        /* required scaling factor of the controller is 2^16 */
        if (res_s64u.s64 > ((sint64)(((uint64)Max_s32) <<16 )))
        {
            *Y1_cps32 = Max_s32;
        }
        else if (res_s64u.s64 <  ((sint64)(((uint64)Min_s32) <<16 )))
        {
            *Y1_cps32 = Min_s32;
        }
        else
        {
            /* (MAXSINT16 << 32) >= res_s64u.s64 >= (MINSINT16 << 32) */
            /* In spite of right shift, the return of the low Bytes will preserve the sign */
            res_s64u.s64 =  ((sint64)((uint64)res_s64u.s64) >> 16);
            *Y1_cps32 = ((sint32) res_s64u.s64s.l);
        }
}
/* _SRVX_CONTROLLER_INL_H */
#endif
