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
 * $Filename__:eesbd_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:30.10.2012$
 * $Class_____:SWHDR$
 * $Name______:eesbd_prot$
 * $Variant___:1.26.0$
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
 * 1.26.0; 0     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   3. Feature:Initialization of read and write states of block and page layer 
 *   when new request is taken.
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EESBD_PROT_H
#define _EESBD_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EESBD -- block device for external serial EEPROM
 *
 * \scope             API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/* Return values of functions of module EESBD */
typedef enum
{
    EESBD_READ_I_CURRENT_BLOCK      = EEP_PDL_READ_I_CURRENT_BLOCK,
    EESBD_READ_I_INCONSISTENT_BLOCK = EEP_PDL_READ_I_INCONSISTENT_BLOCK,
    EESBD_WRITE_I_SUCCEEDED         = EEP_PDL_WRITE_I_SUCCEEDED,
    EESBD_READ_I_PENDING            = EEP_PDL_READ_I_PENDING,
    EESBD_WRITE_I_PENDING           = EEP_PDL_WRITE_I_PENDING,
    EESBD_WRITE_E_ABORTED           = EEP_PDL_WRITE_E_ABORTED,
    EESBD_READ_E_INVALID_BLOCK      = EEP_PDL_READ_E_INVALID_BLOCK,
    EESBD_READ_E_INTERNAL_ERROR     = EEP_PDL_READ_E_INTERNAL_ERROR,
    EESBD_WRITE_E_INTERNAL_ERROR    = EEP_PDL_WRITE_E_INTERNAL_ERROR
} Eesbd_FuncRetValues_t;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern uint Eesbd_ReadBlock (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16, uint8* xRdBuf_pu8);

extern uint Eesbd_WriteBlock(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16, uint8* xWrBuf_pu8);
extern void Eesbd_InitRdWrStatus(uint8 stMode_u8);
extern void Eesbd_Ini(void);
extern uint8  Eesbd_GetBlockState (uint32 xCurrCpy_u32);
extern uint32 Eesbd_GetSecLevel (uint16 xBlkIdx_u16);
__PRAGMA_USE__CODE__eep__LowSpeed__END
/*_EESBD_PROT_H*/
#endif
