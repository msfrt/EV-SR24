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
 * $Filename__:ebu_1782.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:30.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:ebu_1782$ 
 * $Variant___:1.16.0$ 
 * $Revision__:0$ 
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
 * 1.16.0; 0     30.10.2011 RAT1COB
 *   TC1782 update and TPROT register details
 *   updated in pmu_1782.h and flash_1782.h
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: ebu_1782.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EBU_1782_H
#define _EBU_1782_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _EBU_UL(x) x
#else
    #define _EBU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module EBU on TC1782
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for access to CS-registers */
typedef struct {
    uint32 BUSRCON;
    uint32 BUSRAP;
    uint32 BUSWCON;
    uint32 BUSWAP;
}EBU_CS_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF8000000] : EBU Clock Control Register
    volatile uint32 MODCON;              // [0xF8000004] : EBU Configuration Register
    volatile uint32 ID;                  // [0xF8000008] : EBU Module Identification Register
    volatile uint32 USERCON;             // [0xF800000C] : EBU Test/Control Configuration Register
    volatile uint32 EXTBOOT;             // [0xF8000010] : EBU External Boot Configuration Register
    volatile uint32 RESERVED0[1];        // [0xF8000014...0xF8000017] : reserved space
    volatile uint32 ADDRSEL[4];          // [0xF8000018...0xF8000027] : EBU Address Select Register 
    volatile EBU_CS_t CS[4];             // [0xF8000028...0xF8000067] : EBU Bus Chipselect Registers
} EBU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern EBU_RegMap_t EBU __attribute__ ((asection (".bss.label_only")));


/*
 ***************************************************************************************************
 * Definitions of bits and bitfields.
 * Each bit(field) is defined by its position and length.
 *
 * Example:
 *                       /- length -\
 *           0000 0000 00xx xxxx xxxx 0000 0000 0000
 *           |                      ^              |
 *      Bit 31                      |              Bit 0
 *                                  +-- position
 *
 * Access mode flags:  r  - bit(field) can only be read
 *                     w  - bit(field) can only be written
 *                     rw - bit(field) can be read and written
 *                     h  - bit(field) can also be modified by hardware
 *                          (such as a status bit).
 *                          This symbol can be combined with rw or r
 *
 ***************************************************************************************************
 */

/* EBU_ID_MOD_NUMBER (r) */
#define EBU_ID_MOD_NUMBER_POS                _EBU_UL(16)
#define EBU_ID_MOD_NUMBER_LEN                _EBU_UL(16)

/* EBU_ID_MOD_REV (r) */
#define EBU_ID_MOD_REV_POS                   _EBU_UL(0)
#define EBU_ID_MOD_REV_LEN                   _EBU_UL(8)

/* EBU_ID_MOD_TYPE (r) */
#define EBU_ID_MOD_TYPE_POS                  _EBU_UL(8)
#define EBU_ID_MOD_TYPE_LEN                  _EBU_UL(8)

/* EBU_CLC_DISR (rw) */
#define EBU_CLC_DISR_POS                     _EBU_UL(0)
#define EBU_CLC_DISR_LEN                     _EBU_UL(1)

/* EBU_CLC_DISS (r) */
#define EBU_CLC_DISS_POS                     _EBU_UL(1)
#define EBU_CLC_DISS_LEN                     _EBU_UL(1)

/* EBU_CLC_EPE (rw) */
#define EBU_CLC_EPE_POS                      _EBU_UL(8)
#define EBU_CLC_EPE_LEN                      _EBU_UL(1)

/* EBU_CLC_RES (r) */
#define EBU_CLC_RES_POS                      _EBU_UL(9)
#define EBU_CLC_RES_LEN                      _EBU_UL(7)

/* EBU_CLC_SYNC (rw) */
#define EBU_CLC_SYNC_POS                     _EBU_UL(16)
#define EBU_CLC_SYNC_LEN                     _EBU_UL(1)

/* EBU_CLC_DDR (rw) */
#define EBU_CLC_DDR_POS                      _EBU_UL(17)
#define EBU_CLC_DDR_LEN                      _EBU_UL(1)

/* EBU_CLC_EBUDIV (rw) */
#define EBU_CLC_EBUDIV_POS                   _EBU_UL(18)
#define EBU_CLC_EBUDIV_LEN                   _EBU_UL(2)

/* EBU_CLC_SYNCACK (r) */
#define EBU_CLC_SYNCACK_POS                  _EBU_UL(20)
#define EBU_CLC_SYNCACK_LEN                  _EBU_UL(1)

/* EBU_CLC_DDRACK (r) */
#define EBU_CLC_DDRACK_POS                   _EBU_UL(21)
#define EBU_CLC_DDRACK_LEN                   _EBU_UL(1)

/* EBU_CLC_EBUDIVACK (r) */
#define EBU_CLC_EBUDIVACK_POS                _EBU_UL(22)
#define EBU_CLC_EBUDIVACK_LEN                _EBU_UL(2)

/* EBU_MODCON_STS (r) */
#define EBU_MODCON_STS_POS                   _EBU_UL(0)
#define EBU_MODCON_STS_LEN                   _EBU_UL(1)

/* EBU_MODCON_LCKABRT (rw) */
#define EBU_MODCON_LCKABRT_POS               _EBU_UL(1)
#define EBU_MODCON_LCKABRT_LEN               _EBU_UL(1)

/* EBU_MODCON_RES (r) */
#define EBU_MODCON_RES_POS                   _EBU_UL(2)
#define EBU_MODCON_RES_LEN                   _EBU_UL(2)

/* EBU_MODCON_EXTLOCK (rw) */
#define EBU_MODCON_EXTLOCK_POS               _EBU_UL(4)
#define EBU_MODCON_EXTLOCK_LEN               _EBU_UL(1)

/* EBU_MODCON_ARBSYNC (rw) */
#define EBU_MODCON_ARBSYNC_POS               _EBU_UL(5)
#define EBU_MODCON_ARBSYNC_LEN               _EBU_UL(1)

/* EBU_MODCON_ARBMODE (rw) */
#define EBU_MODCON_ARBMODE_POS               _EBU_UL(6)
#define EBU_MODCON_ARBMODE_LEN               _EBU_UL(2)

/* EBU_MODCON_TIMEOUTC (rw) */
#define EBU_MODCON_TIMEOUTC_POS              _EBU_UL(8)
#define EBU_MODCON_TIMEOUTC_LEN              _EBU_UL(8)

/* EBU_MODCON_LOCKTIMEOUT (rw) */
#define EBU_MODCON_LOCKTIMEOUT_POS           _EBU_UL(16)
#define EBU_MODCON_LOCKTIMEOUT_LEN           _EBU_UL(8)

/* EBU_MODCON_ALE (rw) */
#define EBU_MODCON_ALE_POS                   _EBU_UL(31)
#define EBU_MODCON_ALE_LEN                   _EBU_UL(1)

/* EBU_ID_VALUE (r) */
#define EBU_ID_VALUE_POS                     _EBU_UL(0)
#define EBU_ID_VALUE_LEN                     _EBU_UL(32)

/* EBU_USERCON_DIP (rw) */
#define EBU_USERCON_DIP_POS                  _EBU_UL(0)
#define EBU_USERCON_DIP_LEN                  _EBU_UL(1)

/* EBU_USERCON_RES (r) */
#define EBU_USERCON_RES_POS                  _EBU_UL(1)
#define EBU_USERCON_RES_LEN                  _EBU_UL(31)

/* EBU_EXTBOOT_CFGEND (rh) */
#define EBU_EXTBOOT_CFGEND_POS               _EBU_UL(0)
#define EBU_EXTBOOT_CFGEND_LEN               _EBU_UL(1)

/* EBU_EXTBOOT_CFGERR (rh) */
#define EBU_EXTBOOT_CFGERR_POS               _EBU_UL(1)
#define EBU_EXTBOOT_CFGERR_LEN               _EBU_UL(1)

/* EBU_EXTBOOT_RES (r) */
#define EBU_EXTBOOT_RES_POS                  _EBU_UL(2)
#define EBU_EXTBOOT_RES_LEN                  _EBU_UL(29)

/* EBU_EXTBOOT_EBUCFG (w) */
#define EBU_EXTBOOT_EBUCFG_POS               _EBU_UL(31)
#define EBU_EXTBOOT_EBUCFG_LEN               _EBU_UL(1)

/* EBU_ADDRSEL_REGENAB (rw) */
#define EBU_ADDRSEL_REGENAB_POS              _EBU_UL(0)
#define EBU_ADDRSEL_REGENAB_LEN              _EBU_UL(1)

/* EBU_ADDRSEL_ALTENAB (rw) */
#define EBU_ADDRSEL_ALTENAB_POS              _EBU_UL(1)
#define EBU_ADDRSEL_ALTENAB_LEN              _EBU_UL(1)

/* EBU_ADDRSEL_WPROT (rw) */
#define EBU_ADDRSEL_WPROT_POS                _EBU_UL(2)
#define EBU_ADDRSEL_WPROT_LEN                _EBU_UL(1)

/* EBU_ADDRSEL_RES (r) */
#define EBU_ADDRSEL_RES_POS                  _EBU_UL(3)
#define EBU_ADDRSEL_RES_LEN                  _EBU_UL(1)

/* EBU_ADDRSEL_MASK (rw) */
#define EBU_ADDRSEL_MASK_POS                 _EBU_UL(4)
#define EBU_ADDRSEL_MASK_LEN                 _EBU_UL(4)

/* EBU_ADDRSEL_ALTSEG (rw) */
#define EBU_ADDRSEL_ALTSEG_POS               _EBU_UL(8)
#define EBU_ADDRSEL_ALTSEG_LEN               _EBU_UL(4)

/* EBU_ADDRSEL_BASE (rw) */
#define EBU_ADDRSEL_BASE_POS                 _EBU_UL(12)
#define EBU_ADDRSEL_BASE_LEN                 _EBU_UL(20)

/* EBU_BUSRCON_FETBLEN (rw) */
#define EBU_BUSRCON_FETBLEN_POS              _EBU_UL(0)
#define EBU_BUSRCON_FETBLEN_LEN              _EBU_UL(3)

/* EBU_BUSRCON_FBBMSEL (rw) */
#define EBU_BUSRCON_FBBMSEL_POS              _EBU_UL(3)
#define EBU_BUSRCON_FBBMSEL_LEN              _EBU_UL(1)

/* EBU_BUSRCON_BFSSS (rw) */
#define EBU_BUSRCON_BFSSS_POS                _EBU_UL(4)
#define EBU_BUSRCON_BFSSS_LEN                _EBU_UL(1)

/* EBU_BUSRCON_FDBKEN (rw) */
#define EBU_BUSRCON_FDBKEN_POS               _EBU_UL(5)
#define EBU_BUSRCON_FDBKEN_LEN               _EBU_UL(1)

/* EBU_BUSRCON_BFCMSEL (rw) */
#define EBU_BUSRCON_BFCMSEL_POS              _EBU_UL(6)
#define EBU_BUSRCON_BFCMSEL_LEN              _EBU_UL(1)

/* EBU_BUSRCON_NAA (rw) */
#define EBU_BUSRCON_NAA_POS                  _EBU_UL(7)
#define EBU_BUSRCON_NAA_LEN                  _EBU_UL(1)

/* EBU_BUSRCON_RES (r) */
#define EBU_BUSRCON_RES_POS                  _EBU_UL(8)
#define EBU_BUSRCON_RES_LEN                  _EBU_UL(8)

/* EBU_BUSRCON_ECSE (rw) */
#define EBU_BUSRCON_ECSE_POS                 _EBU_UL(16)
#define EBU_BUSRCON_ECSE_LEN                 _EBU_UL(1)

/* EBU_BUSRCON_EBSE (rw) */
#define EBU_BUSRCON_EBSE_POS                 _EBU_UL(17)
#define EBU_BUSRCON_EBSE_LEN                 _EBU_UL(1)

/* EBU_BUSRCON_DBA (rw) */
#define EBU_BUSRCON_DBA_POS                  _EBU_UL(18)
#define EBU_BUSRCON_DBA_LEN                  _EBU_UL(1)

/* EBU_BUSRCON_WAITINV (rw) */
#define EBU_BUSRCON_WAITINV_POS              _EBU_UL(19)
#define EBU_BUSRCON_WAITINV_LEN              _EBU_UL(1)

/* EBU_BUSRCON_BCGEN (rw) */
#define EBU_BUSRCON_BCGEN_POS                _EBU_UL(20)
#define EBU_BUSRCON_BCGEN_LEN                _EBU_UL(2)

/* EBU_BUSRCON_PORTW (rw) */
#define EBU_BUSRCON_PORTW_POS                _EBU_UL(22)
#define EBU_BUSRCON_PORTW_LEN                _EBU_UL(2)

/* EBU_BUSRCON_WAIT (rw) */
#define EBU_BUSRCON_WAIT_POS                 _EBU_UL(24)
#define EBU_BUSRCON_WAIT_LEN                 _EBU_UL(2)

/* EBU_BUSRCON_AAP (rw) */
#define EBU_BUSRCON_AAP_POS                  _EBU_UL(26)
#define EBU_BUSRCON_AAP_LEN                  _EBU_UL(1)

/* EBU_BUSRCON_AGEN (rw) */
#define EBU_BUSRCON_AGEN_POS                 _EBU_UL(28)
#define EBU_BUSRCON_AGEN_LEN                 _EBU_UL(4)

/* EBU_BUSRAP_RDDTACS (rw) */
#define EBU_BUSRAP_RDDTACS_POS               _EBU_UL(0)
#define EBU_BUSRAP_RDDTACS_LEN               _EBU_UL(4)

/* EBU_BUSRAP_RDRECOVC (rw) */
#define EBU_BUSRAP_RDRECOVC_POS              _EBU_UL(4)
#define EBU_BUSRAP_RDRECOVC_LEN              _EBU_UL(3)

/* EBU_BUSRAP_WAITRDC (rw) */
#define EBU_BUSRAP_WAITRDC_POS               _EBU_UL(7)
#define EBU_BUSRAP_WAITRDC_LEN               _EBU_UL(5)

/* EBU_BUSRAP_DATAC (rw) */
#define EBU_BUSRAP_DATAC_POS                 _EBU_UL(12)
#define EBU_BUSRAP_DATAC_LEN                 _EBU_UL(4)

/* EBU_BUSRAP_EXTCLOCK (rw) */
#define EBU_BUSRAP_EXTCLOCK_POS              _EBU_UL(16)
#define EBU_BUSRAP_EXTCLOCK_LEN              _EBU_UL(2)

/* EBU_BUSRAP_EXTDATA (rw) */
#define EBU_BUSRAP_EXTDATA_POS               _EBU_UL(18)
#define EBU_BUSRAP_EXTDATA_LEN               _EBU_UL(2)

/* EBU_BUSRAP_CMDDELAY (rw) */
#define EBU_BUSRAP_CMDDELAY_POS              _EBU_UL(20)
#define EBU_BUSRAP_CMDDELAY_LEN              _EBU_UL(4)

/* EBU_BUSRAP_AHOLDC (rw) */
#define EBU_BUSRAP_AHOLDC_POS                _EBU_UL(24)
#define EBU_BUSRAP_AHOLDC_LEN                _EBU_UL(4)

/* EBU_BUSRAP_ADDRC (rw) */
#define EBU_BUSRAP_ADDRC_POS                 _EBU_UL(28)
#define EBU_BUSRAP_ADDRC_LEN                 _EBU_UL(4)

/* EBU_BUSWCON_FETBLEN (rw) */
#define EBU_BUSWCON_FETBLEN_POS              _EBU_UL(0)
#define EBU_BUSWCON_FETBLEN_LEN              _EBU_UL(3)

/* EBU_BUSWCON_FBBMSEL (rw) */
#define EBU_BUSWCON_FBBMSEL_POS              _EBU_UL(3)
#define EBU_BUSWCON_FBBMSEL_LEN              _EBU_UL(1)

/* EBU_BUSWCON_RES (r) */
#define EBU_BUSWCON_RES_POS                  _EBU_UL(4)
#define EBU_BUSWCON_RES_LEN                  _EBU_UL(3)

/* EBU_BUSWCON_NAA (r) */
#define EBU_BUSWCON_NAA_POS                  _EBU_UL(7)
#define EBU_BUSWCON_NAA_LEN                  _EBU_UL(1)

/* EBU_BUSWCON_ECSE (rw) */
#define EBU_BUSWCON_ECSE_POS                 _EBU_UL(16)
#define EBU_BUSWCON_ECSE_LEN                 _EBU_UL(1)

/* EBU_BUSWCON_EBSE (rw) */
#define EBU_BUSWCON_EBSE_POS                 _EBU_UL(17)
#define EBU_BUSWCON_EBSE_LEN                 _EBU_UL(1)

/* EBU_BUSWCON_WAITINV (rw) */
#define EBU_BUSWCON_WAITINV_POS              _EBU_UL(19)
#define EBU_BUSWCON_WAITINV_LEN              _EBU_UL(1)

/* EBU_BUSWCON_BCGEN (rw) */
#define EBU_BUSWCON_BCGEN_POS                _EBU_UL(20)
#define EBU_BUSWCON_BCGEN_LEN                _EBU_UL(2)

/* EBU_BUSWCON_PORTW (r) */
#define EBU_BUSWCON_PORTW_POS                _EBU_UL(22)
#define EBU_BUSWCON_PORTW_LEN                _EBU_UL(2)

/* EBU_BUSWCON_WAIT (rw) */
#define EBU_BUSWCON_WAIT_POS                 _EBU_UL(24)
#define EBU_BUSWCON_WAIT_LEN                 _EBU_UL(2)

/* EBU_BUSWCON_AAP (rw) */
#define EBU_BUSWCON_AAP_POS                  _EBU_UL(26)
#define EBU_BUSWCON_AAP_LEN                  _EBU_UL(1)

/* EBU_BUSWCON_LOCKCS (rw) */
#define EBU_BUSWCON_LOCKCS_POS               _EBU_UL(27)
#define EBU_BUSWCON_LOCKCS_LEN               _EBU_UL(1)

/* EBU_BUSWCON_AGEN (rw) */
#define EBU_BUSWCON_AGEN_POS                 _EBU_UL(28)
#define EBU_BUSWCON_AGEN_LEN                 _EBU_UL(4)

/* EBU_BUSWAP_WRDTACS (rw) */
#define EBU_BUSWAP_WRDTACS_POS               _EBU_UL(0)
#define EBU_BUSWAP_WRDTACS_LEN               _EBU_UL(4)

/* EBU_BUSWAP_WRRECOVC (rw) */
#define EBU_BUSWAP_WRRECOVC_POS              _EBU_UL(4)
#define EBU_BUSWAP_WRRECOVC_LEN              _EBU_UL(3)

/* EBU_BUSWAP_WAITWRC (rw) */
#define EBU_BUSWAP_WAITWRC_POS               _EBU_UL(7)
#define EBU_BUSWAP_WAITWRC_LEN               _EBU_UL(5)

/* EBU_BUSWAP_DATAC (rw) */
#define EBU_BUSWAP_DATAC_POS                 _EBU_UL(12)
#define EBU_BUSWAP_DATAC_LEN                 _EBU_UL(4)

/* EBU_BUSWAP_EXTCLOCK (rw) */
#define EBU_BUSWAP_EXTCLOCK_POS              _EBU_UL(16)
#define EBU_BUSWAP_EXTCLOCK_LEN              _EBU_UL(2)

/* EBU_BUSWAP_EXTDATA (rw) */
#define EBU_BUSWAP_EXTDATA_POS               _EBU_UL(18)
#define EBU_BUSWAP_EXTDATA_LEN               _EBU_UL(2)

/* EBU_BUSWAP_CMDDELAY (rw) */
#define EBU_BUSWAP_CMDDELAY_POS              _EBU_UL(20)
#define EBU_BUSWAP_CMDDELAY_LEN              _EBU_UL(4)

/* EBU_BUSWAP_AHOLDC (rw) */
#define EBU_BUSWAP_AHOLDC_POS                _EBU_UL(24)
#define EBU_BUSWAP_AHOLDC_LEN                _EBU_UL(4)

/* EBU_BUSWAP_ADDRC (rw) */
#define EBU_BUSWAP_ADDRC_POS                 _EBU_UL(28)
#define EBU_BUSWAP_ADDRC_LEN                 _EBU_UL(4)

#endif
