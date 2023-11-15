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
 * $Filename__:codegen_srv_memory.h$
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
 * $Name______:codegen_srv_memory$
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

#ifndef _CODEGEN_SRV_MEMORY_H
#define _CODEGEN_SRV_MEMORY_H

/*************************************************************************/
/* Accumulator                                                           */
/*************************************************************************/

/* U8-ACCUMULATOR */
#define ACCUMULATOR_U8_reset(x,iv)               ((x)->memory = (uint8)(iv))
#define ACCUMULATOR_U8_compute(x,in)             ((x)->memory = (uint8)Add_limit_u8u8_u8(((x)->memory),(in)))
#define ACCUMULATOR_U8_out(x)                    ((x)->memory)

/* U16-ACCUMULATOR */
#define ACCUMULATOR_U16_reset(x,iv)              ((x)->memory = (uint16)(iv))
#define ACCUMULATOR_U16_compute(x,in)            ((x)->memory = (uint16)Add_limit_u16u16_u16(((x)->memory),(in)))
#define ACCUMULATOR_U16_out(x)                   ((x)->memory)

/* S8-ACCUMULATOR */
#define ACCUMULATOR_S8_reset(x,iv)               ((x)->memory = (sint8)(iv))
#define ACCUMULATOR_S8_compute(x,in)             ((x)->memory = (sint8)Add_limit_s8s8_s8(((x)->memory),(in)))
#define ACCUMULATOR_S8_out(x)                    ((x)->memory)

/* S16-ACCUMULATOR */
#define ACCUMULATOR_S16_reset(x,iv)              ((x)->memory = (sint16)(iv))
#define ACCUMULATOR_S16_compute(x,in)            ((x)->memory = (sint16)Add_limit_s16s16_s16(((x)->memory),(in)))
#define ACCUMULATOR_S16_out(x)                   ((x)->memory)

/* S32-ACCUMULATOR */
#define ACCUMULATOR_S32_reset(x,iv)              ((x)->memory = (sint32)(iv))
#define ACCUMULATOR_S32_compute(x,in)            ((x)->memory = (sint32)Add_limit_s32s32_s32(((x)->memory),(in)))
#define ACCUMULATOR_S32_out(x)                   ((x)->memory)

/* R32-ACCUMULATOR */
#define ACCUMULATOR_R32_reset(x,iv)              ((x)->memory = (iv))
#define ACCUMULATOR_R32_compute(x,in)            ((x)->memory += (in))
#define ACCUMULATOR_R32_out(x)                   ((x)->memory)

/*************************************************************************/
/* SrvF_Accumulator                                                      */
/*************************************************************************/

#define SRVF_ACCUMULATOR_REAL_out(ptr, x, min, max) SrvF_Accumulator(x, min, max, &((ptr)->Memory))
#define SRVF_ACCUMULATOR_REAL_init(ptr, x)       (((ptr)->Memory) = (x))

/*************************************************************************/
/* AccumulatorEnabled                                                    */
/*************************************************************************/

/* S8-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_S8_reset(x,iv,ie)                                  \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (sint8)(iv));                                  \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S8_compute(x,in,mn,mx,e)                           \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                (void)Accumulator_S8(&((x)->memory), (sint8)(in), (sint8)(mn), (sint8)(mx)); \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S8_out(x)             ((x)->memory)

/* S16-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_S16_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (sint16)(iv));                                 \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S16_compute(x,in,mn,mx,e)                          \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                    (void)Accumulator_S16(&((x)->memory), (sint16)(in), (sint16)(mn), (sint16)(mx)); \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S16_out(x)            ((x)->memory)

/* S32-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_S32_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (sint32)(iv));                                 \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S32_compute(x,in,mn,mx,e)                          \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                (void)Accumulator_S32(&((x)->memory), (sint32)(in), (sint32)(mn), (sint32)(mx)); \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_S32_out(x)            ((x)->memory)

/* U8-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_U8_reset(x,iv,ie)                                  \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (uint8)(iv));                                  \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_U8_compute(x,in,mn,mx,e)                           \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                (void)Accumulator_U8(&((x)->memory), (uint8)(in), (uint8)(mn), (uint8)(mx)); \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_U8_out(x)             ((x)->memory)

/* U16-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_U16_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (uint16)(iv));                                 \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_U16_compute(x,in,mn,mx,e)                          \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                (void)Accumulator_U16(&((x)->memory), (uint16)(in), (uint16)(mn), (uint16)(mx)); \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_U16_out(x)             ((x)->memory)

/* R32-ACCUMULATORENABLED */
#define ACCUMULATORENABLED_R32_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (iv));                                         \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_R32_compute(x,in,mn,mx,e)                          \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                Accumulator_R32(&((x)->memory), (in), (mn), (mx));            \
            }                                                                 \
        } while(0)
#define ACCUMULATORENABLED_R32_out(x)            ((x)->memory)

/*************************************************************************/
/* AccumulatorLimited                                                    */
/*************************************************************************/

/* S8-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_S8_reset(x,iv)        ((x)->memory = (sint8)(iv))
#define ACCUMULATORLIMITED_S8_compute(x,in,mn,mx)                             \
        (void)Accumulator_S8(&((x)->memory), (sint8)(in), (sint8)(mn), (sint8)(mx))
#define ACCUMULATORLIMITED_S8_out(x)             ((x)->memory)

/* S16-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_S16_reset(x,iv)        ((x)->memory = (sint16)(iv))
#define ACCUMULATORLIMITED_S16_compute(x,in,mn,mx)                            \
        (void)Accumulator_S16(&((x)->memory), (sint16)(in), (sint16)(mn), (sint16)(mx))
#define ACCUMULATORLIMITED_S16_out(x)            ((x)->memory)

/* S32-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_S32_reset(x,iv)        ((x)->memory = (sint32)(iv))
#define ACCUMULATORLIMITED_S32_compute(x,in,mn,mx)                            \
        (void)Accumulator_S32(&((x)->memory), (sint32)(in), (sint32)(mn), (sint32)(mx))
#define ACCUMULATORLIMITED_S32_out(x)            ((x)->memory)

/* U8-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_U8_reset(x,iv)         ((x)->memory = (uint8)(iv))
#define ACCUMULATORLIMITED_U8_compute(x,in,mn,mx)                             \
        (void)Accumulator_U8(&((x)->memory), (uint8)(in), (uint8)(mn), (uint8)(mx))
#define ACCUMULATORLIMITED_U8_out(x)             ((x)->memory)

/* U16-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_U16_reset(x,iv)        ((x)->memory = (uint16)(iv))
#define ACCUMULATORLIMITED_U16_compute(x,in,mn,mx)                            \
        (void)Accumulator_U16(&((x)->memory), (uint16)(in), (uint16)(mn), (uint16)(mx))
#define ACCUMULATORLIMITED_U16_out(x)            ((x)->memory)

/* R32-ACCUMULATORLIMITED */
#define ACCUMULATORLIMITED_R32_reset(x,iv)       ((x)->memory = (iv))
#define ACCUMULATORLIMITED_R32_compute(x,in,mn,mx) Accumulator_R32(&((x)->memory), (in), (mn), (mx))
#define ACCUMULATORLIMITED_R32_out(x)            ((x)->memory)

/*************************************************************************/
/* RSFlipFlop                                                            */
/*************************************************************************/

/* U8-RSFLIPFLOP da nur boolean Eingaenge und Ausgaenge */
#define RSFLIPFLOP_IMPL_compute(x,r,s)                                        \
        do                                                                    \
        {                                                                     \
            if((r))                                                           \
            {                                                                 \
                (x)->status=(bool)FALSE;                                      \
            }                                                                 \
            else                                                              \
            {                                                                 \
                if((s))                                                       \
                {                                                             \
                    (x)->status=(bool)TRUE;                                   \
                }                                                             \
            }                                                                 \
        } while(0)
#define RSFLIPFLOP_IMPL_qq(x)                    ((bool)((x)->status))
#define RSFLIPFLOP_IMPL_nqq(x)                   ((bool)(!((x)->status)))
#define RSFLIPFLOP_IMPL_q(x)                     ((bool)((x)->status))
#define RSFLIPFLOP_IMPL_nq(x)                    ((bool)(!((x)->status)))

/* U8-RSFLIPFLOP */
#define RSFLIPFLOP_U8_compute(x,r,s)                                          \
        do                                                                    \
        {                                                                     \
            if((r))                                                           \
            {                                                                 \
                (x)->status=(uint8)FALSE;                                     \
            }                                                                 \
            else                                                              \
            {                                                                 \
                if((s))                                                       \
                {                                                             \
                    (x)->status=(uint8)TRUE;                                  \
                }                                                             \
            }                                                                 \
        } while(0)
#define RSFLIPFLOP_U8_qq(x)                      ((uint8)((x)->status))
#define RSFLIPFLOP_U8_nqq(x)                     ((uint8)(!((x)->status)))
#define RSFLIPFLOP_U8_q(x)                       ((uint8)((x)->status))
#define RSFLIPFLOP_U8_nq(x)                      ((uint8)(!((x)->status)))

/*************************************************************************/
/* Srv_RSFF                                                              */
/*************************************************************************/

#define SRV_RSFF_BOOL_out(ptr,R,S)               SrvB_RSFF((R),(S),&((ptr)->State_pb))

/*************************************************************************/
/* RSFF                                                                  */
/*************************************************************************/

#define RSFF_U8_RSFF(ptr,R,S)                    SrvB_RSFF_B((R),(S),&((ptr)->State_Pb))

#endif  /*#ifndef _CODEGEN_SRV_MEMORY_H*/

