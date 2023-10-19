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
 * $Filename__:srvb_mem.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KDD2FE$ 
 * $Date______:17.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_mem$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     17.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_MEM_H
#define _SRVB_MEM_H


/* SRVB_MEMCOPYU8_LOCATION ****************************************************************************************/
#if (SRVB_MEMCOPYU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemCopyU8(uint8* Dest_pu8, const uint8* Src_pcu8, uint32 N_u32);

#elif (SRVB_MEMCOPYU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemCopyU8 SrvB_MemCopyU8_inline

#elif (SRVB_MEMCOPYU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemCopyU8(uint8* Dest_pu8, const uint8* Src_pcu8, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemCopyU8 is not supported'

/* SRVB_MEMCOPYU8_LOCATION */
#endif


/* SRVB_MEMCOPYU16_LOCATION ****************************************************************************************/
#if (SRVB_MEMCOPYU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemCopyU16(uint16* Dest_pu16, const uint16* Src_pcu16, uint32 N_u32);

#elif (SRVB_MEMCOPYU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemCopyU16 SrvB_MemCopyU16_inline

#elif (SRVB_MEMCOPYU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemCopyU16(uint16* Dest_pu16, const uint16* Src_pcu16, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemCopyU16 is not supported'

/* SRVB_MEMCOPYU16_LOCATION */
#endif


/* SRVB_MEMCOPYU32_LOCATION ****************************************************************************************/
#if (SRVB_MEMCOPYU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemCopyU32(uint32* Dest_pu32, const uint32* Src_pcu32, uint32 N_u32);

#elif (SRVB_MEMCOPYU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemCopyU32 SrvB_MemCopyU32_inline

#elif (SRVB_MEMCOPYU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemCopyU32(uint32* Dest_pu32, const uint32* Src_pcu32, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemCopyU32 is not supported'

/* SRVB_MEMCOPYU32_LOCATION */
#endif


/* SRVB_MEMFILLU8_LOCATION ****************************************************************************************/
#if (SRVB_MEMFILLU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemFillU8(uint8* Dest_pu8, uint8 Pattern_u8, uint32 N_u32);

#elif (SRVB_MEMFILLU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemFillU8 SrvB_MemFillU8_inline

#elif (SRVB_MEMFILLU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemFillU8(uint8* Dest_pu8, uint8 Pattern_u8, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvBMemFillU8 is not supported'

/* SRVB_MEMFILLU8_LOCATION */
#endif


/* SRVB_MEMFILLU16_LOCATION ****************************************************************************************/
#if (SRVB_MEMFILLU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemFillU16(uint16* Dest_pu16, uint16 Pattern_u16, uint32 N_u32);

#elif (SRVB_MEMFILLU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemFillU16 SrvB_MemFillU16_inline

#elif (SRVB_MEMFILLU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemFillU16(uint16* Dest_pu16, uint16 Pattern_u16, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemFillU16 is not supported'

/* SRVB_MEMFILLU16_LOCATION */
#endif


/* SRVB_MEMFILLU32_LOCATION ****************************************************************************************/
#if (SRVB_MEMFILLU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_MemFillU32(uint32* Dest_pu32, uint32 Pattern_u32, uint32 N_u32);

#elif (SRVB_MEMFILLU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemFillU32 SrvB_MemFillU32_inline

#elif (SRVB_MEMFILLU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_MemFillU32(uint32* Dest_pu32, uint32 Pattern_u32, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemFillU32 is not supported'

/* SRVB_MEMFILLU32_LOCATION */
#endif


/* SRVB_MEMSWAPU8_B_LOCATION ****************************************************************************************/
#if (SRVB_MEMSWAPU8_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_MemSwapU8_B(uint8* Src1_pu8, uint8* Src2_pu8, uint32 N_u32);

#elif (SRVB_MEMSWAPU8_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemSwapU8_B SrvB_MemSwapU8_B_inline

#elif (SRVB_MEMSWAPU8_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_MemSwapU8_B(uint8* Src1_pu8, uint8* Src2_pu8, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemSwapU8_B is not supported'

/* SRVB_MEMSWAPU8_B_LOCATION */
#endif


/* SRVB_MEMSWAPU16_B_LOCATION ****************************************************************************************/
#if (SRVB_MEMSWAPU16_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_MemSwapU16_B(uint16* Src1_pu16, uint16* Src2_pu16, uint32 N_u32);

#elif (SRVB_MEMSWAPU16_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemSwapU16_B SrvB_MemSwapU16_B_inline

#elif (SRVB_MEMSWAPU16_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_MemSwapU16_B(uint16* Src1_pu16, uint16 * Src2_pu16, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemSwapU16_B is not supported'

/* SRVB_MEMSWAPU16_B_LOCATION */
#endif


/* SRVB_MEMSWAPU32_B_LOCATION ****************************************************************************************/
#if (SRVB_MEMSWAPU32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_MemSwapU32_B(uint32* Src1_pu32, uint32* Src2_pu32, uint32 N_u32);

#elif (SRVB_MEMSWAPU32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_MemSwapU32_B SrvB_MemSwapU32_B_inline

#elif (SRVB_MEMSWAPU32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_MemSwapU32_B(uint32* Src1_pu32, uint32* Src2_pu32, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvB_MemSwapU32_B is not supported'

/* SRVB_MEMSWAPU32_B_LOCATION */
#endif



/* _SRVB_MEM_H */
#endif
