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
 * $Filename__:rbcu_1796.h$ 
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
 * $Name______:rbcu_1796$ 
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
 *      File name: rbcu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _RBCU_1796_H
#define _RBCU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _RBCU_UL(x) x
#else
    #define _RBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module RBCU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0100000...0xF0100007] : reserved space
    volatile uint32 ID;                  // [0xF0100008] : RBCU Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF010000C...0xF010000F] : reserved space
    volatile uint32 CON;                 // [0xF0100010] : RBCU Control Register
    volatile uint32 RESERVED2[3];        // [0xF0100014...0xF010001F] : reserved space
    volatile uint32 ECON;                // [0xF0100020] : Error Control Capture Register
    volatile uint32 EADD;                // [0xF0100024] : Error Address Capture Register
    volatile uint32 EDAT;                // [0xF0100028] : Error Data Capture Register
    volatile uint32 RESERVED3[1];        // [0xF010002C...0xF010002F] : reserved space
    volatile uint32 DBCNTL;              // [0xF0100030] : Debug Control Register (OCDS)
    volatile uint32 DBGRNT;              // [0xF0100034] : Debug Grant Mask Register (OCDS)
    volatile uint32 DBADR1;              // [0xF0100038] : Debug Address1 Register (OCDS)
    volatile uint32 DBADR2;              // [0xF010003C] : Debug Address2 Register (OCDS)
    volatile uint32 DBBOS;               // [0xF0100040] : Debug Bus Operation Register (OCDS)
    volatile uint32 DBGNTT;              // [0xF0100044] : Debug Trapped Master Register (OCDS)
    volatile uint32 DBADRT;              // [0xF0100048] : Debug Trapped Address Register (OCDS)
    volatile uint32 DBBOST;              // [0xF010004C] : Debug Trapped Bus Operation Register (OCDS)
    volatile uint32 RESERVED4[43];       // [0xF0100050...0xF01000FB] : reserved space
    volatile uint32 SRC;                 // [0xF01000FC] : RBCU Service Request Control Register
} RBCU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern RBCU_RegMap_t RBCU __attribute__ ((asection (".bss.label_only")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* RBCU_CON_DBG (rw) */
#define RBCU_CON_DBG_POS               _RBCU_UL(16)
#define RBCU_CON_DBG_LEN               _RBCU_UL(1)

/* RBCU_CON_PSE (rw) */
#define RBCU_CON_PSE_POS               _RBCU_UL(18)
#define RBCU_CON_PSE_LEN               _RBCU_UL(1)

/* RBCU_CON_SPC (rw) */
#define RBCU_CON_SPC_POS               _RBCU_UL(24)
#define RBCU_CON_SPC_LEN               _RBCU_UL(8)

/* RBCU_CON_SPE (rw) */
#define RBCU_CON_SPE_POS               _RBCU_UL(19)
#define RBCU_CON_SPE_LEN               _RBCU_UL(1)

/* RBCU_CON_TOUT (rw) */
#define RBCU_CON_TOUT_POS              _RBCU_UL(0)
#define RBCU_CON_TOUT_LEN              _RBCU_UL(16)

/* RBCU_DBADR1_ADR1 (rw) */
#define RBCU_DBADR1_ADR1_POS           _RBCU_UL(0)
#define RBCU_DBADR1_ADR1_LEN           _RBCU_UL(32)

/* RBCU_DBADR2_ADR2 (rw) */
#define RBCU_DBADR2_ADR2_POS           _RBCU_UL(0)
#define RBCU_DBADR2_ADR2_LEN           _RBCU_UL(32)

/* RBCU_DBADRT_FPIADR (r) */
#define RBCU_DBADRT_FPIADR_POS         _RBCU_UL(0)
#define RBCU_DBADRT_FPIADR_LEN         _RBCU_UL(32)

/* RBCU_DBBOST_FPIACK (r) */
#define RBCU_DBBOST_FPIACK_POS         _RBCU_UL(5)
#define RBCU_DBBOST_FPIACK_LEN         _RBCU_UL(2)

/* RBCU_DBBOST_FPIOPC (r) */
#define RBCU_DBBOST_FPIOPC_POS         _RBCU_UL(0)
#define RBCU_DBBOST_FPIOPC_LEN         _RBCU_UL(4)

/* RBCU_DBBOST_FPIOPS (r) */
#define RBCU_DBBOST_FPIOPS_POS         _RBCU_UL(11)
#define RBCU_DBBOST_FPIOPS_LEN         _RBCU_UL(1)

/* RBCU_DBBOST_FPIRD (r) */
#define RBCU_DBBOST_FPIRD_POS          _RBCU_UL(12)
#define RBCU_DBBOST_FPIRD_LEN          _RBCU_UL(1)

/* RBCU_DBBOST_FPIRDY (r) */
#define RBCU_DBBOST_FPIRDY_POS         _RBCU_UL(7)
#define RBCU_DBBOST_FPIRDY_LEN         _RBCU_UL(1)

/* RBCU_DBBOST_FPIRST (r) */
#define RBCU_DBBOST_FPIRST_POS         _RBCU_UL(9)
#define RBCU_DBBOST_FPIRST_LEN         _RBCU_UL(2)

/* RBCU_DBBOST_FPISVM (r) */
#define RBCU_DBBOST_FPISVM_POS         _RBCU_UL(4)
#define RBCU_DBBOST_FPISVM_LEN         _RBCU_UL(1)

/* RBCU_DBBOST_FPITAG (r) */
#define RBCU_DBBOST_FPITAG_POS         _RBCU_UL(16)
#define RBCU_DBBOST_FPITAG_LEN         _RBCU_UL(4)

/* RBCU_DBBOST_FPIWR (r) */
#define RBCU_DBBOST_FPIWR_POS          _RBCU_UL(8)
#define RBCU_DBBOST_FPIWR_LEN          _RBCU_UL(1)

/* RBCU_DBBOS_OPC (rw) */
#define RBCU_DBBOS_OPC_POS             _RBCU_UL(0)
#define RBCU_DBBOS_OPC_LEN             _RBCU_UL(4)

/* RBCU_DBBOS_RD (rw) */
#define RBCU_DBBOS_RD_POS              _RBCU_UL(12)
#define RBCU_DBBOS_RD_LEN              _RBCU_UL(1)

/* RBCU_DBBOS_SVM (rw) */
#define RBCU_DBBOS_SVM_POS             _RBCU_UL(4)
#define RBCU_DBBOS_SVM_LEN             _RBCU_UL(1)

/* RBCU_DBBOS_WR (rw) */
#define RBCU_DBBOS_WR_POS              _RBCU_UL(8)
#define RBCU_DBBOS_WR_LEN              _RBCU_UL(1)

/* RBCU_DBCNTL_CONCOM (rw) */
#define RBCU_DBCNTL_CONCOM_POS         _RBCU_UL(12)
#define RBCU_DBCNTL_CONCOM_LEN         _RBCU_UL(3)

/* RBCU_DBCNTL_EO (r) */
#define RBCU_DBCNTL_EO_POS             _RBCU_UL(0)
#define RBCU_DBCNTL_EO_LEN             _RBCU_UL(1)

/* RBCU_DBCNTL_OA (r) */
#define RBCU_DBCNTL_OA_POS             _RBCU_UL(1)
#define RBCU_DBCNTL_OA_LEN             _RBCU_UL(1)

/* RBCU_DBCNTL_ONA1 (rw) */
#define RBCU_DBCNTL_ONA1_POS           _RBCU_UL(20)
#define RBCU_DBCNTL_ONA1_LEN           _RBCU_UL(2)

/* RBCU_DBCNTL_ONA2 (rw) */
#define RBCU_DBCNTL_ONA2_POS           _RBCU_UL(24)
#define RBCU_DBCNTL_ONA2_LEN           _RBCU_UL(2)

/* RBCU_DBCNTL_ONBOS (rw) */
#define RBCU_DBCNTL_ONBOS_POS          _RBCU_UL(28)
#define RBCU_DBCNTL_ONBOS_LEN          _RBCU_UL(4)

/* RBCU_DBCNTL_ONG (rw) */
#define RBCU_DBCNTL_ONG_POS            _RBCU_UL(16)
#define RBCU_DBCNTL_ONG_LEN            _RBCU_UL(1)

/* RBCU_DBCNTL_RA (w) */
#define RBCU_DBCNTL_RA_POS             _RBCU_UL(4)
#define RBCU_DBCNTL_RA_LEN             _RBCU_UL(1)

/* RBCU_DBGNTT_DMALAST (r) */
#define RBCU_DBGNTT_DMALAST_POS        _RBCU_UL(16)
#define RBCU_DBGNTT_DMALAST_LEN        _RBCU_UL(16)

/* RBCU_DBGNTT_FPIGNT (r) */
#define RBCU_DBGNTT_FPIGNT_POS         _RBCU_UL(0)
#define RBCU_DBGNTT_FPIGNT_LEN         _RBCU_UL(16)

/* RBCU_DBGRNT_FPIGRNT (rw) */
#define RBCU_DBGRNT_FPIGRNT_POS        _RBCU_UL(0)
#define RBCU_DBGRNT_FPIGRNT_LEN        _RBCU_UL(16)

/* RBCU_EADD_FPIADR (rwh) */
#define RBCU_EADD_FPIADR_POS           _RBCU_UL(0)
#define RBCU_EADD_FPIADR_LEN           _RBCU_UL(32)

/* RBCU_ECON_ABT (rwh) */
#define RBCU_ECON_ABT_POS              _RBCU_UL(18)
#define RBCU_ECON_ABT_LEN              _RBCU_UL(1)

/* RBCU_ECON_ACK (rwh) */
#define RBCU_ECON_ACK_POS              _RBCU_UL(19)
#define RBCU_ECON_ACK_LEN              _RBCU_UL(2)

/* RBCU_ECON_ERRCNT (rwh) */
#define RBCU_ECON_ERRCNT_POS           _RBCU_UL(0)
#define RBCU_ECON_ERRCNT_LEN           _RBCU_UL(16)

/* RBCU_ECON_OPC (rwh) */
#define RBCU_ECON_OPC_POS              _RBCU_UL(28)
#define RBCU_ECON_OPC_LEN              _RBCU_UL(4)

/* RBCU_ECON_RDN (rwh) */
#define RBCU_ECON_RDN_POS              _RBCU_UL(23)
#define RBCU_ECON_RDN_LEN              _RBCU_UL(1)

/* RBCU_ECON_RDY (rwh) */
#define RBCU_ECON_RDY_POS              _RBCU_UL(17)
#define RBCU_ECON_RDY_LEN              _RBCU_UL(1)

/* RBCU_ECON_SVM (rwh) */
#define RBCU_ECON_SVM_POS              _RBCU_UL(21)
#define RBCU_ECON_SVM_LEN              _RBCU_UL(1)

/* RBCU_ECON_TAG (rwh) */
#define RBCU_ECON_TAG_POS              _RBCU_UL(24)
#define RBCU_ECON_TAG_LEN              _RBCU_UL(4)

/* RBCU_ECON_TOUT (rwh) */
#define RBCU_ECON_TOUT_POS             _RBCU_UL(16)
#define RBCU_ECON_TOUT_LEN             _RBCU_UL(1)

/* RBCU_ECON_WRN (rwh) */
#define RBCU_ECON_WRN_POS              _RBCU_UL(22)
#define RBCU_ECON_WRN_LEN              _RBCU_UL(1)

/* RBCU_EDAT_FPIDAT (rwh) */
#define RBCU_EDAT_FPIDAT_POS           _RBCU_UL(0)
#define RBCU_EDAT_FPIDAT_LEN           _RBCU_UL(32)

/* RBCU_ID_MOD_NUMBER (r) */
#define RBCU_ID_MOD_NUMBER_POS         _RBCU_UL(8)
#define RBCU_ID_MOD_NUMBER_LEN         _RBCU_UL(8)

/* RBCU_ID_MOD_REV (r) */
#define RBCU_ID_MOD_REV_POS            _RBCU_UL(0)
#define RBCU_ID_MOD_REV_LEN            _RBCU_UL(8)

/* RBCU_SRC_CLRR (w) */
#define RBCU_SRC_CLRR_POS              _RBCU_UL(14)
#define RBCU_SRC_CLRR_LEN              _RBCU_UL(1)

/* RBCU_SRC_SETR (w) */
#define RBCU_SRC_SETR_POS              _RBCU_UL(15)
#define RBCU_SRC_SETR_LEN              _RBCU_UL(1)

/* RBCU_SRC_SRE (rw) */
#define RBCU_SRC_SRE_POS               _RBCU_UL(12)
#define RBCU_SRC_SRE_LEN               _RBCU_UL(1)

/* RBCU_SRC_SRPN (rw) */
#define RBCU_SRC_SRPN_POS              _RBCU_UL(0)
#define RBCU_SRC_SRPN_LEN              _RBCU_UL(8)

/* RBCU_SRC_SRR (rh) */
#define RBCU_SRC_SRR_POS               _RBCU_UL(13)
#define RBCU_SRC_SRR_LEN               _RBCU_UL(1)

/* RBCU_SRC_TOS (rw) */
#define RBCU_SRC_TOS_POS               _RBCU_UL(10)
#define RBCU_SRC_TOS_LEN               _RBCU_UL(1)

#endif
