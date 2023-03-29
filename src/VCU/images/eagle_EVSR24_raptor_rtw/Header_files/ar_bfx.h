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
 * $Filename__:ar_bfx.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVB.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ar_bfx$ 
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
 *   Derived from B_SRVB.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _AR_BFX_H
#define _AR_BFX_H


/*
 ***********************************************************************************************************************
 *
 * A U T O S A R
 *
 * Release:                 4.0
 * Revision:                001 Draft
 * Document Title:          Specification of Bit Handling Routines 
 * Document Id:             399
 * Document Version:        0.5.2
 * Library:                 BFX
 *
 ***********************************************************************************************************************
 */

/* Autosar needs: Std_Types.h */
#include "std_type.h"

/* Autosar needs: MemMap .h */
#include "core_env.h"
#include "memlay.h"

#include "srvb_conf.h"
#include "srvb_bit.h"
#include "srvb_bit_inl.h"


/**************
 * Bfx_SetBit *
 **************/

MEMLAY_USE_FORCE_INLINE(uint8 Bfx_SetBit_u8u8(uint8 Data, uint8 BitPn))
{
    SrvB_SetBitU8(&Data, BitPn);
    return Data;
}

MEMLAY_USE_FORCE_INLINE(uint16 Bfx_SetBit_u16u8(uint16 Data, uint8 BitPn))
{
    SrvB_SetBitU16(&Data, BitPn);
    return Data;
}

MEMLAY_USE_FORCE_INLINE(uint32 Bfx_SetBit_u32u8(uint32 Data, uint8 BitPn))
{
    SrvB_SetBitU32(&Data, BitPn);
    return Data;
}


/**************
 * Bfx_ClrBit *
 **************/

MEMLAY_USE_FORCE_INLINE(uint8 Bfx_ClrBit_u8u8(uint8 Data, uint8 BitPn))
{
    SrvB_ClrBitU8(&Data, BitPn);
    return Data;
}

MEMLAY_USE_FORCE_INLINE(uint16 Bfx_ClrBit_u16u8(uint16 Data, uint8 BitPn))
{
    SrvB_ClrBitU16(&Data, BitPn);
    return Data;
}

MEMLAY_USE_FORCE_INLINE(uint32 Bfx_ClrBit_u32u8(uint32 Data, uint8 BitPn))
{
    SrvB_ClrBitU32(&Data, BitPn);
    return Data;
}


/**************
 * Bfx_GetBit *
 **************/

#define            Bfx_GetBit_u8u8_u8              (uint8)SrvB_GetBitU8_B
#define            Bfx_GetBit_u16u8_u8             (uint8)SrvB_GetBitU16_B
#define            Bfx_GetBit_u32u8_u8             (uint8)SrvB_GetBitU32_B


/* _AR_BFX_H */
#endif

