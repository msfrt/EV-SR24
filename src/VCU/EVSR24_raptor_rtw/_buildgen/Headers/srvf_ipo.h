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
 * $Filename__:srvf_ipo.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:SrvF Float services
 *             Derived from B_SRVF.10.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:24.12.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_ipo$ 
 * $Variant___:1.20.0$ 
 * $Revision__:1$ 
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
 * 1.20.0; 1     24.12.2013 PIR5COB
 *   The X_in data type for SrvF_SearchDistr_S8_R32 was changed to sint8
 * 
 * 1.20.0; 0     05.12.2013 PIR5COB
 *   The new mixed datatype functionalities inplemented in the SrvPT package 
 *   will be migrated to the Srv Package.
 * 
 * 1.18.1; 0     25.07.2013 PIR5COB
 *   Bugfix is done to overcome the reentrancy ans data inconsistancy problem in
 *    search distribution functionalities
 * 
 * 1.18.0; 0     25.04.2013 PIR5COB
 *   The following changes has been made in FC : SrvF:
 *   1. New mixed integer and float data type interpolation functionalities are 
 *   added.
 *   2. New float memory copy functionality is added.
 *   3. New float equality comparison function is added.
 *   
 *   Additionally, the variable DX in the function srvf_exp is renamed as Dx_r32
 *    to remove a build error due to multiple definitions.
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVF.11.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVF.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_IPO_H
#define _SRVF_IPO_H


/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */
 
/* Structure for float search distribution functionalities */	
typedef struct
{
   #if ((defined (CPU_BYTE_ORDER)) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST))// Check for endianness
   real32 Ratio_r32; 	
   uint32 Index_u32;  
   #else	   
   uint32 Index_u32;
   real32 Ratio_r32;
   #endif
} SrvF_SearchResultR32_t;	

 
/*
 ***********************************************************************************************************************
 * Prototypes
 ***********************************************************************************************************************
 */
 
extern real32 SrvF_IpoCurve_R32_R32(real32 Xin_r32, uint32 N_u32, const real32* X_pcr32, const real32* Val_pcr32);
extern real32 SrvF_IpoMap_R32R32_R32(real32 Xin_r32, real32 Yin_r32, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32, const real32 *Y_pcr32, const real32 *Val_pcr32);
extern real32 SrvF_IpoCurveGroup_R32(const SrvF_SearchResultR32_t* const SRes_cpcst, const real32* Val_pcr32);
extern real32 SrvF_IpoMapGroup_R32(const SrvF_SearchResultR32_t* const SResX_cpcst, const SrvF_SearchResultR32_t* const SResY_cpcst, uint32 N_u32, const real32 *Val_pcr32);
extern void   SrvF_SearchDistr_R32(SrvF_SearchResultR32_t* const SResX_cpst, real32 Xin_r32, uint32 N_u32, const real32* X_pcr32);
extern real32 SrvF_IpoCurve_S16_R32(sint16 Xin_s16, sint16 N_s16, const sint16* X_pcs16, const real32* Val_pcr32);
extern sint16 SrvF_IpoCurve_R32_S16(real32 Xin_r32, uint32 N_u32, const real32* X_pcr32, const sint16* Val_pcs16);
extern real32 SrvF_IpoCurve_U16_R32(uint16 Xin_u16, uint16 N_u16, const uint16* X_pcu16, const real32* Val_pcr32);
extern sint8 SrvF_IpoCurve_R32_S8(real32 Xin_r32, uint32 N_u32, const real32* X_pcr32, const sint8* Val_pcs8);
extern uint8 SrvF_IpoCurve_R32_U8(real32 Xin_r32, uint32 N_u32, const real32* X_pcr32, const uint8* Val_pcu8);
extern uint16 SrvF_IpoCurve_R32_U16(real32 Xin_r32, uint32 N_u32, const real32* X_pcr32, const uint16* Val_pcu16);
extern real32 SrvF_IpoCurve_S8_R32(sint8 Xin_s8, sint8 N_s8, const sint8* X_pcs8, const real32* Val_pcr32);
extern real32 SrvF_IpoCurve_U8_R32(uint8 Xin_u8, uint8 N_u8, const uint8* X_pcu8, const real32* Val_pcr32);


extern real32 SrvF_IpoCurveGroup_S16_R32(const SrvX_SearchResultU16_t* const SRes_cpcst, const real32 *Val_pcr32);
extern sint16 SrvF_IpoCurveGroup_R32_S16(const SrvF_SearchResultR32_t* const SRes_cpcst, const sint16 *Val_pcs16);
extern uint16 SrvF_IpoCurveGroup_R32_U16(const SrvF_SearchResultR32_t* const SRes_cpcst, const uint16 *Val_pcu16);
extern sint8 SrvF_IpoCurveGroup_R32_S8(const SrvF_SearchResultR32_t* const SRes_cpcst, const sint8 *Val_pcs8);
extern uint8 SrvF_IpoCurveGroup_R32_U8(const SrvF_SearchResultR32_t* const SRes_cpcst, const uint8 *Val_pcu8);
extern real32 SrvF_IpoMap_S16S16_R32(sint16 Xin_s16, sint16 Yin_s16, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16,
 const sint16 *Y_pcs16, const real32 *Val_pcr32);
extern sint16 SrvF_IpoMap_R32R32_S16(real32 Xin_r32, real32 Yin_r32, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
 const real32 *Y_pcr32, const sint16 *Val_pcs16);
extern real32 SrvF_IpoMap_R32S16_R32(real32 Xin_r32, sint16 Yin_s16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
 const sint16 *Y_pcs16, const real32 *Val_pcr32);
extern sint16 SrvF_IpoMap_R32S16_S16(real32 Xin_r32, sint16 Yin_s16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
 const sint16 *Y_pcs16, const sint16 *Val_pcs16);
extern uint8 SrvF_IpoMap_R32S16_U8(real32 Xin_r32, sint16 Yin_s16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint16 *Y_pcs16, const uint8 *Val_pcu8);
 extern uint16 SrvF_IpoMap_R32S16_U16(real32 Xin_r32, sint16 Yin_s16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint16 *Y_pcs16, const uint16 *Val_pcu16);
 extern sint8 SrvF_IpoMap_R32R32_S8(real32 Xin_r32, real32 Yin_r32, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const real32 *Y_pcr32, const sint8 *Val_pcs8);
 extern uint8 SrvF_IpoMap_R32R32_U8(real32 Xin_r32, real32 Yin_r32, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const real32 *Y_pcr32, const uint8 *Val_pcu8);
 extern uint16 SrvF_IpoMap_R32R32_U16(real32 Xin_r32, real32 Yin_r32, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const real32 *Y_pcr32, const uint16 *Val_pcu16);
 extern real32 SrvF_IpoMap_R32S8_R32(real32 Xin_r32, sint8 Yin_s8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint8 *Y_pcs8, const real32 *Val_pcr32);
 extern sint8 SrvF_IpoMap_R32S8_S8(real32 Xin_r32, sint8 Yin_s8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint8 *Y_pcs8, const sint8 *Val_pcs8);
 extern sint16 SrvF_IpoMap_R32S8_S16(real32 Xin_r32, sint8 Yin_s8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint8 *Y_pcs8, const sint16 *Val_pcs16);
 extern uint8 SrvF_IpoMap_R32S8_U8(real32 Xin_r32, sint8 Yin_s8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint8 *Y_pcs8, const uint8 *Val_pcu8);
 extern uint16 SrvF_IpoMap_R32S8_U16(real32 Xin_r32, sint8 Yin_s8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint8 *Y_pcs8, const uint16 *Val_pcu16);
 extern sint8 SrvF_IpoMap_R32S16_S8(real32 Xin_r32, sint16 Yin_s16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const sint16 *Y_pcs16, const sint8 *Val_pcs8);
 extern uint16 SrvF_IpoMap_R32U16_U16(real32 Xin_r32, uint16 Yin_u16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint16 *Y_pcu16, const uint16 *Val_pcu16);
 extern real32 SrvF_IpoMap_R32U8_R32(real32 Xin_r32, uint8 Yin_u8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint8 *Y_pcu8, const real32 *Val_pcr32);
 extern sint8 SrvF_IpoMap_R32U8_S8(real32 Xin_r32, uint8 Yin_u8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint8 *Y_pcu8, const sint8 *Val_pcs8);
 extern sint16 SrvF_IpoMap_R32U8_S16(real32 Xin_r32, uint8 Yin_u8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint8 *Y_pcu8, const sint16 *Val_pcs16);
 extern uint8 SrvF_IpoMap_R32U8_U8(real32 Xin_r32, uint8 Yin_u8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint8 *Y_pcu8, const uint8 *Val_pcu8);
 extern uint16 SrvF_IpoMap_R32U8_U16(real32 Xin_r32, uint8 Yin_u8, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint8 *Y_pcu8, const uint16 *Val_pcu16);
 extern real32 SrvF_IpoMap_R32U16_R32(real32 Xin_r32, uint16 Yin_u16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint16 *Y_pcu16, const real32 *Val_pcr32);
 extern sint8 SrvF_IpoMap_R32U16_S8(real32 Xin_r32, uint16 Yin_u16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint16 *Y_pcu16, const sint8 *Val_pcs8);
 extern sint16 SrvF_IpoMap_R32U16_S16(real32 Xin_r32, uint16 Yin_u16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint16 *Y_pcu16, const sint16 *Val_pcs16);
 extern uint8 SrvF_IpoMap_R32U16_U8(real32 Xin_r32, uint16 Yin_u16, uint32 Nx_u32, uint32 Ny_u32, const real32 *X_pcr32,
              const uint16 *Y_pcu16, const uint8 *Val_pcu8);
 extern real32 SrvF_IpoMap_U16U16_R32(uint16 Xin_u16, uint16 Yin_u16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16,
              const uint16 *Y_pcu16, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_S8S8_R32(sint8 Xin_s8, sint8 Yin_s8, sint8 Nx_s8, sint8 Ny_s8, const sint8 *X_pcs8,
              const sint8 *Y_pcs8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_S16S8_R32(sint16 Xin_s16, sint8 Yin_s8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16,
              const sint8 *Y_pcs8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_S16U8_R32(sint16 Xin_s16, uint8 Yin_u8, sint16 Nx_s16, sint16 Ny_s16, const sint16 *X_pcs16,
              const uint8 *Y_pcu8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_U8S8_R32(uint8 Xin_u8, sint8 Yin_s8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8,
              const sint8 *Y_pcs8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_U8U8_R32(uint8 Xin_u8, uint8 Yin_u8, uint8 Nx_u8, uint8 Ny_u8, const uint8 *X_pcu8,
              const uint8 *Y_pcu8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_U16S8_R32(uint16 Xin_u16, sint8 Yin_s8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16,
              const sint8 *Y_pcs8, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_U16S16_R32(uint16 Xin_u16, sint16 Yin_s16, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16,
              const sint16 *Y_pcs16, const real32 *Val_pcr32);
 extern real32 SrvF_IpoMap_U16U8_R32(uint16 Xin_u16, uint8 Yin_u8, uint16 Nx_u16, uint16 Ny_u16, const uint16 *X_pcu16,
              const uint8 *Y_pcu8, const real32 *Val_pcr32);
 
extern real32 SrvF_IpoMapGroup_S16S16_R32(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            sint16 N_s16, const real32 *Val_pcr32) ;
extern sint16 SrvF_IpoMapGroup_R32R32_S16(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const sint16 *Val_pcs16);
extern uint8 SrvF_IpoMapGroup_R32R32_U8(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const uint8 *Val_pcu8);
extern real32 SrvF_IpoMapGroup_R32S16_R32(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            sint16 N_s16, const real32 *Val_pcr32);
extern sint16 SrvF_IpoMapGroup_R32S16_S16(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            sint16 N_s16, const sint16 *Val_pcs16);
extern real32 SrvF_IpoMapGroup_S16R32_R32(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const real32 *Val_pcr32);
extern sint16 SrvF_IpoMapGroup_S16R32_S16(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const sint16 *Val_pcs16);		
extern real32 SrvF_IpoMapGroup_U8U8_R32(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            uint8 N_u8, const real32 *Val_pcr32);
extern uint16 SrvF_IpoMapGroup_S16R32_U16(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const uint16 *Val_pcu16);
extern sint8 SrvF_IpoMapGroup_R32R32_S8(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const sint8 *Val_pcs8);
extern uint16 SrvF_IpoMapGroup_R32R32_U16(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const uint16 *Val_pcu16);
extern sint8 SrvF_IpoMapGroup_R32S16_S8(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            uint32 N_u32, const sint8 *Val_pcs8);
extern uint8 SrvF_IpoMapGroup_R32S16_U8(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            uint32 N_u32, const uint8 *Val_pcu8);
extern uint16 SrvF_IpoMapGroup_R32S16_U16(const SrvF_SearchResultR32_t* const SResX_cpcst,
                            const SrvX_SearchResultU16_t* const SResY_cpcst,
                            uint32 N_u32, const uint16 *Val_pcu16);
extern sint8 SrvF_IpoMapGroup_S16R32_S8(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const sint8 *Val_pcs8);
extern uint8 SrvF_IpoMapGroup_S16R32_U8(const SrvX_SearchResultU16_t* const SResX_cpcst,
                            const SrvF_SearchResultR32_t* const SResY_cpcst,
                            uint32 N_u32, const uint8 *Val_pcu8);

extern void SrvF_SearchDistr_U16_R32(SrvF_SearchResultR32_t* const SResX_cpst, uint16 Xin_u16, uint32 N_u32, const uint16* X_pcu16);
extern void SrvF_SearchDistr_S16_R32(SrvF_SearchResultR32_t* const SResX_cpst, sint16 Xin_s16, uint32 N_u32, const sint16* X_pcs16);
extern void SrvF_SearchDistr_S8_R32(SrvF_SearchResultR32_t* const SResX_cpst, sint8 Xin_s8, uint32 N_u32, const sint8* X_pcs8);
extern void SrvF_SearchDistr_U8_R32(SrvF_SearchResultR32_t* const SResX_cpst, uint8 Xin_u8, uint32 N_u32, const uint8* X_pcu8);

/* _SRVF_IPO_H */
#endif

