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
 * $Filename__:csfr_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:TC1724 Header files are added$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:02.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:csfr_1724$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     02.02.2011 RAT1COB
 *   TC1724 update
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CSFR_1724_H
#define _CSFR_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CSFR_UL(x) x
#else
    #define _CSFR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CSFR on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define CSFR_PCXI_MXCR_OFFSET		0xFE00
#define CSFR_PSW_MXCR_OFFSET		0xFE04
#define CSFR_PC_MXCR_OFFSET			0xFE08
#define CSFR_SYSCON_MXCR_OFFSET		0xFE14
#define CSFR_CPU_ID_MXCR_OFFSET		0xFE18
#define CSFR_BIV_MXCR_OFFSET		0xFE20
#define CSFR_BTV_MXCR_OFFSET		0xFE24
#define CSFR_ISP_MXCR_OFFSET		0xFE28
#define CSFR_ICR_MXCR_OFFSET		0xFE2C
#define CSFR_FCX_MXCR_OFFSET		0xFE38
#define CSFR_LCX_MXCR_OFFSET		0xFE3C
#define CSFR_COMPAT_MXCR_OFFSET		0x9400
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 COMPAT;              // [0xF7E19400] : Compatibility Control Register
    volatile uint32 RESERVED0[6783];     // [0xF7E19404...0xF7E1FDFF] : reserved space
    volatile uint32 PCXI;                // [0xF7E1FE00] : Previous Context Information Register
    volatile uint32 PSW;                 // [0xF7E1FE04] : Program Status Word
    volatile uint32 PC;                  // [0xF7E1FE08] : Program Counter
    volatile uint32 RESERVED1[2];        // [0xF7E1FE0C...0xF7E1FE13] : reserved space
    volatile uint32 SYSCON;              // [0xF7E1FE14] : System Configuration Register
    volatile uint32 CPU_ID;              // [0xF7E1FE18] : CPU Identification Register
    volatile uint32 RESERVED2[1];        // [0xF7E1FE1C...0xF7E1FE1F] : reserved space
    volatile uint32 BIV;                 // [0xF7E1FE20] : Base Interrupt Vector Table Pointer
    volatile uint32 BTV;                 // [0xF7E1FE24] : Base Trap Vector Table Pointer
    volatile uint32 ISP;                 // [0xF7E1FE28] : Interrupt Stack Pointer
    volatile uint32 ICR;                 // [0xF7E1FE2C] : Interrupt Control Register
    volatile uint32 RESERVED3[2];        // [0xF7E1FE30...0xF7E1FE37] : reserved space
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

/* CSFR_PCXI_UL (rw) */
#define CSFR_PCXI_UL_POS                     _CSFR_UL(22)
#define CSFR_PCXI_UL_LEN                     _CSFR_UL(1)

/* CSFR_PCXI_PIE (rw) */
#define CSFR_PCXI_PIE_POS                    _CSFR_UL(23)
#define CSFR_PCXI_PIE_LEN                    _CSFR_UL(1)

/* CSFR_PCXI_PCPN (rw) */
#define CSFR_PCXI_PCPN_POS                   _CSFR_UL(24)
#define CSFR_PCXI_PCPN_LEN                   _CSFR_UL(8)

/* CSFR_COMPAT_PIE (rw) */
#define CSFR_COMPAT_PIE_POS                  _CSFR_UL(0)
#define CSFR_COMPAT_PIE_LEN                  _CSFR_UL(1)

/* CSFR_COMPAT_DIE (rw) */
#define CSFR_COMPAT_DIE_POS                  _CSFR_UL(1)
#define CSFR_COMPAT_DIE_LEN                  _CSFR_UL(1)

/* CSFR_COMPAT_BP (rw) */
#define CSFR_COMPAT_BP_POS                   _CSFR_UL(2)
#define CSFR_COMPAT_BP_LEN                   _CSFR_UL(1)

/* CSFR_COMPAT_RM (rw) */
#define CSFR_COMPAT_RM_POS                   _CSFR_UL(3)
#define CSFR_COMPAT_RM_LEN                   _CSFR_UL(1)

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

/* CSFR_PSW_FU (rwh) */
#define CSFR_PSW_FU_POS                      _CSFR_UL(27)
#define CSFR_PSW_FU_LEN                      _CSFR_UL(1)

/* CSFR_PSW_FZ (rwh) */
#define CSFR_PSW_FZ_POS                      _CSFR_UL(28)
#define CSFR_PSW_FZ_LEN                      _CSFR_UL(1)

/* CSFR_PSW_FV (rwh) */
#define CSFR_PSW_FV_POS                      _CSFR_UL(29)
#define CSFR_PSW_FV_LEN                      _CSFR_UL(1)

/* CSFR_PSW_FI (rwh) */
#define CSFR_PSW_FI_POS                      _CSFR_UL(30)
#define CSFR_PSW_FI_LEN                      _CSFR_UL(1)

/* CSFR_PSW_FS (rwh) */
#define CSFR_PSW_FS_POS                      _CSFR_UL(31)
#define CSFR_PSW_FS_LEN                      _CSFR_UL(1)

/* CSFR_PC_PC (r) */
#define CSFR_PC_PC_POS                       _CSFR_UL(1)
#define CSFR_PC_PC_LEN                       _CSFR_UL(31)

/* CSFR_SYSCON_FCDSF (rwh) */
#define CSFR_SYSCON_FCDSF_POS                _CSFR_UL(0)
#define CSFR_SYSCON_FCDSF_LEN                _CSFR_UL(1)

/* CSFR_SYSCON_PROTEN (rw) */
#define CSFR_SYSCON_PROTEN_POS               _CSFR_UL(1)
#define CSFR_SYSCON_PROTEN_LEN               _CSFR_UL(1)

/* CSFR_CPU_ID_MOD_REV (rh) */
#define CSFR_CPU_ID_MOD_REV_POS              _CSFR_UL(0)
#define CSFR_CPU_ID_MOD_REV_LEN              _CSFR_UL(8)

/* CSFR_CPU_ID_MOD_32B (rh) */
#define CSFR_CPU_ID_MOD_32B_POS              _CSFR_UL(8)
#define CSFR_CPU_ID_MOD_32B_LEN              _CSFR_UL(8)

/* CSFR_CPU_ID_MOD (rh) */
#define CSFR_CPU_ID_MOD_POS                  _CSFR_UL(16)
#define CSFR_CPU_ID_MOD_LEN                  _CSFR_UL(16)

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
