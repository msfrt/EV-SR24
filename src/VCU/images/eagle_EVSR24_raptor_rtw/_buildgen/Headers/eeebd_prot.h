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
 * $Filename__:eeebd_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:05.04.2013$
 * $Class_____:SWHDR$
 * $Name______:eeebd_prot$
 * $Variant___:1.27.0$
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
 * 1.27.0; 0     05.04.2013 RUO1KOR
 *   Robustness changes done for MC:EEP_1.27.0
 *   
 *   EEP robustness: Return uint32 in Eep_GetnumSectChg interface
 * 
 * 1.26.0; 2     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   8. Feature: New interface to get the current number of sector change.
 * 
 * 1.26.0; 1     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   4. Feature: New interface to get the number of free pages in the active 
 *   sector.
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

#ifndef _EEEBD_PROT_H
#define _EEEBD_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEEBD Eep emulation block device
 *
 * \scope             INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* Main states of emulation (Layer EEEBD and EEEPDD)
   States are used to switch generally to different handlings inside emulation driver */
typedef enum
{
    EEEBD_EEE_NORMALRUN,         /* Normal run mode */
    EEEBD_EEE_FIRSTINIT,         /* First initialization mode */
    EEEBD_EEE_SECTORCHANGE,      /* Sector change mode */
    EEEBD_EEE_MIGRATION          /* Migration function mode */
                                 /* !!! Order may not be changed
                                    because < and > operators are used in code. */
} Eeebd_EeeState_t;


/* Header of table of contents (size is 8 bytes)
   Do not change the order of this struct */
typedef struct
{
    uint8  numEntries_u8;        /* Number of entries in table of contents */
    uint8  numEntriesC_u8;       /* Complement value of number of entries */
    uint16 numSectChg_u16;       /* Number of sector changes */
    uint32 xCompleteHash_u32;    /* Hash value for complete layout configuration */
} Eeebd_TocHeader_t;


/* Block entry in the table of contents (size is 8 bytes)
   Do not change the order of this struct */
typedef struct
{
    uint16 xBlIdt_u16;           /* Block identification hash value */
    uint16 xContIdt_u16;         /* Block content identification hash value */
    uint16 xBlkLgth_u16;         /* Length of block */
    uint16 xSavPos_u16;          /* Saving position of block in flash */
} Eeebd_TocEntry_t;

/* Return values of functions of module EEEBD */
typedef enum
{
    EEEBD_READ_I_CURRENT_BLOCK      = EEP_PDL_READ_I_CURRENT_BLOCK,
    EEEBD_READ_I_PREVIOUS_BLOCK     = EEP_PDL_READ_I_PREVIOUS_BLOCK,
    EEEBD_READ_I_INCONSISTENT_BLOCK = EEP_PDL_READ_I_INCONSISTENT_BLOCK,
    EEEBD_WRITE_I_SUCCEEDED         = EEP_PDL_WRITE_I_SUCCEEDED,
    EEEBD_READ_I_PENDING            = EEP_PDL_READ_I_PENDING,
    EEEBD_WRITE_I_PENDING           = EEP_PDL_WRITE_I_PENDING,
    EEEBD_WRITE_E_ABORTED           = EEP_PDL_WRITE_E_ABORTED,
    EEEBD_READ_E_INVALID_BLOCK      = EEP_PDL_READ_E_INVALID_BLOCK,
    EEEBD_READ_E_INTERNAL_ERROR     = EEP_PDL_READ_E_INTERNAL_ERROR,
    EEEBD_WRITE_E_INTERNAL_ERROR    = EEP_PDL_WRITE_E_INTERNAL_ERROR
} Eeebd_FuncRetValues_t;

/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern uint Eeebd_ReadBlock (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16, uint8* xRdBuf_pu8);

extern uint Eeebd_WriteBlock(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16, uint8* xWrBuf_pu8);

extern void Eeebd_InitRdWrStatus(uint8 stMode_u8);

extern void Eeebd_Ini(void);

extern void Eeebd_IniEnd(void);

extern void Eeebd_Proc(void);

extern void Eeebd_MigrationIni(void);

extern bool Eeebd_ForceSectChg(void);

extern uint8  Eeebd_GetBlockState (uint32 xCurrCpy_u32);

extern uint32 Eeebd_GetSecLevel (uint16 xBlkIdx_u16);

extern bool Eeebd_CheckActivity(void);

extern uint32 Eeebd_GetState(void);

extern uint32 Eeebd_GetNoOfFreePages(void);

extern uint32 Eeebd_GetNumSectChg(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8 Eeebd_stEee;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

MEMLAY_USE_PROTRAM(extern uint16, Eeebd_numSectChg);


/*_EEEBD_PROT_H*/
#endif
