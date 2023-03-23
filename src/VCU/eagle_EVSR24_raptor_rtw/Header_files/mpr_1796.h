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
 * $Filename__:mpr_1796.h$ 
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
 * $Name______:mpr_1796$ 
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
 *      File name: mpr_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MPR_1796_H
#define _MPR_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _MPR_UL(x) x
#else
    #define _MPR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MPR on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 DPR0_0L;             // [0xF7E1C000] : Data Segment Protection Register Set 0, Range 0, Lower
    volatile uint32 DPR0_0U;             // [0xF7E1C004] : Data Segment Protection Register Set 0, Range 0, Upper
    volatile uint32 DPR0_1L;             // [0xF7E1C008] : Data Segment Protection Register Set 0, Range 1, Lower
    volatile uint32 DPR0_1U;             // [0xF7E1C00C] : Data Segment Protection Register Set 0, Range 1, Upper
    volatile uint32 DPR0_2L;             // [0xF7E1C010] : Data Segment Protection Register Set 0, Range 2, Lower
    volatile uint32 DPR0_2U;             // [0xF7E1C014] : Data Segment Protection Register Set 0, Range 2, Upper
    volatile uint32 DPR0_3L;             // [0xF7E1C018] : Data Segment Protection Register Set 0, Range 3, Lower
    volatile uint32 DPR0_3U;             // [0xF7E1C01C] : Data Segment Protection Register Set 0, Range 3, Upper
    volatile uint32 RESERVED0[248];      // [0xF0E1C020...0xF0E1C3FF] : reserved space
    volatile uint32 DPR1_0L;             // [0xF7E1C400] : Data Segment Protection Register Set 1, Range 0, Lower
    volatile uint32 DPR1_0U;             // [0xF7E1C404] : Data Segment Protection Register Set 1, Range 0, Upper
    volatile uint32 DPR1_1L;             // [0xF7E1C408] : Data Segment Protection Register Set 1, Range 1, Lower
    volatile uint32 DPR1_1U;             // [0xF7E1C40C] : Data Segment Protection Register Set 1, Range 1, Upper
    volatile uint32 DPR1_2L;             // [0xF7E1C410] : Data Segment Protection Register Set 1, Range 2, Lower
    volatile uint32 DPR1_2U;             // [0xF7E1C414] : Data Segment Protection Register Set 1, Range 2, Upper
    volatile uint32 DPR1_3L;             // [0xF7E1C418] : Data Segment Protection Register Set 1, Range 3, Lower
    volatile uint32 DPR1_3U;             // [0xF7E1C41C] : Data Segment Protection Register Set 1, Range 0, Upper
    volatile uint32 RESERVED1[760];      // [0xF0E1C420...0xF0E1CFFF] : reserved space
    volatile uint32 CPR0_0L;             // [0xF7E1D000] : Code Segment Protection Register Set 0, Range 0, Lower
    volatile uint32 CPR0_0U;             // [0xF7E1D004] : Code Segment Protection Register Set 0, Range 0, Upper
    volatile uint32 CPR0_1L;             // [0xF7E1D008] : Code Segment Protection Register Set 0, Range 1, Lower
    volatile uint32 CPR0_1U;             // [0xF7E1D00C] : Code Segment Protection Register Set 0, Range 1, Upper
    volatile uint32 RESERVED2[252];      // [0xF0E1D010...0xF0E1D3FF] : reserved space
    volatile uint32 CPR1_0L;             // [0xF7E1D400] : Code Segment Protection Register Set 1, Range 0, Lower
    volatile uint32 CPR1_0U;             // [0xF7E1D404] : Code Segment Protection Register Set 1, Range 0, Upper
    volatile uint32 CPR1_1L;             // [0xF7E1D408] : Code Segment Protection Register Set 1, Range 1, Lower
    volatile uint32 CPR1_1U;             // [0xF7E1D40C] : Code Segment Protection Register Set 1, Range 1, Upper
    volatile uint32 RESERVED3[764];      // [0xF0E1D410...0xF0E1DFFF] : reserved space
    volatile uint32 DPM0;                // [0xF7E1E000] : Data Memory Protection Mode Register 0
    volatile uint32 RESERVED4[31];       // [0xF0E1E004...0xF0E1E07F] : reserved space
    volatile uint32 DPM1;                // [0xF7E1E080] : Data Memory Protection Mode Register 1
    volatile uint32 RESERVED5[95];       // [0xF0E1E084...0xF0E1E1FF] : reserved space
    volatile uint32 CPM0;                // [0xF7E1E200] : Code Memory Protection Mode Register 0
    volatile uint32 RESERVED6[31];       // [0xF0E1E204...0xF0E1E27F] : reserved space
    volatile uint32 CPM1;                // [0xF7E1E280] : Code Memory Protection Mode Register 1
} MPR_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MPR_RegMap_t MPR __attribute__ ((asection (".bss.label_only")));

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

/* MPR_CPM0_BL0 (rw) */
#define MPR_CPM0_BL0_POS               _MPR_UL(3)
#define MPR_CPM0_BL0_LEN               _MPR_UL(1)

/* MPR_CPM0_BL1 (rw) */
#define MPR_CPM0_BL1_POS               _MPR_UL(11)
#define MPR_CPM0_BL1_LEN               _MPR_UL(1)

/* MPR_CPM0_BU0 (rw) */
#define MPR_CPM0_BU0_POS               _MPR_UL(0)
#define MPR_CPM0_BU0_LEN               _MPR_UL(1)

/* MPR_CPM0_BU1 (rw) */
#define MPR_CPM0_BU1_POS               _MPR_UL(8)
#define MPR_CPM0_BU1_LEN               _MPR_UL(1)

/* MPR_CPM0_XE0 (rw) */
#define MPR_CPM0_XE0_POS               _MPR_UL(7)
#define MPR_CPM0_XE0_LEN               _MPR_UL(1)

/* MPR_CPM0_XE1 (rw) */
#define MPR_CPM0_XE1_POS               _MPR_UL(15)
#define MPR_CPM0_XE1_LEN               _MPR_UL(1)

/* MPR_CPM0_XS0 (rw) */
#define MPR_CPM0_XS0_POS               _MPR_UL(5)
#define MPR_CPM0_XS0_LEN               _MPR_UL(1)

/* MPR_CPM0_XS1 (rw) */
#define MPR_CPM0_XS1_POS               _MPR_UL(13)
#define MPR_CPM0_XS1_LEN               _MPR_UL(1)

/* MPR_CPM1_BL0 (rw) */
#define MPR_CPM1_BL0_POS               _MPR_UL(3)
#define MPR_CPM1_BL0_LEN               _MPR_UL(1)

/* MPR_CPM1_BL1 (rw) */
#define MPR_CPM1_BL1_POS               _MPR_UL(11)
#define MPR_CPM1_BL1_LEN               _MPR_UL(1)

/* MPR_CPM1_BU0 (rw) */
#define MPR_CPM1_BU0_POS               _MPR_UL(0)
#define MPR_CPM1_BU0_LEN               _MPR_UL(1)

/* MPR_CPM1_BU1 (rw) */
#define MPR_CPM1_BU1_POS               _MPR_UL(8)
#define MPR_CPM1_BU1_LEN               _MPR_UL(1)

/* MPR_CPM1_XE0 (rw) */
#define MPR_CPM1_XE0_POS               _MPR_UL(7)
#define MPR_CPM1_XE0_LEN               _MPR_UL(1)

/* MPR_CPM1_XE1 (rw) */
#define MPR_CPM1_XE1_POS               _MPR_UL(15)
#define MPR_CPM1_XE1_LEN               _MPR_UL(1)

/* MPR_CPM1_XS0 (rw) */
#define MPR_CPM1_XS0_POS               _MPR_UL(5)
#define MPR_CPM1_XS0_LEN               _MPR_UL(1)

/* MPR_CPM1_XS1 (rw) */
#define MPR_CPM1_XS1_POS               _MPR_UL(13)
#define MPR_CPM1_XS1_LEN               _MPR_UL(1)

/* MPR_CPR0_0L_LOWBND (rw) */
#define MPR_CPR0_0L_LOWBND_POS         _MPR_UL(0)
#define MPR_CPR0_0L_LOWBND_LEN         _MPR_UL(32)

/* MPR_CPR0_0U_UPPBND (rw) */
#define MPR_CPR0_0U_UPPBND_POS         _MPR_UL(0)
#define MPR_CPR0_0U_UPPBND_LEN         _MPR_UL(32)

/* MPR_CPR0_1L_LOWBND (rw) */
#define MPR_CPR0_1L_LOWBND_POS         _MPR_UL(0)
#define MPR_CPR0_1L_LOWBND_LEN         _MPR_UL(32)

/* MPR_CPR0_1U_UPPBND (rw) */
#define MPR_CPR0_1U_UPPBND_POS         _MPR_UL(0)
#define MPR_CPR0_1U_UPPBND_LEN         _MPR_UL(32)

/* MPR_CPR1_0L_LOWBND (rw) */
#define MPR_CPR1_0L_LOWBND_POS         _MPR_UL(0)
#define MPR_CPR1_0L_LOWBND_LEN         _MPR_UL(32)

/* MPR_CPR1_0U_UPPBND (rw) */
#define MPR_CPR1_0U_UPPBND_POS         _MPR_UL(0)
#define MPR_CPR1_0U_UPPBND_LEN         _MPR_UL(32)

/* MPR_CPR1_1L_LOWBND (rw) */
#define MPR_CPR1_1L_LOWBND_POS         _MPR_UL(0)
#define MPR_CPR1_1L_LOWBND_LEN         _MPR_UL(32)

/* MPR_CPR1_1U_UPPBND (rw) */
#define MPR_CPR1_1U_UPPBND_POS         _MPR_UL(0)
#define MPR_CPR1_1U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPM0_RBL0 (rw) */
#define MPR_DPM0_RBL0_POS              _MPR_UL(2)
#define MPR_DPM0_RBL0_LEN              _MPR_UL(1)

/* MPR_DPM0_RBL1 (rw) */
#define MPR_DPM0_RBL1_POS              _MPR_UL(10)
#define MPR_DPM0_RBL1_LEN              _MPR_UL(1)

/* MPR_DPM0_RBL2 (rw) */
#define MPR_DPM0_RBL2_POS              _MPR_UL(18)
#define MPR_DPM0_RBL2_LEN              _MPR_UL(1)

/* MPR_DPM0_RBL3 (rw) */
#define MPR_DPM0_RBL3_POS              _MPR_UL(26)
#define MPR_DPM0_RBL3_LEN              _MPR_UL(1)

/* MPR_DPM0_RBU0 (rw) */
#define MPR_DPM0_RBU0_POS              _MPR_UL(0)
#define MPR_DPM0_RBU0_LEN              _MPR_UL(1)

/* MPR_DPM0_RBU1 (rw) */
#define MPR_DPM0_RBU1_POS              _MPR_UL(8)
#define MPR_DPM0_RBU1_LEN              _MPR_UL(1)

/* MPR_DPM0_RBU2 (rw) */
#define MPR_DPM0_RBU2_POS              _MPR_UL(16)
#define MPR_DPM0_RBU2_LEN              _MPR_UL(1)

/* MPR_DPM0_RBU3 (rw) */
#define MPR_DPM0_RBU3_POS              _MPR_UL(24)
#define MPR_DPM0_RBU3_LEN              _MPR_UL(1)

/* MPR_DPM0_RE0 (rw) */
#define MPR_DPM0_RE0_POS               _MPR_UL(6)
#define MPR_DPM0_RE0_LEN               _MPR_UL(1)

/* MPR_DPM0_RE1 (rw) */
#define MPR_DPM0_RE1_POS               _MPR_UL(14)
#define MPR_DPM0_RE1_LEN               _MPR_UL(1)

/* MPR_DPM0_RE2 (rw) */
#define MPR_DPM0_RE2_POS               _MPR_UL(22)
#define MPR_DPM0_RE2_LEN               _MPR_UL(1)

/* MPR_DPM0_RE3 (rw) */
#define MPR_DPM0_RE3_POS               _MPR_UL(30)
#define MPR_DPM0_RE3_LEN               _MPR_UL(1)

/* MPR_DPM0_RS0 (rw) */
#define MPR_DPM0_RS0_POS               _MPR_UL(4)
#define MPR_DPM0_RS0_LEN               _MPR_UL(1)

/* MPR_DPM0_RS1 (rw) */
#define MPR_DPM0_RS1_POS               _MPR_UL(12)
#define MPR_DPM0_RS1_LEN               _MPR_UL(1)

/* MPR_DPM0_RS2 (rw) */
#define MPR_DPM0_RS2_POS               _MPR_UL(20)
#define MPR_DPM0_RS2_LEN               _MPR_UL(1)

/* MPR_DPM0_RS3 (rw) */
#define MPR_DPM0_RS3_POS               _MPR_UL(28)
#define MPR_DPM0_RS3_LEN               _MPR_UL(1)

/* MPR_DPM0_WBL0 (rw) */
#define MPR_DPM0_WBL0_POS              _MPR_UL(3)
#define MPR_DPM0_WBL0_LEN              _MPR_UL(1)

/* MPR_DPM0_WBL1 (rw) */
#define MPR_DPM0_WBL1_POS              _MPR_UL(11)
#define MPR_DPM0_WBL1_LEN              _MPR_UL(1)

/* MPR_DPM0_WBL2 (rw) */
#define MPR_DPM0_WBL2_POS              _MPR_UL(19)
#define MPR_DPM0_WBL2_LEN              _MPR_UL(1)

/* MPR_DPM0_WBL3 (rw) */
#define MPR_DPM0_WBL3_POS              _MPR_UL(27)
#define MPR_DPM0_WBL3_LEN              _MPR_UL(1)

/* MPR_DPM0_WBU0 (rw) */
#define MPR_DPM0_WBU0_POS              _MPR_UL(1)
#define MPR_DPM0_WBU0_LEN              _MPR_UL(1)

/* MPR_DPM0_WBU1 (rw) */
#define MPR_DPM0_WBU1_POS              _MPR_UL(9)
#define MPR_DPM0_WBU1_LEN              _MPR_UL(1)

/* MPR_DPM0_WBU2 (rw) */
#define MPR_DPM0_WBU2_POS              _MPR_UL(17)
#define MPR_DPM0_WBU2_LEN              _MPR_UL(1)

/* MPR_DPM0_WBU3 (rw) */
#define MPR_DPM0_WBU3_POS              _MPR_UL(25)
#define MPR_DPM0_WBU3_LEN              _MPR_UL(1)

/* MPR_DPM0_WE0 (rw) */
#define MPR_DPM0_WE0_POS               _MPR_UL(7)
#define MPR_DPM0_WE0_LEN               _MPR_UL(1)

/* MPR_DPM0_WE1 (rw) */
#define MPR_DPM0_WE1_POS               _MPR_UL(15)
#define MPR_DPM0_WE1_LEN               _MPR_UL(1)

/* MPR_DPM0_WE2 (rw) */
#define MPR_DPM0_WE2_POS               _MPR_UL(23)
#define MPR_DPM0_WE2_LEN               _MPR_UL(1)

/* MPR_DPM0_WE3 (rw) */
#define MPR_DPM0_WE3_POS               _MPR_UL(31)
#define MPR_DPM0_WE3_LEN               _MPR_UL(1)

/* MPR_DPM0_WS0 (rw) */
#define MPR_DPM0_WS0_POS               _MPR_UL(5)
#define MPR_DPM0_WS0_LEN               _MPR_UL(1)

/* MPR_DPM0_WS1 (rw) */
#define MPR_DPM0_WS1_POS               _MPR_UL(13)
#define MPR_DPM0_WS1_LEN               _MPR_UL(1)

/* MPR_DPM0_WS2 (rw) */
#define MPR_DPM0_WS2_POS               _MPR_UL(21)
#define MPR_DPM0_WS2_LEN               _MPR_UL(1)

/* MPR_DPM0_WS3 (rw) */
#define MPR_DPM0_WS3_POS               _MPR_UL(29)
#define MPR_DPM0_WS3_LEN               _MPR_UL(1)

/* MPR_DPM1_RBL0 (rw) */
#define MPR_DPM1_RBL0_POS              _MPR_UL(2)
#define MPR_DPM1_RBL0_LEN              _MPR_UL(1)

/* MPR_DPM1_RBL1 (rw) */
#define MPR_DPM1_RBL1_POS              _MPR_UL(10)
#define MPR_DPM1_RBL1_LEN              _MPR_UL(1)

/* MPR_DPM1_RBL2 (rw) */
#define MPR_DPM1_RBL2_POS              _MPR_UL(18)
#define MPR_DPM1_RBL2_LEN              _MPR_UL(1)

/* MPR_DPM1_RBL3 (rw) */
#define MPR_DPM1_RBL3_POS              _MPR_UL(26)
#define MPR_DPM1_RBL3_LEN              _MPR_UL(1)

/* MPR_DPM1_RBU0 (rw) */
#define MPR_DPM1_RBU0_POS              _MPR_UL(0)
#define MPR_DPM1_RBU0_LEN              _MPR_UL(1)

/* MPR_DPM1_RBU1 (rw) */
#define MPR_DPM1_RBU1_POS              _MPR_UL(8)
#define MPR_DPM1_RBU1_LEN              _MPR_UL(1)

/* MPR_DPM1_RBU2 (rw) */
#define MPR_DPM1_RBU2_POS              _MPR_UL(16)
#define MPR_DPM1_RBU2_LEN              _MPR_UL(1)

/* MPR_DPM1_RBU3 (rw) */
#define MPR_DPM1_RBU3_POS              _MPR_UL(24)
#define MPR_DPM1_RBU3_LEN              _MPR_UL(1)

/* MPR_DPM1_RE0 (rw) */
#define MPR_DPM1_RE0_POS               _MPR_UL(6)
#define MPR_DPM1_RE0_LEN               _MPR_UL(1)

/* MPR_DPM1_RE1 (rw) */
#define MPR_DPM1_RE1_POS               _MPR_UL(14)
#define MPR_DPM1_RE1_LEN               _MPR_UL(1)

/* MPR_DPM1_RE2 (rw) */
#define MPR_DPM1_RE2_POS               _MPR_UL(22)
#define MPR_DPM1_RE2_LEN               _MPR_UL(1)

/* MPR_DPM1_RE3 (rw) */
#define MPR_DPM1_RE3_POS               _MPR_UL(30)
#define MPR_DPM1_RE3_LEN               _MPR_UL(1)

/* MPR_DPM1_RS0 (rw) */
#define MPR_DPM1_RS0_POS               _MPR_UL(4)
#define MPR_DPM1_RS0_LEN               _MPR_UL(1)

/* MPR_DPM1_RS1 (rw) */
#define MPR_DPM1_RS1_POS               _MPR_UL(12)
#define MPR_DPM1_RS1_LEN               _MPR_UL(1)

/* MPR_DPM1_RS2 (rw) */
#define MPR_DPM1_RS2_POS               _MPR_UL(20)
#define MPR_DPM1_RS2_LEN               _MPR_UL(1)

/* MPR_DPM1_RS3 (rw) */
#define MPR_DPM1_RS3_POS               _MPR_UL(28)
#define MPR_DPM1_RS3_LEN               _MPR_UL(1)

/* MPR_DPM1_WBL0 (rw) */
#define MPR_DPM1_WBL0_POS              _MPR_UL(3)
#define MPR_DPM1_WBL0_LEN              _MPR_UL(1)

/* MPR_DPM1_WBL1 (rw) */
#define MPR_DPM1_WBL1_POS              _MPR_UL(11)
#define MPR_DPM1_WBL1_LEN              _MPR_UL(1)

/* MPR_DPM1_WBL2 (rw) */
#define MPR_DPM1_WBL2_POS              _MPR_UL(19)
#define MPR_DPM1_WBL2_LEN              _MPR_UL(1)

/* MPR_DPM1_WBL3 (rw) */
#define MPR_DPM1_WBL3_POS              _MPR_UL(27)
#define MPR_DPM1_WBL3_LEN              _MPR_UL(1)

/* MPR_DPM1_WBU0 (rw) */
#define MPR_DPM1_WBU0_POS              _MPR_UL(1)
#define MPR_DPM1_WBU0_LEN              _MPR_UL(1)

/* MPR_DPM1_WBU1 (rw) */
#define MPR_DPM1_WBU1_POS              _MPR_UL(9)
#define MPR_DPM1_WBU1_LEN              _MPR_UL(1)

/* MPR_DPM1_WBU2 (rw) */
#define MPR_DPM1_WBU2_POS              _MPR_UL(17)
#define MPR_DPM1_WBU2_LEN              _MPR_UL(1)

/* MPR_DPM1_WBU3 (rw) */
#define MPR_DPM1_WBU3_POS              _MPR_UL(25)
#define MPR_DPM1_WBU3_LEN              _MPR_UL(1)

/* MPR_DPM1_WE0 (rw) */
#define MPR_DPM1_WE0_POS               _MPR_UL(7)
#define MPR_DPM1_WE0_LEN               _MPR_UL(1)

/* MPR_DPM1_WE1 (rw) */
#define MPR_DPM1_WE1_POS               _MPR_UL(15)
#define MPR_DPM1_WE1_LEN               _MPR_UL(1)

/* MPR_DPM1_WE2 (rw) */
#define MPR_DPM1_WE2_POS               _MPR_UL(23)
#define MPR_DPM1_WE2_LEN               _MPR_UL(1)

/* MPR_DPM1_WE3 (rw) */
#define MPR_DPM1_WE3_POS               _MPR_UL(31)
#define MPR_DPM1_WE3_LEN               _MPR_UL(1)

/* MPR_DPM1_WS0 (rw) */
#define MPR_DPM1_WS0_POS               _MPR_UL(5)
#define MPR_DPM1_WS0_LEN               _MPR_UL(1)

/* MPR_DPM1_WS1 (rw) */
#define MPR_DPM1_WS1_POS               _MPR_UL(13)
#define MPR_DPM1_WS1_LEN               _MPR_UL(1)

/* MPR_DPM1_WS2 (rw) */
#define MPR_DPM1_WS2_POS               _MPR_UL(21)
#define MPR_DPM1_WS2_LEN               _MPR_UL(1)

/* MPR_DPM1_WS3 (rw) */
#define MPR_DPM1_WS3_POS               _MPR_UL(29)
#define MPR_DPM1_WS3_LEN               _MPR_UL(1)

/* MPR_DPR0_0L_LOWBND (rw) */
#define MPR_DPR0_0L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR0_0L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR0_0U_UPPBND (rw) */
#define MPR_DPR0_0U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR0_0U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR0_1L_LOWBND (rw) */
#define MPR_DPR0_1L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR0_1L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR0_1U_UPPBND (rw) */
#define MPR_DPR0_1U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR0_1U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR0_2L_LOWBND (rw) */
#define MPR_DPR0_2L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR0_2L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR0_2U_UPPBND (rw) */
#define MPR_DPR0_2U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR0_2U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR0_3L_LOWBND (rw) */
#define MPR_DPR0_3L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR0_3L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR0_3U_UPPBND (rw) */
#define MPR_DPR0_3U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR0_3U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR1_0L_LOWBND (rw) */
#define MPR_DPR1_0L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR1_0L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR1_0U_UPPBND (rw) */
#define MPR_DPR1_0U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR1_0U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR1_1L_LOWBND (rw) */
#define MPR_DPR1_1L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR1_1L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR1_1U_UPPBND (rw) */
#define MPR_DPR1_1U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR1_1U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR1_2L_LOWBND (rw) */
#define MPR_DPR1_2L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR1_2L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR1_2U_UPPBND (rw) */
#define MPR_DPR1_2U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR1_2U_UPPBND_LEN         _MPR_UL(32)

/* MPR_DPR1_3L_LOWBND (rw) */
#define MPR_DPR1_3L_LOWBND_POS         _MPR_UL(0)
#define MPR_DPR1_3L_LOWBND_LEN         _MPR_UL(32)

/* MPR_DPR1_3U_UPPBND (rw) */
#define MPR_DPR1_3U_UPPBND_POS         _MPR_UL(0)
#define MPR_DPR1_3U_UPPBND_LEN         _MPR_UL(32)

#endif
