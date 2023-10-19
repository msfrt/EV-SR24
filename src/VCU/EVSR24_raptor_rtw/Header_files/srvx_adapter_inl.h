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
 * $Filename__:srvx_adapter_inl.h$
 *
 * $Author____:VKA2FE$
 *
 * $Function__:Derived from B_SRVX.12.0.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIR5COB$
 * $Date______:09.07.2014$
 * $Class_____:SWHDR$
 * $Name______:srvx_adapter_inl$
 * $Variant___:1.18.3$
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
 * 1.18.3; 0     09.07.2014 PIR5COB
 *   BugFix provided for fixed interval interpolation functionalities and the 
 *   distribution search functionalities.
 * 
 * 1.18.2; 2     08.11.2013 PIR5COB
 *   -
 * 
 * 1.18.2; 1     07.11.2013 PIR5COB
 *   -
 * 
 * 1.18.2; 0     06.11.2013 PIR5COB
 *   -
 * 
 * 1.17.0; 0     02.11.2012 PIR5COB
 *   Corrections are made for the following functionalities.
 *   1. SrvX_NoIpoCurveS16
 *   2. SrvX_NoIpoCurveU16
 *   3. SrvX_NoIpoCurveS8
 *   4. SrvX_NoIpoCurveU8
 * 
 * 1.15.0; 1     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 0     18.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.13.3; 0     30.03.2011 VKA2FE
 *   Bugfix delivery, derived from B_SRVX.13.0.3
 *   Correction of map nipol services
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX.12.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _SRVX_ADAPTER_INL_H
#define _SRVX_ADAPTER_INL_H


/*
 ***********************************************************************************************************************
 *
 * Mapping of old DS srvx (only inline)
 *
 ***********************************************************************************************************************
 */

/* I */
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoCurveS8(sint32 X,const sint8* CURVE))
{
    sint8 X_s8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s8 = SrvB_TypeLimiter_S32_S8_inline(X);
    
    return SrvX_IpoCurve_S8_S8(X_s8, CURVE[0], &CURVE[1], &CURVE[CURVE[0]+1]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoCurveU8(sint32 X,const uint8* CURVE))
{
    uint8 X_u8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
      X_u8 = SrvB_TypeLimiter_S32_U8_inline(X);
    
    return SrvX_IpoCurve_U8_U8(X_u8, CURVE[0], &CURVE[1], &CURVE[CURVE[0]+1]);
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_IpoCurveU16(sint32 X,const uint16* CURVE))
{
    uint16 X_u16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u16 = SrvB_TypeLimiter_S32_U16_inline(X);
   
    return SrvX_IpoCurve_U16_U16(X_u16, CURVE[0], &CURVE[1], &CURVE[CURVE[0]+1]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoCurveS16U8(sint32 X,const uint8* CURVE))
{
    sint16 X_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
   
    return SrvX_IpoCurve_S16_U8(X_s16, (sint16)CURVE[0], (const sint16*)(const void*)&CURVE[2], &CURVE[2*(CURVE[0]+1)]);
}

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoCurveS16S8(sint32 X,const sint8* CURVE))
{
    sint16 X_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
   
    return SrvX_IpoCurve_S16_S8(X_s16, (sint16)CURVE[0], (const sint16*)(const void*)&CURVE[2], &CURVE[2*(CURVE[0]+1)]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoMapS16S16U8(sint32 X, sint32 Y, const uint8* MAP))
{
    sint16 X_s16;
    sint16 Y_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    Y_s16 = SrvB_TypeLimiter_S32_S16_inline(Y);
    
    return SrvX_IpoMap_S16S16_U8( X_s16, Y_s16, (sint16)MAP[0], (sint16)MAP[1],
                                  (const sint16*)(const void*)&MAP[2], (const sint16*)(const void*)&MAP[2+(2*MAP[0])],
                                  &MAP[2+(2*(MAP[0]+MAP[1]))]);
}

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoMapS16S16S8(sint32 X,sint32 Y, const sint8* MAP))
{
    sint16 X_s16;
    sint16 Y_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    Y_s16 = SrvB_TypeLimiter_S32_S16_inline(Y);
    
    return SrvX_IpoMap_S16S16_S8( X_s16, Y_s16, (sint16)MAP[0], (sint16)MAP[1],
                                  (const sint16*)(const void*)&MAP[2], (const sint16*)(const void*)&MAP[2+(2*MAP[0])],
                                  &MAP[2+(2*(MAP[0]+MAP[1]))]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoMapU8U8(sint32 X, sint32 Y, const uint8* MAP))
{
    uint8 X_u8;
    uint8 Y_u8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u8 = SrvB_TypeLimiter_S32_U8_inline(X);
    Y_u8 = SrvB_TypeLimiter_S32_U8_inline(Y);
    
    return SrvX_IpoMap_U8U8_U8( X_u8, Y_u8, MAP[0], MAP[1], &MAP[2], &MAP[2+MAP[0]], &MAP[2+MAP[0]+MAP[1]]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoMapS16U8(sint32 X, sint32 Y, const sint16* DIST, const uint8* VAL))
{
    sint16 X_s16;
    sint16 Y_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    Y_s16 = SrvB_TypeLimiter_S32_S16_inline(Y);
    
    return SrvX_IpoMap_S16S16_U8(X_s16, Y_s16, DIST[0], DIST[1], &DIST[2], &DIST[2+DIST[0]], VAL);
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoMapU8S16(sint32 X, sint32 Y, const uint8* DIST, const sint16* VAL))
{
    uint8 X_u8;
    uint8 Y_u8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u8 = SrvB_TypeLimiter_S32_U8_inline(X);
    Y_u8 = SrvB_TypeLimiter_S32_U8_inline(Y);
    
    return SrvX_IpoMap_U8U8_S16(X_u8, Y_u8, DIST[0], DIST[1], &DIST[2], &DIST[2+DIST[0]], VAL);
}

/* N */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_NoIpoCurveS16(sint32 X, const sint16* CURVE))
{
    sint16 X_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
     X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    
    return SrvX_LkUpCurve_S16_S16(X_s16, CURVE[0], &CURVE[1], &CURVE[CURVE[0] + 1]);
}

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_NoIpoCurveS8(sint32 X, const sint8* CURVE))
{
    sint8 X_s8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
     X_s8 = SrvB_TypeLimiter_S32_S8_inline(X);
    
    return SrvX_LkUpCurve_S8_S8(X_s8, CURVE[0], &CURVE[1], &CURVE[CURVE[0] + 1]);
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_NoIpoCurveU16(sint32 X, const uint16* CURVE))
{
    uint16 X_u16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u16 = SrvB_TypeLimiter_S32_U16_inline(X);
    
    return SrvX_LkUpCurve_U16_U16(X_u16, CURVE[0], &CURVE[1], &CURVE[CURVE[0] + 1]);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_NoIpoCurveU8(sint32 X, const uint8* CURVE))
{
    uint8 X_u8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u8 = SrvB_TypeLimiter_S32_U8_inline(X);
    
    return SrvX_LkUpCurve_U8_U8(X_u8, CURVE[0], &CURVE[1], &CURVE[CURVE[0] + 1]);
}


/*
 ***********************************************************************************************************************
 *
 * Wrappers to old DS: Inline implementattion
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoCurveS16_inline(sint32 X,const sint16* CURVE))
{
    sint16 X_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
     X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    
    return SrvX_IpoCurve_S16_S16(X_s16, CURVE[0],&CURVE[1],&CURVE[CURVE[0]+1]);
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoMapS16S16_inline(sint32 X,sint32 Y,const sint16* MAP))
{
    sint16 X_s16;
    sint16 Y_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);
    Y_s16 = SrvB_TypeLimiter_S32_S16_inline(Y);
    
    return SrvX_IpoMap_S16S16_S16(X_s16,Y_s16, MAP[0], MAP[1], &MAP[2], &MAP[2+MAP[0]],&MAP[2+(MAP[0]+MAP[1])]);
}

MEMLAY_USE_FORCE_INLINE(SrvX_SearchRes_t SrvX_DistrSearchS16_inline(sint32 X, sint32 Num,  SrvX_DistribS16_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    sint16 X_s16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
     X_s16 = SrvB_TypeLimiter_S32_S16_inline(X);   
     
    SrvX_SearchDistr_S16(&SRes_st, X_s16, (sint16)Num, Distr);
    return ((SrvX_SearchRes_t)( (((uint32)SRes_st.Index_u16) << 16) | (((uint32)SRes_st.Ratio_u16) >> 1) ));
}

MEMLAY_USE_FORCE_INLINE(SrvX_SearchRes_t SrvX_DistrSearchS8_inline(sint32 X, sint32 Num,  SrvX_DistribS8_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    sint8 X_s8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
     X_s8 = SrvB_TypeLimiter_S32_S8_inline(X);
    
    SrvX_SearchDistr_S8(&SRes_st, X_s8, (sint8)Num, Distr);
    return ((SrvX_SearchRes_t)( (((uint32)SRes_st.Index_u16) << 16) | (((uint32)SRes_st.Ratio_u16) >> 1) ));
}

MEMLAY_USE_FORCE_INLINE(SrvX_SearchRes_t SrvX_DistrSearchU16_inline(sint32 X, sint32 Num,  SrvX_DistribU16_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    uint16 X_u16;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u16 = SrvB_TypeLimiter_S32_U16_inline(X);
    
    SrvX_SearchDistr_U16(&SRes_st, X_u16, (uint16)Num, Distr);
    return ((SrvX_SearchRes_t)( (((uint32)SRes_st.Index_u16) << 16) | (((uint32)SRes_st.Ratio_u16) >> 1) ));
}

MEMLAY_USE_FORCE_INLINE(SrvX_SearchRes_t SrvX_DistrSearchU8_inline(sint32 X, sint32 Num,  SrvX_DistribU8_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    uint8 X_u8;
    
    /* Limit the input value such that the input fits to mapped DGS functionality */
    X_u8 = SrvB_TypeLimiter_S32_U8_inline(X);
    
    SrvX_SearchDistr_U8(&SRes_st, X_u8, (uint8)Num, Distr);
    return ((SrvX_SearchRes_t)( (((uint32)SRes_st.Index_u16) << 16) | (((uint32)SRes_st.Ratio_u16) >> 1) ));
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoGroupCurveS16_inline(SrvX_SearchRes_t SearchResult, SrvX_ValS16_t CurveVal))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)SearchResult) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)SearchResult) <<  1);
    return SrvX_IpoCurveGroup_S16(&SRes_st, CurveVal);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoGroupCurveU8_inline(SrvX_SearchRes_t SearchResult, SrvX_ValU8_t CurveVal))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)SearchResult) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)SearchResult) <<  1);
    return SrvX_IpoCurveGroup_U8(&SRes_st, CurveVal);
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoGroupMapS16_inline(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValS16_t CurveVal))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)SearchResultX) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)SearchResultX) <<  1);
    SResY_st.Index_u16 = (uint16)( ((uint32)SearchResultY) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)SearchResultY) <<  1);
    return SrvX_IpoMapGroup_S16(&SResX_st, &SResY_st, (uint16)N_s32, CurveVal);
}

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoGroupMapS8_inline(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValS8_t CurveVal))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)SearchResultX) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)SearchResultX) <<  1);
    SResY_st.Index_u16 = (uint16)( ((uint32)SearchResultY) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)SearchResultY) <<  1);
    return SrvX_IpoMapGroup_S8(&SResX_st, &SResY_st, (uint16)N_s32, CurveVal);
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoGroupMapU8_inline(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValU8_t CurveVal))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)SearchResultX) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)SearchResultX) <<  1);
    SResY_st.Index_u16 = (uint16)( ((uint32)SearchResultY) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)SearchResultY) <<  1);
    return SrvX_IpoMapGroup_U8(&SResX_st, &SResY_st, (uint16)N_s32, CurveVal);
}


/*
 ***********************************************************************************************************************
 *
 * Wrappers to old GS: Inline implementattion
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(sint16 kl_ipol_S16_inline(const sint16* CURVE, sint16 X))
{
    return SrvX_IpoCurve_S16_S16(X, CURVE[0], &CURVE[1], &CURVE[1+CURVE[0]]);
}

MEMLAY_USE_FORCE_INLINE(sint16 kf_ipol_S16_inline(const sint16* MAP, sint16 X,sint16 Y))
{
    return SrvX_IpoMap_S16S16_S16(X, Y, MAP[0], MAP[1], &MAP[2], &MAP[2+MAP[0]], &MAP[2+MAP[0]+MAP[1]]);
}

MEMLAY_USE_FORCE_INLINE(uint32 SrvX_sst_S16_inline(sint32 X, sint32 Num,  SrvX_DistribS16_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    SrvX_SearchDistr_S16(&SRes_st, (sint16)X, (sint16)Num, Distr);
    return ( (((uint32)SRes_st.Index_u16) << 16) | ((uint32)SRes_st.Ratio_u16) );
}

MEMLAY_USE_FORCE_INLINE(uint32 SrvX_sst_U16_inline(sint32 X, sint32 Num,  SrvX_DistribU16_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    SrvX_SearchDistr_U16(&SRes_st, (uint16)X, (uint16)Num, Distr);
    return ( (((uint32)SRes_st.Index_u16) << 16) | ((uint32)SRes_st.Ratio_u16) );
}

MEMLAY_USE_FORCE_INLINE(uint32 SrvX_sst_S8_inline(sint32 X, sint32 Num,  SrvX_DistribS8_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    SrvX_SearchDistr_S8(&SRes_st, (sint8)X, (sint8)Num, Distr);
    return ( (((uint32)SRes_st.Index_u16) << 16) | ((uint32)SRes_st.Ratio_u16) );
}

MEMLAY_USE_FORCE_INLINE(uint32 SrvX_sst_U8_inline(sint32 X, sint32 Num,  SrvX_DistribU8_t Distr))
{
    SrvX_SearchResultU16_t SRes_st;
    SrvX_SearchDistr_U8(&SRes_st, (uint8)X, (uint8)Num, Distr);
    return ( (((uint32)SRes_st.Index_u16) << 16) | ((uint32)SRes_st.Ratio_u16) );
}


MEMLAY_USE_FORCE_INLINE(sint8 gkl_ipol_S8_inline(const sint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_IpoCurveGroup_S8(&SRes_st, (const sint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(sint16 gkl_ipol_S16_inline(const sint16 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_IpoCurveGroup_S16(&SRes_st, (const sint16*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint8 gkl_ipol_U8_inline(const uint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_IpoCurveGroup_U8(&SRes_st, (const uint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint8 gkl_ipol_inline(const uint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_IpoCurveGroup_U8(&SRes_st, (const uint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint16 gkl_ipol_U16_inline(const uint16 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_IpoCurveGroup_U16(&SRes_st, (const uint16*)gkl);
}


MEMLAY_USE_FORCE_INLINE(sint16 gkl_nipol_S16_inline(const sint16 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_LkUpCurveGroup_S16(&SRes_st, (const sint16*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint8 gkl_nipol_U8_inline(const uint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_LkUpCurveGroup_U8(&SRes_st, (const uint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(sint8 gkl_nipol_S8_inline(const sint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_LkUpCurveGroup_S8(&SRes_st, (const sint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint8 gkl_nipol_inline(const uint8 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_LkUpCurveGroup_U8(&SRes_st, (const uint8*)gkl);
}

MEMLAY_USE_FORCE_INLINE(uint16 gkl_nipol_U16_inline(const uint16 *gkl, uint32 sst_erg))
{
    SrvX_SearchResultU16_t SRes_st;
    SRes_st.Index_u16 = (uint16)( ((uint32)sst_erg) >> 16);
    SRes_st.Ratio_u16 = (uint16)( ((uint32)sst_erg) );
    return SrvX_LkUpCurveGroup_U16(&SRes_st, (const uint16*)gkl);
}


MEMLAY_USE_FORCE_INLINE(uint8 gkf_ipol_inline(const uint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)sstErg_x) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)sstErg_x) );
    SResY_st.Index_u16 = (uint16)( ((uint32)sstErg_y) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)sstErg_y) );
    return SrvX_IpoMapGroup_U8(&SResX_st, &SResY_st, (uint16)anz_y, (const uint8*)gkf);
}

MEMLAY_USE_FORCE_INLINE(uint8 gkf_ipol_U8_inline(const uint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)sstErg_x) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)sstErg_x) );
    SResY_st.Index_u16 = (uint16)( ((uint32)sstErg_y) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)sstErg_y) );
    return SrvX_IpoMapGroup_U8(&SResX_st, &SResY_st, (uint16)anz_y, (const uint8*)gkf);
}

MEMLAY_USE_FORCE_INLINE(sint8 gkf_ipol_S8_inline(const sint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)sstErg_x) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)sstErg_x) );
    SResY_st.Index_u16 = (uint16)( ((uint32)sstErg_y) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)sstErg_y) );
    return SrvX_IpoMapGroup_S8(&SResX_st, &SResY_st, (uint16)anz_y, (const sint8*)gkf);
}

MEMLAY_USE_FORCE_INLINE(sint16 gkf_ipol_S16_inline(const sint16 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)sstErg_x) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)sstErg_x) );
    SResY_st.Index_u16 = (uint16)( ((uint32)sstErg_y) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)sstErg_y) );
    return SrvX_IpoMapGroup_S16(&SResX_st, &SResY_st, (uint16)anz_y, (const sint16*)gkf);
}

MEMLAY_USE_FORCE_INLINE(uint16 gkf_ipol_U16_inline(const uint16 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y))
{
    SrvX_SearchResultU16_t SResX_st, SResY_st;
    SResX_st.Index_u16 = (uint16)( ((uint32)sstErg_x) >> 16);
    SResX_st.Ratio_u16 = (uint16)( ((uint32)sstErg_x) );
    SResY_st.Index_u16 = (uint16)( ((uint32)sstErg_y) >> 16);
    SResY_st.Ratio_u16 = (uint16)( ((uint32)sstErg_y) );
    return SrvX_IpoMapGroup_U16(&SResX_st, &SResY_st, (uint16)anz_y, (const uint16*)gkf);
}


/*
 ***********************************************************************************************************************
 *
 * Dyn-Ipos
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvX_DynIpoCurveS16
 *
 * \brief Interpolation of a curve at a given position X.
 *
 * Method of interpolation can be switched between a curve with
 * - sint16 distribution and sint8 curve values and
 * - sint16 distribuiont and sint16 curve values.
 * Special codesyntax must be used: DynCur_Xs16Ws8, DynCur_Xs16Ws16
 *
 * \param   sint32                              X           Input value
 * \param   const SrvX_DynIpoCurveS16Data_t*    data        Pointer to curve data
 * \return  sint16                                          Result of interpolation
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_DynIpoCurveS16_inline(sint32 X,
                                                          const SrvX_DynIpoCurveS16Data_t* data))
{
    sint16 RetVal_s16;


    /* IGNORE RULE 3681: Using a negative pointer index is intentional and needed to implement
                         this functionality. */
    switch ((data - 1)->method)
    {
        case MethodCur_Xs16Ws8:
        {
            RetVal_s16 = (sint16)SrvX_IpoCurveS16S8(X, (const sint8*)(const void*)data);
        }
        break;

        case MethodCur_Xs16Ws16:
        {
            RetVal_s16 = SrvX_IpoCurveS16(X, (const sint16*)(const void*)data);
        }
        break;

        default:
        {
            RetVal_s16 = 0;
        }
        break;
    }

    return RetVal_s16;
}


/**
 ***********************************************************************************************************************
 * SrvX_DynIpoMapS16
 *
 * \brief Interpolation of a map at a given position X/Y.
 *
 * Method of interpolation can be switched between a map with
 * - two sint16 distributions and sint8 map values and
 * - two sint16 distributions and sint16 map values.
 * Special codesyntax must be used: DynMap_Xs16Ys16Ws8, DynMap_Xs16Ys16Ws16
 *
 * \param   sint32                          X       Input value
 * \param   sint32                          Y       Input value
 * \param   const SrvX_DynIpoMapS16Data_t*  data    Pointer to map data
 * \return  sint16                                  Result of interpolation
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_DynIpoMapS16_inline(sint32 X, sint32 Y,
                                                        const SrvX_DynIpoMapS16Data_t* data))
{
    sint16 RetVal_s16;


    /* IGNORE RULE 3681: Using a negative pointer index is intentional and needed to implement
                         this functionality. */
    switch ((data - 1)->method)
    {
        case MethodMap_Xs16Ys16Ws8:
        {
            RetVal_s16 = SrvX_IpoMapS16S16S8(X, Y, (const sint8*)(const void*)data);
        }
        break;

        case MethodMap_Xs16Ys16Ws16:
        {
            RetVal_s16 = SrvX_IpoMapS16S16(X, Y, (const sint16*)(const void*)data);
        }
        break;

        default:
        {
            RetVal_s16 = 0;
        }
        break;
    }

    return RetVal_s16;
}


/**
 ***********************************************************************************************************************
 * SrvX_DynIpoMapS16Extd
 *
 * \brief Interpolation of a map at a given position X/Y.
 *
 * Method of interpolation can be switched between a map with
 * - two sint16 distributions and sint8 map values and
 * - two sint16 distributions and sint16 map values.
 * Special codesyntax must be used: DynMap_Xs16Ys16Ws8, DynMap_Xs16Ys16Ws16
 *
 * \param   sint32                          X       Input value
 * \param   sint32                          Y       Input value
 * \param   const SrvX_DynIpoMapS16Data_t*  data    Pointer to map data
 * \return  sint16                                  Result of interpolation
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_DynIpoMapS16Extd_inline(sint32 X, sint32 Y,
                                                        const SrvX_DynIpoMapS16Data_t* data))
{
    sint16 RetVal_s16;


    /* IGNORE RULE 3681: Using a negative pointer index is intentional and needed to implement
                         this functionality. */
    switch ((data - 1)->method)
    {
        case MethodMap_Xs16Ys16Ws8:
        {
            RetVal_s16 = SrvX_IpoMapS16S16S8Extd(X, Y, (const sint8*)(const void*)data);
        }
        break;

        case MethodMap_Xs16Ys16Ws16:
        {
            RetVal_s16 = SrvX_IpoMapS16S16(X, Y, (const sint16*)(const void*)data);
        }
        break;

        default:
        {
            RetVal_s16 = 0;
        }
        break;
    }

    return RetVal_s16;
}


/**
 ***********************************************************************************************************************
 * SrvX_IpoGroupMapS8Extd
 *
 * \brief Scaled interpolation of a map at a given position X/Y.
 *
 * The sint8 map values are scaled (multiplyed) by 8.
 * Special codesyntax must be used: DynMap_Xs16Ys16Ws8, DynMap_Xs16Ys16Ws16
 *
 * \param   SrvX_SearchRes_t XSearchRes         Search result of x-axis
 * \param   SrvX_SearchRes_t YSearchRes         Search result of y-axis
 * \param   sint32 Num                          Number of y-axis samples
 * \param   SrvX_ValS8_t                        Pointer to map values
 * \return  sint 16                             Result of interpolation
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoGroupMapS8Extd_inline(SrvX_SearchRes_t XSearchRes,
                                                        SrvX_SearchRes_t YSearchRes,
                                                        sint32 Num, SrvX_ValS8_t MapVal))
{
    sint32          rX;                             /* Ratio of X                                 */
    sint32          rY;                             /* Ratio of Y                                 */
    sint32          Z0;                             /* Z before desired position                  */
    sint32          Z1;                             /* Z after desired position                   */
    const sint8    *MapVal_ps8;                     /* Pointer to   data                          */

    /* get index and ratio from parameter                                                         */
    rX = (sint32)((uint32)(XSearchRes) & 0xFFFFUL);
    rY = (sint32)((uint32)(YSearchRes) & 0xFFFFUL);

    /* Set pointer in MapVal to x0                                                                */
    MapVal_ps8 = &MapVal[(Num * (XSearchRes / 65536L)) + (YSearchRes / 65536L)];
    Z0 = (sint32)(MapVal_ps8[0]*8);

    if(rY != 0L)
    {
        Z0 += ((((MapVal_ps8[1]*8) - Z0) * rY) / 32768L);
    }
    if(rX != 0L)
    {
        /* Set pointer in MapVal to next X Index and read value                                   */
        MapVal_ps8 = &MapVal_ps8[Num];
        Z1  = (sint32)(MapVal_ps8[0]*8);

        if(rY != 0L)
        {
            Z1 += ((((MapVal_ps8[1]*8) - Z1) * rY) / 32768L);
        }
        Z0 += (((Z1 - Z0) * rX) / 32768L);
    }
    return (sint16)Z0;
}


/*
 ***********************************************************************************************************************
 *
 * IpoDeltaFactor
 *
 ***********************************************************************************************************************
 */

/* Interfaces for different input types */
MEMLAY_USE_FORCE_INLINE(uint8  SrvX_IpoDeltaFactorU8_Points_U8(uint8 delta, uint8 factor,  uint8 x1,  uint8 x2))
{
    return  (uint8)SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(delta, factor, (sint32)x1, (sint32)x2);
}

MEMLAY_USE_FORCE_INLINE(sint8  SrvX_IpoDeltaFactorU8_Points_S8(uint8 delta, uint8 factor,  sint8 x1,  sint8 x2))
{
    return  (sint8)SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(delta, factor, (sint32)x1, (sint32)x2);
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_IpoDeltaFactorU8_Points_U16(uint8 delta, uint8 factor, uint16 x1, uint16 x2))
{
    return (uint16)SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(delta, factor, (sint32)x1, (sint32)x2);
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoDeltaFactorU8_Points_S16(uint8 delta, uint8 factor, sint16 x1, sint16 x2))
{
    return (sint16)SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(delta, factor, (sint32)x1, (sint32)x2);
}

/* _SRVX_ADAPTER_INL_H */
#endif
