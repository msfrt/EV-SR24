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
 * $Filename__:xbar_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:24.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:xbar_1793$ 
 * $Variant___:1.12.0$ 
 * $Revision__:1$ 
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
 * 1.12.0; 1     24.03.2010 AHT2FE
 *   Fix Reg Header for TC_1793
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _XBAR_1793_H
#define _XBAR_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _XBAR_UL(x) x
#else
    #define _XBAR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module XBAR on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ARBCOND;             // [0xF8700004] : Arbiter Control Register D
    volatile uint32 RESERVED0[1];        // [0xF8700008...0xF870000B] : reserved space
    volatile uint32 PRIOLD;              // [0xF870000C] : Arbiter Priority Register D
    volatile uint32 ERRADDRD;            // [0xF8700010] : Error/Debug Address Capture Register D
    volatile uint32 ERRD;                // [0xF8700014] : Error/Debug Capture Register D
    volatile uint32 DBCOND;              // [0xF8700018] : Debug Control Register D
    volatile uint32 DBADDD;              // [0xF870001C] : Debug Address Register D
    volatile uint32 DBMADDD;             // [0xF8700020] : Debug Mask Address Register D
    volatile uint32 RESERVED1[8];        // [0xF8700024...0xF8700043] : reserved space
    volatile uint32 ARBCON0;             // [0xF8700044] : Arbiter Control Register 0
    volatile uint32 RESERVED2[1];        // [0xF8700048...0xF870004B] : reserved space
    volatile uint32 PRIOL0;              // [0xF870004C] : Arbiter Priority Register 0
    volatile uint32 ERRADDR0;            // [0xF8700050] : Error/Debug Address Capture Register 0
    volatile uint32 ERR0;                // [0xF8700054] : Error/Debug Capture Register 0
    volatile uint32 DBCON0;              // [0xF8700058] : Debug Control Register 0
    volatile uint32 DBADD0;              // [0xF870005C] : Debug Mask Address Register 0
    volatile uint32 DBMADD0;             // [0xF8700060] : Debug Mask Address Register 0
    volatile uint32 RESERVED3[8];        // [0xF8700064...0xF8700083] : reserved space
    volatile uint32 ARBCON1;             // [0xF8700084] : Arbiter Control Register 1
    volatile uint32 RESERVED4[1];        // [0xF8700088...0xF870008B] : reserved space
    volatile uint32 PRIOL1;              // [0xF870008C] : Arbiter Priority Register 1
    volatile uint32 ERRADDR1;            // [0xF8700090] : Error/Debug Address Capture Register 1
    volatile uint32 ERR1;                // [0xF8700094] : Error/Debug Capture Register 1
    volatile uint32 DBCON1;              // [0xF8700098] : Debug Control Register 1
    volatile uint32 DBADD1;              // [0xF870009C] : Debug Mask Address Register 1
    volatile uint32 DBMADD1;             // [0xF87000A0] : Debug Mask Address Register 1
    volatile uint32 RESERVED5[7];        // [0xF87000A4...0xF87000BF] : reserved space
    volatile uint32 EXTCON2;             // [0xF87000C0] : External Control Register 2
    volatile uint32 ARBCON2;             // [0xF87000C4] : Arbiter Control Register 2
    volatile uint32 RESERVED6[1];        // [0xF87000C8...0xF87000CB] : reserved space
    volatile uint32 PRIOL2;              // [0xF87000CC] : Arbiter Priority Register 2
    volatile uint32 ERRADDR2;            // [0xF87000D0] : Error/Debug Address Capture Register 2
    volatile uint32 ERR2;                // [0xF87000D4] : Error/Debug Capture Register 2
    volatile uint32 DBCON2;              // [0xF87000D8] : Debug Control Register 2
    volatile uint32 DBADD2;              // [0xF87000DC] : Debug Mask Address Register 2
    volatile uint32 DBMADD2;             // [0xF87000E0] : Debug Mask Address Register 2
    volatile uint32 RESERVED7[8];        // [0xF87000E4...0xF8700103] : reserved space
    volatile uint32 ARBCON3;             // [0xF8700104] : Arbiter Control Register 3
    volatile uint32 RESERVED8[1];        // [0xF8700108...0xF870010B] : reserved space
    volatile uint32 PRIOL3;              // [0xF870010C] : Arbiter Priority Register 3
    volatile uint32 ERRADDR3;            // [0xF8700110] : Error/Debug Address Capture Register 3
    volatile uint32 ERR3;                // [0xF8700114] : Error/Debug Capture Register 3
    volatile uint32 DBCON3;              // [0xF8700118] : Debug Control Register 3
    volatile uint32 DBADD3;              // [0xF870011C] : Debug Mask Address Register 3
    volatile uint32 DBMADD3;             // [0xF8700120] : Debug Mask Address Register 3
    volatile uint32 RESERVED9[8];        // [0xF8700124...0xF8700143] : reserved space
    volatile uint32 ARBCON4;             // [0xF8700144] : Arbiter Control Register 4
    volatile uint32 RESERVED10[1];       // [0xF8700148...0xF870014B] : reserved space
    volatile uint32 PRIOL4;              // [0xF870014C] : Arbiter Priority Register 4
    volatile uint32 ERRADDR4;            // [0xF8700150] : Error/Debug Address Capture Register 4
    volatile uint32 ERR4;                // [0xF8700154] : Error/Debug Capture Register 4
    volatile uint32 DBCON4;              // [0xF8700158] : Debug Control Register 4
    volatile uint32 DBADD4;              // [0xF870015C] : Debug Mask Address Register 4
    volatile uint32 DBMADD4;             // [0xF8700160] : Debug Mask Address Register 4
    volatile uint32 RESERVED11[8];       // [0xF8700164...0xF8700183] : reserved space
    volatile uint32 ARBCON5;             // [0xF8700184] : Arbiter Control Register 5
    volatile uint32 RESERVED12[1];       // [0xF8700188...0xF870018B] : reserved space
    volatile uint32 PRIOL5;              // [0xF870018C] : Arbiter Priority Register 5
    volatile uint32 ERRADDR5;            // [0xF8700190] : Error/Debug Address Capture Register 5
    volatile uint32 ERR5;                // [0xF8700194] : Error/Debug Capture Register 5
    volatile uint32 DBCON5;              // [0xF8700198] : Debug Control Register 5
    volatile uint32 DBADD5;              // [0xF870019C] : Debug Mask Address Register 5
    volatile uint32 DBMADD5;             // [0xF87001A0] : Debug Mask Address Register 5
    volatile uint32 RESERVED13[8];       // [0xF87001A4...0xF87001C3] : reserved space
    volatile uint32 ARBCON6;             // [0xF87001C4] : Arbiter Control Register 6
    volatile uint32 RESERVED14[1];       // [0xF87001C8...0xF87001CB] : reserved space
    volatile uint32 PRIOL6;              // [0xF87001CC] : Arbiter Priority Register 6
    volatile uint32 ERRADDR6;            // [0xF87001D0] : Error/Debug Address Capture Register 6
    volatile uint32 ERR6;                // [0xF87001D4] : Error/Debug Capture Register 6
    volatile uint32 DBCON6;              // [0xF87001D8] : Debug Control Register 6
    volatile uint32 DBADD6;              // [0xF87001DC] : Debug Mask Address Register 6
    volatile uint32 DBMADD6;             // [0xF87001E0] : Debug Mask Address Register 6
    volatile uint32 RESERVED15[137];     // [0xF87001E4...0xF8700407] : reserved space
    volatile uint32 ID;                  // [0xF8700408] : Module Identification Register
    volatile uint32 DBSAT;               // [0xF870040C] : Debug Trigger Event Status Register
    volatile uint32 INTSAT;              // [0xF8700410] : Arbiter Interrupt Status Register
    volatile uint32 IDINTSAT;            // [0xF8700414] : Transaction ID Interrupt Status Register
    volatile uint32 IDINTEN;             // [0xF8700418] : Transaction ID Interrupt Enable Register
    volatile uint32 RESERVED16[56];      // [0xF870041C...0xF87004FB] : reserved space
    volatile uint32 SRC;                 // [0xF87004FC] : XBar_SRI Service Request Control Register
} XBAR_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern XBAR_RegMap_t XBAR __attribute__ ((asection (".bss.label_only")));


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

/* XBAR_ID_MOD_NUMBER (r) */
#define XBAR_ID_MOD_NUMBER_POS                _XBAR_UL(16)
#define XBAR_ID_MOD_NUMBER_LEN                _XBAR_UL(16)

/* XBAR_ID_MOD_REV (r) */
#define XBAR_ID_MOD_REV_POS                   _XBAR_UL(0)
#define XBAR_ID_MOD_REV_LEN                   _XBAR_UL(8)

/* XBAR_ID_MOD_TYPE (r) */
#define XBAR_ID_MOD_TYPE_POS                  _XBAR_UL(8)
#define XBAR_ID_MOD_TYPE_LEN                  _XBAR_UL(8)

/* XBAR_ARBCOND_PRERREN (rw) */
#define XBAR_ARBCOND_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCOND_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCOND_SCERREN (rw) */
#define XBAR_ARBCOND_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCOND_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCOND_SETPRINT (rwh) */
#define XBAR_ARBCOND_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCOND_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCOND_SETSCINT (rwh) */
#define XBAR_ARBCOND_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCOND_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCOND_INTACK (rwh) */
#define XBAR_ARBCOND_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCOND_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCOND_SMEN (rw) */
#define XBAR_ARBCOND_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCOND_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCOND_SPC (rw) */
#define XBAR_ARBCOND_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCOND_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOLD_MASTER0 (rw) */
#define XBAR_PRIOLD_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOLD_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOLD_MASTER1 (rw) */
#define XBAR_PRIOLD_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOLD_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOLD_MASTER2 (rw) */
#define XBAR_PRIOLD_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOLD_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOLD_MASTER3 (rw) */
#define XBAR_PRIOLD_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOLD_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOLD_MASTER4 (rw) */
#define XBAR_PRIOLD_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOLD_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_PRIOLD_MASTER5 (rw) */
#define XBAR_PRIOLD_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOLD_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDRD_ADDR (rh) */
#define XBAR_ERRADDRD_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDRD_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERRD_RD (rh) */
#define XBAR_ERRD_RD_POS                     _XBAR_UL(0)
#define XBAR_ERRD_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERRD_WR (rh) */
#define XBAR_ERRD_WR_POS                     _XBAR_UL(1)
#define XBAR_ERRD_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERRD_SVM (rh) */
#define XBAR_ERRD_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERRD_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERRD_OPC (rh) */
#define XBAR_ERRD_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERRD_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERRD_TR_ID (rh) */
#define XBAR_ERRD_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERRD_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERRD_ADDR_ECC (rh) */
#define XBAR_ERRD_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERRD_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERRD_MCI_SBS (rh) */
#define XBAR_ERRD_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERRD_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCOND_DBEN (r) */
#define XBAR_DBCOND_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCOND_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCOND_DBSAT (rh) */
#define XBAR_DBCOND_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCOND_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_REARM (w) */
#define XBAR_DBCOND_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCOND_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_SETDBEVT (w) */
#define XBAR_DBCOND_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCOND_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCOND_RDEN (rw) */
#define XBAR_DBCOND_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCOND_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCOND_WREN (rw) */
#define XBAR_DBCOND_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCOND_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCOND_SVMEN (rw) */
#define XBAR_DBCOND_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCOND_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_ADDEN (rw) */
#define XBAR_DBCOND_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCOND_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_ERREN (rw) */
#define XBAR_DBCOND_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCOND_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_MASEN (rw) */
#define XBAR_DBCOND_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCOND_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCOND_MASTER (rh) */
#define XBAR_DBCOND_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCOND_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADDD_UPPER (rw) */
#define XBAR_DBADDD_UPPER_POS                _XBAR_UL(2)
#define XBAR_DBADDD_UPPER_LEN                _XBAR_UL(30)

/* XBAR_DBMADDD_ADDRESS (rw) */
#define XBAR_DBMADDD_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADDD_ADDRESS_LEN             _XBAR_UL(30)

/* XBAR_ARBCON0_PRERREN (rw) */
#define XBAR_ARBCON0_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON0_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON0_SCERREN (rw) */
#define XBAR_ARBCON0_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON0_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON0_SETPRINT (rwh) */
#define XBAR_ARBCON0_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON0_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON0_SETSCINT (rwh) */
#define XBAR_ARBCON0_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON0_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON0_INTACK (rwh) */
#define XBAR_ARBCON0_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON0_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON0_SMEN (rw) */
#define XBAR_ARBCON0_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON0_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON0_SPC (rw) */
#define XBAR_ARBCON0_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON0_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL0_MASTER0 (rw) */
#define XBAR_PRIOL0_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL0_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL0_MASTER1 (rw) */
#define XBAR_PRIOL0_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL0_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL0_MASTER2 (rw) */
#define XBAR_PRIOL0_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL0_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL0_MASTER3 (rw) */
#define XBAR_PRIOL0_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL0_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL0_MASTER4 (rw) */
#define XBAR_PRIOL0_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL0_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR0_ADDR (rh) */
#define XBAR_ERRADDR0_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR0_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR0_RD (rh) */
#define XBAR_ERR0_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR0_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR0_WR (rh) */
#define XBAR_ERR0_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR0_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR0_SVM (rh) */
#define XBAR_ERR0_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR0_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR0_OPC (rh) */
#define XBAR_ERR0_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR0_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR0_TR_ID (rh) */
#define XBAR_ERR0_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR0_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR0_ADDR_ECC (rh) */
#define XBAR_ERR0_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR0_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR0_MCI_SBS (rh) */
#define XBAR_ERR0_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR0_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON0_DBEN (r) */
#define XBAR_DBCON0_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON0_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON0_DBSAT (rh) */
#define XBAR_DBCON0_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON0_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_REARM (w) */
#define XBAR_DBCON0_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON0_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_SETDBEVT (w) */
#define XBAR_DBCON0_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON0_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON0_RDEN (rw) */
#define XBAR_DBCON0_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON0_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON0_WREN (rw) */
#define XBAR_DBCON0_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON0_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON0_SVMEN (rw) */
#define XBAR_DBCON0_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON0_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_ADDEN (rw) */
#define XBAR_DBCON0_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON0_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_ERREN (rw) */
#define XBAR_DBCON0_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON0_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_MASEN (rw) */
#define XBAR_DBCON0_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON0_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON0_MASTER (rh) */
#define XBAR_DBCON0_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON0_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD0_ADDRESS (rw) */
#define XBAR_DBADD0_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD0_ADDRESS_LEN              _XBAR_UL(28)

/* XBAR_DBADD0_ONE (r) */
#define XBAR_DBADD0_ONE_POS                  _XBAR_UL(30)
#define XBAR_DBADD0_ONE_LEN                  _XBAR_UL(2)

/* XBAR_DBMADD0_ADDRESS (rw) */
#define XBAR_DBMADD0_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD0_ADDRESS_LEN             _XBAR_UL(28)

/* XBAR_DBMADD0_ONE (r) */
#define XBAR_DBMADD0_ONE_POS                 _XBAR_UL(30)
#define XBAR_DBMADD0_ONE_LEN                 _XBAR_UL(2)

/* XBAR_ARBCON1_PRERREN (rw) */
#define XBAR_ARBCON1_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON1_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON1_SCERREN (rw) */
#define XBAR_ARBCON1_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON1_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON1_SETPRINT (rwh) */
#define XBAR_ARBCON1_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON1_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON1_SETSCINT (rwh) */
#define XBAR_ARBCON1_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON1_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON1_INTACK (rwh) */
#define XBAR_ARBCON1_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON1_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON1_SMEN (rw) */
#define XBAR_ARBCON1_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON1_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON1_SPC (rw) */
#define XBAR_ARBCON1_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON1_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL1_MASTER0 (rw) */
#define XBAR_PRIOL1_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL1_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL1_MASTER1 (rw) */
#define XBAR_PRIOL1_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL1_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL1_MASTER2 (rw) */
#define XBAR_PRIOL1_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL1_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL1_MASTER3 (rw) */
#define XBAR_PRIOL1_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL1_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL1_MASTER5 (rw) */
#define XBAR_PRIOL1_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOL1_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR1_ADDR (rh) */
#define XBAR_ERRADDR1_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR1_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR1_RD (rh) */
#define XBAR_ERR1_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR1_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR1_WR (rh) */
#define XBAR_ERR1_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR1_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR1_SVM (rh) */
#define XBAR_ERR1_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR1_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR1_OPC (rh) */
#define XBAR_ERR1_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR1_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR1_TR_ID (rh) */
#define XBAR_ERR1_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR1_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR1_ADDR_ECC (rh) */
#define XBAR_ERR1_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR1_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR1_MCI_SBS (rh) */
#define XBAR_ERR1_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR1_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON1_DBEN (r) */
#define XBAR_DBCON1_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON1_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON1_DBSAT (rh) */
#define XBAR_DBCON1_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON1_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_REARM (w) */
#define XBAR_DBCON1_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON1_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_SETDBEVT (w) */
#define XBAR_DBCON1_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON1_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON1_RDEN (rw) */
#define XBAR_DBCON1_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON1_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON1_WREN (rw) */
#define XBAR_DBCON1_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON1_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON1_SVMEN (rw) */
#define XBAR_DBCON1_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON1_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_ADDEN (rw) */
#define XBAR_DBCON1_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON1_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_ERREN (rw) */
#define XBAR_DBCON1_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON1_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_MASEN (rw) */
#define XBAR_DBCON1_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON1_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON1_MASTER (rh) */
#define XBAR_DBCON1_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON1_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD1_ADDRESS (rw) */
#define XBAR_DBADD1_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD1_ADDRESS_LEN              _XBAR_UL(20)

/* XBAR_DBADD1_ONE (r) */
#define XBAR_DBADD1_ONE_POS                  _XBAR_UL(30)
#define XBAR_DBADD1_ONE_LEN                  _XBAR_UL(2)

/* XBAR_DBMADD1_ADDRESS (rw) */
#define XBAR_DBMADD1_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD1_ADDRESS_LEN             _XBAR_UL(20)

/* XBAR_DBMADD1_ONE (r) */
#define XBAR_DBMADD1_ONE_POS                 _XBAR_UL(28)
#define XBAR_DBMADD1_ONE_LEN                 _XBAR_UL(4)

/* XBAR_EXTCON2_WFWD (rw) */
#define XBAR_EXTCON2_WFWD_POS                _XBAR_UL(3)
#define XBAR_EXTCON2_WFWD_LEN                _XBAR_UL(1)

/* XBAR_EXTCON2_FREQDISS (rw) */
#define XBAR_EXTCON2_FREQDISS_POS            _XBAR_UL(4)
#define XBAR_EXTCON2_FREQDISS_LEN            _XBAR_UL(1)

/* XBAR_EXTCON2_FFREQS (rw) */
#define XBAR_EXTCON2_FFREQS_POS              _XBAR_UL(5)
#define XBAR_EXTCON2_FFREQS_LEN              _XBAR_UL(1)

/* XBAR_EXTCON2_FREQDISF (rw) */
#define XBAR_EXTCON2_FREQDISF_POS            _XBAR_UL(6)
#define XBAR_EXTCON2_FREQDISF_LEN            _XBAR_UL(1)

/* XBAR_EXTCON2_NODELTR (rw) */
#define XBAR_EXTCON2_NODELTR_POS             _XBAR_UL(9)
#define XBAR_EXTCON2_NODELTR_LEN             _XBAR_UL(1)

/* XBAR_EXTCON2_NORMW (rw) */
#define XBAR_EXTCON2_NORMW_POS               _XBAR_UL(10)
#define XBAR_EXTCON2_NORMW_LEN               _XBAR_UL(1)

/* XBAR_EXTCON2_MAX_WS (rw) */
#define XBAR_EXTCON2_MAX_WS_POS              _XBAR_UL(13)
#define XBAR_EXTCON2_MAX_WS_LEN              _XBAR_UL(7)

/* XBAR_EXTCON2_RETRY_CNT (rw) */
#define XBAR_EXTCON2_RETRY_CNT_POS           _XBAR_UL(20)
#define XBAR_EXTCON2_RETRY_CNT_LEN           _XBAR_UL(4)

/* XBAR_EXTCON2_NOPDIS (rw) */
#define XBAR_EXTCON2_NOPDIS_POS              _XBAR_UL(24)
#define XBAR_EXTCON2_NOPDIS_LEN              _XBAR_UL(1)

/* XBAR_ARBCON2_PRERREN (rw) */
#define XBAR_ARBCON2_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON2_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON2_SCERREN (rw) */
#define XBAR_ARBCON2_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON2_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON2_SETPRINT (rwh) */
#define XBAR_ARBCON2_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON2_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON2_SETSCINT (rwh) */
#define XBAR_ARBCON2_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON2_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON2_INTACK (rwh) */
#define XBAR_ARBCON2_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON2_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON2_SMEN (rw) */
#define XBAR_ARBCON2_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON2_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON2_SPC (rw) */
#define XBAR_ARBCON2_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON2_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL2_MASTER4 (rw) */
#define XBAR_PRIOL2_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL2_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR2_ADDR (rh) */
#define XBAR_ERRADDR2_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR2_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR2_RD (rh) */
#define XBAR_ERR2_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR2_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR2_WR (rh) */
#define XBAR_ERR2_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR2_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR2_SVM (rh) */
#define XBAR_ERR2_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR2_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR2_OPC (rh) */
#define XBAR_ERR2_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR2_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR2_TR_ID (rh) */
#define XBAR_ERR2_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR2_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR2_ADDR_ECC (rh) */
#define XBAR_ERR2_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR2_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR2_MCI_SBS (rh) */
#define XBAR_ERR2_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR2_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON2_DBEN (r) */
#define XBAR_DBCON2_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON2_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON2_DBSAT (rh) */
#define XBAR_DBCON2_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON2_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_REARM (w) */
#define XBAR_DBCON2_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON2_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_SETDBEVT (w) */
#define XBAR_DBCON2_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON2_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON2_RDEN (rw) */
#define XBAR_DBCON2_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON2_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON2_WREN (rw) */
#define XBAR_DBCON2_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON2_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON2_SVMEN (rw) */
#define XBAR_DBCON2_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON2_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_ADDEN (rw) */
#define XBAR_DBCON2_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON2_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_ERREN (rw) */
#define XBAR_DBCON2_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON2_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_MASEN (rw) */
#define XBAR_DBCON2_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON2_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON2_MASTER (rh) */
#define XBAR_DBCON2_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON2_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD2_ADDRESS (rw) */
#define XBAR_DBADD2_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD2_ADDRESS_LEN              _XBAR_UL(20)

/* XBAR_DBADD2_ONE (r) */
#define XBAR_DBADD2_ONE_POS                  _XBAR_UL(28)
#define XBAR_DBADD2_ONE_LEN                  _XBAR_UL(4)

/* XBAR_DBMADD2_ADDRESS (rw) */
#define XBAR_DBMADD2_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD2_ADDRESS_LEN             _XBAR_UL(20)

/* XBAR_DBMADD2_ONE (r) */
#define XBAR_DBMADD2_ONE_POS                 _XBAR_UL(22)
#define XBAR_DBMADD2_ONE_LEN                 _XBAR_UL(10)

/* XBAR_ARBCON3_PRERREN (rw) */
#define XBAR_ARBCON3_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON3_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON3_SCERREN (rw) */
#define XBAR_ARBCON3_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON3_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON3_SETPRINT (rwh) */
#define XBAR_ARBCON3_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON3_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON3_SETSCINT (rwh) */
#define XBAR_ARBCON3_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON3_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON3_INTACK (rwh) */
#define XBAR_ARBCON3_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON3_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON3_SMEN (rw) */
#define XBAR_ARBCON3_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON3_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON3_SPC (rw) */
#define XBAR_ARBCON3_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON3_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL3_MASTER0 (rw) */
#define XBAR_PRIOL3_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL3_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL3_MASTER1 (rw) */
#define XBAR_PRIOL3_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL3_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL3_MASTER2 (rw) */
#define XBAR_PRIOL3_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL3_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL3_MASTER3 (rw) */
#define XBAR_PRIOL3_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL3_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL3_MASTER4 (rw) */
#define XBAR_PRIOL3_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL3_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_PRIOL3_MASTER5 (rw) */
#define XBAR_PRIOL3_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOL3_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR3_ADDR (rh) */
#define XBAR_ERRADDR3_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR3_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR3_RD (rh) */
#define XBAR_ERR3_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR3_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR3_WR (rh) */
#define XBAR_ERR3_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR3_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR3_SVM (rh) */
#define XBAR_ERR3_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR3_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR3_OPC (rh) */
#define XBAR_ERR3_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR3_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR3_TR_ID (rh) */
#define XBAR_ERR3_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR3_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR3_ADDR_ECC (rh) */
#define XBAR_ERR3_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR3_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR3_MCI_SBS (rh) */
#define XBAR_ERR3_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR3_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON3_DBEN (r) */
#define XBAR_DBCON3_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON3_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON3_DBSAT (rh) */
#define XBAR_DBCON3_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON3_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_REARM (w) */
#define XBAR_DBCON3_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON3_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_SETDBEVT (w) */
#define XBAR_DBCON3_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON3_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON3_RDEN (rw) */
#define XBAR_DBCON3_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON3_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON3_WREN (rw) */
#define XBAR_DBCON3_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON3_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON3_SVMEN (rw) */
#define XBAR_DBCON3_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON3_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_ADDEN (rw) */
#define XBAR_DBCON3_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON3_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_ERREN (rw) */
#define XBAR_DBCON3_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON3_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_MASEN (rw) */
#define XBAR_DBCON3_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON3_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON3_MASTER (rh) */
#define XBAR_DBCON3_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON3_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD3_ADDRESS (rw) */
#define XBAR_DBADD3_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD3_ADDRESS_LEN              _XBAR_UL(29)

/* XBAR_DBADD3_ONE (r) */
#define XBAR_DBADD3_ONE_POS                  _XBAR_UL(31)
#define XBAR_DBADD3_ONE_LEN                  _XBAR_UL(1)

/* XBAR_DBMADD3_ADDRESS (rw) */
#define XBAR_DBMADD3_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD3_ADDRESS_LEN             _XBAR_UL(29)

/* XBAR_DBMADD3_ONE (r) */
#define XBAR_DBMADD3_ONE_POS                 _XBAR_UL(31)
#define XBAR_DBMADD3_ONE_LEN                 _XBAR_UL(1)

/* XBAR_ARBCON4_PRERREN (rw) */
#define XBAR_ARBCON4_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON4_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON4_SCERREN (rw) */
#define XBAR_ARBCON4_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON4_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON4_SETPRINT (rwh) */
#define XBAR_ARBCON4_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON4_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON4_SETSCINT (rwh) */
#define XBAR_ARBCON4_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON4_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON4_INTACK (rwh) */
#define XBAR_ARBCON4_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON4_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON4_SMEN (rw) */
#define XBAR_ARBCON4_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON4_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON4_SPC (rw) */
#define XBAR_ARBCON4_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON4_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL4_MASTER0 (rw) */
#define XBAR_PRIOL4_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL4_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL4_MASTER1 (rw) */
#define XBAR_PRIOL4_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL4_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL4_MASTER2 (rw) */
#define XBAR_PRIOL4_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL4_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL4_MASTER3 (rw) */
#define XBAR_PRIOL4_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL4_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL4_MASTER4 (rw) */
#define XBAR_PRIOL4_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL4_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_PRIOL4_MASTER5 (rw) */
#define XBAR_PRIOL4_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOL4_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR4_ADDR (rh) */
#define XBAR_ERRADDR4_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR4_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR4_RD (rh) */
#define XBAR_ERR4_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR4_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR4_WR (rh) */
#define XBAR_ERR4_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR4_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR4_SVM (rh) */
#define XBAR_ERR4_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR4_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR4_OPC (rh) */
#define XBAR_ERR4_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR4_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR4_TR_ID (rh) */
#define XBAR_ERR4_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR4_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR4_ADDR_ECC (rh) */
#define XBAR_ERR4_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR4_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR4_MCI_SBS (rh) */
#define XBAR_ERR4_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR4_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON4_DBEN (r) */
#define XBAR_DBCON4_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON4_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON4_DBSAT (rh) */
#define XBAR_DBCON4_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON4_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_REARM (w) */
#define XBAR_DBCON4_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON4_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_SETDBEVT (w) */
#define XBAR_DBCON4_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON4_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON4_RDEN (rw) */
#define XBAR_DBCON4_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON4_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON4_WREN (rw) */
#define XBAR_DBCON4_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON4_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON4_SVMEN (rw) */
#define XBAR_DBCON4_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON4_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_ADDEN (rw) */
#define XBAR_DBCON4_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON4_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_ERREN (rw) */
#define XBAR_DBCON4_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON4_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_MASEN (rw) */
#define XBAR_DBCON4_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON4_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON4_MASTER (rh) */
#define XBAR_DBCON4_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON4_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD4_ADDRESS (rw) */
#define XBAR_DBADD4_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD4_ADDRESS_LEN              _XBAR_UL(29)

/* XBAR_DBADD4_ONE (r) */
#define XBAR_DBADD4_ONE_POS                  _XBAR_UL(31)
#define XBAR_DBADD4_ONE_LEN                  _XBAR_UL(1)

/* XBAR_DBMADD4_ADDRESS (rw) */
#define XBAR_DBMADD4_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD4_ADDRESS_LEN             _XBAR_UL(29)

/* XBAR_DBMADD4_ONE (r) */
#define XBAR_DBMADD4_ONE_POS                 _XBAR_UL(31)
#define XBAR_DBMADD4_ONE_LEN                 _XBAR_UL(1)

/* XBAR_ARBCON5_PRERREN (rw) */
#define XBAR_ARBCON5_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON5_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON5_SCERREN (rw) */
#define XBAR_ARBCON5_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON5_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON5_SETPRINT (rwh) */
#define XBAR_ARBCON5_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON5_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON5_SETSCINT (rwh) */
#define XBAR_ARBCON5_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON5_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON5_INTACK (rwh) */
#define XBAR_ARBCON5_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON5_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON5_SMEN (rw) */
#define XBAR_ARBCON5_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON5_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON5_SPC (rw) */
#define XBAR_ARBCON5_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON5_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL5_MASTER0 (rw) */
#define XBAR_PRIOL5_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL5_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL5_MASTER1 (rw) */
#define XBAR_PRIOL5_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL5_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL5_MASTER2 (rw) */
#define XBAR_PRIOL5_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL5_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL5_MASTER3 (rw) */
#define XBAR_PRIOL5_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL5_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL5_MASTER4 (rw) */
#define XBAR_PRIOL5_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL5_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_PRIOL5_MASTER5 (rw) */
#define XBAR_PRIOL5_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOL5_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR5_ADDR (rh) */
#define XBAR_ERRADDR5_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR5_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR5_RD (rh) */
#define XBAR_ERR5_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR5_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR5_WR (rh) */
#define XBAR_ERR5_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR5_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR5_SVM (rh) */
#define XBAR_ERR5_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR5_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR5_OPC (rh) */
#define XBAR_ERR5_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR5_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR5_TR_ID (rh) */
#define XBAR_ERR5_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR5_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR5_ADDR_ECC (rh) */
#define XBAR_ERR5_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR5_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR5_MCI_SBS (rh) */
#define XBAR_ERR5_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR5_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON5_DBEN (r) */
#define XBAR_DBCON5_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON5_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON5_DBSAT (rh) */
#define XBAR_DBCON5_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON5_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_REARM (w) */
#define XBAR_DBCON5_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON5_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_SETDBEVT (w) */
#define XBAR_DBCON5_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON5_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON5_RDEN (rw) */
#define XBAR_DBCON5_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON5_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON5_WREN (rw) */
#define XBAR_DBCON5_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON5_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON5_SVMEN (rw) */
#define XBAR_DBCON5_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON5_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_ADDEN (rw) */
#define XBAR_DBCON5_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON5_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_ERREN (rw) */
#define XBAR_DBCON5_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON5_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_MASEN (rw) */
#define XBAR_DBCON5_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON5_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON5_MASTER (rh) */
#define XBAR_DBCON5_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON5_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD5_ADDRESS (rw) */
#define XBAR_DBADD5_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD5_ADDRESS_LEN              _XBAR_UL(28)

/* XBAR_DBADD5_ONE (r) */
#define XBAR_DBADD5_ONE_POS                  _XBAR_UL(31)
#define XBAR_DBADD5_ONE_LEN                  _XBAR_UL(1)

/* XBAR_DBMADD5_ADDRESS (rw) */
#define XBAR_DBMADD5_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD5_ADDRESS_LEN             _XBAR_UL(28)

/* XBAR_DBMADD5_ONE (r) */
#define XBAR_DBMADD5_ONE_POS                 _XBAR_UL(30)
#define XBAR_DBMADD5_ONE_LEN                 _XBAR_UL(2)

/* XBAR_ARBCON6_PRERREN (rw) */
#define XBAR_ARBCON6_PRERREN_POS             _XBAR_UL(0)
#define XBAR_ARBCON6_PRERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON6_SCERREN (rw) */
#define XBAR_ARBCON6_SCERREN_POS             _XBAR_UL(1)
#define XBAR_ARBCON6_SCERREN_LEN             _XBAR_UL(1)

/* XBAR_ARBCON6_SETPRINT (rwh) */
#define XBAR_ARBCON6_SETPRINT_POS            _XBAR_UL(2)
#define XBAR_ARBCON6_SETPRINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON6_SETSCINT (rwh) */
#define XBAR_ARBCON6_SETSCINT_POS            _XBAR_UL(3)
#define XBAR_ARBCON6_SETSCINT_LEN            _XBAR_UL(1)

/* XBAR_ARBCON6_INTACK (rwh) */
#define XBAR_ARBCON6_INTACK_POS              _XBAR_UL(4)
#define XBAR_ARBCON6_INTACK_LEN              _XBAR_UL(1)

/* XBAR_ARBCON6_SMEN (rw) */
#define XBAR_ARBCON6_SMEN_POS                _XBAR_UL(19)
#define XBAR_ARBCON6_SMEN_LEN                _XBAR_UL(1)

/* XBAR_ARBCON6_SPC (rw) */
#define XBAR_ARBCON6_SPC_POS                 _XBAR_UL(20)
#define XBAR_ARBCON6_SPC_LEN                 _XBAR_UL(12)

/* XBAR_PRIOL6_MASTER0 (rw) */
#define XBAR_PRIOL6_MASTER0_POS              _XBAR_UL(0)
#define XBAR_PRIOL6_MASTER0_LEN              _XBAR_UL(4)

/* XBAR_PRIOL6_MASTER1 (rw) */
#define XBAR_PRIOL6_MASTER1_POS              _XBAR_UL(4)
#define XBAR_PRIOL6_MASTER1_LEN              _XBAR_UL(4)

/* XBAR_PRIOL6_MASTER2 (rw) */
#define XBAR_PRIOL6_MASTER2_POS              _XBAR_UL(8)
#define XBAR_PRIOL6_MASTER2_LEN              _XBAR_UL(4)

/* XBAR_PRIOL6_MASTER3 (rw) */
#define XBAR_PRIOL6_MASTER3_POS              _XBAR_UL(12)
#define XBAR_PRIOL6_MASTER3_LEN              _XBAR_UL(4)

/* XBAR_PRIOL6_MASTER4 (rw) */
#define XBAR_PRIOL6_MASTER4_POS              _XBAR_UL(16)
#define XBAR_PRIOL6_MASTER4_LEN              _XBAR_UL(4)

/* XBAR_PRIOL6_MASTER5 (rw) */
#define XBAR_PRIOL6_MASTER5_POS              _XBAR_UL(20)
#define XBAR_PRIOL6_MASTER5_LEN              _XBAR_UL(4)

/* XBAR_ERRADDR6_ADDR (rh) */
#define XBAR_ERRADDR6_ADDR_POS               _XBAR_UL(0)
#define XBAR_ERRADDR6_ADDR_LEN               _XBAR_UL(32)

/* XBAR_ERR6_RD (rh) */
#define XBAR_ERR6_RD_POS                     _XBAR_UL(0)
#define XBAR_ERR6_RD_LEN                     _XBAR_UL(1)

/* XBAR_ERR6_WR (rh) */
#define XBAR_ERR6_WR_POS                     _XBAR_UL(1)
#define XBAR_ERR6_WR_LEN                     _XBAR_UL(1)

/* XBAR_ERR6_SVM (rh) */
#define XBAR_ERR6_SVM_POS                    _XBAR_UL(2)
#define XBAR_ERR6_SVM_LEN                    _XBAR_UL(1)

/* XBAR_ERR6_OPC (rh) */
#define XBAR_ERR6_OPC_POS                    _XBAR_UL(4)
#define XBAR_ERR6_OPC_LEN                    _XBAR_UL(4)

/* XBAR_ERR6_TR_ID (rh) */
#define XBAR_ERR6_TR_ID_POS                  _XBAR_UL(8)
#define XBAR_ERR6_TR_ID_LEN                  _XBAR_UL(6)

/* XBAR_ERR6_ADDR_ECC (rh) */
#define XBAR_ERR6_ADDR_ECC_POS               _XBAR_UL(16)
#define XBAR_ERR6_ADDR_ECC_LEN               _XBAR_UL(8)

/* XBAR_ERR6_MCI_SBS (rh) */
#define XBAR_ERR6_MCI_SBS_POS                _XBAR_UL(24)
#define XBAR_ERR6_MCI_SBS_LEN                _XBAR_UL(8)

/* XBAR_DBCON6_DBEN (r) */
#define XBAR_DBCON6_DBEN_POS                 _XBAR_UL(0)
#define XBAR_DBCON6_DBEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON6_DBSAT (rh) */
#define XBAR_DBCON6_DBSAT_POS                _XBAR_UL(1)
#define XBAR_DBCON6_DBSAT_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_REARM (w) */
#define XBAR_DBCON6_REARM_POS                _XBAR_UL(2)
#define XBAR_DBCON6_REARM_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_SETDBEVT (w) */
#define XBAR_DBCON6_SETDBEVT_POS             _XBAR_UL(3)
#define XBAR_DBCON6_SETDBEVT_LEN             _XBAR_UL(1)

/* XBAR_DBCON6_RDEN (rw) */
#define XBAR_DBCON6_RDEN_POS                 _XBAR_UL(16)
#define XBAR_DBCON6_RDEN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON6_WREN (rw) */
#define XBAR_DBCON6_WREN_POS                 _XBAR_UL(17)
#define XBAR_DBCON6_WREN_LEN                 _XBAR_UL(1)

/* XBAR_DBCON6_SVMEN (rw) */
#define XBAR_DBCON6_SVMEN_POS                _XBAR_UL(18)
#define XBAR_DBCON6_SVMEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_ADDEN (rw) */
#define XBAR_DBCON6_ADDEN_POS                _XBAR_UL(19)
#define XBAR_DBCON6_ADDEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_ERREN (rw) */
#define XBAR_DBCON6_ERREN_POS                _XBAR_UL(20)
#define XBAR_DBCON6_ERREN_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_MASEN (rw) */
#define XBAR_DBCON6_MASEN_POS                _XBAR_UL(23)
#define XBAR_DBCON6_MASEN_LEN                _XBAR_UL(1)

/* XBAR_DBCON6_MASTER (rh) */
#define XBAR_DBCON6_MASTER_POS               _XBAR_UL(24)
#define XBAR_DBCON6_MASTER_LEN               _XBAR_UL(4)

/* XBAR_DBADD6_ADDRESS (rw) */
#define XBAR_DBADD6_ADDRESS_POS              _XBAR_UL(2)
#define XBAR_DBADD6_ADDRESS_LEN              _XBAR_UL(29)

/* XBAR_DBADD6_ONE (r) */
#define XBAR_DBADD6_ONE_POS                  _XBAR_UL(31)
#define XBAR_DBADD6_ONE_LEN                  _XBAR_UL(1)

/* XBAR_DBMADD6_ADDRESS (rw) */
#define XBAR_DBMADD6_ADDRESS_POS             _XBAR_UL(2)
#define XBAR_DBMADD6_ADDRESS_LEN             _XBAR_UL(29)

/* XBAR_DBMADD6_ONE (r) */
#define XBAR_DBMADD6_ONE_POS                 _XBAR_UL(31)
#define XBAR_DBMADD6_ONE_LEN                 _XBAR_UL(1)

/* XBAR_ID_MOD_REV (r) */
#define XBAR_ID_MOD_REV_POS                  _XBAR_UL(0)
#define XBAR_ID_MOD_REV_LEN                  _XBAR_UL(8)

/* XBAR_ID_MOD_TYPE (r) */
#define XBAR_ID_MOD_TYPE_POS                 _XBAR_UL(8)
#define XBAR_ID_MOD_TYPE_LEN                 _XBAR_UL(8)

/* XBAR_ID_MOD_NUMBER (r) */
#define XBAR_ID_MOD_NUMBER_POS               _XBAR_UL(16)
#define XBAR_ID_MOD_NUMBER_LEN               _XBAR_UL(16)

/* XBAR_DBSAT_SCI0 (rwh) */
#define XBAR_DBSAT_SCI0_POS                  _XBAR_UL(0)
#define XBAR_DBSAT_SCI0_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI1 (rwh) */
#define XBAR_DBSAT_SCI1_POS                  _XBAR_UL(1)
#define XBAR_DBSAT_SCI1_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI2 (rwh) */
#define XBAR_DBSAT_SCI2_POS                  _XBAR_UL(2)
#define XBAR_DBSAT_SCI2_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI3 (rwh) */
#define XBAR_DBSAT_SCI3_POS                  _XBAR_UL(3)
#define XBAR_DBSAT_SCI3_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI4 (rwh) */
#define XBAR_DBSAT_SCI4_POS                  _XBAR_UL(4)
#define XBAR_DBSAT_SCI4_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI5 (rwh) */
#define XBAR_DBSAT_SCI5_POS                  _XBAR_UL(5)
#define XBAR_DBSAT_SCI5_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCI6 (rwh) */
#define XBAR_DBSAT_SCI6_POS                  _XBAR_UL(6)
#define XBAR_DBSAT_SCI6_LEN                  _XBAR_UL(1)

/* XBAR_DBSAT_SCID (rwh) */
#define XBAR_DBSAT_SCID_POS                  _XBAR_UL(15)
#define XBAR_DBSAT_SCID_LEN                  _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI0 (rwh) */
#define XBAR_INTSAT_SCSCI0_POS               _XBAR_UL(0)
#define XBAR_INTSAT_SCSCI0_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI1 (rwh) */
#define XBAR_INTSAT_SCSCI1_POS               _XBAR_UL(1)
#define XBAR_INTSAT_SCSCI1_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI2 (rwh) */
#define XBAR_INTSAT_SCSCI2_POS               _XBAR_UL(2)
#define XBAR_INTSAT_SCSCI2_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI3 (rwh) */
#define XBAR_INTSAT_SCSCI3_POS               _XBAR_UL(3)
#define XBAR_INTSAT_SCSCI3_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI4 (rwh) */
#define XBAR_INTSAT_SCSCI4_POS               _XBAR_UL(4)
#define XBAR_INTSAT_SCSCI4_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI5 (rwh) */
#define XBAR_INTSAT_SCSCI5_POS               _XBAR_UL(5)
#define XBAR_INTSAT_SCSCI5_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCI6 (rwh) */
#define XBAR_INTSAT_SCSCI6_POS               _XBAR_UL(6)
#define XBAR_INTSAT_SCSCI6_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_SCSCID (rwh) */
#define XBAR_INTSAT_SCSCID_POS               _XBAR_UL(15)
#define XBAR_INTSAT_SCSCID_LEN               _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI16 (rwh) */
#define XBAR_INTSAT_PRSCI16_POS              _XBAR_UL(16)
#define XBAR_INTSAT_PRSCI16_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI17 (rwh) */
#define XBAR_INTSAT_PRSCI17_POS              _XBAR_UL(17)
#define XBAR_INTSAT_PRSCI17_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI18 (rwh) */
#define XBAR_INTSAT_PRSCI18_POS              _XBAR_UL(18)
#define XBAR_INTSAT_PRSCI18_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI19 (rwh) */
#define XBAR_INTSAT_PRSCI19_POS              _XBAR_UL(19)
#define XBAR_INTSAT_PRSCI19_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI20 (rwh) */
#define XBAR_INTSAT_PRSCI20_POS              _XBAR_UL(20)
#define XBAR_INTSAT_PRSCI20_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI21 (rwh) */
#define XBAR_INTSAT_PRSCI21_POS              _XBAR_UL(21)
#define XBAR_INTSAT_PRSCI21_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCI22 (rwh) */
#define XBAR_INTSAT_PRSCI22_POS              _XBAR_UL(22)
#define XBAR_INTSAT_PRSCI22_LEN              _XBAR_UL(1)

/* XBAR_INTSAT_PRSCID (rwh) */
#define XBAR_INTSAT_PRSCID_POS               _XBAR_UL(31)
#define XBAR_INTSAT_PRSCID_LEN               _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI0 (rwh) */
#define XBAR_IDINTSAT_IDSCI0_POS             _XBAR_UL(0)
#define XBAR_IDINTSAT_IDSCI0_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI1 (rwh) */
#define XBAR_IDINTSAT_IDSCI1_POS             _XBAR_UL(1)
#define XBAR_IDINTSAT_IDSCI1_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI2 (rwh) */
#define XBAR_IDINTSAT_IDSCI2_POS             _XBAR_UL(2)
#define XBAR_IDINTSAT_IDSCI2_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI3 (rwh) */
#define XBAR_IDINTSAT_IDSCI3_POS             _XBAR_UL(3)
#define XBAR_IDINTSAT_IDSCI3_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI4 (rwh) */
#define XBAR_IDINTSAT_IDSCI4_POS             _XBAR_UL(4)
#define XBAR_IDINTSAT_IDSCI4_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI5 (rwh) */
#define XBAR_IDINTSAT_IDSCI5_POS             _XBAR_UL(5)
#define XBAR_IDINTSAT_IDSCI5_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCI6 (rwh) */
#define XBAR_IDINTSAT_IDSCI6_POS             _XBAR_UL(6)
#define XBAR_IDINTSAT_IDSCI6_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDSCID (rwh) */
#define XBAR_IDINTSAT_IDSCID_POS             _XBAR_UL(15)
#define XBAR_IDINTSAT_IDSCID_LEN             _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI16 (rwh) */
#define XBAR_IDINTSAT_IDMCI16_POS            _XBAR_UL(16)
#define XBAR_IDINTSAT_IDMCI16_LEN            _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI17 (rwh) */
#define XBAR_IDINTSAT_IDMCI17_POS            _XBAR_UL(17)
#define XBAR_IDINTSAT_IDMCI17_LEN            _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI18 (rwh) */
#define XBAR_IDINTSAT_IDMCI18_POS            _XBAR_UL(18)
#define XBAR_IDINTSAT_IDMCI18_LEN            _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI19 (rwh) */
#define XBAR_IDINTSAT_IDMCI19_POS            _XBAR_UL(19)
#define XBAR_IDINTSAT_IDMCI19_LEN            _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI20 (rwh) */
#define XBAR_IDINTSAT_IDMCI20_POS            _XBAR_UL(20)
#define XBAR_IDINTSAT_IDMCI20_LEN            _XBAR_UL(1)

/* XBAR_IDINTSAT_IDMCI21 (rwh) */
#define XBAR_IDINTSAT_IDMCI21_POS            _XBAR_UL(21)
#define XBAR_IDINTSAT_IDMCI21_LEN            _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI0 (rw) */
#define XBAR_IDINTEN_ENSCI0_POS              _XBAR_UL(0)
#define XBAR_IDINTEN_ENSCI0_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI1 (rw) */
#define XBAR_IDINTEN_ENSCI1_POS              _XBAR_UL(1)
#define XBAR_IDINTEN_ENSCI1_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI2 (rw) */
#define XBAR_IDINTEN_ENSCI2_POS              _XBAR_UL(2)
#define XBAR_IDINTEN_ENSCI2_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI3 (rw) */
#define XBAR_IDINTEN_ENSCI3_POS              _XBAR_UL(3)
#define XBAR_IDINTEN_ENSCI3_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI4 (rw) */
#define XBAR_IDINTEN_ENSCI4_POS              _XBAR_UL(4)
#define XBAR_IDINTEN_ENSCI4_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI5 (rw) */
#define XBAR_IDINTEN_ENSCI5_POS              _XBAR_UL(5)
#define XBAR_IDINTEN_ENSCI5_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCI6 (rw) */
#define XBAR_IDINTEN_ENSCI6_POS              _XBAR_UL(6)
#define XBAR_IDINTEN_ENSCI6_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENSCID (rw) */
#define XBAR_IDINTEN_ENSCID_POS              _XBAR_UL(15)
#define XBAR_IDINTEN_ENSCID_LEN              _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI16 (rw) */
#define XBAR_IDINTEN_ENMCI16_POS             _XBAR_UL(16)
#define XBAR_IDINTEN_ENMCI16_LEN             _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI17 (rw) */
#define XBAR_IDINTEN_ENMCI17_POS             _XBAR_UL(17)
#define XBAR_IDINTEN_ENMCI17_LEN             _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI18 (rw) */
#define XBAR_IDINTEN_ENMCI18_POS             _XBAR_UL(18)
#define XBAR_IDINTEN_ENMCI18_LEN             _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI19 (rw) */
#define XBAR_IDINTEN_ENMCI19_POS             _XBAR_UL(19)
#define XBAR_IDINTEN_ENMCI19_LEN             _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI20 (rw) */
#define XBAR_IDINTEN_ENMCI20_POS             _XBAR_UL(20)
#define XBAR_IDINTEN_ENMCI20_LEN             _XBAR_UL(1)

/* XBAR_IDINTEN_ENMCI21 (rw) */
#define XBAR_IDINTEN_ENMCI21_POS             _XBAR_UL(21)
#define XBAR_IDINTEN_ENMCI21_LEN             _XBAR_UL(1)

/* XBAR_SRC_SRPN (rw) */
#define XBAR_SRC_SRPN_POS                    _XBAR_UL(0)
#define XBAR_SRC_SRPN_LEN                    _XBAR_UL(8)

/* XBAR_SRC_TOS (rw) */
#define XBAR_SRC_TOS_POS                     _XBAR_UL(10)
#define XBAR_SRC_TOS_LEN                     _XBAR_UL(2)

/* XBAR_SRC_SRE (rw) */
#define XBAR_SRC_SRE_POS                     _XBAR_UL(12)
#define XBAR_SRC_SRE_LEN                     _XBAR_UL(1)

/* XBAR_SRC_SRR (rh) */
#define XBAR_SRC_SRR_POS                     _XBAR_UL(13)
#define XBAR_SRC_SRR_LEN                     _XBAR_UL(1)

/* XBAR_SRC_CLRR (w) */
#define XBAR_SRC_CLRR_POS                    _XBAR_UL(14)
#define XBAR_SRC_CLRR_LEN                    _XBAR_UL(1)

/* XBAR_SRC_SETR (w) */
#define XBAR_SRC_SETR_POS                    _XBAR_UL(15)
#define XBAR_SRC_SETR_LEN                    _XBAR_UL(1)

#endif
