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
 * $Filename__:srvf_limit.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:25.04.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_limit$ 
 * $Variant___:1.18.0$ 
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
 * 1.17.0; 0     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings.
 *   
 *   2. Provision of inline options for new float functionalities.
 *   
 *   3. Removal of SATH specific switches
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_LIMIT_H
#define _SRVF_LIMIT_H


/* SRVF_RANGELIMITER_R32_LOCATION *************************************************************************************/
#if (SRVF_RANGELIMITER_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_RangeLimiter_R32(real32 X_r32, real32 Min_r32, real32 Max_r32);

#elif (SRVF_RANGELIMITER_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RangeLimiter_R32 SrvF_RangeLimiter_R32_inline

#elif (SRVF_RANGELIMITER_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_RangeLimiter_R32(real32 X_r32, real32 Min_r32, real32 Max_r32));

#else
    #error >>>> 'Configuration for SrvF_RangeLimiter_R32 is not supported'

/* SRVF_RANGELIMITER_R32_LOCATION */
#endif

/* SRVF_ISGREATER_R32R32_B_LOCATION *************************************************************************************/
#if (SRVF_ISGREATER_R32R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsGreater_R32R32_B(real32 X_r32,real32 Y_r32);

#elif (SRVF_ISGREATER_R32R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsGreater_R32R32_B SrvF_IsGreater_R32R32_B_inline

#elif (SRVF_ISGREATER_R32R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsGreater_R32R32_B(real32 X_r32,real32 Y_r32));

#else
    #error >>>> 'Configuration for SrvF_IsGreater_R32R32_B is not supported'

/* SRVF_ISGREATER_R32R32_B_LOCATION */
#endif

/* SRVF_ISLOWER_R32R32_B_LOCATION *************************************************************************************/
#if (SRVF_ISLOWER_R32R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsLower_R32R32_B(real32 X_r32,real32 Y_r32);

#elif (SRVF_ISLOWER_R32R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsLower_R32R32_B SrvF_IsLower_R32R32_B_inline

#elif (SRVF_ISLOWER_R32R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsLower_R32R32_B(real32 X_r32,real32 Y_r32));

#else
    #error >>>> 'Configuration for SrvF_IsLower_R32R32_B is not supported'

/* SRVF_ISLOWER_R32R32_B_LOCATION */
#endif

/* SRVF_ISNAN_B_LOCATION *************************************************************************************/
#if (SRVF_ISNAN_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsNAN_B(real32 X_r32);

#elif (SRVF_ISNAN_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsNAN_B SrvF_IsNAN_B_inline

#elif (SRVF_ISNAN_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsNAN_B(real32 X_r32));

#else
    #error >>>> 'Configuration for SrvF_IsNAN_B is not supported'

/* SRVF_ISNAN_B_LOCATION */
#endif

/* SRVF_VALIDATIONLIMITER_R32_LOCATION *************************************************************************************/
#if (SRVF_VALIDATIONLIMITER_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_ValidationLimiter_R32(real32 X_r32, real32 lower_limit_r32, real32 replace_value_r32, real32 upper_limit_r32);

#elif (SRVF_VALIDATIONLIMITER_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_ValidationLimiter_R32 SrvF_ValidationLimiter_R32_inline

#elif (SRVF_VALIDATIONLIMITER_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_ValidationLimiter_R32(real32 X_r32, real32 lower_limit_r32, real32 replace_value_r32, real32 upper_limit_r32));

#else
    #error >>>> 'Configuration for SrvF_ValidationLimiter_R32 is not supported'

/* SRVF_VALIDATIONLIMITER_R32_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_U32_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_U32_LOCATION == SRVF_LOCATION_CACHED)

    extern uint32 SrvF_RealToInteger_R32_U32(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_U32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_U32 SrvF_RealToInteger_R32_U32_inline

#elif (SRVF_REALTOINTEGER_R32_U32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvF_RealToInteger_R32_U32(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_U32 is not supported'

/* SRVF_REALTOINTEGER_R32_U32_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_U16_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_U16_LOCATION == SRVF_LOCATION_CACHED)

    extern uint16 SrvF_RealToInteger_R32_U16(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_U16_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_U16 SrvF_RealToInteger_R32_U16_inline

#elif (SRVF_REALTOINTEGER_R32_U16_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvF_RealToInteger_R32_U16(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_U16 is not supported'

/* SRVF_REALTOINTEGER_R32_U16_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_U8_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_U8_LOCATION == SRVF_LOCATION_CACHED)

    extern uint8 SrvF_RealToInteger_R32_U8(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_U8_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_U8 SrvF_RealToInteger_R32_U8_inline

#elif (SRVF_REALTOINTEGER_R32_U8_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvF_RealToInteger_R32_U8(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_U8 is not supported'

/* SRVF_REALTOINTEGER_R32_U8_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_S32_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_S32_LOCATION == SRVF_LOCATION_CACHED)

    extern sint32 SrvF_RealToInteger_R32_S32(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_S32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_S32 SrvF_RealToInteger_R32_S32_inline

#elif (SRVF_REALTOINTEGER_R32_S32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvF_RealToInteger_R32_S32(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_S32 is not supported'

/* SRVF_REALTOINTEGER_R32_S32_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_S16_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_S16_LOCATION == SRVF_LOCATION_CACHED)

    extern sint16 SrvF_RealToInteger_R32_S16(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_S16_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_S16 SrvF_RealToInteger_R32_S16_inline

#elif (SRVF_REALTOINTEGER_R32_S16_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvF_RealToInteger_R32_S16(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_S16 is not supported'

/* SRVF_REALTOINTEGER_R32_S16_LOCATION */
#endif

/* SRVF_REALTOINTEGER_R32_S8_LOCATION *************************************************************************************/
#if (SRVF_REALTOINTEGER_R32_S8_LOCATION == SRVF_LOCATION_CACHED)

    extern sint8 SrvF_RealToInteger_R32_S8(real32 Var_r32);

#elif (SRVF_REALTOINTEGER_R32_S8_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_RealToInteger_R32_S8 SrvF_RealToInteger_R32_S8_inline

#elif (SRVF_REALTOINTEGER_R32_S8_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvF_RealToInteger_R32_S8(real32 Var_r32));

#else
    #error >>>> 'Configuration for SrvF_RealToInteger_R32_S8 is not supported'

/* SRVF_REALTOINTEGER_R32_S8_LOCATION */
#endif

/* SRVF_ISFINITE_B_LOCATION *************************************************************************************/
#if (SRVF_ISFINITE_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsFinite_B(real32 X_r32);

#elif (SRVF_ISFINITE_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsFinite_B SrvF_IsFinite_B_inline

#elif (SRVF_ISFINITE_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsFinite_B(real32 X_r32));

#else
    #error >>>> 'Configuration for SrvF_IsFinite_B is not supported'
	
/* SRVF_ISFINITE_B_LOCATION */
#endif

/* SRVF_ISPLUSINFINITY_B_LOCATION *************************************************************************************/
#if (SRVF_ISPLUSINFINITY_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsPlusInfinity_B(real32 X_r32);

#elif (SRVF_ISPLUSINFINITY_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsPlusInfinity_B SrvF_IsPlusInfinity_B_inline

#elif (SRVF_ISPLUSINFINITY_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsPlusInfinity_B(real32 X_r32));

#else
    #error >>>> 'Configuration for SrvF_IsPlusInfinity_B is not supported'

/* SRVF_ISPLUSINFINITY_B_LOCATION */
#endif

/* SRVF_ISMINUSINFINITY_B_LOCATION *************************************************************************************/
#if (SRVF_ISMINUSINFINITY_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsMinusInfinity_B(real32 X_r32);

#elif (SRVF_ISMINUSINFINITY_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsMinusInfinity_B SrvF_IsMinusInfinity_B_inline

#elif (SRVF_ISMINUSINFINITY_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsMinusInfinity_B(real32 X_r32));

#else
    #error >>>> 'Configuration for SrvF_IsMinusInfinity_B is not supported'

/* SRVF_ISMINUSINFINITY_B_LOCATION */
#endif





/* SRVF_MEMCOPYR32_LOCATION *************************************************************************************/
#if (SRVF_MEMCOPYR32_LOCATION == SRVF_LOCATION_CACHED)

    extern void SrvF_MemCopyR32(real32* Dest_pr32, const real32* Src_pcr32, uint32 N_u32);

#elif (SRVF_MEMCOPYR32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_MemCopyR32 SrvF_MemCopyR32_inline

#elif (SRVF_MEMCOPYR32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvF_MemCopyR32(real32* Dest_pr32, const real32* Src_pcr32, uint32 N_u32));

#else
    #error >>>> 'Configuration for SrvF_MemCopyR32 is not supported'

/* SRVF_MEMCOPYR32_LOCATION */
#endif

/* SRVF_ISEQUAL_R32_R32_LOCATION *************************************************************************************/
#if (SRVF_ISEQUAL_R32_R32_B_LOCATION == SRVF_LOCATION_CACHED)

    extern bool SrvF_IsEqual_R32_R32_B(real32 X_r32, real32 Y_r32, real32 Prs_r32);

#elif (SRVF_ISEQUAL_R32_R32_B_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_IsEqual_R32_R32_B SrvF_IsEqual_R32_R32_B_inline

#elif (SRVF_ISEQUAL_R32_R32_B_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvF_IsEqual_R32_R32_B(real32 X_r32, real32 Y_r32, real32 Prs_r32));

#else
    #error >>>> 'Configuration for SrvF_IsEqual_R32_R32_B is not supported'

/* SRVF_ISEQUAL_R32_R32_LOCATION */
#endif

/* _SRVF_LIMIT_H */
#endif
