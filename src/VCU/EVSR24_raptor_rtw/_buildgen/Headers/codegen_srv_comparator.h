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
 * $Filename__:codegen_srv_comparator.h$
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
 * $Date______:04.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_comparator$
 * $Variant___:1.0.0$
 * $Revision__:1$
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
 * 1.0.0; 1     04.01.2012 PRG2SI
 *   Add prototypes
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_COMPARATOR_H
#define _CODEGEN_SRV_COMPARATOR_H

/*************************************************************************/
/* ClosedInterval                                                        */
/*************************************************************************/

#define CLOSEDINTERVAL_U8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define CLOSEDINTERVAL_S8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define CLOSEDINTERVAL_U16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define CLOSEDINTERVAL_S16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define CLOSEDINTERVAL_U32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define CLOSEDINTERVAL_S32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* ClosedInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool CLOSEDINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool CLOSEDINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
	return ((bool)(((X_r32 >= Min_r32) && (X_r32 <= Max_r32)) ? (TRUE) : (FALSE)));
}


/*************************************************************************/
/* IntervalClosed                                                        */
/*************************************************************************/

#define INTERVALCLOSED_U32_out(min, x, max)      SrvB_IntervalClosed_U32_B(min, x, max)
#define INTERVALCLOSED_S32_out(min, x, max)      SrvB_IntervalClosed_S32_B(min, x, max)

/*************************************************************************/
/* LeftOpenInterval                                                      */
/*************************************************************************/

#define LEFTOPENINTERVAL_U8_out(min,x,max)                                    \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define LEFTOPENINTERVAL_S8_out(min,x,max)                                    \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define LEFTOPENINTERVAL_U16_out(min,x,max)                                   \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define LEFTOPENINTERVAL_S16_out(min,x,max)                                   \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define LEFTOPENINTERVAL_U32_out(min,x,max)                                   \
        ((bool)SrvB_IntervalLeftOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define LEFTOPENINTERVAL_S32_out(min,x,max)                                   \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* LeftOpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool LEFTOPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool LEFTOPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 > Min_r32) && (X_r32 <= Max_r32)) ? (TRUE) : (FALSE)));
}

/*************************************************************************/
/* IntervalLeftOpen                                                      */
/*************************************************************************/

#define INTERVALLEFTOPEN_U32_out(min, x, max)    SrvB_IntervalLeftOpen_U32_B(min, x, max)
#define INTERVALLEFTOPEN_S32_out(min, x, max)    SrvB_IntervalLeftOpen_S32_B(min, x, max)

/*************************************************************************/
/* OpenInterval                                                          */
/*************************************************************************/

#define OPENINTERVAL_U8_out(min,x,max)                                        \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define OPENINTERVAL_S8_out(min,x,max)                                        \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define OPENINTERVAL_U16_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define OPENINTERVAL_S16_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define OPENINTERVAL_U32_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define OPENINTERVAL_S32_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* OpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool OPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool OPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 > Min_r32) && (X_r32 < Max_r32)) ? (TRUE) : (FALSE)));
}

/*************************************************************************/
/* IntervalOpen                                                          */
/*************************************************************************/

#define INTERVALOPEN_U32_out(min, x, max)        SrvB_IntervalOpen_U32_B(min, x, max)
#define INTERVALOPEN_S32_out(min, x, max)        SrvB_IntervalOpen_S32_B(min, x, max)

/*************************************************************************/
/* RightOpenInterval                                                     */
/*************************************************************************/

#define RIGHTOPENINTERVAL_U8_out(min,x,max)                                   \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define RIGHTOPENINTERVAL_S8_out(min,x,max)                                   \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define RIGHTOPENINTERVAL_U16_out(min,x,max)                                  \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define RIGHTOPENINTERVAL_S16_out(min,x,max)                                  \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define RIGHTOPENINTERVAL_U32_out(min,x,max)                                  \
        ((bool)SrvB_IntervalRhOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define RIGHTOPENINTERVAL_S32_out(min,x,max)                                  \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* RightOpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool RIGHTOPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool RIGHTOPENINTERVAL_R32_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 >= Min_r32) && (X_r32 < Max_r32)) ? (TRUE) : (FALSE)));
}

/*************************************************************************/
/* IntervalRightOpen                                                     */
/*************************************************************************/

#define INTERVALRIGHTOPEN_U32_out(min, x, max)   SrvB_IntervalRhOpen_U32_B(min, x, max)
#define INTERVALRIGHTOPEN_S32_out(min, x, max)   SrvB_IntervalRhOpen_S32_B(min, x, max)

/*************************************************************************/
/* GreaterZero                                                           */
/*************************************************************************/

#define GreaterZero(x)                           ((x)>0)
#define GREATERZERO_U8_out(x)                    GreaterZero(x)
#define GREATERZERO_S8_out(x)                    GreaterZero(x)
#define GREATERZERO_U16_out(x)                   GreaterZero(x)
#define GREATERZERO_S16_out(x)                   GreaterZero(x)
#define GREATERZERO_U32_out(x)                   GreaterZero(x)
#define GREATERZERO_S32_out(x)                   GreaterZero(x)
#define GREATERZERO_R32_out(x)                   ((x)>0.0)

/*************************************************************************/
/*************************************************************************/
/* Obsolete classes                                                      */
/*************************************************************************/
/*************************************************************************/

/*************************************************************************/
/* Srv_IntervClsd                                                        */
/*************************************************************************/

#define SRV_INTERVCLSD_U8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVCLSD_U16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVCLSD_U32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define SRV_INTERVCLSD_S8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVCLSD_S16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVCLSD_S32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalClosed_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* ClosedInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool SRV_INTERVCLSD_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool SRV_INTERVCLSD_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
	return ((bool)(((X_r32 >= Min_r32) && (X_r32 <= Max_r32)) ? (TRUE) : (FALSE)));
}

/*************************************************************************/
/* Srv_IntervLOpn                                                        */
/*************************************************************************/

#define SRV_INTERVOPN_U8_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVOPN_U16_out(min,x,max)                                      \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVOPN_U32_out(min,x,max)                                      \
        ((bool)SrvB_IntervalOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define SRV_INTERVOPN_S8_out(min,x,max)                                       \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVOPN_S16_out(min,x,max)                                      \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVOPN_S32_out(min,x,max)                                      \
        ((bool)SrvB_IntervalOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
        
/* OpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool SRV_INTERVOPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool SRV_INTERVOPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 > Min_r32) && (X_r32 < Max_r32)) ? (TRUE) : (FALSE)));
}
        
/*************************************************************************/
/* Srv_IntervOpn                                                         */
/*************************************************************************/

#define SRV_INTERVLOPN_U8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVLOPN_U16_out(min,x,max)                                     \
         ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVLOPN_U32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalLeftOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define SRV_INTERVLOPN_S8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVLOPN_S16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVLOPN_S32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalLeftOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
        
/* LeftOpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool SRV_INTERVLOPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool SRV_INTERVLOPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 > Min_r32) && (X_r32 <= Max_r32)) ? (TRUE) : (FALSE)));
}

/*************************************************************************/
/* Srv_IntervROpn                                                        */
/*************************************************************************/

#define SRV_INTERVROPN_U8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVROPN_U16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVROPN_U32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalRhOpen_U32_B(((uint32)(min)),((uint32)(x)),((uint32)(max))))
#define SRV_INTERVROPN_S8_out(min,x,max)                                      \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVROPN_S16_out(min,x,max)                                     \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))
#define SRV_INTERVROPN_S32_out(min,x,max)                                     \
        ((bool)SrvB_IntervalRhOpen_S32_B(((sint32)(min)),((sint32)(x)),((sint32)(max))))

/* RightOpenInterval not available in Srv for real implementation. */
INLINE_FUNCTION bool SRV_INTERVROPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32);
INLINE_FUNCTION bool SRV_INTERVROPN_REAL_out(real32 Min_r32, real32 X_r32, real32 Max_r32)
{
    return ((bool)(((X_r32 >= Min_r32) && (X_r32 < Max_r32)) ? (TRUE) : (FALSE)));
}

#endif  /*#ifndef _CODEGEN_SRV_COMPARATOR_H*/
