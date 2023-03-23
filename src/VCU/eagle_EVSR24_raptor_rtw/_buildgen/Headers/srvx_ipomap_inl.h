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
 * $Filename__:srvx_ipomap_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Extended services
 *             Derived from B_SRVX.10.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:29.06.2015$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_ipomap_inl$ 
 * $Variant___:1.21.3$ 
 * $Revision__:0$ 
 * $Type______:H$ 
 * $State_____:BUGGY$ 
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
 * 1.21.3; 0     29.06.2015 SYA2COB
 *   supporting atomic read of srvx ipo structures-
 * 
 * 1.21.0; 0     04.09.2014 PIR5COB
 *   Change in existing look up map functions.
 *   New functionalities introduced to calculate look up values based on ratio 
 *   calculated.
 *   
 * 
 * 1.16.0; 0     10.07.2012 SWC1COB
 *   32-bit interpolation functionality added
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVX.11.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVX.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _SRVX_IPOMAP_INL_H
#define _SRVX_IPOMAP_INL_H

/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION MAP GROUP
 *
 ***********************************************************************************************************************
 */
 
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoMapGroup_S8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                         const SrvX_SearchResultU16_t* const SResY_cpcst, 
                                                         uint16 N_u16, const sint8 *Val_pcs8))
{
    sint8 TmpVal_s8[2];
    SrvX_SearchResultU16_t TmpSRes_st = { 0,0 };
    SrvX_SearchResultU16_t SResX_st = {0,0};
    SrvX_SearchResultU16_t SResY_st = {0,0};
    
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResX_cpcst,(uint32*)(void*)&SResX_st);
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResY_cpcst,(uint32*)(void*)&SResY_st);
    
	/* first fetch 2 virtual points on one X between two Y */
	TmpVal_s8[0] = SrvX_IpoCurveGroup_S8(&SResY_st, &Val_pcs8[ (SResX_st.Index_u16    * N_u16)]);
	TmpVal_s8[1] = SrvX_IpoCurveGroup_S8(&SResY_st, &Val_pcs8[((SResX_st.Index_u16+1) * N_u16)]);
	
	/* fill up auxillary search result */
	TmpSRes_st.Ratio_u16 = SResX_st.Ratio_u16;
	
	/* interpolate between the 2 virtual points and return result */
	return  (  SrvX_IpoCurveGroup_S8(&TmpSRes_st, &TmpVal_s8[0])  );
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoMapGroup_U8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                         const SrvX_SearchResultU16_t* const SResY_cpcst, 
                                                         uint16 N_u16, const uint8 *Val_pcu8))
{
    uint8 TmpVal_u8[2];
    SrvX_SearchResultU16_t TmpSRes_st = { 0,0 };
    SrvX_SearchResultU16_t SResX_st = {0,0};
    SrvX_SearchResultU16_t SResY_st = {0,0};
    
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResX_cpcst,(uint32*)(void*)&SResX_st);
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResY_cpcst,(uint32*)(void*)&SResY_st);
    
	/* first fetch 2 virtual points on one X between two Y */
	TmpVal_u8[0] = SrvX_IpoCurveGroup_U8(&SResY_st, &Val_pcu8[ (SResX_st.Index_u16    * N_u16)]);
	TmpVal_u8[1] = SrvX_IpoCurveGroup_U8(&SResY_st, &Val_pcu8[((SResX_st.Index_u16+1) * N_u16)]);
	
	/* fill up auxillary search result */
	TmpSRes_st.Ratio_u16 = SResX_st.Ratio_u16;
	
	/* interpolate between the 2 virtual points and return result */
	return  (  SrvX_IpoCurveGroup_U8(&TmpSRes_st, &TmpVal_u8[0])  );
}
 
MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoMapGroup_S16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                           const SrvX_SearchResultU16_t* const SResY_cpcst, 
                                                           uint16 N_u16, const sint16 *Val_pcs16))
{
    sint16 TmpVal_s16[2];
    SrvX_SearchResultU16_t TmpSRes_st = { 0,0 };
    SrvX_SearchResultU16_t SResX_st = {0,0};
    SrvX_SearchResultU16_t SResY_st = {0,0};
    
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResX_cpcst,(uint32*)(void*)&SResX_st);
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResY_cpcst,(uint32*)(void*)&SResY_st);
    
	/* first fetch 2 virtual points on one X between two Y */
	TmpVal_s16[0] = SrvX_IpoCurveGroup_S16(&SResY_st, &Val_pcs16[ (SResX_st.Index_u16    * N_u16)]);
	TmpVal_s16[1] = SrvX_IpoCurveGroup_S16(&SResY_st, &Val_pcs16[((SResX_st.Index_u16+1) * N_u16)]);
	
	/* fill up auxillary search result */
	TmpSRes_st.Ratio_u16 = SResX_st.Ratio_u16;
	
	/* interpolate between the 2 virtual points and return result */
	return  (  SrvX_IpoCurveGroup_S16(&TmpSRes_st, &TmpVal_s16[0])  );
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_IpoMapGroup_U16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                           const SrvX_SearchResultU16_t* const SResY_cpcst, 
                                                           uint16 N_u16, const uint16 *Val_pcu16))
{
    uint16 TmpVal_u16[2];
    SrvX_SearchResultU16_t TmpSRes_st = { 0,0 };
    SrvX_SearchResultU16_t SResX_st = {0,0};
    SrvX_SearchResultU16_t SResY_st = {0,0};
    
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResX_cpcst,(uint32*)(void*)&SResX_st);
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResY_cpcst,(uint32*)(void*)&SResY_st);
    
	/* first fetch 2 virtual points on one X between two Y */
	TmpVal_u16[0] = SrvX_IpoCurveGroup_U16(&SResY_st, &Val_pcu16[ (SResX_st.Index_u16    * N_u16)]);
	TmpVal_u16[1] = SrvX_IpoCurveGroup_U16(&SResY_st, &Val_pcu16[((SResX_st.Index_u16+1) * N_u16)]);
	
	/* fill up auxillary search result */
	TmpSRes_st.Ratio_u16 = SResX_st.Ratio_u16;
	
	/* interpolate between the 2 virtual points and return result */
	return  (  SrvX_IpoCurveGroup_U16(&TmpSRes_st, &TmpVal_u16[0])  );
}



MEMLAY_USE_FORCE_INLINE(sint32 SrvX_IpoMapGroup_S32_inline(const SrvX_SearchResultU32_t* const SResX_cpcst, 
                                                           const SrvX_SearchResultU32_t* const SResY_cpcst, 
                                                           uint16 N_u16, const sint32 *Val_pcs32))
{
    sint32 TmpVal_s32[2];
    SrvX_SearchResultU32_t TmpSRes_st = { 0, 0 };
    SrvX_SearchResultU32_t SResX_st = {0,0};
    SrvX_SearchResultU32_t SResY_st = {0,0};
    
    SrvX_Load_64bitdata_U64_inline((const uint64*)(const void*)SResX_cpcst,(uint64*)(void*)&SResX_st);
    SrvX_Load_64bitdata_U64_inline((const uint64*)(const void*)SResY_cpcst,(uint64*)(void*)&SResY_st); 
    
	/* first fetch 2 virtual points on one X between two Y */
	TmpVal_s32[0] = SrvX_IpoCurveGroup_S32(&SResY_st, &Val_pcs32[ (SResX_st.Index_u32 * N_u16)]);
	TmpVal_s32[1] = SrvX_IpoCurveGroup_S32(&SResY_st, &Val_pcs32[((SResX_st.Index_u32 + 1) * N_u16)]);
	
	/* fill up auxillary search result */    
	TmpSRes_st.Ratio_u32 = SResX_st.Ratio_u32;
	
	/* interpolate between the 2 virtual points and return result */
	return (SrvX_IpoCurveGroup_S32(&TmpSRes_st, &TmpVal_s32[0]));
}



/*
 ***********************************************************************************************************************
 *
 * LOOKUP MAP GROUP
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(uint32 SrvX_LkUpMapCalcIndex_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16))
{
    uint32  TmpRatioX;
    uint32  TmpRatioY;
    uint32  TmpIndex;
	
    SrvX_SearchResultU16_t SResX_st = {0,0};
    SrvX_SearchResultU16_t SResY_st = {0,0};
    
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResX_cpcst,(uint32*)(void*)&SResX_st);
    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SResY_cpcst,(uint32*)(void*)&SResY_st);
    
	/* pre-calc index */
	TmpIndex = (SResX_st.Index_u16 * N_u16) + SResY_st.Index_u16;
	
	/* extract ratio <> 0,5 */
	TmpRatioX = SResX_st.Ratio_u16 >> 15;
	TmpRatioY = SResY_st.Ratio_u16 >> 15;
	
    /* calc index */
	TmpIndex += (TmpRatioY) ? ((TmpRatioX)?(N_u16+1):(1)) : ((TmpRatioX)?(N_u16):(0));
    return TmpIndex;
}

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_LkUpNearMapGroup_S8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const sint8 *Val_pcs8))
{
    uint32  TmpIndex = SrvX_LkUpMapCalcIndex_inline(SResX_cpcst, SResY_cpcst, N_u16);
    return (Val_pcs8[TmpIndex]); 
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_LkUpNearMapGroup_U8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const uint8 *Val_pcu8))
{
    uint32  TmpIndex = SrvX_LkUpMapCalcIndex_inline(SResX_cpcst, SResY_cpcst, N_u16);
    return (Val_pcu8[TmpIndex]); 
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_LkUpNearMapGroup_S16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const sint16 *Val_pcs16))
{
    uint32  TmpIndex = SrvX_LkUpMapCalcIndex_inline(SResX_cpcst, SResY_cpcst, N_u16);	
	return (Val_pcs16[TmpIndex]);	
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_LkUpNearMapGroup_U16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const uint16 *Val_pcu16))
{
    uint32  TmpIndex = SrvX_LkUpMapCalcIndex_inline(SResX_cpcst, SResY_cpcst, N_u16);	
	return (Val_pcu16[TmpIndex]);	
}
 
 /*************************************LkUpMap Group ************************************************/
 
MEMLAY_USE_FORCE_INLINE(sint8 SrvX_LkUpMapGroup_S8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const sint8 *Val_pcs8))
{
    return (Val_pcs8[(((SResX_cpcst->Index_u16) * N_u16) + (SResY_cpcst->Index_u16))]); 
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_LkUpMapGroup_U8_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const uint8 *Val_pcu8))
{
    return (Val_pcu8[(((SResX_cpcst->Index_u16) * N_u16) + (SResY_cpcst->Index_u16))]); 
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_LkUpMapGroup_S16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const sint16 *Val_pcs16))
{
    return (Val_pcs16[(((SResX_cpcst->Index_u16) * N_u16) + (SResY_cpcst->Index_u16))]); 
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_LkUpMapGroup_U16_inline(const SrvX_SearchResultU16_t* const SResX_cpcst, 
                                                          const SrvX_SearchResultU16_t* const SResY_cpcst,
                                                          uint16 N_u16, const uint16 *Val_pcu16))
{
    return (Val_pcu16[(((SResX_cpcst->Index_u16) * N_u16) + (SResY_cpcst->Index_u16))]); 
}

/* _SRVX_IPOMAP_INL_H */
#endif

