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
 * $Filename__:core_1766.h$ 
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
 * $Name______:core_1766$ 
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
 *      File name: core_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CORE_1766_H
#define _CORE_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CORE_UL(x) x
#else
    #define _CORE_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CORE on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 DBGSR;               // [0xF7E1FD00] : Debug Status Register
    volatile uint32 RESERVED0[1];        // [0xF0E1FD04...0xF0E1FD07] : reserved space
    volatile uint32 EXEVT;               // [0xF7E1FD08] : External Break Input Event Specifier Register
    volatile uint32 CREVT;               // [0xF7E1FD0C] : Emulator Resource Protection Event Specifier Register
    volatile uint32 SWEVT;               // [0xF7E1FD10] : Software Break Event Specifier Register
    volatile uint32 RESERVED1[3];        // [0xF0E1FD14...0xF0E1FD1F] : reserved space
    volatile uint32 TR0EVT;              // [0xF7E1FD20] : Trigger Event 0 Specifier Register
    volatile uint32 TR1EVT;              // [0xF7E1FD24] : Trigger Event 1 Specifier Register
    volatile uint32 RESERVED2[6];        // [0xF0E1FD28...0xF0E1FD3F] : reserved space
    volatile uint32 DMS;                 // [0xF7E1FD40] : Debug Monitor Start Address Register
    volatile uint32 DCX;                 // [0xF7E1FD44] : Debug Context Save Area Pointer
} CORE_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CORE_RegMap_t CORE __attribute__ ((asection (".bss.label_only")));

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

/* CORE_CREVT_BBM (rw) */
#define CORE_CREVT_BBM_POS             _CORE_UL(3)
#define CORE_CREVT_BBM_LEN             _CORE_UL(1)

/* CORE_CREVT_EVTA (rw) */
#define CORE_CREVT_EVTA_POS            _CORE_UL(0)
#define CORE_CREVT_EVTA_LEN            _CORE_UL(3)

/* CORE_CREVT_SUSP (rw) */
#define CORE_CREVT_SUSP_POS            _CORE_UL(5)
#define CORE_CREVT_SUSP_LEN            _CORE_UL(1)

/* CORE_DBGSR_DE (rh) */
#define CORE_DBGSR_DE_POS              _CORE_UL(0)
#define CORE_DBGSR_DE_LEN              _CORE_UL(1)

/* CORE_DBGSR_EVTSRC (rh) */
#define CORE_DBGSR_EVTSRC_POS          _CORE_UL(8)
#define CORE_DBGSR_EVTSRC_LEN          _CORE_UL(5)

/* CORE_DBGSR_HALT (rwh) */
#define CORE_DBGSR_HALT_POS            _CORE_UL(1)
#define CORE_DBGSR_HALT_LEN            _CORE_UL(2)

/* CORE_DBGSR_PEVT (rwh) */
#define CORE_DBGSR_PEVT_POS            _CORE_UL(7)
#define CORE_DBGSR_PEVT_LEN            _CORE_UL(1)

/* CORE_DBGSR_PREVSUSP (rh) */
#define CORE_DBGSR_PREVSUSP_POS        _CORE_UL(6)
#define CORE_DBGSR_PREVSUSP_LEN        _CORE_UL(1)

/* CORE_DBGSR_SUSP (rwh) */
#define CORE_DBGSR_SUSP_POS            _CORE_UL(4)
#define CORE_DBGSR_SUSP_LEN            _CORE_UL(1)

/* CORE_DMS_DMSADR (r) */
#define CORE_DMS_DMSADR_POS            _CORE_UL(0)
#define CORE_DMS_DMSADR_LEN            _CORE_UL(32)

/* CORE_EXEVT_BBM (rw) */
#define CORE_EXEVT_BBM_POS             _CORE_UL(3)
#define CORE_EXEVT_BBM_LEN             _CORE_UL(1)

/* CORE_EXEVT_EVTA (rw) */
#define CORE_EXEVT_EVTA_POS            _CORE_UL(0)
#define CORE_EXEVT_EVTA_LEN            _CORE_UL(3)

/* CORE_EXEVT_SUSP (rw) */
#define CORE_EXEVT_SUSP_POS            _CORE_UL(5)
#define CORE_EXEVT_SUSP_LEN            _CORE_UL(1)

/* CORE_SWEVT_BBM (rw) */
#define CORE_SWEVT_BBM_POS             _CORE_UL(3)
#define CORE_SWEVT_BBM_LEN             _CORE_UL(1)

/* CORE_SWEVT_EVTA (rw) */
#define CORE_SWEVT_EVTA_POS            _CORE_UL(0)
#define CORE_SWEVT_EVTA_LEN            _CORE_UL(3)

/* CORE_SWEVT_SUSP (rw) */
#define CORE_SWEVT_SUSP_POS            _CORE_UL(5)
#define CORE_SWEVT_SUSP_LEN            _CORE_UL(1)

/* CORE_TR0EVT_BBM (rw) */
#define CORE_TR0EVT_BBM_POS            _CORE_UL(3)
#define CORE_TR0EVT_BBM_LEN            _CORE_UL(1)

/* CORE_TR0EVT_DLR_LR (rw) */
#define CORE_TR0EVT_DLR_LR_POS         _CORE_UL(8)
#define CORE_TR0EVT_DLR_LR_LEN         _CORE_UL(1)

/* CORE_TR0EVT_DLR_U (rw) */
#define CORE_TR0EVT_DLR_U_POS          _CORE_UL(9)
#define CORE_TR0EVT_DLR_U_LEN          _CORE_UL(1)

/* CORE_TR0EVT_DU_LR (rw) */
#define CORE_TR0EVT_DU_LR_POS          _CORE_UL(10)
#define CORE_TR0EVT_DU_LR_LEN          _CORE_UL(1)

/* CORE_TR0EVT_DU_U (rw) */
#define CORE_TR0EVT_DU_U_POS           _CORE_UL(11)
#define CORE_TR0EVT_DU_U_LEN           _CORE_UL(1)

/* CORE_TR0EVT_EVTA (rw) */
#define CORE_TR0EVT_EVTA_POS           _CORE_UL(0)
#define CORE_TR0EVT_EVTA_LEN           _CORE_UL(3)

/* CORE_TR0EVT_SUSP (rw) */
#define CORE_TR0EVT_SUSP_POS           _CORE_UL(5)
#define CORE_TR0EVT_SUSP_LEN           _CORE_UL(1)

/* CORE_TR1EVT_BBM (rw) */
#define CORE_TR1EVT_BBM_POS            _CORE_UL(3)
#define CORE_TR1EVT_BBM_LEN            _CORE_UL(1)

/* CORE_TR1EVT_DLR_LR (rw) */
#define CORE_TR1EVT_DLR_LR_POS         _CORE_UL(8)
#define CORE_TR1EVT_DLR_LR_LEN         _CORE_UL(1)

/* CORE_TR1EVT_DLR_U (rw) */
#define CORE_TR1EVT_DLR_U_POS          _CORE_UL(9)
#define CORE_TR1EVT_DLR_U_LEN          _CORE_UL(1)

/* CORE_TR1EVT_DU_LR (rw) */
#define CORE_TR1EVT_DU_LR_POS          _CORE_UL(10)
#define CORE_TR1EVT_DU_LR_LEN          _CORE_UL(1)

/* CORE_TR1EVT_DU_U (rw) */
#define CORE_TR1EVT_DU_U_POS           _CORE_UL(11)
#define CORE_TR1EVT_DU_U_LEN           _CORE_UL(1)

/* CORE_TR1EVT_EVTA (rw) */
#define CORE_TR1EVT_EVTA_POS           _CORE_UL(0)
#define CORE_TR1EVT_EVTA_LEN           _CORE_UL(3)

/* CORE_TR1EVT_SUSP (rw) */
#define CORE_TR1EVT_SUSP_POS           _CORE_UL(5)
#define CORE_TR1EVT_SUSP_LEN           _CORE_UL(1)

#endif
