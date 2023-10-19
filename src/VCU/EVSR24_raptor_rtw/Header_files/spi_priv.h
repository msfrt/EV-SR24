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
 * $Filename__:spi_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SRU1COB$
 * $Date______:16.11.2011$
 * $Class_____:SWHDR$
 * $Name______:spi_priv$
 * $Variant___:1.13.1$
 * $Revision__:1$
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
 * 1.13.1; 1     16.11.2011 SRU1COB
 *   update review points
 * 
 * 1.13.1; 0     11.11.2011 SRU1COB
 *   bugfix for TC1724
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
 * 1.9.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: spi_priv.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _SPI_PRIV_H
#define _SPI_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Private header for SPI interface layer.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* macros to extract queue and module index from SPI sequence definition entry idxModQ_u8 */
#define Spi_GetQIdx(idxModQ)        ((uint32)(idxModQ) & SPI_IDX_MSK)
#define Spi_GetModIdx(idxModQ)      (((uint32)(idxModQ) >> SPI_MOD_SHFT) & SPI_IDX_MSK)

#define SPI_FAC_GPTA_SSC_CLK_SHFT   15UL            /* shift factor to increase accuracy */

#define SPI_GPTA_TIMER_CTR_VAL      0x0000050EUL    /* control register value for SPI timer cell
                                                       MOD    = 2 (free running timer)
                                                       OSM    = 1 (LTC is enabled for 1 event only)
                                                       REN    = 1 (generate interrupt on overflow)
                                                       PEN    = 0 (LTC prescaler mode is disabled)
                                                       AIL    = 0 (input signal is active high)
                                                       SLO    = 0 (select line output, not used)
                                                       CUDCLR = 0 (no effect)
                                                       ILM    = 1 (level sensitive input line mode)
                                                       CUD    = 0 (coherent update disabled)
                                                       CEN    = 1 (cell enable)
                                                       OCM    = 0 (no change on output line)
                                                       OIA    = 0 (no output immediate action)
                                                       OUT    = 0 (output line state, read only) */

#define SPI_CHPREV_B_STEP           2               /* value to determine TriCore B step revision */

/* buffer size of internal PCP buffer for VVT sensor values
   ATTENTION! Make sure to have this buffer size consistant to the buffer size used in the
              PCP variable declaration! */
#define SPI_VVT_PCP_BUF_SIZE        8


/***************************************************************************************************
 * macros used by DMA transfer
 ******************************/

#define SPI_SSCX_DMA_CHCR_BASE_VAL  0x10000000UL    /* TREL    = 0 (will be set by queue handler)
                                                       PRSEL   = 0 (will be set separately)
                                                       BLKM    = 0 (1 move)
                                                       RROAT   = 0 (one transfer per trigger)
                                                       CHMODE  = 0 (single mode operation)
                                                       CHDW    = 0 (will be set separately)
                                                       PATSEL  = 0
                                                       CHPRIO  = 0 (low priority)
                                                       DMAPRIO = 0 (low priority) */

#define SPI_SSCX_DMA_CHCR_CHDW_8B   0x00000000UL    /* CHDW    = 0 (8 bit) */
#define SPI_SSCX_DMA_CHCR_CHDW_16B  0x00200000UL    /* CHDW    = 1 (16 bit) */



#if (MACHINE_TYPE == TC_1796)
#define SPI_SSC0_DMA_CHCR_PRSEL_TX  0x0000C000UL    /* PRSEL   = 6 (DMA chnl 0.2: TIR SSC0) */
#define SPI_SSC0_DMA_CHCR_PRSEL_RX  0x00006000UL    /* PRSEL   = 3 (DMA chnl 0.0: RIR SSC0) */
#define SPI_SSC1_DMA_CHCR_PRSEL_TX  0x0000C000UL    /* PRSEL   = 6 (DMA chnl 0.3: TIR SSC1) */
#define SPI_SSC1_DMA_CHCR_PRSEL_RX  0x00006000UL    /* PRSEL   = 3 (DMA chnl 0.1: RIR SSC1) */
#endif
#if (MACHINE_SUBTYPE == TC_1736) || (MACHINE_SUBTYPE == TC_1736F40)
#define SPI_SSC0_DMA_CHCR_PRSEL_TX  0x00004000UL    /* PRSEL   = 4 (SSC0_TDR) */
#define SPI_SSC0_DMA_CHCR_PRSEL_RX  0x00004000UL    /* PRSEL   = 4 (SSC0_RDR) */
#define SPI_SSC1_DMA_CHCR_PRSEL_TX  0x00004000UL    /* PRSEL   = 4 (SSC1_TDR) */
#define SPI_SSC1_DMA_CHCR_PRSEL_RX  0x00004000UL    /* PRSEL   = 4 (SSC1_RDR) */
#endif

#define SPI_SSCX_DMA_ADRCR_TX       0x00000F08UL    /* SMF  =  0 (update factor = 1 time data width
                                                       INCS =  1 (increment source address)
                                                       DMF  =  0 (update factor = 1 time data width
                                                       INCD =  0 (decrement destination address)
                                                       CBLS = 15 (SADR[31:15] are left unchanged)
                                                       CBLD =  0 (address is not modified)
                                                       SHCT =  0 (shadow register not used) */

#define SPI_SSCX_DMA_ADRCR_RX       0x0000F080UL    /* SMF  =  0 (update factor = 1 time data width
                                                       INCS =  0 (decrement source address)
                                                       DMF  =  0 (update factor = 1 time data width
                                                       INCD =  1 (increment destination address)
                                                       CBLS =  0 (address is not modified)
                                                       CBLD = 15 (DADR[31:15] are left unchanged)
                                                       SHCT =  0 (shadow register not used) */


#define SPI_SSC0_DMA_CHICR_RX       0x00000108UL    /* WRPSE = 0 (wrap source interrupt disabled)
                                                       WRPDE = 0 (wrap dest. interrupt disabled)
                                                       INTCT = 2 (an interrupt is generated and bit
                                                                  INTSR.ICHmn is set each time
                                                                  TCOUNT equals IRDV)
                                                       WRPP  = 0 (wrap interrupt pointer - not used)
                                                       INTP  = 1 (set DMA.SRC1 if TCOUNT = IRDV)
                                                       IRDV  = 0 (compare value for TCOUNT) */

#define SPI_SSC1_DMA_CHICR_RX       0x00000208UL    /* WRPSE = 0 (wrap source interrupt disabled)
                                                       WRPDE = 0 (wrap dest. interrupt disabled)
                                                       INTCT = 2 (an interrupt is generated and bit
                                                                  INTSR.ICHmn is set each time
                                                                  TCOUNT equals IRDV)
                                                       WRPP  = 0 (wrap interrupt pointer - not used)
                                                       INTP  = 2 (set DMA.SRC2 if TCOUNT = IRDV)
                                                       IRDV  = 0 (compare value for TCOUNT) */

#define SPI_SSC2_DMA_CHICR_RX       0x00000308UL    /* WRPSE = 0 (wrap source interrupt disabled)
                                                       WRPDE = 0 (wrap dest. interrupt disabled)
                                                       INTCT = 2 (an interrupt is generated and bit
                                                                  INTSR.ICHmn is set each time
                                                                  TCOUNT equals IRDV)
                                                       WRPP  = 0 (wrap interrupt pointer - not used)
                                                       INTP  = 3 (set DMA.SRC3 if TCOUNT = IRDV)
                                                       IRDV  = 0 (compare value for TCOUNT) */

#define SPI_SSC3_DMA_CHICR_RX       0x00000408UL    /* WRPSE = 0 (wrap source interrupt disabled)
                                                       WRPDE = 0 (wrap dest. interrupt disabled)
                                                       INTCT = 2 (an interrupt is generated and bit
                                                                  INTSR.ICHmn is set each time
                                                                  TCOUNT equals IRDV)
                                                       WRPP  = 0 (wrap interrupt pointer - not used)
                                                       INTP  = 4 (set DMA.SRC4 if TCOUNT = IRDV)
                                                       IRDV  = 0 (compare value for TCOUNT) */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* SPI structure for static queue information */
typedef struct
{
    const Spi_SeqDef_t * * adQBase_appcs[SPI_NUM_Q];    /**< base address of SPI queue */
    uint8                  xQIdxMsk_au8[SPI_NUM_Q];     /**< mask to get read/write index */
} Spi_QHStat_t;


/* SPI structure for queue position information */
typedef struct
{
    uint8 numRdPos_u8;                          /**< read position of queue, requires masking
                                                     before used as queue index */
    uint8 numWrPos_u8;                          /**< write position of queue, requires masking
                                                     before used as queue index */
} Spi_QPos_t;


/* SPI structure for dynamic queue handler information */
typedef struct
{
    const Spi_SeqDef_t * adSeq_pcs;             /**< address of current SPI sequence definition */
    const Spi_SeqDef_t * adPendSeq_pcs;         /**< address of SPI sequence definition pending
                                                     for transmission */
    volatile uint32 *    adMnlSlso_pu32;        /**< address for deselection of manual SLSO, this
                                                     might be an emulated SLSO or a SLSO selected
                                                     by inverting its active output level (used for
                                                     burst transmissions handeled by PCP or DMA) */
    uint32               xMnlSlsoDeSel_u32;     /**< value used for deselection of manual SLSO */
    uint32               facGptaSscClk_u32;     /**< factor between f_gpta and f_ssc (* 2^15) */
    Spi_QPos_t           xQPos_as[SPI_NUM_Q];   /**< read/write position for low/high prio queue */
    volatile uint8       stBsy_u8;              /**< flag to indicate busy state of SSC module
                                                     FALSE -> SSCx is currently transmitting and
                                                              therefore busy
                                                              QUEUE HANDLER MAY NOT BE TRIGGERED
                                                              IN THIS PHASE!
                                                     TRUE  -> SSCx is available for transmission
                                                              QH MUST BE TRIGGERED */
    uint8                stErr_u8;              /**< error flags stating queue overload errors */
} Spi_QHDyn_t;


/* SPI structure for general monitoring */
typedef struct
{
    uint32 tiMonPer_u32;                        /**< period time in [ms] for SPI monitoring */
    uint32 tiMonLast_u32;                       /**< time stamp holding system time of the last
                                                     processing of SPI monitoring data */
} Spi_MonPer_t;


/* SPI structure for bus load monitoring with CPU queue handler */
typedef struct
{
    uint32 tiMonStamp_u32;                      /**< time stamp holding system time of start of
                                                     SPI transmission */
    uint32 tiMonSum_u32;                        /**< summed up bus load time */
    uint32 tiMonMin_u32;                        /**< minimum bus load time */
    uint32 tiMonMax_u32;                        /**< maximum bus load time */
    sint16 rMon_s16;                            /**< current bus load as ratio */
    sint16 rMonMax_s16;                         /**< maximum bus load as ratio */
    uint8  numQLoadMax_au8[SPI_NUM_Q];          /**< maximum number of queue entries */
} Spi_Mon_t;


/* SPI structure for debug purposes */
typedef struct
{
    uint32 ctBusy_u32;                          /**< counter for busy SSCx */
    uint32 ctBusyCurr_u32;                      /**< counter for busy SSCx in consecutive calls */
    uint32 numBusyCurrMax_u32;                  /**< maximum busy count of consecutive calls */
    uint32 ctSetIntReq_u32;                     /**< counter for SSCx QH triggering itself because
                                                     of new queue entries just before exit */
    uint32 ctQHCalls_u32;                       /**< counter for calls of SSCx queue handler */
    uint32 ctTrans_u32;                         /**< counter for SPI transmissions started by QH */
    uint16 rBusyQHCalls_u16;                    /**< ratio of busy counter to QH calls */
    uint16 rTransQHCalls_u16;                   /**< ratio of transmission counter to QH calls */
} Spi_Dbg_t;

/* SPI structure for accessing DMA registers */
typedef struct
{
    volatile uint32 * adrTxChcr_pvu32;         /**< channel control register of DMA channel
                                                    for transmission */
    volatile uint32 * adrTxDadr_pvu32;         /**< destination address register of DMA channel
                                                    for transmission */
    volatile uint32 * adrTxSadr_pvu32;         /**< source register of DMA channel
                                                    for transmission */
    volatile uint32 * adrRxChcr_pvu32;         /**< channel control register of DMA channel
                                                    for reception */
    volatile uint32 * adrRxDadr_pvu32;         /**< destination address register of DMA channel
                                                    for reception */
    volatile uint32 * adrRxSadr_pvu32;         /**< source register of DMA channel
                                                    for reception */
    uint32 xHtReq_u32;                         /**< hardware Transaction Request Register of DMA
                                                    channel for transmission and reception */
    uint32 xStReq_u32;                         /**< software Transaction Request Register of DMA
                                                    channel for transmission and reception */
    uint32 xChcrPrselTx_u32;                   /**< channel control register of DMA
                                                    channel for transmission */
    uint32 xChcrPrselRx_u32;                   /**< channel control register of DMA
                                                    channel for reception */
} Spi_RegDma_t;

/* SPI structure for accessing ADC registers */
typedef struct
{
    volatile uint32 * adrGptaTimerSrc_pvu32;        /**< Address of SRN of GPTA timer */
    volatile uint32 * adrGptaTimerCtr_pvu32;        /**< Address of GPTA control register */
    volatile uint32 * adrGptaTimerXr_pvu32;         /**< Address of GPTA X Register */
} Spi_RegMisc_t;


/* SPI structure for accessing PCP PRAM variables of SSC module */
typedef struct
{
    volatile uint32 * adTxSrc_pvu32;                /**< source address for Tx data transfer */
    volatile uint32 * adRxDest_pvu32;               /**< destination address for Tx data transfer */
    volatile uint32 * numSeqLen_pvu32;              /**< number of words of SPI sequence */
    volatile uint32 * xBsyXr_pvu32;                 /**< timer value used in case of SSCx is busy */
    volatile uint32 * xInactXr_pvu32;               /**< timer value used to generate
                                                         inactive delay (for SLSO emulation) */
    volatile uint32 * xSelSlso_pvu32;               /**< select value for SLSO emulation */
    volatile uint32 * xDeSelSlso_pvu32;             /**< deselect value for SLSO emulation */
    volatile uint32 * xOrigSsoc_pvu32;              /**< original contents for SSCx.SSOC to reverse
                                                         active output level inversion */
    volatile uint32 * xR2_pvu32;                    /**< R2 register of PCP channel */
    volatile uint32 * xR3_pvu32;                    /**< R3 register of PCP channel */
} Spi_RegPcpPram_t;

/* SPI structure for accessing PCP PRAM variables of SSC module */
typedef struct
{
    volatile uint32 * adrQHSrn_pvu32;              /**< address of SRN to trigger SPI queue handler */
    volatile uint32 * adrTxRxSrn_pvu32;            /**< address of SRN to trigger PCP transmit channel */
} Spi_CpuSrn_t;

/* SPI structure for accessing PCP register of SSC module */
typedef struct
{
    volatile uint32 * xR4_u32;                    /**< R4 register of PCP channel for
                                                       switching of clock polarity */
} Spi_ClkPol_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern const Spi_SeqDef_t * Spi_adSsc0HiPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc0LoPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc1HiPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc1LoPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc2HiPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc2LoPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc3HiPrioQ_apcs[];
extern const Spi_SeqDef_t * Spi_adSsc3LoPrioQ_apcs[];
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_QHStat_t   Spi_xQHStat_acs[];
extern const Spi_RegPcpPram_t  Spi_adrPcpVar_capu32[SPI_NUM_SSC];
extern const Spi_CpuSrn_t Spi_xSrn_cas[SPI_NUM_SSC];
extern SSC_RegMap_t * const Spi_adrMod_acps[SPI_NUM_SSC];
extern const Spi_RegMisc_t Spi_xRegMisc_cas[SPI_NUM_SSC];
extern const Spi_RegDma_t Spi_xRegDma_cas[SPI_NUM_SSC];
extern const Spi_ClkPol_t Spi_PcpSwtClkPol_cas[SPI_NUM_SSC];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern Spi_QHDyn_t          Spi_xQHDyn_as[];

extern Spi_Mon_t            Spi_xMon_as[];
extern Spi_MonPer_t         Spi_xMonPer_s;

extern Spi_Dbg_t            Spi_xDbg_as[];
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__arr8__START
extern const uint8 Spi_PcpModPrio_cau8[SPI_NUM_SSC][SPI_NUM_PCP_PRIO];
__PRAGMA_USE__hwe__1_5ms__constant__arr8__END


/* _SPI_PRIV_H */
#endif
