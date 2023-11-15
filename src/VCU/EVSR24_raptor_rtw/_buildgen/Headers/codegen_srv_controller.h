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
 * $Filename__:codegen_srv_controller.h$
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
 * $Date______:19.10.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_controller$
 * $Variant___:1.1.0$
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
 * 1.1.0; 0     19.10.2012 DAJ2KOR
 *    Macros added for new RealTimeDt and R32TimeDt implementations for 
 *   controller classes.
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_CONTROLLER_H
#define _CODEGEN_SRV_CONTROLLER_H

/*********************************************************************************/
/* IntegratorK                                                                   */
/*********************************************************************************/

/* U16-IntegratorK */
#define INTEGRATORK_U16(x,in,K)                                               \
        IntegratorK_U16(&((x)->memory), (uint16)(in), (uint16)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define INTEGRATORK_U16_reset(x,iv)              ((x)->memory = (uint32)(((uint32)(iv))<<16))
#define INTEGRATORK_U16_compute(x,in,K)          INTEGRATORK_U16(x,in,K)
#define INTEGRATORK_U16_out(x)                   ((uint16)(((x)->memory)>>16))

/* SU16-IntegratorK */
#define INTEGRATORK_SU16(x,in,K)                                              \
        IntegratorK_SU16(&((x)->memory), (sint16)(in), (uint16)(K))
#define INTEGRATORK_SU16_reset(x,iv)             INTEGRATORK_U16_reset(x,iv)
#define INTEGRATORK_SU16_compute(x,in,K)         INTEGRATORK_SU16(x,in,K)
#define INTEGRATORK_SU16_out(x)                  INTEGRATORK_U16_out(x)

/* S16-IntegratorK */
#define INTEGRATORK_S16(x,in,K)                                               \
        IntegratorK_S16(&((x)->memory), (sint16)(in), (uint16)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define INTEGRATORK_S16_reset(x,iv)              ((x)->memory = (sint32)(((sint32)(iv))<<16))
#define INTEGRATORK_S16_compute(x,in,K)          INTEGRATORK_S16(x,in,K)
#define INTEGRATORK_S16_out(x)                   ((sint16) (((x)->memory)>>16))

/* S8-IntegratorK */
#define INTEGRATORK_S8(x,in,K)                                                \
        IntegratorK_S8(&((x)->memory), (sint8)(in), (uint8)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define INTEGRATORK_S8_reset(x,iv)               ((x)->memory = (sint16)(((sint16)(iv))<<8))
#define INTEGRATORK_S8_compute(x,in,K)           INTEGRATORK_S8(x,in,K)
#define INTEGRATORK_S8_out(x)                    ((sint8)(((x)->memory)>>8))

/* R32-IntegratorK */
#define INTEGRATORK_R32_reset(x,iv)              ((x)->memory = (iv))
#define INTEGRATORK_R32_compute(x,in,K)          IntegratorK_R32(&((x)->memory), (in), (K))
#define INTEGRATORK_R32_out(x)                   ((x)->memory)

/*********************************************************************************/
/* IntegratorKLimited                                                            */
/*********************************************************************************/

/* U16-IntegratorKLimited */
#define INTEGRATORKLIMITED_U16(x,in,K,mn,mx)                                  \
        IntegratorKLimited_U16(&((x)->memory), (uint16)(in), (uint16)(K), (uint16)(mn), (uint16)(mx))
#define INTEGRATORKLIMITED_U16_reset(x,iv)       INTEGRATORK_U16_reset(x,iv)
#define INTEGRATORKLIMITED_U16_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_U16(x,in,K,mn,mx)
#define INTEGRATORKLIMITED_U16_out(x)            INTEGRATORK_U16_out(x)

/* SU16-IntegratorKLimited */
#define INTEGRATORKLIMITED_SU16(x,in,K,mn,mx)                                  \
        IntegratorKLimited_SU16(&((x)->memory), (sint16)(in), (uint16)(K), (uint16)(mn), (uint16)(mx))
#define INTEGRATORKLIMITED_SU16_reset(x,iv)      INTEGRATORK_U16_reset(x,iv)
#define INTEGRATORKLIMITED_SU16_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_SU16(x,in,K,mn,mx)
#define INTEGRATORKLIMITED_SU16_out(x)           INTEGRATORK_U16_out(x)

/* S16-IntegratorKLimited */
#define INTEGRATORKLIMITED_S16(x,in,K,mn,mx)                                  \
        IntegratorKLimited_S16(&((x)->memory), (sint16)(in), (uint16)(K), (sint16)(mn), (sint16)(mx))
#define INTEGRATORKLIMITED_S16_reset(x,iv)       INTEGRATORK_S16_reset(x,iv)
#define INTEGRATORKLIMITED_S16_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_S16(x,in,K,mn,mx)
#define INTEGRATORKLIMITED_S16_out(x)            INTEGRATORK_S16_out(x)

/* S8-IntegratorKLimited */
#define INTEGRATORKLIMITED_S8(x,in,K,mn,mx)                                   \
        IntegratorKLimited_S8(&((x)->memory), (sint8)(in), (uint8)(K), (sint8)(mn), (sint8)(mx))
#define INTEGRATORKLIMITED_S8_reset(x,iv)        INTEGRATORK_S8_reset(x,iv)
#define INTEGRATORKLIMITED_S8_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_S8(x,in,K,mn,mx)
#define INTEGRATORKLIMITED_S8_out(x)             INTEGRATORK_S8_out(x)

/* R32-IntegratorKLimited */
#define INTEGRATORKLIMITED_R32_reset(x,iv)       ((x)->memory = (iv))
#define INTEGRATORKLIMITED_R32_compute(x,in,K,mn,mx) IntegratorKLimited_R32(&((x)->memory), (in), (K), (mn), (mx))
#define INTEGRATORKLIMITED_R32_out(x)            ((x)->memory)

/*********************************************************************************/
/* IntegratorKEnabled                                                            */
/*********************************************************************************/

/* U16-IntegratorKEnabled */
#define INTEGRATORKENABLED_U16_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORK_U16_reset(x,iv);                                  \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_U16_compute(x,in,K,mn,mx,e)                        \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORKLIMITED_U16(x,in,K,mn,mx);                         \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_U16_out(x)            INTEGRATORK_U16_out(x)

/* SU16-IntegratorKEnabled */
#define INTEGRATORKENABLED_SU16_reset(x,iv,ie)                                \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORK_U16_reset(x,iv);                                  \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_SU16_compute(x,in,K,mn,mx,e)                       \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORKLIMITED_SU16(x,in,K,mn,mx);                        \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_SU16_out(x)           INTEGRATORK_U16_out(x)

/* S16-IntegratorKEnabled */
#define INTEGRATORKENABLED_S16_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORK_S16_reset(x,iv);                                  \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_S16_compute(x,in,K,mn,mx,e)                        \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORKLIMITED_S16(x,in,K,mn,mx);                         \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_S16_out(x)            INTEGRATORK_S16_out(x)

/* S8-IntegratorKEnabled */
#define INTEGRATORKENABLED_S8_reset(x,iv,ie)                                  \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORK_S8_reset(x,iv);                                   \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_S8_compute(x,in,K,mn,mx,e)                         \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORKLIMITED_S8(x,in,K,mn,mx);                          \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_S8_out(x)             INTEGRATORK_S8_out(x)

/* S8-IntegratorKEnabled */
#define INTEGRATORKENABLED_R32_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (iv));                                     \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_R32_compute(x,in,K,mn,mx,e)                        \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                IntegratorKLimited_R32(&((x)->memory), (in), (K), (mn), (mx)); \
            }                                                                 \
        } while(0)
#define INTEGRATORKENABLED_R32_out(x)            ((x)->memory)

/*********************************************************************************/
/* IntegratorT                                                                   */
/*********************************************************************************/

/* S16-IntegratorT */
#define INTEGRATORT_S16(x,in,T)                                               \
        IntegratorT_S16(&((x)->memory), (sint16)(in), (uint16)(T))
/* IGNORE RULE 0278:The warning makes no sens */
#define INTEGRATORT_S16_reset(x,iv)              ((x)->memory = (sint32)(((sint32)(iv))<<16))
#define INTEGRATORT_S16_compute(x,in,T)          INTEGRATORT_S16(x,in,T)
#define INTEGRATORT_S16_out(x)                   ((sint16)(((x)->memory)>>16))

/* S8-IntegratorT */
#define INTEGRATORT_S8(x,in,T)                                                \
        IntegratorT_S8(&((x)->memory), (sint8)(in), (uint8)(T))
/* IGNORE RULE 0278:The warning makes no sens */
#define INTEGRATORT_S8_reset(x,iv)               ((x)->memory = (sint16)(((sint16)(iv))<<8))
#define INTEGRATORT_S8_compute(x,in,T)           INTEGRATORT_S8(x,in,T)
#define INTEGRATORT_S8_out(x)                    ((sint8)(((x)->memory)>>8))

/* KU16-IntegratorT mapped to K */
#define INTEGRATORT_KU16_reset(x,iv)             INTEGRATORK_U16_reset(x,iv)
#define INTEGRATORT_KU16_compute(x,in,K)         INTEGRATORK_U16_compute(x,in,K)
#define INTEGRATORT_KU16_out(x)                  INTEGRATORK_U16_out(x)

/* KSU16-IntegratorT mapped to K */
#define INTEGRATORT_KSU16_reset(x,iv)            INTEGRATORK_U16_reset(x,iv)
#define INTEGRATORT_KSU16_compute(x,in,K)        INTEGRATORK_SU16_compute(x,in,K)
#define INTEGRATORT_KSU16_out(x)                 INTEGRATORK_U16_out(x)

/* KS16-IntegratorT mapped to K */
#define INTEGRATORT_KS16_reset(x,iv)             INTEGRATORK_S16_reset(x,iv)
#define INTEGRATORT_KS16_compute(x,in,K)         INTEGRATORK_S16_compute(x,in,K)
#define INTEGRATORT_KS16_out(x)                  INTEGRATORK_S16_out(x)

/* S8-IntegratorT mapped to K */
#define INTEGRATORT_KS8_reset(x,iv)              INTEGRATORK_S8_reset(x,iv)
#define INTEGRATORT_KS8_compute(x,in,K)          INTEGRATORK_S8_compute(x,in,K)
#define INTEGRATORT_KS8_out(x)                   INTEGRATORK_S8_out(x)

/* R32-IntegratorT mapped to K */
#define INTEGRATORT_R32_reset(x,iv)              ((x)->memory = (iv))
#define INTEGRATORT_R32_compute(x,in,T)          IntegratorT_R32(&((x)->memory), (in), (T))
#define INTEGRATORT_R32_out(x)                   ((x)->memory)

/*********************************************************************************/
/* IntegratorTLimited                                                            */
/*********************************************************************************/

/* S16-IntegratorTLimited */
#define INTEGRATORTLIMITED_S16(x,in,T,mn,mx)                                  \
        IntegratorTLimited_S16(&((x)->memory), (sint16)(in), (uint16)(T), (sint16)(mn), (sint16)(mx))
#define INTEGRATORTLIMITED_S16_reset(x,iv)       INTEGRATORT_S16_reset(x,iv)
#define INTEGRATORTLIMITED_S16_compute(x,in,T,mn,mx) INTEGRATORTLIMITED_S16(x,in,T,mn,mx)
#define INTEGRATORTLIMITED_S16_out(x)            INTEGRATORT_S16_out(x)

/* S8-IntegratorTLimited */
#define INTEGRATORTLIMITED_S8(x,in,T,mn,mx)                                   \
        IntegratorTLimited_S8(&((x)->memory), (sint8)(in), (uint8)(T), (sint8)(mn), (sint8)(mx))
#define INTEGRATORTLIMITED_S8_reset(x,iv)        INTEGRATORT_S8_reset(x,iv)
#define INTEGRATORTLIMITED_S8_compute(x,in,T,mn,mx) INTEGRATORTLIMITED_S8(x,in,T,mn,mx)
#define INTEGRATORTLIMITED_S8_out(x)             INTEGRATORT_S8_out(x)

/* R32-IntegratorTLimited */
#define INTEGRATORTLIMITED_R32_reset(x,iv)       ((x)->memory = (iv))
#define INTEGRATORTLIMITED_R32_compute(x,in,T,mn,mx) IntegratorTLimited_R32(&((x)->memory), (in), (T), (mn), (mx))
#define INTEGRATORTLIMITED_R32_out(x)            ((x)->memory)

/* KU16-IntegratorTLimited mapped to K */
#define INTEGRATORTLIMITED_KU16_reset(x,iv)      INTEGRATORKLIMITED_U16_reset(x,iv)
#define INTEGRATORTLIMITED_KU16_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_U16_compute(x,in,K,mn,mx)
#define INTEGRATORTLIMITED_KU16_out(x)           INTEGRATORKLIMITED_U16_out(x)

/* KSU16-IntegratorTLimited mapped to K */
#define INTEGRATORTLIMITED_KSU16_reset(x,iv)     INTEGRATORKLIMITED_U16_reset(x,iv)
#define INTEGRATORTLIMITED_KSU16_compute(x,in,K,mn,mx) INTEGRATORKLIMITED_SU16_compute(x,in,K,mn,mx)
#define INTEGRATORTLIMITED_KSU16_out(x)          INTEGRATORKLIMITED_U16_out(x)

/* KS16-IntegratorTLimited mapped to K */
#define INTEGRATORTLIMITED_KS16_reset(x,iv)      INTEGRATORKLIMITED_S16_reset(x,iv)
#define INTEGRATORTLIMITED_KS16_compute(x,in,K,mn,mx)  INTEGRATORKLIMITED_S16_compute(x,in,K,mn,mx)
#define INTEGRATORTLIMITED_KS16_out(x)           INTEGRATORKLIMITED_S16_out(x)

/* KS8-IntegratorTLimited mapped to K */
#define INTEGRATORTLIMITED_KS8_reset(x,iv)       INTEGRATORKLIMITED_S8_reset(x,iv)
#define INTEGRATORTLIMITED_KS8_compute(x,in,K,mn,mx)  INTEGRATORKLIMITED_S8_compute(x,in,K,mn,mx)
#define INTEGRATORTLIMITED_KS8_out(x)            INTEGRATORKLIMITED_S8_out(x)

/*********************************************************************************/
/* IntegratorTEnabled                                                            */
/*********************************************************************************/

/* S16-IntegratorTEnabled */
#define INTEGRATORTENABLED_S16_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORT_S16_reset(x,iv);                                  \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_S16_compute(x,in,T,mn,mx,e)                        \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORTLIMITED_S16(x,in,T,mn,mx);                         \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_S16_out(x)            INTEGRATORT_S16_out(x)

/* S8-IntegratorTEnabled */
#define INTEGRATORTENABLED_S8_reset(x,iv,ie)                                  \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                INTEGRATORT_S8_reset(x,iv);                                   \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_S8_compute(x,in,T,mn,mx,e)                         \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                INTEGRATORTLIMITED_S8(x,in,T,mn,mx);                          \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_S8_out(x)             INTEGRATORT_S8_out(x)

/* R32-IntegratorTEnabled */
#define INTEGRATORTENABLED_R32_reset(x,iv,ie)                                 \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (iv));                                     \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_R32_compute(x,in,T,mn,mx,e)                        \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                IntegratorTLimited_R32(&((x)->memory), (in), (T), (mn), (mx)); \
            }                                                                 \
        } while(0)
#define INTEGRATORTENABLED_R32_out(x)            ((x)->memory)

/* KU16-IntegratorTEnabled mapped to K */
#define INTEGRATORTENABLED_KU16_reset(x,iv,ie)  INTEGRATORKENABLED_U16_reset(x,iv,ie)
#define INTEGRATORTENABLED_KU16_compute(x,in,K,mn,mx,e) INTEGRATORKENABLED_U16_compute(x,in,K,mn,mx,e)
#define INTEGRATORTENABLED_KU16_out(x)          INTEGRATORKENABLED_U16_out(x)

/* KSU16-IntegratorTEnabled mapped to K */
#define INTEGRATORTENABLED_KSU16_reset(x,iv,ie) INTEGRATORKENABLED_U16_reset(x,iv,ie)
#define INTEGRATORTENABLED_KSU16_compute(x,in,K,mn,mx,e) INTEGRATORKENABLED_SU16_compute(x,in,K,mn,mx,e)
#define INTEGRATORTENABLED_KSU16_out(x)         INTEGRATORKENABLED_U16_out(x)

/* KS16-IntegratorTEnabled mapped to K */
#define INTEGRATORTENABLED_KS16_reset(x,iv,ie)  INTEGRATORKENABLED_S16_reset(x,iv,ie)
#define INTEGRATORTENABLED_KS16_compute(x,in,K,mn,mx,e) INTEGRATORKENABLED_S16_compute(x,in,K,mn,mx,e)
#define INTEGRATORTENABLED_KS16_out(x)          INTEGRATORKENABLED_S16_out(x)

/* S8-IntegratorTEnabled mapped to K */
#define INTEGRATORTENABLED_KS8_reset(x,iv,ie)   INTEGRATORKENABLED_S8_reset(x,iv,ie)
#define INTEGRATORTENABLED_KS8_compute(x,in,K,mn,mx,e) INTEGRATORKENABLED_S8_compute(x,in,K,mn,mx,e)
#define INTEGRATORTENABLED_KS8_out(x)           INTEGRATORKENABLED_S8_out(x)

/*********************************************************************************/
/* Srv_Int                                                                       */
/*********************************************************************************/

/* U8-Srv_Int */
#define SRV_INT_U8                               SrvX_IntStateU8_t
#define SRV_INT_U8_setState(ptr,state)           SrvX_IntSetState(&((ptr)->State),state)
#define SRV_INT_U8_outState(ptr)                 SrvX_IntU8Out((ptr)->State)
#define SRV_INT_U8_out(ptr,x,T1,Dt)              SrvX_IntU8(x,&((ptr)->State),T1,Dt)

/* U8ToInvert-Srv_Int */
#define SRV_INT_U8TOINVERT                       SrvX_IntStateU8TOINVERT_t
#define SRV_INT_U8TOINVERT_setState(ptr,state)   SrvX_IntSetState(&((ptr)->State),state)
#define SRV_INT_U8TOINVERT_outState(ptr)         SrvX_IntU8Out((ptr)->State)
#define SRV_INT_U8TOINVERT_out(ptr,x,T1,Dt)      SrvX_IntU8((x),&((ptr)->State),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/* S16-Srv_Int */
#define SRV_INT_S16                              SrvX_IntStateS16_t
#define SRV_INT_S16_setState(ptr,state)          SrvX_IntSetState(&((ptr)->State),state)
#define SRV_INT_S16_outState(ptr)                SrvX_IntS16Out((ptr)->State)
#define SRV_INT_S16_out(ptr,x,T1,Dt)             SrvX_IntS16(x,&((ptr)->State),T1,Dt)

/* S16ToInvert-Srv_Int */
#define SRV_INT_S16TOINVERT                      SrvX_IntStateS16TOINVERT_t
#define SRV_INT_S16TOINVERT_setState(ptr,state)  SrvX_IntSetState(&((ptr)->State),state)
#define SRV_INT_S16TOINVERT_outState(ptr)        SrvX_IntS16Out((ptr)->State)
#define SRV_INT_S16TOINVERT_out(ptr,x,T1,Dt)     SrvX_IntS16((x),&((ptr)->State),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/*********************************************************************************/
/* Srv_IntLim                                                                    */
/*********************************************************************************/

/* U8-IntLim */
#define SRV_INTLIM_U8                            SrvX_IntLimStateU8_t
#define SRV_INTLIM_U8_setState(ptr,state)        ((ptr)->State = (state))
#define SRV_INTLIM_U8_out(ptr,x,param,T1,Dt)     SrvX_IntLimU8(x,&((ptr)->State),param,T1,Dt)

/* U8ToInvert-IntLim */
#define SRV_INTLIM_U8TOINVERT                    SrvX_IntLimStateU8TOINVERT_t
#define SRV_INTLIM_U8TOINVERT_setState(ptr,state) ((ptr)->State = (state))
#define SRV_INTLIM_U8TOINVERT_out(ptr,x,param,T1,Dt) SrvX_IntLimU8((x),&((ptr)->State),(param),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/* S16-IntLim */
#define SRV_INTLIM_S16                           SrvX_IntLimStateS16_t
#define SRV_INTLIM_S16_setState(ptr,state)       ((ptr)->State = (state))
#define SRV_INTLIM_S16_out(ptr,x,param,T1,Dt)    SrvX_IntLimS16(x,&((ptr)->State),param,T1,Dt)

/* S16ToInvert-IntLim */
#define SRV_INTLIM_S16TOINVERT                   SrvX_IntLimStateS16TOINVERT_t
#define SRV_INTLIM_S16TOINVERT_setState(ptr,state) ((ptr)->State = (state))
#define SRV_INTLIM_S16TOINVERT_out(ptr,x,param,T1,Dt) SrvX_IntLimS16((x),&((ptr)->State),(param),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/* R32-IntLim */
#define SRV_INTLIM_REAL                          SrvF_IntLimStateREAL_t
#define SRV_INTLIM_REAL_setState(ptr,state)      ((ptr)->State = (state))
#define SRV_INTLIM_REAL_out(ptr,x,param,T1,Dt)   SrvF_Accumulator((real32)(((T1))?(((real32)(Dt)/1000000)*((x)/(T1))):0),((param)->Min_C), ((param)->Max_C), &((ptr)->State))

/*#define SRV_INTLIM_REALTIMEDT                          SrvF_IntLimStateREAL_t
#define SRV_INTLIM_REALTIMEDT_setState(ptr,state)      ((ptr)->State = (state))
#define SRV_INTLIM_REALTIMEDT_out(ptr,x,param,T1,Dt)   SrvF_Accumulator((real32)(((T1))?(((real32)(Dt))*((x)/(T1*1000000))):0),((param)->Min_C), ((param)->Max_C), &((ptr)->State))*/
/*********************************************************************************/
/* Srv_IntLimit                                                                  */
/*********************************************************************************/

/* U8-IntLimit */
#define SRV_INTLIMIT_U8_setState(ptr,state)      SrvX_IntSetState(&((ptr)->State), state)
#define SRV_INTLIMIT_U8_out(ptr,x,param,T1,Dt)   SrvX_IntLimU8(x,&((ptr)->State),param,T1,Dt)

/* U8ToInvert-IntLimit */
#define SRV_INTLIMIT_U8TOINVERT_setState(ptr,state) SrvX_IntSetState(&((ptr)->State), state)
#define SRV_INTLIMIT_U8TOINVERT_out(ptr,x,param,T1,Dt) SrvX_IntLimU8((x),&((ptr)->State),(param),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/* S16-IntLimit */
#define SRV_INTLIMIT_S16_setState(ptr,state)     SrvX_IntSetState(&((ptr)->State), state)
#define SRV_INTLIMIT_S16_out(ptr,x,param,T1,Dt)  SrvX_IntLimS16(x,&((ptr)->State),param,T1,Dt)

/* S16ToInvert-IntLimit */
#define SRV_INTLIMIT_S16TOINVERT_setState(ptr,state)  SrvX_IntSetState(&((ptr)->State), state)
#define SRV_INTLIMIT_S16TOINVERT_out(ptr,x,param,T1,Dt) SrvX_IntLimS16((x),&((ptr)->State),(param),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Dt))

/* R32-IntLimit */
#define SRV_INTLIMIT_REAL_setState(ptr,state)    ((ptr)->State = (state))
#define SRV_INTLIMIT_REAL_out(ptr,x,param,T1,Dt) SrvF_Accumulator((real32)(((T1))?(((real32)(Dt)/1000000)*((x)/(T1))):0),((param)->Min_C), ((param)->Max_C), &((ptr)->State))

#define SRV_INTLIMIT_REALTIMEDT_setState(ptr,state)    ((ptr)->State = (state))
#define SRV_INTLIMIT_REALTIMEDT_out(ptr,x,param,T1,Dt) SrvF_Accumulator((real32)(((T1))?(((real32)(Dt))*((x)/(T1*1000000))):0),((param)->Min_C), ((param)->Max_C), &((ptr)->State))
/*********************************************************************************/
/* Srv_IntLimParam                                                               */
/*********************************************************************************/

/* U8-IntLimParam */
#define _SRV_INTLIMPARAM_T_U8_                      PROTECT_TYPEDEF
#define SRV_INTLIMPARAM_T_U8                        SrvX_IntLimU8Param_t
#define SRV_INTLIMPARAM_T_U8_setParam(ptr,min,max)  SrvX_IntLimSetParam(ptr,min,max)

/* U8ToInvert-IntLimParam */
#define _SRV_INTLIMPARAM_T_U8TOINVERT_              PROTECT_TYPEDEF
#define SRV_INTLIMPARAM_T_U8TOINVERT                SrvX_IntLimU8Param_t
#define SRV_INTLIMPARAM_T_U8TOINVERT_setParam(ptr,min,max) SrvX_IntLimSetParam(ptr,min,max)

/* S16-IntLimParam */
#define _SRV_INTLIMPARAM_T_S16_                     PROTECT_TYPEDEF
#define SRV_INTLIMPARAM_T_S16                       SrvX_IntLimS16Param_t
#define SRV_INTLIMPARAM_T_S16_setParam(ptr,min,max) SrvX_IntLimSetParam(ptr,min,max)

/* U8-IntLimParam */
#define _SRV_INTLIMPARAM_T_S16TOINVERT_             PROTECT_TYPEDEF
#define SRV_INTLIMPARAM_T_S16TOINVERT               SrvX_IntLimS16Param_t
#define SRV_INTLIMPARAM_T_S16TOINVERT_setParam(ptr,min,max) SrvX_IntLimSetParam(ptr,min,max)

/* R32-IntLimParam */
#define SRV_INTLIMPARAM_T_REAL_setParam(ptr,min,max)                          \
        do                                                                    \
        {                                                                     \
            (ptr)->Min_C = (min);                                             \
            (ptr)->Max_C = (max);                                             \
        } while(0)
		
#define SRV_INTLIMPARAM_T_REALTIMEDT_setParam(ptr,min,max)                          \
        do                                                                    \
        {                                                                     \
            (ptr)->Min_C = (min);                                             \
            (ptr)->Max_C = (max);                                             \
        } while(0)

/*********************************************************************************/
/* Srv_IWin                                                                      */
/*********************************************************************************/

/* S16-Srv_IWin */
#define SRV_IWIN_S16                                    SrvX_IWinState_t
#define SRV_IWIN_S16_setState(ptr,state)                SrvX_IWinSetState(&((ptr)->State),state)
#define _SRV_IWINPARAM_T_S32_                           PROTECT_TYPEDEF

/* R32-Srv_IWin */
#define SRV_IWIN_REAL                                   SrvF_IWinState_t
#define SRV_IWIN_REAL_setState(ptr,state)               SrvF_IWinInit(state,&((ptr)->State))
#define _SRV_IWINPARAM_T_REAL_                          PROTECT_TYPEDEF

#define _SRV_IWIN_REALTIMEDT_                                 PROTECT_TYPEDEF 
#define SRV_IWIN_REALTIMEDT                                   SrvF_IWinState_t
#define SRV_IWIN_REALTIMEDT_setState(ptr,state)               SrvF_IWinInit(state,&((ptr)->State))
#define _SRV_IWINPARAM_T_REALTIMEDT_                          PROTECT_TYPEDEF

/*********************************************************************************/
/* Srv_IWinParam                                                                 */
/*********************************************************************************/

#define SRV_IWINPARAM_T_S32                             SrvX_IWinParam_t
#define SRV_IWINPARAM_T_S32_setKi(ptr,Ki,KiPos,KiNeg)   SrvX_IWinSetKi(ptr,Ki,KiPos,KiNeg)
#define SRV_IWINPARAM_T_S32_setWin(ptr,WinPos,WinNeg)   SrvX_IWinSetWin(ptr,WinPos,WinNeg)
#define SRV_IWIN_S16_out(ptr,x,param,Dt)                SrvX_IWinS16(x,&((ptr)->State),param,Dt)

#define SRV_IWINPARAM_T_REAL                            SrvF_IWinParam_t
#define SRV_IWINPARAM_T_REAL_setKi(ptr,Ki,KiPos,KiNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->Ki_C    = (Ki);                                            \
            (ptr)->KiPos_C = (KiPos);                                         \
            (ptr)->KiNeg_C = (KiNeg);                                         \
        } while (0)
#define SRV_IWINPARAM_T_REAL_setWin(ptr,WinPos,WinNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)
#define SRV_IWIN_REAL_out(ptr,x,param,Dt)               SrvF_IWin(x,param,&((ptr)->State),((real32)(Dt)/1000000))

#define SRV_IWINPARAM_T_REALTIMEDT                            SrvF_IWinParam_t
#define SRV_IWINPARAM_T_REALTIMEDT_setKi(ptr,Ki,KiPos,KiNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->Ki_C    = (Ki);                                            \
            (ptr)->KiPos_C = (KiPos);                                         \
            (ptr)->KiNeg_C = (KiNeg);                                         \
        } while (0)
#define SRV_IWINPARAM_T_REALTIMEDT_setWin(ptr,WinPos,WinNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)
#define SRV_IWIN_REALTIMEDT_out(ptr,x,param,Dt)               SrvF_IWin(x,param,&((ptr)->State),((real32)(Dt)/1000000))

/*********************************************************************************/
/* LowpassK                                                                      */
/*********************************************************************************/

/* S16-LowpassK */
#define LOWPASSK_S16(x,in,K)                                                  \
        LowPassK_S16(&((x)->memory), (sint16)(in), (uint16)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASSK_S16_reset(x,iv)                 ((x)->memory = (sint32)(((sint32)(iv))<<16))
#define LOWPASSK_S16_compute(x,in,K)             LOWPASSK_S16(x,in,K)
#define LOWPASSK_S16_out(x)                      ((sint16)(((x)->memory)>>16))

/* S8-LowpassK */
#define LOWPASSK_S8(x,in,K)                                                   \
        LowPassK_S8(&((x)->memory), (sint8)(in), (uint8)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASSK_S8_reset(x,iv)                  ((x)->memory = (sint16)(((sint16)(iv))<<8))
#define LOWPASSK_S8_compute(x,in,K)              LOWPASSK_S8(x,in,K)
#define LOWPASSK_S8_out(x)                       ((sint8)(((x)->memory)>>8))

/* U16-LowpassK */
#define LOWPASSK_U16(x,in,K)                                                  \
        LowPassK_U16(&((x)->memory), (uint16)(in), (uint16)(K))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASSK_U16_reset(x,iv)                 ((x)->memory = (uint32)(((uint32)(iv))<<16))
#define LOWPASSK_U16_compute(x,in,K)             LOWPASSK_U16(x,in,K)
#define LOWPASSK_U16_out(x)                      ((uint16)(((x)->memory)>>16))

/* U8-LowpassK */
#define LOWPASSK_U8(x,in,K)                                                   \
        LowPassK_U8(&((x)->memory), (uint8)(in), (uint8)(K))
#define LOWPASSK_U8_reset(x,iv)                  ((x)->memory = (uint16)(((uint16)(iv))<<8))
#define LOWPASSK_U8_compute(x,in,K)              LOWPASSK_U8(x,in,K)
#define LOWPASSK_U8_out(x)                       ((uint8)(((x)->memory)>>8))

/* R32-LowpassK */
#define LOWPASSK_R32_reset(x,iv)                 ((x)->memory = (iv))
#define LOWPASSK_R32_compute(x,in,K)             LowPassK_R32(&((x)->memory), (in), (K))
#define LOWPASSK_R32_out(x)                      ((x)->memory)

/*********************************************************************************/
/* DigitalLowpass                                                                */
/*********************************************************************************/

/* S16-DigitalLowpass */
#define DIGITALLOWPASS_S16_reset(x,iv)           LOWPASSK_S16_reset(x,iv)
#define DIGITALLOWPASS_S16_compute(x,in,m)       LOWPASSK_S16_compute(x,in,m)
#define DIGITALLOWPASS_S16_out(x)                LOWPASSK_S16_out(x)

/* S8-DigitalLowpass */
#define DIGITALLOWPASS_S8_reset(x,iv)            LOWPASSK_S8_reset(x,iv)
#define DIGITALLOWPASS_S8_compute(x,in,m)        LOWPASSK_S8_compute(x,in,m)
#define DIGITALLOWPASS_S8_out(x)                 LOWPASSK_S8_out(x)

/* U16-DigitalLowpass */
#define DIGITALLOWPASS_U16_reset(x,iv)           LOWPASSK_U16_reset(x,iv)
#define DIGITALLOWPASS_U16_compute(x,in,m)       LOWPASSK_U16_compute(x,in,m)
#define DIGITALLOWPASS_U16_out(x)                LOWPASSK_U16_out(x)

/* U8-DigitalLowpass */
#define DIGITALLOWPASS_U8_reset(x,iv)            LOWPASSK_U8_reset(x,iv)
#define DIGITALLOWPASS_U8_compute(x,in,m)        LOWPASSK_U8_compute(x,in,m)
#define DIGITALLOWPASS_U8_out(x)                 LOWPASSK_U8_out(x)

/* R32-DigitalLowpass */
#define DIGITALLOWPASS_R32_reset(x,iv)           ((x)->memory = (iv))
#define DIGITALLOWPASS_R32_compute(x,in,m)       LowPassK_R32(&((x)->memory), (in), (m))
#define DIGITALLOWPASS_R32_out(x)                ((x)->memory)

/*********************************************************************************/
/* LowpassKEnabled                                                               */
/*********************************************************************************/

/* S16-LowpassKEnabled */
#define LOWPASSKENABLED_S16_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASSK_S16_reset(x,iv);                                     \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_S16_compute(x,in,K,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASSK_S16(x,in,K);                                         \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_S16_out(x)               LOWPASSK_S16_out(x)

/* S8-LowpassKEnabled */
#define LOWPASSKENABLED_S8_reset(x,iv,ie)                                     \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASSK_S8_reset(x,iv);                                      \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_S8_compute(x,in,K,e)                                  \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASSK_S8(x,in,K);                                          \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_S8_out(x)                LOWPASSK_S8_out(x)

/* U16-LowpassKEnabled */
#define LOWPASSKENABLED_U16_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASSK_U16_reset(x,iv);                                     \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_U16_compute(x,in,K,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASSK_U16(x,in,K);                                         \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_U16_out(x)               LOWPASSK_U16_out(x)

/* U8-LowpassKEnabled */
#define LOWPASSKENABLED_U8_reset(x,iv,ie)                                     \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASSK_U8_reset(x,iv);                                      \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_U8_compute(x,in,K,e)                                  \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASSK_U8(x,in,K);                                          \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_U8_out(x)                LOWPASSK_U8_out(x)

/* U8-LowpassKEnabled */
#define LOWPASSKENABLED_R32_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (iv));                                     \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_R32_compute(x,in,K,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LowPassK_R32(&((x)->memory), (in), (K));                  \
            }                                                                 \
        } while(0)
#define LOWPASSKENABLED_R32_out(x)               ((x)->memory)

/*********************************************************************************/
/* LowpassT                                                                      */
/*********************************************************************************/

/* S16-LowpassT */
#define LOWPASST_S16(x,in,T)                                                  \
        LowPassT_S16(&((x)->memory), (sint16)(in), (uint16)(T))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASST_S16_reset(x,iv)                 ((x)->memory = (sint32)(((sint32)(iv))<<16))
#define LOWPASST_S16_compute(x,in,T)             LOWPASST_S16(x,in,T)
#define LOWPASST_S16_out(x)                      ((sint16)(((x)->memory)>>16))

/* S8-LowpassT */
#define LOWPASST_S8(x,in,T)                                                   \
        LowPassT_S8(&((x)->memory), (sint8)(in), (uint8)(T))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASST_S8_reset(x,iv)                  ((x)->memory = (sint16)(((sint16)(iv))<<8))
#define LOWPASST_S8_compute(x,in,T)              LOWPASST_S8(x,in,T)
#define LOWPASST_S8_out(x)                       ((sint8)(((x)->memory)>>8))

/* U16-LowpassT */
#define LOWPASST_U16(x,in,T)                                                  \
        LowPassT_U16(&((x)->memory), (uint16)(in), (uint16)(T))
/* IGNORE RULE 0278:The warning makes no sens */
#define LOWPASST_U16_reset(x,iv)                 ((x)->memory = (uint32)(((uint32)(iv))<<16))
#define LOWPASST_U16_compute(x,in,T)             LOWPASST_U16(x,in,T)
#define LOWPASST_U16_out(x)                      ((uint16)(((x)->memory)>>16))

/* U8-LowpassT */
#define LOWPASST_U8(x,in,T)                                                   \
        LowPassT_U8(&((x)->memory), (uint8)(in), (uint8)(T))
#define LOWPASST_U8_reset(x,iv)                  ((x)->memory = (uint16)(((uint16)(iv))<<8))
#define LOWPASST_U8_compute(x,in,T)              LOWPASST_U8(x,in,T)
#define LOWPASST_U8_out(x)                       ((uint8)(((x)->memory)>>8))

/* R32-LowpassT */
#define LOWPASST_R32_reset(x,iv)                 ((x)->memory = (iv))
#define LOWPASST_R32_compute(x,in,T)             LowPassT_R32(&((x)->memory), (in), (T))
#define LOWPASST_R32_out(x)                      ((x)->memory)

/* KS16-LowpassT mapped to K */
#define LOWPASST_KS16_reset(x,iv)                LOWPASSK_S16_reset(x,iv)
#define LOWPASST_KS16_compute(x,in,K)            LOWPASSK_S16_compute(x,in,K)
#define LOWPASST_KS16_out(x)                     LOWPASSK_S16_out(x)
/* KS8-LowpassT mapped to K */
#define LOWPASST_KS8_reset(x,iv)                 LOWPASSK_S8_reset(x,iv)
#define LOWPASST_KS8_compute(x,in,K)             LOWPASSK_S8_compute(x,in,K)
#define LOWPASST_KS8_out(x)                      LOWPASSK_S8_out(x)

/* KU16-LowpassT mapped to K */
#define LOWPASST_KU16_reset(x,iv)                LOWPASSK_U16_reset(x,iv)
#define LOWPASST_KU16_compute(x,in,K)            LOWPASSK_U16_compute(x,in,K)
#define LOWPASST_KU16_out(x)                     LOWPASSK_U16_out(x)

/* KU8-LowpassT mapped to K */
#define LOWPASST_KU8_reset(x,iv)                 LOWPASSK_U8_reset(x,iv)
#define LOWPASST_KU8_compute(x,in,K)             LOWPASSK_U8_compute(x,in,K)
#define LOWPASST_KU8_out(x)                      LOWPASSK_U8_out(x)

/*********************************************************************************/
/* LowpassTEnabled                                                               */
/*********************************************************************************/

/* S16-LowpassTEnabled */
#define LOWPASSTENABLED_S16_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASST_S16_reset(x,iv);                                     \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_S16_compute(x,in,T,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASST_S16(x,in,T);                                         \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_S16_out(x)               LOWPASST_S16_out(x)

/* S8-LowpassTEnabled */
#define LOWPASSTENABLED_S8_reset(x,iv,ie)                                     \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASST_S8_reset(x,iv);                                      \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_S8_compute(x,in,T,e)                                  \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASST_S8(x,in,T);                                          \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_S8_out(x)                LOWPASST_S8_out(x)

/* U16-LowpassTEnabled */
#define LOWPASSTENABLED_U16_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASST_U16_reset(x,iv);                                     \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_U16_compute(x,in,T,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASST_U16(x,in,T);                                         \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_U16_out(x)               LOWPASST_U16_out(x)

/* U8-LowpassTEnabled */
#define LOWPASSTENABLED_U8_reset(x,iv,ie)                                     \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                LOWPASST_U8_reset(x,iv);                                      \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_U8_compute(x,in,T,e)                                  \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LOWPASST_U8(x,in,T);                                          \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_U8_out(x)                LOWPASST_U8_out(x)

/* U8-LowpassTEnabled */
#define LOWPASSTENABLED_R32_reset(x,iv,ie)                                    \
        do                                                                    \
        {                                                                     \
            if((ie))                                                          \
            {                                                                 \
                ((x)->memory = (iv));                                     \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_R32_compute(x,in,T,e)                                 \
        do                                                                    \
        {                                                                     \
            if((e))                                                           \
            {                                                                 \
                LowPassT_R32(&((x)->memory), (in), (T));                  \
            }                                                                 \
        } while(0)
#define LOWPASSTENABLED_R32_out(x)               ((x)->memory)

/* KS16-LowpassTEnabled mapped to K */
#define LOWPASSTENABLED_KS16_reset(x,iv,ie)      LOWPASSKENABLED_S16_reset(x,iv,ie)
#define LOWPASSTENABLED_KS16_compute(x,in,K,e)   LOWPASSKENABLED_S16_compute(x,in,K,e)
#define LOWPASSTENABLED_KS16_out(x)              LOWPASSKENABLED_S16_out(x)

/* KS8-LowpassTEnabled mapped to K */
#define LOWPASSTENABLED_KS8_reset(x,iv,ie)       LOWPASSKENABLED_S8_reset(x,iv,ie)
#define LOWPASSTENABLED_KS8_compute(x,in,K,e)    LOWPASSKENABLED_S8_compute(x,in,K,e)
#define LOWPASSTENABLED_KS8_out(x)               LOWPASSKENABLED_S8_out(x)

/* KU16-LowpassTEnabled mapped to K */
#define LOWPASSTENABLED_KU16_reset(x,iv,ie)      LOWPASSKENABLED_U16_reset(x,iv,ie)
#define LOWPASSTENABLED_KU16_compute(x,in,K,e)   LOWPASSKENABLED_U16_compute(x,in,K,e)
#define LOWPASSTENABLED_KU16_out(x)              LOWPASSKENABLED_U16_out(x)

/* KU8-LowpassTEnabled mapped to K */
#define LOWPASSTENABLED_KU8_reset(x,iv,ie)       LOWPASSKENABLED_U8_reset(x,iv,ie)
#define LOWPASSTENABLED_KU8_compute(x,in,K,e)    LOWPASSKENABLED_U8_compute(x,in,K,e)
#define LOWPASSTENABLED_KU8_out(x)               LOWPASSKENABLED_U8_out(x)

/*********************************************************************************/
/* Srv_PT1                                                                       */
/*********************************************************************************/

/* U8-Srv_PT1 */
#define SRV_PT1_U8                               SrvX_PT1U8_State_t
#define SRV_PT1_U8_setState(ptr,state)           SrvX_PT1SetState(&((ptr)->State),state)
#define SRV_PT1_U8_out(ptr,x,T1,Dt)              SrvX_PT1U8(x,&((ptr)->State),T1,Dt)
#define SRV_PT1_U8_outState(ptr)                 ((uint8)SrvX_PT1Out((ptr)->State))

/* U8ToInvert-Srv_PT1 */
#define SRV_PT1_U8TOINVERT                       SrvX_PT1U8TOINVERT_State_t
#define SRV_PT1_U8TOINVERT_setState(ptr,state)   SrvX_PT1SetState(&((ptr)->State),state)
#define SRV_PT1_U8TOINVERT_out(ptr,x,T1,Dt)      SrvX_PT1U8((x),&((ptr)->State),((T1)>0?(uint32)0xffffffff/(T1):((uint32)0xffffffff)),(Dt))
#define SRV_PT1_U8TOINVERT_outState(ptr)         ((uint8)SrvX_PT1Out((ptr)->State))

/* S16-Srv_PT1 */
#define SRV_PT1_S16                              SrvX_PT1S16_State_t
#define SRV_PT1_S16_setState(ptr,state)          SrvX_PT1SetState(&((ptr)->State),state)
#define SRV_PT1_S16_out(ptr,x,T1,Dt)             SrvX_PT1S16(x,&((ptr)->State),T1,Dt)
#define SRV_PT1_S16_outState(ptr)                ((sint16)SrvX_PT1Out((ptr)->State))

/* S16ToInvert-Srv_PT1 */
#define SRV_PT1_S16TOINVERT                      SrvX_PT1S16TOINVERT_State_t
#define SRV_PT1_S16TOINVERT_setState(ptr,state)  SrvX_PT1SetState(&((ptr)->State),state)
#define SRV_PT1_S16TOINVERT_out(ptr,x,T1,Dt)     SrvX_PT1S16(x,&((ptr)->State),((T1)>0?(uint32)0xffffffff/(T1):(uint32)0xffffffff),(Dt))
#define SRV_PT1_S16TOINVERT_outState(ptr)        ((sint16)SrvX_PT1Out((ptr)->State))

/*********************************************************************************/
/* SrvF_PT1                                                                      */
/*********************************************************************************/

#define _SRVF_PT1PARAM_T_REAL_                   PROTECT_TYPEDEF
#define SRVF_PT1PARAM_T_REAL                     SrvF_PT1Param_t

#define _SRVF_PT1PARAM_T_REALTIMEDT_                   PROTECT_TYPEDEF
#define SRVF_PT1PARAM_T_REALTIMEDT                     SrvF_PT1Param_t

#define SRVF_PT1_REAL_setState(ptr, Val)         SrvF_PT1Init(Val, &((ptr)->State))
#define SRVF_PT1_REALTIMEDT_setState(ptr, Val)         SrvF_PT1Init(Val, &((ptr)->State))

#define SRVF_PT1PARAM_T_REAL_SetT1(ptr,Time)     (((ptr)->T1_C)=(Time))
#define SRVF_PT1PARAM_T_REALTIMEDT_SetT1(ptr,Time)     (((ptr)->T1_C)=(Time*1000000))

#define SRVF_PT1_REAL_out(ptr,x,T1,Dt)           (SrvF_PT1((x),(T1),(&((ptr)->State)),(real32)(Dt)/1000000))
#define SRVF_PT1_REALTIMEDT_out(ptr,x,T1,Dt)           (SrvF_PT1((x),(T1),(&((ptr)->State)),(real32)(Dt)))
/*********************************************************************************/
/* Srv_PWin                                                                      */
/*********************************************************************************/

/* S16-Srv_PWin */
#define SRV_PWIN_S16_out(x,param_ptr)            SrvX_PWinS16(x,param_ptr)

/* R32-Srv_PWin */
#define SRV_PWIN_REAL_out(x,param_ptr)           SrvF_PWin(x,param_ptr)
#define SRV_PWIN_REALTIMEDT_out(x,param_ptr)           SrvF_PWin(x,param_ptr)

/*********************************************************************************/
/* Srv_PWinParam                                                                 */
/*********************************************************************************/

/* S32-Srv_PWinParamT */
#define _SRV_PWINPARAM_T_S32_                    PROTECT_TYPEDEF
#define SRV_PWINPARAM_T_S32                      SrvX_PWinParam_t
#define SRV_PWINPARAM_T_S32_setKp(ptr,Kp,KpPos,KpNeg)   SrvX_PWinSetKp(ptr,Kp,KpPos,KpNeg)
#define SRV_PWINPARAM_T_S32_setWin(ptr,WinPos,WinNeg)   SrvX_PWinSetWin(ptr,WinPos,WinNeg)

/* R32-Srv_PWinParamT */
#define _SRV_PWINPARAM_T_REAL_                   PROTECT_TYPEDEF
#define SRV_PWINPARAM_T_REAL                     SrvF_PWinParam_t
#define SRV_PWINPARAM_T_REAL_setKp(ptr,Kp,KpPos,KpNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->Kp_C    = (Kp);                                            \
            (ptr)->KpPos_C = (KpPos);                                         \
            (ptr)->KpNeg_C = (KpNeg);                                         \
        } while(0)
#define SRV_PWINPARAM_T_REAL_setWin(ptr,WinPos,WinNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)
		
#define _SRV_PWINPARAM_T_REALTIMEDT_                   PROTECT_TYPEDEF
#define SRV_PWINPARAM_T_REALTIMEDT                     SrvF_PWinParam_t
#define SRV_PWINPARAM_T_REALTIMEDT_setKp(ptr,Kp,KpPos,KpNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->Kp_C    = (Kp);                                            \
            (ptr)->KpPos_C = (KpPos);                                         \
            (ptr)->KpNeg_C = (KpNeg);                                         \
        } while(0)
#define SRV_PWINPARAM_T_REALTIMEDT_setWin(ptr,WinPos,WinNeg)                        \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)

/*********************************************************************************/
/* Srv_DT1                                                                       */
/*********************************************************************************/

/* S16-Srv_DT1 */
#define _SRV_DT1_S16_                            PROTECT_TYPEDEF
#define SRV_DT1_S16                              SrvX_DT1State_t
#define SRV_DT1_S16_setState(ptr,x0,y0)          SrvX_DT1SetState(ptr,x0,y0)
#define SRV_DT1_S16_outState(ptr)                SrvX_DT1Out(ptr)
#define SRV_DT1_S16_out(ptr,x,param,Dt)          SrvX_DT1S16(x,ptr,param,Dt)

/* S16ToInvert-Srv_DT1 */
#define _SRV_DT1_S16TOINVERT_                    PROTECT_TYPEDEF
#define SRV_DT1_S16TOINVERT                      SrvX_DT1State_t
#define SRV_DT1_S16TOINVERT_setState(ptr,x0,y0)  SrvX_DT1SetState(ptr,x0,y0)
#define SRV_DT1_S16TOINVERT_outState(ptr)        SrvX_DT1Out(ptr)
#define SRV_DT1_S16TOINVERT_out(ptr,x,param,Dt)  SrvX_DT1S16(x,ptr,param,Dt)

/* R32-Srv_DT1 */
#define _SRV_DT1_REAL_                           PROTECT_TYPEDEF
#define SRV_DT1_REAL                             SrvF_DT1State_t
#define SRV_DT1_REAL_setState(ptr,x0,y0)         SrvF_DT1Init(x0,y0,ptr)
#define SRV_DT1_REAL_outState(ptr)               ((ptr)->Y)
#define SRV_DT1_REAL_out(ptr,x,param,Dt)         SrvF_DT1((x),(param),(ptr),((real32)(Dt)/1000000))

#define _SRV_DT1_REALTIMEDT_                           PROTECT_TYPEDEF
#define SRV_DT1_REALTIMEDT                             SrvF_DT1State_t
#define SRV_DT1_REALTIMEDT_setState(ptr,x0,y0)         SrvF_DT1Init(x0,y0,ptr)
#define SRV_DT1_REALTIMEDT_outState(ptr)               ((ptr)->Y)
#define SRV_DT1_REALTIMEDT_out(ptr,x,param,Dt)         SrvF_DT1((x),(param),(ptr),((real32)(Dt)))

/*********************************************************************************/
/* Srv_DT1Param                                                                  */
/*********************************************************************************/

/* S32-DT1Param */
#define SRV_DT1PARAM_T_S32                       SrvX_DT1Param_t
#define _SRV_DT1PARAM_T_S32_                     PROTECT_TYPEDEF
#define SRV_DT1PARAM_T_S32_setParam(ptr,T1,Kd)   SrvX_DT1SetParam((ptr),(T1),(Kd))

/* S32ToInvert-DT1Param */
#define SRV_DT1PARAM_T_S32TOINVERT               SrvX_DT1Param_t
#define _SRV_DT1PARAM_T_S32TOINVERT_             PROTECT_TYPEDEF
#define SRV_DT1PARAM_T_S32TOINVERT_setParam(ptr,T1,Kd) SrvX_DT1SetParam((ptr),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)),(Kd))

/* R32-DT1Param */
#define SRV_DT1PARAM_T_REAL                      SrvF_DT1Param_t
#define _SRV_DT1PARAM_T_REAL_                    PROTECT_TYPEDEF
#define SRV_DT1PARAM_T_REAL_setParam(ptr,T1,Kd)                               \
        do                                                                    \
        {                                                                     \
            (ptr)->T1_C = (T1);                                               \
            (ptr)->Kd_C = (Kd);                                               \
        } while(0)
		
#define SRV_DT1PARAM_T_REALTIMEDT                      SrvF_DT1Param_t
#define _SRV_DT1PARAM_T_REALTIMEDT_                    PROTECT_TYPEDEF
#define SRV_DT1PARAM_T_REALTIMEDT_setParam(ptr,T1,Kd)                               \
        do                                                                    \
        {                                                                     \
            (ptr)->T1_C = (T1*1000000);                                               \
            (ptr)->Kd_C = (Kd);                                               \
        } while(0)

/*********************************************************************************/
/* Srv_DT1Win                                                                    */
/*********************************************************************************/

/* S16-Srv_DT1Win */
#define _SRV_DT1WIN_S16_                         PROTECT_TYPEDEF
#define SRV_DT1WIN_S16                           SrvX_DT1WinState_t
#define SRV_DT1WIN_S16_setState(ptr,x0,y0)       SrvX_DT1WinSetState(ptr,x0,y0)
#define SRV_DT1WIN_S16_outState(ptr)             SrvX_DT1WinOut(ptr)
#define SRV_DT1WIN_S16_out(ptr,x,param,Dt)       SrvX_DT1WinS16(x,ptr,param,Dt)

/* S16ToInvert-Srv_DT1Win */
#define _SRV_DT1WIN_S16TOINVERT_                 PROTECT_TYPEDEF
#define SRV_DT1WIN_S16TOINVERT                   SrvX_DT1WinState_t
#define SRV_DT1WIN_S16TOINVERT_setState(ptr,x0,y0) SrvX_DT1WinSetState(ptr,x0,y0)
#define SRV_DT1WIN_S16TOINVERT_outState(ptr)     SrvX_DT1WinOut(ptr)
#define SRV_DT1WIN_S16TOINVERT_out(ptr,x,param,Dt) SrvX_DT1WinS16(x,ptr,param,Dt)

/* R32-Srv_DT1Win */
#define _SRV_DT1WIN_REAL_                        PROTECT_TYPEDEF
#define SRV_DT1WIN_REAL                          SrvF_DT1WinState_t
#define SRV_DT1WIN_REAL_setState(ptr,x0,y0)      SrvF_DT1WinInit(x0,y0,ptr)
#define SRV_DT1WIN_REAL_outState(ptr)            ((ptr)->Y)
#define SRV_DT1WIN_REAL_out(ptr,x,param,Dt)      SrvF_DT1Win((x),(param),(ptr),((real32)(Dt)/1000000))


#define _SRV_DT1WIN_REALTIMEDT_                        PROTECT_TYPEDEF
#define SRV_DT1WIN_REALTIMEDT                          SrvF_DT1WinState_t
#define SRV_DT1WIN_REALTIMEDT_setState(ptr,x0,y0)      SrvF_DT1WinInit(x0,y0,ptr)
#define SRV_DT1WIN_REALTIMEDT_outState(ptr)            ((ptr)->Y)
#define SRV_DT1WIN_REALTIMEDT_out(ptr,x,param,Dt)      SrvF_DT1Win((x),(param),(ptr),((real32)(Dt)))

/*********************************************************************************/
/* Srv_DT1WinParam                                                               */
/*********************************************************************************/

/* S32-DT1WinParam */
#define _SRV_DT1WINPARAM_T_S32_                  PROTECT_TYPEDEF
#define SRV_DT1WINPARAM_T_S32                    SrvX_DT1WinParam_t
#define SRV_DT1WINPARAM_T_S32_setKdT1(ptr,Kd,KdPos,KdNeg,T1) SrvX_DT1WinSetKDT1(ptr,Kd,KdPos,KdNeg,T1)
#define SRV_DT1WINPARAM_T_S32_setWin(ptr,WinPos,WinNeg)             SrvX_DT1WinSetWin(ptr,WinPos,WinNeg)

/* S32ToInvert-DT1WinParam */
#define _SRV_DT1WINPARAM_T_S32TOINVERT_          PROTECT_TYPEDEF
#define SRV_DT1WINPARAM_T_S32TOINVERT            SrvX_DT1WinParam_t
#define SRV_DT1WINPARAM_T_S32TOINVERT_setKdT1(ptr,Kd,KdPos,KdNeg,T1) SrvX_DT1WinSetKDT1((ptr),(Kd),(KdPos),(KdNeg),((T1)>0?((uint32)0xffffffff/(T1)):((uint32)0xffffffff)))
#define SRV_DT1WINPARAM_T_S32TOINVERT_setWin(ptr,WinPos,WinNeg)     SrvX_DT1WinSetWin(ptr,WinPos,WinNeg)

/* R32-DT1WinParam */
#define _SRV_DT1WINPARAM_T_REAL_                 PROTECT_TYPEDEF
#define SRV_DT1WINPARAM_T_REAL                   SrvF_DT1WinParam_t
#define SRV_DT1WINPARAM_T_REAL_setKdT1(ptr,Kd,KdPos,KdNeg,T1)                 \
        do                                                                    \
        {                                                                     \
            (ptr)->Kd_C    = (Kd);                                            \
            (ptr)->KdPos_C = (KdPos);                                         \
            (ptr)->KdNeg_C = (KdNeg);                                         \
            (ptr)->T1_C    = (T1);                                            \
        } while(0)
#define SRV_DT1WINPARAM_T_REAL_setWin(ptr,WinPos,WinNeg)                      \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)

		
#define _SRV_DT1WINPARAM_T_REALTIMEDT_                 PROTECT_TYPEDEF
#define SRV_DT1WINPARAM_T_REALTIMEDT                   SrvF_DT1WinParam_t
#define SRV_DT1WINPARAM_T_REALTIMEDT_setKdT1(ptr,Kd,KdPos,KdNeg,T1)                 \
        do                                                                    \
        {                                                                     \
            (ptr)->Kd_C    = (Kd);                                            \
            (ptr)->KdPos_C = (KdPos);                                         \
            (ptr)->KdNeg_C = (KdNeg);                                         \
            (ptr)->T1_C    = (T1*1000000);                                            \
        } while(0)
#define SRV_DT1WINPARAM_T_REALTIMEDT_setWin(ptr,WinPos,WinNeg)                      \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)

/*********************************************************************************/
/* Srv_DT1Ctrl                                                                   */
/*********************************************************************************/

/* S16-DT1Ctrl */
#define SRV_DT1CTRL_S16                          SrvX_DT1CtrlState_t
#define _SRV_DT1CTRL_S16_                        PROTECT_TYPEDEF
#define SRV_DT1CTRL_S16_setState(ptr, x0, y0)    SrvX_DT1CtrlSetState(ptr, x0, y0)
#define SRV_DT1CTRL_S16_outState(ptr)            SrvX_DT1CtrlOut(ptr)
#define SRV_DT1CTRL_S16_out(ptr,x,param,Dt)      SrvX_DT1CtrlS16(x,ptr,param,Dt)

/* S16ToInvert-DT1Ctrl */
#define SRV_DT1CTRL_S16TOINVERT                  SrvX_DT1CtrlState_t
#define _SRV_DT1CTRL_S16TOINVERT_                PROTECT_TYPEDEF
#define SRV_DT1CTRL_S16TOINVERT_setState(ptr, x0, y0) SrvX_DT1CtrlSetState(ptr, x0, y0)
#define SRV_DT1CTRL_S16TOINVERT_outState(ptr)    SrvX_DT1CtrlOut(ptr)
#define SRV_DT1CTRL_S16TOINVERT_out(ptr,x,param,Dt) SrvX_DT1CtrlS16(x,ptr,param,Dt)

/*********************************************************************************/
/* Srv_DT1CtrlParam                                                              */
/*********************************************************************************/

/* S32-DT1CtrlParam */
#define SRV_DT1CTRLPARAM_T_S32                   SrvX_DT1CtrlParam_t
#define _SRV_DT1CTRLPARAM_T_S32_                 PROTECT_TYPEDEF
#define SRV_DT1CTRLPARAM_T_S32_setParam(ptr,T1Arg,KdArg) SrvX_DT1CtrlSetParam(ptr,T1Arg,KdArg)

/* R32-DT1CtrlParam */
#define SRV_DT1CTRLPARAM_T_S32TOINVERT           SrvX_DT1CtrlParam_t
#define _SRV_DT1CTRLPARAM_T_S32TOINVERT_         PROTECT_TYPEDEF
#define SRV_DT1CTRLPARAM_T_S32TOINVERT_setParam(ptr,T1Arg,KdArg) SrvX_DT1CtrlSetParam((ptr),((T1Arg)>0?((uint32)0xffffffff/(T1Arg)):((uint32)0xffffffff)),(KdArg))

/*********************************************************************************/
/* SrvF_PDT1                                                                     */
/*********************************************************************************/

#define SRVF_PDT1_REAL                           SrvF_PDT1State_t
#define _SRVF_PDT1_REAL_                         PROTECTED_TYPEDEF
#define SRVF_PDT1_REAL_setState(ptr, x0, y0)     SrvF_PDT1Init(x0, y0, ptr)
#define SRVF_PDT1_REAL_out(ptr, x, param, Dt)    SrvF_PDT1((x), (param), (ptr), (Dt))

#define SRVF_PDT1_REALTIMEDT                           SrvF_PDT1State_t
#define _SRVF_PDT1_REALTIMEDT_                         PROTECTED_TYPEDEF
#define SRVF_PDT1_REALTIMEDT_setState(ptr, x0, y0)     SrvF_PDT1Init(x0, y0, ptr)
#define SRVF_PDT1_REALTIMEDT_out(ptr, x, param, Dt)    SrvF_PDT1((x), (param), (ptr), (real32)(Dt))

/*********************************************************************************/
/* Srv_PDT1Param                                                                 */
/*********************************************************************************/

#define SRV_PDT1PARAM_T_REAL                     SrvF_PDT1Param_t
#define _SRV_PDT1PARAM_T_REAL_                   PROTECTED_TYPEDEF
#define SRV_PDT1PARAM_T_REAL_setParam(ptr,T1Arg, KdArg)                       \
        do                                                                    \
        {                                                                     \
            (ptr)->T1_C = (T1Arg);                                            \
            (ptr)->Kd_C = (KdArg);                                            \
        } while(0)
		
#define SRV_PDT1PARAM_T_REALTIMEDT                     SrvF_PDT1Param_t
#define _SRV_PDT1PARAM_T_REALTIMEDT_                   PROTECTED_TYPEDEF
#define SRV_PDT1PARAM_T_REALTIMEDT_setParam(ptr,T1Arg, KdArg)                       \
        do                                                                    \
        {                                                                     \
            (ptr)->T1_C = (T1Arg*1000000);                                            \
            (ptr)->Kd_C = (KdArg);                                            \
        } while(0)

/*********************************************************************************/
/* SrvF_PDT1Win                                                                  */
/*********************************************************************************/

#define SRVF_PDT1WIN_REAL                        SrvF_PDT1WinState_t
#define _SRVF_PDT1WIN_REAL_                      PROTECTED_TYPEDEF
#define SRVF_PDT1WIN_REAL_setState(ptr, x0, y0)  SrvF_PDT1Win_Init(x0, y0, ptr)
#define SRVF_PDT1WIN_REAL_out(ptr, x, param, Dt) SrvF_PDT1Win(x, param, ptr, Dt)

#define SRVF_PDT1WIN_REALTIMEDT                        SrvF_PDT1WinState_t
#define _SRVF_PDT1WIN_REALTIMEDT_                      PROTECTED_TYPEDEF
#define SRVF_PDT1WIN_REALTIMEDT_setState(ptr, x0, y0)  SrvF_PDT1Win_Init(x0, y0, ptr)
#define SRVF_PDT1WIN_REALTIMEDT_out(ptr, x, param, Dt) SrvF_PDT1Win(x, param, ptr,(real32)Dt)

/*********************************************************************************/
/* Srv_PDT1WinParam                                                              */
/*********************************************************************************/

#define SRV_PDT1WINPARAM_T_REAL                  SrvF_PDT1WinParam_t
#define _SRV_PDT1WINPARAM_T_REAL_                PROTECTED_TYPEDEF
#define SRV_PDT1WINPARAM_T_REAL_setKdT1(ptr, Kd, KdPos, KdNeg, T1 )           \
        do                                                                    \
        {                                                                     \
            (ptr)->Kd_C    = (Kd);                                            \
            (ptr)->KdPos_C = (KdPos);                                         \
            (ptr)->KdNeg_C = (KdNeg);                                         \
            (ptr)->T1_C    = (T1);                                            \
        } while(0)
#define SRV_PDT1WINPARAM_T_REAL_setWin(ptr, WinPos, WinNeg)                   \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)

		
#define SRV_PDT1WINPARAM_T_REALTIMEDT                  SrvF_PDT1WinParam_t
#define _SRV_PDT1WINPARAM_T_REALTIMEDT_                PROTECTED_TYPEDEF
#define SRV_PDT1WINPARAM_T_REALTIMEDT_setKdT1(ptr, Kd, KdPos, KdNeg, T1 )           \
        do                                                                    \
        {                                                                     \
            (ptr)->Kd_C    = (Kd);                                            \
            (ptr)->KdPos_C = (KdPos);                                         \
            (ptr)->KdNeg_C = (KdNeg);                                         \
            (ptr)->T1_C    = (T1*1000000);                                            \
        } while(0)
		
#define SRV_PDT1WINPARAM_T_REALTIMEDT_setWin(ptr, WinPos, WinNeg)                   \
        do                                                                    \
        {                                                                     \
            (ptr)->WinPos_C = (WinPos);                                       \
            (ptr)->WinNeg_C = (WinNeg);                                       \
        } while(0)
/*********************************************************************************/
/* Srv_PIWin                                                                     */
/*********************************************************************************/

#define _SRV_PIWIN_S16_                          PROTECT_TYPEDEF
#define SRV_PIWIN_S16                            SrvX_PIWinState_t
#define SRV_PIWIN_S16_out(ptr,x,pv,pparam,iparam,limits,dt) SrvX_PIWinS16(x,pv,pparam,iparam,limits,ptr,dt)
#define SRV_PIWIN_S16_init(ptr, val)             SrvX_PIInit(val, ptr)

#define _SRV_PIWIN_REAL_                         PROTECT_TYPEDEF
#define SRV_PIWIN_REAL                           SrvF_PIWinState_t
#define SRV_PIWIN_REAL_out(ptr,x,pv,pparam,iparam,limits,dt) SrvF_PIWin(x,pv,pparam,iparam,limits,ptr,dt)
#define SRV_PIWIN_REAL_init(ptr, val)            SrvF_PIInit(val, ptr)

#define _SRV_PIWIN_REALTIMEDT_                         PROTECT_TYPEDEF
#define SRV_PIWIN_REALTIMEDT                           SrvF_PIWinState_t
#define SRV_PIWIN_REALTIMEDT_out(ptr,x,pv,pparam,iparam,limits,dt) SrvF_PIWin(x,pv,pparam,iparam,limits,ptr,((real32)dt/1000000))
#define SRV_PIWIN_REALTIMEDT_init(ptr, val)            SrvF_PIInit(val, ptr)

/*********************************************************************************/
/* Srv_LimitParam                                                                */
/*********************************************************************************/

#define _SRV_LIMITPARAM_T_S32_                   PROTECT_TYPEDEF
#define SRV_LIMITPARAM_T_S32                     SrvX_LimitParam_t
#define SRV_LIMITPARAM_T_S32_Setparam(param, MinVal, MaxVal)                  \
        do                                                                    \
        {                                                                     \
            (param)->Min_C = (MinVal);                                        \
            (param)->Max_C = (MaxVal);                                        \
        } while(0)

#define _SRV_LIMITPARAM_T_REAL_                  PROTECT_TYPEDEF
#define SRV_LIMITPARAM_T_REAL                    SrvF_LimitParam_t
#define SRV_LIMITPARAM_T_REAL_Setparam(param, MinVal, MaxVal)                 \
        do                                                                    \
        {                                                                     \
            (param)->Min_C = (MinVal);                                        \
            (param)->Max_C = (MaxVal);                                        \
        } while(0)
		
#define _SRV_LIMITPARAM_T_REALTIMEDT_                  PROTECT_TYPEDEF
#define SRV_LIMITPARAM_T_REALTIMEDT                    SrvF_LimitParam_t
#define SRV_LIMITPARAM_T_REALTIMEDT_Setparam(param, MinVal, MaxVal)                 \
        do                                                                    \
        {                                                                     \
            (param)->Min_C = (MinVal);                                        \
            (param)->Max_C = (MaxVal);                                        \
        } while(0)

/*********************************************************************************/
/* Elements from ASLA (technology migration)                                     */
/*********************************************************************************/

/*********************************************************************************/
/* Limits                                                                        */
/*********************************************************************************/

/* R32-Limits */
#ifndef _LIMITS_T_R32_
#define _LIMITS_T_R32_
typedef struct
{
   real32 Max_C;
   real32 Min_C;
}LIMITS_T_R32;
#endif /* _LIMITS_T_R32_ */

#ifndef _LIMITS_T_R32TIMEDT_
#define _LIMITS_T_R32TIMEDT_
typedef struct
{
   real32 Max_C;
   real32 Min_C;
}LIMITS_T_R32TIMEDT;
#endif /* _LIMITS_T_R32TIMEDT_ */

INLINE_FUNCTION void LIMITS_T_R32_setParam(LIMITS_T_R32 * const Limits_cpst, real32 Min_r32, real32 Max_r32);
INLINE_FUNCTION void LIMITS_T_R32_setParam(LIMITS_T_R32 * const Limits_cpst, real32 Min_r32, real32 Max_r32)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_CtrlSetLimit(&SrvF_Limits, (Min_r32), (Max_r32));

    Limits_cpst->Min_C = SrvF_Limits.Min_C;
    Limits_cpst->Max_C = SrvF_Limits.Max_C;
}

INLINE_FUNCTION void LIMITS_T_R32TIMEDT_setParam(LIMITS_T_R32TIMEDT * const Limits_cpst, real32 Min_r32, real32 Max_r32);
INLINE_FUNCTION void LIMITS_T_R32TIMEDT_setParam(LIMITS_T_R32TIMEDT * const Limits_cpst, real32 Min_r32, real32 Max_r32)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_CtrlSetLimit(&SrvF_Limits, (Min_r32), (Max_r32));

    Limits_cpst->Min_C = SrvF_Limits.Min_C;
    Limits_cpst->Max_C = SrvF_Limits.Max_C;
}

/* S32-Limits */
#ifndef _LIMITS_T_S32_
#define _LIMITS_T_S32_
typedef struct
{
   sint32 Max_C;
   sint32 Min_C;

}LIMITS_T_S32;
#endif /* _LIMITS_T_S32_ */

INLINE_FUNCTION void LIMITS_T_S32_setParam(LIMITS_T_S32 * const Limits_cpst, sint32 Min_s32, sint32 Max_s32);
INLINE_FUNCTION void LIMITS_T_S32_setParam(LIMITS_T_S32 * const Limits_cpst, sint32 Min_s32, sint32 Max_s32)
{
  SrvX_Limits_t SrvX_Limits;

  SrvX_Limits.Min_C = Limits_cpst->Min_C;
  SrvX_Limits.Max_C = Limits_cpst->Max_C;

  SrvX_CtrlSetLimit(&SrvX_Limits, (Min_s32), (Max_s32));

  Limits_cpst->Min_C = SrvX_Limits.Min_C;
  Limits_cpst->Max_C = SrvX_Limits.Max_C;
}

/*********************************************************************************/
/* PD_Param                                                                      */
/*********************************************************************************/

/* R32-PD_Param */
#define _PD_PARAM_T_R32_                         PROTECT_TYPEDEF
#define PD_PARAM_T_R32                           SrvF_ParamPD_t
#define PD_PARAM_T_R32_setParam(ptr, kp, tv)     SrvF_PDSetParam((ptr), (kp), (tv))

#define _PD_PARAM_T_R32TIMEDT_                         PROTECT_TYPEDEF
#define PD_PARAM_T_R32TIMEDT                           SrvF_ParamPD_t
#define PD_PARAM_T_R32TIMEDT_setParam(ptr, kp, tv)     SrvF_PDSetParam((ptr), (kp), (tv*1000000))

/* S32-PD_Param */
#define _PD_PARAM_T_S32_                         PROTECT_TYPEDEF
#define PD_PARAM_T_S32                           SrvX_ParamPD_t
#define PD_PARAM_T_S32_setParam(ptr, kp, tv)     SrvX_PDSetParam((ptr), (kp), (tv))

/*********************************************************************************/
/* PI_Param                                                                      */
/*********************************************************************************/

/* R32-PI_Param */
#define _PI_PARAM_T_R32_                         PROTECT_TYPEDEF
#define PI_PARAM_T_R32                           SrvF_ParamPI_t
#define PI_PARAM_T_R32_setParam(ptr, kp, tn)     SrvF_PISetParam((ptr), (kp), tn)

#define _PI_PARAM_T_R32TIMEDT_                         PROTECT_TYPEDEF
#define PI_PARAM_T_R32TIMEDT                           SrvF_ParamPI_t
#define PI_PARAM_T_R32TIMEDT_setParam(ptr, kp, tn)     SrvF_PISetParam((ptr), (kp), tn*1000000)

/* S32-PI_Param */
#define _PI_PARAM_T_S32_                         PROTECT_TYPEDEF
#define PI_PARAM_T_S32                           SrvX_ParamPI_t
#define PI_PARAM_T_S32_setParam(ptr, kp, tn)     SrvX_PISetParam((ptr), (kp), (tn))

/*********************************************************************************/
/* PID_Param                                                                     */
/*********************************************************************************/

/* R32-PID_Param */
#ifndef _PID_PARAM_T_R32_
#define _PID_PARAM_T_R32_
typedef struct
{
    real32 Kp_C;
    real32 Tn_C;
    real32 Tv_C;
} PID_PARAM_T_R32;
#endif /* _PID_PARAM_T_R32_ */

INLINE_FUNCTION void PID_PARAM_T_R32_setParam(PID_PARAM_T_R32 * const Param_cpst, real32 Kp, real32 Tv, real32 Tn);
INLINE_FUNCTION void PID_PARAM_T_R32_setParam(PID_PARAM_T_R32 * const Param_cpst, real32 Kp, real32 Tv, real32 Tn)

{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDSetParam(&SrvF_Param_t, (Kp), (Tv), (Tn));

    Param_cpst->Kp_C  =  SrvF_Param_t.Kp_C;
    Param_cpst->Tn_C  =  SrvF_Param_t.Tn_C;
    Param_cpst->Tv_C  =  SrvF_Param_t.Tv_C;
}

#ifndef _PID_PARAM_T_R32TIMEDT_
#define _PID_PARAM_T_R32TIMEDT_
typedef struct
{
    real32 Kp_C;
    real32 Tn_C;
    real32 Tv_C;
} PID_PARAM_T_R32TIMEDT;
#endif /* _PID_PARAM_T_R32TIMEDT_ */

INLINE_FUNCTION void PID_PARAM_T_R32TIMEDT_setParam(PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 Kp, real32 Tv, real32 Tn);
INLINE_FUNCTION void PID_PARAM_T_R32TIMEDT_setParam(PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 Kp, real32 Tv, real32 Tn)

{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDSetParam(&SrvF_Param_t, (Kp), (Tv*1000000), (Tn*1000000));

    Param_cpst->Kp_C  =  SrvF_Param_t.Kp_C;
    Param_cpst->Tn_C  =  SrvF_Param_t.Tn_C;
    Param_cpst->Tv_C  =  SrvF_Param_t.Tv_C;
}

/* S32-PID_Param */
#ifndef _PID_PARAM_T_S32_
#define _PID_PARAM_T_S32_
typedef struct
{
    sint32 Kp_C;
    sint32 Tn_C;
    sint32 Tv_C;
} PID_PARAM_T_S32;
#endif /* _PID_PARAM_T_S32_ */

INLINE_FUNCTION void PID_PARAM_T_S32_setParam(PID_PARAM_T_S32 * const Param_cpst, sint32 Kp, sint32 Tv, sint32 Tn);
INLINE_FUNCTION void PID_PARAM_T_S32_setParam(PID_PARAM_T_S32 * const Param_cpst, sint32 Kp, sint32 Tv, sint32 Tn)
{
    SrvX_ParamPID_t SrvX_Param_t;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_PIDSetParam((&SrvX_Param_t), (Kp), (Tv), (Tn));

    Param_cpst->Kp_C  =  SrvX_Param_t.Kp_C;
    Param_cpst->Tn_C  =  SrvX_Param_t.Tn_C;
    Param_cpst->Tv_C  =  SrvX_Param_t.Tv_C;
}

/*********************************************************************************/
/* I                                                                             */
/*********************************************************************************/

/* R32-I */
#define _I_R32_                                  PROTECT_TYPEDEF
#define I_R32                                    SrvF_StateI_t

#define I_R32_calc(ptr, x, ki, Dt)               SrvF_ICalc((x), (ptr), (ki), (Dt))
#define I_R32_out(ptr)                           SrvF_IOut_R32((ptr))
#define I_R32_setState(ptr, x, y)                SrvF_ISetState((ptr), (x), (y))

#define _I_R32TIMEDT_                                  PROTECT_TYPEDEF
#define I_R32TIMEDT                                    SrvF_StateI_t

#define I_R32TIMEDT_calc(ptr, x, ki, Dt)               SrvF_ICalc((x), (ptr), (ki), ((real32)Dt/1000000))
#define I_R32TIMEDT_out(ptr)                           SrvF_IOut_R32((ptr))
#define I_R32TIMEDT_setState(ptr, x, y)                SrvF_ISetState((ptr), (x), (y))

/* S32S8-I */
#define _I_S32S8_                                PROTECT_TYPEDEF
#define I_S32S8                                  SrvX_StateI_t

#define I_S32S8_calc(ptr, x, ki, Dt)             SrvX_ICalc((x), (ptr), (ki), (Dt))
#define I_S32S8_out(ptr)                         SrvX_IOut_S8((ptr))
#define I_S32S8_setState(ptr, x, y)              SrvX_ISetState((ptr), (x), (y))

/* S32S16-I */
#define _I_S32S16_                               PROTECT_TYPEDEF
#define I_S32S16                                 SrvX_StateI_t

#define I_S32S16_calc(ptr, x, ki, Dt)            SrvX_ICalc((x), (ptr), (ki), (Dt))
#define I_S32S16_out(ptr)                        SrvX_IOut_S16((ptr))
#define I_S32S16_setState(ptr, x, y)             SrvX_ISetState((ptr), (x), (y))

/*********************************************************************************/
/* ILim                                                                          */
/*********************************************************************************/

/* R32-ILim */
#define _ILIM_R32_                               PROTECT_TYPEDEF
#define ILIM_R32                                 SrvF_StateI_t

INLINE_FUNCTION void ILIM_R32_calc(ILIM_R32 * const ILim, real32 x, real32 ki, const LIMITS_T_R32 * const Limits, real32 tiSampling);
INLINE_FUNCTION void ILIM_R32_calc(ILIM_R32 * const ILim, real32 x, real32 ki, const LIMITS_T_R32 * const Limits, real32 tiSampling)
{
  SrvF_Limits_t SrvF_Limits;

  SrvF_Limits.Min_C = Limits->Min_C;
  SrvF_Limits.Max_C = Limits->Max_C;

  SrvF_ILimCalc((x), (ILim), (ki), (&SrvF_Limits), (tiSampling));
}

#define ILIM_R32_out(ptr)                        SrvF_IOut_R32((ptr))
#define ILIM_R32_setState(ptr, x, y)             SrvF_ISetState((ptr), (x), (y))

#define _ILIM_R32TIMEDT_                               PROTECT_TYPEDEF
#define ILIM_R32TIMEDT                                 SrvF_StateI_t

INLINE_FUNCTION void ILIM_R32TIMEDT_calc(ILIM_R32TIMEDT * const ILim, real32 x, real32 ki, const LIMITS_T_R32TIMEDT * const Limits, real32 tiSampling);
INLINE_FUNCTION void ILIM_R32TIMEDT_calc(ILIM_R32TIMEDT * const ILim, real32 x, real32 ki, const LIMITS_T_R32TIMEDT * const Limits, real32 tiSampling)
{
  SrvF_Limits_t SrvF_Limits;

  SrvF_Limits.Min_C = Limits->Min_C;
  SrvF_Limits.Max_C = Limits->Max_C;

  SrvF_ILimCalc((x), (ILim), (ki), (&SrvF_Limits), (tiSampling/1000000));
}

#define ILIM_R32TIMEDT_out(ptr)                        SrvF_IOut_R32((ptr))
#define ILIM_R32TIMEDT_setState(ptr, x, y)             SrvF_ISetState((ptr), (x), (y))

/* S32S8-ILim */
#define _ILIM_S32S8_                             PROTECT_TYPEDEF
#define ILIM_S32S8                               SrvX_StateI_t

INLINE_FUNCTION void ILIM_S32S8_calc(ILIM_S32S8 * const ILim, sint32 x, sint32 ki, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void ILIM_S32S8_calc(ILIM_S32S8 * const ILim, sint32 x, sint32 ki, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
  SrvX_Limits_t SrvX_Limits;

  SrvX_Limits.Min_C = Limits_cpst->Min_C;
  SrvX_Limits.Max_C = Limits_cpst->Max_C;

  SrvX_ILimCalc((x), (ILim), (ki), (&SrvX_Limits), (tiSampling));
}

#define ILIM_S32S8_out(ptr)                      SrvX_IOut_S8((ptr))
#define ILIM_S32S8_setState(ptr, x, y)           SrvX_ISetState((ptr), (x), (y))

/* S32S16-ILim */
#define _ILIM_S32S16_                            PROTECT_TYPEDEF
#define ILIM_S32S16                              SrvX_StateI_t

INLINE_FUNCTION void ILIM_S32S16_calc(ILIM_S32S16 * const ILim, sint32 x, sint32 ki, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void ILIM_S32S16_calc(ILIM_S32S16 * const ILim, sint32 x, sint32 ki, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
  SrvX_Limits_t SrvX_Limits;

  SrvX_Limits.Min_C = Limits_cpst->Min_C;
  SrvX_Limits.Max_C = Limits_cpst->Max_C;

  SrvX_ILimCalc((x), (ILim), (ki), (&SrvX_Limits), (tiSampling));
}

#define ILIM_S32S16_out(ptr)                     SrvX_IOut_S16((ptr))
#define ILIM_S32S16_setState(ptr, x, y)          SrvX_ISetState((ptr), (x), (y))

/*********************************************************************************/
/* P                                                                             */
/*********************************************************************************/

/* R32-P */
#define P_R32_calc(ptr, x, kp)                   SrvF_PCalc((x), &((ptr)->Y1), (kp))
#define P_R32_out(ptr)                           SrvF_POut_R32(&((ptr)->Y1))
#define P_R32_setState(ptr, in)                  (((ptr)->Y1) = (in))

/* S32S8-P */
#define P_S32S8_calc(ptr, x, kp)                 SrvX_PCalc((x), &((ptr)->Y1), (kp))
#define P_S32S8_out(ptr)                         SrvX_POut_S8(&((ptr)->Y1))
#define P_S32S8_setState(ptr, in)                SrvX_PSetState(&((ptr)->Y1), (in))

/* S32S16-P */
#define P_S32S16_calc(ptr, x, kp)                SrvX_PCalc((x), &((ptr)->Y1), (kp))
#define P_S32S16_out(ptr)                        SrvX_POut_S16(&((ptr)->Y1))
#define P_S32S16_setState(ptr, in)               SrvX_PSetState(&((ptr)->Y1), (in))

/*********************************************************************************/
/* PD                                                                            */
/*********************************************************************************/

/* R32-PD */
#define _PD_R32_                                 PROTECT_TYPEDEF
#define PD_R32                                   SrvF_StatePD_t

#define PD_R32_calc(ptr, x, param, Dt)           SrvF_PDCalc((x), (ptr), (param), (Dt))
#define PD_R32_out(ptr)                          SrvF_PDOut_R32((ptr))
#define PD_R32_setState(ptr, x, y)               SrvF_PDSetState((ptr), (x), (y))

#define _PD_R32TIMEDT_                           PROTECT_TYPEDEF
#define PD_R32TIMEDT                                   SrvF_StatePD_t

#define PD_R32TIMEDT_calc(ptr, x, param, Dt)           SrvF_PDCalc((x), (ptr), (param), ((real32)Dt))
#define PD_R32TIMEDT_out(ptr)                          SrvF_PDOut_R32((ptr))
#define PD_R32TIMEDT_setState(ptr, x, y)               SrvF_PDSetState((ptr), (x), (y))

/* S32S8-PD */
#define _PD_S32S8_                               PROTECT_TYPEDEF
#define PD_S32S8                                 SrvX_StatePD_t

#define PD_S32S8_calc(ptr, x, param, Dt)         SrvX_PDCalc((x), (ptr), (param), (Dt))
#define PD_S32S8_out(ptr)                        SrvX_PDOut_S8((ptr))
#define PD_S32S8_setState(ptr, x, y)             SrvX_PDSetState((ptr), (x), (y))

/* S32S16-PD */
#define _PD_S32S16_                              PROTECT_TYPEDEF
#define PD_S32S16                                SrvX_StatePD_t

#define PD_S32S16_calc(ptr, x, param, Dt)        SrvX_PDCalc((x), (ptr), (param), (Dt))
#define PD_S32S16_out(ptr)                       SrvX_PDOut_S16((ptr))
#define PD_S32S16_setState(ptr, x, y)            SrvX_PDSetState((ptr), (x), (y))

/*********************************************************************************/
/* PITyp1                                                                        */
/*********************************************************************************/

/* R32-PITyp1 */
#define _PITYP1_R32_                             PROTECT_TYPEDEF
#define PITYP1_R32                               SrvF_StatePI_t

#define PITYP1_R32_calc(ptr, x, param, Dt)       SrvF_PITyp1Calc((x), (ptr), (param), (Dt))
#define PITYP1_R32_out(ptr)                      SrvF_PIOut_R32((ptr))
#define PITYP1_R32_setState(ptr, x, y)           SrvF_PISetState((ptr), (x), (y))

#define _PITYP1_R32TIMEDT_                             PROTECT_TYPEDEF
#define PITYP1_R32TIMEDT                               SrvF_StatePI_t

#define PITYP1_R32TIMEDT_calc(ptr, x, param, Dt)       SrvF_PITyp1Calc((x), (ptr), (param), ((real32)Dt))
#define PITYP1_R32TIMEDT_out(ptr)                      SrvF_PIOut_R32((ptr))
#define PITYP1_R32TIMEDT_setState(ptr, x, y)           SrvF_PISetState((ptr), (x), (y))

/* S32S8-PITyp1 */
#define _PITYP1_S32S8_                           PROTECT_TYPEDEF
#define PITYP1_S32S8                             SrvX_StatePI_t

#define PITYP1_S32S8_calc(ptr, x, param, Dt)     SrvX_PITyp1Calc((x), (ptr), (param), (Dt))
#define PITYP1_S32S8_out(ptr)                    SrvX_PIOut_S8((ptr))
#define PITYP1_S32S8_setState(ptr, x, y)         SrvX_PISetState((ptr), (x), (y))

/* S32S16-PITyp1 */
#define _PITYP1_S32S16_                          PROTECT_TYPEDEF
#define PITYP1_S32S16                            SrvX_StatePI_t

#define PITYP1_S32S16_calc(ptr, x, param, Dt)    SrvX_PITyp1Calc((x), (ptr), (param), (Dt))
#define PITYP1_S32S16_out(ptr)                   SrvX_PIOut_S16((ptr))
#define PITYP1_S32S16_setState(ptr, x, y)        SrvX_PISetState((ptr), (x), (y))

/*********************************************************************************/
/* PILimTyp1                                                                     */
/*********************************************************************************/

/* R32-PILimTyp1 */
#define _PILIMTYP1_R32_                          PROTECT_TYPEDEF
#define PILIMTYP1_R32                            SrvF_StatePI_t

INLINE_FUNCTION void PILIMTYP1_R32_calc(PILIMTYP1_R32 * const PILimTyp1, real32 x, const PI_PARAM_T_R32 * const ParamPI, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PILIMTYP1_R32_calc(PILIMTYP1_R32 * const PILimTyp1, real32 x, const PI_PARAM_T_R32 * const ParamPI, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PILimTyp1Calc((x), (PILimTyp1), (ParamPI), (&SrvF_Limits), (tiSampling));
}

#define PILIMTYP1_R32_out(ptr)                   SrvF_PIOut_R32((ptr))
#define PILIMTYP1_R32_setState(ptr, x, y)        SrvF_PISetState((ptr), (x), (y))

#define _PILIMTYP1_R32TIMEDT_                          PROTECT_TYPEDEF
#define PILIMTYP1_R32TIMEDT                            SrvF_StatePI_t

INLINE_FUNCTION void PILIMTYP1_R32TIMEDT_calc(PILIMTYP1_R32TIMEDT * const PILimTyp1, real32 x, const PI_PARAM_T_R32TIMEDT * const ParamPI, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PILIMTYP1_R32TIMEDT_calc(PILIMTYP1_R32TIMEDT * const PILimTyp1, real32 x, const PI_PARAM_T_R32TIMEDT * const ParamPI, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PILimTyp1Calc((x), (PILimTyp1), (ParamPI), (&SrvF_Limits), (tiSampling));
}

#define PILIMTYP1_R32TIMEDT_out(ptr)                   SrvF_PIOut_R32((ptr))
#define PILIMTYP1_R32TIMEDT_setState(ptr, x, y)        SrvF_PISetState((ptr), (x), (y))

/* S32S8-PILimTyp1 */
#define _PILIMTYP1_S32S8_                        PROTECT_TYPEDEF
#define PILIMTYP1_S32S8                          SrvX_StatePI_t

INLINE_FUNCTION void PILIMTYP1_S32S8_calc(PILIMTYP1_S32S8 * const PILimTyp1, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PILIMTYP1_S32S8_calc(PILIMTYP1_S32S8 * const PILimTyp1, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_Limits_t SrvX_Limits;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PILimTyp1Calc((x), (PILimTyp1), (ParamPI), (&SrvX_Limits), (tiSampling));
}

#define PILIMTYP1_S32S8_out(ptr)                 SrvX_PIOut_S8((ptr))
#define PILIMTYP1_S32S8_setState(ptr, x, y)      SrvX_PISetState((ptr), (x), (y))

/* S32S16-PILimTyp1 */
#define _PILIMTYP1_S32S16_                       PROTECT_TYPEDEF
#define PILIMTYP1_S32S16                         SrvX_StatePI_t

INLINE_FUNCTION void PILIMTYP1_S32S16_calc(PILIMTYP1_S32S16 * const PILimTyp1, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PILIMTYP1_S32S16_calc(PILIMTYP1_S32S16 * const PILimTyp1, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_Limits_t SrvX_Limits;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PILimTyp1Calc((x), (PILimTyp1), (ParamPI), (&SrvX_Limits), (tiSampling));
}

#define PILIMTYP1_S32S16_out(ptr)                SrvX_PIOut_S16((ptr))
#define PILIMTYP1_S32S16_setState(ptr, x, y)     SrvX_PISetState((ptr), (x), (y))

/*********************************************************************************/
/* PITyp2                                                                        */
/*********************************************************************************/

/* R32-PITyp2 */
#define _PITYP2_R32_                             PROTECT_TYPEDEF
#define PITYP2_R32                               SrvF_StatePI_t

#define PITYP2_R32_calc(ptr, x, param, Dt)       SrvF_PITyp2Calc((x), (ptr), (param), (Dt))
#define PITYP2_R32_out(ptr)                      SrvF_PIOut_R32((ptr))
#define PITYP2_R32_setState(ptr, x, y)           SrvF_PISetState((ptr), (x), (y))

#define _PITYP2_R32TIMEDT_                             PROTECT_TYPEDEF
#define PITYP2_R32TIMEDT                               SrvF_StatePI_t

#define PITYP2_R32TIMEDT_calc(ptr, x, param, Dt)       SrvF_PITyp2Calc((x), (ptr), (param), ((real32)Dt))
#define PITYP2_R32TIMEDT_out(ptr)                      SrvF_PIOut_R32((ptr))
#define PITYP2_R32TIMEDT_setState(ptr, x, y)           SrvF_PISetState((ptr), (x), (y))

/* S32S8-PITyp2 */
#define _PITYP2_S32S8_                           PROTECT_TYPEDEF
#define PITYP2_S32S8                             SrvX_StatePI_t

#define PITYP2_S32S8_calc(ptr, x, param, Dt)     SrvX_PITyp2Calc((x), (ptr), (param), (Dt))
#define PITYP2_S32S8_out(ptr)                    SrvX_PIOut_S8((ptr))
#define PITYP2_S32S8_setState(ptr, x, y)         SrvX_PISetState((ptr), (x), (y))

/* S32S16-PITyp2 */
#define _PITYP2_S32S16_                          PROTECT_TYPEDEF
#define PITYP2_S32S16                            SrvX_StatePI_t

#define PITYP2_S32S16_calc(ptr, x, param, Dt)    SrvX_PITyp2Calc((x), (ptr), (param), (Dt))
#define PITYP2_S32S16_out(ptr)                   SrvX_PIOut_S16((ptr))
#define PITYP2_S32S16_setState(ptr, x, y)        SrvX_PISetState((ptr), (x), (y))

/*********************************************************************************/
/* PILimTyp2                                                                     */
/*********************************************************************************/

/* R32-PILimTyp1 */
#define _PILIMTYP2_R32_                          PROTECT_TYPEDEF
#define PILIMTYP2_R32                            SrvF_StatePI_t

INLINE_FUNCTION void PILIMTYP2_R32_calc(PILIMTYP2_R32 * const PILimTyp2, real32 x, const PI_PARAM_T_R32 * const ParamPI, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PILIMTYP2_R32_calc(PILIMTYP2_R32 * const PILimTyp2, real32 x, const PI_PARAM_T_R32 * const ParamPI, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PILimTyp2Calc((x), (PILimTyp2), (ParamPI), (&SrvF_Limits), (tiSampling));
}

#define PILIMTYP2_R32_out(ptr)                   SrvF_PIOut_R32((ptr))
#define PILIMTYP2_R32_setState(ptr, x, y)        SrvF_PISetState((ptr), (x), (y))

#define _PILIMTYP2_R32TIMEDT_                          PROTECT_TYPEDEF
#define PILIMTYP2_R32TIMEDT                            SrvF_StatePI_t

INLINE_FUNCTION void PILIMTYP2_R32TIMEDT_calc(PILIMTYP2_R32TIMEDT * const PILimTyp2, real32 x, const PI_PARAM_T_R32TIMEDT * const ParamPI, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PILIMTYP2_R32TIMEDT_calc(PILIMTYP2_R32TIMEDT * const PILimTyp2, real32 x, const PI_PARAM_T_R32TIMEDT * const ParamPI, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling)
{
    SrvF_Limits_t SrvF_Limits;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PILimTyp2Calc((x), (PILimTyp2), (ParamPI), (&SrvF_Limits), (tiSampling));
}

#define PILIMTYP2_R32TIMEDT_out(ptr)                   SrvF_PIOut_R32((ptr))
#define PILIMTYP2_R32TIMEDT_setState(ptr, x, y)        SrvF_PISetState((ptr), (x), (y))

/* S32S8-PILimTyp2 */
#define _PILIMTYP2_S32S8_                        PROTECT_TYPEDEF
#define PILIMTYP2_S32S8                          SrvX_StatePI_t

INLINE_FUNCTION void PILIMTYP2_S32S8_calc(PILIMTYP2_S32S8 * const PILimTyp2, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PILIMTYP2_S32S8_calc(PILIMTYP2_S32S8 * const PILimTyp2, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_Limits_t SrvX_Limits;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PILimTyp2Calc((x), (PILimTyp2), (ParamPI), (&SrvX_Limits), (tiSampling));
}

#define PILIMTYP2_S32S8_out(ptr)                 SrvX_PIOut_S8((ptr))
#define PILIMTYP2_S32S8_setState(ptr, x, y)      SrvX_PISetState((ptr), (x), (y))

/* S32S16-PILimTyp2 */
#define _PILIMTYP2_S32S16_                       PROTECT_TYPEDEF
#define PILIMTYP2_S32S16                         SrvX_StatePI_t

INLINE_FUNCTION void PILIMTYP2_S32S16_calc(PILIMTYP2_S32S16 * const PILimTyp2, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PILIMTYP2_S32S16_calc(PILIMTYP2_S32S16 * const PILimTyp2, sint32 x, const PI_PARAM_T_S32 * const ParamPI, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_Limits_t SrvX_Limits;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PILimTyp2Calc((x), (PILimTyp2), (ParamPI), (&SrvX_Limits), (tiSampling));
}

#define PILIMTYP2_S32S16_out(ptr)                SrvX_PIOut_S16((ptr))
#define PILIMTYP2_S32S16_setState(ptr, x, y)     SrvX_PISetState((ptr), (x), (y))

/*********************************************************************************/
/* PIDTyp1                                                                       */
/*********************************************************************************/

/* R32-PIDTyp1 */
#define _PIDTYP1_R32_                            PROTECT_TYPEDEF
#define PIDTYP1_R32                              SrvF_StatePID_t

INLINE_FUNCTION void PIDTYP1_R32_calc(PIDTYP1_R32 * const PIDTyp1, real32 x, const PID_PARAM_T_R32 * const Param_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDTYP1_R32_calc(PIDTYP1_R32 * const PIDTyp1, real32 x, const PID_PARAM_T_R32 * const Param_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDTyp1Calc((x), (PIDTyp1), (&SrvF_Param_t), (tiSampling));
}

#define PIDTYP1_R32_out(ptr)                     SrvF_PIDOut_R32((ptr))
#define PIDTYP1_R32_setState(ptr, x1, x2, y1)    SrvF_PIDSetState((ptr), (x1), (x2), (y1))


#define _PIDTYP1_R32TIMEDT_                            PROTECT_TYPEDEF
#define PIDTYP1_R32TIMEDT                              SrvF_StatePID_t

INLINE_FUNCTION void PIDTYP1_R32TIMEDT_calc(PIDTYP1_R32TIMEDT * const PIDTyp1, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDTYP1_R32TIMEDT_calc(PIDTYP1_R32TIMEDT * const PIDTyp1, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDTyp1Calc((x), (PIDTyp1), (&SrvF_Param_t), (tiSampling));
}

#define PIDTYP1_R32TIMEDT_out(ptr)                     SrvF_PIDOut_R32((ptr))
#define PIDTYP1_R32TIMEDT_setState(ptr, x1, x2, y1)    SrvF_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S8-PIDTyp1 */
#define _PIDTYP1_S32S8_                          PROTECT_TYPEDEF
#define PIDTYP1_S32S8                            SrvX_StatePID_t

INLINE_FUNCTION void PIDTYP1_S32S8_calc(PIDTYP1_S32S8 * const PIDTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDTYP1_S32S8_calc(PIDTYP1_S32S8 * const PIDTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_PIDTyp1Calc((x), (PIDTyp1), (&SrvX_Param_t), (tiSampling));
}

#define PIDTYP1_S32S8_out(ptr)                   SrvX_PIDOut_S8((ptr))
#define PIDTYP1_S32S8_setState(ptr, x1, x2, y1)  SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S16-PIDTyp1 */
#define _PIDTYP1_S32S16_                         PROTECT_TYPEDEF
#define PIDTYP1_S32S16                           SrvX_StatePID_t

INLINE_FUNCTION void PIDTYP1_S32S16_calc(PIDTYP1_S32S16 * const PIDTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDTYP1_S32S16_calc(PIDTYP1_S32S16 * const PIDTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_PIDTyp1Calc((x), (PIDTyp1), (&SrvX_Param_t), (tiSampling));
}

#define PIDTYP1_S32S16_out(ptr)                  SrvX_PIDOut_S16((ptr))
#define PIDTYP1_S32S16_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/*********************************************************************************/
/* PIDLimTyp1                                                                    */
/*********************************************************************************/

/* R32-PIDLimTyp1 */
#define _PIDLIMTYP1_R32_                         PROTECT_TYPEDEF
#define PIDLIMTYP1_R32                           SrvF_StatePID_t

INLINE_FUNCTION void PIDLIMTYP1_R32_calc(PIDTYP1_R32 * const PIDLimTyp1, real32 x, const PID_PARAM_T_R32 * const Param_cpst, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP1_R32_calc(PIDTYP1_R32 * const PIDLimTyp1, real32 x, const PID_PARAM_T_R32 * const Param_cpst, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;
    SrvF_Limits_t SrvF_Limits;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PIDLimTyp1Calc((x), (PIDLimTyp1), (&SrvF_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP1_R32_out(ptr)                  SrvF_PIDOut_R32((ptr))
#define PIDLIMTYP1_R32_setState(ptr, x1, x2, y1) SrvF_PIDSetState((ptr), (x1), (x2), (y1))

#define _PIDLIMTYP1_R32TIMEDT_                         PROTECT_TYPEDEF
#define PIDLIMTYP1_R32TIMEDT                           SrvF_StatePID_t

INLINE_FUNCTION void PIDLIMTYP1_R32TIMEDT_calc(PIDTYP1_R32TIMEDT  * const PIDLimTyp1, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP1_R32TIMEDT_calc(PIDTYP1_R32TIMEDT  * const PIDLimTyp1, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;
    SrvF_Limits_t SrvF_Limits;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PIDLimTyp1Calc((x), (PIDLimTyp1), (&SrvF_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP1_R32TIMEDT_out(ptr)                  SrvF_PIDOut_R32((ptr))
#define PIDLIMTYP1_R32TIMEDT_setState(ptr, x1, x2, y1) SrvF_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S8-PIDLimTyp1 */
#define _PIDLIMTYP1_S32S8_                       PROTECT_TYPEDEF
#define PIDLIMTYP1_S32S8                         SrvX_StatePID_t

INLINE_FUNCTION void PIDLIMTYP1_S32S8_calc(PIDTYP1_S32S8 * const PIDLimTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP1_S32S8_calc(PIDTYP1_S32S8 * const PIDLimTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;
    SrvX_Limits_t SrvF_Limits;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PIDLimTyp1Calc((x), (PIDLimTyp1), (&SrvX_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP1_S32S8_out(ptr)                SrvX_PIDOut_S8((ptr))
#define PIDLIMTYP1_S32S8_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S16-PIDLimTyp1 */
#define _PIDLIMTYP1_S32S16_                      PROTECT_TYPEDEF
#define PIDLIMTYP1_S32S16                        SrvX_StatePID_t

INLINE_FUNCTION void PIDLIMTYP1_S32S16_calc(PIDTYP1_S32S16 * const PIDLimTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP1_S32S16_calc(PIDTYP1_S32S16 * const PIDLimTyp1, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;
    SrvX_Limits_t SrvF_Limits;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PIDLimTyp1Calc((x), (PIDLimTyp1), (&SrvX_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP1_S32S16_out(ptr)               SrvX_PIDOut_S16((ptr))
#define PIDLIMTYP1_S32S16_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/*********************************************************************************/
/* PIDTyp2                                                                       */
/*********************************************************************************/

/* R32-PIDTyp2 */
#define _PIDTYP2_R32_                            PROTECT_TYPEDEF
#define PIDTYP2_R32                              SrvF_StatePID_t

INLINE_FUNCTION void PIDTYP2_R32_calc(PIDTYP2_R32 * const PIDTyp2, real32 x, const PID_PARAM_T_R32 * const Param_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDTYP2_R32_calc(PIDTYP2_R32 * const PIDTyp2, real32 x, const PID_PARAM_T_R32 * const Param_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDTyp2Calc((x), (PIDTyp2), (&SrvF_Param_t), (tiSampling));
}

#define PIDTYP2_R32_out(ptr)                     SrvF_PIDOut_R32((ptr))
#define PIDTYP2_R32_setState(ptr, x1, x2, y1)    SrvF_PIDSetState((ptr), (x1), (x2), (y1))

#define _PIDTYP2_R32TIMEDT_                            PROTECT_TYPEDEF
#define PIDTYP2_R32TIMEDT                              SrvF_StatePID_t

INLINE_FUNCTION void PIDTYP2_R32TIMEDT_calc(PIDTYP2_R32TIMEDT * const PIDTyp2, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDTYP2_R32TIMEDT_calc(PIDTYP2_R32TIMEDT * const PIDTyp2, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_PIDTyp2Calc((x), (PIDTyp2), (&SrvF_Param_t), (tiSampling));
}

#define PIDTYP2_R32TIMEDT_out(ptr)                     SrvF_PIDOut_R32((ptr))
#define PIDTYP2_R32TIMEDT_setState(ptr, x1, x2, y1)    SrvF_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S8-PIDTyp2 */
#define _PIDTYP2_S32S8_                          PROTECT_TYPEDEF
#define PIDTYP2_S32S8                            SrvX_StatePID_t

INLINE_FUNCTION void PIDTYP2_S32S8_calc(PIDTYP2_S32S8 * const PIDTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDTYP2_S32S8_calc(PIDTYP2_S32S8 * const PIDTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_PIDTyp2Calc((x), (PIDTyp2), (&SrvX_Param_t), (tiSampling));
}

#define PIDTYP2_S32S8_out(ptr)                   SrvX_PIDOut_S8((ptr))
#define PIDTYP2_S32S8_setState(ptr, x1, x2, y1)  SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S16-PIDTyp2 */
#define _PIDTYP2_S32S16_                         PROTECT_TYPEDEF
#define PIDTYP2_S32S16                           SrvX_StatePID_t

INLINE_FUNCTION void PIDTYP2_S32S16_calc(PIDTYP2_S32S16 * const PIDTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDTYP2_S32S16_calc(PIDTYP2_S32S16 * const PIDTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_PIDTyp2Calc((x), (PIDTyp2), (&SrvX_Param_t), (tiSampling));
}

#define PIDTYP2_S32S16_out(ptr)                  SrvX_PIDOut_S16((ptr))
#define PIDTYP2_S32S16_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/*********************************************************************************/
/* PIDLimTyp2                                                                    */
/*********************************************************************************/

/* R32-PIDLimTyp2 */
#define _PIDLIMTYP2_R32_                         PROTECT_TYPEDEF
#define PIDLIMTYP2_R32                           SrvF_StatePID_t

INLINE_FUNCTION void PIDLIMTYP2_R32_calc(PIDTYP2_R32 * const PIDLimTyp2, real32 x, const PID_PARAM_T_R32 * const Param_cpst, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP2_R32_calc(PIDTYP2_R32 * const PIDLimTyp2, real32 x, const PID_PARAM_T_R32 * const Param_cpst, const LIMITS_T_R32 * const Limits_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;
    SrvF_Limits_t SrvF_Limits;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PIDLimTyp2Calc((x), (PIDLimTyp2), (&SrvF_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP2_R32_out(ptr)                  SrvF_PIDOut_R32((ptr))
#define PIDLIMTYP2_R32_setState(ptr, x1, x2, y1) SrvF_PIDSetState((ptr), (x1), (x2), (y1))

#define _PIDLIMTYP2_R32TIMEDT_                         PROTECT_TYPEDEF
#define PIDLIMTYP2_R32TIMEDT                           SrvF_StatePID_t

INLINE_FUNCTION void PIDLIMTYP2_R32TIMEDT_calc(PIDTYP2_R32TIMEDT * const PIDLimTyp2, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP2_R32TIMEDT_calc(PIDTYP2_R32TIMEDT * const PIDLimTyp2, real32 x, const PID_PARAM_T_R32TIMEDT * const Param_cpst, const LIMITS_T_R32TIMEDT * const Limits_cpst, real32 tiSampling)
{
    SrvF_ParamPID_t SrvF_Param_t;
    SrvF_Limits_t SrvF_Limits;

    SrvF_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvF_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvF_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvF_Limits.Min_C = Limits_cpst->Min_C;
    SrvF_Limits.Max_C = Limits_cpst->Max_C;

    SrvF_PIDLimTyp2Calc((x), (PIDLimTyp2), (&SrvF_Param_t), (&SrvF_Limits), (tiSampling));
}

#define PIDLIMTYP2_R32TIMEDT_out(ptr)                  SrvF_PIDOut_R32((ptr))
#define PIDLIMTYP2_R32TIMEDT_setState(ptr, x1, x2, y1) SrvF_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S8-PIDLimTyp2 */
#define _PIDLIMTYP2_S32S8_                       PROTECT_TYPEDEF
#define PIDLIMTYP2_S32S8                         SrvX_StatePID_t

INLINE_FUNCTION void PIDLIMTYP2_S32S8_calc(PIDTYP2_S32S8 * const PIDLimTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP2_S32S8_calc(PIDTYP2_S32S8 * const PIDLimTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;
    SrvX_Limits_t SrvX_Limits;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PIDLimTyp2Calc((x), (PIDLimTyp2), (&SrvX_Param_t), (&SrvX_Limits), (tiSampling));
}
#define PIDLIMTYP2_S32S8_out(ptr)                SrvX_PIDOut_S8((ptr))
#define PIDLIMTYP2_S32S8_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/* S32S16-PIDLimTyp2 */
#define _PIDLIMTYP2_S32S16_                      PROTECT_TYPEDEF
#define PIDLIMTYP2_S32S16                        SrvX_StatePID_t

INLINE_FUNCTION void PIDLIMTYP2_S32S16_calc(PIDTYP2_S32S16 * const PIDLimTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling);
INLINE_FUNCTION void PIDLIMTYP2_S32S16_calc(PIDTYP2_S32S16 * const PIDLimTyp2, sint32 x, const PID_PARAM_T_S32 * const Param_cpst, const LIMITS_T_S32 * const Limits_cpst, sint32 tiSampling)
{
    SrvX_ParamPID_t SrvX_Param_t;
    SrvX_Limits_t SrvX_Limits;

    SrvX_Param_t.Kp_C = Param_cpst->Kp_C;
    SrvX_Param_t.Tn_C = Param_cpst->Tn_C;
    SrvX_Param_t.Tv_C = Param_cpst->Tv_C;

    SrvX_Limits.Min_C = Limits_cpst->Min_C;
    SrvX_Limits.Max_C = Limits_cpst->Max_C;

    SrvX_PIDLimTyp2Calc((x), (PIDLimTyp2), (&SrvX_Param_t), (&SrvX_Limits), (tiSampling));
}

#define PIDLIMTYP2_S32S16_out(ptr)               SrvX_PIDOut_S16((ptr))
#define PIDLIMTYP2_S32S16_setState(ptr, x1, x2, y1) SrvX_PIDSetState((ptr), (x1), (x2), (y1))

/*********************************************************************************/
/* PT1                                                                           */
/*********************************************************************************/

/* R32-PT1 */
#define _PT1_R32_                                PROTECT_TYPEDEF
#define PT1_R32                                  SrvF_StatePT1_t

#define PT1_R32_calc(ptr, x, kp, teq)            SrvF_PT1Calc((x), (ptr), (kp), (teq))
#define PT1_R32_out(ptr)                         SrvF_PT1Out_R32((ptr))
#define PT1_R32_setState(ptr, x, y)              SrvF_PT1SetState((ptr), (x), (y))

/* SS32S8-PT1 */
#define _PT1_S32S8_                              PROTECT_TYPEDEF
#define PT1_S32S8                                SrvX_StatePT1_t

#define PT1_S32S8_calc(ptr, x, kp, teq)          SrvX_PT1Calc((x), (ptr), (kp), (teq))
#define PT1_S32S8_out(ptr)                       SrvX_PT1Out_S8((ptr))
#define PT1_S32S8_setState(ptr, x, y)            SrvX_CtrlPT1SetState((ptr), (x), (y))

/* SS32S16-PT1 */
#define _PT1_S32S16_                             PROTECT_TYPEDEF
#define PT1_S32S16                               SrvX_StatePT1_t

#define PT1_S32S16_calc(ptr, x, kp, teq)         SrvX_PT1Calc((x), (ptr), (kp), (teq))
#define PT1_S32S16_out(ptr)                      SrvX_PT1Out_S16((ptr))
#define PT1_S32S16_setState(ptr, x, y)           SrvX_CtrlPT1SetState((ptr), (x), (y))

/*********************************************************************************/
/* DT1Typ1                                                                       */
/*********************************************************************************/

/* R32-DT1Typ1 */
#define _DT1TYP1_R32_                            PROTECT_TYPEDEF
#define DT1TYP1_R32                              SrvF_StateDT1Typ1_t

#define DT1TYP1_R32_setState(ptr, x1, x2, y1)    SrvF_DT1Typ1SetState((ptr), (x1), (x2), (y1))
#define DT1TYP1_R32_calc(ptr, x, kd, teq, Dt)    SrvF_DT1Typ1Calc((x), (ptr), (kd), (teq), (Dt))
#define DT1TYP1_R32_out(ptr)                     SrvF_DT1Typ1Out_R32((ptr))

#define _DT1TYP1_R32TIMEDT_                            PROTECT_TYPEDEF
#define DT1TYP1_R32TIMEDT                              SrvF_StateDT1Typ1_t

#define DT1TYP1_R32TIMEDT_setState(ptr, x1, x2, y1)    SrvF_DT1Typ1SetState((ptr), (x1), (x2), (y1))
#define DT1TYP1_R32TIMEDT_calc(ptr, x, kd, teq, Dt)    SrvF_DT1Typ1Calc((x), (ptr), (kd), (teq), ((real32)Dt/1000000))
#define DT1TYP1_R32TIMEDT_out(ptr)                     SrvF_DT1Typ1Out_R32((ptr))

/* S32S16-DT1Typ1 */
#define _DT1TYP1_S32S16_                         PROTECT_TYPEDEF
#define DT1TYP1_S32S16                           SrvX_StateDT1Typ1_t

#define DT1TYP1_S32S16_setState(ptr, x1, x2, y1) SrvX_DT1Typ1SetState((ptr), (x1), (x2), (y1))
#define DT1TYP1_S32S16_calc(ptr, x, kd, teq, Dt) SrvX_DT1Typ1Calc((x), (ptr), (kd), (teq), (Dt))
#define DT1TYP1_S32S16_out(ptr)                  SrvX_DT1Typ1Out_S16((ptr))

/* S32S8-DT1Typ1 */
#define _DT1TYP1_S32S8_                          PROTECT_TYPEDEF
#define DT1TYP1_S32S8                            SrvX_StateDT1Typ1_t

#define DT1TYP1_S32S8_setState(ptr, x1, x2, y1)  SrvX_DT1Typ1SetState((ptr), (x1), (x2), (y1))
#define DT1TYP1_S32S8_calc(ptr, x, kd, teq, Dt)  SrvX_DT1Typ1Calc((x), (ptr), (kd), (teq), (Dt))
#define DT1TYP1_S32S8_out(ptr)                   SrvX_DT1Typ1Out_S8((ptr))

/*********************************************************************************/
/* DT1Typ2                                                                       */
/*********************************************************************************/

/* R32-DT1Typ2 */
#define _DT1TYP2_R32_                            PROTECT_TYPEDEF
#define DT1TYP2_R32                              SrvF_StateDT1Typ2_t

#define DT1TYP2_R32_setState(ptr, x1, y1)        SrvF_DT1Typ2SetState((ptr), (x1), (y1))
#define DT1TYP2_R32_calc(ptr, x, kd, teq, Dt)    SrvF_DT1Typ2Calc((x), (ptr), (kd), (teq), (Dt))
#define DT1TYP2_R32_out(ptr)                     SrvF_DT1Typ2Out_R32((ptr))

#define _DT1TYP2_R32TIMEDT_                            PROTECT_TYPEDEF
#define DT1TYP2_R32TIMEDT                              SrvF_StateDT1Typ2_t

#define DT1TYP2_R32TIMEDT_setState(ptr, x1, y1)        SrvF_DT1Typ2SetState((ptr), (x1), (y1))
#define DT1TYP2_R32TIMEDT_calc(ptr, x, kd, teq, Dt)    SrvF_DT1Typ2Calc((x), (ptr), (kd), (teq),((real32)Dt/1000000))
#define DT1TYP2_R32TIMEDT_out(ptr)                     SrvF_DT1Typ2Out_R32((ptr))

/* S32S16-DT1Typ2 */
#define _DT1TYP2_S32S16_                         PROTECT_TYPEDEF
#define DT1TYP2_S32S16                           SrvX_StateDT1Typ2_t

#define DT1TYP2_S32S16_setState(ptr, x1, y1)     SrvX_DT1Typ2SetState((ptr), (x1), (y1))
#define DT1TYP2_S32S16_calc(ptr, x, kd, teq, Dt) SrvX_DT1Typ2Calc((x), (ptr), (kd), (teq), (Dt))

/* S32S8-DT1Typ2 */
#define DT1TYP2_S32S8                            SrvX_StateDT1Typ2_t
#define _DT1TYP2_S32S8_                          PROTECT_TYPEDEF
#define DT1TYP2_S32S16_out(ptr)                  SrvX_DT1Typ2Out_S16((ptr))

#define DT1TYP2_S32S8_setState(ptr, x1, y1)      SrvX_DT1Typ2SetState((ptr), (x1), (y1))
#define DT1TYP2_S32S8_calc(ptr, x, kd, teq, Dt)  SrvX_DT1Typ2Calc((x), (ptr), (kd), (teq), (Dt))
#define DT1TYP2_S32S8_out(ptr)                   SrvX_DT1Typ2Out_S8((ptr))

/*********************************************************************************/
/* TeQApp                                                                        */
/*********************************************************************************/

#define TEQAPP_R32_TeQApp(Dt, T1)                SrvF_CalcTeQApp_R32((1/(T1)), (Dt))
#define TEQAPP_R32TIMEDT_TeQApp(Dt, T1)                SrvF_CalcTeQApp_R32((1/(T1)), ((real32)Dt/1000000))

#define TEQAPP_S32_TeQApp(Dt, T1)                SrvX_CalcTeQApp_S32((T1), (Dt))

/*********************************************************************************/
/* KeQApp                                                                        */
/*********************************************************************************/

#define KEQAPP_U16_KeQApp(Dt, T1)                   SrvX_FilterCalcKApp_U16(T1, Dt)

#define KEQAPP_R32_KeQApp(Dt, T1)                   SrvF_FilterCalcKApp_R32((1/(T1)), Dt)
#define KEQAPP_R32TIMEDT_KeQApp(Dt, T1)                   SrvF_FilterCalcKApp_R32((1/(T1)), (real32)Dt)

/*********************************************************************************/
/* HighPassFilter                                                                */
/*********************************************************************************/

/* S32S16-HighPassFilter */
#define _HIGHPASSFILTER_S32S16_                 PROTECT_TYPEDEF
#define HIGHPASSFILTER_S32S16                   SrvX_HpFilterS_t

#define HIGHPASSFILTER_S32S16_calc(ptr, x, keq) SrvX_HpFilterSCalc(x, ptr, keq)
#define HIGHPASSFILTER_S32S16_out(ptr)          SrvX_HpFilterSOut_S16(ptr)
#define HIGHPASSFILTER_S32S16_setState(ptr, x, y) SrvX_HpFilterSSetState(ptr, x, y)

/* S32S8-HighPassFilter */
#define _HIGHPASSFILTER_S32S8_                  PROTECT_TYPEDEF
#define HIGHPASSFILTER_S32S8                    SrvX_HpFilterS_t

#define HIGHPASSFILTER_S32S8_calc(ptr, x, keq)  SrvX_HpFilterSCalc(x, ptr, keq)
#define HIGHPASSFILTER_S32S8_out(ptr)           SrvX_HpFilterSOut_S8(ptr)
#define HIGHPASSFILTER_S32S8_setState(ptr, x, y) SrvX_HpFilterSSetState(ptr, x, y)

/* U32U16-HighPassFilter */
#define _HIGHPASSFILTER_U32U16_                 PROTECT_TYPEDEF
#define HIGHPASSFILTER_U32U16                   SrvX_HpFilterU_t

#define HIGHPASSFILTER_U32U16_calc(ptr, x, keq) SrvX_HpFilterUCalc(x, ptr, keq)
#define HIGHPASSFILTER_U32U16_out(ptr)          SrvX_HpFilterUOut_U16(ptr)
#define HIGHPASSFILTER_U32U16_setState(ptr, x, y) SrvX_HpFilterUSetState(ptr, x, y)

/* U32U8-HighPassFilter */
#define _HIGHPASSFILTER_U32U8_                  PROTECT_TYPEDEF
#define HIGHPASSFILTER_U32U8                    SrvX_HpFilterU_t

#define HIGHPASSFILTER_U32U8_calc(ptr, x, keq)  SrvX_HpFilterUCalc(x, ptr, keq)
#define HIGHPASSFILTER_U32U8_out(ptr)           SrvX_HpFilterUOut_U8(ptr)
#define HIGHPASSFILTER_U32U8_setState(ptr, x, y) SrvX_HpFilterUSetState(ptr, x, y)
 
/* R32-HighPassFilter */
#define _HIGHPASSFILTER_R32_                    PROTECT_TYPEDEF
#define HIGHPASSFILTER_R32                      SrvF_HpFilter_t

#define HIGHPASSFILTER_R32_calc(ptr, x, keq)    SrvF_HpFilterCalc(x, ptr, keq)
#define HIGHPASSFILTER_R32_out(ptr)             SrvF_HpFilterOut_R32(ptr)
#define HIGHPASSFILTER_R32_setState(ptr, x, y)  SrvF_HpFilterSetState(ptr, x, y)

/*********************************************************************************/
/* LowPassFilter                                                                 */
/*********************************************************************************/

/* S32S16-LowPassFilter */
#define LOWPASSFILTER_S32S16_calc(ptr, x, keq)  SrvX_LpFilterSCalc(x, &((ptr)->Y1), keq)
#define LOWPASSFILTER_S32S16_out(ptr)           SrvX_LpFilterSOut_S16(&((ptr)->Y1))
#define LOWPASSFILTER_S32S16_setState(ptr, x)   SrvX_LpFilterSSetState(&((ptr)->Y1), x)

/* S32S8-LowPassFilter */
#define LOWPASSFILTER_S32S8_calc(ptr, x, keq)   SrvX_LpFilterSCalc(x, &((ptr)->Y1), keq)
#define LOWPASSFILTER_S32S8_out(ptr)            SrvX_LpFilterSOut_S8(&((ptr)->Y1))
#define LOWPASSFILTER_S32S8_setState(ptr, x)    SrvX_LpFilterSSetState(&((ptr)->Y1), x)

/* U32U16-LowPassFilter */
#define LOWPASSFILTER_U32U16_calc(ptr, x, keq)  SrvX_LpFilterUCalc(x, &((ptr)->Y1), keq)
#define LOWPASSFILTER_U32U16_out(ptr)           SrvX_LpFilterUOut_U16(&((ptr)->Y1))
#define LOWPASSFILTER_U32U16_setState(ptr, x)   SrvX_LpFilterUSetState(&((ptr)->Y1), x)

/* U32U8-LowPassFilter */
#define LOWPASSFILTER_U32U8_calc(ptr, x, keq)   SrvX_LpFilterUCalc(x, &((ptr)->Y1), keq)
#define LOWPASSFILTER_U32U8_out(ptr)            SrvX_LpFilterUOut_U8(&((ptr)->Y1))
#define LOWPASSFILTER_U32U8_setState(ptr, x)    SrvX_LpFilterUSetState(&((ptr)->Y1), x)

/* R32-LowPassFilter */
#define LOWPASSFILTER_R32_calc(ptr, x, keq)     SrvF_LpFilterCalc(x, &((ptr)->Y1), keq)
#define LOWPASSFILTER_R32_out(ptr)              SrvF_LpFilterOut_R32(&((ptr)->Y1))
#define LOWPASSFILTER_R32_setState(ptr, x)      SrvF_LpFilterSetState(&((ptr)->Y1), x)

#endif  /*#ifndef _CODEGEN_SRV_CONTROLLER_H*/

