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
 * $Filename__:pcp_1387.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:16.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:pcp_1387$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     16.04.2010 AHT2FE
 *   Update TC1387 header files
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pcp_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
#ifndef _PCP_1387_H
#define _PCP_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PCP_UL(x) x
#else
    #define _PCP_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PCP on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0043F00] : PCP Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0043F04...0xF0043F07] : reserved space
    volatile uint32 ID;                  // [0xF0043F08] : PCP Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF0043F0C...0xF0043F0F] : reserved space
    volatile uint32 CS;                  // [0xF0043F10] : PCP Control/Status Register
    volatile uint32 ES;                  // [0xF0043F14] : PCP Error/Debug Status Register
    volatile uint32 RESERVED2[2];        // [0xF0043F18...0xF0043F1F] : reserved space
    volatile uint32 ICR;                 // [0xF0043F20] : PCP Interrupt Control Register
    volatile uint32 ITR;                 // [0xF0043F24] : PCP Interrupt Threshold Control Register
    volatile uint32 ICON;                // [0xF0043F28] : PCP Interrupt Configuration Register
    volatile uint32 SSR;                 // [0xF0043F2C] : PCP Stall Status Register
    volatile uint32 RESERVED3[4];        // [0xF0043F30...0xF0043F3F] : reserved space
    volatile uint32 SMACON;              // [0xF0043F40] : SIST Mode Access Control Register
    volatile uint32 RESERVED4[3];        // [0xF0043F44...0xF0043F4F] : reserved space
    volatile uint32 MIECON;              // [0xF0043F50] : SIST Mode Access Control Register
    volatile uint32 MIECON2;             // [0xF0043F54] : SIST Mode Access Control 2 Register
    volatile uint32 MIESTATP;            // [0xF0043F58] : Memory Integrity Error Status Register for PRAM
    volatile uint32 MIESTATC;            // [0xF0043F5C] : Memory Integrity Error Status Register for CMEM
    volatile uint32 RESERVED5[4];        // [0xF0043F60...0xF0043F6F] : reserved space
    volatile uint32 RPROT;               // [0xF0043F70] : Register Protection Register
    volatile uint32 CPROT;               // [0xF0043F74] : CMEM Protection Register
    volatile uint32 PPROT;               // [0xF0043F78] : PRAM Protection Register
    volatile uint32 FWWIN;               // [0xF0043F7C] : FPI Write Window Register
    volatile uint32 RESERVED6[20];       // [0xF0043F80...0xF0043FCF] : reserved space
    volatile uint32 SRC11;               // [0xF0043FD0] : PCP Service Request Control Register 11
    volatile uint32 SRC10;               // [0xF0043FD4] : PCP Service Request Control Register 10
    volatile uint32 SRC9;                // [0xF0043FD8] : PCP Service Request Control Register 9
    volatile uint32 SRC8;                // [0xF0043FDC] : PCP Service Request Control Register 8
    volatile uint32 SRC7;                // [0xF0043FE0] : PCP Service Request Control Register 7
    volatile uint32 SRC6;                // [0xF0043FE4] : PCP Service Request Control Register 6
    volatile uint32 SRC5;                // [0xF0043FE8] : PCP Service Request Control Register 5
    volatile uint32 SRC4;                // [0xF0043FEC] : PCP Service Request Control Register 4
    volatile uint32 SRC3;                // [0xF0043FF0] : PCP Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF0043FF4] : PCP Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF0043FF8] : PCP Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0043FFC] : PCP Service Request Control Register 0
} PCP_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PCP_RegMap_t PCP __attribute__ ((asection (".bss.label_only")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/* the _NDT macros for integer constants with No Data Type (NDT) suffix are required because these
   macros will also be used in PCP assembler code which does not support integer constants with
   data type suffixes */

/* PCP_R7_IEN (rwh) */
#define PCP_R7_IEN_POS_NDT          5
#define PCP_R7_IEN_POS              _PCP_UL(5)
#define PCP_R7_IEN_LEN              _PCP_UL(1)

/* PCP_R7_CEN (rwh) */
#define PCP_R7_CEN_POS_NDT          6
#define PCP_R7_CEN_POS              _PCP_UL(6)
#define PCP_R7_CEN_LEN              _PCP_UL(1)

/* PCP_R7_DPTR (rw) */
#define PCP_R7_DPTR_POS_NDT         8
#define PCP_R7_DPTR_POS             _PCP_UL(8)
#define PCP_R7_DPTR_LEN             _PCP_UL(8)

/* PCP_R7_PC (rw in initialization of CSA only) */
#define PCP_R7_PC_POS               _PCP_UL(16)
#define PCP_R7_PC_LEN               _PCP_UL(16)


/* PCP_R6_CNT1 (rwh) */
#define PCP_R6_CNT1_POS             _PCP_UL(0)
#define PCP_R6_CNT1_LEN             _PCP_UL(12)

/* PCP_R6_TOS (rw) */
#define PCP_R6_TOS_POS              _PCP_UL(14)
#define PCP_R6_TOS_LEN              _PCP_UL(2)

/* PCP_R6_SRPN (rw) */
#define PCP_R6_SRPN_POS             _PCP_UL(16)
#define PCP_R6_SRPN_LEN             _PCP_UL(8)

/* PCP_R6_CPPN (rw) */
#define PCP_R6_CPPN_POS_NDT         24
#define PCP_R6_CPPN_POS             _PCP_UL(24)
#define PCP_R6_CPPN_LEN             _PCP_UL(8)
#define PCP_R6_CPPN_MSK             (((_PCP_UL(1) << PCP_R6_CPPN_LEN) - _PCP_UL(1)) << PCP_R6_CPPN_POS)


/* Name of bitfield has changed from ARBCYC to PARBCYC in       */
/* TC17x7 and new version of TC17x6 specifications.             */
/* For backward compatibility, map old #define to new one.      */
/* PCP_ICR_ARBCYC (rw) */
#define PCP_ICR_ARBCYC_POS             PCP_ICR_PARBCYC_POS
#define PCP_ICR_ARBCYC_LEN             PCP_ICR_PARBCYC_LEN

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

/* PCP_ID_MOD_NUMBER (r) */
#define PCP_ID_MOD_NUMBER_POS                _PCP_UL(16)
#define PCP_ID_MOD_NUMBER_LEN                _PCP_UL(16)

/* PCP_ID_MOD_REV (r) */
#define PCP_ID_MOD_REV_POS                   _PCP_UL(0)
#define PCP_ID_MOD_REV_LEN                   _PCP_UL(8)

/* PCP_ID_MOD_TYPE (r) */
#define PCP_ID_MOD_TYPE_POS                  _PCP_UL(8)
#define PCP_ID_MOD_TYPE_LEN                  _PCP_UL(8)

/* PCP_CLC_PCGDIS (rw) */
#define PCP_CLC_PCGDIS_POS                   _PCP_UL(15)
#define PCP_CLC_PCGDIS_LEN                   _PCP_UL(1)

/* PCP_ID_REVNUM (r) */
#define PCP_ID_REVNUM_POS                    _PCP_UL(0)
#define PCP_ID_REVNUM_LEN                    _PCP_UL(8)

/* PCP_ID_ID32BIT (r) */
#define PCP_ID_ID32BIT_POS                   _PCP_UL(8)
#define PCP_ID_ID32BIT_LEN                   _PCP_UL(8)

/* PCP_ID_MODNUM (r) */
#define PCP_ID_MODNUM_POS                    _PCP_UL(16)
#define PCP_ID_MODNUM_LEN                    _PCP_UL(16)

/* PCP_CS_EN (rw) */
#define PCP_CS_EN_POS                        _PCP_UL(0)
#define PCP_CS_EN_LEN                        _PCP_UL(1)

/* PCP_CS_RS (rh) */
#define PCP_CS_RS_POS                        _PCP_UL(2)
#define PCP_CS_RS_LEN                        _PCP_UL(1)

/* PCP_CS_RCB (rw) */
#define PCP_CS_RCB_POS                       _PCP_UL(4)
#define PCP_CS_RCB_LEN                       _PCP_UL(1)

/* PCP_CS_EIE (rw) */
#define PCP_CS_EIE_POS                       _PCP_UL(5)
#define PCP_CS_EIE_LEN                       _PCP_UL(1)

/* PCP_CS_CS (rw) */
#define PCP_CS_CS_POS                        _PCP_UL(6)
#define PCP_CS_CS_LEN                        _PCP_UL(2)

/* PCP_CS_PPE (rw) */
#define PCP_CS_PPE_POS                       _PCP_UL(8)
#define PCP_CS_PPE_LEN                       _PCP_UL(1)

/* PCP_CS_PPS (rw) */
#define PCP_CS_PPS_POS                       _PCP_UL(9)
#define PCP_CS_PPS_LEN                       _PCP_UL(7)

/* PCP_CS_CWE (rw) */
#define PCP_CS_CWE_POS                       _PCP_UL(16)
#define PCP_CS_CWE_LEN                       _PCP_UL(1)

/* PCP_CS_CWT (rw) */
#define PCP_CS_CWT_POS                       _PCP_UL(17)
#define PCP_CS_CWT_LEN                       _PCP_UL(7)

/* PCP_CS_ESR (rw) */
#define PCP_CS_ESR_POS                       _PCP_UL(24)
#define PCP_CS_ESR_LEN                       _PCP_UL(8)

/* PCP_ES_BER (rh) */
#define PCP_ES_BER_POS                       _PCP_UL(0)
#define PCP_ES_BER_LEN                       _PCP_UL(1)

/* PCP_ES_IOP (rh) */
#define PCP_ES_IOP_POS                       _PCP_UL(1)
#define PCP_ES_IOP_LEN                       _PCP_UL(1)

/* PCP_ES_DCR (rh) */
#define PCP_ES_DCR_POS                       _PCP_UL(2)
#define PCP_ES_DCR_LEN                       _PCP_UL(1)

/* PCP_ES_IAE (rh) */
#define PCP_ES_IAE_POS                       _PCP_UL(3)
#define PCP_ES_IAE_LEN                       _PCP_UL(1)

/* PCP_ES_DBE (rh) */
#define PCP_ES_DBE_POS                       _PCP_UL(4)
#define PCP_ES_DBE_LEN                       _PCP_UL(1)

/* PCP_ES_ME (rh) */
#define PCP_ES_ME_POS                        _PCP_UL(5)
#define PCP_ES_ME_LEN                        _PCP_UL(1)

/* PCP_ES_CWD (rh) */
#define PCP_ES_CWD_POS                       _PCP_UL(6)
#define PCP_ES_CWD_LEN                       _PCP_UL(1)

/* PCP_ES_PPC (rh) */
#define PCP_ES_PPC_POS                       _PCP_UL(7)
#define PCP_ES_PPC_LEN                       _PCP_UL(1)

/* PCP_ES_EPN (rh) */
#define PCP_ES_EPN_POS                       _PCP_UL(8)
#define PCP_ES_EPN_LEN                       _PCP_UL(8)

/* PCP_ES_EPC (rh) */
#define PCP_ES_EPC_POS                       _PCP_UL(16)
#define PCP_ES_EPC_LEN                       _PCP_UL(16)

/* PCP_ICR_CPPN (rh) */
#define PCP_ICR_CPPN_POS                     _PCP_UL(0)
#define PCP_ICR_CPPN_LEN                     _PCP_UL(8)

/* PCP_ICR_IE (rh) */
#define PCP_ICR_IE_POS                       _PCP_UL(8)
#define PCP_ICR_IE_LEN                       _PCP_UL(1)

/* PCP_ICR_PIPN (rh) */
#define PCP_ICR_PIPN_POS                     _PCP_UL(16)
#define PCP_ICR_PIPN_LEN                     _PCP_UL(8)

/* PCP_ICR_PARBCYC (rw) */
#define PCP_ICR_PARBCYC_POS                  _PCP_UL(24)
#define PCP_ICR_PARBCYC_LEN                  _PCP_UL(2)

/* PCP_ICR_PONECYC (rw) */
#define PCP_ICR_PONECYC_POS                  _PCP_UL(26)
#define PCP_ICR_PONECYC_LEN                  _PCP_UL(1)

/* PCP_ITR_ITP (rw) */
#define PCP_ITR_ITP_POS                      _PCP_UL(0)
#define PCP_ITR_ITP_LEN                      _PCP_UL(8)

/* PCP_ITR_ITL (rw) */
#define PCP_ITR_ITL_POS                      _PCP_UL(16)
#define PCP_ITR_ITL_LEN                      _PCP_UL(4)

/* PCP_ICON_P0T (r) */
#define PCP_ICON_P0T_POS                     _PCP_UL(0)
#define PCP_ICON_P0T_LEN                     _PCP_UL(2)

/* PCP_ICON_P1T (r) */
#define PCP_ICON_P1T_POS                     _PCP_UL(2)
#define PCP_ICON_P1T_LEN                     _PCP_UL(2)

/* PCP_ICON_P2T (r) */
#define PCP_ICON_P2T_POS                     _PCP_UL(4)
#define PCP_ICON_P2T_LEN                     _PCP_UL(2)

/* PCP_ICON_P3T (r) */
#define PCP_ICON_P3T_POS                     _PCP_UL(6)
#define PCP_ICON_P3T_LEN                     _PCP_UL(2)

/* PCP_ICON_IP0E (r) */
#define PCP_ICON_IP0E_POS                    _PCP_UL(8)
#define PCP_ICON_IP0E_LEN                    _PCP_UL(1)

/* PCP_ICON_IP1E (r) */
#define PCP_ICON_IP1E_POS                    _PCP_UL(9)
#define PCP_ICON_IP1E_LEN                    _PCP_UL(1)

/* PCP_ICON_IP2E (r) */
#define PCP_ICON_IP2E_POS                    _PCP_UL(10)
#define PCP_ICON_IP2E_LEN                    _PCP_UL(1)

/* PCP_ICON_IP3E (r) */
#define PCP_ICON_IP3E_POS                    _PCP_UL(11)
#define PCP_ICON_IP3E_LEN                    _PCP_UL(1)

/* PCP_SSR_SSRN (rh) */
#define PCP_SSR_SSRN_POS                     _PCP_UL(0)
#define PCP_SSR_SSRN_LEN                     _PCP_UL(8)

/* PCP_SSR_STOS (rh) */
#define PCP_SSR_STOS_POS                     _PCP_UL(8)
#define PCP_SSR_STOS_LEN                     _PCP_UL(2)

/* PCP_SSR_ST (rh) */
#define PCP_SSR_ST_POS                       _PCP_UL(15)
#define PCP_SSR_ST_LEN                       _PCP_UL(1)

/* PCP_SSR_SCHN (rh) */
#define PCP_SSR_SCHN_POS                     _PCP_UL(16)
#define PCP_SSR_SCHN_LEN                     _PCP_UL(8)

/* PCP_SMACON_PRAM (rw) */
#define PCP_SMACON_PRAM_POS                  _PCP_UL(0)
#define PCP_SMACON_PRAM_LEN                  _PCP_UL(2)

/* PCP_SMACON_CMEM (rw) */
#define PCP_SMACON_CMEM_POS                  _PCP_UL(2)
#define PCP_SMACON_CMEM_LEN                  _PCP_UL(2)

/* PCP_MIECON_PIEE (rw) */
#define PCP_MIECON_PIEE_POS                  _PCP_UL(0)
#define PCP_MIECON_PIEE_LEN                  _PCP_UL(1)

/* PCP_MIECON_CIEE (rw) */
#define PCP_MIECON_CIEE_POS                  _PCP_UL(1)
#define PCP_MIECON_CIEE_LEN                  _PCP_UL(1)

/* PCP_MIECON2_PSECE (rw) */
#define PCP_MIECON2_PSECE_POS                _PCP_UL(0)
#define PCP_MIECON2_PSECE_LEN                _PCP_UL(1)

/* PCP_MIECON2_CSECE (rw) */
#define PCP_MIECON2_CSECE_POS                _PCP_UL(1)
#define PCP_MIECON2_CSECE_LEN                _PCP_UL(1)

/* PCP_MIESTATP_ADDR (r) */
#define PCP_MIESTATP_ADDR_POS                _PCP_UL(0)
#define PCP_MIESTATP_ADDR_LEN                _PCP_UL(14)

/* PCP_MIESTATP_CLRRQ (w) */
#define PCP_MIESTATP_CLRRQ_POS               _PCP_UL(30)
#define PCP_MIESTATP_CLRRQ_LEN               _PCP_UL(1)

/* PCP_MIESTATP_ERR (r) */
#define PCP_MIESTATP_ERR_POS                 _PCP_UL(31)
#define PCP_MIESTATP_ERR_LEN                 _PCP_UL(1)

/* PCP_MIESTATC_ADDR (r) */
#define PCP_MIESTATC_ADDR_POS                _PCP_UL(0)
#define PCP_MIESTATC_ADDR_LEN                _PCP_UL(15)

/* PCP_MIESTATC_CLRRQ (w) */
#define PCP_MIESTATC_CLRRQ_POS               _PCP_UL(30)
#define PCP_MIESTATC_CLRRQ_LEN               _PCP_UL(1)

/* PCP_MIESTATC_ERR (r) */
#define PCP_MIESTATC_ERR_POS                 _PCP_UL(31)
#define PCP_MIESTATC_ERR_LEN                 _PCP_UL(1)

/* PCP_RPROT_EN (rw) */
#define PCP_RPROT_EN_POS                     _PCP_UL(31)
#define PCP_RPROT_EN_LEN                     _PCP_UL(1)

/* PCP_CPROT_EN (rw) */
#define PCP_CPROT_EN_POS                     _PCP_UL(31)
#define PCP_CPROT_EN_LEN                     _PCP_UL(1)

/* PCP_PPROT_FBASE (rw) */
#define PCP_PPROT_FBASE_POS                  _PCP_UL(0)
#define PCP_PPROT_FBASE_LEN                  _PCP_UL(8)

/* PCP_PPROT_PSIZE (rw) */
#define PCP_PPROT_PSIZE_POS                  _PCP_UL(8)
#define PCP_PPROT_PSIZE_LEN                  _PCP_UL(8)

/* PCP_PPROT_PTHRES (rw) */
#define PCP_PPROT_PTHRES_POS                 _PCP_UL(16)
#define PCP_PPROT_PTHRES_LEN                 _PCP_UL(8)

/* PCP_PPROT_PCAT (rw) */
#define PCP_PPROT_PCAT_POS                   _PCP_UL(24)
#define PCP_PPROT_PCAT_LEN                   _PCP_UL(1)

/* PCP_PPROT_ENI (rw) */
#define PCP_PPROT_ENI_POS                    _PCP_UL(30)
#define PCP_PPROT_ENI_LEN                    _PCP_UL(1)

/* PCP_PPROT_ENF (rw) */
#define PCP_PPROT_ENF_POS                    _PCP_UL(31)
#define PCP_PPROT_ENF_LEN                    _PCP_UL(1)

/* PCP_FWWIN_BASE (rw) */
#define PCP_FWWIN_BASE_POS                   _PCP_UL(0)
#define PCP_FWWIN_BASE_LEN                   _PCP_UL(24)

/* PCP_FWWIN_SIZE (rw) */
#define PCP_FWWIN_SIZE_POS                   _PCP_UL(24)
#define PCP_FWWIN_SIZE_LEN                   _PCP_UL(5)

/* PCP_FWWIN_EX (rw) */
#define PCP_FWWIN_EX_POS                     _PCP_UL(30)
#define PCP_FWWIN_EX_LEN                     _PCP_UL(1)

/* PCP_FWWIN_ENF (rw) */
#define PCP_FWWIN_ENF_POS                    _PCP_UL(31)
#define PCP_FWWIN_ENF_LEN                    _PCP_UL(1)

/* PCP_SRC11_SRPN (rh) */
#define PCP_SRC11_SRPN_POS                   _PCP_UL(0)
#define PCP_SRC11_SRPN_LEN                   _PCP_UL(8)

/* PCP_SRC11_TOS (r) */
#define PCP_SRC11_TOS_POS                    _PCP_UL(10)
#define PCP_SRC11_TOS_LEN                    _PCP_UL(2)

/* PCP_SRC11_SRE (r) */
#define PCP_SRC11_SRE_POS                    _PCP_UL(12)
#define PCP_SRC11_SRE_LEN                    _PCP_UL(1)

/* PCP_SRC11_SRR (rh) */
#define PCP_SRC11_SRR_POS                    _PCP_UL(13)
#define PCP_SRC11_SRR_LEN                    _PCP_UL(1)

/* PCP_SRC11_SRCN (rh) */
#define PCP_SRC11_SRCN_POS                   _PCP_UL(16)
#define PCP_SRC11_SRCN_LEN                   _PCP_UL(8)

/* PCP_SRC11_RRQ (rh) */
#define PCP_SRC11_RRQ_POS                    _PCP_UL(28)
#define PCP_SRC11_RRQ_LEN                    _PCP_UL(1)

/* PCP_SRC10_SRPN (rh) */
#define PCP_SRC10_SRPN_POS                   _PCP_UL(0)
#define PCP_SRC10_SRPN_LEN                   _PCP_UL(8)

/* PCP_SRC10_TOS (r) */
#define PCP_SRC10_TOS_POS                    _PCP_UL(10)
#define PCP_SRC10_TOS_LEN                    _PCP_UL(2)

/* PCP_SRC10_SRE (r) */
#define PCP_SRC10_SRE_POS                    _PCP_UL(12)
#define PCP_SRC10_SRE_LEN                    _PCP_UL(1)

/* PCP_SRC10_SRR (rh) */
#define PCP_SRC10_SRR_POS                    _PCP_UL(13)
#define PCP_SRC10_SRR_LEN                    _PCP_UL(1)

/* PCP_SRC10_SRCN (rh) */
#define PCP_SRC10_SRCN_POS                   _PCP_UL(16)
#define PCP_SRC10_SRCN_LEN                   _PCP_UL(8)

/* PCP_SRC10_RRQ (rh) */
#define PCP_SRC10_RRQ_POS                    _PCP_UL(28)
#define PCP_SRC10_RRQ_LEN                    _PCP_UL(1)

/* PCP_SRC9_SRPN (rh) */
#define PCP_SRC9_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC9_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC9_TOS (r) */
#define PCP_SRC9_TOS_POS                     _PCP_UL(10)
#define PCP_SRC9_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC9_SRE (r) */
#define PCP_SRC9_SRE_POS                     _PCP_UL(12)
#define PCP_SRC9_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC9_SRR (rh) */
#define PCP_SRC9_SRR_POS                     _PCP_UL(13)
#define PCP_SRC9_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC9_SRCN (rh) */
#define PCP_SRC9_SRCN_POS                    _PCP_UL(16)
#define PCP_SRC9_SRCN_LEN                    _PCP_UL(8)

/* PCP_SRC9_RRQ (rh) */
#define PCP_SRC9_RRQ_POS                     _PCP_UL(28)
#define PCP_SRC9_RRQ_LEN                     _PCP_UL(1)

/* PCP_SRC8_SRPN (rh) */
#define PCP_SRC8_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC8_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC8_TOS (rw) */
#define PCP_SRC8_TOS_POS                     _PCP_UL(10)
#define PCP_SRC8_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC8_SRE (r) */
#define PCP_SRC8_SRE_POS                     _PCP_UL(12)
#define PCP_SRC8_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC8_SRR (rh) */
#define PCP_SRC8_SRR_POS                     _PCP_UL(13)
#define PCP_SRC8_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC7_SRPN (rh) */
#define PCP_SRC7_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC7_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC7_TOS (rw) */
#define PCP_SRC7_TOS_POS                     _PCP_UL(10)
#define PCP_SRC7_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC7_SRE (r) */
#define PCP_SRC7_SRE_POS                     _PCP_UL(12)
#define PCP_SRC7_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC7_SRR (rh) */
#define PCP_SRC7_SRR_POS                     _PCP_UL(13)
#define PCP_SRC7_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC6_SRPN (rh) */
#define PCP_SRC6_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC6_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC6_TOS (rw) */
#define PCP_SRC6_TOS_POS                     _PCP_UL(10)
#define PCP_SRC6_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC6_SRE (r) */
#define PCP_SRC6_SRE_POS                     _PCP_UL(12)
#define PCP_SRC6_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC6_SRR (rh) */
#define PCP_SRC6_SRR_POS                     _PCP_UL(13)
#define PCP_SRC6_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC5_SRPN (rh) */
#define PCP_SRC5_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC5_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC5_TOS (rw) */
#define PCP_SRC5_TOS_POS                     _PCP_UL(10)
#define PCP_SRC5_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC5_SRE (r) */
#define PCP_SRC5_SRE_POS                     _PCP_UL(12)
#define PCP_SRC5_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC5_SRR (rh) */
#define PCP_SRC5_SRR_POS                     _PCP_UL(13)
#define PCP_SRC5_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC4_SRPN (rh) */
#define PCP_SRC4_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC4_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC4_TOS (rw) */
#define PCP_SRC4_TOS_POS                     _PCP_UL(10)
#define PCP_SRC4_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC4_SRE (r) */
#define PCP_SRC4_SRE_POS                     _PCP_UL(12)
#define PCP_SRC4_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC4_SRR (rh) */
#define PCP_SRC4_SRR_POS                     _PCP_UL(13)
#define PCP_SRC4_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC3_SRPN (rh) */
#define PCP_SRC3_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC3_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC3_TOS (r) */
#define PCP_SRC3_TOS_POS                     _PCP_UL(10)
#define PCP_SRC3_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC3_SRE (r) */
#define PCP_SRC3_SRE_POS                     _PCP_UL(12)
#define PCP_SRC3_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC3_SRR (rh) */
#define PCP_SRC3_SRR_POS                     _PCP_UL(13)
#define PCP_SRC3_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC2_SRPN (rh) */
#define PCP_SRC2_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC2_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC2_TOS (r) */
#define PCP_SRC2_TOS_POS                     _PCP_UL(10)
#define PCP_SRC2_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC2_SRE (r) */
#define PCP_SRC2_SRE_POS                     _PCP_UL(12)
#define PCP_SRC2_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC2_SRR (rh) */
#define PCP_SRC2_SRR_POS                     _PCP_UL(13)
#define PCP_SRC2_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC1_SRPN (rh) */
#define PCP_SRC1_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC1_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC1_TOS (r) */
#define PCP_SRC1_TOS_POS                     _PCP_UL(10)
#define PCP_SRC1_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC1_SRE (r) */
#define PCP_SRC1_SRE_POS                     _PCP_UL(12)
#define PCP_SRC1_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC1_SRR (rh) */
#define PCP_SRC1_SRR_POS                     _PCP_UL(13)
#define PCP_SRC1_SRR_LEN                     _PCP_UL(1)

/* PCP_SRC0_SRPN (rh) */
#define PCP_SRC0_SRPN_POS                    _PCP_UL(0)
#define PCP_SRC0_SRPN_LEN                    _PCP_UL(8)

/* PCP_SRC0_TOS (r) */
#define PCP_SRC0_TOS_POS                     _PCP_UL(10)
#define PCP_SRC0_TOS_LEN                     _PCP_UL(2)

/* PCP_SRC0_SRE (r) */
#define PCP_SRC0_SRE_POS                     _PCP_UL(12)
#define PCP_SRC0_SRE_LEN                     _PCP_UL(1)

/* PCP_SRC0_SRR (rh) */
#define PCP_SRC0_SRR_POS                     _PCP_UL(13)
#define PCP_SRC0_SRR_LEN                     _PCP_UL(1)

#endif
