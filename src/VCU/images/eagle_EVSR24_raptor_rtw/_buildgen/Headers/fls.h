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
 * $Filename__:fls.h$
 *
 * $Author____:LE79BA$
 *
 * $Function__:New header for flashhandl wrapper$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ACH4COB$
 * $Date______:12.05.2016$
 * $Class_____:SWHDR$
 * $Name______:fls$
 * $Variant___:1.21.2$
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
 * 1.21.2; 0     12.05.2016 ACH4COB
 *   Bugfix: Reexecution of state machine issue
 * 
 * 1.18.1; 0     10.01.2013 KRS1COB
 *   Bugfix for TC1724 for Fls_read in Flashhndl_wrapper.c
 * 
 * 1.18.0; 1     23.11.2012 KRS1COB
 *   upate after testing
 * 
 * 1.18.0; 0     31.10.2012 KRS1COB
 *   FLASH: Support of faster word read and requirement for invalidation of odd 
 *   page of word line
 * 
 * 1.17.0; 7     05.10.2012 KRS1COB
 *   testing update
 * 
 * 1.17.0; 6     04.10.2012 KRS1COB
 *   review updates
 * 
 * 1.17.0; 5     04.10.2012 KRS1COB
 *   update
 * 
 * 1.17.0; 4     03.10.2012 KRS1COB
 *   update of check for CHIP ID for SHE activation
 * 
 * 1.17.0; 3     01.10.2012 KRS1COB
 *   Checking the SCU CHIP ID incase of TC1793 devices without SHE activated
 * 
 * 1.17.0; 2     27.06.2012 PMA5KOR
 *   Used macro to encapsulate changes for implementation of SHE feature in 
 *   Flash
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FLS_H
#define _FLS_H


/*
 *********************************************************************
 * Includes
 *********************************************************************
 */
#include "Fee_Cbk.h"
#include "std_types.h"
#include "MemIf_Types.h"
#include "flash.h"
#include "srvb.h"
#include "flashhndl_inf.h"


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define FLS_FLASH_SIZE_LLDORDER 15
#if (MACHINE_TYPE == TC_1793)
#define FLS_BASE_ADDRESS        0xAF000000u
#else
#define FLS_BASE_ADDRESS        0xAFE00000u
#endif
#define FLS_NUMBER_OF_SECTORS   2
#define FLS_PAGE_SIZE           128
#define FLS_ERASED_VALUE        0xFF                /*  To be given by low level driver  */
#define FLASH_BYTESPERORDER     128
#define Fls_LengthType          uint32
#define Fls_AddressType         uint32
#define FLS_VENDOR_ID           0x0006

/* MemIf016
    This type denotes the result of the last job.
*/
/* MemIf021
    This type denotes the operation mode of the underlying abstraction modules and device drivers.
*/

/* Module ID */
#define FLS_MODULE_ID  0x14

/* AUTOSAR version information  */
#define FLS_AR_MAJOR_VERSION    3
#define FLS_AR_MINOR_VERSION    0
#define FLS_AR_PATCH_VERSION    0

/* SW version information   */
#define FLS_SW_MAJOR_VERSION    2
#define FLS_SW_MINOR_VERSION    1
#define FLS_SW_PATCH_VERSION    0


/*
 ***************************************************************************************************
 * Type definition and enums
 ***************************************************************************************************
 */
/* Structure for flash order */
typedef struct
{
    uint8  xSessionId_e;                       /* Session ID (RB, CUST, ...)           */
    uint32 adStart_u32;                        /* Start address (erasing or prog)      */
    uint32 adEnd_u32;                          /* End address (erasing or prog)        */
    uint8 *dBuffer_pu8;                        /* Pointer to data (programming)        */
    uint32 numBytes_u32;                       /* Length of data (programming)         */
    uint32 xLLDOrder_s[FLS_FLASH_SIZE_LLDORDER];   /* Internal workspace for LLD           */
                                               /* Dont touch data inside this workspace */
}Fls_Flash_Order_t;

/* FLS job enumerator */
enum
{
    FLS_PENDING         = 0x00,
    FLS_READ            = 0x01,
    FLS_WRITE           = 0x02,
    FLS_ERASE           = 0x03,
    FLS_FAILED          = 0x04,
    FLS_ERASE_DO        = 0x05,
    FLS_WRITE_DO        = 0x06
};


/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */
/* Interface function for EEPROM driver */
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern Std_ReturnType Fls_Read(Fls_AddressType, uint8*, Fls_LengthType);
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern Std_ReturnType Fls_Write(Fls_AddressType, const uint8*, Fls_LengthType);
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern Std_ReturnType Fls_Erase(Fls_AddressType, Fls_LengthType);
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern void Fls_SetMode(MemIf_ModeType);
extern void Fls_Cancel(void);
extern void Fls_MainFunction(void);
extern void Fls_Init(void);
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern void Fls_GetVersionInfo( Std_VersionInfoType*);
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern Std_ReturnType Fls_Compare(Fls_AddressType, uint8*, Fls_LengthType);
extern MemIf_JobResultType Fls_GetJobResult(void);
extern MemIf_StatusType Fls_GetStatus(void);
extern void Fls_Main(void);
extern Std_ReturnType Fls_ReadIntern(uint32 Fls_srcadr_u32, uint8* TargetAddressPtr, Fls_LengthType Length);
extern Std_ReturnType Fls_CheckHardwareStatus(void);
#ifdef FEE_ACTIVE
/* MISRA RULE 16.3 VIOLATION: Parameter identifiers not needed */
extern void Fls_MemCopy8(uint8*, uint8*, uint32);
#if (MACHINE_TYPE == TC_1793)
extern bool Flash_AcquireSemaphore(void);
extern void Flash_ReleaseSemaphore(void);
extern bool Fls_StSheActive_b;
extern uint32 Fls_srcaddr_u32;
extern uint8* Fls_TargetAddressPtr_pu8;
extern Fls_LengthType Fls_Length;
extern bool Fls_stSemaReserve_u8;
#else
extern uint32 Fls_sourceadrs_u32;                         /* Source address pointer */
#endif
extern Std_ReturnType stReadReturn;
/* FEE_ACTIVE */
#endif

/* _FLS_H */
#endif
