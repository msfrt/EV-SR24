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
 * $Filename__:gpt12_1724.h$ 
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
 * $Name______:gpt12_1724$ 
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

#ifndef _GPT12_1724_H
#define _GPT12_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GPT12_UL(x) x
#else
    #define _GPT12_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module GPT12 on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0003400] : Clock Control Register
    volatile uint32 PISEL;               // [0xF0003404] : Port Input Select Register
    volatile uint32 ID;                  // [0xF0003408] : Identification Register
    volatile uint32 RESERVED0[1];        // [0xF000340C...0xF000340F] : reserved space
    volatile uint32 T2CON;               // [0xF0003410] : Timer T2 Control Register
    volatile uint32 T3CON;               // [0xF0003414] : Timer T3 Control Register
    volatile uint32 T4CON;               // [0xF0003418] : Timer T4 Control Register
    volatile uint32 T5CON;               // [0xF000341C] : Timer T5 Control Register
    volatile uint32 T6CON;               // [0xF0003420] : Timer T6 Control Register
    volatile uint32 RESERVED1[3];        // [0xF0003424...0xF000342F] : reserved space
    volatile uint32 CAPREL;              // [0xF0003430] : Capture and Reload Register
    volatile uint32 T2;                  // [0xF0003434] : Timer T2 Register
    volatile uint32 T3;                  // [0xF0003438] : Timer T3 Register
    volatile uint32 T4;                  // [0xF000343C] : Timer T4 Register
    volatile uint32 T5;                  // [0xF0003440] : Timer T5 Register
    volatile uint32 T6;                  // [0xF0003444] : Timer T6 Register
    volatile uint32 RESERVED2[40];       // [0xF0003448...0xF00034E7] : reserved space
    volatile uint32 SRC5;                // [0xF00034E8] : Service Request Control 5 Register
    volatile uint32 SRC4;                // [0xF00034EC] : Service Request Control 4Register
    volatile uint32 SRC3;                // [0xF00034F0] : Service Request Control 3 Register
    volatile uint32 SRC2;                // [0xF00034F4] : Service Request Control 2 Register
    volatile uint32 SRC1;                // [0xF00034F8] : Service Request Control 1 Register
    volatile uint32 SRC0;                // [0xF00034FC] : Service Request Control 0 Register
} GPT12_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern GPT12_RegMap_t GPT120 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern GPT12_RegMap_t GPT121 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern GPT12_RegMap_t GPT12[2] __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* GPT12_ID_MOD_NUMBER (r) */
#define GPT12_ID_MOD_NUMBER_POS                _GPT12_UL(16)
#define GPT12_ID_MOD_NUMBER_LEN                _GPT12_UL(16)

/* GPT12_ID_MOD_REV (r) */
#define GPT12_ID_MOD_REV_POS                   _GPT12_UL(0)
#define GPT12_ID_MOD_REV_LEN                   _GPT12_UL(8)

/* GPT12_ID_MOD_TYPE (r) */
#define GPT12_ID_MOD_TYPE_POS                  _GPT12_UL(8)
#define GPT12_ID_MOD_TYPE_LEN                  _GPT12_UL(8)

/* GPT120_ID_MOD_NUMBER (r) */
#define GPT120_ID_MOD_NUMBER_POS               _GPT12_UL(16)
#define GPT120_ID_MOD_NUMBER_LEN               _GPT12_UL(16)

/* GPT120_ID_MOD_REV (r) */
#define GPT120_ID_MOD_REV_POS                  _GPT12_UL(0)
#define GPT120_ID_MOD_REV_LEN                  _GPT12_UL(8)

/* GPT120_ID_MOD_TYPE (r) */
#define GPT120_ID_MOD_TYPE_POS                 _GPT12_UL(8)
#define GPT120_ID_MOD_TYPE_LEN                 _GPT12_UL(8)

/* GPT121_ID_MOD_NUMBER (r) */
#define GPT121_ID_MOD_NUMBER_POS               _GPT12_UL(16)
#define GPT121_ID_MOD_NUMBER_LEN               _GPT12_UL(16)

/* GPT121_ID_MOD_REV (r) */
#define GPT121_ID_MOD_REV_POS                  _GPT12_UL(0)
#define GPT121_ID_MOD_REV_LEN                  _GPT12_UL(8)

/* GPT121_ID_MOD_TYPE (r) */
#define GPT121_ID_MOD_TYPE_POS                 _GPT12_UL(8)
#define GPT121_ID_MOD_TYPE_LEN                 _GPT12_UL(8)

/* GPT12_CLC_DISR (rw) */
#define GPT12_CLC_DISR_POS                   _GPT12_UL(0)
#define GPT12_CLC_DISR_LEN                   _GPT12_UL(1)

/* GPT12_CLC_DISS (rh) */
#define GPT12_CLC_DISS_POS                   _GPT12_UL(1)
#define GPT12_CLC_DISS_LEN                   _GPT12_UL(1)

/* GPT12_CLC_SPEN (rw) */
#define GPT12_CLC_SPEN_POS                   _GPT12_UL(2)
#define GPT12_CLC_SPEN_LEN                   _GPT12_UL(1)

/* GPT12_CLC_EDIS (rw) */
#define GPT12_CLC_EDIS_POS                   _GPT12_UL(3)
#define GPT12_CLC_EDIS_LEN                   _GPT12_UL(1)

/* GPT12_CLC_SBWE (w) */
#define GPT12_CLC_SBWE_POS                   _GPT12_UL(4)
#define GPT12_CLC_SBWE_LEN                   _GPT12_UL(1)

/* GPT12_CLC_FSOE (rw) */
#define GPT12_CLC_FSOE_POS                   _GPT12_UL(5)
#define GPT12_CLC_FSOE_LEN                   _GPT12_UL(1)

/* GPT12_PISEL_IST2IN (rw) */
#define GPT12_PISEL_IST2IN_POS               _GPT12_UL(0)
#define GPT12_PISEL_IST2IN_LEN               _GPT12_UL(1)

/* GPT12_PISEL_IST2EUD (rw) */
#define GPT12_PISEL_IST2EUD_POS              _GPT12_UL(1)
#define GPT12_PISEL_IST2EUD_LEN              _GPT12_UL(1)

/* GPT12_PISEL_IST3IN (rw) */
#define GPT12_PISEL_IST3IN_POS               _GPT12_UL(2)
#define GPT12_PISEL_IST3IN_LEN               _GPT12_UL(2)

/* GPT12_PISEL_IST3EUD (rw) */
#define GPT12_PISEL_IST3EUD_POS              _GPT12_UL(4)
#define GPT12_PISEL_IST3EUD_LEN              _GPT12_UL(2)

/* GPT12_PISEL_IST4IN (rw) */
#define GPT12_PISEL_IST4IN_POS               _GPT12_UL(6)
#define GPT12_PISEL_IST4IN_LEN               _GPT12_UL(2)

/* GPT12_PISEL_IST4EUD (rw) */
#define GPT12_PISEL_IST4EUD_POS              _GPT12_UL(8)
#define GPT12_PISEL_IST4EUD_LEN              _GPT12_UL(2)

/* GPT12_PISEL_IST5IN (rw) */
#define GPT12_PISEL_IST5IN_POS               _GPT12_UL(10)
#define GPT12_PISEL_IST5IN_LEN               _GPT12_UL(1)

/* GPT12_PISEL_IST5EUD (rw) */
#define GPT12_PISEL_IST5EUD_POS              _GPT12_UL(11)
#define GPT12_PISEL_IST5EUD_LEN              _GPT12_UL(1)

/* GPT12_PISEL_IST6IN (rw) */
#define GPT12_PISEL_IST6IN_POS               _GPT12_UL(12)
#define GPT12_PISEL_IST6IN_LEN               _GPT12_UL(1)

/* GPT12_PISEL_IST6EUD (rw) */
#define GPT12_PISEL_IST6EUD_POS              _GPT12_UL(13)
#define GPT12_PISEL_IST6EUD_LEN              _GPT12_UL(1)

/* GPT12_PISEL_ISCAPIN (rw) */
#define GPT12_PISEL_ISCAPIN_POS              _GPT12_UL(14)
#define GPT12_PISEL_ISCAPIN_LEN              _GPT12_UL(2)

/* GPT12_ID_MODREV (r) */
#define GPT12_ID_MODREV_POS                  _GPT12_UL(0)
#define GPT12_ID_MODREV_LEN                  _GPT12_UL(8)

/* GPT12_ID_MODTYPE (r) */
#define GPT12_ID_MODTYPE_POS                 _GPT12_UL(8)
#define GPT12_ID_MODTYPE_LEN                 _GPT12_UL(8)

/* GPT12_ID_MODNUMBER (r) */
#define GPT12_ID_MODNUMBER_POS               _GPT12_UL(16)
#define GPT12_ID_MODNUMBER_LEN               _GPT12_UL(16)

/* GPT12_T2CON_T2I (rw) */
#define GPT12_T2CON_T2I_POS                  _GPT12_UL(0)
#define GPT12_T2CON_T2I_LEN                  _GPT12_UL(3)

/* GPT12_T2CON_T2M (rw) */
#define GPT12_T2CON_T2M_POS                  _GPT12_UL(3)
#define GPT12_T2CON_T2M_LEN                  _GPT12_UL(3)

/* GPT12_T2CON_T2R (rw) */
#define GPT12_T2CON_T2R_POS                  _GPT12_UL(6)
#define GPT12_T2CON_T2R_LEN                  _GPT12_UL(1)

/* GPT12_T2CON_T2UD (rw) */
#define GPT12_T2CON_T2UD_POS                 _GPT12_UL(7)
#define GPT12_T2CON_T2UD_LEN                 _GPT12_UL(1)

/* GPT12_T2CON_T2UDE (rw) */
#define GPT12_T2CON_T2UDE_POS                _GPT12_UL(8)
#define GPT12_T2CON_T2UDE_LEN                _GPT12_UL(1)

/* GPT12_T2CON_T2RC (rw) */
#define GPT12_T2CON_T2RC_POS                 _GPT12_UL(9)
#define GPT12_T2CON_T2RC_LEN                 _GPT12_UL(1)

/* GPT12_T2CON_T2IRDIS (rw) */
#define GPT12_T2CON_T2IRDIS_POS              _GPT12_UL(12)
#define GPT12_T2CON_T2IRDIS_LEN              _GPT12_UL(1)

/* GPT12_T2CON_T2EDGE (rwh) */
#define GPT12_T2CON_T2EDGE_POS               _GPT12_UL(13)
#define GPT12_T2CON_T2EDGE_LEN               _GPT12_UL(1)

/* GPT12_T2CON_T2CHDIR (rwh) */
#define GPT12_T2CON_T2CHDIR_POS              _GPT12_UL(14)
#define GPT12_T2CON_T2CHDIR_LEN              _GPT12_UL(1)

/* GPT12_T2CON_T2RDIR (rh) */
#define GPT12_T2CON_T2RDIR_POS               _GPT12_UL(15)
#define GPT12_T2CON_T2RDIR_LEN               _GPT12_UL(1)

/* GPT12_T3CON_T3I (rw) */
#define GPT12_T3CON_T3I_POS                  _GPT12_UL(0)
#define GPT12_T3CON_T3I_LEN                  _GPT12_UL(3)

/* GPT12_T3CON_T3M (rw) */
#define GPT12_T3CON_T3M_POS                  _GPT12_UL(3)
#define GPT12_T3CON_T3M_LEN                  _GPT12_UL(3)

/* GPT12_T3CON_T3R (rw) */
#define GPT12_T3CON_T3R_POS                  _GPT12_UL(6)
#define GPT12_T3CON_T3R_LEN                  _GPT12_UL(1)

/* GPT12_T3CON_T3UD (rw) */
#define GPT12_T3CON_T3UD_POS                 _GPT12_UL(7)
#define GPT12_T3CON_T3UD_LEN                 _GPT12_UL(1)

/* GPT12_T3CON_T3UDE (rw) */
#define GPT12_T3CON_T3UDE_POS                _GPT12_UL(8)
#define GPT12_T3CON_T3UDE_LEN                _GPT12_UL(1)

/* GPT12_T3CON_T3OE (rw) */
#define GPT12_T3CON_T3OE_POS                 _GPT12_UL(9)
#define GPT12_T3CON_T3OE_LEN                 _GPT12_UL(1)

/* GPT12_T3CON_T3OTL (rwh) */
#define GPT12_T3CON_T3OTL_POS                _GPT12_UL(10)
#define GPT12_T3CON_T3OTL_LEN                _GPT12_UL(1)

/* GPT12_T3CON_BPS1 (rw) */
#define GPT12_T3CON_BPS1_POS                 _GPT12_UL(11)
#define GPT12_T3CON_BPS1_LEN                 _GPT12_UL(2)

/* GPT12_T3CON_T3EDGE (rwh) */
#define GPT12_T3CON_T3EDGE_POS               _GPT12_UL(13)
#define GPT12_T3CON_T3EDGE_LEN               _GPT12_UL(1)

/* GPT12_T3CON_T3CHDIR (rwh) */
#define GPT12_T3CON_T3CHDIR_POS              _GPT12_UL(14)
#define GPT12_T3CON_T3CHDIR_LEN              _GPT12_UL(1)

/* GPT12_T3CON_T3RDIR (rh) */
#define GPT12_T3CON_T3RDIR_POS               _GPT12_UL(15)
#define GPT12_T3CON_T3RDIR_LEN               _GPT12_UL(1)

/* GPT12_T4CON_T4I (rw) */
#define GPT12_T4CON_T4I_POS                  _GPT12_UL(0)
#define GPT12_T4CON_T4I_LEN                  _GPT12_UL(3)

/* GPT12_T4CON_T4M (rw) */
#define GPT12_T4CON_T4M_POS                  _GPT12_UL(3)
#define GPT12_T4CON_T4M_LEN                  _GPT12_UL(3)

/* GPT12_T4CON_T4R (rw) */
#define GPT12_T4CON_T4R_POS                  _GPT12_UL(6)
#define GPT12_T4CON_T4R_LEN                  _GPT12_UL(1)

/* GPT12_T4CON_T4UD (rw) */
#define GPT12_T4CON_T4UD_POS                 _GPT12_UL(7)
#define GPT12_T4CON_T4UD_LEN                 _GPT12_UL(1)

/* GPT12_T4CON_T4UDE (rw) */
#define GPT12_T4CON_T4UDE_POS                _GPT12_UL(8)
#define GPT12_T4CON_T4UDE_LEN                _GPT12_UL(1)

/* GPT12_T4CON_T4RC (rw) */
#define GPT12_T4CON_T4RC_POS                 _GPT12_UL(9)
#define GPT12_T4CON_T4RC_LEN                 _GPT12_UL(1)

/* GPT12_T4CON_CLRT2EN (rw) */
#define GPT12_T4CON_CLRT2EN_POS              _GPT12_UL(10)
#define GPT12_T4CON_CLRT2EN_LEN              _GPT12_UL(1)

/* GPT12_T4CON_CLRT3EN (rw) */
#define GPT12_T4CON_CLRT3EN_POS              _GPT12_UL(11)
#define GPT12_T4CON_CLRT3EN_LEN              _GPT12_UL(1)

/* GPT12_T4CON_T4IRDIS (rw) */
#define GPT12_T4CON_T4IRDIS_POS              _GPT12_UL(12)
#define GPT12_T4CON_T4IRDIS_LEN              _GPT12_UL(1)

/* GPT12_T4CON_T4EDGE (rwh) */
#define GPT12_T4CON_T4EDGE_POS               _GPT12_UL(13)
#define GPT12_T4CON_T4EDGE_LEN               _GPT12_UL(1)

/* GPT12_T4CON_T4CHDIR (rwh) */
#define GPT12_T4CON_T4CHDIR_POS              _GPT12_UL(14)
#define GPT12_T4CON_T4CHDIR_LEN              _GPT12_UL(1)

/* GPT12_T4CON_T4RDIR (rh) */
#define GPT12_T4CON_T4RDIR_POS               _GPT12_UL(15)
#define GPT12_T4CON_T4RDIR_LEN               _GPT12_UL(1)

/* GPT12_T5CON_T5I (rw) */
#define GPT12_T5CON_T5I_POS                  _GPT12_UL(0)
#define GPT12_T5CON_T5I_LEN                  _GPT12_UL(3)

/* GPT12_T5CON_T5M (rw) */
#define GPT12_T5CON_T5M_POS                  _GPT12_UL(3)
#define GPT12_T5CON_T5M_LEN                  _GPT12_UL(3)

/* GPT12_T5CON_T5R (rw) */
#define GPT12_T5CON_T5R_POS                  _GPT12_UL(6)
#define GPT12_T5CON_T5R_LEN                  _GPT12_UL(1)

/* GPT12_T5CON_T5UD (rw) */
#define GPT12_T5CON_T5UD_POS                 _GPT12_UL(7)
#define GPT12_T5CON_T5UD_LEN                 _GPT12_UL(1)

/* GPT12_T5CON_T5UDE (rw) */
#define GPT12_T5CON_T5UDE_POS                _GPT12_UL(8)
#define GPT12_T5CON_T5UDE_LEN                _GPT12_UL(1)

/* GPT12_T5CON_T5RC (rw) */
#define GPT12_T5CON_T5RC_POS                 _GPT12_UL(9)
#define GPT12_T5CON_T5RC_LEN                 _GPT12_UL(1)

/* GPT12_T5CON_CT3 (rw) */
#define GPT12_T5CON_CT3_POS                  _GPT12_UL(10)
#define GPT12_T5CON_CT3_LEN                  _GPT12_UL(1)

/* GPT12_T5CON_CI (rw) */
#define GPT12_T5CON_CI_POS                   _GPT12_UL(12)
#define GPT12_T5CON_CI_LEN                   _GPT12_UL(2)

/* GPT12_T5CON_T5CLR (rw) */
#define GPT12_T5CON_T5CLR_POS                _GPT12_UL(14)
#define GPT12_T5CON_T5CLR_LEN                _GPT12_UL(1)

/* GPT12_T5CON_T5SC (rw) */
#define GPT12_T5CON_T5SC_POS                 _GPT12_UL(15)
#define GPT12_T5CON_T5SC_LEN                 _GPT12_UL(1)

/* GPT12_T6CON_T6I (rw) */
#define GPT12_T6CON_T6I_POS                  _GPT12_UL(0)
#define GPT12_T6CON_T6I_LEN                  _GPT12_UL(3)

/* GPT12_T6CON_T6M (rw) */
#define GPT12_T6CON_T6M_POS                  _GPT12_UL(3)
#define GPT12_T6CON_T6M_LEN                  _GPT12_UL(3)

/* GPT12_T6CON_T6R (rw) */
#define GPT12_T6CON_T6R_POS                  _GPT12_UL(6)
#define GPT12_T6CON_T6R_LEN                  _GPT12_UL(1)

/* GPT12_T6CON_T6UD (rw) */
#define GPT12_T6CON_T6UD_POS                 _GPT12_UL(7)
#define GPT12_T6CON_T6UD_LEN                 _GPT12_UL(1)

/* GPT12_T6CON_T6UDE (rw) */
#define GPT12_T6CON_T6UDE_POS                _GPT12_UL(8)
#define GPT12_T6CON_T6UDE_LEN                _GPT12_UL(1)

/* GPT12_T6CON_T6OE (rw) */
#define GPT12_T6CON_T6OE_POS                 _GPT12_UL(9)
#define GPT12_T6CON_T6OE_LEN                 _GPT12_UL(1)

/* GPT12_T6CON_T6OTL (rwh) */
#define GPT12_T6CON_T6OTL_POS                _GPT12_UL(10)
#define GPT12_T6CON_T6OTL_LEN                _GPT12_UL(1)

/* GPT12_T6CON_BPS2 (rw) */
#define GPT12_T6CON_BPS2_POS                 _GPT12_UL(11)
#define GPT12_T6CON_BPS2_LEN                 _GPT12_UL(2)

/* GPT12_T6CON_T6CLR (rw) */
#define GPT12_T6CON_T6CLR_POS                _GPT12_UL(14)
#define GPT12_T6CON_T6CLR_LEN                _GPT12_UL(1)

/* GPT12_T6CON_T6SR (rw) */
#define GPT12_T6CON_T6SR_POS                 _GPT12_UL(15)
#define GPT12_T6CON_T6SR_LEN                 _GPT12_UL(1)

/* GPT12_CAPREL_CAPREL (rwh) */
#define GPT12_CAPREL_CAPREL_POS              _GPT12_UL(0)
#define GPT12_CAPREL_CAPREL_LEN              _GPT12_UL(16)

/* GPT12_T2_T2 (rwh) */
#define GPT12_T2_T2_POS                      _GPT12_UL(0)
#define GPT12_T2_T2_LEN                      _GPT12_UL(16)

/* GPT12_T3_T3 (rwh) */
#define GPT12_T3_T3_POS                      _GPT12_UL(0)
#define GPT12_T3_T3_LEN                      _GPT12_UL(16)

/* GPT12_T4_T4 (rwh) */
#define GPT12_T4_T4_POS                      _GPT12_UL(0)
#define GPT12_T4_T4_LEN                      _GPT12_UL(16)

/* GPT12_T5_Tx (rwh) */
#define GPT12_T5_Tx_POS                      _GPT12_UL(0)
#define GPT12_T5_Tx_LEN                      _GPT12_UL(16)

/* GPT12_T6_Tx (rwh) */
#define GPT12_T6_Tx_POS                      _GPT12_UL(0)
#define GPT12_T6_Tx_LEN                      _GPT12_UL(16)

/* GPT12_SRC5_SRPN (rw) */
#define GPT12_SRC5_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC5_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC5_TOS (rw) */
#define GPT12_SRC5_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC5_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC5_SRE (rw) */
#define GPT12_SRC5_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC5_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC5_SRR (rh) */
#define GPT12_SRC5_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC5_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC5_CLRR (w) */
#define GPT12_SRC5_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC5_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC5_SETR (w) */
#define GPT12_SRC5_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC5_SETR_LEN                  _GPT12_UL(1)

/* GPT12_SRC4_SRPN (rw) */
#define GPT12_SRC4_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC4_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC4_TOS (rw) */
#define GPT12_SRC4_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC4_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC4_SRE (rw) */
#define GPT12_SRC4_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC4_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC4_SRR (rh) */
#define GPT12_SRC4_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC4_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC4_CLRR (w) */
#define GPT12_SRC4_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC4_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC4_SETR (w) */
#define GPT12_SRC4_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC4_SETR_LEN                  _GPT12_UL(1)

/* GPT12_SRC3_SRPN (rw) */
#define GPT12_SRC3_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC3_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC3_TOS (rw) */
#define GPT12_SRC3_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC3_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC3_SRE (rw) */
#define GPT12_SRC3_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC3_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC3_SRR (rh) */
#define GPT12_SRC3_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC3_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC3_CLRR (w) */
#define GPT12_SRC3_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC3_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC3_SETR (w) */
#define GPT12_SRC3_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC3_SETR_LEN                  _GPT12_UL(1)

/* GPT12_SRC2_SRPN (rw) */
#define GPT12_SRC2_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC2_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC2_TOS (rw) */
#define GPT12_SRC2_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC2_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC2_SRE (rw) */
#define GPT12_SRC2_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC2_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC2_SRR (rh) */
#define GPT12_SRC2_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC2_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC2_CLRR (w) */
#define GPT12_SRC2_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC2_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC2_SETR (w) */
#define GPT12_SRC2_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC2_SETR_LEN                  _GPT12_UL(1)

/* GPT12_SRC1_SRPN (rw) */
#define GPT12_SRC1_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC1_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC1_TOS (rw) */
#define GPT12_SRC1_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC1_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC1_SRE (rw) */
#define GPT12_SRC1_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC1_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC1_SRR (rh) */
#define GPT12_SRC1_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC1_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC1_CLRR (w) */
#define GPT12_SRC1_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC1_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC1_SETR (w) */
#define GPT12_SRC1_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC1_SETR_LEN                  _GPT12_UL(1)

/* GPT12_SRC0_SRPN (rw) */
#define GPT12_SRC0_SRPN_POS                  _GPT12_UL(0)
#define GPT12_SRC0_SRPN_LEN                  _GPT12_UL(8)

/* GPT12_SRC0_TOS (rw) */
#define GPT12_SRC0_TOS_POS                   _GPT12_UL(10)
#define GPT12_SRC0_TOS_LEN                   _GPT12_UL(1)

/* GPT12_SRC0_SRE (rw) */
#define GPT12_SRC0_SRE_POS                   _GPT12_UL(12)
#define GPT12_SRC0_SRE_LEN                   _GPT12_UL(1)

/* GPT12_SRC0_SRR (rh) */
#define GPT12_SRC0_SRR_POS                   _GPT12_UL(13)
#define GPT12_SRC0_SRR_LEN                   _GPT12_UL(1)

/* GPT12_SRC0_CLRR (w) */
#define GPT12_SRC0_CLRR_POS                  _GPT12_UL(14)
#define GPT12_SRC0_CLRR_LEN                  _GPT12_UL(1)

/* GPT12_SRC0_SETR (w) */
#define GPT12_SRC0_SETR_POS                  _GPT12_UL(15)
#define GPT12_SRC0_SETR_LEN                  _GPT12_UL(1)

/* GPT120_CLC_DISR (rw) */
#define GPT120_CLC_DISR_POS                  _GPT12_UL(0)
#define GPT120_CLC_DISR_LEN                  _GPT12_UL(1)

/* GPT120_CLC_DISS (rh) */
#define GPT120_CLC_DISS_POS                  _GPT12_UL(1)
#define GPT120_CLC_DISS_LEN                  _GPT12_UL(1)

/* GPT120_CLC_SPEN (rw) */
#define GPT120_CLC_SPEN_POS                  _GPT12_UL(2)
#define GPT120_CLC_SPEN_LEN                  _GPT12_UL(1)

/* GPT120_CLC_EDIS (rw) */
#define GPT120_CLC_EDIS_POS                  _GPT12_UL(3)
#define GPT120_CLC_EDIS_LEN                  _GPT12_UL(1)

/* GPT120_CLC_SBWE (w) */
#define GPT120_CLC_SBWE_POS                  _GPT12_UL(4)
#define GPT120_CLC_SBWE_LEN                  _GPT12_UL(1)

/* GPT120_CLC_FSOE (rw) */
#define GPT120_CLC_FSOE_POS                  _GPT12_UL(5)
#define GPT120_CLC_FSOE_LEN                  _GPT12_UL(1)

/* GPT120_PISEL_IST2IN (rw) */
#define GPT120_PISEL_IST2IN_POS              _GPT12_UL(0)
#define GPT120_PISEL_IST2IN_LEN              _GPT12_UL(1)

/* GPT120_PISEL_IST2EUD (rw) */
#define GPT120_PISEL_IST2EUD_POS             _GPT12_UL(1)
#define GPT120_PISEL_IST2EUD_LEN             _GPT12_UL(1)

/* GPT120_PISEL_IST3IN (rw) */
#define GPT120_PISEL_IST3IN_POS              _GPT12_UL(2)
#define GPT120_PISEL_IST3IN_LEN              _GPT12_UL(2)

/* GPT120_PISEL_IST3EUD (rw) */
#define GPT120_PISEL_IST3EUD_POS             _GPT12_UL(4)
#define GPT120_PISEL_IST3EUD_LEN             _GPT12_UL(2)

/* GPT120_PISEL_IST4IN (rw) */
#define GPT120_PISEL_IST4IN_POS              _GPT12_UL(6)
#define GPT120_PISEL_IST4IN_LEN              _GPT12_UL(2)

/* GPT120_PISEL_IST4EUD (rw) */
#define GPT120_PISEL_IST4EUD_POS             _GPT12_UL(8)
#define GPT120_PISEL_IST4EUD_LEN             _GPT12_UL(2)

/* GPT120_PISEL_IST5IN (rw) */
#define GPT120_PISEL_IST5IN_POS              _GPT12_UL(10)
#define GPT120_PISEL_IST5IN_LEN              _GPT12_UL(1)

/* GPT120_PISEL_IST5EUD (rw) */
#define GPT120_PISEL_IST5EUD_POS             _GPT12_UL(11)
#define GPT120_PISEL_IST5EUD_LEN             _GPT12_UL(1)

/* GPT120_PISEL_IST6IN (rw) */
#define GPT120_PISEL_IST6IN_POS              _GPT12_UL(12)
#define GPT120_PISEL_IST6IN_LEN              _GPT12_UL(1)

/* GPT120_PISEL_IST6EUD (rw) */
#define GPT120_PISEL_IST6EUD_POS             _GPT12_UL(13)
#define GPT120_PISEL_IST6EUD_LEN             _GPT12_UL(1)

/* GPT120_PISEL_ISCAPIN (rw) */
#define GPT120_PISEL_ISCAPIN_POS             _GPT12_UL(14)
#define GPT120_PISEL_ISCAPIN_LEN             _GPT12_UL(2)

/* GPT120_ID_MODREV (r) */
#define GPT120_ID_MODREV_POS                 _GPT12_UL(0)
#define GPT120_ID_MODREV_LEN                 _GPT12_UL(8)

/* GPT120_ID_MODTYPE (r) */
#define GPT120_ID_MODTYPE_POS                _GPT12_UL(8)
#define GPT120_ID_MODTYPE_LEN                _GPT12_UL(8)

/* GPT120_ID_MODNUMBER (r) */
#define GPT120_ID_MODNUMBER_POS              _GPT12_UL(16)
#define GPT120_ID_MODNUMBER_LEN              _GPT12_UL(16)

/* GPT120_T2CON_T2I (rw) */
#define GPT120_T2CON_T2I_POS                 _GPT12_UL(0)
#define GPT120_T2CON_T2I_LEN                 _GPT12_UL(3)

/* GPT120_T2CON_T2M (rw) */
#define GPT120_T2CON_T2M_POS                 _GPT12_UL(3)
#define GPT120_T2CON_T2M_LEN                 _GPT12_UL(3)

/* GPT120_T2CON_T2R (rw) */
#define GPT120_T2CON_T2R_POS                 _GPT12_UL(6)
#define GPT120_T2CON_T2R_LEN                 _GPT12_UL(1)

/* GPT120_T2CON_T2UD (rw) */
#define GPT120_T2CON_T2UD_POS                _GPT12_UL(7)
#define GPT120_T2CON_T2UD_LEN                _GPT12_UL(1)

/* GPT120_T2CON_T2UDE (rw) */
#define GPT120_T2CON_T2UDE_POS               _GPT12_UL(8)
#define GPT120_T2CON_T2UDE_LEN               _GPT12_UL(1)

/* GPT120_T2CON_T2RC (rw) */
#define GPT120_T2CON_T2RC_POS                _GPT12_UL(9)
#define GPT120_T2CON_T2RC_LEN                _GPT12_UL(1)

/* GPT120_T2CON_T2IRDIS (rw) */
#define GPT120_T2CON_T2IRDIS_POS             _GPT12_UL(12)
#define GPT120_T2CON_T2IRDIS_LEN             _GPT12_UL(1)

/* GPT120_T2CON_T2EDGE (rwh) */
#define GPT120_T2CON_T2EDGE_POS              _GPT12_UL(13)
#define GPT120_T2CON_T2EDGE_LEN              _GPT12_UL(1)

/* GPT120_T2CON_T2CHDIR (rwh) */
#define GPT120_T2CON_T2CHDIR_POS             _GPT12_UL(14)
#define GPT120_T2CON_T2CHDIR_LEN             _GPT12_UL(1)

/* GPT120_T2CON_T2RDIR (rh) */
#define GPT120_T2CON_T2RDIR_POS              _GPT12_UL(15)
#define GPT120_T2CON_T2RDIR_LEN              _GPT12_UL(1)

/* GPT120_T3CON_T3I (rw) */
#define GPT120_T3CON_T3I_POS                 _GPT12_UL(0)
#define GPT120_T3CON_T3I_LEN                 _GPT12_UL(3)

/* GPT120_T3CON_T3M (rw) */
#define GPT120_T3CON_T3M_POS                 _GPT12_UL(3)
#define GPT120_T3CON_T3M_LEN                 _GPT12_UL(3)

/* GPT120_T3CON_T3R (rw) */
#define GPT120_T3CON_T3R_POS                 _GPT12_UL(6)
#define GPT120_T3CON_T3R_LEN                 _GPT12_UL(1)

/* GPT120_T3CON_T3UD (rw) */
#define GPT120_T3CON_T3UD_POS                _GPT12_UL(7)
#define GPT120_T3CON_T3UD_LEN                _GPT12_UL(1)

/* GPT120_T3CON_T3UDE (rw) */
#define GPT120_T3CON_T3UDE_POS               _GPT12_UL(8)
#define GPT120_T3CON_T3UDE_LEN               _GPT12_UL(1)

/* GPT120_T3CON_T3OE (rw) */
#define GPT120_T3CON_T3OE_POS                _GPT12_UL(9)
#define GPT120_T3CON_T3OE_LEN                _GPT12_UL(1)

/* GPT120_T3CON_T3OTL (rwh) */
#define GPT120_T3CON_T3OTL_POS               _GPT12_UL(10)
#define GPT120_T3CON_T3OTL_LEN               _GPT12_UL(1)

/* GPT120_T3CON_BPS1 (rw) */
#define GPT120_T3CON_BPS1_POS                _GPT12_UL(11)
#define GPT120_T3CON_BPS1_LEN                _GPT12_UL(2)

/* GPT120_T3CON_T3EDGE (rwh) */
#define GPT120_T3CON_T3EDGE_POS              _GPT12_UL(13)
#define GPT120_T3CON_T3EDGE_LEN              _GPT12_UL(1)

/* GPT120_T3CON_T3CHDIR (rwh) */
#define GPT120_T3CON_T3CHDIR_POS             _GPT12_UL(14)
#define GPT120_T3CON_T3CHDIR_LEN             _GPT12_UL(1)

/* GPT120_T3CON_T3RDIR (rh) */
#define GPT120_T3CON_T3RDIR_POS              _GPT12_UL(15)
#define GPT120_T3CON_T3RDIR_LEN              _GPT12_UL(1)

/* GPT120_T4CON_T4I (rw) */
#define GPT120_T4CON_T4I_POS                 _GPT12_UL(0)
#define GPT120_T4CON_T4I_LEN                 _GPT12_UL(3)

/* GPT120_T4CON_T4M (rw) */
#define GPT120_T4CON_T4M_POS                 _GPT12_UL(3)
#define GPT120_T4CON_T4M_LEN                 _GPT12_UL(3)

/* GPT120_T4CON_T4R (rw) */
#define GPT120_T4CON_T4R_POS                 _GPT12_UL(6)
#define GPT120_T4CON_T4R_LEN                 _GPT12_UL(1)

/* GPT120_T4CON_T4UD (rw) */
#define GPT120_T4CON_T4UD_POS                _GPT12_UL(7)
#define GPT120_T4CON_T4UD_LEN                _GPT12_UL(1)

/* GPT120_T4CON_T4UDE (rw) */
#define GPT120_T4CON_T4UDE_POS               _GPT12_UL(8)
#define GPT120_T4CON_T4UDE_LEN               _GPT12_UL(1)

/* GPT120_T4CON_T4RC (rw) */
#define GPT120_T4CON_T4RC_POS                _GPT12_UL(9)
#define GPT120_T4CON_T4RC_LEN                _GPT12_UL(1)

/* GPT120_T4CON_CLRT2EN (rw) */
#define GPT120_T4CON_CLRT2EN_POS             _GPT12_UL(10)
#define GPT120_T4CON_CLRT2EN_LEN             _GPT12_UL(1)

/* GPT120_T4CON_CLRT3EN (rw) */
#define GPT120_T4CON_CLRT3EN_POS             _GPT12_UL(11)
#define GPT120_T4CON_CLRT3EN_LEN             _GPT12_UL(1)

/* GPT120_T4CON_T4IRDIS (rw) */
#define GPT120_T4CON_T4IRDIS_POS             _GPT12_UL(12)
#define GPT120_T4CON_T4IRDIS_LEN             _GPT12_UL(1)

/* GPT120_T4CON_T4EDGE (rwh) */
#define GPT120_T4CON_T4EDGE_POS              _GPT12_UL(13)
#define GPT120_T4CON_T4EDGE_LEN              _GPT12_UL(1)

/* GPT120_T4CON_T4CHDIR (rwh) */
#define GPT120_T4CON_T4CHDIR_POS             _GPT12_UL(14)
#define GPT120_T4CON_T4CHDIR_LEN             _GPT12_UL(1)

/* GPT120_T4CON_T4RDIR (rh) */
#define GPT120_T4CON_T4RDIR_POS              _GPT12_UL(15)
#define GPT120_T4CON_T4RDIR_LEN              _GPT12_UL(1)

/* GPT120_T5CON_T5I (rw) */
#define GPT120_T5CON_T5I_POS                 _GPT12_UL(0)
#define GPT120_T5CON_T5I_LEN                 _GPT12_UL(3)

/* GPT120_T5CON_T5M (rw) */
#define GPT120_T5CON_T5M_POS                 _GPT12_UL(3)
#define GPT120_T5CON_T5M_LEN                 _GPT12_UL(3)

/* GPT120_T5CON_T5R (rw) */
#define GPT120_T5CON_T5R_POS                 _GPT12_UL(6)
#define GPT120_T5CON_T5R_LEN                 _GPT12_UL(1)

/* GPT120_T5CON_T5UD (rw) */
#define GPT120_T5CON_T5UD_POS                _GPT12_UL(7)
#define GPT120_T5CON_T5UD_LEN                _GPT12_UL(1)

/* GPT120_T5CON_T5UDE (rw) */
#define GPT120_T5CON_T5UDE_POS               _GPT12_UL(8)
#define GPT120_T5CON_T5UDE_LEN               _GPT12_UL(1)

/* GPT120_T5CON_T5RC (rw) */
#define GPT120_T5CON_T5RC_POS                _GPT12_UL(9)
#define GPT120_T5CON_T5RC_LEN                _GPT12_UL(1)

/* GPT120_T5CON_CT3 (rw) */
#define GPT120_T5CON_CT3_POS                 _GPT12_UL(10)
#define GPT120_T5CON_CT3_LEN                 _GPT12_UL(1)

/* GPT120_T5CON_CI (rw) */
#define GPT120_T5CON_CI_POS                  _GPT12_UL(12)
#define GPT120_T5CON_CI_LEN                  _GPT12_UL(2)

/* GPT120_T5CON_T5CLR (rw) */
#define GPT120_T5CON_T5CLR_POS               _GPT12_UL(14)
#define GPT120_T5CON_T5CLR_LEN               _GPT12_UL(1)

/* GPT120_T5CON_T5SC (rw) */
#define GPT120_T5CON_T5SC_POS                _GPT12_UL(15)
#define GPT120_T5CON_T5SC_LEN                _GPT12_UL(1)

/* GPT120_T6CON_T6I (rw) */
#define GPT120_T6CON_T6I_POS                 _GPT12_UL(0)
#define GPT120_T6CON_T6I_LEN                 _GPT12_UL(3)

/* GPT120_T6CON_T6M (rw) */
#define GPT120_T6CON_T6M_POS                 _GPT12_UL(3)
#define GPT120_T6CON_T6M_LEN                 _GPT12_UL(3)

/* GPT120_T6CON_T6R (rw) */
#define GPT120_T6CON_T6R_POS                 _GPT12_UL(6)
#define GPT120_T6CON_T6R_LEN                 _GPT12_UL(1)

/* GPT120_T6CON_T6UD (rw) */
#define GPT120_T6CON_T6UD_POS                _GPT12_UL(7)
#define GPT120_T6CON_T6UD_LEN                _GPT12_UL(1)

/* GPT120_T6CON_T6UDE (rw) */
#define GPT120_T6CON_T6UDE_POS               _GPT12_UL(8)
#define GPT120_T6CON_T6UDE_LEN               _GPT12_UL(1)

/* GPT120_T6CON_T6OE (rw) */
#define GPT120_T6CON_T6OE_POS                _GPT12_UL(9)
#define GPT120_T6CON_T6OE_LEN                _GPT12_UL(1)

/* GPT120_T6CON_T6OTL (rwh) */
#define GPT120_T6CON_T6OTL_POS               _GPT12_UL(10)
#define GPT120_T6CON_T6OTL_LEN               _GPT12_UL(1)

/* GPT120_T6CON_BPS2 (rw) */
#define GPT120_T6CON_BPS2_POS                _GPT12_UL(11)
#define GPT120_T6CON_BPS2_LEN                _GPT12_UL(2)

/* GPT120_T6CON_T6CLR (rw) */
#define GPT120_T6CON_T6CLR_POS               _GPT12_UL(14)
#define GPT120_T6CON_T6CLR_LEN               _GPT12_UL(1)

/* GPT120_T6CON_T6SR (rw) */
#define GPT120_T6CON_T6SR_POS                _GPT12_UL(15)
#define GPT120_T6CON_T6SR_LEN                _GPT12_UL(1)

/* GPT120_CAPREL_CAPREL (rwh) */
#define GPT120_CAPREL_CAPREL_POS             _GPT12_UL(0)
#define GPT120_CAPREL_CAPREL_LEN             _GPT12_UL(16)

/* GPT120_T2_T2 (rwh) */
#define GPT120_T2_T2_POS                     _GPT12_UL(0)
#define GPT120_T2_T2_LEN                     _GPT12_UL(16)

/* GPT120_T3_T3 (rwh) */
#define GPT120_T3_T3_POS                     _GPT12_UL(0)
#define GPT120_T3_T3_LEN                     _GPT12_UL(16)

/* GPT120_T4_T4 (rwh) */
#define GPT120_T4_T4_POS                     _GPT12_UL(0)
#define GPT120_T4_T4_LEN                     _GPT12_UL(16)

/* GPT120_T5_Tx (rwh) */
#define GPT120_T5_Tx_POS                     _GPT12_UL(0)
#define GPT120_T5_Tx_LEN                     _GPT12_UL(16)

/* GPT120_T6_Tx (rwh) */
#define GPT120_T6_Tx_POS                     _GPT12_UL(0)
#define GPT120_T6_Tx_LEN                     _GPT12_UL(16)

/* GPT120_SRC5_SRPN (rw) */
#define GPT120_SRC5_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC5_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC5_TOS (rw) */
#define GPT120_SRC5_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC5_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC5_SRE (rw) */
#define GPT120_SRC5_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC5_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC5_SRR (rh) */
#define GPT120_SRC5_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC5_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC5_CLRR (w) */
#define GPT120_SRC5_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC5_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC5_SETR (w) */
#define GPT120_SRC5_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC5_SETR_LEN                 _GPT12_UL(1)

/* GPT120_SRC4_SRPN (rw) */
#define GPT120_SRC4_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC4_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC4_TOS (rw) */
#define GPT120_SRC4_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC4_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC4_SRE (rw) */
#define GPT120_SRC4_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC4_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC4_SRR (rh) */
#define GPT120_SRC4_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC4_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC4_CLRR (w) */
#define GPT120_SRC4_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC4_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC4_SETR (w) */
#define GPT120_SRC4_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC4_SETR_LEN                 _GPT12_UL(1)

/* GPT120_SRC3_SRPN (rw) */
#define GPT120_SRC3_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC3_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC3_TOS (rw) */
#define GPT120_SRC3_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC3_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC3_SRE (rw) */
#define GPT120_SRC3_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC3_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC3_SRR (rh) */
#define GPT120_SRC3_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC3_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC3_CLRR (w) */
#define GPT120_SRC3_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC3_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC3_SETR (w) */
#define GPT120_SRC3_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC3_SETR_LEN                 _GPT12_UL(1)

/* GPT120_SRC2_SRPN (rw) */
#define GPT120_SRC2_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC2_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC2_TOS (rw) */
#define GPT120_SRC2_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC2_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC2_SRE (rw) */
#define GPT120_SRC2_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC2_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC2_SRR (rh) */
#define GPT120_SRC2_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC2_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC2_CLRR (w) */
#define GPT120_SRC2_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC2_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC2_SETR (w) */
#define GPT120_SRC2_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC2_SETR_LEN                 _GPT12_UL(1)

/* GPT120_SRC1_SRPN (rw) */
#define GPT120_SRC1_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC1_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC1_TOS (rw) */
#define GPT120_SRC1_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC1_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC1_SRE (rw) */
#define GPT120_SRC1_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC1_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC1_SRR (rh) */
#define GPT120_SRC1_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC1_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC1_CLRR (w) */
#define GPT120_SRC1_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC1_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC1_SETR (w) */
#define GPT120_SRC1_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC1_SETR_LEN                 _GPT12_UL(1)

/* GPT120_SRC0_SRPN (rw) */
#define GPT120_SRC0_SRPN_POS                 _GPT12_UL(0)
#define GPT120_SRC0_SRPN_LEN                 _GPT12_UL(8)

/* GPT120_SRC0_TOS (rw) */
#define GPT120_SRC0_TOS_POS                  _GPT12_UL(10)
#define GPT120_SRC0_TOS_LEN                  _GPT12_UL(1)

/* GPT120_SRC0_SRE (rw) */
#define GPT120_SRC0_SRE_POS                  _GPT12_UL(12)
#define GPT120_SRC0_SRE_LEN                  _GPT12_UL(1)

/* GPT120_SRC0_SRR (rh) */
#define GPT120_SRC0_SRR_POS                  _GPT12_UL(13)
#define GPT120_SRC0_SRR_LEN                  _GPT12_UL(1)

/* GPT120_SRC0_CLRR (w) */
#define GPT120_SRC0_CLRR_POS                 _GPT12_UL(14)
#define GPT120_SRC0_CLRR_LEN                 _GPT12_UL(1)

/* GPT120_SRC0_SETR (w) */
#define GPT120_SRC0_SETR_POS                 _GPT12_UL(15)
#define GPT120_SRC0_SETR_LEN                 _GPT12_UL(1)

/* GPT121_CLC_DISR (rw) */
#define GPT121_CLC_DISR_POS                  _GPT12_UL(0)
#define GPT121_CLC_DISR_LEN                  _GPT12_UL(1)

/* GPT121_CLC_DISS (rh) */
#define GPT121_CLC_DISS_POS                  _GPT12_UL(1)
#define GPT121_CLC_DISS_LEN                  _GPT12_UL(1)

/* GPT121_CLC_SPEN (rw) */
#define GPT121_CLC_SPEN_POS                  _GPT12_UL(2)
#define GPT121_CLC_SPEN_LEN                  _GPT12_UL(1)

/* GPT121_CLC_EDIS (rw) */
#define GPT121_CLC_EDIS_POS                  _GPT12_UL(3)
#define GPT121_CLC_EDIS_LEN                  _GPT12_UL(1)

/* GPT121_CLC_SBWE (w) */
#define GPT121_CLC_SBWE_POS                  _GPT12_UL(4)
#define GPT121_CLC_SBWE_LEN                  _GPT12_UL(1)

/* GPT121_CLC_FSOE (rw) */
#define GPT121_CLC_FSOE_POS                  _GPT12_UL(5)
#define GPT121_CLC_FSOE_LEN                  _GPT12_UL(1)

/* GPT121_PISEL_IST2IN (rw) */
#define GPT121_PISEL_IST2IN_POS              _GPT12_UL(0)
#define GPT121_PISEL_IST2IN_LEN              _GPT12_UL(1)

/* GPT121_PISEL_IST2EUD (rw) */
#define GPT121_PISEL_IST2EUD_POS             _GPT12_UL(1)
#define GPT121_PISEL_IST2EUD_LEN             _GPT12_UL(1)

/* GPT121_PISEL_IST3IN (rw) */
#define GPT121_PISEL_IST3IN_POS              _GPT12_UL(2)
#define GPT121_PISEL_IST3IN_LEN              _GPT12_UL(2)

/* GPT121_PISEL_IST3EUD (rw) */
#define GPT121_PISEL_IST3EUD_POS             _GPT12_UL(4)
#define GPT121_PISEL_IST3EUD_LEN             _GPT12_UL(2)

/* GPT121_PISEL_IST4IN (rw) */
#define GPT121_PISEL_IST4IN_POS              _GPT12_UL(6)
#define GPT121_PISEL_IST4IN_LEN              _GPT12_UL(2)

/* GPT121_PISEL_IST4EUD (rw) */
#define GPT121_PISEL_IST4EUD_POS             _GPT12_UL(8)
#define GPT121_PISEL_IST4EUD_LEN             _GPT12_UL(2)

/* GPT121_PISEL_IST5IN (rw) */
#define GPT121_PISEL_IST5IN_POS              _GPT12_UL(10)
#define GPT121_PISEL_IST5IN_LEN              _GPT12_UL(1)

/* GPT121_PISEL_IST5EUD (rw) */
#define GPT121_PISEL_IST5EUD_POS             _GPT12_UL(11)
#define GPT121_PISEL_IST5EUD_LEN             _GPT12_UL(1)

/* GPT121_PISEL_IST6IN (rw) */
#define GPT121_PISEL_IST6IN_POS              _GPT12_UL(12)
#define GPT121_PISEL_IST6IN_LEN              _GPT12_UL(1)

/* GPT121_PISEL_IST6EUD (rw) */
#define GPT121_PISEL_IST6EUD_POS             _GPT12_UL(13)
#define GPT121_PISEL_IST6EUD_LEN             _GPT12_UL(1)

/* GPT121_PISEL_ISCAPIN (rw) */
#define GPT121_PISEL_ISCAPIN_POS             _GPT12_UL(14)
#define GPT121_PISEL_ISCAPIN_LEN             _GPT12_UL(2)

/* GPT121_ID_MODREV (r) */
#define GPT121_ID_MODREV_POS                 _GPT12_UL(0)
#define GPT121_ID_MODREV_LEN                 _GPT12_UL(8)

/* GPT121_ID_MODTYPE (r) */
#define GPT121_ID_MODTYPE_POS                _GPT12_UL(8)
#define GPT121_ID_MODTYPE_LEN                _GPT12_UL(8)

/* GPT121_ID_MODNUMBER (r) */
#define GPT121_ID_MODNUMBER_POS              _GPT12_UL(16)
#define GPT121_ID_MODNUMBER_LEN              _GPT12_UL(16)

/* GPT121_T2CON_T2I (rw) */
#define GPT121_T2CON_T2I_POS                 _GPT12_UL(0)
#define GPT121_T2CON_T2I_LEN                 _GPT12_UL(3)

/* GPT121_T2CON_T2M (rw) */
#define GPT121_T2CON_T2M_POS                 _GPT12_UL(3)
#define GPT121_T2CON_T2M_LEN                 _GPT12_UL(3)

/* GPT121_T2CON_T2R (rw) */
#define GPT121_T2CON_T2R_POS                 _GPT12_UL(6)
#define GPT121_T2CON_T2R_LEN                 _GPT12_UL(1)

/* GPT121_T2CON_T2UD (rw) */
#define GPT121_T2CON_T2UD_POS                _GPT12_UL(7)
#define GPT121_T2CON_T2UD_LEN                _GPT12_UL(1)

/* GPT121_T2CON_T2UDE (rw) */
#define GPT121_T2CON_T2UDE_POS               _GPT12_UL(8)
#define GPT121_T2CON_T2UDE_LEN               _GPT12_UL(1)

/* GPT121_T2CON_T2RC (rw) */
#define GPT121_T2CON_T2RC_POS                _GPT12_UL(9)
#define GPT121_T2CON_T2RC_LEN                _GPT12_UL(1)

/* GPT121_T2CON_T2IRDIS (rw) */
#define GPT121_T2CON_T2IRDIS_POS             _GPT12_UL(12)
#define GPT121_T2CON_T2IRDIS_LEN             _GPT12_UL(1)

/* GPT121_T2CON_T2EDGE (rwh) */
#define GPT121_T2CON_T2EDGE_POS              _GPT12_UL(13)
#define GPT121_T2CON_T2EDGE_LEN              _GPT12_UL(1)

/* GPT121_T2CON_T2CHDIR (rwh) */
#define GPT121_T2CON_T2CHDIR_POS             _GPT12_UL(14)
#define GPT121_T2CON_T2CHDIR_LEN             _GPT12_UL(1)

/* GPT121_T2CON_T2RDIR (rh) */
#define GPT121_T2CON_T2RDIR_POS              _GPT12_UL(15)
#define GPT121_T2CON_T2RDIR_LEN              _GPT12_UL(1)

/* GPT121_T3CON_T3I (rw) */
#define GPT121_T3CON_T3I_POS                 _GPT12_UL(0)
#define GPT121_T3CON_T3I_LEN                 _GPT12_UL(3)

/* GPT121_T3CON_T3M (rw) */
#define GPT121_T3CON_T3M_POS                 _GPT12_UL(3)
#define GPT121_T3CON_T3M_LEN                 _GPT12_UL(3)

/* GPT121_T3CON_T3R (rw) */
#define GPT121_T3CON_T3R_POS                 _GPT12_UL(6)
#define GPT121_T3CON_T3R_LEN                 _GPT12_UL(1)

/* GPT121_T3CON_T3UD (rw) */
#define GPT121_T3CON_T3UD_POS                _GPT12_UL(7)
#define GPT121_T3CON_T3UD_LEN                _GPT12_UL(1)

/* GPT121_T3CON_T3UDE (rw) */
#define GPT121_T3CON_T3UDE_POS               _GPT12_UL(8)
#define GPT121_T3CON_T3UDE_LEN               _GPT12_UL(1)

/* GPT121_T3CON_T3OE (rw) */
#define GPT121_T3CON_T3OE_POS                _GPT12_UL(9)
#define GPT121_T3CON_T3OE_LEN                _GPT12_UL(1)

/* GPT121_T3CON_T3OTL (rwh) */
#define GPT121_T3CON_T3OTL_POS               _GPT12_UL(10)
#define GPT121_T3CON_T3OTL_LEN               _GPT12_UL(1)

/* GPT121_T3CON_BPS1 (rw) */
#define GPT121_T3CON_BPS1_POS                _GPT12_UL(11)
#define GPT121_T3CON_BPS1_LEN                _GPT12_UL(2)

/* GPT121_T3CON_T3EDGE (rwh) */
#define GPT121_T3CON_T3EDGE_POS              _GPT12_UL(13)
#define GPT121_T3CON_T3EDGE_LEN              _GPT12_UL(1)

/* GPT121_T3CON_T3CHDIR (rwh) */
#define GPT121_T3CON_T3CHDIR_POS             _GPT12_UL(14)
#define GPT121_T3CON_T3CHDIR_LEN             _GPT12_UL(1)

/* GPT121_T3CON_T3RDIR (rh) */
#define GPT121_T3CON_T3RDIR_POS              _GPT12_UL(15)
#define GPT121_T3CON_T3RDIR_LEN              _GPT12_UL(1)

/* GPT121_T4CON_T4I (rw) */
#define GPT121_T4CON_T4I_POS                 _GPT12_UL(0)
#define GPT121_T4CON_T4I_LEN                 _GPT12_UL(3)

/* GPT121_T4CON_T4M (rw) */
#define GPT121_T4CON_T4M_POS                 _GPT12_UL(3)
#define GPT121_T4CON_T4M_LEN                 _GPT12_UL(3)

/* GPT121_T4CON_T4R (rw) */
#define GPT121_T4CON_T4R_POS                 _GPT12_UL(6)
#define GPT121_T4CON_T4R_LEN                 _GPT12_UL(1)

/* GPT121_T4CON_T4UD (rw) */
#define GPT121_T4CON_T4UD_POS                _GPT12_UL(7)
#define GPT121_T4CON_T4UD_LEN                _GPT12_UL(1)

/* GPT121_T4CON_T4UDE (rw) */
#define GPT121_T4CON_T4UDE_POS               _GPT12_UL(8)
#define GPT121_T4CON_T4UDE_LEN               _GPT12_UL(1)

/* GPT121_T4CON_T4RC (rw) */
#define GPT121_T4CON_T4RC_POS                _GPT12_UL(9)
#define GPT121_T4CON_T4RC_LEN                _GPT12_UL(1)

/* GPT121_T4CON_CLRT2EN (rw) */
#define GPT121_T4CON_CLRT2EN_POS             _GPT12_UL(10)
#define GPT121_T4CON_CLRT2EN_LEN             _GPT12_UL(1)

/* GPT121_T4CON_CLRT3EN (rw) */
#define GPT121_T4CON_CLRT3EN_POS             _GPT12_UL(11)
#define GPT121_T4CON_CLRT3EN_LEN             _GPT12_UL(1)

/* GPT121_T4CON_T4IRDIS (rw) */
#define GPT121_T4CON_T4IRDIS_POS             _GPT12_UL(12)
#define GPT121_T4CON_T4IRDIS_LEN             _GPT12_UL(1)

/* GPT121_T4CON_T4EDGE (rwh) */
#define GPT121_T4CON_T4EDGE_POS              _GPT12_UL(13)
#define GPT121_T4CON_T4EDGE_LEN              _GPT12_UL(1)

/* GPT121_T4CON_T4CHDIR (rwh) */
#define GPT121_T4CON_T4CHDIR_POS             _GPT12_UL(14)
#define GPT121_T4CON_T4CHDIR_LEN             _GPT12_UL(1)

/* GPT121_T4CON_T4RDIR (rh) */
#define GPT121_T4CON_T4RDIR_POS              _GPT12_UL(15)
#define GPT121_T4CON_T4RDIR_LEN              _GPT12_UL(1)

/* GPT121_T5CON_T5I (rw) */
#define GPT121_T5CON_T5I_POS                 _GPT12_UL(0)
#define GPT121_T5CON_T5I_LEN                 _GPT12_UL(3)

/* GPT121_T5CON_T5M (rw) */
#define GPT121_T5CON_T5M_POS                 _GPT12_UL(3)
#define GPT121_T5CON_T5M_LEN                 _GPT12_UL(3)

/* GPT121_T5CON_T5R (rw) */
#define GPT121_T5CON_T5R_POS                 _GPT12_UL(6)
#define GPT121_T5CON_T5R_LEN                 _GPT12_UL(1)

/* GPT121_T5CON_T5UD (rw) */
#define GPT121_T5CON_T5UD_POS                _GPT12_UL(7)
#define GPT121_T5CON_T5UD_LEN                _GPT12_UL(1)

/* GPT121_T5CON_T5UDE (rw) */
#define GPT121_T5CON_T5UDE_POS               _GPT12_UL(8)
#define GPT121_T5CON_T5UDE_LEN               _GPT12_UL(1)

/* GPT121_T5CON_T5RC (rw) */
#define GPT121_T5CON_T5RC_POS                _GPT12_UL(9)
#define GPT121_T5CON_T5RC_LEN                _GPT12_UL(1)

/* GPT121_T5CON_CT3 (rw) */
#define GPT121_T5CON_CT3_POS                 _GPT12_UL(10)
#define GPT121_T5CON_CT3_LEN                 _GPT12_UL(1)

/* GPT121_T5CON_CI (rw) */
#define GPT121_T5CON_CI_POS                  _GPT12_UL(12)
#define GPT121_T5CON_CI_LEN                  _GPT12_UL(2)

/* GPT121_T5CON_T5CLR (rw) */
#define GPT121_T5CON_T5CLR_POS               _GPT12_UL(14)
#define GPT121_T5CON_T5CLR_LEN               _GPT12_UL(1)

/* GPT121_T5CON_T5SC (rw) */
#define GPT121_T5CON_T5SC_POS                _GPT12_UL(15)
#define GPT121_T5CON_T5SC_LEN                _GPT12_UL(1)

/* GPT121_T6CON_T6I (rw) */
#define GPT121_T6CON_T6I_POS                 _GPT12_UL(0)
#define GPT121_T6CON_T6I_LEN                 _GPT12_UL(3)

/* GPT121_T6CON_T6M (rw) */
#define GPT121_T6CON_T6M_POS                 _GPT12_UL(3)
#define GPT121_T6CON_T6M_LEN                 _GPT12_UL(3)

/* GPT121_T6CON_T6R (rw) */
#define GPT121_T6CON_T6R_POS                 _GPT12_UL(6)
#define GPT121_T6CON_T6R_LEN                 _GPT12_UL(1)

/* GPT121_T6CON_T6UD (rw) */
#define GPT121_T6CON_T6UD_POS                _GPT12_UL(7)
#define GPT121_T6CON_T6UD_LEN                _GPT12_UL(1)

/* GPT121_T6CON_T6UDE (rw) */
#define GPT121_T6CON_T6UDE_POS               _GPT12_UL(8)
#define GPT121_T6CON_T6UDE_LEN               _GPT12_UL(1)

/* GPT121_T6CON_T6OE (rw) */
#define GPT121_T6CON_T6OE_POS                _GPT12_UL(9)
#define GPT121_T6CON_T6OE_LEN                _GPT12_UL(1)

/* GPT121_T6CON_T6OTL (rwh) */
#define GPT121_T6CON_T6OTL_POS               _GPT12_UL(10)
#define GPT121_T6CON_T6OTL_LEN               _GPT12_UL(1)

/* GPT121_T6CON_BPS2 (rw) */
#define GPT121_T6CON_BPS2_POS                _GPT12_UL(11)
#define GPT121_T6CON_BPS2_LEN                _GPT12_UL(2)

/* GPT121_T6CON_T6CLR (rw) */
#define GPT121_T6CON_T6CLR_POS               _GPT12_UL(14)
#define GPT121_T6CON_T6CLR_LEN               _GPT12_UL(1)

/* GPT121_T6CON_T6SR (rw) */
#define GPT121_T6CON_T6SR_POS                _GPT12_UL(15)
#define GPT121_T6CON_T6SR_LEN                _GPT12_UL(1)

/* GPT121_CAPREL_CAPREL (rwh) */
#define GPT121_CAPREL_CAPREL_POS             _GPT12_UL(0)
#define GPT121_CAPREL_CAPREL_LEN             _GPT12_UL(16)

/* GPT121_T2_T2 (rwh) */
#define GPT121_T2_T2_POS                     _GPT12_UL(0)
#define GPT121_T2_T2_LEN                     _GPT12_UL(16)

/* GPT121_T3_T3 (rwh) */
#define GPT121_T3_T3_POS                     _GPT12_UL(0)
#define GPT121_T3_T3_LEN                     _GPT12_UL(16)

/* GPT121_T4_T4 (rwh) */
#define GPT121_T4_T4_POS                     _GPT12_UL(0)
#define GPT121_T4_T4_LEN                     _GPT12_UL(16)

/* GPT121_T5_Tx (rwh) */
#define GPT121_T5_Tx_POS                     _GPT12_UL(0)
#define GPT121_T5_Tx_LEN                     _GPT12_UL(16)

/* GPT121_T6_Tx (rwh) */
#define GPT121_T6_Tx_POS                     _GPT12_UL(0)
#define GPT121_T6_Tx_LEN                     _GPT12_UL(16)

/* GPT121_SRC5_SRPN (rw) */
#define GPT121_SRC5_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC5_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC5_TOS (rw) */
#define GPT121_SRC5_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC5_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC5_SRE (rw) */
#define GPT121_SRC5_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC5_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC5_SRR (rh) */
#define GPT121_SRC5_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC5_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC5_CLRR (w) */
#define GPT121_SRC5_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC5_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC5_SETR (w) */
#define GPT121_SRC5_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC5_SETR_LEN                 _GPT12_UL(1)

/* GPT121_SRC4_SRPN (rw) */
#define GPT121_SRC4_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC4_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC4_TOS (rw) */
#define GPT121_SRC4_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC4_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC4_SRE (rw) */
#define GPT121_SRC4_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC4_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC4_SRR (rh) */
#define GPT121_SRC4_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC4_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC4_CLRR (w) */
#define GPT121_SRC4_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC4_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC4_SETR (w) */
#define GPT121_SRC4_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC4_SETR_LEN                 _GPT12_UL(1)

/* GPT121_SRC3_SRPN (rw) */
#define GPT121_SRC3_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC3_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC3_TOS (rw) */
#define GPT121_SRC3_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC3_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC3_SRE (rw) */
#define GPT121_SRC3_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC3_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC3_SRR (rh) */
#define GPT121_SRC3_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC3_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC3_CLRR (w) */
#define GPT121_SRC3_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC3_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC3_SETR (w) */
#define GPT121_SRC3_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC3_SETR_LEN                 _GPT12_UL(1)

/* GPT121_SRC2_SRPN (rw) */
#define GPT121_SRC2_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC2_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC2_TOS (rw) */
#define GPT121_SRC2_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC2_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC2_SRE (rw) */
#define GPT121_SRC2_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC2_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC2_SRR (rh) */
#define GPT121_SRC2_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC2_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC2_CLRR (w) */
#define GPT121_SRC2_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC2_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC2_SETR (w) */
#define GPT121_SRC2_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC2_SETR_LEN                 _GPT12_UL(1)

/* GPT121_SRC1_SRPN (rw) */
#define GPT121_SRC1_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC1_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC1_TOS (rw) */
#define GPT121_SRC1_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC1_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC1_SRE (rw) */
#define GPT121_SRC1_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC1_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC1_SRR (rh) */
#define GPT121_SRC1_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC1_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC1_CLRR (w) */
#define GPT121_SRC1_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC1_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC1_SETR (w) */
#define GPT121_SRC1_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC1_SETR_LEN                 _GPT12_UL(1)

/* GPT121_SRC0_SRPN (rw) */
#define GPT121_SRC0_SRPN_POS                 _GPT12_UL(0)
#define GPT121_SRC0_SRPN_LEN                 _GPT12_UL(8)

/* GPT121_SRC0_TOS (rw) */
#define GPT121_SRC0_TOS_POS                  _GPT12_UL(10)
#define GPT121_SRC0_TOS_LEN                  _GPT12_UL(1)

/* GPT121_SRC0_SRE (rw) */
#define GPT121_SRC0_SRE_POS                  _GPT12_UL(12)
#define GPT121_SRC0_SRE_LEN                  _GPT12_UL(1)

/* GPT121_SRC0_SRR (rh) */
#define GPT121_SRC0_SRR_POS                  _GPT12_UL(13)
#define GPT121_SRC0_SRR_LEN                  _GPT12_UL(1)

/* GPT121_SRC0_CLRR (w) */
#define GPT121_SRC0_CLRR_POS                 _GPT12_UL(14)
#define GPT121_SRC0_CLRR_LEN                 _GPT12_UL(1)

/* GPT121_SRC0_SETR (w) */
#define GPT121_SRC0_SETR_POS                 _GPT12_UL(15)
#define GPT121_SRC0_SETR_LEN                 _GPT12_UL(1)

#endif
