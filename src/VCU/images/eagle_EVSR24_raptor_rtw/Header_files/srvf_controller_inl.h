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
 * $Filename__:srvf_controller_inl.h$
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
 * $Name______:srvf_controller_inl$
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

#ifndef _SRVF_CONTROLLER_INL_H
#define _SRVF_CONTROLLER_INL_H


/*
 ***********************************************************************************************************************
 * List of functions
 *
 * SrvF_CalcTeQ_R32
 * SrvF_CalcTeQApp_R32
 *
 * SrvF_RangeLimiter_R32
 * SrvF_CtrlSetLimit
 *
 * SrvF_POut_R32
 *
 * SrvF_PT1SetState
 * SrvF_PT1Out_R32
 *
 * SrvF_DT1Typ1SetState
 * SrvF_DT1Typ1Out_R32
 * SrvF_DT1Typ2SetState
 * SrvF_DT1Typ2Out_R32
 *
 * SrvF_PDSetState
 * SrvF_PDSetParam
 * SrvF_PDOut_R32
 *
 * SrvF_ISetState
 * SrvF_IOut_R32
 *
 * SrvF_PISetState
 * SrvF_PISetParam
 * SrvF_PIOut_R32
 *
 * SrvF_PIDSetParam
 * SrvF_PIDSetState
 * SrvF_PIDOut_R32
 *
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 *
 *
 *
 * Time equivalent
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_CalcTeQ_R32_inline(real32 T1rec_r32, real32 dT_r32))
{
    return (SrvF_Exp(dT_r32 * T1rec_r32));
}


MEMLAY_USE_FORCE_INLINE(real32 SrvF_CalcTeQApp_R32_inline(real32 T1rec_r32, real32 dT_r32))
{
    return (1.0F - (dT_r32 * T1rec_r32));
}



/*
 ***********************************************************************************************************************
 *
 *
 *
 * Set Limits
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_CtrlSetLimit_inline(SrvF_Limits_t *const Limit_cpst, real32 Min_r32, real32 Max_r32))
{
    Limit_cpst->Min_C = Min_r32;
    Limit_cpst->Max_C = Max_r32;
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * P Controler
 *
 *
 *
 ***********************************************************************************************************************
 */


MEMLAY_USE_FORCE_INLINE(real32 SrvF_POut_R32_inline(const real32 *const State_cpcr32))
{
    return (*State_cpcr32);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PT1 Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_PT1SetState_inline(SrvF_StatePT1_t *const State_cpst, real32 X1_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}


MEMLAY_USE_FORCE_INLINE(real32 SrvF_PT1Out_R32_inline(const SrvF_StatePT1_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * DT1 Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_DT1Typ1SetState_inline(SrvF_StateDT1Typ1_t *const State_cpst, real32 X1_r32, real32 X2_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->X2 = X2_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_DT1Typ1Out_R32_inline(const SrvF_StateDT1Typ1_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}

MEMLAY_USE_FORCE_INLINE(void SrvF_DT1Typ2SetState_inline(SrvF_StateDT1Typ2_t *const State_cpst, real32 X1_r32,
                                                         real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_DT1Typ2Out_R32_inline(const SrvF_StateDT1Typ2_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PD Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_PDSetState_inline(SrvF_StatePD_t *const State_cpst, real32 X1_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(void SrvF_PDSetParam_inline(SrvF_ParamPD_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32))
{
    Param_cpst->Kp_C = Kp_r32;
    Param_cpst->Tv_C = Tv_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_PDOut_R32_inline(const SrvF_StatePD_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * I Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_ISetState_inline(SrvF_StateI_t *const State_cpst, real32 X1_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IOut_R32_inline(const SrvF_StateI_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PI Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_PISetState_inline(SrvF_StatePI_t *const State_cpst, real32 X1_r32, real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(void SrvF_PISetParam_inline(SrvF_ParamPI_t *const Param_cpst, real32 Kp_r32, real32 Tn_r32))
{
    Param_cpst->Kp_C = Kp_r32;
    Param_cpst->Tn_C = Tn_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_PIOut_R32_inline(const SrvF_StatePI_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * PID Controler
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_PIDSetParam_inline(SrvF_ParamPID_t *const Param_cpst, real32 Kp_r32, real32 Tv_r32,                                                     real32 Tn_r32))
{
    Param_cpst->Kp_C = Kp_r32;
    Param_cpst->Tv_C = Tv_r32;
    Param_cpst->Tn_C = Tn_r32;
}

MEMLAY_USE_FORCE_INLINE(void SrvF_PIDSetState_inline(SrvF_StatePID_t *const State_cpst, real32 X1_r32, real32 X2_r32,                                                     real32 Y1_r32))
{
    State_cpst->X1 = X1_r32;
    State_cpst->X2 = X2_r32;
    State_cpst->Y1 = Y1_r32;
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_PIDOut_R32_inline(const SrvF_StatePID_t *const State_cpcst))
{
    return (State_cpcst->Y1);
}


/* _SRVF_CONTROLLER_INL_H */
#endif
