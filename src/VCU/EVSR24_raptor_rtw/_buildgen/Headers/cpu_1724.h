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
 * $Filename__:cpu_1724.h$ 
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
 * $Name______:cpu_1724$ 
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

#ifndef _CPU_1724_H
#define _CPU_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CPU_UL(x) x
#else
    #define _CPU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CPU on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define CPU_CCPIER_MXCR_OFFSET		0x9218
#define CPU_CCDIER_MXCR_OFFSET		0x9028
#define CPU_PIETR_MXCR_OFFSET		0x9214
#define CPU_PIEAR_MXCR_OFFSET		0x9210
#define CPU_DIEAR_MXCR_OFFSET		0x9020
#define CPU_MIECON2_MXCR_OFFSET		0x9048
#define CPU_DIETR_MXCR_OFFSET		0x9024
#define CPU_MIECON_MXCR_OFFSET		0x9044
#define CPU_SMACON_MXCR_OFFSET		0x900C
#define CPU_BMACON_MXCR_OFFSET		0x9004
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 BMACON;              // [0xF7E19004] : BIST Mode Access Control Register
    volatile uint32 RESERVED0[1];        // [0xF7E19008...0xF7E1900B] : reserved space
    volatile uint32 SMACON;              // [0xF7E1900C] : SIST Mode Access Control Register
    volatile uint32 RESERVED1[4];        // [0xF7E19010...0xF7E1901F] : reserved space
    volatile uint32 DIEAR;               // [0xF7E19020] : Data Integrity Error Address Register
    volatile uint32 DIETR;               // [0xF7E19024] : Data Integrity Error Trap Register
    volatile uint32 CCDIER;              // [0xF7E19028] : Count of Corrected Data Integrity Errors Register
    volatile uint32 RESERVED2[6];        // [0xF7E1902C...0xF7E19043] : reserved space
    volatile uint32 MIECON;              // [0xF7E19044] : Memory Integrity Error Control Register
    volatile uint32 MIECON2;             // [0xF7E19048] : Memory Integrity Error Control Register 2
    volatile uint32 RESERVED3[113];      // [0xF7E1904C...0xF7E1920F] : reserved space
    volatile uint32 PIEAR;               // [0xF7E19210] : Program Integrity Error Address Register
    volatile uint32 PIETR;               // [0xF7E19214] : Program Integrity Error Trap Register
    volatile uint32 CCPIER;              // [0xF7E19218] : Count of Corrected Program Integrity Errors Register
} CPU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CPU_RegMap_t CPU __attribute__ ((asection (".bss.label_only")));
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

/* CPU_ID_MOD_NUMBER (r) */
#define CPU_ID_MOD_NUMBER_POS                _CPU_UL(16)
#define CPU_ID_MOD_NUMBER_LEN                _CPU_UL(16)

/* CPU_ID_MOD_REV (r) */
#define CPU_ID_MOD_REV_POS                   _CPU_UL(0)
#define CPU_ID_MOD_REV_LEN                   _CPU_UL(8)

/* CPU_ID_MOD_TYPE (r) */
#define CPU_ID_MOD_TYPE_POS                  _CPU_UL(8)
#define CPU_ID_MOD_TYPE_LEN                  _CPU_UL(8)

/* CPU_BMACON_DMMBE (rw) */
#define CPU_BMACON_DMMBE_POS                 _CPU_UL(0)
#define CPU_BMACON_DMMBE_LEN                 _CPU_UL(1)

/* CPU_BMACON_PMMBE (rw) */
#define CPU_BMACON_PMMBE_POS                 _CPU_UL(8)
#define CPU_BMACON_PMMBE_LEN                 _CPU_UL(1)

/* CPU_BMACON_DTMBE (rw) */
#define CPU_BMACON_DTMBE_POS                 _CPU_UL(16)
#define CPU_BMACON_DTMBE_LEN                 _CPU_UL(1)

/* CPU_BMACON_PTMBE (rw) */
#define CPU_BMACON_PTMBE_POS                 _CPU_UL(18)
#define CPU_BMACON_PTMBE_LEN                 _CPU_UL(1)

/* CPU_SMACON_PC (rw) */
#define CPU_SMACON_PC_POS                    _CPU_UL(0)
#define CPU_SMACON_PC_LEN                    _CPU_UL(2)

/* CPU_SMACON_PT (rw) */
#define CPU_SMACON_PT_POS                    _CPU_UL(2)
#define CPU_SMACON_PT_LEN                    _CPU_UL(2)

/* CPU_SMACON_PS (rw) */
#define CPU_SMACON_PS_POS                    _CPU_UL(4)
#define CPU_SMACON_PS_LEN                    _CPU_UL(2)

/* CPU_SMACON_DC (rw) */
#define CPU_SMACON_DC_POS                    _CPU_UL(8)
#define CPU_SMACON_DC_LEN                    _CPU_UL(2)

/* CPU_SMACON_DT (rw) */
#define CPU_SMACON_DT_POS                    _CPU_UL(10)
#define CPU_SMACON_DT_LEN                    _CPU_UL(2)

/* CPU_SMACON_DS (rw) */
#define CPU_SMACON_DS_POS                    _CPU_UL(12)
#define CPU_SMACON_DS_LEN                    _CPU_UL(2)

/* CPU_SMACON_IODT (rw) */
#define CPU_SMACON_IODT_POS                  _CPU_UL(24)
#define CPU_SMACON_IODT_LEN                  _CPU_UL(1)

/* CPU_DIEAR_TA (rh) */
#define CPU_DIEAR_TA_POS                     _CPU_UL(0)
#define CPU_DIEAR_TA_LEN                     _CPU_UL(32)

/* CPU_DIETR_IED (rwh) */
#define CPU_DIETR_IED_POS                    _CPU_UL(0)
#define CPU_DIETR_IED_LEN                    _CPU_UL(1)

/* CPU_DIETR_IE_T (rh) */
#define CPU_DIETR_IE_T_POS                   _CPU_UL(1)
#define CPU_DIETR_IE_T_LEN                   _CPU_UL(1)

/* CPU_DIETR_IE_C (rh) */
#define CPU_DIETR_IE_C_POS                   _CPU_UL(2)
#define CPU_DIETR_IE_C_LEN                   _CPU_UL(1)

/* CPU_DIETR_IE_S (rh) */
#define CPU_DIETR_IE_S_POS                   _CPU_UL(3)
#define CPU_DIETR_IE_S_LEN                   _CPU_UL(1)

/* CPU_DIETR_IE_B (rh) */
#define CPU_DIETR_IE_B_POS                   _CPU_UL(4)
#define CPU_DIETR_IE_B_LEN                   _CPU_UL(1)

/* CPU_DIETR_BUS_ID (rh) */
#define CPU_DIETR_BUS_ID_POS                 _CPU_UL(5)
#define CPU_DIETR_BUS_ID_LEN                 _CPU_UL(4)

/* CPU_DIETR_TRTYP (rh) */
#define CPU_DIETR_TRTYP_POS                  _CPU_UL(9)
#define CPU_DIETR_TRTYP_LEN                  _CPU_UL(1)

/* CPU_CCDIER_CCDIE_U (rwh) */
#define CPU_CCDIER_CCDIE_U_POS               _CPU_UL(0)
#define CPU_CCDIER_CCDIE_U_LEN               _CPU_UL(8)

/* CPU_CCDIER_CCDIE_R (rwh) */
#define CPU_CCDIER_CCDIE_R_POS               _CPU_UL(8)
#define CPU_CCDIER_CCDIE_R_LEN               _CPU_UL(8)

/* CPU_MIECON_DMIEE (rwh) */
#define CPU_MIECON_DMIEE_POS                 _CPU_UL(0)
#define CPU_MIECON_DMIEE_LEN                 _CPU_UL(1)

/* CPU_MIECON_PMIEE (rwh) */
#define CPU_MIECON_PMIEE_POS                 _CPU_UL(8)
#define CPU_MIECON_PMIEE_LEN                 _CPU_UL(1)

/* CPU_MIECON_DTIEE (rw) */
#define CPU_MIECON_DTIEE_POS                 _CPU_UL(16)
#define CPU_MIECON_DTIEE_LEN                 _CPU_UL(1)

/* CPU_MIECON_PTIEE (rw) */
#define CPU_MIECON_PTIEE_POS                 _CPU_UL(18)
#define CPU_MIECON_PTIEE_LEN                 _CPU_UL(1)

/* CPU_MIECON2_DMSECE (rwh) */
#define CPU_MIECON2_DMSECE_POS               _CPU_UL(0)
#define CPU_MIECON2_DMSECE_LEN               _CPU_UL(1)

/* CPU_MIECON2_PMSECE (rwh) */
#define CPU_MIECON2_PMSECE_POS               _CPU_UL(8)
#define CPU_MIECON2_PMSECE_LEN               _CPU_UL(1)

/* CPU_MIECON2_DTSECE (rwh) */
#define CPU_MIECON2_DTSECE_POS               _CPU_UL(16)
#define CPU_MIECON2_DTSECE_LEN               _CPU_UL(1)

/* CPU_MIECON2_PTSECE (rwh) */
#define CPU_MIECON2_PTSECE_POS               _CPU_UL(18)
#define CPU_MIECON2_PTSECE_LEN               _CPU_UL(1)

/* CPU_PIEAR_TA (rh) */
#define CPU_PIEAR_TA_POS                     _CPU_UL(0)
#define CPU_PIEAR_TA_LEN                     _CPU_UL(32)

/* CPU_PIETR_IED (rwh) */
#define CPU_PIETR_IED_POS                    _CPU_UL(0)
#define CPU_PIETR_IED_LEN                    _CPU_UL(1)

/* CPU_PIETR_IE_T (rh) */
#define CPU_PIETR_IE_T_POS                   _CPU_UL(1)
#define CPU_PIETR_IE_T_LEN                   _CPU_UL(1)

/* CPU_PIETR_IE_C (rh) */
#define CPU_PIETR_IE_C_POS                   _CPU_UL(2)
#define CPU_PIETR_IE_C_LEN                   _CPU_UL(1)

/* CPU_PIETR_IE_S (rh) */
#define CPU_PIETR_IE_S_POS                   _CPU_UL(3)
#define CPU_PIETR_IE_S_LEN                   _CPU_UL(1)

/* CPU_PIETR_IE_B (rh) */
#define CPU_PIETR_IE_B_POS                   _CPU_UL(4)
#define CPU_PIETR_IE_B_LEN                   _CPU_UL(1)

/* CPU_PIETR_BUS_ID (rh) */
#define CPU_PIETR_BUS_ID_POS                 _CPU_UL(5)
#define CPU_PIETR_BUS_ID_LEN                 _CPU_UL(4)

/* CPU_CCPIER_CCPIE_U (rwh) */
#define CPU_CCPIER_CCPIE_U_POS               _CPU_UL(0)
#define CPU_CCPIER_CCPIE_U_LEN               _CPU_UL(8)

/* CPU_CCPIER_CCPIE_R (rwh) */
#define CPU_CCPIER_CCPIE_R_POS               _CPU_UL(8)
#define CPU_CCPIER_CCPIE_R_LEN               _CPU_UL(8)

#endif
