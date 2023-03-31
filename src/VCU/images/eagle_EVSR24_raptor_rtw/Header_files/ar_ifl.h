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
 * $Filename__:ar_ifl.h$ 
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
 * $Name______:ar_ifl$ 
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

#ifndef _AR_IFL_H
#define _AR_IFL_H


/*
 ***********************************************************************************************************************
 *
 * A U T O S A R
 *
 * Release:                 4.0
 * Revision:                001 Draft
 * Document Title:          Specification of Floating Point Interpolation Routines 
 * Document Id:             398
 * Document Version:        0.4.1
 * Library:                 IFL
 *
 ***********************************************************************************************************************
 */

/* Autosar needs: Std_Types.h */
#include "std_type.h"
typedef real32 float32;

/* Autosar needs: MemMap .h */
#include "srvf_ipo.h"

#define Ifl_DPResultF32_Type                                    SrvF_SearchResultR32_t

#define Ifl_IpoCur_f32                                          SrvF_IpoCurveGroup_R32
#define Ifl_IntIpoCur_f32_f32                                   SrvF_IpoCurve_R32_R32
#define Ifl_IpoMap_f32                                          SrvF_IpoMapGroup_R32
#define Ifl_IntIpoMap_f32f32_f32                                SrvF_IpoMap_R32R32_R32

__inline__ Ifl_DPResultF32_Type Ifl_DPSearch_f32(float32 Xin, uint32 N, const float32* X_array);
__inline__ Ifl_DPResultF32_Type Ifl_DPSearch_f32(float32 Xin, uint32 N, const float32* X_array)
{
    Ifl_DPResultF32_Type SRes_st;
    SrvF_SearchDistr_R32(&SRes_st, Xin, N, X_array);
    return SRes_st;
}


/* _AR_IFL_H */
#endif

