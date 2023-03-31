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
 * $Filename__:ebu_1796.h$ 
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
 * $Name______:ebu_1796$ 
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
 *      File name: ebu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EBU_1796_H
#define _EBU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _EBU_UL(x) x
#else
    #define _EBU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module EBU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for access to CS-registers */
typedef struct {
    uint32 value;
    uint32 reserved;
}EBU_CS_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF8000000] : EBU Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0000004...0xF0000007] : reserved space
    volatile uint32 ID;                  // [0xF8000008] : EBU Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF000000C...0xF000000F] : reserved space
    volatile uint32 CON;                 // [0xF8000010] : EBU Configuration Register
    volatile uint32 RESERVED2[3];        // [0xF0000014...0xF000001F] : reserved space
    volatile uint32 BFCON;               // [0xF8000020] : Burst Flash Control Register
    volatile uint32 RESERVED3[23];       // [0xF0000024...0xF000007F] : reserved space
    volatile EBU_CS_t ADDRSEL[4];        // [0xF0000080...0xF000009F] : EBU_LMB Address Select Registers
    volatile uint32 RESERVED4[8];        // [0xF00000A0...0xF00000BF] : reserved space
    volatile EBU_CS_t BUSCON[4];         // [0xF80000C0...0xF00000DF] : EBU_LMB Bus Configuration Register
    volatile uint32 RESERVED5[8];        // [0xF00000E0...0xF00000FF] : reserved space
    volatile EBU_CS_t BUSAP[4];          // [0xF8000100...0xF000011F] : EBU_LMB Access Parameter Register
    volatile uint32 RESERVED6[16];       // [0xF0000120...0xF000015F] : reserved space
    volatile uint32 EMUAS;               // [0xF8000160] : EBU_LMB Emulator Address Select Register
    volatile uint32 RESERVED7[1];        // [0xF0000164...0xF0000167] : reserved space
    volatile uint32 EMUBC;               // [0xF8000168] : EBU_LMB Emulator Control Register
    volatile uint32 RESERVED8[1];        // [0xF000016C...0xF000016F] : reserved space
    volatile uint32 EMUBAP;              // [0xF8000170] : EBU_LMB Emulator Bus Access Parameter Register
    volatile uint32 RESERVED9[1];        // [0xF0000174...0xF0000177] : reserved space
    volatile uint32 EMUOVL;              // [0xF8000178] : EBU_LMB Emulator Overlay Register
    volatile uint32 RESERVED10[5];       // [0xF000017C...0xF000018F] : reserved space
    volatile uint32 USERCON;             // [0xF8000190] : Test/Configuration Register
} EBU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
// extern EBU_RegMap_t EBU __attribute__ ((asection (".zbss.label_only","f=awz")));
extern EBU_RegMap_t EBU __attribute__ ((asection (".bss.label_only")));


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

/* EBU_ADDRSEL_ALTENAB (rw) */
#define EBU_ADDRSEL_ALTENAB_POS        _EBU_UL(1)
#define EBU_ADDRSEL_ALTENAB_LEN        _EBU_UL(1)

/* EBU_ADDRSEL_ALTSEG (rw) */
#define EBU_ADDRSEL_ALTSEG_POS         _EBU_UL(8)
#define EBU_ADDRSEL_ALTSEG_LEN         _EBU_UL(4)

/* EBU_ADDRSEL_BASE (rw) */
#define EBU_ADDRSEL_BASE_POS           _EBU_UL(12)
#define EBU_ADDRSEL_BASE_LEN           _EBU_UL(20)

/* EBU_ADDRSEL_MASK (rw) */
#define EBU_ADDRSEL_MASK_POS           _EBU_UL(4)
#define EBU_ADDRSEL_MASK_LEN           _EBU_UL(4)

/* EBU_ADDRSEL_REGENAB (rw) */
#define EBU_ADDRSEL_REGENAB_POS        _EBU_UL(0)
#define EBU_ADDRSEL_REGENAB_LEN        _EBU_UL(1)

/* EBU_BFCON_BFCMSEL (rw) */
#define EBU_BFCON_BFCMSEL_POS          _EBU_UL(8)
#define EBU_BFCON_BFCMSEL_LEN          _EBU_UL(1)

/* EBU_BFCON_DBA0 (rw) */
#define EBU_BFCON_DBA0_POS             _EBU_UL(10)
#define EBU_BFCON_DBA0_LEN             _EBU_UL(1)

/* EBU_BFCON_DBA1 (rw) */
#define EBU_BFCON_DBA1_POS             _EBU_UL(26)
#define EBU_BFCON_DBA1_LEN             _EBU_UL(1)

/* EBU_BFCON_DTALTNCY (rw) */
#define EBU_BFCON_DTALTNCY_POS         _EBU_UL(12)
#define EBU_BFCON_DTALTNCY_LEN         _EBU_UL(4)

/* EBU_BFCON_EBSE0 (rw) */
#define EBU_BFCON_EBSE0_POS            _EBU_UL(9)
#define EBU_BFCON_EBSE0_LEN            _EBU_UL(1)

/* EBU_BFCON_EBSE1 (rw) */
#define EBU_BFCON_EBSE1_POS            _EBU_UL(25)
#define EBU_BFCON_EBSE1_LEN            _EBU_UL(1)

/* EBU_BFCON_EXTCLOCK (rw) */
#define EBU_BFCON_EXTCLOCK_POS         _EBU_UL(6)
#define EBU_BFCON_EXTCLOCK_LEN         _EBU_UL(2)

/* EBU_BFCON_FBBMSEL0 (rw) */
#define EBU_BFCON_FBBMSEL0_POS         _EBU_UL(4)
#define EBU_BFCON_FBBMSEL0_LEN         _EBU_UL(1)

/* EBU_BFCON_FBBMSEL1 (rw) */
#define EBU_BFCON_FBBMSEL1_POS         _EBU_UL(20)
#define EBU_BFCON_FBBMSEL1_LEN         _EBU_UL(1)

/* EBU_BFCON_FDBKEN (rw) */
#define EBU_BFCON_FDBKEN_POS           _EBU_UL(11)
#define EBU_BFCON_FDBKEN_LEN           _EBU_UL(1)

/* EBU_BFCON_FETBLEN0 (rw) */
#define EBU_BFCON_FETBLEN0_POS         _EBU_UL(0)
#define EBU_BFCON_FETBLEN0_LEN         _EBU_UL(4)

/* EBU_BFCON_FETBLEN1 (rw) */
#define EBU_BFCON_FETBLEN1_POS         _EBU_UL(16)
#define EBU_BFCON_FETBLEN1_LEN         _EBU_UL(4)

/* EBU_BFCON_WAITFUNC0 (rw) */
#define EBU_BFCON_WAITFUNC0_POS        _EBU_UL(5)
#define EBU_BFCON_WAITFUNC0_LEN        _EBU_UL(1)

/* EBU_BFCON_WAITFUNC1 (rw) */
#define EBU_BFCON_WAITFUNC1_POS        _EBU_UL(21)
#define EBU_BFCON_WAITFUNC1_LEN        _EBU_UL(1)

/* EBU_BUSAP_ADDRC (rw) */
#define EBU_BUSAP_ADDRC_POS            _EBU_UL(30)
#define EBU_BUSAP_ADDRC_LEN            _EBU_UL(2)

/* EBU_BUSAP_BURSTC (rw) */
#define EBU_BUSAP_BURSTC_POS           _EBU_UL(16)
#define EBU_BUSAP_BURSTC_LEN           _EBU_UL(3)

/* EBU_BUSAP_CMDDELAY (rw) */
#define EBU_BUSAP_CMDDELAY_POS         _EBU_UL(25)
#define EBU_BUSAP_CMDDELAY_LEN         _EBU_UL(3)

/* EBU_BUSAP_DATAC (rw) */
#define EBU_BUSAP_DATAC_POS            _EBU_UL(14)
#define EBU_BUSAP_DATAC_LEN            _EBU_UL(2)

/* EBU_BUSAP_DTACS (rw) */
#define EBU_BUSAP_DTACS_POS            _EBU_UL(0)
#define EBU_BUSAP_DTACS_LEN            _EBU_UL(4)

/* EBU_BUSAP_DTARDWR (rw) */
#define EBU_BUSAP_DTARDWR_POS          _EBU_UL(4)
#define EBU_BUSAP_DTARDWR_LEN          _EBU_UL(4)

/* EBU_BUSAP_RDRECOVC (rw) */
#define EBU_BUSAP_RDRECOVC_POS         _EBU_UL(11)
#define EBU_BUSAP_RDRECOVC_LEN         _EBU_UL(3)

/* EBU_BUSAP_WAITRDC (rw) */
#define EBU_BUSAP_WAITRDC_POS          _EBU_UL(22)
#define EBU_BUSAP_WAITRDC_LEN          _EBU_UL(3)

/* EBU_BUSAP_WAITWRC (rw) */
#define EBU_BUSAP_WAITWRC_POS          _EBU_UL(19)
#define EBU_BUSAP_WAITWRC_LEN          _EBU_UL(3)

/* EBU_BUSAP_WRRECOVC (rw) */
#define EBU_BUSAP_WRRECOVC_POS         _EBU_UL(8)
#define EBU_BUSAP_WRRECOVC_LEN         _EBU_UL(3)

/* EBU_BUSCON_AALIGN (rw) */
#define EBU_BUSCON_AALIGN_POS          _EBU_UL(9)
#define EBU_BUSCON_AALIGN_LEN          _EBU_UL(1)

/* EBU_BUSCON_AGEN (rw) */
#define EBU_BUSCON_AGEN_POS            _EBU_UL(28)
#define EBU_BUSCON_AGEN_LEN            _EBU_UL(3)

/* EBU_BUSCON_BCGEN (rw) */
#define EBU_BUSCON_BCGEN_POS           _EBU_UL(20)
#define EBU_BUSCON_BCGEN_LEN           _EBU_UL(2)

/* EBU_BUSCON_CMULT (rw) */
#define EBU_BUSCON_CMULT_POS           _EBU_UL(13)
#define EBU_BUSCON_CMULT_LEN           _EBU_UL(3)

/* EBU_BUSCON_CTYPE (rw) */
#define EBU_BUSCON_CTYPE_POS           _EBU_UL(10)
#define EBU_BUSCON_CTYPE_LEN           _EBU_UL(2)

/* EBU_BUSCON_DLOAD (rw) */
#define EBU_BUSCON_DLOAD_POS           _EBU_UL(17)
#define EBU_BUSCON_DLOAD_LEN           _EBU_UL(1)

/* EBU_BUSCON_ENDIAN (rw) */
#define EBU_BUSCON_ENDIAN_POS          _EBU_UL(16)
#define EBU_BUSCON_ENDIAN_LEN          _EBU_UL(1)

/* EBU_BUSCON_MULTMAP (rw) */
#define EBU_BUSCON_MULTMAP_POS         _EBU_UL(0)
#define EBU_BUSCON_MULTMAP_LEN         _EBU_UL(7)

/* EBU_BUSCON_PORTW (rw) */
#define EBU_BUSCON_PORTW_POS           _EBU_UL(22)
#define EBU_BUSCON_PORTW_LEN           _EBU_UL(2)

/* EBU_BUSCON_PREFETCH (rw) */
#define EBU_BUSCON_PREFETCH_POS        _EBU_UL(18)
#define EBU_BUSCON_PREFETCH_LEN        _EBU_UL(1)

/* EBU_BUSCON_WAIT (rw) */
#define EBU_BUSCON_WAIT_POS            _EBU_UL(24)
#define EBU_BUSCON_WAIT_LEN            _EBU_UL(2)

/* EBU_BUSCON_WAITINV (rw) */
#define EBU_BUSCON_WAITINV_POS         _EBU_UL(19)
#define EBU_BUSCON_WAITINV_LEN         _EBU_UL(1)

/* EBU_BUSCON_WEAKPREFETCH (rw) */
#define EBU_BUSCON_WEAKPREFETCH_POS    _EBU_UL(8)
#define EBU_BUSCON_WEAKPREFETCH_LEN    _EBU_UL(1)

/* EBU_BUSCON_WRITE (rw) */
#define EBU_BUSCON_WRITE_POS           _EBU_UL(31)
#define EBU_BUSCON_WRITE_LEN           _EBU_UL(1)

/* EBU_BUSCON_XCMDDELAY (rw) */
#define EBU_BUSCON_XCMDDELAY_POS       _EBU_UL(26)
#define EBU_BUSCON_XCMDDELAY_LEN       _EBU_UL(2)

/* EBU_CLC_DISR (rw) */
#define EBU_CLC_DISR_POS               _EBU_UL(0)
#define EBU_CLC_DISR_LEN               _EBU_UL(1)

/* EBU_CLC_DISS (r) */
#define EBU_CLC_DISS_POS               _EBU_UL(1)
#define EBU_CLC_DISS_LEN               _EBU_UL(1)

/* EBU_CON_1 (rw) */
#define EBU_CON_1_POS                  _EBU_UL(26)
#define EBU_CON_1_LEN                  _EBU_UL(1)

/* EBU_CON_ARBMODE (rw) */
#define EBU_CON_ARBMODE_POS            _EBU_UL(6)
#define EBU_CON_ARBMODE_LEN            _EBU_UL(2)

/* EBU_CON_ARBSYNC (rw) */
#define EBU_CON_ARBSYNC_POS            _EBU_UL(5)
#define EBU_CON_ARBSYNC_LEN            _EBU_UL(1)

/* EBU_CON_CS0FAM (rw) */
#define EBU_CON_CS0FAM_POS             _EBU_UL(27)
#define EBU_CON_CS0FAM_LEN             _EBU_UL(1)

/* EBU_CON_EMUFAM (rw) */
#define EBU_CON_EMUFAM_POS             _EBU_UL(28)
#define EBU_CON_EMUFAM_LEN             _EBU_UL(1)

/* EBU_CON_EXTACC (rw) */
#define EBU_CON_EXTACC_POS             _EBU_UL(3)
#define EBU_CON_EXTACC_LEN             _EBU_UL(1)

/* EBU_CON_EXTLOCK (rw) */
#define EBU_CON_EXTLOCK_POS            _EBU_UL(4)
#define EBU_CON_EXTLOCK_LEN            _EBU_UL(1)

/* EBU_CON_EXTRECON (rw) */
#define EBU_CON_EXTRECON_POS           _EBU_UL(1)
#define EBU_CON_EXTRECON_LEN           _EBU_UL(1)

/* EBU_CON_EXTSVM (rw) */
#define EBU_CON_EXTSVM_POS             _EBU_UL(2)
#define EBU_CON_EXTSVM_LEN             _EBU_UL(1)

/* EBU_CON_GLOBALCS (rw) */
#define EBU_CON_GLOBALCS_POS           _EBU_UL(16)
#define EBU_CON_GLOBALCS_LEN           _EBU_UL(8)

/* EBU_CON_TIMEOUTC (rw) */
#define EBU_CON_TIMEOUTC_POS           _EBU_UL(8)
#define EBU_CON_TIMEOUTC_LEN           _EBU_UL(8)

/* EBU_EMUAS_ALTENAB (rw) */
#define EBU_EMUAS_ALTENAB_POS          _EBU_UL(1)
#define EBU_EMUAS_ALTENAB_LEN          _EBU_UL(1)

/* EBU_EMUAS_ALTSEG (rw) */
#define EBU_EMUAS_ALTSEG_POS           _EBU_UL(8)
#define EBU_EMUAS_ALTSEG_LEN           _EBU_UL(4)

/* EBU_EMUAS_BASE (rw) */
#define EBU_EMUAS_BASE_POS             _EBU_UL(12)
#define EBU_EMUAS_BASE_LEN             _EBU_UL(20)

/* EBU_EMUAS_MASK (rw) */
#define EBU_EMUAS_MASK_POS             _EBU_UL(4)
#define EBU_EMUAS_MASK_LEN             _EBU_UL(4)

/* EBU_EMUAS_REGENAB (rw) */
#define EBU_EMUAS_REGENAB_POS          _EBU_UL(0)
#define EBU_EMUAS_REGENAB_LEN          _EBU_UL(1)

/* EBU_EMUBAP_ADDRC (rw) */
#define EBU_EMUBAP_ADDRC_POS           _EBU_UL(30)
#define EBU_EMUBAP_ADDRC_LEN           _EBU_UL(2)

/* EBU_EMUBAP_BURSTC (rw) */
#define EBU_EMUBAP_BURSTC_POS          _EBU_UL(16)
#define EBU_EMUBAP_BURSTC_LEN          _EBU_UL(3)

/* EBU_EMUBAP_CMDDELAY (rw) */
#define EBU_EMUBAP_CMDDELAY_POS        _EBU_UL(25)
#define EBU_EMUBAP_CMDDELAY_LEN        _EBU_UL(3)

/* EBU_EMUBAP_DATAC (rw) */
#define EBU_EMUBAP_DATAC_POS           _EBU_UL(14)
#define EBU_EMUBAP_DATAC_LEN           _EBU_UL(2)

/* EBU_EMUBAP_DTACS (rw) */
#define EBU_EMUBAP_DTACS_POS           _EBU_UL(0)
#define EBU_EMUBAP_DTACS_LEN           _EBU_UL(4)

/* EBU_EMUBAP_DTARDWR (rw) */
#define EBU_EMUBAP_DTARDWR_POS         _EBU_UL(4)
#define EBU_EMUBAP_DTARDWR_LEN         _EBU_UL(4)

/* EBU_EMUBAP_RDRECOVC (rw) */
#define EBU_EMUBAP_RDRECOVC_POS        _EBU_UL(11)
#define EBU_EMUBAP_RDRECOVC_LEN        _EBU_UL(3)

/* EBU_EMUBAP_WAITRDC (rw) */
#define EBU_EMUBAP_WAITRDC_POS         _EBU_UL(22)
#define EBU_EMUBAP_WAITRDC_LEN         _EBU_UL(3)

/* EBU_EMUBAP_WAITWRC (rw) */
#define EBU_EMUBAP_WAITWRC_POS         _EBU_UL(19)
#define EBU_EMUBAP_WAITWRC_LEN         _EBU_UL(3)

/* EBU_EMUBAP_WRRECOVC (rw) */
#define EBU_EMUBAP_WRRECOVC_POS        _EBU_UL(8)
#define EBU_EMUBAP_WRRECOVC_LEN        _EBU_UL(3)

/* EBU_EMUBC_AALIGN (rw) */
#define EBU_EMUBC_AALIGN_POS           _EBU_UL(9)
#define EBU_EMUBC_AALIGN_LEN           _EBU_UL(1)

/* EBU_EMUBC_AGEN (rw) */
#define EBU_EMUBC_AGEN_POS             _EBU_UL(28)
#define EBU_EMUBC_AGEN_LEN             _EBU_UL(3)

/* EBU_EMUBC_BCGEN (rw) */
#define EBU_EMUBC_BCGEN_POS            _EBU_UL(20)
#define EBU_EMUBC_BCGEN_LEN            _EBU_UL(2)

/* EBU_EMUBC_CMULT (rw) */
#define EBU_EMUBC_CMULT_POS            _EBU_UL(13)
#define EBU_EMUBC_CMULT_LEN            _EBU_UL(3)

/* EBU_EMUBC_CTYPE (rw) */
#define EBU_EMUBC_CTYPE_POS            _EBU_UL(10)
#define EBU_EMUBC_CTYPE_LEN            _EBU_UL(2)

/* EBU_EMUBC_DLOAD (rw) */
#define EBU_EMUBC_DLOAD_POS            _EBU_UL(17)
#define EBU_EMUBC_DLOAD_LEN            _EBU_UL(1)

/* EBU_EMUBC_ENDIAN (rw) */
#define EBU_EMUBC_ENDIAN_POS           _EBU_UL(16)
#define EBU_EMUBC_ENDIAN_LEN           _EBU_UL(1)

/* EBU_EMUBC_MULTMAP (rw) */
#define EBU_EMUBC_MULTMAP_POS          _EBU_UL(0)
#define EBU_EMUBC_MULTMAP_LEN          _EBU_UL(7)

/* EBU_EMUBC_PORTW (rw) */
#define EBU_EMUBC_PORTW_POS            _EBU_UL(22)
#define EBU_EMUBC_PORTW_LEN            _EBU_UL(2)

/* EBU_EMUBC_PREFETCH (rw) */
#define EBU_EMUBC_PREFETCH_POS         _EBU_UL(18)
#define EBU_EMUBC_PREFETCH_LEN         _EBU_UL(1)

/* EBU_EMUBC_WAIT (rw) */
#define EBU_EMUBC_WAIT_POS             _EBU_UL(24)
#define EBU_EMUBC_WAIT_LEN             _EBU_UL(2)

/* EBU_EMUBC_WAITINV (rw) */
#define EBU_EMUBC_WAITINV_POS          _EBU_UL(19)
#define EBU_EMUBC_WAITINV_LEN          _EBU_UL(1)

/* EBU_EMUBC_WEAKPREFETCH (rw) */
#define EBU_EMUBC_WEAKPREFETCH_POS     _EBU_UL(8)
#define EBU_EMUBC_WEAKPREFETCH_LEN     _EBU_UL(1)

/* EBU_EMUBC_WRITE (rw) */
#define EBU_EMUBC_WRITE_POS            _EBU_UL(31)
#define EBU_EMUBC_WRITE_LEN            _EBU_UL(1)

/* EBU_EMUBC_XCMDDELAY (rw) */
#define EBU_EMUBC_XCMDDELAY_POS        _EBU_UL(26)
#define EBU_EMUBC_XCMDDELAY_LEN        _EBU_UL(2)

/* EBU_EMUOVL_OVERLAY (rw) */
#define EBU_EMUOVL_OVERLAY_POS         _EBU_UL(0)
#define EBU_EMUOVL_OVERLAY_LEN         _EBU_UL(8)

/* EBU_ID_ID32BIT (r) */
#define EBU_ID_ID32BIT_POS             _EBU_UL(8)
#define EBU_ID_ID32BIT_LEN             _EBU_UL(8)

/* EBU_ID_MODNUM (r) */
#define EBU_ID_MODNUM_POS              _EBU_UL(16)
#define EBU_ID_MODNUM_LEN              _EBU_UL(16)

/* EBU_ID_REVNUM (r) */
#define EBU_ID_REVNUM_POS              _EBU_UL(0)
#define EBU_ID_REVNUM_LEN              _EBU_UL(8)

/* EBU_USERCON_DIP (rw) */
#define EBU_USERCON_DIP_POS            _EBU_UL(0)
#define EBU_USERCON_DIP_LEN            _EBU_UL(1)

#endif
