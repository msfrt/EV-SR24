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
 * $Filename__:srvx_controller.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVX.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SWC1COB$ 
 * $Date______:10.07.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_controller$ 
 * $Variant___:1.16.0$ 
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
 * 1.16.0; 0     10.07.2012 SWC1COB
 *   32-bit interpolation functionality added
 * 
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvX
 * 
 * 1.13.4; 0     05.08.2011 SW84FE
 *   Bugfix
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_CONTROLLER_H
#define _SRVX_CONTROLLER_H

/*
 ***********************************************************************************************************************
 * List of functions
 *
 * SrvX_PCalc
 *
 * SrvX_PT1Calc
 *
 * SrvX_DT1Typ1Calc
 *
 * SrvX_DT1Typ2Calc
 *
 * SrvX_PDCalc
 *
 * SrvX_ICalc           SrvX_ILimCalc
 *
 * SrvX_PITyp1Calc      SrvX_PILimTyp1Calc
 * SrvX_PITyp2Calc      SrvX_PILimTyp2Calc
 *
 * SrvX_PIDTyp1Calc     SrvX_PIDLimTyp1Calc
 * SrvX_PIDTyp2Calc     SrvX_PIDLimTyp2Calc
 *
 ***********************************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Constants used for the Conrollers
 ***************************************************************************************************
 */

/* Special data types limits for controller */
#define MINS16SHL16 MINSINT32 /* MINSINT16, (SH)ifted (L)eft by (16) positions */
/* Normally this is 0x80000000, but creates MISRA warnings */
/* MINSINT32 is a MISRA conform definition of 0x80000000 */
#define MAXS16SHL16 (0x7FFF0000L) /* MAXSINT16, (SH)ifted (L)eft by (16) positions */
#define MAXS8SHL16  (0x007F0000L) /* MAXSINT8, (SH)ifted (L)eft by (16) positions */
/* MINSINT8, (SH)ifted (L)eft by (16) positions */
#define MINS8SHL16 (-(MAXS8SHL16) - 0x10000L) /* = 0xFF800000 */


 


/*
 ***************************************************************************************************
 * Type definitions : Auxiliary structures
 ***************************************************************************************************
 */

typedef struct
{
    sint32 Min_C;
    sint32 Max_C;
}SrvX_Limits_t;

/*
 ***************************************************************************************************
 * Type definitions : State  structures
 ***************************************************************************************************
 */

typedef struct
{
    sint32 X1;
    sint32 Y1;
}SrvX_StatePT1_t;

typedef struct
{
    sint32 X1;
    sint32 X2;
    sint32 Y1;
}SrvX_StateDT1Typ1_t;

typedef struct
{
    sint32 X1;
    sint32 Y1;
}SrvX_StateDT1Typ2_t;

typedef struct
{
    sint32 X1;
    sint32 Y1;
}SrvX_StatePD_t;

typedef struct
{
    sint32 X1;
    sint32 Y1;
}SrvX_StateI_t;

typedef struct
{
    sint32 X1;
    sint32 Y1;
}SrvX_StatePI_t;

typedef struct
{
    sint32 X1;
    sint32 X2;
    sint32 Y1;
}SrvX_StatePID_t;

/*
 ***************************************************************************************************
 * Type definitions : Param  structures
 ***************************************************************************************************
 */

typedef struct
{
    sint32 Kp_C;
    sint32 Tv_C;
}SrvX_ParamPD_t;

typedef struct
{
    sint32 Kp_C;
    sint32 Tn_C;
}SrvX_ParamPI_t;

typedef struct
{
    sint32 Kp_C;
    sint32 Tv_C;
    sint32 Tn_C;
}
SrvX_ParamPID_t;


/*
 ***************************************************************************************************
 * Configurable declarations
 ***************************************************************************************************
 */
/* SRVX_CALCTEQ_S32_LOCATION ******************************************************************************************/
#if (SRVX_CALCTEQ_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_CalcTeQ_S32(sint32 T1rec_s32, sint32 dT_s32);

#elif (SRVX_CALCTEQ_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_CalcTeQ_S32 SrvX_CalcTeQ_S32_inline

#elif (SRVX_CALCTEQ_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_CalcTeQ_S32(sint32 T1rec_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_CalcTeQ_S32 is not supported'

/* SRVX_CALCTEQ_S32_LOCATION */
#endif


/* SRVX_CALCTEQAPP_S32_LOCATION ***************************************************************************************/
#if (SRVX_CALCTEQAPP_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_CalcTeQApp_S32(sint32 T1rec_s32, sint32 dT_s32);

#elif (SRVX_CALCTEQAPP_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_CalcTeQApp_S32 SrvX_CalcTeQApp_S32_inline

#elif (SRVX_CALCTEQAPP_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_CalcTeQApp_S32(sint32 T1rec_s32, sint32 dT_s32));

#else
    #error >>>> 'Configuration for SrvX_CalcTeQApp_S32 is not supported'

/* SRVX_CALCTEQAPP_S32_LOCATION */
#endif


/*   SRVX_CTRLSETLIMIT_LOCATION **************************************************************************************/
#if (SRVX_CTRLSETLIMIT_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_CtrlSetLimit(SrvX_Limits_t *const Limits_cpst, sint32 Min_s32, sint32 Max_s32);

#elif (  SRVX_CTRLSETLIMIT_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_CtrlSetLimit SrvX_CtrlSetLimit_inline

#elif (  SRVX_CTRLSETLIMIT_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_CtrlSetLimit(SrvX_Limits_t *const Limits_cpst, sint32 Min_s32, sint32 Max_s32));

#else
    #error >>>> 'Configuration for SrvX_CtrlSetLimit is not supported'

/*   SRVX_CTRLSETLIMITS_LOCATION */
#endif


/*   SRVX_DT1TYP1SETSTATE_LOCATION ************************************************************************************/
#if (  SRVX_DT1TYP1SETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_DT1Typ1SetState(SrvX_StateDT1Typ1_t *const State_cpst , sint32 X1_s32, sint32 X2_s32, sint16 Y1_s16);

#elif (  SRVX_DT1TYP1SETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ1SetState   SrvX_DT1Typ1SetState_inline

#elif (  SRVX_DT1TYP1SETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_DT1Typ1SetState(SrvX_StateDT1Typ1_t *const State_cpst , sint32 X1_s32, sint32 X2_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for   SrvX_DT1Typ1SetState is not supported'

/*   SRVX_DT1TYP1SETSTATE_LOCATION */
#endif


/*  SRVX_DT1TYP1OUT_S8_LOCATION **************************************************************************************/
#if ( SRVX_DT1TYP1OUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_DT1Typ1Out_S8(const SrvX_StateDT1Typ1_t *const State_cpcst);

#elif ( SRVX_DT1TYP1OUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ1Out_S8   SrvX_DT1Typ1Out_S8_inline

#elif ( SRVX_DT1TYP1OUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_DT1Typ1Out_S8(const SrvX_StateDT1Typ1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for  SrvX_DT1Typ1Out_S8  is not supported'

/*  SRVX_DT1TYP1OUT_S8_LOCATION */
#endif


/* SRVX_DT1TYP1OUT_S16_LOCATION ***************************************************************************************/
#if (SRVX_DT1TYP1OUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DT1Typ1Out_S16(const SrvX_StateDT1Typ1_t *const State_cpcst);

#elif (SRVX_DT1TYP1OUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ1Out_S16 SrvX_DT1Typ1Out_S16_inline

#elif (SRVX_DT1TYP1OUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DT1Typ1Out_S16(const SrvX_StateDT1Typ1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_DT1Typ1Out_S16 is not supported'

/* SRVX_DT1TYP1OUT_S16_LOCATION */
#endif


/*   SRVX_DT1TYP2SETSTATE_LOCATION ************************************************************************************/
#if (  SRVX_DT1TYP2SETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_DT1Typ2SetState(SrvX_StateDT1Typ2_t *const State_cpst , sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_DT1TYP2SETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ2SetState   SrvX_DT1Typ2SetState_inline

#elif (SRVX_DT1TYP2SETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_DT1Typ2SetState(SrvX_StateDT1Typ2_t *const State_cpst , sint32 X1_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for   SrvX_DT1Typ2SetState is not supported'

/*   SRVX_DT1TYP2SETSTATE_LOCATION */
#endif


/*  SRVX_DT1TYP2OUT_S8_LOCATION **************************************************************************************/
#if ( SRVX_DT1TYP2OUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_DT1Typ2Out_S8(const SrvX_StateDT1Typ2_t *const State_cpcst);

#elif ( SRVX_DT1TYP2OUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ2Out_S8   SrvX_DT1Typ2Out_S8_inline

#elif ( SRVX_DT1TYP2OUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_DT1Typ2Out_S8(const SrvX_StateDT1Typ2_t *const State_cpcst));

#else
    #error >>>> 'Configuration for  SrvX_DT1Typ2Out_S8  is not supported'

/*  SRVX_DT1TYP2OUT_S8_LOCATION */
#endif


/* SRVX_DT1TYP2OUT_S16_LOCATION ***************************************************************************************/
#if (SRVX_DT1TYP2OUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DT1Typ2Out_S16(const SrvX_StateDT1Typ2_t *const State_cpcst);

#elif (SRVX_DT1TYP2OUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DT1Typ2Out_S16 SrvX_DT1Typ2Out_S16_inline

#elif (SRVX_DT1TYP2OUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DT1Typ2Out_S16(const SrvX_StateDT1Typ2_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_DT1Typ2Out_S16 is not supported'

/* SRVX_DT1TYP2OUT_S16_LOCATION */
#endif


/*   SRVX_CTRLPT1SETSTATE_LOCATION ************************************************************************************/
#if (SRVX_CTRLPT1SETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_CtrlPT1SetState(SrvX_StatePT1_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_CTRLPT1SETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_CtrlPT1SetState   SrvX_CtrlPT1SetState_inline

#elif (SRVX_CTRLPT1SETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_CtrlPT1SetState(SrvX_StatePT1_t *const State_cpst, sint32 X1_s32,
                                                           sint16 Y1_s16));

#else
    #error >>>> 'Configuration for   SrvX_CtrlPT1SetState is not supported'

/*   SRVX_PT1SETSTATE_LOCATION */
#endif


/*  SRVX_PT1OUT_S8_LOCATION ******************************************************************************************/
#if (SRVX_PT1OUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_PT1Out_S8(const SrvX_StatePT1_t *const State_cpcst);

#elif (SRVX_PT1OUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PT1Out_S8   SrvX_PT1Out_S8_inline

#elif ( SRVX_PT1OUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_PT1Out_S8(const SrvX_StatePT1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for  SrvX_PT1Out_S8  is not supported'

/*  SRVX_PT1OUT_S8_LOCATION */
#endif


/* SRVX_PT1OUT_S16_LOCATION *******************************************************************************************/
#if (SRVX_PT1OUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PT1Out_S16(const SrvX_StatePT1_t *const State_cpcst);

#elif (SRVX_PT1OUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PT1Out_S16 SrvX_PT1Out_S16_inline

#elif (SRVX_PT1OUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PT1Out_S16(const SrvX_StatePT1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PT1Out_S16 is not supported'

/* SRVX_PT1OUT_S16_LOCATION */
#endif


/*   SRVX_PSETSTATE_LOCATION ******************************************************************************************/
#if (SRVX_PSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PSetState(sint32 *const State_cps32, sint16 Y1_s16);

#elif (SRVX_PSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PSetState   SrvX_PSetState_inline

#elif (SRVX_PSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PSetState(sint32 *const State_cps32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_PSetState is not supported'

/*   SRVX_PSETSTATE_LOCATION */
#endif


/*  SRVX_POUT_S8_LOCATION ********************************************************************************************/
#if (SRVX_POUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_POut_S8(const sint32 *const State_cpcs32);

#elif (SRVX_POUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define  SrvX_POut_S8   SrvX_POut_S8_inline

#elif (SRVX_POUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_POut_S8(const sint32 *const State_cpcs32));

#else
    #error >>>> 'Configuration for  SrvX_POut_S8  is not supported'

/*  SRVX_POUT_S8_LOCATION */
#endif


/* SRVX_POUT_S16_LOCATION *********************************************************************************************/
#if (SRVX_POUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_POut_S16(const sint32 *const State_cpcs32);

#elif (SRVX_POUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_POut_S16 SrvX_POut_S16_inline

#elif (SRVX_POUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_POut_S16(const sint32 *const State_cpcs32));

#else
    #error >>>> 'Configuration for SrvX_POut_S16 is not supported'

/* SRVX_POUT_S16_LOCATION */
#endif


/*   SRVX_PDSETSTATE_LOCATION ****************************************************************************************/
#if (SRVX_PDSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PDSetState (SrvX_StatePD_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_PDSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define   SrvX_PDSetState    SrvX_PDSetState_inline

#elif (SRVX_PDSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PDSetState(SrvX_StatePD_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_PDSetState is not supported'

/*   SRVX_PDSETSTATE_LOCATION */
#endif


/*   SRVX_PDSETPARAM_LOCATION ****************************************************************************************/
#if (SRVX_PDSETPARAM_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PDSetParam (SrvX_ParamPD_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32);

#elif (SRVX_PDSETPARAM_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PDSetParam    SrvX_PDSetParam_inline

#elif (SRVX_PDSETPARAM_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PDSetParam (SrvX_ParamPD_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32));

#else
    #error >>>> 'Configuration for   SrvX_PDSetParam  is not supported'

/*   SRVX_PDSETPARAM_LOCATION */
#endif


/*  SRVX_PDOUT_S8_LOCATION *******************************************************************************************/
#if (SRVX_PDOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_PDOut_S8(const SrvX_StatePD_t *const State_cpcst);

#elif (SRVX_PDOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PDOut_S8   SrvX_PDOut_S8_inline

#elif (SRVX_PDOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8  SrvX_PDOut_S8(const SrvX_StatePD_t *const State_cpcst));

#else
    #error >>>> 'Configuration for  SrvX_PDOut_S8 is not supported'

/*  SRVX_PDOUT_S8_LOCATION */
#endif


/* SRVX_PDOUT_S16_LOCATION ********************************************************************************************/
#if (SRVX_PDOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PDOut_S16(const SrvX_StatePD_t *const State_cpcst);

#elif (SRVX_PDOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PDOut_S16 SrvX_PDOut_S16_inline

#elif (SRVX_PDOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PDOut_S16(const SrvX_StatePD_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PDOut_S16 is not supported'

/* SRVX_PDOUT_S16_LOCATION */
#endif


/*   SRVX_ISETSTATE_LOCATION ******************************************************************************************/
#if (  SRVX_ISETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_ISetState(SrvX_StateI_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_ISETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_ISetState   SrvX_ISetState_inline

#elif (SRVX_ISETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_ISetState(SrvX_StateI_t *const State_cpst , sint32 X1_s16, sint32 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_ISetState is not supported'

/*   SRVX_ISETSTATE_LOCATION */
#endif


/*  SRVX_IOUT_S8_LOCATION ********************************************************************************************/
#if (SRVX_IOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8  SrvX_IOut_S8(const SrvX_StateI_t *const State_cpcst);

#elif (SRVX_IOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IOut_S8   SrvX_IOut_S8_inline

#elif (SRVX_IOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IOut_S8(const SrvX_StateI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_IOut_S8 is not supported'

/*  SRVX_IOUT_S8_LOCATION */
#endif


/* SRVX_IOUT_S16_LOCATION *********************************************************************************************/
#if (SRVX_IOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IOut_S16(const SrvX_StateI_t *const State_cpcst);

#elif (SRVX_IOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IOut_S16 SrvX_IOut_S16_inline

#elif (SRVX_IOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IOut_S16(const SrvX_StateI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_IOut_S16 is not supported'

/* SRVX_IOUT_S16_LOCATION */
#endif


/*   SRVX_PISETSTATE_LOCATION ****************************************************************************************/
#if (SRVX_PISETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PISetState (SrvX_StatePI_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16);

#elif (SRVX_PISETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PISetState SrvX_PISetState_inline

#elif (SRVX_PISETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PISetState(SrvX_StatePI_t *const State_cpst, sint32 X1_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_PISetState is not supported'

/*   SRVX_PISETSTATE_LOCATION */
#endif


/*   SRVX_PISETPARAM_LOCATION ****************************************************************************************/
#if (SRVX_PISETPARAM_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PISetParam (SrvX_ParamPI_t *const Param_cpst, sint32 Kp_s32, sint32 Tn_s32);

#elif (SRVX_PISETPARAM_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PISetParam SrvX_PISetParam_inline

#elif (SRVX_PISETPARAM_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PISetParam (SrvX_ParamPI_t *const Param_cpst, sint32 Kp_s32, sint32 Tn_s32));

#else
    #error >>>> 'Configuration for SrvX_PISetParam is not supported'

/*   SRVX_PISETPARAM_LOCATION */
#endif


/*  SRVX_PIOUT_S8_LOCATION *******************************************************************************************/
#if (SRVX_PIOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_PIOut_S8(const SrvX_StatePI_t *const State_cpcst);

#elif (SRVX_PIOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PIOut_S8 SrvX_PIOut_S8_inline

#elif (SRVX_PIOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8  SrvX_PIOut_S8(const SrvX_StatePI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PIOut_S8 is not supported'

/*  SRVX_PIOUT_S8_LOCATION */
#endif


/* SRVX_PIOUT_S16_LOCATION ********************************************************************************************/
#if (SRVX_PIOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PIOut_S16(const SrvX_StatePI_t *const State_cpcst);

#elif (SRVX_PIOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PIOut_S16 SrvX_PIOut_S16_inline

#elif (SRVX_PIOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PIOut_S16(const SrvX_StatePI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PIOut_S16 is not supported'

/* SRVX_PIOUT_S16_LOCATION */
#endif


/*   SRVX_PIDSETSTATE_LOCATION ***************************************************************************************/
#if (SRVX_PIDSETSTATE_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PIDSetState(SrvX_StatePID_t *const State_cpst, sint32 X1_s32, sint32 X2_s32, sint16 Y1_s16);

#elif (SRVX_PIDSETSTATE_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PIDSetState SrvX_PIDSetState_inline

#elif (SRVX_PIDSETSTATE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PIDSetState (SrvX_StatePID_t *const State_cpst, sint32 X1_s32, sint32 X2_s32, sint16 Y1_s16));

#else
    #error >>>> 'Configuration for SrvX_PIDSetState  is not supported'

/*   SRVX_PIDSETSTATE_LOCATION */
#endif


/*   SRVX_PIDSETPARAM_LOCATION ****************************************************************************************/
#if (SRVX_PIDSETPARAM_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_PIDSetParam(SrvX_ParamPID_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32, sint32 Tn_s32);

#elif (SRVX_PIDSETPARAM_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PIDSetParam SrvX_PIDSetParam_inline

#elif (SRVX_PIDSETPARAM_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_PIDSetParam(SrvX_ParamPID_t *const Param_cpst, sint32 Kp_s32, sint32 Tv_s32, sint32 Tn_s32));

#else
    #error >>>> 'Configuration for SrvX_PIDSetParam is not supported'

/*   SRVX_PIDSETPARAM_LOCATION */
#endif


/*  SRVX_PIDOUT_S8_LOCATION ******************************************************************************************/
#if ( SRVX_PIDOUT_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8  SrvX_PIDOut_S8(const SrvX_StatePID_t *const State_cpcst);

#elif (SRVX_PIDOUT_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define  SrvX_PIDOut_S8 SrvX_PIDOut_S8_inline

#elif (SRVX_PIDOUT_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_PIDOut_S8(const SrvX_StatePID_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PIDOut_S8 is not supported'

/*  SRVX_PIDOUT_S8_LOCATION */
#endif


/* SRVX_PIDOUT_S16_LOCATION *******************************************************************************************/
#if (SRVX_PIDOUT_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PIDOut_S16(const SrvX_StatePID_t *const State_cpcst);

#elif (SRVX_PIDOUT_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_PIDOut_S16 SrvX_PIDOut_S16_inline

#elif (SRVX_PIDOUT_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PIDOut_S16(const SrvX_StatePID_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvX_PIDOut_S16 is not supported'

/* SRVX_PIDOUT_S16_LOCATION */
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

extern void SrvX_PCalc         (sint32 X0_s32, sint32 *const State_cps32, sint32 Kp_s32);

extern void SrvX_PT1Calc       (sint32 X0_s32, SrvX_StatePT1_t *const State_cpst, sint32 Kp_s32, sint32 TeQ_s32);

extern void SrvX_DT1Typ1Calc   (sint32 X0_s32, SrvX_StateDT1Typ1_t *const State_cpst, sint32 Kd_s32, sint32 TeQ_s32, sint32 dT_s32);

extern void SrvX_DT1Typ2Calc   (sint32 X0_s32, SrvX_StateDT1Typ2_t *const State_cpst, sint32 Kd_s32, sint32 TeQ_s32, sint32 dT_s32);

extern void SrvX_PDCalc        (sint32 X0_s32, SrvX_StatePD_t *const State_cpst, const SrvX_ParamPD_t *const Param_cpcst, sint32 dT_s32);

extern void SrvX_ICalc         (sint32 X0_s32, SrvX_StateI_t *const State_cpst, sint32 Ki_s32, sint32 dT_s32);

extern void SrvX_ILimCalc      (sint32 X0_s32, SrvX_StateI_t *const State_cpst, sint32 Ki_s32,
                                const SrvX_Limits_t *const Limits_cpcst, sint32 dT_s32);

extern void SrvX_PITyp1Calc    (sint32 X0_s32, SrvX_StatePI_t *const State_cpst, const SrvX_ParamPI_t *const Param_cpcst, sint32 dT_s32);

extern void SrvX_PILimTyp1Calc (sint32 X0_s32, SrvX_StatePI_t *const State_cpst, const SrvX_ParamPI_t *const Param_cpcst,
                                const SrvX_Limits_t *const Limits_cpcst, sint32 dT_s32);

extern void SrvX_PITyp2Calc    (sint32 X0_s32, SrvX_StatePI_t *const State_cpst, const SrvX_ParamPI_t *const Param_cpcst, sint32 dT_s32);

extern void SrvX_PILimTyp2Calc (sint32 X0_s32, SrvX_StatePI_t *const State_cpst, const SrvX_ParamPI_t *const Param_cpcst,
                                const SrvX_Limits_t *const Limits_cpcst, sint32 dT_s32);

extern void SrvX_PIDTyp1Calc   (sint32 X0_s32, SrvX_StatePID_t *const State_cpst, const SrvX_ParamPID_t *const Param_cpcst, sint32 dT_s32);

extern void SrvX_PIDLimTyp1Calc(sint32 X0_s32, SrvX_StatePID_t *const State_cpst, const SrvX_ParamPID_t *const Param_cpcst,
                                const SrvX_Limits_t *const Limits_cpcst, sint32 dT_s32);

extern void SrvX_PIDTyp2Calc   (sint32 X0_s32, SrvX_StatePID_t *const State_cpst, const SrvX_ParamPID_t *const Param_cpcst, sint32 dT_s32);

extern void SrvX_PIDLimTyp2Calc(sint32 X0_s32, SrvX_StatePID_t *const State_cpst, const SrvX_ParamPID_t *const Param_cpcst,
                                const SrvX_Limits_t *const Limits_cpcst, sint32 dT_s32);

/* _SRVX_CONTROLLER_H */
#endif
