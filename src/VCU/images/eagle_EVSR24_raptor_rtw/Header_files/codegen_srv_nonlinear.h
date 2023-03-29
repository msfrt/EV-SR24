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
 * $Filename__:codegen_srv_nonlinear.h$
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
 * $Name______:codegen_srv_nonlinear$
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

#ifndef _CODEGEN_SRV_NONLINEAR_H
#define _CODEGEN_SRV_NONLINEAR_H

/*************************************************************************/
/* Hysteresis_Delta_RSP                                                  */
/*************************************************************************/

/* U8-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_U8_out(x,in,delta,rsp)                         \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_U8_out(x,in,delta,rsp)                           \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))

/* U16-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_U16_out(x,in,delta,rsp)                        \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_U16_out(x,in,delta,rsp)                          \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))

/* U32-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_U32_out(x,in,delta,rsp)                        \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_U32_out(x,in,delta,rsp)                          \
        ((bool)Hysteresis_Delta_RSP_U32(&((x)->hysterese), (in), (delta), (rsp)))

/* S8-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_S8_out(x,in,delta,rsp)                         \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_S8_out(x,in,delta,rsp)                           \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))

/* S16-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_S16_out(x,in,delta,rsp)                        \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_S16_out(x,in,delta,rsp)                          \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))

/* S32-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_S32_out(x,in,delta,rsp)                        \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_S32_out(x,in,delta,rsp)                          \
        ((bool)Hysteresis_Delta_RSP_S32(&((x)->hysterese), (in), (delta), (rsp)))

/* R32-HYSTERESIS-DELTA-RSP */
#define HYSTERESISQODELTAQORSP_R32_out(x,in,delta,rsp)                        \
        ((bool)Hysteresis_Delta_RSP_R32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_R32_out(x,in,delta,rsp)                          \
        ((bool)Hysteresis_Delta_RSP_R32(&((x)->hysterese), (in), (delta), (rsp)))

/*************************************************************************/
/* Hysteresis_Delta_RSP_SEQCALL                                          */
/*************************************************************************/

/* U8-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_U8_calc(x,in,delta,rsp)                  \
        ((void)Hysteresis_Delta_RSP_SEQCALL_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_U8_out(x)   ((bool)((x)->hysterese))

/* U16-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_U16_calc(x,in,delta,rsp)                 \
        ((void)Hysteresis_Delta_RSP_SEQCALL_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_U16_out(x)  ((bool)((x)->hysterese))

/* U32-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_U32_calc(x,in,delta,rsp)                 \
        ((void)Hysteresis_Delta_RSP_SEQCALL_U32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_U32_out(x)  ((bool)((x)->hysterese))

/* S8-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_S8_calc(x,in,delta,rsp)                  \
        ((void)Hysteresis_Delta_RSP_SEQCALL_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_S8_out(x)   ((bool)((x)->hysterese))

/* S16-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_S16_calc(x,in,delta,rsp)                 \
        ((void)Hysteresis_Delta_RSP_SEQCALL_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_S16_out(x)  ((bool)((x)->hysterese))

/* S32-HYSTERESIS-DELTA-RSP_SEQCALL */
#define HYSTERESIS_DELTA_RSP_SEQCALL_S32_calc(x,in,delta,rsp)                 \
        ((void)Hysteresis_Delta_RSP_SEQCALL_S32(&((x)->hysterese), (in), (delta), (rsp)))
#define HYSTERESIS_DELTA_RSP_SEQCALL_S32_out(x)  ((bool)((x)->hysterese))

/*************************************************************************/
/* Hysteresis_LSP_Delta                                                  */
/*************************************************************************/

/* U8-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_U8_out(x,in,lsp,delta)                         \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_U8_out(x,in,lsp,delta)                           \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))

/* U16-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_U16_out(x,in,lsp,delta)                        \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_U16_out(x,in,lsp,delta)                          \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))

/* U32-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_U32_out(x,in,lsp,delta)                        \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_U32_out(x,in,lsp,delta)                          \
        ((bool)Hysteresis_LSP_Delta_U32(&((x)->hysterese), (in), (lsp), (delta)))

/* S8-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_S8_out(x,in,lsp,delta)                         \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_S8_out(x,in,lsp,delta)                           \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))

/* S16-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_S16_out(x,in,lsp,delta)                        \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_S16_out(x,in,lsp,delta)                          \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))

/* S32-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_S32_out(x,in,lsp,delta)                        \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_S32_out(x,in,lsp,delta)                          \
        ((bool)Hysteresis_LSP_Delta_S32(&((x)->hysterese), (in), (lsp), (delta)))

/* R32-HYSTERESIS-LSP-DELTA */
#define HYSTERESISQOLSPQODELTA_R32_out(x,in,lsp,delta)                        \
        ((bool)Hysteresis_LSP_Delta_R32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_R32_out(x,in,lsp,delta)                          \
        ((bool)Hysteresis_LSP_Delta_R32(&((x)->hysterese), (in), (lsp), (delta)))

/*************************************************************************/
/* Hysteresis_LSP_Delta_SEQCALL                                          */
/*************************************************************************/

/* U8-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_U8_calc(x,in,lsp,delta)                  \
        ((void)Hysteresis_LSP_Delta_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_U8_out(x)   ((bool)((x)->hysterese))

/* U16-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_U16_calc(x,in,lsp,delta)                 \
        ((void)Hysteresis_LSP_Delta_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_U16_out(x)  ((bool)((x)->hysterese))

/* U32-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_U32_calc(x,in,lsp,delta)                 \
        ((void)Hysteresis_LSP_Delta_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_U32_out(x)  ((bool)((x)->hysterese))

/* S8-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_S8_calc(x,in,lsp,delta)                  \
        ((void)Hysteresis_LSP_Delta_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_S8_out(x)   ((bool)((x)->hysterese))

/* S16-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_S16_calc(x,in,lsp,delta)                 \
        ((void)Hysteresis_LSP_Delta_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_S16_out(x)  ((bool)((x)->hysterese))

/* S32-HYSTERESIS-LSP-DELTA_SEQCALL */
#define HYSTERESIS_LSP_DELTA_SEQCALL_S32_calc(x,in,lsp,delta)                 \
        ((void)Hysteresis_LSP_Delta_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (delta)))
#define HYSTERESIS_LSP_DELTA_SEQCALL_S32_out(x)  ((bool)((x)->hysterese))

/*************************************************************************/
/* Hysteresis_LSP_RSP                                                    */
/*************************************************************************/

/* U8-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_U8_out(x,in,lsp,rsp)                             \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_U8_out(x,in,lsp,rsp)                               \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))

/* U16-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_U16_out(x,in,lsp,rsp)                            \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_U16_out(x,in,lsp,rsp)                              \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))

/* U32-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_U32_out(x,in,lsp,rsp)                            \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_U32_out(x,in,lsp,rsp)                              \
        ((bool)Hysteresis_LSP_RSP_U32(&((x)->hysterese), (in), (lsp), (rsp)))

/* S8-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_S8_out(x,in,lsp,rsp)                             \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_S8_out(x,in,lsp,rsp)                               \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))

/* S16-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_S16_out(x,in,lsp,rsp)                            \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_S16_out(x,in,lsp,rsp)                              \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))

/* S32-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_S32_out(x,in,lsp,rsp)                            \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_S32_out(x,in,lsp,rsp)                              \
        ((bool)Hysteresis_LSP_RSP_S32(&((x)->hysterese), (in), (lsp), (rsp)))

/* R32-HYSTERESIS-LSP-RSP */
#define HYSTERESISQOLSPQORSP_R32_out(x,in,lsp,rsp)                            \
        ((bool)Hysteresis_LSP_RSP_R32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_R32_out(x,in,lsp,rsp)                              \
        ((bool)Hysteresis_LSP_RSP_R32(&((x)->hysterese), (in), (lsp), (rsp)))

/*************************************************************************/
/* Hysteresis_LSP_RSP_SEQCALL                                            */
/*************************************************************************/

/* U8-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_U8_calc(x,in,lsp,rsp)                      \
        ((void)Hysteresis_LSP_RSP_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_U8_out(x)     ((bool)((x)->hysterese))

/* U16-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_U16_calc(x,in,lsp,rsp)                     \
        ((void)Hysteresis_LSP_RSP_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_U16_out(x)    ((bool)((x)->hysterese))

/* U32-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_U32_calc(x,in,lsp,rsp)                     \
        ((void)Hysteresis_LSP_RSP_SEQCALL_U32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_U32_out(x)    ((bool)((x)->hysterese))

/* S8-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_S8_calc(x,in,lsp,rsp)                      \
        ((void)Hysteresis_LSP_RSP_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_S8_out(x)     ((bool)((x)->hysterese))

/* S16-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_S16_calc(x,in,lsp,rsp)                     \
        ((void)Hysteresis_LSP_RSP_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_S16_out(x)    ((bool)((x)->hysterese))

/* S32-HYSTERESIS-LSP-RSP_SEQCALL */
#define HYSTERESIS_LSP_RSP_SEQCALL_S32_calc(x,in,lsp,rsp)                     \
        ((void)Hysteresis_LSP_RSP_SEQCALL_S32(&((x)->hysterese), (in), (lsp), (rsp)))
#define HYSTERESIS_LSP_RSP_SEQCALL_S32_out(x)    ((bool)((x)->hysterese))

/*************************************************************************/
/* Hysteresis_MSP_DeltaHalf                                              */
/*************************************************************************/

/* U8-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_U8_out(x,in,msp,deltaHalf)                 \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_U8_out(x,in,msp,deltaHalf)                   \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* U16-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_U16_out(x,in,msp,deltaHalf)                \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_U16_out(x,in,msp,deltaHalf)                 \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* U32-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_U32_out(x,in,msp,deltaHalf)                \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_U32_out(x,in,msp,deltaHalf)                  \
        ((bool)Hysteresis_MSP_DeltaHalf_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* S8-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_S8_out(x,in,msp,deltaHalf)                 \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_S8_out(x,in,msp,deltaHalf)                   \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* S16-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_S16_out(x,in,msp,deltaHalf)                \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_S16_out(x,in,msp,deltaHalf)                  \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* S32-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_S32_out(x,in,msp,deltaHalf)                \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_S32_out(x,in,msp,deltaHalf)                  \
        ((bool)Hysteresis_MSP_DeltaHalf_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/* R32-Hysteresis_MSP_DeltaHalf */
#define HYSTERESISQOMSPQODELTAHALF_R32_out(x,in,msp,deltaHalf)                \
        ((bool)Hysteresis_MSP_DeltaHalf_R32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_R32_out(x,in,msp,deltaHalf)                  \
        ((bool)Hysteresis_MSP_DeltaHalf_R32(&((x)->hysterese), (in), (msp), (deltaHalf)))

/*************************************************************************/
/* Hysteresis_MSP_DeltaHalf_SEQCALL                                      */
/*************************************************************************/

/* U8-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U8_calc(x,in,msp,deltaHalf)          \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U8_out(x) ((bool)((x)->hysterese))

/* U16-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U16_calc(x,in,msp,deltaHalf)         \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U16_out(x) ((bool)((x)->hysterese))

/* U32-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U32_calc(x,in,msp,deltaHalf)         \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_U32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_U32_out(x) ((bool)((x)->hysterese))

/* S8-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S8_calc(x,in,msp,deltaHalf)          \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S8_out(x) ((bool)((x)->hysterese))

/* S16-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S16_calc(x,in,msp,deltaHalf)         \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S16_out(x) ((bool)((x)->hysterese))

/* S32-Hysteresis_MSP_DeltaHalf_SEQCALL */
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S32_calc(x,in,msp,deltaHalf)         \
        ((void)Hysteresis_MSP_DeltaHalf_SEQCALL_S32(&((x)->hysterese), (in), (msp), (deltaHalf)))
#define HYSTERESIS_MSP_DELTAHALF_SEQCALL_S32_out(x) ((bool)((x)->hysterese))

/*************************************************************************/
/* Limiter                                                               */
/*************************************************************************/

#define LIMITER_U8_out(mn,in,mx)                 ((uint8)Limiter_U32((mn), (in), (mx)))
#define LIMITER_U16_out(mn,in,mx)                ((uint16)Limiter_U32((mn), (in), (mx)))
#define LIMITER_U32_out(mn,in,mx)                ((uint32)Limiter_U32((mn), (in), (mx)))
#define LIMITER_S8_out(mn,in,mx)                 ((sint8)Limiter_S32((mn), (in), (mx)))
#define LIMITER_S16_out(mn,in,mx)                ((sint16)Limiter_S32((mn), (in), (mx)))
#define LIMITER_S32_out(mn,in,mx)                ((sint32)Limiter_S32((mn), (in), (mx)))
#define LIMITER_R32_out(mn,in,mx)                Limiter_R32((mn), (in), (mx))

/*************************************************************************/
/* Srv_HystCHD (obsolete)                                                 */
/*************************************************************************/

#define SRV_HYSTCHD_U8_out(ptr,x,center,halfdelta)                            \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_U16_out(ptr,x,center,halfdelta)                           \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_U32_out(ptr,x,center,halfdelta)                           \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_S8_out(ptr,x,center,halfdelta)                            \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_S16_out(ptr,x,center,halfdelta)                           \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_S32_out(ptr,x,center,halfdelta)                           \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->state))
#define SRV_HYSTCHD_REAL_out(ptr,x,center,halfdelta)                          \
        Srvf_Hysteresis_MSP_DeltaHalf(x,center,halfdelta,&((ptr)->state))

/*************************************************************************/
/* Srv_HystDR (obsolete)                                                 */
/*************************************************************************/
#define SRV_HYSTDR_U8_out(ptr,x,delta,rsp)                                    \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_U16_out(ptr,x,delta,rsp)                                   \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_U32_out(ptr,x,delta,rsp)                                   \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_S8_out(ptr,x,delta,rsp)                                    \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_S16_out(ptr,x,delta,rsp)                                   \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_S32_out(ptr,x,delta,rsp)                                   \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTDR_REAL_out(ptr,x,delta,rsp)                                  \
        Srvf_Hysteresis_Delta_RSP(x,delta,rsp,&((ptr)->state))

/*************************************************************************/
/* Srv_HystLD (obsolete)                                                 */
/*************************************************************************/
#define SRV_HYSTLD_U8_out(ptr,x,lsp,delta)                                    \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_U16_out(ptr,x,lsp,delta)                                   \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_U32_out(ptr,x,lsp,delta)                                   \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_S8_out(ptr,x,lsp,delta)                                    \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_S16_out(ptr,x,lsp,delta)                                   \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_S32_out(ptr,x,lsp,delta)                                   \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->state))
#define SRV_HYSTLD_REAL_out(ptr,x,lsp,delta)                                  \
        Srvf_Hysteresis_LSP_Delta(x,lsp,delta,&((ptr)->state))

/*************************************************************************/
/* Srv_HystLR (obsolete)                                                 */
/*************************************************************************/
#define SRV_HYSTLR_U8_out(ptr,x,lsp,rsp)                                      \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_U16_out(ptr,x,lsp,rsp)                                     \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_U32_out(ptr,x,lsp,rsp)                                     \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_S8_out(ptr,x,lsp,rsp)                                      \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_S16_out(ptr,x,lsp,rsp)                                     \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_S32_out(ptr,x,lsp,rsp)                                     \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->state))
#define SRV_HYSTLR_REAL_out(ptr,x,lsp,rsp)                                    \
        SrvF_Hysteresis_LSP_RSP(x,lsp,rsp,&((ptr)->state))

/*************************************************************************/
/* SwitchHyst_CHD                                                        */
/*************************************************************************/

#define SWITCHHYST_CHD_U8_HystCHD(ptr,x,center,halfdelta)                     \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_U16_HystCHD(ptr,x,center,halfdelta)                    \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_U32_HystCHD(ptr,x,center,halfdelta)                    \
        SrvB_SwitchHystCHD_U32_B(((uint32)(x)),((uint32)(center)),((uint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_S8_HystCHD(ptr,x,center,halfdelta)                     \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_S16_HystCHD(ptr,x,center,halfdelta)                    \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_S32_HystCHD(ptr,x,center,halfdelta)                    \
        SrvB_SwitchHystCHD_S32_B(((sint32)(x)),((sint32)(center)),((sint32)(halfdelta)),&((ptr)->State_pb))
#define SWITCHHYST_CHD_R32_HystCHD(ptr,x,center,halfdelta)                    \
        SrvF_SwitchHystCHD_R32_B(x,center,halfdelta,&((ptr)->State_pb))

/*************************************************************************/
/* SwitchHyst_DR                                                         */
/*************************************************************************/

#define SWITCHHYST_DR_U8_HystDR(ptr,x,delta,rsp)                              \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_U16_HystDR(ptr,x,delta,rsp)                             \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_U32_HystDR(ptr,x,delta,rsp)                             \
        SrvB_SwitchHystDR_U32_B(((uint32)(x)),((uint32)(delta)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_S8_HystDR(ptr,x,delta,rsp)                              \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_S16_HystDR(ptr,x,delta,rsp)                             \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_S32_HystDR(ptr,x,delta,rsp)                             \
        SrvB_SwitchHystDR_S32_B(((sint32)(x)),((sint32)(delta)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_DR_R32_HystDR(ptr,x,delta,rsp)                             \
        SrvF_SwitchHystDR_R32_B(x,delta,rsp,&((ptr)->State_pb))

/*************************************************************************/
/* SwitchHyst_LD                                                         */
/*************************************************************************/

#define SWITCHHYST_LD_U8_HystLD(ptr,x,lsp,delta)                              \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_U16_HystLD(ptr,x,lsp,delta)                             \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_U32_HystLD(ptr,x,lsp,delta)                             \
        SrvB_SwitchHystLD_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_S8_HystLD(ptr,x,lsp,delta)                              \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_S16_HystLD(ptr,x,lsp,delta)                             \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_S32_HystLD(ptr,x,lsp,delta)                             \
        SrvB_SwitchHystLD_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(delta)),&((ptr)->State_pb))
#define SWITCHHYST_LD_R32_HystLD(ptr,x,lsp,delta)                             \
        SrvF_SwitchHystLD_R32_B(x,lsp,delta,&((ptr)->State_pb))

/*************************************************************************/
/* SwitchHyst_LR                                                         */
/*************************************************************************/

#define SWITCHHYST_LR_U8_HystLR(ptr,x,lsp,rsp)                                \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_U16HystLR(ptr,x,lsp,rsp)                                \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_U32_HystLR(ptr,x,lsp,rsp)                               \
        SrvB_SwitchHystLR_U32_B(((uint32)(x)),((uint32)(lsp)),((uint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_S8_HystLR(ptr,x,lsp,rsp)                                \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_S16_HystLR(ptr,x,lsp,rsp)                               \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_S32_HystLR(ptr,x,lsp,rsp)                               \
        SrvB_SwitchHystLR_S32_B(((sint32)(x)),((sint32)(lsp)),((sint32)(rsp)),&((ptr)->State_pb))
#define SWITCHHYST_LR_R32_HystLR(ptr,x,lsp,rsp)                               \
        SrvF_SwitchHystLR_R32_B(x,lsp,rsp,&((ptr)->State_pb))

#endif  /*#ifndef _CODEGEN_SRV_NONLINEAR_H*/

