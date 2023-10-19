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
 * $Filename__:codegen_srv_delay.h$
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
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_delay$
 * $Variant___:1.0.0$
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
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_DELAY_H
#define _CODEGEN_SRV_DELAY_H

/*************************************************************************/
/* TurnOnDelay / TurnOffDelay                                            */
/*************************************************************************/

/* U8-TURNONDELAY */
#define TURNONDELAY_U8_compute(x,signal,delayTime)                            \
        ((x)->buffer=(bool)TurnOnDelay_U8(&((x)->time), ((bool)(signal)), (uint8)(delayTime)))
#define TURNONDELAY_U8_out(x)                    ((x)->buffer)

/* U16-TURNONDELAY */
#define TURNONDELAY_U16_compute(x,signal,delayTime)                           \
        ((x)->buffer=(bool)TurnOnDelay_U16(&((x)->time), ((bool)(signal)), (uint16)(delayTime)))
#define TURNONDELAY_U16_out(x)                   ((x)->buffer)

/* U8-TURNOFFDELAY */
#define TURNOFFDELAY_U8_compute(x,signal,delayTime)                           \
        ((x)->buffer=(bool)TurnOffDelay_U8(&((x)->time), ((bool)(signal)), (uint8)(delayTime)))
#define TURNOFFDELAY_U8_out(x)                   ((x)->buffer)

/* U16-TURNOFFDELAY */
#define TURNOFFDELAY_U16_compute(x,signal,delayTime)                          \
        ((x)->buffer=(bool)TurnOffDelay_U16(&((x)->time), ((bool)(signal)), (uint16)(delayTime)))
#define TURNOFFDELAY_U16_out(x)                  ((x)->buffer)

/*************************************************************************/
/* TurnOnDelayVariable / TurnOffDelayVariable                            */
/*************************************************************************/

/* U8-TURNONDELAYVARIABLE */
#define TURNONDELAYVARIABLE_U8_compute(x,signal,delayTime) (TurnOnDelayVariable_U8(((struct DELAYVARIABLE_U8 *)(void*)(x)), ((bool)(signal)), ((uint8)(delayTime))))
#define TURNONDELAYVARIABLE_U8_out(x) (((struct DELAYVARIABLE_U8 *)(void*)(x))->outbit)

/* U16-TURNONDELAYVARIABLE */
#define TURNONDELAYVARIABLE_U16_compute(x,signal,delayTime)                   \
    do {                                                                      \
        struct DELAYVARIABLE_U16 tmp_x;                                       \
        tmp_x.time   = (x)->time;                                             \
        tmp_x.outbit = (x)->outbit;                                           \
        TurnOnDelayVariable_U16 (&tmp_x, signal, delayTime);                  \
        (x)->time   = tmp_x.time;                                             \
        (x)->outbit = tmp_x.outbit;                                           \
    } while(0)
#define TURNONDELAYVARIABLE_U16_out(x) ((x)->outbit)

/* U8-TURNOFFDELAYVARIABLE */
#define TURNOFFDELAYVARIABLE_U8_compute(x,signal,delayTime) (TurnOffDelayVariable_U8(((struct DELAYVARIABLE_U8 *)(void*)(x)), ((bool)(signal)), ((uint8)(delayTime))))
#define TURNOFFDELAYVARIABLE_U8_out(x) (((struct DELAYVARIABLE_U8 *)(void*)(x))->outbit)


/* U16-TURNOFFDELAYVARIABLE */
#define TURNOFFDELAYVARIABLE_U16_compute(x,signal,delayTime)                  \
    do {                                                                      \
        struct DELAYVARIABLE_U16 tmp_x;                                       \
        tmp_x.time   = (x)->time;                                             \
        tmp_x.outbit = (x)->outbit;                                           \
        TurnOffDelayVariable_U16 (&tmp_x, signal, delayTime);                 \
        (x)->time   = tmp_x.time;                                             \
        (x)->outbit = tmp_x.outbit;                                           \
    } while(0)
#define TURNOFFDELAYVARIABLE_U16_out(x) ((x)->outbit)

/*************************************************************************/
/* TurnOnDelayNoMem / TurnOffDelayNoMem                                  */
/*************************************************************************/

/* U8-TURNONDELAYVARIABLENOMEM */
#define TURNONDELAYVARIABLENOMEM_U8_compute(x,signal,delayTime)               \
        (TurnOnDelayVariableNoMem_U8(((uint8 *)(&((x)->time))), ((uint16)(signal)), ((uint8)(delayTime))))

/* U16-TURNONDELAYVARIABLENOMEM */
#define TURNONDELAYVARIABLENOMEM_U16_compute(x,signal,delayTime)              \
        (TurnOnDelayVariableNoMem_U16(((uint16 *)(&((x)->time))), ((uint16)(signal)), ((uint16)(delayTime))))

/* U8-TURNOFFDELAYVARIABLENOMEM */
#define TURNOFFDELAYVARIABLENOMEM_U8_compute(x,signal,delayTime)              \
        (TurnOffDelayVariableNoMem_U8(((uint8 *)(&((x)->time))), ((uint16)(signal)), ((uint8)(delayTime))))

/* U16-TURNOFFDELAYVARIABLENOMEM */
#define TURNOFFDELAYVARIABLENOMEM_U16_compute(x,signal,delayTime)             \
        (TurnOffDelayVariableNoMem_U16(((uint16 *)(&((x)->time))), ((uint16)(signal)), ((uint16)(delayTime))))

/*************************************************************************/
/* TurnOffDelayA / TurnOnDelayA                                          */
/*************************************************************************/

/* Bool-TURNOFFDELAYA */
#define TURNOFFDELAYA_BOOL_out(ptr, x, delaytime, Dt)                         \
        SrvX_TrnOffDlyBoolean_B(x, &((ptr)->Time), delaytime, Dt)
#define TURNOFFDELAYA_BOOL_setTime(ptr)                                       \
        SrvX_TrnOffDlyBooleanInit(&((ptr)->Time))

/* Bool-TURNONDELAYA */
#define TURNONDELAYA_BOOL_out(ptr, x, delaytime, Dt)                          \
        SrvX_TrnOnDlyBoolean_B(x, &((ptr)->Time), delaytime, Dt)
#define TURNONDELAYA_BOOL_setTime(ptr)                                        \
        SrvX_TrnOnDlyBooleanInit(&((ptr)->Time))

/*************************************************************************/
/* Srv_TrnOffDly / Srv_TrnOnDly                                          */
/*************************************************************************/

/* Bool-Srv_TrnOffDly */
#define SRV_TRNOFFDLY_BOOL_setTime(ptr, timeval) ((ptr)->time = (timeval))
#define SRV_TRNOFFDLY_BOOL_out(ptr,x,T,Dt)       SrvX_TrnOffDly(x, &((ptr)->time),T,Dt)

/* Bool-Srv_TrnOnDly */
#define SRV_TRNONDLY_BOOL_out(ptr,x,T,Dt)        SrvX_TrnOnDly(x, &((ptr)->time),T,Dt)
#define SRV_TRNONDLY_BOOL_setTime(ptr, timeval)  ((ptr)->time = (timeval))

#endif  /*#ifndef _CODEGEN_SRV_DELAY_H*/
