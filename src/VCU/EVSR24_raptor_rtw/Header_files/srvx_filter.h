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
 * $Filename__:srvx_filter.h$ 
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
 * $Name______:srvx_filter$ 
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

#ifndef _SRVX_FILTER_H
#define _SRVX_FILTER_H


/*
 **********************************************************************************************************************
 * Type definitions : State  structures
 **********************************************************************************************************************
 */

/* State structure for signed highpass */
typedef struct
{
  sint32 X1;
  sint32 Y1;
} SrvX_HpFilterS_t;


/* State structure for unsigned highpass */
typedef struct
{
  uint32 X1;
  uint32 Y1;
} SrvX_HpFilterU_t;


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


/* SRVX_FILTERCALCK_U16_LOCATION *************************************************************************************/
#if (SRVX_FILTERCALCK_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_FilterCalcK_U16(sint32 T1rec_s32, sint32 dT_s32);

#elif (SRVX_FILTERCALCK_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_FilterCalcK_U16 SrvX_FilterCalcK_U16_inline

#elif (SRVX_FILTERCALCK_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_FilterCalcK_U16(sint32 T1rec_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_FilterCalcK_U16 is not supported'

/* SRVX_FILTERCALCK_U16_LOCATION */
#endif


/* SRVX_FILTERCALCKAPP_U16_LOCATION **********************************************************************************/
#if (SRVX_FILTERCALCKAPP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_FilterCalcKApp_U16(sint32 T1rec_s32, sint32 dT_s32);

#elif (SRVX_FILTERCALCKAPP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_FilterCalcKApp_U16 SrvX_FilterCalcKApp_U16_inline

#elif (SRVX_FILTERCALCKAPP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_FilterCalcKApp_U16(sint32 T1rec_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_FilterCalcKApp_U16 is not supported'

/* SRVX_FILTERCALCKAPP_U16_LOCATION */
#endif


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


/* SRVX_LPFILTERSCALC_LOCATION ***************************************************************************************/
#if (SRVX_LPFILTERSCALC_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_LpFilterSCalc(sint32 X0_s32, sint32 *const State_cps32, uint16 Fac_u16);

#elif (SRVX_LPFILTERSCALC_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterSCalc SrvX_LpFilterSCalc_inline

#elif (SRVX_LPFILTERSCALC_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_LpFilterSCalc(sint32 X0_s32, sint32 *const State_cps32, uint16 Fac_u16));

#else
    #error >>>> 'Configuration for SrvX_LpFilterSCalc is not supported'

/* SRVX_LPFILTERSCALC_LOCATION */
#endif


/* SRVX_LPFILTERSOUT_S16_LOCATION ************************************************************************************/
#if (SRVX_LPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LpFilterSOut_S16(const sint32 *const State_cpcs32);

#elif (SRVX_LPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterSOut_S16 SrvX_LpFilterSOut_S16_inline

#elif (SRVX_LPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LpFilterSOut_S16(const sint32 *const State_cpcs32));

#else
    #error >>>> 'Configuration for SrvX_LpFilterSOut_S16 is not supported'

/* SRVX_LPFILTERSOUT_S16_LOCATION */
#endif


/* SRVX_LPFILTERSOUT_S8_LOCATION *************************************************************************************/
#if (SRVX_LPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LpFilterSOut_S8(const sint32 *const State_cpcs32);

#elif (SRVX_LPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterSOut_S8 SrvX_LpFilterSOut_S8_inline

#elif (SRVX_LPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LpFilterSOut_S8(const sint32 *const State_cpcs32));

#else
    #error >>>> 'Configuration for SrvX_LpFilterSOut_S8 is not supported'

/* SRVX_LPFILTERSOUT_S8_LOCATION */
#endif


/* SRVX_LPFILTERSSETSTATE_LOCATION ***********************************************************************************/
#if (SRVX_LPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_LpFilterSSetState(sint32 *const State_cps32, sint16 Y1_s16);

#elif (SRVX_LPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterSSetState SrvX_LpFilterSSetState_inline

#elif (SRVX_LPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_LpFilterSSetState(sint32 *const State_cps32, sint16 Y1_s16);

#else
    #error >>>> 'Configuration for SrvX_LpFilterSSetState is not supported'

/* SRVX_LPFILTERSSETSTATE_LOCATION */
#endif


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


/* SRVX_LPFILTERUCALC_LOCATION ***************************************************************************************/
#if (SRVX_LPFILTERUCALC_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_LpFilterUCalc(uint32 X0_u32, uint32 *const State_cpu32, uint16 Fac_u16);

#elif (SRVX_LPFILTERUCALC_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterUCalc SrvX_LpFilterUCalc_inline

#elif (SRVX_LPFILTERUCALC_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_LpFilterUCalc(uint32 X0_u32, uint32 *const State_cpu32, uint16 Fac_u16));

#else
    #error >>>> 'Configuration for SrvX_LpFilterUCalc is not supported'

/* SRVX_LPFILTERUCALC_LOCATION */
#endif


/* SRVX_LPFILTERUOUT_U16_LOCATION ************************************************************************************/
#if (SRVX_LPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LpFilterUOut_U16(const uint32 *const State_cpcu32);

#elif (SRVX_LPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterUOut_U16 SrvX_LpFilterUOut_U16_inline

#elif (SRVX_LPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LpFilterUOut_U16(const uint32 *const State_cpcu32));

#else
    #error >>>> 'Configuration for SrvX_LpFilterUOut_U16 is not supported'

/* SRVX_LPFILTERUOUT_U16_LOCATION */
#endif


/* SRVX_LPFILTERUOUT_U8_LOCATION *************************************************************************************/
#if (SRVX_LPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LpFilterUOut_U8(const uint32 *const State_cpcu32);

#elif (SRVX_LPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterUOut_U8 SrvX_LpFilterUOut_U8_inline

#elif (SRVX_LPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LpFilterUOut_U8(const uint32 *const State_cpcu32));

#else
    #error >>>> 'Configuration for SrvX_LpFilterUOut_U8 is not supported'

/* SRVX_LPFILTERUOUT_U8_LOCATION */
#endif


/* SRVX_LPFILTERUSETSTATE_LOCATION ***********************************************************************************/
#if (SRVX_LPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_LpFilterUSetState(uint32 *const State_cpu32, uint16 Y1_u16);

#elif (SRVX_LPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LpFilterUSetState SrvX_LpFilterUSetState_inline

#elif (SRVX_LPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_LpFilterUSetState(uint32 *const State_cpu32, uint16 Y1_u16));

#else
    #error >>>> 'Configuration for SrvX_LpFilterUSetState is not supported'

/* SRVX_LPFILTERUSETSTATE_LOCATION */
#endif


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


/* SRVX_HPFILTERSCALC_LOCATION ***************************************************************************************/
#if (SRVX_HPFILTERSCALC_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_HpFilterSCalc(sint32 X0_s32, SrvX_HpFilterS_t *const State_cpst, uint16 Fac_u16);

#elif (SRVX_HPFILTERSCALC_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterSCalc SrvX_HpFilterSCalc_inline

#elif (SRVX_HPFILTERSCALC_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_HpFilterSCalc(sint32 X0_s32, SrvX_HpFilterS_t *const State_cpst,
                                                         uint16 Fac_u16));

#else
    #error >>>> 'Configuration for SrvX_HpFilterSCalc is not supported'

/* SRVX_HPFILTERSCALC_LOCATION */
#endif


/* SRVX_HPFILTERSOUT_S16_LOCATION ************************************************************************************/
#if (SRVX_HPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_HpFilterSOut_S16(const SrvX_HpFilterS_t *const State_cpcst);

#elif (SRVX_HPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterSOut_S16 SrvX_HpFilterSOut_S16_inline

#elif (SRVX_HPFILTERSOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_HpFilterSOut_S16(const SrvX_HpFilterS_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_HpFilterSOut_S16 is not supported'

/* SRVX_HPFILTERSOUT_S16_LOCATION */
#endif


/* SRVX_HPFILTERSOUT_S8_LOCATION *************************************************************************************/
#if (SRVX_HPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_HpFilterSOut_S8(const SrvX_HpFilterS_t *const State_cpcst);

#elif (SRVX_HPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterSOut_S8 SrvX_HpFilterSOut_S8_inline

#elif (SRVX_HPFILTERSOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_HpFilterSOut_S8(const SrvX_HpFilterS_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_HpFilterSOut_S8 is not supported'

/* SRVX_HPFILTERSOUT_S8_LOCATION */
#endif


/* SRVX_HPFILTERSSETSTATE_LOCATION ***********************************************************************************/
#if (SRVX_HPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_HpFilterSSetState(SrvX_HpFilterS_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_HPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterSSetState SrvX_HpFilterSSetState_inline

#elif (SRVX_HPFILTERSSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_HpFilterSSetState(SrvX_HpFilterS_t *const State_cpst,
                                                             sint32 X1_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_HpFilterSSetState is not supported'

/* SRVX_HPFILTERSSETSTATE_LOCATION */
#endif


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


/* SRVX_HPFILTERUCALC_LOCATION ***************************************************************************************/
#if (SRVX_HPFILTERUCALC_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_HpFilterUCalc(uint32 X0_u32, SrvX_HpFilterU_t *const State_cpst, uint16 Fac_u16);

#elif (SRVX_HPFILTERUCALC_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterUCalc SrvX_HpFilterUCalc_inline

#elif (SRVX_HPFILTERUCALC_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_HpFilterUCalc(uint32 X0_u32, SrvX_HpFilterU_t *const State_cpst,
                                                         uint16 Fac_u16));

#else
    #error >>>> 'Configuration for SrvX_HpFilterUCalc is not supported'

/* SRVX_HPFILTERUCALC_LOCATION */
#endif


/* SRVX_HPFILTERUOUT_U16_LOCATION ************************************************************************************/
#if (SRVX_HPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_HpFilterUOut_U16(const SrvX_HpFilterU_t *const State_cpcst);

#elif (SRVX_HPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterUOut_U16 SrvX_HpFilterUOut_U16_inline

#elif (SRVX_HPFILTERUOUT_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_HpFilterUOut_U16(const SrvX_HpFilterU_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_HpFilterUOut_U16 is not supported'

/* SRVX_HPFILTERUOUT_U16_LOCATION */
#endif


/* SRVX_HPFILTERUOUT_U8_LOCATION *************************************************************************************/
#if (SRVX_HPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_HpFilterUOut_U8(const SrvX_HpFilterU_t *const State_cpcst);

#elif (SRVX_HPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterUOut_U8 SrvX_HpFilterUOut_U8_inline

#elif (SRVX_HPFILTERUOUT_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_HpFilterUOut_U8(const SrvX_HpFilterU_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_HpFilterUOut_U8 is not supported'

/* SRVX_HPFILTERUOUT_U8_LOCATION */
#endif


/* SRVX_HPFILTERUSETSTATE_LOCATION ***********************************************************************************/
#if (SRVX_HPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_HpFilterUSetState(SrvX_HpFilterU_t *const State_cpst, uint32 X1_u32, uint16 Y1_u16);

#elif (SRVX_HPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_HpFilterUSetState SrvX_HpFilterUSetState_inline

#elif (SRVX_HPFILTERUSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_HpFilterUSetState(SrvX_HpFilterU_t *const State_cpst,
                                                             uint32 X1_u32, uint16 Y1_u16));

#else
    #error >>>> 'Configuration for SrvX_HpFilterUSetState is not supported'

/* SRVX_HPFILTERUSETSTATE_LOCATION */
#endif


/* _SRVX_FILTER_H */
#endif
