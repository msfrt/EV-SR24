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
 * $Filename__:srvf_convert.h$
 *
 * $Author____:SYA2COB$
 *
 * $Function__:Type punning warning removal.$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SYA2COB$
 * $Date______:21.08.2014$
 * $Class_____:SWHDR$
 * $Name______:srvf_convert$
 * $Variant___:1.22.0$
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
 * 1.22.0; 0     21.08.2014 SYA2COB
 *   Addition of new API SrvF_Extract_FloatBitFields_R32
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef SRVF_CONVERT_H_
#define SRVF_CONVERT_H_

/* SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION **********************************************************************************************/
#if (SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_Extract_FloatBitFields_R32(real32 X_r32,uint32* sign_pu32,
                            uint32* exponent_pu32,uint32* mantissa_pu32);

#elif (SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_Extract_FloatBitFields_R32 SrvF_Extract_FloatBitFields_R32_inline

#elif (SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_Extract_FloatBitFields_R32(real32 X_r32,
                        uint32* sign_pu32,uint32* exponent_pu32,uint32* mantissa_pu32));

#else
    #error >>>> 'Configuration for SrvF_Extract_FloatBitFields_R32 is not supported'

/* SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION */
#endif

#endif /* SRVF_CONVERT_H_ */
