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
 * $Filename__:sbcu_1766.h$ 
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
 * $Name______:sbcu_1766$ 
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
 *      File name: sbcu_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBCU_1766_H
#define _SBCU_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SBCU_UL(x) x
#else
    #define _SBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SBCU on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0000100...0xF0000107] : reserved space
    volatile uint32 ID;                  // [0xF0000108] : SBCU Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF000010C...0xF000010F] : reserved space
    volatile uint32 CON;                 // [0xF0000110] : SBCU Control Register
    volatile uint32 RESERVED2[3];        // [0xF0000114...0xF000011F] : reserved space
    volatile uint32 ECON;                // [0xF0000120] : Error Control Capture Register
    volatile uint32 EADD;                // [0xF0000124] : Error Address Capture Register
    volatile uint32 EDAT;                // [0xF0000128] : Error Data Capture Register
    volatile uint32 RESERVED3[1];        // [0xF000012C...0xF000012F] : reserved space
    volatile uint32 DBCNTL;              // [0xF0000130] : Debug Control Register (OCDS)
    volatile uint32 DBGRNT;              // [0xF0000134] : Debug Grant Mask Register (OCDS)
    volatile uint32 DBADR1;              // [0xF0000138] : Debug Address1 Register (OCDS)
    volatile uint32 DBADR2;              // [0xF000013C] : Debug Address2 Register (OCDS)
    volatile uint32 DBBOS;               // [0xF0000140] : Debug Bus Operation Register (OCDS)
    volatile uint32 DBGNTT;              // [0xF0000144] : Debug Trapped Master Register (OCDS)
    volatile uint32 DBADRT;              // [0xF0000148] : Debug Trapped Address Register (OCDS)
    volatile uint32 DBBOST;              // [0xF000014C] : Debug Trapped Bus Operation Register (OCDS)
    volatile uint32 RESERVED4[43];       // [0xF0000150...0xF00001FB] : reserved space
    volatile uint32 SRC;                 // [0xF00001FC] : SBCU Service Request Control Register
} SBCU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SBCU_RegMap_t SBCU __attribute__ ((asection (".zbss.label_only","f=awz")));

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

/* SBCU_CON_DBG (rw) */
#define SBCU_CON_DBG_POS               _SBCU_UL(16)
#define SBCU_CON_DBG_LEN               _SBCU_UL(1)

/* SBCU_CON_PSE (rw) */
#define SBCU_CON_PSE_POS               _SBCU_UL(18)
#define SBCU_CON_PSE_LEN               _SBCU_UL(1)

/* SBCU_CON_SPC (rw) */
#define SBCU_CON_SPC_POS               _SBCU_UL(24)
#define SBCU_CON_SPC_LEN               _SBCU_UL(8)

/* SBCU_CON_SPE (rw) */
#define SBCU_CON_SPE_POS               _SBCU_UL(19)
#define SBCU_CON_SPE_LEN               _SBCU_UL(1)

/* SBCU_CON_TOUT (rw) */
#define SBCU_CON_TOUT_POS              _SBCU_UL(0)
#define SBCU_CON_TOUT_LEN              _SBCU_UL(16)

/* SBCU_DBADR1_ADR1 (rw) */
#define SBCU_DBADR1_ADR1_POS           _SBCU_UL(0)
#define SBCU_DBADR1_ADR1_LEN           _SBCU_UL(32)

/* SBCU_DBADR2_ADR2 (rw) */
#define SBCU_DBADR2_ADR2_POS           _SBCU_UL(0)
#define SBCU_DBADR2_ADR2_LEN           _SBCU_UL(32)

/* SBCU_DBADRT_FPIADR (r) */
#define SBCU_DBADRT_FPIADR_POS         _SBCU_UL(0)
#define SBCU_DBADRT_FPIADR_LEN         _SBCU_UL(32)

/* SBCU_DBBOST_FPIACK (r) */
#define SBCU_DBBOST_FPIACK_POS         _SBCU_UL(5)
#define SBCU_DBBOST_FPIACK_LEN         _SBCU_UL(2)

/* SBCU_DBBOST_FPIOPC (r) */
#define SBCU_DBBOST_FPIOPC_POS         _SBCU_UL(0)
#define SBCU_DBBOST_FPIOPC_LEN         _SBCU_UL(4)

/* SBCU_DBBOST_FPIOPS (r) */
#define SBCU_DBBOST_FPIOPS_POS         _SBCU_UL(11)
#define SBCU_DBBOST_FPIOPS_LEN         _SBCU_UL(1)

/* SBCU_DBBOST_FPIRD (r) */
#define SBCU_DBBOST_FPIRD_POS          _SBCU_UL(12)
#define SBCU_DBBOST_FPIRD_LEN          _SBCU_UL(1)

/* SBCU_DBBOST_FPIRDY (r) */
#define SBCU_DBBOST_FPIRDY_POS         _SBCU_UL(7)
#define SBCU_DBBOST_FPIRDY_LEN         _SBCU_UL(1)

/* SBCU_DBBOST_FPIRST (r) */
#define SBCU_DBBOST_FPIRST_POS         _SBCU_UL(9)
#define SBCU_DBBOST_FPIRST_LEN         _SBCU_UL(2)

/* SBCU_DBBOST_FPISVM (r) */
#define SBCU_DBBOST_FPISVM_POS         _SBCU_UL(4)
#define SBCU_DBBOST_FPISVM_LEN         _SBCU_UL(1)

/* SBCU_DBBOST_FPITAG (r) */
#define SBCU_DBBOST_FPITAG_POS         _SBCU_UL(16)
#define SBCU_DBBOST_FPITAG_LEN         _SBCU_UL(4)

/* SBCU_DBBOST_FPIWR (r) */
#define SBCU_DBBOST_FPIWR_POS          _SBCU_UL(8)
#define SBCU_DBBOST_FPIWR_LEN          _SBCU_UL(1)

/* SBCU_DBBOS_OPC (rw) */
#define SBCU_DBBOS_OPC_POS             _SBCU_UL(0)
#define SBCU_DBBOS_OPC_LEN             _SBCU_UL(4)

/* SBCU_DBBOS_RD (rw) */
#define SBCU_DBBOS_RD_POS              _SBCU_UL(12)
#define SBCU_DBBOS_RD_LEN              _SBCU_UL(1)

/* SBCU_DBBOS_SVM (rw) */
#define SBCU_DBBOS_SVM_POS             _SBCU_UL(4)
#define SBCU_DBBOS_SVM_LEN             _SBCU_UL(1)

/* SBCU_DBBOS_WR (rw) */
#define SBCU_DBBOS_WR_POS              _SBCU_UL(8)
#define SBCU_DBBOS_WR_LEN              _SBCU_UL(1)

/* SBCU_DBCNTL_CONCOM (rw) */
#define SBCU_DBCNTL_CONCOM_POS         _SBCU_UL(12)
#define SBCU_DBCNTL_CONCOM_LEN         _SBCU_UL(3)

/* SBCU_DBCNTL_EO (r) */
#define SBCU_DBCNTL_EO_POS             _SBCU_UL(0)
#define SBCU_DBCNTL_EO_LEN             _SBCU_UL(1)

/* SBCU_DBCNTL_OA (r) */
#define SBCU_DBCNTL_OA_POS             _SBCU_UL(1)
#define SBCU_DBCNTL_OA_LEN             _SBCU_UL(1)

/* SBCU_DBCNTL_ONA1 (rw) */
#define SBCU_DBCNTL_ONA1_POS           _SBCU_UL(20)
#define SBCU_DBCNTL_ONA1_LEN           _SBCU_UL(2)

/* SBCU_DBCNTL_ONA2 (rw) */
#define SBCU_DBCNTL_ONA2_POS           _SBCU_UL(24)
#define SBCU_DBCNTL_ONA2_LEN           _SBCU_UL(2)

/* SBCU_DBCNTL_ONBOS (rw) */
#define SBCU_DBCNTL_ONBOS_POS          _SBCU_UL(28)
#define SBCU_DBCNTL_ONBOS_LEN          _SBCU_UL(4)

/* SBCU_DBCNTL_ONG (rw) */
#define SBCU_DBCNTL_ONG_POS            _SBCU_UL(16)
#define SBCU_DBCNTL_ONG_LEN            _SBCU_UL(1)

/* SBCU_DBCNTL_RA (w) */
#define SBCU_DBCNTL_RA_POS             _SBCU_UL(4)
#define SBCU_DBCNTL_RA_LEN             _SBCU_UL(1)

/* SBCU_DBGNTT_DMALAST (r) */
#define SBCU_DBGNTT_DMALAST_POS        _SBCU_UL(16)
#define SBCU_DBGNTT_DMALAST_LEN        _SBCU_UL(16)

/* SBCU_DBGNTT_FPIGNT (r) */
#define SBCU_DBGNTT_FPIGNT_POS         _SBCU_UL(0)
#define SBCU_DBGNTT_FPIGNT_LEN         _SBCU_UL(16)

/* SBCU_DBGRNT_FPIGRNT (rw) */
#define SBCU_DBGRNT_FPIGRNT_POS        _SBCU_UL(0)
#define SBCU_DBGRNT_FPIGRNT_LEN        _SBCU_UL(7)

/* SBCU_EADD_FPIADR (rwh) */
#define SBCU_EADD_FPIADR_POS           _SBCU_UL(0)
#define SBCU_EADD_FPIADR_LEN           _SBCU_UL(32)

/* SBCU_ECON_ABT (rwh) */
#define SBCU_ECON_ABT_POS              _SBCU_UL(18)
#define SBCU_ECON_ABT_LEN              _SBCU_UL(1)

/* SBCU_ECON_ACK (rwh) */
#define SBCU_ECON_ACK_POS              _SBCU_UL(19)
#define SBCU_ECON_ACK_LEN              _SBCU_UL(2)

/* SBCU_ECON_ERRCNT (rwh) */
#define SBCU_ECON_ERRCNT_POS           _SBCU_UL(0)
#define SBCU_ECON_ERRCNT_LEN           _SBCU_UL(16)

/* SBCU_ECON_OPC (rwh) */
#define SBCU_ECON_OPC_POS              _SBCU_UL(28)
#define SBCU_ECON_OPC_LEN              _SBCU_UL(4)

/* SBCU_ECON_RDN (rwh) */
#define SBCU_ECON_RDN_POS              _SBCU_UL(23)
#define SBCU_ECON_RDN_LEN              _SBCU_UL(1)

/* SBCU_ECON_RDY (rwh) */
#define SBCU_ECON_RDY_POS              _SBCU_UL(17)
#define SBCU_ECON_RDY_LEN              _SBCU_UL(1)

/* SBCU_ECON_SVM (rwh) */
#define SBCU_ECON_SVM_POS              _SBCU_UL(21)
#define SBCU_ECON_SVM_LEN              _SBCU_UL(1)

/* SBCU_ECON_TAG (rwh) */
#define SBCU_ECON_TAG_POS              _SBCU_UL(24)
#define SBCU_ECON_TAG_LEN              _SBCU_UL(4)

/* SBCU_ECON_TOUT (rwh) */
#define SBCU_ECON_TOUT_POS             _SBCU_UL(16)
#define SBCU_ECON_TOUT_LEN             _SBCU_UL(1)

/* SBCU_ECON_WRN (rwh) */
#define SBCU_ECON_WRN_POS              _SBCU_UL(22)
#define SBCU_ECON_WRN_LEN              _SBCU_UL(1)

/* SBCU_EDAT_FPIDAT (rwh) */
#define SBCU_EDAT_FPIDAT_POS           _SBCU_UL(0)
#define SBCU_EDAT_FPIDAT_LEN           _SBCU_UL(32)

/* SBCU_ID_MOD_NUMBER (r) */
#define SBCU_ID_MOD_NUMBER_POS         _SBCU_UL(8)
#define SBCU_ID_MOD_NUMBER_LEN         _SBCU_UL(8)

/* SBCU_ID_MOD_REV (r) */
#define SBCU_ID_MOD_REV_POS            _SBCU_UL(0)
#define SBCU_ID_MOD_REV_LEN            _SBCU_UL(8)

/* SBCU_SRC_CLRR (w) */
#define SBCU_SRC_CLRR_POS              _SBCU_UL(14)
#define SBCU_SRC_CLRR_LEN              _SBCU_UL(1)

/* SBCU_SRC_SETR (w) */
#define SBCU_SRC_SETR_POS              _SBCU_UL(15)
#define SBCU_SRC_SETR_LEN              _SBCU_UL(1)

/* SBCU_SRC_SRE (rw) */
#define SBCU_SRC_SRE_POS               _SBCU_UL(12)
#define SBCU_SRC_SRE_LEN               _SBCU_UL(1)

/* SBCU_SRC_SRPN (rw) */
#define SBCU_SRC_SRPN_POS              _SBCU_UL(0)
#define SBCU_SRC_SRPN_LEN              _SBCU_UL(8)

/* SBCU_SRC_SRR (rh) */
#define SBCU_SRC_SRR_POS               _SBCU_UL(13)
#define SBCU_SRC_SRR_LEN               _SBCU_UL(1)

/* SBCU_SRC_TOS (rw) */
#define SBCU_SRC_TOS_POS               _SBCU_UL(10)
#define SBCU_SRC_TOS_LEN               _SBCU_UL(1)

#endif
