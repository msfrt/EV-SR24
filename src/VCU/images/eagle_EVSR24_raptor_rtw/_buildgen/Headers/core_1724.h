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
 * $Filename__:core_1724.h$ 
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
 * $Name______:core_1724$ 
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

#ifndef _CORE_1724_H
#define _CORE_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CORE_UL(x) x
#else
    #define _CORE_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CORE on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define CORE_DBGSR_MXCR_OFFSET		0xFD00
#define CORE_EXEVT_MXCR_OFFSET		0xFD08
#define CORE_CREVT_MXCR_OFFSET		0xFD0C
#define CORE_SWEVT_MXCR_OFFSET		0xFD10
#define CORE_TR0EVT_MXCR_OFFSET		0xFD20
#define CORE_TR1EVT_MXCR_OFFSET		0xFD24
#define CORE_DMS_MXCR_OFFSET		0xFD40
#define CORE_DCX_MXCR_OFFSET		0xFD44
#define CORE_DBGTCR_MXCR_OFFSET		0xFD48
#define CORE_CCTRL_MXCR_OFFSET		0xFC00
#define CORE_CCNT_MXCR_OFFSET		0xFC04
#define CORE_ICNT_MXCR_OFFSET		0xFC08
#define CORE_M1CNT_MXCR_OFFSET		0xFC0C
#define CORE_M2CNT_MXCR_OFFSET		0xFC10
#define CORE_M3CNT_MXCR_OFFSET		0xFC14
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CCTRL;               // [0xF7E1FC00] : Counter Control Register
    volatile uint32 CCNT;                // [0xF7E1FC04] : CPU Clock Count Register
    volatile uint32 ICNT;                // [0xF7E1FC08] : Instruction Count Register
    volatile uint32 M1CNT;               // [0xF7E1FC0C] : Multi-Count Register 1
    volatile uint32 M2CNT;               // [0xF7E1FC10] : Multi-Count Register 2
    volatile uint32 M3CNT;               // [0xF7E1FC14] : Multi-Count Register 3
    volatile uint32 RESERVED0[58];       // [0xF7E1FC18...0xF7E1FCFF] : reserved space
    volatile uint32 DBGSR;               // [0xF7E1FD00] : Debug Status Register
    volatile uint32 RESERVED1[1];        // [0xF7E1FD04...0xF7E1FD07] : reserved space
    volatile uint32 EXEVT;               // [0xF7E1FD08] : External Event Register
    volatile uint32 CREVT;               // [0xF7E1FD0C] : External Event Register
    volatile uint32 SWEVT;               // [0xF7E1FD10] : External Event Register
    volatile uint32 RESERVED2[3];        // [0xF7E1FD14...0xF7E1FD1F] : reserved space
    volatile uint32 TR0EVT;              // [0xF7E1FD20] : Trigger Event 0 Register
    volatile uint32 TR1EVT;              // [0xF7E1FD24] : Trigger Event 1 Register
    volatile uint32 RESERVED3[6];        // [0xF7E1FD28...0xF7E1FD3F] : reserved space
    volatile uint32 DMS;                 // [0xF7E1FD40] : Debug Monitor Start Address Register
    volatile uint32 DCX;                 // [0xF7E1FD44] : Debug Context Save Area Pointer Register
    volatile uint32 DBGTCR;              // [0xF7E1FD48] : Debug Trap Control Register
} CORE_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CORE_RegMap_t CORE __attribute__ ((asection (".bss.label_only")));
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

/* CORE_ID_MOD_NUMBER (r) */
#define CORE_ID_MOD_NUMBER_POS                _CORE_UL(16)
#define CORE_ID_MOD_NUMBER_LEN                _CORE_UL(16)

/* CORE_ID_MOD_REV (r) */
#define CORE_ID_MOD_REV_POS                   _CORE_UL(0)
#define CORE_ID_MOD_REV_LEN                   _CORE_UL(8)

/* CORE_ID_MOD_TYPE (r) */
#define CORE_ID_MOD_TYPE_POS                  _CORE_UL(8)
#define CORE_ID_MOD_TYPE_LEN                  _CORE_UL(8)

/* CORE_CCTRL_CM (rw) */
#define CORE_CCTRL_CM_POS                    _CORE_UL(0)
#define CORE_CCTRL_CM_LEN                    _CORE_UL(1)

/* CORE_CCTRL_CE (rw) */
#define CORE_CCTRL_CE_POS                    _CORE_UL(1)
#define CORE_CCTRL_CE_LEN                    _CORE_UL(1)

/* CORE_CCTRL_M1 (rw) */
#define CORE_CCTRL_M1_POS                    _CORE_UL(2)
#define CORE_CCTRL_M1_LEN                    _CORE_UL(3)

/* CORE_CCTRL_M2 (rw) */
#define CORE_CCTRL_M2_POS                    _CORE_UL(5)
#define CORE_CCTRL_M2_LEN                    _CORE_UL(3)

/* CORE_CCTRL_M3 (rw) */
#define CORE_CCTRL_M3_POS                    _CORE_UL(8)
#define CORE_CCTRL_M3_LEN                    _CORE_UL(3)

/* CORE_CCNT_Count_Value (rw) */
#define CORE_CCNT_Count_Value_POS            _CORE_UL(0)
#define CORE_CCNT_Count_Value_LEN            _CORE_UL(31)

/* CORE_CCNT_SOvf (rw) */
#define CORE_CCNT_SOvf_POS                   _CORE_UL(31)
#define CORE_CCNT_SOvf_LEN                   _CORE_UL(1)

/* CORE_ICNT_Count_Value (rw) */
#define CORE_ICNT_Count_Value_POS            _CORE_UL(0)
#define CORE_ICNT_Count_Value_LEN            _CORE_UL(31)

/* CORE_ICNT_SOvf (rw) */
#define CORE_ICNT_SOvf_POS                   _CORE_UL(31)
#define CORE_ICNT_SOvf_LEN                   _CORE_UL(1)

/* CORE_M1CNT_Count_Value (rw) */
#define CORE_M1CNT_Count_Value_POS           _CORE_UL(0)
#define CORE_M1CNT_Count_Value_LEN           _CORE_UL(31)

/* CORE_M1CNT_SOvf (rw) */
#define CORE_M1CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M1CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_M2CNT_Count_Value (rw) */
#define CORE_M2CNT_Count_Value_POS           _CORE_UL(0)
#define CORE_M2CNT_Count_Value_LEN           _CORE_UL(31)

/* CORE_M2CNT_SOvf (rw) */
#define CORE_M2CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M2CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_M3CNT_Count_Value (rw) */
#define CORE_M3CNT_Count_Value_POS           _CORE_UL(0)
#define CORE_M3CNT_Count_Value_LEN           _CORE_UL(31)

/* CORE_M3CNT_SOvf (rw) */
#define CORE_M3CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M3CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_DBGSR_DE (r) */
#define CORE_DBGSR_DE_POS                    _CORE_UL(0)
#define CORE_DBGSR_DE_LEN                    _CORE_UL(1)

/* CORE_DBGSR_HALT (rwh) */
#define CORE_DBGSR_HALT_POS                  _CORE_UL(1)
#define CORE_DBGSR_HALT_LEN                  _CORE_UL(2)

/* CORE_DBGSR_SIH (rh) */
#define CORE_DBGSR_SIH_POS                   _CORE_UL(3)
#define CORE_DBGSR_SIH_LEN                   _CORE_UL(1)

/* CORE_DBGSR_SUSP (rwh) */
#define CORE_DBGSR_SUSP_POS                  _CORE_UL(4)
#define CORE_DBGSR_SUSP_LEN                  _CORE_UL(1)

/* CORE_DBGSR_PREVSUSP (rh) */
#define CORE_DBGSR_PREVSUSP_POS              _CORE_UL(6)
#define CORE_DBGSR_PREVSUSP_LEN              _CORE_UL(1)

/* CORE_DBGSR_PEVT (rh) */
#define CORE_DBGSR_PEVT_POS                  _CORE_UL(7)
#define CORE_DBGSR_PEVT_LEN                  _CORE_UL(1)

/* CORE_DBGSR_EVTSRC (rwh) */
#define CORE_DBGSR_EVTSRC_POS                _CORE_UL(8)
#define CORE_DBGSR_EVTSRC_LEN                _CORE_UL(5)

/* CORE_EXEVT_EVTA (rw) */
#define CORE_EXEVT_EVTA_POS                  _CORE_UL(0)
#define CORE_EXEVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_EXEVT_BBM (rw) */
#define CORE_EXEVT_BBM_POS                   _CORE_UL(3)
#define CORE_EXEVT_BBM_LEN                   _CORE_UL(1)

/* CORE_EXEVT_BOD (rw) */
#define CORE_EXEVT_BOD_POS                   _CORE_UL(4)
#define CORE_EXEVT_BOD_LEN                   _CORE_UL(1)

/* CORE_EXEVT_SUSP (rw) */
#define CORE_EXEVT_SUSP_POS                  _CORE_UL(5)
#define CORE_EXEVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_EXEVT_CST (rw) */
#define CORE_EXEVT_CST_POS                   _CORE_UL(6)
#define CORE_EXEVT_CST_LEN                   _CORE_UL(1)

/* CORE_EXEVT_CSP (rw) */
#define CORE_EXEVT_CSP_POS                   _CORE_UL(7)
#define CORE_EXEVT_CSP_LEN                   _CORE_UL(1)

/* CORE_CREVT_EVTA (rw) */
#define CORE_CREVT_EVTA_POS                  _CORE_UL(0)
#define CORE_CREVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_CREVT_BBM (rw) */
#define CORE_CREVT_BBM_POS                   _CORE_UL(3)
#define CORE_CREVT_BBM_LEN                   _CORE_UL(1)

/* CORE_CREVT_BOD (rw) */
#define CORE_CREVT_BOD_POS                   _CORE_UL(4)
#define CORE_CREVT_BOD_LEN                   _CORE_UL(1)

/* CORE_CREVT_SUSP (rw) */
#define CORE_CREVT_SUSP_POS                  _CORE_UL(5)
#define CORE_CREVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_CREVT_CST (rw) */
#define CORE_CREVT_CST_POS                   _CORE_UL(6)
#define CORE_CREVT_CST_LEN                   _CORE_UL(1)

/* CORE_CREVT_CSP (rw) */
#define CORE_CREVT_CSP_POS                   _CORE_UL(7)
#define CORE_CREVT_CSP_LEN                   _CORE_UL(1)

/* CORE_SWEVT_EVTA (rw) */
#define CORE_SWEVT_EVTA_POS                  _CORE_UL(0)
#define CORE_SWEVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_SWEVT_BBM (rw) */
#define CORE_SWEVT_BBM_POS                   _CORE_UL(3)
#define CORE_SWEVT_BBM_LEN                   _CORE_UL(1)

/* CORE_SWEVT_BOD (rw) */
#define CORE_SWEVT_BOD_POS                   _CORE_UL(4)
#define CORE_SWEVT_BOD_LEN                   _CORE_UL(1)

/* CORE_SWEVT_SUSP (rw) */
#define CORE_SWEVT_SUSP_POS                  _CORE_UL(5)
#define CORE_SWEVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_SWEVT_CST (rw) */
#define CORE_SWEVT_CST_POS                   _CORE_UL(6)
#define CORE_SWEVT_CST_LEN                   _CORE_UL(1)

/* CORE_SWEVT_CSP (rw) */
#define CORE_SWEVT_CSP_POS                   _CORE_UL(7)
#define CORE_SWEVT_CSP_LEN                   _CORE_UL(1)

/* CORE_TR0EVT_EVTA (rw) */
#define CORE_TR0EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR0EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR0EVT_BBM (rw) */
#define CORE_TR0EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR0EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_BOD (rw) */
#define CORE_TR0EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR0EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_SUSP (rw) */
#define CORE_TR0EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR0EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR0EVT_CNT (rw) */
#define CORE_TR0EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR0EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR0EVT_DLR_LR (rw) */
#define CORE_TR0EVT_DLR_LR_POS               _CORE_UL(8)
#define CORE_TR0EVT_DLR_LR_LEN               _CORE_UL(1)

/* CORE_TR0EVT_DLR_U (rw) */
#define CORE_TR0EVT_DLR_U_POS                _CORE_UL(9)
#define CORE_TR0EVT_DLR_U_LEN                _CORE_UL(1)

/* CORE_TR0EVT_DU_LR (rw) */
#define CORE_TR0EVT_DU_LR_POS                _CORE_UL(10)
#define CORE_TR0EVT_DU_LR_LEN                _CORE_UL(1)

/* CORE_TR0EVT_DU_U (rw) */
#define CORE_TR0EVT_DU_U_POS                 _CORE_UL(11)
#define CORE_TR0EVT_DU_U_LEN                 _CORE_UL(1)

/* CORE_TR0EVT_ASI_EN (rw) */
#define CORE_TR0EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR0EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR0EVT_ASI (rw) */
#define CORE_TR0EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR0EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR1EVT_EVTA (rw) */
#define CORE_TR1EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR1EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR1EVT_BBM (rw) */
#define CORE_TR1EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR1EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_BOD (rw) */
#define CORE_TR1EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR1EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_SUSP (rw) */
#define CORE_TR1EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR1EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR1EVT_CNT (rw) */
#define CORE_TR1EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR1EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR1EVT_DLR_LR (rw) */
#define CORE_TR1EVT_DLR_LR_POS               _CORE_UL(8)
#define CORE_TR1EVT_DLR_LR_LEN               _CORE_UL(1)

/* CORE_TR1EVT_DLR_U (rw) */
#define CORE_TR1EVT_DLR_U_POS                _CORE_UL(9)
#define CORE_TR1EVT_DLR_U_LEN                _CORE_UL(1)

/* CORE_TR1EVT_DU_LR (rw) */
#define CORE_TR1EVT_DU_LR_POS                _CORE_UL(10)
#define CORE_TR1EVT_DU_LR_LEN                _CORE_UL(1)

/* CORE_TR1EVT_DU_U (rw) */
#define CORE_TR1EVT_DU_U_POS                 _CORE_UL(11)
#define CORE_TR1EVT_DU_U_LEN                 _CORE_UL(1)

/* CORE_TR1EVT_ASI_EN (rw) */
#define CORE_TR1EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR1EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR1EVT_ASI (rw) */
#define CORE_TR1EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR1EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_DMS_DMS_Value (rw) */
#define CORE_DMS_DMS_Value_POS               _CORE_UL(1)
#define CORE_DMS_DMS_Value_LEN               _CORE_UL(31)

/* CORE_DCX_DCX_Value (rw) */
#define CORE_DCX_DCX_Value_POS               _CORE_UL(4)
#define CORE_DCX_DCX_Value_LEN               _CORE_UL(28)

/* CORE_DBGTCR_DTA (rwh) */
#define CORE_DBGTCR_DTA_POS                  _CORE_UL(0)
#define CORE_DBGTCR_DTA_LEN                  _CORE_UL(1)

#endif
