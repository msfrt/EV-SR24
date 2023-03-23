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
 * $Filename__:fce_1724.h$ 
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
 * $Name______:fce_1724$ 
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

#ifndef _FCE_1724_H
#define _FCE_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _FCE_UL(x) x
#else
    #define _FCE_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module FCE on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0320000] : Control Clock Register
    volatile uint32 RESERVED0[1];        // [0xF0320004...0xF0320007] : reserved space
    volatile uint32 ID;                  // [0xF0320008] : Module Identification Register
    volatile uint32 RESERVED1[5];        // [0xF032000C...0xF032001F] : reserved space
    volatile uint32 IR0;                 // [0xF0320020] : Input Register 0
    volatile uint32 RES0;                // [0xF0320024] : CRC Result Register 0
    volatile uint32 CFG0;                // [0xF0320028] : CRC Configuration Register 0
    volatile uint32 STS0;                // [0xF032002C] : CRC Status Register 0
    volatile uint32 LENGTH0;             // [0xF0320030] : CRC Length Register 0
    volatile uint32 CHECK0;              // [0xF0320034] : CRC Check Register 0
    volatile uint32 CRC0;                // [0xF0320038] : CRC Register 0
    volatile uint32 CTR0;                // [0xF032003C] : CRC Test Register 0
    volatile uint32 IR1;                 // [0xF0320040] : Input Register 1
    volatile uint32 RES1;                // [0xF0320044] : CRC Result Register 1
    volatile uint32 CFG1;                // [0xF0320048] : CRC Configuration Register 1
    volatile uint32 STS1;                // [0xF032004C] : CRC Status Register 1
    volatile uint32 LENGTH1;             // [0xF0320050] : CRC Length Register 1
    volatile uint32 CHECK1;              // [0xF0320054] : CRC Check Register 1
    volatile uint32 CRC1;                // [0xF0320058] : CRC Register 1
    volatile uint32 CTR1;                // [0xF032005C] : CRC Test Register 1
    volatile uint32 RESERVED2[39];       // [0xF0320060...0xF03200FB] : reserved space
    volatile uint32 SRC;                 // [0xF03200FC] : Service Request Control Register
} FCE_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern FCE_RegMap_t FCE __attribute__ ((asection (".bss.label_only")));


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

/* FCE_ID_MOD_NUMBER (r) */
#define FCE_ID_MOD_NUMBER_POS                _FCE_UL(16)
#define FCE_ID_MOD_NUMBER_LEN                _FCE_UL(16)

/* FCE_ID_MOD_REV (r) */
#define FCE_ID_MOD_REV_POS                   _FCE_UL(0)
#define FCE_ID_MOD_REV_LEN                   _FCE_UL(8)

/* FCE_ID_MOD_TYPE (r) */
#define FCE_ID_MOD_TYPE_POS                  _FCE_UL(8)
#define FCE_ID_MOD_TYPE_LEN                  _FCE_UL(8)

/* FCE_CLC_DISR (rw) */
#define FCE_CLC_DISR_POS                     _FCE_UL(0)
#define FCE_CLC_DISR_LEN                     _FCE_UL(1)

/* FCE_CLC_DISS (rh) */
#define FCE_CLC_DISS_POS                     _FCE_UL(1)
#define FCE_CLC_DISS_LEN                     _FCE_UL(1)

/* FCE_CLC_SPEN (rw) */
#define FCE_CLC_SPEN_POS                     _FCE_UL(2)
#define FCE_CLC_SPEN_LEN                     _FCE_UL(1)

/* FCE_CLC_EDIS (rw) */
#define FCE_CLC_EDIS_POS                     _FCE_UL(3)
#define FCE_CLC_EDIS_LEN                     _FCE_UL(1)

/* FCE_CLC_SBWE (w) */
#define FCE_CLC_SBWE_POS                     _FCE_UL(4)
#define FCE_CLC_SBWE_LEN                     _FCE_UL(1)

/* FCE_CLC_FSOE (rw) */
#define FCE_CLC_FSOE_POS                     _FCE_UL(5)
#define FCE_CLC_FSOE_LEN                     _FCE_UL(1)

/* FCE_ID_MOD_REV (r) */
#define FCE_ID_MOD_REV_POS                   _FCE_UL(0)
#define FCE_ID_MOD_REV_LEN                   _FCE_UL(8)

/* FCE_ID_MOD_TYPE (r) */
#define FCE_ID_MOD_TYPE_POS                  _FCE_UL(8)
#define FCE_ID_MOD_TYPE_LEN                  _FCE_UL(8)

/* FCE_ID_MOD_NUMBER (r) */
#define FCE_ID_MOD_NUMBER_POS                _FCE_UL(16)
#define FCE_ID_MOD_NUMBER_LEN                _FCE_UL(16)

/* FCE_IR0_IR (rw) */
#define FCE_IR0_IR_POS                       _FCE_UL(0)
#define FCE_IR0_IR_LEN                       _FCE_UL(32)

/* FCE_RES0_RES (r) */
#define FCE_RES0_RES_POS                     _FCE_UL(0)
#define FCE_RES0_RES_LEN                     _FCE_UL(32)

/* FCE_CFG0_CMI (rw) */
#define FCE_CFG0_CMI_POS                     _FCE_UL(0)
#define FCE_CFG0_CMI_LEN                     _FCE_UL(1)

/* FCE_CFG0_CEI (rw) */
#define FCE_CFG0_CEI_POS                     _FCE_UL(1)
#define FCE_CFG0_CEI_LEN                     _FCE_UL(1)

/* FCE_CFG0_LEI (rw) */
#define FCE_CFG0_LEI_POS                     _FCE_UL(2)
#define FCE_CFG0_LEI_LEN                     _FCE_UL(1)

/* FCE_CFG0_FEI (rw) */
#define FCE_CFG0_FEI_POS                     _FCE_UL(3)
#define FCE_CFG0_FEI_LEN                     _FCE_UL(1)

/* FCE_CFG0_CCE (rw) */
#define FCE_CFG0_CCE_POS                     _FCE_UL(4)
#define FCE_CFG0_CCE_LEN                     _FCE_UL(1)

/* FCE_CFG0_REFIN (rw) */
#define FCE_CFG0_REFIN_POS                   _FCE_UL(8)
#define FCE_CFG0_REFIN_LEN                   _FCE_UL(1)

/* FCE_CFG0_REFOUT (rw) */
#define FCE_CFG0_REFOUT_POS                  _FCE_UL(9)
#define FCE_CFG0_REFOUT_LEN                  _FCE_UL(1)

/* FCE_CFG0_XSEL (rw) */
#define FCE_CFG0_XSEL_POS                    _FCE_UL(10)
#define FCE_CFG0_XSEL_LEN                    _FCE_UL(1)

/* FCE_STS0_CMF (rwh) */
#define FCE_STS0_CMF_POS                     _FCE_UL(0)
#define FCE_STS0_CMF_LEN                     _FCE_UL(1)

/* FCE_STS0_CEF (rwh) */
#define FCE_STS0_CEF_POS                     _FCE_UL(1)
#define FCE_STS0_CEF_LEN                     _FCE_UL(1)

/* FCE_STS0_LEF (rwh) */
#define FCE_STS0_LEF_POS                     _FCE_UL(2)
#define FCE_STS0_LEF_LEN                     _FCE_UL(1)

/* FCE_STS0_FEF (rwh) */
#define FCE_STS0_FEF_POS                     _FCE_UL(3)
#define FCE_STS0_FEF_LEN                     _FCE_UL(1)

/* FCE_LENGTH0_LENGTH (rwh) */
#define FCE_LENGTH0_LENGTH_POS               _FCE_UL(0)
#define FCE_LENGTH0_LENGTH_LEN               _FCE_UL(16)

/* FCE_CHECK0_CHECK (rw) */
#define FCE_CHECK0_CHECK_POS                 _FCE_UL(0)
#define FCE_CHECK0_CHECK_LEN                 _FCE_UL(32)

/* FCE_CRC0_CRC (rwh) */
#define FCE_CRC0_CRC_POS                     _FCE_UL(0)
#define FCE_CRC0_CRC_LEN                     _FCE_UL(32)

/* FCE_CTR0_FCM (rw) */
#define FCE_CTR0_FCM_POS                     _FCE_UL(0)
#define FCE_CTR0_FCM_LEN                     _FCE_UL(1)

/* FCE_CTR0_FRM_CFG (rw) */
#define FCE_CTR0_FRM_CFG_POS                 _FCE_UL(1)
#define FCE_CTR0_FRM_CFG_LEN                 _FCE_UL(1)

/* FCE_CTR0_FRM_CHECK (rw) */
#define FCE_CTR0_FRM_CHECK_POS               _FCE_UL(2)
#define FCE_CTR0_FRM_CHECK_LEN               _FCE_UL(1)

/* FCE_IR1_IR (rw) */
#define FCE_IR1_IR_POS                       _FCE_UL(0)
#define FCE_IR1_IR_LEN                       _FCE_UL(32)

/* FCE_RES1_RES (r) */
#define FCE_RES1_RES_POS                     _FCE_UL(0)
#define FCE_RES1_RES_LEN                     _FCE_UL(32)

/* FCE_CFG1_CMI (rw) */
#define FCE_CFG1_CMI_POS                     _FCE_UL(0)
#define FCE_CFG1_CMI_LEN                     _FCE_UL(1)

/* FCE_CFG1_CEI (rw) */
#define FCE_CFG1_CEI_POS                     _FCE_UL(1)
#define FCE_CFG1_CEI_LEN                     _FCE_UL(1)

/* FCE_CFG1_LEI (rw) */
#define FCE_CFG1_LEI_POS                     _FCE_UL(2)
#define FCE_CFG1_LEI_LEN                     _FCE_UL(1)

/* FCE_CFG1_FEI (rw) */
#define FCE_CFG1_FEI_POS                     _FCE_UL(3)
#define FCE_CFG1_FEI_LEN                     _FCE_UL(1)

/* FCE_CFG1_CCE (rw) */
#define FCE_CFG1_CCE_POS                     _FCE_UL(4)
#define FCE_CFG1_CCE_LEN                     _FCE_UL(1)

/* FCE_CFG1_REFIN (rw) */
#define FCE_CFG1_REFIN_POS                   _FCE_UL(8)
#define FCE_CFG1_REFIN_LEN                   _FCE_UL(1)

/* FCE_CFG1_REFOUT (rw) */
#define FCE_CFG1_REFOUT_POS                  _FCE_UL(9)
#define FCE_CFG1_REFOUT_LEN                  _FCE_UL(1)

/* FCE_CFG1_XSEL (rw) */
#define FCE_CFG1_XSEL_POS                    _FCE_UL(10)
#define FCE_CFG1_XSEL_LEN                    _FCE_UL(1)

/* FCE_STS1_CMF (rwh) */
#define FCE_STS1_CMF_POS                     _FCE_UL(0)
#define FCE_STS1_CMF_LEN                     _FCE_UL(1)

/* FCE_STS1_CEF (rwh) */
#define FCE_STS1_CEF_POS                     _FCE_UL(1)
#define FCE_STS1_CEF_LEN                     _FCE_UL(1)

/* FCE_STS1_LEF (rwh) */
#define FCE_STS1_LEF_POS                     _FCE_UL(2)
#define FCE_STS1_LEF_LEN                     _FCE_UL(1)

/* FCE_STS1_FEF (rwh) */
#define FCE_STS1_FEF_POS                     _FCE_UL(3)
#define FCE_STS1_FEF_LEN                     _FCE_UL(1)

/* FCE_LENGTH1_LENGTH (rwh) */
#define FCE_LENGTH1_LENGTH_POS               _FCE_UL(0)
#define FCE_LENGTH1_LENGTH_LEN               _FCE_UL(16)

/* FCE_CHECK1_CHECK (rw) */
#define FCE_CHECK1_CHECK_POS                 _FCE_UL(0)
#define FCE_CHECK1_CHECK_LEN                 _FCE_UL(32)

/* FCE_CRC1_CRC (rwh) */
#define FCE_CRC1_CRC_POS                     _FCE_UL(0)
#define FCE_CRC1_CRC_LEN                     _FCE_UL(32)

/* FCE_CTR1_FCM (rw) */
#define FCE_CTR1_FCM_POS                     _FCE_UL(0)
#define FCE_CTR1_FCM_LEN                     _FCE_UL(1)

/* FCE_CTR1_FRM_CFG (rw) */
#define FCE_CTR1_FRM_CFG_POS                 _FCE_UL(1)
#define FCE_CTR1_FRM_CFG_LEN                 _FCE_UL(1)

/* FCE_CTR1_FRM_CHECK (rw) */
#define FCE_CTR1_FRM_CHECK_POS               _FCE_UL(2)
#define FCE_CTR1_FRM_CHECK_LEN               _FCE_UL(1)

/* FCE_SRC_SRPN (rw) */
#define FCE_SRC_SRPN_POS                     _FCE_UL(0)
#define FCE_SRC_SRPN_LEN                     _FCE_UL(8)

/* FCE_SRC_TOS (rw) */
#define FCE_SRC_TOS_POS                      _FCE_UL(10)
#define FCE_SRC_TOS_LEN                      _FCE_UL(1)

/* FCE_SRC_SRE (rw) */
#define FCE_SRC_SRE_POS                      _FCE_UL(12)
#define FCE_SRC_SRE_LEN                      _FCE_UL(1)

/* FCE_SRC_SRR (rwh) */
#define FCE_SRC_SRR_POS                      _FCE_UL(13)
#define FCE_SRC_SRR_LEN                      _FCE_UL(1)

/* FCE_SRC_CLRR (w) */
#define FCE_SRC_CLRR_POS                     _FCE_UL(14)
#define FCE_SRC_CLRR_LEN                     _FCE_UL(1)

/* FCE_SRC_SETR (w) */
#define FCE_SRC_SETR_POS                     _FCE_UL(15)
#define FCE_SRC_SETR_LEN                     _FCE_UL(1)

#endif
