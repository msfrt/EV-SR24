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
 * $Filename__:csfr_1793.h$ 
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
 * $Name______:csfr_1793$ 
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
 * 1.12.0; 2     20.10.2010 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 1     16.04.2010 AHT2FE
 *   Added TC_1793 header
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CSFR_1793_H
#define _CSFR_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CSFR_UL(x) x
#else
    #define _CSFR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CSFR on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define CSFR_PMA0_MXCR_OFFSET		0x801C
#define CSFR_COMPAT_MXCR_OFFSET		0x9400
#define CSFR_PCXI_MXCR_OFFSET		0xFE00
#define CSFR_PSW_MXCR_OFFSET		0xFE04
#define CSFR_PC_MXCR_OFFSET		0xFE08
#define CSFR_SYSCON_MXCR_OFFSET		0xFE14
#define CSFR_CPU_ID_MXCR_OFFSET		0xFE18
#define CSFR_BIV_MXCR_OFFSET		0xFE20
#define CSFR_BTV_MXCR_OFFSET		0xFE24
#define CSFR_ISP_MXCR_OFFSET		0xFE28
#define CSFR_ICR_MXCR_OFFSET		0xFE2C
#define CSFR_FCX_MXCR_OFFSET		0xFE38
#define CSFR_LCX_MXCR_OFFSET		0xFE3C
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 PMA0;                // [0xF7E1801C] : Physical Memory Attributes
    volatile uint32 RESERVED0[1272];     // [0xF7E18020...0xF7E193FF] : reserved space
    volatile uint32 COMPAT;              // [0xF7E19400] : Compatibility Control Register
    volatile uint32 RESERVED1[6783];     // [0xF7E19404...0xF7E1FDFF] : reserved space
    volatile uint32 PCXI;                // [0xF7E1FE00] : Previous Context Information Register
    volatile uint32 PSW;                 // [0xF7E1FE04] : Program Status Word
    volatile uint32 PC;                  // [0xF7E1FE08] : Program Counter
    volatile uint32 RESERVED2[2];        // [0xF7E1FE0C...0xF7E1FE13] : reserved space
    volatile uint32 SYSCON;              // [0xF7E1FE14] : System Configuration Register
    volatile uint32 CPU_ID;              // [0xF7E1FE18] : CPU Identification Register
    volatile uint32 RESERVED3[1];        // [0xF7E1FE1C...0xF7E1FE1F] : reserved space
    volatile uint32 BIV;                 // [0xF7E1FE20] : Base Interrupt Vector Table Pointer
    volatile uint32 BTV;                 // [0xF7E1FE24] : Base Trap Vector Table Pointer
    volatile uint32 ISP;                 // [0xF7E1FE28] : Interrupt Stack Pointer
    volatile uint32 ICR;                 // [0xF7E1FE2C] : Interrupt Control Register
    volatile uint32 RESERVED4[2];        // [0xF7E1FE30...0xF7E1FE37] : reserved space
    volatile uint32 FCX;                 // [0xF7E1FE38] : Free CSA List Head Pointer
    volatile uint32 LCX;                 // [0xF7E1FE3C] : Free CSA List Limit Pointer
} CSFR_RegMap_t;

#define PCX PCXI /* PCX has same address as PCXI */

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CSFR_RegMap_t CSFR __attribute__ ((asection (".bss.label_only")));
#endif 


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
#define CSFR_ID_MOD_NUMBER_POS                _CSFR_UL(16)
#define CSFR_ID_MOD_NUMBER_LEN                _CSFR_UL(16)

/* CSFR_ID_MOD_REV (r) */
#define CSFR_ID_MOD_REV_POS                   _CSFR_UL(0)
#define CSFR_ID_MOD_REV_LEN                   _CSFR_UL(8)

/* CSFR_ID_MOD_TYPE (r) */
#define CSFR_ID_MOD_TYPE_POS                  _CSFR_UL(8)
#define CSFR_ID_MOD_TYPE_LEN                  _CSFR_UL(8)

/* CSFR_PCXI_PCXO (rw) */
#define CSFR_PCXI_PCXO_POS                   _CSFR_UL(0)
#define CSFR_PCXI_PCXO_LEN                   _CSFR_UL(16)

/* CSFR_PCXI_PCXS (rw) */
#define CSFR_PCXI_PCXS_POS                   _CSFR_UL(16)
#define CSFR_PCXI_PCXS_LEN                   _CSFR_UL(4)

/* CSFR_PCXI_FC (rw) */
#define CSFR_PCXI_FC_POS                     _CSFR_UL(20)
#define CSFR_PCXI_FC_LEN                     _CSFR_UL(1)

/* CSFR_PCXI_RES (r) */
#define CSFR_PCXI_RES_POS                    _CSFR_UL(21)
#define CSFR_PCXI_RES_LEN                    _CSFR_UL(1)

/* CSFR_PCXI_UL (rw) */
#define CSFR_PCXI_UL_POS                     _CSFR_UL(22)
#define CSFR_PCXI_UL_LEN                     _CSFR_UL(1)

/* CSFR_PCXI_PIE (rw) */
#define CSFR_PCXI_PIE_POS                    _CSFR_UL(23)
#define CSFR_PCXI_PIE_LEN                    _CSFR_UL(1)

/* CSFR_PCXI_PCPN (rw) */
#define CSFR_PCXI_PCPN_POS                   _CSFR_UL(24)
#define CSFR_PCXI_PCPN_LEN                   _CSFR_UL(8)

/* CSFR_PMA0_ATT_0_11 (rw) */
#define CSFR_PMA0_ATT_0_11_POS               _CSFR_UL(11)
#define CSFR_PMA0_ATT_0_11_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_0_15 (r) */
#define CSFR_PMA0_ATT_0_15_POS               _CSFR_UL(15)
#define CSFR_PMA0_ATT_0_15_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_11 (rw) */
#define CSFR_PMA0_ATT_1_11_POS               _CSFR_UL(27)
#define CSFR_PMA0_ATT_1_11_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_12 (r) */
#define CSFR_PMA0_ATT_1_12_POS               _CSFR_UL(28)
#define CSFR_PMA0_ATT_1_12_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_9_0 (rw) */
#define CSFR_PMA0_ATT_1_9_0_POS              _CSFR_UL(16)
#define CSFR_PMA0_ATT_1_9_0_LEN              _CSFR_UL(10)

/* CSFR_PMA0_ATT_0_10 (r) */
#define CSFR_PMA0_ATT_0_10_POS               _CSFR_UL(10)
#define CSFR_PMA0_ATT_0_10_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_0_9_0 (rw) */
#define CSFR_PMA0_ATT_0_9_0_POS              _CSFR_UL(0)
#define CSFR_PMA0_ATT_0_9_0_LEN              _CSFR_UL(10)

/* CSFR_PMA0_ATT_0_12 (rw) */
#define CSFR_PMA0_ATT_0_12_POS               _CSFR_UL(12)
#define CSFR_PMA0_ATT_0_12_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_0_13 (rw) */
#define CSFR_PMA0_ATT_0_13_POS               _CSFR_UL(13)
#define CSFR_PMA0_ATT_0_13_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_0_14 (rw) */
#define CSFR_PMA0_ATT_0_14_POS               _CSFR_UL(14)
#define CSFR_PMA0_ATT_0_14_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_10 (r) */
#define CSFR_PMA0_ATT_1_10_POS               _CSFR_UL(26)
#define CSFR_PMA0_ATT_1_10_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_13 (r) */
#define CSFR_PMA0_ATT_1_13_POS               _CSFR_UL(29)
#define CSFR_PMA0_ATT_1_13_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_14 (rw) */
#define CSFR_PMA0_ATT_1_14_POS               _CSFR_UL(30)
#define CSFR_PMA0_ATT_1_14_LEN               _CSFR_UL(1)

/* CSFR_PMA0_ATT_1_15 (r) */
#define CSFR_PMA0_ATT_1_15_POS               _CSFR_UL(31)
#define CSFR_PMA0_ATT_1_15_LEN               _CSFR_UL(1)

/* CSFR_COMPAT_RES (r) */
#define CSFR_COMPAT_RES_POS                  _CSFR_UL(0)
#define CSFR_COMPAT_RES_LEN                  _CSFR_UL(2)

/* CSFR_COMPAT_PROT (rw) */
#define CSFR_COMPAT_PROT_POS                 _CSFR_UL(2)
#define CSFR_COMPAT_PROT_LEN                 _CSFR_UL(1)

/* CSFR_COMPAT_RM (rw) */
#define CSFR_COMPAT_RM_POS                   _CSFR_UL(3)
#define CSFR_COMPAT_RM_LEN                   _CSFR_UL(1)

/* CSFR_COMPAT_INT (r) */
#define CSFR_COMPAT_INT_POS                  _CSFR_UL(4)
#define CSFR_COMPAT_INT_LEN                  _CSFR_UL(1)

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

/* CSFR_PSW_RES (r) */
#define CSFR_PSW_RES_POS                     _CSFR_UL(14)
#define CSFR_PSW_RES_LEN                     _CSFR_UL(13)

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

/* CSFR_PC_RES (r) */
#define CSFR_PC_RES_POS                      _CSFR_UL(0)
#define CSFR_PC_RES_LEN                      _CSFR_UL(1)

/* CSFR_PC_PC (r) */
#define CSFR_PC_PC_POS                       _CSFR_UL(1)
#define CSFR_PC_PC_LEN                       _CSFR_UL(31)

/* CSFR_SYSCON_FCDSF (rwh) */
#define CSFR_SYSCON_FCDSF_POS                _CSFR_UL(0)
#define CSFR_SYSCON_FCDSF_LEN                _CSFR_UL(1)

/* CSFR_SYSCON_PROTEN (rw) */
#define CSFR_SYSCON_PROTEN_POS               _CSFR_UL(1)
#define CSFR_SYSCON_PROTEN_LEN               _CSFR_UL(1)

/* CSFR_SYSCON_TPROTEN (rw) */
#define CSFR_SYSCON_TPROTEN_POS              _CSFR_UL(2)
#define CSFR_SYSCON_TPROTEN_LEN              _CSFR_UL(1)

/* CSFR_SYSCON_RES (r) */
#define CSFR_SYSCON_RES_POS                  _CSFR_UL(3)
#define CSFR_SYSCON_RES_LEN                  _CSFR_UL(29)

/* CSFR_CPU_ID_MOD_REV (r) */
#define CSFR_CPU_ID_MOD_REV_POS              _CSFR_UL(0)
#define CSFR_CPU_ID_MOD_REV_LEN              _CSFR_UL(8)

/* CSFR_CPU_ID_MOD_32B (r) */
#define CSFR_CPU_ID_MOD_32B_POS              _CSFR_UL(8)
#define CSFR_CPU_ID_MOD_32B_LEN              _CSFR_UL(8)

/* CSFR_CPU_ID_MOD (r) */
#define CSFR_CPU_ID_MOD_POS                  _CSFR_UL(16)
#define CSFR_CPU_ID_MOD_LEN                  _CSFR_UL(16)

/* CSFR_BIV_RES (r) */
#define CSFR_BIV_RES_POS                     _CSFR_UL(0)
#define CSFR_BIV_RES_LEN                     _CSFR_UL(1)

/* CSFR_BIV_BIV (rw) */
#define CSFR_BIV_BIV_POS                     _CSFR_UL(1)
#define CSFR_BIV_BIV_LEN                     _CSFR_UL(31)

/* CSFR_BTV_RES (r) */
#define CSFR_BTV_RES_POS                     _CSFR_UL(0)
#define CSFR_BTV_RES_LEN                     _CSFR_UL(1)

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

/* CSFR_ICR_RES (r) */
#define CSFR_ICR_RES_POS                     _CSFR_UL(9)
#define CSFR_ICR_RES_LEN                     _CSFR_UL(7)

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

/* CSFR_FCX_RES (r) */
#define CSFR_FCX_RES_POS                     _CSFR_UL(20)
#define CSFR_FCX_RES_LEN                     _CSFR_UL(12)

/* CSFR_LCX_LCXO (rw) */
#define CSFR_LCX_LCXO_POS                    _CSFR_UL(0)
#define CSFR_LCX_LCXO_LEN                    _CSFR_UL(16)

/* CSFR_LCX_LCXS (rw) */
#define CSFR_LCX_LCXS_POS                    _CSFR_UL(16)
#define CSFR_LCX_LCXS_LEN                    _CSFR_UL(4)

/* CSFR_LCX_RES (r) */
#define CSFR_LCX_RES_POS                     _CSFR_UL(20)
#define CSFR_LCX_RES_LEN                     _CSFR_UL(12)

#endif
