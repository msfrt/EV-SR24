
#ifndef _CPU_AUTO_CONF_H
#define _CPU_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              Configuration file of CPU module (AUTOMATICALLY GENERATED, DO NOT EDIT)
 *
 * \scope       CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/* re-exported headerfiles dependent on configuration */
#include "adc_1793.h"
#include "asc_1793.h"
#include "can_1793.h"
#include "cps_1793.h"
#include "dma_1793.h"
#include "fadc_1793.h"
#include "gpta0_1793.h"
#include "gpta1_1793.h"
#include "ltca2_1793.h"
#include "msc_1793.h"
#include "pcp.h"
#include "sbcu_1793.h"
#include "ssc_1793.h"
#include "xbar_1793.h"


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* static configuration switch to distinguish between a single ECU and a master/slave system */
#define CPU_MASTER_SLAVE_SYSTEM        FALSE


/* The Master-slave configuration logic selected in cpu_confdata.xml */



/* master/slave/single ECU types (used by dynamic detection of master or slave)     */
#define CPU_SINGLE_ECU                 0xFF  /* single ECU                          */
#define CPU_MASTER_ECU                 0x00  /* master ECU in a master/slave system */
#define CPU_SLAVE_ECU                  0x01  /* slave ECU in a master/slave system  */
#define PORT1_PIN1_ERROR 			   0x05  /* If port1 - pin1 has erroneous logic level in case 3PIN logic is used for master/slave detection */
#define PORT2_PIN2_ERROR 			   0x06  /* If port2 - pin2 has erroneous logic level in case 3PIN logic is used for master/slave detection */
#define PORT3_PIN3_ERROR 			   0x07  /* If port3 - pin3 has erroneous logic level in case 3PIN logic is used for master/slave detection */
#define NO_ERROR 			 		   0x08  /* If no port-pin is erroneous in case 3PIN logic is used for master/slave detection */

/* watchdog is enabled */
#define CPU_WATCHDOG_ENABLE            TRUE
/* watchdog timeout in milliseconds (valid during ECU init phase. SyC may change timeout later!) */
#define CPU_WATCHDOG_TIMEOUT           500UL

/* enable stack and CSA monitoring */
#define CPU_MONITORING_ENABLE          TRUE

/* enable error interrupt handling */
#define CPU_ENABLE_ERROR_INTERRUPTS    TRUE
/* count errors only */
#define CPU_COUNT_ERRORS_ONLY          TRUE

/* access macros for current module frequencies */
#define Cpu_GetSCLKFreq()              (2000UL / 2UL)  	/* SYSCLK output runs at 1000.000 kHz */
#define Cpu_GetSCLK1Freq()             (0UL)
#define Cpu_GetSHEFreq()               (0UL)
#define Cpu_GetSENTFreq()              (0UL)
#define Cpu_GetSSC0Freq()              (20039UL) 	/* SSC0 runs at 20039.063 kHz */
#define Cpu_GetMSC0Freq()              (30000UL) 	/* MSC0 runs at 30000.000 kHz */
#define Cpu_GetMLI1Freq()              (0UL)
#define Cpu_GetFADCFreq()              (90000UL) 	/* FADC runs at 90000.000 kHz */
#define Cpu_GetERAYFreq()              (0UL)
#define Cpu_GetASCFreq()               (90000UL) 	/* ASC runs at 90000.000 kHz */
#define Cpu_GetSSC3Freq()              (0UL)
#define Cpu_GetMLI0Freq()              (0UL)
#define Cpu_GetADCFreq()               (90000UL) 	/* ADC runs at 90000.000 kHz */
#define Cpu_GetSSC2Freq()              (0UL)
#define Cpu_GetSSC1Freq()              (20039UL) 	/* SSC1 runs at 20039.063 kHz */
#define Cpu_GetGPT12Freq()             (0UL)
#define Cpu_GetGPTAFreq()              (20039UL) 	/* GPTA runs at 20039.063 kHz */
#define Cpu_GetMSC1Freq()              (30000UL) 	/* MSC1 runs at 30000.000 kHz */
#define Cpu_GetCANFreq()               (39990UL) 	/* CAN runs at 39990.234 kHz */


/* macros to read enable module time stamp */
#define Cpu_GetEnableTime(MODULE)      Cpu_GetEnableTime##MODULE
#define Cpu_GetEnableTimeADC           Cpu_tiEnaModAdc_u32
#define Cpu_GetEnableTimeASC           Cpu_tiEnaModAsc_u32
#define Cpu_GetEnableTimeCAN           Cpu_tiEnaModCan_u32


/* macros for SRN requests */
#define ASC0_ESRC_DUMMY_SRN            ASC0.ESRC
#define ASC0_SRN_RSRC                  ASC0.RSRC
#define CAN_ERROR_SRN                  CAN.SRC5
#define CAN_RX_SRN                     CAN.SRC2
#define CAN_TX_SRN                     CAN.SRC1
#define CCP_DAQ0TX_SRN                 CAN.SRC3
#define CCP_DAQ1TX_SRN                 CAN.SRC4
#define CCP_DAQ2TX_SRN                 CAN.SRC0
#define CJ135_DEV1_RDMEASVAL_SRN       GPTA0.SRC28
#define CPU_SBCU_SRN                   SBCU.SRC
#define CPU_XBAR_SRN                   XBAR.SRC
#define DMA_ERROR_SRN                  DMA.SRC7
#define DMA_KNDET_TEILBLOCK_SRN        DMA.SRC0
#define EPMHCRS_DGI_SRN                ADC0.SRC0
#define EPMHCRS_DISBLNEWSYNC_SRN       ADC0.SRC1
#define EPMHCRS_PERIOD_DCM_SRN         GPTA0.SRC03
#define EPMHCRS_PLL_SRN                GPTA0.SRC04
#define EPMHCRS_RESYNCUPPERLVL_SRN     ADC0.SRC2
#define EPMHCRS_STARTSIGMODE_SRN       ADC0.SRC3
#define EPMHCRS_STOPSIGMODE_SRN        ADC0.SRC4
#define EPMHCRS_TIMEOUT_GTC_SRN        GPTA0.SRC37
#define EPMHCRS_TIME_STAMP_GTC_SRN     GPTA0.SRC21
#define EPMHINT_CPU_SRN                CPS.CPU_SRC2
#define FADC_DMY_SR0_SRN               FADC.SRC0
#define IGNH_CHL0_LTC_SRN              LTCA2.SRC02
#define IGNH_CHL0_SRN                  GPTA1.SRC10
#define IGNH_CHL1_SRN                  GPTA1.SRC26
#define IGNH_CHL2_SRN                  GPTA1.SRC11
#define IGNH_CHL3_SRN                  GPTA1.SRC27
#define IGNH_CHL4_LTC_SRN              LTCA2.SRC03
#define IGNH_CHL4_SRN                  GPTA1.SRC12
#define IGNH_CHL5_SRN                  GPTA1.SRC28
#define IGNH_CHL6_SRN                  GPTA1.SRC13
#define IGNH_CHL7_SRN                  GPTA1.SRC29
#define IGNH_SRC_INCIR                 ADC0.SRC5
#define INJHPFI_CHL0_SRN               GPTA0.SRC34
#define INJHPFI_CHL1_SRN               GPTA0.SRC06
#define INJHPFI_CHL2_SRN               GPTA0.SRC20
#define INJHPFI_CHL3_SRN               GPTA0.SRC07
#define INJHPFI_CHL4_SRN               GPTA0.SRC36
#define INJHPFI_CHL5_SRN               GPTA0.SRC11
#define INJHPFI_CHL6_SRN               GPTA1.SRC18
#define INJHPFI_CHL7_SRN               GPTA0.SRC08
#define INJHPFI_LTC_SRN_CHL_0          LTCA2.SRC00
#define INJHPFI_LTC_SRN_CHL_4          LTCA2.SRC01
#define INJHPFI_SW_IRQ_REG             ADC0.SRC6
#define KNDET_KRSYN_SRN                ADC0.SRC7
#define KNDET_MWIN_SRN                 GPTA0.SRC18
#define MSC_MSC0_HWREQ_SRN             MSC0.SRC1
#define MSC_MSC0_SWREQ_SRN             MSC0.SRC0
#define MSC_MSC1_HWREQ_SRN             MSC1.SRC1
#define MSC_MSC1_SWREQ_SRN             MSC1.SRC0
#define MSC_US_TOUT_SRN                GPTA0.SRC13
#define O_F_ECUA046_SRN                GPTA0.SRC10
#define PCP_ESR                        Cpu_SrnVar_PCP_ESR_u32
#define PCP_LOAD_SRN                   ADC0.SRC8
#define PCP_MON_SRN                    ASC1.ESRC
#define PMD_TSTIMP_SRN                 LTCA2.SRC10
#define RST5_SRN                       GPTA0.SRC23
#define SPI_SSC0_GPTA_TIMER_SRN        GPTA0.SRC32
#define SPI_SSC0_QH_SRN                SSC0.ESRC
#define SPI_SSC0_TSRC                  SSC0.TSRC
#define SPI_SSC0_TXRX_SRN              SSC0.RSRC
#define SPI_SSC1_GPTA_TIMER_SRN        LTCA2.SRC05
#define SPI_SSC1_QH_SRN                SSC1.ESRC
#define SPI_SSC1_TSRC                  SSC1.TSRC
#define SPI_SSC1_TXRX_SRN              SSC1.RSRC


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

__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32               Cpu_SrnVar_PCP_ESR_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END
__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32               Cpu_tiEnaModAdc_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END
__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32               Cpu_tiEnaModAsc_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END
__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32               Cpu_tiEnaModCan_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END



/* inline function for master/slave detection */
CPU_INLINE_PROTOTYPE uint8 Cpu_GetECUType(void);
CPU_INLINE uint8 Cpu_GetECUType(void)
{
    return ((uint8)CPU_SINGLE_ECU);
}




/* end of #ifdef _LIBRARYABILITY_H block */
#endif

/* end of #ifdef _CPU_AUTO_CONF_H block */
#endif
