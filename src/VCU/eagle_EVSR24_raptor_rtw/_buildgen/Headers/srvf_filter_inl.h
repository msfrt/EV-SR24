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
 * $Filename__:srvf_filter_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Migrated from ClearCase, Based on B_SRVF.13.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.12.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_filter_inl$ 
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
 *   1. Removal of all possible MISRA warnings.
 *   
 *   2. Provision of inline options for new float functionalities.
 *   
 *   3. Removal of SATH specific switches
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVF.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_FILTER_INL_H
#define _SRVF_FILTER_INL_H


/*
 **********************************************************************************************************************
 * List of functions
 *
 * SrvF_CalcFilterK_R32_inline      SrvF_CalcFilterKApp_R32_inline
 *
 * SrvF_LpFilterCalc_inline         SrvF_LpFilterOut_R32_inline           SrvF_LpFilterSetState_inline
 *
 * SrvF_HpFilterCalc_inline         SrvF_HpFilterOut_R32_inline           SrvF_HpFilterSetState_inline
 *
 **********************************************************************************************************************
 */


/*
 **********************************************************************************************************************
 *
 *
 *
 * FACTOR K, PRECISE AND APPROXIMATIVE
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 *
 * SrvF_CalcFilterK_R32
 *
 * \brief Calculation of filter factor K depending on T1 and dT.
 *
 * Calculates time equivalent: K = 1 - exp(-dT / T1)
 *
 * The parameter dT
 * physical unit [s] describes the sample time
 * dT is hold by the variable dT_r32 and is allways > 0
 *
 * The parameter T1rec
 * physical unit [1/s] describes the reciprocal value of time constant T1
 * T1 has same unit and quantization like dT but value should be >> dT
 * Computation method of T1rec = 1 / T1
 *
 * \param   real32   T1rec_r32    Reciprocal value of T1
 * \param   real32   dT_r32       Sample time dT
 * \return  real32                Calculated factor K
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_FilterCalcK_R32_inline(real32 T1rec_r32, real32 dT_r32))
{
    return (1.0F - SrvF_Exp(dT_r32 * T1rec_r32));
}


/**
 **********************************************************************************************************************
 *
 * SrvF_FilterCalcKApp_R32
 *
 * \brief Calculation of filter factor K depending on T1 and dT.
 *
 * Calculates approximation of time equivalent: K = 1 - (1 - (dT / T1)) = (dT / T1)
 *
 * The parameter dT
 * physical unit [s] describes the sample time
 * dT is hold by the variable dT_r32.
 *
 * The parameter T1rec
 * physical unit [1/s] describes the reciprocal value of time constant T1
 * T1 has same unit and quantization like dT
 * Computation method of T1rec = 1 / T1
 *
 * \param   real32   T1rec_r32    Reciprocal value of T1
 * \param   real32   dT_r32       Sample time dT
 * \return  real32                Calculated factor K
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_FilterCalcKApp_R32_inline(real32 T1rec_r32, real32 dT_r32))
{
    return (dT_r32 * T1rec_r32);
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * LOWPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvF_LpFilterCalc
 *
 * \brief Calculation service of lowpass filter.
 *
 * Calculates the new internal state of lowpass filter
 * Yn = Yn-1 + (Xn - Yn-1) * K
 *
 * The states Xn and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1, Xn-2 and Yn-1.
 *
 * The state Yn
 * describes the current output value. This value has to be calculated by the differnce equation.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * State_cpst->Y1 holds Yn-1
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_r32.
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * K ist given with paramter Fac_r32
 *
 * \param   real32        X0_r32         Current input value Xn
 * \param   real32 *const State_cpr32    Constant pointer to state value
 * \param   real32        Fac_r32        Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_LpFilterCalc_inline(real32 X0_r32, real32 *const State_cpr32, real32 Fac_r32))
{
    *State_cpr32 = *State_cpr32 + ((X0_r32 - *State_cpr32) * Fac_r32);
}


/**
 **********************************************************************************************************************
 * SrvF_LpFilterOut_R32
 *
 * \brief Gets the real32 result of a lowpass filter.
 *
 * The state State_cpcr32 describes the output value, at one time step before the current time.
 *
 * \param   const real32 *const State_cpcr32   Constant pointer to state value
 * \return  real32                             Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_LpFilterOut_R32_inline(const real32 *const State_cpcr32))
{
    return (*State_cpcr32);
}


/**
 **********************************************************************************************************************
 * SrvF_LpFilterSetState
 *
 * \brief Initialises the state structure of a lowpass filter.
 *
 * \param   real32 *const State_cpr32   Constant pointer to state value
 * \param   real32 Y1_r32               Input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_LpFilterSetState_inline(real32 *const State_cpr32, real32 Y1_r32))
{
    *State_cpr32 = Y1_r32;
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * HIGHPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvF_HpFilterCalc
 *
 * \brief Calculation service of highpass filter.
 *
 * Calculates the new internal state of highpass filter
 * Yn = Yn-1 - K * Yn-1 + (Xn - Xn-1)
 *
 * The states Xn and Yn-1 have an arbitrary [degrees]physical unit.
 * But, the unit have to be identical for the states Xn-1, Xn-2 and Yn-1.
 *
 * The state Yn
 * describes the current output value. This value has to be calculated by the differnce equation.
 *
 * The state Yn-1
 * describes the output value, at one time step before the current time.
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_r32.
 *
 * The state Xn-1
 * describes the input value one time step before the current time
 * State_cpst->X1 holds Xn-1
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * K ist given with paramter Fac_r32
 *
 * \param   real32                  X0_r32       Current input value Xn
 * \param   SrvF_HpFilter_t *const  State_cpst   Constant pointer to state structure
 * \param   real32                  Fac_r32      Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_HpFilterCalc_inline(real32 X0_r32, SrvF_HpFilter_t *const State_cpst,
                                                      real32 Fac_r32))
{
    State_cpst->Y1 = (State_cpst->Y1 - (Fac_r32 * State_cpst->Y1)) + (X0_r32 - State_cpst->X1);
    State_cpst->X1 = X0_r32;
}


/**
 **********************************************************************************************************************
 * SrvF_HpFilterOut_R32
 *
 * \brief Gets the real32 result of a highpass filter.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 *
 * \param   const SrvF_HpFilter_t *const State_cpcst    Constant pointer to state structure
 * \return  real32                                      Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(real32 SrvF_HpFilterOut_R32_inline(const SrvF_HpFilter_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/**
 **********************************************************************************************************************
 * SrvF_HpFilterSetState
 *
 * \brief Initialises the state structure of a highpass filter.
 *
 * \param   SrvF_HpFilter_t *const State_cpst  Constant pointer to state value structure
 * \param   real32 X1_r32                      Input value Xn-1, one time step before calculation time
 * \param   real32 Y1_r32                      Input value Yn-1, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvF_HpFilterSetState_inline(SrvF_HpFilter_t *const State_cpst,
                                                          real32 X1_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}


/* _SRVF_FILTER_INL_H */
#endif
