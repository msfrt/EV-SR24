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
 * $Filename__:bmu_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__: TC1724 update and removing QAC warning in gpta0_1793.h$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:02.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:bmu_1724$ 
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

#ifndef _BMU_1724_H
#define _BMU_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _BMU_UL(x) x
#else
    #define _BMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module BMU on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0323000] : Control Clock Register
    volatile uint32 RESERVED0[1];        // [0xF0323004...0xF0323007] : reserved space
    volatile uint32 ID;                  // [0xF0323008] : Module Identification Register
    volatile uint32 RESERVED1[5];        // [0xF032300C...0xF032301F] : reserved space
    volatile uint32 CTL;                 // [0xF0323020] : Transaction Filtering Control
    volatile uint32 PTR;                 // [0xF0323024] : Pointer Information for Bus Transaction Fifo
    volatile uint32 FULLNESS;            // [0xF0323028] : Fullness Information for Bus Transaction Fifo
    volatile uint32 RESERVED2[1];        // [0xF032302C...0xF032302F] : reserved space
    volatile uint32 PSET0;               // [0xF0323030] : Peripheral Set 0 Configuration
    volatile uint32 PSET1;               // [0xF0323034] : Peripheral Set 1 Configuration
    volatile uint32 TID;                 // [0xF0323038] : FPI Transaction ID Set 0 Configuration
    volatile uint32 RESERVED3[1];        // [0xF032303C...0xF032303F] : reserved space
    volatile uint32 FMCTL;               // [0xF0323040] : Fifo Monitor control register
    volatile uint32 FMSTS;               // [0xF0323044] : Fifo Monitor Status Register
    volatile uint32 FMTH;                // [0xF0323048] : Fifo Monitor: Fullness Threshold Register
    volatile uint32 RESERVED4[1];        // [0xF032304C...0xF032304F] : reserved space
    volatile uint32 SMACON;              // [0xF0323050] : SIST Mode Access Control Register
    volatile uint32 MIECON;              // [0xF0323054] : Memory Integrity Error Control Register
    volatile uint32 MIECON2;             // [0xF0323058] : Memory Integrity Error Control 2 Register
    volatile uint32 RESERVED5[40];       // [0xF032305C...0xF03230FB] : reserved space
    volatile uint32 SRC;                 // [0xF03230FC] : Service Request Control Register
} BMU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern BMU_RegMap_t BMU __attribute__ ((asection (".bss.label_only")));


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

/* BMU_ID_MOD_NUMBER (r) */
#define BMU_ID_MOD_NUMBER_POS                _BMU_UL(16)
#define BMU_ID_MOD_NUMBER_LEN                _BMU_UL(16)

/* BMU_ID_MOD_REV (r) */
#define BMU_ID_MOD_REV_POS                   _BMU_UL(0)
#define BMU_ID_MOD_REV_LEN                   _BMU_UL(8)

/* BMU_ID_MOD_TYPE (r) */
#define BMU_ID_MOD_TYPE_POS                  _BMU_UL(8)
#define BMU_ID_MOD_TYPE_LEN                  _BMU_UL(8)

/* BMU_CLC_DISR (rw) */
#define BMU_CLC_DISR_POS                     _BMU_UL(0)
#define BMU_CLC_DISR_LEN                     _BMU_UL(1)

/* BMU_CLC_DISS (rh) */
#define BMU_CLC_DISS_POS                     _BMU_UL(1)
#define BMU_CLC_DISS_LEN                     _BMU_UL(1)

/* BMU_ID_MOD_REV (r) */
#define BMU_ID_MOD_REV_POS                   _BMU_UL(0)
#define BMU_ID_MOD_REV_LEN                   _BMU_UL(8)

/* BMU_ID_MOD_TYPE (r) */
#define BMU_ID_MOD_TYPE_POS                  _BMU_UL(8)
#define BMU_ID_MOD_TYPE_LEN                  _BMU_UL(8)

/* BMU_ID_MOD_NUMBER (r) */
#define BMU_ID_MOD_NUMBER_POS                _BMU_UL(16)
#define BMU_ID_MOD_NUMBER_LEN                _BMU_UL(16)

/* BMU_CTL_MODE (rw) */
#define BMU_CTL_MODE_POS                     _BMU_UL(0)
#define BMU_CTL_MODE_LEN                     _BMU_UL(1)

/* BMU_CTL_TMF (rw) */
#define BMU_CTL_TMF_POS                      _BMU_UL(1)
#define BMU_CTL_TMF_LEN                      _BMU_UL(1)

/* BMU_PTR_RPTR (rh) */
#define BMU_PTR_RPTR_POS                     _BMU_UL(0)
#define BMU_PTR_RPTR_LEN                     _BMU_UL(10)

/* BMU_PTR_WPTR (rh) */
#define BMU_PTR_WPTR_POS                     _BMU_UL(16)
#define BMU_PTR_WPTR_LEN                     _BMU_UL(10)

/* BMU_FULLNESS_UCELLS (rh) */
#define BMU_FULLNESS_UCELLS_POS              _BMU_UL(0)
#define BMU_FULLNESS_UCELLS_LEN              _BMU_UL(11)

/* BMU_FULLNESS_FCELLS (rh) */
#define BMU_FULLNESS_FCELLS_POS              _BMU_UL(16)
#define BMU_FULLNESS_FCELLS_LEN              _BMU_UL(11)

/* BMU_PSET0_FPI_SEL0 (rw) */
#define BMU_PSET0_FPI_SEL0_POS               _BMU_UL(0)
#define BMU_PSET0_FPI_SEL0_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL1 (rw) */
#define BMU_PSET0_FPI_SEL1_POS               _BMU_UL(1)
#define BMU_PSET0_FPI_SEL1_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL2 (rw) */
#define BMU_PSET0_FPI_SEL2_POS               _BMU_UL(2)
#define BMU_PSET0_FPI_SEL2_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL3 (rw) */
#define BMU_PSET0_FPI_SEL3_POS               _BMU_UL(3)
#define BMU_PSET0_FPI_SEL3_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL4 (rw) */
#define BMU_PSET0_FPI_SEL4_POS               _BMU_UL(4)
#define BMU_PSET0_FPI_SEL4_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL5 (rw) */
#define BMU_PSET0_FPI_SEL5_POS               _BMU_UL(5)
#define BMU_PSET0_FPI_SEL5_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL6 (rw) */
#define BMU_PSET0_FPI_SEL6_POS               _BMU_UL(6)
#define BMU_PSET0_FPI_SEL6_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL7 (rw) */
#define BMU_PSET0_FPI_SEL7_POS               _BMU_UL(7)
#define BMU_PSET0_FPI_SEL7_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL8 (rw) */
#define BMU_PSET0_FPI_SEL8_POS               _BMU_UL(8)
#define BMU_PSET0_FPI_SEL8_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL9 (rw) */
#define BMU_PSET0_FPI_SEL9_POS               _BMU_UL(9)
#define BMU_PSET0_FPI_SEL9_LEN               _BMU_UL(1)

/* BMU_PSET0_FPI_SEL10 (rw) */
#define BMU_PSET0_FPI_SEL10_POS              _BMU_UL(10)
#define BMU_PSET0_FPI_SEL10_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL11 (rw) */
#define BMU_PSET0_FPI_SEL11_POS              _BMU_UL(11)
#define BMU_PSET0_FPI_SEL11_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL12 (rw) */
#define BMU_PSET0_FPI_SEL12_POS              _BMU_UL(12)
#define BMU_PSET0_FPI_SEL12_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL13 (rw) */
#define BMU_PSET0_FPI_SEL13_POS              _BMU_UL(13)
#define BMU_PSET0_FPI_SEL13_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL14 (rw) */
#define BMU_PSET0_FPI_SEL14_POS              _BMU_UL(14)
#define BMU_PSET0_FPI_SEL14_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL15 (rw) */
#define BMU_PSET0_FPI_SEL15_POS              _BMU_UL(15)
#define BMU_PSET0_FPI_SEL15_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL16 (rw) */
#define BMU_PSET0_FPI_SEL16_POS              _BMU_UL(16)
#define BMU_PSET0_FPI_SEL16_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL17 (rw) */
#define BMU_PSET0_FPI_SEL17_POS              _BMU_UL(17)
#define BMU_PSET0_FPI_SEL17_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL18 (rw) */
#define BMU_PSET0_FPI_SEL18_POS              _BMU_UL(18)
#define BMU_PSET0_FPI_SEL18_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL19 (rw) */
#define BMU_PSET0_FPI_SEL19_POS              _BMU_UL(19)
#define BMU_PSET0_FPI_SEL19_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL20 (rw) */
#define BMU_PSET0_FPI_SEL20_POS              _BMU_UL(20)
#define BMU_PSET0_FPI_SEL20_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL21 (rw) */
#define BMU_PSET0_FPI_SEL21_POS              _BMU_UL(21)
#define BMU_PSET0_FPI_SEL21_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL22 (rw) */
#define BMU_PSET0_FPI_SEL22_POS              _BMU_UL(22)
#define BMU_PSET0_FPI_SEL22_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL23 (rw) */
#define BMU_PSET0_FPI_SEL23_POS              _BMU_UL(23)
#define BMU_PSET0_FPI_SEL23_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL24 (rw) */
#define BMU_PSET0_FPI_SEL24_POS              _BMU_UL(24)
#define BMU_PSET0_FPI_SEL24_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL25 (rw) */
#define BMU_PSET0_FPI_SEL25_POS              _BMU_UL(25)
#define BMU_PSET0_FPI_SEL25_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL26 (rw) */
#define BMU_PSET0_FPI_SEL26_POS              _BMU_UL(26)
#define BMU_PSET0_FPI_SEL26_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL27 (rw) */
#define BMU_PSET0_FPI_SEL27_POS              _BMU_UL(27)
#define BMU_PSET0_FPI_SEL27_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL28 (rw) */
#define BMU_PSET0_FPI_SEL28_POS              _BMU_UL(28)
#define BMU_PSET0_FPI_SEL28_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL29 (rw) */
#define BMU_PSET0_FPI_SEL29_POS              _BMU_UL(29)
#define BMU_PSET0_FPI_SEL29_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL30 (rw) */
#define BMU_PSET0_FPI_SEL30_POS              _BMU_UL(30)
#define BMU_PSET0_FPI_SEL30_LEN              _BMU_UL(1)

/* BMU_PSET0_FPI_SEL31 (rw) */
#define BMU_PSET0_FPI_SEL31_POS              _BMU_UL(31)
#define BMU_PSET0_FPI_SEL31_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL32 (rw) */
#define BMU_PSET1_FPI_SEL32_POS              _BMU_UL(0)
#define BMU_PSET1_FPI_SEL32_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL33 (rw) */
#define BMU_PSET1_FPI_SEL33_POS              _BMU_UL(1)
#define BMU_PSET1_FPI_SEL33_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL34 (rw) */
#define BMU_PSET1_FPI_SEL34_POS              _BMU_UL(2)
#define BMU_PSET1_FPI_SEL34_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL35 (rw) */
#define BMU_PSET1_FPI_SEL35_POS              _BMU_UL(3)
#define BMU_PSET1_FPI_SEL35_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL36 (rw) */
#define BMU_PSET1_FPI_SEL36_POS              _BMU_UL(4)
#define BMU_PSET1_FPI_SEL36_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL37 (rw) */
#define BMU_PSET1_FPI_SEL37_POS              _BMU_UL(5)
#define BMU_PSET1_FPI_SEL37_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL38 (rw) */
#define BMU_PSET1_FPI_SEL38_POS              _BMU_UL(6)
#define BMU_PSET1_FPI_SEL38_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL39 (rw) */
#define BMU_PSET1_FPI_SEL39_POS              _BMU_UL(7)
#define BMU_PSET1_FPI_SEL39_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL40 (rw) */
#define BMU_PSET1_FPI_SEL40_POS              _BMU_UL(8)
#define BMU_PSET1_FPI_SEL40_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL41 (rw) */
#define BMU_PSET1_FPI_SEL41_POS              _BMU_UL(9)
#define BMU_PSET1_FPI_SEL41_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL42 (rw) */
#define BMU_PSET1_FPI_SEL42_POS              _BMU_UL(10)
#define BMU_PSET1_FPI_SEL42_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL43 (rw) */
#define BMU_PSET1_FPI_SEL43_POS              _BMU_UL(11)
#define BMU_PSET1_FPI_SEL43_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL44 (rw) */
#define BMU_PSET1_FPI_SEL44_POS              _BMU_UL(12)
#define BMU_PSET1_FPI_SEL44_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL45 (rw) */
#define BMU_PSET1_FPI_SEL45_POS              _BMU_UL(13)
#define BMU_PSET1_FPI_SEL45_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL46 (rw) */
#define BMU_PSET1_FPI_SEL46_POS              _BMU_UL(14)
#define BMU_PSET1_FPI_SEL46_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL47 (rw) */
#define BMU_PSET1_FPI_SEL47_POS              _BMU_UL(15)
#define BMU_PSET1_FPI_SEL47_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL48 (rw) */
#define BMU_PSET1_FPI_SEL48_POS              _BMU_UL(16)
#define BMU_PSET1_FPI_SEL48_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL49 (rw) */
#define BMU_PSET1_FPI_SEL49_POS              _BMU_UL(17)
#define BMU_PSET1_FPI_SEL49_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL50 (rw) */
#define BMU_PSET1_FPI_SEL50_POS              _BMU_UL(18)
#define BMU_PSET1_FPI_SEL50_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL51 (rw) */
#define BMU_PSET1_FPI_SEL51_POS              _BMU_UL(19)
#define BMU_PSET1_FPI_SEL51_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL52 (rw) */
#define BMU_PSET1_FPI_SEL52_POS              _BMU_UL(20)
#define BMU_PSET1_FPI_SEL52_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL53 (rw) */
#define BMU_PSET1_FPI_SEL53_POS              _BMU_UL(21)
#define BMU_PSET1_FPI_SEL53_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL54 (rw) */
#define BMU_PSET1_FPI_SEL54_POS              _BMU_UL(22)
#define BMU_PSET1_FPI_SEL54_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL55 (rw) */
#define BMU_PSET1_FPI_SEL55_POS              _BMU_UL(23)
#define BMU_PSET1_FPI_SEL55_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL56 (rw) */
#define BMU_PSET1_FPI_SEL56_POS              _BMU_UL(24)
#define BMU_PSET1_FPI_SEL56_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL57 (rw) */
#define BMU_PSET1_FPI_SEL57_POS              _BMU_UL(25)
#define BMU_PSET1_FPI_SEL57_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL58 (rw) */
#define BMU_PSET1_FPI_SEL58_POS              _BMU_UL(26)
#define BMU_PSET1_FPI_SEL58_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL59 (rw) */
#define BMU_PSET1_FPI_SEL59_POS              _BMU_UL(27)
#define BMU_PSET1_FPI_SEL59_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL60 (rw) */
#define BMU_PSET1_FPI_SEL60_POS              _BMU_UL(28)
#define BMU_PSET1_FPI_SEL60_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL61 (rw) */
#define BMU_PSET1_FPI_SEL61_POS              _BMU_UL(29)
#define BMU_PSET1_FPI_SEL61_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL62 (rw) */
#define BMU_PSET1_FPI_SEL62_POS              _BMU_UL(30)
#define BMU_PSET1_FPI_SEL62_LEN              _BMU_UL(1)

/* BMU_PSET1_FPI_SEL63 (rw) */
#define BMU_PSET1_FPI_SEL63_POS              _BMU_UL(31)
#define BMU_PSET1_FPI_SEL63_LEN              _BMU_UL(1)

/* BMU_TID_TID0 (r) */
#define BMU_TID_TID0_POS                     _BMU_UL(0)
#define BMU_TID_TID0_LEN                     _BMU_UL(4)

/* BMU_FMCTL_FHT_INT (rw) */
#define BMU_FMCTL_FHT_INT_POS                _BMU_UL(1)
#define BMU_FMCTL_FHT_INT_LEN                _BMU_UL(1)

/* BMU_FMCTL_UDF_INT (rw) */
#define BMU_FMCTL_UDF_INT_POS                _BMU_UL(2)
#define BMU_FMCTL_UDF_INT_LEN                _BMU_UL(1)

/* BMU_FMCTL_OVF_INT (rw) */
#define BMU_FMCTL_OVF_INT_POS                _BMU_UL(1)
#define BMU_FMCTL_OVF_INT_LEN                _BMU_UL(1)

/* BMU_FMSTS_FHT_STS (rwh) */
#define BMU_FMSTS_FHT_STS_POS                _BMU_UL(0)
#define BMU_FMSTS_FHT_STS_LEN                _BMU_UL(1)

/* BMU_FMSTS_OVF_STS (rwh) */
#define BMU_FMSTS_OVF_STS_POS                _BMU_UL(1)
#define BMU_FMSTS_OVF_STS_LEN                _BMU_UL(1)

/* BMU_FMSTS_UDF_STS (rwh) */
#define BMU_FMSTS_UDF_STS_POS                _BMU_UL(2)
#define BMU_FMSTS_UDF_STS_LEN                _BMU_UL(1)

/* BMU_FMTH_FHT (rw) */
#define BMU_FMTH_FHT_POS                     _BMU_UL(0)
#define BMU_FMTH_FHT_LEN                     _BMU_UL(10)

/* BMU_SMACON_BMURAM (rw) */
#define BMU_SMACON_BMURAM_POS                _BMU_UL(0)
#define BMU_SMACON_BMURAM_LEN                _BMU_UL(2)

/* BMU_MIECON_DED_EN (rw) */
#define BMU_MIECON_DED_EN_POS                _BMU_UL(0)
#define BMU_MIECON_DED_EN_LEN                _BMU_UL(1)

/* BMU_MIECON2_SEC_EN (rw) */
#define BMU_MIECON2_SEC_EN_POS               _BMU_UL(0)
#define BMU_MIECON2_SEC_EN_LEN               _BMU_UL(1)

/* BMU_SRC_SRPN (rw) */
#define BMU_SRC_SRPN_POS                     _BMU_UL(0)
#define BMU_SRC_SRPN_LEN                     _BMU_UL(8)

/* BMU_SRC_TOS (rw) */
#define BMU_SRC_TOS_POS                      _BMU_UL(10)
#define BMU_SRC_TOS_LEN                      _BMU_UL(1)

/* BMU_SRC_SRE (rw) */
#define BMU_SRC_SRE_POS                      _BMU_UL(12)
#define BMU_SRC_SRE_LEN                      _BMU_UL(1)

/* BMU_SRC_SRR (rwh) */
#define BMU_SRC_SRR_POS                      _BMU_UL(13)
#define BMU_SRC_SRR_LEN                      _BMU_UL(1)

/* BMU_SRC_CLRR (w) */
#define BMU_SRC_CLRR_POS                     _BMU_UL(14)
#define BMU_SRC_CLRR_LEN                     _BMU_UL(1)

/* BMU_SRC_SETR (w) */
#define BMU_SRC_SETR_POS                     _BMU_UL(15)
#define BMU_SRC_SETR_LEN                     _BMU_UL(1)

#endif
