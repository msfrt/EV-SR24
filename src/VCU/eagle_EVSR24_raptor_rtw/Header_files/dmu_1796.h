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
 * $Filename__:dmu_1796.h$ 
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
 * $Name______:dmu_1796$ 
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
 *      File name: dmu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DMU_1796_H
#define _DMU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMU_UL(x) x
#else
    #define _DMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for overlay registers */
typedef struct {
    volatile uint32 RABR;                // Redirect Address Base Registers
    volatile uint32 OTAR;                // Overlay Target Address Registers
    volatile uint32 OMASK;               // Overlay Mask Registers
} DMU_OvrReg_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0010100...0xF0010107] : reserved space
    volatile uint32 ID;                  // [0xF8010108] : DMU Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF001010C...0xF001010F] : reserved space
    volatile uint32 CSCACTL;             // [0xF8010110] : CPU SRAM Control Array Control Register
    volatile uint32 RESERVED2[1];        // [0xF0010114...0xF0010117] : reserved space
    volatile uint32 CSCADIN;             // [0xF8010118] : CPU SRAM Control Array Data In Register
    volatile uint32 CSCADOUT;            // [0xF801011C] : CPU SRAM Control Array Data Out Register
    DMU_OvrReg_t    OVR[16];             // [0xF8010120...0xF80101DF]: DMU Overlay Registers
    volatile uint32 SBRCTR;              // [0xF80101E0] : Stand-by SRAM Control Register
} DMU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DMU_RegMap_t DMU __attribute__ ((asection (".bss.label_only")));

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

/* DMU_CSCACTL_BCCH0 (rwh) */
#define DMU_CSCACTL_BCCH0_POS          _DMU_UL(16)
#define DMU_CSCACTL_BCCH0_LEN          _DMU_UL(8)

/* DMU_CSCACTL_BCCH1 (rwh) */
#define DMU_CSCACTL_BCCH1_POS          _DMU_UL(24)
#define DMU_CSCACTL_BCCH1_LEN          _DMU_UL(8)

/* DMU_CSCACTL_CA0EN (rw) */
#define DMU_CSCACTL_CA0EN_POS          _DMU_UL(0)
#define DMU_CSCACTL_CA0EN_LEN          _DMU_UL(1)

/* DMU_CSCACTL_CA1EN (rw) */
#define DMU_CSCACTL_CA1EN_POS          _DMU_UL(1)
#define DMU_CSCACTL_CA1EN_LEN          _DMU_UL(1)

/* DMU_CSCADIN_DICH0 (w) */
#define DMU_CSCADIN_DICH0_POS          _DMU_UL(0)
#define DMU_CSCADIN_DICH0_LEN          _DMU_UL(16)

/* DMU_CSCADIN_DICH1 (w) */
#define DMU_CSCADIN_DICH1_POS          _DMU_UL(16)
#define DMU_CSCADIN_DICH1_LEN          _DMU_UL(16)

/* DMU_CSCADOUT_DOCH0 (r) */
#define DMU_CSCADOUT_DOCH0_POS         _DMU_UL(0)
#define DMU_CSCADOUT_DOCH0_LEN         _DMU_UL(16)

/* DMU_CSCADOUT_DOCH1 (r) */
#define DMU_CSCADOUT_DOCH1_POS         _DMU_UL(16)
#define DMU_CSCADOUT_DOCH1_LEN         _DMU_UL(16)

/* DMU_ID_MOD_NUMBER (r) */
#define DMU_ID_MOD_NUMBER_POS          _DMU_UL(16)
#define DMU_ID_MOD_NUMBER_LEN          _DMU_UL(16)

/* DMU_ID_MOD_REV (r) */
#define DMU_ID_MOD_REV_POS             _DMU_UL(0)
#define DMU_ID_MOD_REV_LEN             _DMU_UL(8)

/* DMU_ID_MOD_TYPE (r) */
#define DMU_ID_MOD_TYPE_POS            _DMU_UL(8)
#define DMU_ID_MOD_TYPE_LEN            _DMU_UL(8)

/* DMU_OMASK_OMASK (rw) */
#define DMU_OMASK_OMASK_POS            _DMU_UL(1)
#define DMU_OMASK_OMASK_LEN            _DMU_UL(8)

/* DMU_OMASK_ONE (r) */
#define DMU_OMASK_ONE_POS              _DMU_UL(9)
#define DMU_OMASK_ONE_LEN              _DMU_UL(19)

/* DMU_OTAR_TBASE (rw) */
#define DMU_OTAR_TBASE_POS             _DMU_UL(1)
#define DMU_OTAR_TBASE_LEN             _DMU_UL(27)

/* DMU_OTAR_TSEG (rw) */
#define DMU_OTAR_TSEG_POS              _DMU_UL(28)
#define DMU_OTAR_TSEG_LEN              _DMU_UL(4)

/* DMU_RABR_IEMS (r) */
#define DMU_RABR_IEMS_POS              _DMU_UL(30)
#define DMU_RABR_IEMS_LEN              _DMU_UL(1)

/* DMU_RABR_OBASE (rw) */
#define DMU_RABR_OBASE_POS             _DMU_UL(1)
#define DMU_RABR_OBASE_LEN             _DMU_UL(15)

/* DMU_RABR_OVEN (rw) */
#define DMU_RABR_OVEN_POS              _DMU_UL(31)
#define DMU_RABR_OVEN_LEN              _DMU_UL(1)

/* DMU_RABR_RC0 (r) */
#define DMU_RABR_RC0_POS               _DMU_UL(28)
#define DMU_RABR_RC0_LEN               _DMU_UL(1)

/* DMU_RABR_RC1 (r) */
#define DMU_RABR_RC1_POS               _DMU_UL(29)
#define DMU_RABR_RC1_LEN               _DMU_UL(1)

/* DMU_SBRCTR_STBLOCK (rh) */
#define DMU_SBRCTR_STBLOCK_POS         _DMU_UL(0)
#define DMU_SBRCTR_STBLOCK_LEN         _DMU_UL(1)

/* DMU_SBRCTR_STBSLK (w) */
#define DMU_SBRCTR_STBSLK_POS          _DMU_UL(4)
#define DMU_SBRCTR_STBSLK_LEN          _DMU_UL(4)

/* DMU_SBRCTR_STBULK (w) */
#define DMU_SBRCTR_STBULK_POS          _DMU_UL(1)
#define DMU_SBRCTR_STBULK_LEN          _DMU_UL(3)

#endif
