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
 * $Filename__:mpr_1724.h$ 
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
 * $Name______:mpr_1724$ 
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

#ifndef _MPR_1724_H
#define _MPR_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _MPR_UL(x) x
#else
    #define _MPR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MPR on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define MPR_DPR0_0L_MXCR_OFFSET		0xC000
#define MPR_DPR0_1L_MXCR_OFFSET		0xC008
#define MPR_DPR0_2L_MXCR_OFFSET		0xC010
#define MPR_DPR0_3L_MXCR_OFFSET		0xC018
#define MPR_DPR1_0L_MXCR_OFFSET		0xC400
#define MPR_DPR1_1L_MXCR_OFFSET		0xC408
#define MPR_DPR1_2L_MXCR_OFFSET		0xC410
#define MPR_DPR1_3L_MXCR_OFFSET		0xC418
#define MPR_DPR0_0U_MXCR_OFFSET		0xC004
#define MPR_DPR0_1U_MXCR_OFFSET		0xC00C
#define MPR_DPR0_2U_MXCR_OFFSET		0xC014
#define MPR_DPR0_3U_MXCR_OFFSET		0xC01C
#define MPR_DPR1_0U_MXCR_OFFSET		0xC404
#define MPR_DPR1_1U_MXCR_OFFSET		0xC40C
#define MPR_DPR1_2U_MXCR_OFFSET		0xC414
#define MPR_DPR1_3U_MXCR_OFFSET		0xC41C
#define MPR_DPR2_0L_MXCR_OFFSET		0xC800
#define MPR_DPR2_1L_MXCR_OFFSET		0xC808
#define MPR_DPR2_2L_MXCR_OFFSET		0xC810
#define MPR_DPR2_3L_MXCR_OFFSET		0xC818
#define MPR_DPR3_0L_MXCR_OFFSET		0xCC00
#define MPR_DPR3_1L_MXCR_OFFSET		0xCC08
#define MPR_DPR3_2L_MXCR_OFFSET		0xCC10
#define MPR_DPR3_3L_MXCR_OFFSET		0xCC18
#define MPR_DPR2_0U_MXCR_OFFSET		0xC804
#define MPR_DPR2_1U_MXCR_OFFSET		0xC80C
#define MPR_DPR2_2U_MXCR_OFFSET		0xC814
#define MPR_DPR2_3U_MXCR_OFFSET		0xC81C
#define MPR_DPR3_0U_MXCR_OFFSET		0xCC04
#define MPR_DPR3_1U_MXCR_OFFSET		0xCC0C
#define MPR_DPR3_2U_MXCR_OFFSET		0xCC14
#define MPR_DPR3_3U_MXCR_OFFSET		0xCC1C
#define MPR_CPR0_0L_MXCR_OFFSET		0xD000
#define MPR_CPR0_1L_MXCR_OFFSET		0xD008
#define MPR_CPR1_0L_MXCR_OFFSET		0xD400
#define MPR_CPR1_1L_MXCR_OFFSET		0xD408
#define MPR_CPR2_0L_MXCR_OFFSET		0xD800
#define MPR_CPR2_1L_MXCR_OFFSET		0xD808
#define MPR_CPR3_0L_MXCR_OFFSET		0xDC00
#define MPR_CPR3_1L_MXCR_OFFSET		0xDC08
#define MPR_CPR0_0U_MXCR_OFFSET		0xD004
#define MPR_CPR0_1U_MXCR_OFFSET		0xD00C
#define MPR_CPR1_0U_MXCR_OFFSET		0xD404
#define MPR_CPR1_1U_MXCR_OFFSET		0xD40C
#define MPR_CPR2_0U_MXCR_OFFSET		0xD804
#define MPR_CPR2_1U_MXCR_OFFSET		0xD80C
#define MPR_CPR3_0U_MXCR_OFFSET		0xDC04
#define MPR_CPR3_1U_MXCR_OFFSET		0xDC0C
#define MPR_DPM0_MXCR_OFFSET		0xE000
#define MPR_DPM1_MXCR_OFFSET		0xE080
#define MPR_DPM2_MXCR_OFFSET		0xE100
#define MPR_DPM3_MXCR_OFFSET		0xE180
#define MPR_CPM0_MXCR_OFFSET		0xE200
#define MPR_CPM1_MXCR_OFFSET		0xE280
#define MPR_CPM2_MXCR_OFFSET		0xE300
#define MPR_CPM3_MXCR_OFFSET		0xE380
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 DPR0_0L;             // [0xF7E1C000] : Data Segment Protection Register Set 0, Range 0, Lower Boundary
    volatile uint32 DPR0_0U;             // [0xF7E1C004] : Data Segment Protection Register Set 0, Range 0, Upper Boundary
    volatile uint32 DPR0_1L;             // [0xF7E1C008] : Data Segment Protection Register Set 0, Range 1, Lower Boundary
    volatile uint32 DPR0_1U;             // [0xF7E1C00C] : Data Segment Protection Register Set 0, Range 1, Upper Boundary
    volatile uint32 DPR0_2L;             // [0xF7E1C010] : Data Segment Protection Register Set 0, Range 2, Lower Boundary
    volatile uint32 DPR0_2U;             // [0xF7E1C014] : Data Segment Protection Register Set 0, Range 2, Upper Boundary
    volatile uint32 DPR0_3L;             // [0xF7E1C018] : Data Segment Protection Register Set 0, Range 3, Lower Boundary
    volatile uint32 DPR0_3U;             // [0xF7E1C01C] : Data Segment Protection Register Set 0, Range 3, Upper Boundary
    volatile uint32 RESERVED0[248];      // [0xF7E1C020...0xF7E1C3FF] : reserved space
    volatile uint32 DPR1_0L;             // [0xF7E1C400] : Data Segment Protection Register Set 1, Range 0, Lower Boundary
    volatile uint32 DPR1_0U;             // [0xF7E1C404] : Data Segment Protection Register Set 1, Range 0, Upper Boundary
    volatile uint32 DPR1_1L;             // [0xF7E1C408] : Data Segment Protection Register Set 1, Range 1, Lower Boundary
    volatile uint32 DPR1_1U;             // [0xF7E1C40C] : Data Segment Protection Register Set 1, Range 1, Upper Boundary
    volatile uint32 DPR1_2L;             // [0xF7E1C410] : Data Segment Protection Register Set 1, Range 2, Lower Boundary
    volatile uint32 DPR1_2U;             // [0xF7E1C414] : Data Segment Protection Register Set 1, Range 2, Upper Boundary
    volatile uint32 DPR1_3L;             // [0xF7E1C418] : Data Segment Protection Register Set 1, Range 3, Lower Boundary
    volatile uint32 DPR1_3U;             // [0xF7E1C41C] : Data Segment Protection Register Set 1, Range 3, Upper Boundary
    volatile uint32 RESERVED1[248];      // [0xF7E1C420...0xF7E1C7FF] : reserved space
    volatile uint32 DPR2_0L;             // [0xF7E1C800] : Data Segment Protection Register Set 2, Range 0, Lower Boundary
    volatile uint32 DPR2_0U;             // [0xF7E1C804] : Data Segment Protection Register Set 2, Range 0, Upper Boundary
    volatile uint32 DPR2_1L;             // [0xF7E1C808] : Data Segment Protection Register Set 2, Range 1, Lower Boundary
    volatile uint32 DPR2_1U;             // [0xF7E1C80C] : Data Segment Protection Register Set 2, Range 1, Upper Boundary
    volatile uint32 DPR2_2L;             // [0xF7E1C810] : Data Segment Protection Register Set 2, Range 2, Lower Boundary
    volatile uint32 DPR2_2U;             // [0xF7E1C814] : Data Segment Protection Register Set 2, Range 2, Upper Boundary
    volatile uint32 DPR2_3L;             // [0xF7E1C818] : Data Segment Protection Register Set 2, Range 3, Lower Boundary
    volatile uint32 DPR2_3U;             // [0xF7E1C81C] : Data Segment Protection Register Set 2, Range 3, Upper Boundary
    volatile uint32 RESERVED2[248];      // [0xF7E1C820...0xF7E1CBFF] : reserved space
    volatile uint32 DPR3_0L;             // [0xF7E1CC00] : Data Segment Protection Register Set 3, Range 0, Lower Boundary
    volatile uint32 DPR3_0U;             // [0xF7E1CC04] : Data Segment Protection Register Set 3, Range 0, Upper Boundary
    volatile uint32 DPR3_1L;             // [0xF7E1CC08] : Data Segment Protection Register Set 3, Range 1, Lower Boundary
    volatile uint32 DPR3_1U;             // [0xF7E1CC0C] : Data Segment Protection Register Set 3, Range 1, Upper Boundary
    volatile uint32 DPR3_2L;             // [0xF7E1CC10] : Data Segment Protection Register Set 3, Range 2, Lower Boundary
    volatile uint32 DPR3_2U;             // [0xF7E1CC14] : Data Segment Protection Register Set 3, Range 2, Upper Boundary
    volatile uint32 DPR3_3L;             // [0xF7E1CC18] : Data Segment Protection Register Set 3, Range 3, Lower Boundary
    volatile uint32 DPR3_3U;             // [0xF7E1CC1C] : Data Segment Protection Register Set 3, Range 3, Upper Boundary
    volatile uint32 RESERVED3[248];      // [0xF7E1CC20...0xF7E1CFFF] : reserved space
    volatile uint32 CPR0_0L;             // [0xF7E1D000] : Code Segment Protection Register Set 0, Range 0, Lower Boundary
    volatile uint32 CPR0_0U;             // [0xF7E1D004] : Code Segment Protection Register Set 0, Range 0, Upper Boundary
    volatile uint32 CPR0_1L;             // [0xF7E1D008] : Code Segment Protection Register Set 0, Range 1, Lower Boundary
    volatile uint32 CPR0_1U;             // [0xF7E1D00C] : Code Segment Protection Register Set 0, Range 1, Upper Boundary
    volatile uint32 RESERVED4[252];      // [0xF7E1D010...0xF7E1D3FF] : reserved space
    volatile uint32 CPR1_0L;             // [0xF7E1D400] : Code Segment Protection Register Set 1, Range 0, Lower Boundary
    volatile uint32 CPR1_0U;             // [0xF7E1D404] : Code Segment Protection Register Set 1, Range 0, Upper Boundary
    volatile uint32 CPR1_1L;             // [0xF7E1D408] : Code Segment Protection Register Set 1, Range 1, Lower Boundary
    volatile uint32 CPR1_1U;             // [0xF7E1D40C] : Code Segment Protection Register Set 1, Range 1, Upper Boundary
    volatile uint32 RESERVED5[252];      // [0xF7E1D410...0xF7E1D7FF] : reserved space
    volatile uint32 CPR2_0L;             // [0xF7E1D800] : Code Segment Protection Register Set 2, Range 0, Lower Boundary
    volatile uint32 CPR2_0U;             // [0xF7E1D804] : Code Segment Protection Register Set 2, Range 0, Upper Boundary
    volatile uint32 CPR2_1L;             // [0xF7E1D808] : Code Segment Protection Register Set 2, Range 1, Lower Boundary
    volatile uint32 CPR2_1U;             // [0xF7E1D80C] : Code Segment Protection Register Set 2, Range 1, Upper Boundary
    volatile uint32 RESERVED6[252];      // [0xF7E1D810...0xF7E1DBFF] : reserved space
    volatile uint32 CPR3_0L;             // [0xF7E1DC00] : Code Segment Protection Register Set 3, Range 0, Lower Boundary
    volatile uint32 CPR3_0U;             // [0xF7E1DC04] : Code Segment Protection Register Set 3, Range 0, Upper Boundary
    volatile uint32 CPR3_1L;             // [0xF7E1DC08] : Code Segment Protection Register Set 3, Range 1, Lower Boundary
    volatile uint32 CPR3_1U;             // [0xF7E1DC0C] : Code Segment Protection Register Set 3, Range 1, Upper Boundary
    volatile uint32 RESERVED7[252];      // [0xF7E1DC10...0xF7E1DFFF] : reserved space
    volatile uint32 DPM0;                // [0xF7E1E000] : Data Protection Mode Register Set 0
    volatile uint32 RESERVED8[31];       // [0xF7E1E004...0xF7E1E07F] : reserved space
    volatile uint32 DPM1;                // [0xF7E1E080] : Data Protection Mode Register Set 1
    volatile uint32 RESERVED9[31];       // [0xF7E1E084...0xF7E1E0FF] : reserved space
    volatile uint32 DPM2;                // [0xF7E1E100] : Data Protection Mode Register Set 2
    volatile uint32 RESERVED10[31];      // [0xF7E1E104...0xF7E1E17F] : reserved space
    volatile uint32 DPM3;                // [0xF7E1E180] : Data Protection Mode Register Set 3
    volatile uint32 RESERVED11[31];      // [0xF7E1E184...0xF7E1E1FF] : reserved space
    volatile uint32 CPM0;                // [0xF7E1E200] : Code Protection Mode Register Set 0
    volatile uint32 RESERVED12[31];      // [0xF7E1E204...0xF7E1E27F] : reserved space
    volatile uint32 CPM1;                // [0xF7E1E280] : Code Protection Mode Register Set 1
    volatile uint32 RESERVED13[31];      // [0xF7E1E284...0xF7E1E2FF] : reserved space
    volatile uint32 CPM2;                // [0xF7E1E300] : Code Protection Mode Register Set 2
    volatile uint32 RESERVED14[31];      // [0xF7E1E304...0xF7E1E37F] : reserved space
    volatile uint32 CPM3;                // [0xF7E1E380] : Code Protection Mode Register Set 3
} MPR_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MPR_RegMap_t MPR __attribute__ ((asection (".bss.label_only")));
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

/* MPR_ID_MOD_NUMBER (r) */
#define MPR_ID_MOD_NUMBER_POS                _MPR_UL(16)
#define MPR_ID_MOD_NUMBER_LEN                _MPR_UL(16)

/* MPR_ID_MOD_REV (r) */
#define MPR_ID_MOD_REV_POS                   _MPR_UL(0)
#define MPR_ID_MOD_REV_LEN                   _MPR_UL(8)

/* MPR_ID_MOD_TYPE (r) */
#define MPR_ID_MOD_TYPE_POS                  _MPR_UL(8)
#define MPR_ID_MOD_TYPE_LEN                  _MPR_UL(8)

/* MPR_DPR0_0L_LOWBND (rw) */
#define MPR_DPR0_0L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR0_0L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR0_0U_UPPBND (rw) */
#define MPR_DPR0_0U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR0_0U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR0_1L_LOWBND (rw) */
#define MPR_DPR0_1L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR0_1L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR0_1U_UPPBND (rw) */
#define MPR_DPR0_1U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR0_1U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR0_2L_LOWBND (rw) */
#define MPR_DPR0_2L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR0_2L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR0_2U_UPPBND (rw) */
#define MPR_DPR0_2U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR0_2U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR0_3L_LOWBND (rw) */
#define MPR_DPR0_3L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR0_3L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR0_3U_UPPBND (rw) */
#define MPR_DPR0_3U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR0_3U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR1_0L_LOWBND (rw) */
#define MPR_DPR1_0L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR1_0L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR1_0U_UPPBND (rw) */
#define MPR_DPR1_0U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR1_0U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR1_1L_LOWBND (rw) */
#define MPR_DPR1_1L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR1_1L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR1_1U_UPPBND (rw) */
#define MPR_DPR1_1U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR1_1U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR1_2L_LOWBND (rw) */
#define MPR_DPR1_2L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR1_2L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR1_2U_UPPBND (rw) */
#define MPR_DPR1_2U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR1_2U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR1_3L_LOWBND (rw) */
#define MPR_DPR1_3L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR1_3L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR1_3U_UPPBND (rw) */
#define MPR_DPR1_3U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR1_3U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR2_0L_LOWBND (rw) */
#define MPR_DPR2_0L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR2_0L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR2_0U_UPPBND (rw) */
#define MPR_DPR2_0U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR2_0U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR2_1L_LOWBND (rw) */
#define MPR_DPR2_1L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR2_1L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR2_1U_UPPBND (rw) */
#define MPR_DPR2_1U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR2_1U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR2_2L_LOWBND (rw) */
#define MPR_DPR2_2L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR2_2L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR2_2U_UPPBND (rw) */
#define MPR_DPR2_2U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR2_2U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR2_3L_LOWBND (rw) */
#define MPR_DPR2_3L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR2_3L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR2_3U_UPPBND (rw) */
#define MPR_DPR2_3U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR2_3U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR3_0L_LOWBND (rw) */
#define MPR_DPR3_0L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR3_0L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR3_0U_UPPBND (rw) */
#define MPR_DPR3_0U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR3_0U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR3_1L_LOWBND (rw) */
#define MPR_DPR3_1L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR3_1L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR3_1U_UPPBND (rw) */
#define MPR_DPR3_1U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR3_1U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR3_2L_LOWBND (rw) */
#define MPR_DPR3_2L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR3_2L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR3_2U_UPPBND (rw) */
#define MPR_DPR3_2U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR3_2U_UPPBND_LEN               _MPR_UL(32)

/* MPR_DPR3_3L_LOWBND (rw) */
#define MPR_DPR3_3L_LOWBND_POS               _MPR_UL(0)
#define MPR_DPR3_3L_LOWBND_LEN               _MPR_UL(32)

/* MPR_DPR3_3U_UPPBND (rw) */
#define MPR_DPR3_3U_UPPBND_POS               _MPR_UL(0)
#define MPR_DPR3_3U_UPPBND_LEN               _MPR_UL(32)

/* MPR_CPR0_0L_LOWBND (rw) */
#define MPR_CPR0_0L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR0_0L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR0_0U_UPPBND (rw) */
#define MPR_CPR0_0U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR0_0U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR0_1L_LOWBND (rw) */
#define MPR_CPR0_1L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR0_1L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR0_1U_UPPBND (rw) */
#define MPR_CPR0_1U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR0_1U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR1_0L_LOWBND (rw) */
#define MPR_CPR1_0L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR1_0L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR1_0U_UPPBND (rw) */
#define MPR_CPR1_0U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR1_0U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR1_1L_LOWBND (rw) */
#define MPR_CPR1_1L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR1_1L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR1_1U_UPPBND (rw) */
#define MPR_CPR1_1U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR1_1U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR2_0L_LOWBND (rw) */
#define MPR_CPR2_0L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR2_0L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR2_0U_UPPBND (rw) */
#define MPR_CPR2_0U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR2_0U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR2_1L_LOWBND (rw) */
#define MPR_CPR2_1L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR2_1L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR2_1U_UPPBND (rw) */
#define MPR_CPR2_1U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR2_1U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR3_0L_LOWBND (rw) */
#define MPR_CPR3_0L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR3_0L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR3_0U_UPPBND (rw) */
#define MPR_CPR3_0U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR3_0U_UPPBND_LEN               _MPR_UL(31)

/* MPR_CPR3_1L_LOWBND (rw) */
#define MPR_CPR3_1L_LOWBND_POS               _MPR_UL(1)
#define MPR_CPR3_1L_LOWBND_LEN               _MPR_UL(31)

/* MPR_CPR3_1U_UPPBND (rw) */
#define MPR_CPR3_1U_UPPBND_POS               _MPR_UL(1)
#define MPR_CPR3_1U_UPPBND_LEN               _MPR_UL(31)

/* MPR_DPM0_RBU0 (rw) */
#define MPR_DPM0_RBU0_POS                    _MPR_UL(0)
#define MPR_DPM0_RBU0_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBU0 (rw) */
#define MPR_DPM0_WBU0_POS                    _MPR_UL(1)
#define MPR_DPM0_WBU0_LEN                    _MPR_UL(1)

/* MPR_DPM0_RBL0 (rw) */
#define MPR_DPM0_RBL0_POS                    _MPR_UL(2)
#define MPR_DPM0_RBL0_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBL0 (rw) */
#define MPR_DPM0_WBL0_POS                    _MPR_UL(3)
#define MPR_DPM0_WBL0_LEN                    _MPR_UL(1)

/* MPR_DPM0_RS0 (rw) */
#define MPR_DPM0_RS0_POS                     _MPR_UL(4)
#define MPR_DPM0_RS0_LEN                     _MPR_UL(1)

/* MPR_DPM0_WS0 (rw) */
#define MPR_DPM0_WS0_POS                     _MPR_UL(5)
#define MPR_DPM0_WS0_LEN                     _MPR_UL(1)

/* MPR_DPM0_RE0 (rw) */
#define MPR_DPM0_RE0_POS                     _MPR_UL(6)
#define MPR_DPM0_RE0_LEN                     _MPR_UL(1)

/* MPR_DPM0_WE0 (rw) */
#define MPR_DPM0_WE0_POS                     _MPR_UL(7)
#define MPR_DPM0_WE0_LEN                     _MPR_UL(1)

/* MPR_DPM0_RBU1 (rw) */
#define MPR_DPM0_RBU1_POS                    _MPR_UL(8)
#define MPR_DPM0_RBU1_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBU1 (rw) */
#define MPR_DPM0_WBU1_POS                    _MPR_UL(9)
#define MPR_DPM0_WBU1_LEN                    _MPR_UL(1)

/* MPR_DPM0_RBL1 (rw) */
#define MPR_DPM0_RBL1_POS                    _MPR_UL(10)
#define MPR_DPM0_RBL1_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBL1 (rw) */
#define MPR_DPM0_WBL1_POS                    _MPR_UL(11)
#define MPR_DPM0_WBL1_LEN                    _MPR_UL(1)

/* MPR_DPM0_RS1 (rw) */
#define MPR_DPM0_RS1_POS                     _MPR_UL(12)
#define MPR_DPM0_RS1_LEN                     _MPR_UL(1)

/* MPR_DPM0_WS1 (rw) */
#define MPR_DPM0_WS1_POS                     _MPR_UL(13)
#define MPR_DPM0_WS1_LEN                     _MPR_UL(1)

/* MPR_DPM0_RE1 (rw) */
#define MPR_DPM0_RE1_POS                     _MPR_UL(14)
#define MPR_DPM0_RE1_LEN                     _MPR_UL(1)

/* MPR_DPM0_WE1 (rw) */
#define MPR_DPM0_WE1_POS                     _MPR_UL(15)
#define MPR_DPM0_WE1_LEN                     _MPR_UL(1)

/* MPR_DPM0_RBU2 (rw) */
#define MPR_DPM0_RBU2_POS                    _MPR_UL(16)
#define MPR_DPM0_RBU2_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBU2 (rw) */
#define MPR_DPM0_WBU2_POS                    _MPR_UL(17)
#define MPR_DPM0_WBU2_LEN                    _MPR_UL(1)

/* MPR_DPM0_RBL2 (rw) */
#define MPR_DPM0_RBL2_POS                    _MPR_UL(18)
#define MPR_DPM0_RBL2_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBL2 (rw) */
#define MPR_DPM0_WBL2_POS                    _MPR_UL(19)
#define MPR_DPM0_WBL2_LEN                    _MPR_UL(1)

/* MPR_DPM0_RS2 (rw) */
#define MPR_DPM0_RS2_POS                     _MPR_UL(20)
#define MPR_DPM0_RS2_LEN                     _MPR_UL(1)

/* MPR_DPM0_WS2 (rw) */
#define MPR_DPM0_WS2_POS                     _MPR_UL(21)
#define MPR_DPM0_WS2_LEN                     _MPR_UL(1)

/* MPR_DPM0_RE2 (rw) */
#define MPR_DPM0_RE2_POS                     _MPR_UL(22)
#define MPR_DPM0_RE2_LEN                     _MPR_UL(1)

/* MPR_DPM0_WE2 (rw) */
#define MPR_DPM0_WE2_POS                     _MPR_UL(23)
#define MPR_DPM0_WE2_LEN                     _MPR_UL(1)

/* MPR_DPM0_RBU3 (rw) */
#define MPR_DPM0_RBU3_POS                    _MPR_UL(24)
#define MPR_DPM0_RBU3_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBU3 (rw) */
#define MPR_DPM0_WBU3_POS                    _MPR_UL(25)
#define MPR_DPM0_WBU3_LEN                    _MPR_UL(1)

/* MPR_DPM0_RBL3 (rw) */
#define MPR_DPM0_RBL3_POS                    _MPR_UL(26)
#define MPR_DPM0_RBL3_LEN                    _MPR_UL(1)

/* MPR_DPM0_WBL3 (rw) */
#define MPR_DPM0_WBL3_POS                    _MPR_UL(27)
#define MPR_DPM0_WBL3_LEN                    _MPR_UL(1)

/* MPR_DPM0_RS3 (rw) */
#define MPR_DPM0_RS3_POS                     _MPR_UL(28)
#define MPR_DPM0_RS3_LEN                     _MPR_UL(1)

/* MPR_DPM0_WS3 (rw) */
#define MPR_DPM0_WS3_POS                     _MPR_UL(29)
#define MPR_DPM0_WS3_LEN                     _MPR_UL(1)

/* MPR_DPM0_RE3 (rw) */
#define MPR_DPM0_RE3_POS                     _MPR_UL(30)
#define MPR_DPM0_RE3_LEN                     _MPR_UL(1)

/* MPR_DPM0_WE3 (rw) */
#define MPR_DPM0_WE3_POS                     _MPR_UL(31)
#define MPR_DPM0_WE3_LEN                     _MPR_UL(1)

/* MPR_DPM1_RBU0 (rw) */
#define MPR_DPM1_RBU0_POS                    _MPR_UL(0)
#define MPR_DPM1_RBU0_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBU0 (rw) */
#define MPR_DPM1_WBU0_POS                    _MPR_UL(1)
#define MPR_DPM1_WBU0_LEN                    _MPR_UL(1)

/* MPR_DPM1_RBL0 (rw) */
#define MPR_DPM1_RBL0_POS                    _MPR_UL(2)
#define MPR_DPM1_RBL0_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBL0 (rw) */
#define MPR_DPM1_WBL0_POS                    _MPR_UL(3)
#define MPR_DPM1_WBL0_LEN                    _MPR_UL(1)

/* MPR_DPM1_RS0 (rw) */
#define MPR_DPM1_RS0_POS                     _MPR_UL(4)
#define MPR_DPM1_RS0_LEN                     _MPR_UL(1)

/* MPR_DPM1_WS0 (rw) */
#define MPR_DPM1_WS0_POS                     _MPR_UL(5)
#define MPR_DPM1_WS0_LEN                     _MPR_UL(1)

/* MPR_DPM1_RE0 (rw) */
#define MPR_DPM1_RE0_POS                     _MPR_UL(6)
#define MPR_DPM1_RE0_LEN                     _MPR_UL(1)

/* MPR_DPM1_WE0 (rw) */
#define MPR_DPM1_WE0_POS                     _MPR_UL(7)
#define MPR_DPM1_WE0_LEN                     _MPR_UL(1)

/* MPR_DPM1_RBU1 (rw) */
#define MPR_DPM1_RBU1_POS                    _MPR_UL(8)
#define MPR_DPM1_RBU1_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBU1 (rw) */
#define MPR_DPM1_WBU1_POS                    _MPR_UL(9)
#define MPR_DPM1_WBU1_LEN                    _MPR_UL(1)

/* MPR_DPM1_RBL1 (rw) */
#define MPR_DPM1_RBL1_POS                    _MPR_UL(10)
#define MPR_DPM1_RBL1_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBL1 (rw) */
#define MPR_DPM1_WBL1_POS                    _MPR_UL(11)
#define MPR_DPM1_WBL1_LEN                    _MPR_UL(1)

/* MPR_DPM1_RS1 (rw) */
#define MPR_DPM1_RS1_POS                     _MPR_UL(12)
#define MPR_DPM1_RS1_LEN                     _MPR_UL(1)

/* MPR_DPM1_WS1 (rw) */
#define MPR_DPM1_WS1_POS                     _MPR_UL(13)
#define MPR_DPM1_WS1_LEN                     _MPR_UL(1)

/* MPR_DPM1_RE1 (rw) */
#define MPR_DPM1_RE1_POS                     _MPR_UL(14)
#define MPR_DPM1_RE1_LEN                     _MPR_UL(1)

/* MPR_DPM1_WE1 (rw) */
#define MPR_DPM1_WE1_POS                     _MPR_UL(15)
#define MPR_DPM1_WE1_LEN                     _MPR_UL(1)

/* MPR_DPM1_RBU2 (rw) */
#define MPR_DPM1_RBU2_POS                    _MPR_UL(16)
#define MPR_DPM1_RBU2_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBU2 (rw) */
#define MPR_DPM1_WBU2_POS                    _MPR_UL(17)
#define MPR_DPM1_WBU2_LEN                    _MPR_UL(1)

/* MPR_DPM1_RBL2 (rw) */
#define MPR_DPM1_RBL2_POS                    _MPR_UL(18)
#define MPR_DPM1_RBL2_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBL2 (rw) */
#define MPR_DPM1_WBL2_POS                    _MPR_UL(19)
#define MPR_DPM1_WBL2_LEN                    _MPR_UL(1)

/* MPR_DPM1_RS2 (rw) */
#define MPR_DPM1_RS2_POS                     _MPR_UL(20)
#define MPR_DPM1_RS2_LEN                     _MPR_UL(1)

/* MPR_DPM1_WS2 (rw) */
#define MPR_DPM1_WS2_POS                     _MPR_UL(21)
#define MPR_DPM1_WS2_LEN                     _MPR_UL(1)

/* MPR_DPM1_RE2 (rw) */
#define MPR_DPM1_RE2_POS                     _MPR_UL(22)
#define MPR_DPM1_RE2_LEN                     _MPR_UL(1)

/* MPR_DPM1_WE2 (rw) */
#define MPR_DPM1_WE2_POS                     _MPR_UL(23)
#define MPR_DPM1_WE2_LEN                     _MPR_UL(1)

/* MPR_DPM1_RBU3 (rw) */
#define MPR_DPM1_RBU3_POS                    _MPR_UL(24)
#define MPR_DPM1_RBU3_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBU3 (rw) */
#define MPR_DPM1_WBU3_POS                    _MPR_UL(25)
#define MPR_DPM1_WBU3_LEN                    _MPR_UL(1)

/* MPR_DPM1_RBL3 (rw) */
#define MPR_DPM1_RBL3_POS                    _MPR_UL(26)
#define MPR_DPM1_RBL3_LEN                    _MPR_UL(1)

/* MPR_DPM1_WBL3 (rw) */
#define MPR_DPM1_WBL3_POS                    _MPR_UL(27)
#define MPR_DPM1_WBL3_LEN                    _MPR_UL(1)

/* MPR_DPM1_RS3 (rw) */
#define MPR_DPM1_RS3_POS                     _MPR_UL(28)
#define MPR_DPM1_RS3_LEN                     _MPR_UL(1)

/* MPR_DPM1_WS3 (rw) */
#define MPR_DPM1_WS3_POS                     _MPR_UL(29)
#define MPR_DPM1_WS3_LEN                     _MPR_UL(1)

/* MPR_DPM1_RE3 (rw) */
#define MPR_DPM1_RE3_POS                     _MPR_UL(30)
#define MPR_DPM1_RE3_LEN                     _MPR_UL(1)

/* MPR_DPM1_WE3 (rw) */
#define MPR_DPM1_WE3_POS                     _MPR_UL(31)
#define MPR_DPM1_WE3_LEN                     _MPR_UL(1)

/* MPR_DPM2_RBU0 (rw) */
#define MPR_DPM2_RBU0_POS                    _MPR_UL(0)
#define MPR_DPM2_RBU0_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBU0 (rw) */
#define MPR_DPM2_WBU0_POS                    _MPR_UL(1)
#define MPR_DPM2_WBU0_LEN                    _MPR_UL(1)

/* MPR_DPM2_RBL0 (rw) */
#define MPR_DPM2_RBL0_POS                    _MPR_UL(2)
#define MPR_DPM2_RBL0_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBL0 (rw) */
#define MPR_DPM2_WBL0_POS                    _MPR_UL(3)
#define MPR_DPM2_WBL0_LEN                    _MPR_UL(1)

/* MPR_DPM2_RS0 (rw) */
#define MPR_DPM2_RS0_POS                     _MPR_UL(4)
#define MPR_DPM2_RS0_LEN                     _MPR_UL(1)

/* MPR_DPM2_WS0 (rw) */
#define MPR_DPM2_WS0_POS                     _MPR_UL(5)
#define MPR_DPM2_WS0_LEN                     _MPR_UL(1)

/* MPR_DPM2_RE0 (rw) */
#define MPR_DPM2_RE0_POS                     _MPR_UL(6)
#define MPR_DPM2_RE0_LEN                     _MPR_UL(1)

/* MPR_DPM2_WE0 (rw) */
#define MPR_DPM2_WE0_POS                     _MPR_UL(7)
#define MPR_DPM2_WE0_LEN                     _MPR_UL(1)

/* MPR_DPM2_RBU1 (rw) */
#define MPR_DPM2_RBU1_POS                    _MPR_UL(8)
#define MPR_DPM2_RBU1_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBU1 (rw) */
#define MPR_DPM2_WBU1_POS                    _MPR_UL(9)
#define MPR_DPM2_WBU1_LEN                    _MPR_UL(1)

/* MPR_DPM2_RBL1 (rw) */
#define MPR_DPM2_RBL1_POS                    _MPR_UL(10)
#define MPR_DPM2_RBL1_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBL1 (rw) */
#define MPR_DPM2_WBL1_POS                    _MPR_UL(11)
#define MPR_DPM2_WBL1_LEN                    _MPR_UL(1)

/* MPR_DPM2_RS1 (rw) */
#define MPR_DPM2_RS1_POS                     _MPR_UL(12)
#define MPR_DPM2_RS1_LEN                     _MPR_UL(1)

/* MPR_DPM2_WS1 (rw) */
#define MPR_DPM2_WS1_POS                     _MPR_UL(13)
#define MPR_DPM2_WS1_LEN                     _MPR_UL(1)

/* MPR_DPM2_RE1 (rw) */
#define MPR_DPM2_RE1_POS                     _MPR_UL(14)
#define MPR_DPM2_RE1_LEN                     _MPR_UL(1)

/* MPR_DPM2_WE1 (rw) */
#define MPR_DPM2_WE1_POS                     _MPR_UL(15)
#define MPR_DPM2_WE1_LEN                     _MPR_UL(1)

/* MPR_DPM2_RBU2 (rw) */
#define MPR_DPM2_RBU2_POS                    _MPR_UL(16)
#define MPR_DPM2_RBU2_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBU2 (rw) */
#define MPR_DPM2_WBU2_POS                    _MPR_UL(17)
#define MPR_DPM2_WBU2_LEN                    _MPR_UL(1)

/* MPR_DPM2_RBL2 (rw) */
#define MPR_DPM2_RBL2_POS                    _MPR_UL(18)
#define MPR_DPM2_RBL2_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBL2 (rw) */
#define MPR_DPM2_WBL2_POS                    _MPR_UL(19)
#define MPR_DPM2_WBL2_LEN                    _MPR_UL(1)

/* MPR_DPM2_RS2 (rw) */
#define MPR_DPM2_RS2_POS                     _MPR_UL(20)
#define MPR_DPM2_RS2_LEN                     _MPR_UL(1)

/* MPR_DPM2_WS2 (rw) */
#define MPR_DPM2_WS2_POS                     _MPR_UL(21)
#define MPR_DPM2_WS2_LEN                     _MPR_UL(1)

/* MPR_DPM2_RE2 (rw) */
#define MPR_DPM2_RE2_POS                     _MPR_UL(22)
#define MPR_DPM2_RE2_LEN                     _MPR_UL(1)

/* MPR_DPM2_WE2 (rw) */
#define MPR_DPM2_WE2_POS                     _MPR_UL(23)
#define MPR_DPM2_WE2_LEN                     _MPR_UL(1)

/* MPR_DPM2_RBU3 (rw) */
#define MPR_DPM2_RBU3_POS                    _MPR_UL(24)
#define MPR_DPM2_RBU3_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBU3 (rw) */
#define MPR_DPM2_WBU3_POS                    _MPR_UL(25)
#define MPR_DPM2_WBU3_LEN                    _MPR_UL(1)

/* MPR_DPM2_RBL3 (rw) */
#define MPR_DPM2_RBL3_POS                    _MPR_UL(26)
#define MPR_DPM2_RBL3_LEN                    _MPR_UL(1)

/* MPR_DPM2_WBL3 (rw) */
#define MPR_DPM2_WBL3_POS                    _MPR_UL(27)
#define MPR_DPM2_WBL3_LEN                    _MPR_UL(1)

/* MPR_DPM2_RS3 (rw) */
#define MPR_DPM2_RS3_POS                     _MPR_UL(28)
#define MPR_DPM2_RS3_LEN                     _MPR_UL(1)

/* MPR_DPM2_WS3 (rw) */
#define MPR_DPM2_WS3_POS                     _MPR_UL(29)
#define MPR_DPM2_WS3_LEN                     _MPR_UL(1)

/* MPR_DPM2_RE3 (rw) */
#define MPR_DPM2_RE3_POS                     _MPR_UL(30)
#define MPR_DPM2_RE3_LEN                     _MPR_UL(1)

/* MPR_DPM2_WE3 (rw) */
#define MPR_DPM2_WE3_POS                     _MPR_UL(31)
#define MPR_DPM2_WE3_LEN                     _MPR_UL(1)

/* MPR_DPM3_RBU0 (rw) */
#define MPR_DPM3_RBU0_POS                    _MPR_UL(0)
#define MPR_DPM3_RBU0_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBU0 (rw) */
#define MPR_DPM3_WBU0_POS                    _MPR_UL(1)
#define MPR_DPM3_WBU0_LEN                    _MPR_UL(1)

/* MPR_DPM3_RBL0 (rw) */
#define MPR_DPM3_RBL0_POS                    _MPR_UL(2)
#define MPR_DPM3_RBL0_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBL0 (rw) */
#define MPR_DPM3_WBL0_POS                    _MPR_UL(3)
#define MPR_DPM3_WBL0_LEN                    _MPR_UL(1)

/* MPR_DPM3_RS0 (rw) */
#define MPR_DPM3_RS0_POS                     _MPR_UL(4)
#define MPR_DPM3_RS0_LEN                     _MPR_UL(1)

/* MPR_DPM3_WS0 (rw) */
#define MPR_DPM3_WS0_POS                     _MPR_UL(5)
#define MPR_DPM3_WS0_LEN                     _MPR_UL(1)

/* MPR_DPM3_RE0 (rw) */
#define MPR_DPM3_RE0_POS                     _MPR_UL(6)
#define MPR_DPM3_RE0_LEN                     _MPR_UL(1)

/* MPR_DPM3_WE0 (rw) */
#define MPR_DPM3_WE0_POS                     _MPR_UL(7)
#define MPR_DPM3_WE0_LEN                     _MPR_UL(1)

/* MPR_DPM3_RBU1 (rw) */
#define MPR_DPM3_RBU1_POS                    _MPR_UL(8)
#define MPR_DPM3_RBU1_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBU1 (rw) */
#define MPR_DPM3_WBU1_POS                    _MPR_UL(9)
#define MPR_DPM3_WBU1_LEN                    _MPR_UL(1)

/* MPR_DPM3_RBL1 (rw) */
#define MPR_DPM3_RBL1_POS                    _MPR_UL(10)
#define MPR_DPM3_RBL1_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBL1 (rw) */
#define MPR_DPM3_WBL1_POS                    _MPR_UL(11)
#define MPR_DPM3_WBL1_LEN                    _MPR_UL(1)

/* MPR_DPM3_RS1 (rw) */
#define MPR_DPM3_RS1_POS                     _MPR_UL(12)
#define MPR_DPM3_RS1_LEN                     _MPR_UL(1)

/* MPR_DPM3_WS1 (rw) */
#define MPR_DPM3_WS1_POS                     _MPR_UL(13)
#define MPR_DPM3_WS1_LEN                     _MPR_UL(1)

/* MPR_DPM3_RE1 (rw) */
#define MPR_DPM3_RE1_POS                     _MPR_UL(14)
#define MPR_DPM3_RE1_LEN                     _MPR_UL(1)

/* MPR_DPM3_WE1 (rw) */
#define MPR_DPM3_WE1_POS                     _MPR_UL(15)
#define MPR_DPM3_WE1_LEN                     _MPR_UL(1)

/* MPR_DPM3_RBU2 (rw) */
#define MPR_DPM3_RBU2_POS                    _MPR_UL(16)
#define MPR_DPM3_RBU2_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBU2 (rw) */
#define MPR_DPM3_WBU2_POS                    _MPR_UL(17)
#define MPR_DPM3_WBU2_LEN                    _MPR_UL(1)

/* MPR_DPM3_RBL2 (rw) */
#define MPR_DPM3_RBL2_POS                    _MPR_UL(18)
#define MPR_DPM3_RBL2_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBL2 (rw) */
#define MPR_DPM3_WBL2_POS                    _MPR_UL(19)
#define MPR_DPM3_WBL2_LEN                    _MPR_UL(1)

/* MPR_DPM3_RS2 (rw) */
#define MPR_DPM3_RS2_POS                     _MPR_UL(20)
#define MPR_DPM3_RS2_LEN                     _MPR_UL(1)

/* MPR_DPM3_WS2 (rw) */
#define MPR_DPM3_WS2_POS                     _MPR_UL(21)
#define MPR_DPM3_WS2_LEN                     _MPR_UL(1)

/* MPR_DPM3_RE2 (rw) */
#define MPR_DPM3_RE2_POS                     _MPR_UL(22)
#define MPR_DPM3_RE2_LEN                     _MPR_UL(1)

/* MPR_DPM3_WE2 (rw) */
#define MPR_DPM3_WE2_POS                     _MPR_UL(23)
#define MPR_DPM3_WE2_LEN                     _MPR_UL(1)

/* MPR_DPM3_RBU3 (rw) */
#define MPR_DPM3_RBU3_POS                    _MPR_UL(24)
#define MPR_DPM3_RBU3_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBU3 (rw) */
#define MPR_DPM3_WBU3_POS                    _MPR_UL(25)
#define MPR_DPM3_WBU3_LEN                    _MPR_UL(1)

/* MPR_DPM3_RBL3 (rw) */
#define MPR_DPM3_RBL3_POS                    _MPR_UL(26)
#define MPR_DPM3_RBL3_LEN                    _MPR_UL(1)

/* MPR_DPM3_WBL3 (rw) */
#define MPR_DPM3_WBL3_POS                    _MPR_UL(27)
#define MPR_DPM3_WBL3_LEN                    _MPR_UL(1)

/* MPR_DPM3_RS3 (rw) */
#define MPR_DPM3_RS3_POS                     _MPR_UL(28)
#define MPR_DPM3_RS3_LEN                     _MPR_UL(1)

/* MPR_DPM3_WS3 (rw) */
#define MPR_DPM3_WS3_POS                     _MPR_UL(29)
#define MPR_DPM3_WS3_LEN                     _MPR_UL(1)

/* MPR_DPM3_RE3 (rw) */
#define MPR_DPM3_RE3_POS                     _MPR_UL(30)
#define MPR_DPM3_RE3_LEN                     _MPR_UL(1)

/* MPR_DPM3_WE3 (rw) */
#define MPR_DPM3_WE3_POS                     _MPR_UL(31)
#define MPR_DPM3_WE3_LEN                     _MPR_UL(1)

/* MPR_CPM0_BU0 (rw) */
#define MPR_CPM0_BU0_POS                     _MPR_UL(0)
#define MPR_CPM0_BU0_LEN                     _MPR_UL(1)

/* MPR_CPM0_BL0 (rw) */
#define MPR_CPM0_BL0_POS                     _MPR_UL(3)
#define MPR_CPM0_BL0_LEN                     _MPR_UL(1)

/* MPR_CPM0_XS0 (rw) */
#define MPR_CPM0_XS0_POS                     _MPR_UL(5)
#define MPR_CPM0_XS0_LEN                     _MPR_UL(1)

/* MPR_CPM0_XE0 (rw) */
#define MPR_CPM0_XE0_POS                     _MPR_UL(7)
#define MPR_CPM0_XE0_LEN                     _MPR_UL(1)

/* MPR_CPM0_BU1 (rw) */
#define MPR_CPM0_BU1_POS                     _MPR_UL(8)
#define MPR_CPM0_BU1_LEN                     _MPR_UL(1)

/* MPR_CPM0_BL1 (rw) */
#define MPR_CPM0_BL1_POS                     _MPR_UL(11)
#define MPR_CPM0_BL1_LEN                     _MPR_UL(1)

/* MPR_CPM0_XS1 (rw) */
#define MPR_CPM0_XS1_POS                     _MPR_UL(13)
#define MPR_CPM0_XS1_LEN                     _MPR_UL(1)

/* MPR_CPM0_XE1 (rw) */
#define MPR_CPM0_XE1_POS                     _MPR_UL(15)
#define MPR_CPM0_XE1_LEN                     _MPR_UL(1)

/* MPR_CPM0_BU2 (rw) */
#define MPR_CPM0_BU2_POS                     _MPR_UL(16)
#define MPR_CPM0_BU2_LEN                     _MPR_UL(1)

/* MPR_CPM0_BL2 (rw) */
#define MPR_CPM0_BL2_POS                     _MPR_UL(19)
#define MPR_CPM0_BL2_LEN                     _MPR_UL(1)

/* MPR_CPM0_XS2 (rw) */
#define MPR_CPM0_XS2_POS                     _MPR_UL(21)
#define MPR_CPM0_XS2_LEN                     _MPR_UL(1)

/* MPR_CPM0_XE2 (rw) */
#define MPR_CPM0_XE2_POS                     _MPR_UL(23)
#define MPR_CPM0_XE2_LEN                     _MPR_UL(1)

/* MPR_CPM0_BU3 (rw) */
#define MPR_CPM0_BU3_POS                     _MPR_UL(24)
#define MPR_CPM0_BU3_LEN                     _MPR_UL(1)

/* MPR_CPM0_BL3 (rw) */
#define MPR_CPM0_BL3_POS                     _MPR_UL(27)
#define MPR_CPM0_BL3_LEN                     _MPR_UL(1)

/* MPR_CPM0_XS3 (rw) */
#define MPR_CPM0_XS3_POS                     _MPR_UL(29)
#define MPR_CPM0_XS3_LEN                     _MPR_UL(1)

/* MPR_CPM0_XE3 (rw) */
#define MPR_CPM0_XE3_POS                     _MPR_UL(31)
#define MPR_CPM0_XE3_LEN                     _MPR_UL(1)

/* MPR_CPM1_BU0 (rw) */
#define MPR_CPM1_BU0_POS                     _MPR_UL(0)
#define MPR_CPM1_BU0_LEN                     _MPR_UL(1)

/* MPR_CPM1_BL0 (rw) */
#define MPR_CPM1_BL0_POS                     _MPR_UL(3)
#define MPR_CPM1_BL0_LEN                     _MPR_UL(1)

/* MPR_CPM1_XS0 (rw) */
#define MPR_CPM1_XS0_POS                     _MPR_UL(5)
#define MPR_CPM1_XS0_LEN                     _MPR_UL(1)

/* MPR_CPM1_XE0 (rw) */
#define MPR_CPM1_XE0_POS                     _MPR_UL(7)
#define MPR_CPM1_XE0_LEN                     _MPR_UL(1)

/* MPR_CPM1_BU1 (rw) */
#define MPR_CPM1_BU1_POS                     _MPR_UL(8)
#define MPR_CPM1_BU1_LEN                     _MPR_UL(1)

/* MPR_CPM1_BL1 (rw) */
#define MPR_CPM1_BL1_POS                     _MPR_UL(11)
#define MPR_CPM1_BL1_LEN                     _MPR_UL(1)

/* MPR_CPM1_XS1 (rw) */
#define MPR_CPM1_XS1_POS                     _MPR_UL(13)
#define MPR_CPM1_XS1_LEN                     _MPR_UL(1)

/* MPR_CPM1_XE1 (rw) */
#define MPR_CPM1_XE1_POS                     _MPR_UL(15)
#define MPR_CPM1_XE1_LEN                     _MPR_UL(1)

/* MPR_CPM1_BU2 (rw) */
#define MPR_CPM1_BU2_POS                     _MPR_UL(16)
#define MPR_CPM1_BU2_LEN                     _MPR_UL(1)

/* MPR_CPM1_BL2 (rw) */
#define MPR_CPM1_BL2_POS                     _MPR_UL(19)
#define MPR_CPM1_BL2_LEN                     _MPR_UL(1)

/* MPR_CPM1_XS2 (rw) */
#define MPR_CPM1_XS2_POS                     _MPR_UL(21)
#define MPR_CPM1_XS2_LEN                     _MPR_UL(1)

/* MPR_CPM1_XE2 (rw) */
#define MPR_CPM1_XE2_POS                     _MPR_UL(23)
#define MPR_CPM1_XE2_LEN                     _MPR_UL(1)

/* MPR_CPM1_BU3 (rw) */
#define MPR_CPM1_BU3_POS                     _MPR_UL(24)
#define MPR_CPM1_BU3_LEN                     _MPR_UL(1)

/* MPR_CPM1_BL3 (rw) */
#define MPR_CPM1_BL3_POS                     _MPR_UL(27)
#define MPR_CPM1_BL3_LEN                     _MPR_UL(1)

/* MPR_CPM1_XS3 (rw) */
#define MPR_CPM1_XS3_POS                     _MPR_UL(29)
#define MPR_CPM1_XS3_LEN                     _MPR_UL(1)

/* MPR_CPM1_XE3 (rw) */
#define MPR_CPM1_XE3_POS                     _MPR_UL(31)
#define MPR_CPM1_XE3_LEN                     _MPR_UL(1)

/* MPR_CPM2_BU0 (rw) */
#define MPR_CPM2_BU0_POS                     _MPR_UL(0)
#define MPR_CPM2_BU0_LEN                     _MPR_UL(1)

/* MPR_CPM2_BL0 (rw) */
#define MPR_CPM2_BL0_POS                     _MPR_UL(3)
#define MPR_CPM2_BL0_LEN                     _MPR_UL(1)

/* MPR_CPM2_XS0 (rw) */
#define MPR_CPM2_XS0_POS                     _MPR_UL(5)
#define MPR_CPM2_XS0_LEN                     _MPR_UL(1)

/* MPR_CPM2_XE0 (rw) */
#define MPR_CPM2_XE0_POS                     _MPR_UL(7)
#define MPR_CPM2_XE0_LEN                     _MPR_UL(1)

/* MPR_CPM2_BU1 (rw) */
#define MPR_CPM2_BU1_POS                     _MPR_UL(8)
#define MPR_CPM2_BU1_LEN                     _MPR_UL(1)

/* MPR_CPM2_BL1 (rw) */
#define MPR_CPM2_BL1_POS                     _MPR_UL(11)
#define MPR_CPM2_BL1_LEN                     _MPR_UL(1)

/* MPR_CPM2_XS1 (rw) */
#define MPR_CPM2_XS1_POS                     _MPR_UL(13)
#define MPR_CPM2_XS1_LEN                     _MPR_UL(1)

/* MPR_CPM2_XE1 (rw) */
#define MPR_CPM2_XE1_POS                     _MPR_UL(15)
#define MPR_CPM2_XE1_LEN                     _MPR_UL(1)

/* MPR_CPM2_BU2 (rw) */
#define MPR_CPM2_BU2_POS                     _MPR_UL(16)
#define MPR_CPM2_BU2_LEN                     _MPR_UL(1)

/* MPR_CPM2_BL2 (rw) */
#define MPR_CPM2_BL2_POS                     _MPR_UL(19)
#define MPR_CPM2_BL2_LEN                     _MPR_UL(1)

/* MPR_CPM2_XS2 (rw) */
#define MPR_CPM2_XS2_POS                     _MPR_UL(21)
#define MPR_CPM2_XS2_LEN                     _MPR_UL(1)

/* MPR_CPM2_XE2 (rw) */
#define MPR_CPM2_XE2_POS                     _MPR_UL(23)
#define MPR_CPM2_XE2_LEN                     _MPR_UL(1)

/* MPR_CPM2_BU3 (rw) */
#define MPR_CPM2_BU3_POS                     _MPR_UL(24)
#define MPR_CPM2_BU3_LEN                     _MPR_UL(1)

/* MPR_CPM2_BL3 (rw) */
#define MPR_CPM2_BL3_POS                     _MPR_UL(27)
#define MPR_CPM2_BL3_LEN                     _MPR_UL(1)

/* MPR_CPM2_XS3 (rw) */
#define MPR_CPM2_XS3_POS                     _MPR_UL(29)
#define MPR_CPM2_XS3_LEN                     _MPR_UL(1)

/* MPR_CPM2_XE3 (rw) */
#define MPR_CPM2_XE3_POS                     _MPR_UL(31)
#define MPR_CPM2_XE3_LEN                     _MPR_UL(1)

/* MPR_CPM3_BU0 (rw) */
#define MPR_CPM3_BU0_POS                     _MPR_UL(0)
#define MPR_CPM3_BU0_LEN                     _MPR_UL(1)

/* MPR_CPM3_BL0 (rw) */
#define MPR_CPM3_BL0_POS                     _MPR_UL(3)
#define MPR_CPM3_BL0_LEN                     _MPR_UL(1)

/* MPR_CPM3_XS0 (rw) */
#define MPR_CPM3_XS0_POS                     _MPR_UL(5)
#define MPR_CPM3_XS0_LEN                     _MPR_UL(1)

/* MPR_CPM3_XE0 (rw) */
#define MPR_CPM3_XE0_POS                     _MPR_UL(7)
#define MPR_CPM3_XE0_LEN                     _MPR_UL(1)

/* MPR_CPM3_BU1 (rw) */
#define MPR_CPM3_BU1_POS                     _MPR_UL(8)
#define MPR_CPM3_BU1_LEN                     _MPR_UL(1)

/* MPR_CPM3_BL1 (rw) */
#define MPR_CPM3_BL1_POS                     _MPR_UL(11)
#define MPR_CPM3_BL1_LEN                     _MPR_UL(1)

/* MPR_CPM3_XS1 (rw) */
#define MPR_CPM3_XS1_POS                     _MPR_UL(13)
#define MPR_CPM3_XS1_LEN                     _MPR_UL(1)

/* MPR_CPM3_XE1 (rw) */
#define MPR_CPM3_XE1_POS                     _MPR_UL(15)
#define MPR_CPM3_XE1_LEN                     _MPR_UL(1)

/* MPR_CPM3_BU2 (rw) */
#define MPR_CPM3_BU2_POS                     _MPR_UL(16)
#define MPR_CPM3_BU2_LEN                     _MPR_UL(1)

/* MPR_CPM3_BL2 (rw) */
#define MPR_CPM3_BL2_POS                     _MPR_UL(19)
#define MPR_CPM3_BL2_LEN                     _MPR_UL(1)

/* MPR_CPM3_XS2 (rw) */
#define MPR_CPM3_XS2_POS                     _MPR_UL(21)
#define MPR_CPM3_XS2_LEN                     _MPR_UL(1)

/* MPR_CPM3_XE2 (rw) */
#define MPR_CPM3_XE2_POS                     _MPR_UL(23)
#define MPR_CPM3_XE2_LEN                     _MPR_UL(1)

/* MPR_CPM3_BU3 (rw) */
#define MPR_CPM3_BU3_POS                     _MPR_UL(24)
#define MPR_CPM3_BU3_LEN                     _MPR_UL(1)

/* MPR_CPM3_BL3 (rw) */
#define MPR_CPM3_BL3_POS                     _MPR_UL(27)
#define MPR_CPM3_BL3_LEN                     _MPR_UL(1)

/* MPR_CPM3_XS3 (rw) */
#define MPR_CPM3_XS3_POS                     _MPR_UL(29)
#define MPR_CPM3_XS3_LEN                     _MPR_UL(1)

/* MPR_CPM3_XE3 (rw) */
#define MPR_CPM3_XE3_POS                     _MPR_UL(31)
#define MPR_CPM3_XE3_LEN                     _MPR_UL(1)

#endif
