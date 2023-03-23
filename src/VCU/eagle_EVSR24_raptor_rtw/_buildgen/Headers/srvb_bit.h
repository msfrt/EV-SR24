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
 * $Filename__:srvb_bit.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_bit$ 
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
 * 1.10.0; 0     16.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_BIT_H
#define _SRVB_BIT_H


/*** SRVB_SETBITU32_LOCATION ***/
#if (SRVB_SETBITU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitU32(uint32* Base_pu32, uint32 Pos_u32);

#elif (SRVB_SETBITU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitU32 SrvB_SetBitU32_inline

#elif (SRVB_SETBITU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitU32(uint32* Base_pu32, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_SetBitU32 is not supported'

/* SRVB_SETBITU32_LOCATION */
#endif


/*** SRVB_SETBITU16_LOCATION ***/
#if (SRVB_SETBITU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitU16(uint16* Base_pu16, uint32 Pos_u32);

#elif (SRVB_SETBITU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitU16 SrvB_SetBitU16_inline

#elif (SRVB_SETBITU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitU16(uint16* Base_pu16, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_SetBitU16 is not supported'

/* SRVB_SETBITU16_LOCATION */
#endif


/*** SRVB_SETBITU8_LOCATION ***/
#if (SRVB_SETBITU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitU8(uint8* Base_pu8, uint32 Pos_u32);

#elif (SRVB_SETBITU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitU8 SrvB_SetBitU8_inline

#elif (SRVB_SETBITU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitU8(uint8* Base_pu8, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_SetBitU8 is not supported'

/* SRVB_SETBITU8_LOCATION */
#endif


/*** SRVB_CLRBITU32_LOCATION ***/
#if (SRVB_CLRBITU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitU32(uint32 *Base_pu32, uint32 Pos_u32);

#elif (SRVB_CLRBITU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitU32 SrvB_ClrBitU32_inline

#elif (SRVB_CLRBITU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitU32(uint32 *Base_pu32, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_ClrBitU32 is not supported'

/* SRVB_CLRBITU32_LOCATION */
#endif


/*** SRVB_CLRBITU16_LOCATION ***/
#if (SRVB_CLRBITU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitU16(uint16 *Base_pu16, uint32 Pos_u32);

#elif (SRVB_CLRBITU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitU16 SrvB_ClrBitU16_inline

#elif (SRVB_CLRBITU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitU16(uint16 *Base_pu16, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_ClrBitU16 is not supported'

/* SRVB_CLRBITU16_LOCATION */
#endif


/*** SRVB_CLRBITU8_LOCATION ***/
#if (SRVB_CLRBITU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitU8(uint8 *Base_pu8, uint32 Pos_u32);

#elif (SRVB_CLRBITU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitU8 SrvB_ClrBitU8_inline

#elif (SRVB_CLRBITU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitU8(uint8 *Base_pu8, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_ClrBitU8 is not supported'

/* SRVB_CLRBITU8_LOCATION */
#endif


/*** SRVB_GETBITU32_B_LOCATION ***/
#if (SRVB_GETBITU32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_GetBitU32_B(uint32 Base_u32, uint32 Pos_u32);

#elif (SRVB_GETBITU32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitU32_B SrvB_GetBitU32_B_inline

#elif (SRVB_GETBITU32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_GetBitU32_B(uint32 Base_u32, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitU32_B is not supported'

/* SRVB_GETBITU32_B_LOCATION */
#endif


/*** SRVB_GETBITU16_B_LOCATION ***/
#if (SRVB_GETBITU16_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_GetBitU16_B(uint16 Base_u16, uint32 Pos_u32);

#elif (SRVB_GETBITU16_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitU16_B SrvB_GetBitU16_B_inline

#elif (SRVB_GETBITU16_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_GetBitU16_B(uint16 Base_u16, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitU16_B is not supported'

/* SRVB_GETBITU16_B_LOCATION */
#endif


/*** SRVB_GETBITU8_B_LOCATION ***/
#if (SRVB_GETBITU8_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_GetBitU8_B(uint8 Base_u8, uint32 Pos_u32);

#elif (SRVB_GETBITU8_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitU8_B SrvB_GetBitU8_B_inline

#elif (SRVB_GETBITU8_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_GetBitU8_B(uint8 Base_u8, uint32 Pos_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitU8_B is not supported'

/* SRVB_GETBITU8_B_LOCATION */
#endif


/*** SRVB_PUTBITU32_LOCATION ***/
#if (SRVB_PUTBITU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitU32(uint32* Base_pu32, uint32 Pos_u32, uint32 Val_u32);

#elif (SRVB_PUTBITU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitU32 SrvB_PutBitU32_inline

#elif (SRVB_PUTBITU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitU32(uint32* Base_pu32, uint32 Pos_u32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitU32 is not supported'

/* SRVB_PUTBITU32_LOCATION */
#endif


/*** SRVB_PUTBITU16_LOCATION ***/
#if (SRVB_PUTBITU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitU16(uint16* Base_pu16, uint32 Pos_u32, uint32 Val_u32);

#elif (SRVB_PUTBITU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitU16 SrvB_PutBitU16_inline

#elif (SRVB_PUTBITU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitU16(uint16* Base_pu16, uint32 Pos_u32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitU16 is not supported'

/* SRVB_PUTBITU16_LOCATION */
#endif


/*** SRVB_PUTBITU8_LOCATION ***/
#if (SRVB_PUTBITU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitU8(uint8* Base_pu8, uint32 Pos_u32, uint32 Val_u32);

#elif (SRVB_PUTBITU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitU8 SrvB_PutBitU8_inline

#elif (SRVB_PUTBITU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitU8(uint8* Base_pu8, uint32 Pos_u32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitU8 is not supported'

/* SRVB_PUTBITU8_LOCATION */
#endif


/*** SRVB_SETBITMASKU32_LOCATION ***/
#if (SRVB_SETBITMASKU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32);

#elif (SRVB_SETBITMASKU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitMaskU32 SrvB_SetBitMaskU32_inline

#elif (SRVB_SETBITMASKU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32));

#else
    #error >>>> 'Configuration for SrvB_SetBitMaskU32 is not supported'

/* SRVB_SETBITMASKU32_LOCATION */
#endif


/*** SRVB_SETBITMASKU16_LOCATION ***/
#if (SRVB_SETBITMASKU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16);

#elif (SRVB_SETBITMASKU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitMaskU16 SrvB_SetBitMaskU16_inline

#elif (SRVB_SETBITMASKU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16));

#else
    #error >>>> 'Configuration for SrvB_SetBitMaskU16 is not supported'

/* SRVB_SETBITMASKU16_LOCATION */
#endif


/*** SRVB_SETBITMASKU8_LOCATION ***/
#if (SRVB_SETBITMASKU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_SetBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8);

#elif (SRVB_SETBITMASKU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SetBitMaskU8 SrvB_SetBitMaskU8_inline

#elif (SRVB_SETBITMASKU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_SetBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8));

#else
    #error >>>> 'Configuration for SrvB_SetBitMaskU8 is not supported'

/* SRVB_SETBITMASKU8_LOCATION */
#endif


/*** SRVB_CLRBITMASKU32_LOCATION ***/
#if (SRVB_CLRBITMASKU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32);

#elif (SRVB_CLRBITMASKU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitMaskU32 SrvB_ClrBitMaskU32_inline

#elif (SRVB_CLRBITMASKU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32));

#else
    #error >>>> 'Configuration for SrvB_ClrBitMaskU32 is not supported'

/* SRVB_CLRBITMASKU32_LOCATION */
#endif


/*** SRVB_CLRBITMASKU16_LOCATION ***/
#if (SRVB_CLRBITMASKU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16);

#elif (SRVB_CLRBITMASKU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitMaskU16 SrvB_ClrBitMaskU16_inline

#elif (SRVB_CLRBITMASKU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16));

#else
    #error >>>> 'Configuration for SrvB_ClrBitMaskU16 is not supported'

/* SRVB_CLRBITMASKU16_LOCATION */
#endif


/*** SRVB_CLRBITMASKU8_LOCATION ***/
#if (SRVB_CLRBITMASKU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_ClrBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8);

#elif (SRVB_CLRBITMASKU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ClrBitMaskU8 SrvB_ClrBitMaskU8_inline

#elif (SRVB_CLRBITMASKU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_ClrBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8));

#else
    #error >>>> 'Configuration for SrvB_ClrBitMaskU8 is not supported'

/* SRVB_CLRBITMASKU8_LOCATION */
#endif


/*** SRVB_PUTBITMASKU32_LOCATION ***/
#if (SRVB_PUTBITMASKU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32, uint32 Val_u32);

#elif (SRVB_PUTBITMASKU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitMaskU32 SrvB_PutBitMaskU32_inline

#elif (SRVB_PUTBITMASKU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitMaskU32(uint32 *Base_pu32, uint32 Mask_u32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitMaskU32 is not supported'

/* SRVB_PUTBITMASKU32_LOCATION */
#endif


/*** SRVB_PUTBITMASKU16_LOCATION ***/
#if (SRVB_PUTBITMASKU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16, uint32 Val_u32);

#elif (SRVB_PUTBITMASKU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitMaskU16 SrvB_PutBitMaskU16_inline

#elif (SRVB_PUTBITMASKU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitMaskU16(uint16 *Base_pu16, uint16 Mask_u16, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitMaskU16 is not supported'

/* SRVB_PUTBITMASKU16_LOCATION */
#endif


/*** SRVB_PUTBITMASKU8_LOCATION ***/
#if (SRVB_PUTBITMASKU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8, uint32 Val_u32);

#elif (SRVB_PUTBITMASKU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitMaskU8 SrvB_PutBitMaskU8_inline

#elif (SRVB_PUTBITMASKU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitMaskU8(uint8 *Base_pu8, uint8 Mask_u8, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitMaskU8 is not supported'

/* SRVB_PUTBITMASKU8_LOCATION */
#endif


/*** SRVB_TSTBITMASKU32_B_LOCATION ***/
#if (SRVB_TSTBITMASKU32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitMaskU32_B(uint32 Base_u32, uint32 Mask_u32);

#elif (SRVB_TSTBITMASKU32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitMaskU32_B SrvB_TstBitMaskU32_B_inline

#elif (SRVB_TSTBITMASKU32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitMaskU32_B(uint32 Base_u32, uint32 Mask_u32));

#else
    #error >>>> 'Configuration for SrvB_TstBitMaskU32_B is not supported'

/* SRVB_TSTBITMASKU32_B_LOCATION */
#endif


/*** SRVB_TSTBITMASKU16_B_LOCATION ***/
#if (SRVB_TSTBITMASKU16_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitMaskU16_B(uint16 Base_u16, uint16 Mask_u16);

#elif (SRVB_TSTBITMASKU16_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitMaskU16_B SrvB_TstBitMaskU16_B_inline

#elif (SRVB_TSTBITMASKU16_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitMaskU16_B(uint16 Base_u16, uint16 Mask_u16));

#else
    #error >>>> 'Configuration for SrvB_TstBitMaskU16_B is not supported'

/* SRVB_TSTBITMASKU16_B_LOCATION */
#endif


/*** SRVB_TSTBITMASKU8_B_LOCATION ***/
#if (SRVB_TSTBITMASKU8_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitMaskU8_B(uint8 Base_u8, uint8 Mask_u8);

#elif (SRVB_TSTBITMASKU8_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitMaskU8_B SrvB_TstBitMaskU8_B_inline

#elif (SRVB_TSTBITMASKU8_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitMaskU8_B(uint8 Base_u8, uint8 Mask_u8));

#else
    #error >>>> 'Configuration for SrvB_TstBitMaskU8_B is not supported'

/* SRVB_TSTBITMASKU8_B_LOCATION */
#endif


/*** SRVB_PUTBITFIELDU32_LOCATION ***/
#if (SRVB_PUTBITFIELDU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitFieldU32(uint32* Base_pu32, uint32 Pos_u32, uint32 Len_u32, uint32 Val_u32);

#elif (SRVB_PUTBITFIELDU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitFieldU32 SrvB_PutBitFieldU32_inline

#elif (SRVB_PUTBITFIELDU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitFieldU32(uint32* Base_pu32, uint32 Pos_u32, uint32 Len_u32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_PutBitFieldU32 is not supported'

/* SRVB_PUTBITFIELDU32_LOCATION */
#endif


/*** SRVB_PUTBITFIELDU16_LOCATION ***/
#if (SRVB_PUTBITFIELDU16_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitFieldU16(uint16* Base_pu16, uint32 Pos_u32, uint32 Len_u32, uint16 Val_u16);

#elif (SRVB_PUTBITFIELDU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitFieldU16 SrvB_PutBitFieldU16_inline

#elif (SRVB_PUTBITFIELDU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitFieldU16(uint16* Base_pu16, uint32 Pos_u32, uint32 Len_u32, uint16 Val_u16));

#else
    #error >>>> 'Configuration for SrvB_PutBitFieldU16 is not supported'

/* SRVB_PUTBITFIELDU16_LOCATION */
#endif


/*** SRVB_PUTBITFIELDU8_LOCATION ***/
#if (SRVB_PUTBITFIELDU8_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_PutBitFieldU8(uint8 *Base_pu8, uint32 Pos_u32, uint32 Len_u32, uint8 Val_u8);

#elif (SRVB_PUTBITFIELDU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_PutBitFieldU8 SrvB_PutBitFieldU8_inline

#elif (SRVB_PUTBITFIELDU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_PutBitFieldU8(uint8 *Base_pu8, uint32 Pos_u32, uint32 Len_u32, uint8 Val_u8));

#else
    #error >>>> 'Configuration for SrvB_PutBitFieldU8 is not supported'

/* SRVB_PUTBITFIELDU8_LOCATION */
#endif


/*** SRVB_GETBITFIELDU32_LOCATION ***/
#if (SRVB_GETBITFIELDU32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_GetBitFieldU32(uint32 Base_u32, uint32 Pos_u32, uint32 Len_u32);

#elif (SRVB_GETBITFIELDU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitFieldU32 SrvB_GetBitFieldU32_inline

#elif (SRVB_GETBITFIELDU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_GetBitFieldU32(uint32 Base_u32, uint32 Pos_u32, uint32 Len_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitFieldU32 is not supported'

/* SRVB_GETBITFIELDU32_LOCATION */
#endif


/*** SRVB_GETBITFIELDU16_LOCATION ***/
#if (SRVB_GETBITFIELDU16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_GetBitFieldU16(uint16 Base_u16, uint32 Pos_u32, uint32 Len_u32);

#elif (SRVB_GETBITFIELDU16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitFieldU16 SrvB_GetBitFieldU16_inline

#elif (SRVB_GETBITFIELDU16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_GetBitFieldU16(uint16 Base_u16, uint32 Pos_u32, uint32 Len_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitFieldU16 is not supported'

/* SRVB_GETBITFIELDU16_LOCATION */
#endif


/*** SRVB_GETBITFIELDU8_LOCATION ***/
#if (SRVB_GETBITFIELDU8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_GetBitFieldU8(uint8 Base_u8, uint32 Pos_u32, uint32 Len_u32);

#elif (SRVB_GETBITFIELDU8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_GetBitFieldU8 SrvB_GetBitFieldU8_inline

#elif (SRVB_GETBITFIELDU8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_GetBitFieldU8(uint8 Base_u8, uint32 Pos_u32, uint32 Len_u32));

#else
    #error >>>> 'Configuration for SrvB_GetBitFieldU8 is not supported'

/* SRVB_GETBITFIELDU8_LOCATION */
#endif


/*** SRVB_TSTBITINMASKU32_B_LOCATION ***/
#if (SRVB_TSTBITINMASKU32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitInMaskU32_B(uint32 Base_u32, uint32 Mask_u32);

#elif (SRVB_TSTBITINMASKU32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitInMaskU32_B SrvB_TstBitInMaskU32_B_inline

#elif (SRVB_TSTBITINMASKU32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitInMaskU32_B(uint32 Base_u32, uint32 Mask_u32));

#else
    #error >>>> 'Configuration for SrvB_TstBitInMaskU32_B is not supported'

/* SRVB_TSTBITINMASKU32_B_LOCATION */
#endif


/*** SRVB_TSTBITINMASKU16_B_LOCATION ***/
#if (SRVB_TSTBITINMASKU16_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitInMaskU16_B(uint16 Base_u16, uint16 Mask_u16);

#elif (SRVB_TSTBITINMASKU16_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitInMaskU16_B SrvB_TstBitInMaskU16_B_inline

#elif (SRVB_TSTBITINMASKU16_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitInMaskU16_B(uint16 Base_u16, uint16 Mask_u16));

#else
    #error >>>> 'Configuration for SrvB_TstBitInMaskU16_B is not supported'

/* SRVB_TSTBITINMASKU16_B_LOCATION */
#endif


/*** SRVB_TSTBITINMASKU8_B_LOCATION ***/
#if (SRVB_TSTBITINMASKU8_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_TstBitInMaskU8_B(uint8 Base_u8, uint8 Mask_u8);

#elif (SRVB_TSTBITINMASKU8_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_TstBitInMaskU8_B SrvB_TstBitInMaskU8_B_inline

#elif (SRVB_TSTBITINMASKU8_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_TstBitInMaskU8_B(uint8 Base_u8, uint8 Mask_u8));

#else
    #error >>>> 'Configuration for SrvB_TstBitInMaskU8_B is not supported'

/* SRVB_TSTBITINMASKU8_B_LOCATION */
#endif


/*** SRVB_LEADINGONES_U32_S32_LOCATION ***/
#if (SRVB_LEADINGONES_U32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_LeadingOnes_U32_S32(uint32 Base_u32);

#elif (SRVB_LEADINGONES_U32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_LeadingOnes_U32_S32 SrvB_LeadingOnes_U32_S32_inline

#elif (SRVB_LEADINGONES_U32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_LeadingOnes_U32_S32(uint32 Base_u32));

#else
    #error >>>> 'Configuration for SrvB_LeadingOnes_U32_S32 is not supported'

/* SRVB_LEADINGONES_U32_S32_LOCATION */
#endif


/*** SRVB_LEADINGZEROS_U32_S32_LOCATION ***/
#if (SRVB_LEADINGZEROS_U32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_LeadingZeros_U32_S32(uint32 Base_u32);

#elif (SRVB_LEADINGZEROS_U32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_LeadingZeros_U32_S32 SrvB_LeadingZeros_U32_S32_inline

#elif (SRVB_LEADINGZEROS_U32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_LeadingZeros_U32_S32(uint32 Base_u32));

#else
    #error >>>> 'Configuration for SrvB_LeadingZeros_U32_S32 is not supported'

/* SRVB_LEADINGZEROS_U32_S32_LOCATION */
#endif


/*** SRVB_LEADINGSIGNS_S32_S32_LOCATION ***/
#if (SRVB_LEADINGSIGNS_S32_S32_LOCATION == SRVB_LOCATION_CACHED)

    extern sint32 SrvB_LeadingSigns_S32_S32(sint32 Base_s32);

#elif (SRVB_LEADINGSIGNS_S32_S32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_LeadingSigns_S32_S32 SrvB_LeadingSigns_S32_S32_inline

#elif (SRVB_LEADINGSIGNS_S32_S32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvB_LeadingSigns_S32_S32(sint32 Base_s32));

#else
    #error >>>> 'Configuration for SrvB_LeadingSigns_S32_S32 is not supported'

/* SRVB_LEADINGSIGNS_S32_S32_LOCATION */
#endif


/*** SRVB_BITPOSLSBU32_LOCATION ***/
#if (SRVB_BITPOSLSBU32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_BitPosLSBU32(uint32 Base_u32, bool HiLo_b);

#elif (SRVB_BITPOSLSBU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_BitPosLSBU32 SrvB_BitPosLSBU32_inline

#elif (SRVB_BITPOSLSBU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_BitPosLSBU32(uint32 Base_u32, bool HiLo_b));

#else
    #error >>>> 'Configuration for SrvB_BitPosLSBU32 is not supported'

/* SRVB_BITPOSLSBU32_LOCATION */
#endif


/*** SRVB_BITPOSMSBU32_LOCATION ***/
#if (SRVB_BITPOSMSBU32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_BitPosMSBU32(uint32 Base_u32, bool HiLo_b);

#elif (SRVB_BITPOSMSBU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_BitPosMSBU32 SrvB_BitPosMSBU32_inline

#elif (SRVB_BITPOSMSBU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_BitPosMSBU32(uint32 Base_u32, bool HiLo_b));

#else
    #error >>>> 'Configuration for SrvB_BitPosMSBU32 is not supported'

/* SRVB_BITPOSMSBU32_LOCATION */
#endif


/*** SRVB_COPYBITU32_LOCATION ***/
#if (SRVB_COPYBITU32_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_CopyBitU32(uint32 *Dest_pu32, uint32 DestPos_u32, uint32 Src_u32, uint32 SrcPos_u32);

#elif (SRVB_COPYBITU32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_CopyBitU32 SrvB_CopyBitU32_inline

#elif (SRVB_COPYBITU32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_CopyBitU32(uint32 *Dest_pu32, uint32 DestPos_u32, uint32 Src_u32, uint32 SrcPos_u32));

#else
    #error >>>> 'Configuration for SrvB_CopyBitU32 is not supported'

/* SRVB_COPYBITU32_LOCATION */
#endif


/* SRVB_PARITYODD_S32_B_LOCATION ***************************************************************************************/
#if   (SRVB_PARITYODD_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_ParityOdd_S32_B (sint32 X_s32);

#elif (SRVB_PARITYODD_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ParityOdd_S32_B      SrvB_ParityOdd_S32_B_inline

#elif (SRVB_PARITYODD_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_ParityOdd_S32_B (sint32 X_s32));

#else

    #error >>>> 'Configuration for SrvB_ParityOdd_S32_B not supported'

/* SRVB_PARITYODD_S32_B_LOCATION */
#endif


/* SRVB_PARITYODD_U32_B_LOCATION ******************************************************************************************/
#if   (SRVB_PARITYODD_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_ParityOdd_U32_B (uint32 X_u32);

#elif (SRVB_PARITYODD_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ParityOdd_U32_B      SrvB_ParityOdd_U32_B_inline

#elif (SRVB_PARITYODD_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_ParityOdd_U32_B (uint32 X_u32));

#else

    #error >>>> 'Configuration for SrvB_ParityOdd_U32_B not supported'

/* SRVB_PARITYODD_B_LOCATION */
#endif


/* SRVB_PARITYEVEN_S32_B_LOCATION ******************************************************************************************/
#if   (SRVB_PARITYEVEN_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_ParityEven_S32_B(sint32 X_s32);

#elif (SRVB_PARITYEVEN_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ParityEven_S32_B     SrvB_ParityEven_S32_B_inline

#elif (SRVB_PARITYEVEN_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_ParityEven_S32_B(sint32 X_s32));

#else

    #error >>>> 'Configuration for SrvB_ParityEven_S32_B not supported'

/* SRVB_PARITYEVEN_S32_B_LOCATION */
#endif


/* SRVB_PARITYEVEN_U32_B_LOCATION ******************************************************************************************/
#if   (SRVB_PARITYEVEN_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_ParityEven_U32_B(uint32 X_u32);

#elif (SRVB_PARITYEVEN_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_ParityEven_U32_B     SrvB_ParityEven_U32_B_inline

#elif (SRVB_PARITYEVEN_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_ParityEven_U32_B(uint32 X_u32));

#else

    #error >>>> 'Configuration for SrvB_ParityEven_U32_B not supported'

/* SRVB_PARITYEVEN_S32_B_LOCATION */
#endif


/* _SRVB_BIT_H */
#endif

