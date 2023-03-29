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
 * $Filename__:srvb_stat.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_stat$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * 1.10.0; 0     17.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_STAT_H
#define _SRVB_STAT_H

/*
 ***********************************************************************************************************************
 * Typedefinitions
 ***********************************************************************************************************************
 */

/* specialised struct, used in SrvB_AveragSliding_S16 */
typedef struct
{
  sint32  sum_s32;
  uint8   N_u8;
  sint16 *beg_ps16;
  sint16 *end_ps16;
  sint16 *act_ps16;
} SrvB_AvrgsldngS16_t;


/* specialised struct, used in SrvB_AveragSliding_S32*/
typedef struct
{
  sint64  sum_s64;
  uint8   N_u8;
  sint32 *beg_ps32;
  sint32 *end_ps32;
  sint32 *act_ps32;
} SrvB_AvrgsldngS32_t;


/*
 ***********************************************************************************************************************
 * Intern / Extern declarations
 ***********************************************************************************************************************
 */

/* SRVB_AVERAGE_S32S32_S32_LOCATION **********************************************************************************/
#if (SRVB_AVERAGE_S32S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Average_S32S32_S32(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_AVERAGE_S32S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Average_S32S32_S32 SrvB_Average_S32S32_S32_inline

#elif (SRVB_AVERAGE_S32S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Average_S32S32_S32(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Average_S32S32_S32 is not supported'

/* SRVB_AVERAGE_S32S32_S32_LOCATION */
#endif


/* SRVB_AVERAGEARRAY_S16_LOCATION ************************************************************************************/
#if (SRVB_AVERAGEARRAY_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_AverageArray_S16(const sint16 *Array_pcs16, uint8 N_u8);

#elif (SRVB_AVERAGEARRAY_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_AverageArray_S16 SrvB_AverageArray_S16_inline

#elif (SRVB_AVERAGEARRAY_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_AverageArray_S16(const sint16 *Array_pcs16, uint8 N_u8));

#else
    #error >>>> 'Configuration for SrvB_AverageArray_S16 is not supported'

/* SRVB_AVERAGEARRAY_S16_LOCATION */
#endif


/* SRVB_AVERAGEARRAY_S32_LOCATION ************************************************************************************/
#if (SRVB_AVERAGEARRAY_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_AverageArray_S32(const sint32 *Array_pcs32, uint8 N_u8);

#elif (SRVB_AVERAGEARRAY_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_AverageArray_S32 SrvB_AverageArray_S32_inline

#elif (SRVB_AVERAGEARRAY_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_AverageArray_S32(const sint32 *Array_pcs32, uint8 N_u8));

#else
    #error >>>> 'Configuration for SrvB_AverageArray_S32 is not supported'

/* SRVB_AVERAGEARRAY_S32_LOCATION */
#endif


/* SRVB_AVERAGESLIDING_S16_LOCATION **********************************************************************************/
#if (SRVB_AVERAGESLIDING_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_AverageSliding_S16(SrvB_AvrgsldngS16_t *const Struct_cpst, sint16 Inp_s16);

#elif (SRVB_AVERAGESLIDING_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_AverageSliding_S16 SrvB_AverageSliding_S16_inline

#elif (SRVB_AVERAGESLIDING_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_AverageSliding_S16(SrvB_AvrgsldngS16_t *const Struct_cpst, sint16 Inp_s16));

#else
    #error >>>> 'Configuration for SrvB_AverageSliding_S16 is not supported'

/* SRVB_AVERAGESLIDING_S16_LOCATION */
#endif


/* SRVB_AVERAGESLIDING_S32_LOCATION **********************************************************************************/
#if (SRVB_AVERAGESLIDING_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_AverageSliding_S32(SrvB_AvrgsldngS32_t *const Struct_cpst, sint32 Inp_s32);

#elif (SRVB_AVERAGESLIDING_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_AverageSliding_S32 SrvB_AverageSliding_S32_inline

#elif (SRVB_AVERAGESLIDING_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_AverageSliding_S32(SrvB_AvrgsldngS32_t *const Struct_cpst, sint32 Inp_s32));

#else
    #error >>>> 'Configuration for SrvB_AverageSliding_S32 is not supported'

/* SRVB_AVERAGESLIDING_S32_LOCATION */
#endif

/* SRVB_MAX_U8_LOCATION ***********************************************************************************************/
#if (SRVB_MAX_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Max_U8(uint8 X_u8, uint8 Y_u8);

#elif (SRVB_MAX_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_U8 SrvB_Max_U8_inline

#elif (SRVB_MAX_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Max_U8(uint8 X_u8, uint8 Y_u8));

#else
    #error >>>> 'Configuration for SrvB_Max_U8 is not supported'

/* SRVB_MAX_U8_LOCATION */
#endif


/* SRVB_MAX_S8_LOCATION ***********************************************************************************************/
#if (SRVB_MAX_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Max_S8(sint8 X_s8, sint8 Y_s8);

#elif (SRVB_MAX_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_S8 SrvB_Max_S8_inline

#elif (SRVB_MAX_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Max_S8(sint8 X_s8, sint8 Y_s8));

#else
    #error >>>> 'Configuration for SrvB_Max_S8 is not supported'

/* SRVB_MAX_S8_LOCATION */
#endif


/* SRVB_MAX_U16_LOCATION **********************************************************************************************/
#if (SRVB_MAX_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Max_U16(uint16 X_u16, uint16 Y_u16);

#elif (SRVB_MAX_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_U16 SrvB_Max_U16_inline

#elif (SRVB_MAX_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Max_U16(uint16 X_u16, uint16 Y_u16));

#else
    #error >>>> 'Configuration for SrvB_Max_U16 is not supported'

/* SRVB_MAX_U16_LOCATION */
#endif


/* SRVB_MAX_S16_LOCATION **********************************************************************************************/
#if (SRVB_MAX_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Max_S16(sint16 X_s16, sint16 Y_s16);

#elif (SRVB_MAX_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_S16 SrvB_Max_S16_inline

#elif (SRVB_MAX_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Max_S16(sint16 X_s16, sint16 Y_s16));

#else
    #error >>>> 'Configuration for SrvB_Max_S16 is not supported'

/* SRVB_MAX_S16_LOCATION */
#endif


/* SRVB_MAX_U32_LOCATION **********************************************************************************************/
#if (SRVB_MAX_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Max_U32(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_MAX_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_U32 SrvB_Max_U32_inline

#elif (SRVB_MAX_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Max_U32(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Max_U32 is not supported'

/* SRVB_MAX_U32_LOCATION */
#endif


/* SRVB_MAX_S32_LOCATION **********************************************************************************************/
#if (SRVB_MAX_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Max_S32(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_MAX_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Max_S32 SrvB_Max_S32_inline

#elif (SRVB_MAX_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Max_S32(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Max_S32 is not supported'

/* SRVB_MAX_S32_LOCATION */
#endif


/* SRVB_MIN_U8_LOCATION ***********************************************************************************************/
#if (SRVB_MIN_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Min_U8(uint8 X_u8, uint8 Y_u8);

#elif (SRVB_MIN_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_U8 SrvB_Min_U8_inline

#elif (SRVB_MIN_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Min_U8(uint8 X_u8, uint8 Y_u8));

#else
    #error >>>> 'Configuration for SrvB_Min_U8 is not supported'

/* SRVB_MIN_U8_LOCATION */
#endif


/* SRVB_MIN_S8_LOCATION ***********************************************************************************************/
#if (SRVB_MIN_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Min_S8(sint8 X_s8, sint8 Y_s8);

#elif (SRVB_MIN_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_S8 SrvB_Min_S8_inline

#elif (SRVB_MIN_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Min_S8(sint8 X_s8, sint8 Y_s8));

#else
    #error >>>> 'Configuration for SrvB_Min_S8 is not supported'

/* SRVB_MIN_S8_LOCATION */
#endif


/* SRVB_MIN_U16_LOCATION **********************************************************************************************/
#if (SRVB_MIN_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Min_U16(uint16 X_u16, uint16 Y_u16);

#elif (SRVB_MIN_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_U16 SrvB_Min_U16_inline

#elif (SRVB_MIN_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Min_U16(uint16 X_u16, uint16 Y_u16));

#else
    #error >>>> 'Configuration for SrvB_Min_U16 is not supported'

/* SRVB_MIN_U16_LOCATION */
#endif


/* SRVB_MIN_S16_LOCATION **********************************************************************************************/
#if (SRVB_MIN_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Min_S16(sint16 X_s16, sint16 Y_s16);

#elif (SRVB_MIN_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_S16 SrvB_Min_S16_inline

#elif (SRVB_MIN_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Min_S16(sint16 X_s16, sint16 Y_s16));

#else
    #error >>>> 'Configuration for SrvB_Min_S16 is not supported'

/* SRVB_MIN_S16_LOCATION */
#endif


/* SRVB_MIN_U32_LOCATION **********************************************************************************************/
#if (SRVB_MIN_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Min_U32(uint32 X_u32, uint32 Y_u32);

#elif (SRVB_MIN_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_U32 SrvB_Min_U32_inline

#elif (SRVB_MIN_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Min_U32(uint32 X_u32, uint32 Y_u32));

#else
    #error >>>> 'Configuration for SrvB_Min_U32 is not supported'

/* SRVB_MIN_U32_LOCATION */
#endif


/* SRVB_MIN_S32_LOCATION **********************************************************************************************/
#if (SRVB_MIN_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Min_S32(sint32 X_s32, sint32 Y_s32);

#elif (SRVB_MIN_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Min_S32 SrvB_Min_S32_inline

#elif (SRVB_MIN_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Min_S32(sint32 X_s32, sint32 Y_s32));

#else
    #error >>>> 'Configuration for SrvB_Min_S32 is not supported'

/* SRVB_MIN_S32_LOCATION */
#endif


/* SRVB_ABS_S32_U8_LOCATION *******************************************************************************************/
#if (SRVB_ABS_S32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Abs_S32_U8(sint32 X_s32);

#elif (SRVB_ABS_S32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_U8 SrvB_Abs_S32_U8_inline

#elif (SRVB_ABS_S32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Abs_S32_U8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_U8 is not supported'

/* SRVB_ABS_S32_U8_LOCATION */
#endif


/* SRVB_ABS_S32_U16_LOCATION ******************************************************************************************/
#if (SRVB_ABS_S32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Abs_S32_U16(sint32 X_s32);

#elif (SRVB_ABS_S32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_U16 SrvB_Abs_S32_U16_inline

#elif (SRVB_ABS_S32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Abs_S32_U16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_U16 is not supported'

/* SRVB_ABS_S32_U16_LOCATION */
#endif


/* SRVB_ABS_S32_U32_LOCATION ******************************************************************************************/
#if (SRVB_ABS_S32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Abs_S32_U32(sint32 X_s32);

#elif (SRVB_ABS_S32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_U32 SrvB_Abs_S32_U32_inline

#elif (SRVB_ABS_S32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Abs_S32_U32(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_U32 is not supported'

/* SRVB_ABS_S32_U32_LOCATION */
#endif


/* SRVB_ABS_S32_S8_LOCATION *******************************************************************************************/
#if (SRVB_ABS_S32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Abs_S32_S8(sint32 X_s32);

#elif (SRVB_ABS_S32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_S8 SrvB_Abs_S32_S8_inline

#elif (SRVB_ABS_S32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Abs_S32_S8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_S8 is not supported'

/* SRVB_ABS_S32_S8_LOCATION */
#endif


/* SRVB_ABS_S32_S16_LOCATION ******************************************************************************************/
#if (SRVB_ABS_S32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Abs_S32_S16(sint32 X_s32);

#elif (SRVB_ABS_S32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_S16 SrvB_Abs_S32_S16_inline

#elif (SRVB_ABS_S32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Abs_S32_S16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_S16 is not supported'

/* SRVB_ABS_S32_S16_LOCATION */
#endif


/* SRVB_ABS_S32_S32_LOCATION ******************************************************************************************/
#if (SRVB_ABS_S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Abs_S32_S32(sint32 X_s32);

#elif (SRVB_ABS_S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Abs_S32_S32 SrvB_Abs_S32_S32_inline

#elif (SRVB_ABS_S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Abs_S32_S32(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Abs_S32_S32 is not supported'

/* SRVB_ABS_S32_S32_LOCATION */
#endif



/*** SRVB_NEG_S32_S32_LOCATION ***/
#if (SRVB_NEG_S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Neg_S32_S32(sint32 X_s32);

#elif (SRVB_NEG_S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_S32 SrvB_Neg_S32_S32_inline

#elif (SRVB_NEG_S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Neg_S32_S32(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_S32 is not supported'

/* SRVB_NEG_S32_S32_LOCATION */
#endif

/*** SRVB_NEG_S32_S16_LOCATION ***/
#if (SRVB_NEG_S32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Neg_S32_S16(sint32 X_s32);

#elif (SRVB_NEG_S32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_S16 SrvB_Neg_S32_S16_inline

#elif (SRVB_NEG_S32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Neg_S32_S16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_S16 is not supported'

/* SRVB_NEG_S32_S16_LOCATION */
#endif

/*** SRVB_NEG_S32_S8_LOCATION ***/
#if (SRVB_NEG_S32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Neg_S32_S8(sint32 X_s32);

#elif (SRVB_NEG_S32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_S8 SrvB_Neg_S32_S8_inline

#elif (SRVB_NEG_S32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Neg_S32_S8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_S8 is not supported'

/* SRVB_NEG_S32_S8_LOCATION */
#endif

/*** SRVB_NEG_S32_U16_LOCATION ***/
#if (SRVB_NEG_S32_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Neg_S32_U16(sint32 X_s32);

#elif (SRVB_NEG_S32_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_U16 SrvB_Neg_S32_U16_inline

#elif (SRVB_NEG_S32_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Neg_S32_U16(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_U16 is not supported'

/* SRVB_NEG_S32_U16_LOCATION */
#endif

/*** SRVB_NEG_S32_U32_LOCATION ***/
#if (SRVB_NEG_S32_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Neg_S32_U32(sint32 X_s32);

#elif (SRVB_NEG_S32_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_U32 SrvB_Neg_S32_U32_inline

#elif (SRVB_NEG_S32_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Neg_S32_U32(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_U32 is not supported'

/* SRVB_NEG_S32_U32_LOCATION */
#endif

/*** SRVB_NEG_S32_U8_LOCATION ***/
#if (SRVB_NEG_S32_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Neg_S32_U8(sint32 X_s32);

#elif (SRVB_NEG_S32_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_S32_U8 SrvB_Neg_S32_U8_inline

#elif (SRVB_NEG_S32_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Neg_S32_U8(sint32 X_s32));

#else
    #error >>>> 'Configuration for SrvB_Neg_S32_U8 is not supported'

/* SRVB_NEG_S32_U8_LOCATION */
#endif

/*** SRVB_NEG_U32_S32_LOCATION ***/
#if (SRVB_NEG_U32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_Neg_U32_S32(uint32 X_u32);

#elif (SRVB_NEG_U32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_U32_S32 SrvB_Neg_U32_S32_inline

#elif (SRVB_NEG_U32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_Neg_U32_S32(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_Neg_U32_S32 is not supported'

/* SRVB_NEG_U32_S32_LOCATION */
#endif


/*** SRVB_NEG_U32_S16_LOCATION ***/
#if (SRVB_NEG_U32_S16_LOCATION == SRVB_LOCATION_CACHED)

    extern sint16 SrvB_Neg_U32_S16(uint32 X_u32);

#elif (SRVB_NEG_U32_S16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_U32_S16 SrvB_Neg_U32_S16_inline

#elif (SRVB_NEG_U32_S16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvB_Neg_U32_S16(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_Neg_U32_S16 is not supported'

/* SRVB_NEG_U32_S16_LOCATION */
#endif


/*** SRVB_NEG_U32_S8_LOCATION ***/
#if (SRVB_NEG_U32_S8_LOCATION == SRVB_LOCATION_CACHED)

    extern sint8 SrvB_Neg_U32_S8(uint32 X_u32);

#elif (SRVB_NEG_U32_S8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Neg_U32_S8 SrvB_Neg_U32_S8_inline

#elif (SRVB_NEG_U32_S8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint8 SrvB_Neg_U32_S8(uint32 X_u32));

#else
    #error >>>> 'Configuration for SrvB_Neg_U32_S8 is not supported'

/* SRVB_NEG_U32_S8_LOCATION */
#endif


/* _SRVB_STAT_H */
#endif

