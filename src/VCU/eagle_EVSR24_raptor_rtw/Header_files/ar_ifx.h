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
 * $Filename__:ar_ifx.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVX.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ar_ifx$ 
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
 *   Derived from B_SRVX.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _AR_IFX_H
#define _AR_IFX_H


/*
 ***********************************************************************************************************************
 *
 * A U T O S A R
 *
 * Release:                 4.0
 * Revision:                001 Draft
 * Document Title:          Specification of Fixed Point Interpolation Routines 
 * Document Id:             396
 * Document Version:        0.5.4
 * Library:                 IFX
 *
 ***********************************************************************************************************************
 */

/* Autosar needs: Std_Types.h */
#include "std_type.h"


/* Autosar needs: MemMap .h */
#include "core_env.h"
#include "memlay.h"
#include "srvx_conf.h"
#include "srvx_ipo.h"
#include "srvx_iposearch_inl.h"
#include "srvx_ipocurve_inl.h"
#include "srvx_ipomap_inl.h"

#define Ifx_DPResultU16_Type                                    SrvX_SearchResultU16_t

#define Ifx_IntIpoCur_s16_s16                                   SrvX_IpoCurve_S16_S16
#define Ifx_IntIpoCur_s16_s8                                    SrvX_IpoCurve_S16_S8
#define Ifx_IntIpoCur_s16_u16                                   SrvX_IpoCurve_S16_U16
#define Ifx_IntIpoCur_s16_u8                                    SrvX_IpoCurve_S16_U8
#define Ifx_IntIpoCur_s8_s16                                    SrvX_IpoCurve_S8_S16
#define Ifx_IntIpoCur_s8_s8                                     SrvX_IpoCurve_S8_S8
#define Ifx_IntIpoCur_s8_u16                                    SrvX_IpoCurve_S8_U16
#define Ifx_IntIpoCur_s8_u8                                     SrvX_IpoCurve_S8_U8
#define Ifx_IntIpoCur_u16_s16                                   SrvX_IpoCurve_U16_S16
#define Ifx_IntIpoCur_u16_s8                                    SrvX_IpoCurve_U16_S8
#define Ifx_IntIpoCur_u16_u16                                   SrvX_IpoCurve_U16_U16
#define Ifx_IntIpoCur_u16_u8                                    SrvX_IpoCurve_U16_U8
#define Ifx_IntIpoCur_u8_s16                                    SrvX_IpoCurve_U8_S16
#define Ifx_IntIpoCur_u8_s8                                     SrvX_IpoCurve_U8_S8
#define Ifx_IntIpoCur_u8_u16                                    SrvX_IpoCurve_U8_U16
#define Ifx_IntIpoCur_u8_u8                                     SrvX_IpoCurve_U8_U8

#define Ifx_IpoCur_s16                                          SrvX_IpoCurveGroup_S16
#define Ifx_IpoCur_s8                                           SrvX_IpoCurveGroup_S8
#define Ifx_IpoCur_u16                                          SrvX_IpoCurveGroup_U16
#define Ifx_IpoCur_u8                                           SrvX_IpoCurveGroup_U8

#define Ifx_IntIpoFixCur_s16_s16                                SrvX_IpoFixCurve_S16_S16
#define Ifx_IntIpoFixCur_s8_s8                                  SrvX_IpoFixCurve_S8_S8
#define Ifx_IntIpoFixCur_u16_u16                                SrvX_IpoFixCurve_U16_U16
#define Ifx_IntIpoFixCur_u8_u8                                  SrvX_IpoFixCurve_U8_U8

#define Ifx_IntIpoFixICur_s16_s16                               SrvX_IpoFixCurveI_S16_S16
#define Ifx_IntIpoFixICur_s8_s8                                 SrvX_IpoFixCurveI_S8_S8
#define Ifx_IntIpoFixICur_u16_u16                               SrvX_IpoFixCurveI_U16_U16
#define Ifx_IntIpoFixICur_u8_u8                                 SrvX_IpoFixCurveI_U8_U8

#define Ifx_IntIpoFixMap_s16s16_s16                             SrvX_IpoFixMap_S16S16_S16
#define Ifx_IntIpoFixMap_s8s8_s8                                SrvX_IpoFixMap_S8S8_S8
#define Ifx_IntIpoFixMap_u16u16_u16                             SrvX_IpoFixMap_U16U16_U16
#define Ifx_IntIpoFixMap_u8u8_u8                                SrvX_IpoFixMap_U8U8_U8

#define Ifx_IntIpoFixIMap_s16s16_s16                            SrvX_IpoFixMapI_S16S16_S16
#define Ifx_IntIpoFixIMap_s8s8_s8                               SrvX_IpoFixMapI_S8S8_S8
#define Ifx_IntIpoFixIMap_u16u16_u16                            SrvX_IpoFixMapI_U16U16_U16
#define Ifx_IntIpoFixIMap_u8u8_u8                               SrvX_IpoFixMapI_U8U8_U8

#define Ifx_IntIpoMap_s16s16_s16                                SrvX_IpoMap_S16S16_S16
#define Ifx_IntIpoMap_s16s16_s8                                 SrvX_IpoMap_S16S16_S8
#define Ifx_IntIpoMap_s16s16_u16                                SrvX_IpoMap_S16S16_U16
#define Ifx_IntIpoMap_s16s16_u8                                 SrvX_IpoMap_S16S16_U8
#define Ifx_IntIpoMap_s16s8_s16                                 SrvX_IpoMap_S16S8_S16
#define Ifx_IntIpoMap_s16s8_s8                                  SrvX_IpoMap_S16S8_S8
#define Ifx_IntIpoMap_s16s8_u16                                 SrvX_IpoMap_S16S8_U16
#define Ifx_IntIpoMap_s16s8_u8                                  SrvX_IpoMap_S16S8_U8
#define Ifx_IntIpoMap_s16u8_s16                                 SrvX_IpoMap_S16U8_S16
#define Ifx_IntIpoMap_s16u8_s8                                  SrvX_IpoMap_S16U8_S8
#define Ifx_IntIpoMap_s16u8_u16                                 SrvX_IpoMap_S16U8_U16
#define Ifx_IntIpoMap_s16u8_u8                                  SrvX_IpoMap_S16U8_U8
#define Ifx_IntIpoMap_s8s8_s16                                  SrvX_IpoMap_S8S8_S16
#define Ifx_IntIpoMap_s8s8_s8                                   SrvX_IpoMap_S8S8_S8
#define Ifx_IntIpoMap_s8s8_u16                                  SrvX_IpoMap_S8S8_U16
#define Ifx_IntIpoMap_s8s8_u8                                   SrvX_IpoMap_S8S8_U8
#define Ifx_IntIpoMap_u16s16_s16                                SrvX_IpoMap_U16S16_S16
#define Ifx_IntIpoMap_u16s16_s8                                 SrvX_IpoMap_U16S16_S8
#define Ifx_IntIpoMap_u16s16_u16                                SrvX_IpoMap_U16S16_U16
#define Ifx_IntIpoMap_u16s16_u8                                 SrvX_IpoMap_U16S16_U8
#define Ifx_IntIpoMap_u16s8_s16                                 SrvX_IpoMap_U16S8_S16
#define Ifx_IntIpoMap_u16s8_s8                                  SrvX_IpoMap_U16S8_S8
#define Ifx_IntIpoMap_u16s8_u16                                 SrvX_IpoMap_U16S8_U16
#define Ifx_IntIpoMap_u16s8_u8                                  SrvX_IpoMap_U16S8_U8
#define Ifx_IntIpoMap_u16u16_s16                                SrvX_IpoMap_U16U16_S16
#define Ifx_IntIpoMap_u16u16_s8                                 SrvX_IpoMap_U16U16_S8
#define Ifx_IntIpoMap_u16u16_u16                                SrvX_IpoMap_U16U16_U16
#define Ifx_IntIpoMap_u16u16_u8                                 SrvX_IpoMap_U16U16_U8
#define Ifx_IntIpoMap_u16u8_s16                                 SrvX_IpoMap_U16U8_S16
#define Ifx_IntIpoMap_u16u8_s8                                  SrvX_IpoMap_U16U8_S8
#define Ifx_IntIpoMap_u16u8_u16                                 SrvX_IpoMap_U16U8_U16
#define Ifx_IntIpoMap_u16u8_u8                                  SrvX_IpoMap_U16U8_U8
#define Ifx_IntIpoMap_u8s8_s16                                  SrvX_IpoMap_U8S8_S16
#define Ifx_IntIpoMap_u8s8_s8                                   SrvX_IpoMap_U8S8_S8
#define Ifx_IntIpoMap_u8s8_u16                                  SrvX_IpoMap_U8S8_U16
#define Ifx_IntIpoMap_u8s8_u8                                   SrvX_IpoMap_U8S8_U8
#define Ifx_IntIpoMap_u8u8_s16                                  SrvX_IpoMap_U8U8_S16
#define Ifx_IntIpoMap_u8u8_s8                                   SrvX_IpoMap_U8U8_S8
#define Ifx_IntIpoMap_u8u8_u16                                  SrvX_IpoMap_U8U8_U16
#define Ifx_IntIpoMap_u8u8_u8                                   SrvX_IpoMap_U8U8_U8
#define Ifx_IntIpoMap_s16                                       SrvX_IpoMapGroup_S16
#define Ifx_IntIpoMap_s8                                        SrvX_IpoMapGroup_S8
#define Ifx_IntIpoMap_u16                                       SrvX_IpoMapGroup_U16
#define Ifx_IntIpoMap_u8                                        SrvX_IpoMapGroup_U8

#define Ifx_IntLkUpCur_s16_s16                                  SrvX_LkUpCurve_S16_S16
#define Ifx_IntLkUpCur_s16_s8                                   SrvX_LkUpCurve_S16_S8
#define Ifx_IntLkUpCur_s16_u16                                  SrvX_LkUpCurve_S16_U16
#define Ifx_IntLkUpCur_s16_u8                                   SrvX_LkUpCurve_S16_U8
#define Ifx_IntLkUpCur_s8_s16                                   SrvX_LkUpCurve_S8_S16
#define Ifx_IntLkUpCur_s8_s8                                    SrvX_LkUpCurve_S8_S8
#define Ifx_IntLkUpCur_s8_u16                                   SrvX_LkUpCurve_S8_U16
#define Ifx_IntLkUpCur_s8_u8                                    SrvX_LkUpCurve_S8_U8
#define Ifx_IntLkUpCur_u16_s16                                  SrvX_LkUpCurve_U16_S16
#define Ifx_IntLkUpCur_u16_s8                                   SrvX_LkUpCurve_U16_S8
#define Ifx_IntLkUpCur_u16_u16                                  SrvX_LkUpCurve_U16_U16
#define Ifx_IntLkUpCur_u16_u8                                   SrvX_LkUpCurve_U16_U8
#define Ifx_IntLkUpCur_u8_s16                                   SrvX_LkUpCurve_U8_S16
#define Ifx_IntLkUpCur_u8_s8                                    SrvX_LkUpCurve_U8_S8
#define Ifx_IntLkUpCur_u8_u16                                   SrvX_LkUpCurve_U8_U16
#define Ifx_IntLkUpCur_u8_u8                                    SrvX_LkUpCurve_U8_U8

#define Ifx_LkUpCur_s16                                         SrvX_LkUpCurveGroup_S16
#define Ifx_LkUpCur_s8                                          SrvX_LkUpCurveGroup_S8
#define Ifx_LkUpCur_u16                                         SrvX_LkUpCurveGroup_U16
#define Ifx_LkUpCur_u8                                          SrvX_LkUpCurveGroup_U8

#define Ifx_IntLkUpFixCur_s16_s16                               SrvX_LkUpFixCurve_S16_S16
#define Ifx_IntLkUpFixCur_s8_s8                                 SrvX_LkUpFixCurve_S8_S8
#define Ifx_IntLkUpFixCur_u16_u16                               SrvX_LkUpFixCurve_U16_U16
#define Ifx_IntLkUpFixCur_u8_u8                                 SrvX_LkUpFixCurve_U8_U8

#define Ifx_IntLkUpFixICur_s16_s16                              SrvX_LkUpFixCurveI_S16_S16
#define Ifx_IntLkUpFixICur_s8_s8                                SrvX_LkUpFixCurveI_S8_S8
#define Ifx_IntLkUpFixICur_u16_u16                              SrvX_LkUpFixCurveI_U16_U16
#define Ifx_IntLkUpFixICur_u8_u8                                SrvX_LkUpFixCurveI_U8_U8

#define Ifx_IntLkUpFixMap_s16s16_s16                            SrvX_LkUpFixMap_S16S16_S16
#define Ifx_IntLkUpFixMap_s8s8_s8                               SrvX_LkUpFixMap_S8S8_S8
#define Ifx_IntLkUpFixMap_u16u16_u16                            SrvX_LkUpFixMap_U16U16_U16
#define Ifx_IntLkUpFixMap_u8u8_u8                               SrvX_LkUpFixMap_U8U8_U8

#define Ifx_IntLkUpFixIMap_s16s16_s16                           SrvX_LkUpFixMapI_S16S16_S16
#define Ifx_IntLkUpFixIMap_s8s8_s8                              SrvX_LkUpFixMapI_S8S8_S8
#define Ifx_IntLkUpFixIMap_u16u16_u16                           SrvX_LkUpFixMapI_U16U16_U16
#define Ifx_IntLkUpFixIMap_u8u8_u8                              SrvX_LkUpFixMapI_U8U8_U8

#define Ifx_IntLkUpMap_s16s16_s16                               SrvX_LkUpMap_S16S16_S16
#define Ifx_IntLkUpMap_s8s8_s8                                  SrvX_LkUpMap_S8S8_S8
#define Ifx_IntLkUpMap_u16u16_u16                               SrvX_LkUpMap_U16U16_U16
#define Ifx_IntLkUpMap_u8u8_u8                                  SrvX_LkUpMap_U8U8_U8

#define Ifx_IntLkUpMap_s16                                      SrvX_LkUpMapGroup_S16
#define Ifx_IntLkUpMap_s8                                       SrvX_LkUpMapGroup_S8
#define Ifx_IntLkUpMap_u16                                      SrvX_LkUpMapGroup_U16
#define Ifx_IntLkUpMap_u8                                       SrvX_LkUpMapGroup_U8


__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_s8(sint8 Xin, sint8 N, const sint8* X_array);
__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_s8(sint8 Xin, sint8 N, const sint8* X_array)
{
    Ifx_DPResultU16_Type SRes_st;
    SrvX_SearchDistr_S8(&SRes_st, Xin, N, X_array);
    return SRes_st;
}

__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_u8(uint8 Xin, uint8 N, const uint8* X_array);
__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_u8(uint8 Xin, uint8 N, const uint8* X_array)
{
    Ifx_DPResultU16_Type SRes_st;
    SrvX_SearchDistr_U8(&SRes_st, Xin, N, X_array);
    return SRes_st;
}

__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_s16(sint16 Xin, sint16 N, const sint16* X_array);
__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_s16(sint16 Xin, sint16 N, const sint16* X_array)
{
    Ifx_DPResultU16_Type SRes_st;
    SrvX_SearchDistr_S16(&SRes_st, Xin, N, X_array);
    return SRes_st;
}

__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_u16(uint16 Xin, uint16 N, const uint16* X_array);
__inline__ Ifx_DPResultU16_Type Ifx_DPSearch_u16(uint16 Xin, uint16 N, const uint16* X_array)
{
    Ifx_DPResultU16_Type SRes_st;
    SrvX_SearchDistr_U16(&SRes_st, Xin, N, X_array);
    return SRes_st;
}


/* _AR_IFX_H */
#endif

