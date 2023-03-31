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
 * $Filename__:codegen_srv_arithmetic.h$
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
 * $Date______:08.10.2013$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_arithmetic$
 * $Variant___:2.9.0$
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
 * 2.9.0; 0     08.10.2013 DAJ2KOR
 *   To support ASL 6.2.22  released with ASCET 6.1.4 RB-DGS 1.0
 * 
 * 1.3.0; 0     19.06.2013 DAJ2KOR
 *    Macro added for Srv_IsEqual class
 * 
 * 1.2.0; 0     10.01.2013 DAJ2KOR
 *   Macros added for new classes Srv_Isgreater and Srv_Islower
 * 
 * 1.1.0; 0     17.10.2012 DAJ2KOR
 *   Macros added for Srv_RealToInteger and Srv_ValidationLimiter classes.
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_ARITHMETIC_H
#define _CODEGEN_SRV_ARITHMETIC_H

/*************************************************************************/
/* Srv_Abs                                                               */
/*************************************************************************/

#define SRV_ABS_U8_out(x)                        SrvB_Abs8(x)
#define SRV_ABS_S16_out(x)                       SrvB_Abs16(x)
#define SRV_ABS_S32_out(x)                       SrvB_Abs32(x)
#define SRV_ABS_REAL_out(x)                      SrvF_Abs(x)
#define SRV_ABS_U16_out(x)                       SrvB_Abs_S32_U16(x)
#define SRV_ABS_U32_out(x)                       SrvB_Abs_S32_U32(x)
#define SRV_ABS_S8_out(x)                        SrvB_Abs_S32_S8(x)

/*************************************************************************/
/* Abs                                                                   */
/*************************************************************************/

#define ABS_U8_Abs(x)                            SrvB_Abs8(x)
#define ABS_S16_Abs(x)                           SrvB_Abs16(x)
#define ABS_S32_Abs(x)                           SrvB_Abs32(x)
#define ABS_R32_Abs(x)                           SrvF_Abs(x)
#define ABS_U16_Abs(x)                           SrvB_Abs_S32_U16(x)
#define ABS_U32_Abs(x)                           SrvB_Abs_S32_U32(x)
#define ABS_S8_Abs(x)                            SrvB_Abs_S32_S8(x)

/*************************************************************************/
/* Srv_AbsDiff                                                           */
/*************************************************************************/

#define SRV_ABSDIFF_U8_out(x,y)                  SrvB_AbsDiff8(x,y)
#define SRV_ABSDIFF_S16_out(x,y)                 SrvB_AbsDiff16(x,y)
#define SRV_ABSDIFF_S32_out(x,y)                 SrvB_AbsDiff32(x,y)

/*************************************************************************/
/* AbsDiff                                                               */
/*************************************************************************/

#define ABSDIFF_S32S32U8_AbsDiff(x,y)            SrvB_AbsDiff_S32S32_U8((x),(y))
#define ABSDIFF_S32S32S16_AbsDiff(x,y)           SrvB_AbsDiff_S32S32_S16((x),(y))
#define ABSDIFF_S32S32S32_AbsDiff(x,y)           SrvB_AbsDiff_S32S32_S32((x),(y))
#define ABSDIFF_S32S32S8_AbsDiff(x,y)            SrvB_AbsDiff_S32S32_S8((x),(y))
#define ABSDIFF_S32S32U16_AbsDiff(x,y)           SrvB_AbsDiff_S32S32_U16((x),(y))
#define ABSDIFF_S32S32U32_AbsDiff(x,y)           SrvB_AbsDiff_S32S32_U32((x),(y))
#define ABSDIFF_U32S32U8_AbsDiff(x,y)            SrvB_AbsDiff_U32S32_U8((x),(y))
#define ABSDIFF_U32U32U8_AbsDiff(x,y)            SrvB_AbsDiff_U32U32_U8((x),(y))
#define ABSDIFF_U32S32U16_AbsDiff(x,y)           SrvB_AbsDiff_U32S32_U16((x),(y))
#define ABSDIFF_U32U32U16_AbsDiff(x,y)           SrvB_AbsDiff_U32U32_U16((x),(y))
#define ABSDIFF_U32S32U32_AbsDiff(x,y)           SrvB_AbsDiff_U32S32_U32((x),(y))
#define ABSDIFF_U32U32U32_AbsDiff(x,y)           SrvB_AbsDiff_U32U32_U32((x),(y))

/*************************************************************************/
/* Srv_AbsLimit                                                          */
/*************************************************************************/

#define SRV_ABSLIMIT_S32_out(x,max)              SrvB_AbsLimit(x,max)

/*************************************************************************/
/* Srv_Average                                                           */
/*************************************************************************/

#define SRV_AVERAGE_S32_out(x,y)                 SrvB_Average(x,y)

/*************************************************************************/
/* Average                                                               */
/*************************************************************************/

#define AVERAGE_S32_Average(x,y)                 SrvB_Average(x,y)

/*************************************************************************/
/* Srv_AvrgArr                                                           */
/*************************************************************************/

#define SRV_AVRGARR_S16_out(x,n)                 SrvB_AvrgArrS16(x,n)
#define SRV_AVRGARR_S32_out(x,n)                 SrvB_AvrgArrS32(x,n)

/*************************************************************************/
/* AverageArray                                                          */
/*************************************************************************/

#define AVERAGEARRAY_S16_AverageArray(x, n)      SrvB_AvrgArrS16(x,n)
#define AVERAGEARRAY_S32_AverageArray(x, n)      SrvB_AvrgArrS32(x,n)

/*************************************************************************/
/* Exp                                                                   */
/*************************************************************************/

#define SRV_EXP_S32_out(ptr,x)                   SrvX_Exp(x)
#define SRV_EXP_REAL_out(ptr,x)                  SrvF_Exp(x)

/*************************************************************************/
/* IpoDelta                                                              */
/*************************************************************************/

#define IPOLDELTA_S8_calc(Delta,Factor,InputLow,InputHigh)                    \
        (ip_U8_S8((Delta),(Factor),(InputLow),(InputHigh)))
#define IPOLDELTA_U8_calc(Delta,Factor,InputLow,InputHigh)                    \
        (ip_U8_U8((Delta),(Factor),(InputLow),(InputHigh)))
#define IPOLDELTA_S16_calc(Delta,Factor,InputLow,InputHigh)                   \
        (ip_U8_S16((Delta),(Factor),(InputLow),(InputHigh)))
#define IPOLDELTA_U16_calc(Delta,Factor,InputLow,InputHigh)                   \
        (ip_U8_U16((Delta),(Factor),(InputLow),(InputHigh)))

/*************************************************************************/
/* SrvLimit                                                              */
/*************************************************************************/

#define SRV_LIMIT_U8_out(x,min,max)              SrvB_RangeLimiter_U8((x),(min),(max))
#define SRV_LIMIT_U16_out(x,min,max)             SrvB_RangeLimiter_U16((x),(min),(max))
#define SRV_LIMIT_U32_out(x,min,max)             SrvB_RangeLimiter_U32((x),(min),(max))
#define SRV_LIMIT_S8_out(x,min,max)              SrvB_RangeLimiter_S8((x),(min),(max))
#define SRV_LIMIT_S16_out(x,min,max)             SrvB_RangeLimiter_S16((x),(min),(max))
#define SRV_LIMIT_S32_out(x,min,max)             SrvB_RangeLimiter_S32((x),(min),(max))
#define SRV_LIMIT_REAL_out(x,min,max)            SrvF_RangeLimiter_R32((x),(min),(max))

/*************************************************************************/
/* RangeLimiter                                                          */
/*************************************************************************/

#define RANGELIMITER_S8_out(x,min,max)           SrvB_RangeLimiter_S8((x),(min),(max))
#define RANGELIMITER_S16_out(x,min,max)          SrvB_RangeLimiter_S16((x),(min),(max))
#define RANGELIMITER_S32_out(x,min,max)          SrvB_RangeLimiter_S32((x),(min),(max))
#define RANGELIMITER_U8_out(x,min,max)           SrvB_RangeLimiter_U8((x),(min),(max))
#define RANGELIMITER_U16_out(x,min,max)          SrvB_RangeLimiter_U16((x),(min),(max))
#define RANGELIMITER_U32_out(x,min,max)          SrvB_RangeLimiter_U32((x),(min),(max))
#define RANGELIMITER_R32_out(x,min,max)          SrvF_RangeLimiter_R32((x),(min),(max))

/*************************************************************************/
/* Modulo                                                                */
/*************************************************************************/

#define MODULO_U8_calc(value, mod)               ((uint8)MODULO_IMPL_calc(value, mod))
#define MODULO_U16_calc(value, mod)              ((uint16)MODULO_IMPL_calc(value, mod))
#define MODULO_U32_calc(value, mod)              ((uint32)MODULO_IMPL_calc(value, mod))
#define MODULO_S8_calc(value, mod)               ((sint8)MODULO_IMPL_calc(value, mod))
#define MODULO_S16_calc(value, mod)              ((sint16)MODULO_IMPL_calc(value, mod))
#define MODULO_S32_calc(value, mod)              ((sint32)MODULO_IMPL_calc(value, mod))
#define MODULO_IMPL_calc(value, mod)             ((value)%(mod))

/*************************************************************************/
/* Srv_Modulo                                                            */
/*************************************************************************/

#define SRV_MOD_U8_out(x,y)                      SrvB_Mod(x,y)
#define SRV_MOD_U16_out(x,y)                     SrvB_Mod(x,y)
#define SRV_MOD_U32_out(x,y)                     SrvB_Mod(x,y)
#define SRV_MOD_S8_out(x,y)                      SrvB_Mod(x,y)
#define SRV_MOD_S16_out(x,y)                     SrvB_Mod(x,y)
#define SRV_MOD_S32_out(x,y)                     SrvB_Mod(x,y)

/*************************************************************************/
/* Modulo_signed                                                         */
/*************************************************************************/

#define MODULO_SIGNED_S8_Modulo(x, y)            SrvB_Mod(x,y)
#define MODULO_SIGNED_S16_Modulo(x, y)           SrvB_Mod(x,y)
#define MODULO_SIGNED_S32_Modulo(x, y)           SrvB_Mod(x,y)

/*************************************************************************/
/* Modulo_unsigned                                                       */
/*************************************************************************/

#define MODULO_UNSIGNED_U8_Modulo(x, y)          SrvB_Mod(x,y)
#define MODULO_UNSIGNED_U16_Modulo(x, y)         SrvB_Mod(x,y)
#define MODULO_UNSIGNED_U32_Modulo(x, y)         SrvB_Mod(x,y)

/*************************************************************************/
/* Median                                                                */
/*************************************************************************/

#define MEDIAN_S8_Median(ptr, array)             SrvB_Median_S8(ptr, array)
#define MEDIAN_U8_Median(ptr, array)             SrvB_Median_U8(ptr, array)
#define MEDIAN_S16_Median(ptr, array)            SrvB_Median_S16(ptr, array)
#define MEDIAN_U16_Median(ptr, array)            SrvB_Median_U16(ptr, array)
#define MEDIAN_S32_Median(ptr, array)            SrvB_Median_S32(ptr, array)
#define MEDIAN_U32_Median(ptr, array)            SrvB_Median_U32(ptr, array)
#define MEDIAN_R32_Median(ptr, array)            SrvF_Median_R32(ptr, array)

/*************************************************************************/
/* Median_5                                                              */
/*************************************************************************/

#define MEDIAN_5_S16_sort(array)                 Median5_S16(array)
#define MEDIAN_5_U16_sort(array)                 Median5_U16(array)
#define MEDIAN_5_R32_sort(array)                 Median5_R32(array)

/*************************************************************************/
/* Srv_Median5                                                           */
/*************************************************************************/

#define SRV_MEDIAN5_U8_out(ptr,array)            SrvB_Median5U8((array))
#define SRV_MEDIAN5_S16_out(ptr,array)           SrvB_Median5S16((array))

/*************************************************************************/
/* Srv_MulAdd                                                            */
/*************************************************************************/

#define SRV_MULADD_S16_out(x,y,z)                SrvB_MulAdd16(x,y,z)
#define SRV_MULADD_S32_out(x,y,z)                SrvB_MulAdd32(x,y,z)

/*************************************************************************/
/* MulAdd                                                                */
/*************************************************************************/

#define MULADD_S32S16_MulAdd(x,y,z)              SrvB_MulAdd_S32S32S32_S16((x),(y),(z))
#define MULADD_S32S32_MulAdd(x,y,z)              SrvB_MulAdd_S32S32S32_S32((x),(y),(z))
#define MULADD_U32U16_MulAdd(x,y,z)              SrvB_MulAdd_U32U32U32_U16((x),(y),(z))
#define MULADD_U32U32_MulAdd(x,y,z)              SrvB_MulAdd_U32U32U32_U32((x),(y),(z))

/*************************************************************************/
/* Srv_MulDiv                                                            */
/*************************************************************************/

#define SRV_MULDIV_S16_out(x,y,z)                SrvB_MulDiv16(x,y,z)
#define SRV_MULDIV_S32_out(x,y,z)                SrvB_MulDiv32(x,y,z)

/*************************************************************************/
/* MulDiv                                                                */
/*************************************************************************/

#define MULDIV_S32S16_MulDiv(x,y,z)              SrvB_MulDiv_S32S32S32_S16((x),(y),(z))
#define MULDIV_S32S32_MulDiv(x,y,z)              SrvB_MulDiv_S32S32S32_S32((x),(y),(z))
#define MULDIV_S32U16_MulDiv(x,y,z)              SrvB_MulDiv_S32S32S32_U16((x),(y),(z))
#define MULDIV_U32U16_MulDiv(x,y,z)              SrvB_MulDiv_U32U32U32_U16((x),(y),(z))
#define MULDIV_U32U32_MulDiv(x,y,z)              SrvB_MulDiv_U32U32U32_U32((x),(y),(z))

/*************************************************************************/
/* Srv_MulShRight                                                        */
/*************************************************************************/

#define SRV_MULSHRIGHT_S16_out(x,y,n)            SrvB_MulShRight16(x,y,n)
#define SRV_MULSHRIGHT_S32_out(x,y,n)            SrvB_MulShRight32(x,y,n)

/*************************************************************************/
/* MulShR                                                                */
/*************************************************************************/

#define MULSHR_S32S32S8_MulShR(x,y,n)            SrvB_MulShRight_S32S32_S8((x),(y),(n))
#define MULSHR_S32S32S16_MulShR(x,y,n)           SrvB_MulShRight_S32S32_S16((x),(y),(n))
#define MULSHR_S32S32S32_MulShR(x,y,n)           SrvB_MulShRight_S32S32_S32((x),(y),(n))
#define MULSHR_S32S32U8_MulShR(x,y,n)            SrvB_MulShRight_S32S32_U8((x),(y),(n))
#define MULSHR_S32S32U16_MulShR(x,y,n)           SrvB_MulShRight_S32S32_U16((x),(y),(n))
#define MULSHR_S32S32U32_MulShR(x,y,n)           SrvB_MulShRight_S32S32_U32((x),(y),(n))
#define MULSHR_U32S32S8_MulShR(x,y,n)            SrvB_MulShRight_U32S32_S8((x),(y),(n))
#define MULSHR_U32S32S16_MulShR(x,y,n)           SrvB_MulShRight_U32S32_S16((x),(y),(n))
#define MULSHR_U32S32S32_MulShR(x,y,n)           SrvB_MulShRight_U32S32_S32((x),(y),(n))
#define MULSHR_U32S32U8_MulShR(x,y,n)            SrvB_MulShRight_U32S32_U8((x),(y),(n))
#define MULSHR_U32S32U16_MulShR(x,y,n)           SrvB_MulShRight_U32S32_U16((x),(y),(n))
#define MULSHR_U32S32U32_MulShR(x,y,n)           SrvB_MulShRight_U32S32_U32((x),(y),(n))
#define MULSHR_U32U32S8_MulShR(x,y,n)            SrvB_MulShRight_U32U32_S8((x),(y),(n))
#define MULSHR_U32U32S16_MulShR(x,y,n)           SrvB_MulShRight_U32U32_S16((x),(y),(n))
#define MULSHR_U32U32S32_MulShR(x,y,n)           SrvB_MulShRight_U32U32_S32((x),(y),(n))
#define MULSHR_U32U32U8_MulShR(x,y,n)            SrvB_MulShRight_U32U32_U8((x),(y),(n))
#define MULSHR_U32U32U16_MulShR(x,y,n)           SrvB_MulShRight_U32U32_U16((x),(y),(n))
#define MULSHR_U32U32U32_MulShR(x,y,n)           SrvB_MulShRight_U32U32_U32((x),(y),(n))

/*************************************************************************/
/* SortAsc                                                               */
/*************************************************************************/

#define SORTASC_S8_SortAsc(ptr,array)            SrvB_SortAscS8(ptr,array)
#define SORTASC_U8_SortAsc(ptr,array)            SrvB_SortAscU8(ptr,array)
#define SORTASC_S16_SortAsc(ptr,array)           SrvB_SortAscS16(ptr,array)
#define SORTASC_U16_SortAsc(ptr,array)           SrvB_SortAscU16(ptr,array)
#define SORTASC_S32_SortAsc(ptr,array)           SrvB_SortAscS32(ptr,array)
#define SORTASC_U32_SortAsc(ptr,array)           SrvB_SortAscU32(ptr,array)
#define SORTASC_R32_SortAsc(ptr,array)           SrvF_SortAscR32(ptr,array)

/*************************************************************************/
/* Srv_SortAsc                                                           */
/*************************************************************************/

#define SRV_SORTASC_U8_out(ptr,in,n,out)         SrvB_SortAscU8((in), (n)); *(out) = *(in)
#define SRV_SORTASC_S16_out(ptr,in,n,out)        SrvB_SortAscS16((in), (n)); *(out) = *(in)

/*************************************************************************/
/* SortDesc                                                              */
/*************************************************************************/

#define SORTDESC_S8_SortDesc(ptr,array)          SrvB_SortDescS8(ptr,array)
#define SORTDESC_U8_SortDesc(ptr,array)          SrvB_SortDescU8(ptr,array)
#define SORTDESC_S16_SortDesc(ptr,array)         SrvB_SortDescS16(ptr,array)
#define SORTDESC_U16_SortDesc(ptr,array)         SrvB_SortDescU16(ptr,array)
#define SORTDESC_S32_SortDesc(ptr,array)         SrvB_SortDescS32(ptr,array)
#define SORTDESC_U32_SortDesc(ptr,array)         SrvB_SortDescU32(ptr,array)
#define SORTDESC_R32_SortDesc(ptr,array)         SrvF_SortDescR32(ptr,array)

/*************************************************************************/
/* Srv_SortDesc                                                          */
/*************************************************************************/

#define SRV_SORTDESC_U8_out(ptr,in,n,out)        SrvB_SortDescU8((in), (n)); *(out) = *(in)
#define SRV_SORTDESC_S16_out(ptr,in,n,out)       SrvB_SortDescS16((in), (n)); *(out) = *(in)

/*************************************************************************/
/* Srv_Sqrt                                                              */
/*************************************************************************/

#define SRV_SQRT_REAL_out(x)                     SrvF_Sqrt(x)
#define SRV_SQRTPREC_REAL_out(x)         		 SrvF_SqrtPrec_R32(x)

/*************************************************************************/
/* SrvF_SearchResult                                                     */
/*************************************************************************/

#define _SRVF_SEARCHRESULTR32_T_                 PROTECT_TYPEDEF
#define SRVF_SEARCHRESULTR32_T                   SrvF_SearchResultR32_t

#define _SRVX_SEARCHRESULTU16_T_                 PROTECT_TYPEDEF
#define SRVX_SEARCHRESULTU16_T                   SrvX_SearchResultU16_t


/*
 ***************************************************************************************************
 *  Srv_RealtoInteger                   
 ***************************************************************************************************
 */

#define SRV_REALTOINTEGER_U8_out(X)    SrvF_RealToInteger_R32_U8(X)
#define SRV_REALTOINTEGER_U16_out(X)   SrvF_RealToInteger_R32_U16(X)
#define SRV_REALTOINTEGER_U32_out(X)   SrvF_RealToInteger_R32_U32(X)
#define SRV_REALTOINTEGER_S8_out(X)    SrvF_RealToInteger_R32_S8(X)
#define SRV_REALTOINTEGER_S16_out(X)   SrvF_RealToInteger_R32_S16(X)
#define SRV_REALTOINTEGER_S32_out(X)   SrvF_RealToInteger_R32_S32(X)


/*
 ***************************************************************************************************
 *Srv_ValidationLimiter
 ***************************************************************************************************
 */
#define SRV_VALIDATIONLIMITER_R32_out(X,lower_limit,replace_value,upper_limit) SrvF_ValidationLimiter_R32(X,lower_limit,replace_value,upper_limit)


/*
 ***************************************************************************************************
 *Srv_IsGreater
 ***************************************************************************************************
 */
 #define SRV_ISGREATER_R32R32B_out(X,Y) SrvF_IsGreater_R32R32_B(X,Y)
 
 
 /* 
 ***************************************************************************************************
 *Srv_IsLower
 ***************************************************************************************************
 */
 #define SRV_ISLOWER_R32R32B_out(X,Y) SrvF_IsLower_R32R32_B(X,Y)
 
 /* 
 ***************************************************************************************************
 *Srv_IsEqual
 ***************************************************************************************************
 */
 #define SRV_ISEQUAL_R32R32B_out(X,Y,PRS) SrvF_IsEqual_R32_R32_B(X,Y,PRS)
 
  /* 
 ***************************************************************************************************
 *SrvF_MemCopy
 ***************************************************************************************************
 */
 #define SRVF_MEMCOPY_R32_calc(Src, Dest, n) SrvF_MemCopyR32(Dest, Src, n)
 
 
#endif  /*#ifndef _CODEGEN_SRV_ARITHMETIC_H*/
