
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
 * $Filename__:codegen_srv_neg_limit.h$
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
 * $Name______:codegen_srv_neg_limit$
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


/*************************************************************************/
/*                                                                       */
/*                                                                       */
/*                   Adapter for code generated files                    */
/*             maps generated funtion call to suited services            */
/*                                                                       */
/*                                                                       */
/*************************************************************************/


#ifndef _CODEGEN_SRV_NEG_LIMIT_H
#define _CODEGEN_SRV_NEG_LIMIT_H

/* Neg_limit_*_s8	*/
#define Neg_limit_s8_s8(x)                       SrvB_Neg_S32_S8((sint32)(x))	 /* needless */
#define Neg_limit_u8_s8(x)                       SrvB_Neg_U32_S8((uint32)(x))
#define Neg_limit_s16_s8(x)                      SrvB_Neg_S32_S8((sint32)(x))
#define Neg_limit_u16_s8(x)                      SrvB_Neg_U32_S8((uint32)(x))
#define Neg_limit_s32_s8(x)                      SrvB_Neg_S32_S8((x))
#define Neg_limit_u32_s8(x)                      SrvB_Neg_U32_S8((x))

/* Neg_limit_*_u8	*/
#define Neg_limit_s8_u8(x)                       SrvB_Neg_S32_U8((sint32)(x))
#define Neg_limit_s16_u8(x)                      SrvB_Neg_S32_U8((sint32)(x))
#define Neg_limit_s32_u8(x)                      SrvB_Neg_S32_U8((x))

/* Neg_limit_s16_*	*/
#define Neg_limit_s16_s16(x)                     SrvB_Neg_S32_S16((sint32)(x))	  /* needless */
#define Neg_limit_u16_s16(x)                     SrvB_Neg_U32_S16((uint32)(x))
#define Neg_limit_s32_s16(x)                     SrvB_Neg_S32_S16((x))
#define Neg_limit_u32_s16(x)                     SrvB_Neg_U32_S16((x))

/* Neg_limit_u16_*	*/
#define Neg_limit_s8_u16(x)                      SrvB_Neg_S32_U16((sint32)(x))
#define Neg_limit_s16_u16(x)                     SrvB_Neg_S32_U16((sint32)(x))
#define Neg_limit_s32_u16(x)                     SrvB_Neg_S32_U16((x))

/* Neg_limit_s32_*	*/
#define Neg_limit_s32_s32(x)                     SrvB_Neg_S32_S32((x))
#define Neg_limit_u32_s32(x)                     SrvB_Neg_U32_S32((x))

/* Neg_limit_u32_*	*/
#define Neg_limit_s8_u32(x)                      SrvB_Neg_S32_U32((sint32)(x))
#define Neg_limit_s16_u32(x)                     SrvB_Neg_S32_U32((sint32)(x))
#define Neg_limit_s32_u32(x)                     SrvB_Neg_S32_U32((x))

#endif /* _CODEGEN_SRV_NEG_LIMIT_H */
