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
 * $Filename__:cj125_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:EGF2FE$
 * $Date______:28.10.2010$
 * $Class_____:SWHDR$
 * $Name______:cj125_pub$
 * $Variant___:1.10.0$
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
 * 1.10.0; 0     28.10.2010 EGF2FE
 *   MISRA warnings removed
 * 
 * 1.8.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cj125_pub.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CJ125_PUB_H
#define _CJ125_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Peripheral module driver for the CJ125.
 *
 * \scope API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/*------------------------------------------------------------------------------------------------*/
/* Define for Mode                                                                                */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* DEFINES for the INIT_REG1 - register                                                           */
/*------------------------------------------------------------------------------------------------*/

/* New names for the device driver macros                                                         */
#define CJ125_VL_HIGH       0x01
#define CJ125_VL_LOW        0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_VL_HIGH      CJ125_VL_HIGH
#define MCJ125_VL_LOW       CJ125_VL_LOW

/* New names for the device driver macros                                                         */
#define CJ125_LA_MEAS       0x00
#define CJ125_LA_ADJ        0x04
/* Old names for the device driver macros                                                         */
#define MCJ125_LA_MEAS      CJ125_LA_MEAS
#define MCJ125_LA_ADJ       CJ125_LA_ADJ

/* New names for the device driver macros                                                         */
#define CJ125_F3K_EN        0x08
#define CJ125_F3K_DIS       0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_F3K_EN       CJ125_F3K_EN
#define MCJ125_F3K_DIS      CJ125_F3K_DIS

/* New names for the device driver macros                                                         */
#define CJ125_RA_MEAS       0x00
#define CJ125_RA_ADJ        0x10
/* Old names for the device driver macros                                                         */
#define MCJ125_RA_MEAS      CJ125_RA_MEAS
#define MCJ125_RA_ADJ       CJ125_RA_ADJ

/* New names for the device driver macros                                                         */
#define CJ125_PA_ON         0x00
#define CJ125_PA_OFF        0x40
/* Old names for the device driver macros                                                         */
#define MCJ125_PA_ON        CJ125_PA_ON
#define MCJ125_PA_OFF       CJ125_PA_OFF

/* New names for the device driver macros                                                         */
#define CJ125_HOLD_EN       0x80
#define CJ125_HOLD_DIS      0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_HOLD_EN      CJ125_HOLD_EN
#define MCJ125_HOLD_DIS     CJ125_HOLD_DIS

/*------------------------------------------------------------------------------------------------*/
/* DEFINES for the INIT_REG2 - register                                                           */
/*------------------------------------------------------------------------------------------------*/

/* New names for the device driver macros                                                         */
#define CJ125_PC_10UA_EN    0x01
#define CJ125_PC_10UA_DIS   0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_PC_10UA_EN   CJ125_PC_10UA_EN
#define MCJ125_PC_10UA_DIS  CJ125_PC_10UA_DIS

/* New names for the device driver macros                                                         */
#define CJ125_PC_20UA_EN    0x02
#define CJ125_PC_20UA_DIS   0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_PC_20UA_EN   CJ125_PC_20UA_EN
#define MCJ125_PC_20UA_DIS  CJ125_PC_20UA_DIS

/* New names for the device driver macros                                                         */
#define CJ125_PC_40UA_EN    0x04
#define CJ125_PC_40UA_DIS   0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_PC_40UA_EN   CJ125_PC_40UA_EN
#define MCJ125_PC_40UA_DIS  CJ125_PC_40UA_DIS

/* New names for the device driver macros                                                         */
#define CJ125_PC_80UA_EN    0x08
#define CJ125_PC_80UA_DIS   0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_PC_80UA_EN   CJ125_PC_80UA_EN
#define MCJ125_PC_80UA_DIS  CJ125_PC_80UA_DIS

/* New names for the device driver macros                                                         */
#define CJ125_SCUN_EN       0x10
#define CJ125_SCUN_DIS      0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_SCUN_EN      CJ125_SCUN_EN
#define MCJ125_SCUN_DIS     CJ125_SCUN_DIS

/* New names for the device driver macros                                                         */
#define CJ125_DIAQ_SET      0x20
#define CJ125_DIAQ_CLR      0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_DIAQ_SET     CJ125_DIAQ_SET
#define MCJ125_DIAQ_CLR     CJ125_DIAQ_CLR

/* New names for the device driver macros                                                         */
#define CJ125_SRES_EN       0x40
#define CJ125_SRES_DIS      0x00
/* Old names for the device driver macros                                                         */
#define MCJ125_SRES_EN      CJ125_SRES_EN
#define MCJ125_SRES_DIS     CJ125_SRES_DIS

/*------------------------------------------------------------------------------------------------*/
/* Masks for Mode bits                                                                            */
/*------------------------------------------------------------------------------------------------*/
/* New names for the device driver macros                                                         */
#define CJ125_VL_MSK        0x01
#define CJ125_LA_MSK        0x04
#define CJ125_F3K_MSK       0x08
#define CJ125_RA_MSK        0x10
#define CJ125_PA_MSK        0x40
#define CJ125_HOLD_MSK      0x80
/* Old names for the device driver macros                                                         */
#define MCJ125_VL_MSK       CJ125_VL_MSK
#define MCJ125_LA_MSK       CJ125_LA_MSK
#define MCJ125_F3K_MSK      CJ125_F3K_MSK
#define MCJ125_RA_MSK       CJ125_RA_MSK
#define MCJ125_PA_MSK       CJ125_PA_MSK
#define MCJ125_HOLD_MSK     CJ125_HOLD_MSK

/* more masks for CJ125/126                                                                       */
/* New names for the device driver macros                                                         */
#define CJ125_PC10_MASK     0x01
#define CJ125_PC20_MASK     0x02
#define CJ125_PC40_MASK     0x04
#define CJ125_PC80_MASK     0x08
#define CJ125_SCUN_MASK     0x10
#define CJ125_DIAQ_MASK     0x20
#define CJ125_SRES_MASK     0x40
/* Old names for the device driver macros                                                         */
#define MCJ125_PC10_MASK    CJ125_PC10_MASK
#define MCJ125_PC20_MASK    CJ125_PC20_MASK
#define MCJ125_PC40_MASK    CJ125_PC40_MASK
#define MCJ125_PC80_MASK    CJ125_PC80_MASK
#define MCJ125_SCUN_MASK    CJ125_SCUN_MASK
#define MCJ125_DIAQ_MASK    CJ125_DIAQ_MASK
#define MCJ125_SRES_MASK    CJ125_SRES_MASK

/*------------------------------------------------------------------------------------------------*/
/* Bitposition for Mode Bits                                                                      */
/*------------------------------------------------------------------------------------------------*/
/* New names for the device driver macros                                                         */
#define CJ125_VL_BP         0
#define CJ125_LA_BP         2
#define CJ125_F3K_BP        3
#define CJ125_RA_BP         4
#define CJ125_PA_BP         6
#define CJ125_HOLD_BP       7
/* Old names for the device driver macros                                                         */
#define MCJ125_VL_BP        CJ125_VL_BP
#define MCJ125_LA_BP        CJ125_LA_BP
#define MCJ125_F3K_BP       CJ125_F3K_BP
#define MCJ125_RA_BP        CJ125_RA_BP
#define MCJ125_PA_BP        CJ125_PA_BP
#define MCJ125_HOLD_BP      CJ125_HOLD_BP

/* New names for the device driver macros                                                         */
#define CJ125_PC10_BP       0
#define CJ125_PC20_BP       1
#define CJ125_PC40_BP       2
#define CJ125_PC80_BP       3
#define CJ125_SCUN_BP       4
#define CJ125_DIAQ_BP       5
#define CJ125_SRES_BP       6
/* Old names for the device driver macros                                                         */
#define MCJ125_PC10_BP      CJ125_PC10_BP
#define MCJ125_PC20_BP      CJ125_PC20_BP
#define MCJ125_PC40_BP      CJ125_PC40_BP
#define MCJ125_PC80_BP      CJ125_PC80_BP
#define MCJ125_SCUN_BP      CJ125_SCUN_BP
#define MCJ125_DIAQ_BP      CJ125_DIAQ_BP
#define MCJ125_SRES_BP      CJ125_SRES_BP

/*------------------------------------------------------------------------------------------------*/
/* Bitposition for errors and flags at return value of Cj125_GetErrorInfo                         */
/* This bitpositions will be used as interfaces. DO NOT CHANGE !!!                                */
/*------------------------------------------------------------------------------------------------*/

#define CJ125_INTFC_SCB_BP  0
#define CJ125_INTFC_SCG_BP  1
#define CJ125_INTFC_OL_BP   5
#define CJ125_INTFC_COM_BP  6
#define CJ125_INTFC_SPI_BP  7
#define CJ125_INTFC_LB_BP   8
#define CJ125_INTFC_INIT_BP 9
#define CJ125_INTFC_NEW_BP  31


/*------------------------------------------------------------------------------------------------*/
/* Enumerator for diagnostic signals of CJ125 at Cj125_GetErrorInfo                               */
/* This signals will be used as interfaces. DO NOT CHANGE !!!                                     */
/*------------------------------------------------------------------------------------------------*/

enum CJ125_DIAG_SIGNALS
{
    CJ125_DIAG_VM,
    CJ125_DIAG_UN,
    CJ125_DIAG_IAIP,
    CJ125_DIAG_HEATER,
    CJ125_DIAG_CHIP,
    CJ125_NUM_DIAG_SIGNALS
};

/*------------------------------------------------------------------------------------------------*/
/* Enumerator for diagnosis of CJ125 devices at Cj125_GetErrorInfo                                */
/* This signals will be used as interfaces. DO NOT CHANGE !!!                                     */
/*------------------------------------------------------------------------------------------------*/

enum CJ125_DEVICES
{
    CJ125_1,
    CJ125_2,
    CJ125_3,
    CJ125_4,
    CJ125_5,
    CJ125_6,
    CJ125_7,
    CJ125_8,
    CJ125_9,
    CJ125_10,
    CJ125_NUM_DEVICES
};

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
__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void     Cj125_Proc_ini(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void     Cj125_Proc(void);
extern bit8     Cj125_GetMode(uint ChipNr_ui, uint *Mode_ui);
extern void     Cj125_SetMode(uint ChipNr_ui, uint Mode_ui);
extern uint32   Cj125_GetErrorInfo(uint16 ChipNr_u16, uint16 SignalNr_u16);
extern uint16   Cj125_GetDiaRawVal(uint16 ChipNr_u16, uint16 *RegVal_pu16);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__START
extern uint32 Cj125_stIniErr_b32[];
extern uint32 Cj125_stDrvErr_b32[];
__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__END

/* end of block: #ifndef _CJ125_PUB_H */
#endif
