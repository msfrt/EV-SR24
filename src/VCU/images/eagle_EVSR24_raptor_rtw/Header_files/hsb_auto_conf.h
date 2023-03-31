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
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/

#ifndef _HSB_CONF_H
#define _HSB_CONF_H

 /*!
 *********************************************************************
 * \moduldescription
 *           automatically generated configuration file for HSB.
 *
 * \scope  CONF
 *********************************************************************
 */



#define HSB_PATTERN_START 0xA5A5A5A5ul
#define HSB_PATTERN_END 0xC3C3C3C3ul

/* Start address of flash area for trap monitor */
/* Start address of hsb constant */
#define HSB_START_HSB 0x8001FF00ul

/* Size of SB flash handler (bytes)*/
#define SB_FLASHHNDL_SIZE 0x1000

/* Address of CB */
#define HSB_CB_START 0x80000000ul

/* Address of CB copy page */
#define HSB_CB2_START 0x80984000ul

/* Definition of hw configurations in HSB */
typedef struct
{
	uint32	adExtRamStart;	/* Start address of external RAM */
	uint32	dExtRamSize;	/* Size of external RAM */
	uint32	xEBUMask_u32;	/* ebu mask for external RAM */
	uint32	xSlavePort_32;	/* port for master slave */
	uint32	xSlavePin_32;	/* mask of port pin for master slave */
	uint32	xActiveMaster_32;	/* active level for master */
	uint32	adrPort1_u32;	/* SPI address port 1 */
	uint32	xPort1Val_u32;	/* SPI value port 1 */
	uint32	xPort1Msk_u32;	/* SPI mask port 1 */
	uint32	adrPort2_u32;	/* SPI address port 2 */
	uint32	xPort2Val_u32;	/* SPI value port 2 */
	uint32	xPort2Msk_u32;	/* SPI mask port 2 */
	uint32	adrPort3_u32;	/* SPI address port 3 */
	uint32	xPort3Val_u32;	/* SPI value port 3 */
	uint32	xPort3Msk_u32;	/* SPI mask port 3 */
	uint32	adCanPortAdr_u32;	/* Address of IOCR for CAN port */
	uint32	xCanPortMsk_u32;	/* Mask of IOCR for CAN port */
	uint32	xCanPortVal_u32;	/* Value of IOCR for CAN port */
	uint32	xTicks2Us_u32;	/* Value for conversion ticks to microseconds */
	uint8	xPllK2Value_u8;	/* Value of k2 for PLL settings */
	uint8	xPllK3Value_u8;	/* Value of k3 for PLL settings */
	uint8	xPllK4Value_u8;	/* Value of k4 for PLL settings */
	uint8	xPllVcoSelValue_u8;	/* Value of VCOSEL for PLL settings */
	uint8	xPllNValue_u8;	/* Value of N for PLL settings */
	uint8	xWSIntFlash_u8;	/* Value of waitstates for internal flash */
	uint8	xPllK5Value_u8;	/* Value of k5 for PLL settings */
	uint8	dFreqModuactive_u8;	/* Enable Freq Modulation */
	uint8	dEBUactive_u8;	/* Enable Bus Unit */
	uint8   dReserved[15];
} HWDef_t;

/* Definition of projects configurations in HSB */
typedef struct
{
	uint32	adCB;	/* Start address of CB */
	uint32	adCBCopyPage;	/* Start address of copypage of CB */
	uint32	dSlaveRxMsgId_u32;	/* Slave CAN Rx Msg id */
	uint32	adrRST5IOCR_u32;	/* IOCR-address for RST5 input pin */
	uint32	xMskRST5IOCR_u32;	/* mask for IOCR register for RST5 input pin */
	uint32	xValRST5IOCR_u32;	/* value of IOCR register for RST5 input pin */
	uint32	adrRST5IN_u32;	/* IN-address for RST5 input pin */
	uint32	xMskRST5IN_u32;	/* IN-mask for RST5 input pin */
	uint32	adrSPIBase_u32;	/* SPI baseaddress */
	uint32	SPIPisel_u32;	/* SPI PISEL register value */
	uint32	xSPISsoc_u32;	/* SPI SSOC register value */
	uint32	xSPISsotc_u32;	/* SPI SSOTC register value */
	uint32	xSPICon_u32;	/* SPI CON register value */
	uint32	xSPIFdr_u32;	/* SPI FDR register value */
	uint32	xCanFDRValue_u32;	/* value for FDR */
	uint32	dSlaveTxMsgId_u32;	/* Slave CAN Tx Msg id */
	uint32	dTxMsgId;	/* CAN Tx Msg id */
	uint8	dTxMsgObj;	/* CAN Rx Msg object */
	uint8	dRxMsgObj;	/* CAN Rx Msg object */
	uint8	dSWResetStayRBProg;	/* Handle all sw resets in the SB */
	uint8	xCanNode;	/* Can node for programming */
	uint16	xCanBdr;	/* Value of NBTR register for programming */
	uint8	stDisableRBProg_u8;	/* Disable RB programming */
	uint8	xStabi_u8;	/* Stabi: 0: CY320, 1: CJ930, 2: CY327 */
	uint16	xESBScan_Msk0;	/* ESB Scan mask 0 */
	uint16	xESBScan_Msk1;	/* ESB Scan mask 1 */
	uint16	xESBScan_Msk2;	/* ESB Scan mask 2 */
	uint16	xESBScan_Msk3;	/* ESB Scan mask 3 */
	uint16	xESBScan_Msk4;	/* ESB Scan mask 4 */
	uint16	dummy2;	/* Dummy, placeholder2 */
	uint32	xMain_u32;	/* Address or symbol for main of next block */
	uint8	xPrjVersion0_u8;	/* Project specific id0 for readEcuIdentification */
	uint8	xPrjVersion1_u8;	/* Project specific id1 for readEcuIdentification */
	uint8	xPrjVersion2_u8;	/* Project specific id2 for readEcuIdentification */
	uint8	xPrjVersion3_u8;	/* Project specific id3 for readEcuIdentification */
	uint32	dRxMsgId;	/* CAN Rx Msg id */
	uint8	dReserved[0];
} PrjDef_t;

/* Definition of configuration structure for HSB */
typedef struct
{
	uint32    dPatternStart;         /* Start pattern of HSB                            */
	uint32    xSpeedGrade_u32;       /* Speed grade of cpu                              */
	uint32    dPrjId_u32;            /* Project Id (not used)                           */
	uint32    dPrjComp_u32;          /* Project Comp Id (not used)                      */
	HWDef_t   HWDef_s;               /* HW depended configuration                       */
	PrjDef_t  PrjDef_s;              /* Project depended configuration                  */
	uint32    dPatternEnd;           /* End pattern of HSB                              */
	uint32    dCheckSum_u32;         /* Checksum of HSB                                 */
} HSB_Conf_t;

extern const HSB_Conf_t HSB_Conf_cs;

#endif
