/* EasyCASE V6.5 20.10.2010 07:41:59 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=161 */
/* EasyCASE ( 82
   Header fuer den kompletten RAM-Check */
/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in by [N]estor)      ***************************
 ***************************************************************************************************
 *
 * $Filename__:mocrom_co.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 ***************************************************************************************************
*/
/* EasyCASE ( 28
   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:RWF2SI$
 * $Date______:20.10.2010$
 * $Class_____:SWHDR$
 * $Name______:mocrom_co$
 * $Variant___:5.0.0$
 * $Revision__:3$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $generated_:$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * Points to be taken into consideration when/if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 5.0.0; 3     20.10.2010 RWF2SI
 *   Update Specification
 *   Adaption functions for redirect segment 8,9 adresses from , to segment A,B 
 *   adresses
 * 
 * 5.0.0; 2     01.09.2010 RWF2SI
 *   preparation for FCI, changes for avoiding warning, error messages from 
 *   compiler, EOS and QAC
 * 
 * 5.0.0; 1     13.08.2010 RWF2SI
 *   preparation for FCI, changes for avoiding warning, error messages from 
 *   compiler, EOS and QAC
 * 
 * 5.0.0; 0     08.07.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
#ifndef _MOCROM_CO_H
#define _MOCROM_CO_H
/* EasyCASE ( 36
   Deklarationen */
/* ******************************************************************************************************* */
/* **********************************     Module Internal Definitions     ******************************** */
/* ******************************************************************************************************* */
/* EasyCASE - */
/* EasyCASE < */
/* Define-Constants                                                                                        */
/* ================  */

#include "common.h"
#include "memlay.h"
#include "sbib.h"

#ifndef MEMLAY_OFFSET_NONCACHED
   #error >>>> 'MEMLAY_OFFSET_NONCACHED' not defined inside MoCROM_Co!
#endif

/* Start-Label of infoblock-list                                   */
#define MOCROM_CO_IB_START_LABEL              (__MEMLAY_SB_START)
MEMLAY_USE_LABEL(extern void*,  __MEMLAY_SB_START[]);         /* Start-Label of infoblock-list   */


/* the enumerator MoCROM_IBChkRslt_t is used for checking the 
 */
enum
{
    MOCROM_CO_IBTEST_OK,      /* Access to pattern[], here 0 */
    MOCROM_CO_IBTEST_FAIL,    /* */
    MOCROM_CO_NUM_IBCHKRSLT_E /* Number of used return values */
};
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 83
   Typedefs */
/* Pointer to inflo-block-structure for complete ROM test        */
typedef IB_InfoBlk_t    *MoCROM_InfoBlockPtr_t;

/* Pointer to checksum-block-structure for complete ROM test */
typedef const IB_CSBlkTab_t   *MoCROM_ChkSumBlockPtr_t;
/* EasyCASE ) */
/* EasyCASE ( 113
   service for address transformation */
/* cpv   const   void pointer */
/* pv            void pointer */
/* cpu8  const  uint8 pointer */
/* pu8          uint8 pointer */
/* cpu8  const  uint8 pointer */
/* pu32        uint32 pointer */
/* cpu32 const uint32 pointer */
/* EasyCASE ( 101
   MoCROM_Co_TranslateToNonCached_cpv */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const void* MoCROM_Co_TranslateToNonCached_cpv(const void* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((const void*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 102
   MoCROM_Co_TranslateToCached_cpv */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const void* MoCROM_Co_TranslateToCached_cpv(const void* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((const void*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 103
   MoCROM_Co_TranslateToNonCached_pv */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(void* MoCROM_Co_TranslateToNonCached_pv(void* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((void*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 104
   MoCROM_Co_TranslateToCached_pv */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(void* MoCROM_Co_TranslateToCached_pv(void* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((void*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 105
   MoCROM_Co_TranslateToNonCached_pu8 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint8* MoCROM_Co_TranslateToNonCached_pu8(uint8* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((uint8*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 106
   MoCROM_Co_TranslateToCached_pu8 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint8* MoCROM_Co_TranslateToCached_pu8(uint8* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((uint8*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 107
   MoCROM_Co_TranslateToNonCached_cpu8 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const uint8* MoCROM_Co_TranslateToNonCached_cpu8(const uint8* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((const uint8*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 108
   MoCROM_Co_TranslateToCached_cpu8 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const uint8* MoCROM_Co_TranslateToCached_cpu8(const uint8* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((const uint8*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 109
   MoCROM_Co_TranslateToNonCached_pu32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint32* MoCROM_Co_TranslateToNonCached_pu32(uint32* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((uint32*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 110
   MoCROM_Co_TranslateToCached_pu32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint32* MoCROM_Co_TranslateToCached_pu32(uint32* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((uint32*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 111
   MoCROM_Co_TranslateToNonCached_cpu32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const uint32* MoCROM_Co_TranslateToNonCached_cpu32(const uint32* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = ((const uint32*)(((uint32)adVar_u32) + ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 112
   MoCROM_Co_TranslateToCached_cpu32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(const uint32* MoCROM_Co_TranslateToCached_cpu32(const uint32* adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = ((const uint32*)(((uint32)adVar_u32) - ((uint32)MEMLAY_OFFSET_NONCACHED)));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 119
   MoCROM_Co_TranslateToNonCached_u32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint32 MoCROM_Co_TranslateToNonCached_u32(uint32 adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x4)
      {
      adVar_u32 = (adVar_u32 + ((uint32)MEMLAY_OFFSET_NONCACHED));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ( 120
   MoCROM_Co_TranslateToCached_u32 */
/* EasyCASE F */
MEMLAY_USE_FORCE_INLINE(uint32 MoCROM_Co_TranslateToCached_u32(uint32 adVar_u32))
   {
   /* Algorithm from Memlay Team                                              */
   /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
   if ((((uint32)adVar_u32) >> 29) == 0x5)
      {
      adVar_u32 = (adVar_u32 - ((uint32)MEMLAY_OFFSET_NONCACHED));
      }
   return adVar_u32;
   }
/* EasyCASE ) */
/* EasyCASE ) */
#endif /* _MOCROM_CO_H */
/* EasyCASE ) */
