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
 * $Filename__:srvb_bit_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:18.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_bit_inl$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     18.08.2014 PIR5COB
 *   Lebels for ASM services got updated
 * 
 * 1.17.0; 0     10.07.2012 SWC1COB
 *   enhancement of putbit functionality
 * 
 * 1.14.1; 0     18.04.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.14.0.1
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.1; 0     18.10.2009 VKA2FE
 *   Bugfix delivery derived from B_SRVB.11.0.1
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_BIT_INL_H
#define _SRVB_BIT_INL_H

#include "srvb_limit.h"
#include "srvb_limit_inl.h"

/*
 **********************************************************************************************************************
 *
 * List of functions:
 *
 * SrvB_SetBitU32               SrvB_SetBitU16              SrvB_SetBitU8
 * SrvB_SetBitAtmcU32           SrvB_SetBitAtmcNearU32
 *
 * SrvB_ClrBitU32               SrvB_ClrBitU16              SrvB_ClrBitU8
 * SrvB_ClrBitAtmcU32           SrvB_ClrBitAtmcNearU32
 *
 * SrvB_GetBitU32_B             SrvB_GetBitU16_B            SrvB_GetBitU8_B
 *
 * SrvB_PutBitU32               SrvB_PutBitU16              SrvB_PutBitU8
 * SrvB_PutBitAtmcU32           SrvB_PutBitAtmcNearU32
 *
 * SrvB_CopyBitU32  (calls SrvB_PutBitU32 and SrvB_GetBitU32)
 *
 * SrvB_SetBitMaskU32           SrvB_SetBitMaskU16          SrvB_SetBitMaskU8
 * SrvB_ClrBitMaskU32           SrvB_ClrBitMaskU16          SrvB_ClrBitMaskU8
 * SrvB_PutBitMaskU32           SrvB_PutBitMaskU16          SrvB_PutBitMaskU8
 * SrvB_TstBitMaskU32_B         SrvB_TstBitMaskU16_B        SrvB_TstBitMaskU8_B
 *
 * SrvB_PutBitFieldU32          SrvB_PutBitFieldU16         SrvB_PutBitFieldU8
 * SrvB_GetBitFieldU32          SrvB_GetBitFieldU16         SrvB_GetBitFieldU8
 *
 * SrvB_TstBitInMaskU32_B       SrvB_TstBitInMaskU16_B      SrvB_TstBitInMaskU8_B
 * SrvB_LeadingOnes_U32_S32     SrvB_LeadingZeros_U32_S32   SrvB_LeadingSigns_S32_S32
 * SrvB_BitPosLSBU32            SrvB_BitPosMSBU32
 *
 * SrvB_ParityOdd_U32_B         SrvB_ParityOdd_S32_B
 * SrvB_ParityEven_U32_B        SrvB_ParityEven_S32_B
 *
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 *
 *
 *
 * BIT MANIPULATION FUNCTIONS
 *
 *
 *
 **********************************************************************************************************************
 */


/**
 **********************************************************************************************************************
 * SrvB_SetBitU32
 *
 * \brief Sets a bit at a defined position Pos named Pos_u32 within the variable Base_pu32.
 * A priori, the range [0,31] is valid for position Pos_u32. Note, the given position is not monitored.
 *
 * \param   uint32*  Base_pu32  pointer to a 32-bit variable, to be modified
 * \param   uint32   Pos_u32    position to be set
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitU32_inline(uint32* Base_pu32, uint32 Pos_u32))
{
    *Base_pu32 |= ((uint32)(1ul << Pos_u32));
}


/**
 **********************************************************************************************************************
 * SrvB_SetBitU16
 *
 * \brief Sets a bit at the described position Pos_u32 within the variable Base_pu16.
 * A priori, the range [0,15] is valid for Pos_u32. Note, the given position is not monitored.
 *
 * \param   uint16*  Base_pu16  pointer to a 16-bit variable, to be modified
 * \param   uint32   Pos_u32    position to be set
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitU16_inline(uint16* Base_pu16, uint32 Pos_u32))
{
    *Base_pu16 |= ((uint16) (1ul << Pos_u32));
}


/**
 **********************************************************************************************************************
 * SrvB_SetBitU8
 *
 * \brief Sets a bit at a defined position Pos_u32, in the 8-bit variable Base_pu8.
 * A priori, range [0,7] is valid for Pos_u32. Note, the given position is not monitored.
 *
 * \param   uint8*   Base_pu8   pointer to the 8-bit variable, to be modified
 * \param   uint32   Pos_u32    position to be set
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitU8_inline(uint8* Base_pu8, uint32 Pos_u32))
{
    *Base_pu8 |= ((uint8)(1ul << Pos_u32));
}


/**
 **********************************************************************************************************************
 * SrvB_SetBitAtmcU32
 *
 * \brief Sets the bit at a described position Pos_u32 in the 32bit variable Base_pu32 without an interupt (atomic).
 *
 * \param   uint32   Base_u32       32-bit variable, to be modified
 * \param   uint32   Pos_u32        Position which bit shall be set
 * \return  void
 **********************************************************************************************************************
 */
#define SrvB_SetBitAtmcU32(Base_u32,Pos_u32)        \
({                                                  \
    uint64 temp_u64;                                \
    asm volatile("imask %A1, 1, %2, 1;"             \
                 "ldmst %0,%A1"                     \
                 :"+m"(Base_u32), "=&d"(temp_u64)   \
                 : "d"(Pos_u32) );                  \
})


/**
 **********************************************************************************************************************
 * SrvB_SetBitAtmcNearU32
 *
 * \brief Sets the bit at a described position Pos_u8 in the 32bit variable Base_pu32 without interupt (atomic).
 *
 * \param   uint32*  Base_pu32 pointer to the 32-bit variable, to be modified, located in 1st 16kB of segment
 * \param   uint8    Pos_u8    Position which bit shall be set (must be a numeric constant)
 * \return           void
 **********************************************************************************************************************
 */
#define SrvB_SetBitAtmcNearU32(Base_u32, Pos_u8) asm volatile("st.t %0, %1, 1"                             \
                                                               :"+m"(((uint8*)&(Base_u32))[((Pos_u8)>>3)]) \
                                                               :"n"((Pos_u8)%8))


/**
 **********************************************************************************************************************
 * SrvB_ClrBitU32
 *
 * \brief Clears a bit at the variable Base_pu32 to "0". The position of the cleared bit is described by the variable
 * Pos_u32. A priori, range [0,31] is valid for Pos_u32. Note, the given position is not monitored.
 *
 * \param   uint32*  Base_pu32  pointer to the 32-bit variable, which should be modified.
 * \param   uint32   Pos_u32    position of the bit, to be cleared.
 * \return           void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitU32_inline(uint32 *Base_pu32, uint32 Pos_u32))
{
    *Base_pu32 &= ((uint32)(~(1ul << Pos_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitU16
 *
 * \brief Clears a bit in the variable Base_pu16 to "0". The position of the cleared bit is described by the variable
 * Pos_u32. A priori, range [0,15] is valid for Pos_u32. Note, the given position is not monitored.
 *
 * \param   uint16*  Base_pu16  pointer to the 16-bit variable, which should be modified.
 * \param   uint32   Pos_u32    position which bit shall be cleared.
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitU16_inline(uint16 *Base_pu16, uint32 Pos_u32))
{
    *Base_pu16 &= ((uint16)(~(1ul << Pos_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitU8
 *
 * \brief Clears a bit in the variable Base_pu8 to "0". The position of the cleared bit is described by the variable
 * Pos_u32. A priori, range [0,7] is valid for Pos_u8. Note, the given position is not monitored.
 *
 * \param   uint8*  Base_pu8   pointer to the 8-bit variable, which should be modified.
 * \param   uint32  Pos_u32    position which bit shall be cleared.
 * \return          void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitU8_inline(uint8 *Base_pu8, uint32 Pos_u32))
{
    *Base_pu8 &= ((uint8)(~(1u << Pos_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitAtmcU32
 *
 * \brief Clears a bit at the variable Base_cpu32 to "0". The position of the cleared bit is described by the variable
 * Pos_u32. Clearing is done without interrupt (atomic).
 * A priori, range [0,31] is valid for Pos_u32. Note, the given position is not monitored.
 *
 * \param    uint32     Base_u32        32-bit variable, to be modified
 * \param    uint32     Pos_u32         position of the bit to be cleared
 * \return   void
 **********************************************************************************************************************
 */
#define SrvB_ClrBitAtmcU32(Base_u32,Pos_u32)            \
({                                                      \
    uint64 temp_u64;                                    \
    asm volatile("imask %A1, 0, %2, 1;"                 \
                 "ldmst %0,%A1        "                 \
                 :"+m"(Base_u32), "=&d"(temp_u64)       \
                 : "d"(Pos_u32));                       \
})


/**
 **********************************************************************************************************************
 * SrvB_ClrBitAtmcNearU32
 *
 * \brief Clears a bit at given position Pos_u8 at Base_pu32. Base_pu32 has to be located in the first 16kB of a
 * segment and is a 32bit variable.
 *
 * \param   uint32*  Base_pu32          Constant pointer to base address where to clear one bit.
 * \param   uint8    Pos_u8             Position which bit shall be cleared.
 * \return  void
 **********************************************************************************************************************
 */
#define SrvB_ClrBitAtmcNearU32(Base_u32,Pos_u8) asm volatile("st.t %0, %1, 0"                              \
                                                               :"+m"(((uint8*)&(Base_u32))[((Pos_u8)>>3)]) \
                                                               :"n"((Pos_u8)%8))


/**
 **********************************************************************************************************************
 * SrvB_GetBitU32_B
 *
 * \brief Gets a bit at the variable Base_u32 at a described position Pos_u32.
 * Returns TRUE in case, the bit at position Pos_u32 in variable Base_u32 is set, otherwise returns FALSE.
 *
 * \param   uint32   Base_u32  32-bit Base variable, where should be read from
 * \param   uint32   Pos_u32   position which bit shall be read
 * \return  bool               returns the bit value from address Base_pu32 at position Pos_u32
 * \retval           TRUE      if the bit at Pos_u32 is one (set)
 * \retval           FALSE     if the bit at Pos_u32 is zero
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_GetBitU32_B_inline(uint32 Base_u32, uint32 Pos_u32))
{
    return ((bool) (((Base_u32) & ((uint32)(1ul << Pos_u32))) != 0ul));
}


/**
 **********************************************************************************************************************
 * SrvB_GetBitU16_B
 *
 * \brief Gets a bit at the variable Base_u16 at a described position Pos_u32.
 * Returns TRUE in case, the bit at position Pos_u32 in variable Base_u16 is set, otherwise returns FALSE.
 *
 * \param   uint16  Base_u16  16-bit variable, where should be read from.
 * \param   uint32  Pos_u32   Position which bit shall be read.
 * \return  bool              Returns the bit value from Base_pu16 at position Pos_u32
 * \retval         TRUE       If the bit at Pos is not zero
 * \retval         FALSE      If the bit at Pos is zero
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_GetBitU16_B_inline(uint16 Base_u16, uint32 Pos_u32))
{
    return ((bool) (((Base_u16) & ((uint16) (1ul << Pos_u32))) != 0u) );
}


/**
 **********************************************************************************************************************
 * SrvB_GetBitU8_B
 *
 * \brief Gets a bit at the variable Base_u8 at a described position Pos_u32.
 * Returns TRUE in case, the bit at position Pos_u32 in variable Base_u8 is set, otherwise returns FALSE.
 *
 * \param   uint8   Base_u8  8-bit Base variable, where should be read from.
 * \param   uint32  Pos_u32  Position which bit shall be read
 * \return  bool             Returns the bit value from Base_u8 at position Pos_u32
 * \retval          TRUE     If the bit at Pos is not zero
 * \retval          FALSE    If the bit at Pos is zero
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_GetBitU8_B_inline(uint8 Base_u8, uint32 Pos_u32))
{
    return ((bool)(((Base_u8) & ((uint8)(1ul << Pos_u32))) != 0u));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitU32
 *
 * \brief Sets or clears a bit at a given position Pos_u32 in the 32-bit variable Base_pu32.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit is cleared, case 1 the bit is set.
 * A priori, range [0,31] is valid for Pos_u32.
 * Note, neither the given position P_u32 nor the given value Val_u32 not monitored.
 *
 * \param   uint32*  Base_pu32  pointer to a 32-bit variable, where a bit schould be modified
 * \param   uint32   Pos_u32    position of the bit, to be set
 * \param   uint32   Val_u32    defines the new bit, 0 clears the bit and 1 sets the bit
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitU32_inline(uint32* Base_pu32, uint32 Pos_u32, uint32 Val_u32))
{
    *Base_pu32 = ((uint32)(*Base_pu32 | ((uint32)(1ul << Pos_u32))) & (uint32)(~((uint32)
                                                                 ((uint32)(!Val_u32) << Pos_u32))));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitU16
 *
 * \brief Sets or clears a bit at a given position Pos_u32 in the 16-bit variable Base_pu16.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit is cleared, case 1 the bit is set.
 * A priori, range [0,15] is valid for Pos_u32.
 * Note, neither the given position P_u32 nor the given value Val_u32 not monitored.
 *
 * \param   uint16*  Base_pu16  pointer to a 16-bit variable, where a bit schould be modified
 * \param   uint32   Pos_u32    position of the bit, to be set
 * \param   uint16   Val_u32    defines the new bit, 0 clears the bit and 1 sets the bit
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitU16_inline(uint16* Base_pu16, uint32 Pos_u32, uint32 Val_u32))
{
    *Base_pu16 = ((*Base_pu16 & ((uint16)~(1u<<Pos_u32))) | ((uint16)(Val_u32 << Pos_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitU8
 *
 * \brief Sets or clears a bit at a given position Pos_u32 in the 8-bit variable Base_pu8.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit is cleared, case 1 the bit is set.
 * A priori, range [0,7] is valid for Pos_u32.
 * Note, neither the given position P_u32 nor the given value Val_u32 not monitored.
 *
 * \param  uint8*  Base_pu8    pointer to a 8-bit variable, where a bit schould be modified
 * \param  uint32  Pos_u32     position of the bit, to be set
 * \param  uint32  Val_u32     defines the new bit, 0 clears the bit and 1 sets the bit
 * \return void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitU8_inline(uint8* Base_pu8, uint32 Pos_u32, uint32 Val_u32))
{
    *Base_pu8 = ((*Base_pu8 & ((uint8)~(1u<<Pos_u32))) | ((uint8)(Val_u32 << Pos_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitAtmcU32
 *
 * \brief Sets or clears a bit at a given position Pos_u32 in the 8-bit variable Base_cpu32 without interrupt (atomic).
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit is cleared, case 1 the bit is set.
 * A priori, range [0,31] is valid for Pos_u32.
 * Note, neither the given position P_u32 nor the given value Val_u32 not monitored.
 *
 * \param   uint32         Base_u32     32-bit variable, where a bit schould be modified
 * \param   uint32         Pos_u32      position of the bit, to be set
 * \param   uint32         Val_u32      Value that the bit at address shall be set to
 * \return  void
 **********************************************************************************************************************
 */
#define SrvB_PutBitAtmcU32(Base_u32,Pos_u32,Val_u32)        \
({                                                          \
    uint64 temp_u64;                                        \
    asm volatile("  jnz  %3, L1F_%=     ;"                  \
                 "  imask %A1, 0, %2, 1 ;"                  \
                 "  ldmst %0,%A1        ;"                  \
                 "  j    L2F_%=         ;"                  \
                 "L1F_%=:                 ;"                  \
                 "  imask %A1, 1, %2, 1 ;"                  \
                 "  ldmst %0,%A1        ;"                  \
                 "L2F_%=:                 ;"                  \
                   :"+m"(Base_u32),"=&d"(temp_u64)          \
                   :"d"(Pos_u32),"d"(Val_u32));             \
})


/**
 **********************************************************************************************************************
 * SrvB_PutBitAtmcNearU32
 *
 * \brief Sets or clears a bit at given position  Pos_u8 at Base_pu32. Base_pu32 has to be located in the first 16kB of
 * a segment and is a 32bit variable.  The values 0 or 1 are valid for the variable Val_u32.
 * If Val_u32 is 1, the bit is set, if Val_u32 the bit is cleared.
 *
 * \param    uint32*  Base_pu32  Base address of memory 32Bit variable (located in 1st 16kB of segment)
 * \param    uint8    Pos_u8    Position which bit shall be set (must be a numeric constant)
 * \param    uint32   Val_u32    Value that the bit at address shall be set to
 * \return   void
 **********************************************************************************************************************
 */
#define SrvB_PutBitAtmcNearU32(Base_u32,Pos_u8,Val_u32) asm volatile("   jnz  %2, L1F_%=                            \n\
                                                                         st.t %0, %1, 0                             \n\
                                                                         j    L2F_%=                                \n\
                                                                       L1F_%=:                                        \n\
                                                                         st.t %0, %1, 1                             \n\
                                                                       L2F_%=:"                                         \
                                                                         :"+m"(((uint8*)&(Base_u32))[((Pos_u8)>>3)]) \
                                                                         :"n"((Pos_u8) % 8),  "d"(Val_u32))


/**
 **********************************************************************************************************************
 * SrvB_SetBitMaskU32
 *
 * \brief Sets bits at the positions, given in the variable Mask_u32.
 *
 * \param   uint32*  Base_pu32  pointer to the variable,  where the bits should be set
 * \param   uint32   Mask_u32   bitmask. defines the bits to set
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitMaskU32_inline(uint32 *Base_pu32, uint32 Mask_u32))
{
    *Base_pu32 |= Mask_u32;
}


/**
 **********************************************************************************************************************
 * SrvB_SetBitMaskU16
 *
 * \brief Sets bits at the positions, given in the variable Mask_u16.
 *
 * \param   uint16*  Base_pu16  pointer to the variable,  where the bits should be set
 * \param   uint16   Mask_u16   bitmask, defines the bits to set
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitMaskU16_inline(uint16 *Base_pu16, uint16 Mask_u16))
{
    *Base_pu16 |= Mask_u16;
}


/**
 **********************************************************************************************************************
 * SrvB_SetBitMaskU8
 *
 * \brief Sets bits at the positions, given in the variable Mask_u8.
 *
 * \param   uint8*  Base_pu8  pointer to the variable, where the bits should be set
 * \param   uint8   Mask_u8   bitmask, defines the bits to set
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_SetBitMaskU8_inline(uint8 *Base_pu8, uint8 Mask_u8))
{
    *Base_pu8 |= Mask_u8;
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitMaskU32
 *
 * \brief Clears bits in the 32-bit variable Base_pu32. Every bit, set in Mask_u32, will be cleared.
 *
 * \param   uint32*  Base_pu32  pointer to the variable, where the bits should be cleared
 * \param   uint32   Mask_u32   bitmask that defines which bits are cleared
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitMaskU32_inline(uint32 *Base_pu32, uint32 Mask_u32))
{
    *Base_pu32 &= ((uint32)(~Mask_u32));
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitMaskU16
 *
 * \brief Clears bits in the 16-bit variable Base_pu16. Every bit, set in Mask_u16, will be cleared.
 *
 * \param   uint16*  Base_pu16  pointer to the variable where the bits should be cleared
 * \param   uint16   Mask_u16   bitmask that defines which bits are cleared
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitMaskU16_inline(uint16 *Base_pu16, uint16 Mask_u16))
{
    *Base_pu16 &= ((uint16)(~Mask_u16));
}


/**
 **********************************************************************************************************************
 * SrvB_ClrBitMaskU8
 *
 * \brief Clears bits in the 8-bit variable Base_pu8. Every bit, set in Mask_u8, will be cleared.
 *
 * \param   uint8*  Base_pu8  Pointer to the variable where the bits should be cleared
 * \param   uint8   Mask_u8   Bitmask that defines which bits are cleared
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_ClrBitMaskU8_inline(uint8 *Base_pu8, uint8 Mask_u8))
{
    *Base_pu8 &= ((uint8)(~Mask_u8));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitMaskU32
 *
 * \brief Defines the bits in the 32-bit variable Base_pu32 according to the variables Mask_u32 and Val_u32.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit set in Mask_u32, will be cleared,
 * case 1: the bit set in Mask_u32, will be set. Note, the given value Val_u32 is not monitored.
 *
 * \param  uint32*  Base_pu32  Pointer to the variable where the bits should be set or cleared
 * \param  uint32   Mask_u32   Bitmask that defines which bits are set or cleared
 * \param  uint32   Val_u32    Defines if bits marked by mask should be cleard or set.
 * \return void
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitMaskU32_inline(uint32 *Base_pu32, uint32 Mask_u32, uint32 Val_u32))
{
    *Base_pu32 = ((Val_u32) ? (*Base_pu32 | Mask_u32 ) : (*Base_pu32 & ((uint32)~(Mask_u32))));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitMaskU16
 *
 * \brief Defines the bits in the 16-bit variable Base_pu32 according to the variables Mask_u16 and Val_u32.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit set in Mask_u16, will be cleared,
 * case 1: the bit set in Mask_u16, will be set. Note, the given value Val_u32 is not monitored.
 *
 * \param   uint16  *Base_u16  Pointer to the variable where the bits should be set or cleared
 * \param   uint16  Mask_u16   Bitmask that defines which bits are set or cleared
 * \param   uint32  Val_u32    Defines if bits marked by mask should be cleard or set.
 * \return  void
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitMaskU16_inline(uint16 *Base_pu16, uint16 Mask_u16, uint32 Val_u32))
{
    *Base_pu16 = ((uint16) ((Val_u32) ? ( *Base_pu16 | Mask_u16 ) : (*Base_pu16 & ((uint16)~(Mask_u16)))));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitMaskU8
 *
 * \brief Defines the bits in the 16-bit variable Base_pu8 according to the variables Mask_u8 and Val_u32.
 * A priori, range [0,1] is valid for Val_u32, case 0: the bit set in Mask_u8, will be cleared,
 * case 1: the bit set in Mask_u8, will be set. Note, the given value Val_u32 is not monitored.
 *
 * \param   uint8*  Base_u8  Pointer to the variable where the bits should be set or cleared
 * \param   uint8   Mask_u8  Bitmask that defines which bits are set or cleared
 * \param   uint32  Val_u32  Defines if bits marked by mask should be cleard or set.
 * \return  void
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitMaskU8_inline(uint8 *Base_pu8, uint8 Mask_u8, uint32 Val_u32))
{
    *Base_pu8 = ((uint8)((Val_u32) ? (*Base_pu8 | Mask_u8) : (*Base_pu8 & ((uint8)~(Mask_u8)))));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitMaskU32_B
 *
 * \brief Tests if all bits corresponding to the mask Mask_u32 are set also in the variable Base_u32.
 *
 * \param   uint32  Base_u32  Base variable which is compared with the mask.
 * \param   uint32  Mask_u32  Bit mask that defines which bits should be set in Base.
 * \return  bool              Returns if all bits set in mask are set in Base, too.
 * \retval          TRUE      All bits, set in Mask_u32 are set in Base_u32.
 * \retval          FALSE     Minimum one bit, set in Mask_u32 fails in Base_u32.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TstBitMaskU32_B_inline(uint32 Base_u32, uint32 Mask_u32))
{
    return (bool)((Base_u32 & Mask_u32) == (Mask_u32));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitMaskU16_B
 *
 * \brief Tests if all bits corresponding to the mask Mask_u16 are set also in the variable Base_u16.
 *
 * \param   uint16  Base_u16  Base variable which is compared with the mask.
 * \param   uint16  Mask_u16  Bit mask that defines which bits should be set in Base.
 * \return  bool              Returns if all bits set in mask are set in Base, too.
 * \retval          TRUE      All bits, set in Mask_u16 are set in Base_u16.
 * \retval          FALSE     Minimum one bit, set in Mask_u16 fails in Base_u16.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TstBitMaskU16_B_inline(uint16 Base_u16, uint16 Mask_u16))
{
    return (bool)((Base_u16 & Mask_u16) == (Mask_u16));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitMaskU8_B
 *
 * \brief Tests if all bits corresponding to the mask Mask_u8 are set also in the variable Base_u8.
 *
 * \param   uint8   Base_u8   Base variable which is compared with the mask.
 * \param   uint8   Mask_u8   Bit mask that defines which bits should be set in Base.
 * \return  bool              Returns if all bits set in mask are set in Base, too.
 * \retval          TRUE      All bits, set in Mask_u8 are set in Base_u8.
 * \retval          FALSE     Minimum one bit, set in Mask_u8 fails in Base_u8.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TstBitMaskU8_B_inline(uint8 Base_u8, uint8 Mask_u8))
{
    return (bool)((Base_u8 & Mask_u8) == (Mask_u8));
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitFieldU32
 *
 * \brief Inside the variable Base_pu32 a welldefined segment of the bitfield Val_u32 will be insertet.
 * Starting from the LSB, the segment of Val_u32 to insert, is described by the length Len_u32.
 * Insertion in Base_pu32 starts at the position Pos_u32.
 *
 * \param   uint32  Base_pu32  pointer to a 32 bit-variable, within the bitfield to be replaced
 * \param   uint32  Pos_u32    position of the first bit to be replaced.
 * \param   uint32  Len_u32    number of bits to insert
 * \param   uint32  Val_u32    variavle within the bitsequence to insert
 * \return  void
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitFieldU32_inline(uint32* Base_pu32, uint32 Pos_u32, uint32 Len_u32,
                                                        uint32 Val_u32))
{
    /* MISRA RULE 43 VIOLATION: False interpretation of the operator ~ */
    *Base_pu32 = (((uint32)( ~ ((MAXUINT32 >> (32ul - Len_u32)) << Pos_u32))) & *Base_pu32 )
                 | (((MAXUINT32 >> (32ul - Len_u32)) & Val_u32) << Pos_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitFieldU16
 *
 * \brief Inside the variable Base_pu16 a welldefined segment of the bitfield Val_u16 will be insertet.
 * Starting from the LSB, the segment of Val_u16 to insert, is described by the length Len_u32.
 * Insertion in Base_pu16 starts at the position Pos_u32.
 *
 * \param   uint16  Base_pu16  pointer to a 32 bit-variable, within the bitfield to be replaced
 * \param   uint32  Pos_u32    position of the first bit to be replaced.
 * \param   uint32  Len_u32    number of bits to insert
 * \param   uint16  Val_u16    variavle within the bitsequence to insert
 * \return  void
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitFieldU16_inline(uint16* Base_pu16, uint32 Pos_u32, uint32 Len_u32,
                                                        uint16 Val_u16))
{
    /* MISRA RULE 37,43 VIOLATION: False interpretation of the operator ~ */
    *Base_pu16 = (((uint16)( ~ ((MAXUINT16 >> (16ul - Len_u32)) << Pos_u32))) & *Base_pu16)
               | ((uint16) ((MAXUINT16 >> (16ul - Len_u32)) & Val_u16) << Pos_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_PutBitFieldU8
 *
 * \brief Inside the variable Base_pu8 a welldefined segment of the bitfield Val_u8 will be insertet.
 * Starting from the LSB, the segment of Val_u8 to insert, is described by the length Len_u32.
 * Insertion in Base_pu8 starts at the position Pos_u32.
 *
 * \param   uint8   Base_pu8   pointer to a 32 bit-variable, within the bitfield to be replaced
 * \param   uint32  Pos_u32    position of the first bit to be replaced.
 * \param   uint32  Len_u32    number of bits to insert
 * \param   uint8   Val_u8     variavle within the bitsequence to insert
 * \return  void
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(void SrvB_PutBitFieldU8_inline(uint8 *Base_pu8, uint32 Pos_u32, uint32 Len_u32, uint8 Val_u8))
{
    /* MISRA RULE 37,43 VIOLATION: False interpretation of the operator ~ */
    *Base_pu8 = (((uint8)( ~ ((MAXUINT8 >> (8ul - Len_u32)) << Pos_u32))) & *Base_pu8)
                | ((uint8) ((MAXUINT8 >> (8ul - Len_u32)) & Val_u8) << Pos_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_GetBitFieldU32
 *
 * \brief Returns a sequence of the variable Base_u32 in form of a bitfield.
 * The bitfield starts at the position Pos_u32 and has the bit-length Len_u32.
 * The sum of (Len_u32 + Pos_u32) has to be smaller than 32. Note, these sum is not monitored.
 *
 * \param   uint32  Base_u32  32-bit variable, where the bit sequence should be read from.
 * \param   uint32  Pos_u32   Position of the first bit to be read out.
 * \param   uint32  Len_u32   Length of the section, which should be read.
 * \return  uint32            Selected bitfield sequence as uint32.
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_GetBitFieldU32_inline(uint32 Base_u32, uint32 Pos_u32, uint32 Len_u32))
{
    return ((Base_u32 >> Pos_u32) & (MAXUINT32 >> (32ul - Len_u32)));
}


/**
 **********************************************************************************************************************
 * SrvB_GetBitFieldU16
 *
 * \brief Returns a sequence of the variable Base_u16 in form of a bitfield.
 * The bitfield starts at the position Pos_u32 and has the bit-length Len_u32.
 * The sum of (Len_u32 + Pos_u32) has to be smaller than 16. Note, these sum is not monitored.
 *
 * \param   uint16  Base_u16  16-bit variable, where the bit sequence should be read from.
 * \param   uint32  Pos_u32   Position of the first bit to be read out.
 * \param   uint32  Len_u32   Length of the section, which should be read.
 * \return  uint16            Selected bitfield sequence as uint16
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_GetBitFieldU16_inline(uint16 Base_u16, uint32 Pos_u32, uint32 Len_u32))
{
    return ((uint16)((Base_u16 >> Pos_u32) & (MAXUINT16 >> (16ul - Len_u32))));
}


/**
 **********************************************************************************************************************
 * SrvB_GetBitFieldU8
 *
 * \brief Returns a sequence of the variable Base_u16 in form of a bitfield.
 * The bitfield starts at the position Pos_u32 and has the bit-length Len_u32.
 * The sum of (Len_u32 + Pos_u32) has to be smaller than 16. Note, these sum is not monitored.
 *
 * \param       Base_u8  8-bit variable, where the bit sequence should be read from.
 * \param       Pos_u32  Position of the first bit to be read out.
 * \param       Len_u32  Length of the section, which should be read.
 * \return      uint8    Selected bitfield sequence as uint8
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_GetBitFieldU8_inline(uint8 Base_u8, uint32 Pos_u32, uint32 Len_u32))
{
    return ((uint8)((Base_u8 >> Pos_u32) & (MAXUINT8 >> (8ul - Len_u32))));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitInMaskU32_B
 *
 * \brief Tests if minimum one  bit corresponding to the mask Mask_u32 is also set in the variable Base_u32.
 *
 * \param       Base_u32  bitfield which should be checked
 * \param       Mask_u32  bitmask, describes the bists to be set
 * \return      Returns
 * \retval      TRUE      at least one Bit of Mask_32 is set in Base_32
 * \retval      FALSE     absolutely no Bit of Mask_32 is set in Base_32
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE( bool SrvB_TstBitInMaskU32_B_inline(uint32 Base_u32, uint32 Mask_u32))
{
    return ((bool)((Base_u32 & Mask_u32) != FALSE));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitInMaskU16_B
 *
 * \brief Tests if minimum one bit corresponding to the mask Mask_u16 is also set in the variable Base_u16.
 *
 * \param       Base_u16  Bitfield which should be checked.
 * \param       Mask_u16  Bitmask that defines which bit should be "1".
 * \return      Returns
 * \retval      TRUE      at least one Bit of Mask_16 is set in Base_16
 * \retval      FALSE     absolutely no Bit of Mask_16 is set in Base_16
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TstBitInMaskU16_B_inline(uint16 Base_u16, uint16 Mask_u16))
{
    return ((bool)((Base_u16 & Mask_u16) != FALSE));
}


/**
 **********************************************************************************************************************
 * SrvB_TstBitInMaskU8_B
 *
 * \brief Tests if minimum one bit corresponding to the mask Mask_u8 is also set in the variable Base_u8.
 *
 * \param       Base_u8  Bitfield which should be checked.
 * \param       mask_u8  Bitmask that defines which bit should be "1".
 * \return      Returns
 * \retval      TRUE      at least one Bit of Mask_8 is set in Base_8
 * \retval      FALSE     absolutely no Bit of Mask_8 is set in Base_8
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TstBitInMaskU8_B_inline(uint8 Base_u8, uint8 Mask_u8))
{
    return ((bool)((Base_u8 & Mask_u8) != FALSE));
}


/**
 **********************************************************************************************************************
 * SrvB_LeadingOnes_U32_S32
 *
 * \brief Count the sequence of ones, starting at the MSB.
 *
 * \param       Base_u32  variable to examined
 * \return      sint32
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE( sint32 SrvB_LeadingOnes_U32_S32_inline(uint32 Base_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 mask_tmp;


    /* start from bit number 31 */
    mask_tmp = (1ul << 31);

    /* initialise the counter */
    res_s32 = 0;

    while (Base_u32 & mask_tmp)
    {
        /* the current bit is set: increment the counter */
        res_s32++;
        /* shift the mask, for the next test */
        mask_tmp = mask_tmp >> 1;
    }

    return (res_s32);

#else

    sint32 res_s32;

    asm volatile ("clo %0,%1" : "=d" (res_s32) : "d" (Base_u32));

    /* MISRA RULE 30 VIOLATION: Return value is set in inline assembler */
    return (res_s32);

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_LeadingZeros_U32_S32
 *
 * \brief Count the number of consecutives zeros from the MSB.
 *
 * \param       base    Base address
 * \return      sint32
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE( sint32 SrvB_LeadingZeros_U32_S32_inline(uint32 Base_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 base_tmp;
    uint32 mask_tmp;


    /* initialisation: complement the base */
    base_tmp = ~((uint32)Base_u32);

    /* start from bit number 31 */
    mask_tmp = (1ul << 31);

    /* initialise the counter */
    res_s32 = 0;

    while (base_tmp & mask_tmp)
    {
        /* the current bit is set: increment the counter */
        res_s32++;

        /* shift the mask, for the next test */
        mask_tmp = mask_tmp >> 1;
    }

    return (res_s32);

#else

    sint32 res_s32;

    asm volatile ("clz %0,%1" : "=d" (res_s32) : "d" (Base_u32));

    /* MISRA RULE 30 VIOLATION: Return value is set in inline assembler */
    return (res_s32);

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_LeadingSigns_S32_S32
 *
 * \brief Count the number of consecutives identical bits from the MSB.
 * Case Base_s32 <0, the consecutive ones are counted, else the consecutive zeros are counted.
 *
 * \param       Base_s32    variable to examine
 * \return      sint32
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE( sint32 SrvB_LeadingSigns_S32_S32_inline(sint32 Base_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 base_tmp;
    uint32 mask_tmp;


    /* get the sign bit, Base_s32 >= 0, sign bit is 0 */
    if (Base_s32 >= 0)
    {
        base_tmp = ~((uint32)Base_s32);
    }
    else
    {
        base_tmp = (uint32)Base_s32;
    }

    /* initialisation */

    res_s32 = 0;

    /* Start from the bit number 30 */
    mask_tmp = (1ul << 30);

    while (base_tmp & mask_tmp)
    {
        res_s32++;
        mask_tmp = mask_tmp >> 1;
    }

    return (res_s32);

#else

    sint32 res_s32;

    asm volatile ("cls %0,%1" : "=d" (res_s32) : "d" (Base_s32));

    /* MISRA RULE 30 VIOLATION: Return value is set in inline assembler */
    return (res_s32);

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 * SrvB_BitPosLSBU32_inline
 *
 * \brief returns the position of the rightmost '1' or '0' in a 32-bit variable Base_u32, with respect to the value
 * of HiLo_b.
 *
 * \param    uint32   X_u32
 * \param    bool     HiLo_b
 * \return   uint8
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_BitPosLSBU32_inline(uint32 Base_u32, bool HiLo_b))
{
    uint32 base_tmp;
    uint8  pos_u8;


    base_tmp = ( (HiLo_b) ? Base_u32 : ((uint32) ~Base_u32) );
    pos_u8   = 0u;

    if((base_tmp & 0xFFFFul) == 0ul)
    {
        base_tmp >>= 16;
        pos_u8 += 16;
    }
    if((base_tmp & 0xFFul) == 0ul)
    {
        base_tmp >>= 8;
        pos_u8 += 8;
    }
    if((base_tmp & 0xFul) == 0ul)
    {
        base_tmp >>= 4;
        pos_u8 += 4;
    }
    if((base_tmp & 0x3ul) == 0ul)
    {
        base_tmp >>= 2;
        pos_u8 += 2;
    }
    if((base_tmp & 0x1ul) == 0ul)
    {
        if((base_tmp & 0x2ul) == 0ul)
        {
            pos_u8 = 0xFF;
        }
        else
        {
            pos_u8++;
        }
    }

    return(pos_u8);
}


/**
 **********************************************************************************************************************
 * SrvB_BitPosMSBU32_inline
 *
 * \brief returns the position of the leftmost '1' or '0' in a 32-bit variable Base_u32, with respect to the value
 * of HiLo_b.
 *
 * \param    uint32   Base_u32
 * \param    bool     HiLo_b
 * \return   uint8
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_BitPosMSBU32_inline(uint32 Base_u32, bool HiLo_b))
{
    uint32 base_tmp;
    uint8  pos_u8;


    base_tmp = ( (HiLo_b) ? Base_u32 : ((uint32) ~Base_u32) );

    pos_u8   = 31u;

    if((base_tmp & 0xFFFF0000ul) == 0ul)
    {
        base_tmp <<= 16;
        pos_u8 -= 16;
    }
    if((base_tmp & 0xFF000000ul) == 0ul)
    {
        base_tmp <<= 8;
        pos_u8 -= 8;
    }
    if((base_tmp & 0xF0000000ul) == 0ul)
    {
        base_tmp <<= 4;
        pos_u8 -= 4;
    }
    if((base_tmp & 0xC0000000ul) == 0ul)
    {
        base_tmp <<= 2;
        pos_u8 -= 2;
    }
    if((base_tmp & 0x80000000ul) == 0ul)
    {
        if((base_tmp & 0x40000000ul) == 0ul)
        {
            pos_u8 = 0xFFul;
        }
        else
        {
            pos_u8--;
        }
    }

    return(pos_u8);
}


/**
 **********************************************************************************************************************
 * SrvB_CopyBitU32
 *
 * \brief Copys a bit form a 32-bit variable to an other
 *
 * Copys a bit from Src[Srcpos] to Dest[Destpos]
 *
 * \param   uint32*  Dest_pu32    Pointer to bitfield where bit should be copied to.
 * \param   uint32   Destpos_u32  Position within the destionation.
 * \param   uint32   Src_u32      Value of the bitfield to copy from.
 * \param   uint32   Srcpos_u32   Position within the Source.
 * \return  void
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_CopyBitU32_inline(uint32 *Dest_pu32, uint32 DestPos_u32, uint32 Src_u32,
                                                    uint32 SrcPos_u32))
{
    SrvB_PutBitU32_inline(Dest_pu32, DestPos_u32, SrvB_GetBitU32_B_inline(Src_u32, SrcPos_u32));
}


/*
 ***********************************************************************************************************************
 *
 *
 * PARITY FUNCTIONS
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_ParityEven_U32_B
 *
 * \brief Gets the parity and returns TRUE if the number of bits set is even, otherwise FALSE
 *
 * \param       uint32      X_u32       Variable to check
 * \return      bool                    Parity
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_ParityEven_U32_B_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 tmp_u32 = X_u32;

    /* initialise with 1 in order to get the Even Parity */
    bool Parity_Bit = 1;

    /* this loop gets the parity and exit as soon as there isn't any ones */
    while (tmp_u32)
    {
        Parity_Bit ^= (bool)(0x1ul & (tmp_u32));
        tmp_u32    = tmp_u32 >> 1;
    }

    return (Parity_Bit);

#else

    uint32 Result_u32;
    asm volatile (  "                                                                       \n\
                    parity   %[result], %[X]                             # calculate 4 per byte parity bits         \n\
                    sh.xor.t %[result], %[result], 24, %[result], 16     # gatering parity bits                     \n\
                    sh.xor.t %[result], %[result],  9, %[result],  1     # gatering parity bits                     \n\
                    xnor.t   %[result], %[result],  1, %[result],  0     # gatering parity bits                     \n\
                    " : [result]  "=d" (Result_u32) : [X] "d" (X_u32) );

    /* MISRA RULE 30 VIOLATION: Result is written in the asm statement */
    return ((bool)Result_u32);

/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_ParityEven_S32_B
 *
 * \brief Gets the parity and returns TRUE if the number of bits set is even, otherwise it returns FALSE
 *
 * \param       sint32      X_s32       Variable to check
 * \return      bool                    Parity
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_ParityEven_S32_B_inline(sint32 X_s32))
{
    return SrvB_ParityEven_U32_B_inline((uint32)X_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_ParityOdd_U32_B
 *
 * \brief Gets the parity and returns TRUE if the number of bits set is odd, otherwise FALSE
 *
 * \param       uint32      X_u32       Variable to check
 * \return      bool                    Parity
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_ParityOdd_U32_B_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

  uint32 tmp_u32     = X_u32;

  /* initialise with 0 in order to get odd Parity */
  bool Parity_Bit     = 0;

  while (tmp_u32)
  {
      Parity_Bit ^= (bool)(0x1ul & (tmp_u32));
      tmp_u32    = tmp_u32 >> 1;
  }

  return (Parity_Bit);

#else

    uint32 Result_u32;
    asm volatile (  "                                                                                             \n\
                    parity   %[result], %[X]                            # calculate 4 per byte parity bits        \n\
                    sh.xor.t %[result], %[result], 24, %[result], 16    # gatering parity bits                    \n\
                    sh.xor.t %[result], %[result],  9, %[result],  1    # gatering parity bits                    \n\
                    xor.t    %[result], %[result],  1, %[result],  0    # gatering parity bits                    \n\
                    " : [result]  "=d" (Result_u32) : [X] "d" (X_u32) );

    /* MISRA RULE 30 VIOLATION: Result is written in the asm statement */
    return ((bool)Result_u32);

/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_ParityOdd_S32_B
 *
 * \brief Gets the parity and returns TRUE if the number of bits set is odd, otherwise FALSE
 *
 * \param       sint32      X_s32       Variable to check
 * \return      bool                    Parity
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_ParityOdd_S32_B_inline(sint32 X_s32))
{
    return SrvB_ParityOdd_U32_B_inline((uint32)X_s32);
}


/* _SRVB_BIT_INL_H */
#endif
