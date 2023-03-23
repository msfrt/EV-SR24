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
 * $Filename__:srvf_filter.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Migrated from ClearCase, Based on B_SRVF.13.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_filter$ 
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
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_FILTER_H
#define _SRVF_FILTER_H


/*
 **********************************************************************************************************************
 * Type definitions : State  structures
 **********************************************************************************************************************
 */

typedef struct
{
  real32 X1;
  real32 Y1;
} SrvF_HpFilter_t;


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
 * FACTOR K, PRECISE AND APPROXIMATIVE
 *
 *
 *
 **********************************************************************************************************************
 */


/* SRVF_FILTERCALCK_R32_LOCATION *************************************************************************************/
#if (SRVF_FILTERCALCK_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_FilterCalcK_R32(real32 T1rec_r32, real32 dT_r32);

#elif (SRVF_FILTERCALCK_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_FilterCalcK_R32 SrvF_FilterCalcK_R32_inline

#elif (SRVF_FILTERCALCK_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_FilterCalcK_R32(real32 T1rec_r32, real32 dT_r32));

#else
    #error >>>> 'Configuration for SrvF_FilterCalcK_R32 is not supported'

/* SRVF_FILTERCALCK_R32_LOCATION */
#endif


/* SRVF_FILTERCALCKAPP_R32_LOCATION **********************************************************************************/
#if (SRVF_FILTERCALCKAPP_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_FilterCalcKApp_R32(real32 T1rec_r32, real32 dT_r32);

#elif (SRVF_FILTERCALCKAPP_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_FilterCalcKApp_R32 SrvF_FilterCalcKApp_R32_inline

#elif (SRVF_FILTERCALCKAPP_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_FilterCalcKApp_R32(real32 T1rec_r32, real32 dT_r32));

#else
    #error >>>> 'Configuration for SrvF_FilterCalcKApp_R32 is not supported'

/* SRVF_FILTERCALCKAPP_R32_LOCATION */
#endif


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


/* SRVF_LPFILTERCALC_LOCATION ****************************************************************************************/
#if (SRVF_LPFILTERCALC_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_LpFilterCalc(real32 X0_r32, real32 *const State_cpr32, real32 Fac_r32);

#elif (SRVF_LPFILTERCALC_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_LpFilterCalc SrvF_LpFilterCalc_inline

#elif (SRVF_LPFILTERCALC_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_LpFilterCalc(real32 X0_r32, real32 *const State_cpr32, real32 Fac_r32));

#else
    #error >>>> 'Configuration for SrvF_LpFilterCalc is not supported'

/* SRVF_LPFILTERCALC_LOCATION */
#endif


/* SRVF_LPFILTEROUT_R32_LOCATION *************************************************************************************/
#if (SRVF_LPFILTEROUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_LpFilterOut_R32(const real32 *const State_cpcr32);

#elif (SRVF_LPFILTEROUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_LpFilterOut_R32 SrvF_LpFilterOut_R32_inline

#elif (SRVF_LPFILTEROUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_LpFilterOut_R32(const real32 *const State_cpcr32));

#else
    #error >>>> 'Configuration for SrvF_LpFilterOut_R32 is not supported'

/* SRVF_LPFILTEROUT_R32_LOCATION */
#endif


/* SRVF_LPFILTERSETSTATE_LOCATION ************************************************************************************/
#if (SRVF_LPFILTERSETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_LpFilterSetState(real32 *const State_cpr32, real32 Y1_r32);

#elif (SRVF_LPFILTERSETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_LpFilterSetState SrvF_LpFilterSetState_inline

#elif (SRVF_LPFILTERSETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_LpFilterSetState(real32 *const State_cpr32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_LpFilterSetState is not supported'

/* SRVF_LPFILTERSETSTATE_LOCATION */
#endif


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


/* SRVF_HPFILTERCALC_LOCATION ****************************************************************************************/
#if (SRVF_HPFILTERCALC_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_HpFilterCalc(real32 X0_r32, SrvF_HpFilter_t *const State_cpst, real32 Fac_r32);

#elif (SRVF_HPFILTERCALC_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_HpFilterCalc SrvF_HpFilterCalc_inline

#elif (SRVF_HPFILTERCALC_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_HpFilterCalc(real32 X0_r32, SrvF_HpFilter_t *const State_cpst,
                                                        real32 Fac_r32));

#else
    #error >>>> 'Configuration for SrvF_HpFilterCalc is not supported'

/* SRVF_HPFILTERCALC_LOCATION */
#endif


/* SRVF_HPFILTEROUT_R32_LOCATION *************************************************************************************/
#if (SRVF_HPFILTEROUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_HpFilterOut_R32(const SrvF_HpFilter_t *const State_cpcst);

#elif (SRVF_HPFILTEROUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_HpFilterOut_R32 SrvF_HpFilterOut_R32_inline

#elif (SRVF_HPFILTEROUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_HpFilterOut_R32(const SrvF_HpFilter_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_HpFilterOut_R32 is not supported'

/* SRVF_HPFILTEROUT_R32_LOCATION */
#endif


/* SRVF_HPFILTERSETSTATE_LOCATION ************************************************************************************/
#if (SRVF_HPFILTERSETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_HpFilterSetState(SrvF_HpFilter_t *const State_cpst, real32 X1_r32, real32 Y1_r32);

#elif (SRVF_HPFILTERSETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_HpFilterSetState SrvF_HpFilterSetState_inline

#elif (SRVF_HPFILTERSETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_HpFilterSetState(SrvF_HpFilter_t *const State_cpst,
                                                            real32 X1_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_HpFilterSetState is not supported'

/* SRVF_HPFILTERSETSTATE_LOCATION */
#endif


/* _SRVF_FILTER_H */
#endif
