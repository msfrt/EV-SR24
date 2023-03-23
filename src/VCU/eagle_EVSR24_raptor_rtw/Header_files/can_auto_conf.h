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
 * $Filename__:can_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:BUR6KOR$ 
 * $Date______:14.10.2013$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:can_template_conf$ 
 * $Variant___:1.20.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.20.0; 0     14.10.2013 BUR6KOR
 *   A new interface is provided which will append SAE J1850 8bit CRC for the 
 *   
 *     received message if the received DLC is equal to 8 and application buffer
 *    is 
 *   
 *     alligned to 16bit boundary.
 *   
 *     Projects which want to use this new interface should allocate buffer of 
 *   size 
 *   
 *     DLC+1.
 * 
 * 1.18.0; 1     18.02.2013 AKN4KOR
 *   changes after review
 * 
 * 1.18.0; 0     13.02.2013 AKN4KOR
 *   Provided CAN SWRESET macro
 * 
 * 1.17.0; 0     25.01.2012 GPG1KOR
 *   Changes :
 *   
 *   1. Possibility to use the customer supplied msg id given.
 *   
 *   2. Single hex for series and development ECU - VM-I Requirements are 
 *   implemented onto PLS MX17 platform with configuration tag.
 * 
 * 1.16.0; 0     21.09.2011 GPG1KOR
 *   CAN Package update for following changes :
 *   
 *   Check of ID and DLC fields of msg object is done along with MODATA register
 *    in CAN DpramCheck.
 *   Fix for the Can_ChangeMsgID issue.
 * 
 * 1.12.0; 1     18.05.2010 GPG1KOR
 *   Updated for the changes done to remove workaround for Errata - 
 *   MULTICAN_TC.021: Wrong MultiCAN identifier-transmission.
 * 
 * 1.12.0; 0     18.05.2010 GPG1KOR
 *   CAN package B_CAN.12.0.0 update - For the changes to consider the buffers 
 *   required for Multiplexed messages in calculation of Maximum number of 
 *   buffers required.
 *   Calculation updated in perl module.
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: can_template_conf.ht
 *      Version: \main\basis\b_CORE\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CAN_AUTO_CONF_H
#define _CAN_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                 can_auto_conf.h
 *
 * \scope
 ***************************************************************************************************
 */
/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

 /*
 **************************************************************************************************
 * Defines
 **************************************************************************************************
 */


#define CAN_USE

#define     CAN_NUM_NODE                 4                   /* Number of nodes used */
#define     CAN_NUM_MAX_BAUDRATE         5            /* Number of MaxBaurate used */
#define     CAN_MSG_START                0
#define     CAN_MSG_END                  128
#define     CAN_GATEWAYMSG_START         128
#define     CAN_GATEWAYMSG_END           128
#define     CAN_FIFOMSG_START            128
#define     CAN_FIFOMSG_END              128
#define     CAN_FIFOMSG_ENABLE           FALSE
#define     CAN_GATEWAYMSG_ENABLE        FALSE
#define     CAN_MSGOBJ_PRIORITY_ENABLE   FALSE
#define     CAN_MSG_INTR_START           0
#define     CAN_MSG_INTR_END             4
#define     CAN_FIFOMSG_INTR_START       4
#define     CAN_FIFOMSG_INTR_END         
#define     CAN_DPRAM_CHECK              TRUE
#define     CAN_SWRESET_ENABLE           TRUE
#define     CAN_DPRAM_ID_DLC_CHECK       FALSE
#define		CAN_USE_CUSTOMER_CALIB		 FALSE
#define		CAN_SINGLE_HEX_FUNC 		 FALSE



#define CAN_QUEUE_TX 11												   /* for queue configuration */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

__PRAGMA_USE__can__1_5ms__constant__x32__START

extern uint32 Can_MsgId0_u32;
 extern uint32 Can_MsgId1_u32;
 extern uint32 Can_MsgId2_u32;
 extern uint32 Can_MsgId3_u32;
 extern uint32 Can_MsgId4_u32;
 extern uint32 Can_MsgId5_u32;
 extern uint32 Can_MsgId6_u32;
 extern uint32 Can_MsgId7_u32;
 extern uint32 Can_MsgId8_u32;
 extern uint32 Can_MsgId9_u32;
 extern uint32 Can_MsgId10_u32;
 extern uint32 Can_MsgId11_u32;
 extern uint32 Can_MsgId12_u32;
 extern uint32 Can_MsgId13_u32;
 extern uint32 Can_MsgId14_u32;
 extern uint32 Can_MsgId15_u32;
 extern uint32 Can_MsgId16_u32;
 extern uint32 Can_MsgId17_u32;
 extern uint32 Can_MsgId18_u32;
 extern uint32 Can_MsgId19_u32;
 extern uint32 Can_MsgId20_u32;
 extern uint32 Can_MsgId21_u32;
 extern uint32 Can_MsgId22_u32;
 extern uint32 Can_MsgId23_u32;
 extern uint32 Can_MsgId24_u32;
 extern uint32 Can_MsgId25_u32;
 extern uint32 Can_MsgId26_u32;
 extern uint32 Can_MsgId27_u32;
 extern uint32 Can_MsgId28_u32;
 extern uint32 Can_MsgId29_u32;
 extern uint32 Can_MsgId30_u32;
 extern uint32 Can_MsgId31_u32;
 extern uint32 Can_MsgId32_u32;
 extern uint32 Can_MsgId33_u32;
 extern uint32 Can_MsgId34_u32;
 extern uint32 Can_MsgId35_u32;
 extern uint32 Can_MsgId36_u32;
 extern uint32 Can_MsgId37_u32;
 extern uint32 Can_MsgId38_u32;
 extern uint32 Can_MsgId39_u32;
 extern uint32 Can_MsgId40_u32;
 extern uint32 Can_MsgId41_u32;
 extern uint32 Can_MsgId42_u32;
 extern uint32 Can_MsgId43_u32;
 extern uint32 Can_MsgId44_u32;
 extern uint32 Can_MsgId45_u32;
 extern uint32 Can_MsgId46_u32;
 extern uint32 Can_MsgId47_u32;
 extern uint32 Can_MsgId48_u32;
 extern uint32 Can_MsgId49_u32;
 extern uint32 Can_MsgId50_u32;
 extern uint32 Can_MsgId51_u32;
 extern uint32 Can_MsgId52_u32;
 extern uint32 Can_MsgId53_u32;
 extern uint32 Can_MsgId54_u32;
 extern uint32 Can_MsgId55_u32;
 extern uint32 Can_MsgId56_u32;
 extern uint32 Can_MsgId57_u32;
 extern uint32 Can_MsgId58_u32;
 extern uint32 Can_MsgId59_u32;
 extern uint32 Can_MsgId60_u32;
 extern uint32 Can_MsgId61_u32;
 extern uint32 Can_MsgId62_u32;
 extern uint32 Can_MsgId63_u32;
 extern uint32 Can_MsgId64_u32;
 extern uint32 Can_MsgId65_u32;
 extern uint32 Can_MsgId66_u32;
 extern uint32 Can_MsgId67_u32;
 extern uint32 Can_MsgId68_u32;
 extern uint32 Can_MsgId69_u32;
 extern uint32 Can_MsgId70_u32;
 extern uint32 Can_MsgId71_u32;
 extern uint32 Can_MsgId72_u32;
 extern uint32 Can_MsgId73_u32;
 extern uint32 Can_MsgId74_u32;
 extern uint32 Can_MsgId75_u32;
 extern uint32 Can_MsgId76_u32;
 extern uint32 Can_MsgId77_u32;
 extern uint32 Can_MsgId78_u32;
 extern uint32 Can_MsgId79_u32;
 extern uint32 Can_MsgId80_u32;
 extern uint32 Can_MsgId81_u32;
 extern uint32 Can_MsgId82_u32;
 extern uint32 Can_MsgId83_u32;
 extern uint32 Can_MsgId84_u32;
 extern uint32 Can_MsgId85_u32;
 extern uint32 Can_MsgId86_u32;
 extern uint32 Can_MsgId87_u32;
 extern uint32 Can_MsgId88_u32;
 extern uint32 Can_MsgId89_u32;
 extern uint32 Can_MsgId90_u32;
 extern uint32 Can_MsgId91_u32;
 extern uint32 Can_MsgId92_u32;
 extern uint32 Can_MsgId93_u32;
 extern uint32 Can_MsgId94_u32;
 extern uint32 Can_MsgId95_u32;
 extern uint32 Can_MsgId96_u32;
 extern uint32 Can_MsgId97_u32;
 extern uint32 Can_MsgId98_u32;
 extern uint32 Can_MsgId99_u32;
 extern uint32 Can_MsgId100_u32;
 extern uint32 Can_MsgId101_u32;
 extern uint32 Can_MsgId102_u32;
 extern uint32 Can_MsgId103_u32;
 extern uint32 Can_MsgId104_u32;
 extern uint32 Can_MsgId105_u32;
 extern uint32 Can_MsgId106_u32;
 extern uint32 Can_MsgId107_u32;
 extern uint32 Can_MsgId108_u32;
 extern uint32 Can_MsgId109_u32;
 extern uint32 Can_MsgId110_u32;
 extern uint32 Can_MsgId111_u32;
 extern uint32 Can_MsgId112_u32;
 extern uint32 Can_MsgId113_u32;
 extern uint32 Can_MsgId114_u32;
 extern uint32 Can_MsgId115_u32;
 extern uint32 Can_MsgId116_u32;
 extern uint32 Can_MsgId117_u32;
 extern uint32 Can_MsgId118_u32;
 extern uint32 Can_MsgId119_u32;
 extern uint32 Can_MsgId120_u32;
 extern uint32 Can_MsgId121_u32;
 extern uint32 Can_MsgId122_u32;
 extern uint32 Can_MsgId123_u32;
 extern uint32 Can_MsgId124_u32;
 extern uint32 Can_MsgId125_u32;
 extern uint32 Can_MsgId126_u32;
 extern uint32 Can_MsgId127_u32;


extern const uint32 Can_BaudrateCANA;
 extern const uint32 Can_BaudrateCANB;
 extern const uint32 Can_BaudrateCANC;
 extern const uint32 Can_BaudrateCAND;



__PRAGMA_USE__can__1_5ms__constant__x32__END

__PRAGMA_USE__can__1_5ms__constant__arr16__START


extern const uint16 CCP_VARIANT_1_MsgHandleList_ua16[];
  
extern const uint16 CCP_VARIANT_SERIES_MsgHandleList_ua16[];
 

__PRAGMA_USE__can__1_5ms__constant__arr16__END

__PRAGMA_USE__can__1_5ms__constant__arr8__START



__PRAGMA_USE__can__1_5ms__constant__arr8__END

typedef enum
{
    CCP,
    
    CAN_DEFAULT,
    CAN_NUM_USERS_E
}Can_Users_t;


/* Enumeration to indicate number of messages */
typedef enum
{
    CAN_NE_HNDL0,
    CAN_NE_HNDL1,
    CAN_NE_HNDL2,
    CAN_NE_HNDL3,
    CAN_NE_HNDL4,
    CAN_NE_HNDL5,
    CAN_NE_HNDL6,
    CAN_NE_HNDL7,
    CAN_NE_HNDL8,
    CAN_NE_HNDL9,
    CAN_NE_HNDL10,
    CAN_NE_HNDL11,
    CAN_NE_HNDL12,
    CAN_NE_HNDL13,
    CAN_NE_HNDL14,
    CAN_NE_HNDL15,
    CAN_NE_HNDL16,
    CAN_NE_HNDL17,
    CAN_NE_HNDL18,
    CAN_NE_HNDL19,
    CAN_NE_HNDL20,
    CAN_NE_HNDL21,
    CAN_NE_HNDL22,
    CAN_NE_HNDL23,
    CAN_NE_HNDL24,
    CAN_NE_HNDL25,
    CAN_NE_HNDL26,
    CAN_NE_HNDL27,
    CAN_NE_HNDL28,
    CAN_NE_HNDL29,
    CAN_NE_HNDL30,
    CAN_NE_HNDL31,
    CAN_NE_HNDL32,
    CAN_NE_HNDL33,
    CAN_NE_HNDL34,
    CAN_NE_HNDL35,
    CAN_NE_HNDL36,
    CAN_NE_HNDL37,
    CAN_NE_HNDL38,
    CAN_NE_HNDL39,
    CAN_NE_HNDL40,
    CAN_NE_HNDL41,
    CAN_NE_HNDL42,
    CAN_NE_HNDL43,
    CAN_NE_HNDL44,
    CAN_NE_HNDL45,
    CAN_NE_HNDL46,
    CAN_NE_HNDL47,
    CAN_NE_HNDL48,
    CAN_NE_HNDL49,
    CAN_NE_HNDL50,
    CAN_NE_HNDL51,
    CAN_NE_HNDL52,
    CAN_NE_HNDL53,
    CAN_NE_HNDL54,
    CAN_NE_HNDL55,
    CAN_NE_HNDL56,
    CAN_NE_HNDL57,
    CAN_NE_HNDL58,
    CAN_NE_HNDL59,
    CAN_NE_HNDL60,
    CAN_NE_HNDL61,
    CAN_NE_HNDL62,
    CAN_NE_HNDL63,
    CAN_NE_HNDL64,
    CAN_NE_HNDL65,
    CAN_NE_HNDL66,
    CAN_NE_HNDL67,
    CAN_NE_HNDL68,
    CAN_NE_HNDL69,
    CAN_NE_HNDL70,
    CAN_NE_HNDL71,
    CAN_NE_HNDL72,
    CAN_NE_HNDL73,
    CAN_NE_HNDL74,
    CAN_NE_HNDL75,
    CAN_NE_HNDL76,
    CAN_NE_HNDL77,
    CAN_NE_HNDL78,
    CAN_NE_HNDL79,
    CAN_NE_HNDL80,
    CAN_NE_HNDL81,
    CAN_NE_HNDL82,
    CAN_NE_HNDL83,
    CAN_NE_HNDL84,
    CAN_NE_HNDL85,
    CAN_NE_HNDL86,
    CAN_NE_HNDL87,
    CAN_NE_HNDL88,
    CAN_NE_HNDL89,
    CAN_NE_HNDL90,
    CAN_NE_HNDL91,
    CAN_NE_HNDL92,
    CAN_NE_HNDL93,
    CAN_NE_HNDL94,
    CAN_NE_HNDL95,
    CAN_NE_HNDL96,
    CAN_NE_HNDL97,
    CAN_NE_HNDL98,
    CAN_NE_HNDL99,
    CAN_NE_HNDL100,
    CAN_NE_HNDL101,
    CAN_NE_HNDL102,
    CAN_NE_HNDL103,
    CAN_NE_HNDL104,
    CAN_NE_HNDL105,
    CAN_NE_HNDL106,
    CAN_NE_HNDL107,
    CAN_NE_HNDL108,
    CAN_NE_HNDL109,
    CAN_NE_HNDL110,
    CAN_NE_HNDL111,
    CAN_NE_HNDL112,
    CAN_NE_HNDL113,
    CAN_NE_HNDL114,
    CAN_NE_HNDL115,
    CAN_NE_HNDL116,
    CAN_NE_HNDL117,
    CAN_NE_HNDL118,
    CAN_NE_HNDL119,
    TP_DIAG_UDS_rx0,
    TP_DIAG_UDS_rx1,
    TP_DIAG_UDS_tx,
    CCP_transmit,
    CCP_receive,
    CCP_DAQ0_Trans,
    CCP_DAQ1_Trans,
    CCP_DAQ2_Trans,
   

    CAN_MSG_OBJ_LEN_E
}Can_MsgNames_t;

/* Configuration for enabling TX Queues                                                           */
#define CAN_TX_QUEUE_ENABLE  0

/* Number of Configured Tx Queues                                                                 */
#define CAN_NUM_TX_QUEUES_E    1
/* Total number of Configured Tx Queue messages                                                   */
#define CAN_NUM_TX_QUEUES_MSG  1

/* Enum List of CAN Transmit Queues                                                               */
typedef enum
{
   
  CAN_ENUM_MUXTX_E
}Can_Tx_Queues_t;


/* Configuration for enabling RX MUX Queues                                                       */
#define CAN_RX_QUEUE_ENABLE  0

/* Configuration for enabling RX MUX Queues                                                       */
#define CAN_NUM_RX_QUEUES_E  0

/* Enum List of CAN Receive Queues                                                               */
typedef enum
{
   
  CAN_ENUM_MUXRX_E
}Can_Rx_Queues_t;


/*Message table Variant */
typedef struct
{
    uint8            size_u8;             /**< number of Messages for Variant table */
    const uint16 *MsgHandleList_ua16;     /**< Message Handle Array */
}Can_Variant_t;

/*
 *********************************************************************
 * used functions
 *********************************************************************
 */

__PRAGMA_USE__CODE__can__NormalSpeed__START

#if (CAN_USE_CUSTOMER_CALIB)
extern void Can_ExternCal_Ini(void);
#endif


extern void  CANTx_Buffer2(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  IsoTp_TxCallback(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CAN_NewEagle_Receive_MSG_STD_Node3(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer7(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  IsoTp_RxMsg(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer4(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CAN_NewEagle_Receive_MSG_EXD_Node2(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer11(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CAN_NewEagle_Receive_MSG_EXD_Node1(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer12(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer9(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer10(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CAN_NewEagle_Receive_MSG_EXD_Node3(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer6(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer5(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CAN_NewEagle_Receive_MSG_STD_Node2(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer3(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer8(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);

extern void  CANTx_Buffer1(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8, uint8 *msgData_pu8);




 extern const Can_Variant_t CCP_VARIANT_1;

 extern const Can_Variant_t CCP_VARIANT_SERIES;



__PRAGMA_USE__CODE__can__NormalSpeed__END

__PRAGMA_USE__CODE__can__HighSpeed__START


extern void  Ccp_CanCallback(void);


__PRAGMA_USE__CODE__can__HighSpeed__END

__PRAGMA_USE__can__1_5ms__constant__arr16__START

extern const uint16 CanDefault_MsgHandle_ua16[];

__PRAGMA_USE__can__1_5ms__constant__arr16__END

__PRAGMA_USE__can__1_5ms__constant__s32__START

extern const Can_Variant_t  CanDefault_s;


__PRAGMA_USE__can__1_5ms__constant__s32__END


/* end of #ifdef _LIBRARYABILITY_H block */
#endif

/* end of #ifdef _CAN_AUTO_CONF_H block */
#endif
