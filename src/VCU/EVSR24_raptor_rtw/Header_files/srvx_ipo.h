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
 * $Filename__:srvx_ipo.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:04.09.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_ipo$ 
 * $Variant___:1.21.0$ 
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
 * 1.21.0; 0     04.09.2014 PIR5COB
 *   Change in existing look up map functions.
 *   New functionalities introduced to calculate look up values based on ratio 
 *   calculated.
 *   
 * 
 * 1.18.1; 0     25.07.2013 PIR5COB
 *   Bugfix is done to overcome the reentrancy ans data inconsistancy problem in
 *    search distribution functionalities
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
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***********************************************************************************************************************
 * \moduledescription
 *                        Interpolation module for curve and map interpolation
 *
 * \scope                 API
 ***********************************************************************************************************************
 */
 
#ifndef _SRVX_IPO_H
#define _SRVX_IPO_H


/*
 ***********************************************************************************************************************
 *
 * datatypes and structures
 *
 ***********************************************************************************************************************
 */

/* Structure for 16 bit search distribution functionalities */
typedef struct
{
  #if ((defined (CPU_BYTE_ORDER)) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)) // Check for endianness
   uint16 Ratio_u16;
   uint16 Index_u16;   
  #else	   
   uint16 Index_u16;
   uint16 Ratio_u16;
  #endif
} SrvX_SearchResultU16_t;

/* Structure for 32 bit search distribution functionalities */	
typedef struct
{
  #if ((defined (CPU_BYTE_ORDER)) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)) // Check for endianness
   uint32 Ratio_u32;
   uint32 Index_u32;   
  #else	   
   uint32 Index_u32;
   uint32 Ratio_u32;
  #endif
} SrvX_SearchResultU32_t;


/*
 ***********************************************************************************************************************
 *
 * SEARCH
 *
 ***********************************************************************************************************************
 */

/* SRVX_SEARCHDISTR_U8_LOCATION */
#if   (SRVX_SEARCHDISTR_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_SearchDistr_U8(SrvX_SearchResultU16_t* const SRes_cpst, uint8 Xin_u8, uint8 N_u8, const uint8 * X_pcu8);

#elif (SRVX_SEARCHDISTR_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_SearchDistr_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_SEARCHDISTR_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_SearchDistr_U8(SrvX_SearchResultU16_t* const SRes_cpst, uint8 Xin_u8, uint8 N_u8, const uint8 * X_pcu8));
#else
    #error >>>>'Configuration for SrvX_SearchDistr_U8 not supported'

/* SRVX_SEARCHDISTR_U8_LOCATION */
#endif

/* SRVX_SEARCHDISTR_S8_LOCATION */
#if   (SRVX_SEARCHDISTR_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_SearchDistr_S8(SrvX_SearchResultU16_t* const SRes_cpst, sint8 Xin_s8, sint8 N_s8, const sint8 * X_pcs8);

#elif (SRVX_SEARCHDISTR_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_SearchDistr_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_SEARCHDISTR_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_SearchDistr_S8(SrvX_SearchResultU16_t* const SRes_cpst, sint8 Xin_s8, sint8 N_s8, const sint8 * X_pcs8));
#else
    #error >>>>'Configuration for SrvX_SearchDistr_S8 not supported'

/* SRVX_SEARCHDISTR_S8_LOCATION */
#endif

/* SRVX_SEARCHDISTR_U16_LOCATION */
#if   (SRVX_SEARCHDISTR_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_SearchDistr_U16(SrvX_SearchResultU16_t* const SRes_cpst, uint16 Xin_u16, uint16 N_u16, const uint16 * X_pcu16);

#elif (SRVX_SEARCHDISTR_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_SearchDistr_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_SEARCHDISTR_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_SearchDistr_U16(SrvX_SearchResultU16_t* const SRes_cpst, uint16 Xin_u16, uint16 N_u16, const uint16 * X_pcu16));
#else
    #error >>>>'Configuration for SrvX_SearchDistr_U16 not supported'

/* SRVX_SEARCHDISTR_U16_LOCATION */
#endif

/* SRVX_SEARCHDISTR_S16_LOCATION */
#if   (SRVX_SEARCHDISTR_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_SearchDistr_S16(SrvX_SearchResultU16_t* const SRes_cpst, sint16 Xin_s16, sint16 N_s16, const sint16* X_pcs16);

#elif (SRVX_SEARCHDISTR_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_SearchDistr_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_SEARCHDISTR_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_SearchDistr_S16(SrvX_SearchResultU16_t* const SRes_cpst, sint16 Xin_s16, sint16 N_s16, const sint16* X_pcs16));
#else
    #error >>>>'Configuration for SrvX_SearchDistr_S16 not supported'

/* SRVX_SEARCHDISTR_S16_LOCATION */
#endif


/* SRVX_SEARCHDISTR_S16_S32_LOCATION */
#if   (SRVX_SEARCHDISTR_S16_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern void SrvX_SearchDistr_S16_S32(SrvX_SearchResultU32_t* const SRes_cpst, sint16 Xin_s16, sint16 N_s16, const sint16* X_pcs16);

#elif (SRVX_SEARCHDISTR_S16_S32_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_SearchDistr_S16_S32 can\'t be inlined: Configuration not supported'

#elif (SRVX_SEARCHDISTR_S16_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvX_SearchDistr_S16_S32(SrvX_SearchResultU32_t* const SRes_cpst, sint16 Xin_s16, sint16 N_s16, const sint16* X_pcs16));
#else
    #error >>>>'Configuration for SrvX_SearchDistr_S16_S32 not supported'

/* SRVX_SEARCHDISTR_S16_S32_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION CURVE GROUP
 *
 ***********************************************************************************************************************
 */

/* SRVX_IPOCURVEGROUP_U8_LOCATION */
#if   (SRVX_IPOCURVEGROUP_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoCurveGroup_U8(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint8 *Val_pcu8);

#elif (SRVX_IPOCURVEGROUP_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoCurveGroup_U8 SrvX_IpoCurveGroup_U8_inline

#elif (SRVX_IPOCURVEGROUP_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoCurveGroup_U8(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurveGroup_U8 not supported'

/* SRVX_IPOCURVEGROUP_U8_LOCATION */
#endif

/* SRVX_IPOCURVEGROUP_S8_LOCATION */
#if   (SRVX_IPOCURVEGROUP_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoCurveGroup_S8(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint8 *Val_pcs8);

#elif (SRVX_IPOCURVEGROUP_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoCurveGroup_S8 SrvX_IpoCurveGroup_S8_inline

#elif (SRVX_IPOCURVEGROUP_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoCurveGroup_S8(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurveGroup_S8 not supported'

/* SRVX_IPOCURVEGROUP_S8_LOCATION */
#endif

/* SRVX_IPOCURVEGROUP_U16_LOCATION */
#if   (SRVX_IPOCURVEGROUP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoCurveGroup_U16(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint16 *Val_pcu16);

#elif (SRVX_IPOCURVEGROUP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoCurveGroup_U16 SrvX_IpoCurveGroup_U16_inline

#elif (SRVX_IPOCURVEGROUP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoCurveGroup_U16(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurveGroup_U16 not supported'

/* SRVX_IPOCURVEGROUP_U16_LOCATION */
#endif

/* SRVX_IPOCURVEGROUP_S16_LOCATION */
#if   (SRVX_IPOCURVEGROUP_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoCurveGroup_S16(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint16 *Val_pcs16);

#elif (SRVX_IPOCURVEGROUP_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoCurveGroup_S16 SrvX_IpoCurveGroup_S16_inline

#elif (SRVX_IPOCURVEGROUP_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoCurveGroup_S16(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurveGroup_S16 not supported'

/* SRVX_IPOCURVEGROUP_S16_LOCATION */
#endif

/* SRVX_IPOCURVEGROUP_S32_LOCATION */
#if   (SRVX_IPOCURVEGROUP_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_IpoCurveGroup_S32(const SrvX_SearchResultU32_t* const SRes_cpcst, const sint32 *Val_pcs32);

#elif (SRVX_IPOCURVEGROUP_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoCurveGroup_S32 SrvX_IpoCurveGroup_S32_inline

#elif (SRVX_IPOCURVEGROUP_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_IpoCurveGroup_S32(const SrvX_SearchResultU32_t* const SRes_cpcst, const sint32 *Val_pcs32));
#else
    #error >>>> 'Configuration for SrvX_IpoCurveGroup_S32 not supported'

/* SRVX_IPOCURVEGROUP_S32_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * LOOKUP CURVE GROUP
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPCURVEGROUP_U8_LOCATION */
#if   (SRVX_LKUPCURVEGROUP_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpCurveGroup_U8(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint8 *Val_pcu8);

#elif (SRVX_LKUPCURVEGROUP_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpCurveGroup_U8 SrvX_LkUpCurveGroup_U8_inline

#elif (SRVX_LKUPCURVEGROUP_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpCurveGroup_U8(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurveGroup_U8 not supported'

/* SRVX_LKUPCURVEGROUP_U8_LOCATION */
#endif

/* SRVX_LKUPCURVEGROUP_S8_LOCATION */
#if   (SRVX_LKUPCURVEGROUP_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpCurveGroup_S8(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint8 *Val_pcs8);

#elif (SRVX_LKUPCURVEGROUP_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpCurveGroup_S8 SrvX_LkUpCurveGroup_S8_inline

#elif (SRVX_LKUPCURVEGROUP_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpCurveGroup_S8(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurveGroup_S8 not supported'

/* SRVX_LKUPCURVEGROUP_S8_LOCATION */
#endif

/* SRVX_LKUPCURVEGROUP_U16_LOCATION */
#if   (SRVX_LKUPCURVEGROUP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpCurveGroup_U16(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint16 *Val_pcu16);

#elif (SRVX_LKUPCURVEGROUP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpCurveGroup_U16 SrvX_LkUpCurveGroup_U16_inline

#elif (SRVX_LKUPCURVEGROUP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpCurveGroup_U16(const SrvX_SearchResultU16_t* const SRes_cpcst, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurveGroup_U16 not supported'

/* SRVX_LKUPCURVEGROUP_U16_LOCATION */
#endif

/* SRVX_LKUPCURVEGROUP_S16_LOCATION */
#if   (SRVX_LKUPCURVEGROUP_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpCurveGroup_S16(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint16 *Val_pcs16);

#elif (SRVX_LKUPCURVEGROUP_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpCurveGroup_S16 SrvX_LkUpCurveGroup_S16_inline

#elif (SRVX_LKUPCURVEGROUP_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpCurveGroup_S16(const SrvX_SearchResultU16_t* const SRes_cpcst, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurveGroup_S16 not supported'

/* SRVX_LKUPCURVEGROUP_S16_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION MAP GROUP
 *
 ***********************************************************************************************************************
 */

/* SRVX_IPOMAPGROUP_U8_LOCATION */
#if   (SRVX_IPOMAPGROUP_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAPGROUP_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapGroup_U8 SrvX_IpoMapGroup_U8_inline

#elif (SRVX_IPOMAPGROUP_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMapGroup_U8 not supported'

/* SRVX_IPOMAPGROUP_U8_LOCATION */
#endif

/* SRVX_IPOMAPGROUP_S8_LOCATION */
#if   (SRVX_IPOMAPGROUP_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAPGROUP_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapGroup_S8 SrvX_IpoMapGroup_S8_inline

#elif (SRVX_IPOMAPGROUP_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMapGroup_S8 not supported'

/* SRVX_IPOMAPGROUP_S8_LOCATION */
#endif

/* SRVX_IPOMAPGROUP_U16_LOCATION */
#if   (SRVX_IPOMAPGROUP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAPGROUP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapGroup_U16 SrvX_IpoMapGroup_U16_inline

#elif (SRVX_IPOMAPGROUP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMapGroup_U16 not supported'

/* SRVX_IPOMAPGROUP_U16_LOCATION */
#endif

/* SRVX_IPOMAPGROUP_S16_LOCATION */
#if   (SRVX_IPOMAPGROUP_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAPGROUP_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapGroup_S16 SrvX_IpoMapGroup_S16_inline

#elif (SRVX_IPOMAPGROUP_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMapGroup_S16 not supported'

/* SRVX_IPOMAPGROUP_S16_LOCATION */
#endif

/* SRVX_IPOMAPGROUP_S32_LOCATION */
#if   (SRVX_IPOMAPGROUP_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_IpoMapGroup_S32(const SrvX_SearchResultU32_t* const SResX_cpcst, const SrvX_SearchResultU32_t* const SResY_cpcst, uint16 N_u16, const sint32 *Val_pcs32);

#elif (SRVX_IPOMAPGROUP_S32_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapGroup_S32 SrvX_IpoMapGroup_S32_inline

#elif (SRVX_IPOMAPGROUP_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_IpoMapGroup_S32(const SrvX_SearchResultU32_t* const SResX_cpcst, const SrvX_SearchResultU32_t* const SResY_cpcst, uint16 N_u16, const sint32 *Val_pcs32));
#else
    #error >>>> 'Configuration for SrvX_IpoMapGroup_S32 not supported'

/* SRVX_IPOMAPGROUP_S32_LOCATION */
#endif

/*
 ***********************************************************************************************************************
 *
 * LOOKUP MAP GROUP
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPMAPGROUP_U8_LOCATION */
#if   (SRVX_LKUPMAPGROUP_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8);

#elif (SRVX_LKUPMAPGROUP_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpMapGroup_U8 SrvX_LkUpMapGroup_U8_inline

#elif (SRVX_LKUPMAPGROUP_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpMapGroup_U8 not supported'

/* SRVX_LKUPMAPGROUP_U8_LOCATION */
#endif

/* SRVX_LKUPMAPGROUP_S8_LOCATION */
#if   (SRVX_LKUPMAPGROUP_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8);

#elif (SRVX_LKUPMAPGROUP_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpMapGroup_S8 SrvX_LkUpMapGroup_S8_inline

#elif (SRVX_LKUPMAPGROUP_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpMapGroup_S8 not supported'

/* SRVX_LKUPMAPGROUP_S8_LOCATION */
#endif

/* SRVX_LKUPMAPGROUP_U16_LOCATION */
#if   (SRVX_LKUPMAPGROUP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPMAPGROUP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpMapGroup_U16 SrvX_LkUpMapGroup_U16_inline

#elif (SRVX_LKUPMAPGROUP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpMapGroup_U16 not supported'

/* SRVX_LKUPMAPGROUP_U16_LOCATION */
#endif

/* SRVX_LKUPMAPGROUP_S16_LOCATION */
#if   (SRVX_LKUPMAPGROUP_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPMAPGROUP_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpMapGroup_S16 SrvX_LkUpMapGroup_S16_inline

#elif (SRVX_LKUPMAPGROUP_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpMapGroup_S16 not supported'

/* SRVX_LKUPMAPGROUP_S16_LOCATION */
#endif

/*
 ***********************************************************************************************************************
 *
 * LOOKUP NEAR MAP GROUP
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPNEARMAPGROUP_U8_LOCATION */
#if   (SRVX_LKUPNEARMAPGROUP_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpNearMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8);

#elif (SRVX_LKUPNEARMAPGROUP_U8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpNearMapGroup_U8 SrvX_LkUpNearMapGroup_U8_inline

#elif (SRVX_LKUPNEARMAPGROUP_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpNearMapGroup_U8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMapGroup_U8 not supported'

/* SRVX_LKUPNEARMAPGROUP_U8_LOCATION */
#endif

/* SRVX_LKUPNEARMAPGROUP_S8_LOCATION */
#if   (SRVX_LKUPNEARMAPGROUP_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpNearMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8);

#elif (SRVX_LKUPNEARMAPGROUP_S8_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpNearMapGroup_S8 SrvX_LkUpNearMapGroup_S8_inline

#elif (SRVX_LKUPNEARMAPGROUP_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpNearMapGroup_S8(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMapGroup_S8 not supported'

/* SRVX_LKUPNEARMAPGROUP_S8_LOCATION */
#endif

/* SRVX_LKUPNEARMAPGROUP_U16_LOCATION */
#if   (SRVX_LKUPNEARMAPGROUP_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpNearMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPNEARMAPGROUP_U16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpNearMapGroup_U16 SrvX_LkUpNearMapGroup_U16_inline

#elif (SRVX_LKUPNEARMAPGROUP_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpNearMapGroup_U16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMapGroup_U16 not supported'

/* SRVX_LKUPNEARMAPGROUP_U16_LOCATION */
#endif

/* SRVX_LKUPNEARMAPGROUP_S16_LOCATION */
#if   (SRVX_LKUPNEARMAPGROUP_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpNearMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPNEARMAPGROUP_S16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_LkUpNearMapGroup_S16 SrvX_LkUpNearMapGroup_S16_inline

#elif (SRVX_LKUPNEARMAPGROUP_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpNearMapGroup_S16(const SrvX_SearchResultU16_t* const SResX_cpcst, const SrvX_SearchResultU16_t* const SResY_cpcst, uint16 N_u16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMapGroup_S16 not supported'

/* SRVX_LKUPNEARMAPGROUP_S16_LOCATION */
#endif

/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION CURVE
 *
 ***********************************************************************************************************************
 */

/* SRVX_IPOCURVE_S8_S8_LOCATION */
#if   (SRVX_IPOCURVE_S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_IPOCURVE_S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S8_S8 not supported'

/* SRVX_IPOCURVE_S8_S8_LOCATION */
#endif

/* SRVX_IPOCURVE_S8_U8_LOCATION */
#if   (SRVX_IPOCURVE_S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoCurve_S8_U8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_IPOCURVE_S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoCurve_S8_U8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S8_U8 not supported'

/* SRVX_IPOCURVE_S8_U8_LOCATION */
#endif

/* SRVX_IPOCURVE_S8_S16_LOCATION */
#if   (SRVX_IPOCURVE_S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoCurve_S8_S16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_IPOCURVE_S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoCurve_S8_S16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S8_S16 not supported'

/* SRVX_IPOCURVE_S8_S16_LOCATION */
#endif

/* SRVX_IPOCURVE_S8_U16_LOCATION */
#if   (SRVX_IPOCURVE_S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoCurve_S8_U16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_IPOCURVE_S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoCurve_S8_U16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S8_U16 not supported'

/* SRVX_IPOCURVE_S8_U16_LOCATION */
#endif

/* SRVX_IPOCURVE_S16_S8_LOCATION */
#if   (SRVX_IPOCURVE_S16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoCurve_S16_S8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint8 *Val_pcs8);

#elif (SRVX_IPOCURVE_S16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoCurve_S16_S8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S16_S8 not supported'

/* SRVX_IPOCURVE_S16_S8_LOCATION */
#endif

/* SRVX_IPOCURVE_S16_U8_LOCATION */
#if   (SRVX_IPOCURVE_S16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoCurve_S16_U8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint8 *Val_pcu8);

#elif (SRVX_IPOCURVE_S16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoCurve_S16_U8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S16_U8 not supported'

/* SRVX_IPOCURVE_S16_U8_LOCATION */
#endif

/* SRVX_IPOCURVE_S16_S16_LOCATION */
#if   (SRVX_IPOCURVE_S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_IPOCURVE_S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S16_S16 not supported'

/* SRVX_IPOCURVE_S16_S16_LOCATION */
#endif

/* SRVX_IPOCURVE_S16_U16_LOCATION */
#if   (SRVX_IPOCURVE_S16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoCurve_S16_U16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint16 *Val_pcu16);

#elif (SRVX_IPOCURVE_S16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoCurve_S16_U16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S16_U16 not supported'

/* SRVX_IPOCURVE_S16_U16_LOCATION */
#endif

/* SRVX_IPOCURVE_U8_S8_LOCATION */
#if   (SRVX_IPOCURVE_U8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoCurve_U8_S8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint8 *Val_pcs8);

#elif (SRVX_IPOCURVE_U8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoCurve_U8_S8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U8_S8 not supported'

/* SRVX_IPOCURVE_U8_S8_LOCATION */
#endif

/* SRVX_IPOCURVE_U8_S16_LOCATION */
#if   (SRVX_IPOCURVE_U8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoCurve_U8_S16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint16 *Val_pcs16);

#elif (SRVX_IPOCURVE_U8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoCurve_U8_S16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U8_S16 not supported'

/* SRVX_IPOCURVE_U8_S16_LOCATION */
#endif

/* SRVX_IPOCURVE_U8_U8_LOCATION */
#if   (SRVX_IPOCURVE_U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_IPOCURVE_U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U8_U8 not supported'

/* SRVX_IPOCURVE_U8_U8_LOCATION */
#endif

/* SRVX_IPOCURVE_U8_U16_LOCATION */
#if   (SRVX_IPOCURVE_U8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoCurve_U8_U16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint16 *Val_pcu16);

#elif (SRVX_IPOCURVE_U8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoCurve_U8_U16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U8_U16 not supported'

/* SRVX_IPOCURVE_U8_U16_LOCATION */
#endif

/* SRVX_IPOCURVE_U16_S8_LOCATION */
#if   (SRVX_IPOCURVE_U16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoCurve_U16_S8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint8 *Val_pcs8);

#elif (SRVX_IPOCURVE_U16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoCurve_U16_S8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U16_S8 not supported'

/* SRVX_IPOCURVE_U16_S8_LOCATION */
#endif

/* SRVX_IPOCURVE_U16_S16_LOCATION */
#if   (SRVX_IPOCURVE_U16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoCurve_U16_S16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint16 *Val_pcs16);

#elif (SRVX_IPOCURVE_U16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoCurve_U16_S16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U16_S16 not supported'

/* SRVX_IPOCURVE_U16_S16_LOCATION */
#endif

/* SRVX_IPOCURVE_U16_U8_LOCATION */
#if   (SRVX_IPOCURVE_U16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoCurve_U16_U8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint8 *Val_pcu8);

#elif (SRVX_IPOCURVE_U16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoCurve_U16_U8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U16_U8 not supported'

/* SRVX_IPOCURVE_U16_U8_LOCATION */
#endif

/* SRVX_IPOCURVE_U16_U16_LOCATION */
#if   (SRVX_IPOCURVE_U16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint16 *Val_pcu16);

#elif (SRVX_IPOCURVE_U16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_U16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_U16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_U16_U16 not supported'

/* SRVX_IPOCURVE_U16_U16_LOCATION */
#endif

/* SRVX_IPOCURVE_S16_S32_LOCATION */
#if   (SRVX_IPOCURVE_S16_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_IpoCurve_S16_S32(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint32 *Val_pcs32);

#elif (SRVX_IPOCURVE_S16_S32_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoCurve_S16_S32 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOCURVE_S16_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_IpoCurve_S16_S32(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint32 *Val_pcs32));
#else
    #error >>>> 'Configuration for SrvX_IpoCurve_S16_S32 not supported'

/* SRVX_IPOCURVE_S16_S32_LOCATION */
#endif





/*
 ***********************************************************************************************************************
 *
 * LOOKUP CURVE
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPCURVE_S8_S8_LOCATION */
#if   (SRVX_LKUPCURVE_S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_LKUPCURVE_S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S8_S8 not supported'

/* SRVX_LKUPCURVE_S8_S8_LOCATION */
#endif

/* SRVX_LKUPCURVE_S8_U8_LOCATION */
#if   (SRVX_LKUPCURVE_S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpCurve_S8_U8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_LKUPCURVE_S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpCurve_S8_U8(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S8_U8 not supported'

/* SRVX_LKUPCURVE_S8_U8_LOCATION */
#endif

/* SRVX_LKUPCURVE_S8_S16_LOCATION */
#if   (SRVX_LKUPCURVE_S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpCurve_S8_S16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_LKUPCURVE_S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpCurve_S8_S16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S8_S16 not supported'

/* SRVX_LKUPCURVE_S8_S16_LOCATION */
#endif

/* SRVX_LKUPCURVE_S8_U16_LOCATION */
#if   (SRVX_LKUPCURVE_S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpCurve_S8_U16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_LKUPCURVE_S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpCurve_S8_U16(sint8 Xin_s8, sint8 N_s8, const sint8 *X_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S8_U16 not supported'

/* SRVX_LKUPCURVE_S8_U16_LOCATION */
#endif

/* SRVX_LKUPCURVE_S16_S8_LOCATION */
#if   (SRVX_LKUPCURVE_S16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpCurve_S16_S8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint8 *Val_pcs8);

#elif (SRVX_LKUPCURVE_S16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpCurve_S16_S8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S16_S8 not supported'

/* SRVX_LKUPCURVE_S16_S8_LOCATION */
#endif

/* SRVX_LKUPCURVE_S16_U8_LOCATION */
#if   (SRVX_LKUPCURVE_S16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpCurve_S16_U8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint8 *Val_pcu8);

#elif (SRVX_LKUPCURVE_S16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpCurve_S16_U8(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S16_U8 not supported'

/* SRVX_LKUPCURVE_S16_U8_LOCATION */
#endif

/* SRVX_LKUPCURVE_S16_S16_LOCATION */
#if   (SRVX_LKUPCURVE_S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPCURVE_S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S16_S16 not supported'

/* SRVX_LKUPCURVE_S16_S16_LOCATION */
#endif

/* SRVX_LKUPCURVE_S16_U16_LOCATION */
#if   (SRVX_LKUPCURVE_S16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpCurve_S16_U16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPCURVE_S16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_S16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_S16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpCurve_S16_U16(sint16 Xin_s16, sint16 N_s16, const sint16 *X_pcs16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_S16_U16 not supported'

/* SRVX_LKUPCURVE_S16_U16_LOCATION */
#endif

/* SRVX_LKUPCURVE_U8_S8_LOCATION */
#if   (SRVX_LKUPCURVE_U8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpCurve_U8_S8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint8 *Val_pcs8);

#elif (SRVX_LKUPCURVE_U8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpCurve_U8_S8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U8_S8 not supported'

/* SRVX_LKUPCURVE_U8_S8_LOCATION */
#endif

/* SRVX_LKUPCURVE_U8_S16_LOCATION */
#if   (SRVX_LKUPCURVE_U8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpCurve_U8_S16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint16 *Val_pcs16);

#elif (SRVX_LKUPCURVE_U8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpCurve_U8_S16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U8_S16 not supported'

/* SRVX_LKUPCURVE_U8_S16_LOCATION */
#endif

/* SRVX_LKUPCURVE_U8_U8_LOCATION */
#if   (SRVX_LKUPCURVE_U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_LKUPCURVE_U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U8_U8 not supported'

/* SRVX_LKUPCURVE_U8_U8_LOCATION */
#endif

/* SRVX_LKUPCURVE_U8_U16_LOCATION */
#if   (SRVX_LKUPCURVE_U8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpCurve_U8_U16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint16 *Val_pcu16);

#elif (SRVX_LKUPCURVE_U8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpCurve_U8_U16(uint8 Xin_u8, uint8 N_u8, const uint8 *X_pcu8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U8_U16 not supported'

/* SRVX_LKUPCURVE_U8_U16_LOCATION */
#endif

/* SRVX_LKUPCURVE_U16_S8_LOCATION */
#if   (SRVX_LKUPCURVE_U16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpCurve_U16_S8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint8 *Val_pcs8);

#elif (SRVX_LKUPCURVE_U16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpCurve_U16_S8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U16_S8 not supported'

/* SRVX_LKUPCURVE_U16_S8_LOCATION */
#endif

/* SRVX_LKUPCURVE_U16_S16_LOCATION */
#if   (SRVX_LKUPCURVE_U16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpCurve_U16_S16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPCURVE_U16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpCurve_U16_S16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U16_S16 not supported'

/* SRVX_LKUPCURVE_U16_S16_LOCATION */
#endif

/* SRVX_LKUPCURVE_U16_U8_LOCATION */
#if   (SRVX_LKUPCURVE_U16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpCurve_U16_U8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint8 *Val_pcu8);

#elif (SRVX_LKUPCURVE_U16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpCurve_U16_U8(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U16_U8 not supported'

/* SRVX_LKUPCURVE_U16_U8_LOCATION */
#endif

/* SRVX_LKUPCURVE_U16_U16_LOCATION */
#if   (SRVX_LKUPCURVE_U16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPCURVE_U16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpCurve_U16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPCURVE_U16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *X_pcu16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpCurve_U16_U16 not supported'

/* SRVX_LKUPCURVE_U16_U16_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * INTERPOLATION MAP
 *
 ***********************************************************************************************************************
 */
 
/* SRVX_IPOMAP_S8S8_S8_LOCATION */
#if   (SRVX_IPOMAP_S8S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_S8S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S8S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S8S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S8S8_S8 not supported'

/* SRVX_IPOMAP_S8S8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_S8S8_S16_LOCATION */
#if   (SRVX_IPOMAP_S8S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_S8S8_S16(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_S8S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S8S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S8S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_S8S8_S16(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S8S8_S16 not supported'

/* SRVX_IPOMAP_S8S8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_S8S8_U8_LOCATION */
#if   (SRVX_IPOMAP_S8S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_S8S8_U8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_S8S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S8S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S8S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_S8S8_U8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S8S8_U8 not supported'

/* SRVX_IPOMAP_S8S8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_S8S8_U16_LOCATION */
#if   (SRVX_IPOMAP_S8S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_S8S8_U16(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_S8S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S8S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S8S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_S8S8_U16(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S8S8_U16 not supported'

/* SRVX_IPOMAP_S8S8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_S16S16_S8_LOCATION */
#if   (SRVX_IPOMAP_S16S16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_S16S16_S8(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_S16S16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_S16S16_S8(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S16_S8 not supported'

/* SRVX_IPOMAP_S16S16_S8_LOCATION */
#endif
 
/* SRVX_IPOMAP_S16S16_S16_LOCATION */
#if   (SRVX_IPOMAP_S16S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_S16S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S16_S16 not supported'

/* SRVX_IPOMAP_S16S16_S16_LOCATION */
#endif

/* SRVX_IPOMAP_S16S16_U8_LOCATION */
#if   (SRVX_IPOMAP_S16S16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_S16S16_U8(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_S16S16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_S16S16_U8(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S16_U8 not supported'

/* SRVX_IPOMAP_S16S16_U8_LOCATION */
#endif



/* SRVX_IPOMAP_S16S16_S32_LOCATION */
#if   (SRVX_IPOMAP_S16S16_S32_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_IpoMap_S16S16_S32(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint32 *Val_pcs32);

#elif (SRVX_IPOMAP_S16S16_S32_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S16_S32 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S16_S32_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_IpoMap_S16S16_S32(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint32 *Val_pcs32));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S16_S32 not supported'

/* SRVX_IPOMAP_S16S16_S32_LOCATION */
#endif




 
/* SRVX_IPOMAP_S16S16_U16_LOCATION */
#if   (SRVX_IPOMAP_S16S16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_S16S16_U16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_S16S16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_S16S16_U16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S16_U16 not supported'

/* SRVX_IPOMAP_S16S16_U16_LOCATION */
#endif

/* SRVX_IPOMAP_S16S8_S16_LOCATION */
#if   (SRVX_IPOMAP_S16S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_S16S8_S16(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_S16S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_S16S8_S16(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S8_S16 not supported'

/* SRVX_IPOMAP_S16S8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_S16S8_S8_LOCATION */
#if   (SRVX_IPOMAP_S16S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_S16S8_S8(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_S16S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_S16S8_S8(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S8_S8 not supported'

/* SRVX_IPOMAP_S16S8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_S16S8_U8_LOCATION */
#if   (SRVX_IPOMAP_S16S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_S16S8_U8(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_S16S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_S16S8_U8(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S8_U8 not supported'

/* SRVX_IPOMAP_S16S8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_S16S8_U16_LOCATION */
#if   (SRVX_IPOMAP_S16S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_S16S8_U16(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_S16S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_S16S8_U16(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint8 *Y_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16S8_U16 not supported'

/* SRVX_IPOMAP_S16S8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_S16U8_S16_LOCATION */
#if   (SRVX_IPOMAP_S16U8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_S16U8_S16(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_S16U8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16U8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16U8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_S16U8_S16(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16U8_S16 not supported'

/* SRVX_IPOMAP_S16U8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_S16U8_S8_LOCATION */
#if   (SRVX_IPOMAP_S16U8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_S16U8_S8(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_S16U8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16U8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16U8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_S16U8_S8(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16U8_S8 not supported'

/* SRVX_IPOMAP_S16U8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_S16U8_U8_LOCATION */
#if   (SRVX_IPOMAP_S16U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_S16U8_U8(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_S16U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_S16U8_U8(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16U8_U8 not supported'

/* SRVX_IPOMAP_S16U8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_S16U8_U16_LOCATION */
#if   (SRVX_IPOMAP_S16U8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_S16U8_U16(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_S16U8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_S16U8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_S16U8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_S16U8_U16(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const uint8 *Y_pcu8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_S16U8_U16 not supported'

/* SRVX_IPOMAP_S16U8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_U8S8_U8_LOCATION */
#if   (SRVX_IPOMAP_U8S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U8S8_U8(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U8S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U8S8_U8(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8S8_U8 not supported'

/* SRVX_IPOMAP_U8S8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U8S8_U16_LOCATION */
#if   (SRVX_IPOMAP_U8S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U8S8_U16(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U8S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U8S8_U16(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8S8_U16 not supported'

/* SRVX_IPOMAP_U8S8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_U8S8_S16_LOCATION */
#if   (SRVX_IPOMAP_U8S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U8S8_S16(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U8S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U8S8_S16(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8S8_S16 not supported'

/* SRVX_IPOMAP_U8S8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U8S8_S8_LOCATION */
#if   (SRVX_IPOMAP_U8S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U8S8_S8(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U8S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U8S8_S8(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8S8_S8 not supported'

/* SRVX_IPOMAP_U8S8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U8U8_U8_LOCATION */
#if   (SRVX_IPOMAP_U8U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U8U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8U8_U8 not supported'

/* SRVX_IPOMAP_U8U8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U8U8_U16_LOCATION */
#if   (SRVX_IPOMAP_U8U8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U8U8_U16(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U8U8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8U8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8U8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U8U8_U16(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8U8_U16 not supported'

/* SRVX_IPOMAP_U8U8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_U8U8_S16_LOCATION */
#if   (SRVX_IPOMAP_U8U8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U8U8_S16(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U8U8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8U8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8U8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U8U8_S16(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8U8_S16 not supported'

/* SRVX_IPOMAP_U8U8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U8U8_S8_LOCATION */
#if   (SRVX_IPOMAP_U8U8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U8U8_S8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U8U8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U8U8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U8U8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U8U8_S8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U8U8_S8 not supported'

/* SRVX_IPOMAP_U8U8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U16S8_S8_LOCATION */
#if   (SRVX_IPOMAP_U16S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U16S8_S8(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U16S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U16S8_S8(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S8_S8 not supported'

/* SRVX_IPOMAP_U16S8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U16S8_S16_LOCATION */
#if   (SRVX_IPOMAP_U16S8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U16S8_S16(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U16S8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U16S8_S16(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S8_S16 not supported'

/* SRVX_IPOMAP_U16S8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U16S8_U8_LOCATION */
#if   (SRVX_IPOMAP_U16S8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U16S8_U8(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U16S8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U16S8_U8(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S8_U8 not supported'

/* SRVX_IPOMAP_U16S8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U16S8_U16_LOCATION */
#if   (SRVX_IPOMAP_U16S8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U16S8_U16(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U16S8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U16S8_U16(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint8 *Y_pcs8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S8_U16 not supported'

/* SRVX_IPOMAP_U16S8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_U16S16_S8_LOCATION */
#if   (SRVX_IPOMAP_U16S16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U16S16_S8(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U16S16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U16S16_S8(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S16_S8 not supported'

/* SRVX_IPOMAP_U16S16_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U16S16_S16_LOCATION */
#if   (SRVX_IPOMAP_U16S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U16S16_S16(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U16S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U16S16_S16(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S16_S16 not supported'

/* SRVX_IPOMAP_U16S16_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U16S16_U8_LOCATION */
#if   (SRVX_IPOMAP_U16S16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U16S16_U8(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U16S16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U16S16_U8(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S16_U8 not supported'

/* SRVX_IPOMAP_U16S16_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U16S16_U16_LOCATION */
#if   (SRVX_IPOMAP_U16S16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U16S16_U16(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U16S16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16S16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16S16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U16S16_U16(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const sint16 *Y_pcs16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16S16_U16 not supported'

/* SRVX_IPOMAP_U16S16_U16_LOCATION */
#endif
 
/* SRVX_IPOMAP_U16U8_S8_LOCATION */
#if   (SRVX_IPOMAP_U16U8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U16U8_S8(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U16U8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U16U8_S8(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U8_S8 not supported'

/* SRVX_IPOMAP_U16U8_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U16U8_S16_LOCATION */
#if   (SRVX_IPOMAP_U16U8_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U16U8_S16(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U16U8_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U8_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U8_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U16U8_S16(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U8_S16 not supported'

/* SRVX_IPOMAP_U16U8_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U16U8_U8_LOCATION */
#if   (SRVX_IPOMAP_U16U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U16U8_U8(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U16U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U16U8_U8(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U8_U8 not supported'

/* SRVX_IPOMAP_U16U8_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U16U8_U16_LOCATION */
#if   (SRVX_IPOMAP_U16U8_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U16U8_U16(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U16U8_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U8_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U8_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U16U8_U16(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint8 *Y_pcu8, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U8_U16 not supported'

/* SRVX_IPOMAP_U16U8_U16_LOCATION */
#endif

/* SRVX_IPOMAP_U16U16_S8_LOCATION */
#if   (SRVX_IPOMAP_U16U16_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_IpoMap_U16U16_S8(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const sint8 *Val_pcs8);

#elif (SRVX_IPOMAP_U16U16_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U16_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U16_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_IpoMap_U16U16_S8(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U16_S8 not supported'

/* SRVX_IPOMAP_U16U16_S8_LOCATION */
#endif

/* SRVX_IPOMAP_U16U16_S16_LOCATION */
#if   (SRVX_IPOMAP_U16U16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMap_U16U16_S16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const sint16 *Val_pcs16);

#elif (SRVX_IPOMAP_U16U16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMap_U16U16_S16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U16_S16 not supported'

/* SRVX_IPOMAP_U16U16_S16_LOCATION */
#endif

/* SRVX_IPOMAP_U16U16_U8_LOCATION */
#if   (SRVX_IPOMAP_U16U16_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_IpoMap_U16U16_U8(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint8 *Val_pcu8);

#elif (SRVX_IPOMAP_U16U16_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U16_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U16_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_IpoMap_U16U16_U8(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U16_U8 not supported'

/* SRVX_IPOMAP_U16U16_U8_LOCATION */
#endif

/* SRVX_IPOMAP_U16U16_U16_LOCATION */
#if   (SRVX_IPOMAP_U16U16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_IpoMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16);

#elif (SRVX_IPOMAP_U16U16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_IpoMap_U16U16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPOMAP_U16U16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_IpoMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_IpoMap_U16U16_U16 not supported'

/* SRVX_IPOMAP_U16U16_U16_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * LOOKUP MAP
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPMAP_S8S8_S8_LOCATION */
#if   (SRVX_LKUPMAP_S8S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_LKUPMAP_S8S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpMap_S8S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPMAP_S8S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpMap_S8S8_S8 not supported'

/* SRVX_LKUPMAP_S8S8_S8_LOCATION */
#endif
 
/* SRVX_LKUPMAP_S16S16_S16_LOCATION */
#if   (SRVX_LKUPMAP_S16S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPMAP_S16S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpMap_S16S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPMAP_S16S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpMap_S16S16_S16 not supported'

/* SRVX_LKUPMAP_S16S16_S16_LOCATION */
#endif

/* SRVX_LKUPMAP_U8U8_U8_LOCATION */
#if   (SRVX_LKUPMAP_U8U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_LKUPMAP_U8U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpMap_U8U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPMAP_U8U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpMap_U8U8_U8 not supported'

/* SRVX_LKUPMAP_U8U8_U8_LOCATION */
#endif
 
/* SRVX_LKUPMAP_U16U16_U16_LOCATION */
#if   (SRVX_LKUPMAP_U16U16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPMAP_U16U16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpMap_U16U16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPMAP_U16U16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpMap_U16U16_U16 not supported'

/* SRVX_LKUPMAP_U16U16_U16_LOCATION */
#endif


/*
 ***********************************************************************************************************************
 *
 * LOOKUP_NEAR MAP
 *
 ***********************************************************************************************************************
 */

/* SRVX_LKUPMAP_S8S8_S8_LOCATION */
#if   (SRVX_LKUPNEARMAP_S8S8_S8_LOCATION == SRVX_LOCATION_CACHED)

    extern sint8 SrvX_LkUpNearMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8);

#elif (SRVX_LKUPNEARMAP_S8S8_S8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpNearMap_S8S8_S8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPNEARMAP_S8S8_S8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvX_LkUpNearMap_S8S8_S8(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8, const sint8 *Y_pcs8, const sint8 *Val_pcs8));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMap_S8S8_S8 not supported'

/* SRVX_LKUPNEARMAP_S8S8_S8_LOCATION */
#endif
 
/* SRVX_LKUPNEARMAP_S16S16_S16_LOCATION */
#if   (SRVX_LKUPNEARMAP_S16S16_S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_LkUpNearMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16);

#elif (SRVX_LKUPNEARMAP_S16S16_S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpNearMap_S16S16_S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPNEARMAP_S16S16_S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_LkUpNearMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16, const sint16 *Y_pcs16, const sint16 *Val_pcs16));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMap_S16S16_S16 not supported'

/* SRVX_LKUPNEARMAP_S16S16_S16_LOCATION */
#endif

/* SRVX_LKUPNEARMAP_U8U8_U8_LOCATION */
#if   (SRVX_LKUPNEARMAP_U8U8_U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8 SrvX_LkUpNearMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8);

#elif (SRVX_LKUPNEARMAP_U8U8_U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpNearMap_U8U8_U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPNEARMAP_U8U8_U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvX_LkUpNearMap_U8U8_U8(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8, const uint8 *Y_pcu8, const uint8 *Val_pcu8));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMap_U8U8_U8 not supported'

/* SRVX_LKUPNEARMAP_U8U8_U8_LOCATION */
#endif
 
/* SRVX_LKUPNEARMAP_U16U16_U16_LOCATION */
#if   (SRVX_LKUPNEARMAP_U16U16_U16_LOCATION == SRVX_LOCATION_CACHED)

    extern uint16 SrvX_LkUpNearMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16);

#elif (SRVX_LKUPNEARMAP_U16U16_U16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_LkUpNearMap_U16U16_U16 can\'t be inlined: Configuration not supported'

#elif (SRVX_LKUPNEARMAP_U16U16_U16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvX_LkUpNearMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16, const uint16 *Y_pcu16, const uint16 *Val_pcu16));
#else
    #error >>>> 'Configuration for SrvX_LkUpNearMap_U16U16_U16 not supported'

/* SRVX_LKUPNEARMAP_U16U16_U16_LOCATION */
#endif


/* prototypes for fixed cureves/maps */
extern sint16 SrvX_IpoFixCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *Val_pcs16, sint16 Offset_s16, sint16 Shift_s16);
extern sint8  SrvX_IpoFixCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *Val_pcs8, sint8 Offset_s8, sint8 Shift_s8);
extern uint16 SrvX_IpoFixCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *Val_pcu16, uint16 Offset_u16, uint16 Shift_u16);
extern uint8  SrvX_IpoFixCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *Val_pcu8, uint8 Offset_u8, uint8 Shift_u8);

extern sint16 SrvX_LkUpFixCurve_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *Val_pcs16, sint16 Offset_s16, sint16 Shift_s16);
extern sint8  SrvX_LkUpFixCurve_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *Val_pcs8, sint8 Offset_s8, sint8 Shift_s8);
extern uint16 SrvX_LkUpFixCurve_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *Val_pcu16, uint16 Offset_u16, uint16 Shift_u16);
extern uint8  SrvX_LkUpFixCurve_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *Val_pcu8, uint8 Offset_u8, uint8 Shift_u8);

extern sint16 SrvX_IpoFixCurveI_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *Val_pcs16, sint16 Offset_s16, sint16 Intv_s16);
extern sint8  SrvX_IpoFixCurveI_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *Val_pcs8, sint8 Offset_s8, sint8 Intv_s8);
extern uint16 SrvX_IpoFixCurveI_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *Val_pcu16, uint16 Offset_u16, uint16 Intv_u16);
extern uint8  SrvX_IpoFixCurveI_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *Val_pcu8, uint8 Offset_u8, uint8 Intv_u8);

extern sint16 SrvX_LkUpFixCurveI_S16_S16(sint16 Xin_s16, sint16 N_s16, const sint16 *Val_pcs16, sint16 Offset_s16, sint16 Intv_s16);
extern sint8  SrvX_LkUpFixCurveI_S8_S8(sint8 Xin_s8, sint8 N_s8, const sint8 *Val_pcs8, sint8 Offset_s8, sint8 Intv_s8);
extern uint16 SrvX_LkUpFixCurveI_U16_U16(uint16 Xin_u16, uint16 N_u16, const uint16 *Val_pcu16, uint16 Offset_u16, uint16 Intv_u16);
extern uint8  SrvX_LkUpFixCurveI_U8_U8(uint8 Xin_u8, uint8 N_u8, const uint8 *Val_pcu8, uint8 Offset_u8, uint8 Intv_u8);

extern uint8  SrvX_IpoFixMapI_U8U8_U8   (uint8 Xin_u8,   uint8 Yin_u8,   uint8 Nx_u8,   uint8 Ny_u8,   const uint8 *Val_pcu8,   uint8  OffsetX_u8,   uint8 IntvX_u8,   uint8  OffsetY_u8,   uint8 IntvY_u8);
extern uint16 SrvX_IpoFixMapI_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *Val_pcu16, uint16  OffsetX_u16, uint16 IntvX_u16, uint16  OffsetY_u16, uint16 IntvY_u16);
extern sint8  SrvX_IpoFixMapI_S8S8_S8   (sint8 Xin_s8,   sint8 Yin_s8,   sint8 Nx_s8,   sint8 Ny_s8,   const sint8 *Val_pcs8,   sint8  OffsetX_s8,   sint8 IntvX_s8,   sint8  OffsetY_s8,   sint8 IntvY_s8);
extern sint16 SrvX_IpoFixMapI_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *Val_pcs16, sint16  OffsetX_s16, sint16 IntvX_s16, sint16  OffsetY_s16, sint16 IntvY_s16);

extern uint8  SrvX_IpoFixMap_U8U8_U8   (uint8 Xin_u8,   uint8 Yin_u8,   uint8 Nx_u8,   uint8 Ny_u8,   const uint8 *Val_pcu8,   uint8  OffsetX_u8,   uint8 ShiftX_u8,   uint8  OffsetY_u8,   uint8 ShiftY_u8);
extern uint16 SrvX_IpoFixMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *Val_pcu16, uint16  OffsetX_u16, uint16 ShiftX_u16, uint16  OffsetY_u16, uint16 ShiftY_u16);
extern sint8  SrvX_IpoFixMap_S8S8_S8   (sint8 Xin_s8,   sint8 Yin_s8,   sint8 Nx_s8,   sint8 Ny_s8,   const sint8 *Val_pcs8,   sint8  OffsetX_s8,   sint8 ShiftX_s8,   sint8  OffsetY_s8,   sint8 ShiftY_s8);
extern sint16 SrvX_IpoFixMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *Val_pcs16, sint16  OffsetX_s16, sint16 ShiftX_s16, sint16  OffsetY_s16, sint16 ShiftY_s16);

extern uint8  SrvX_LkUpFixMapI_U8U8_U8   (uint8 Xin_u8,   uint8 Yin_u8,   uint8 Nx_u8,   uint8 Ny_u8,   const uint8 *Val_pcu8,   uint8  OffsetX_u8,   uint8 IntvX_u8,   uint8  OffsetY_u8,   uint8 IntvY_u8);
extern uint16 SrvX_LkUpFixMapI_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *Val_pcu16, uint16  OffsetX_u16, uint16 IntvX_u16, uint16  OffsetY_u16, uint16 IntvY_u16);
extern sint8  SrvX_LkUpFixMapI_S8S8_S8   (sint8 Xin_s8,   sint8 Yin_s8,   sint8 Nx_s8,   sint8 Ny_s8,   const sint8 *Val_pcs8,   sint8  OffsetX_s8,   sint8 IntvX_s8,   sint8  OffsetY_s8,   sint8 IntvY_s8);
extern sint16 SrvX_LkUpFixMapI_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *Val_pcs16, sint16  OffsetX_s16, sint16 IntvX_s16, sint16  OffsetY_s16, sint16 IntvY_s16);

extern uint8  SrvX_LkUpFixMap_U8U8_U8   (uint8 Xin_u8,   uint8 Yin_u8,   uint8 Nx_u8,   uint8 Ny_u8,   const uint8 *Val_pcu8,   uint8  OffsetX_u8,   uint8 ShiftX_u8,   uint8  OffsetY_u8,   uint8 ShiftY_u8);
extern uint16 SrvX_LkUpFixMap_U16U16_U16(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *Val_pcu16, uint16  OffsetX_u16, uint16 ShiftX_u16, uint16  OffsetY_u16, uint16 ShiftY_u16);
extern sint8  SrvX_LkUpFixMap_S8S8_S8   (sint8 Xin_s8,   sint8 Yin_s8,   sint8 Nx_s8,   sint8 Ny_s8,   const sint8 *Val_pcs8,   sint8  OffsetX_s8,   sint8 ShiftX_s8,   sint8  OffsetY_s8,   sint8 ShiftY_s8);
extern sint16 SrvX_LkUpFixMap_S16S16_S16(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *Val_pcs16, sint16  OffsetX_s16, sint16 ShiftX_s16, sint16  OffsetY_s16, sint16 ShiftY_s16);


/* _SRVX_IPO_H   */
#endif
