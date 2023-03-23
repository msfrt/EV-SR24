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
 * $Filename__:csfr_1797.h$ 
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
 * $Name______:csfr_1797$ 
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
 *      File name: csfr_1797.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CSFR_1797_H
#define _CSFR_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CSFR_UL(x) x
#else
    #define _CSFR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CSFR on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 PCXI;                // [0xF7E1FE00] : Previous Context Information Register
    volatile uint32 PSW;                 // [0xF7E1FE04] : Program Status Word
    volatile uint32 PC;                  // [0xF7E1FE08] : Program Counter
    volatile uint32 RESERVED0[2];        // [0xF7E1FE0C...0xF7E1FE13] : reserved space
    volatile uint32 SYSCON;              // [0xF7E1FE14] : System Configuration Register
    volatile uint32 CPU_ID;              // [0xF7E1FE18] : CPU Identification Register
    volatile uint32 RESERVED1[1];        // [0xF7E1FE1C...0xF7E1FE1F] : reserved space
    volatile uint32 BIV;                 // [0xF7E1FE20] : Base Interrupt Vector Table Pointer
    volatile uint32 BTV;                 // [0xF7E1FE24] : Base Trap Vector Table Pointer
    volatile uint32 ISP;                 // [0xF7E1FE28] : Interrupt Stack Pointer
    volatile uint32 ICR;                 // [0xF7E1FE2C] : Interrupt Control Register
    volatile uint32 RESERVED2[2];        // [0xF7E1FE30...0xF7E1FE37] : reserved space
    volatile uint32 FCX;                 // [0xF7E1FE38] : Free CSA List Head Pointer
    volatile uint32 LCX;                 // [0xF7E1FE3C] : Free CSA List Limit Pointer
} CSFR_RegMap_t;

#define PCX PCXI /* PCX has same address as PCXI */

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CSFR_RegMap_t CSFR __attribute__ ((asection (".bss.label_only")));


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

/* CSFR_ID_MOD_NUMBER (r) */
#define CSFR_ID_MOD_NUMBER_POS               _CSFR_UL(16)
#define CSFR_ID_MOD_NUMBER_LEN               _CSFR_UL(16)

/* CSFR_ID_MOD_REV (r) */
#define CSFR_ID_MOD_REV_POS                  _CSFR_UL(0)
#define CSFR_ID_MOD_REV_LEN                  _CSFR_UL(8)

/* CSFR_ID_MOD_TYPE (r) */
#define CSFR_ID_MOD_TYPE_POS                 _CSFR_UL(8)
#define CSFR_ID_MOD_TYPE_LEN                 _CSFR_UL(8)

/* CSFR_PCXI_PCXO (rw) */
#define CSFR_PCXI_PCXO_POS                   _CSFR_UL(0)
#define CSFR_PCXI_PCXO_LEN                   _CSFR_UL(16)

/* CSFR_PCXI_PCXS (rw) */
#define CSFR_PCXI_PCXS_POS                   _CSFR_UL(16)
#define CSFR_PCXI_PCXS_LEN                   _CSFR_UL(4)

/* CSFR_PCXI_UL (rw) */
#define CSFR_PCXI_UL_POS                     _CSFR_UL(22)
#define CSFR_PCXI_UL_LEN                     _CSFR_UL(1)

/* CSFR_PCXI_PIE (rw) */
#define CSFR_PCXI_PIE_POS                    _CSFR_UL(23)
#define CSFR_PCXI_PIE_LEN                    _CSFR_UL(1)

/* CSFR_PCXI_PCPN (rw) */
#define CSFR_PCXI_PCPN_POS                   _CSFR_UL(24)
#define CSFR_PCXI_PCPN_LEN                   _CSFR_UL(8)

/* CSFR_PCX_PCXO (rw) */
#define CSFR_PCX_PCXO_POS                    _CSFR_UL(0)
#define CSFR_PCX_PCXO_LEN                    _CSFR_UL(16)

/* CSFR_PCX_PCXS (rw) */
#define CSFR_PCX_PCXS_POS                    _CSFR_UL(16)
#define CSFR_PCX_PCXS_LEN                    _CSFR_UL(4)

/* CSFR_PCX_UL (rw) */
#define CSFR_PCX_UL_POS                      _CSFR_UL(22)
#define CSFR_PCX_UL_LEN                      _CSFR_UL(1)

/* CSFR_PCX_PIE (rw) */
#define CSFR_PCX_PIE_POS                     _CSFR_UL(23)
#define CSFR_PCX_PIE_LEN                     _CSFR_UL(1)

/* CSFR_PCX_PCPN (rw) */
#define CSFR_PCX_PCPN_POS                    _CSFR_UL(24)
#define CSFR_PCX_PCPN_LEN                    _CSFR_UL(8)

/* CSFR_PSW_CDC (rwh) */
#define CSFR_PSW_CDC_POS                     _CSFR_UL(0)
#define CSFR_PSW_CDC_LEN                     _CSFR_UL(7)

/* CSFR_PSW_CDE (rwh) */
#define CSFR_PSW_CDE_POS                     _CSFR_UL(7)
#define CSFR_PSW_CDE_LEN                     _CSFR_UL(1)

/* CSFR_PSW_GW (rwh) */
#define CSFR_PSW_GW_POS                      _CSFR_UL(8)
#define CSFR_PSW_GW_LEN                      _CSFR_UL(1)

/* CSFR_PSW_IS (rwh) */
#define CSFR_PSW_IS_POS                      _CSFR_UL(9)
#define CSFR_PSW_IS_LEN                      _CSFR_UL(1)

/* CSFR_PSW_IO (rwh) */
#define CSFR_PSW_IO_POS                      _CSFR_UL(10)
#define CSFR_PSW_IO_LEN                      _CSFR_UL(2)

/* CSFR_PSW_PRS (rwh) */
#define CSFR_PSW_PRS_POS                     _CSFR_UL(12)
#define CSFR_PSW_PRS_LEN                     _CSFR_UL(2)

/* CSFR_PSW_RM (rw) */
#define CSFR_PSW_RM_POS                      _CSFR_UL(24)
#define CSFR_PSW_RM_LEN                      _CSFR_UL(2)

/* CSFR_PSW_FX (rwh) */
#define CSFR_PSW_FX_POS                      _CSFR_UL(26)
#define CSFR_PSW_FX_LEN                      _CSFR_UL(1)

/* CSFR_PSW_SAV (rh) */
#define CSFR_PSW_SAV_POS                     _CSFR_UL(27)
#define CSFR_PSW_SAV_LEN                     _CSFR_UL(1)

/* CSFR_PSW_AV (rwh) */
#define CSFR_PSW_AV_POS                      _CSFR_UL(28)
#define CSFR_PSW_AV_LEN                      _CSFR_UL(1)

/* CSFR_PSW_SV (rwh) */
#define CSFR_PSW_SV_POS                      _CSFR_UL(29)
#define CSFR_PSW_SV_LEN                      _CSFR_UL(1)

/* CSFR_PSW_V (rwh) */
#define CSFR_PSW_V_POS                       _CSFR_UL(30)
#define CSFR_PSW_V_LEN                       _CSFR_UL(1)

/* CSFR_PSW_C (rwh) */
#define CSFR_PSW_C_POS                       _CSFR_UL(31)
#define CSFR_PSW_C_LEN                       _CSFR_UL(1)

/* CSFR_PC_PC (r) */
#define CSFR_PC_PC_POS                       _CSFR_UL(1)
#define CSFR_PC_PC_LEN                       _CSFR_UL(31)

/* CSFR_SYSCON_FCDSF (rwh) */
#define CSFR_SYSCON_FCDSF_POS                _CSFR_UL(0)
#define CSFR_SYSCON_FCDSF_LEN                _CSFR_UL(1)

/* CSFR_SYSCON_PROTEN (rw) */
#define CSFR_SYSCON_PROTEN_POS               _CSFR_UL(1)
#define CSFR_SYSCON_PROTEN_LEN               _CSFR_UL(1)

/* CSFR_CPU_ID_MOD (rh) */
#define CSFR_CPU_ID_MOD_POS                  _CSFR_UL(16)
#define CSFR_CPU_ID_MOD_LEN                  _CSFR_UL(16)

/* CSFR_CPU_ID_MOD_32B (rh) */
#define CSFR_CPU_ID_MOD_32B_POS              _CSFR_UL(8)
#define CSFR_CPU_ID_MOD_32B_LEN              _CSFR_UL(8)

/* CSFR_CPU_ID_MOD_REV (rh) */
#define CSFR_CPU_ID_MOD_REV_POS              _CSFR_UL(0)
#define CSFR_CPU_ID_MOD_REV_LEN              _CSFR_UL(8)

/* CSFR_BIV_BIV (rw) */
#define CSFR_BIV_BIV_POS                     _CSFR_UL(1)
#define CSFR_BIV_BIV_LEN                     _CSFR_UL(31)

/* CSFR_BTV_BTV (rw) */
#define CSFR_BTV_BTV_POS                     _CSFR_UL(1)
#define CSFR_BTV_BTV_LEN                     _CSFR_UL(31)

/* CSFR_ISP_ISP (rw) */
#define CSFR_ISP_ISP_POS                     _CSFR_UL(0)
#define CSFR_ISP_ISP_LEN                     _CSFR_UL(32)

/* CSFR_ICR_CCPN (rwh) */
#define CSFR_ICR_CCPN_POS                    _CSFR_UL(0)
#define CSFR_ICR_CCPN_LEN                    _CSFR_UL(8)

/* CSFR_ICR_IE (rwh) */
#define CSFR_ICR_IE_POS                      _CSFR_UL(8)
#define CSFR_ICR_IE_LEN                      _CSFR_UL(1)

/* CSFR_ICR_PIPN (rh) */
#define CSFR_ICR_PIPN_POS                    _CSFR_UL(16)
#define CSFR_ICR_PIPN_LEN                    _CSFR_UL(8)

/* CSFR_ICR_CARBCYC (rw) */
#define CSFR_ICR_CARBCYC_POS                 _CSFR_UL(24)
#define CSFR_ICR_CARBCYC_LEN                 _CSFR_UL(2)

/* CSFR_ICR_CONECYC (rw) */
#define CSFR_ICR_CONECYC_POS                 _CSFR_UL(26)
#define CSFR_ICR_CONECYC_LEN                 _CSFR_UL(1)

/* CSFR_FCX_FCXO (rw) */
#define CSFR_FCX_FCXO_POS                    _CSFR_UL(0)
#define CSFR_FCX_FCXO_LEN                    _CSFR_UL(16)

/* CSFR_FCX_FCXS (rw) */
#define CSFR_FCX_FCXS_POS                    _CSFR_UL(16)
#define CSFR_FCX_FCXS_LEN                    _CSFR_UL(4)

/* CSFR_LCX_LCXO (rw) */
#define CSFR_LCX_LCXO_POS                    _CSFR_UL(0)
#define CSFR_LCX_LCXO_LEN                    _CSFR_UL(16)

/* CSFR_LCX_LCXS (rw) */
#define CSFR_LCX_LCXS_POS                    _CSFR_UL(16)
#define CSFR_LCX_LCXS_LEN                    _CSFR_UL(4)

#endif
