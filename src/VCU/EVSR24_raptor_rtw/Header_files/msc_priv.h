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
 * $Filename__:msc_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO1SI$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:msc_priv$ 
 * $Variant___:1.12.0$ 
 * $Revision__:2$ 
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
 * 1.12.0; 2     25.06.2010 MMO1SI
 *   Support automatic module configuration
 *   Add queuehandler latency calculation
 *   Correct upstream timeout calculation
 *   Correct Gpta header usage
 *   Correct GLOBDATA entries
 *   Update Confrules info
 *   Remove UD register clearing in init
 * 
 * 1.12.0; 1     18.03.2010 MMO1SI
 *   Update for Monitoring
 * 
 * 1.12.0; 0     18.03.2010 MMO1SI
 *   Added support for TC1793 and TC1724
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_priv.h
 *      Version: \main\basis\b_CORE\14
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MSC_PRIV_H
#define _MSC_PRIV_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Private header for the MSC low level driver.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* init value for register MSCx.ICR to enable data frame interrupt on the last bit shifted out
   Hint: The interrupt node pointer is set to service request output 3 which is not connected to a SRN and can
         therefore not cause any unintended interrupts. The interrupt signal however is needed to be able to check
         if a data frame has been transmitted in register MSCx.ISR. */
#define MSC_MSC0_ICR_INIT              ((3UL << MSC0_ICR_EDIP_POS) | \
                                        (1UL << MSC0_ICR_EDIE_POS))
#if (MACHINE_TYPE == TC_1793) || ((MACHINE_TYPE == TC_1796) && (MACHINE_SUBTYPE != TC_1792)) || \
    (MACHINE_TYPE == TC_1797)
#define MSC_MSC1_ICR_INIT              ((3UL << MSC1_ICR_EDIP_POS) | \
                                        (1UL << MSC1_ICR_EDIE_POS))
#endif

#if (defined CPU_PCP_AVL && !defined MSC_QHNDLR_CPU)
/* set-up values for SRNs */
#define MSC_USTOUT_SRNVAL_INIT          ((uint32)MSC_USTOUT_PRIO  | TOS_01 | CLRR)
#endif

/*----------------------------------------------------------------------------------------------------------------------
 * usage of signal ID (parameter of Msc_GetMux(), Msc_SetMux(), Msc_GetDD() and Msc_SetDD())
 *
 *                                                                                          |ALTINH used (yes|no)
 *                                                                                          |  |ALTINL used (yes|no)
 *                                                                                          |  |  |MSCx module (x = 0|1)
 *                                                                                          |  |  |
 *  +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
 *  | signal index, used to access Msc_xSigTab_cs[] |               reserved               | flags  |
 *  |31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16|15 14 13 12 11 10  9  8  7  6  5  4  3| 2  1  0|
 *  +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
 *----------------------------------------------------------------------------------------------------------------------
 */
#define MSC_SIGIDX_MOD_MSK              0x00000001UL
#define MSC_SIGIDX_ALTINL_MSK           0x00000002UL
#define MSC_SIGIDX_ALTINH_MSK           0x00000004UL
#define MSC_SIGIDX_SIG_IDX_POS          16UL

/*----------------------------------------------------------------------------------------------------------------------
 * usage of command status word
 *                                                               |not used
 *                                                               |  |complete upstream (only in PCP copy of status)
 *                                                               |  |  |upstream pending (only in PCP copy of status)
 *                                                               |  |  |  |upstream used (yes|no)
 *                                                               |  |  |  |  |callback used (yes|no)
 *                                                               |  |  |  |  |  |device index
 *                                                               |  |  |  |  |  |
 *  +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
 *  | callback  |      upstream buffer offset       | upstream  | internal flags  |  public flags   |
 *  |  index    |                                   |  length   |                 |                 |
 *  |31 30 29 28|27 26 25 24 23 22 21 20 19 18 17 16|15 14 13 12|11 10  9  8  7  6| 5  4  3  2  1  0|
 *  +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
 *                                                                                 |  |  |  |  |  |
 *                                                                                 |  |  |  |  |  |command accepted
 *                                                                                 |  |  |  |  |command completed
 *                                                                                 |  |  |  |queue full error
 *                                                                                 |  |  |upstream parity error
 *                                                                                 |  |upstream timeout error
 *                                                                                 |upstream error
 * Note: Macros with bit positions of public flags are located in msc_pub.h!
 *       Public flags must start from bit position 0!
 *----------------------------------------------------------------------------------------------------------------------
 */
/* Hint: The following constants have no type specification because they are also used by the PCP code.
         In case these constants are used in C code please prefix a suitable type cast. */
#define MSC_STCMD_PUB_FLAGS_POS         0
#define MSC_STCMD_PUB_FLAGS_LEN         6
#define MSC_STCMD_PUB_FLAGS_MSK         (((1 << MSC_STCMD_PUB_FLAGS_LEN)  - 1) << MSC_STCMD_PUB_FLAGS_POS)
#define MSC_STCMD_DEV_IDX_POS           6
#define MSC_STCMD_DEV_IDX_LEN           1
#define MSC_STCMD_DEV_IDX_MSK           (((1 << MSC_STCMD_DEV_IDX_LEN)    - 1) << MSC_STCMD_DEV_IDX_POS)
#define MSC_STCMD_CLBCK_USD_POS         7
#define MSC_STCMD_CLBCK_USD_LEN         1
#define MSC_STCMD_CLBCK_USD_MSK         (((1 << MSC_STCMD_CLBCK_USD_LEN)  - 1) << MSC_STCMD_CLBCK_USD_POS)
#define MSC_STCMD_US_USD_POS            8
#define MSC_STCMD_US_USD_LEN            1
#define MSC_STCMD_US_USD_MSK            (((1 << MSC_STCMD_US_USD_LEN)     - 1) << MSC_STCMD_US_USD_POS)
#define MSC_STCMD_US_PND_POS            9
#define MSC_STCMD_US_PND_LEN            1
#define MSC_STCMD_US_PND_MSK            (((1 << MSC_STCMD_US_PND_LEN)     - 1) << MSC_STCMD_US_PND_POS)
#define MSC_STCMD_CMPL_US_POS           10
#define MSC_STCMD_CMPL_US_LEN           1
#define MSC_STCMD_CMPL_US_MSK           (((1 << MSC_STCMD_CMPL_US_LEN)    - 1) << MSC_STCMD_CMPL_US_POS)
#define MSC_STCMD_NUM_USFRM_POS         12
#define MSC_STCMD_NUM_USFRM_LEN         4
#define MSC_STCMD_NUM_USFRM_MSK         (((1 << MSC_STCMD_NUM_USFRM_LEN)  - 1) << MSC_STCMD_NUM_USFRM_POS)
#define MSC_STCMD_US_BUF_OFS_POS        16
#define MSC_STCMD_US_BUF_OFS_LEN        12
#define MSC_STCMD_US_BUF_OFS_MSK        (((1 << MSC_STCMD_US_BUF_OFS_LEN) - 1) << MSC_STCMD_US_BUF_OFS_POS)
#define MSC_STCMD_CLBCK_IDX_POS         28
#define MSC_STCMD_CLBCK_IDX_LEN         4
#define MSC_STCMD_CLBCK_IDX_MSK         (((1 << MSC_STCMD_CLBCK_IDX_LEN)  - 1) << MSC_STCMD_CLBCK_IDX_POS)

/* statemachine states for PCPless queuehandler */
#define MSC_STM_IDLE                    0
#define MSC_STM_CMD_PREPARE             1
#define MSC_STM_CMD_TX_DO               2
#define MSC_STM_CMD_RX_PREPARE          3
#define MSC_STM_CMD_RX_TIMER            4
#define MSC_STM_CMD_RX_DO               5
#define MSC_STM_CMD_RX_COMPLETE         6
#define MSC_STM_CMD_COMPLETE            7

/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */

/* structure holding module specific configuration information */
typedef struct
{
    MSC_RegMap_t *      adMod_ps;                   /* base address of used MSC HW module */
    uint32              xShOffVal_u32;              /* shut off value */
} Msc_CfgMod_t;

/* structure to build signal table with DD and multiplexer masks */
typedef struct
{
    uint32              mskDd_u32;                  /* mask for DD register */
    uint32              mskMux_u32;                 /* mask for multiplexer register (DSDSL or DSDSH) */
} Msc_SigCfg_t;


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern uint8 Msc_stQueue_u8;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

/* _MSC_PRIV_H */
#endif
