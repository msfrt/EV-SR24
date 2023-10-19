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
 * $Filename__:srvf_stat.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_stat$ 
 * $Variant___:1.22.0$ 
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
 * 1.22.0; 1     21.08.2014 PIR5COB
 *   Updated review comments
 * 
 * 1.22.0; 0     11.08.2014 PIR5COB
 *   Functionality for calculation of float array average added.
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVF.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_STAT_H
#define _SRVF_STAT_H


/* SRVF_ABS_R32_LOCATION **********************************************************************************************/
#if (SRVF_ABS_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_Abs_R32(real32 X_r32);

#elif (SRVF_ABS_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_Abs_R32 SrvF_Abs_R32_inline

#elif (SRVF_ABS_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_Abs_R32(real32 X_r32));

#else
    #error >>>> 'Configuration for SrvF_Abs_R32 is not supported'

/* SRVF_ABS_R32_LOCATION */
#endif

/* SRVF_MAX_R32_LOCATION **********************************************************************************************/
#if (SRVF_MAX_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_Max_R32(real32 X_r32, real32 Y_r32);

#elif (SRVF_MAX_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_Max_R32 SrvF_Max_R32_inline

#elif (SRVF_MAX_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_Max_R32(real32 X_r32, real32 Y_r32));

#else
    #error >>>> 'Configuration for SrvF_Max_R32 is not supported'

/* SRVF_MAX_R32_LOCATION */
#endif

/* SRVF_MIN_R32_LOCATION **********************************************************************************************/
#if (SRVF_MIN_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_Min_R32(real32 X_r32, real32 Y_r32);

#elif (SRVF_MIN_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_Min_R32 SrvF_Min_R32_inline

#elif (SRVF_MIN_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_Min_R32(real32 X_r32, real32 Y_r32));

#else
    #error >>>> 'Configuration for SrvF_Min_R32 is not supported'

/* SRVF_MIN_R32_LOCATION */
#endif

/* SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION **********************************************************************************************/
#if (SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION == SRVF_LOCATION_CACHED)

    extern real32 SrvF_ArrayAverage_R32U32_R32(real32* Array_pr32, uint32 Count_u32);

#elif (SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION == SRVF_LOCATION_INLINE)

    #define SrvF_ArrayAverage_R32U32_R32 SrvF_ArrayAverage_R32U32_R32_inline

#elif (SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern real32 SrvF_ArrayAverage_R32U32_R32(real32* Array_pr32, uint32 Count_u32));

#else
    #error >>>> 'Configuration for SrvF_ArrayAverage_R32U32_R32 is not supported'

/* SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION */
#endif


/* _SRVF_STAT_H */
#endif
