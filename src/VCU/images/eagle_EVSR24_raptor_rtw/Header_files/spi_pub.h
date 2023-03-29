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
 * $Filename__:spi_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SRU1COB$
 * $Date______:11.10.2011$
 * $Class_____:SWHDR$
 * $Name______:spi_pub$
 * $Variant___:1.13.0$
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
 * 1.13.0; 1     11.10.2011 SRU1COB
 *   update review comments
 * 
 * 1.13.0; 0     28.09.2011 SRU1COB
 *   add queue overflow error in INCA
 * 
 * 1.12.0; 0     05.07.2011 SRU1COB
 *   update spec
 *   support more than two SSC module
 * 
 * 1.10.0; 1     14.06.2010 HGJ2FE
 *   RCMS00927213: SPI: Allow write to Rx and Tx data buffer pointers
 *   
 * 
 * 1.10.0; 0     17.02.2010 HGJ2FE
 *   RCMS00698013: SPI: provide callback mechanism after finishing order
 * 
 * 1.8.0; 0     04.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: spi_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _SPI_PUB_H
#define _SPI_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * SPI module with SPI communication interfaces for use by HWE and complex drivers.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
 
 /**
 set this to FALSE to be independent from DAMOS (for delivery to external customers)
 */
#ifndef SPI_USE_DAMOS
#define SPI_USE_DAMOS       (TRUE)
#endif

/* bit positions for status of SPI sequence (member stSeq_cp of struct Spi_SeqDef_t) */
#define SPI_RECEIVED_BP         0   /**< SPI sequence is received */
#define SPI_ACCEPTED_BP         1   /**< SPI sequence definition is inserted into the SPI queue */

/* macro to return current SPI queue state */
#define Spi_GetQueueState()     (Spi_stQueue_u8)

/* SPI queue states, returned by Spi_GetQueueState() */
#define SPI_QUEUE_ACTIVE        0   /**< SPI queue is active, SPI LLD is in queue handler mode */
#define SPI_QUEUE_LOCKED        1   /**< SPI queue is locked, this state is used to flush the SPI
                                         queue when switching from active to inactive SPI queue */
#define SPI_QUEUE_INACTIVE      2   /**< SPI queue is not active, SPI LLD is in polling mode */

/* SPI queue indices */
#define SPI_HI_PRIO_Q_IDX       0UL
#define SPI_LO_PRIO_Q_IDX       1UL
#define SPI_NUM_Q               2UL

/* shift offset and mask for combined module and queue index of SPI sequence definition */
#define SPI_MOD_SHFT            4UL
#define SPI_IDX_MSK             0x0FUL

/* buffer size of return buffer for VVT sensor values used by SPI VVT low level driver and
   SPI VVT interface -> this buffer must be smaller than SPI_VVT_PCP_BUF_SIZE */
#define SPI_VVT_BUF_SIZE        6


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* type for SPI sequence status */
typedef volatile uint8  Spi_SeqSt_t;

/* structure for SPI sequence definition */
/* because of a self-reference of the following structure it is not possible to declare the
   structure within the type definition as it is usually done
   the mechanism below is taken from ISO/IEC 9899:1999, chapter 6.7.2.3 Tags, section 10 */
/* MISRA RULE 18.4 VIOLATION: Usage of the union in the SPI sequence definition is required and
                              well established. */
typedef struct Spi_SeqDef_struct Spi_SeqDef_t;
struct Spi_SeqDef_struct
{
          Spi_SeqSt_t*  const stSeq_cp;         /**< pointer to sequence status                   */
          uint32*       const tiStamp_cpu32;    /**< pointer to transmission time stamp           */
    /* the following union is necessary to be able to access data of different data types
       valid data types are variable arrays with size uint8 or uint16
       the first union element (void *const) is necessary to be able to assign the addresses of the
       arrays to this union during initialization without MISRA violation
       the other union elements are used to access the data of the referenced arrays              */
    /* please note that the union used to be constant -> therefore its name extension is "_cu"    */
    union
    {                                           /* union for receive (Rx) data                    */
    const void*         const xDummy_cpcv;      /* dummy entry for initialisation purposes        */
          uint8*        const xData_cpu8;       /**< constant pointer to 8bit Rx data             */
          uint8*              xData_pu8;        /**< variable pointer to 8bit Rx data             */
          uint16*       const xData_cpu16;      /**< constant pointer to 16bit Rx data            */
          uint16*             xData_pu16;       /**< variable pointer to 16bit Rx data            */
    } Rx_cu;
    /* the following union is necessary to be able to access data of different data types
       valid data types are constant or variable arrays with size uint8 or uint16
       the first union element (void *const) is necessary to be able to assign the addresses of the
       arrays to this union during initialization without MISRA violation
       the other union elements are used to access the data of the referenced arrays              */
    /* please note that the union used to be constant -> therefore its name extension is "_cu"    */
    union
    {                                           /* union for transmit (Tx) data                   */
    const void*         const xDummy_cpcv;      /* dummy entry for initialisation purposes        */
    const uint8*        const xData_cpcu8;      /**< constant pointer to constant 8bit Tx data    */
          uint8*        const xData_cpu8;       /**< constant pointer to variable 8bit Tx data    */
          uint8*              xData_pu8;        /**< variable pointer to variable 8bit Tx data    */
    const uint16*       const xData_cpcu16;     /**< constant pointer to constant 16bit Tx data   */
          uint16*       const xData_cpu16;      /**< constant pointer to variable 16bit Tx data   */
          uint16*             xData_pu16;       /**< variable pointer to variable 16bit Tx data   */
    } Tx_cu;
    const Spi_SeqDef_t*       adLinkedSeq_pcs;  /**< pointer to linked SPI sequence definition    */
          void                (*adClbckFct_pfn)(void); /**< pointer to callback function          */
          uint16              regCon_u16;       /**< SSC control register                         */
          uint16              regBr_u16;        /**< SSC baud rate timer reload register          */
          uint16              regSsoc_u16;      /**< SSC slave select output control register     */
          uint8               regSsotc_u8;      /**< SSC slave select output timing control reg.  */
          uint8               numPort_u8;       /**< port used for SLSO emulation                 */
          uint8               numPin_u8;        /**< port pin used for SLSO emulation             */
          uint8               numSeqLen_u8;     /**< length of sequence in data words             */
          uint8               idxModQ_u8;       /**< index for SSC module and queue               */
          uint8               xFlags_u8;        /**< flags to indicate data width and SLSO emu.   */
};




/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern uint8 Spi_stQueue_u8;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END


__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool Spi_ActvTx(const Spi_SeqDef_t * adSeq_pcs);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Spi_Proc_Ini(void);
extern void Spi_Proc_IniEnd(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Spi_SscQueueHandler_Isr(uint32 xMod_u32);
extern void Spi_Ssc0QueueHandle_Proc(void);
extern void Spi_Ssc1QueueHandle_Proc(void);
extern void Spi_Ssc2QueueHandle_Proc(void);
extern void Spi_Ssc3QueueHandle_Proc(void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Spi_Shutdown(void);
extern uint32 Spi_ShDwnTrans(uint32 xTxData_u32);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Spi_Vvt_Proc_IniEnd(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Spi_GetVvtBuf(uint32 * xVvtBuf_pa);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Spi_Mon_Proc_IniEnd(void);
extern void Spi_Mon_Proc(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END


/* _SPI_PUB_H */
#endif
