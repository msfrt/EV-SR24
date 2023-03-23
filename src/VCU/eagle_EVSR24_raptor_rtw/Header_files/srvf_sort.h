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
 * $Filename__:srvf_sort.h$ 
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
 * $Name______:srvf_sort$ 
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

#ifndef _SRVF_SORT_H
#define _SRVF_SORT_H


/*
 ***********************************************************************************************************************
 *
 *  Remark: Solely Extern declarations, the excecutive code is given in the c-files
 *
 *  SrvF_Median_R32   =>   srvb_median_r32.c
 *  SrvF_SortAscR32   =>   srvb_sortascr32.c
 *  SrvF_SortDescR32  =>   srvb_sortdescr32.c
 *
 ***********************************************************************************************************************
 */


/* SRVF_MEDIAN_R32_LOCATION *******************************************************************************************/
#if   (SRVF_MEDIAN_R32_LOCATION == SRVF_LOCATION_CACHED)

    real32 SrvF_Median_R32(real32 *const Array_cpr32, uint8 N_u8);

#elif (SRVF_MEDIAN_R32_LOCATION == SRVF_LOCATION_INLINE)

    #error >>>>'SrvF_Median_R32 can\'t be inlined: configuration not supported'

#elif (SRVF_MEDIAN_R32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(real32 SrvF_Median_R32(real32* const Array_cpr32, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvF_Median_R32 not supported'

/* SRVF_MEDIAN_R32_LOCATION */
#endif

/* SRVF_SORTASCR32_LOCATION ******************************************************************************************/
#if   (SRVF_SORTASCR32_LOCATION == SRVF_LOCATION_CACHED)

    void SrvF_SortAscR32(real32 *const Array_cpr32, uint8 N_u8);

#elif (SRVF_SORTASCR32_LOCATION == SRVF_LOCATION_INLINE)

    #error >>>> 'SrvF_SortAscR32 can\'t be inlined: configuration not supported'

#elif (SRVF_SORTASCR32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(void SrvF_SortAscR32(real32* const Array_cpr32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvF_SortAscR32 not supported'

/* SRVF_SORTASCR32_LOCATION */
#endif


/* SRVF_SORTDESCR32_LOCATION ******************************************************************************************/
#if   (SRVF_SORTDESCR32_LOCATION == SRVF_LOCATION_CACHED)

    void SrvF_SortDescR32(real32* const Array_cpr32, uint8 N_u8);

#elif (SRVF_SORTDESCR32_LOCATION == SRVF_LOCATION_INLINE)

    #error >>>> 'SrvF_SortDescR32 can\'t be inlined: configuration not supported'

#elif (SRVF_SORTDESCR32_LOCATION == SRVF_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(void SrvF_SortDescR32(real32* const Array_cpr32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvF_SortDescR32 not supported'

/* SRVF_SORTDESCR32_LOCATION */
#endif


/* _SRVF_SORT_H */
#endif
