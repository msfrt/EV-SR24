/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:codegen_srv_misc.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAJ2KOR$
 * $Date______:17.10.2014$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_misc$
 * $Variant___:1.2.1$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.2.1; 0     17.10.2014 DAJ2KOR
 *   Change in SRV_RAMPSWITCH_REAL macro
 *   Addition of SRV_RAMPSWITCH_REALTIMEDT macros
 * 
 * 1.2.0; 0     18.06.2013 DAJ2KOR
 *   Macros added for srv_ramp and srv_rampswitch classes for Real 
 *   implementation
 * 
 * 1.1.0; 0     18.10.2012 DAJ2KOR
 *   R32TimeDt implementation added for Ramp macros.
 * 
 * 1.0.0; 1     05.01.2012 PRG2SI
 *   
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_MISC_H
#define _CODEGEN_SRV_MISC_H

/*************************************************************************/
/* InitValueRam                                                          */
/*************************************************************************/

#define InitValueRam(Val,X) initValueRAM((Val),(&(X)))

/*************************************************************************/
/* DeltaOneStep                                                          */
/*************************************************************************/

/* S8-DELTAONESTEP */
#define DELTAONESTEP_S8_compute(x,value)                                      \
        do                                                                    \
        {                                                                     \
            sint8 _val      = (sint8)(value);                                 \
            (x)->buffer     = (sint8)(Sub_limit_s8s8_s8((_val), (x)->oldValue)); \
            (x)->oldValue   = (sint8)(_val);                                  \
        } while(0)
#define DELTAONESTEP_S8_out(x)                   ((x)->buffer)

/* S16-DELTAONESTEP */
#define DELTAONESTEP_S16_compute(x,value)                                     \
        do                                                                    \
        {                                                                     \
            sint16 _val     = (sint16)(value);                                \
            (x)->buffer     = (sint16)(Sub_limit_s16s16_s16((_val), (x)->oldValue)); \
            (x)->oldValue   = (sint16)(_val);                                 \
        } while(0)
#define DELTAONESTEP_S16_out(x)                  ((x)->buffer)

/* S32-DELTAONESTEP */
#define DELTAONESTEP_S32_compute(x,value)                                     \
        do                                                                    \
        {                                                                     \
            sint32 _val     = (sint32)(value);                                \
            (x)->buffer     = (sint32)(Sub_limit_s32s32_s32((_val), (x)->oldValue)); \
            (x)->oldValue   = (sint32)(_val);                                 \
        } while(0)
#define DELTAONESTEP_S32_out(x)                  ((x)->buffer)

/* R32-DELTAONESTEP */
#define DELTAONESTEP_R32_compute(x,value)                                     \
        do                                                                    \
        {                                                                     \
            real32 _val     = (real32)(value);                                \
            (x)->buffer     = (_val - ((x)->oldValue));                       \
            (x)->oldValue   = _val;                                           \
        } while(0)
#define DELTAONESTEP_R32_out(x)                  ((x)->buffer)

/*************************************************************************/
/* EdgeBi                                                                */
/*************************************************************************/

/* U8-EDGEBI, da nur boolean Eingaenge und Ausgaenge */
#define EDGEBI_IMPL_compute(x,signal)                                         \
        do                                                                    \
        {                                                                     \
            bool _sig           = (bool)(signal);                             \
            (x)->buffer     = (bool)((_sig) != ((x)->oldSignal));             \
            (x)->oldSignal  = (bool)(_sig);                                   \
        } while(0)
#define EDGEBI_IMPL_out(x)                       ((x)->buffer)

/* U8-EDGEBI */
#define EDGEBI_U8_compute(x,signal)                                           \
        do                                                                    \
        {                                                                     \
            uint8 _sig          = (uint8)(signal);                            \
            (x)->buffer     = (uint8)((_sig) != ((x)->oldSignal));            \
            (x)->oldSignal  = (uint8)(_sig);                                  \
        } while(0)
#define EDGEBI_U8_out(x)                         ((x)->buffer)

/*************************************************************************/
/* EdgeFalling                                                           */
/*************************************************************************/

/* U8-EDGEFALLING, da nur boolean Eingaenge und Ausgaenge */
#define EDGEFALLING_IMPL_compute(x,signal)                                    \
        do                                                                    \
        {                                                                     \
            bool _sig           = (bool)(signal);                             \
            (x)->buffer     = (bool)(!(_sig) && ((x)->oldSignal));            \
            (x)->oldSignal  = (bool)(_sig);                                   \
        } while(0)
#define EDGEFALLING_IMPL_out(x)                  ((x)->buffer)

/* U8-EDGEFALLING */
#define EDGEFALLING_U8_compute(x,signal)                                      \
        do                                                                    \
        {                                                                     \
            uint8 _sig          = (uint8)(signal);                            \
            (x)->buffer     = (uint8)(!(_sig) && ((x)->oldSignal));           \
            (x)->oldSignal  = (uint8)(_sig);                                  \
        } while(0)
#define EDGEFALLING_U8_out(x)                    ((x)->buffer)

/*************************************************************************/
/* EdgeRising                                                            */
/*************************************************************************/

/* U8-EDGERISING, da nur boolean Eingaenge und Ausgaenge */
/*#define EDGERISING_IMPL_compute(x,signal) {(x)->buffer=(bool)((signal) && !((x)->oldSignal)); ((x)->oldSignal=(bool)(signal));}*/
#define EDGERISING_IMPL_compute(x,signal)                                     \
        do                                                                    \
        {                                                                     \
            bool _sig           = (bool)(signal);                             \
            (x)->buffer     = (bool)((_sig) && !((x)->oldSignal));            \
            (x)->oldSignal  = (bool)(_sig);                                   \
        } while(0)
#define EDGERISING_IMPL_out(x)                    ((x)->buffer)

/* U8-EDGERISING */
#define EDGERISING_U8_compute(x,signal)                                       \
        do                                                                    \
        {                                                                     \
            uint8 _sig          = (uint8)(signal);                            \
            (x)->buffer     = (uint8)((_sig) && !((x)->oldSignal));           \
            (x)->oldSignal  = (uint8)(_sig);                                  \
        } while(0)
#define EDGERISING_U8_out(x)                     ((x)->buffer)

/*************************************************************************/
/* EdgeBiNoMem                                                           */
/*************************************************************************/

/* U8-EDGEBINOMEM */
#define EDGEBINOMEM_U8_compute(x, signal)                                     \
        EdgeBiNoMem(((bool*)(&((x)->oldSignal))),((bool)(signal)))
#define EDGEFALLINGNOMEM_U8_compute(x, signal)                                \
        EdgeFallingNoMem(((bool*)(&((x)->oldSignal))),((bool)(signal)))
#define EDGERISINGNOMEM_U8_compute(x, signal)                                 \
        EdgeRisingNoMem(((bool*)(&((x)->oldSignal))),((bool)(signal)))

/*************************************************************************/
/* Edge_Bi                                                               */
/*************************************************************************/

#define EDGE_BI_U8_EdgeBi(ptr,x)                 SrvB_EdgeBipol_B((x), &((ptr)->oldSignal))

/*************************************************************************/
/* Edge_Falling                                                          */
/*************************************************************************/

#define EDGE_FALLING_U8_EdgeFalling(ptr, x)      SrvB_EdgeFalling_B((x), &((ptr)->oldSignal))

/*************************************************************************/
/* Edge_Rising                                                           */
/*************************************************************************/

#define EDGE_RISING_U8_EdgeRising(ptr, x)        SrvB_EdgeRising_B((x), &((ptr)->oldSignal))

/*************************************************************************/
/* Srv_EdgeBipol                                                         */
/*************************************************************************/

#define SRV_EDGEBIPOL_BOOL_out(ptr,x)            SrvB_EdgeBipol((x),&((ptr)->old))

/*************************************************************************/
/* Srv_EdgeFalling                                                       */
/*************************************************************************/

#define SRV_EDGEFALLING_BOOL_out(ptr,x)          SrvB_EdgeFalling((x),&((ptr)->old))

/*************************************************************************/
/* Srv_EdgeRising                                                        */
/*************************************************************************/

#define SRV_EDGERISING_BOOL_out(ptr,x)           SrvB_EdgeRising((x),&((ptr)->old))

/*************************************************************************/
/* Mux1Of4                                                               */
/*************************************************************************/

#define MUX1OF4_U8_out(s0,s1,s2,s3,b0,b1)        MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_U16_out(s0,s1,s2,s3,b0,b1)       MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_U32_out(s0,s1,s2,s3,b0,b1)       MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_S8_out(s0,s1,s2,s3,b0,b1)        MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_S16_out(s0,s1,s2,s3,b0,b1)       MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_S32_out(s0,s1,s2,s3,b0,b1)       MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_R32_out(s0,s1,s2,s3,b0,b1)       MUX1OF4_out(s0,s1,s2,s3,b0,b1)
#define MUX1OF4_out(s0,s1,s2,s3,b0,b1)           ((b1) ? ((b0) ? (s3) : (s2)) : ((b0) ? (s1) : (s0)))

/*************************************************************************/
/* Mux1Of8                                                               */
/*************************************************************************/

#define MUX1OF8_U8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                      \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_U16_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                     \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_U32_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                     \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_S8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                      \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_S16_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                     \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_S32_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                     \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_R32_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                     \
        MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)
#define MUX1OF8_out(s0,s1,s2,s3,s4,s5,s6,s7,b0,b1,b2)                         \
        (((b2) ? ((b1) ? ((b0) ? (s7) : (s6)) : ((b0) ? (s5) : (s4))) : ((b1) ? ((b0) ? (s3) : (s2)) : ((b0) ? (s1) : (s0)))))

/*************************************************************************/
/* Srv_Debounce                                                          */
/*************************************************************************/

#define _SRV_DEBOUNCE_BOOL_                      PROTECT_TYPEDEF
#define SRV_DEBOUNCE_BOOL                        SrvX_DebounceState_t
#define SRV_DEBOUNCE_BOOL_init(ptr,init)         SrvX_DebounceInit(ptr, init, 0)
#define SRV_DEBOUNCE_BOOL_out(ptr,x,param,Dt)    SrvX_Debounce(x, ptr, param, Dt)

/*************************************************************************/
/* Srv_DebounceParam                                                     */
/*************************************************************************/

#define _SRV_DEBOUNCEPARAM_T_S16_                PROTECT_TYPEDEF
#define SRV_DEBOUNCEPARAM_T_S16                  SrvX_DebounceParam_t
#define SRV_DEBOUNCEPARAM_T_S16_setParam(ptr,THL,TLH) SrvX_DebounceSetparam((ptr),(THL),(TLH))

/*************************************************************************/
/* Debounce_Param                                                        */
/*************************************************************************/

#define _DEBOUNCE_PARAM_T_U16_                  PROTECT_TYPEDEF
#define DEBOUNCE_PARAM_T_U16                    SrvX_DebounceBooleanParam_t
#define DEBOUNCE_PARAM_T_U16_setParam(ptr, HiLow, LowHi) SrvX_DebounceBooleanSetParam(ptr, HiLow, LowHi)

/*************************************************************************/
/* Debounce                                                              */
/*************************************************************************/

#define _DEBOUNCE_BOOL_                         PROTECT_TYPEDEF
#define DEBOUNCE_BOOL                           SrvX_DebounceBooleanState_t
#define DEBOUNCE_BOOL_init(ptr, x)              SrvX_DebounceBooleanInit(ptr, x)
#define DEBOUNCE_BOOL_out(ptr, x, param, Dt)    SrvX_DebounceBoolean_B(x, ptr, param, Dt)

/*************************************************************************/
/* Srv_Ramp                                                              */
/*************************************************************************/

/* S32-Srv_Ramp */
#define SRV_RAMP_S32_setDir(ptr, dirVal)         ((ptr)->Dir = (dirVal))
#define SRV_RAMP_S32_setState(ptr,state)         SrvX_RampSetState(&((ptr)->State),state)
#define SRV_RAMP_S32_out(ptr,x,Param,Dt)         SrvX_Ramp(((ptr)->Target = (x)),&((ptr)->State),&((ptr)->Dir),(Param),(Dt))
#define SRV_RAMP_S32_TargetReached(ptr)          SrvX_RampTargetReached((ptr)->State,(ptr)->Target)
#define SRV_RAMP_S32_DirInit(ptr)                SrvX_RampDirInit(&((ptr)->Dir))

/* R32-Srv_Ramp */
#define SRV_RAMP_REAL_setDir(ptr, dirVal)        ((ptr)->Dir = (dirVal))
#define SRV_RAMP_REAL_setState(ptr,state)        SrvF_RampSetState(&((ptr)->State),state)
#define SRV_RAMP_REAL_out(ptr,x,Param,Dt)        SrvF_Ramp(((ptr)->Target = (x)),(Param),&((ptr)->State),&((ptr)->Dir),((real32)(Dt)/1000000))
#define SRV_RAMP_REAL_TargetReached(ptr)         SrvF_RampTargetReached((ptr)->State,(ptr)->Target)
#define SRV_RAMP_REAL_DirInit(ptr)               SrvF_RampDirInit(&((ptr)->Dir))

/*************************************************************************/
/* Srv_RampSwitch                                                        */
/*************************************************************************/

/* S32-Srv_RampSwitch */
#define SRV_RAMPSWITCH_S32                       SrvX_RampSwitch_t
#define SRV_RAMPSWITCH_S32_init(ptr,pos)         SrvX_RampSwitch_init(pos,&((ptr)->Flag))
#define SRV_RAMPSWITCH_S32_pos(ptr)              SrvX_RampSwitch_pos(&((ptr)->Flag))
#define SRV_RAMPSWITCH_S32_active(ptr)           SrvX_RampSwitch_active(&((ptr)->Flag))
#define SRV_RAMPSWITCH_S32_out(ptr,x,y,sw,param,Dt) SrvX_RampSwitch(x,y,sw,param,&((ptr)->State),&((ptr)->Flag),Dt)

/* R32-Srv_RampSwitch */
#define SRV_RAMPSWITCH_REAL                      SrvF_RampSwitch_t
#define SRV_RAMPSWITCH_REAL_init(ptr,pos)        SrvF_RampSwitch_init(pos,&((ptr)->Flag))
#define SRV_RAMPSWITCH_REAL_pos(ptr)             SrvF_RampSwitch_pos(&((ptr)->Flag))
#define SRV_RAMPSWITCH_REAL_active(ptr)          SrvF_RampSwitch_active(&((ptr)->Flag))
#define SRV_RAMPSWITCH_REAL_out(ptr,x,y,sw,param,Dt)    SrvF_RampSwitch(x,y,sw,param,&((ptr)->State),&((ptr)->Flag),((real32)(Dt)))


/* RealTimeDt-Srv_RampSwitch */
/*EBY-732*/
#define SRV_RAMPSWITCH_REALTIMEDT_init(ptr,pos)        SrvF_RampSwitch_init(pos,&((ptr)->Flag))
#define SRV_RAMPSWITCH_REALTIMEDT_pos(ptr)             SrvF_RampSwitch_pos(&((ptr)->Flag))
#define SRV_RAMPSWITCH_REALTIMEDT_active(ptr)          SrvF_RampSwitch_active(&((ptr)->Flag))
#define SRV_RAMPSWITCH_REALTIMEDT_out(ptr,x,y,sw,param,Dt)    SrvF_RampSwitch(x,y,sw,param,&((ptr)->State),&((ptr)->Flag),(real32)((real32)(Dt)/1000000))

/*************************************************************************/
/* Srv_RampParam                                                         */
/*************************************************************************/

/* S32-Srv_RampParam */
#define _SRV_RAMPPARAM_T_S32_                    PROTECT_TYPEDEF
#define SRV_RAMPPARAM_T_S32                      SrvX_RampParam_t
#define SRV_RAMPPARAM_T_S32_setSlope(ptr,SP,SN)  SrvX_RampSetSlope(ptr,SP,SN)

/* R32-Srv_RampParam */
#define _SRV_RAMPPARAM_T_REAL_                   PROTECT_TYPEDEF
#define SRV_RAMPPARAM_T_REAL                     SrvF_RampParam_t
#define SRV_RAMPPARAM_T_REAL_setSlope(ptr,SP,SN) SrvF_RampSetSlope(ptr,SP,SN)

/* RealTimeDt-Srv_RampParam */
/*EBY-732*/
#define _SRV_RAMPPARAM_T_REALTIMEDT_                   PROTECT_TYPEDEF
#define SRV_RAMPPARAM_T_REALTIMEDT                     SrvF_RampParam_t
#define SRV_RAMPPARAM_T_REALTIMEDT_setSlope(ptr,SP,SN) SrvF_RampSetSlope(ptr,SP,SN)

/*************************************************************************/
/* Ramp_Param                                                            */
/*************************************************************************/

/* U32-Ramp_Param */
#ifndef _RAMP_PARAM_T_U32_
#define _RAMP_PARAM_T_U32_
typedef struct
{
    uint32 SlopeNeg_C;
    uint32 SlopePos_C;
} RAMP_PARAM_T_U32;
#endif /* _RAMP_PARAM_T_U32_ */

INLINE_FUNCTION void RAMP_PARAM_T_U32_setSlope(RAMP_PARAM_T_U32 * const Ramp_Param, uint32 Pos, uint32 Neg);
INLINE_FUNCTION void RAMP_PARAM_T_U32_setSlope(RAMP_PARAM_T_U32 * const Ramp_Param, uint32 Pos, uint32 Neg)
{
    SrvX_ParamRamp_t SrvX_ParamRamp;

    SrvX_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvX_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvX_RampSetParam(&SrvX_ParamRamp, (Pos), (Neg));

    Ramp_Param->SlopePos_C = SrvX_ParamRamp.SlopePos_C;
    Ramp_Param->SlopeNeg_C = SrvX_ParamRamp.SlopeNeg_C;
}

/* R32-Ramp_Param */
#ifndef _RAMP_PARAM_T_R32_
#define _RAMP_PARAM_T_R32_
typedef struct
{
    real32 SlopeNeg_C;
    real32 SlopePos_C;
} RAMP_PARAM_T_R32;
#endif /* _RAMP_PARAM_T_R32_ */

INLINE_FUNCTION void RAMP_PARAM_T_R32_setSlope(RAMP_PARAM_T_R32 * const Ramp_Param, real32 Pos, real32 Neg);
INLINE_FUNCTION void RAMP_PARAM_T_R32_setSlope(RAMP_PARAM_T_R32 * const Ramp_Param, real32 Pos, real32 Neg)
{
    SrvF_ParamRamp_t SrvF_ParamRamp;

    SrvF_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvF_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvF_RampSetParam(&SrvF_ParamRamp, (Pos), (Neg));

    Ramp_Param->SlopePos_C = SrvF_ParamRamp.SlopePos_C;
    Ramp_Param->SlopeNeg_C = SrvF_ParamRamp.SlopeNeg_C;
}

/* R32-Ramp_Param */
#ifndef _RAMP_PARAM_T_R32TIMEDT_
#define _RAMP_PARAM_T_R32TIMEDT_
typedef struct
{
    real32 SlopeNeg_C;
    real32 SlopePos_C;
} RAMP_PARAM_T_R32TIMEDT;
#endif /* _RAMP_PARAM_T_R32TIMEDT_ */

INLINE_FUNCTION void RAMP_PARAM_T_R32TIMEDT_setSlope(RAMP_PARAM_T_R32TIMEDT * const Ramp_Param, real32 Pos, real32 Neg);
INLINE_FUNCTION void RAMP_PARAM_T_R32TIMEDT_setSlope(RAMP_PARAM_T_R32TIMEDT * const Ramp_Param, real32 Pos, real32 Neg)
{
    SrvF_ParamRamp_t SrvF_ParamRamp;

    SrvF_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvF_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvF_RampSetParam(&SrvF_ParamRamp, (Pos), (Neg));

    Ramp_Param->SlopePos_C = SrvF_ParamRamp.SlopePos_C;
    Ramp_Param->SlopeNeg_C = SrvF_ParamRamp.SlopeNeg_C;
}

/*************************************************************************/
/* Ramp                                                                  */
/*************************************************************************/

/* S32-Ramp */
#ifndef _RAMP_S32_
#define _RAMP_S32_
typedef struct
{
    sint8 Dir;
    sint32 State;
    sint8 SwitchB;

} RAMP_S32;
#endif /* _RAMP_S32_ */

INLINE_FUNCTION void RAMP_S32_initState(RAMP_S32 * const Ramp, sint32 Val);
INLINE_FUNCTION void RAMP_S32_initState(RAMP_S32 * const Ramp, sint32 Val)
{
    SrvX_StateRamp_t SrvX_StateRamp;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    SrvX_RampInitState(&SrvX_StateRamp, (Val));

    Ramp->State = SrvX_StateRamp.State;
    Ramp->Dir = SrvX_StateRamp.Dir;
    Ramp->SwitchB = SrvX_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_S32_calcJump(RAMP_S32 * const Ramp, sint32 Val);
INLINE_FUNCTION void RAMP_S32_calcJump(RAMP_S32 * const Ramp, sint32 Val)
{
    SrvX_StateRamp_t SrvX_StateRamp;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    SrvX_RampCalcJump((Val), &SrvX_StateRamp);

    Ramp->State = SrvX_StateRamp.State;
    Ramp->Dir = SrvX_StateRamp.Dir;
    Ramp->SwitchB = SrvX_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_S32_calc(RAMP_S32 * const Ramp, sint32 x, const RAMP_PARAM_T_U32 * const Ramp_Param, sint32 tiSampling);
INLINE_FUNCTION void RAMP_S32_calc(RAMP_S32 * const Ramp, sint32 x, const RAMP_PARAM_T_U32 * const Ramp_Param, sint32 tiSampling)
{
    SrvX_StateRamp_t SrvX_StateRamp;
    SrvX_ParamRamp_t SrvX_ParamRamp;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    SrvX_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvX_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvX_RampCalc((x), &SrvX_StateRamp, &SrvX_ParamRamp, (tiSampling));

    Ramp->State = SrvX_StateRamp.State;
    Ramp->Dir = SrvX_StateRamp.Dir;
    Ramp->SwitchB = SrvX_StateRamp.Switch;
}

INLINE_FUNCTION sint32 RAMP_S32_out(const RAMP_S32 * const Ramp);
INLINE_FUNCTION sint32 RAMP_S32_out(const RAMP_S32 * const Ramp)
{
    SrvX_StateRamp_t SrvX_StateRamp;
    sint32 returnValue;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvX_RampOut_S32(&SrvX_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_S32_getSwitchPos(const RAMP_S32 * const Ramp);
INLINE_FUNCTION bool RAMP_S32_getSwitchPos(const RAMP_S32 * const Ramp)
{
    SrvX_StateRamp_t SrvX_StateRamp;
    bool returnValue;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvX_RampGetSwitchPos(&SrvX_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_S32_checkActivity(const RAMP_S32 * const Ramp);
INLINE_FUNCTION bool RAMP_S32_checkActivity(const RAMP_S32 * const Ramp)
{
    SrvX_StateRamp_t SrvX_StateRamp;
    bool returnValue;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvX_RampCheckActivity(&SrvX_StateRamp);

    return(returnValue);
}

INLINE_FUNCTION sint32 RAMP_S32_calcSwitch(RAMP_S32 * const Ramp, bool Switch, sint32 xa, sint32 xb);
INLINE_FUNCTION sint32 RAMP_S32_calcSwitch(RAMP_S32 * const Ramp, bool Switch, sint32 xa, sint32 xb)
{
    SrvX_StateRamp_t SrvX_StateRamp;
    sint32 returnValue;

    SrvX_StateRamp.State = Ramp->State;
    SrvX_StateRamp.Dir = Ramp->Dir;
    SrvX_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvX_RampCalcSwitch_S32((xa), (xb), (Switch), &SrvX_StateRamp);

    Ramp->State = SrvX_StateRamp.State;
    Ramp->Dir = SrvX_StateRamp.Dir;
    Ramp->SwitchB = SrvX_StateRamp.Switch;

    return(returnValue);
}

/* R32-Ramp */
#ifndef _RAMP_R32_
#define _RAMP_R32_
typedef struct
{
    sint8 Dir;
    real32 State;
    sint8 SwitchB;
} RAMP_R32;
#endif /* _RAMP_R32_ */

#ifndef _RAMP_R32TIMEDT_
#define _RAMP_R32TIMEDT_
typedef struct
{
    sint8 Dir;
    real32 State;
    sint8 SwitchB;
} RAMP_R32TIMEDT;
#endif /* _RAMP_R32TIMEDT_ */

INLINE_FUNCTION void RAMP_R32_initState(RAMP_R32 * const Ramp, real32 Val);
INLINE_FUNCTION void RAMP_R32_initState(RAMP_R32 * const Ramp, real32 Val)
{
    SrvF_StateRamp_t SrvF_StateRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_RampInitState(&SrvF_StateRamp, (Val));

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_R32TIMEDT_initState(RAMP_R32TIMEDT * const Ramp, real32 Val);
INLINE_FUNCTION void RAMP_R32TIMEDT_initState(RAMP_R32TIMEDT * const Ramp, real32 Val)
{
    SrvF_StateRamp_t SrvF_StateRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_RampInitState(&SrvF_StateRamp, (Val));

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}


INLINE_FUNCTION void RAMP_R32_calcJump(RAMP_R32 * const Ramp, real32 Val);
INLINE_FUNCTION void RAMP_R32_calcJump(RAMP_R32 * const Ramp, real32 Val)
{
    SrvF_StateRamp_t SrvF_StateRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_RampCalcJump((Val), &SrvF_StateRamp);

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_R32TIMEDT_calcJump(RAMP_R32TIMEDT * const Ramp, real32 Val);
INLINE_FUNCTION void RAMP_R32TIMEDT_calcJump(RAMP_R32TIMEDT * const Ramp, real32 Val)
{
    SrvF_StateRamp_t SrvF_StateRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_RampCalcJump((Val), &SrvF_StateRamp);

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_R32_calc(RAMP_R32 * const Ramp, real32 x, const RAMP_PARAM_T_R32 * const Ramp_Param, real32 tiSampling);
INLINE_FUNCTION void RAMP_R32_calc(RAMP_R32 * const Ramp, real32 x, const RAMP_PARAM_T_R32 * const Ramp_Param, real32 tiSampling)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    SrvF_ParamRamp_t SrvF_ParamRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvF_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvF_RampCalc((x), &SrvF_StateRamp, &SrvF_ParamRamp, (tiSampling));

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}

INLINE_FUNCTION void RAMP_R32TIMEDT_calc(RAMP_R32TIMEDT * const Ramp, real32 x, const RAMP_PARAM_T_R32TIMEDT * const Ramp_Param, real32 tiSampling);
INLINE_FUNCTION void RAMP_R32TIMEDT_calc(RAMP_R32TIMEDT * const Ramp, real32 x, const RAMP_PARAM_T_R32TIMEDT * const Ramp_Param, real32 tiSampling)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    SrvF_ParamRamp_t SrvF_ParamRamp;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    SrvF_ParamRamp.SlopePos_C = Ramp_Param->SlopePos_C;
    SrvF_ParamRamp.SlopeNeg_C = Ramp_Param->SlopeNeg_C;

    SrvF_RampCalc((x), &SrvF_StateRamp, &SrvF_ParamRamp, (tiSampling/1000000));

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;
}

INLINE_FUNCTION real32 RAMP_R32_out(const RAMP_R32 * const Ramp);
INLINE_FUNCTION real32 RAMP_R32_out(const RAMP_R32 * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    real32 returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampOut_R32(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION real32 RAMP_R32TIMEDT_out(const RAMP_R32TIMEDT * const Ramp);
INLINE_FUNCTION real32 RAMP_R32TIMEDT_out(const RAMP_R32TIMEDT * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    real32 returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampOut_R32(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_R32_getSwitchPos(const RAMP_R32 * const Ramp);
INLINE_FUNCTION bool RAMP_R32_getSwitchPos(const RAMP_R32 * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    bool returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampGetSwitchPos(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_R32TIMEDT_getSwitchPos(const RAMP_R32TIMEDT * const Ramp);
INLINE_FUNCTION bool RAMP_R32TIMEDT_getSwitchPos(const RAMP_R32TIMEDT * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    bool returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampGetSwitchPos(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_R32_checkActivity(const RAMP_R32 * const Ramp);
INLINE_FUNCTION bool RAMP_R32_checkActivity(const RAMP_R32 * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    bool returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampCheckActivity(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION bool RAMP_R32TIMEDT_checkActivity(const RAMP_R32TIMEDT * const Ramp);
INLINE_FUNCTION bool RAMP_R32TIMEDT_checkActivity(const RAMP_R32TIMEDT * const Ramp)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    bool returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampCheckActivity(&SrvF_StateRamp);
    return(returnValue);
}

INLINE_FUNCTION real32 RAMP_R32_calcSwitch(RAMP_R32 * const Ramp, bool Switch, real32 xa, real32 xb);
INLINE_FUNCTION real32 RAMP_R32_calcSwitch(RAMP_R32 * const Ramp, bool Switch, real32 xa, real32 xb)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    real32 returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampCalcSwitch_R32((xa), (xb), (Switch), &SrvF_StateRamp);

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;

    return(returnValue);
}

INLINE_FUNCTION real32 RAMP_R32TIMEDT_calcSwitch(RAMP_R32TIMEDT * const Ramp, bool Switch, real32 xa, real32 xb);
INLINE_FUNCTION real32 RAMP_R32TIMEDT_calcSwitch(RAMP_R32TIMEDT * const Ramp, bool Switch, real32 xa, real32 xb)
{
    SrvF_StateRamp_t SrvF_StateRamp;
    real32 returnValue;

    SrvF_StateRamp.State = Ramp->State;
    SrvF_StateRamp.Dir = Ramp->Dir;
    SrvF_StateRamp.Switch = Ramp->SwitchB;

    returnValue = SrvF_RampCalcSwitch_R32((xa), (xb), (Switch), &SrvF_StateRamp);

    Ramp->State = SrvF_StateRamp.State;
    Ramp->Dir = SrvF_StateRamp.Dir;
    Ramp->SwitchB = SrvF_StateRamp.Switch;

    return(returnValue);
}

#endif  /*#ifndef _CODEGEN_SRV_MISC_H*/

