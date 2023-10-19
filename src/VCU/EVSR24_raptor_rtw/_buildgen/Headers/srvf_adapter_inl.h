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
 * $Filename__:srvf_adapter_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_adapter_inl$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_ADAPTER_INL_H
#define _SRVF_ADAPTER_INL_H


/*
 ***********************************************************************************************************************
 * Wrappers old DS
 ***********************************************************************************************************************
 */ 

MEMLAY_USE_FORCE_INLINE(void SrvF_IpoSearchInterval(real32 X, sint32 Num, const real32 *Dist, SrvF_SearchResult_t *Result))
{
    SrvF_SearchResultR32_t SRes_st;
    SrvF_SearchDistr_R32(&SRes_st, X, (uint32)Num, Dist);
  #ifndef __ASW_NAMES__
    Result->Index = (sint32)SRes_st.Index_u32;
    Result->Ratio = SRes_st.Ratio_r32;
  #else
    Result->Index_C = (sint32)SRes_st.Index_u32;
    Result->Ratio_C = SRes_st.Ratio_r32;
  /*__ASW_NAMES__*/
  #endif
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IpoCurve(real32 X, const SrvF_Curve_t *Curve))
{
    
  #ifndef __ASW_NAMES__
    return SrvF_IpoCurve_R32_R32(X, (uint32)(Curve->XSize), Curve->XZData, &((Curve->XZData)[Curve->XSize]));
  #else
    return SrvF_IpoCurve_R32_R32(X, (uint32)(Curve->XSize_C), Curve->XZData_CUR, &((Curve->XZData_CUR)[Curve->XSize_C]));
  /*__ASW_NAMES__*/
  #endif
}

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IpoMap(real32 X, real32 Y, const SrvF_Map_t *Map))
{
  #ifndef __ASW_NAMES__
    return SrvF_IpoMap_R32R32_R32(X, Y, (uint32)(Map->XSize), (uint32)(Map->YSize), Map->XYZData, &((Map->XYZData)[Map->XSize]), &((Map->XYZData)[(Map->XSize)+(Map->YSize)]));
  #else
    return SrvF_IpoMap_R32R32_R32(X, Y, (uint32)(Map->XSize_C), (uint32)(Map->YSize_C), Map->XYZData_MAP, &((Map->XYZData_MAP)[Map->XSize_C]), &((Map->XYZData_MAP)[(Map->XSize_C)+(Map->YSize_C)]));
  /*__ASW_NAMES__*/
  #endif
}

/*
 ***********************************************************************************************************************
 * Wrappers old GS
 ***********************************************************************************************************************
 */ 
MEMLAY_USE_FORCE_INLINE(real32 kl_ipol_R32(const fCurve* kl, real32 X_r32))
{
    return SrvF_IpoCurve_R32_R32(X_r32, kl->xSize, kl->xzData, &((kl->xzData)[kl->xSize]));
}

MEMLAY_USE_FORCE_INLINE(real32 kf_ipol_R32(const fMap* kf, real32 X_r32, real32 Y_r32))
{
    return SrvF_IpoMap_R32R32_R32(X_r32, Y_r32, kf->xSize, kf->ySize, kf->xyzData, &((kf->xyzData)[kf->xSize]), &((kf->xyzData)[(kf->xSize)+(kf->ySize)]));
}

MEMLAY_USE_FORCE_INLINE(void sst_R32(const real32 sst[], uint32 anz_sst, real32 input, fSstIdx *result))
{
    SrvF_SearchResultR32_t SRes_st;
    SrvF_SearchDistr_R32(&SRes_st, input, anz_sst, sst);
    result->index = SRes_st.Index_u32;
    result->ratio = SRes_st.Ratio_r32;
}

/* _SRVF_ADAPTER_INL_H */
#endif

