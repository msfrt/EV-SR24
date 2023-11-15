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
 * $Filename__:sbcu_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbcu_1793$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
#ifndef _SBCU_1793_H
#define _SBCU_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SBCU_UL(x) x
#else
    #define _SBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SBCU on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF0000108] : Module Identification Register
    volatile uint32 RESERVED0[1];        // [0xF000010C...0xF000010F] : reserved space
    volatile uint32 CON;                 // [0xF0000110] : SBCU Control Register
    volatile uint32 RESERVED1[3];        // [0xF0000114...0xF000011F] : reserved space
    volatile uint32 ECON;                // [0xF0000120] : SBCU Error Control Capture Register
    volatile uint32 EADD;                // [0xF0000124] : SBCU Error Address Capture Register
    volatile uint32 EDAT;                // [0xF0000128] : SBCU Error Data Capture Register
    volatile uint32 RESERVED2[1];        // [0xF000012C...0xF000012F] : reserved space
    volatile uint32 DBCNTL;              // [0xF0000130] : SBCU Debug Control Register
    volatile uint32 DBGRNT;              // [0xF0000134] : SBCU Debug Grant Mask Register
    volatile uint32 DBADR1;              // [0xF0000138] : SBCU Debug Address 1 Register
    volatile uint32 DBADR2;              // [0xF000013C] : SBCU Debug Address 2 Register
    volatile uint32 DBBOS;               // [0xF0000140] : SBCU Debug Bus Operation Signals Register
    volatile uint32 DBGNTT;              // [0xF0000144] : SBCU Debug Trapped Master Register
    volatile uint32 DBADRT;              // [0xF0000148] : SBCU Debug Trapped Address Register
    volatile uint32 DBBOST;              // [0xF000014C] : SBCU Debug Trapped Bus Operation Signals Register
    volatile uint32 DBDAT;               // [0xF0000150] : SBCU Debug Data Status Register
    volatile uint32 RESERVED3[42];       // [0xF0000154...0xF00001FB] : reserved space
    volatile uint32 SRC;                 // [0xF00001FC] : SBCU Service Request Control Register
} SBCU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SBCU_RegMap_t SBCU __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* SBCU_ID_MOD_NUMBER (r) */
#define SBCU_ID_MOD_NUMBER_POS                _SBCU_UL(16)
#define SBCU_ID_MOD_NUMBER_LEN                _SBCU_UL(16)

/* SBCU_ID_MOD_REV (r) */
#define SBCU_ID_MOD_REV_POS                   _SBCU_UL(0)
#define SBCU_ID_MOD_REV_LEN                   _SBCU_UL(8)

/* SBCU_ID_MOD_TYPE (r) */
#define SBCU_ID_MOD_TYPE_POS                  _SBCU_UL(8)
#define SBCU_ID_MOD_TYPE_LEN                  _SBCU_UL(8)

/* SBCU_ID_MOD_REV (r) */
#define SBCU_ID_MOD_REV_POS                  _SBCU_UL(0)
#define SBCU_ID_MOD_REV_LEN                  _SBCU_UL(8)

/* SBCU_CON_TOUT (rw) */
#define SBCU_CON_TOUT_POS                    _SBCU_UL(0)
#define SBCU_CON_TOUT_LEN                    _SBCU_UL(16)

/* SBCU_CON_DBG (rw) */
#define SBCU_CON_DBG_POS                     _SBCU_UL(16)
#define SBCU_CON_DBG_LEN                     _SBCU_UL(1)

/* SBCU_CON_SPE (rw) */
#define SBCU_CON_SPE_POS                     _SBCU_UL(19)
#define SBCU_CON_SPE_LEN                     _SBCU_UL(1)

/* SBCU_CON_SPC (rw) */
#define SBCU_CON_SPC_POS                     _SBCU_UL(24)
#define SBCU_CON_SPC_LEN                     _SBCU_UL(8)

/* SBCU_ECON_ERRCNT (rwh) */
#define SBCU_ECON_ERRCNT_POS                 _SBCU_UL(0)
#define SBCU_ECON_ERRCNT_LEN                 _SBCU_UL(16)

/* SBCU_ECON_TOUT (rwh) */
#define SBCU_ECON_TOUT_POS                   _SBCU_UL(16)
#define SBCU_ECON_TOUT_LEN                   _SBCU_UL(1)

/* SBCU_ECON_RDY (rwh) */
#define SBCU_ECON_RDY_POS                    _SBCU_UL(17)
#define SBCU_ECON_RDY_LEN                    _SBCU_UL(1)

/* SBCU_ECON_ABT (rwh) */
#define SBCU_ECON_ABT_POS                    _SBCU_UL(18)
#define SBCU_ECON_ABT_LEN                    _SBCU_UL(1)

/* SBCU_ECON_ACK (rwh) */
#define SBCU_ECON_ACK_POS                    _SBCU_UL(19)
#define SBCU_ECON_ACK_LEN                    _SBCU_UL(2)

/* SBCU_ECON_SVM (rwh) */
#define SBCU_ECON_SVM_POS                    _SBCU_UL(21)
#define SBCU_ECON_SVM_LEN                    _SBCU_UL(1)

/* SBCU_ECON_WRN (rwh) */
#define SBCU_ECON_WRN_POS                    _SBCU_UL(22)
#define SBCU_ECON_WRN_LEN                    _SBCU_UL(1)

/* SBCU_ECON_RDN (rwh) */
#define SBCU_ECON_RDN_POS                    _SBCU_UL(23)
#define SBCU_ECON_RDN_LEN                    _SBCU_UL(1)

/* SBCU_ECON_TAG (rwh) */
#define SBCU_ECON_TAG_POS                    _SBCU_UL(24)
#define SBCU_ECON_TAG_LEN                    _SBCU_UL(4)

/* SBCU_ECON_OPC (rwh) */
#define SBCU_ECON_OPC_POS                    _SBCU_UL(28)
#define SBCU_ECON_OPC_LEN                    _SBCU_UL(4)

/* SBCU_EADD_FPIADR (rwh) */
#define SBCU_EADD_FPIADR_POS                 _SBCU_UL(0)
#define SBCU_EADD_FPIADR_LEN                 _SBCU_UL(32)

/* SBCU_EDAT_FPIDAT (rwh) */
#define SBCU_EDAT_FPIDAT_POS                 _SBCU_UL(0)
#define SBCU_EDAT_FPIDAT_LEN                 _SBCU_UL(32)

/* SBCU_DBCNTL_EO (r) */
#define SBCU_DBCNTL_EO_POS                   _SBCU_UL(0)
#define SBCU_DBCNTL_EO_LEN                   _SBCU_UL(1)

/* SBCU_DBCNTL_OA (r) */
#define SBCU_DBCNTL_OA_POS                   _SBCU_UL(1)
#define SBCU_DBCNTL_OA_LEN                   _SBCU_UL(1)

/* SBCU_DBCNTL_RA (w) */
#define SBCU_DBCNTL_RA_POS                   _SBCU_UL(4)
#define SBCU_DBCNTL_RA_LEN                   _SBCU_UL(1)

/* SBCU_DBCNTL_CONCOM0 (rw) */
#define SBCU_DBCNTL_CONCOM0_POS              _SBCU_UL(12)
#define SBCU_DBCNTL_CONCOM0_LEN              _SBCU_UL(1)

/* SBCU_DBCNTL_CONCOM1 (rw) */
#define SBCU_DBCNTL_CONCOM1_POS              _SBCU_UL(13)
#define SBCU_DBCNTL_CONCOM1_LEN              _SBCU_UL(1)

/* SBCU_DBCNTL_CONCOM2 (rw) */
#define SBCU_DBCNTL_CONCOM2_POS              _SBCU_UL(14)
#define SBCU_DBCNTL_CONCOM2_LEN              _SBCU_UL(1)

/* SBCU_DBCNTL_ONG (rw) */
#define SBCU_DBCNTL_ONG_POS                  _SBCU_UL(16)
#define SBCU_DBCNTL_ONG_LEN                  _SBCU_UL(1)

/* SBCU_DBCNTL_ONA1 (rw) */
#define SBCU_DBCNTL_ONA1_POS                 _SBCU_UL(20)
#define SBCU_DBCNTL_ONA1_LEN                 _SBCU_UL(2)

/* SBCU_DBCNTL_ONA2 (rw) */
#define SBCU_DBCNTL_ONA2_POS                 _SBCU_UL(24)
#define SBCU_DBCNTL_ONA2_LEN                 _SBCU_UL(2)

/* SBCU_DBCNTL_ONBOS0 (rw) */
#define SBCU_DBCNTL_ONBOS0_POS               _SBCU_UL(28)
#define SBCU_DBCNTL_ONBOS0_LEN               _SBCU_UL(1)

/* SBCU_DBCNTL_ONBOS1 (rw) */
#define SBCU_DBCNTL_ONBOS1_POS               _SBCU_UL(29)
#define SBCU_DBCNTL_ONBOS1_LEN               _SBCU_UL(1)

/* SBCU_DBCNTL_ONBOS2 (rw) */
#define SBCU_DBCNTL_ONBOS2_POS               _SBCU_UL(30)
#define SBCU_DBCNTL_ONBOS2_LEN               _SBCU_UL(1)

/* SBCU_DBCNTL_ONBOS3 (rw) */
#define SBCU_DBCNTL_ONBOS3_POS               _SBCU_UL(31)
#define SBCU_DBCNTL_ONBOS3_LEN               _SBCU_UL(1)

/* SBCU_DBGRNT_DMAH (rw) */
#define SBCU_DBGRNT_DMAH_POS                 _SBCU_UL(0)
#define SBCU_DBGRNT_DMAH_LEN                 _SBCU_UL(1)

/* SBCU_DBGRNT_ONE (rw) */
#define SBCU_DBGRNT_ONE_POS                  _SBCU_UL(1)
#define SBCU_DBGRNT_ONE_LEN                  _SBCU_UL(1)

/* SBCU_DBGRNT_SDMA (rw) */
#define SBCU_DBGRNT_SDMA_POS                 _SBCU_UL(2)
#define SBCU_DBGRNT_SDMA_LEN                 _SBCU_UL(1)

/* SBCU_DBGRNT_PCP (rw) */
#define SBCU_DBGRNT_PCP_POS                  _SBCU_UL(3)
#define SBCU_DBGRNT_PCP_LEN                  _SBCU_UL(1)

/* SBCU_DBGRNT_DMAM (rw) */
#define SBCU_DBGRNT_DMAM_POS                 _SBCU_UL(4)
#define SBCU_DBGRNT_DMAM_LEN                 _SBCU_UL(1)

/* SBCU_DBGRNT_SFI (rw) */
#define SBCU_DBGRNT_SFI_POS                  _SBCU_UL(5)
#define SBCU_DBGRNT_SFI_LEN                  _SBCU_UL(1)

/* SBCU_DBGRNT_DMAL (rw) */
#define SBCU_DBGRNT_DMAL_POS                 _SBCU_UL(7)
#define SBCU_DBGRNT_DMAL_LEN                 _SBCU_UL(1)

/* SBCU_DBGRNT_ONES (rw) */
#define SBCU_DBGRNT_ONES_POS                 _SBCU_UL(8)
#define SBCU_DBGRNT_ONES_LEN                 _SBCU_UL(8)

/* SBCU_DBADR1_ADR1 (rw) */
#define SBCU_DBADR1_ADR1_POS                 _SBCU_UL(0)
#define SBCU_DBADR1_ADR1_LEN                 _SBCU_UL(32)

/* SBCU_DBADR2_ADR2 (rw) */
#define SBCU_DBADR2_ADR2_POS                 _SBCU_UL(0)
#define SBCU_DBADR2_ADR2_LEN                 _SBCU_UL(32)

/* SBCU_DBBOS_OPC (rw) */
#define SBCU_DBBOS_OPC_POS                   _SBCU_UL(0)
#define SBCU_DBBOS_OPC_LEN                   _SBCU_UL(4)

/* SBCU_DBBOS_SVM (rw) */
#define SBCU_DBBOS_SVM_POS                   _SBCU_UL(4)
#define SBCU_DBBOS_SVM_LEN                   _SBCU_UL(1)

/* SBCU_DBBOS_WR (rw) */
#define SBCU_DBBOS_WR_POS                    _SBCU_UL(8)
#define SBCU_DBBOS_WR_LEN                    _SBCU_UL(1)

/* SBCU_DBBOS_RD (rw) */
#define SBCU_DBBOS_RD_POS                    _SBCU_UL(12)
#define SBCU_DBBOS_RD_LEN                    _SBCU_UL(1)

/* SBCU_DBGNTT_DMAH (rh) */
#define SBCU_DBGNTT_DMAH_POS                 _SBCU_UL(0)
#define SBCU_DBGNTT_DMAH_LEN                 _SBCU_UL(1)

/* SBCU_DBGNTT_ONE (r) */
#define SBCU_DBGNTT_ONE_POS                  _SBCU_UL(1)
#define SBCU_DBGNTT_ONE_LEN                  _SBCU_UL(1)

/* SBCU_DBGNTT_SDMA (rh) */
#define SBCU_DBGNTT_SDMA_POS                 _SBCU_UL(2)
#define SBCU_DBGNTT_SDMA_LEN                 _SBCU_UL(1)

/* SBCU_DBGNTT_PCP (rh) */
#define SBCU_DBGNTT_PCP_POS                  _SBCU_UL(3)
#define SBCU_DBGNTT_PCP_LEN                  _SBCU_UL(1)

/* SBCU_DBGNTT_DMAM (rh) */
#define SBCU_DBGNTT_DMAM_POS                 _SBCU_UL(4)
#define SBCU_DBGNTT_DMAM_LEN                 _SBCU_UL(1)

/* SBCU_DBGNTT_SFI (rh) */
#define SBCU_DBGNTT_SFI_POS                  _SBCU_UL(5)
#define SBCU_DBGNTT_SFI_LEN                  _SBCU_UL(1)

/* SBCU_DBGNTT_DMAL (rh) */
#define SBCU_DBGNTT_DMAL_POS                 _SBCU_UL(7)
#define SBCU_DBGNTT_DMAL_LEN                 _SBCU_UL(1)

/* SBCU_DBGNTT_ONES (r) */
#define SBCU_DBGNTT_ONES_POS                 _SBCU_UL(8)
#define SBCU_DBGNTT_ONES_LEN                 _SBCU_UL(8)

/* SBCU_DBGNTT_CHNR00 (rh) */
#define SBCU_DBGNTT_CHNR00_POS               _SBCU_UL(16)
#define SBCU_DBGNTT_CHNR00_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR01 (rh) */
#define SBCU_DBGNTT_CHNR01_POS               _SBCU_UL(17)
#define SBCU_DBGNTT_CHNR01_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR02 (rh) */
#define SBCU_DBGNTT_CHNR02_POS               _SBCU_UL(18)
#define SBCU_DBGNTT_CHNR02_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR03 (rh) */
#define SBCU_DBGNTT_CHNR03_POS               _SBCU_UL(19)
#define SBCU_DBGNTT_CHNR03_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR04 (rh) */
#define SBCU_DBGNTT_CHNR04_POS               _SBCU_UL(20)
#define SBCU_DBGNTT_CHNR04_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR05 (rh) */
#define SBCU_DBGNTT_CHNR05_POS               _SBCU_UL(21)
#define SBCU_DBGNTT_CHNR05_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR06 (rh) */
#define SBCU_DBGNTT_CHNR06_POS               _SBCU_UL(22)
#define SBCU_DBGNTT_CHNR06_LEN               _SBCU_UL(1)

/* SBCU_DBGNTT_CHNR07 (rh) */
#define SBCU_DBGNTT_CHNR07_POS               _SBCU_UL(23)
#define SBCU_DBGNTT_CHNR07_LEN               _SBCU_UL(1)

/* SBCU_DBADRT_FPIADR (rh) */
#define SBCU_DBADRT_FPIADR_POS               _SBCU_UL(0)
#define SBCU_DBADRT_FPIADR_LEN               _SBCU_UL(32)

/* SBCU_DBBOST_FPIOPC (rh) */
#define SBCU_DBBOST_FPIOPC_POS               _SBCU_UL(0)
#define SBCU_DBBOST_FPIOPC_LEN               _SBCU_UL(4)

/* SBCU_DBBOST_FPISVM (rh) */
#define SBCU_DBBOST_FPISVM_POS               _SBCU_UL(4)
#define SBCU_DBBOST_FPISVM_LEN               _SBCU_UL(1)

/* SBCU_DBBOST_FPIACK (rh) */
#define SBCU_DBBOST_FPIACK_POS               _SBCU_UL(5)
#define SBCU_DBBOST_FPIACK_LEN               _SBCU_UL(2)

/* SBCU_DBBOST_FPIRDY (rh) */
#define SBCU_DBBOST_FPIRDY_POS               _SBCU_UL(7)
#define SBCU_DBBOST_FPIRDY_LEN               _SBCU_UL(1)

/* SBCU_DBBOST_FPIWR (rh) */
#define SBCU_DBBOST_FPIWR_POS                _SBCU_UL(8)
#define SBCU_DBBOST_FPIWR_LEN                _SBCU_UL(1)

/* SBCU_DBBOST_FPIRST (rh) */
#define SBCU_DBBOST_FPIRST_POS               _SBCU_UL(9)
#define SBCU_DBBOST_FPIRST_LEN               _SBCU_UL(2)

/* SBCU_DBBOST_FPIOPS (rh) */
#define SBCU_DBBOST_FPIOPS_POS               _SBCU_UL(11)
#define SBCU_DBBOST_FPIOPS_LEN               _SBCU_UL(1)

/* SBCU_DBBOST_FPIRD (rh) */
#define SBCU_DBBOST_FPIRD_POS                _SBCU_UL(12)
#define SBCU_DBBOST_FPIRD_LEN                _SBCU_UL(1)

/* SBCU_DBBOST_FPIABORT (rh) */
#define SBCU_DBBOST_FPIABORT_POS             _SBCU_UL(13)
#define SBCU_DBBOST_FPIABORT_LEN             _SBCU_UL(1)

/* SBCU_DBBOST_FPITOUT (rh) */
#define SBCU_DBBOST_FPITOUT_POS              _SBCU_UL(14)
#define SBCU_DBBOST_FPITOUT_LEN              _SBCU_UL(1)

/* SBCU_DBBOST_FPITAG (rh) */
#define SBCU_DBBOST_FPITAG_POS               _SBCU_UL(16)
#define SBCU_DBBOST_FPITAG_LEN               _SBCU_UL(4)

/* SBCU_DBDAT_FPIDATA (rh) */
#define SBCU_DBDAT_FPIDATA_POS               _SBCU_UL(0)
#define SBCU_DBDAT_FPIDATA_LEN               _SBCU_UL(32)

/* SBCU_SRC_SRPN (rw) */
#define SBCU_SRC_SRPN_POS                    _SBCU_UL(0)
#define SBCU_SRC_SRPN_LEN                    _SBCU_UL(8)

/* SBCU_SRC_TOS (rw) */
#define SBCU_SRC_TOS_POS                     _SBCU_UL(10)
#define SBCU_SRC_TOS_LEN                     _SBCU_UL(1)

/* SBCU_SRC_SRE (rw) */
#define SBCU_SRC_SRE_POS                     _SBCU_UL(12)
#define SBCU_SRC_SRE_LEN                     _SBCU_UL(1)

/* SBCU_SRC_SRR (rh) */
#define SBCU_SRC_SRR_POS                     _SBCU_UL(13)
#define SBCU_SRC_SRR_LEN                     _SBCU_UL(1)

/* SBCU_SRC_CLRR (w) */
#define SBCU_SRC_CLRR_POS                    _SBCU_UL(14)
#define SBCU_SRC_CLRR_LEN                    _SBCU_UL(1)

/* SBCU_SRC_SETR (w) */
#define SBCU_SRC_SETR_POS                    _SBCU_UL(15)
#define SBCU_SRC_SETR_LEN                    _SBCU_UL(1)

#endif
