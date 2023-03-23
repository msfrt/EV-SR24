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
 * $Filename__:srvx_ipocurve_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Extended services
 *             Derived from B_SRVX.10.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:26.06.2015$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_ipocurve_inl$ 
 * $Variant___:1.21.3$ 
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
 * 1.21.3; 0     26.06.2015 SYA2COB
 *   supporting atomic read of srvx ipo structures.
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


#ifndef _SRVX_IPOCURVE_INL_H
#define _SRVX_IPOCURVE_INL_H


/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION CURVE GROUP
 *
 ***********************************************************************************************************************
 */

/* Function to support atomic read of ipo strutures in SrvX\SrvF ipo group curve\map functions */

LOCAL_INLINE void SrvX_Load_64bitdata_U64_inline( const uint64* Src_pu64, uint64* Des_pu64)
{
    uint64 Temp_u64;
    asm volatile("  ld.d   %A0 ,[%2+]0   \n\
                    st.d   [%1+]0,%A0    \n\
                    ": "=d" (Temp_u64), [ res] "+a" (Des_pu64) :[Source] "a" (Src_pu64):"memory"
                    );
}

LOCAL_INLINE void SrvX_Load_32bitdata_U32_inline( const uint32* Src_pu32, uint32* Des_pu32)
{
    uint32 Temp_u32;
    asm volatile("  ld.w    %0 ,[%2+]0   \n\
                    st.w   [%1+]0,%0    \n\
                    ":  "=d" (Temp_u32), [ res] "+a" (Des_pu32) :[Source] "a" (Src_pu32):"memory"
                    );
}


 /*
 The service is desigend to accept maximum of 16-bit inputs but 32-bit variables are used to contain the
 overflow that can occur during the process of computation
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_IpoCalc16_S32_inline(sint32 V0_s32, sint32 V1_s32, sint32 Ratio_s32))
{
    /* MISRA RULE 37 VIOLATION: right shift by N on signed is always deterministic for 32-N Bit context results */
    return (V0_s32 + (((V1_s32-V0_s32) * ((V0_s32<V1_s32)?(++Ratio_s32):(Ratio_s32))) >> 16));
}


  /* The function recevies sint32 inputs and operates with maximum of uint64 variable */
MEMLAY_USE_FORCE_INLINE(sint32 SrvX_IpoCalc_S32_S32_inline(sint32 V0_s32, sint32 V1_s32, sint32 Ratio_s32))
{
    /*
    The values V0 and V1 have to be typecased to sint64 as there is a possiblility of overflow/underflow 
    that can occur as a result of substraction. 
    V0 in addition is typecased to sint64 as there is a possibility of result greater than MAXSINT32 or 
    lesser than MINSINT32 from the Mul and scale down
    */    
    /* MISRA RULE 12.13 VIOLATION: -- operator is only used in combination with an arry. Needed for fast code */
        
    return (sint32)((sint64)V0_s32 + ((((sint64)V1_s32 - (sint64)V0_s32) * 
                                (sint64)((V0_s32<V1_s32)?(++Ratio_s32):(Ratio_s32))) >> 31));
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_IpoCurveGroup_U8_inline(const SrvX_SearchResultU16_t* const SRes_cpcst,
                                                           const uint8 *Val_pcu8))
{
    uint16 Temp_index_u16;
    sint32 Ratio_s32;
    uint8  Val_u8;
    SrvX_SearchResultU16_t SRes_st = {0,0};

    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SRes_cpcst,(uint32*)(void*)&SRes_st);
    
    Temp_index_u16 = SRes_st.Index_u16;
    Ratio_s32      = (sint32)SRes_st.Ratio_u16;
    Val_u8         = Val_pcu8[Temp_index_u16];

    /* check if calculation is needed and avoid access violation */
    if(Ratio_s32!=0)
    {
        Val_u8 = (uint8)SrvX_IpoCalc16_S32_inline((sint32)Val_u8, (sint32)Val_pcu8[Temp_index_u16+1], Ratio_s32);
    }

    return Val_u8;
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_IpoCurveGroup_U16_inline(const SrvX_SearchResultU16_t* const SRes_cpcst,
                                                      const uint16 *Val_pcu16))
{
    uint16 Temp_index_u16;
    sint32 Ratio_s32;
    uint16 Val_u16;
    SrvX_SearchResultU16_t SRes_st = {0,0};

    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SRes_cpcst,(uint32*)(void*)&SRes_st);
    
    Temp_index_u16 = SRes_st.Index_u16;
    Ratio_s32      = (sint32)SRes_st.Ratio_u16;
    Val_u16        = Val_pcu16[Temp_index_u16];

    /* check if calculation is needed and avoid access violation */
    if(Ratio_s32!=0)
    {
        Val_u16 = (uint16)SrvX_IpoCalc16_S32_inline((sint32)Val_u16, (sint32)Val_pcu16[Temp_index_u16+1], Ratio_s32);
    }

    return Val_u16;
}


MEMLAY_USE_FORCE_INLINE(sint8 SrvX_IpoCurveGroup_S8_inline(const SrvX_SearchResultU16_t* const SRes_cpcst,
                                                           const sint8 *Val_pcs8))
{
    uint16 Temp_index_u16;
    sint32 Ratio_s32;
    sint8  Val_s8;
    SrvX_SearchResultU16_t SRes_st = {0,0};

    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SRes_cpcst,(uint32*)(void*)&SRes_st);
    
    Temp_index_u16  = SRes_st.Index_u16;
    Ratio_s32       = (sint32)SRes_st.Ratio_u16;
    Val_s8          = Val_pcs8[Temp_index_u16];

    /* check if calculation is needed and avoid access violation */
    if(Ratio_s32!=0)
    {
        Val_s8 = (sint8)SrvX_IpoCalc16_S32_inline((sint32)Val_s8, (sint32)Val_pcs8[Temp_index_u16+1], Ratio_s32);
    }

    return Val_s8;
}


MEMLAY_USE_FORCE_INLINE(sint16 SrvX_IpoCurveGroup_S16_inline(const SrvX_SearchResultU16_t* const SRes_cpcst,
                                                             const sint16 *Val_pcs16))
{
    uint16 Temp_index_u16;
    sint16 Val_s16;
    sint32 Ratio_s32;
    SrvX_SearchResultU16_t SRes_st = {0,0};

    SrvX_Load_32bitdata_U32_inline((const uint32*)(const void*)SRes_cpcst,(uint32*)(void*)&SRes_st);
    
    Temp_index_u16 = SRes_st.Index_u16;
    Ratio_s32      = (sint32)SRes_st.Ratio_u16;
    Val_s16        = Val_pcs16[Temp_index_u16];

    /* check if calculation is needed and avoid access violation */
    if(Ratio_s32!=0)
    {
        Val_s16 = (sint16)SrvX_IpoCalc16_S32_inline((sint32)Val_s16, (sint32)Val_pcs16[Temp_index_u16+1], Ratio_s32);
    }

    return Val_s16;
}

MEMLAY_USE_FORCE_INLINE(sint32 SrvX_IpoCurveGroup_S32_inline(const SrvX_SearchResultU32_t* const SRes_cpcst,
                                                             const sint32 *Val_pcs32))
{
    uint32 Tmp_index_u32;
    sint32 Ratio_s32;
    sint32 Val_s32;
    SrvX_SearchResultU32_t SRes_st = {0,0};

    SrvX_Load_64bitdata_U64_inline((const uint64*)(const void*)SRes_cpcst,(uint64*)(void*)&SRes_st);
    
    Tmp_index_u32 =  SRes_st.Index_u32;
    Ratio_s32     = (sint32)SRes_st.Ratio_u32;
    Val_s32       = Val_pcs32[Tmp_index_u32];

    /* check if calculation is needed and avoid access violation */
    if(Ratio_s32 != 0)
    {
        Val_s32 = SrvX_IpoCalc_S32_S32_inline(Val_s32, Val_pcs32[Tmp_index_u32 + 1], Ratio_s32);
    }

    return (Val_s32);
}

/*
 ***********************************************************************************************************************
 *
 * LOOKUP CURVE GROUP
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(sint8 SrvX_LkUpCurveGroup_S8_inline(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint8 *Val_pcs8))
{
    return Val_pcs8[SRes_cpcst->Index_u16];
}

MEMLAY_USE_FORCE_INLINE(sint16 SrvX_LkUpCurveGroup_S16_inline(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint16 *Val_pcs16))
{
    return Val_pcs16[SRes_cpcst->Index_u16];
}

MEMLAY_USE_FORCE_INLINE(uint8 SrvX_LkUpCurveGroup_U8_inline(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint8 *Val_pcu8))
{
    return Val_pcu8[SRes_cpcst->Index_u16];
}

MEMLAY_USE_FORCE_INLINE(uint16 SrvX_LkUpCurveGroup_U16_inline(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint16 *Val_pcu16))
{
    return Val_pcu16[SRes_cpcst->Index_u16];
}



/* _SRVX_IPOCURVE_INL_H */
#endif

