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
 * $Filename__:codegen_srv_bit.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAJ2KOR$
 * $Date______:05.11.2014$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_bit$
 * $Variant___:1.1.1$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.1.1; 0     05.11.2014 DAJ2KOR
 *   Changes in PUTBIT_FIELD_UXX Inline Functions
 * 
 * 1.1.0; 0     18.10.2012 DAJ2KOR
 *   New macros used for U8, U16, U32 implementations (supported in SRV) to 
 *   avoid MISRA warnings for Srv_GetBitField
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_BIT_H
#define _CODEGEN_SRV_BIT_H

/*************************************************************************/
/* Srv_BitPosLSB / MSB                                                   */
/*************************************************************************/

#define SRV_BITPOSLSB_U8_out(x, HiLo)                   SrvB_BitPosLSB(x, HiLo)
#define SRV_BITPOSMSB_U8_out(x, HiLo)                   SrvB_BitPosMSB(x, HiLo)

/*************************************************************************/
/* BitPos_LSB / BitPos_MSB                                               */
/*************************************************************************/

#define BITPOS_LSB_U32_out(base, HiLo)             SrvB_BitPosLSBU32(base, HiLo)
#define BITPOS_MSB_U32_out(base, HiLo)             SrvB_BitPosMSBU32(base, HiLo)

/*************************************************************************/
/* clrBit                                                                */
/*************************************************************************/

#define clrBitU8(position, basis)                       ((uint8) ((basis) & ((uint8) (~(1u<<(position))))))
#define clrBitU16(position, basis)                      ((uint16)((basis) & ((uint16)(~(1u<<(position))))))
#define clrBitU32(position, basis)                      ((uint32)((basis) & ((uint32)(~(1u<<(position))))))
#define clrBitS8(position, basis)                       ((sint8) ((basis) & ((sint8) (~(1u<<(position))))))
#define clrBitS16(position, basis)                      ((sint16)((basis) & ((sint16)(~(1u<<(position))))))
#define clrBitS32(position, basis)                      ((sint32)((basis) & ((sint32)(~(1u<<(position))))))

#define CLRBIT_U8_clrBit(position, basis)               ((uint8) ((basis) & ((uint8) (~(1u<<(position))))))
#define CLRBIT_U16_clrBit(position, basis)              ((uint16)((basis) & ((uint16)(~(1u<<(position))))))
#define CLRBIT_U32_clrBit(position, basis)              ((uint32)((basis) & ((uint32)(~(1u<<(position))))))
#define CLRBIT_S8_clrBit(position, basis)               ((sint8) ((basis) & ((sint8) (~(1u<<(position))))))
#define CLRBIT_S16_clrBit(position, basis)              ((sint16)((basis) & ((sint16)(~(1u<<(position))))))
#define CLRBIT_S32_clrBit(position, basis)              ((sint32)((basis) & ((sint32)(~(1u<<(position))))))

/*************************************************************************/
/* clrBit_signed                                                         */
/*************************************************************************/

#define CLRBIT_SIGNED_S8_clrBit(position, basis)        ((sint8) ((basis) & ((sint8) (~(1u<<(position))))))
#define CLRBIT_SIGNED_S16_clrBit(position, basis)       ((sint16)((basis) & ((sint16)(~(1u<<(position))))))
#define CLRBIT_SIGNED_S32_clrBit(position, basis)       ((sint32)((basis) & ((sint32)(~(1u<<(position))))))

/*************************************************************************/
/* clrBit_unsigned                                                       */
/*************************************************************************/

#define CLRBIT_UNSIGNED_U8_clrBit(position, basis)      ((uint8) ((basis) & ((uint8) (~(1u<<(position))))))
#define CLRBIT_UNSIGNED_U16_clrBit(position, basis)     ((uint16)((basis) & ((uint16)(~(1u<<(position))))))
#define CLRBIT_UNSIGNED_U32_clrBit(position, basis)     ((uint32)((basis) & ((uint32)(~(1u<<(position))))))

/*************************************************************************/
/* Srv_ClrBit                                                            */
/*************************************************************************/

#define SRV_CLRBIT_U8_out(base,pos)                     SrvB_ClrBit(base,pos)
#define SRV_CLRBIT_U16_out(base,pos)                    SrvB_ClrBit(base,pos)
#define SRV_CLRBIT_U32_out(base,pos)                    SrvB_ClrBit(base,pos)
#define SRV_CLRBIT_S8_out(base,pos)                     SrvB_ClrBit(base,pos)
#define SRV_CLRBIT_S16_out(base,pos)                    SrvB_ClrBit(base,pos)
#define SRV_CLRBIT_S32_out(base,pos)                    SrvB_ClrBit(base,pos)

/*************************************************************************/
/* ClrBitA                                                               */
/*************************************************************************/

INLINE_FUNCTION uint8 CLRBITA_U8_clrBitA(uint32 pos, uint8 base);
INLINE_FUNCTION uint8 CLRBITA_U8_clrBitA(uint32 pos, uint8 base)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_ClrBitU8(&tempBase, (pos));
    return (tempBase);
}

INLINE_FUNCTION uint16 CLRBITA_U16_clrBitA(uint32 pos, uint16 base);
INLINE_FUNCTION uint16 CLRBITA_U16_clrBitA(uint32 pos, uint16 base)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_ClrBitU16(&tempBase, (pos));
    return (tempBase);
}

INLINE_FUNCTION uint32 CLRBITA_U32_clrBitA(uint32 pos, uint32 base);
INLINE_FUNCTION uint32 CLRBITA_U32_clrBitA(uint32 pos, uint32 base)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_ClrBitU32(&tempBase, (pos));
    return (tempBase);
}

/*************************************************************************/
/* Srv_ClrBit_ascet                                                      */
/*************************************************************************/

#define SRV_CLRBIT_ASCET_U8_out(base,pos)               SrvB_ClrBit_ascet(base,pos)
#define SRV_CLRBIT_ASCET_U16_out(base,pos)              SrvB_ClrBit_ascet(base,pos)
#define SRV_CLRBIT_ASCET_U32_out(base,pos)              SrvB_ClrBit_ascet(base,pos)
#define SRV_CLRBIT_ASCET_S8_out(base,pos)               SrvB_ClrBit_ascet(base,pos)
#define SRV_CLRBIT_ASCET_S16_out(base,pos)              SrvB_ClrBit_ascet(base,pos)
#define SRV_CLRBIT_ASCET_S32_out(base,pos)              SrvB_ClrBit_ascet(base,pos)

/*************************************************************************/
/* Srv_ClrBitMask                                                        */
/*************************************************************************/

#define SRV_CLRBITMASK_U8_out(base,mask)                SrvB_ClrBitMask(base,mask)
#define SRV_CLRBITMASK_U16_out(base,mask)               SrvB_ClrBitMask(base,mask)
#define SRV_CLRBITMASK_U32_out(base,mask)               SrvB_ClrBitMask(base,mask)
#define SRV_CLRBITMASK_S8_out(base,mask)                SrvB_ClrBitMask(base,mask)
#define SRV_CLRBITMASK_S16_out(base,mask)               SrvB_ClrBitMask(base,mask)
#define SRV_CLRBITMASK_S32_out(base,mask)               SrvB_ClrBitMask(base,mask)

/*************************************************************************/
/* Srv_ClrBitMask_ascet                                                  */
/*************************************************************************/

#define SRV_CLRBITMASK_ASCET_U8_out(base,mask)          SrvB_ClrBitMask_ascet(base,mask)
#define SRV_CLRBITMASK_ASCET_U16_out(base,mask)         SrvB_ClrBitMask_ascet(base,mask)
#define SRV_CLRBITMASK_ASCET_U32_out(base,mask)         SrvB_ClrBitMask_ascet(base,mask)
#define SRV_CLRBITMASK_ASCET_S8_out(base,mask)          SrvB_ClrBitMask_ascet(base,mask)
#define SRV_CLRBITMASK_ASCET_S16_out(base,mask)         SrvB_ClrBitMask_ascet(base,mask)
#define SRV_CLRBITMASK_ASCET_S32_out(base,mask)         SrvB_ClrBitMask_ascet(base,mask)

/*************************************************************************/
/* ClrBit_Mask                                                           */
/*************************************************************************/

INLINE_FUNCTION uint8 CLRBIT_MASK_U8_out(uint8 base, uint8 mask);
INLINE_FUNCTION uint8 CLRBIT_MASK_U8_out(uint8 base, uint8 mask)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_ClrBitMaskU8(&tempBase, mask);
    return (tempBase);
}

INLINE_FUNCTION uint16 CLRBIT_MASK_U16_out(uint16 base, uint16 mask);
INLINE_FUNCTION uint16 CLRBIT_MASK_U16_out(uint16 base, uint16 mask)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_ClrBitMaskU16(&tempBase, mask);
    return (tempBase);
}

INLINE_FUNCTION uint32 CLRBIT_MASK_U32_out(uint32 base, uint32 mask);
INLINE_FUNCTION uint32 CLRBIT_MASK_U32_out(uint32 base, uint32 mask)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_ClrBitMaskU32(&tempBase, mask);
    return (tempBase);
}

/*************************************************************************/
/* setBit                                                                */
/*************************************************************************/

#define setBitU8(position, basis)                       ((uint8) ((basis) | ((uint8) (1u<<(position)))))
#define setBitU16(position, basis)                      ((uint16)((basis) | ((uint16)(1u<<(position)))))
#define setBitU32(position, basis)                      ((uint32)((basis) | ((uint32)(1u<<(position)))))
#define setBitS8(position, basis)                       ((sint8) ((basis) | ((sint8) (1u<<(position)))))
#define setBitS16(position, basis)                      ((sint16)((basis) | ((sint16)(1u<<(position)))))
#define setBitS32(position, basis)                      ((sint32)((basis) | ((sint32)(1u<<(position)))))

#define SETBIT_U8_setBit(position, basis)               ((uint8) ((basis) | ((uint8) (1u<<(position)))))
#define SETBIT_U16_setBit(position, basis)              ((uint16)((basis) | ((uint16)(1u<<(position)))))
#define SETBIT_U32_setBit(position, basis)              ((uint32)((basis) | ((uint32)(1u<<(position)))))
#define SETBIT_S8_setBit(position, basis)               ((sint8) ((basis) | ((sint8) (1u<<(position)))))
#define SETBIT_S16_setBit(position, basis)              ((sint16)((basis) | ((sint16)(1u<<(position)))))
#define SETBIT_S32_setBit(position, basis)              ((sint32)((basis) | ((sint32)(1u<<(position)))))

/*************************************************************************/
/* setBit_signed                                                         */
/*************************************************************************/

#define SETBIT_SIGNED_S8_setBit(position, basis)        ((sint8) ((basis) | ((sint8) (1u<<(position)))))
#define SETBIT_SIGNED_S16_setBit(position, basis)       ((sint16)((basis) | ((sint16)(1u<<(position)))))
#define SETBIT_SIGNED_S32_setBit(position, basis)       ((sint32)((basis) | ((sint32)(1u<<(position)))))

/*************************************************************************/
/* setBit_unsigned                                                       */
/*************************************************************************/

#define SETBIT_UNSIGNED_U8_setBit(position, basis)      ((uint8) ((basis) | ((uint8) (1u<<(position)))))
#define SETBIT_UNSIGNED_U16_setBit(position, basis)     ((uint16)((basis) | ((uint16)(1u<<(position)))))
#define SETBIT_UNSIGNED_U32_setBit(position, basis)     ((uint32)((basis) | ((uint32)(1u<<(position)))))

/*************************************************************************/
/* Srv_SetBit                                                            */
/*************************************************************************/

#define SRV_SETBIT_U8_out(base,pos)                     SrvB_SetBit(base,pos)
#define SRV_SETBIT_U16_out(base,pos)                    SrvB_SetBit(base,pos)
#define SRV_SETBIT_U32_out(base,pos)                    SrvB_SetBit(base,pos)
#define SRV_SETBIT_S8_out(base,pos)                     SrvB_SetBit(base,pos)
#define SRV_SETBIT_S16_out(base,pos)                    SrvB_SetBit(base,pos)
#define SRV_SETBIT_S32_out(base,pos)                    SrvB_SetBit(base,pos)

/*************************************************************************/
/* Srv_SetBit_ascet                                                      */
/*************************************************************************/

#define SRV_SETBIT_ASCET_U8_out(base,pos)               SrvB_SetBit_ascet(base,pos)
#define SRV_SETBIT_ASCET_U16_out(base,pos)              SrvB_SetBit_ascet(base,pos)
#define SRV_SETBIT_ASCET_U32_out(base,pos)              SrvB_SetBit_ascet(base,pos)
#define SRV_SETBIT_ASCET_S8_out(base,pos)               SrvB_SetBit_ascet(base,pos)
#define SRV_SETBIT_ASCET_S16_out(base,pos)              SrvB_SetBit_ascet(base,pos)
#define SRV_SETBIT_ASCET_S32_out(base,pos)              SrvB_SetBit_ascet(base,pos)

INLINE_FUNCTION uint8 SETBITA_U8_setBitA(uint32 pos, uint8 base);
INLINE_FUNCTION uint8 SETBITA_U8_setBitA(uint32 pos, uint8 base)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_SetBitU8(&tempBase, (pos));
    return (tempBase);
}

/*************************************************************************/
/* SetBitA                                                               */
/*************************************************************************/

INLINE_FUNCTION uint16 SETBITA_U16_setBitA(uint32 pos, uint16 base);
INLINE_FUNCTION uint16 SETBITA_U16_setBitA(uint32 pos, uint16 base)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_SetBitU16(&tempBase, (pos));
    return (tempBase);
}

INLINE_FUNCTION uint32 SETBITA_U32_setBitA(uint32 pos, uint32 base);
INLINE_FUNCTION uint32 SETBITA_U32_setBitA(uint32 pos, uint32 base)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_SetBitU32(&tempBase, (pos));
    return (tempBase);
}

/*************************************************************************/
/* Srv_SetBitMask                                                        */
/*************************************************************************/

#define SRV_SETBITMASK_U8_out(base,mask)                SrvB_SetBitMask(base,mask)
#define SRV_SETBITMASK_U16_out(base,mask)               SrvB_SetBitMask(base,mask)
#define SRV_SETBITMASK_U32_out(base,mask)               SrvB_SetBitMask(base,mask)
#define SRV_SETBITMASK_S8_out(base,mask)                SrvB_SetBitMask(base,mask)
#define SRV_SETBITMASK_S16_out(base,mask)               SrvB_SetBitMask(base,mask)
#define SRV_SETBITMASK_S32_out(base,mask)               SrvB_SetBitMask(base,mask)

/*************************************************************************/
/* Srv_SetBitMask_ascet                                                  */
/*************************************************************************/

#define SRV_SETBITMASK_ASCET_U8_out(base,mask)          SrvB_SetBitMask_ascet(base,mask)
#define SRV_SETBITMASK_ASCET_U16_out(base,mask)         SrvB_SetBitMask_ascet(base,mask)
#define SRV_SETBITMASK_ASCET_U32_out(base,mask)         SrvB_SetBitMask_ascet(base,mask)
#define SRV_SETBITMASK_ASCET_S8_out(base,mask)          SrvB_SetBitMask_ascet(base,mask)
#define SRV_SETBITMASK_ASCET_S16_out(base,mask)         SrvB_SetBitMask_ascet(base,mask)
#define SRV_SETBITMASK_ASCET_S32_out(base,mask)         SrvB_SetBitMask_ascet(base,mask)

/*************************************************************************/
/* Srv_SetBitMask                                                        */
/*************************************************************************/

INLINE_FUNCTION uint8 SETBIT_MASK_U8_out(uint8 base, uint8 mask);
INLINE_FUNCTION uint8 SETBIT_MASK_U8_out(uint8 base, uint8 mask)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_SetBitMaskU8(&tempBase, mask);
    return (tempBase);
}

INLINE_FUNCTION uint16 SETBIT_MASK_U16_out(uint16 base, uint16 mask);
INLINE_FUNCTION uint16 SETBIT_MASK_U16_out(uint16 base, uint16 mask)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_SetBitMaskU16(&tempBase, mask);
    return (tempBase);
}

INLINE_FUNCTION uint32 SETBIT_MASK_U32_out(uint32 base, uint32 mask);
INLINE_FUNCTION uint32 SETBIT_MASK_U32_out(uint32 base, uint32 mask)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_SetBitMaskU32(&tempBase, mask);
    return (tempBase);
}

/*************************************************************************/
/* Srv_SetBitField                                                       */
/*************************************************************************/

#define SRV_SETBITFIELD_U8_out(base,pos,len,val)    SrvB_SetBitField(base,pos,len,val)
#define SRV_SETBITFIELD_U16_out(base,pos,len,val)   SrvB_SetBitField(base,pos,len,val)
#define SRV_SETBITFIELD_U32_out(base,pos,len,val)   SrvB_SetBitField(base,pos,len,val)
#define SRV_SETBITFIELD_S8_out(base,pos,len,val)    SrvB_SetBitField(base,pos,len,val)
#define SRV_SETBITFIELD_S16_out(base,pos,len,val)   SrvB_SetBitField(base,pos,len,val)
#define SRV_SETBITFIELD_S32_out(base,pos,len,val)   SrvB_SetBitField(base,pos,len,val)

/*************************************************************************/
/* Srv_SetBitField_ascet                                                 */
/*************************************************************************/

#define SRV_SETBITFIELD_ASCET_U8_out(base,pos,len,val)  SrvB_SetBitField_ascet(base,pos,len,val)
#define SRV_SETBITFIELD_ASCET_U16_out(base,pos,len,val) SrvB_SetBitField_ascet(base,pos,len,val)
#define SRV_SETBITFIELD_ASCET_U32_out(base,pos,len,val) SrvB_SetBitField_ascet(base,pos,len,val)
#define SRV_SETBITFIELD_ASCET_S8_out(base,pos,len,val)  SrvB_SetBitField_ascet(base,pos,len,val)
#define SRV_SETBITFIELD_ASCET_S16_out(base,pos,len,val) SrvB_SetBitField_ascet(base,pos,len,val)
#define SRV_SETBITFIELD_ASCET_S32_out(base,pos,len,val) SrvB_SetBitField_ascet(base,pos,len,val)

/*************************************************************************/
/* getBit                                                                */
/*************************************************************************/

#define getBitU8(position, basis)                       ((bool) (((uint8) ((basis)>>(position))) & ((uint8) (1u))))
#define getBitU16(position, basis)                      ((bool)(((uint16)((basis)>>(position))) & ((uint16)(1u))))
#define getBitU32(position, basis)                      ((bool)(((uint32)((basis)>>(position))) & ((uint32)(1u))))
#define getBitS8(position, basis)                       ((bool) (((sint8) ((basis)>>(position))) & ((sint8) (1u))))
#define getBitS16(position, basis)                      ((bool)(((sint16)((basis)>>(position))) & ((sint16)(1u))))
#define getBitS32(position, basis)                      ((bool)(((sint32)((basis)>>(position))) & ((sint32)(1u))))

#define GETBIT_U8_getBit(position, basis)               ((bool) (((uint8) ((basis)>>(position))) & ((uint8) (1u))))
#define GETBIT_U16_getBit(position, basis)              ((bool)(((uint16)((basis)>>(position))) & ((uint16)(1u))))
#define GETBIT_U32_getBit(position, basis)              ((bool)(((uint32)((basis)>>(position))) & ((uint32)(1u))))
#define GETBIT_S8_getBit(position, basis)               ((bool) (((sint8) ((basis)>>(position))) & ((sint8) (1u))))
#define GETBIT_S16_getBit(position, basis)              ((bool)(((sint16)((basis)>>(position))) & ((sint16)(1u))))
#define GETBIT_S32_getBit(position, basis)              ((bool)(((sint32)((basis)>>(position))) & ((sint32)(1u))))

/*************************************************************************/
/* getBit_signed                                                         */
/*************************************************************************/

#define GETBIT_SIGNED_S8_getBit(position, basis)        ((bool) (((sint8) ((basis)>>(position))) & ((sint8) (1u))))
#define GETBIT_SIGNED_S16_getBit(position, basis)       ((bool)(((sint16)((basis)>>(position))) & ((sint16)(1u))))
#define GETBIT_SIGNED_S32_getBit(position, basis)       ((bool)(((sint32)((basis)>>(position))) & ((sint32)(1u))))

/*************************************************************************/
/* getBit_unsigned                                                       */
/*************************************************************************/

#define GETBIT_UNSIGNED_U8_getBit(position, basis)      ((bool) (((uint8) ((basis)>>(position))) & ((uint8) (1u))))
#define GETBIT_UNSIGNED_U16_getBit(position, basis)     ((bool)(((uint16)((basis)>>(position))) & ((uint16)(1u))))
#define GETBIT_UNSIGNED_U32_getBit(position, basis)     ((bool)(((uint32)((basis)>>(position))) & ((uint32)(1u))))

/*************************************************************************/
/* Srv_GetBit                                                            */
/*************************************************************************/

#define SRV_GETBIT_U8_out(base,pos)                     SrvB_GetBit(base,pos)
#define SRV_GETBIT_U16_out(base,pos)                    SrvB_GetBit(base,pos)
#define SRV_GETBIT_U32_out(base,pos)                    SrvB_GetBit(base,pos)
#define SRV_GETBIT_S8_out(base,pos)                     SrvB_GetBit(base,pos)
#define SRV_GETBIT_S16_out(base,pos)                    SrvB_GetBit(base,pos)
#define SRV_GETBIT_S32_out(base,pos)                    SrvB_GetBit(base,pos)

/*************************************************************************/
/* Srv_GetBit_ascet                                                      */
/*************************************************************************/
#define SRV_GETBITFIELD_U8_out(base,pos,len)        	SrvB_GetBitFieldU8(base,(uint32)pos,(uint32)len)
#define SRV_GETBITFIELD_U16_out(base,pos,len)       	SrvB_GetBitFieldU16(base,(uint32)pos,(uint32)len)
#define SRV_GETBITFIELD_U32_out(base,pos,len)       	SrvB_GetBitFieldU32(base,(uint32)pos,(uint32)len)
#define SRV_GETBITFIELD_S8_out(base,pos,len)            SrvB_GetBitField(base,pos,len)
#define SRV_GETBITFIELD_S16_out(base,pos,len)           SrvB_GetBitField(base,pos,len)
#define SRV_GETBITFIELD_S32_out(base,pos,len)           SrvB_GetBitField(base,pos,len)

/*************************************************************************/
/* GetBitA                                                               */
/*************************************************************************/

#define GETBITA_U8_getBitA(pos, base)                   SrvB_GetBitU8_B((base),(pos))
#define GETBITA_U16_getBitA(pos, base)                  SrvB_GetBitU16_B((base),(pos))
#define GETBITA_U32_getBitA(pos, base)                  SrvB_GetBitU32_B((base),(pos))

/*************************************************************************/
/* GetBitField                                                           */
/*************************************************************************/

#define GETBIT_FIELD_U8_out(base, pos, length)          SrvB_GetBitFieldU8(base, pos, length)
#define GETBIT_FIELD_U16_out(base, pos, length)         SrvB_GetBitFieldU16(base, pos, length)
#define GETBIT_FIELD_U32_out(base, pos, length)         SrvB_GetBitFieldU32(base, pos, length)

/*************************************************************************/
/* putBit                                                                */
/*************************************************************************/

#define putBitU8(position, basis, val)                                        \
        ((uint8) ((val) ? SETBIT_U8_setBit(position, basis) : CLRBIT_U8_clrBit(position, basis)))
#define putBitU16(position, basis, val)                                       \
        ((uint16)((val) ? SETBIT_U16_setBit(position, basis) : CLRBIT_U16_clrBit(position, basis)))
#define putBitU32(position, basis, val)                                       \
        ((uint32)((val) ? SETBIT_U32_setBit(position, basis) : CLRBIT_U32_clrBit(position, basis)))
#define putBitS8(position, basis, val)                                        \
        ((sint8) ((val) ? SETBIT_S8_setBit(position, basis) : CLRBIT_S8_clrBit(position, basis)))
#define putBitS16(position, basis, val)                                       \
        ((sint16)((val) ? SETBIT_S16_setBit(position, basis) : CLRBIT_S16_clrBit(position, basis)))
#define putBitS32(position, basis, val)                                       \
        ((sint32)((val) ? SETBIT_S32_setBit(position, basis) : CLRBIT_S32_clrBit(position, basis)))

#define PUTBIT_U8_putBit(position, basis, val)                                \
        ((uint8) ((val) ? SETBIT_U8_setBit(position, basis) : CLRBIT_U8_clrBit(position, basis)))
#define PUTBIT_U16_putBit(position, basis, val)                               \
        ((uint16)((val) ? SETBIT_U16_setBit(position, basis) : CLRBIT_U16_clrBit(position, basis)))
#define PUTBIT_U32_putBit(position, basis, val)                               \
        ((uint32)((val) ? SETBIT_U32_setBit(position, basis) : CLRBIT_U32_clrBit(position, basis)))
#define PUTBIT_S8_putBit(position, basis, val)                                \
        ((sint8) ((val) ? SETBIT_S8_setBit(position, basis) : CLRBIT_S8_clrBit(position, basis)))
#define PUTBIT_S16_putBit(position, basis, val)                               \
        ((sint16)((val) ? SETBIT_S16_setBit(position, basis) : CLRBIT_S16_clrBit(position, basis)))
#define PUTBIT_S32_putBit(position, basis, val)                               \
        ((sint32)((val) ? SETBIT_S32_setBit(position, basis) : CLRBIT_S32_clrBit(position, basis)))

/*************************************************************************/
/* putBit_signed                                                         */
/*************************************************************************/

#define PUTBIT_SIGNED_S8_putBit(position, basis, val)                         \
        ((sint8) ((val) ? SETBIT_S8_setBit(position, basis) : CLRBIT_S8_clrBit(position, basis)))
#define PUTBIT_SIGNED_S16_putBit(position, basis, val)                        \
        ((sint16)((val) ? SETBIT_S16_setBit(position, basis) : CLRBIT_S16_clrBit(position, basis)))
#define PUTBIT_SIGNED_S32_putBit(position, basis, val)                        \
        ((sint32)((val) ? SETBIT_S32_setBit(position, basis) : CLRBIT_S32_clrBit(position, basis)))

/*************************************************************************/
/* putBit_unsigned                                                       */
/*************************************************************************/

#define PUTBIT_UNSIGNED_U8_putBit(position, basis, val)                       \
        ((uint8) ((val) ? SETBIT_U8_setBit(position, basis) : CLRBIT_U8_clrBit(position, basis)))
#define PUTBIT_UNSIGNED_U16_putBit(position, basis, val)                      \
        ((uint16)((val) ? SETBIT_U16_setBit(position, basis) : CLRBIT_U16_clrBit(position, basis)))
#define PUTBIT_UNSIGNED_U32_putBit(position, basis, val)                      \
        ((uint32)((val) ? SETBIT_U32_setBit(position, basis) : CLRBIT_U32_clrBit(position, basis)))

/*************************************************************************/
/* Srv_PutBit                                                            */
/*************************************************************************/

#define SRV_PUTBIT_U8_out(base,pos,val)                 ((uint8) SrvB_PutBit(((base)),((pos)),((val))))
#define SRV_PUTBIT_U16_out(base,pos,val)                ((uint16)SrvB_PutBit(((base)),((pos)),((val))))
#define SRV_PUTBIT_U32_out(base,pos,val)                ((uint32)SrvB_PutBit(((base)),((pos)),((val))))
#define SRV_PUTBIT_S8_out(base,pos,val)                 ((sint8) SrvB_PutBit(base,pos,val))
#define SRV_PUTBIT_S16_out(base,pos,val)                ((sint16)SrvB_PutBit(base,pos,val))
#define SRV_PUTBIT_S32_out(base,pos,val)                ((sint32)SrvB_PutBit(base,pos,val))

/*************************************************************************/
/* Srv_PutBit_ascet                                                      */
/*************************************************************************/

#define SRV_PUTBIT_ASCET_U8_out(base,pos,val)           ((uint8) SrvB_PutBit_ascet(base,pos,val))
#define SRV_PUTBIT_ASCET_U16_out(base,pos,val)          ((uint16)SrvB_PutBit_ascet(base,pos,val))
#define SRV_PUTBIT_ASCET_U32_out(base,pos,val)          ((uint32)SrvB_PutBit_ascet(base,pos,val))
#define SRV_PUTBIT_ASCET_S8_out(base,pos,val)           ((sint8) SrvB_PutBit_ascet(base,pos,val))
#define SRV_PUTBIT_ASCET_S16_out(base,pos,val)          ((sint16)SrvB_PutBit_ascet(base,pos,val))
#define SRV_PUTBIT_ASCET_S32_out(base,pos,val)          ((sint32)SrvB_PutBit_ascet(base,pos,val))

/*************************************************************************/
/* PutBitA                                                               */
/*************************************************************************/

INLINE_FUNCTION uint8 PUTBITA_U8_putBitA(uint32 pos, uint8 base, uint32 bitValue);
INLINE_FUNCTION uint8 PUTBITA_U8_putBitA(uint32 pos, uint8 base, uint32 bitValue)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_PutBitU8(&tempBase, (pos), (bitValue));
    return (tempBase);
}

INLINE_FUNCTION uint16 PUTBITA_U16_putBitA(uint32 pos, uint16 base, uint32 bitValue);
INLINE_FUNCTION uint16 PUTBITA_U16_putBitA(uint32 pos, uint16 base, uint32 bitValue)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_PutBitU16(&tempBase, (pos), (bitValue));
    return (tempBase);
}

INLINE_FUNCTION uint32 PUTBITA_U32_putBitA(uint32 pos, uint32 base, uint32 bitValue);
INLINE_FUNCTION uint32 PUTBITA_U32_putBitA(uint32 pos, uint32 base, uint32 bitValue)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_PutBitU32(&tempBase, (pos), (bitValue));
    return (tempBase);
}

/*************************************************************************/
/* PutBitField                                                           */
/*************************************************************************/

INLINE_FUNCTION uint8 PUTBIT_FIELD_U8_out(uint8 base, uint32 pos, uint32 length, uint8 val);
INLINE_FUNCTION uint8 PUTBIT_FIELD_U8_out(uint8 base, uint32 pos, uint32 length, uint8 val)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_PutBitFieldU8(&tempBase, (pos), (length), (val));
    return (tempBase);
}

INLINE_FUNCTION uint16 PUTBIT_FIELD_U16_out(uint16 base, uint32 pos, uint32 length, uint16 val);
INLINE_FUNCTION uint16 PUTBIT_FIELD_U16_out(uint16 base, uint32 pos, uint32 length, uint16 val)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_PutBitFieldU16(&tempBase, (pos), (length), (val));
    return (tempBase);
}

INLINE_FUNCTION uint32 PUTBIT_FIELD_U32_out(uint32 base, uint32 pos, uint32 length, uint32 val);
INLINE_FUNCTION uint32 PUTBIT_FIELD_U32_out(uint32 base, uint32 pos, uint32 length, uint32 val)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_PutBitFieldU32(&tempBase, (pos), (length), (val));
    return (tempBase);
}

/*************************************************************************/
/* PutBit_Mask                                                           */
/*************************************************************************/

INLINE_FUNCTION uint8 PUTBIT_MASK_U8_out(uint8 base, uint8 mask, uint32 val);
INLINE_FUNCTION uint8 PUTBIT_MASK_U8_out(uint8 base, uint8 mask, uint32 val)
{
    uint8 tempBase;
    tempBase = base;
    SrvB_PutBitMaskU8(&tempBase, mask, val);
    return (tempBase);
}

INLINE_FUNCTION uint16 PUTBIT_MASK_U16_out(uint16 base, uint16 mask, uint32 val);
INLINE_FUNCTION uint16 PUTBIT_MASK_U16_out(uint16 base, uint16 mask, uint32 val)
{
    uint16 tempBase;
    tempBase = base;
    SrvB_PutBitMaskU16(&tempBase, mask, val);
    return (tempBase);
}

INLINE_FUNCTION uint32 PUTBIT_MASK_U32_out(uint32 base, uint32 mask, uint32 val);
INLINE_FUNCTION uint32 PUTBIT_MASK_U32_out(uint32 base, uint32 mask, uint32 val)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_PutBitMaskU32(&tempBase, mask, val);
    return (tempBase);
}

/*************************************************************************/
/* Srv_TstBitInMask                                                      */
/*************************************************************************/

#define SRV_TSTBITINMASK_U8_out(base,mask)              SrvB_TstBitInMask(base,mask)
#define SRV_TSTBITINMASK_U16_out(base,mask)             SrvB_TstBitInMask(base,mask)
#define SRV_TSTBITINMASK_U32_out(base,mask)             SrvB_TstBitInMask(base,mask)
#define SRV_TSTBITINMASK_S8_out(base,mask)              SrvB_TstBitInMask(base,mask)
#define SRV_TSTBITINMASK_S16_out(base,mask)             SrvB_TstBitInMask(base,mask)
#define SRV_TSTBITINMASK_S32_out(base,mask)             SrvB_TstBitInMask(base,mask)

/*************************************************************************/
/* TstBitIn_Mask                                                         */
/*************************************************************************/

#define TSTBITIN_MASK_U8_out(base, mask)                SrvB_TstBitInMaskU8_B(base, mask)
#define TSTBITIN_MASK_U16_out(base, mask)               SrvB_TstBitInMaskU16_B(base, mask)
#define TSTBITIN_MASK_U32_out(base, mask)               SrvB_TstBitInMaskU32_B(base, mask)

/*************************************************************************/
/* Srv_TstBitMask                                                        */
/*************************************************************************/

#define SRV_TSTBITMASK_U8_out(base,mask)                SrvB_TstBitMask(base,mask)
#define SRV_TSTBITMASK_U16_out(base,mask)               SrvB_TstBitMask(base,mask)
#define SRV_TSTBITMASK_U32_out(base,mask)               SrvB_TstBitMask(base,mask)
#define SRV_TSTBITMASK_S8_out(base,mask)                SrvB_TstBitMask(base,mask)
#define SRV_TSTBITMASK_S16_out(base,mask)               SrvB_TstBitMask(base,mask)
#define SRV_TSTBITMASK_S32_out(base,mask)               SrvB_TstBitMask(base,mask)

/*************************************************************************/
/* TstBit_Mask                                                           */
/*************************************************************************/

#define TSTBIT_MASK_U8_out(base, mask)                  SrvB_TstBitMaskU8_B(base, mask)
#define TSTBIT_MASK_U16_out(base, mask)                 SrvB_TstBitMaskU16_B(base, mask)
#define TSTBIT_MASK_U32_out(base, mask)                 SrvB_TstBitMaskU32_B(base, mask)

/*************************************************************************/
/* bitComplement                                                         */
/*************************************************************************/

#define BITCOMPLEMENT_U8_calc(x)                        ((uint8) (~((uint32)(x))))
#define BITCOMPLEMENT_U16_calc(x)                       ((uint16)(~((uint32)(x))))
#define BITCOMPLEMENT_U32_calc(x)                       ((uint32)(~((uint32)(x))))
#define BITCOMPLEMENT_S8_calc(x)                        ((sint8) (~((sint8) (x))))
#define BITCOMPLEMENT_S16_calc(x)                       ((sint16)(~((sint16)(x))))
#define BITCOMPLEMENT_S32_calc(x)                       ((sint32)(~((sint32)(x))))

/*************************************************************************/
/* bitComplement_signed                                                  */
/*************************************************************************/

#define BITCOMPLEMENT_SIGNED_S8_calc(x)                 ((sint8) (~((sint8) (x))))
#define BITCOMPLEMENT_SIGNED_S16_calc(x)                ((sint16)(~((sint16)(x))))
#define BITCOMPLEMENT_SIGNED_S32_calc(x)                ((sint32)(~((sint32)(x))))

/*************************************************************************/
/* bitComplement_unsigned                                                */
/*************************************************************************/

#define BITCOMPLEMENT_UNSIGNED_U8_calc(x)               ((uint8) (~((uint8) (x))))
#define BITCOMPLEMENT_UNSIGNED_U16_calc(x)              ((uint16)(~((uint16)(x))))
#define BITCOMPLEMENT_UNSIGNED_U32_calc(x)              ((uint32)(~((uint32)(x))))

/*************************************************************************/
/* Srv_BitCpl                                                            */
/*************************************************************************/

#define SRV_BITCPL_S32_out(x)                           ( ~(x) )
#define SRV_BITCPL_S16_out(x)                           ( ~(x) )
#define SRV_BITCPL_S8_out(x)                            ( ~(x) )
#define SRV_BITCPL_U32_out(x)                           ( ~(x) )
#define SRV_BITCPL_U16_out(x)                           ( ~(x) )
#define SRV_BITCPL_U8_out(x)                            ( ~(x) )

/*************************************************************************/
/* Bit_Complement                                                        */
/*************************************************************************/

#define BIT_COMPLEMENT_U8_calc(in)                      (~(in))
#define BIT_COMPLEMENT_U16_calc(in)                     (~(in))
#define BIT_COMPLEMENT_U32_calc(in)                     (~(in))

/*************************************************************************/
/* bitwiseAND                                                            */
/*************************************************************************/

#define BITWISEAND_U8_calc(x, y)                        ((uint8) BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_U16_calc(x, y)                       ((uint16)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_U32_calc(x, y)                       ((uint32)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_S8_calc(x, y)                        ((sint8) BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_S16_calc(x, y)                       ((sint16)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_S32_calc(x, y)                       ((sint32)BITWISEAND_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseAND_signed                                                     */
/*************************************************************************/

#define BITWISEAND_SIGNED_S8_calc(x, y)                 ((sint8) BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_SIGNED_S16_calc(x, y)                ((sint16)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_SIGNED_S32_calc(x, y)                ((sint32)BITWISEAND_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseAND_unsigned                                                   */
/*************************************************************************/

#define BITWISEAND_UNSIGNED_U8_calc(x, y)               ((uint8) BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_UNSIGNED_U16_calc(x, y)              ((uint16)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_UNSIGNED_U32_calc(x, y)              ((uint32)BITWISEAND_IMPL_calc(x, y))
#define BITWISEAND_IMPL_calc(x, y)                      ((x)&(y))

/*************************************************************************/
/* Srv_BitwiseAnd                                                        */
/*************************************************************************/

#define SRV_BITWISEAND_S32_out(x,y)                     ( (x) & (y) )
#define SRV_BITWISEAND_S16_out(x,y)                     ( (x) & (y) )
#define SRV_BITWISEAND_S8_out(x,y)                      ( (x) & (y) )
#define SRV_BITWISEAND_U32_out(x,y)                     ( (x) & (y) )
#define SRV_BITWISEAND_U16_out(x,y)                     ( (x) & (y) )
#define SRV_BITWISEAND_U8_out(x,y)                      ( (x) & (y) )

/*************************************************************************/
/* Bitwise_AND                                                           */
/*************************************************************************/

#define BITWISE_AND_U8_calc(input1, input2)             ((input1) & (input2))
#define BITWISE_AND_U16_calc(input1, input2)            ((input1) & (input2))
#define BITWISE_AND_U32_calc(input1, input2)            ((input1) & (input2))

/*************************************************************************/
/* bitwiseOR                                                             */
/*************************************************************************/

#define BITWISEOR_U8_calc(x, y)                         ((uint8) BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_U16_calc(x, y)                        ((uint16)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_U32_calc(x, y)                        ((uint32)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_S8_calc(x, y)                         ((sint8) BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_S16_calc(x, y)                        ((sint16)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_S32_calc(x, y)                        ((sint32)BITWISEOR_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseOR_signed                                                      */
/*************************************************************************/

#define BITWISEOR_SIGNED_S8_calc(x, y)                  ((sint8) BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_SIGNED_S16_calc(x, y)                 ((sint16)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_SIGNED_S32_calc(x, y)                 ((sint32)BITWISEOR_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseOR_unsigned                                                    */
/*************************************************************************/

#define BITWISEOR_UNSIGNED_U8_calc(x, y)                ((uint8)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_UNSIGNED_U16_calc(x, y)               ((uint16)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_UNSIGNED_U32_calc(x, y)               ((uint32)BITWISEOR_IMPL_calc(x, y))
#define BITWISEOR_IMPL_calc(x, y)                       ((x)|(y))

/*************************************************************************/
/* Srv_BitwiseOr                                                         */
/*************************************************************************/

#define SRV_BITWISEOR_S32_out(x,y)                      ( (x) | (y) )
#define SRV_BITWISEOR_S16_out(x,y)                      ( (x) | (y) )
#define SRV_BITWISEOR_S8_out(x,y)                       ( (x) | (y) )
#define SRV_BITWISEOR_U32_out(x,y)                      ( (x) | (y) )
#define SRV_BITWISEOR_U16_out(x,y)                      ( (x) | (y) )
#define SRV_BITWISEOR_U8_out(x,y)                       ( (x) | (y) )

/*************************************************************************/
/* Bitwise_OR                                                            */
/*************************************************************************/

#define BITWISE_OR_U8_calc(input1, input2)              ((input1) | (input2))
#define BITWISE_OR_U16_calc(input1, input2)             ((input1) | (input2))
#define BITWISE_OR_U32_calc(input1, input2)             ((input1) | (input2))

/*************************************************************************/
/* bitwiseXOR                                                            */
/*************************************************************************/

#define BITWISEXOR_U8_calc(x, y)                        ((uint8) BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_U16_calc(x, y)                       ((uint16)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_U32_calc(x, y)                       ((uint32)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_S8_calc(x, y)                        ((sint8) BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_S16_calc(x, y)                       ((sint16)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_S32_calc(x, y)                       ((sint32)BITWISEXOR_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseXOR_signed                                                     */
/*************************************************************************/

#define BITWISEXOR_SIGNED_S8_calc(x, y)                 ((sint8) BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_SIGNED_S16_calc(x, y)                ((sint16)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_SIGNED_S32_calc(x, y)                ((sint32)BITWISEXOR_IMPL_calc(x, y))

/*************************************************************************/
/* bitwiseXOR_unsigned                                                   */
/*************************************************************************/

#define BITWISEXOR_UNSIGNED_U8_calc(x, y)               ((uint8) BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_UNSIGNED_U16_calc(x, y)              ((uint16)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_UNSIGNED_U32_calc(x, y)              ((uint32)BITWISEXOR_IMPL_calc(x, y))
#define BITWISEXOR_IMPL_calc(x, y)                      ((x)^(y))

/*************************************************************************/
/* Srv_BitwiseXor                                                        */
/*************************************************************************/

#define SRV_BITWISEXOR_S32_out(x,y)                     ( (x) ^ (y) )
#define SRV_BITWISEXOR_S16_out(x,y)                     ( (x) ^ (y) )
#define SRV_BITWISEXOR_S8_out(x,y)                      ( (x) ^ (y) )
#define SRV_BITWISEXOR_U32_out(x,y)                     ( (x) ^ (y) )
#define SRV_BITWISEXOR_U16_out(x,y)                     ( (x) ^ (y) )
#define SRV_BITWISEXOR_U8_out(x,y)                      ( (x) ^ (y) )

/*************************************************************************/
/* Bitwise_XOR                                                           */
/*************************************************************************/

#define BITWISE_XOR_U8_calc(input1, input2)             ((input1) ^ (input2))
#define BITWISE_XOR_U16_calc(input1, input2)            ((input1) ^ (input2))
#define BITWISE_XOR_U32_calc(input1, input2)            ((input1) ^ (input2))

/*************************************************************************/
/* Exor                                                                  */
/*************************************************************************/

#define EXOR_BOOL_XOR(input1, input2)                   ((input1)^(input2))

/*************************************************************************/
/* shiftLeft                                                             */
/*************************************************************************/

#define shiftLeftU8(shift, basis)                       ((uint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define shiftLeftU16(shift, basis)                      ((uint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define shiftLeftU32(shift, basis)                      ((uint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define shiftLeftS8(shift, basis)                       ((sint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define shiftLeftS16(shift, basis)                      ((sint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define shiftLeftS32(shift, basis)                      ((sint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))

#define SHIFTLEFT_U8_shiftLeft(shift, basis)            ((uint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_U16_shiftLeft(shift, basis)           ((uint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_U32_shiftLeft(shift, basis)           ((uint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_S8_shiftLeft(shift, basis)            ((sint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_S16_shiftLeft(shift, basis)           ((sint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_S32_shiftLeft(shift, basis)           ((sint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))

/*************************************************************************/
/* shiftLeft_signed                                                      */
/*************************************************************************/

#define SHIFTLEFT_SIGNED_S8_shiftLeft(shift, basis)     ((sint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_SIGNED_S16_shiftLeft(shift, basis)    ((sint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_SIGNED_S32_shiftLeft(shift, basis)    ((sint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))

/*************************************************************************/
/* shiftLeft_unsigned                                                    */
/*************************************************************************/

#define SHIFTLEFT_UNSIGNED_U8_shiftLeft(shift, basis)   ((uint8) SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_UNSIGNED_U16_shiftLeft(shift, basis)  ((uint16)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_UNSIGNED_U32_shiftLeft(shift, basis)  ((uint32)SHIFTLEFT_IMPL_shiftLeft(shift, basis))
#define SHIFTLEFT_IMPL_shiftLeft(shift, basis)          ((basis)<<(shift))

/*************************************************************************/
/* Srv_ShfLeft                                                           */
/*************************************************************************/

#define SRV_SHFTLEFT_S32_out(n,x)                       ( (x) << (n) )
#define SRV_SHFTLEFT_S16_out(n,x)                       ( (x) << (n) )
#define SRV_SHFTLEFT_S8_out(n,x)                        ( (x) << (n) )
#define SRV_SHFTLEFT_U32_out(n,x)                       ( (x) << (n) )
#define SRV_SHFTLEFT_U16_out(n,x)                       ( (x) << (n) )
#define SRV_SHFTLEFT_U8_out(n,x)                        ( (x) << (n) )

/*************************************************************************/
/* Shift_Left                                                            */
/*************************************************************************/

#define SHIFT_LEFT_U8_shiftLeft(n, input)               ((input) << (n))
#define SHIFT_LEFT_U16_shiftLeft(n, input)              ((input) << (n))
#define SHIFT_LEFT_U32_shiftLeft(n, input)              ((input) << (n))

/*************************************************************************/
/* shiftRight                                                            */
/*************************************************************************/

#define shiftRightU8(shift, basis)                      ((uint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define shiftRightU16(shift, basis)                     ((uint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define shiftRightU32(shift, basis)                     ((uint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define shiftRightS8(shift, basis)                      ((sint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define shiftRightS16(shift, basis)                     ((sint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define shiftRightS32(shift, basis)                     ((sint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))

#define SHIFTRIGHT_U8_shiftRight(shift, basis)          ((uint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_U16_shiftRight(shift, basis)         ((uint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_U32_shiftRight(shift, basis)         ((uint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_S8_shiftRight(shift, basis)          ((sint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_S16_shiftRight(shift, basis)         ((sint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_S32_shiftRight(shift, basis)         ((sint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))

/*************************************************************************/
/* shiftRight_signed                                                     */
/*************************************************************************/

#define SHIFTRIGHT_SIGNED_S8_shiftRight(shift, basis)   ((sint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_SIGNED_S16_shiftRight(shift, basis)  ((sint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_SIGNED_S32_shiftRight(shift, basis)  ((sint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))

/*************************************************************************/
/* shiftRight_unsigned                                                   */
/*************************************************************************/

#define SHIFTRIGHT_UNSIGNED_U8_shiftRight(shift, basis) ((uint8) SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_UNSIGNED_U16_shiftRight(shift, basis) ((uint16)SHIFTRIGHT_IMPL_shiftRight(shift, basis))
#define SHIFTRIGHT_UNSIGNED_U32_shiftRight(shift, basis) ((uint32)SHIFTRIGHT_IMPL_shiftRight(shift, basis))

#define SHIFTRIGHT_IMPL_shiftRight(shift, basis)        ((basis)>>(shift))

/*************************************************************************/
/* Srv_ShfRight                                                          */
/*************************************************************************/

#define SRV_SHFTRIGHT_S32_out(n,x)                      ( (x) >> (n) )
#define SRV_SHFTRIGHT_S16_out(n,x)                      ( (x) >> (n) )
#define SRV_SHFTRIGHT_S8_out(n,x)                       ( (x) >> (n) )
#define SRV_SHFTRIGHT_U32_out(n,x)                      ( (x) >> (n) )
#define SRV_SHFTRIGHT_U16_out(n,x)                      ( (x) >> (n) )
#define SRV_SHFTRIGHT_U8_out(n,x)                       ( (x) >> (n) )

/*************************************************************************/
/* Shift_Right                                                           */
/*************************************************************************/

#define SHIFT_RIGHT_U8_shiftRight(n, input)       ((input) >> (n))
#define SHIFT_RIGHT_U16_shiftRight(n, input)      ((input) >> (n))
#define SHIFT_RIGHT_U32_shiftRight(n, input)      ((input) >> (n))

/*************************************************************************/
/* Srv_ParityEven                                                        */
/*************************************************************************/

#define SRV_PARITYEVEN_BOOL_out(value)                  SrvB_ParityEven(value)
#define SRV_PARITYEVEN_U32_out(value)                   SrvB_ParityEven_U32(value)

/*************************************************************************/
/* Parity_Even                                                           */
/*************************************************************************/

#define PARITY_EVEN_SIGNED_S32_even(value)              SrvB_ParityEven_S32_B(value)
#define PARITY_EVEN_UNSIGNED_U32_even(value)            SrvB_ParityEven_U32_B(value)

/*************************************************************************/
/* Srv_ParityOdd                                                         */
/*************************************************************************/

#define SRV_PARITYODD_BOOL_out(value)                   SrvB_ParityOdd(value)
#define SRV_PARITYODD_U32_out(value)                    SrvB_ParityOdd_U32(value)

/*************************************************************************/
/* Parity_Odd                                                            */
/*************************************************************************/

#define PARITY_ODD_SIGNED_S32_odd(value)                SrvB_ParityOdd_S32_B(value)
#define PARITY_ODD_UNSIGNED_U32_odd(value)              SrvB_ParityOdd_U32_B(value)

/*************************************************************************/
/* Srv_CountLeadingSigns                                                 */
/*************************************************************************/

#define SRV_COUNTLEADINGSIGNS_S32_out(value)            SrvB_CountLeadingSigns(value)

/*************************************************************************/
/* Srv_CountLeadingZeros                                                 */
/*************************************************************************/

#define SRV_COUNTLEADINGZEROS_S32_out(value)            SrvB_CountLeadingZeros(value)

/*************************************************************************/
/* Srv_CountLeadingOnes                                                  */
/*************************************************************************/

#define SRV_COUNTLEADINGONES_S32_out(value)             SrvB_CountLeadingOnes(value)

/*************************************************************************/
/* CountLeading_Ones                                                     */
/*************************************************************************/

#define COUNTLEADING_ONES_U32S32_out(base)              SrvB_LeadingOnes_U32_S32(base)
#define COUNTLEADING_SIGNS_S32S32_out(base)             SrvB_LeadingSigns_S32_S32(base)
#define COUNTLEADING_ZEROS_U32S32_out(base)             SrvB_LeadingZeros_U32_S32(base)

/*************************************************************************/
/* CoopyBitA                                                             */
/*************************************************************************/

INLINE_FUNCTION uint32 COPYBITA_U32_copyBitA(uint32 base, uint32 frombit, uint32 tobit);
INLINE_FUNCTION uint32 COPYBITA_U32_copyBitA(uint32 base, uint32 frombit, uint32 tobit)
{
    uint32 tempBase;
    tempBase = base;
    SrvB_CopyBitU32(&tempBase, (tobit), (base), (frombit));
    return (tempBase);
}

#endif  /*#ifndef _CODEGEN_SRV_BIT_H*/

