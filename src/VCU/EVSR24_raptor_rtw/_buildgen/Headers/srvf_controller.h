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
 * $Filename__:srvf_controller.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_controller$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_CONTROLLER_H
#define _SRVF_CONTROLLER_H

/*
 ***********************************************************************************************************************
 * List of functions
 *
 * SrvF_PCalc
 *
 * SrvF_PT1Calc
 *
 * SrvF_DT1Typ1Calc
 *
 * SrvF_DT1Typ2Calc
 *
 * SrvF_PDCalc
 *
 * SrvF_ICalc           SrvF_ILimCalc
 *
 * SrvF_PITyp1Calc      SrvF_PILimTyp1Calc
 * SrvF_PITyp2Calc      SrvF_PILimTyp2Calc
 *
 * SrvF_PIDTyp1Calc     SrvF_PIDLimTyp1Calc
 * SrvF_PIDTyp2Calc     SrvF_PIDLimTyp2Calc
 *
 ***********************************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions : Auxiliary structures
 ***************************************************************************************************
 */

typedef struct
{
    real32 Min_C;
    real32 Max_C;
}SrvF_Limits_t;

/*
 ***************************************************************************************************
 * Type definitions : State  structures
 ***************************************************************************************************
 */

typedef struct
{
    real32 X1;
    real32 Y1;
}SrvF_StatePT1_t;

typedef struct
{
    real32 X1;
    real32 X2;
    real32 Y1;
}SrvF_StateDT1Typ1_t;

typedef struct
{
    real32 X1;
    real32 Y1;
}SrvF_StateDT1Typ2_t;

typedef struct
{
    real32 X1;
    real32 Y1;
}SrvF_StatePD_t;

typedef struct
{
    real32 X1;
    real32 Y1;
}SrvF_StateI_t;


typedef struct
{
    real32 X1;
    real32 Y1;
}SrvF_StatePI_t;

typedef struct
{
    real32 X1;
    real32 X2;
    real32 Y1;
}SrvF_StatePID_t;

/*
 ***************************************************************************************************
 * Type definitions : Param  structures
 ***************************************************************************************************
 */

typedef struct
{
    real32 Kp_C;
    real32 Tv_C;
}SrvF_ParamPD_t;

typedef struct
{
    real32 Kp_C;
    real32 Tn_C;
}SrvF_ParamPI_t;


typedef struct
{
    real32 Kp_C;
    real32 Tv_C;
    real32 Tn_C;
}SrvF_ParamPID_t;

/*
 **********************************************************************************************************************
 * Configurable declarations
 **********************************************************************************************************************
 */


/* SRVF_CALCTEQ_R32_LOCATION ******************************************************************************************/
#if (SRVF_CALCTEQ_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_CalcTeQ_R32(real32 T1rec_r32, real32 dT_r32);

#elif (SRVF_CALCTEQ_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_CalcTeQ_R32 SrvF_CalcTeQ_R32_inline

#elif (SRVF_CALCTEQ_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_CalcTeQ_R32(real32 T1rec_r32, real32 dT_r32));

#else
    #error >>>> 'Configuration for SrvF_CalcTeQ_R32 is not supported'

/* SRVF_CALCTEQ_R32_LOCATION */
#endif


/* SRVF_CALCTEQAPP_R32_LOCATION ***************************************************************************************/
#if (SRVF_CALCTEQAPP_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_CalcTeQApp_R32(real32 T1rec_r32, real32 dT_r32);

#elif (SRVF_CALCTEQAPP_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_CalcTeQApp_R32 SrvF_CalcTeQApp_R32_inline

#elif (SRVF_CALCTEQAPP_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_CalcTeQApp_R32(real32 T1rec_r32, real32 dT_r32));

#else
    #error >>>> 'Configuration for SrvF_CalcTeQApp_R32 is not supported'

/* SRVF_CALCTEQAPP_R32_LOCATION */
#endif


/*   SRVF_CTRLSETLIMIT_LOCATION **************************************************************************************/
#if (SRVF_CTRLSETLIMIT_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_CtrlSetLimit(SrvF_Limits_t *const Limits_cpst, real32 Min_r32, real32 Max_r32);

#elif (  SRVF_CTRLSETLIMIT_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_CtrlSetLimit SrvF_CtrlSetLimit_inline

#elif (  SRVF_CTRLSETLIMIT_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_CtrlSetLimit(SrvF_Limits_t *const Limits_cpst, real32 Min_r32, real32 Max_r32));

#else
    #error >>>> 'Configuration for SrvF_CtrlSetLimit is not supported'

/*   SRVF_CTRLSETLIMITS_LOCATION */
#endif


/*   SRVF_DT1TYP1SETSTATE_LOCATION ************************************************************************************/
#if (  SRVF_DT1TYP1SETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_DT1Typ1SetState(SrvF_StateDT1Typ1_t *const State_cpst , real32 X1_r32, real32 X2_r32, real32 Y1_r32);

#elif (  SRVF_DT1TYP1SETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_DT1Typ1SetState   SrvF_DT1Typ1SetState_inline

#elif (  SRVF_DT1TYP1SETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_DT1Typ1SetState(SrvF_StateDT1Typ1_t *const State_cpst , real32 X1_r32, real32 X2_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for   SrvF_DT1Typ1SetState is not supported'

/*   SRVF_DT1TYP1SETSTATE_LOCATION */
#endif


/* SRVF_DT1TYP1OUT_R32_LOCATION ***************************************************************************************/
#if (SRVF_DT1TYP1OUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_DT1Typ1Out_R32(const SrvF_StateDT1Typ1_t *const State_cpcst);

#elif (SRVF_DT1TYP1OUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_DT1Typ1Out_R32 SrvF_DT1Typ1Out_R32_inline

#elif (SRVF_DT1TYP1OUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_DT1Typ1Out_R32(const SrvF_StateDT1Typ1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_DT1Typ1Out_R32 is not supported'

/* SRVF_DT1TYP1OUT_R32_LOCATION */
#endif


/*   SRVF_DT1TYP2SETSTATE_LOCATION ************************************************************************************/
#if (  SRVF_DT1TYP2SETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_DT1Typ2SetState(SrvF_StateDT1Typ2_t *const State_cpst , real32 X1_r32, real32 Y1_r32);

#elif (SRVF_DT1TYP2SETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_DT1Typ2SetState   SrvF_DT1Typ2SetState_inline

#elif (SRVF_DT1TYP2SETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_DT1Typ2SetState(SrvF_StateDT1Typ2_t *const State_cpst , real32 X1_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for   SrvF_DT1Typ2SetState is not supported'

/*   SRVF_DT1TYP2SETSTATE_LOCATION */
#endif


/* SRVF_DT1TYP2OUT_R32_LOCATION ***************************************************************************************/
#if (SRVF_DT1TYP2OUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_DT1Typ2Out_R32(const SrvF_StateDT1Typ2_t *const State_cpcst);

#elif (SRVF_DT1TYP2OUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_DT1Typ2Out_R32 SrvF_DT1Typ2Out_R32_inline

#elif (SRVF_DT1TYP2OUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_DT1Typ2Out_R32(const SrvF_StateDT1Typ2_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_DT1Typ2Out_R32 is not supported'

/* SRVF_DT1TYP2OUT_R32_LOCATION */
#endif


/*   SRVF_PT1SETSTATE_LOCATION ************************************************************************************/
#if (SRVF_PT1SETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PT1SetState(SrvF_StatePT1_t *const State_cpst, real32 X1_r32, real32 Y1_r32);

#elif (SRVF_PT1SETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PT1SetState   SrvF_PT1SetState_inline

#elif (SRVF_PT1SETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PT1SetState(SrvF_StatePT1_t *const State_cpst, real32 X1_r32,
                                                       real32 Y1_r32));

#else
    #error >>>> 'Configuration for   SrvF_is not supported'

/*   SRVF_PT1SETSTATE_LOCATION */
#endif


/* SRVF_PT1OUT_R32_LOCATION *******************************************************************************************/
#if (SRVF_PT1OUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_PT1Out_R32(const SrvF_StatePT1_t *const State_cpcst);

#elif (SRVF_PT1OUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PT1Out_R32 SrvF_PT1Out_R32_inline

#elif (SRVF_PT1OUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_PT1Out_R32(const SrvF_StatePT1_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_PT1Out_R32 is not supported'

/* SRVF_PT1OUT_R32_LOCATION */
#endif


/* SRVF_POUT_R32_LOCATION *********************************************************************************************/
#if (SRVF_POUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_POut_R32(const real32 *const State_cpcr32);

#elif (SRVF_POUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_POut_R32 SrvF_POut_R32_inline

#elif (SRVF_POUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_POut_R32(const real32 *const State_cpcr32));

#else
    #error >>>> 'Configuration for SrvF_POut_R32 is not supported'

/* SRVF_POUT_R32_LOCATION */
#endif


/*   SRVF_PDSETSTATE_LOCATION ****************************************************************************************/
#if (SRVF_PDSETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PDSetState (SrvF_StatePD_t *const State_cpst, real32 X1_r32, real32 Y1_r32);

#elif (SRVF_PDSETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define   SrvF_PDSetState    SrvF_PDSetState_inline

#elif (SRVF_PDSETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PDSetState(SrvF_StatePD_t *const State_cpst, real32 X1_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_PDSetState is not supported'

/*   SRVF_PDSETSTATE_LOCATION */
#endif


/*   SRVF_PDSETPARAM_LOCATION ****************************************************************************************/
#if (SRVF_PDSETPARAM_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PDSetParam (SrvF_ParamPD_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32);

#elif (SRVF_PDSETPARAM_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PDSetParam    SrvF_PDSetParam_inline

#elif (SRVF_PDSETPARAM_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PDSetParam (SrvF_ParamPD_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32));

#else
    #error >>>> 'Configuration for   SrvF_PDSetParam  is not supported'

/*   SRVF_PDSETPARAM_LOCATION */
#endif


/* SRVF_PDOUT_R32_LOCATION ********************************************************************************************/
#if (SRVF_PDOUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_PDOut_R32(const SrvF_StatePD_t *const State_cpcst);

#elif (SRVF_PDOUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PDOut_R32 SrvF_PDOut_R32_inline

#elif (SRVF_PDOUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_PDOut_R32(const SrvF_StatePD_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_PDOut_R32 is not supported'

/* SRVF_PDOUT_R32_LOCATION */
#endif


/*   SRVF_ISETSTATE_LOCATION ******************************************************************************************/
#if (  SRVF_ISETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_ISetState(SrvF_StateI_t *const State_cpst, real32 X1_r32, real32 Y1_r32);

#elif (SRVF_ISETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_ISetState   SrvF_ISetState_inline

#elif (SRVF_ISETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_ISetState(SrvF_StateI_t *const State_cpst , real32 X1_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_ISetState is not supported'

/*   SRVF_ISETSTATE_LOCATION */
#endif


/* SRVF_IOUT_R32_LOCATION *********************************************************************************************/
#if (SRVF_IOUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_IOut_R32(const SrvF_StateI_t *const State_cpcst);

#elif (SRVF_IOUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IOut_R32 SrvF_IOut_R32_inline

#elif (SRVF_IOUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_IOut_R32(const SrvF_StateI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_IOut_R32 is not supported'

/* SRVF_IOUT_R32_LOCATION */
#endif


/*   SRVF_PISETSTATE_LOCATION ****************************************************************************************/
#if (SRVF_PISETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PISetState (SrvF_StatePI_t *const State_cpst, real32 X1_r32, real32 Y1_r32);

#elif (SRVF_PISETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PISetState SrvF_PISetState_inline

#elif (SRVF_PISETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PISetState(SrvF_StatePI_t *const State_cpst, real32 X1_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_PISetState is not supported'

/*   SRVF_PISETSTATE_LOCATION */
#endif


/*   SRVF_PISETPARAM_LOCATION ****************************************************************************************/
#if (SRVF_PISETPARAM_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PISetParam (SrvF_ParamPI_t *const Param_cpst, real32 Kp_r32, real32 Tn_r32);

#elif (SRVF_PISETPARAM_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PISetParam SrvF_PISetParam_inline

#elif (SRVF_PISETPARAM_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PISetParam (SrvF_ParamPI_t *const Param_cpst, real32 Kp_r32, real32 Tn_r32));

#else
    #error >>>> 'Configuration for SrvF_PISetParam is not supported'

/*   SRVF_PISETPARAM_LOCATION */
#endif


/* SRVF_PIOUT_R32_LOCATION ********************************************************************************************/
#if (SRVF_PIOUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_PIOut_R32(const SrvF_StatePI_t *const State_cpcst);

#elif (SRVF_PIOUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PIOut_R32 SrvF_PIOut_R32_inline

#elif (SRVF_PIOUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_PIOut_R32(const SrvF_StatePI_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_PIOut_R32 is not supported'

/* SRVF_PIOUT_R32_LOCATION */
#endif


/*   SRVF_PIDSETSTATE_LOCATION ***************************************************************************************/
#if (SRVF_PIDSETSTATE_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PIDSetState(SrvF_StatePID_t *const State_cpst, real32 X1_r32, real32 X2_r32, real32 Y1_r32);

#elif (SRVF_PIDSETSTATE_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PIDSetState SrvF_PIDSetState_inline

#elif (SRVF_PIDSETSTATE_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PIDSetState (SrvF_StatePID_t *const State_cpst, real32 X1_r32, real32 X2_r32, real32 Y1_r32));

#else
    #error >>>> 'Configuration for SrvF_PIDSetState  is not supported'

/*   SRVF_PIDSETSTATE_LOCATION */
#endif


/*   SRVF_PIDSETPARAM_LOCATION ****************************************************************************************/
#if (SRVF_PIDSETPARAM_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_PIDSetParam(SrvF_ParamPID_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32, real32 Tn_r32);

#elif (SRVF_PIDSETPARAM_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PIDSetParam SrvF_PIDSetParam_inline

#elif (SRVF_PIDSETPARAM_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_PIDSetParam(SrvF_ParamPID_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32, real32 Tn_r32));

#else
    #error >>>> 'Configuration for SrvF_PIDSetParam is not supported'

/*   SRVF_PIDSETPARAM_LOCATION */
#endif


/* SRVF_PIDOUT_R32_LOCATION *******************************************************************************************/
#if (SRVF_PIDOUT_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_PIDOut_R32(const SrvF_StatePID_t *const State_cpcst);

#elif (SRVF_PIDOUT_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_PIDOut_R32 SrvF_PIDOut_R32_inline

#elif (SRVF_PIDOUT_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_PIDOut_R32(const SrvF_StatePID_t *const State_cpcst));

#else
    #error >>>> 'Configuration for SrvF_PIDOut_R32 is not supported'

/* SRVF_PIDOUT_R32_LOCATION */
#endif


/*
************************************************************************************************************************
 * Extern declarations
************************************************************************************************************************
 */

extern void SrvF_PCalc         (real32 X0_r32, real32 *const State_cpr32, real32 Kp_r32);
extern void SrvF_PT1Calc       (real32 X0_r32, SrvF_StatePT1_t *const State_cpst, real32 Kp_r32, real32 TeQ_r32);
extern void SrvF_DT1Typ1Calc   (real32 X0_r32, SrvF_StateDT1Typ1_t *const State_cpst, real32 Kd_r32, real32 TeQ_r32,
                                real32 dT_r32);
extern void SrvF_DT1Typ2Calc   (real32 X0_r32, SrvF_StateDT1Typ2_t *const State_cpst, real32 Kd_r32, real32 TeQ_r32,
                                real32 dT_r32);
extern void SrvF_PDCalc        (real32 X0_r32, SrvF_StatePD_t *const State_cpst, const SrvF_ParamPD_t *const Param_cpcst,
                                real32 dT_r32);
extern void SrvF_ICalc         (real32 X0_r32, SrvF_StateI_t *const State_cpst, real32 Ki_r32, real32 dT_r32);
extern void SrvF_ILimCalc      (real32 X0_r32, SrvF_StateI_t *const State_cpst, real32 Ki_r32,
                                const SrvF_Limits_t *const Limits_cpcst, real32 dT_r32);
extern void SrvF_PITyp1Calc    (real32 X0_r32, SrvF_StatePI_t *const State_cpst, const SrvF_ParamPI_t *const Param_cpcst,
                                real32 dT_r32);
extern void SrvF_PILimTyp1Calc (real32 X0_r32, SrvF_StatePI_t *const State_cpst, const SrvF_ParamPI_t *const Param_cpcst,
                                const SrvF_Limits_t *const Limits_cpcst, real32 dT_r32);
extern void SrvF_PITyp2Calc    (real32 X0_r32, SrvF_StatePI_t *const State_cpst, const SrvF_ParamPI_t *const Param_cpcst,
                                real32 dT_r32);
extern void SrvF_PILimTyp2Calc (real32 X0_r32, SrvF_StatePI_t *const State_cpst, const SrvF_ParamPI_t *const Param_cpcst,
                                const SrvF_Limits_t *const Limits_cpcst, real32 dT_r32);
extern void SrvF_PIDTyp1Calc   (real32 X0_r32, SrvF_StatePID_t *const State_cpst, const SrvF_ParamPID_t *const Param_cpcst,
                                real32 dT_r32);
extern void SrvF_PIDLimTyp1Calc(real32 X0_r32, SrvF_StatePID_t *const State_cpst, const SrvF_ParamPID_t *const Param_cpcst,
                                const SrvF_Limits_t *const Limits_cpcst, real32 dT_r32);
extern void SrvF_PIDTyp2Calc   (real32 X0_r32, SrvF_StatePID_t *const State_cpst, const SrvF_ParamPID_t *const Param_cpcst,
                                real32 dT_r32);
extern void SrvF_PIDLimTyp2Calc(real32 X0_r32, SrvF_StatePID_t *const State_cpst, const SrvF_ParamPID_t *const Param_cpcst,
                                const SrvF_Limits_t *const Limits_cpcst, real32 dT_r32);

/* _SRVF_CONTROLLER_H */
#endif
