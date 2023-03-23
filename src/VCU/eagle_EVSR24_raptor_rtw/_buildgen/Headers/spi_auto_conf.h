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
 * $Filename__:spi_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:SRU1COB$
 * $Date______:18.08.2011$
 * $Class_____:CONFTPLHDR$
 * $Name______:spi_template_conf$
 * $Variant___:1.12.0$
 * $Revision__:2$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.12.0; 2     18.08.2011 SRU1COB
 *   update review points
 * 
 * 1.12.0; 1     02.08.2011 SRU1COB
 *   update review comments
 * 
 * 1.12.0; 0     05.07.2011 SRU1COB
 *   update spec
 *   support more than two SSC module
 * 
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: spi_template_conf.ht
 *      Version: \main\9
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _SPI_AUTO_CONF_H
#define _SPI_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * configuration of SPI interface layer
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* macros containing types for declaration of RAM and FLASH buffers for transmit and receive data */
#define SPI_TXRAM_16_BIT    uint16
#define SPI_RXRAM_16_BIT    uint16
#define SPI_TXFLASH_16_BIT  const uint16 __attribute__ ((asection(".data","f=aw")))
#define SPI_TXRAM_8_BIT     uint8
#define SPI_RXRAM_8_BIT     uint8
#define SPI_TXFLASH_8_BIT   const uint8 __attribute__ ((asection(".data","f=aw")))

/* indices used to select SSC module */
#define SPI_SSC0_IDX        0UL
#define SPI_SSC1_IDX        1UL
#define SPI_NUM_SSC         2UL


/* activate SPI bus and queue load monitoring */
/* #define SPI_MONITORING */


/* activate SPI debugging */
/* #define SPI_DEBUG */


/* generated macros for SPI register access and SPI register definitions
   (these macros are generated from a constant table which is part of the configuration script;
    in case of new machine types this table must be verified and updated) */
#define SPI_BR_BRVALUE_MSK          0x0000FFFFUL
#define SPI_CON_PO_MSK              0x00000040UL
#define SPI_CON_EN_MSK              0x00008000UL
#define SPI_CON_EN_POS              15
#define SPI_SSO_0                   0x0100
#define SPI_SSO_1                   0x0200
#define SPI_SSO_2                   0x0400
#define SPI_SSO_3                   0x0800
#define SPI_SSO_4                   0x1000
#define SPI_SSO_5                   0x2000
#define SPI_SSO_6                   0x4000
#define SPI_SSO_7                   0x8000
#define SPI_SSOTC_INACT_MSK         0x00000030UL
#define SPI_SSOTC_INACT_POS         4
#define SPI_STAT_BSY_POS            12
#define SPI_SSOC_OEN0_POS           8
#define SPI_SSC0_SSO_ACT_POL        0x00000000UL
#define SPI_SSC1_SSO_ACT_POL        0x00000000UL


/* miscellaneous macros used by SPI low level driver */
#define SPI_FLAGS_DATA_WIDTH_MSK    0x01
#define SPI_FLAGS_DATA_WIDTH_8BIT   0x00
#define SPI_FLAGS_BURST_MSK         0x02
#define SPI_FLAGS_BURST_ACT         0x02
#define SPI_FLAGS_BURST_INACT       0x00
#define SPI_FLAGS_SLSO_EMU_MSK      0x04
#define SPI_FLAGS_SLSO_EMU_ACT      0x04
#define SPI_FLAGS_SLSO_EMU_INACT    0x00
#define SPI_FLAGS_SLSO_ACT_POL_MSK  0x08
#define SPI_FLAGS_SLSO_ACT_POL_LOW  0x00


/***************************************************************************************************
 * general macro to indicate that the SPI driver is configured
 **************************************************************/

#define SPI_CONFIGURED

/* select internal Tx/Rx data transfer by DMA or PCP */
#define SPI_PCP_DATA_TRANS

/***************************************************************************************************
 * macros for SSC0
 ******************/

/* indicate a configured SSC0 module */
#define SPI_SSC0_CONFIGURED

/* size of the high and low priority SPI queues of SSC0 */
#define SPI_SSC0_HI_PRIO_Q_LEN  8
#define SPI_SSC0_LO_PRIO_Q_LEN  32

/* initialization value for PISEL register */
#define SPI_SSC0_PISEL_INI_VAL  0x0000

/***************************************************************************************************
 * macros for SSC1
 ******************/

/* indicate a configured SSC1 module */
#define SPI_SSC1_CONFIGURED

/* size of the high and low priority SPI queues of SSC1 */
#define SPI_SSC1_HI_PRIO_Q_LEN  8
#define SPI_SSC1_LO_PRIO_Q_LEN  64

/* initialization value for PISEL register */
#define SPI_SSC1_PISEL_INI_VAL  0x0000

/***************************************************************************************************
 * macros for interface Spi_ShDwnTrans
 ******************************/

#define SPI_SHDWNTRANS_MOD       SSC0
#define SPI_SHDWNTRANS_CON_VAL   0x0000C01FUL
#define SPI_SHDWNTRANS_BR_VAL    0x00000009UL
#define SPI_SHDWNTRANS_SSOC_VAL  0x00004000UL
#define SPI_SHDWNTRANS_SSOTC_VAL 0x00000011UL



/* Macros for array index */
#define SPI_NUM_PCP_PRIO  2


/* Macros to access different variables of array Spi_PcpModPrio_cau32 */
#define SPI_PCP_DATA_TRANS_PRIO_IDX  0
#define SPI_PCP_SWT_CLK_PRIO_IDX     1



/***************************************************************************************************
 * defines for all configured SPI sequence definitions
 ******************************************************/

/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_ConfDspSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_CONFDSPSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_CONFDSPSEQ_CS_SEQ_DEF                                                           \
    &Cj135_Dev1_stConfDspSeq,                                                                      \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xConfDspSeqRxBuf_u16[0]},                                     \
    {(const void * const)&Cj135_Dev1_xConfDspSeqTxBuf_u16[0]},                                     \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_IpoffSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_IPOFFSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_IPOFFSEQ_CS_SEQ_DEF                                                             \
    &Cj135_Dev1_stIpoffSeq,                                                                        \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xIpoffSeqRxBuf_u16[0]},                                       \
    {(const void * const)&Cj135_Dev1_xIpoffSeqTxBuf_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_ModeSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_MODESEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_MODESEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev1_stModeSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xModeSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev1_xModeSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_RefpatSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_REFPATSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_REFPATSEQ_CS_SEQ_DEF                                                            \
    &Cj135_Dev1_stRefpatSeq,                                                                       \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xRefpatSeqRxBuf_u16[0]},                                      \
    {(const void * const)&Cj135_Dev1_xRefpatSeqTxBuf_u16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_SteerpatSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_STEERPATSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_STEERPATSEQ_CS_SEQ_DEF                                                          \
    &Cj135_Dev1_stSteerpatSeq,                                                                     \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xSteerpatSeqRxBuf_u16[0]},                                    \
    {(const void * const)&Cj135_Dev1_xSteerpatSeqTxBuf_u16[0]},                                    \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_TrimSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_TRIMSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_TRIMSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev1_stTrimSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xTrimSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev1_xTrimSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_UnBxSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_UNBXSEQ_CS_SEQ_LEN 10

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_UNBXSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev1_stUnBxSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xUnBxSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev1_xUnBxSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    10,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_UnsetSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_UNSETSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_UNSETSEQ_CS_SEQ_DEF                                                             \
    &Cj135_Dev1_stUnsetSeq,                                                                        \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xUnsetSeqRxBuf_u16[0]},                                       \
    {(const void * const)&Cj135_Dev1_xUnsetSeqTxBuf_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_Up0Seq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_UP0SEQ_CS_SEQ_LEN 7

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_UP0SEQ_CS_SEQ_DEF                                                               \
    &Cj135_Dev1_stUp0Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xUp0SeqRxBuf_u16[0]},                                         \
    {(const void * const)&Cj135_Dev1_xUp0SeqTxBuf_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    7,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev1_UpBxSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV1_UPBXSEQ_CS_SEQ_LEN 10

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV1_UPBXSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev1_stUpBxSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1_xUpBxSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev1_xUpBxSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    10,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_ConfDspSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_CONFDSPSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_CONFDSPSEQ_CS_SEQ_DEF                                                           \
    &Cj135_Dev2_stConfDspSeq,                                                                      \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xConfDspSeqRxBuf_u16[0]},                                     \
    {(const void * const)&Cj135_Dev2_xConfDspSeqTxBuf_u16[0]},                                     \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_IpoffSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_IPOFFSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_IPOFFSEQ_CS_SEQ_DEF                                                             \
    &Cj135_Dev2_stIpoffSeq,                                                                        \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xIpoffSeqRxBuf_u16[0]},                                       \
    {(const void * const)&Cj135_Dev2_xIpoffSeqTxBuf_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_ModeSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_MODESEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_MODESEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev2_stModeSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xModeSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev2_xModeSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_RefpatSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_REFPATSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_REFPATSEQ_CS_SEQ_DEF                                                            \
    &Cj135_Dev2_stRefpatSeq,                                                                       \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xRefpatSeqRxBuf_u16[0]},                                      \
    {(const void * const)&Cj135_Dev2_xRefpatSeqTxBuf_u16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_SteerpatSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_STEERPATSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_STEERPATSEQ_CS_SEQ_DEF                                                          \
    &Cj135_Dev2_stSteerpatSeq,                                                                     \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xSteerpatSeqRxBuf_u16[0]},                                    \
    {(const void * const)&Cj135_Dev2_xSteerpatSeqTxBuf_u16[0]},                                    \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_TrimSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_TRIMSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_TRIMSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev2_stTrimSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xTrimSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev2_xTrimSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_UnBxSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_UNBXSEQ_CS_SEQ_LEN 10

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_UNBXSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev2_stUnBxSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xUnBxSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev2_xUnBxSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    10,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_UnsetSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_UNSETSEQ_CS_SEQ_LEN 4

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_UNSETSEQ_CS_SEQ_DEF                                                             \
    &Cj135_Dev2_stUnsetSeq,                                                                        \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xUnsetSeqRxBuf_u16[0]},                                       \
    {(const void * const)&Cj135_Dev2_xUnsetSeqTxBuf_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    4,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_Up0Seq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_UP0SEQ_CS_SEQ_LEN 7

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_UP0SEQ_CS_SEQ_DEF                                                               \
    &Cj135_Dev2_stUp0Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xUp0SeqRxBuf_u16[0]},                                         \
    {(const void * const)&Cj135_Dev2_xUp0SeqTxBuf_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    7,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Dev2_UpBxSeq_cs
 *  module: LSM - CJ135, SPI sequence for register bank.
 *  file: cj135_process.pm
 */
#define CJ135_DEV2_UPBXSEQ_CS_SEQ_LEN 10

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DEV2_UPBXSEQ_CS_SEQ_DEF                                                              \
    &Cj135_Dev2_stUpBxSeq,                                                                         \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2_xUpBxSeqRxBuf_u16[0]},                                        \
    {(const void * const)&Cj135_Dev2_xUpBxSeqTxBuf_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    10,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_DiagSeq_cs[1]
 *  module: LSM - CJ135, SPI sequence for Diag.
 *  file: cj135_process.pm
 */
#define CJ135_DIAGSEQ_CS_1_SEQ_LEN 6

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DIAGSEQ_CS_1_SEQ_DEF                                                                 \
    &Cj135_stDiagSeqDev1,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_xDiagSeqRxBuf_Dev1_au16[0]},                                       \
    {(const void * const)&Cj135_xDiagSeqTxBuf_Dev1_au16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    6,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_DiagSeq_cs[2]
 *  module: LSM - CJ135, SPI sequence for Diag.
 *  file: cj135_process.pm
 */
#define CJ135_DIAGSEQ_CS_2_SEQ_LEN 6

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_DIAGSEQ_CS_2_SEQ_DEF                                                                 \
    &Cj135_stDiagSeqDev2,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_xDiagSeqRxBuf_Dev2_au16[0]},                                       \
    {(const void * const)&Cj135_xDiagSeqTxBuf_Dev2_au16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    6,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_IniSeq_cs[1]
 *  module: LSM - CJ135, SPI sequence for Ini.
 *  file: cj135_process.pm
 */
#define CJ135_INISEQ_CS_1_SEQ_LEN 5

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_INISEQ_CS_1_SEQ_DEF                                                                  \
    &Cj135_stIniSeqDev1,                                                                           \
    NULL,                                                                                          \
    {(const void * const)&Cj135_xIniSeqRxBuf_Dev1_au16[0]},                                        \
    {(const void * const)&Cj135_xIniSeqTxBuf_Dev1_au16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    5,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_IniSeq_cs[2]
 *  module: LSM - CJ135, SPI sequence for Ini.
 *  file: cj135_process.pm
 */
#define CJ135_INISEQ_CS_2_SEQ_LEN 5

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_INISEQ_CS_2_SEQ_DEF                                                                  \
    &Cj135_stIniSeqDev2,                                                                           \
    NULL,                                                                                          \
    {(const void * const)&Cj135_xIniSeqRxBuf_Dev2_au16[0]},                                        \
    {(const void * const)&Cj135_xIniSeqTxBuf_Dev2_au16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    5,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram1Seq_cs[1]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 1
 *  file: cj135_process.pm
 */
#define CJ135_RAM1SEQ_CS_1_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM1SEQ_CS_1_SEQ_DEF                                                                 \
    &Cj135_stDev1Ram1Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1RAM_au16[0]},                                                  \
    {(const void * const)&Cj135_xRam1SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram1Seq_cs[2]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 1
 *  file: cj135_process.pm
 */
#define CJ135_RAM1SEQ_CS_2_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM1SEQ_CS_2_SEQ_DEF                                                                 \
    &Cj135_stDev2Ram1Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2RAM_au16[0]},                                                  \
    {(const void * const)&Cj135_xRam1SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram2Seq_cs[1]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 2
 *  file: cj135_process.pm
 */
#define CJ135_RAM2SEQ_CS_1_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM2SEQ_CS_1_SEQ_DEF                                                                 \
    &Cj135_stDev1Ram2Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1RAM_au16[17]},                                                 \
    {(const void * const)&Cj135_xRam2SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram2Seq_cs[2]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 2
 *  file: cj135_process.pm
 */
#define CJ135_RAM2SEQ_CS_2_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM2SEQ_CS_2_SEQ_DEF                                                                 \
    &Cj135_stDev2Ram2Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2RAM_au16[17]},                                                 \
    {(const void * const)&Cj135_xRam2SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram3Seq_cs[1]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 3
 *  file: cj135_process.pm
 */
#define CJ135_RAM3SEQ_CS_1_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM3SEQ_CS_1_SEQ_DEF                                                                 \
    &Cj135_stDev1Ram3Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1RAM_au16[34]},                                                 \
    {(const void * const)&Cj135_xRam3SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram3Seq_cs[2]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 3
 *  file: cj135_process.pm
 */
#define CJ135_RAM3SEQ_CS_2_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM3SEQ_CS_2_SEQ_DEF                                                                 \
    &Cj135_stDev2Ram3Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2RAM_au16[34]},                                                 \
    {(const void * const)&Cj135_xRam3SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram4Seq_cs[1]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 4
 *  file: cj135_process.pm
 */
#define CJ135_RAM4SEQ_CS_1_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM4SEQ_CS_1_SEQ_DEF                                                                 \
    &Cj135_stDev1Ram4Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev1RAM_au16[51]},                                                 \
    {(const void * const)&Cj135_xRam4SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cj135_Ram4Seq_cs[2]
 *  module: LSM - CJ135, SPI sequence for reading RAM part 4
 *  file: cj135_process.pm
 */
#define CJ135_RAM4SEQ_CS_2_SEQ_LEN 17

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CJ135_RAM4SEQ_CS_2_SEQ_DEF                                                                 \
    &Cj135_stDev2Ram4Seq,                                                                          \
    NULL,                                                                                          \
    {(const void * const)&Cj135_Dev2RAM_au16[51]},                                                 \
    {(const void * const)&Cj135_xRam4SeqTxBuf_u16[0]},                                             \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0400,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    17,                                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_ASWSet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_ASWSET_CS_SEQ_LEN CY327_ASWSET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_ASWSET_CS_SEQ_DEF                                                                    \
    &Cy327_ASWSetSt_s,                                                                             \
    &Cy327_ASWSetTime_u32,                                                                         \
    {(const void * const)&Cy327_ASWSetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_ASWSetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_ASWSET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_CANLockedSet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_CANLOCKEDSET_CS_SEQ_LEN CY327_CANLOCKEDSET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_CANLOCKEDSET_CS_SEQ_DEF                                                              \
    &Cy327_CANLockedSetSt_s,                                                                       \
    &Cy327_CANLockedSetTime_u32,                                                                   \
    {(const void * const)&Cy327_CANLockedSetRx_au16[0]},                                           \
    {(const void * const)&Cy327_CANLockedSetTx_au16[0]},                                           \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_CANLOCKEDSET_LEN,                                                                        \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_DIAGet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_DIAGET_CS_SEQ_LEN CY327_DIAGET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_DIAGET_CS_SEQ_DEF                                                                    \
    &Cy327_DIAGetSt_s,                                                                             \
    &Cy327_DIAGetTime_u32,                                                                         \
    {(const void * const)&Cy327_DIAGetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_DIAGetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_DIAGET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_INISet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_INISET_CS_SEQ_LEN CY327_INISET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_INISET_CS_SEQ_DEF                                                                    \
    &Cy327_INISetSt_s,                                                                             \
    &Cy327_INISetTime_u32,                                                                         \
    {(const void * const)&Cy327_INISetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_INISetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_INISET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_NVRrd_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_NVRRD_CS_SEQ_LEN CY327_NVRRD_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_NVRRD_CS_SEQ_DEF                                                                     \
    &Cy327_NVRrdSt_s,                                                                              \
    &Cy327_NVRrdTime_u32,                                                                          \
    {(const void * const)&Cy327_NVRrdRx_au16[0]},                                                  \
    {(const void * const)&Cy327_NVRrdTx_au16[0]},                                                  \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_NVRRD_LEN,                                                                               \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_NVRwr_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_NVRWR_CS_SEQ_LEN CY327_NVRWR_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_NVRWR_CS_SEQ_DEF                                                                     \
    &Cy327_NVRwrSt_s,                                                                              \
    &Cy327_NVRwrTime_u32,                                                                          \
    {(const void * const)&Cy327_NVRwrRx_au16[0]},                                                  \
    {(const void * const)&Cy327_NVRwrTx_au16[0]},                                                  \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_NVRWR_LEN,                                                                               \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_PWRGet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_PWRGET_CS_SEQ_LEN CY327_PWRGET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_PWRGET_CS_SEQ_DEF                                                                    \
    &Cy327_PWRGetSt_s,                                                                             \
    &Cy327_PWRGetTime_u32,                                                                         \
    {(const void * const)&Cy327_PWRGetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_PWRGetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_PWRGET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_PWRSet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_PWRSET_CS_SEQ_LEN CY327_PWRSET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_PWRSET_CS_SEQ_DEF                                                                    \
    &Cy327_PWRSetSt_s,                                                                             \
    &Cy327_PWRSetTime_u32,                                                                         \
    {(const void * const)&Cy327_PWRSetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_PWRSetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_PWRSET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_QERGet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_QERGET_CS_SEQ_LEN CY327_QERGET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_QERGET_CS_SEQ_DEF                                                                    \
    &Cy327_QERGetSt_s,                                                                             \
    &Cy327_QERGetTime_u32,                                                                         \
    {(const void * const)&Cy327_QERGetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_QERGetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_QERGET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_RdInit_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_RDINIT_CS_SEQ_LEN CY327_RDINIT_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_RDINIT_CS_SEQ_DEF                                                                    \
    &Cy327_RdInitSt_s,                                                                             \
    &Cy327_RdInitTime_u32,                                                                         \
    {(const void * const)&Cy327_RdInitRx_au16[0]},                                                 \
    {(const void * const)&Cy327_RdInitTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_RDINIT_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_STCGet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_STCGET_CS_SEQ_LEN CY327_STCGET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_STCGET_CS_SEQ_DEF                                                                    \
    &Cy327_STCGetSt_s,                                                                             \
    &Cy327_STCGetTime_u32,                                                                         \
    {(const void * const)&Cy327_STCGetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_STCGetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_STCGET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_STCSet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_STCSET_CS_SEQ_LEN CY327_STCSET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_STCSET_CS_SEQ_DEF                                                                    \
    &Cy327_STCSetSt_s,                                                                             \
    &Cy327_STCSetTime_u32,                                                                         \
    {(const void * const)&Cy327_STCSetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_STCSetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_STCSET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_SWRst_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_SWRST_CS_SEQ_LEN CY327_SWRST_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_SWRST_CS_SEQ_DEF                                                                     \
    &Cy327_SWRstSt_s,                                                                              \
    &Cy327_SWRstTime_u32,                                                                          \
    {(const void * const)&Cy327_SWRstRx_au16[0]},                                                  \
    {(const void * const)&Cy327_SWRstTx_au16[0]},                                                  \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_SWRST_LEN,                                                                               \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_TI0Set_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_TI0SET_CS_SEQ_LEN CY327_TI0SET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_TI0SET_CS_SEQ_DEF                                                                    \
    &Cy327_TI0SetSt_s,                                                                             \
    &Cy327_TI0SetTime_u32,                                                                         \
    {(const void * const)&Cy327_TI0SetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_TI0SetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_TI0SET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_TI1Set_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_TI1SET_CS_SEQ_LEN CY327_TI1SET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_TI1SET_CS_SEQ_DEF                                                                    \
    &Cy327_TI1SetSt_s,                                                                             \
    &Cy327_TI1SetTime_u32,                                                                         \
    {(const void * const)&Cy327_TI1SetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_TI1SetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_TI1SET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_TI2Set_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_TI2SET_CS_SEQ_LEN CY327_TI2SET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_TI2SET_CS_SEQ_DEF                                                                    \
    &Cy327_TI2SetSt_s,                                                                             \
    &Cy327_TI2SetTime_u32,                                                                         \
    {(const void * const)&Cy327_TI2SetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_TI2SetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_TI2SET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_TIMSet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_TIMSET_CS_SEQ_LEN CY327_TIMSET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_TIMSET_CS_SEQ_DEF                                                                    \
    &Cy327_TIMSetSt_s,                                                                             \
    &Cy327_TIMSetTime_u32,                                                                         \
    {(const void * const)&Cy327_TIMSetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_TIMSetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_TIMSET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Cy327_WDAGet_cs
 *  module: Cy327
 *  file: cy327_process.pm
 */
#define CY327_WDAGET_CS_SEQ_LEN CY327_WDAGET_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define CY327_WDAGET_CS_SEQ_DEF                                                                    \
    &Cy327_WDAGetSt_s,                                                                             \
    &Cy327_WDAGetTime_u32,                                                                         \
    {(const void * const)&Cy327_WDAGetRx_au16[0]},                                                 \
    {(const void * const)&Cy327_WDAGetTx_au16[0]},                                                 \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x4000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    CY327_WDAGET_LEN,                                                                              \
    (uint8)((SPI_SSC0_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition IgnClPs_DiagSeqDef_cs[0][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_DIAGSEQDEF_CS_0_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_DIAGSEQDEF_CS_0_0_SEQ_DEF                                                          \
    &IgnClPs_stDiagSeq[0],                                                                         \
    &IgnClPs_tiDiagStamp_u32[0],                                                                   \
    {(const void * const)&IgnClPs_DiagSeqRxBuf_au16[0][0]},                                        \
    {(const void * const)&IgnClPs_DiagSeqTxBuf_au16[0][0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0100,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_DiagSeqDef_cs[1][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_DIAGSEQDEF_CS_1_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_DIAGSEQDEF_CS_1_0_SEQ_DEF                                                          \
    &IgnClPs_stDiagSeq[1],                                                                         \
    &IgnClPs_tiDiagStamp_u32[1],                                                                   \
    {(const void * const)&IgnClPs_DiagSeqRxBuf_au16[1][0]},                                        \
    {(const void * const)&IgnClPs_DiagSeqTxBuf_au16[1][0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0200,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_IdentSeqDef_cs[0][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_IDENTSEQDEF_CS_0_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_IDENTSEQDEF_CS_0_0_SEQ_DEF                                                         \
    &IgnClPs_stIdentSeq[0],                                                                        \
    &IgnClPs_tiIdentStamp_u32[0],                                                                  \
    {(const void * const)&IgnClPs_IdentSeqRxBuf_au16[0][0]},                                       \
    {(const void * const)&IgnClPs_IdentSeqTxBuf_au16[0][0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0100,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_IdentSeqDef_cs[1][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_IDENTSEQDEF_CS_1_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_IDENTSEQDEF_CS_1_0_SEQ_DEF                                                         \
    &IgnClPs_stIdentSeq[1],                                                                        \
    &IgnClPs_tiIdentStamp_u32[1],                                                                  \
    {(const void * const)&IgnClPs_IdentSeqRxBuf_au16[1][0]},                                       \
    {(const void * const)&IgnClPs_IdentSeqTxBuf_au16[1][0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0200,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_InitSeqDef_cs[0][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_INITSEQDEF_CS_0_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_INITSEQDEF_CS_0_0_SEQ_DEF                                                          \
    &IgnClPs_stInitSeq[0],                                                                         \
    &IgnClPs_tiInitStamp_u32[0],                                                                   \
    {(const void * const)&IgnClPs_WrInitSeqRxBuf_au16[0][0]},                                      \
    {(const void * const)&IgnClPs_WrInitSeqTxBuf_au16[0][0]},                                      \
    &IgnClPs_InitSeqDef_cs[0][1],                                                                  \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0100,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_InitSeqDef_cs[0][1]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_INITSEQDEF_CS_0_1_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_INITSEQDEF_CS_0_1_SEQ_DEF                                                          \
    &IgnClPs_stInitSeq[0],                                                                         \
    &IgnClPs_tiInitStamp_u32[0],                                                                   \
    {(const void * const)&IgnClPs_RdInitSeqRxBuf_au16[0][0]},                                      \
    {(const void * const)&IgnClPs_RdInitSeqTxBuf_au16[0][0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0100,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_InitSeqDef_cs[1][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_INITSEQDEF_CS_1_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_INITSEQDEF_CS_1_0_SEQ_DEF                                                          \
    &IgnClPs_stInitSeq[1],                                                                         \
    &IgnClPs_tiInitStamp_u32[1],                                                                   \
    {(const void * const)&IgnClPs_WrInitSeqRxBuf_au16[1][0]},                                      \
    {(const void * const)&IgnClPs_WrInitSeqTxBuf_au16[1][0]},                                      \
    &IgnClPs_InitSeqDef_cs[1][1],                                                                  \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0200,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_InitSeqDef_cs[1][1]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_INITSEQDEF_CS_1_1_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_INITSEQDEF_CS_1_1_SEQ_DEF                                                          \
    &IgnClPs_stInitSeq[1],                                                                         \
    &IgnClPs_tiInitStamp_u32[1],                                                                   \
    {(const void * const)&IgnClPs_RdInitSeqRxBuf_au16[1][0]},                                      \
    {(const void * const)&IgnClPs_RdInitSeqTxBuf_au16[1][0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0200,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_SetClkSeqDef_cs[0][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_SETCLKSEQDEF_CS_0_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_SETCLKSEQDEF_CS_0_0_SEQ_DEF                                                        \
    &IgnClPs_stClkSeq[0],                                                                          \
    &IgnClPs_tiClkStamp_u32[0],                                                                    \
    {(const void * const)&IgnClPs_SetClkSeqRxBuf_au16[0][0]},                                      \
    {(const void * const)&IgnClPs_SetClkSeqTxBuf_au16[0][0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0100,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition IgnClPs_SetClkSeqDef_cs[1][0]
 *  module: Configuration for IgnClPs_conck
 *  file: ignclps_conck_confdata_conf.xml
 */
#define IGNCLPS_SETCLKSEQDEF_CS_1_0_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define IGNCLPS_SETCLKSEQDEF_CS_1_0_SEQ_DEF                                                        \
    &IgnClPs_stClkSeq[1],                                                                          \
    &IgnClPs_tiClkStamp_u32[1],                                                                    \
    {(const void * const)&IgnClPs_SetClkSeqRxBuf_au16[1][0]},                                      \
    {(const void * const)&IgnClPs_SetClkSeqTxBuf_au16[1][0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0200,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition L9959_DiagSeq_1_cs
 *  module: Building SPI request (DiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_DIAGSEQ_1_CS_SEQ_LEN L9959_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_DIAGSEQ_1_CS_SEQ_DEF                                                                 \
    &L9959_stDiagSeq[0],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dDiagRxBuf_1_u16[0]},                                              \
    {(const void * const)&L9959_dDiagTxBuf_1_u16[0]},                                              \
    NULL,                                                                                          \
    &L9959_RdDiag_SPICallBk_0,                                                                     \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_DIAG_SEQ_LEN,                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_DiagSeq_2_cs
 *  module: Building SPI request (DiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_DIAGSEQ_2_CS_SEQ_LEN L9959_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_DIAGSEQ_2_CS_SEQ_DEF                                                                 \
    &L9959_stDiagSeq[1],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dDiagRxBuf_2_u16[0]},                                              \
    {(const void * const)&L9959_dDiagTxBuf_2_u16[0]},                                              \
    NULL,                                                                                          \
    &L9959_RdDiag_SPICallBk_1,                                                                     \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_DIAG_SEQ_LEN,                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_DiagSeq_3_cs
 *  module: Building SPI request (DiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_DIAGSEQ_3_CS_SEQ_LEN L9959_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_DIAGSEQ_3_CS_SEQ_DEF                                                                 \
    &L9959_stDiagSeq[2],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dDiagRxBuf_3_u16[0]},                                              \
    {(const void * const)&L9959_dDiagTxBuf_3_u16[0]},                                              \
    NULL,                                                                                          \
    &L9959_RdDiag_SPICallBk_2,                                                                     \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_DIAG_SEQ_LEN,                                                                            \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdDiagSeq_1_cs
 *  module: Building SPI request (MonRdDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDDIAGSEQ_1_CS_SEQ_LEN L9959_MON_RD_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDDIAGSEQ_1_CS_SEQ_DEF                                                            \
    &L9959_stMonRdDiagSeq[0],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdDiagRxBuf_1_u16[0]},                                         \
    {(const void * const)&L9959_dMonRdDiagTxBuf_cu16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_RD_DIAG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdDiagSeq_2_cs
 *  module: Building SPI request (MonRdDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDDIAGSEQ_2_CS_SEQ_LEN L9959_MON_RD_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDDIAGSEQ_2_CS_SEQ_DEF                                                            \
    &L9959_stMonRdDiagSeq[1],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdDiagRxBuf_2_u16[0]},                                         \
    {(const void * const)&L9959_dMonRdDiagTxBuf_cu16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_RD_DIAG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdDiagSeq_3_cs
 *  module: Building SPI request (MonRdDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDDIAGSEQ_3_CS_SEQ_LEN L9959_MON_RD_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDDIAGSEQ_3_CS_SEQ_DEF                                                            \
    &L9959_stMonRdDiagSeq[2],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdDiagRxBuf_3_u16[0]},                                         \
    {(const void * const)&L9959_dMonRdDiagTxBuf_cu16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_RD_DIAG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdStatconSeq_1_cs
 *  module: Building SPI request (MonRdStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDSTATCONSEQ_1_CS_SEQ_LEN L9959_RD_STATCON_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDSTATCONSEQ_1_CS_SEQ_DEF                                                         \
    &L9959_stMonRdStatconSeq[0],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdStatconRxBuf_1_u16[0]},                                      \
    {(const void * const)&L9959_dMonRdStatconTxBuf_cu16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_STATCON_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdStatconSeq_2_cs
 *  module: Building SPI request (MonRdStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDSTATCONSEQ_2_CS_SEQ_LEN L9959_RD_STATCON_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDSTATCONSEQ_2_CS_SEQ_DEF                                                         \
    &L9959_stMonRdStatconSeq[1],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdStatconRxBuf_2_u16[0]},                                      \
    {(const void * const)&L9959_dMonRdStatconTxBuf_cu16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_STATCON_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonRdStatconSeq_3_cs
 *  module: Building SPI request (MonRdStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONRDSTATCONSEQ_3_CS_SEQ_LEN L9959_RD_STATCON_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONRDSTATCONSEQ_3_CS_SEQ_DEF                                                         \
    &L9959_stMonRdStatconSeq[2],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonRdStatconRxBuf_3_u16[0]},                                      \
    {(const void * const)&L9959_dMonRdStatconTxBuf_cu16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_STATCON_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconBugSeq_1_cs
 *  module: Building SPI request (MonStatconBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONBUGSEQ_1_CS_SEQ_LEN L9959_MON_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONBUGSEQ_1_CS_SEQ_DEF                                                        \
    &L9959_stMonStatconBugSeq[0],                                                                  \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconBugRxBuf_1_u16[0]},                                     \
    {(const void * const)&L9959_dMonStatconBugTxBuf_1_u16[0]},                                     \
    NULL,                                                                                          \
    &L9959_MonStatcon_SPICallBk_0,                                                                 \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_BUG_SEQ_LEN,                                                                    \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconBugSeq_2_cs
 *  module: Building SPI request (MonStatconBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONBUGSEQ_2_CS_SEQ_LEN L9959_MON_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONBUGSEQ_2_CS_SEQ_DEF                                                        \
    &L9959_stMonStatconBugSeq[1],                                                                  \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconBugRxBuf_2_u16[0]},                                     \
    {(const void * const)&L9959_dMonStatconBugTxBuf_2_u16[0]},                                     \
    NULL,                                                                                          \
    &L9959_MonStatcon_SPICallBk_1,                                                                 \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_BUG_SEQ_LEN,                                                                    \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconBugSeq_3_cs
 *  module: Building SPI request (MonStatconBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONBUGSEQ_3_CS_SEQ_LEN L9959_MON_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONBUGSEQ_3_CS_SEQ_DEF                                                        \
    &L9959_stMonStatconBugSeq[2],                                                                  \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconBugRxBuf_3_u16[0]},                                     \
    {(const void * const)&L9959_dMonStatconBugTxBuf_3_u16[0]},                                     \
    NULL,                                                                                          \
    &L9959_MonStatcon_SPICallBk_2,                                                                 \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_BUG_SEQ_LEN,                                                                    \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconSeq_1_cs
 *  module: Building SPI request (MonStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONSEQ_1_CS_SEQ_LEN L9959_MON_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONSEQ_1_CS_SEQ_DEF                                                           \
    &L9959_stMonStatconSeq[0],                                                                     \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconRxBuf_1_u16[0]},                                        \
    {(const void * const)&L9959_dMonStatconTxBuf_1_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_SEQ_LEN,                                                                        \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconSeq_2_cs
 *  module: Building SPI request (MonStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONSEQ_2_CS_SEQ_LEN L9959_MON_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONSEQ_2_CS_SEQ_DEF                                                           \
    &L9959_stMonStatconSeq[1],                                                                     \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconRxBuf_2_u16[0]},                                        \
    {(const void * const)&L9959_dMonStatconTxBuf_2_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_SEQ_LEN,                                                                        \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_MonStatconSeq_3_cs
 *  module: Building SPI request (MonStatconSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_MONSTATCONSEQ_3_CS_SEQ_LEN L9959_MON_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_MONSTATCONSEQ_3_CS_SEQ_DEF                                                           \
    &L9959_stMonStatconSeq[2],                                                                     \
    NULL,                                                                                          \
    {(const void * const)&L9959_dMonStatconRxBuf_3_u16[0]},                                        \
    {(const void * const)&L9959_dMonStatconTxBuf_3_u16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_MON_STAT_SEQ_LEN,                                                                        \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdConfigSeq_1_cs
 *  module: Building SPI request (RdConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDCONFIGSEQ_1_CS_SEQ_LEN L9959_RD_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDCONFIGSEQ_1_CS_SEQ_DEF                                                             \
    &L9959_stRdConfigSeq[0],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdConfigRxBuf_1_u16[0]},                                          \
    {(const void * const)&L9959_dRdConfigTxBuf_cu16[0]},                                           \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdConfigSeq_2_cs
 *  module: Building SPI request (RdConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDCONFIGSEQ_2_CS_SEQ_LEN L9959_RD_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDCONFIGSEQ_2_CS_SEQ_DEF                                                             \
    &L9959_stRdConfigSeq[1],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdConfigRxBuf_2_u16[0]},                                          \
    {(const void * const)&L9959_dRdConfigTxBuf_cu16[0]},                                           \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdConfigSeq_3_cs
 *  module: Building SPI request (RdConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDCONFIGSEQ_3_CS_SEQ_LEN L9959_RD_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDCONFIGSEQ_3_CS_SEQ_DEF                                                             \
    &L9959_stRdConfigSeq[2],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdConfigRxBuf_3_u16[0]},                                          \
    {(const void * const)&L9959_dRdConfigTxBuf_cu16[0]},                                           \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdIdSeq_1_cs
 *  module: Building SPI request (IdSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDIDSEQ_1_CS_SEQ_LEN L9959_RD_ID_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDIDSEQ_1_CS_SEQ_DEF                                                                 \
    &L9959_stRdIdSeq[0],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdIdRxBuf_1_u16[0]},                                              \
    {(const void * const)&L9959_dRdIdTxBuf_cu16[0]},                                               \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_ID_SEQ_LEN,                                                                           \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdIdSeq_2_cs
 *  module: Building SPI request (IdSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDIDSEQ_2_CS_SEQ_LEN L9959_RD_ID_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDIDSEQ_2_CS_SEQ_DEF                                                                 \
    &L9959_stRdIdSeq[1],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdIdRxBuf_2_u16[0]},                                              \
    {(const void * const)&L9959_dRdIdTxBuf_cu16[0]},                                               \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_ID_SEQ_LEN,                                                                           \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdIdSeq_3_cs
 *  module: Building SPI request (IdSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDIDSEQ_3_CS_SEQ_LEN L9959_RD_ID_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDIDSEQ_3_CS_SEQ_DEF                                                                 \
    &L9959_stRdIdSeq[2],                                                                           \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdIdRxBuf_3_u16[0]},                                              \
    {(const void * const)&L9959_dRdIdTxBuf_cu16[0]},                                               \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_ID_SEQ_LEN,                                                                           \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdRevSeq_1_cs
 *  module: Building SPI request (RevSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDREVSEQ_1_CS_SEQ_LEN L9959_RD_REV_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDREVSEQ_1_CS_SEQ_DEF                                                                \
    &L9959_stRdRevSeq[0],                                                                          \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdRevRxBuf_1_u16[0]},                                             \
    {(const void * const)&L9959_dRdRevTxBuf_cu16[0]},                                              \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_REV_SEQ_LEN,                                                                          \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdRevSeq_2_cs
 *  module: Building SPI request (RevSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDREVSEQ_2_CS_SEQ_LEN L9959_RD_REV_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDREVSEQ_2_CS_SEQ_DEF                                                                \
    &L9959_stRdRevSeq[1],                                                                          \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdRevRxBuf_2_u16[0]},                                             \
    {(const void * const)&L9959_dRdRevTxBuf_cu16[0]},                                              \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_REV_SEQ_LEN,                                                                          \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_RdRevSeq_3_cs
 *  module: Building SPI request (RevSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_RDREVSEQ_3_CS_SEQ_LEN L9959_RD_REV_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_RDREVSEQ_3_CS_SEQ_DEF                                                                \
    &L9959_stRdRevSeq[2],                                                                          \
    NULL,                                                                                          \
    {(const void * const)&L9959_dRdRevRxBuf_3_u16[0]},                                             \
    {(const void * const)&L9959_dRdRevTxBuf_cu16[0]},                                              \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_RD_REV_SEQ_LEN,                                                                          \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigBugSeq_1_cs
 *  module: Building SPI request (TogConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGBUGSEQ_1_CS_SEQ_LEN L9959_TOG_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGBUGSEQ_1_CS_SEQ_DEF                                                         \
    &L9959_stTogConfigBugSeq[0],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigBugRxBuf_1_u16[0]},                                      \
    {(const void * const)&L9959_dTogConfigBugTxBuf_1_u16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_BUG_SEQ_LEN,                                                                  \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigBugSeq_2_cs
 *  module: Building SPI request (TogConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGBUGSEQ_2_CS_SEQ_LEN L9959_TOG_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGBUGSEQ_2_CS_SEQ_DEF                                                         \
    &L9959_stTogConfigBugSeq[1],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigBugRxBuf_2_u16[0]},                                      \
    {(const void * const)&L9959_dTogConfigBugTxBuf_2_u16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_BUG_SEQ_LEN,                                                                  \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigBugSeq_3_cs
 *  module: Building SPI request (TogConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGBUGSEQ_3_CS_SEQ_LEN L9959_TOG_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGBUGSEQ_3_CS_SEQ_DEF                                                         \
    &L9959_stTogConfigBugSeq[2],                                                                   \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigBugRxBuf_3_u16[0]},                                      \
    {(const void * const)&L9959_dTogConfigBugTxBuf_3_u16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_BUG_SEQ_LEN,                                                                  \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigSeq_1_cs
 *  module: Building SPI request (TogConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGSEQ_1_CS_SEQ_LEN L9959_TOG_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGSEQ_1_CS_SEQ_DEF                                                            \
    &L9959_stTogConfigSeq[0],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigRxBuf_1_u16[0]},                                         \
    {(const void * const)&L9959_dTogConfigTxBuf_1_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigSeq_2_cs
 *  module: Building SPI request (TogConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGSEQ_2_CS_SEQ_LEN L9959_TOG_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGSEQ_2_CS_SEQ_DEF                                                            \
    &L9959_stTogConfigSeq[1],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigRxBuf_2_u16[0]},                                         \
    {(const void * const)&L9959_dTogConfigTxBuf_2_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_TogConfigSeq_3_cs
 *  module: Building SPI request (TogConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_TOGCONFIGSEQ_3_CS_SEQ_LEN L9959_TOG_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_TOGCONFIGSEQ_3_CS_SEQ_DEF                                                            \
    &L9959_stTogConfigSeq[2],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dTogConfigRxBuf_3_u16[0]},                                         \
    {(const void * const)&L9959_dTogConfigTxBuf_3_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_TOG_CONFIG_SEQ_LEN,                                                                      \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigBugSeq_1_cs
 *  module: Building SPI request (WrConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGBUGSEQ_1_CS_SEQ_LEN L9959_WR_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGBUGSEQ_1_CS_SEQ_DEF                                                          \
    &L9959_stWrConfigBugSeq[0],                                                                    \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigBugRxBuf_1_u16[0]},                                       \
    {(const void * const)&L9959_dWrConfigBugTxBuf_1_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_BUG_SEQ_LEN,                                                                   \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigBugSeq_2_cs
 *  module: Building SPI request (WrConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGBUGSEQ_2_CS_SEQ_LEN L9959_WR_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGBUGSEQ_2_CS_SEQ_DEF                                                          \
    &L9959_stWrConfigBugSeq[1],                                                                    \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigBugRxBuf_2_u16[0]},                                       \
    {(const void * const)&L9959_dWrConfigBugTxBuf_2_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_BUG_SEQ_LEN,                                                                   \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigBugSeq_3_cs
 *  module: Building SPI request (WrConfigBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGBUGSEQ_3_CS_SEQ_LEN L9959_WR_CONFIG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGBUGSEQ_3_CS_SEQ_DEF                                                          \
    &L9959_stWrConfigBugSeq[2],                                                                    \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigBugRxBuf_3_u16[0]},                                       \
    {(const void * const)&L9959_dWrConfigBugTxBuf_3_u16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_BUG_SEQ_LEN,                                                                   \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigSeq_1_cs
 *  module: Building SPI request (WrConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGSEQ_1_CS_SEQ_LEN L9959_WR_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGSEQ_1_CS_SEQ_DEF                                                             \
    &L9959_stWrConfigSeq[0],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigRxBuf_1_u16[0]},                                          \
    {(const void * const)&L9959_dWrConfigTxBuf_1_u16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigSeq_2_cs
 *  module: Building SPI request (WrConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGSEQ_2_CS_SEQ_LEN L9959_WR_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGSEQ_2_CS_SEQ_DEF                                                             \
    &L9959_stWrConfigSeq[1],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigRxBuf_2_u16[0]},                                          \
    {(const void * const)&L9959_dWrConfigTxBuf_2_u16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrConfigSeq_3_cs
 *  module: Building SPI request (WrConfigSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRCONFIGSEQ_3_CS_SEQ_LEN L9959_WR_CONFIG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRCONFIGSEQ_3_CS_SEQ_DEF                                                             \
    &L9959_stWrConfigSeq[2],                                                                       \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrConfigRxBuf_3_u16[0]},                                          \
    {(const void * const)&L9959_dWrConfigTxBuf_3_u16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_CONFIG_SEQ_LEN,                                                                       \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagBugSeq_1_cs
 *  module: Building SPI request (WrDiagBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGBUGSEQ_1_CS_SEQ_LEN L9959_WR_DIAG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGBUGSEQ_1_CS_SEQ_DEF                                                            \
    &L9959_stWrDiagBugSeq[0],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagBugRxBuf_1_u16[0]},                                         \
    {(const void * const)&L9959_dWrDiagBugTxBuf_1_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagBugSeq_2_cs
 *  module: Building SPI request (WrDiagBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGBUGSEQ_2_CS_SEQ_LEN L9959_WR_DIAG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGBUGSEQ_2_CS_SEQ_DEF                                                            \
    &L9959_stWrDiagBugSeq[1],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagBugRxBuf_2_u16[0]},                                         \
    {(const void * const)&L9959_dWrDiagBugTxBuf_2_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagBugSeq_3_cs
 *  module: Building SPI request (WrDiagBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGBUGSEQ_3_CS_SEQ_LEN L9959_WR_DIAG_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGBUGSEQ_3_CS_SEQ_DEF                                                            \
    &L9959_stWrDiagBugSeq[2],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagBugRxBuf_3_u16[0]},                                         \
    {(const void * const)&L9959_dWrDiagBugTxBuf_3_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagSeq_1_cs
 *  module: Building SPI request (WrDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGSEQ_1_CS_SEQ_LEN L9959_WR_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGSEQ_1_CS_SEQ_DEF                                                               \
    &L9959_stWrDiagSeq[0],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagRxBuf_1_u16[0]},                                            \
    {(const void * const)&L9959_dWrDiagTxBuf_1_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagSeq_2_cs
 *  module: Building SPI request (WrDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGSEQ_2_CS_SEQ_LEN L9959_WR_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGSEQ_2_CS_SEQ_DEF                                                               \
    &L9959_stWrDiagSeq[1],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagRxBuf_2_u16[0]},                                            \
    {(const void * const)&L9959_dWrDiagTxBuf_2_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrDiagSeq_3_cs
 *  module: Building SPI request (WrDiagSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRDIAGSEQ_3_CS_SEQ_LEN L9959_WR_DIAG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRDIAGSEQ_3_CS_SEQ_DEF                                                               \
    &L9959_stWrDiagSeq[2],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrDiagRxBuf_3_u16[0]},                                            \
    {(const void * const)&L9959_dWrDiagTxBuf_3_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_DIAG_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatBugSeq_1_cs
 *  module: Building SPI request (WrStatBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATBUGSEQ_1_CS_SEQ_LEN L9959_WR_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATBUGSEQ_1_CS_SEQ_DEF                                                            \
    &L9959_stWrStatBugSeq[0],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatBugRxBuf_1_u16[0]},                                         \
    {(const void * const)&L9959_dWrStatBugTxBuf_1_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatBugSeq_2_cs
 *  module: Building SPI request (WrStatBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATBUGSEQ_2_CS_SEQ_LEN L9959_WR_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATBUGSEQ_2_CS_SEQ_DEF                                                            \
    &L9959_stWrStatBugSeq[1],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatBugRxBuf_2_u16[0]},                                         \
    {(const void * const)&L9959_dWrStatBugTxBuf_2_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatBugSeq_3_cs
 *  module: Building SPI request (WrStatBugSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATBUGSEQ_3_CS_SEQ_LEN L9959_WR_STAT_BUG_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATBUGSEQ_3_CS_SEQ_DEF                                                            \
    &L9959_stWrStatBugSeq[2],                                                                      \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatBugRxBuf_3_u16[0]},                                         \
    {(const void * const)&L9959_dWrStatBugTxBuf_3_u16[0]},                                         \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_BUG_SEQ_LEN,                                                                     \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatSeq_1_cs
 *  module: Building SPI request (WrStatSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATSEQ_1_CS_SEQ_LEN L9959_WR_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATSEQ_1_CS_SEQ_DEF                                                               \
    &L9959_stWrStatSeq[0],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatRxBuf_1_u16[0]},                                            \
    {(const void * const)&L9959_dWrStatTxBuf_1_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x2000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatSeq_2_cs
 *  module: Building SPI request (WrStatSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATSEQ_2_CS_SEQ_LEN L9959_WR_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATSEQ_2_CS_SEQ_DEF                                                               \
    &L9959_stWrStatSeq[1],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatRxBuf_2_u16[0]},                                            \
    {(const void * const)&L9959_dWrStatTxBuf_2_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x8000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition L9959_WrStatSeq_3_cs
 *  module: Building SPI request (WrStatSeq) for L9959.
 *  file: l9959_process.pm
 */
#define L9959_WRSTATSEQ_3_CS_SEQ_LEN L9959_WR_STAT_SEQ_LEN

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define L9959_WRSTATSEQ_3_CS_SEQ_DEF                                                               \
    &L9959_stWrStatSeq[2],                                                                         \
    NULL,                                                                                          \
    {(const void * const)&L9959_dWrStatRxBuf_3_u16[0]},                                            \
    {(const void * const)&L9959_dWrStatTxBuf_3_u16[0]},                                            \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x1000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    L9959_WR_STAT_SEQ_LEN,                                                                         \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Smp480_1_MaskIntBusErrPart1_cs
 *  module: Building SPI request (SMP480_1 to mask out IntBusErr, first part)
 *  file: smp480_process.pm
 */
#define SMP480_1_MASKINTBUSERRPART1_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_MASKINTBUSERRPART1_CS_SEQ_DEF                                                     \
    &Smp480_MaskIntBusErrSt_a[0],                                                                  \
    &Smp480_MaskIntBusErrTi_a[0],                                                                  \
    {(const void * const)&Smp480_1_MaskIntBusErrPart1Rx_au16[0]},                                  \
    {(const void * const)&Smp480_1_MaskIntBusErrPart1Tx_au16[0]},                                  \
    &Smp480_MaskIntBusErrPart2_cs[0],                                                              \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_MaskIntBusErrPart2_cs
 *  module: Building SPI request (SMP480_1 to mask out IntBusErr, second part)
 *  file: smp480_process.pm
 */
#define SMP480_1_MASKINTBUSERRPART2_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_MASKINTBUSERRPART2_CS_SEQ_DEF                                                     \
    &Smp480_MaskIntBusErrSt_a[0],                                                                  \
    &Smp480_MaskIntBusErrTi_a[0],                                                                  \
    {(const void * const)&Smp480_1_MaskIntBusErrPart2Rx_au16[0]},                                  \
    {(const void * const)&Smp480_1_MaskIntBusErrPart2Tx_au16[0]},                                  \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ReadDeviceIdAndRev_cs
 *  module: Building SPI request (SMP480_1 Read Device Id and Rev)
 *  file: smp480_process.pm
 */
#define SMP480_1_READDEVICEIDANDREV_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_READDEVICEIDANDREV_CS_SEQ_DEF                                                     \
    &Smp480_ReadDeviceIdAndRevSt_a[0],                                                             \
    &Smp480_ReadDeviceIdAndRevTi_a[0],                                                             \
    {(const void * const)&Smp480_1_ReadDeviceIdAndRevRx_au16[0]},                                  \
    {(const void * const)&Smp480_1_ReadDeviceIdAndRevTx_au16[0]},                                  \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ReadPressure_cs
 *  module: Building SPI request (SMP480_1 Read Pressure Data)
 *  file: smp480_process.pm
 */
#define SMP480_1_READPRESSURE_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_READPRESSURE_CS_SEQ_DEF                                                           \
    &Smp480_RequestPressureSt_a[0],                                                                \
    &Smp480_RequestPressureTi_a[0],                                                                \
    {(const void * const)&Smp480_1_ReadPressureRx_au16[0]},                                        \
    {(const void * const)&Smp480_1_ReadPressureTx_au16[0]},                                        \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ReadStatusReg_cs
 *  module: Building SPI request (SMP480_1 Read Status Register)
 *  file: smp480_process.pm
 */
#define SMP480_1_READSTATUSREG_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_READSTATUSREG_CS_SEQ_DEF                                                          \
    &Smp480_ReadStatusRegSt_a[0],                                                                  \
    &Smp480_ReadStatusRegTi_a[0],                                                                  \
    {(const void * const)&Smp480_1_ReadStatusRegRx_au16[0]},                                       \
    {(const void * const)&Smp480_1_ReadStatusRegTx_au16[0]},                                       \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ReadTemperature_cs
 *  module: Building SPI request (SMP480_1 Read Temperature Data)
 *  file: smp480_process.pm
 */
#define SMP480_1_READTEMPERATURE_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_READTEMPERATURE_CS_SEQ_DEF                                                        \
    &Smp480_RequestTemperatureSt_a[0],                                                             \
    &Smp480_RequestTemperatureTi_a[0],                                                             \
    {(const void * const)&Smp480_1_ReadTemperatureRx_au16[0]},                                     \
    {(const void * const)&Smp480_1_ReadTemperatureTx_au16[0]},                                     \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_RequestPressure_cs
 *  module: Building SPI request (SMP480_1 for requesting Pressure)
 *  file: smp480_process.pm
 */
#define SMP480_1_REQUESTPRESSURE_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_REQUESTPRESSURE_CS_SEQ_DEF                                                        \
    &Smp480_RequestPressureSt_a[0],                                                                \
    &Smp480_RequestPressureTi_a[0],                                                                \
    {(const void * const)&Smp480_1_RequestPressureRx_au16[0]},                                     \
    {(const void * const)&Smp480_1_RequestPressureTx_au16[0]},                                     \
    &Smp480_ReadPressure_cs[0],                                                                    \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_RequestTemperature_cs
 *  module: Building SPI request (SMP480_1 for requesting Temperature)
 *  file: smp480_process.pm
 */
#define SMP480_1_REQUESTTEMPERATURE_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_REQUESTTEMPERATURE_CS_SEQ_DEF                                                     \
    &Smp480_RequestTemperatureSt_a[0],                                                             \
    &Smp480_RequestTemperatureTi_a[0],                                                             \
    {(const void * const)&Smp480_1_RequestTemperatureRx_au16[0]},                                  \
    {(const void * const)&Smp480_1_RequestTemperatureTx_au16[0]},                                  \
    &Smp480_ReadTemperature_cs[0],                                                                 \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_LO_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ReserveBus_cs
 *  module: Building SPI request (SMP480_1 for Reset command, third part)
 *  file: smp480_process.pm
 */
#define SMP480_1_RESERVEBUS_CS_SEQ_LEN 3

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_RESERVEBUS_CS_SEQ_DEF                                                             \
    &Smp480_ResetCmdSt_a[0],                                                                       \
    &Smp480_ResetCmdTi_a[0],                                                                       \
    {(const void * const)&Smp480_1_ReserveBusRx_au16[0]},                                          \
    {(const void * const)&Smp480_1_ReserveBusTx_au16[0]},                                          \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0000,                                                                                        \
    0x11,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    3,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x01


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ResetCmdPart1_cs
 *  module: Building SPI request (SMP480_1 for Reset command, first part)
 *  file: smp480_process.pm
 */
#define SMP480_1_RESETCMDPART1_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_RESETCMDPART1_CS_SEQ_DEF                                                          \
    &Smp480_ResetCmdSt_a[0],                                                                       \
    &Smp480_ResetCmdTi_a[0],                                                                       \
    {(const void * const)&Smp480_1_ResetCmdPart1Rx_au16[0]},                                       \
    {(const void * const)&Smp480_1_ResetCmdPart1Tx_au16[0]},                                       \
    &Smp480_ResetCmdPart2_cs[0],                                                                   \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_ResetCmdPart2_cs
 *  module: Building SPI request (SMP480_1 for Reset command, second part)
 *  file: smp480_process.pm
 */
#define SMP480_1_RESETCMDPART2_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_RESETCMDPART2_CS_SEQ_DEF                                                          \
    &Smp480_ResetCmdSt_a[0],                                                                       \
    &Smp480_ResetCmdTi_a[0],                                                                       \
    {(const void * const)&Smp480_1_ResetCmdPart2Rx_au16[0]},                                       \
    {(const void * const)&Smp480_1_ResetCmdPart2Tx_au16[0]},                                       \
    &Smp480_ReserveBus_cs[0],                                                                      \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x03


/***************************************************************************************************
 * SPI sequence definition Smp480_1_WriteStatusReg_cs
 *  module: Building SPI request (SMP480_1 Write Status Register)
 *  file: smp480_process.pm
 */
#define SMP480_1_WRITESTATUSREG_CS_SEQ_LEN 2

/* MISRA RULE 90 VIOLATION: The macro holds content for definition of a structure and is valid */
#define SMP480_1_WRITESTATUSREG_CS_SEQ_DEF                                                         \
    &Smp480_WriteStatusRegSt_a[0],                                                                 \
    &Smp480_WriteStatusRegTi_a[0],                                                                 \
    {(const void * const)&Smp480_1_WriteStatusRegRx_au16[0]},                                      \
    {(const void * const)&Smp480_1_WriteStatusRegTx_au16[0]},                                      \
    NULL,                                                                                          \
    NULL,                                                                                          \
    0xC01F,                                                                                        \
    0x0009,                                                                                        \
    0x0800,                                                                                        \
    0x01,                                                                                          \
    0x00,                                                                                          \
    0x00,                                                                                          \
    2,                                                                                             \
    (uint8)((SPI_SSC1_IDX << SPI_MOD_SHFT) | SPI_HI_PRIO_Q_IDX),                                   \
    0x03




/* _LIBRARYABILITY_H */
#endif

/* _SPI_AUTO_CONF_H */
#endif
