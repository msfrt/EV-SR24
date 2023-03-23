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
 * $Filename__:stm_1762.h$ 
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
 * $Name______:stm_1762$ 
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
 *      File name: stm_1762.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _STM_1762_H
#define _STM_1762_H

/* add ul suffix if file is used in C context */
#define _STM_UL(x) x##UL

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module STM on TC1762
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0000200] : STM Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0000204...0xF0000207] : reserved space
    volatile uint32 ID;                  // [0xF0000208] : STM Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF000020C...0xF000020F] : reserved space
    volatile uint32 TIM0;                // [0xF0000210] : STM Register 0
    volatile uint32 TIM1;                // [0xF0000214] : STM Register 1
    volatile uint32 TIM2;                // [0xF0000218] : STM Register 2
    volatile uint32 TIM3;                // [0xF000021C] : STM Register 3
    volatile uint32 TIM4;                // [0xF0000220] : STM Register 4
    volatile uint32 TIM5;                // [0xF0000224] : STM Register 5
    volatile uint32 TIM6;                // [0xF0000228] : STM Register 6
    volatile uint32 CAP;                 // [0xF000022C] : STM Capture Register
    volatile uint32 CMP0;                // [0xF0000230] : Compare Register 1
    volatile uint32 CMP1;                // [0xF0000234] : Compare Register 1
    volatile uint32 CMCON;               // [0xF0000238] : Compare Match Control Register
    volatile uint32 ICR;                 // [0xF000023C] : STM Interrupt Control Register
    volatile uint32 ISRR;                // [0xF0000240] : Interrupt Set/Reset Register
    volatile uint32 RESERVED2[45];       // [0xF0000244...0xF00002F7] : reserved space
    volatile uint32 SRC1;                // [0xF00002F8] : STM Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF00002FC] : STM Service Request Control Register 0
} STM_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern STM_RegMap_t STM __attribute__ ((section (".zbss")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

#define STM_BASE                _STM_UL(0xF0000200)

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

/* STM_CLC_DISR (rw) */
#define STM_CLC_DISR_POS               _STM_UL(0)
#define STM_CLC_DISR_LEN               _STM_UL(1)

/* STM_CLC_DISS (r) */
#define STM_CLC_DISS_POS               _STM_UL(1)
#define STM_CLC_DISS_LEN               _STM_UL(1)

/* STM_CLC_EDIS (rw) */
#define STM_CLC_EDIS_POS               _STM_UL(3)
#define STM_CLC_EDIS_LEN               _STM_UL(1)

/* STM_CLC_FSOE (rw) */
#define STM_CLC_FSOE_POS               _STM_UL(5)
#define STM_CLC_FSOE_LEN               _STM_UL(1)

/* STM_CLC_RMC (rw) */
#define STM_CLC_RMC_POS                _STM_UL(8)
#define STM_CLC_RMC_LEN                _STM_UL(3)

/* STM_CLC_SBWE (w) */
#define STM_CLC_SBWE_POS               _STM_UL(4)
#define STM_CLC_SBWE_LEN               _STM_UL(1)

/* STM_CLC_SPEN (rw) */
#define STM_CLC_SPEN_POS               _STM_UL(2)
#define STM_CLC_SPEN_LEN               _STM_UL(1)

/* STM_CMCON_MSIZE0 (rw) */
#define STM_CMCON_MSIZE0_POS           _STM_UL(0)
#define STM_CMCON_MSIZE0_LEN           _STM_UL(5)

/* STM_CMCON_MSIZE1 (rw) */
#define STM_CMCON_MSIZE1_POS           _STM_UL(16)
#define STM_CMCON_MSIZE1_LEN           _STM_UL(5)

/* STM_CMCON_MSTART0 (rw) */
#define STM_CMCON_MSTART0_POS          _STM_UL(8)
#define STM_CMCON_MSTART0_LEN          _STM_UL(5)

/* STM_CMCON_MSTART1 (rw) */
#define STM_CMCON_MSTART1_POS          _STM_UL(24)
#define STM_CMCON_MSTART1_LEN          _STM_UL(5)

/* STM_CMP0_CMPVAL (rw) */
#define STM_CMP0_CMPVAL_POS            _STM_UL(0)
#define STM_CMP0_CMPVAL_LEN            _STM_UL(32)

/* STM_CMP1_CMPVAL (rw) */
#define STM_CMP1_CMPVAL_POS            _STM_UL(0)
#define STM_CMP1_CMPVAL_LEN            _STM_UL(32)

/* STM_ICR_CMP0EN (rw) */
#define STM_ICR_CMP0EN_POS             _STM_UL(0)
#define STM_ICR_CMP0EN_LEN             _STM_UL(1)

/* STM_ICR_CMP0IR (rh) */
#define STM_ICR_CMP0IR_POS             _STM_UL(1)
#define STM_ICR_CMP0IR_LEN             _STM_UL(1)

/* STM_ICR_CMP0OS (rw) */
#define STM_ICR_CMP0OS_POS             _STM_UL(2)
#define STM_ICR_CMP0OS_LEN             _STM_UL(1)

/* STM_ICR_CMP1EN (rw) */
#define STM_ICR_CMP1EN_POS             _STM_UL(4)
#define STM_ICR_CMP1EN_LEN             _STM_UL(1)

/* STM_ICR_CMP1IR (rh) */
#define STM_ICR_CMP1IR_POS             _STM_UL(5)
#define STM_ICR_CMP1IR_LEN             _STM_UL(1)

/* STM_ICR_CMP1OS (rw) */
#define STM_ICR_CMP1OS_POS             _STM_UL(6)
#define STM_ICR_CMP1OS_LEN             _STM_UL(1)

/* STM_ID_Mod_Number (r) */
#define STM_ID_Mod_Number_POS          _STM_UL(16)
#define STM_ID_Mod_Number_LEN          _STM_UL(16)

/* STM_ID_Mod_Rev (r) */
#define STM_ID_Mod_Rev_POS             _STM_UL(0)
#define STM_ID_Mod_Rev_LEN             _STM_UL(8)

/* STM_ID_Mod_Type (r) */
#define STM_ID_Mod_Type_POS            _STM_UL(8)
#define STM_ID_Mod_Type_LEN            _STM_UL(8)

/* STM_ISRR_CMP0IRR (w) */
#define STM_ISRR_CMP0IRR_POS           _STM_UL(0)
#define STM_ISRR_CMP0IRR_LEN           _STM_UL(1)

/* STM_ISRR_CMP0IRS (w) */
#define STM_ISRR_CMP0IRS_POS           _STM_UL(1)
#define STM_ISRR_CMP0IRS_LEN           _STM_UL(1)

/* STM_ISRR_CMP1IRR (w) */
#define STM_ISRR_CMP1IRR_POS           _STM_UL(2)
#define STM_ISRR_CMP1IRR_LEN           _STM_UL(1)

/* STM_ISRR_CMP1IRS (w) */
#define STM_ISRR_CMP1IRS_POS           _STM_UL(3)
#define STM_ISRR_CMP1IRS_LEN           _STM_UL(1)

/* STM_SRC0_CLRR (w) */
#define STM_SRC0_CLRR_POS              _STM_UL(14)
#define STM_SRC0_CLRR_LEN              _STM_UL(1)

/* STM_SRC0_SETR (w) */
#define STM_SRC0_SETR_POS              _STM_UL(15)
#define STM_SRC0_SETR_LEN              _STM_UL(1)

/* STM_SRC0_SRE (rw) */
#define STM_SRC0_SRE_POS               _STM_UL(12)
#define STM_SRC0_SRE_LEN               _STM_UL(1)

/* STM_SRC0_SRPN (rw) */
#define STM_SRC0_SRPN_POS              _STM_UL(0)
#define STM_SRC0_SRPN_LEN              _STM_UL(8)

/* STM_SRC0_SRR (rh) */
#define STM_SRC0_SRR_POS               _STM_UL(13)
#define STM_SRC0_SRR_LEN               _STM_UL(1)

/* STM_SRC0_TOS (rw) */
#define STM_SRC0_TOS_POS               _STM_UL(10)
#define STM_SRC0_TOS_LEN               _STM_UL(1)

/* STM_SRC1_CLRR (w) */
#define STM_SRC1_CLRR_POS              _STM_UL(14)
#define STM_SRC1_CLRR_LEN              _STM_UL(1)

/* STM_SRC1_SETR (w) */
#define STM_SRC1_SETR_POS              _STM_UL(15)
#define STM_SRC1_SETR_LEN              _STM_UL(1)

/* STM_SRC1_SRE (rw) */
#define STM_SRC1_SRE_POS               _STM_UL(12)
#define STM_SRC1_SRE_LEN               _STM_UL(1)

/* STM_SRC1_SRPN (rw) */
#define STM_SRC1_SRPN_POS              _STM_UL(0)
#define STM_SRC1_SRPN_LEN              _STM_UL(8)

/* STM_SRC1_SRR (rh) */
#define STM_SRC1_SRR_POS               _STM_UL(13)
#define STM_SRC1_SRR_LEN               _STM_UL(1)

/* STM_SRC1_TOS (rw) */
#define STM_SRC1_TOS_POS               _STM_UL(10)
#define STM_SRC1_TOS_LEN               _STM_UL(1)

#endif
