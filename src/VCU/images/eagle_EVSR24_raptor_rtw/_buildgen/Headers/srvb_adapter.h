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
 * $Filename__:srvb_adapter.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MNA9COB$ 
 * $Date______:26.07.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_adapter$ 
 * $Variant___:1.24.1$ 
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
 * 1.24.1; 0     26.07.2016 MNA9COB
 *   1. Function returns a wrong value when the value of unsigned input is 
 *   greater than its corresponding MAXSINTxx.
 *   Affected Functionalities:
 *    neg_u8_s8 
 *    neg_u16_s16
 *    neg_u32_s32
 *   2. Function returns a wrong value when the value of input is equal to 
 *   MINSINTxx (Minimum Value).
 *   Affected Functionalities:
 *    neg_S8_S8
 *    neg_S16_S16
 *    neg_S32_S32
 * 
 * 1.21.1; 0     11.11.2014 NSL2COB
 *   -Bugfixed  for abs limit
 * 
 * 1.16.0; 1     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 0     07.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.13.1; 0     24.02.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.13.0.1
 * 
 * 1.13.0; 0     09.02.2010 VKA2FE
 *   Derived from B_SRVB.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.1; 0     18.10.2009 VKA2FE
 *   Bugfix delivery derived from B_SRVB.11.0.1
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_ADAPTER_H
#define _SRVB_ADAPTER_H


/* timer structs */
#include "srvb_timer.h"
typedef SrvB_SWTmrS16_t SrvB_SWTmrS16;
typedef SrvB_SWTmrS32_t SrvB_SWTmrS32;

/* filter structs */
typedef struct
{
  sint32 summ;
  sint32 n;
  sint16 *p_beg;
  sint16 *p_end;
  sint16 *p_act;
} avrgsldngS16_t;

typedef struct
{
  sint64 summ;
  sint32 n;
  sint32 *p_beg;
  sint32 *p_end;
  sint32 *p_act;
} avrgsldngS32_t;



/* A */
#define abs_S16(X)                         SrvB_Abs_S32_S16((X))
#define abs_S16_U16(X)                     SrvB_Abs_S32_U16((sint32)(X))
#define abs_S32(X)                         SrvB_Abs_S32_S32((X))
#define abs_S32_U32(X)                     SrvB_Abs_S32_U32((X))
#define abs_S8(X)                          SrvB_Abs_S32_S8((X))
#define abs_S8_U8(X)                       SrvB_Abs_S32_U8((sint32)(X))
#define SrvB_Abs16(X)                      SrvB_Abs_S32_S16(X)
#define Abs16(X)                           SrvB_Abs_S32_S16((X))
#define SrvB_Abs32(X)                      SrvB_Abs_S32_S32((X))
#define Abs32(X)                           SrvB_Abs_S32_S32((X))
#define SrvB_Abs8(X)                       SrvB_Abs_S32_U8((X))
#define Abs8(X)                            SrvB_Abs_S32_S8((X))
#define SrvB_AbsDiff16(X,Y)                SrvB_AbsDiff_S32S32_S16((X),(Y))
#define SrvB_AbsDiff16_inline              SrvB_AbsDiff_S32S32_S16_inline
#define SrvB_AbsDiff32(X,Y)                SrvB_AbsDiff_S32S32_S32((X),(Y))
#define SrvB_AbsDiff32_inline              SrvB_AbsDiff_S32S32_S32_inline
#define SrvB_AbsDiff8(X,Y)                 SrvB_AbsDiff_S32S32_U8((X),(Y))
#define SrvB_AbsDiff8_inline               SrvB_AbsDiff_S32S32_U8_inline

#define add_S16S16_S16(X,Y)                SrvB_Add_S32S32_S16((X),(Y))
#define add_S16S16_U16(X,Y)                SrvB_Add_S32S32_U16((sint32)(X),(sint32)(Y))
#define add_S16U16_S16(X,Y)                SrvB_Add_S32S32_S16((sint32)(X),(sint32)(Y))
#define add_S16U16_U16(X,Y)                SrvB_Add_S32S32_U16((sint32)(X),(sint32)(Y))
#define add_S8S8_S8(X,Y)                   SrvB_Add_S32S32_S8((sint32)(X),(sint32)(Y))
#define add_S8S8_U8(X,Y)                   SrvB_Add_S32S32_U8((sint32)(X),(sint32)(Y))
#define add_S8U8_S8(X,Y)                   SrvB_Add_S32S32_S8((sint32)(X),(sint32)(Y))
#define add_S8U8_U8(X,Y)                   SrvB_Add_S32S32_U8((sint32)(X),(sint32)(Y))
#define add_U16S16_S16(X,Y)                SrvB_Add_S32S32_S16((sint32)(X),(sint32)(Y))
#define add_U16S16_U16(X,Y)                SrvB_Add_S32S32_U16((sint32)(X),(sint32)(Y))
#define add_U16U16_S16(X,Y)                SrvB_Add_S32S32_S16((sint32)(X),(sint32)(Y))
#define add_U16U16_U16(X,Y)                SrvB_Add_U32U32_U16((uint32)(X),(uint32)(Y))
#define add_U8S8_S8(X,Y)                   SrvB_Add_S32S32_S8((sint32)(X),(sint32)(Y))
#define add_U8S8_U8(X,Y)                   SrvB_Add_S32S32_U8((sint32)(X),(sint32)(Y))
#define add_U8U8_S8(X,Y)                   SrvB_Add_S32S32_S8((sint32)(X),(sint32)(Y))
#define add_U8U8_U8(X,Y)                   SrvB_Add_U32U32_U8((uint32)(X),(uint32)(Y))
#define SrvB_Add16(X,Y)                    SrvB_Add_S32S32_S16((X),(Y))
#define SrvB_Add16_inline                  SrvB_Add_S32S32_S16_inline
#define SrvB_Add32(X,Y)                    SrvB_Add_S32S32_S32((X),(Y))
#define SrvB_Add32_inline                  SrvB_Add_S32S32_S32_inline
#define SrvB_Add8(X,Y)                     SrvB_Add_S32S32_U8((X),(Y))
#define SrvB_Add8_inline                   SrvB_Add_S32S32_U8_inline
#define AddS16(X,Y)                        SrvB_Add_S32S32_S16((X),(Y))
#define AddS16_INLINE(X,Y)                 SrvB_Add_S32S32_S16_inline((X),(Y))
#define AddS16Limit(X,Y,MIN,MAX)           SrvB_RangeLimiter_S16(SrvB_Add_S32S32_S16((X),(Y)),(sint16)(MIN),(sint16)(MAX))
#define AddS32(X,Y)                        SrvB_Add_S32S32_S32((sint32)(X),(sint32)(Y))
#define AddS32_INLINE(X,Y)                 SrvB_Add_S32S32_S32_inline((sint32)(X),(sint32)(Y))
#define AddS32Limit(X,Y,MIN,MAX)           SrvB_RangeLimiter_S32(SrvB_Add_S32S32_S32((X),(Y)),(MIN),(MAX))
#define SrvB_AddS8(X,Y)                    SrvB_Add_S32S32_S8((X),(Y))
#define AddS8(X,Y)                         SrvB_Add_S32S32_S8((sint32)(X),(sint32)(Y))
#define SrvB_AddS8_inline                  SrvB_Add_S32S32_S8_inline
#define SrvB_AddU16(X,Y)                   SrvB_Add_S32S32_U16((X),(Y))
#define AddU16(X,Y)                        SrvB_Add_S32S32_U16((sint32)(X), (sint32)(Y))
#define SrvB_AddU16_inline                 SrvB_Add_S32S32_U16_inline
#define SrvB_AddU32(X,Y)                   SrvB_Add_U32U32_U32((X),(Y))
#define AddU32(X,Y)                        SrvB_Add_U32U32_U32((uint32)(X), (uint32)(Y))
#define SrvB_AddU32_inline                 SrvB_Add_U32U32_U32_inline
#define AddU32_INLINE(X,Y)                 SrvB_Add_U32U32_U32_inline((uint32)(X), (uint32)(Y))
#define AddU8(X,Y)                         SrvB_Add_S32S32_U8((sint32)(X), (sint32)(Y))
#define SrvB_Average(X,Y)                  SrvB_Average_S32S32_S32((X),(Y))
#define SrvB_Average_inline                SrvB_Average_S32S32_S32_inline
#define SrvB_AvrgArrS16(PTR,N)             SrvB_AverageArray_S16((PTR),(uint8)(N))
#define SrvB_AvrgArrS32(PTR,N)             SrvB_AverageArray_S32((PTR),(uint8)(N))

/* B */
#define SrvB_BitPosLSB(BASE,HILO)          SrvB_BitPosLSBU32((BASE),(HILO))
#define SrvB_BitPosMSB(BASE,HILO)          SrvB_BitPosMSBU32((BASE),(HILO))

/* C */
#define CLRBIT_B(BAS,POS)                  SrvB_ClrBitU8((uint8*)&(BAS),(POS))
#define CLRBIT_L(BAS,POS)                  SrvB_ClrBitU32((uint32*)&(BAS),(POS))
#define CLRBIT_W(BAS,POS)                  SrvB_ClrBitU16((uint16*)&(BAS),(POS))
#define Counter_U16(CTR)                   SrvB_Counter_U16(CTR)
#define Counter_U8(CTR)                    SrvB_Counter_U8(CTR)
#define SrvB_ClrBitAtmc32(BASE,POS)        SrvB_ClrBitAtmcU32((BASE),(POS))
#define SrvB_ClrBitAtmcNear(BASE,POS)      SrvB_ClrBitAtmcNearU32((BASE),(POS))
#define SrvB_Counter8(CTR)                 SrvB_Counter_U8(CTR)
#define SrvB_CountLeadingOnes(BASE)        SrvB_LeadingOnes_U32_S32((BASE))
#define SrvB_CountLeadingSigns(BASE)       SrvB_LeadingSigns_S32_S32((BASE))
#define SrvB_CountLeadingZeros(BASE)       SrvB_LeadingZeros_U32_S32((BASE))

/* D */
#define div_S16S16_U16(X,Y)                SrvB_Div_S32S32_U16((sint32)(X),(sint32)(Y))
#define div_S16U16_U16(X,Y)                SrvB_Div_S32S32_U16((sint32)(X),(sint32)(Y))
#define div_S16U8_S16(X,Y)                 SrvB_Div_S32S32_S16((sint32)(X),(sint32)(Y))
#define div_S32S16_S32(X,Y)                SrvB_Div_S32S32_S32((X),(sint32)(Y))
#define div_S32S32_S16(X,Y)                SrvB_Div_S32S32_S16((X),(Y))
#define div_S32S32_S32(X,Y)                SrvB_Div_S32S32_S32((X),(Y))
#define div_S8S8_S8(X,Y)                   SrvB_Div_S32S32_S8((sint32)(X),(sint32)(Y))
#define div_S8U8_S8(X,Y)                   SrvB_Div_S32S32_S8((sint32)(X),(sint32)(Y))
#define div_U16S16_U16(X,Y)                SrvB_Div_S32S32_U16((sint32)(X),(sint32)(Y))
#define div_U16U16_U16(X,Y)                SrvB_Div_S32S32_U16((sint32)(X),(sint32)(Y))
#define div_U32U32_U32(X,Y)                SrvB_Div_U32U32_U32((X),(Y))
#define div_U8S8_S8(X,Y)                   SrvB_Div_S32S32_S8((sint32)(X),(sint32)(Y))
#define div_U8U8_S8(X,Y)                   SrvB_Div_S32S32_S8((sint32)(X),(sint32)(Y))
#define div_U8U8_U8(X,Y)                   SrvB_Div_S32S32_U8((sint32)(X), (sint32)(Y))
#define SrvB_Div16(X,Y)                    SrvB_Div_S32S32_S16((X),(Y))
#define SrvB_Div16_inline                  SrvB_Div_S32S32_S16_inline
#define SrvB_Div32(X,Y)                    SrvB_Div_S32S32_S32((X),(Y))
#define SrvB_Div32_inline                  SrvB_Div_S32S32_S32_inline
#define SrvB_Div64(X,Y)                    SrvB_Div_S64S32_S32((X),(Y))
#define SrvB_Div64_inline                  SrvB_Div_S64S32_S32_inline
#define SrvB_Div8(X,Y)                     SrvB_Div_S32S32_U8((X),(Y))
#define SrvB_Div8_inline                   SrvB_Div_S32S32_U8_inline
#define DivS16(X,Y)                        SrvB_Div_S32S32_S16((sint32)(X),(sint32)(Y))
#define DivS32(X,Y)                        SrvB_Div_S32S32_S32((sint32)(X),(sint32)(Y))
#define SrvB_DivS8(X,Y)                    SrvB_Div_S32S32_S8((X),(Y))
#define DivS8(X,Y)                         SrvB_Div_S32S32_S8((sint32)(X), (sint32)(Y))
#define SrvB_DivS8_inline                  SrvB_Div_S32S32_S8_inline
#define SrvB_DivU16(X,Y)                   SrvB_Div_S32S32_U16((X),(Y))
#define DivU16(X,Y)                        SrvB_Div_U32U32_U16((X),(Y))
#define SrvB_DivU16_inline                 SrvB_Div_S32S32_U16_inline
#define SrvB_DivU32(X,Y)                   SrvB_Div_U32U32_U32((X),(Y))
#define DivU32(X,Y)                        SrvB_Div_U32U32_U32((X), (Y))
#define SrvB_DivU32_inline                 SrvB_Div_U32U32_U32_inline
#define DivU8(X,Y)                         SrvB_Div_U32U32_U8((X),(Y))

/* E */
#define EdgeBiNoMem(OLD,INP)               SrvB_EdgeBipol_B((INP),(OLD))
#define SrvB_EdgeBipol(INP,OLD)            SrvB_EdgeBipol_B((INP),(OLD))
#define SrvB_EdgeFalling(INP,OLD)          SrvB_EdgeFalling_B((INP),(OLD))
#define EdgeFallingNoMem(OLD,INP)          SrvB_EdgeFalling((INP),(OLD))
#define SrvB_EdgeRising(INP,OLD)           SrvB_EdgeRising_B((INP),(OLD))
#define EdgeRisingNoMem(OLD,INP)           SrvB_EdgeRising_B((INP),(OLD))

/* G */
#define GETBIT_B(BAS,POS)                  SrvB_GetBitU8_B((BAS),(POS))
#define GETBIT_L(BAS,POS)                  SrvB_GetBitU32_B((BAS),(POS))
#define GETBIT_W(BAS,POS)                  SrvB_GetBitU16_B((BAS),(POS))
#define SrvB_GetBitAtmc32(BASE,POS)        SrvB_GetBitU32_B((uint32)(BASE),(POS))
#define SrvB_GetBitAtmcNear(BASE,POS)      SrvB_GetBitU32_B((uint32)(BASE),(POS))


/* H */
#define Hysteresis_Delta_RSP_S32(STATE,X,DELTA,RSP)          SrvB_SwitchHystDR_S32_B((X),(DELTA),(RSP),(STATE))
#define Hysteresis_Delta_RSP_SEQCALL_S32(STATE,X,DELTA,RSP)  SrvB_SwitchHystDR_S32_B((X),(DELTA),(RSP),(STATE))
#define Hysteresis_Delta_RSP_SEQCALL_U32(STATE,X,DELTA,RSP)  SrvB_SwitchHystDR_U32_B((X),(DELTA),(RSP),(STATE))
#define Hysteresis_Delta_RSP_U32(STATE,X,DELTA,RSP)          SrvB_SwitchHystDR_U32_B((X),(DELTA),(RSP),(STATE))
#define Hysteresis_LSP_Delta_S32(STATE,X,LSP,DELTA)          SrvB_SwitchHystLD_S32_B((X),(LSP),(DELTA),(STATE))
#define Hysteresis_LSP_Delta_SEQCALL_S32(STATE,X,LSP,DELTA)  SrvB_SwitchHystLD_S32_B((X),(LSP),(DELTA),(STATE))
#define Hysteresis_LSP_Delta_SEQCALL_U32(STATE,X,LSP,DELTA)  SrvB_SwitchHystLD_U32_B((X),(LSP),(DELTA),(STATE))
#define Hysteresis_LSP_Delta_U32(STATE,X,LSP,DELTA)          SrvB_SwitchHystLD_U32_B((X),(LSP),(DELTA),(STATE))
#define Hysteresis_LSP_RSP_S32(STATE,X,LSP,RSP)              SrvB_SwitchHystLR_S32_B((X),(LSP),(RSP),(STATE))
#define Hysteresis_LSP_RSP_SEQCALL_S32(STATE,X,LSP,RSP)      SrvB_SwitchHystLR_S32_B((X),(LSP),(RSP),(STATE))
#define Hysteresis_LSP_RSP_SEQCALL_U32(STATE,X,LSP,RSP)      SrvB_SwitchHystLR_U32_B((X),(LSP),(RSP),(STATE))
#define Hysteresis_LSP_RSP_U32(STATE,X,LSP,RSP)              SrvB_SwitchHystLR_U32_B((X),(LSP),(RSP),(STATE))
#define Hysteresis_MSP_DeltaHalf_S32(STATE,X,C,DH)           SrvB_SwitchHystCHD_S32_B((X),(C),(DH),(STATE))
#define Hysteresis_MSP_DeltaHalf_SEQCALL_S32(STATE,X,C,DH)   SrvB_SwitchHystCHD_S32_B((X),(C),(DH),(STATE))
#define Hysteresis_MSP_DeltaHalf_SEQCALL_U32(STATE,X,C,DH)   SrvB_SwitchHystCHD_U32_B((X),(C),(DH),(STATE))
#define Hysteresis_MSP_DeltaHalf_U32(STATE,X,C,DH)           SrvB_SwitchHystCHD_U32_B((X),(C),(DH),(STATE))

/* L */
#define limit_S16_S8(X)                    SrvB_TypeLimiter_S32_S8((sint32)(X))
#define limit_U16_S8(X)                    SrvB_TypeLimiter_S32_S8((sint32)(X))
#define limit_S16_U8(X)                    SrvB_TypeLimiter_S32_U8((sint32)(X))
#define limit_U16_U8(X)                    SrvB_TypeLimiter_U32_U8((uint32)(X))
#define limit_U16_S16(X)                   SrvB_TypeLimiter_S32_S16((sint32)(X))
#define limit_S32_S16(X)                   SrvB_TypeLimiter_S32_S16((sint32)(X))
#define limit_U32_S16(X)                   SrvB_TypeLimiter_U32_S16((uint32)(X))
#define limit_S16_U16(X)                   SrvB_TypeLimiter_S32_U16((sint32)(X))
#define limit_S32_U16(X)                   SrvB_TypeLimiter_S32_U16((sint32)(X))
#define limit_U32_U16(X)                   SrvB_TypeLimiter_U32_U16((uint32)(X))
#define Limiter_S32(MIN,X,MAX)             SrvB_RangeLimiter_S32((X),(MIN),(MAX))
#define Limiter_U32(MIN,X,MAX)             SrvB_RangeLimiter_U32((X),(MIN),(MAX))

/* M */
#define Median5_S16(ARRAY)                 SrvB_Median5S16((ARRAY))
#define median5_U16                        Median5_U16
#define mul_R1_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 1))
#define mul_R1_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 1))
#define mul_R1_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 1))
#define mul_R1_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 1))
#define mul_R10_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(10))
#define mul_R10_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(10))
#define mul_R10_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(10))
#define mul_R10_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(10))
#define mul_R10_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),10)
#define mul_R11_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(11))
#define mul_R11_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(11))
#define mul_R11_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(11))
#define mul_R11_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(11))
#define mul_R11_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),11)
#define mul_R12_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(12))
#define mul_R12_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(12))
#define mul_R12_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(12))
#define mul_R12_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(12))
#define mul_R12_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),12)
#define mul_R13_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(13))
#define mul_R13_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(13))
#define mul_R13_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(13))
#define mul_R13_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(13))
#define mul_R13_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),13)
#define mul_R14_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(14))
#define mul_R14_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(14))
#define mul_R14_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(14))
#define mul_R14_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(14))
#define mul_R14_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),14)
#define mul_R15_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(15))
#define mul_R15_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(15))
#define mul_R15_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(15))
#define mul_R15_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(15))
#define mul_R15_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),15)
#define mul_R16_S16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(16))
#define mul_R16_S16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(16))
#define mul_R16_U16S16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(16))
#define mul_R16_U16U16_S16(X,Y)            SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),(16))
#define mul_R16_U32U32_U32(X,Y)            SrvB_MulShRight_U32U32_U32((X),(Y),16)
#define mul_R2_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 2))
#define mul_R2_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 2))
#define mul_R2_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 2))
#define mul_R2_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 2))
#define mul_R3_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 3))
#define mul_R3_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 3))
#define mul_R3_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 3))
#define mul_R3_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 3))
#define mul_R4_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 4))
#define mul_R4_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 4))
#define mul_R4_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 4))
#define mul_R4_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 4))
#define mul_R5_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 5))
#define mul_R5_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 5))
#define mul_R5_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 5))
#define mul_R5_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 5))
#define mul_R6_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 6))
#define mul_R6_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 6))
#define mul_R6_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 6))
#define mul_R6_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 6))
#define mul_R7_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 7))
#define mul_R7_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 7))
#define mul_R7_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 7))
#define mul_R7_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 7))
#define mul_R7_U32U32_U32(X,Y)             SrvB_MulShRight_U32U32_U32((X),(Y),7)
#define mul_R8_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 8))
#define mul_R8_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 8))
#define mul_R8_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 8))
#define mul_R8_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 8))
#define mul_R8_U32U32_U32(X,Y)             SrvB_MulShRight_U32U32_U32((X),(Y),8)
#define mul_R9_S16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 9))
#define mul_R9_S16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 9))
#define mul_R9_U16S16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 9))
#define mul_R9_U16U16_S16(X,Y)             SrvB_MulShRight_S32S32_S16((sint32)(X),(sint32)(Y),( 9))
#define mul_R9_U32U32_U32(X,Y)             SrvB_MulShRight_U32U32_U32((X),(Y),9)
#define mul_Rx_S16S16_S16(X,Y,N)           SrvB_MulShRight16((sint32)(X),(sint32)(Y),(sint32)(N))
#define mul_Rx_S16U16_S16(X,Y,N)           SrvB_MulShRight16((sint32)(X),(sint32)(Y),(sint32)(N))
#define mul_Rx_U16S16_S16(X,Y,N)           SrvB_MulShRight16((sint32)(X),(sint32)(Y),(sint32)(N))
#define mul_Rx_U16S16_U16(X,Y,N)           SrvB_MulShRight_S32S32_U16((sint32)(X),(sint32)(Y),(uint8)(N))
#define mul_Rx_U16U16_S16(X,Y,N)           SrvB_MulShRight16((sint32)(X),(sint32)(Y),(sint32)(N))
#define mul_Rx_U16U16_U16(X,Y,N)           SrvB_MulShRight_U32U32_U16((uint32)(X),(uint32)(Y),(uint8)(N))
#define mul_S16S16_S16(X,Y)                SrvB_Mul_S32S32_S16((sint32)(X),(sint32)(Y))
#define mul_S16S16_S32(X,Y)                ((sint32)(sint16)(X) * (sint32)(sint16)(Y))
#define mul_S16S16_U16(X,Y)                SrvB_Mul_S32S32_U16((sint32)(X),(sint32)(Y))
#define mul_S16U16_S16(X,Y)                SrvB_Mul_S32S32_S16((sint32)(X),(sint32)(Y))
#define mul_S16U16_S32(X,Y)                ((sint32)(sint16)(X) * (sint32)(uint16)(Y))
#define mul_S16U16_U16(X,Y)                SrvB_Mul_S32S32_U16((sint32)(X),(sint32)(Y))
#define mul_U16S16_S16(X,Y)                SrvB_Mul_S32S32_S16((sint32)(X),(sint32)(Y))
#define mul_U16S16_U16(X,Y)                SrvB_Mul_S32S32_U16((sint32)(X),(sint32)(Y))
#define mul_U16U16_S16(X,Y)                SrvB_Mul_S32S32_S16((sint32)(X),(sint32)(Y))
#define mul_U16U16_U16(X,Y)                SrvB_Mul_S32S32_U16((sint32)(X),(sint32)(Y))
#define mul_U16U16_U32(X,Y)                ((uint32)(uint16)(X) * (uint32)(uint16)(Y))
#define SrvB_Mul16(X,Y)                    SrvB_Mul_S32S32_S16((X),(Y))
#define SrvB_Mul16_inline                  SrvB_Mul_S32S32_S16_inline
#define SrvB_Mul32(X,Y)                    SrvB_Mul_S32S32_S32((X),(Y))
#define SrvB_Mul32_inline                  SrvB_Mul_S32S32_S32_inline
#define SrvB_Mul8(X,Y)                     SrvB_Mul_S32S32_U8((X),(Y))
#define SrvB_Mul8_inline                   SrvB_Mul_S32S32_U8_inline
#define SrvB_MulAdd16(M1,M2,A)             SrvB_MulAdd_S32S32S32_S16((M1),(M2),(A))
#define SrvB_MulAdd16_inline               SrvB_MulAdd_S32S32S32_S16_inline
#define SrvB_MulAdd32(M1,M2,A)             SrvB_MulAdd_S32S32S32_S32((M1),(M2),(A))
#define SrvB_MulAdd32_inline               SrvB_MulAdd_S32S32S32_S32_inline
#define SrvB_MulDiv16(M1,M2,D)             SrvB_MulDiv_S32S32S32_S16((M1),(M2),(D))
#define SrvB_MulDiv16_inline               SrvB_MulDiv_S32S32S32_S16_inline
#define SrvB_MulDiv32(M1,M2,D)             SrvB_MulDiv_S32S32S32_S32((M1),(M2),(D))
#define SrvB_MulDiv32_inline               SrvB_MulDiv_S32S32S32_S32_inline
#define MulS16(X,Y)                        SrvB_Mul_S32S32_S16((sint32)(X),(sint32)(Y))
#define MulS32(X,Y)                        SrvB_Mul_S32S32_S32((sint32)(X),(sint32)(Y))
#define SrvB_MulS8(X,Y)                    SrvB_Mul_S32S32_S8((X),(Y))
#define SrvB_MulS8_inline                  SrvB_Mul_S32S32_S8_inline
#define MulShift_U16S16_U16(X,Y,N)         SrvB_MulShRight_S32S32_U16((X),(Y),(uint8)(N))
#define MulShiftS16(X,Y,N)                 SrvB_MulShRight16((X),(Y),(N))
#define MulShiftS8(X,Y,N)                  SrvB_MulShRight_S32S32_S8 ((X),(Y),(uint8)(N))
#define MulShiftU16(X,Y,N)                 SrvB_MulShRight_U32U32_U16((X),(Y),(uint8)(N))
#define MulShiftU8(X,Y,N)                  SrvB_MulShRight_U32U32_U8 ((X),(Y),(uint8)(N))
#define SrvB_MulU16(X,Y)                   SrvB_Mul_S32S32_U16((X),(Y))
#define MulU16(X,Y)                        SrvB_Mul_U32U32_U16((uint32)(X),(uint32)(Y))
#define SrvB_MulU16_inline                 SrvB_Mul_S32S32_U16_inline
#define SrvB_MulU32(X,Y)                   SrvB_Mul_U32U32_U32((X),(Y))
#define MulU32(X,Y)                        SrvB_Mul_U32U32_U32((X),(Y))
#define SrvB_MulU32_inline                 SrvB_Mul_U32U32_U32_inline
#define SrvB_Mod_U16U16_U16                SrvB_Mod_U32U32_U16 
#define SrvB_Mod_S16S16_S16                SrvB_Mod_S32S32_S16
#define SrvB_Mod_U8U8_U8                   SrvB_Mod_U32U32_U8
#define SrvB_Mod_S8S8_S8                   SrvB_Mod_S32S32_S8
#define SrvB_Mod_U16U16_U16_inline         SrvB_Mod_U32U32_U16_inline 
#define SrvB_Mod_S16S16_S16_inline         SrvB_Mod_S32S32_S16_inline
#define SrvB_Mod_U8U8_U8_inline            SrvB_Mod_U32U32_U8_inline
#define SrvB_Mod_S8S8_S8_inline            SrvB_Mod_S32S32_S8_inline

/* P */
#define PUTBIT_B(BAS,POS,VAL)              SrvB_PutBitU8((uint8*)&(BAS),(POS),(VAL))
#define PUTBIT_L(BAS,POS,VAL)              SrvB_PutBitU32((uint32*)&(BAS),(POS),(VAL))
#define PUTBIT_W(BAS,POS,VAL)              SrvB_PutBitU16((uint16*)&(BAS),(POS),(VAL))
#define SrvB_ParityEven(X)                 SrvB_ParityEven_S32_B(X)
#define SrvB_ParityOdd(X)                  SrvB_ParityOdd_S32_B(X)
#define SrvB_PutBitAtmc32(BASE,POS,VAL)    SrvB_PutBitAtmcU32((BASE),(POS),(VAL))
#define SrvB_PutBitAtmcNear(BASE,POS,VAL)  SrvB_PutBitAtmcNearU32((BASE),(POS),(VAL))

/* R */
#define SrvB_RSFF(R,S,STATE)               SrvB_RSFF_B((R),(S),(STATE))

/* S */
#define SETBIT_B(BAS,POS)                  SrvB_SetBitU8((uint8*)&(BAS),(POS))
#define SETBIT_L(BAS,POS)                  SrvB_SetBitU32((uint32*)&(BAS),(POS))
#define SETBIT_W(BAS,POS)                  SrvB_SetBitU16((uint16*)&(BAS),(POS))
#define sub_S16S16_S16(X,Y)                SrvB_Sub_S32S32_S16((sint32)(X),(sint32)(Y))
#define sub_S16S16_U16(X,Y)                SrvB_Sub_S32S32_U16((sint32)(X),(sint32)(Y))
#define sub_S16U16_S16(X,Y)                SrvB_Sub_S32S32_S16((sint32)(X),(sint32)(Y))
#define sub_S16U16_U16(X,Y)                SrvB_Sub_S32S32_U16((sint32)(X),(sint32)(Y))
#define sub_S8S8_S8(X,Y)                   SrvB_Sub_S32S32_S8((sint32)(X),(sint32)(Y))
#define sub_S8S8_U8(X,Y)                   SrvB_Sub_S32S32_U8((sint32)(X),(sint32)(Y))
#define sub_S8U8_S8(X,Y)                   SrvB_Sub_S32S32_S8((sint32)(X),(sint32)(Y))
#define sub_S8U8_U8(X,Y)                   SrvB_Sub_S32S32_U8((sint32)(X),(sint32)(Y))
#define sub_U16S16_S16(X,Y)                SrvB_Sub_S32S32_S16((sint32)(X),(sint32)(Y))
#define sub_U16S16_U16(X,Y)                SrvB_Sub_S32S32_U16((sint32)(X),(sint32)(Y))
#define sub_U16U16_S16(X,Y)                SrvB_Sub_S32S32_S16((sint32)(X),(sint32)(Y))
#define sub_U16U16_U16(X,Y)                SrvB_Sub_S32S32_U16((sint32)(X),(sint32)(Y))
#define sub_U8S8_S8(X,Y)                   SrvB_Sub_S32S32_S8((sint32)(X),(sint32)(Y))
#define sub_U8S8_U8(X,Y)                   SrvB_Sub_S32S32_U8((sint32)(X),(sint32)(Y))
#define sub_U8U8_S8(X,Y)                   SrvB_Sub_S32S32_S8((sint32)(X),(sint32)(Y))
#define sub_U8U8_U8(X,Y)                   SrvB_Sub_S32S32_U8((sint32)(X),(sint32)(Y))
#define SrvB_SetBitAtmc32(BASE,POS)        SrvB_SetBitAtmcU32((BASE),(POS))
#define SrvB_SetBitAtmcNear(BASE,POS)      SrvB_SetBitAtmcNearU32((BASE),(POS))
#define SrvB_Sub16(X,Y)                    SrvB_Sub_S32S32_S16((X),(Y))
#define SrvB_Sub16_inline                  SrvB_Sub_S32S32_S16_inline
#define SrvB_Sub32(X,Y)                    SrvB_Sub_S32S32_S32((X),(Y))
#define SrvB_Sub32_inline                  SrvB_Sub_S32S32_S32_inline
#define SrvB_Sub8(X,Y)                     SrvB_Sub_S32S32_U8((X),(Y))
#define SrvB_Sub8_inline                   SrvB_Sub_S32S32_U8_inline
#define SubS16(X,Y)                        SrvB_Sub_S32S32_S16((sint32)(X),(sint32)(Y))
#define SubS32(X,Y)                        SrvB_Sub_S32S32_S32((sint32)(X),(sint32)(Y))
#define SrvB_SubS8(X,Y)                    SrvB_Sub_S32S32_S8((X),(Y))
#define SubS8(X,Y)                         SrvB_Sub_S32S32_S8((sint32)(X),(sint32)(Y))
#define SrvB_SubS8_inline                  SrvB_Sub_S32S32_S8_inline
#define SrvB_SubU16(X,Y)                   SrvB_Sub_S32S32_U16((X),(Y))
#define SubU16(X,Y)                        SrvB_Sub_S32S32_U16((sint32)(X),(sint32)(Y))
#define SrvB_SubU16_inline                 SrvB_Sub_S32S32_U16_inline
#define SrvB_SubU32(X,Y)                   SrvB_Sub_U32U32_U32((X),(Y))
#define SubU32(X,Y)                        SrvB_Sub_U32U32_U32((uint32)(X),(uint32)(Y))
#define SrvB_SubU32_inline                 SrvB_Sub_U32U32_U32_inline
#define SubU32_INLINE(X,Y)                 SrvB_Sub_U32U32_U32_inline((uint32)(X),(uint32)(Y))
#define SubU8(X,Y)                         SrvB_Sub_S32S32_U8((sint32)(X),(sint32)(Y))
#define sort5_U16                          Sort5_U16
#define sort5_S16                          Sort5_S16


/* Macros */

#define SrvB_ClrBit(base,pos)               ((base) &= ~(1u<<(pos)))

#define SrvB_ClrBit_ascet(base,pos)         ((base) &  (~(1u<<(pos))))

#define SrvB_CopyBit(base1,pos1,base2,pos2) ((base1) =                                           \
SrvB_CopyBit_ascet((uint32)(base1),(uint32)(pos1),(uint32)(base2),(uint32)(pos2)))

#define SrvB_ClrBitMask(base,mask)          ((base) &= ~(mask))

#define SrvB_ClrBitMask_ascet(base,mask)    ((base) &  ~(mask))

#define SrvB_GetBit(base,pos)               ((bool)( (( (base) & (((1u<<(pos)) ))) != 0) ))

#define SrvB_GetBitField(base,pos,len)                                                             \
(                                                                                                  \
    ( ((uint32)(base))>>(pos) ) & (uint32)( 0xFFFFFFFFULL >> (32 - (len)) )                    	   \
)

#define SrvB_PutBit(base,pos,val) ((base) =                                                        \
SrvB_PutBit_ascet((uint32)(base),(uint32)(pos),(uint32)(val))) 

#define SrvB_SetBit(base,pos)               ((base) |= (1u<<(pos)))

#define SrvB_SetBit_ascet(base,pos)         ((base) |  (1u<<(pos)))

#define SrvB_SetBitMask(base,mask)          ((base) |= (mask))

#define SrvB_SetBitMask_ascet(base,mask)    ((base) |  (mask))

#define SrvB_SetBitField(base,pos,len,val)                                                         \
(                                                                                                  \
    (base) =                                                                        			   \
        (                                                                                          \
             (uint32)(base)  &                                                                     \
             (uint32)(~(( 0xFFFFFFFFULL >> (32 - (len)) ) << (pos) ))                              \
        ) |                                                                                        \
        (                                                                                          \
            ( (uint32)(val) & ( 0xFFFFFFFFULL >> (32 - (len)) ) ) << (pos)                         \
        )                                                                                          \
)

#define SrvB_SetBitField_ascet(base,pos,len,val)                             \
(                                                                            \
    (                                                                        \
         (uint32)(base)  &                                                   \
         (uint32)(~(( 0xFFFFFFFFULL >> (32 - (len)) ) << (pos) ))            \
    ) |                                                                      \
    (                                                                        \
        ( (uint32)(val) & ( 0xFFFFFFFFULL >> (32 - (len)) ) ) << (pos)       \
    )                                                                        \
)

#define SrvB_TstBitMask(base,mask)          ((bool)(((base) & (mask)) == (mask)))

#define SrvB_TstBitInMask(base,mask)        ((bool)(( ( (base) & (mask) ) > 0 ) ? TRUE : FALSE))

/* Maximum of two variables */
/* MISRA RULE 90 VIOLATION: Is old implementation of this service, will be removed */
#define SrvB_Min(x_s32, y_s32)                              \
({                                                          \
    typeof(x_s32) _x=(x_s32);                               \
    typeof(y_s32) _y=(y_s32);                               \
    (((_y) > (_x)) ? (_x) : (_y));                          \
})
#define Min(x,y)            (SrvB_Min((x),(y)))
#define MINIMUM(x,y)        (SrvB_Min((x),(y)))

/* Minimum of two variables */
/* MISRA RULE 90 VIOLATION: Is old implementation of this service, will be removed */
#define SrvB_Max(x_s32, y_s32)                              \
({                                                          \
    typeof(x_s32) _x=(x_s32);                               \
    typeof(y_s32) _y=(y_s32);                               \
    (((_x) > (_y)) ? (_x) : (_y));                          \
})
#define Max(x,y)            (SrvB_Max((x),(y)))
#define MAXIMUM(x,y)        (SrvB_Max((x),(y)))

/*  Limits an input value to lower or upper limit */
/* MISRA RULE 90 VIOLATION: Is old implementation of this service, will be removed */
#define SrvB_Limit(x_s32, min, max)                         \
({                                                          \
    typeof(x_s32) _x=(x_s32);                               \
    typeof(min)   _min=(min);                               \
    typeof(max)   _max=(max);                               \
    typeof(x_s32) _tmp = (((_x) > (_max)) ? (_max) : (_x)); \
    (((_tmp) < (_min)) ? (_min) : (_tmp));                  \
})
#define Limit(x,min,max)    (SrvB_Limit(x,min,max))
#define LIMIT(x,min,max)    (SrvB_Limit(x,min,max))

/* Modulo function */
#define SrvB_Mod(X, Y) (((Y) == 0) ? 0 : ((X) % (Y)))


/* Interval functions */
#define SrvB_intervClsd(min,x_s32,max)    (SrvB_IntervClsd((min),(x_s32),(max)))
#define SrvB_IntervClsd(min,x_s32,max)          \
({                                              \
    typeof(x_s32)    _x = (x_s32);              \
     ( ((min) <= _x) && (_x <= (max)) );        \
})


#define SrvB_IntervLOpn(min,x_s32,max)          \
({                                              \
    typeof(x_s32)    _x = (x_s32);              \
    ( ((min) < _x) && (_x <= (max)) );          \
})


#define SrvB_IntervOpn(min,x_s32,max)           \
({                                              \
    typeof(x_s32)    _x = (x_s32);              \
    ( ((min) < _x) && (_x < (max)) );           \
})



#define SrvB_IntervROpn(min,x_s32,max)          \
({                                              \
    typeof(x_s32)    _x = (x_s32);              \
    ( ((min) <= _x) && (_x < (max)) );          \
})

#define ClosedInterval(MIN,X,MAX)      SrvB_IntervClsd((MIN),(X),(MAX))
#define LeftOpenInterval(MIN,X,MAX)    SrvB_IntervLOpn((MIN),(X),(MAX))
#define OpenInterval(MIN,X,MAX)        SrvB_IntervOpn((MIN),(X),(MAX))
#define RightOpenInterval(MIN,X,MAX)   SrvB_IntervROpn((MIN),(X),(MAX))


/* Hysteresis functions */
#define SrvB_HystLR(x_s32, lsp, rsp, state)                                                     \
({                                                                                              \
    typeof(lsp) lsp__ = (lsp);                                                                  \
    typeof(rsp) rsp__ = (rsp);                                                                  \
    typeof(x_s32) x__ = (x_s32);                                                                \
    *(state) = (bool)(((x__) > (typeof(x_s32))(rsp__))                                          \
                      ? TRUE                                                                    \
                      : (((x__) < (typeof(x_s32))(lsp__)) ? FALSE : *(state)));                 \
})

#define SrvB_HystDR(x_s32, delta, rsp, state)                                                   \
({                                                                                              \
    typeof(x_s32) x__ = (x_s32);                                                                \
    typeof(delta) _delta_ = (delta);                                                            \
    typeof(rsp) rsp__ = (rsp);                                                                  \
    *(state) = (bool)(((x__) > (typeof(x_s32))(rsp__))                                          \
                      ? TRUE                                                                    \
                      : (((x__) < (typeof(x_s32))((rsp__)-(_delta_))) ? FALSE : *(state)));     \
})

#define SrvB_HystLD(x_s32, lsp, delta, state)                                                   \
({                                                                                              \
    typeof(x_s32) x__ = (x_s32);                                                                \
    typeof(lsp) lsp__ = (lsp);                                                                  \
    typeof(delta) _delta_ = (delta);                                                            \
    *(state) = (bool)(((x__) > (typeof(x_s32))((lsp__)+(_delta_)))                              \
                      ? TRUE                                                                    \
                      : (((x__) < (typeof(x_s32))(lsp__)) ? FALSE : *(state)));                 \
})

#define SrvB_HystCHD(x_s32, center, halfDelta, state)                                           \
({                                                                                              \
    typeof(x_s32) _x = (x_s32);                                                                 \
    typeof(center) _cntr = (center);                                                            \
    typeof(halfDelta) _hdelta = (halfDelta);                                                    \
    *(state)= (bool)(((_x) > (typeof(x_s32))((_cntr) + (_hdelta)))                              \
                     ? TRUE                                                                     \
                     : (((_x) < (typeof(x_s32))((_cntr) - (_hdelta))) ? FALSE : *(state)));     \
})


#define SETBIT(basis,bitpos)       ((basis) |= (1<<(bitpos)),TRUE)
#define CLRBIT(basis,bitpos)       ((basis) &= ~(1<<(bitpos)),FALSE)
#define GETBIT(basis,bitpos)       (((basis) & (1<<(bitpos)))!= 0 )
#define PUTBIT(basis,bitpos,val)   ( (val) ? SETBIT(basis,bitpos) : CLRBIT(basis,bitpos) )

#define SETBITMASK(reg,bitmask)    ((reg)|=(bitmask))
#define CLRBITMASK(reg,bitmask)    ((reg)&=(~(bitmask)))

#define neg_u8_s8(x)   SrvB_Neg_U32_S8_inline((uint32)(x))
#define neg_s8_s8(x)   (((x)==MINSINT8)?(MAXSINT8):(-(x)))
#define neg_s8_u8(x)   (((x)>=0)?(MINUINT8):((uint8)(-(x))))
#define neg_u8_s16(x)  (-((sint16)(x)))
#define neg_s8_s16(x)  ((sint16)(-(x)))
#define neg_u16_s16(x) SrvB_Neg_U32_S16_inline((uint32)(x))
#define neg_s16_s16(x) (((x)==MINSINT16)?(MAXSINT16):(-(x)))
#define neg_s16_u16(x) (((x)>=0)?(MINUINT16):((uint16)(-(x))))
#define neg_u16_s32(x) (-((sint32)(x)))
#define neg_s16_s32(x) ((sint32)(-(x)))
#define neg_s32_u32(x) (((x)>=0)?(MINUINT32):((uint32)(-(x))))
#define neg_u32_s32(x) SrvB_Neg_U32_S32_inline((x))
#define neg_s32_s32(x) (((x)==MINSINT32)?(MAXSINT32):(-(x)))


/* Prototypes of services which are callable only */

extern void *SrvB_MemCopy(void *dest, const void *src, sint32 n);
extern void *SrvB_MemFill(void *dest, uint8 pattern , sint32 n);
extern bool SrvB_MemSwap(void *src1, void *src2, sint32 n);
extern void Sort5_U16(const uint16 *in, uint16 *out);
extern void Sort5_S16(const sint16 *in, sint16 *out);
extern uint16 Median5_U16(const uint16 *array);
extern sint16 SrvB_Median5S16(sint16 *array);
extern uint8 SrvB_Median5U8(uint8 *array);
MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_MulShRight16(sint32 X_s32, sint32 Y_s32, sint32 N_s32));
MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_MulShRight32(sint32 X_s32, sint32 Y_s32, sint32 N_s32));


#ifdef SRVB_ADAPTER_LOCATION
    #if (SRVB_ADAPTER_LOCATION == SRVB_LOCATION_INLINE)

    /* Mappings of services which are inline by default */
    
        #define SrvB_PutBit_ascet                   SrvB_PutBit_ascet_inline
    
        #define  neg_U8_S8                          neg_U8_S8_inline
        #define  neg_S8_U8                          neg_S8_U8_inline
        #define  neg_U16_S16                        neg_U16_S16_inline
        #define  neg_S16_U16                        neg_S16_U16_inline
        #define  neg_U32_S32                        neg_U32_S32_inline
        #define  neg_S32_U32                        neg_S32_U32_inline
        #define  neg_S8_S8                          neg_S8_S8_inline
        #define  neg_S8_S16                         neg_S8_S16_inline
        #define  neg_U8_S16                         neg_U8_S16_inline
        #define  neg_S16_S16                        neg_S16_S16_inline
        #define  neg_S16_S32                        neg_S16_S32_inline
        #define  neg_U16_S32                        neg_U16_S32_inline
        #define  neg_S32_S32                        neg_S32_S32_inline

        #define SrvB_AvrgSldngS16                   SrvB_AvrgSldngS16_inline
        #define SrvB_AvrgSldngS32                   SrvB_AvrgSldngS32_inline
        #define SrvB_Counter32                      SrvB_Counter32_inline
        #define SrvB_Counter16                      SrvB_Counter16_inline
        
        #define SrvB_AbsLimit                       SrvB_AbsLimit_inline
        #define Abs32Limit                          Abs32Limit_inline
        
    #else

    /* Prototypes of services which are callable only on demand */

        extern uint32 SrvB_PutBit_ascet(uint32 base_u32,uint32 pos_u32,uint32 val_u32);
        
        extern sint8 neg_U8_S8(uint8 x);
        extern uint8 neg_S8_U8(sint8 x);
        extern sint16 neg_U16_S16(uint16 x);
        extern uint16 neg_S16_U16(sint16 x);
        extern sint32 neg_U32_S32(uint32 x);
        extern uint32 neg_S32_U32(sint32 x);
        extern sint8 neg_S8_S8(sint8 x);
        extern sint16 neg_S8_S16(sint16 x);
        extern sint16 neg_U8_S16(uint16 x);
        extern sint16 neg_S16_S16(sint16 x);
        extern sint32 neg_S16_S32(sint16 x);
        extern sint32 neg_U16_S32(uint16 x);
        extern sint32 neg_S32_S32(sint32 x);

        extern sint16 SrvB_AvrgSldngS16(avrgsldngS16_t *p_avrstr, sint32 inp);
        extern sint32 SrvB_AvrgSldngS32(avrgsldngS32_t *p_avrstr, sint32 inp);
        extern sint32 SrvB_Counter32(sint32 *counter_ps32);
        extern sint16 SrvB_Counter16(sint16 *counter_ps16);
        
        extern sint32 SrvB_AbsLimit(sint32 x_s32, sint32 max_s32);
        extern sint32 Abs32Limit(sint32 x_s32, sint32 max_s32);


    /* SRVB_ADAPTER_LOCATION */
    #endif
#else
    #error SRVB_ADAPTER_LOCATION not defined, look at srvb_conf.h
#endif


/* _SRVB_ADAPTER_H */
#endif

