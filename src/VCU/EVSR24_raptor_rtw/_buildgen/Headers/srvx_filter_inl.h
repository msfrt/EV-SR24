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
 * $Filename__:srvx_filter_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Migrated from ClearCase, Based on B_SRVX.13.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.12.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_filter_inl$ 
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
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvX
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_FILTER_INL_H
#define _SRVX_FILTER_INL_H


/*
 **********************************************************************************************************************
 * List of functions
 *
 * SrvX_CalcFilterK_S32_inline         SrvX_CalcFilterKApp_S32_inline
 *
 * SrvX_LpFilterSCalc_inline           SrvX_LpFilterSOut_S16_inline           SrvX_LpFilterSOut_S8_inline
 * SrvX_LpFilterSSetState_inline
 *
 * SrvX_LpFilterUCalc_inline           SrvX_LpFilterUOut_U16_inline           SrvX_LpFilterUOut_U8_inline
 * SrvX_LpFilterUSetState_inline
 *
 * SrvX_HpFilterSCalc_inline           SrvX_HpFilterSOut_S16_inline           SrvX_HpFilterSOut_S8_inline
 * SrvX_HpFilterSSetState_inline
 *
 * SrvX_HpFilterUCalc_inline           SrvX_HpFilterUOut_U16_inline           SrvX_HpFilterUOut_U8_inline
 * SrvX_HpFilterUSetState_inline
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
 * SrvX_FilterCalcK_U16
 *
 * \brief Calculation of filter factor K depending on T1 and dT.
 *
 * Calculates time equivalent: K = 1 - exp(-dT / T1)
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
 * \param   sint32   T1rec_s32    Reciprocal value of T1
 * \param   sint32   dT_s32       Sample time dT
 * \return  uint16                Calculated factor K, scaled with 2^16
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvX_FilterCalcK_U16_inline(sint32 T1rec_s32, sint32 dT_s32))
{
    /* Calculate K = 1 - exp(-dT / T1)                                    */
    /* -------------------------------                                    */
    /* 1 corresponds to 65535 (because of scaling factor 2^16)            */
    /* dT / T1 is calculated as dT * T1rec                                */
    return (SrvB_TypeLimiter_S32_U16_inline((sint32)MAXUINT16 -
                                                    SrvX_Exp(SrvB_MulShRight_S32S32_S32_inline(dT_s32,
                                                                                               T1rec_s32, 16))));
}


/**
 **********************************************************************************************************************
 *
 * SrvX_FilterCalcKApp_U16
 *
 * \brief Calculation of filter factor K depending on T1 and dT.
 *
 * Calculates approximation of time equivalent: K = 1 - (1 - (dT / T1)) = (dT / T1)
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
 * \param   sint32   T1rec_s32    Reciprocal value of T1
 * \param   sint32   dT_s32       Sample time dT
 * \return  uint16                Calculated factor K, scaled with 2^16
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvX_FilterCalcKApp_U16_inline(sint32 T1rec_s32, sint32 dT_s32))
{
    /* Calculate K = (dT / T1)                                            */
    /* ------------------------                                           */
    /* dT / T1 is calculated as dT * T1rec                                */
    return (SrvB_MulShRight_S32S32_U16_inline(dT_s32, T1rec_s32, 16));
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * SIGNED LOWPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvX_LpFilterSCalc
 *
 * \brief Calculation service of signed lowpass filter.
 *
 * Calculates the new internal state of signed lowpass filter
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
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_s32.
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * With current implementation of expotential function follwing remarks are used for implementation:
 * Current return range of exp function is: e^-x quantized by 2^16 [1 .. 0.018316] = [e^0 .. e^-4] = [65536 .. 1200]
 * K ist given with paramter Fac_u16
 *
 * \param   sint32        X0_s32         Current input value Xn
 * \param   sint32 *const State_cps32    Constant pointer to state value
 * \param   uint16        Fac_u16        Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_LpFilterSCalc_inline(sint32 X0_s32, sint32 *const State_cps32, uint16 Fac_u16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;


    tmp_u.s32 = *State_cps32;

    /* Calculate (Xn - Yn-1)                                              */
    /* ---------------------                                              */
    /* X0_s32 is unscaled                                                 */
    /* Yn-1 = *State_cps32 is scaled with 2^16                            */
    /* Division (shift 2^16) is done to subract both values               */
    /* Result (Xn - Yn-1) is unscaled                                     */
    tmp_u.s32 = SrvB_Sub_S32S32_S32_inline(X0_s32, tmp_u.s32s.h);

    /* Calculate  Yn = Yn-1 + (Xn - Yn-1) * K                             */
    /* --------------------------------------                             */
    /* Xn is unscaled                                                     */
    /* Yn, Yn-1 and K are scaled with 2^16                                */
    /* Yn = *State_cps32 (new value), Yn-1 = *State_cps32 (old value)     */
    *State_cps32 = SrvB_MulAdd_S32S32S32_S32_inline(tmp_u.s32, (sint32)Fac_u16, *State_cps32);
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterSOut_S16
 *
 * \brief Gets the 16 bit result of a signed lowpass filter.
 *
 * The state State_cpcs32 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   const sint32 *const State_cps32    Constant pointer to state value
 * \return  sint16                             Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_LpFilterSOut_S16_inline(const sint32 *const State_cpcs32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32 = *State_cpcs32;
    return (tmp_u.s32s.h);
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterSOut_S8
 *
 * \brief Gets the 8 bit result of a signed lowpass filter.
 *
 * The state State_cpcs32 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   const sint32 *const State_cps32   Constant pointer to state value
 * \return  sint8                             Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_LpFilterSOut_S8_inline(const sint32 *const State_cpcs32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32 = *State_cpcs32;
    return (SrvB_TypeLimiter_S32_S8_inline(tmp_u.s32s.h));
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterSSetState
 *
 * \brief Initialises the state structure of a signed lowpass filter.
 *
 * \param   sint32 *const State_cps32   Constant pointer to state value
 * \param   sint16 Y1_s16               Input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_LpFilterSSetState_inline(sint32 *const State_cps32, sint16 Y1_s16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32s.h = Y1_s16;
    tmp_u.s32s.l = 0;
    *State_cps32 = tmp_u.s32;
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * UNSIGNED LOWPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvX_LpFilterUCalc
 *
 * \brief Calculation service of unsigned lowpass filter.
 *
 * Calculates the new internal state of signed lowpass filter
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
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_u32.
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * With current implementation of expotential function follwing remarks are used for implementation:
 * Current return range of exp function is: e^-x quantized by 2^16 [1 .. 0.018316] = [e^0 .. e^-4] = [65536 .. 1200]
 * That means that K is given as 32 bit value, but only 16 bits are currently used.
 * K ist given with paramter Fac_u16
 *
 * \param   uint32        X0_u32       Current input value Xn
 * \param   uint32 *const State_cpu32  Constant pointer to state value
 * \param   sint32        Fac_s32      Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_LpFilterUCalc_inline(uint32 X0_u32, uint32 *const State_cpu32, uint16 Fac_u16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;


    tmp_u.u32 = *State_cpu32;

    /* Calculate  Yn = Yn-1 + (Xn - Yn-1) * K                             */
    /* --------------------------------------                             */
    /* Xn is unscaled                                                     */
    /* Yn, Yn-1 and K are scaled with 2^16                                */
    /* Yn = *State_cpu32 (new value), Yn-1 = *State_cpu32 (odl value)     */
    /* Yn-1 is scaled with 2^16, only high word is used in calculation.   */

    /* Check if Xn is greater than Yn-1. Is relevant for calculation:     */
    /* (Xn - Yn-1) will be calculated in unsigned context and result will */
    /* be added or substracted. This will reduce resource consumption.    */
    if (X0_u32 >= tmp_u.u32s.h)
    {
        /* Xn is >= 0, Yn-1 is >=0 and (Xn - Yn-1) is still >= 0          */
        /* Sub can be made without SrvB service in unsigned context.      */
        /* Finally result of (Xn -Yn-1) can be added.                     */
        *State_cpu32 = SrvB_MulAdd_U32U32U32_U32_inline(X0_u32 - (uint32)tmp_u.u32s.h, Fac_u16, *State_cpu32);
    }
    else
    {
        /* Xn is >= 0, Yn-1 is >=0 and (Yn-1 - X0) is still >= 0          */
        /* Sub can be made without SrvB service in unsigned context.      */
        /* Finally result must be substracted, result is negative         */
        *State_cpu32 = SrvB_Sub_U32U32_U32_inline(*State_cpu32,
                                                   SrvB_Mul_U32U32_U32_inline((uint32)tmp_u.u32s.h - X0_u32, Fac_u16));
    }
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterUOut_S16
 *
 * \brief Gets the 16 bit result of a unsigned lowpass filter.
 *
 * The state State_cpcu32 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   const uint32 *const State_cpu32    Constant pointer to state value
 * \return  uint16                             Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvX_LpFilterUOut_U16_inline(const uint32 *const State_cpcu32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32 = *State_cpcu32;
    return (tmp_u.u32s.h);
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterUOut_S8
 *
 * \brief Gets the 8 bit result of a unsigned lowpass filter.
 *
 * The state State_cpcu32 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   const uint32 *const State_cpu32   Constant pointer to state value
 * \return  uint8                             Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvX_LpFilterUOut_U8_inline(const uint32 *const State_cpcu32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32 = *State_cpcu32;
    return (SrvB_TypeLimiter_U32_U8_inline(tmp_u.u32s.h));
}


/**
 **********************************************************************************************************************
 * SrvX_LpFilterUSetState
 *
 * \brief Initialises the state structure of a signed lowpass filter.
 *
 * \param   uint32 *const State_cpu32  Constant pointer to state value
 * \param   uint16 Y1_u16               Input value Yn-1 unscaled, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_LpFilterUSetState_inline(uint32 *const State_cpu32, uint16 Y1_u16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32s.h = Y1_u16;
    tmp_u.u32s.l = 0;
    *State_cpu32 = tmp_u.u32;
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * SIGNED HIGHPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvX_HpFilterSCalc
 *
 * \brief Calculation service of signed highpass filter.
 *
 * Calculates the new internal state of signed highpass filter
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
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_s32.
 *
 * The state Xn-1
 * describes the input value one time step before the current time
 * State_cpst->X1 holds Xn-1
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * With current implementation of expotential function follwing remarks are used for implementation:
 * Current return range of exp function is: e^-x quantized by 2^16 [1 .. 0.018316] = [e^0 .. e^-4] = [65536 .. 1200]
 * K ist given with paramter Fac_u16
 *
 * \param   sint32                  X0_s32       Current input value Xn
 * \param   SrvX_HpFilterS_t *const State_cpst   Constant pointer to state structure
 * \param   sint32                  Fac_s32      Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_HpFilterSCalc_inline(sint32 X0_s32, SrvX_HpFilterS_t *const State_cpst,
                                                       uint16 Fac_u16))
{
    sint32 tmp_s32;


    /* Calculate (Yn-1 - K * Yn-1)                                        */
    /* ---------------------------                                        */
    /* (Yn-1 - K * Yn-1) = (1 - K) * Yn-1                                 */
    /* Yn, Yn-1 and K are scaled with 2^16                                */
    /* K represents values from 0...1. (0...0xFFFFh)                      */
    /* Result of (1 - K) * Yn-1 is in range [0, Yn-1]                     */
    /* Scaling factor of K (2^16) is shifted back                         */
    tmp_s32 = SrvB_MulShRight_S32S32_S32_inline((sint32)(MAXUINT16 - Fac_u16), State_cpst->Y1, 16);

    /* Calculate Yn = Yn-1 - K * Yn-1 + (Xn - Xn-1)                       */
    /* --------------------------------------------                       */
    /* Calculation can be done in signed 32 bit context.                  */
    State_cpst->Y1 = SrvB_MulAdd_S32S32S32_S32_inline(SrvB_Sub_S32S32_S32_inline(X0_s32, State_cpst->X1),
                                                      65536L, tmp_s32);

    State_cpst->X1 = X0_s32;
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterSOut_S16
 *
 * \brief Gets the 16 bit result of a signed highpass filter.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   const SrvX_HpFilterS_t *const State_cpst    Constant pointer to state structure
 * \return  sint16                                      Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_HpFilterSOut_S16_inline(const SrvX_HpFilterS_t *const State_cpcst))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32 = State_cpcst->Y1;
    return (tmp_u.s32s.h);
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterSOut_S8
 *
 * \brief Gets the 8 bit result of a signed highpass filter.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   const SrvX_HpFilterS_t *const State_cpst    Constant pointer to state structure
 * \return  sint8                                       Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_HpFilterSOut_S8_inline(const SrvX_HpFilterS_t *const State_cpcst))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32 = State_cpcst->Y1;
    return (SrvB_TypeLimiter_S32_S8_inline(tmp_u.s32s.h));
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterSSetState
 *
 * \brief Initialises the state structure of a signed highpass filter.
 *
 * \param   SrvX_HpFilterS_t *const State_cpst  Constant pointer to state value structure
 * \param   sint32 X1_s32                       Input value Xn-1, one time step before calculation time
 * \param   sint16 Y1_s16                       Input value Yn-1, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_HpFilterSSetState_inline(SrvX_HpFilterS_t *const State_cpst,
                                                           sint32 X1_s32, sint16 Y1_s16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    sint32u tmp_u;

    tmp_u.s32s.h = Y1_s16;
    tmp_u.s32s.l = 0;
    State_cpst->Y1 = tmp_u.s32;
    State_cpst->X1 = X1_s32;
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * UNSIGNED HIGHPASS FILTER
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvX_HpFilterUCalc
 *
 * \brief Calculation service of unsigned highpass filter.
 *
 * Calculates the new internal state of signed highpass filter
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
 * State_cpst->Y1 holds Yn-1, scaled by the factor 2^16: *State_cpst->Y1 = 2^16 * Yn-1.
 * Past calculation the old Yn-1 value is replaced by the current output value Yn.
 *
 * The state Xn
 * describes the current input value and is hold by the parameter X0_u32.
 *
 * The state Xn-1
 * describes the input value one time step before the current time
 * State_cpst->X1 holds Xn-1
 *
 * The parameter K
 * represents the time depended factor which is caluclated as (1 - exp(-dT/T1))
 * With current implementation of expotential function follwing remarks are used for implementation:
 * Current return range of exp function is: e^-x quantized by 2^16 [1 .. 0.018316] = [e^0 .. e^-4] = [65536 .. 1200]
 * K ist given with paramter Fac_u16
 *
 * \param   uint32                  X0_u32       Current input value Xn
 * \param   SrvX_HpFilterS_t *const State_cpst   Constant pointer to state structure
 * \param   uint16                  Fac_u16      Parameter for time dependent factor
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_HpFilterUCalc_inline(uint32 X0_u32, SrvX_HpFilterU_t *const State_cpst,
                                                       uint16 Fac_u16))
{
    uint32 tmp_u32;


    /* Calculate (Yn-1 - K * Yn-1)                                        */
    /* ---------------------------                                        */
    /* (Yn-1 - K * Yn-1) = (1 - K) * Yn-1                                 */
    /* Yn, Yn-1 and K are scaled with 2^16                                */
    /* K represents values from 0...1. (0...0xFFFFh)                      */
    /* Result of (1 - K) * Yn-1 is in range [0, Yn-1]                     */
    /* Scaling factor of K (2^16) is shifted back                         */
    tmp_u32 = SrvB_MulShRight_U32U32_U32_inline((uint32)(MAXUINT16 - Fac_u16), State_cpst->Y1, 16);

    /* Calculate Yn = Yn-1 - K * Yn-1 + (Xn - Xn-1)                       */
    /* --------------------------------------------                       */
    /* Check if (Xn - Xn-1) can have a positive or negative result        */
    /* Calculation will be done in unsigned context to save runtime       */
    /* Result must fit in 16 bit context because scaling with 2^16 must   */
    /* be done. If result is bigger -> limitation.                        */
    /* (Mixed signed/unsigned calculation would need more resources)      */
    if (X0_u32 > State_cpst->X1)
    {
        /* (Xn - Xn-1) is a positive number */
        /* (Xn - Xn-1) can be added         */
        State_cpst->Y1 = SrvB_Add_U32U32_U32_inline(tmp_u32,
                                                    SrvB_Sub_U32U32_U16_inline(X0_u32, State_cpst->X1) * 65536uL);
    }
    else
    {
        /* (Xn - Xn-1) is a negative number */
        /* (Xn - Xn-1) must be substracted  */
        State_cpst->Y1 = SrvB_Sub_U32U32_U32_inline(tmp_u32,
                                                    SrvB_Sub_U32U32_U16_inline(State_cpst->X1, X0_u32) * 65536uL);
    }

    State_cpst->X1 = X0_u32;
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterUOut_U16
 *
 * \brief Gets the 16 bit result of a unsigned highpass filter.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT16, MAXSINT16].
 *
 * \param   const SrvX_HpFilterS_t *const State_cpst    Constant pointer to state structure
 * \return  sint16                                      Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvX_HpFilterUOut_U16_inline(const SrvX_HpFilterU_t *const State_cpcst))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32 = State_cpcst->Y1;
    return (tmp_u.u32s.h);
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterUOut_U8
 *
 * \brief Gets the 8 bit result of a unsigned highpass filter.
 *
 * The state State_cpst->Y1 describes the output value, at one time step before the current time.
 * It is scaled by the factor 2^16, the out method returns the unscaled result.
 * The result is limited to the range [MINSINT8, MAXSINT8].
 *
 * \param   const SrvX_HpFilterU_t *const State_cpcst   Constant pointer to state structure
 * \return  sint8                                       Unscaled result
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvX_HpFilterUOut_U8_inline(const SrvX_HpFilterU_t *const State_cpcst))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32 = State_cpcst->Y1;
    return (SrvB_TypeLimiter_U32_U8_inline(tmp_u.u32s.h));
}


/**
 **********************************************************************************************************************
 * SrvX_HpFilterUSetState
 *
 * \brief Initialises the state structure of a signed highpass filter.
 *
 * \param   SrvX_HpFilterU_t *const State_cpst  Constant pointer to state value structure
 * \param   uint32 X1_u32                       Input value Xn-1, one time step before calculation time
 * \param   uint16 Y1_u16                       Input value Yn-1, one time step before calculation time
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvX_HpFilterUSetState_inline(SrvX_HpFilterU_t *const State_cpst,
                                                           uint32 X1_u32, uint16 Y1_u16))
{
    /* MISRA RULE 18.4 VIOLATION: Union is needed here to access to sub elements. This code will be reworked at
                                  a later moment. */
    uint32u tmp_u;

    tmp_u.u32s.h = Y1_u16;
    tmp_u.u32s.l = 0;
    State_cpst->Y1 = tmp_u.u32;
    State_cpst->X1 = X1_u32;
}


/* _SRVX_FILTER_INL_H */
#endif
