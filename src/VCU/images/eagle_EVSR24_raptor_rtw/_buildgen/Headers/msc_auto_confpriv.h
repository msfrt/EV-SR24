/*<RBHead>
 ***********************************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***********************************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:msc_template_confpriv.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:SRU1COB$
 * $Date______:14.03.2013$
 * $Class_____:CONFTPLHDR$
 * $Name______:msc_template_confpriv$
 * $Variant___:1.16.1$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.16.1; 0     14.03.2013 SRU1COB
 *   .
 * 
 * 1.16.0; 0     16.08.2012 SRU1COB
 *   add support of two device types on one msc
 * 
 * 1.13.0; 0     24.11.2010 MMO1SI
 *   Remove old deprecated interface Msc_SndCmdImmd
 *   Improve PCP channel latency
 *   Correct PCP channel run times
 *   Activate confhash validation checker
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_template_confpriv.ht
 *      Version: \main\basis\b_CORE\7
 * 
 * $
 ***********************************************************************************************************************
 </RBHead>*/

#ifndef _MSC_AUTO_CONFPRIV_H
#define _MSC_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Private configuration header of MSC low level driver.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* macro to enable/disable dedicated differential pins (LVDS) */
/* Special handling for TC17x7: LVDS mode is selected via PORT module */

                      
/* macro to enable monitoring (can not be set manually!) */
/* - MSC monitoring is not available - */

/* initialisation macros for DD registers */
#define MSC_MSC0_DD_INIT                0x8CE0FCECUL
#define MSC_MSC1_DD_INIT                0x00006C6EUL

/* initialisation macros for DSDSL and DSDSH registers */
#define MSC_MSC0_DSDSL_INIT             0x000A020AUL
#define MSC_MSC0_DSDSH_INIT             0x2A0A02AAUL
#define MSC_MSC1_DSDSL_INIT             0x020A0202UL
#define MSC_MSC1_DSDSH_INIT             0x00000000UL

/* initialisation macros for DSS registers */
#define MSC_MSC0_DSS_INIT               ( 0UL << MSC0_DSS_NPTF_POS)
#define MSC_MSC1_DSS_INIT               ( 0UL << MSC1_DSS_NPTF_POS)

/* macro with number of MSC devices (with and without command frames) */
#define MSC_NUM_DEV                     3

/* macro with number of signals */
#define MSC_NUM_SIG                     48

/* command queue handler specific configuration macros (private) */
#define MSC_QHNDLR_TOUT_CTR_GTC         
#define MSC_QHNDLR_TOUT_GPTA_TC_CTR_VAL  0x00E
#define MSC_QHNDLR_NUM_DEV              3
#define MSC_QHNDLR_QIDX_MSK             0x1F
#define MSC_QHNDLR_MSC0_USD
#define MSC_QHNDLR_MSC1_USD
#define MSC_QHNDLR_MSC0_US_USD
#define MSC_QHNDLR_MSC1_US_USD
#define MSC_QH_US_TIMEOUT_1ST           199
#define MSC_QH_US_TIMEOUT               99
#define MSC_QH_US_DELAY_STOPBITS        10

/* macro with number of upstream data registers used (UDx) */
#define MSC_NUM_UD_REG                  1


/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */

/* structure holding configuration information required for devices with command frames */
#if MSC_QHNDLR_NUM_DEV > 0
typedef struct
{
    volatile uint32 *   adQHSrn_pu32;               /* address of queue handler SRN */
#ifdef MSC_QHNDLR_CPU
    Msc_CmdTab_t **     adQBas_pu32;                /* base address of MSC command queue */
    uint32          *   idxWr_pu32;                 /* write index of MSC command queue */
#else
    volatile uint32 *   adQBas_pu32;                /* base address of MSC command queue */
    volatile uint32 *   idxWr_pu32;                 /* write index of MSC command queue */
#endif
    uint32              regUsr_u32;                 /* device specific USR register value (upstream frame type, baudrate and parity type)*/
    uint32              regDsc_u32;                 /* device specific DSC register value (to set the command frame length)*/
    uint32              regOcr_u32;                 /* device specific OCR register value (to set EN signal for cmd) */
    uint16              ofsCmdTab_u16;              /* device specific command table offset */
    uint8               idxMod_u8;                  /* module index (e.g. to access Msc_xMon_as[]) */
    uint8               idxCmdMax_u8;               /* maximum valid command index */
} Msc_Cfg_t;
#endif

/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Msc_Cfg_t    Msc_xCfg_acs[MSC_QHNDLR_NUM_DEV];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Msc_CfgMod_t Msc_xCfgMod_acs[MSC_NUM_DEV];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Msc_SigCfg_t Msc_xSigCfg_acs[MSC_NUM_SIG];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

#ifdef MSC_QHNDLR_CPU
__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Msc_QueueHandler_Isr(void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END
#endif

/* _LIBRARYABILITY_H */
#endif

/* _MSC_AUTO_CONFPRIV_H */
#endif
