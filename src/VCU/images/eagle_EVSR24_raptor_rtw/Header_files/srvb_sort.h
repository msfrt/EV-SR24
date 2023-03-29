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
 * $Filename__:srvb_sort.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:03.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_sort$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_SORT_H
#define _SRVB_SORT_H


/*
 ***********************************************************************************************************************
 *
 *  Remark: Solely Extern declarations, the excecutive code is given in the c-files
 *
 *  SrvB_Median_S32   =>   srvb_median_s32.c
 *  SrvB_Median_U32   =>   srvb_median_u32.c
 *  SrvB_Median_S16   =>   srvb_median_s16.c
 *  SrvB_Median_U16   =>   srvb_median_u16.c
 *  SrvB_Median_S8    =>   srvb_median_s8.c
 *  SrvB_Median_U8    =>   srvb_median_u8.c
 *
 *  SrvB_SortAscS32   =>   srvb_sortascs32.c
 *  SrvB_SortAscU32   =>   srvb_sortascu32.c
 *  SrvB_SortAscS16   =>   srvb_sortascs16.c
 *  SrvB_SortAscU16   =>   srvb_sortascu16.c
 *  SrvB_SortAscS8    =>   srvb_sortascs8.c
 *  SrvB_SortAscU8    =>   srvb_sortascu8.c
 *
 *  SrvB_SortDescS32  =>   srvb_sortdescs32.c
 *  SrvB_SortDescU32  =>   srvb_sortdescs32.c
 *  SrvB_SortDescS16  =>   srvb_sortdescs16.c
 *  SrvB_SortDescU16  =>   srvb_sortdescs16.c
 *  SrvB_SortDescS8   =>   srvb_sortdescs8.c
 *  SrvB_SortDescU8   =>   srvb_sortdescu8.c
 *
 ***********************************************************************************************************************
 */


/* SRVB_MEDIAN_S32_LOCATION *******************************************************************************************/
#if   (SRVB_MEDIAN_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Median_S32(sint32 *const Array_cps32, uint8 N_u8);

#elif (SRVB_MEDIAN_S32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_S32 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Median_S32(sint32 *const Array_cps32, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_S32 not supported'

/* SRVB_MEDIAN_S32_LOCATION */
#endif


/* SRVB_MEDIAN_U32_LOCATION *******************************************************************************************/
#if   (SRVB_MEDIAN_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Median_U32(uint32 *const Array_cpu32, uint8 N_u8);

#elif (SRVB_MEDIAN_U32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_U32 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Median_U32(uint32 *const Array_cpu32, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_U32 not supported'

/* SRVB_MEDIAN_U32_LOCATION */
#endif


/* SRVB_MEDIAN_S16_LOCATION *******************************************************************************************/
#if   (SRVB_MEDIAN_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Median_S16(sint16 *const Array_cps16, uint8 N_u8);

#elif (SRVB_MEDIAN_S16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_S16 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Median_S16(sint16 *const Array_cps16, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_S16 not supported'

/* SRVB_MEDIAN_S16_LOCATION */
#endif


/* SRVB_MEDIAN_U16_LOCATION *******************************************************************************************/
#if   (SRVB_MEDIAN_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Median_U16(uint16 *const Array_cpu16, uint8 N_u8);

#elif (SRVB_MEDIAN_U16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_U16 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Median_U16(uint16 *const Array_cpu16, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_U16 not supported'

/* SRVB_MEDIAN_U16_LOCATION */
#endif


/* SRVB_MEDIAN_S8_LOCATION ********************************************************************************************/
#if   (SRVB_MEDIAN_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Median_S8(sint8 *const Array_cps8, uint8 N_u8);

#elif (SRVB_MEDIAN_S8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_S8 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Median_S8(sint8 *const Array_cps8, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_S8 not supported'

/* SRVB_MEDIAN_S8_LOCATION */
#endif


/* SRVB_MEDIAN_U8_LOCATION ********************************************************************************************/
#if   (SRVB_MEDIAN_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Median_U8(uint8 *const Array_cpu8, uint8 N_u8);

#elif (SRVB_MEDIAN_U8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'SrvB_Median_U8 can\'t be inlined: configuration not supported'

#elif (SRVB_MEDIAN_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Median_U8(uint8 *const Array_cpu8, uint8 N_u8));

#else

    #error >>>>'Configuration for SrvB_Median_U8 not supported'

/* SRVB_MEDIAN_U8_LOCATION */
#endif


/* SRVB_SORTASCS32_LOCATION ******************************************************************************************/
#if   (SRVB_SORTASCS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscS32(sint32 *const Array_cps32, uint8 N_u8);

#elif (SRVB_SORTASCS32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortAscS32 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscS32(sint32 *const Array_cps32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscS32 not supported'

/* SRVB_SORTASCS32_LOCATION */
#endif


/* SRVB_SORTASCU32_LOCATION ******************************************************************************************/
#if   (SRVB_SORTASCU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscU32(uint32 *const Array_cpu32, uint8 N_u8);

#elif (SRVB_SORTASCU32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortAscU32 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscU32(uint32 *const Array_cpu32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscU32 not supported'

/* SRVB_SORTASCU32_LOCATION */
#endif


/* SRVB_SORTASC16_LOCATION ********************************************************************************************/
#if   (SRVB_SORTASCS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscS16(sint16 *const Array_cps16, uint8 N_u8);

#elif (SRVB_SORTASCS16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SrvB_SortAscS16 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscS16(sint16 *const Array_cps16, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SrvB_SortAscS16 not supported'

/* SRVB_SORTASCS16_LOCATION */
#endif


/* SRVB_SORTASCU16_LOCATION *******************************************************************************************/
#if   (SRVB_SORTASCU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscU16(uint16 *const Array_cpu16, uint8 N_u8);

#elif (SRVB_SORTASCU16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortAscU16 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscU16(uint16 *const Array_cpu16, const uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscU16 not supported'

/* SRVB_SORTASCU16_LOCATION */
#endif


/* SRVB_SORTASCS8_LOCATION *******************************************************************************************/
#if   (SRVB_SORTASCS8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscS8(sint8 *const Array_cps8, uint8 N_u8);

#elif (SRVB_SORTASCS8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortAscS8 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCS8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscS8(sint8 *const Array_cps8, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscS8 not supported'

/* SRVB_SORTASCS8_LOCATION */
#endif


/* SRVB_SORTASCU8_LOCATION ********************************************************************************************/
#if   (SRVB_SORTASCU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortAscU8(uint8 *const Array_cpu8, const uint8 N_u8);

#elif (SRVB_SORTASCU8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortAscU8 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTASCU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortAscU8(uint8 *const Array_cpu8, const uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscU8 not supported'

/* SRVB_SORTASCU8_LOCATION */
#endif


/* SRVB_SORTDESCS32_LOCATION ******************************************************************************************/
#if   (SRVB_SORTDESCS32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescS32(sint32 *const Array_cps32, uint8 N_u8);

#elif (SRVB_SORTDESCS32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescS32 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCS32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescS32(sint32 *const Array_cps32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortDescS32 not supported'

/* SRVB_SORTDESCS32_LOCATION */
#endif


/* SRVB_SORTDESCU32_LOCATION ******************************************************************************************/
#if   (SRVB_SORTDESCU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescU32(uint32 *const Array_cpu32, uint8 N_u8);

#elif (SRVB_SORTDESCU32_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescU32 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescU32(uint32 *const Array_cpu32, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortDescU32 not supported'

/* SRVB_SORTDESCU32_LOCATION */
#endif


/* SRVB_SORTDESCS16_LOCATION ******************************************************************************************/
#if   (SRVB_SORTDESCS16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescS16(sint16 *const Array_cps16, const uint8 N_u8);

#elif (SRVB_SORTDESCS16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescS16 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCS16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescS16(sint16 *const Array_cps16, const uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortDescS16 not supported'

/* SRVB_SORTDESCS16_LOCATION */
#endif


/* SRVB_SORTDESCU16_LOCATION ******************************************************************************************/
#if   (SRVB_SORTDESCU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescU16(uint16 *const Array_cpu16, const uint8 N_u8);

#elif (SRVB_SORTDESCU16_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescU16 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescU16(uint16 *const Array_cpu16, const uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortDescU16 not supported'

/* SRVB_SORTDESCU16_LOCATION */
#endif


/* SRVB_SORTDESCS8_LOCATION *******************************************************************************************/
#if   (SRVB_SORTDESCS8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescS8(sint8 *const Array_cps8, uint8 N_u8);

#elif (SRVB_SORTDESCS8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescS8 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCS8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescS8(sint8 *const Array_cps8, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortDescS8 not supported'

/* SRVB_SORTDESCS8_LOCATION */
#endif


/* SRVB_SORTDESCU8_LOCATION *******************************************************************************************/
#if   (SRVB_SORTDESCU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SortDescU8(uint8 *const Array_cpu8, const uint8 N_u8);

#elif (SRVB_SORTDESCU8_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>> 'SrvB_SortDescU8 can\'t be inlined: configuration not supported'

#elif (SRVB_SORTDESCU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SortDescU8(uint8 *const Array_cpu8, uint8 N_u8));

#else

    #error >>>> 'Configuration for SrvB_SortAscU8 not supported'

 /* SRVB_SORTDESCU8_LOCATION */
#endif


/* _SRVB_SORT_H */
#endif
