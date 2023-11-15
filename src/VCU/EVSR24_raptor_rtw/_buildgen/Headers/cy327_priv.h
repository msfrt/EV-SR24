/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:cy327_priv.h$
 * $Author____:BAP2KOR$
 * $Function__:initial version$
 * $Domain____:SDOM$
 * $User______:DON1HC$
 * $Date______:03.03.2017$
 * $Class_____:SWHDR$
 * $Name______:cy327_priv$
 * $Variant___:1.19.2$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.19.2; 0     03.03.2017 DON1HC
 *   Bug-fix CAN Wakeup Locked issue for the platform latest version of Cy327
 * 
 * 1.19.1; 2     15.06.2016 DON1HC
 *   - Remove checking SCG at sensor supplies.
 * 
 * 1.19.1; 1     09.06.2016 DON1HC
 *   Update after review
 * 
 * 1.19.1; 0     08.06.2016 DON1HC
 *   -Fix Cy327 KeepAlive PMD error_reset
 * 
 * 1.18.0; 1     07.03.2014 PPH1HC
 *   Implementation of Periodic test pulse for sensor supply.
 *   
 *   -
 * 
 * 1.18.0; 0     21.02.2014 PPH1HC
 *   Implementation of Periodic test pulse for sensor supply.
 *   
 *   -
 * 
 * 1.16.1; 1     18.10.2013 PPH1HC
 *   Bugfix for debounce time of DFC_cy327spicom
 *   
 *   
 *   
 *   -
 * 
 * 1.16.1; 0     03.10.2013 PPH1HC
 *   Bugfix for debounce time of DFC_cy327spicom
 *   
 *   
 *   
 *   -
 * 
 * 1.16.0; 2     30.09.2013 GKI4KOR
 *   To change the Cy327_SensorSupplyControl interface  from Cy327_priv.h to 
 *   cy327_pub.h
 * 
 * 1.16.0; 1     03.09.2013 GKI4KOR
 *   Run time enable and disable of sensorsupply implemented
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CY327_PRIV_H
#define _CY327_PRIV_H

/**
 ***************************************************************************************************
 * moduledescription  :  private header for CY327 device driver
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define CY327_CHECK_BYTE_MASK           0x3E00             /* mask for the received checkbytes    */
#define CY327_CHECK_BYTE_VALUE          0x2A00             /* value of the checkbytes             */

/* SPI commands for the CY327                                                                     */
#define CY327_RD_IDENT                  0xC000
/*                                      0xC100                                                    */
#define CY327_RD_REV                    0xC200
/*                                      0xC300                                                    */
#define CY327_RD_CUI_ADR                0xC400
#define CY327_WR_CUI_ADR                0xC500
#define CY327_RD_WAK                    0xC600
/*                                      0xC700                                                    */
#define CY327_RD_STATUS                 0xC800
#define CY327_WR_STATUS                 0xC900
#define CY327_WR_STATUS0                CY327_WR_STATUS
#define CY327_WR_STATUS1                CY327_WR_STATUS
#define CY327_WR_STATUS2                CY327_WR_STATUS
#define CY327_WR_STATUS3                CY327_WR_STATUS
#define CY327_WR_STATUS_OFF             CY327_WR_STATUS
#define CY327_WR_STATUS_ON              CY327_WR_STATUS
#define CY327_WR_STATUS_ORI             CY327_WR_STATUS
#define CY327_RD_INIT                   0xCA00
#define CY327_WR_INIT                   0xCB00
#define CY327_RD_RESP_TIME              0xCC00
#define CY327_WR_RESP_TIME              0xCD00
#define CY327_RD_MR                     0xCE00
#define CY327_RD_MR0                    CY327_RD_MR
#define CY327_RD_MR1                    CY327_RD_MR
#define CY327_RD_MR2                    CY327_RD_MR
#define CY327_RD_MR3                    CY327_RD_MR
#define CY327_RD_MR_SCB                 CY327_RD_MR
#define CY327_RD_MR_OLSCG               CY327_RD_MR
#define CY327_RD_MR_OL                  CY327_RD_MR
#define CY327_WR_MR                     0xCF00
#define CY327_WR_MR0                    CY327_WR_MR
#define CY327_WR_MR1                    CY327_WR_MR
#define CY327_WR_MR2                    CY327_WR_MR
#define CY327_WR_MR3                    CY327_WR_MR
#define CY327_WR_MR_ORI                 CY327_WR_MR
#define CY327_RD_DIA_Gx_SCG             0xD000
/*                                      0xD100                                                    */
#define CY327_RD_DIA_Gx_REG             0xD200
/*                                      0xD300                                                    */
#define CY327_RD_VREG                   0xD400
#define CY327_WR_VREG                   0xD500
#define CY327_RD_REGOV                  0xD600
/*                                      0xD700                                                    */
#define CY327_RD_WAKPIN_INI             0xD800
#define CY327_WR_WAKPIN_INI             0xD900
#define CY327_RD_WAK_CAN                0xDA00
#define CY327_WR_WAK_CAN                0xDB00
#define CY327_WR_WAK_CAN1                CY327_WR_WAK_CAN
#define CY327_WR_WAK_CAN2                CY327_WR_WAK_CAN
#define CY327_RD_CAN_DIAG               0xDC00
/*                                      0xDD00                                                    */
#define CY327_RD_STC0                   0xDE00
#define CY327_RD_STC_TRIG               0xDE00 /*Trigger to capture STC value to Shadow Reg */
#define CY327_WR_STC0                   0xDF00
#define CY327_RD_STC1                   0xE000
#define CY327_WR_STC1                   0xE100
#define CY327_RD_STC2                   0xE200
#define CY327_WR_STC2                   0xE300
#define CY327_RD_STC_CON                0xE400
#define CY327_WR_STC_CON                0xE500
/*                                      0xE600                                                    */
#define CY327_WR_RESP                   0xE700
#define CY327_WR_RESP3                  CY327_WR_RESP
#define CY327_WR_RESP2                  CY327_WR_RESP
#define CY327_WR_RESP1                  CY327_WR_RESP
#define CY327_WR_RESP0                  CY327_WR_RESP
#define CY327_RD_REQULO                 0xE800
/*                                      0xE900                                                    */
#define CY327_RD_REQUHI                 0xEA00
/*                                      0xEB00                                                    */
#define CY327_RD_CNT                    0xEC00
/*                                      0xED00                                                    */
#define CY327_RD_AB1_LOCK               0xEE00
#define CY327_WR_AB1_LOCK               0xEF00
#define CY327_RD_CUI                    0xF000
#define CY327_WR_CUI                    0xF100
#define CY327_RD_CONF                   0xF200
#define CY327_WR_CONF                   0xF300
#define CY327_RD_SYSSTAT                0xF400
/*                                      0xF500                                                    */
/*                                      0xF600                                                    */
#define CY327_UNLOCK                    0xF755
/*                                      0xF800                                                    */
#define CY327_LOCK                      0xF9AA
/*                                      0xFA00                                                    */
#define CY327_SW_RST                    0xFBA5
/*                                      0xFC00                                                    */
#define CY327_RSTC_SW                   0xFD5A
/*                                      0xFE00                                                    */
#define CY327_TAP_ACCESS                0xFF00



/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**************************************************************************************************/
/* definitions sensor supply information                                                          */
/**************************************************************************************************/

/* possible monitoring module SPI transaction types                                               */
#define CY327_NOTRANS_E  0                 /* no transaction                                      */
#define CY327_RESPTIME_E 1                 /* "set response time" transaction                     */
#define CY327_TRANSMIT_E 2                 /* "standard" transaction                              */
#define CY327_REQQUERY_E 3                 /* "request query" transaction                         */

/**************************************************************************************************/
/* definitions NVRAM information                                                          */
/**************************************************************************************************/

#define CY327_NVRAM_SIZE  16                 /* 16 Registers (8 Bit Each) available for Customer Use */

/*
 ***************************************************************************************************
 * Variables and Structs
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/* This struct contains variable internal data for CY327                                          */
typedef struct
{
    uint32 diagSensorSupply_u32;                /* sensor supply information                      */
    uint32 diagMainRelay_u32;                   /* MR diagnosis status                            */
    uint8  ctProcCall_Dia_u8;                   /* process-call counter for cyclic sending        */
    uint8  ctProcCall_PowerGet_u8;              /* process-call counter for cyclic sending        */
    uint8  ActSeq_u8;                           /* flags for sending sequence on next process call*/
    uint8  CanStbyOri_u8;                       /* 1 if CAN_STBY is not initialisesed             */
    uint8 stSpicomErr_u8;                       /* Status of SPI error                            */
#if (CY327_NUM_CHIPS >= 2)
    uint8 stSpicomErr2_u8;                      /* Status of SPI error for second chip            */
#endif
} Cy327_VarChipInfo_t;


/* define for bits inside the ActSeq_u8 */
#define   CY327_REQ_POWERSET 0x01
#define   CY327_REQ_STCSET   0x02
#define   CY327_REQ_NVRWR    0x04
#define   CY327_REQ_NVRRD    0x08
#define   CY327_REQ_POWERSET2 0x10
#define   CY327_REQ_CANLOCKEDSET 0x20

#define   CY327_MICROSECPERTICK  1600u
/* Define for Peripheral Monitoring */
#define CY327_COM_ERRCTR_LIMIT               10

#define CY327_INIT_PM_STATUS_MSK             0xD0
#define CY327_INIT_PM_INIT_MSK               0x78                /* Remove G1,G2,G3 bit masks */
#define CY327_INIT_PM_WAKPIN_MSK             0xDF
#define CY327_INIT_PM_LOCK_MSK               0x20
#define CY327_CANWAKEUPLOCKED_MSK            0x14                /* Check  CAN_STBY and R_WAK_CAN bits */

#define CY327_CHIP_ONE                       0
#define CY327_CHIP_TWO                       1
#define CY327_SPI_CHKBYTE_ERR                0x01               /* SPI checkbyte error */
#define CY327_SPI_ACTIVE_TX_ERR              0x02               /* Spi_ActvTx eror */
#define CY327_SPI_DIAGSEQ_ERR_MASK           (CY327_SPI_CHKBYTE_ERR | CY327_SPI_ACTIVE_TX_ERR)
#define CY327_SPI_DIAGSEQ_DLY_CNTR           2
/*
 ***************************************************************************************************
 * Definitions for External Voltage tracker
 ***************************************************************************************************
 */
#define EVT_DFC_SCG_FAULT                    0x01               /* Evt short circuit ground */
#define EVT_DFC_UV_FAULT                     0x02               /* Evt Over voilage         */
#define EVT_DFC_FAULT_MASK                   (EVT_DFC_SCG_FAULT | EVT_DFC_UV_FAULT)

/*
 ***************************************************************************************************
 * Definitions for Chip type detection
 ***************************************************************************************************
 */
#define CY327_STEP_A                         0x00
#define CY327_STEP_B                         0x01


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern       Cy327_VarChipInfo_t    Cy327_VarChipInfo_s;
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__x8__START
extern       uint8                  Cy327_numLastTrans_u8;
extern       uint8                  Cy327_xNvramBuffer_u8[CY327_NVRAM_SIZE];
extern       uint8                  Cy327_Chip1_Step_u8;

extern       bool                Cy327_G1stSwitchoff_b;
extern       bool                Cy327_G2stSwitchoff_b;
extern       bool                Cy327_G3stSwitchoff_b;

#if (CY327_NUM_CHIPS >= 2)
extern       uint8                  Cy327_Chip2_Step_u8;
extern       bool                Cy327_G5tstPlsRunning_b;
extern       bool                Cy327_G6tstPlsRunning_b;
extern       bool                Cy327_G7tstPlsRunning_b;
#endif
#ifdef CY327_IN_STM
extern       uint8                  Cy327_StLatch_u8;
#endif
__PRAGMA_USE__hwe__1_5ms__InitRAM__x8__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__x16__START
extern       uint16              Cy327_xPowerSetBuffer_au16[CY327_PWRSET_LEN];
extern       uint16              Cy327_xPowerGetBuffer_au16[CY327_PWRGET_LEN];
extern       uint16              Cy327_xStopCounterSetBuffer_au16[CY327_STCSET_LEN];
extern       uint16              Cy327_xNvramWriteBuffer_au16[CY327_NVRWR_LEN];
extern       uint16 Cy327_ctG1TstplsRecover_u16 ;     /* counter for Recover time                         */
extern       uint16 Cy327_ctG2TstplsRecover_u16  ;    /* counter for Recover time                         */
extern       uint16 Cy327_ctG3TstplsRecover_u16 ;     /* counter for Recover time                         */
#if (CY327_NUM_CHIPS >= 2)
extern       uint16              Cy327_xPowerSet2Buffer_au16[CY327_PWRSET2_LEN];
extern       uint16              Cy327_xPowerGet2Buffer_au16[CY327_PWRGET2_LEN];
#endif

__PRAGMA_USE__hwe__1_5ms__InitRAM__x16__END





__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__START
extern       uint32                  Cy327_LastStopCounterVal_u32;
__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern       void                   Cy327_UpdatePowerGetBuffer(void);
extern       void                   Cy327_UpdateStopCounterBuffer(void);
extern       void                   Cy327_CopyBackPowerSetBuffer(void);
#if (CY327_NUM_CHIPS >= 2)
extern       void                   Cy327_UpdatePowerGet2Buffer(void);
extern       void                   Cy327_CopyBackPowerSet2Buffer(void);
#endif
extern       void                   Cy327_CopyBackStopCounter(void);
extern       void                   Cy327_UpdateNvramBuffer(void);
extern       void                   Cy327_CopyBackNvramWriteBuffer(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__START
extern uint8 Cy327_ctComErr_u8[];
extern bool  Cy327_stComErrHeal_b[];
__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__END




/* _CY327_PRIV_H */
#endif
