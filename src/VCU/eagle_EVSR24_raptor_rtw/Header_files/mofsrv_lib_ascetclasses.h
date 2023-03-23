/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:mofsrv_lib_ascetclasses.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SHN3COB$
 * $Date______:19.05.2016$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_ascetclasses$
 * $Variant___:9.6.0$
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
 * 9.6.0; 0     19.05.2016 SHN3COB
 *   warning removal due to mofsrv_libcplchkary
 * 
 * 18.1.0; 2     20.01.2012 ECT2SI
 *   Doku und mofsrv_lib_ascetclasses.h file update for Autocode development
 * 
 * 18.1.0; 1     22.12.2011 TRJ2ST
 *   Doku und mofsrv_lib_ascetclasses.h file update for Autocode development
 * 
 * 18.1.0; 0     20.10.2011 ECT2SI
 *   Doku und .h file update for Autocode development
 * 
 * 18.0.0; 1     09.09.2011 GWR2SI
 *   replace inline function MoFSrv_Lib_BitCplU32 by MoFSrv_Lib_BitCplS32 in 
 *   SWHDR mofsrv_lib_ascetclasses
 * 
 * 18.0.0; 0     05.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_ASCETCLASSES_H
#define _MOFSRV_LIB_ASCETCLASSES_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif


/*
 ***************************************************************************************************
 *                        B i t   C o m p l e m e n t   F u n c t i o n s
 ***************************************************************************************************
 */

LOCAL_INLINE uint8 MoFSrv_Lib_BitCplU8(uint8 in);
LOCAL_INLINE uint8 MoFSrv_Lib_BitCplU8(uint8 in)
   {
   return (~(in));
   }
   
LOCAL_INLINE uint16 MoFSrv_Lib_BitCplU16(uint16 in);
LOCAL_INLINE uint16 MoFSrv_Lib_BitCplU16(uint16 in)
   {
   return (~(in));
   }

LOCAL_INLINE uint32 MoFSrv_Lib_BitCplU32(uint32 in);
LOCAL_INLINE uint32 MoFSrv_Lib_BitCplU32(uint32 in)
   {
   return (~(in));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_BitCplS8(sint8 in);
LOCAL_INLINE uint8 MoFSrv_Lib_BitCplS8(sint8 in)
   {
   return (~((uint8)in));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_BitCplS16(sint16 in);
LOCAL_INLINE uint16 MoFSrv_Lib_BitCplS16(sint16 in)
   {
   return (~((uint16)in));
   }

LOCAL_INLINE uint32 MoFSrv_Lib_BitCplS32(sint32 in);
LOCAL_INLINE uint32 MoFSrv_Lib_BitCplS32(sint32 in)
   {
   return (~((uint32)in));
   }
/*
 ***************************************************************************************************
 *                        B i t   O p e r a t i o n s
 ***************************************************************************************************
 */



/* BitwiseAND */

#define MoFSrv_Lib_BitAND_U8(input1, input2)			((uint8)((input1)  & (input2)))
#define MoFSrv_Lib_BitAND_U16(input1, input2)			((uint16)((input1) & (input2)))
#define MoFSrv_Lib_BitAND_U32(input1, input2)			((uint32)((input1) & (input2)))

#define MoFSrv_Lib_BitAND_S8(input1, input2)			((sint8)((input1)  & (input2)))
#define MoFSrv_Lib_BitAND_S16(input1, input2)			((sint16)((input1) & (input2)))
#define MoFSrv_Lib_BitAND_S32(input1, input2)			((sint32)((input1) & (input2)))


/* BitWiseOR */

#define MoFSrv_Lib_BitOR_U8(input1, input2)				((uint8)((input1)  | (input2)))
#define MoFSrv_Lib_BitOR_U16(input1, input2)			((uint16)((input1) | (input2)))
#define MoFSrv_Lib_BitOR_U32(input1, input2)			((uint32)((input1) | (input2)))

#define MoFSrv_Lib_BitOR_S8(input1, input2)				((sint8)((input1)  | (input2)))
#define MoFSrv_Lib_BitOR_S16(input1, input2)			((sint16)((input1) | (input2)))
#define MoFSrv_Lib_BitOR_S32(input1, input2)			((sint32)((input1) | (input2)))


/* Shift Left */

#define MoFSrv_Lib_shiftLeft_U8(n, input)				((uint8)((input)  << (n)))
#define MoFSrv_Lib_shiftLeft_U16(n, input)				((uint16)((input) << (n)))
#define MoFSrv_Lib_shiftLeft_U32(n, input)				((uint32)((input) << (n)))



/* Shift Right */

#define MoFSrv_Lib_shiftRight_U8(n, input)		  		((uint8)((input)  >> (n)))
#define MoFSrv_Lib_shiftRight_U16(n, input)		  		((uint16)((input) >> (n)))
#define MoFSrv_Lib_shiftRight_U32(n, input)		 	 	((uint32)((input) >> (n)))



/* BitWiseXOR */

#define MoFSrv_Lib_BitXOR_U8(input1, input2)			((uint8)((input1)  ^ (input2)))
#define MoFSrv_Lib_BitXOR_U16(input1, input2)			((uint16)((input1) ^ (input2)))
#define MoFSrv_Lib_BitXOR_U32(input1, input2)			((uint32)((input1) ^ (input2)))


/*
 ***************************************************************************************************
 *                        B i t   A c c e s s   F u n c t i o n s
 ***************************************************************************************************
 */

LOCAL_INLINE uint8 MoFSrv_Lib_ClrBit_U8(uint8 bitPosition, uint8 base);
LOCAL_INLINE uint8 MoFSrv_Lib_ClrBit_U8(uint8 bitPosition, uint8 base)
   {
   return (base & ((uint8)(~(((uint8)1u) << bitPosition))));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_ClrBit_U16(uint8 bitPosition, uint16 base);
LOCAL_INLINE uint16 MoFSrv_Lib_ClrBit_U16(uint8 bitPosition, uint16 base)
   {
   return (base & ((uint16)(~(((uint16)1u) << bitPosition))));
   }

LOCAL_INLINE uint32 MoFSrv_Lib_ClrBit_U32(uint8 bitPosition, uint32 base);
LOCAL_INLINE uint32 MoFSrv_Lib_ClrBit_U32(uint8 bitPosition, uint32 base)
   {
   return (base & ((uint32)(~(((uint32)1u) << bitPosition))));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U8(uint8 bitPosition, uint8 base);
LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U8(uint8 bitPosition, uint8 base)
   {
   return ((base >> bitPosition) & ((uint8)1u));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U16(uint8 bitPosition, uint16 base);
LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U16(uint8 bitPosition, uint16 base)
   {
   return ((base >> bitPosition) & ((uint16)1u));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U32(uint8 bitPosition, uint32 base);
LOCAL_INLINE uint8 MoFSrv_Lib_GetBit_U32(uint8 bitPosition, uint32 base)
   {
   return ((base >> bitPosition) & ((uint32)1u));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_SetBit_U8(uint8 bitPosition, uint8 base);
LOCAL_INLINE uint8 MoFSrv_Lib_SetBit_U8(uint8 bitPosition, uint8 base)
   {
   return (base | (((uint8)1u) << bitPosition));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_SetBit_U16(uint8 bitPosition, uint16 base);
LOCAL_INLINE uint16 MoFSrv_Lib_SetBit_U16(uint8 bitPosition, uint16 base)
   {
   return (base | (((uint16)1u) << bitPosition));
   }
   
LOCAL_INLINE uint32 MoFSrv_Lib_SetBit_U32(uint8 bitPosition, uint32 base);
LOCAL_INLINE uint32 MoFSrv_Lib_SetBit_U32(uint8 bitPosition, uint32 base)
   {
   return (base | (((uint32)1u) << bitPosition));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_PutBit_U8(uint8 bitPosition, uint8 base, uint8 val);
LOCAL_INLINE uint8 MoFSrv_Lib_PutBit_U8(uint8 bitPosition, uint8 base, uint8 val)
   {
   return((val) ? (base | (((uint8)1u) << bitPosition)) : (base & ((uint8)(~(((uint8)1u) << bitPosition)))));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_PutBit_U16(uint8 bitPosition, uint16 base, uint8 val);
LOCAL_INLINE uint16 MoFSrv_Lib_PutBit_U16(uint8 bitPosition, uint16 base, uint8 val)
   {
   return((val) ? (base | (((uint16)1u) << bitPosition)) : (base & ((uint16)(~(((uint16)1u) << bitPosition)))));
   }

LOCAL_INLINE uint32 MoFSrv_Lib_PutBit_U32(uint8 bitPosition, uint32 base, uint8 val);
LOCAL_INLINE uint32 MoFSrv_Lib_PutBit_U32(uint8 bitPosition, uint32 base, uint8 val)
   {
   return((val) ? (base | (((uint32)1u) << bitPosition)) : (base & ((uint32)(~(((uint32)1u) << bitPosition)))));
   }
   
/*
 ***************************************************************************************************
 *                        B i t   A c c e s s   F u n c t i o n s  -  M a s k
 ***************************************************************************************************
 */

LOCAL_INLINE uint8 MoFSrv_Lib_ClrBitMsk_U8(uint8 base, uint8 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_ClrBitMsk_U8(uint8 base, uint8 mask)
   {
   return ((base) & ((uint8)(~(mask))));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_ClrBitMsk_U16(uint16 base, uint16 mask);
LOCAL_INLINE uint16 MoFSrv_Lib_ClrBitMsk_U16(uint16 base, uint16 mask)
   {
   return ((base) & ((uint16)(~(mask))));
   }


LOCAL_INLINE uint8 MoFSrv_Lib_SetBitMsk_U8(uint8 base, uint8 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_SetBitMsk_U8(uint8 base, uint8 mask)
   {
   return ((base) | (mask));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_SetBitMsk_U16(uint16 base, uint16 mask);
LOCAL_INLINE uint16 MoFSrv_Lib_SetBitMsk_U16(uint16 base, uint16 mask)
   {
   return ((base) | (mask));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_PutBitMsk_U8(uint8 base, uint8 mask, uint8 val);
LOCAL_INLINE uint8 MoFSrv_Lib_PutBitMsk_U8(uint8 base, uint8 mask, uint8 val)
   {
   return((val) ? ((base) | (mask)) : ((base) & ((uint8)(~(mask)))));
   }

LOCAL_INLINE uint16 MoFSrv_Lib_PutBitMsk_U16(uint16 base, uint16 mask, uint8 val);
LOCAL_INLINE uint16 MoFSrv_Lib_PutBitMsk_U16(uint16 base, uint16 mask, uint8 val)
   {
   return((val) ? ((base) | (mask)) : ((base) & ((uint16)(~(mask)))));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_TstBitMsk_U8(uint8 base, uint8 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_TstBitMsk_U8(uint8 base, uint8 mask)
   {
   return (((base) & (mask)) == (mask));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_TstBitMsk_U16(uint16 base, uint16 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_TstBitMsk_U16(uint16 base, uint16 mask)
   {
   return (((base) & (mask)) == (mask));
   }

LOCAL_INLINE uint8 MoFSrv_Lib_TstBitInMsk_U8(uint8 base, uint8 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_TstBitInMsk_U8(uint8 base, uint8 mask)
   {
   return (((base) & (mask))  != false);
   }

LOCAL_INLINE uint8 MoFSrv_Lib_TstBitInMsk_U16(uint16 base, uint16 mask);
LOCAL_INLINE uint8 MoFSrv_Lib_TstBitInMsk_U16(uint16 base, uint16 mask)
   {
   return (((base) & (mask))  != false);
   }

   /*
 ***************************************************************************************************
 *                     C o m p l e m e n t  C h e c k  f o r  A r r a y s
 ***************************************************************************************************
 */  
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU8(const uint8 Ary[],const uint8 AryCpl[], uint8 ArySize);
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS8(const sint8 Ary[], const uint8 AryCpl[], uint8 ArySize);

LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU16(const uint16 Ary[], const uint16 AryCpl[], uint8 ArySize);
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS16(const sint16 Ary[], const uint16 AryCpl[], uint8 ArySize);

LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU32(const uint32 Ary[], const uint32 AryCpl[], uint8 ArySize);
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS32(const sint32 Ary[], const uint32 AryCpl[], uint8 ArySize);

LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU8(const uint8 Ary[],  const uint8 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplU8(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/* EasyCASE ) */
/* EasyCASE ( 328
   MoFSrv_Lib_CplChkAryS8 */
/* EasyCASE F */
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS8(const sint8 Ary[], const uint8 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplS8(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/* EasyCASE ) */
/* EasyCASE ( 329
   MoFSrv_Lib_CplChkAryU16 */
/* EasyCASE F */
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU16(const uint16 Ary[], const uint16 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplU16(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/* EasyCASE ) */
/* EasyCASE ( 330
   MoFSrv_Lib_CplChkAryS16 */
/* EasyCASE F */
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS16(const sint16 Ary[], const uint16 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplS16(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/* EasyCASE ) */
/* EasyCASE ( 331
   MoFSrv_Lib_CplChkAryU32 */
/* EasyCASE F */
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryU32(const uint32 Ary[], const uint32 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplU32(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/* EasyCASE ) */
/* EasyCASE ( 332
   MoFSrv_Lib_CplChkAryS32 */
/* EasyCASE F */
LOCAL_INLINE bool MoFSrv_Lib_CplChkAryS32(const sint32 Ary[], const uint32 AryCpl[], uint8 ArySize)
   {
   uint8 cnt = 0U;
   for (cnt = 0U; cnt < ArySize; cnt++)
      {
      if ((MoFSrv_Lib_BitCplS32(Ary[cnt])) != AryCpl[cnt])
         {
         return TRUE;
         }
      }
   return FALSE;
   }
/*
 ***************************************************************************************************
 *                        M i s c e l l a n e o u s
 ***************************************************************************************************
 */

#define MoFSrv_Lib_Adr(x)    	(&(x))
  
   
#endif /* _MOFSRV_LIB_ASCETCLASSES_H */
