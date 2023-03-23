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
 * $Filename__:flash_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:03.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:flash_1793$ 
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
 * 1.14.0; 0     31.03.2011 RAT1COB
 *   TPROT update
 * 
 * 1.12.0; 2     20.10.2010 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 1     12.05.2010 RAT1COB
 *   Update of TC1793 Header files
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FLASH_1793_H
#define _FLASH_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _FLASH_UL(x) x
#else
    #define _FLASH_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module FLASH on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF8002000...0xF8002007] : reserved space
    volatile uint32 ID;                  // [0xF8002008] : Flash Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF800200C...0xF800200F] : reserved space
    volatile uint32 FSR;                 // [0xF8002010] : Flash Status Register
    volatile uint32 FCON;                // [0xF8002014] : Flash Configuration Register
    volatile uint32 MARP;                // [0xF8002018] : Margin Control Register PFLASH
    volatile uint32 MARD;                // [0xF800201C] : Margin Control Register DFLASH
    volatile uint32 PROCON0;             // [0xF8002020] : Flash Protection Config. User 0
    volatile uint32 PROCON1;             // [0xF8002024] : Flash Protection Config. User 1
    volatile uint32 PROCON2;             // [0xF8002028] : Flash Protection Config. User 2
    volatile uint32 XFSR;                // [0xF800202C] : Extended Flash Status Register
    volatile uint32 SEMA;                // [0xF8002030] : Flash Access Semaphore
    volatile uint32 SHEBOOT0;            // [0xF8002034] : SHE Secure Boot Cfg
    volatile uint32 SHEBOOT1;            // [0xF8002038] : SHE Secure Boot Cfg
    volatile uint32 SHEBOOT2;            // [0xF800203C] : SHE Secure Boot Cfg
    volatile uint32 RDBCFG0;             // [0xF8002040] : Read Buffer Cfg 0
    volatile uint32 RDBCFG1;             // [0xF8002044] : Read Buffer Cfg 1
    volatile uint32 RDBCFG2;             // [0xF8002048] : Read Buffer Cfg 2
    volatile uint32 RESERVED2[37];       // [0xF800204C...0xF80020DF] : reserved space
    volatile uint32 ECCW;                // [0xF80020E0] : ECC Write Register
    volatile uint32 ECCR;                // [0xF80020E4] : ECC Read Register
	volatile uint32 RESERVED3[966];  	 // [0xF80020E8...0xF8002FFF] : reserved space
} FLASH_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern FLASH_RegMap_t FLASH0 __attribute__ ((asection (".bss.label_only")));
extern FLASH_RegMap_t FLASH1 __attribute__ ((asection (".bss.label_only")));
extern FLASH_RegMap_t FLASH[2] __attribute__ ((asection (".bss.label_only")));

/* Temporary workaround to allow compilation with old references to FLASH */
#define FLASH                FLASH0

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
#define FLASH_ID_MOD_NUMBER_POS                _FLASH_UL(16)
#define FLASH_ID_MOD_NUMBER_LEN                _FLASH_UL(16)

/* FLASH_ID_MOD_REV (r) */
#define FLASH_ID_MOD_REV_POS                   _FLASH_UL(0)
#define FLASH_ID_MOD_REV_LEN                   _FLASH_UL(8)

/* FLASH_ID_MOD_TYPE (r) */
#define FLASH_ID_MOD_TYPE_POS                  _FLASH_UL(8)
#define FLASH_ID_MOD_TYPE_LEN                  _FLASH_UL(8)

/* FLASH0_ID_MOD_NUMBER (r) */
#define FLASH0_ID_MOD_NUMBER_POS               _FLASH_UL(16)
#define FLASH0_ID_MOD_NUMBER_LEN               _FLASH_UL(16)

/* FLASH0_ID_MOD_REV (r) */
#define FLASH0_ID_MOD_REV_POS                  _FLASH_UL(0)
#define FLASH0_ID_MOD_REV_LEN                  _FLASH_UL(8)

/* FLASH0_ID_MOD_TYPE (r) */
#define FLASH0_ID_MOD_TYPE_POS                 _FLASH_UL(8)
#define FLASH0_ID_MOD_TYPE_LEN                 _FLASH_UL(8)

/* FLASH1_ID_MOD_NUMBER (r) */
#define FLASH1_ID_MOD_NUMBER_POS               _FLASH_UL(16)
#define FLASH1_ID_MOD_NUMBER_LEN               _FLASH_UL(16)

/* FLASH1_ID_MOD_REV (r) */
#define FLASH1_ID_MOD_REV_POS                  _FLASH_UL(0)
#define FLASH1_ID_MOD_REV_LEN                  _FLASH_UL(8)

/* FLASH1_ID_MOD_TYPE (r) */
#define FLASH1_ID_MOD_TYPE_POS                 _FLASH_UL(8)
#define FLASH1_ID_MOD_TYPE_LEN                 _FLASH_UL(8)

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

/* FLASH_FSR_PROG (rwh) */
#define FLASH_FSR_PROG_POS                   _FLASH_UL(4)
#define FLASH_FSR_PROG_LEN                   _FLASH_UL(1)

/* FLASH_FSR_ERASE (rwh) */
#define FLASH_FSR_ERASE_POS                  _FLASH_UL(5)
#define FLASH_FSR_ERASE_LEN                  _FLASH_UL(1)

/* FLASH_FSR_PFPAGE (rh) */
#define FLASH_FSR_PFPAGE_POS                 _FLASH_UL(6)
#define FLASH_FSR_PFPAGE_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFPAGE (rh) */
#define FLASH_FSR_DFPAGE_POS                 _FLASH_UL(7)
#define FLASH_FSR_DFPAGE_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PFOPER (rwh) */
#define FLASH_FSR_PFOPER_POS                 _FLASH_UL(8)
#define FLASH_FSR_PFOPER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFOPER (rwh) */
#define FLASH_FSR_DFOPER_POS                 _FLASH_UL(9)
#define FLASH_FSR_DFOPER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_SQER (rwh) */
#define FLASH_FSR_SQER_POS                   _FLASH_UL(10)
#define FLASH_FSR_SQER_LEN                   _FLASH_UL(1)

/* FLASH_FSR_PROER (rwh) */
#define FLASH_FSR_PROER_POS                  _FLASH_UL(11)
#define FLASH_FSR_PROER_LEN                  _FLASH_UL(1)

/* FLASH_FSR_PFSBER (rwh) */
#define FLASH_FSR_PFSBER_POS                 _FLASH_UL(12)
#define FLASH_FSR_PFSBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFCBER (rwh) */
#define FLASH_FSR_DFCBER_POS                 _FLASH_UL(13)
#define FLASH_FSR_DFCBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_PFDBER (rwh) */
#define FLASH_FSR_PFDBER_POS                 _FLASH_UL(14)
#define FLASH_FSR_PFDBER_LEN                 _FLASH_UL(1)

/* FLASH_FSR_DFMBER (rwh) */
#define FLASH_FSR_DFMBER_POS                 _FLASH_UL(15)
#define FLASH_FSR_DFMBER_LEN                 _FLASH_UL(1)

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

/* FLASH_FSR_ORIER (rh) */
#define FLASH_FSR_ORIER_POS                  _FLASH_UL(30)
#define FLASH_FSR_ORIER_LEN                  _FLASH_UL(1)

/* FLASH_FSR_VER (rwh) */
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

/* FLASH_FCON_SLEEP (rw) */
#define FLASH_FCON_SLEEP_POS                 _FLASH_UL(15)
#define FLASH_FCON_SLEEP_LEN                 _FLASH_UL(1)

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

/* FLASH_FCON_DDFSHE (rw) */
#define FLASH_FCON_DDFSHE_POS                _FLASH_UL(22)
#define FLASH_FCON_DDFSHE_LEN                _FLASH_UL(1)

/* FLASH_FCON_ADDECC (rw) */
#define FLASH_FCON_ADDECC_POS                _FLASH_UL(23)
#define FLASH_FCON_ADDECC_LEN                _FLASH_UL(1)

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

/* FLASH_FCON_DFCBERM (rw) */
#define FLASH_FCON_DFCBERM_POS               _FLASH_UL(28)
#define FLASH_FCON_DFCBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_PFDBERM (rw) */
#define FLASH_FCON_PFDBERM_POS               _FLASH_UL(29)
#define FLASH_FCON_PFDBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_DFMBERM (rw) */
#define FLASH_FCON_DFMBERM_POS               _FLASH_UL(30)
#define FLASH_FCON_DFMBERM_LEN               _FLASH_UL(1)

/* FLASH_FCON_EOBM (rw) */
#define FLASH_FCON_EOBM_POS                  _FLASH_UL(31)
#define FLASH_FCON_EOBM_LEN                  _FLASH_UL(1)

/* FLASH_MARP_MARGIN (rw) */
#define FLASH_MARP_MARGIN_POS                _FLASH_UL(0)
#define FLASH_MARP_MARGIN_LEN                _FLASH_UL(4)

/* FLASH_MARP_TRAPDIS (rw) */
#define FLASH_MARP_TRAPDIS_POS               _FLASH_UL(15)
#define FLASH_MARP_TRAPDIS_LEN               _FLASH_UL(1)

/* FLASH_MARD_MARGIN (rw) */
#define FLASH_MARD_MARGIN_POS                _FLASH_UL(0)
#define FLASH_MARD_MARGIN_LEN                _FLASH_UL(4)

/* FLASH_MARD_CTRL (rw) */
#define FLASH_MARD_CTRL_POS                  _FLASH_UL(4)
#define FLASH_MARD_CTRL_LEN                  _FLASH_UL(1)

/* FLASH_MARD_TRAPDIS (rw) */
#define FLASH_MARD_TRAPDIS_POS               _FLASH_UL(15)
#define FLASH_MARD_TRAPDIS_LEN               _FLASH_UL(1)

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

/* FLASH_PROCON0_S16_S17L (rh) */
#define FLASH_PROCON0_S16_S17L_POS           _FLASH_UL(13)
#define FLASH_PROCON0_S16_S17L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_S18_S19L (rh) */
#define FLASH_PROCON0_S18_S19L_POS           _FLASH_UL(14)
#define FLASH_PROCON0_S18_S19L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_S20_S21L (rh) */
#define FLASH_PROCON0_S20_S21L_POS           _FLASH_UL(15)
#define FLASH_PROCON0_S20_S21L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_S22_S23L (rh) */
#define FLASH_PROCON0_S22_S23L_POS           _FLASH_UL(16)
#define FLASH_PROCON0_S22_S23L_LEN           _FLASH_UL(1)

/* FLASH_PROCON0_RES (rh) */
#define FLASH_PROCON0_RES_POS                _FLASH_UL(17)
#define FLASH_PROCON0_RES_LEN                _FLASH_UL(12)

/* FLASH_PROCON0_ADDECC (rh) */
#define FLASH_PROCON0_ADDECC_POS             _FLASH_UL(29)
#define FLASH_PROCON0_ADDECC_LEN             _FLASH_UL(1)

/* FLASH_PROCON0_DFEXPRO (rh) */
#define FLASH_PROCON0_DFEXPRO_POS            _FLASH_UL(30)
#define FLASH_PROCON0_DFEXPRO_LEN            _FLASH_UL(1)

/* FLASH_PROCON0_RPRO (rh) */
#define FLASH_PROCON0_RPRO_POS               _FLASH_UL(31)
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

/* FLASH_PROCON1_S16_S17L (rh) */
#define FLASH_PROCON1_S16_S17L_POS           _FLASH_UL(13)
#define FLASH_PROCON1_S16_S17L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_S18_S19L (rh) */
#define FLASH_PROCON1_S18_S19L_POS           _FLASH_UL(14)
#define FLASH_PROCON1_S18_S19L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_S20_S21L (rh) */
#define FLASH_PROCON1_S20_S21L_POS           _FLASH_UL(15)
#define FLASH_PROCON1_S20_S21L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_S22_S23L (rh) */
#define FLASH_PROCON1_S22_S23L_POS           _FLASH_UL(16)
#define FLASH_PROCON1_S22_S23L_LEN           _FLASH_UL(1)

/* FLASH_PROCON1_RES (rh) */
#define FLASH_PROCON1_RES_POS                _FLASH_UL(17)
#define FLASH_PROCON1_RES_LEN                _FLASH_UL(6)

/* FLASH_PROCON1_SPREC (rh) */
#define FLASH_PROCON1_SPREC_POS              _FLASH_UL(23)
#define FLASH_PROCON1_SPREC_LEN              _FLASH_UL(1)

/* FLASH_PROCON1_ALSEDIS (rh) */
#define FLASH_PROCON1_ALSEDIS_POS            _FLASH_UL(24)
#define FLASH_PROCON1_ALSEDIS_LEN            _FLASH_UL(8)

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

/* FLASH_PROCON2_S16_S17ROM (rh) */
#define FLASH_PROCON2_S16_S17ROM_POS         _FLASH_UL(13)
#define FLASH_PROCON2_S16_S17ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_S18_S19ROM (rh) */
#define FLASH_PROCON2_S18_S19ROM_POS         _FLASH_UL(14)
#define FLASH_PROCON2_S18_S19ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_S20_S21ROM (rh) */
#define FLASH_PROCON2_S20_S21ROM_POS         _FLASH_UL(15)
#define FLASH_PROCON2_S20_S21ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_S22_S23ROM (rh) */
#define FLASH_PROCON2_S22_S23ROM_POS         _FLASH_UL(16)
#define FLASH_PROCON2_S22_S23ROM_LEN         _FLASH_UL(1)

/* FLASH_PROCON2_RES (rh) */
#define FLASH_PROCON2_RES_POS                _FLASH_UL(17)
#define FLASH_PROCON2_RES_LEN                _FLASH_UL(13)

/* FLASH_PROCON2_DATM (rh) */
#define FLASH_PROCON2_DATM_POS               _FLASH_UL(30)
#define FLASH_PROCON2_DATM_LEN               _FLASH_UL(1)

/* FLASH_PROCON2_TP (rh) */
#define FLASH_PROCON2_TP_POS                 _FLASH_UL(31)
#define FLASH_PROCON2_TP_LEN                 _FLASH_UL(1)

/* FLASH_XFSR_PFDBER (rwh) */
#define FLASH_XFSR_PFDBER_POS                _FLASH_UL(0)
#define FLASH_XFSR_PFDBER_LEN                _FLASH_UL(1)

/* FLASH_XFSR_PFADER (rwh) */
#define FLASH_XFSR_PFADER_POS                _FLASH_UL(1)
#define FLASH_XFSR_PFADER_LEN                _FLASH_UL(1)

/* FLASH_XFSR_RES2 (rwh) */
#define FLASH_XFSR_RES2_POS                  _FLASH_UL(2)
#define FLASH_XFSR_RES2_LEN                  _FLASH_UL(1)

/* FLASH_XFSR_RES3 (rwh) */
#define FLASH_XFSR_RES3_POS                  _FLASH_UL(3)
#define FLASH_XFSR_RES3_LEN                  _FLASH_UL(1)

/* FLASH_XFSR_RES4 (rwh) */
#define FLASH_XFSR_RES4_POS                  _FLASH_UL(4)
#define FLASH_XFSR_RES4_LEN                  _FLASH_UL(1)

/* FLASH_XFSR_SRIADDERR (rwh) */
#define FLASH_XFSR_SRIADDERR_POS             _FLASH_UL(5)
#define FLASH_XFSR_SRIADDERR_LEN             _FLASH_UL(1)

/* FLASH_XFSR_SEMVIO (rwh) */
#define FLASH_XFSR_SEMVIO_POS                _FLASH_UL(6)
#define FLASH_XFSR_SEMVIO_LEN                _FLASH_UL(1)

/* FLASH_XFSR_PVER (rwh) */
#define FLASH_XFSR_PVER_POS                  _FLASH_UL(8)
#define FLASH_XFSR_PVER_LEN                  _FLASH_UL(1)

/* FLASH_XFSR_D0VER (rwh) */
#define FLASH_XFSR_D0VER_POS                 _FLASH_UL(9)
#define FLASH_XFSR_D0VER_LEN                 _FLASH_UL(1)

/* FLASH_XFSR_D1VER (rwh) */
#define FLASH_XFSR_D1VER_POS                 _FLASH_UL(10)
#define FLASH_XFSR_D1VER_LEN                 _FLASH_UL(1)

/* FLASH_XFSR_RES11 (rwh) */
#define FLASH_XFSR_RES11_POS                 _FLASH_UL(11)
#define FLASH_XFSR_RES11_LEN                 _FLASH_UL(1)

/* FLASH_SEMA_SHE (rh) */
#define FLASH_SEMA_SHE_POS                   _FLASH_UL(0)
#define FLASH_SEMA_SHE_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S1 (rwh) */
#define FLASH_SEMA_S1_POS                    _FLASH_UL(2)
#define FLASH_SEMA_S1_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S1C (w) */
#define FLASH_SEMA_S1C_POS                   _FLASH_UL(3)
#define FLASH_SEMA_S1C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S2 (rwh) */
#define FLASH_SEMA_S2_POS                    _FLASH_UL(4)
#define FLASH_SEMA_S2_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S2C (w) */
#define FLASH_SEMA_S2C_POS                   _FLASH_UL(5)
#define FLASH_SEMA_S2C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S3 (rwh) */
#define FLASH_SEMA_S3_POS                    _FLASH_UL(6)
#define FLASH_SEMA_S3_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S3C (w) */
#define FLASH_SEMA_S3C_POS                   _FLASH_UL(7)
#define FLASH_SEMA_S3C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S4 (rwh) */
#define FLASH_SEMA_S4_POS                    _FLASH_UL(8)
#define FLASH_SEMA_S4_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S4C (w) */
#define FLASH_SEMA_S4C_POS                   _FLASH_UL(9)
#define FLASH_SEMA_S4C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S5 (rwh) */
#define FLASH_SEMA_S5_POS                    _FLASH_UL(10)
#define FLASH_SEMA_S5_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S5C (w) */
#define FLASH_SEMA_S5C_POS                   _FLASH_UL(11)
#define FLASH_SEMA_S5C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S6 (rwh) */
#define FLASH_SEMA_S6_POS                    _FLASH_UL(12)
#define FLASH_SEMA_S6_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S6C (w) */
#define FLASH_SEMA_S6C_POS                   _FLASH_UL(13)
#define FLASH_SEMA_S6C_LEN                   _FLASH_UL(1)

/* FLASH_SEMA_S7 (rwh) */
#define FLASH_SEMA_S7_POS                    _FLASH_UL(14)
#define FLASH_SEMA_S7_LEN                    _FLASH_UL(1)

/* FLASH_SEMA_S7C (w) */
#define FLASH_SEMA_S7C_POS                   _FLASH_UL(15)
#define FLASH_SEMA_S7C_LEN                   _FLASH_UL(1)

/* FLASH_SHEBOOT0_SIZE (rh) */
#define FLASH_SHEBOOT0_SIZE_POS              _FLASH_UL(0)
#define FLASH_SHEBOOT0_SIZE_LEN              _FLASH_UL(30)

/* FLASH_SHEBOOT0_BGD (rh) */
#define FLASH_SHEBOOT0_BGD_POS               _FLASH_UL(30)
#define FLASH_SHEBOOT0_BGD_LEN               _FLASH_UL(1)

/* FLASH_SHEBOOT0_SHE (rh) */
#define FLASH_SHEBOOT0_SHE_POS               _FLASH_UL(31)
#define FLASH_SHEBOOT0_SHE_LEN               _FLASH_UL(1)

/* FLASH_SHEBOOT1_SIZE (rh) */
#define FLASH_SHEBOOT1_SIZE_POS              _FLASH_UL(0)
#define FLASH_SHEBOOT1_SIZE_LEN              _FLASH_UL(30)

/* FLASH_SHEBOOT1_BGD (rh) */
#define FLASH_SHEBOOT1_BGD_POS               _FLASH_UL(30)
#define FLASH_SHEBOOT1_BGD_LEN               _FLASH_UL(1)

/* FLASH_SHEBOOT1_SHE (rh) */
#define FLASH_SHEBOOT1_SHE_POS               _FLASH_UL(31)
#define FLASH_SHEBOOT1_SHE_LEN               _FLASH_UL(1)

/* FLASH_SHEBOOT2_SIZE (rh) */
#define FLASH_SHEBOOT2_SIZE_POS              _FLASH_UL(0)
#define FLASH_SHEBOOT2_SIZE_LEN              _FLASH_UL(30)

/* FLASH_SHEBOOT2_BGD (rh) */
#define FLASH_SHEBOOT2_BGD_POS               _FLASH_UL(30)
#define FLASH_SHEBOOT2_BGD_LEN               _FLASH_UL(1)

/* FLASH_SHEBOOT2_SHE (rh) */
#define FLASH_SHEBOOT2_SHE_POS               _FLASH_UL(31)
#define FLASH_SHEBOOT2_SHE_LEN               _FLASH_UL(1)

/* FLASH_RDBCFG0_TAG (rw) */
#define FLASH_RDBCFG0_TAG_POS                _FLASH_UL(0)
#define FLASH_RDBCFG0_TAG_LEN                _FLASH_UL(4)

/* FLASH_RDBCFG1_TAG (rw) */
#define FLASH_RDBCFG1_TAG_POS                _FLASH_UL(0)
#define FLASH_RDBCFG1_TAG_LEN                _FLASH_UL(4)

/* FLASH_RDBCFG2_TAG (rw) */
#define FLASH_RDBCFG2_TAG_POS                _FLASH_UL(0)
#define FLASH_RDBCFG2_TAG_LEN                _FLASH_UL(4)

/* FLASH_ECCW_WCODEL (rw) */
#define FLASH_ECCW_WCODEL_POS                _FLASH_UL(0)
#define FLASH_ECCW_WCODEL_LEN                _FLASH_UL(8)

/* FLASH_ECCW_WCODEH (rw) */
#define FLASH_ECCW_WCODEH_POS                _FLASH_UL(8)
#define FLASH_ECCW_WCODEH_LEN                _FLASH_UL(8)

/* FLASH_ECCW_DECENCDIS (rw) */
#define FLASH_ECCW_DECENCDIS_POS             _FLASH_UL(30)
#define FLASH_ECCW_DECENCDIS_LEN             _FLASH_UL(1)

/* FLASH_ECCW_PECENCDIS (rw) */
#define FLASH_ECCW_PECENCDIS_POS             _FLASH_UL(31)
#define FLASH_ECCW_PECENCDIS_LEN             _FLASH_UL(1)

/* FLASH_ECCR_RCODEL (rh) */
#define FLASH_ECCR_RCODEL_POS                _FLASH_UL(0)
#define FLASH_ECCR_RCODEL_LEN                _FLASH_UL(8)

/* FLASH_ECCR_RCODEH (rh) */
#define FLASH_ECCR_RCODEH_POS                _FLASH_UL(8)
#define FLASH_ECCR_RCODEH_LEN                _FLASH_UL(8)

/* FLASH_ECCR_DECDECDIS (rw) */
#define FLASH_ECCR_DECDECDIS_POS             _FLASH_UL(30)
#define FLASH_ECCR_DECDECDIS_LEN             _FLASH_UL(1)

/* FLASH_ECCR_PECDECDIS (rw) */
#define FLASH_ECCR_PECDECDIS_POS             _FLASH_UL(31)
#define FLASH_ECCR_PECDECDIS_LEN             _FLASH_UL(1)

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

/* FLASH0_FSR_PROG (rwh) */
#define FLASH0_FSR_PROG_POS                  _FLASH_UL(4)
#define FLASH0_FSR_PROG_LEN                  _FLASH_UL(1)

/* FLASH0_FSR_ERASE (rwh) */
#define FLASH0_FSR_ERASE_POS                 _FLASH_UL(5)
#define FLASH0_FSR_ERASE_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_PFPAGE (rh) */
#define FLASH0_FSR_PFPAGE_POS                _FLASH_UL(6)
#define FLASH0_FSR_PFPAGE_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFPAGE (rh) */
#define FLASH0_FSR_DFPAGE_POS                _FLASH_UL(7)
#define FLASH0_FSR_DFPAGE_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PFOPER (rwh) */
#define FLASH0_FSR_PFOPER_POS                _FLASH_UL(8)
#define FLASH0_FSR_PFOPER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFOPER (rwh) */
#define FLASH0_FSR_DFOPER_POS                _FLASH_UL(9)
#define FLASH0_FSR_DFOPER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_SQER (rwh) */
#define FLASH0_FSR_SQER_POS                  _FLASH_UL(10)
#define FLASH0_FSR_SQER_LEN                  _FLASH_UL(1)

/* FLASH0_FSR_PROER (rwh) */
#define FLASH0_FSR_PROER_POS                 _FLASH_UL(11)
#define FLASH0_FSR_PROER_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_PFSBER (rwh) */
#define FLASH0_FSR_PFSBER_POS                _FLASH_UL(12)
#define FLASH0_FSR_PFSBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFCBER (rwh) */
#define FLASH0_FSR_DFCBER_POS                _FLASH_UL(13)
#define FLASH0_FSR_DFCBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_PFDBER (rwh) */
#define FLASH0_FSR_PFDBER_POS                _FLASH_UL(14)
#define FLASH0_FSR_PFDBER_LEN                _FLASH_UL(1)

/* FLASH0_FSR_DFMBER (rwh) */
#define FLASH0_FSR_DFMBER_POS                _FLASH_UL(15)
#define FLASH0_FSR_DFMBER_LEN                _FLASH_UL(1)

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

/* FLASH0_FSR_ORIER (rh) */
#define FLASH0_FSR_ORIER_POS                 _FLASH_UL(30)
#define FLASH0_FSR_ORIER_LEN                 _FLASH_UL(1)

/* FLASH0_FSR_VER (rwh) */
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

/* FLASH0_FCON_SLEEP (rw) */
#define FLASH0_FCON_SLEEP_POS                _FLASH_UL(15)
#define FLASH0_FCON_SLEEP_LEN                _FLASH_UL(1)

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

/* FLASH0_FCON_DDFSHE (rw) */
#define FLASH0_FCON_DDFSHE_POS               _FLASH_UL(22)
#define FLASH0_FCON_DDFSHE_LEN               _FLASH_UL(1)

/* FLASH0_FCON_ADDECC (rw) */
#define FLASH0_FCON_ADDECC_POS               _FLASH_UL(23)
#define FLASH0_FCON_ADDECC_LEN               _FLASH_UL(1)

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

/* FLASH0_FCON_DFCBERM (rw) */
#define FLASH0_FCON_DFCBERM_POS              _FLASH_UL(28)
#define FLASH0_FCON_DFCBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_PFDBERM (rw) */
#define FLASH0_FCON_PFDBERM_POS              _FLASH_UL(29)
#define FLASH0_FCON_PFDBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_DFMBERM (rw) */
#define FLASH0_FCON_DFMBERM_POS              _FLASH_UL(30)
#define FLASH0_FCON_DFMBERM_LEN              _FLASH_UL(1)

/* FLASH0_FCON_EOBM (rw) */
#define FLASH0_FCON_EOBM_POS                 _FLASH_UL(31)
#define FLASH0_FCON_EOBM_LEN                 _FLASH_UL(1)

/* FLASH0_MARP_MARGIN (rw) */
#define FLASH0_MARP_MARGIN_POS               _FLASH_UL(0)
#define FLASH0_MARP_MARGIN_LEN               _FLASH_UL(4)

/* FLASH0_MARP_TRAPDIS (rw) */
#define FLASH0_MARP_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH0_MARP_TRAPDIS_LEN              _FLASH_UL(1)

/* FLASH0_MARD_MARGIN (rw) */
#define FLASH0_MARD_MARGIN_POS               _FLASH_UL(0)
#define FLASH0_MARD_MARGIN_LEN               _FLASH_UL(4)

/* FLASH0_MARD_CTRL (rw) */
#define FLASH0_MARD_CTRL_POS                 _FLASH_UL(4)
#define FLASH0_MARD_CTRL_LEN                 _FLASH_UL(1)

/* FLASH0_MARD_TRAPDIS (rw) */
#define FLASH0_MARD_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH0_MARD_TRAPDIS_LEN              _FLASH_UL(1)

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

/* FLASH0_PROCON0_S16_S17L (rh) */
#define FLASH0_PROCON0_S16_S17L_POS          _FLASH_UL(13)
#define FLASH0_PROCON0_S16_S17L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_S18_S19L (rh) */
#define FLASH0_PROCON0_S18_S19L_POS          _FLASH_UL(14)
#define FLASH0_PROCON0_S18_S19L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_S20_S21L (rh) */
#define FLASH0_PROCON0_S20_S21L_POS          _FLASH_UL(15)
#define FLASH0_PROCON0_S20_S21L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_S22_S23L (rh) */
#define FLASH0_PROCON0_S22_S23L_POS          _FLASH_UL(16)
#define FLASH0_PROCON0_S22_S23L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON0_RES (rh) */
#define FLASH0_PROCON0_RES_POS               _FLASH_UL(17)
#define FLASH0_PROCON0_RES_LEN               _FLASH_UL(12)

/* FLASH0_PROCON0_ADDECC (rh) */
#define FLASH0_PROCON0_ADDECC_POS            _FLASH_UL(29)
#define FLASH0_PROCON0_ADDECC_LEN            _FLASH_UL(1)

/* FLASH0_PROCON0_DFEXPRO (rh) */
#define FLASH0_PROCON0_DFEXPRO_POS           _FLASH_UL(30)
#define FLASH0_PROCON0_DFEXPRO_LEN           _FLASH_UL(1)

/* FLASH0_PROCON0_RPRO (rh) */
#define FLASH0_PROCON0_RPRO_POS              _FLASH_UL(31)
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

/* FLASH0_PROCON1_S16_S17L (rh) */
#define FLASH0_PROCON1_S16_S17L_POS          _FLASH_UL(13)
#define FLASH0_PROCON1_S16_S17L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_S18_S19L (rh) */
#define FLASH0_PROCON1_S18_S19L_POS          _FLASH_UL(14)
#define FLASH0_PROCON1_S18_S19L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_S20_S21L (rh) */
#define FLASH0_PROCON1_S20_S21L_POS          _FLASH_UL(15)
#define FLASH0_PROCON1_S20_S21L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_S22_S23L (rh) */
#define FLASH0_PROCON1_S22_S23L_POS          _FLASH_UL(16)
#define FLASH0_PROCON1_S22_S23L_LEN          _FLASH_UL(1)

/* FLASH0_PROCON1_RES (rh) */
#define FLASH0_PROCON1_RES_POS               _FLASH_UL(17)
#define FLASH0_PROCON1_RES_LEN               _FLASH_UL(6)

/* FLASH0_PROCON1_SPREC (rh) */
#define FLASH0_PROCON1_SPREC_POS             _FLASH_UL(23)
#define FLASH0_PROCON1_SPREC_LEN             _FLASH_UL(1)

/* FLASH0_PROCON1_ALSEDIS (rh) */
#define FLASH0_PROCON1_ALSEDIS_POS           _FLASH_UL(24)
#define FLASH0_PROCON1_ALSEDIS_LEN           _FLASH_UL(8)

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

/* FLASH0_PROCON2_S16_S17ROM (rh) */
#define FLASH0_PROCON2_S16_S17ROM_POS        _FLASH_UL(13)
#define FLASH0_PROCON2_S16_S17ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_S18_S19ROM (rh) */
#define FLASH0_PROCON2_S18_S19ROM_POS        _FLASH_UL(14)
#define FLASH0_PROCON2_S18_S19ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_S20_S21ROM (rh) */
#define FLASH0_PROCON2_S20_S21ROM_POS        _FLASH_UL(15)
#define FLASH0_PROCON2_S20_S21ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_S22_S23ROM (rh) */
#define FLASH0_PROCON2_S22_S23ROM_POS        _FLASH_UL(16)
#define FLASH0_PROCON2_S22_S23ROM_LEN        _FLASH_UL(1)

/* FLASH0_PROCON2_RES (rh) */
#define FLASH0_PROCON2_RES_POS               _FLASH_UL(17)
#define FLASH0_PROCON2_RES_LEN               _FLASH_UL(13)

/* FLASH0_PROCON2_DATM (rh) */
#define FLASH0_PROCON2_DATM_POS              _FLASH_UL(30)
#define FLASH0_PROCON2_DATM_LEN              _FLASH_UL(1)

/* FLASH0_PROCON2_TP (rh) */
#define FLASH0_PROCON2_TP_POS                 _FLASH_UL(31)
#define FLASH0_PROCON2_TP_LEN                 _FLASH_UL(1)

/* FLASH0_XFSR_PFDBER (rwh) */
#define FLASH0_XFSR_PFDBER_POS               _FLASH_UL(0)
#define FLASH0_XFSR_PFDBER_LEN               _FLASH_UL(1)

/* FLASH0_XFSR_PFADER (rwh) */
#define FLASH0_XFSR_PFADER_POS               _FLASH_UL(1)
#define FLASH0_XFSR_PFADER_LEN               _FLASH_UL(1)

/* FLASH0_XFSR_RES2 (rwh) */
#define FLASH0_XFSR_RES2_POS                 _FLASH_UL(2)
#define FLASH0_XFSR_RES2_LEN                 _FLASH_UL(1)

/* FLASH0_XFSR_RES3 (rwh) */
#define FLASH0_XFSR_RES3_POS                 _FLASH_UL(3)
#define FLASH0_XFSR_RES3_LEN                 _FLASH_UL(1)

/* FLASH0_XFSR_RES4 (rwh) */
#define FLASH0_XFSR_RES4_POS                 _FLASH_UL(4)
#define FLASH0_XFSR_RES4_LEN                 _FLASH_UL(1)

/* FLASH0_XFSR_SRIADDERR (rwh) */
#define FLASH0_XFSR_SRIADDERR_POS            _FLASH_UL(5)
#define FLASH0_XFSR_SRIADDERR_LEN            _FLASH_UL(1)

/* FLASH0_XFSR_SEMVIO (rwh) */
#define FLASH0_XFSR_SEMVIO_POS               _FLASH_UL(6)
#define FLASH0_XFSR_SEMVIO_LEN               _FLASH_UL(1)

/* FLASH0_XFSR_PVER (rwh) */
#define FLASH0_XFSR_PVER_POS                 _FLASH_UL(8)
#define FLASH0_XFSR_PVER_LEN                 _FLASH_UL(1)

/* FLASH0_XFSR_D0VER (rwh) */
#define FLASH0_XFSR_D0VER_POS                _FLASH_UL(9)
#define FLASH0_XFSR_D0VER_LEN                _FLASH_UL(1)

/* FLASH0_XFSR_D1VER (rwh) */
#define FLASH0_XFSR_D1VER_POS                _FLASH_UL(10)
#define FLASH0_XFSR_D1VER_LEN                _FLASH_UL(1)

/* FLASH0_XFSR_RES11 (rwh) */
#define FLASH0_XFSR_RES11_POS                _FLASH_UL(11)
#define FLASH0_XFSR_RES11_LEN                _FLASH_UL(1)

/* FLASH0_SEMA_SHE (rh) */
#define FLASH0_SEMA_SHE_POS                  _FLASH_UL(0)
#define FLASH0_SEMA_SHE_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S1 (rwh) */
#define FLASH0_SEMA_S1_POS                   _FLASH_UL(2)
#define FLASH0_SEMA_S1_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S1C (w) */
#define FLASH0_SEMA_S1C_POS                  _FLASH_UL(3)
#define FLASH0_SEMA_S1C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S2 (rwh) */
#define FLASH0_SEMA_S2_POS                   _FLASH_UL(4)
#define FLASH0_SEMA_S2_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S2C (w) */
#define FLASH0_SEMA_S2C_POS                  _FLASH_UL(5)
#define FLASH0_SEMA_S2C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S3 (rwh) */
#define FLASH0_SEMA_S3_POS                   _FLASH_UL(6)
#define FLASH0_SEMA_S3_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S3C (w) */
#define FLASH0_SEMA_S3C_POS                  _FLASH_UL(7)
#define FLASH0_SEMA_S3C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S4 (rwh) */
#define FLASH0_SEMA_S4_POS                   _FLASH_UL(8)
#define FLASH0_SEMA_S4_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S4C (w) */
#define FLASH0_SEMA_S4C_POS                  _FLASH_UL(9)
#define FLASH0_SEMA_S4C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S5 (rwh) */
#define FLASH0_SEMA_S5_POS                   _FLASH_UL(10)
#define FLASH0_SEMA_S5_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S5C (w) */
#define FLASH0_SEMA_S5C_POS                  _FLASH_UL(11)
#define FLASH0_SEMA_S5C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S6 (rwh) */
#define FLASH0_SEMA_S6_POS                   _FLASH_UL(12)
#define FLASH0_SEMA_S6_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S6C (w) */
#define FLASH0_SEMA_S6C_POS                  _FLASH_UL(13)
#define FLASH0_SEMA_S6C_LEN                  _FLASH_UL(1)

/* FLASH0_SEMA_S7 (rwh) */
#define FLASH0_SEMA_S7_POS                   _FLASH_UL(14)
#define FLASH0_SEMA_S7_LEN                   _FLASH_UL(1)

/* FLASH0_SEMA_S7C (w) */
#define FLASH0_SEMA_S7C_POS                  _FLASH_UL(15)
#define FLASH0_SEMA_S7C_LEN                  _FLASH_UL(1)

/* FLASH0_SHEBOOT0_SIZE (rh) */
#define FLASH0_SHEBOOT0_SIZE_POS             _FLASH_UL(0)
#define FLASH0_SHEBOOT0_SIZE_LEN             _FLASH_UL(30)

/* FLASH0_SHEBOOT0_BGD (rh) */
#define FLASH0_SHEBOOT0_BGD_POS              _FLASH_UL(30)
#define FLASH0_SHEBOOT0_BGD_LEN              _FLASH_UL(1)

/* FLASH0_SHEBOOT0_SHE (rh) */
#define FLASH0_SHEBOOT0_SHE_POS              _FLASH_UL(31)
#define FLASH0_SHEBOOT0_SHE_LEN              _FLASH_UL(1)

/* FLASH0_SHEBOOT1_SIZE (rh) */
#define FLASH0_SHEBOOT1_SIZE_POS             _FLASH_UL(0)
#define FLASH0_SHEBOOT1_SIZE_LEN             _FLASH_UL(30)

/* FLASH0_SHEBOOT1_BGD (rh) */
#define FLASH0_SHEBOOT1_BGD_POS              _FLASH_UL(30)
#define FLASH0_SHEBOOT1_BGD_LEN              _FLASH_UL(1)

/* FLASH0_SHEBOOT1_SHE (rh) */
#define FLASH0_SHEBOOT1_SHE_POS              _FLASH_UL(31)
#define FLASH0_SHEBOOT1_SHE_LEN              _FLASH_UL(1)

/* FLASH0_SHEBOOT2_SIZE (rh) */
#define FLASH0_SHEBOOT2_SIZE_POS             _FLASH_UL(0)
#define FLASH0_SHEBOOT2_SIZE_LEN             _FLASH_UL(30)

/* FLASH0_SHEBOOT2_BGD (rh) */
#define FLASH0_SHEBOOT2_BGD_POS              _FLASH_UL(30)
#define FLASH0_SHEBOOT2_BGD_LEN              _FLASH_UL(1)

/* FLASH0_SHEBOOT2_SHE (rh) */
#define FLASH0_SHEBOOT2_SHE_POS              _FLASH_UL(31)
#define FLASH0_SHEBOOT2_SHE_LEN              _FLASH_UL(1)

/* FLASH0_RDBCFG0_TAG (rw) */
#define FLASH0_RDBCFG0_TAG_POS               _FLASH_UL(0)
#define FLASH0_RDBCFG0_TAG_LEN               _FLASH_UL(4)

/* FLASH0_RDBCFG1_TAG (rw) */
#define FLASH0_RDBCFG1_TAG_POS               _FLASH_UL(0)
#define FLASH0_RDBCFG1_TAG_LEN               _FLASH_UL(4)

/* FLASH0_RDBCFG2_TAG (rw) */
#define FLASH0_RDBCFG2_TAG_POS               _FLASH_UL(0)
#define FLASH0_RDBCFG2_TAG_LEN               _FLASH_UL(4)

/* FLASH0_ECCW_WCODEL (rw) */
#define FLASH0_ECCW_WCODEL_POS               _FLASH_UL(0)
#define FLASH0_ECCW_WCODEL_LEN               _FLASH_UL(8)

/* FLASH0_ECCW_WCODEH (rw) */
#define FLASH0_ECCW_WCODEH_POS               _FLASH_UL(8)
#define FLASH0_ECCW_WCODEH_LEN               _FLASH_UL(8)

/* FLASH0_ECCW_DECENCDIS (rw) */
#define FLASH0_ECCW_DECENCDIS_POS            _FLASH_UL(30)
#define FLASH0_ECCW_DECENCDIS_LEN            _FLASH_UL(1)

/* FLASH0_ECCW_PECENCDIS (rw) */
#define FLASH0_ECCW_PECENCDIS_POS            _FLASH_UL(31)
#define FLASH0_ECCW_PECENCDIS_LEN            _FLASH_UL(1)

/* FLASH0_ECCR_RCODEL (rh) */
#define FLASH0_ECCR_RCODEL_POS               _FLASH_UL(0)
#define FLASH0_ECCR_RCODEL_LEN               _FLASH_UL(8)

/* FLASH0_ECCR_RCODEH (rh) */
#define FLASH0_ECCR_RCODEH_POS               _FLASH_UL(8)
#define FLASH0_ECCR_RCODEH_LEN               _FLASH_UL(8)

/* FLASH0_ECCR_DECDECDIS (rw) */
#define FLASH0_ECCR_DECDECDIS_POS            _FLASH_UL(30)
#define FLASH0_ECCR_DECDECDIS_LEN            _FLASH_UL(1)

/* FLASH0_ECCR_PECDECDIS (rw) */
#define FLASH0_ECCR_PECDECDIS_POS            _FLASH_UL(31)
#define FLASH0_ECCR_PECDECDIS_LEN            _FLASH_UL(1)

/* FLASH1_ID_MOD_REV (r) */
#define FLASH1_ID_MOD_REV_POS                _FLASH_UL(0)
#define FLASH1_ID_MOD_REV_LEN                _FLASH_UL(8)

/* FLASH1_ID_MOD_TYPE (r) */
#define FLASH1_ID_MOD_TYPE_POS               _FLASH_UL(8)
#define FLASH1_ID_MOD_TYPE_LEN               _FLASH_UL(8)

/* FLASH1_ID_MOD_NUMBER (r) */
#define FLASH1_ID_MOD_NUMBER_POS             _FLASH_UL(16)
#define FLASH1_ID_MOD_NUMBER_LEN             _FLASH_UL(16)

/* FLASH1_FSR_PBUSY (rh) */
#define FLASH1_FSR_PBUSY_POS                 _FLASH_UL(0)
#define FLASH1_FSR_PBUSY_LEN                 _FLASH_UL(1)

/* FLASH1_FSR_FABUSY (rh) */
#define FLASH1_FSR_FABUSY_POS                _FLASH_UL(1)
#define FLASH1_FSR_FABUSY_LEN                _FLASH_UL(1)

/* FLASH1_FSR_D0BUSY (rh) */
#define FLASH1_FSR_D0BUSY_POS                _FLASH_UL(2)
#define FLASH1_FSR_D0BUSY_LEN                _FLASH_UL(1)

/* FLASH1_FSR_D1BUSY (rh) */
#define FLASH1_FSR_D1BUSY_POS                _FLASH_UL(3)
#define FLASH1_FSR_D1BUSY_LEN                _FLASH_UL(1)

/* FLASH1_FSR_PROG (rwh) */
#define FLASH1_FSR_PROG_POS                  _FLASH_UL(4)
#define FLASH1_FSR_PROG_LEN                  _FLASH_UL(1)

/* FLASH1_FSR_ERASE (rwh) */
#define FLASH1_FSR_ERASE_POS                 _FLASH_UL(5)
#define FLASH1_FSR_ERASE_LEN                 _FLASH_UL(1)

/* FLASH1_FSR_PFPAGE (rh) */
#define FLASH1_FSR_PFPAGE_POS                _FLASH_UL(6)
#define FLASH1_FSR_PFPAGE_LEN                _FLASH_UL(1)

/* FLASH1_FSR_DFPAGE (rh) */
#define FLASH1_FSR_DFPAGE_POS                _FLASH_UL(7)
#define FLASH1_FSR_DFPAGE_LEN                _FLASH_UL(1)

/* FLASH1_FSR_PFOPER (rwh) */
#define FLASH1_FSR_PFOPER_POS                _FLASH_UL(8)
#define FLASH1_FSR_PFOPER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_DFOPER (rwh) */
#define FLASH1_FSR_DFOPER_POS                _FLASH_UL(9)
#define FLASH1_FSR_DFOPER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_SQER (rwh) */
#define FLASH1_FSR_SQER_POS                  _FLASH_UL(10)
#define FLASH1_FSR_SQER_LEN                  _FLASH_UL(1)

/* FLASH1_FSR_PROER (rwh) */
#define FLASH1_FSR_PROER_POS                 _FLASH_UL(11)
#define FLASH1_FSR_PROER_LEN                 _FLASH_UL(1)

/* FLASH1_FSR_PFSBER (rwh) */
#define FLASH1_FSR_PFSBER_POS                _FLASH_UL(12)
#define FLASH1_FSR_PFSBER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_DFCBER (rwh) */
#define FLASH1_FSR_DFCBER_POS                _FLASH_UL(13)
#define FLASH1_FSR_DFCBER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_PFDBER (rwh) */
#define FLASH1_FSR_PFDBER_POS                _FLASH_UL(14)
#define FLASH1_FSR_PFDBER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_DFMBER (rwh) */
#define FLASH1_FSR_DFMBER_POS                _FLASH_UL(15)
#define FLASH1_FSR_DFMBER_LEN                _FLASH_UL(1)

/* FLASH1_FSR_PROIN (rh) */
#define FLASH1_FSR_PROIN_POS                 _FLASH_UL(16)
#define FLASH1_FSR_PROIN_LEN                 _FLASH_UL(1)

/* FLASH1_FSR_RPROIN (rh) */
#define FLASH1_FSR_RPROIN_POS                _FLASH_UL(18)
#define FLASH1_FSR_RPROIN_LEN                _FLASH_UL(1)

/* FLASH1_FSR_RPRODIS (rh) */
#define FLASH1_FSR_RPRODIS_POS               _FLASH_UL(19)
#define FLASH1_FSR_RPRODIS_LEN               _FLASH_UL(1)

/* FLASH1_FSR_WPROIN0 (rh) */
#define FLASH1_FSR_WPROIN0_POS               _FLASH_UL(21)
#define FLASH1_FSR_WPROIN0_LEN               _FLASH_UL(1)

/* FLASH1_FSR_WPROIN1 (rh) */
#define FLASH1_FSR_WPROIN1_POS               _FLASH_UL(22)
#define FLASH1_FSR_WPROIN1_LEN               _FLASH_UL(1)

/* FLASH1_FSR_WPROIN2 (rh) */
#define FLASH1_FSR_WPROIN2_POS               _FLASH_UL(23)
#define FLASH1_FSR_WPROIN2_LEN               _FLASH_UL(1)

/* FLASH1_FSR_WPRODIS0 (rh) */
#define FLASH1_FSR_WPRODIS0_POS              _FLASH_UL(25)
#define FLASH1_FSR_WPRODIS0_LEN              _FLASH_UL(1)

/* FLASH1_FSR_WPRODIS1 (rh) */
#define FLASH1_FSR_WPRODIS1_POS              _FLASH_UL(26)
#define FLASH1_FSR_WPRODIS1_LEN              _FLASH_UL(1)

/* FLASH1_FSR_SLM (rh) */
#define FLASH1_FSR_SLM_POS                   _FLASH_UL(28)
#define FLASH1_FSR_SLM_LEN                   _FLASH_UL(1)

/* FLASH1_FSR_ORIER (rh) */
#define FLASH1_FSR_ORIER_POS                 _FLASH_UL(30)
#define FLASH1_FSR_ORIER_LEN                 _FLASH_UL(1)

/* FLASH1_FSR_VER (rwh) */
#define FLASH1_FSR_VER_POS                   _FLASH_UL(31)
#define FLASH1_FSR_VER_LEN                   _FLASH_UL(1)

/* FLASH1_FCON_WSPFLASH (rw) */
#define FLASH1_FCON_WSPFLASH_POS             _FLASH_UL(0)
#define FLASH1_FCON_WSPFLASH_LEN             _FLASH_UL(4)

/* FLASH1_FCON_WSECPF (rw) */
#define FLASH1_FCON_WSECPF_POS               _FLASH_UL(4)
#define FLASH1_FCON_WSECPF_LEN               _FLASH_UL(1)

/* FLASH1_FCON_WSDFLASH (rw) */
#define FLASH1_FCON_WSDFLASH_POS             _FLASH_UL(8)
#define FLASH1_FCON_WSDFLASH_LEN             _FLASH_UL(4)

/* FLASH1_FCON_WSECDF (rw) */
#define FLASH1_FCON_WSECDF_POS               _FLASH_UL(12)
#define FLASH1_FCON_WSECDF_LEN               _FLASH_UL(1)

/* FLASH1_FCON_IDLE (rw) */
#define FLASH1_FCON_IDLE_POS                 _FLASH_UL(13)
#define FLASH1_FCON_IDLE_LEN                 _FLASH_UL(1)

/* FLASH1_FCON_ESLDIS (rw) */
#define FLASH1_FCON_ESLDIS_POS               _FLASH_UL(14)
#define FLASH1_FCON_ESLDIS_LEN               _FLASH_UL(1)

/* FLASH1_FCON_SLEEP (rw) */
#define FLASH1_FCON_SLEEP_POS                _FLASH_UL(15)
#define FLASH1_FCON_SLEEP_LEN                _FLASH_UL(1)

/* FLASH1_FCON_RPA (rh) */
#define FLASH1_FCON_RPA_POS                  _FLASH_UL(16)
#define FLASH1_FCON_RPA_LEN                  _FLASH_UL(1)

/* FLASH1_FCON_DCF (rwh) */
#define FLASH1_FCON_DCF_POS                  _FLASH_UL(17)
#define FLASH1_FCON_DCF_LEN                  _FLASH_UL(1)

/* FLASH1_FCON_DDF (rwh) */
#define FLASH1_FCON_DDF_POS                  _FLASH_UL(18)
#define FLASH1_FCON_DDF_LEN                  _FLASH_UL(1)

/* FLASH1_FCON_DDFDMA (rw) */
#define FLASH1_FCON_DDFDMA_POS               _FLASH_UL(20)
#define FLASH1_FCON_DDFDMA_LEN               _FLASH_UL(1)

/* FLASH1_FCON_DDFPCP (rw) */
#define FLASH1_FCON_DDFPCP_POS               _FLASH_UL(21)
#define FLASH1_FCON_DDFPCP_LEN               _FLASH_UL(1)

/* FLASH1_FCON_DDFSHE (rw) */
#define FLASH1_FCON_DDFSHE_POS               _FLASH_UL(22)
#define FLASH1_FCON_DDFSHE_LEN               _FLASH_UL(1)

/* FLASH1_FCON_ADDECC (rw) */
#define FLASH1_FCON_ADDECC_POS               _FLASH_UL(23)
#define FLASH1_FCON_ADDECC_LEN               _FLASH_UL(1)

/* FLASH1_FCON_VOPERM (rw) */
#define FLASH1_FCON_VOPERM_POS               _FLASH_UL(24)
#define FLASH1_FCON_VOPERM_LEN               _FLASH_UL(1)

/* FLASH1_FCON_SQERM (rw) */
#define FLASH1_FCON_SQERM_POS                _FLASH_UL(25)
#define FLASH1_FCON_SQERM_LEN                _FLASH_UL(1)

/* FLASH1_FCON_PROERM (rw) */
#define FLASH1_FCON_PROERM_POS               _FLASH_UL(26)
#define FLASH1_FCON_PROERM_LEN               _FLASH_UL(1)

/* FLASH1_FCON_PFSBERM (rw) */
#define FLASH1_FCON_PFSBERM_POS              _FLASH_UL(27)
#define FLASH1_FCON_PFSBERM_LEN              _FLASH_UL(1)

/* FLASH1_FCON_DFCBERM (rw) */
#define FLASH1_FCON_DFCBERM_POS              _FLASH_UL(28)
#define FLASH1_FCON_DFCBERM_LEN              _FLASH_UL(1)

/* FLASH1_FCON_PFDBERM (rw) */
#define FLASH1_FCON_PFDBERM_POS              _FLASH_UL(29)
#define FLASH1_FCON_PFDBERM_LEN              _FLASH_UL(1)

/* FLASH1_FCON_DFMBERM (rw) */
#define FLASH1_FCON_DFMBERM_POS              _FLASH_UL(30)
#define FLASH1_FCON_DFMBERM_LEN              _FLASH_UL(1)

/* FLASH1_FCON_EOBM (rw) */
#define FLASH1_FCON_EOBM_POS                 _FLASH_UL(31)
#define FLASH1_FCON_EOBM_LEN                 _FLASH_UL(1)

/* FLASH1_MARP_MARGIN (rw) */
#define FLASH1_MARP_MARGIN_POS               _FLASH_UL(0)
#define FLASH1_MARP_MARGIN_LEN               _FLASH_UL(4)

/* FLASH1_MARP_TRAPDIS (rw) */
#define FLASH1_MARP_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH1_MARP_TRAPDIS_LEN              _FLASH_UL(1)

/* FLASH1_MARD_MARGIN (rw) */
#define FLASH1_MARD_MARGIN_POS               _FLASH_UL(0)
#define FLASH1_MARD_MARGIN_LEN               _FLASH_UL(4)

/* FLASH1_MARD_CTRL (rw) */
#define FLASH1_MARD_CTRL_POS                 _FLASH_UL(4)
#define FLASH1_MARD_CTRL_LEN                 _FLASH_UL(1)

/* FLASH1_MARD_TRAPDIS (rw) */
#define FLASH1_MARD_TRAPDIS_POS              _FLASH_UL(15)
#define FLASH1_MARD_TRAPDIS_LEN              _FLASH_UL(1)

/* FLASH1_PROCON0_S0L (rh) */
#define FLASH1_PROCON0_S0L_POS               _FLASH_UL(0)
#define FLASH1_PROCON0_S0L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S1L (rh) */
#define FLASH1_PROCON0_S1L_POS               _FLASH_UL(1)
#define FLASH1_PROCON0_S1L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S2L (rh) */
#define FLASH1_PROCON0_S2L_POS               _FLASH_UL(2)
#define FLASH1_PROCON0_S2L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S3L (rh) */
#define FLASH1_PROCON0_S3L_POS               _FLASH_UL(3)
#define FLASH1_PROCON0_S3L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S4L (rh) */
#define FLASH1_PROCON0_S4L_POS               _FLASH_UL(4)
#define FLASH1_PROCON0_S4L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S5L (rh) */
#define FLASH1_PROCON0_S5L_POS               _FLASH_UL(5)
#define FLASH1_PROCON0_S5L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S6L (rh) */
#define FLASH1_PROCON0_S6L_POS               _FLASH_UL(6)
#define FLASH1_PROCON0_S6L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S7L (rh) */
#define FLASH1_PROCON0_S7L_POS               _FLASH_UL(7)
#define FLASH1_PROCON0_S7L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S8L (rh) */
#define FLASH1_PROCON0_S8L_POS               _FLASH_UL(8)
#define FLASH1_PROCON0_S8L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S9L (rh) */
#define FLASH1_PROCON0_S9L_POS               _FLASH_UL(9)
#define FLASH1_PROCON0_S9L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON0_S10_S11L (rh) */
#define FLASH1_PROCON0_S10_S11L_POS          _FLASH_UL(10)
#define FLASH1_PROCON0_S10_S11L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S12_S13L (rh) */
#define FLASH1_PROCON0_S12_S13L_POS          _FLASH_UL(11)
#define FLASH1_PROCON0_S12_S13L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S14_S15L (rh) */
#define FLASH1_PROCON0_S14_S15L_POS          _FLASH_UL(12)
#define FLASH1_PROCON0_S14_S15L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S16_S17L (rh) */
#define FLASH1_PROCON0_S16_S17L_POS          _FLASH_UL(13)
#define FLASH1_PROCON0_S16_S17L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S18_S19L (rh) */
#define FLASH1_PROCON0_S18_S19L_POS          _FLASH_UL(14)
#define FLASH1_PROCON0_S18_S19L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S20_S21L (rh) */
#define FLASH1_PROCON0_S20_S21L_POS          _FLASH_UL(15)
#define FLASH1_PROCON0_S20_S21L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_S22_S23L (rh) */
#define FLASH1_PROCON0_S22_S23L_POS          _FLASH_UL(16)
#define FLASH1_PROCON0_S22_S23L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON0_RES (rh) */
#define FLASH1_PROCON0_RES_POS               _FLASH_UL(17)
#define FLASH1_PROCON0_RES_LEN               _FLASH_UL(12)

/* FLASH1_PROCON0_ADDECC (rh) */
#define FLASH1_PROCON0_ADDECC_POS            _FLASH_UL(29)
#define FLASH1_PROCON0_ADDECC_LEN            _FLASH_UL(1)

/* FLASH1_PROCON0_DFEXPRO (rh) */
#define FLASH1_PROCON0_DFEXPRO_POS           _FLASH_UL(30)
#define FLASH1_PROCON0_DFEXPRO_LEN           _FLASH_UL(1)

/* FLASH1_PROCON0_RPRO (rh) */
#define FLASH1_PROCON0_RPRO_POS              _FLASH_UL(31)
#define FLASH1_PROCON0_RPRO_LEN              _FLASH_UL(1)

/* FLASH1_PROCON1_S0L (rh) */
#define FLASH1_PROCON1_S0L_POS               _FLASH_UL(0)
#define FLASH1_PROCON1_S0L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S1L (rh) */
#define FLASH1_PROCON1_S1L_POS               _FLASH_UL(1)
#define FLASH1_PROCON1_S1L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S2L (rh) */
#define FLASH1_PROCON1_S2L_POS               _FLASH_UL(2)
#define FLASH1_PROCON1_S2L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S3L (rh) */
#define FLASH1_PROCON1_S3L_POS               _FLASH_UL(3)
#define FLASH1_PROCON1_S3L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S4L (rh) */
#define FLASH1_PROCON1_S4L_POS               _FLASH_UL(4)
#define FLASH1_PROCON1_S4L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S5L (rh) */
#define FLASH1_PROCON1_S5L_POS               _FLASH_UL(5)
#define FLASH1_PROCON1_S5L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S6L (rh) */
#define FLASH1_PROCON1_S6L_POS               _FLASH_UL(6)
#define FLASH1_PROCON1_S6L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S7L (rh) */
#define FLASH1_PROCON1_S7L_POS               _FLASH_UL(7)
#define FLASH1_PROCON1_S7L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S8L (rh) */
#define FLASH1_PROCON1_S8L_POS               _FLASH_UL(8)
#define FLASH1_PROCON1_S8L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S9L (rh) */
#define FLASH1_PROCON1_S9L_POS               _FLASH_UL(9)
#define FLASH1_PROCON1_S9L_LEN               _FLASH_UL(1)

/* FLASH1_PROCON1_S10_S11L (rh) */
#define FLASH1_PROCON1_S10_S11L_POS          _FLASH_UL(10)
#define FLASH1_PROCON1_S10_S11L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S12_S13L (rh) */
#define FLASH1_PROCON1_S12_S13L_POS          _FLASH_UL(11)
#define FLASH1_PROCON1_S12_S13L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S14_S15L (rh) */
#define FLASH1_PROCON1_S14_S15L_POS          _FLASH_UL(12)
#define FLASH1_PROCON1_S14_S15L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S16_S17L (rh) */
#define FLASH1_PROCON1_S16_S17L_POS          _FLASH_UL(13)
#define FLASH1_PROCON1_S16_S17L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S18_S19L (rh) */
#define FLASH1_PROCON1_S18_S19L_POS          _FLASH_UL(14)
#define FLASH1_PROCON1_S18_S19L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S20_S21L (rh) */
#define FLASH1_PROCON1_S20_S21L_POS          _FLASH_UL(15)
#define FLASH1_PROCON1_S20_S21L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_S22_S23L (rh) */
#define FLASH1_PROCON1_S22_S23L_POS          _FLASH_UL(16)
#define FLASH1_PROCON1_S22_S23L_LEN          _FLASH_UL(1)

/* FLASH1_PROCON1_RES (rh) */
#define FLASH1_PROCON1_RES_POS               _FLASH_UL(17)
#define FLASH1_PROCON1_RES_LEN               _FLASH_UL(6)

/* FLASH1_PROCON1_SPREC (rh) */
#define FLASH1_PROCON1_SPREC_POS             _FLASH_UL(23)
#define FLASH1_PROCON1_SPREC_LEN             _FLASH_UL(1)

/* FLASH1_PROCON1_ALSEDIS (rh) */
#define FLASH1_PROCON1_ALSEDIS_POS           _FLASH_UL(24)
#define FLASH1_PROCON1_ALSEDIS_LEN           _FLASH_UL(8)

/* FLASH1_PROCON2_S0ROM (rh) */
#define FLASH1_PROCON2_S0ROM_POS             _FLASH_UL(0)
#define FLASH1_PROCON2_S0ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S1ROM (rh) */
#define FLASH1_PROCON2_S1ROM_POS             _FLASH_UL(1)
#define FLASH1_PROCON2_S1ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S2ROM (rh) */
#define FLASH1_PROCON2_S2ROM_POS             _FLASH_UL(2)
#define FLASH1_PROCON2_S2ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S3ROM (rh) */
#define FLASH1_PROCON2_S3ROM_POS             _FLASH_UL(3)
#define FLASH1_PROCON2_S3ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S4ROM (rh) */
#define FLASH1_PROCON2_S4ROM_POS             _FLASH_UL(4)
#define FLASH1_PROCON2_S4ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S5ROM (rh) */
#define FLASH1_PROCON2_S5ROM_POS             _FLASH_UL(5)
#define FLASH1_PROCON2_S5ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S6ROM (rh) */
#define FLASH1_PROCON2_S6ROM_POS             _FLASH_UL(6)
#define FLASH1_PROCON2_S6ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S7ROM (rh) */
#define FLASH1_PROCON2_S7ROM_POS             _FLASH_UL(7)
#define FLASH1_PROCON2_S7ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S8ROM (rh) */
#define FLASH1_PROCON2_S8ROM_POS             _FLASH_UL(8)
#define FLASH1_PROCON2_S8ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S9ROM (rh) */
#define FLASH1_PROCON2_S9ROM_POS             _FLASH_UL(9)
#define FLASH1_PROCON2_S9ROM_LEN             _FLASH_UL(1)

/* FLASH1_PROCON2_S10_S11ROM (rh) */
#define FLASH1_PROCON2_S10_S11ROM_POS        _FLASH_UL(10)
#define FLASH1_PROCON2_S10_S11ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S12_S13ROM (rh) */
#define FLASH1_PROCON2_S12_S13ROM_POS        _FLASH_UL(11)
#define FLASH1_PROCON2_S12_S13ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S14_S15ROM (rh) */
#define FLASH1_PROCON2_S14_S15ROM_POS        _FLASH_UL(12)
#define FLASH1_PROCON2_S14_S15ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S16_S17ROM (rh) */
#define FLASH1_PROCON2_S16_S17ROM_POS        _FLASH_UL(13)
#define FLASH1_PROCON2_S16_S17ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S18_S19ROM (rh) */
#define FLASH1_PROCON2_S18_S19ROM_POS        _FLASH_UL(14)
#define FLASH1_PROCON2_S18_S19ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S20_S21ROM (rh) */
#define FLASH1_PROCON2_S20_S21ROM_POS        _FLASH_UL(15)
#define FLASH1_PROCON2_S20_S21ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_S22_S23ROM (rh) */
#define FLASH1_PROCON2_S22_S23ROM_POS        _FLASH_UL(16)
#define FLASH1_PROCON2_S22_S23ROM_LEN        _FLASH_UL(1)

/* FLASH1_PROCON2_RES (rh) */
#define FLASH1_PROCON2_RES_POS               _FLASH_UL(17)
#define FLASH1_PROCON2_RES_LEN               _FLASH_UL(13)

/* FLASH1_PROCON2_DATM (rh) */
#define FLASH1_PROCON2_DATM_POS              _FLASH_UL(30)
#define FLASH1_PROCON2_DATM_LEN              _FLASH_UL(1)

/* FLASH1_PROCON2_TP (rh) */
#define FLASH1_PROCON2_TP_POS                 _FLASH_UL(31)
#define FLASH1_PROCON2_TP_LEN                 _FLASH_UL(1)

/* FLASH1_XFSR_PFDBER (rwh) */
#define FLASH1_XFSR_PFDBER_POS               _FLASH_UL(0)
#define FLASH1_XFSR_PFDBER_LEN               _FLASH_UL(1)

/* FLASH1_XFSR_PFADER (rwh) */
#define FLASH1_XFSR_PFADER_POS               _FLASH_UL(1)
#define FLASH1_XFSR_PFADER_LEN               _FLASH_UL(1)

/* FLASH1_XFSR_RES2 (rwh) */
#define FLASH1_XFSR_RES2_POS                 _FLASH_UL(2)
#define FLASH1_XFSR_RES2_LEN                 _FLASH_UL(1)

/* FLASH1_XFSR_RES3 (rwh) */
#define FLASH1_XFSR_RES3_POS                 _FLASH_UL(3)
#define FLASH1_XFSR_RES3_LEN                 _FLASH_UL(1)

/* FLASH1_XFSR_RES4 (rwh) */
#define FLASH1_XFSR_RES4_POS                 _FLASH_UL(4)
#define FLASH1_XFSR_RES4_LEN                 _FLASH_UL(1)

/* FLASH1_XFSR_SRIADDERR (rwh) */
#define FLASH1_XFSR_SRIADDERR_POS            _FLASH_UL(5)
#define FLASH1_XFSR_SRIADDERR_LEN            _FLASH_UL(1)

/* FLASH1_XFSR_SEMVIO (rwh) */
#define FLASH1_XFSR_SEMVIO_POS               _FLASH_UL(6)
#define FLASH1_XFSR_SEMVIO_LEN               _FLASH_UL(1)

/* FLASH1_XFSR_PVER (rwh) */
#define FLASH1_XFSR_PVER_POS                 _FLASH_UL(8)
#define FLASH1_XFSR_PVER_LEN                 _FLASH_UL(1)

/* FLASH1_XFSR_D0VER (rwh) */
#define FLASH1_XFSR_D0VER_POS                _FLASH_UL(9)
#define FLASH1_XFSR_D0VER_LEN                _FLASH_UL(1)

/* FLASH1_XFSR_D1VER (rwh) */
#define FLASH1_XFSR_D1VER_POS                _FLASH_UL(10)
#define FLASH1_XFSR_D1VER_LEN                _FLASH_UL(1)

/* FLASH1_XFSR_RES11 (rwh) */
#define FLASH1_XFSR_RES11_POS                _FLASH_UL(11)
#define FLASH1_XFSR_RES11_LEN                _FLASH_UL(1)

/* FLASH1_SEMA_SHE (rh) */
#define FLASH1_SEMA_SHE_POS                  _FLASH_UL(0)
#define FLASH1_SEMA_SHE_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S1 (rwh) */
#define FLASH1_SEMA_S1_POS                   _FLASH_UL(2)
#define FLASH1_SEMA_S1_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S1C (w) */
#define FLASH1_SEMA_S1C_POS                  _FLASH_UL(3)
#define FLASH1_SEMA_S1C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S2 (rwh) */
#define FLASH1_SEMA_S2_POS                   _FLASH_UL(4)
#define FLASH1_SEMA_S2_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S2C (w) */
#define FLASH1_SEMA_S2C_POS                  _FLASH_UL(5)
#define FLASH1_SEMA_S2C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S3 (rwh) */
#define FLASH1_SEMA_S3_POS                   _FLASH_UL(6)
#define FLASH1_SEMA_S3_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S3C (w) */
#define FLASH1_SEMA_S3C_POS                  _FLASH_UL(7)
#define FLASH1_SEMA_S3C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S4 (rwh) */
#define FLASH1_SEMA_S4_POS                   _FLASH_UL(8)
#define FLASH1_SEMA_S4_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S4C (w) */
#define FLASH1_SEMA_S4C_POS                  _FLASH_UL(9)
#define FLASH1_SEMA_S4C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S5 (rwh) */
#define FLASH1_SEMA_S5_POS                   _FLASH_UL(10)
#define FLASH1_SEMA_S5_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S5C (w) */
#define FLASH1_SEMA_S5C_POS                  _FLASH_UL(11)
#define FLASH1_SEMA_S5C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S6 (rwh) */
#define FLASH1_SEMA_S6_POS                   _FLASH_UL(12)
#define FLASH1_SEMA_S6_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S6C (w) */
#define FLASH1_SEMA_S6C_POS                  _FLASH_UL(13)
#define FLASH1_SEMA_S6C_LEN                  _FLASH_UL(1)

/* FLASH1_SEMA_S7 (rwh) */
#define FLASH1_SEMA_S7_POS                   _FLASH_UL(14)
#define FLASH1_SEMA_S7_LEN                   _FLASH_UL(1)

/* FLASH1_SEMA_S7C (w) */
#define FLASH1_SEMA_S7C_POS                  _FLASH_UL(15)
#define FLASH1_SEMA_S7C_LEN                  _FLASH_UL(1)

/* FLASH1_SHEBOOT0_SIZE (rh) */
#define FLASH1_SHEBOOT0_SIZE_POS             _FLASH_UL(0)
#define FLASH1_SHEBOOT0_SIZE_LEN             _FLASH_UL(30)

/* FLASH1_SHEBOOT0_BGD (rh) */
#define FLASH1_SHEBOOT0_BGD_POS              _FLASH_UL(30)
#define FLASH1_SHEBOOT0_BGD_LEN              _FLASH_UL(1)

/* FLASH1_SHEBOOT0_SHE (rh) */
#define FLASH1_SHEBOOT0_SHE_POS              _FLASH_UL(31)
#define FLASH1_SHEBOOT0_SHE_LEN              _FLASH_UL(1)

/* FLASH1_SHEBOOT1_SIZE (rh) */
#define FLASH1_SHEBOOT1_SIZE_POS             _FLASH_UL(0)
#define FLASH1_SHEBOOT1_SIZE_LEN             _FLASH_UL(30)

/* FLASH1_SHEBOOT1_BGD (rh) */
#define FLASH1_SHEBOOT1_BGD_POS              _FLASH_UL(30)
#define FLASH1_SHEBOOT1_BGD_LEN              _FLASH_UL(1)

/* FLASH1_SHEBOOT1_SHE (rh) */
#define FLASH1_SHEBOOT1_SHE_POS              _FLASH_UL(31)
#define FLASH1_SHEBOOT1_SHE_LEN              _FLASH_UL(1)

/* FLASH1_SHEBOOT2_SIZE (rh) */
#define FLASH1_SHEBOOT2_SIZE_POS             _FLASH_UL(0)
#define FLASH1_SHEBOOT2_SIZE_LEN             _FLASH_UL(30)

/* FLASH1_SHEBOOT2_BGD (rh) */
#define FLASH1_SHEBOOT2_BGD_POS              _FLASH_UL(30)
#define FLASH1_SHEBOOT2_BGD_LEN              _FLASH_UL(1)

/* FLASH1_SHEBOOT2_SHE (rh) */
#define FLASH1_SHEBOOT2_SHE_POS              _FLASH_UL(31)
#define FLASH1_SHEBOOT2_SHE_LEN              _FLASH_UL(1)

/* FLASH1_RDBCFG0_TAG (rw) */
#define FLASH1_RDBCFG0_TAG_POS               _FLASH_UL(0)
#define FLASH1_RDBCFG0_TAG_LEN               _FLASH_UL(4)

/* FLASH1_RDBCFG1_TAG (rw) */
#define FLASH1_RDBCFG1_TAG_POS               _FLASH_UL(0)
#define FLASH1_RDBCFG1_TAG_LEN               _FLASH_UL(4)

/* FLASH1_RDBCFG2_TAG (rw) */
#define FLASH1_RDBCFG2_TAG_POS               _FLASH_UL(0)
#define FLASH1_RDBCFG2_TAG_LEN               _FLASH_UL(4)

/* FLASH1_ECCW_WCODEL (rw) */
#define FLASH1_ECCW_WCODEL_POS               _FLASH_UL(0)
#define FLASH1_ECCW_WCODEL_LEN               _FLASH_UL(8)

/* FLASH1_ECCW_WCODEH (rw) */
#define FLASH1_ECCW_WCODEH_POS               _FLASH_UL(8)
#define FLASH1_ECCW_WCODEH_LEN               _FLASH_UL(8)

/* FLASH1_ECCW_DECENCDIS (rw) */
#define FLASH1_ECCW_DECENCDIS_POS            _FLASH_UL(30)
#define FLASH1_ECCW_DECENCDIS_LEN            _FLASH_UL(1)

/* FLASH1_ECCW_PECENCDIS (rw) */
#define FLASH1_ECCW_PECENCDIS_POS            _FLASH_UL(31)
#define FLASH1_ECCW_PECENCDIS_LEN            _FLASH_UL(1)

/* FLASH1_ECCR_RCODEL (rh) */
#define FLASH1_ECCR_RCODEL_POS               _FLASH_UL(0)
#define FLASH1_ECCR_RCODEL_LEN               _FLASH_UL(8)

/* FLASH1_ECCR_RCODEH (rh) */
#define FLASH1_ECCR_RCODEH_POS               _FLASH_UL(8)
#define FLASH1_ECCR_RCODEH_LEN               _FLASH_UL(8)

/* FLASH1_ECCR_DECDECDIS (rw) */
#define FLASH1_ECCR_DECDECDIS_POS            _FLASH_UL(30)
#define FLASH1_ECCR_DECDECDIS_LEN            _FLASH_UL(1)

/* FLASH1_ECCR_PECDECDIS (rw) */
#define FLASH1_ECCR_PECDECDIS_POS            _FLASH_UL(31)
#define FLASH1_ECCR_PECDECDIS_LEN            _FLASH_UL(1)

#endif
