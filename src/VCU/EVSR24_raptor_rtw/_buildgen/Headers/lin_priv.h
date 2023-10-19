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
 * $Filename__:lin_priv.h$ 
 * 
 * $Author____:STGOLLNI$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:STGOLLNI$ 
 * $Date______:10.10.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:lin_priv$ 
 * $Variant___:1.5.0$ 
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
 * 1.5.0; 0     10.10.2008 STGOLLNI
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LIN_PRIV_H                                     /* protect multiple includes              */
#define _LIN_PRIV_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      private header file for atomic component lin_std
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * defines, type defs, enums, inlines, macros ...
 ***************************************************************************************************
 */
#define LIN_SCHEDTAB_TERMINATOR     ((uint8)(0xffu))
#define LIN_FRAMETAB_TERMINATOR     ((uint8)(0xffu))
#define LIN_SCHEDTAB_LASTENTRY      { LIN_SCHEDTAB_TERMINATOR, LIN_SCHEDTAB_TERMINATOR }
#define LIN_FRAMETAB_LASTENTRY      { LIN_FRAMETAB_TERMINATOR, LIN_FRAMETAB_TERMINATOR, LIN_FRAMETAB_TERMINATOR, LIN_FRAMETAB_TERMINATOR, LIN_FRAMETAB_TERMINATOR, NULL}

#define LIN_WAKEUPSIGNAL            ((uint8)(0xf8u))
#define LIN_SYNCBREAK               ((uint8)(0x80u))
#define LIN_SYNCBYTE                ((uint8)(0x55u))

#define LIN_CALCP1(id)              ((uint8)((((((id) & 0x02) >> 1) ^ \
                                       (((id) & 0x08) >> 3) ^ \
                                       (((id) & 0x10) >> 4) ^ \
                                       (((id) & 0x20) >> 5)) ^ 0x01) << 7))

#define LIN_CALCP0(id)              ((uint8)(((((id) & 0x01)) ^      \
                                      (((id) & 0x02) >> 1) ^ \
                                      (((id) & 0x04) >> 2) ^ \
                                      (((id) & 0x10) >> 4)) << 6))

/* macros for signal operations */
#define LIN_GET_BYTE(v)                 ((v)>>3)
#define LIN_GET_SHIFTVAL(v,s)           (16 - (LIN_GET_BITOFFSET(v)+(s)))
#define LIN_GET_BITOFFSET(v)            ((uint8)(v) & 0x07)

/* bitmasks for status variable */
#define LIN_STATUS_ERROR_IN_RESPONSE      (0x0001)
#define LIN_STATUS_SUSCESSFUL_TRANSFER    (0x0002)
#define LIN_STATUS_OVERRUN                (0x0004)
#define LIN_GOTO_SLEEP                    (0x0008)
#define LIN_MASK_HIGH_BYTE                (0x00ff)

#define LIN_NULLFRAME               (0x00)

/* definition of LIN frame layout */
/**********************************/
#define LIN_STARTPOS_SYNC           (0)     /* start position of sync byte in frame buffer  */
#define LIN_STARTPOS_HEADER         (1)     /* start position of header in frame buffer     */
#define LIN_STARTPOS_DATA           (3)     /* start position of data field in frame buffer */

#define LIN_SNYC_LENGTH             (1)     /* 1 byte for sync break    */
#define LIN_HEADER_LENGTH           (2)     /* 2 bytes for header       */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__com__10ms__RAM__x32__START
extern Lin_Config_t         *Lin_Config_pcs;
__PRAGMA_USE__com__10ms__RAM__x32__END


__PRAGMA_USE__com__10ms__constant__arr16__START
/* array for bitmask pattern of signals */
extern const uint16          Lin_BitMask_au16[];
__PRAGMA_USE__com__10ms__constant__arr16__END

__PRAGMA_USE__com__10ms__constant__s32__START
extern Lin_SchedTabEntry_t   Lin_SleepFrameSchedTab_cs[];
__PRAGMA_USE__com__10ms__constant__s32__END


__PRAGMA_USE__CODE__lin__NormalSpeed__START

/* Tx/Rx functions */
/* single byte transfer */
extern void    Lin_RxCallback   (uint8 numNodeId_u8);
extern void    Lin_TxCallback   (uint8 numNodeId_u8);
extern void    Lin_ErrorCallback(uint8 numNodeId_u8);
__PRAGMA_USE__CODE__lin__NormalSpeed__END




/* _LIN_PRIV_H                                                                                    */
#endif
