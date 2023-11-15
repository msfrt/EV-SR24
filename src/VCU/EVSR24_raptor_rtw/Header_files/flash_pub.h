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
 * $Filename__:flash_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SUU4KOR$
 * $Date______:26.11.2010$
 * $Class_____:SWHDR$
 * $Name______:flash_pub$
 * $Variant___:1.12.0$
 * $Revision__:2$
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
 * 1.12.0; 2     26.11.2010 SUU4KOR
 *   Support of 60k erase cycles for new controller
 * 
 * 1.12.0; 1     30.06.2010 LE79BA
 *   Remove Flash_MarginReadTest(void)
 * 
 * 1.12.0; 0     18.02.2010 LE79BA
 *   CC base version: B_FLASH.11.0.0
 *   new version: B_FLASH.12.0.0
 * 
 * 1.8.0; 0     19.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: flash_pub.h
 *      Version: \main\17
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FLASH_PUB_H
#define _FLASH_PUB_H

/*!
 *********************************************************************
 * \moduldescription
 *          Public Header file for flash handler.
 *
 * \scope       INTERN
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/* This define is neccessary to be compatible with old version of eep, later this define */
/* could be generated (like the other session ids) in flash_auto_conf.h with the script. */
#define FLASH_EEE_PROG_E   0

/* Size of internal order struct */
#define FLASH_SIZE_LLDORDER 15

/* Retutn values of flash functions */
typedef enum
{
    FLASH_ST_OK_E,                      /* Status: finished successfull               */
    FLASH_ST_ERASING_E,                 /* Status: erasing in progress                */
    FLASH_E_INVALID_ADD_E,              /* Invalid address or address out of range    */
    FLASH_E_AREA_LOCKED_E,              /* Access to requested area not possible      */
    FLASH_E_SEQUENCE_ERR_E,             /* Call sequence error                        */
    FLASH_E_ERASE_ERR_E,                /* Erasing error                              */
    FLASH_E_PROG_ERR_E,                 /* Programming error                          */
    FLASH_E_GENERAL_E,                  /* General error                              */
    FLASH_E_SBIT_DFLASH_E,              /* Correctable bit error in DFlash while read      */
    FLASH_E_DBIT_DFLASH_E,              /* Uncorrectable bit error in DFlash while read      */
    FLASH_E_SBIT_PFLASH_E,              /* Correctable bit error in PFlash while read      */
    FLASH_E_DBIT_PFLASH_E,              /* Uncorrectable bit error in PFlash while read      */
    FLASH_E_MARGIN_CHECK_E,             /* Error while margin read check              */
/* The following values are used only internal, dont use in API */
    FLASH_ST_SUSPENDED_E,               /* Operation suspended                        */
    FLASH_ST_PROGRAMMING_E,             /* Status: programming in progress            */
    FLASH_ST_START_ERASE_E,             /* Status: erasing started                    */
    FLASH_ST_START_PROG_E               /* Status: programming started                */
} Flash_Status_t;

/* Structure for flash order */
typedef struct
{
    uint8  xSessionId_e;                       /* Session ID (RB, CUST, ...)           */
    uint32 adStart_u32;                        /* Start address (erasing or prog)      */
    uint32 adEnd_u32;                          /* End address (erasing or prog)        */
    uint8 *dBuffer_pu8;                        /* Pointer to data (programming)        */
    uint32 numBytes_u32;                       /* Length of data (programming)         */
    uint32 xLLDOrder_s[FLASH_SIZE_LLDORDER];   /* Internal workspace for LLD           */
                                               /* Dont touch data inside this workspace */
}Flash_Order_t;

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
/* Extern declaration of functions */
extern bit16 Flash_EraseStart(Flash_Order_t *Order_ps);
extern bit16 Flash_EraseDo(Flash_Order_t *Order_ps);
extern bit16 Flash_EraseEnd(Flash_Order_t *Order_ps);
extern bit16 Flash_ProgStart(Flash_Order_t *Order_ps);
extern bit16 Flash_Init(void);
extern uint16 Flash_GetDataWidth(uint32 adFlash_u32);
extern uint8 Flash_GetErasePattern(uint32 adFlash_u32);
extern uint32 Flash_GetSectorEndAdr(uint32 adFlash_u32);
extern void Flash_DefaultProlog(void);
extern void Flash_DefaultEpilog(void);
extern void Flash_DisableSuspend(void);
extern void Flash_EnableSuspend(void);
extern Flash_Status_t Flash_Read(uint32 adFlash_u32, uint32* xBuffer_pu32, uint32 lenData_u32);
extern Flash_Status_t Flash_CheckMarginRead(uint32 adFlash_u32, uint32 lenData_u32);
extern bit16 Flash_ProgDoCyl(Flash_Order_t *Order_ps, bool stCyclic_b);
extern bit16 Flash_ProgEndCyl(Flash_Order_t *Order_ps, bool stCyclic_b);
extern bit16 Flash_InvalidateCyl(Flash_Order_t *Order_ps, bool stCyclic_b);
extern Flash_Status_t Flash_Unlock(uint32 adStart_u32, uint32 adEnd_u32);
extern Flash_Status_t Flash_Lock(uint32 adStart_u32, uint32 adEnd_u32);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END


__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
#ifdef FLASH_60K_ERASESUPPORT
extern uint8  Flash_ctErr_u8;
#endif
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

#define Flash_CylEraseStart(Order_ps)             \
            Flash_EraseStart(Order_ps)

#define Flash_CylEraseDo(Order_ps)                \
            Flash_EraseDo(Order_ps)

#define Flash_CylEraseEnd(Order_ps)               \
            Flash_EraseEnd(Order_ps)

#define Flash_CylProgStart(Order_ps)              \
            Flash_ProgStart(Order_ps)

#define Flash_CylProgDo(Order_ps)                 \
            Flash_ProgDoCyl(Order_ps, TRUE)

#define Flash_ProgDo(Order_ps)                    \
            Flash_ProgDoCyl(Order_ps, FALSE)

#define Flash_CylProgEnd(Order_ps)                \
            Flash_ProgEndCyl(Order_ps, TRUE)

#define Flash_ProgEnd(Order_ps)                   \
            Flash_ProgEndCyl(Order_ps, FALSE)

#define Flash_CylInvalidate(Order_ps)             \
            Flash_InvalidateCyl(Order_ps, TRUE)

#define Flash_Invalidate(Order_ps)                \
            Flash_InvalidateCyl(Order_ps, FALSE)

#endif
