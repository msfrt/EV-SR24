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
 * $Filename__:reset_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:27.08.2008$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:reset_template_conf$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     27.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _RESET_AUTO_CONF_H
#define _RESET_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                 reset_auto_conf.h  - automatically generated configuration headerfile of RESET
 *                 module.
 *
 * \scope          CONF
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
/**
define for the number of configured softreset pins
*/
#define RESET_NUMBER_SOFTRESET  0ul

/* Only for compatibilty with older versions */
#define SWRESET_WAKEUP_E  0x05
/* length of resets configured in ASW */
#define RESET_NUM_ASW    73
/* Offset for Reset config table */
#define RESET_HWRIDOFFSET   0x0000
#define RESET_TRAPIDOFFSET  0x1000
#define RESET_SBSWRIDOFFSET 0x2000
#define RESET_ASWSWRIDOFFSET 0x3000

/* mask for visibility in resethistorybuffer */
#define RESET_HISTBUFVIS_MSK 0x80
/* mask for visibility in DSM */
#define RESET_DSMVIS_MSK 0x60
/* Bitmask for visibility in DSM */
#define RESET_DSM_MAXVISIBILITIES   0x03ul
#define RESET_DSM_VISIBLE     0x00
#define RESET_DSM_LOCKED      0x01
#define RESET_DSM_SUPPRESSED  0x02

#define RESET_MOCRAMTEST 1

/* new reset concept regarding T15 is enabled */
#define RESET_T15RST_NEWHNDL 1



/* fixed enum for reset groups */
enum
{
    SWRESET_GRP_POWERON_E,
    SWRESET_GRP_HWRESET_E,
    SWRESET_GRP_WDT_E,
    SWRESET_GRP_WAKEUP_E,
    SWRESET_GRP_TRAP_E,
    SWRESET_GRP_SB_E,
    SWRESET_GRP_CB_E,
    SWRESET_SOFTRESETGRP_E,
    SWRESET_GRP_DUMMY_01,
    SWRESET_GRP_DUMMY_02,
    SWRESET_GRP_SYC_KL15RST_E,
    SWRESET_GRP_NUM_E 
};

/**
enum for SWReset groups of ASW
*/
enum
{
    RESET_EEP_GRP_E = SWRESET_GRP_NUM_E,
    RESET_SWRESET_EPM_E,
    RESET_SWRESET_ESC_E,
    RESET_EXECON_GRP_E,
    RESET_SWRESET_ASW_01,
    SWRESET_GRP_MO_PREICO,
    RESET_SWRESET_MOC,
    RESET_SWRESET_SOP,
    SWRESET_OCWDA,
    RESET_SWRESET_OS_01,
    RESET_HWEMONGRP_E,
    RESET_ERRINTRGRP_E,
    SWRESET_SYCGRP_E,
    RESET_SWRESET_TPROT,
    SWRESET_CORE_ENV_E,
    RESET_CANGRP_E,
    RESET_ADCI_E,
    SWRESET_PMD_PM_GRP_E,
    RESET_DMA_E,
    RESET_FLASH_E,
    SWRESET_PCP_GRP_E,
    RESET_SWRESETGRP_NUM_ASW_E
};


/* enum for HWResets */
enum
{
    SWRESET_POWERON_E = RESET_HWRIDOFFSET,    /* PowerOn Reset */
    SWRESET_POWERON_WDT_E,    /* PowerOn Watchdog Reset */
    SWRESET_POWERON_KL15_E,    /* PowerOn main relay Reset */
    SWRESET_HW_E,    /* Hardware Reset */
    SWRESET_WDT_E,    /* Watchdog Reset */
    SWRESET_NUM_HWR_E    /* Number of HardwareResets */
};

/* enum for Traps */
enum
{
    TRAP_MMU_VAF_E = RESET_TRAPIDOFFSET,    /* TCN = 0, TIN = 0: MMU: Virtual Address Fill */
    TRAP_MMU_VAP_E,    /* TCN = 0, TIN = 1: MMU: Virtual Address Protection */
    TRAP_INTPROT_PRIV_E,    /* TCN = 1, TIN = 1: Privileged Instruction */
    TRAP_INTPROT_MPR_E,    /* TCN = 1, TIN = 2: Memory Protection: Read Access */
    TRAP_INTPROT_MPW_E,    /* TCN = 1, TIN = 3: Memory Protection: Write Access */
    TRAP_INTPROT_MPX_E,    /* TCN = 1, TIN = 4: Memory Protection: Execution Access */
    TRAP_INTPROT_MPP_E,    /* TCN = 1, TIN = 5: Memory Protection: Peripheral Access */
    TRAP_INTPROT_MPN_E,    /* TCN = 1, TIN = 6: Memory Protection: Null Address */
    TRAP_INTPROT_GRWP_E,    /* TCN = 1, TIN = 7: Global Register Write Protection */
    TRAP_INSTRERR_IOPC_E,    /* TCN = 2, TIN = 1: Illegal Opcode */
    TRAP_INSTRERR_UOPC_E,    /* TCN = 2, TIN = 2: Unimplemented Opcode */
    TRAP_INSTRERR_OPD_E,    /* TCN = 2, TIN = 3: Invalid Operand Specification */
    TRAP_INSTRERR_ALN_E,    /* TCN = 2, TIN = 4: Data Address Alignment Error */
    TRAP_INSTRERR_MEM_E,    /* TCN = 2, TIN = 5: Invalid Local Memory Address */
    TRAP_CONTMANA_FCD_E,    /* TCN = 3, TIN = 1: Free Context List Depleted */
    TRAP_CONTMANA_CDO_E,    /* TCN = 3, TIN = 2: Call Depth Overflow */
    TRAP_CONTMANA_CDU_E,    /* TCN = 3, TIN = 3: Call Depth Underflow */
    TRAP_CONTMANA_FCU_E,    /* TCN = 3, TIN = 4: Free Context List Underflow */
    TRAP_CONTMANA_CSU_E,    /* TCN = 3, TIN = 5: Context List Underflow */
    TRAP_CONTMANA_CTYP_E,    /* TCN = 3, TIN = 6: Context Type Error */
    TRAP_CONTMANA_NEST_E,    /* TCN = 3, TIN = 7: Nesting Error */
    TRAP_SYSBUSERR_PSE_E,    /* TCN = 4, TIN = 1: Program Fetch Synchronous Error */
    TRAP_SYSBUSERR_DSE_E,    /* TCN = 4, TIN = 2: Data Access Synchronous Error */
    TRAP_SYSBUSERR_DAE_E,    /* TCN = 4, TIN = 3: Data Access Asynchronous Error */
    TRAP_SYSBUSERR_CAE_E,    /* TCN = 4, TIN = 4: Coprocessor Trap Asynchronous Error */
    TRAP_SYSBUSERR_PIE_E,    /* TCN = 4, TIN = 5: Program Memory Integrity Error */
    TRAP_SYSBUSERR_DIE_E,    /* TCN = 4, TIN = 6: Data Memory Integrity Error */
    TRAP_ASSTRAP_OVF_E,    /* TCN = 5, TIN = 1: Arithmetic Overflow */
    TRAP_ASSTRAP_SOVF_E,    /* TCN = 5, TIN = 2: Sticky Arithmetic Overflow */
    TRAP_SYSCALL_SYS_E,    /* TCN = 6, TIN = 0-255: System Call */
    TRAP_NMI_ESR0_E,    /* TCN = 7, TIN = 0: NMI ESR0 */
    TRAP_NMI_ESR1_E,    /* TCN = 7, TIN = 0: NMI ESR1 */
    TRAP_NMI_RES0_E,    /* TCN = 7, TIN = 0: NMI RES0 set to 0 */
    TRAP_NMI_WDT_E,    /* TCN = 7, TIN = 0: NMI Watchdog */
    TRAP_NMI_PE_E,    /* TCN = 7, TIN = 0: NMI Parity Error */
    TRAP_NMI_OSCLWD_E,    /* TCN = 7, TIN = 0: NMI Low Detection Of Oscillator Watchdog Of PLL */
    TRAP_NMI_OSCHWD_E,    /* TCN = 7, TIN = 0: NMI High Detection Of Oscillator Watchdog Of PLL */
    TRAP_NMI_OSCSPWD_E,    /* TCN = 7, TIN = 0: NMI Spike Detection Of Oscillator Watchdog Of PLL */
    TRAP_NMI_SYSVCOLCK_E,    /* TCN = 7, TIN = 0: NMI PLL VCO Loss Of Lock */
    TRAP_NMI_ERAYVCOLCKT,    /* TCN = 7, TIN = 0: NMI PLL_ERAY VCO Loss-of Oscillator Lock */
    TRAP_NMI_FLOT_E,    /* TCN = 7, TIN = 0: NMI Flash 0 */
    TRAP_PE_P_IED_E,    /* TCN = 7, TIN = 0: Parity Error: Program Integrity Error Detected */
    TRAP_PE_P_IE_T_E,    /* TCN = 7, TIN = 0: Parity Error: Program Integrity Error - Tag Memory */
    TRAP_PE_P_IE_C_E,    /* TCN = 7, TIN = 0: Parity Error: Program Integrity Error - Cache Memory */
    TRAP_PE_P_IE_S_E,    /* TCN = 7, TIN = 0: Parity Error: Program Integrity Error - Scratchpad Memory */
    TRAP_PE_P_IE_B_E,    /* TCN = 7, TIN = 0: Parity Error: Program Integrity Error - Bus Access */
    TRAP_PE_D_IED_E,    /* TCN = 7, TIN = 0: Parity Error: Data Integrity Error Detected */
    TRAP_PE_D_IE_T_E,    /* TCN = 7, TIN = 0: Parity Error: Data Integrity Error - Tag Memory */
    TRAP_PE_D_IE_C_E,    /* TCN = 7, TIN = 0: Parity Error: Data Integrity Error - Cache Memory */
    TRAP_PE_D_IE_S_E,    /* TCN = 7, TIN = 0: Parity Error: Data Integrity Error - Scratchpad Memory */
    TRAP_PE_D_IE_B_E,    /* TCN = 7, TIN = 0: Parity Error: Data Integrity Error - Bus Access */
    TRAP_NMIPE_LDRAM_DSPR_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for LDRAM/DCACHE or DSPR/DCACHE (TC1.6) */
    TRAP_NMIPE_DTAG_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for Data Cache TAG RAM */
    TRAP_NMIPE_SPRAM_PSPR_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for SPRAM/ICACHE or PSPR/ICACHE (TC1.6) */
    TRAP_NMIPE_PTAG_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for Program Cache TAG RAM Memory */
    TRAP_NMIPE_PMU_LMU_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for PMU or LMU (TC1.6) */
    TRAP_NMIPE_PRAM_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for Parameter RAM Memory */
    TRAP_NMIPE_CMEM_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for Code Memory */
    TRAP_NMIPE_CAN_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for CAN Memory */
    TRAP_NMIPE_ERAY_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for ERAY Memory */
    TRAP_NMIPE_SRI_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for SRI-Bus (TC1.6) */
    TRAP_NMIPE_EBU_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for EBU (TC1.6) */
    TRAP_NMIPE_BMU_E,    /* TCN = 7, TIN = 0: NMI Parity Error Flag for BMU (TC1.6) */
    TRAP_NUM_E    /* Number of traps */
};

/* enum for SWReset ID's of SB */
enum
{
    SWRESET_POWERON_SIMU_E = RESET_SBSWRIDOFFSET,
    SWRESET_HRESET_SIMU_E,
    SWRESET_RB_PROG_E,
    SWRESET_SOFTRESET_5VUNDERVOLTAGE_E,
    SWRESET_SOFTRESET_POSTDRV2PREDRV_E,
    SWRESET_CBPROG_E,
    SWRESET_CBCPU_E,
    SWRESET_RB_PROG_ILLEGAL_PATH_E,
    SWRESET_TSW_EXIT_E,
    SWRESET_TSW_HWTEST_FAIL_E,
    SWRESET_TRPOT_FAIL_E,
    SWRESET_OBD_SVC11_RESET_E,
    SWRESET_SBDUMMY_6_E,
    SWRESET_SBDUMMY_7_E,
    SWRESET_SBDUMMY_8_E 
};

/**
enum for SWReset ID's of ASW
*/
enum
{
    SWRST_EEPBANDGAP_E = RESET_ASWSWRIDOFFSET,
    SWRST_EEPNODEBUGGER_E,
    SWRST_EEPDELENVRAM_E,
    SWRST_WRITE_ERRORS_SECTORCHANGE_E,
    SWRST_EEPACTFIRSTINIT_E,
    RESET_SWRESET_EPMHCRS_WAIT_PCP_RESET_E,
    RESET_SWRESET_ESC_SCHED_RESET_E,
    SWRST_EXECON_FAULTYSTATE_E,
    RESET_SWRESET_ILLEGAL_OPCODE,
    RESET_SWRESET_ILLEGAL_RETURN_TO_MAIN,
    RESET_SWRESET_MEMLAY_MP_ACCESS,
    SWRESET_MOCADCNTP_PREICO,
    SWRESET_MOCADCTST_PREICO,
    RESET_SWRESET_ILLEGAL_SW_PATH,
    RESET_SWRESET_MOCCOM_SPI_ERROR,
    RESET_SWRESET_MOCCOM_CTSOPTST,
    RESET_SWRESET_MOCCOM_SOPTST,
    RESET_SWRESET_MOCCOM_CPLCHK_FAILED,
    RESET_SWRESET_MOCCOM_OS_TIMEOUT_ERROR,
    RESET_SWRESET_MOCGPTA,
    RESET_SWRESET_MOCMEM_CPLCHK_FAILED,
    RESET_SWRESET_MOCMEM_CHKRAM_FAILED,
    RESET_SWRESET_MOCMEM_CHKROM_FAILED,
    RESET_SWRESET_MOCMEM_WTRAM_FAILED,
    RESET_SWRESET_MOCMEM_WTROM_FAILED,
    RESET_SWRESET_MOCPCP,
    RESET_SWRESET_MOCRAM_WRI,
    RESET_SWRESET_MOCRAM_CPL,
    RESET_SWRESET_MOCRAM_RAMTAB,
    RESET_SWRESET_MOCRAM_RSTPTRRAM,
    RESET_SWRESET_MOCRAM_STACKRAM,
    RESET_SWRESET_MOCRAM_CSARAM,
    RESET_SWRESET_MOCRAM_XRAM,
    RESET_SWRESET_MOCRAM_IRAM,
    RESET_SWRESET_MOCRAM_EXRAM,
    RESET_SWRESET_MOCRAM_PROTRAM,
    RESET_SWRESET_MOCRAM_EEPCPL,
    RESET_SWRESET_MOCRAM_REPEXOK,
    RESET_SWRESET_MOCROM,
    RESET_SWRESET_MOCROM_CPL,
    RESET_SWRESET_MOCROM_INDEX,
    RESET_SWRESET_SOPTEST_FAILED,
    RESET_SWRESET_CPLCHK_FAILED,
    RESET_SWRESET_MOCSOP_MSC_ERROR,
    RESET_SWRESET_MOCSOP_SPI_ERROR,
    RESET_SWRESET_MOCSOP_OS_TIMEOUT_ERROR,
    RESET_SWRESET_MOCSOP_TIRESPTIME_ERROR,
    SWRESET_OCWDA_WDA_ACTV,
    SWRESET_OCWDA_WDA_MONITOR,
    SWRESET_OCWDA_LOW_VLTG,
    SWRESET_OCWDA_OVR_VLTG,
    RESET_SWRESET_INTERRUPTLOCK_EXPECTED,
    RESET_USERSTACKOVERFLOW_DETECTED,
    SWRST_HWEMONDEFAULT_E,
    RESET_ERRINTR_E,
    SWRESET_CALWAKEUP_E,
    SWRESET_DEADLINE1MS_E,
    SWRESET_DEADLINE10MS_E,
    SWRESET_DEADLINEBG_E,
    SWRESET_NMIDISABLED_E,
    SWRESET_POSTDRIVE_E,
    SWRESET_UNEXPSYCSTSUB_E,
    SWRESET_SOFTRESET_WAKEUP_E,
    SWRESET_SOFTRESET_SHUTDOWN_E,
    SWRESET_UNDERVOLTAGE_E,
    RESET_SWRESET_SWOVER_DONE,
    SWRESET_UNSUPPORTED_CPU_E,
    SWRST_CAN_MESSAGECONFIG,
    SWRST_ADCI_ERROR_E,
    SWRST_PMD_PM_ERROR_E,
    RESET_DMA_ERROR_E,
    SWRST_FLASHCONFIG_E,
    SWRESET_PCP_ERROR_E 
};

/**
enum for different loopconditions
*/
enum
{
    RESET_DEFAULT_LOOPCOND,
    SWRESET_MOF_COND,
    SWRESET_MOC_COND,
    SWRESET_MOCADC_LOOPCOND,
    SWRESET_MOCCOM_LOOPCOND,
    SWRESET_MOCGPTA_LOOPCOND,
    SWRESET_MOCMEM_LOOPCOND,
    SWRESET_MOCRAM_LOOPCOND,
    SWRESET_MOCROM_LOOPCOND,
    SWRESET_MOCSOP_LOOPCOND,
    SWRESET_OCWDA_LOOPCOND,
    RESET_PREICO_LOOPCOND,
    SWRESET_UNDERVLTG_LOOPCOND,
    RESET_SOFTRST_NOLOOP 
};

/* enum for ErrorInterrupts */
typedef enum
{
    RESET_FLASH_CMD_SEQ_ERROR = TRAP_NUM_E,    /* FLASH: Command sequence error interrupt */
    RESET_FLASH_PROT_ERROR,    /* FLASH: Protection error interrupt */
    RESET_FLASH_PFLASH_SBIT,    /* FLASH: Pflash single bit error interrupt */
    RESET_FLASH_PFLASH_DBIT,    /* FLASH: Pflash double bit error interrupt */
    RESET_FLASH1_PFLASH_SBIT,    /* FLASH1: Pflash single bit error interrupt */
    RESET_FLASH1_PFLASH_DBIT,    /* FLASH1: Pflash double bit error interrupt */
    RESET_FLASH_DFLASH_SBIT2,    /* FLASH: Dflash single bit error interrupt */
    RESET_FLASH_DFLASH_DBIT,    /* FLASH: Dflash double bit error interrupt */
    RESET_FLASH_END_OF_BUSY,    /* FLASH: End of busy interrupt */
    RESET_MLI_TX_PARITY_ERROR,    /* MLI: Tx Parity error interrupt */
    RESET_MLI_TX_TIMEOUT_ERROR,    /* MLI: Tx Time out error interrupt */
    RESET_MLI_RX_PARITY_ERROR,    /* MLI: Rx Parity error interrupt */
    RESET_MLI_RX_MEM_PROT,    /* MLI: Rx Memory protection error interrupt */
    RESET_PCPERR_BER,    /* PCP: Bus error */
    RESET_PCPERR_IOP,    /* PCP: Invalid opcode */
    RESET_PCPERR_DCR,    /* PCP: Disabled channel request */
    RESET_PCPERR_IAE,    /* PCP: Instruction address error */
    RESET_BUSERR_DBCU,    /* bus error detected by DBCU */
    RESET_BUSERR_PBCU,    /* bus error detected by PBCU */
    RESET_BUSERR_RBCU,    /* bus error detected by RBCU */
    RESET_BUSERR_SBCU,    /* bus error detected by SBCU */
    RESET_BUSERR_LBCU,    /* bus error detected by LBCU */
    RESET_CALCERR_FPU,    /* floating point calculation error */
    RESET_XBAR_TRANS_ID_MCI0,    /* bus error detected by XBAR (Transaction ID MCI0) */
    RESET_XBAR_TRANS_ID_MCI1,    /* bus error detected by XBAR (Transaction ID MCI1) */
    RESET_XBAR_TRANS_ID_MCI2,    /* bus error detected by XBAR (Transaction ID MCI2) */
    RESET_XBAR_TRANS_ID_MCI3,    /* bus error detected by XBAR (Transaction ID MCI3) */
    RESET_XBAR_TRANS_ID_MCI4,    /* bus error detected by XBAR (Transaction ID MCI4) */
    RESET_XBAR_TRANS_ID_MCI5,    /* bus error detected by XBAR (Transaction ID MCI5) */
    RESET_XBAR_TRANS_ID_MCI15,    /* bus error detected by XBAR (Transaction ID MCI15) */
    RESET_XBAR_TRANS_ID_SCI0,    /* bus error detected by XBAR (Transaction ID SCI0) */
    RESET_XBAR_TRANS_ID_SCI1,    /* bus error detected by XBAR (Transaction ID SCI1) */
    RESET_XBAR_TRANS_ID_SCI2,    /* bus error detected by XBAR (Transaction ID SCI2) */
    RESET_XBAR_TRANS_ID_SCI3,    /* bus error detected by XBAR (Transaction ID SCI3) */
    RESET_XBAR_TRANS_ID_SCI4,    /* bus error detected by XBAR (Transaction ID SCI4) */
    RESET_XBAR_TRANS_ID_SCI5,    /* bus error detected by XBAR (Transaction ID SCI5) */
    RESET_XBAR_TRANS_ID_SCI6,    /* bus error detected by XBAR (Transaction ID SCI6) */
    RESET_XBAR_TRANS_DEF_SLAVE,    /* bus error detected by XBAR (Transaction ID DEFAULT SLAVE) */
    RESET_XBAR_PROT_SCI0,    /* bus error detected by XBAR (Protocol Error SCI0) */
    RESET_XBAR_PROT_SCI1,    /* bus error detected by XBAR (Protocol Error SCI1) */
    RESET_XBAR_PROT_SCI2,    /* bus error detected by XBAR (Protocol Error SCI2) */
    RESET_XBAR_PROT_SCI3,    /* bus error detected by XBAR (Protocol Error SCI3) */
    RESET_XBAR_PROT_SCI4,    /* bus error detected by XBAR (Protocol Error SCI4) */
    RESET_XBAR_PROT_SCI5,    /* bus error detected by XBAR (Protocol Error SCI5) */
    RESET_XBAR_PROT_SCI6,    /* bus error detected by XBAR (Protocol Error SCI6) */
    RESET_XBAR_PROT_DEF_SLAVE,    /* bus error detected by XBAR (Protocol Error Default Slave) */
    RESET_XBAR_STARV_SCI0,    /* bus error detected by XBAR (Starvation Error SCI0) */
    RESET_XBAR_STARV_SCI1,    /* bus error detected by XBAR (Starvation Error SCI1) */
    RESET_XBAR_STARV_SCI2,    /* bus error detected by XBAR (Starvation Error SCI2) */
    RESET_XBAR_STARV_SCI3,    /* bus error detected by XBAR (Starvation Error SCI3) */
    RESET_XBAR_STARV_SCI4,    /* bus error detected by XBAR (Starvation Error SCI4) */
    RESET_XBAR_STARV_SCI5,    /* bus error detected by XBAR (Starvation Error SCI5) */
    RESET_XBAR_STARV_SCI6,    /* bus error detected by XBAR (Starvation Error SCI6) */
    RESET_XBAR_STARV_DEF_SLAVE     /* bus error detected by XBAR (Starvation Error Default Slave) */
}Reset_ErrIntrID_t;


/*
 ***************************************************************************************************
 * Functions
 ***************************************************************************************************
 */

/**
 No SWReset callback function configured 
 */


/* _RESET_AUTO_CONF_H */
#endif
