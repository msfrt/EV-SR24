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
 * $Filename__:flash_1767.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:flash_1767$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: flash_1767.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FLASH_1767_H
#define _FLASH_1767_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _FLASH_UL(x) x
#else
    #define _FLASH_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module FLASH on TC1767
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF8002008] : Flash Module Identification Register
    volatile uint32 RESERVED0[1];        // [0xF800200C...0xF800200F] : reserved space
    volatile uint32 FSR;                 // [0xF8002010] : Flash Status Register
    volatile uint32 FCON;                // [0xF8002014] : Flash Configuration Register
    volatile uint32 MARP;                // [0xF8002018] : Margin Control Register PFLASH
    volatile uint32 MARD;                // [0xF800201C] : Margin Control Register DFLASH
    volatile uint32 PROCON0;             // [0xF8002020] : Flash Protection Configuration Register User 0
    volatile uint32 PROCON1;             // [0xF8002024] : Flash Protection Configuration Register User 1
    volatile uint32 PROCON2;             // [0xF8002028] : Flash Protection Configuration Register User 2
    volatile uint32 RESERVED1[53];       // [0xF800202C...0xF80020FF] : reserved space
    volatile uint32 CFTEST;              // [0xF8002100] : CPU Flash Test Register
    volatile uint32 ECCW;                // [0xF8002104] : ECC Write Register
    volatile uint32 ECCR;                // [0xF8002108] : ECC Read Register
    volatile uint32 FSCON;               // [0xF800210C] : Flash Size Configuration Register
} FLASH_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern FLASH_RegMap_t FLASH0 __attribute__ ((asection (".bss.label_only")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/
#define FLASH FLASH0   /* for old references to FLASH */

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS END HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* FLASH_ID_MOD_NUMBER (r) */
#define FLASH_ID_MOD_NUMBER_POS              _FLASH_UL(16)
#define FLASH_ID_MOD_NUMBER_LEN              _FLASH_UL(16)

/* FLASH_ID_MOD_REV (r) */
#define FLASH_ID_MOD_REV_POS                 _FLASH_UL(0)
#define FLASH_ID_MOD_REV_LEN                 _FLASH_UL(8)

/* FLASH_ID_MOD_TYPE (r) */
#define FLASH_ID_MOD_TYPE_POS                _FLASH_UL(8)
#define FLASH_ID_MOD_TYPE_LEN                _FLASH_UL(8)

/* FLASH_ID_MOD_REV (r) */
#define FLASH_ID_MOD_REV_POS                 _FLASH_UL(0)
#define FLASH_ID_MOD_REV_LEN                 _FLASH_UL(8)

/* FLASH_ID_MOD_TYPE (r) */
#define FLASH_ID_MOD_TYPE_POS                _FLASH_UL(8)
#define FLASH_ID_MOD_TYPE_LEN                _FLASH_UL(8)

/* FLASH_ID_MOD_NUMBER (r) */
#define FLASH_ID_MOD_NUMBER_POS              _FLASH_UL(16)
#define FLASH_ID_MOD_NUMBER_LEN              _FLASH_UL(16)

/* FLASH_FSR_PBUSY (rh) */
#define FLASH_FSR_PBUSY_POS                  _FLASH_UL(0)
#define FLASH_FSR_PBUSY_LEN                  _FLASH_UL(1)

/* FLASH_FSR_FABUSY (rh) */
#define FLASH_FSR_FABUSY_POS                 _FLASH_UL(1)
#define FLASH_FSR_FABUSY_LEN                 _FLASH_UL(1)

/* FLASH_FSR_D0BUSY (rh) */
#define FLASH_FSR_D0BUSY_POS                 _FLASH_UL(2)
#define FLASH_FSR_D0BUSY_LEN                 _FLASH_UL(1)

/* FLASH_FSR_D1BUSY (rh) */
#define FLASH_FSR_D1BUSY_POS                 _FLASH_UL(3)
#define FLASH_FSR_D1BUSY_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PROG (rh) */
#define FLASH_FSR_PROG_POS                   _FLASH_UL(4)
#define FLASH_FSR_PROG_LEN                   _FLASH_UL(1)

/* FLASH_FSR_ERASE (rh) */
#define FLASH_FSR_ERASE_POS                  _FLASH_UL(5)
#define FLASH_FSR_ERASE_LEN                  _FLASH_UL(1)

/* FLASH_FSR_PFPAGE (rh) */
#define FLASH_FSR_PFPAGE_POS                 _FLASH_UL(6)
#define FLASH_FSR_PFPAGE_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFPAGE (rh) */
#define FLASH_FSR_DFPAGE_POS                 _FLASH_UL(7)
#define FLASH_FSR_DFPAGE_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PFOPER (rh) */
#define FLASH_FSR_PFOPER_POS                 _FLASH_UL(8)
#define FLASH_FSR_PFOPER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFOPER (rh) */
#define FLASH_FSR_DFOPER_POS                 _FLASH_UL(9)
#define FLASH_FSR_DFOPER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_SQER (rh) */
#define FLASH_FSR_SQER_POS                   _FLASH_UL(10)
#define FLASH_FSR_SQER_LEN                   _FLASH_UL(1)

/* FLASH_FSR_PROER (rh) */
#define FLASH_FSR_PROER_POS                  _FLASH_UL(11)
#define FLASH_FSR_PROER_LEN                  _FLASH_UL(1)

/* FLASH_FSR_PFSBER (rh) */
#define FLASH_FSR_PFSBER_POS                 _FLASH_UL(12)
#define FLASH_FSR_PFSBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFSBER (rh) */
#define FLASH_FSR_DFSBER_POS                 _FLASH_UL(13)
#define FLASH_FSR_DFSBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PFDBER (rh) */
#define FLASH_FSR_PFDBER_POS                 _FLASH_UL(14)
#define FLASH_FSR_PFDBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFDBER (rh) */
#define FLASH_FSR_DFDBER_POS                 _FLASH_UL(15)
#define FLASH_FSR_DFDBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PROIN (rh) */
#define FLASH_FSR_PROIN_POS                  _FLASH_UL(16)
#define FLASH_FSR_PROIN_LEN                  _FLASH_UL(1)

/* FLASH_FSR_RPROIN (rh) */
#define FLASH_FSR_RPROIN_POS                 _FLASH_UL(18)
#define FLASH_FSR_RPROIN_LEN                 _FLASH_UL(1)

/* FLASH_FSR_RPRODIS (rh) */
#define FLASH_FSR_RPRODIS_POS                _FLASH_UL(19)
#define FLASH_FSR_RPRODIS_LEN                _FLASH_UL(1)

/* FLASH_FSR_WPROIN0 (rh) */
#define FLASH_FSR_WPROIN0_POS                _FLASH_UL(21)
#define FLASH_FSR_WPROIN0_LEN                _FLASH_UL(1)

/* FLASH_FSR_WPROIN1 (rh) */
#define FLASH_FSR_WPROIN1_POS                _FLASH_UL(22)
#define FLASH_FSR_WPROIN1_LEN                _FLASH_UL(1)

/* FLASH_FSR_WPROIN2 (rh) */
#define FLASH_FSR_WPROIN2_POS                _FLASH_UL(23)
#define FLASH_FSR_WPROIN2_LEN                _FLASH_UL(1)

/* FLASH_FSR_WPRODIS0 (rh) */
#define FLASH_FSR_WPRODIS0_POS               _FLASH_UL(25)
#define FLASH_FSR_WPRODIS0_LEN               _FLASH_UL(1)

/* FLASH_FSR_WPRODIS1 (rh) */
#define FLASH_FSR_WPRODIS1_POS               _FLASH_UL(26)
#define FLASH_FSR_WPRODIS1_LEN               _FLASH_UL(1)

/* FLASH_FSR_SLM (rh) */
#define FLASH_FSR_SLM_POS                    _FLASH_UL(28)
#define FLASH_FSR_SLM_LEN                    _FLASH_UL(1)

/* FLASH_FSR_VIS (rh) */
#define FLASH_FSR_VIS_POS                    _FLASH_UL(29)
#define FLASH_FSR_VIS_LEN                    _FLASH_UL(1)

/* FLASH_FSR_ORIER (rh) */
#define FLASH_FSR_ORIER_POS                  _FLASH_UL(30)
#define FLASH_FSR_ORIER_LEN                  _FLASH_UL(1)

/* FLASH_FSR_VER (rh) */
#define FLASH_FSR_VER_POS                    _FLASH_UL(31)
#define FLASH_FSR_VER_LEN                    _FLASH_UL(1)

/* FLASH_FCON_WSPFLASH (rw) */
#define FLASH_FCON_WSPFLASH_POS              _FLASH_UL(0)
#define FLASH_FCON_WSPFLASH_LEN              _FLASH_UL(4)

/* FLASH_FCON_WSECPF (rw) */
#define FLASH_FCON_WSECPF_POS                _FLASH_UL(4)
#define FLASH_FCON_WSECPF_LEN                _FLASH_UL(1)

/* FLASH_FCON_WSDFLASH (rw) */
#define FLASH_FCON_WSDFLASH_POS              _FLASH_UL(8)
#define FLASH_FCON_WSDFLASH_LEN              _FLASH_UL(4)

/* FLASH_FCON_WSECDF (rw) */
#define FLASH_FCON_WSECDF_POS                _FLASH_UL(12)
#define FLASH_FCON_WSECDF_LEN                _FLASH_UL(1)

/* FLASH_FCON_IDLE (rw) */
#define FLASH_FCON_IDLE_POS                  _FLASH_UL(13)
#define FLASH_FCON_IDLE_LEN                  _FLASH_UL(1)

/* FLASH_FCON_ESLDIS (rw) */
#define FLASH_FCON_ESLDIS_POS                _FLASH_UL(14)
#define FLASH_FCON_ESLDIS_LEN                _FLASH_UL(1)

/* FLASH_FCON_SLEEP_FSD (rw) */
#define FLASH_FCON_SLEEP_FSD_POS             _FLASH_UL(15)
#define FLASH_FCON_SLEEP_FSD_LEN             _FLASH_UL(1)

/* FLASH_FCON_RPA (rh) */
#define FLASH_FCON_RPA_POS                   _FLASH_UL(16)
#define FLASH_FCON_RPA_LEN                   _FLASH_UL(1)

/* FLASH_FCON_DCF (rwh) */
#define FLASH_FCON_DCF_POS                   _FLASH_UL(17)
#define FLASH_FCON_DCF_LEN                   _FLASH_UL(1)

/* FLASH_FCON_DDF (rwh) */
#define FLASH_FCON_DDF_POS                   _FLASH_UL(18)
#define FLASH_FCON_DDF_LEN                   _FLASH_UL(1)

/* FLASH_FCON_DDFDMA (rw) */
#define FLASH_FCON_DDFDMA_POS                _FLASH_UL(20)
#define FLASH_FCON_DDFDMA_LEN                _FLASH_UL(1)

/* FLASH_FCON_DDFPCP (rw) */
#define FLASH_FCON_DDFPCP_POS                _FLASH_UL(21)
#define FLASH_FCON_DDFPCP_LEN                _FLASH_UL(1)

/* FLASH_FCON_VOPERM (rw) */
#define FLASH_FCON_VOPERM_POS                _FLASH_UL(24)
#define FLASH_FCON_VOPERM_LEN                _FLASH_UL(1)

/* FLASH_FCON_SQERM (rw) */
#define FLASH_FCON_SQERM_POS                 _FLASH_UL(25)
#define FLASH_FCON_SQERM_LEN                 _FLASH_UL(1)

/* FLASH_FCON_PROERM (rw) */
#define FLASH_FCON_PROERM_POS                _FLASH_UL(26)
#define FLASH_FCON_PROERM_LEN                _FLASH_UL(1)

/* FLASH_FCON_PFSBERM (rw) */
#define FLASH_FCON_PFSBERM_POS               _FLASH_UL(27)
#define FLASH_FCON_PFSBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_DFSBERM (rw) */
#define FLASH_FCON_DFSBERM_POS               _FLASH_UL(28)
#define FLASH_FCON_DFSBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_PFDBERM (rw) */
#define FLASH_FCON_PFDBERM_POS               _FLASH_UL(29)
#define FLASH_FCON_PFDBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_DFDBERM (rw) */
#define FLASH_FCON_DFDBERM_POS               _FLASH_UL(30)
#define FLASH_FCON_DFDBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_EOBM (rw) */
#define FLASH_FCON_EOBM_POS                  _FLASH_UL(31)
#define FLASH_FCON_EOBM_LEN                  _FLASH_UL(1)

/* FLASH_MARP_MARGIN0 (rw) */
#define FLASH_MARP_MARGIN0_POS               _FLASH_UL(0)
#define FLASH_MARP_MARGIN0_LEN               _FLASH_UL(2)

/* FLASH_MARP_MARGIN1 (rw) */
#define FLASH_MARP_MARGIN1_POS               _FLASH_UL(2)
#define FLASH_MARP_MARGIN1_LEN               _FLASH_UL(2)

/* FLASH_MARP_TRAPDIS (rw) */
#define FLASH_MARP_TRAPDIS_POS               _FLASH_UL(15)
#define FLASH_MARP_TRAPDIS_LEN               _FLASH_UL(1)

/* FLASH_MARP_NaNTRAPDIS (rw) */
#define FLASH_MARP_NaNTRAPDIS_POS            _FLASH_UL(15)
#define FLASH_MARP_NaNTRAPDIS_LEN            _FLASH_UL(1)

/* FLASH_MARD_MARGIN0 (rw) */
#define FLASH_MARD_MARGIN0_POS               _FLASH_UL(0)
#define FLASH_MARD_MARGIN0_LEN               _FLASH_UL(2)

/* FLASH_MARD_MARGIN1 (rw) */
#define FLASH_MARD_MARGIN1_POS               _FLASH_UL(2)
#define FLASH_MARD_MARGIN1_LEN               _FLASH_UL(2)

/* FLASH_MARD_BNKSEL (rw) */
#define FLASH_MARD_BNKSEL_POS                _FLASH_UL(4)
#define FLASH_MARD_BNKSEL_LEN                _FLASH_UL(1)

/* FLASH_MARD_TRAPDIS (rw) */
#define FLASH_MARD_TRAPDIS_POS               _FLASH_UL(15)
#define FLASH_MARD_TRAPDIS_LEN               _FLASH_UL(1)

/* FLASH_MARD_NaNTRAPDIS (rw) */
#define FLASH_MARD_NaNTRAPDIS_POS            _FLASH_UL(15)
#define FLASH_MARD_NaNTRAPDIS_LEN            _FLASH_UL(1)

/* FLASH_PROCON0_S0L (rh) */
#define FLASH_PROCON0_S0L_POS                _FLASH_UL(0)
#define FLASH_PROCON0_S0L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S1L (rh) */
#define FLASH_PROCON0_S1L_POS                _FLASH_UL(1)
#define FLASH_PROCON0_S1L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S2L (rh) */
#define FLASH_PROCON0_S2L_POS                _FLASH_UL(2)
#define FLASH_PROCON0_S2L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S3L (rh) */
#define FLASH_PROCON0_S3L_POS                _FLASH_UL(3)
#define FLASH_PROCON0_S3L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S4L (rh) */
#define FLASH_PROCON0_S4L_POS                _FLASH_UL(4)
#define FLASH_PROCON0_S4L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S5L (rh) */
#define FLASH_PROCON0_S5L_POS                _FLASH_UL(5)
#define FLASH_PROCON0_S5L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S6L (rh) */
#define FLASH_PROCON0_S6L_POS                _FLASH_UL(6)
#define FLASH_PROCON0_S6L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S7L (rh) */
#define FLASH_PROCON0_S7L_POS                _FLASH_UL(7)
#define FLASH_PROCON0_S7L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S8L (rh) */
#define FLASH_PROCON0_S8L_POS                _FLASH_UL(8)
#define FLASH_PROCON0_S8L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S9L (rh) */
#define FLASH_PROCON0_S9L_POS                _FLASH_UL(9)
#define FLASH_PROCON0_S9L_LEN                _FLASH_UL(1)

/* FLASH_PROCON0_S10_S11L (rh) */
#define FLASH_PROCON0_S10_S11L_POS           _FLASH_UL(10)
#define FLASH_PROCON0_S10_S11L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_S12_S13L (rh) */
#define FLASH_PROCON0_S12_S13L_POS           _FLASH_UL(11)
#define FLASH_PROCON0_S12_S13L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_S14_S15L (rh) */
#define FLASH_PROCON0_S14_S15L_POS           _FLASH_UL(12)
#define FLASH_PROCON0_S14_S15L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_DFEXPRO (rh) */
#define FLASH_PROCON0_DFEXPRO_POS            _FLASH_UL(14)
#define FLASH_PROCON0_DFEXPRO_LEN            _FLASH_UL(1)

/* FLASH_PROCON0_RPRO (rh) */
#define FLASH_PROCON0_RPRO_POS               _FLASH_UL(15)
#define FLASH_PROCON0_RPRO_LEN               _FLASH_UL(1)

/* FLASH_PROCON1_S0L (rh) */
#define FLASH_PROCON1_S0L_POS                _FLASH_UL(0)
#define FLASH_PROCON1_S0L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S1L (rh) */
#define FLASH_PROCON1_S1L_POS                _FLASH_UL(1)
#define FLASH_PROCON1_S1L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S2L (rh) */
#define FLASH_PROCON1_S2L_POS                _FLASH_UL(2)
#define FLASH_PROCON1_S2L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S3L (rh) */
#define FLASH_PROCON1_S3L_POS                _FLASH_UL(3)
#define FLASH_PROCON1_S3L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S4L (rh) */
#define FLASH_PROCON1_S4L_POS                _FLASH_UL(4)
#define FLASH_PROCON1_S4L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S5L (rh) */
#define FLASH_PROCON1_S5L_POS                _FLASH_UL(5)
#define FLASH_PROCON1_S5L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S6L (rh) */
#define FLASH_PROCON1_S6L_POS                _FLASH_UL(6)
#define FLASH_PROCON1_S6L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S7L (rh) */
#define FLASH_PROCON1_S7L_POS                _FLASH_UL(7)
#define FLASH_PROCON1_S7L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S8L (rh) */
#define FLASH_PROCON1_S8L_POS                _FLASH_UL(8)
#define FLASH_PROCON1_S8L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S9L (rh) */
#define FLASH_PROCON1_S9L_POS                _FLASH_UL(9)
#define FLASH_PROCON1_S9L_LEN                _FLASH_UL(1)

/* FLASH_PROCON1_S10_S11L (rh) */
#define FLASH_PROCON1_S10_S11L_POS           _FLASH_UL(10)
#define FLASH_PROCON1_S10_S11L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_S12_S13L (rh) */
#define FLASH_PROCON1_S12_S13L_POS           _FLASH_UL(11)
#define FLASH_PROCON1_S12_S13L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_S14_S15L (rh) */
#define FLASH_PROCON1_S14_S15L_POS           _FLASH_UL(12)
#define FLASH_PROCON1_S14_S15L_LEN           _FLASH_UL(1)

/* FLASH_PROCON2_S0ROM (rh) */
#define FLASH_PROCON2_S0ROM_POS              _FLASH_UL(0)
#define FLASH_PROCON2_S0ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S1ROM (rh) */
#define FLASH_PROCON2_S1ROM_POS              _FLASH_UL(1)
#define FLASH_PROCON2_S1ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S2ROM (rh) */
#define FLASH_PROCON2_S2ROM_POS              _FLASH_UL(2)
#define FLASH_PROCON2_S2ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S3ROM (rh) */
#define FLASH_PROCON2_S3ROM_POS              _FLASH_UL(3)
#define FLASH_PROCON2_S3ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S4ROM (rh) */
#define FLASH_PROCON2_S4ROM_POS              _FLASH_UL(4)
#define FLASH_PROCON2_S4ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S5ROM (rh) */
#define FLASH_PROCON2_S5ROM_POS              _FLASH_UL(5)
#define FLASH_PROCON2_S5ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S6ROM (rh) */
#define FLASH_PROCON2_S6ROM_POS              _FLASH_UL(6)
#define FLASH_PROCON2_S6ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S7ROM (rh) */
#define FLASH_PROCON2_S7ROM_POS              _FLASH_UL(7)
#define FLASH_PROCON2_S7ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S8ROM (rh) */
#define FLASH_PROCON2_S8ROM_POS              _FLASH_UL(8)
#define FLASH_PROCON2_S8ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S9ROM (rh) */
#define FLASH_PROCON2_S9ROM_POS              _FLASH_UL(9)
#define FLASH_PROCON2_S9ROM_LEN              _FLASH_UL(1)

/* FLASH_PROCON2_S10_S11ROM (rh) */
#define FLASH_PROCON2_S10_S11ROM_POS         _FLASH_UL(10)
#define FLASH_PROCON2_S10_S11ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_S12_S13ROM (rh) */
#define FLASH_PROCON2_S12_S13ROM_POS         _FLASH_UL(11)
#define FLASH_PROCON2_S12_S13ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_S14_S15ROM (rh) */
#define FLASH_PROCON2_S14_S15ROM_POS         _FLASH_UL(12)
#define FLASH_PROCON2_S14_S15ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_TP (rh) */
#define FLASH_PROCON2_TP_POS                 _FLASH_UL(15)
#define FLASH_PROCON2_TP_LEN                 _FLASH_UL(1)

/* FLASH_CFTEST_TE (rwh) */
#define FLASH_CFTEST_TE_POS                  _FLASH_UL(0)
#define FLASH_CFTEST_TE_LEN                  _FLASH_UL(1)

/* FLASH_CFTEST_ECENCDIS (rw) */
#define FLASH_CFTEST_ECENCDIS_POS            _FLASH_UL(2)
#define FLASH_CFTEST_ECENCDIS_LEN            _FLASH_UL(1)

/* FLASH_CFTEST_ECDECDIS (rw) */
#define FLASH_CFTEST_ECDECDIS_POS            _FLASH_UL(3)
#define FLASH_CFTEST_ECDECDIS_LEN            _FLASH_UL(1)

/* FLASH_CFTEST_CONFSE (rw) */
#define FLASH_CFTEST_CONFSE_POS              _FLASH_UL(4)
#define FLASH_CFTEST_CONFSE_LEN              _FLASH_UL(1)

/* FLASH_CFTEST_PREFEDIS (rw) */
#define FLASH_CFTEST_PREFEDIS_POS            _FLASH_UL(5)
#define FLASH_CFTEST_PREFEDIS_LEN            _FLASH_UL(1)

/* FLASH_CFTEST_FSRAME (rw) */
#define FLASH_CFTEST_FSRAME_POS              _FLASH_UL(6)
#define FLASH_CFTEST_FSRAME_LEN              _FLASH_UL(1)

/* FLASH_CFTEST_EEAS (rw) */
#define FLASH_CFTEST_EEAS_POS                _FLASH_UL(7)
#define FLASH_CFTEST_EEAS_LEN                _FLASH_UL(1)

/* FLASH_CFTEST_FSIINTEN (rw) */
#define FLASH_CFTEST_FSIINTEN_POS            _FLASH_UL(8)
#define FLASH_CFTEST_FSIINTEN_LEN            _FLASH_UL(1)

/* FLASH_CFTEST_FSIINT (rwh) */
#define FLASH_CFTEST_FSIINT_POS              _FLASH_UL(9)
#define FLASH_CFTEST_FSIINT_LEN              _FLASH_UL(1)

/* FLASH_ECCW_ECCWCode () */
#define FLASH_ECCW_ECCWCode_POS              _FLASH_UL(0)
#define FLASH_ECCW_ECCWCode_LEN              _FLASH_UL(8)

/* FLASH_ECCR_ECCRCode () */
#define FLASH_ECCR_ECCRCode_POS              _FLASH_UL(0)
#define FLASH_ECCR_ECCRCode_LEN              _FLASH_UL(8)

/* FLASH_FSCON_PFSIZE (rw) */
#define FLASH_FSCON_PFSIZE_POS               _FLASH_UL(0)
#define FLASH_FSCON_PFSIZE_LEN               _FLASH_UL(8)

/* FLASH_FSCON_DFSIZE (rw) */
#define FLASH_FSCON_DFSIZE_POS               _FLASH_UL(8)
#define FLASH_FSCON_DFSIZE_LEN               _FLASH_UL(5)

/* FLASH0_ID_MOD_REV (r) */
#define FLASH0_ID_MOD_REV_POS                _FLASH_UL(0)
#define FLASH0_ID_MOD_REV_LEN                _FLASH_UL(8)

/* FLASH0_ID_MOD_TYPE (r) */
#define FLASH0_ID_MOD_TYPE_POS               _FLASH_UL(8)
#define FLASH0_ID_MOD_TYPE_LEN               _FLASH_UL(8)

/* FLASH0_ID_MOD_NUMBER (r) */
#define FLASH0_ID_MOD_NUMBER_POS             _FLASH_UL(16)
#define FLASH0_ID_MOD_NUMBER_LEN             _FLASH_UL(16)

/* FLASH0_FSR_PBUSY (rh) */
#define FLASH0_FSR_PBUSY_POS                 _FLASH_UL(0)
#define FLASH0_FSR_PBUSY_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_FABUSY (rh) */
#define FLASH0_FSR_FABUSY_POS                _FLASH_UL(1)
#define FLASH0_FSR_FABUSY_LEN                _FLASH_UL(1)

/* FLASH0_FSR_D0BUSY (rh) */
#define FLASH0_FSR_D0BUSY_POS                _FLASH_UL(2)
#define FLASH0_FSR_D0BUSY_LEN                _FLASH_UL(1)

/* FLASH0_FSR_D1BUSY (rh) */
#define FLASH0_FSR_D1BUSY_POS                _FLASH_UL(3)
#define FLASH0_FSR_D1BUSY_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PROG (rh) */
#define FLASH0_FSR_PROG_POS                  _FLASH_UL(4)
#define FLASH0_FSR_PROG_LEN                  _FLASH_UL(1)

/* FLASH0_FSR_ERASE (rh) */
#define FLASH0_FSR_ERASE_POS                 _FLASH_UL(5)
#define FLASH0_FSR_ERASE_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_PFPAGE (rh) */
#define FLASH0_FSR_PFPAGE_POS                _FLASH_UL(6)
#define FLASH0_FSR_PFPAGE_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFPAGE (rh) */
#define FLASH0_FSR_DFPAGE_POS                _FLASH_UL(7)
#define FLASH0_FSR_DFPAGE_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PFOPER (rh) */
#define FLASH0_FSR_PFOPER_POS                _FLASH_UL(8)
#define FLASH0_FSR_PFOPER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFOPER (rh) */
#define FLASH0_FSR_DFOPER_POS                _FLASH_UL(9)
#define FLASH0_FSR_DFOPER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_SQER (rh) */
#define FLASH0_FSR_SQER_POS                  _FLASH_UL(10)
#define FLASH0_FSR_SQER_LEN                  _FLASH_UL(1)

/* FLASH0_FSR_PROER (rh) */
#define FLASH0_FSR_PROER_POS                 _FLASH_UL(11)
#define FLASH0_FSR_PROER_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_PFSBER (rh) */
#define FLASH0_FSR_PFSBER_POS                _FLASH_UL(12)
#define FLASH0_FSR_PFSBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFSBER (rh) */
#define FLASH0_FSR_DFSBER_POS                _FLASH_UL(13)
#define FLASH0_FSR_DFSBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PFDBER (rh) */
#define FLASH0_FSR_PFDBER_POS                _FLASH_UL(14)
#define FLASH0_FSR_PFDBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFDBER (rh) */
#define FLASH0_FSR_DFDBER_POS                _FLASH_UL(15)
#define FLASH0_FSR_DFDBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PROIN (rh) */
#define FLASH0_FSR_PROIN_POS                 _FLASH_UL(16)
#define FLASH0_FSR_PROIN_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_RPROIN (rh) */
#define FLASH0_FSR_RPROIN_POS                _FLASH_UL(18)
#define FLASH0_FSR_RPROIN_LEN                _FLASH_UL(1)

/* FLASH0_FSR_RPRODIS (rh) */
#define FLASH0_FSR_RPRODIS_POS               _FLASH_UL(19)
#define FLASH0_FSR_RPRODIS_LEN               _FLASH_UL(1)

/* FLASH0_FSR_WPROIN0 (rh) */
#define FLASH0_FSR_WPROIN0_POS               _FLASH_UL(21)
#define FLASH0_FSR_WPROIN0_LEN               _FLASH_UL(1)

/* FLASH0_FSR_WPROIN1 (rh) */
#define FLASH0_FSR_WPROIN1_POS               _FLASH_UL(22)
#define FLASH0_FSR_WPROIN1_LEN               _FLASH_UL(1)

/* FLASH0_FSR_WPROIN2 (rh) */
#define FLASH0_FSR_WPROIN2_POS               _FLASH_UL(23)
#define FLASH0_FSR_WPROIN2_LEN               _FLASH_UL(1)

/* FLASH0_FSR_WPRODIS0 (rh) */
#define FLASH0_FSR_WPRODIS0_POS              _FLASH_UL(25)
#define FLASH0_FSR_WPRODIS0_LEN              _FLASH_UL(1)

/* FLASH0_FSR_WPRODIS1 (rh) */
#define FLASH0_FSR_WPRODIS1_POS              _FLASH_UL(26)
#define FLASH0_FSR_WPRODIS1_LEN              _FLASH_UL(1)

/* FLASH0_FSR_SLM (rh) */
#define FLASH0_FSR_SLM_POS                   _FLASH_UL(28)
#define FLASH0_FSR_SLM_LEN                   _FLASH_UL(1)

/* FLASH0_FSR_VIS (rh) */
#define FLASH0_FSR_VIS_POS                   _FLASH_UL(29)
#define FLASH0_FSR_VIS_LEN                   _FLASH_UL(1)

/* FLASH0_FSR_ORIER (rh) */
#define FLASH0_FSR_ORIER_POS                 _FLASH_UL(30)
#define FLASH0_FSR_ORIER_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_VER (rh) */
#define FLASH0_FSR_VER_POS                   _FLASH_UL(31)
#define FLASH0_FSR_VER_LEN                   _FLASH_UL(1)

/* FLASH0_FCON_WSPFLASH (rw) */
#define FLASH0_FCON_WSPFLASH_POS             _FLASH_UL(0)
#define FLASH0_FCON_WSPFLASH_LEN             _FLASH_UL(4)

/* FLASH0_FCON_WSECPF (rw) */
#define FLASH0_FCON_WSECPF_POS               _FLASH_UL(4)
#define FLASH0_FCON_WSECPF_LEN               _FLASH_UL(1)

/* FLASH0_FCON_WSDFLASH (rw) */
#define FLASH0_FCON_WSDFLASH_POS             _FLASH_UL(8)
#define FLASH0_FCON_WSDFLASH_LEN             _FLASH_UL(4)

/* FLASH0_FCON_WSECDF (rw) */
#define FLASH0_FCON_WSECDF_POS               _FLASH_UL(12)
#define FLASH0_FCON_WSECDF_LEN               _FLASH_UL(1)

/* FLASH0_FCON_IDLE (rw) */
#define FLASH0_FCON_IDLE_POS                 _FLASH_UL(13)
#define FLASH0_FCON_IDLE_LEN                 _FLASH_UL(1)

/* FLASH0_FCON_ESLDIS (rw) */
#define FLASH0_FCON_ESLDIS_POS               _FLASH_UL(14)
#define FLASH0_FCON_ESLDIS_LEN               _FLASH_UL(1)

/* FLASH0_FCON_SLEEP_FSD (rw) */
#define FLASH0_FCON_SLEEP_FSD_POS            _FLASH_UL(15)
#define FLASH0_FCON_SLEEP_FSD_LEN            _FLASH_UL(1)

/* FLASH0_FCON_RPA (rh) */
#define FLASH0_FCON_RPA_POS                  _FLASH_UL(16)
#define FLASH0_FCON_RPA_LEN                  _FLASH_UL(1)

/* FLASH0_FCON_DCF (rwh) */
#define FLASH0_FCON_DCF_POS                  _FLASH_UL(17)
#define FLASH0_FCON_DCF_LEN                  _FLASH_UL(1)

/* FLASH0_FCON_DDF (rwh) */
#define FLASH0_FCON_DDF_POS                  _FLASH_UL(18)
#define FLASH0_FCON_DDF_LEN                  _FLASH_UL(1)

/* FLASH0_FCON_DDFDMA (rw) */
#define FLASH0_FCON_DDFDMA_POS               _FLASH_UL(20)
#define FLASH0_FCON_DDFDMA_LEN               _FLASH_UL(1)

/* FLASH0_FCON_DDFPCP (rw) */
#define FLASH0_FCON_DDFPCP_POS               _FLASH_UL(21)
#define FLASH0_FCON_DDFPCP_LEN               _FLASH_UL(1)

/* FLASH0_FCON_VOPERM (rw) */
#define FLASH0_FCON_VOPERM_POS               _FLASH_UL(24)
#define FLASH0_FCON_VOPERM_LEN               _FLASH_UL(1)

/* FLASH0_FCON_SQERM (rw) */
#define FLASH0_FCON_SQERM_POS                _FLASH_UL(25)
#define FLASH0_FCON_SQERM_LEN                _FLASH_UL(1)

/* FLASH0_FCON_PROERM (rw) */
#define FLASH0_FCON_PROERM_POS               _FLASH_UL(26)
#define FLASH0_FCON_PROERM_LEN               _FLASH_UL(1)

/* FLASH0_FCON_PFSBERM (rw) */
#define FLASH0_FCON_PFSBERM_POS              _FLASH_UL(27)
#define FLASH0_FCON_PFSBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_DFSBERM (rw) */
#define FLASH0_FCON_DFSBERM_POS              _FLASH_UL(28)
#define FLASH0_FCON_DFSBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_PFDBERM (rw) */
#define FLASH0_FCON_PFDBERM_POS              _FLASH_UL(29)
#define FLASH0_FCON_PFDBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_DFDBERM (rw) */
#define FLASH0_FCON_DFDBERM_POS              _FLASH_UL(30)
#define FLASH0_FCON_DFDBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_EOBM (rw) */
#define FLASH0_FCON_EOBM_POS                 _FLASH_UL(31)
#define FLASH0_FCON_EOBM_LEN                 _FLASH_UL(1)

/* FLASH0_MARP_MARGIN0 (rw) */
#define FLASH0_MARP_MARGIN0_POS              _FLASH_UL(0)
#define FLASH0_MARP_MARGIN0_LEN              _FLASH_UL(2)

/* FLASH0_MARP_MARGIN1 (rw) */
#define FLASH0_MARP_MARGIN1_POS              _FLASH_UL(2)
#define FLASH0_MARP_MARGIN1_LEN              _FLASH_UL(2)

/* FLASH0_MARP_TRAPDIS (rw) */
#define FLASH0_MARP_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH0_MARP_TRAPDIS_LEN              _FLASH_UL(1)

/* FLASH0_MARP_NaNTRAPDIS (rw) */
#define FLASH0_MARP_NaNTRAPDIS_POS           _FLASH_UL(15)
#define FLASH0_MARP_NaNTRAPDIS_LEN           _FLASH_UL(1)

/* FLASH0_MARD_MARGIN0 (rw) */
#define FLASH0_MARD_MARGIN0_POS              _FLASH_UL(0)
#define FLASH0_MARD_MARGIN0_LEN              _FLASH_UL(2)

/* FLASH0_MARD_MARGIN1 (rw) */
#define FLASH0_MARD_MARGIN1_POS              _FLASH_UL(2)
#define FLASH0_MARD_MARGIN1_LEN              _FLASH_UL(2)

/* FLASH0_MARD_BNKSEL (rw) */
#define FLASH0_MARD_BNKSEL_POS               _FLASH_UL(4)
#define FLASH0_MARD_BNKSEL_LEN               _FLASH_UL(1)

/* FLASH0_MARD_TRAPDIS (rw) */
#define FLASH0_MARD_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH0_MARD_TRAPDIS_LEN              _FLASH_UL(1)

/* FLASH0_MARD_NaNTRAPDIS (rw) */
#define FLASH0_MARD_NaNTRAPDIS_POS           _FLASH_UL(15)
#define FLASH0_MARD_NaNTRAPDIS_LEN           _FLASH_UL(1)

/* FLASH0_PROCON0_S0L (rh) */
#define FLASH0_PROCON0_S0L_POS               _FLASH_UL(0)
#define FLASH0_PROCON0_S0L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S1L (rh) */
#define FLASH0_PROCON0_S1L_POS               _FLASH_UL(1)
#define FLASH0_PROCON0_S1L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S2L (rh) */
#define FLASH0_PROCON0_S2L_POS               _FLASH_UL(2)
#define FLASH0_PROCON0_S2L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S3L (rh) */
#define FLASH0_PROCON0_S3L_POS               _FLASH_UL(3)
#define FLASH0_PROCON0_S3L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S4L (rh) */
#define FLASH0_PROCON0_S4L_POS               _FLASH_UL(4)
#define FLASH0_PROCON0_S4L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S5L (rh) */
#define FLASH0_PROCON0_S5L_POS               _FLASH_UL(5)
#define FLASH0_PROCON0_S5L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S6L (rh) */
#define FLASH0_PROCON0_S6L_POS               _FLASH_UL(6)
#define FLASH0_PROCON0_S6L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S7L (rh) */
#define FLASH0_PROCON0_S7L_POS               _FLASH_UL(7)
#define FLASH0_PROCON0_S7L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S8L (rh) */
#define FLASH0_PROCON0_S8L_POS               _FLASH_UL(8)
#define FLASH0_PROCON0_S8L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S9L (rh) */
#define FLASH0_PROCON0_S9L_POS               _FLASH_UL(9)
#define FLASH0_PROCON0_S9L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON0_S10_S11L (rh) */
#define FLASH0_PROCON0_S10_S11L_POS          _FLASH_UL(10)
#define FLASH0_PROCON0_S10_S11L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_S12_S13L (rh) */
#define FLASH0_PROCON0_S12_S13L_POS          _FLASH_UL(11)
#define FLASH0_PROCON0_S12_S13L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_S14_S15L (rh) */
#define FLASH0_PROCON0_S14_S15L_POS          _FLASH_UL(12)
#define FLASH0_PROCON0_S14_S15L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_DFEXPRO (rh) */
#define FLASH0_PROCON0_DFEXPRO_POS           _FLASH_UL(14)
#define FLASH0_PROCON0_DFEXPRO_LEN           _FLASH_UL(1)

/* FLASH0_PROCON0_RPRO (rh) */
#define FLASH0_PROCON0_RPRO_POS              _FLASH_UL(15)
#define FLASH0_PROCON0_RPRO_LEN              _FLASH_UL(1)

/* FLASH0_PROCON1_S0L (rh) */
#define FLASH0_PROCON1_S0L_POS               _FLASH_UL(0)
#define FLASH0_PROCON1_S0L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S1L (rh) */
#define FLASH0_PROCON1_S1L_POS               _FLASH_UL(1)
#define FLASH0_PROCON1_S1L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S2L (rh) */
#define FLASH0_PROCON1_S2L_POS               _FLASH_UL(2)
#define FLASH0_PROCON1_S2L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S3L (rh) */
#define FLASH0_PROCON1_S3L_POS               _FLASH_UL(3)
#define FLASH0_PROCON1_S3L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S4L (rh) */
#define FLASH0_PROCON1_S4L_POS               _FLASH_UL(4)
#define FLASH0_PROCON1_S4L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S5L (rh) */
#define FLASH0_PROCON1_S5L_POS               _FLASH_UL(5)
#define FLASH0_PROCON1_S5L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S6L (rh) */
#define FLASH0_PROCON1_S6L_POS               _FLASH_UL(6)
#define FLASH0_PROCON1_S6L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S7L (rh) */
#define FLASH0_PROCON1_S7L_POS               _FLASH_UL(7)
#define FLASH0_PROCON1_S7L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S8L (rh) */
#define FLASH0_PROCON1_S8L_POS               _FLASH_UL(8)
#define FLASH0_PROCON1_S8L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S9L (rh) */
#define FLASH0_PROCON1_S9L_POS               _FLASH_UL(9)
#define FLASH0_PROCON1_S9L_LEN               _FLASH_UL(1)

/* FLASH0_PROCON1_S10_S11L (rh) */
#define FLASH0_PROCON1_S10_S11L_POS          _FLASH_UL(10)
#define FLASH0_PROCON1_S10_S11L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_S12_S13L (rh) */
#define FLASH0_PROCON1_S12_S13L_POS          _FLASH_UL(11)
#define FLASH0_PROCON1_S12_S13L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_S14_S15L (rh) */
#define FLASH0_PROCON1_S14_S15L_POS          _FLASH_UL(12)
#define FLASH0_PROCON1_S14_S15L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON2_S0ROM (rh) */
#define FLASH0_PROCON2_S0ROM_POS             _FLASH_UL(0)
#define FLASH0_PROCON2_S0ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S1ROM (rh) */
#define FLASH0_PROCON2_S1ROM_POS             _FLASH_UL(1)
#define FLASH0_PROCON2_S1ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S2ROM (rh) */
#define FLASH0_PROCON2_S2ROM_POS             _FLASH_UL(2)
#define FLASH0_PROCON2_S2ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S3ROM (rh) */
#define FLASH0_PROCON2_S3ROM_POS             _FLASH_UL(3)
#define FLASH0_PROCON2_S3ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S4ROM (rh) */
#define FLASH0_PROCON2_S4ROM_POS             _FLASH_UL(4)
#define FLASH0_PROCON2_S4ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S5ROM (rh) */
#define FLASH0_PROCON2_S5ROM_POS             _FLASH_UL(5)
#define FLASH0_PROCON2_S5ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S6ROM (rh) */
#define FLASH0_PROCON2_S6ROM_POS             _FLASH_UL(6)
#define FLASH0_PROCON2_S6ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S7ROM (rh) */
#define FLASH0_PROCON2_S7ROM_POS             _FLASH_UL(7)
#define FLASH0_PROCON2_S7ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S8ROM (rh) */
#define FLASH0_PROCON2_S8ROM_POS             _FLASH_UL(8)
#define FLASH0_PROCON2_S8ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S9ROM (rh) */
#define FLASH0_PROCON2_S9ROM_POS             _FLASH_UL(9)
#define FLASH0_PROCON2_S9ROM_LEN             _FLASH_UL(1)

/* FLASH0_PROCON2_S10_S11ROM (rh) */
#define FLASH0_PROCON2_S10_S11ROM_POS        _FLASH_UL(10)
#define FLASH0_PROCON2_S10_S11ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_S12_S13ROM (rh) */
#define FLASH0_PROCON2_S12_S13ROM_POS        _FLASH_UL(11)
#define FLASH0_PROCON2_S12_S13ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_S14_S15ROM (rh) */
#define FLASH0_PROCON2_S14_S15ROM_POS        _FLASH_UL(12)
#define FLASH0_PROCON2_S14_S15ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_TP (rh) */
#define FLASH0_PROCON2_TP_POS                _FLASH_UL(15)
#define FLASH0_PROCON2_TP_LEN                _FLASH_UL(1)

/* FLASH0_CFTEST_TE (rwh) */
#define FLASH0_CFTEST_TE_POS                 _FLASH_UL(0)
#define FLASH0_CFTEST_TE_LEN                 _FLASH_UL(1)

/* FLASH0_CFTEST_ECENCDIS (rw) */
#define FLASH0_CFTEST_ECENCDIS_POS           _FLASH_UL(2)
#define FLASH0_CFTEST_ECENCDIS_LEN           _FLASH_UL(1)

/* FLASH0_CFTEST_ECDECDIS (rw) */
#define FLASH0_CFTEST_ECDECDIS_POS           _FLASH_UL(3)
#define FLASH0_CFTEST_ECDECDIS_LEN           _FLASH_UL(1)

/* FLASH0_CFTEST_CONFSE (rw) */
#define FLASH0_CFTEST_CONFSE_POS             _FLASH_UL(4)
#define FLASH0_CFTEST_CONFSE_LEN             _FLASH_UL(1)

/* FLASH0_CFTEST_PREFEDIS (rw) */
#define FLASH0_CFTEST_PREFEDIS_POS           _FLASH_UL(5)
#define FLASH0_CFTEST_PREFEDIS_LEN           _FLASH_UL(1)

/* FLASH0_CFTEST_FSRAME (rw) */
#define FLASH0_CFTEST_FSRAME_POS             _FLASH_UL(6)
#define FLASH0_CFTEST_FSRAME_LEN             _FLASH_UL(1)

/* FLASH0_CFTEST_EEAS (rw) */
#define FLASH0_CFTEST_EEAS_POS               _FLASH_UL(7)
#define FLASH0_CFTEST_EEAS_LEN               _FLASH_UL(1)

/* FLASH0_CFTEST_FSIINTEN (rw) */
#define FLASH0_CFTEST_FSIINTEN_POS           _FLASH_UL(8)
#define FLASH0_CFTEST_FSIINTEN_LEN           _FLASH_UL(1)

/* FLASH0_CFTEST_FSIINT (rwh) */
#define FLASH0_CFTEST_FSIINT_POS             _FLASH_UL(9)
#define FLASH0_CFTEST_FSIINT_LEN             _FLASH_UL(1)

/* FLASH0_ECCW_ECCWCode (rw) */
#define FLASH0_ECCW_ECCWCode_POS             _FLASH_UL(0)
#define FLASH0_ECCW_ECCWCode_LEN             _FLASH_UL(8)

/* FLASH0_ECCR_ECCRCode (rh) */
#define FLASH0_ECCR_ECCRCode_POS             _FLASH_UL(0)
#define FLASH0_ECCR_ECCRCode_LEN             _FLASH_UL(8)

/* FLASH0_FSCON_PFSIZE (rw) */
#define FLASH0_FSCON_PFSIZE_POS              _FLASH_UL(0)
#define FLASH0_FSCON_PFSIZE_LEN              _FLASH_UL(8)

/* FLASH0_FSCON_DFSIZE (rw) */
#define FLASH0_FSCON_DFSIZE_POS              _FLASH_UL(8)
#define FLASH0_FSCON_DFSIZE_LEN              _FLASH_UL(5)

#endif
