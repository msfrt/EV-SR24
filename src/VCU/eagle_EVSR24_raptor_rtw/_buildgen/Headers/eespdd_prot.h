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
 * $Filename__:eespdd_prot.h$
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
 * $Name______:eespdd_prot$
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
 * 1.17.0; 0     06.12.2010 LE79BA
 *   .
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EESPDD_PROT_H
#define _EESPDD_PROT_H


/* orders for EEPROMs for details look for datapage SGS-TOMSON MICROELECTRONICS M95160 page 5/21  */
/* EEPROM COMMANDS                                                                                */
#define EESPDD_COMMAND_WREN                   0x06  /* "0000|0110" set WRite ENable latch        */
#define EESPDD_COMMAND_WRDI                   0x04  /* "0000|0100" WRite enable latch DIsable    */
#define EESPDD_COMMAND_RDSR                   0x05  /* "0000|0101" ReaD Status Register          */
#define EESPDD_COMMAND_WRSR                   0x01  /* "0000|0001" WRite Status Register         */
#define EESPDD_COMMAND_READ                   0x03  /* "0000|0011" READ  data to memory array    */
#define EESPDD_COMMAND_WRITE                  0x02  /* "0000|0010" WRITE data to memory array    */

#define EESPDD_MSK_WIP                        0x01  /* "0000|0001" Write In Process latch-mask   */
#define EESPDD_MSK_WEL                        0x02  /* "0000|0010" Write Enable latch-mask       */
#define EESPDD_MSK_BP                         0x8C  /* "1000|1100" Block Protection mask         */

/* return-codes for status */
typedef enum
{
  /* informations                                                                                */
  EESPDD_I_BUSY           = 0x00,
  EESPDD_I_SUCCEEDED      = 0x01,
  /* errors                                                                                      */
  EESPDD_E_TIMEOUT_READ   = 0x80,
  EESPDD_E_TIMEOUT_WRITE  = 0x81,
  EESPDD_E_TIMEOUT_MODIFY = 0x82,
  EESPDD_E_VERIFY_ERROR   = 0x83,
  EESPDD_E_ORDER_DENIED   = 0x84,
  EESPDD_E_INTERNAL_ERROR = 0x85,
  /* other                                                                                       */
  EESPDD_EMPTY_STATUS     = 0xFF
} Eespdd_ReturnStates_t;


/* order-structure for eepspdd */
typedef struct
{
  uint16 adEepPage_u16;
  uint16 numOfBytes_u16;
  uint8* adDataSource_pu8;
  uint8* stEespddDriver_pu8;
  uint8  xDetPat_u8;
} Eespdd_Order_t;

/* defines for easier debugging, using evaluation script and logic-analyzer */
#define EESPD_DETPAT_EESBD_SUBST_RDDATA_PROLOG           0x10
#define EESPD_DETPAT_EESBD_SUBST_RDDATA                  0x20
#define EESPD_DETPAT_EESBD_SUBST_CHKBLKCS                0x30
#define EESPD_DETPAT_EESBD_STATE_WRDATA_SP_PROLOG        0x40
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_PROLOG        0x50
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_READ_ORDER_1  0x51
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_READ_ORDER_2  0x52
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_READ_ORDER_3  0x53
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_READ_ORDER_4  0x54
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_WRITE_ORDER_1 0x55
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_WRITE_ORDER_2 0x56
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_WRITE_ORDER_3 0x57
#define EESPD_DETPAT_EESBD_STATE_WRDATA_MP_WRITE_ORDER_4 0x58
#define EESPD_DETPAT_EESBD_STATE_CHKBLK_PROLOG           0x60
#define EESPD_DETPAT_EESBD_STATE_WRDATA_SP_WRITE_ORDER_1 0x70
#define EESPD_DETPAT_EESBD_STATE_WRDATA_SP_WRITE_ORDER_2 0x71

/* processes */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void Eespdd_Proc(void);
extern void Eespdd_Proc_Ini(void);

/* Interface function for EEPROM driver */
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern uint16 Eespdd_ReadPage  (uint16, uint16, uint8*, uint8*, uint8);
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern uint16 Eespdd_WritePage (uint16, uint16, uint8*, uint8*, uint8);

extern void Eespdd_StateMachine (void);
extern void Eespdd_Ini (void);

/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern void Eespdd_TrsRead (uint16, uint8);
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern void Eespdd_CopyPages (uint8* , uint16);
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern bool Eespdd_ComparePages (const uint8* , uint16);
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern void Eespdd_TrsWrite (const uint8* , uint16, uint16);

extern void Eespdd_InitRdWrStatus(void);

__PRAGMA_USE__CODE__eep__LowSpeed__END

/* _EESPDD_PROT_H */
#endif
