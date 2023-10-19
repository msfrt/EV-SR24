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
 * $Filename__:ebu_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:Added missing ebu_1793.h$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:03.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:ebu_1793$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     03.06.2011 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 0     17.03.2010 AHT2FE
 *   added missing ebu_1793.h
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EBU_1793_H
#define _EBU_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _EBU_UL(x) x
#else
    #define _EBU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module EBU on TC1793
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
    volatile uint32 ADDRSEL[4];         // [0xF8000018...0xF8000027] : EBU Address Select Register 
    volatile EBU_CS_t CS[4];             // [0xF8000028...0xF8000067] : EBU Bus Chipselect Registers
    volatile uint32 SDRMCON;             // [0xF8000068] : EBU SDRAM Control Register
    volatile uint32 SDRMOD;              // [0xF800006C] : EBU SDRAM Mode Register
    volatile uint32 SDRMREF;             // [0xF8000070] : EBU SDRAM Refresh Control Register
    volatile uint32 SDRSTAT;             // [0xF8000074] : EBU SDRAM Status Register
    volatile uint32 DLLCON;              // [0xF8000078] : EBU DLL Control Register
    volatile uint32 DDRNCON;             // [0xF800007C] : EBU LPDDR NVM Configuration Register
    volatile uint32 DDRNMOD;             // [0xF8000080] : EBU DDR NVM Mode Register
    volatile uint32 DDRNMOD2;            // [0xF8000084] : EBU DDR NVM Extended Mode Register
    volatile uint32 DDRNSRR;             // [0xF8000088] : EBU DDR NVM Status Register
    volatile uint32 DDRNPRLD;            // [0xF800008C] : EBU DDR NVM Page Preload Register
    volatile uint32 DDRNTAG0;            // [0xF8000090] : EBU DDR Tag Registers
    volatile uint32 DDRNTAG1;            // [0xF8000094] : EBU DDR Tag Registers
    volatile uint32 DDRNTAG2;            // [0xF8000098] : EBU DDR Tag Registers
    volatile uint32 DDRNTAG3;            // [0xF800009C] : EBU DDR Tag Registers
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

/* EBU_CLC_RES (r) */
#define EBU_CLC_RES_POS                      _EBU_UL(2)
#define EBU_CLC_RES_LEN                      _EBU_UL(6)

/* EBU_CLC_EPE (rw) */
#define EBU_CLC_EPE_POS                      _EBU_UL(8)
#define EBU_CLC_EPE_LEN                      _EBU_UL(1)

/* EBU_CLC_SYNC (rw) */
#define EBU_CLC_SYNC_POS                     _EBU_UL(16)
#define EBU_CLC_SYNC_LEN                     _EBU_UL(1)

/* EBU_CLC_DIV2 (rw) */
#define EBU_CLC_DIV2_POS                     _EBU_UL(17)
#define EBU_CLC_DIV2_LEN                     _EBU_UL(1)

/* EBU_CLC_EBUDIV (rw) */
#define EBU_CLC_EBUDIV_POS                   _EBU_UL(18)
#define EBU_CLC_EBUDIV_LEN                   _EBU_UL(2)

/* EBU_CLC_SYNCACK (r) */
#define EBU_CLC_SYNCACK_POS                  _EBU_UL(20)
#define EBU_CLC_SYNCACK_LEN                  _EBU_UL(1)

/* EBU_CLC_DIV2ACK (r) */
#define EBU_CLC_DIV2ACK_POS                  _EBU_UL(21)
#define EBU_CLC_DIV2ACK_LEN                  _EBU_UL(1)

/* EBU_CLC_EBUDIVACK (r) */
#define EBU_CLC_EBUDIVACK_POS                _EBU_UL(22)
#define EBU_CLC_EBUDIVACK_LEN                _EBU_UL(2)

/* EBU_MODCON_STS (r) */
#define EBU_MODCON_STS_POS                   _EBU_UL(0)
#define EBU_MODCON_STS_LEN                   _EBU_UL(1)

/* EBU_MODCON_LCKABRT (rwh) */
#define EBU_MODCON_LCKABRT_POS               _EBU_UL(1)
#define EBU_MODCON_LCKABRT_LEN               _EBU_UL(1)

/* EBU_MODCON_SDTRI (rw) */
#define EBU_MODCON_SDTRI_POS                 _EBU_UL(2)
#define EBU_MODCON_SDTRI_LEN                 _EBU_UL(1)

/* EBU_MODCON_CLK_COMB (rw) */
#define EBU_MODCON_CLK_COMB_POS              _EBU_UL(3)
#define EBU_MODCON_CLK_COMB_LEN              _EBU_UL(1)

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

/* EBU_MODCON_FIFO_BYPASS (rw) */
#define EBU_MODCON_FIFO_BYPASS_POS           _EBU_UL(24)
#define EBU_MODCON_FIFO_BYPASS_LEN           _EBU_UL(1)

/* EBU_MODCON_FAST_SRI (rw) */
#define EBU_MODCON_FAST_SRI_POS              _EBU_UL(25)
#define EBU_MODCON_FAST_SRI_LEN              _EBU_UL(1)

/* EBU_MODCON_OCDS_SUSP_DIS (rw) */
#define EBU_MODCON_OCDS_SUSP_DIS_POS         _EBU_UL(26)
#define EBU_MODCON_OCDS_SUSP_DIS_LEN         _EBU_UL(1)

/* EBU_MODCON_RES (r) */
#define EBU_MODCON_RES_POS                   _EBU_UL(27)
#define EBU_MODCON_RES_LEN                   _EBU_UL(1)

/* EBU_MODCON_ACCSINH (rw) */
#define EBU_MODCON_ACCSINH_POS               _EBU_UL(28)
#define EBU_MODCON_ACCSINH_LEN               _EBU_UL(1)

/* EBU_MODCON_ACCSINHACK (r) */
#define EBU_MODCON_ACCSINHACK_POS            _EBU_UL(29)
#define EBU_MODCON_ACCSINHACK_LEN            _EBU_UL(1)

/* EBU_MODCON_BUSSTATE (rh) */
#define EBU_MODCON_BUSSTATE_POS              _EBU_UL(30)
#define EBU_MODCON_BUSSTATE_LEN              _EBU_UL(1)

/* EBU_MODCON_ALE (rw) */
#define EBU_MODCON_ALE_POS                   _EBU_UL(31)
#define EBU_MODCON_ALE_LEN                   _EBU_UL(1)

/* EBU_ID_VALUE (r) */
#define EBU_ID_VALUE_POS                     _EBU_UL(0)
#define EBU_ID_VALUE_LEN                     _EBU_UL(32)

/* EBU_USERCON_DIP (rw) */
#define EBU_USERCON_DIP_POS                  _EBU_UL(0)
#define EBU_USERCON_DIP_LEN                  _EBU_UL(1)

/* EBU_USERCON_NAF (rw) */
#define EBU_USERCON_NAF_POS                  _EBU_UL(1)
#define EBU_USERCON_NAF_LEN                  _EBU_UL(7)

/* EBU_USERCON_RES1 (r) */
#define EBU_USERCON_RES1_POS                 _EBU_UL(8)
#define EBU_USERCON_RES1_LEN                 _EBU_UL(8)

/* EBU_USERCON_ADDIO (rw) */
#define EBU_USERCON_ADDIO_POS                _EBU_UL(16)
#define EBU_USERCON_ADDIO_LEN                _EBU_UL(9)

/* EBU_USERCON_RES (r) */
#define EBU_USERCON_RES_POS                  _EBU_UL(25)
#define EBU_USERCON_RES_LEN                  _EBU_UL(5)

/* EBU_USERCON_ADVIO (rw) */
#define EBU_USERCON_ADVIO_POS                _EBU_UL(30)
#define EBU_USERCON_ADVIO_LEN                _EBU_UL(1)

/* EBU_USERCON_ADDLSW (rw) */
#define EBU_USERCON_ADDLSW_POS               _EBU_UL(31)
#define EBU_USERCON_ADDLSW_LEN               _EBU_UL(1)

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

/* EBU_ADDRSEL_GLOBALCS (rw) */
#define EBU_ADDRSEL_GLOBALCS_POS             _EBU_UL(3)
#define EBU_ADDRSEL_GLOBALCS_LEN             _EBU_UL(1)

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

/* EBU_BUSRCON_RESERVED (r) */
#define EBU_BUSRCON_RESERVED_POS             _EBU_UL(4)
#define EBU_BUSRCON_RESERVED_LEN             _EBU_UL(1)

/* EBU_BUSRCON_FDBKEN (rw) */
#define EBU_BUSRCON_FDBKEN_POS               _EBU_UL(5)
#define EBU_BUSRCON_FDBKEN_LEN               _EBU_UL(1)

/* EBU_BUSRCON_BFCMSEL (rw) */
#define EBU_BUSRCON_BFCMSEL_POS              _EBU_UL(6)
#define EBU_BUSRCON_BFCMSEL_LEN              _EBU_UL(1)

/* EBU_BUSRCON_NAA (rw) */
#define EBU_BUSRCON_NAA_POS                  _EBU_UL(7)
#define EBU_BUSRCON_NAA_LEN                  _EBU_UL(1)

/* EBU_BUSRCON_RES1 (r) */
#define EBU_BUSRCON_RES1_POS                 _EBU_UL(8)
#define EBU_BUSRCON_RES1_LEN                 _EBU_UL(8)

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

/* EBU_BUSRCON_RES0 (r) */
#define EBU_BUSRCON_RES0_POS                 _EBU_UL(27)
#define EBU_BUSRCON_RES0_LEN                 _EBU_UL(1)

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

/* EBU_BUSWCON_RES0 (r) */
#define EBU_BUSWCON_RES0_POS                 _EBU_UL(8)
#define EBU_BUSWCON_RES0_LEN                 _EBU_UL(8)

/* EBU_BUSWCON_ECSE (rw) */
#define EBU_BUSWCON_ECSE_POS                 _EBU_UL(16)
#define EBU_BUSWCON_ECSE_LEN                 _EBU_UL(1)

/* EBU_BUSWCON_EBSE (rw) */
#define EBU_BUSWCON_EBSE_POS                 _EBU_UL(17)
#define EBU_BUSWCON_EBSE_LEN                 _EBU_UL(1)

/* EBU_BUSWCON_RES1 (r) */
#define EBU_BUSWCON_RES1_POS                 _EBU_UL(18)
#define EBU_BUSWCON_RES1_LEN                 _EBU_UL(1)

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

/* EBU_SDRMCON_CRAS (rw) */
#define EBU_SDRMCON_CRAS_POS                 _EBU_UL(0)
#define EBU_SDRMCON_CRAS_LEN                 _EBU_UL(4)

/* EBU_SDRMCON_CRFSH (rw) */
#define EBU_SDRMCON_CRFSH_POS                _EBU_UL(4)
#define EBU_SDRMCON_CRFSH_LEN                _EBU_UL(4)

/* EBU_SDRMCON_CRSC (rw) */
#define EBU_SDRMCON_CRSC_POS                 _EBU_UL(8)
#define EBU_SDRMCON_CRSC_LEN                 _EBU_UL(2)

/* EBU_SDRMCON_CRP (rw) */
#define EBU_SDRMCON_CRP_POS                  _EBU_UL(10)
#define EBU_SDRMCON_CRP_LEN                  _EBU_UL(2)

/* EBU_SDRMCON_AWIDTH (rw) */
#define EBU_SDRMCON_AWIDTH_POS               _EBU_UL(12)
#define EBU_SDRMCON_AWIDTH_LEN               _EBU_UL(2)

/* EBU_SDRMCON_CRCD (rw) */
#define EBU_SDRMCON_CRCD_POS                 _EBU_UL(14)
#define EBU_SDRMCON_CRCD_LEN                 _EBU_UL(2)

/* EBU_SDRMCON_CRC (rw) */
#define EBU_SDRMCON_CRC_POS                  _EBU_UL(16)
#define EBU_SDRMCON_CRC_LEN                  _EBU_UL(6)

/* EBU_SDRMCON_BANKM (rw) */
#define EBU_SDRMCON_BANKM_POS                _EBU_UL(22)
#define EBU_SDRMCON_BANKM_LEN                _EBU_UL(3)

/* EBU_SDRMCON_RES (r) */
#define EBU_SDRMCON_RES_POS                  _EBU_UL(25)
#define EBU_SDRMCON_RES_LEN                  _EBU_UL(3)

/* EBU_SDRMCON_CLKDIS (rw) */
#define EBU_SDRMCON_CLKDIS_POS               _EBU_UL(28)
#define EBU_SDRMCON_CLKDIS_LEN               _EBU_UL(1)

/* EBU_SDRMCON_PWR_MODE (rw) */
#define EBU_SDRMCON_PWR_MODE_POS             _EBU_UL(29)
#define EBU_SDRMCON_PWR_MODE_LEN             _EBU_UL(2)

/* EBU_SDRMCON_SDCMSEL (rw) */
#define EBU_SDRMCON_SDCMSEL_POS              _EBU_UL(31)
#define EBU_SDRMCON_SDCMSEL_LEN              _EBU_UL(1)

/* EBU_SDRMOD_BURSTL (rw) */
#define EBU_SDRMOD_BURSTL_POS                _EBU_UL(0)
#define EBU_SDRMOD_BURSTL_LEN                _EBU_UL(3)

/* EBU_SDRMOD_BTYP (rw) */
#define EBU_SDRMOD_BTYP_POS                  _EBU_UL(3)
#define EBU_SDRMOD_BTYP_LEN                  _EBU_UL(1)

/* EBU_SDRMOD_CASLAT (rw) */
#define EBU_SDRMOD_CASLAT_POS                _EBU_UL(4)
#define EBU_SDRMOD_CASLAT_LEN                _EBU_UL(3)

/* EBU_SDRMOD_OPMODE (rw) */
#define EBU_SDRMOD_OPMODE_POS                _EBU_UL(7)
#define EBU_SDRMOD_OPMODE_LEN                _EBU_UL(7)

/* EBU_SDRMOD_RES (r) */
#define EBU_SDRMOD_RES_POS                   _EBU_UL(14)
#define EBU_SDRMOD_RES_LEN                   _EBU_UL(1)

/* EBU_SDRMOD_COLDSTART (w) */
#define EBU_SDRMOD_COLDSTART_POS             _EBU_UL(15)
#define EBU_SDRMOD_COLDSTART_LEN             _EBU_UL(1)

/* EBU_SDRMOD_XOPM (rw) */
#define EBU_SDRMOD_XOPM_POS                  _EBU_UL(16)
#define EBU_SDRMOD_XOPM_LEN                  _EBU_UL(14)

/* EBU_SDRMOD_XBA (rw) */
#define EBU_SDRMOD_XBA_POS                   _EBU_UL(30)
#define EBU_SDRMOD_XBA_LEN                   _EBU_UL(2)

/* EBU_SDRMREF_REFRESHC (rw) */
#define EBU_SDRMREF_REFRESHC_POS             _EBU_UL(0)
#define EBU_SDRMREF_REFRESHC_LEN             _EBU_UL(6)

/* EBU_SDRMREF_REFRESHR (rw) */
#define EBU_SDRMREF_REFRESHR_POS             _EBU_UL(6)
#define EBU_SDRMREF_REFRESHR_LEN             _EBU_UL(3)

/* EBU_SDRMREF_SELFREXST (rh) */
#define EBU_SDRMREF_SELFREXST_POS            _EBU_UL(9)
#define EBU_SDRMREF_SELFREXST_LEN            _EBU_UL(1)

/* EBU_SDRMREF_SELFREX (rw) */
#define EBU_SDRMREF_SELFREX_POS              _EBU_UL(10)
#define EBU_SDRMREF_SELFREX_LEN              _EBU_UL(1)

/* EBU_SDRMREF_SELFRENST (rh) */
#define EBU_SDRMREF_SELFRENST_POS            _EBU_UL(11)
#define EBU_SDRMREF_SELFRENST_LEN            _EBU_UL(1)

/* EBU_SDRMREF_SELFREN (rw) */
#define EBU_SDRMREF_SELFREN_POS              _EBU_UL(12)
#define EBU_SDRMREF_SELFREN_LEN              _EBU_UL(1)

/* EBU_SDRMREF_AUTOSELFR (rw) */
#define EBU_SDRMREF_AUTOSELFR_POS            _EBU_UL(13)
#define EBU_SDRMREF_AUTOSELFR_LEN            _EBU_UL(1)

/* EBU_SDRMREF_ERFSHC (rw) */
#define EBU_SDRMREF_ERFSHC_POS               _EBU_UL(14)
#define EBU_SDRMREF_ERFSHC_LEN               _EBU_UL(2)

/* EBU_SDRMREF_SELFREX_DLY (rw) */
#define EBU_SDRMREF_SELFREX_DLY_POS          _EBU_UL(16)
#define EBU_SDRMREF_SELFREX_DLY_LEN          _EBU_UL(8)

/* EBU_SDRMREF_ARFSH (rw) */
#define EBU_SDRMREF_ARFSH_POS                _EBU_UL(24)
#define EBU_SDRMREF_ARFSH_LEN                _EBU_UL(1)

/* EBU_SDRMREF_RES_DLY (rw) */
#define EBU_SDRMREF_RES_DLY_POS              _EBU_UL(25)
#define EBU_SDRMREF_RES_DLY_LEN              _EBU_UL(3)

/* EBU_SDRMREF_RES (r) */
#define EBU_SDRMREF_RES_POS                  _EBU_UL(28)
#define EBU_SDRMREF_RES_LEN                  _EBU_UL(4)

/* EBU_SDRSTAT_REFERR (rwh) */
#define EBU_SDRSTAT_REFERR_POS               _EBU_UL(0)
#define EBU_SDRSTAT_REFERR_LEN               _EBU_UL(1)

/* EBU_SDRSTAT_SDRMBUSY (rh) */
#define EBU_SDRSTAT_SDRMBUSY_POS             _EBU_UL(1)
#define EBU_SDRSTAT_SDRMBUSY_LEN             _EBU_UL(1)

/* EBU_SDRSTAT_SDERR (rwh) */
#define EBU_SDRSTAT_SDERR_POS                _EBU_UL(2)
#define EBU_SDRSTAT_SDERR_LEN                _EBU_UL(1)

/* EBU_SDRSTAT_DRIFT_WARN (rwh) */
#define EBU_SDRSTAT_DRIFT_WARN_POS           _EBU_UL(3)
#define EBU_SDRSTAT_DRIFT_WARN_LEN           _EBU_UL(1)

/* EBU_SDRSTAT_RES (r) */
#define EBU_SDRSTAT_RES_POS                  _EBU_UL(4)
#define EBU_SDRSTAT_RES_LEN                  _EBU_UL(28)

/* EBU_DLLCON_DLL_VALUE (rwh) */
#define EBU_DLLCON_DLL_VALUE_POS             _EBU_UL(0)
#define EBU_DLLCON_DLL_VALUE_LEN             _EBU_UL(9)

/* EBU_DLLCON_RES2 (r) */
#define EBU_DLLCON_RES2_POS                  _EBU_UL(9)
#define EBU_DLLCON_RES2_LEN                  _EBU_UL(2)

/* EBU_DLLCON_DCC_EN (r) */
#define EBU_DLLCON_DCC_EN_POS                _EBU_UL(11)
#define EBU_DLLCON_DCC_EN_LEN                _EBU_UL(1)

/* EBU_DLLCON_DLL_LCK (rh) */
#define EBU_DLLCON_DLL_LCK_POS               _EBU_UL(12)
#define EBU_DLLCON_DLL_LCK_LEN               _EBU_UL(1)

/* EBU_DLLCON_DLL_DIS (rw) */
#define EBU_DLLCON_DLL_DIS_POS               _EBU_UL(13)
#define EBU_DLLCON_DLL_DIS_LEN               _EBU_UL(1)

/* EBU_DLLCON_DLL_RST (w) */
#define EBU_DLLCON_DLL_RST_POS               _EBU_UL(14)
#define EBU_DLLCON_DLL_RST_LEN               _EBU_UL(1)

/* EBU_DLLCON_ALGO (rw) */
#define EBU_DLLCON_ALGO_POS                  _EBU_UL(15)
#define EBU_DLLCON_ALGO_LEN                  _EBU_UL(1)

/* EBU_DLLCON_WR_D_ADJ (rw) */
#define EBU_DLLCON_WR_D_ADJ_POS              _EBU_UL(16)
#define EBU_DLLCON_WR_D_ADJ_LEN              _EBU_UL(3)

/* EBU_DLLCON_RES1 (r) */
#define EBU_DLLCON_RES1_POS                  _EBU_UL(19)
#define EBU_DLLCON_RES1_LEN                  _EBU_UL(1)

/* EBU_DLLCON_RD_DQS_ADJ (rw) */
#define EBU_DLLCON_RD_DQS_ADJ_POS            _EBU_UL(20)
#define EBU_DLLCON_RD_DQS_ADJ_LEN            _EBU_UL(3)

/* EBU_DLLCON_RES0 (r) */
#define EBU_DLLCON_RES0_POS                  _EBU_UL(23)
#define EBU_DLLCON_RES0_LEN                  _EBU_UL(4)

/* EBU_DLLCON_WIN_EN (rw) */
#define EBU_DLLCON_WIN_EN_POS                _EBU_UL(27)
#define EBU_DLLCON_WIN_EN_LEN                _EBU_UL(1)

/* EBU_DLLCON_RD_EN (rw) */
#define EBU_DLLCON_RD_EN_POS                 _EBU_UL(28)
#define EBU_DLLCON_RD_EN_LEN                 _EBU_UL(1)

/* EBU_DLLCON_WR_EN (rw) */
#define EBU_DLLCON_WR_EN_POS                 _EBU_UL(29)
#define EBU_DLLCON_WR_EN_LEN                 _EBU_UL(1)

/* EBU_DLLCON_AMODE (rw) */
#define EBU_DLLCON_AMODE_POS                 _EBU_UL(30)
#define EBU_DLLCON_AMODE_LEN                 _EBU_UL(2)

/* EBU_DDRNCON_CRCD (rw) */
#define EBU_DDRNCON_CRCD_POS                 _EBU_UL(0)
#define EBU_DDRNCON_CRCD_LEN                 _EBU_UL(8)

/* EBU_DDRNCON_CRSC (rw) */
#define EBU_DDRNCON_CRSC_POS                 _EBU_UL(8)
#define EBU_DDRNCON_CRSC_LEN                 _EBU_UL(4)

/* EBU_DDRNCON_PAGESIZE (rw) */
#define EBU_DDRNCON_PAGESIZE_POS             _EBU_UL(12)
#define EBU_DDRNCON_PAGESIZE_LEN             _EBU_UL(4)

/* EBU_DDRNCON_CRP (rw) */
#define EBU_DDRNCON_CRP_POS                  _EBU_UL(16)
#define EBU_DDRNCON_CRP_LEN                  _EBU_UL(4)

/* EBU_DDRNCON_CSRR (rw) */
#define EBU_DDRNCON_CSRR_POS                 _EBU_UL(20)
#define EBU_DDRNCON_CSRR_LEN                 _EBU_UL(4)

/* EBU_DDRNCON_CSRS (rw) */
#define EBU_DDRNCON_CSRS_POS                 _EBU_UL(24)
#define EBU_DDRNCON_CSRS_LEN                 _EBU_UL(4)

/* EBU_DDRNCON_MAXADD (rw) */
#define EBU_DDRNCON_MAXADD_POS               _EBU_UL(28)
#define EBU_DDRNCON_MAXADD_LEN               _EBU_UL(3)

/* EBU_DDRNCON_MODE (rw) */
#define EBU_DDRNCON_MODE_POS                 _EBU_UL(31)
#define EBU_DDRNCON_MODE_LEN                 _EBU_UL(1)

/* EBU_DDRNMOD_BURSTL (rw) */
#define EBU_DDRNMOD_BURSTL_POS               _EBU_UL(0)
#define EBU_DDRNMOD_BURSTL_LEN               _EBU_UL(3)

/* EBU_DDRNMOD_BTYP (rw) */
#define EBU_DDRNMOD_BTYP_POS                 _EBU_UL(3)
#define EBU_DDRNMOD_BTYP_LEN                 _EBU_UL(1)

/* EBU_DDRNMOD_CASLAT (rw) */
#define EBU_DDRNMOD_CASLAT_POS               _EBU_UL(4)
#define EBU_DDRNMOD_CASLAT_LEN               _EBU_UL(3)

/* EBU_DDRNMOD_OPMODE (rw) */
#define EBU_DDRNMOD_OPMODE_POS               _EBU_UL(7)
#define EBU_DDRNMOD_OPMODE_LEN               _EBU_UL(7)

/* EBU_DDRNMOD_Res (r) */
#define EBU_DDRNMOD_Res_POS                  _EBU_UL(14)
#define EBU_DDRNMOD_Res_LEN                  _EBU_UL(2)

/* EBU_DDRNMOD_XOPM (rw) */
#define EBU_DDRNMOD_XOPM_POS                 _EBU_UL(16)
#define EBU_DDRNMOD_XOPM_LEN                 _EBU_UL(14)

/* EBU_DDRNMOD_XBA (rw) */
#define EBU_DDRNMOD_XBA_POS                  _EBU_UL(30)
#define EBU_DDRNMOD_XBA_LEN                  _EBU_UL(2)

/* EBU_DDRNMOD2_RES (r) */
#define EBU_DDRNMOD2_RES_POS                 _EBU_UL(0)
#define EBU_DDRNMOD2_RES_LEN                 _EBU_UL(16)

/* EBU_DDRNMOD2_XOPM (rw) */
#define EBU_DDRNMOD2_XOPM_POS                _EBU_UL(16)
#define EBU_DDRNMOD2_XOPM_LEN                _EBU_UL(12)

/* EBU_DDRNMOD2_DEV_SEL (r) */
#define EBU_DDRNMOD2_DEV_SEL_POS             _EBU_UL(28)
#define EBU_DDRNMOD2_DEV_SEL_LEN             _EBU_UL(1)

/* EBU_DDRNMOD2_XBA (rw) */
#define EBU_DDRNMOD2_XBA_POS                 _EBU_UL(29)
#define EBU_DDRNMOD2_XBA_LEN                 _EBU_UL(2)

/* EBU_DDRNMOD2_ACT (rwh) */
#define EBU_DDRNMOD2_ACT_POS                 _EBU_UL(31)
#define EBU_DDRNMOD2_ACT_LEN                 _EBU_UL(1)

/* EBU_DDRNSRR_SRRDATA0 (rh) */
#define EBU_DDRNSRR_SRRDATA0_POS             _EBU_UL(0)
#define EBU_DDRNSRR_SRRDATA0_LEN             _EBU_UL(16)

/* EBU_DDRNSRR_SRRDATA1 (rh) */
#define EBU_DDRNSRR_SRRDATA1_POS             _EBU_UL(16)
#define EBU_DDRNSRR_SRRDATA1_LEN             _EBU_UL(16)

/* EBU_DDRNPRLD_PAGE (rw) */
#define EBU_DDRNPRLD_PAGE_POS                _EBU_UL(0)
#define EBU_DDRNPRLD_PAGE_LEN                _EBU_UL(29)

/* EBU_DDRNPRLD_BA (rw) */
#define EBU_DDRNPRLD_BA_POS                  _EBU_UL(29)
#define EBU_DDRNPRLD_BA_LEN                  _EBU_UL(2)

/* EBU_DDRNPRLD_ACTIVE (rh) */
#define EBU_DDRNPRLD_ACTIVE_POS              _EBU_UL(31)
#define EBU_DDRNPRLD_ACTIVE_LEN              _EBU_UL(1)

/* EBU_DDRNTAG0_TAG (rh) */
#define EBU_DDRNTAG0_TAG_POS                 _EBU_UL(0)
#define EBU_DDRNTAG0_TAG_LEN                 _EBU_UL(31)

/* EBU_DDRNTAG0_ACTIVE (rwh) */
#define EBU_DDRNTAG0_ACTIVE_POS              _EBU_UL(31)
#define EBU_DDRNTAG0_ACTIVE_LEN              _EBU_UL(1)

/* EBU_DDRNTAG1_TAG (rh) */
#define EBU_DDRNTAG1_TAG_POS                 _EBU_UL(0)
#define EBU_DDRNTAG1_TAG_LEN                 _EBU_UL(31)

/* EBU_DDRNTAG1_ACTIVE (rwh) */
#define EBU_DDRNTAG1_ACTIVE_POS              _EBU_UL(31)
#define EBU_DDRNTAG1_ACTIVE_LEN              _EBU_UL(1)

/* EBU_DDRNTAG2_TAG (rh) */
#define EBU_DDRNTAG2_TAG_POS                 _EBU_UL(0)
#define EBU_DDRNTAG2_TAG_LEN                 _EBU_UL(31)

/* EBU_DDRNTAG2_ACTIVE (rwh) */
#define EBU_DDRNTAG2_ACTIVE_POS              _EBU_UL(31)
#define EBU_DDRNTAG2_ACTIVE_LEN              _EBU_UL(1)

/* EBU_DDRNTAG3_TAG (rh) */
#define EBU_DDRNTAG3_TAG_POS                 _EBU_UL(0)
#define EBU_DDRNTAG3_TAG_LEN                 _EBU_UL(31)

/* EBU_DDRNTAG3_ACTIVE (rwh) */
#define EBU_DDRNTAG3_ACTIVE_POS              _EBU_UL(31)
#define EBU_DDRNTAG3_ACTIVE_LEN              _EBU_UL(1)

#endif
