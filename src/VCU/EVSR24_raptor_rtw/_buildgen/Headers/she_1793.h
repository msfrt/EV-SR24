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
 * $Filename__:she_1793.h$ 
 * 
 * $Author____:NAS4COB$ 
 * 
 * $Function__:Reg: she_1793.h file update$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NAS4COB$ 
 * $Date______:03.10.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:she_1793$ 
 * $Variant___:1.17.0$ 
 * $Revision__:1$ 
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
 * 1.17.0; 1     03.10.2012 NAS4COB
 *   She module warnings removed
 * 
 * 1.17.0; 0     29.03.2012 NAS4COB
 *   Reg: she_1793.h file update
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SHE_1793_H
#define _SHE_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SHE_UL(x) x
#else
    #define _SHE_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SHE on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 	// [0xF0320200] : Clock Control Register
    volatile uint32 RESERVED0[1];        	// [0xF0320204...0xF0320207] : reserved space
    volatile uint32 ID;                  	// [0xF0320208] : Module Identification Register
    volatile uint32 RESERVED1[1];       	// [0xF032020C...0xF032020F] : reserved space
    volatile uint32 CMD;                	// [0xF0320210] : Command Register
    volatile uint32 SREG;                 	// [0xF0320214] : Status Register
    volatile uint32 ERC;                	// [0xF0320218] : Error code Register
    volatile uint32 MPRTS;                 	// [0xF032021C] : Memory Protection Start Address
    volatile uint32 MPRTE;             		// [0xF0320220] : Memory Protection End Address
    volatile uint32 RESERVED2[7];       	// [0xF0320224...0xF032023F] : reserved space
	volatile uint32 DATA[16];              	// [0xF0320240...0xF0320278] : Data Register
	volatile uint32 RESERVED3[31];       	// [0xF032027C...0xF03202F8] : reserved space
	volatile uint32 SRC0;             		// [0xF03202FC] : Service Request Control Register
   
} SHE_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SHE_RegMap_t SHE __attribute__ ((asection (".bss.label_only")));


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

/* SHE_CLC_DISR (rw) */
#define SHE_CLC_DISR_POS                    _SHE_UL(0)
#define SHE_CLC_DISR_LEN                    _SHE_UL(1)

/* SHE_CLC_DISS (rw) */
#define SHE_CLC_DISS_POS                    _SHE_UL(1)
#define SHE_CLC_DISS_LEN                    _SHE_UL(1)

/* SHE_CLC_SPEN (rw) */
#define SHE_CLC_SPEN_POS                    _SHE_UL(2)
#define SHE_CLC_SPEN_LEN                    _SHE_UL(1)

/* SHE_CLC_EDIS (rw) */
#define SHE_CLC_EDIS_POS                    _SHE_UL(3)
#define SHE_CLC_EDIS_LEN                    _SHE_UL(1)

/* SHE_CLC_SBWE (rw) */
#define SHE_CLC_SBWE_POS                    _SHE_UL(4)
#define SHE_CLC_SBWE_LEN                    _SHE_UL(1)

/* SHE_CLC_FSOE (rw) */
#define SHE_CLC_FSOE_POS                    _SHE_UL(5)
#define SHE_CLC_FSOE_LEN                    _SHE_UL(1)

/* SHE_ID_MOD_REV (rw) */
#define SHE_ID_MOD_REV_POS                  _SHE_UL(0)
#define SHE_ID_MOD_REV_LEN                  _SHE_UL(8)

/* SHE_ID_MOD_TYPE (rw) */
#define SHE_ID_MOD_TYPE_POS                 _SHE_UL(8)
#define SHE_ID_MOD_TYPE_LEN                 _SHE_UL(8)

/* SHE_ID_MOD_NUMBER (rw) */
#define SHE_ID_MOD_NUMBER_POS               _SHE_UL(16)
#define SHE_ID_MOD_NUMBER_LEN               _SHE_UL(16)

/* SHE_CMD_OP (rw) */
#define SHE_CMD_OP_POS                    	_SHE_UL(0)
#define SHE_CMD_OP_LEN                    	_SHE_UL(6)

/* SHE_CMD_INT (rw) */
#define SHE_CMD_INT_POS                     _SHE_UL(8)
#define SHE_CMD_INT_LEN                     _SHE_UL(1)

/* SHE_SREG_BUSY (rw) */
#define SHE_SREG_BUSY_POS                   _SHE_UL(0)
#define SHE_SREG_BUSY_LEN                   _SHE_UL(1)

/* SHE_SREG_SECB (rw) */
#define SHE_SREG_SECB_POS                   _SHE_UL(1)
#define SHE_SREG_SECB_LEN                   _SHE_UL(1)

/* SHE_SREG_BIN (rw) */
#define SHE_SREG_BIN_POS                  	_SHE_UL(2)
#define SHE_SREG_BIN_LEN                  	_SHE_UL(1)

/* SHE_SREG_BFIN (rw) */
#define SHE_SREG_BFIN_POS                   _SHE_UL(3)
#define SHE_SREG_BFIN_LEN                   _SHE_UL(1)

/* SHE_SREG_BOK (rw) */
#define SHE_SREG_BOK_POS                  	_SHE_UL(4)
#define SHE_SREG_BOK_LEN                  	_SHE_UL(1)

/* SHE_SREG_RIN (rw) */
#define SHE_SREG_RIN_POS                    _SHE_UL(5)
#define SHE_SREG_RIN_LEN                    _SHE_UL(1)

/* SHE_SREG_XDBG (rw) */
#define SHE_SREG_XDBG_POS                  	_SHE_UL(6)
#define SHE_SREG_XDBG_LEN                  	_SHE_UL(1)

/* SHE_SREG_IDBG (rw) */
#define SHE_SREG_IDBG_POS                   _SHE_UL(7)
#define SHE_SREG_IDBG_LEN                   _SHE_UL(1)

/* SHE_ERC_ERC (rw) */
#define SHE_ERC_ERC_POS                   	_SHE_UL(0)
#define SHE_ERC_ERC_LEN                   	_SHE_UL(5)
	
/* SHE_ERC_XERC (rw) */	
#define SHE_ERC_XERC_POS                  	_SHE_UL(8)
#define SHE_ERC_XERC_LEN               	  	_SHE_UL(4)

/* SHE_SRC0_SRPN (rw) */
#define SHE_SRC0_SRPN_POS                   _SHE_UL(0)
#define SHE_SRC0_SRPN_LEN                   _SHE_UL(8)

/* SHE_SRC0_TOS (rw) */
#define SHE_SRC0_TOS_POS                   	_SHE_UL(10)
#define SHE_SRC0_TOS_LEN                   	_SHE_UL(2)
	
/* SHE_SRC0_SRE (rw) */	
#define SHE_SRC0_SRE_POS                   	_SHE_UL(12)
#define SHE_SRC0_SRE_LEN                   	_SHE_UL(1)
	
/* SHE_SRC0_SRR (rw) */	
#define SHE_SRC0_SRR_POS                   	_SHE_UL(13)
#define SHE_SRC0_SRR_LEN                   	_SHE_UL(1)

/* SHE_SRC0_CLRR (rw) */
#define SHE_SRC0_CLRR_POS                   _SHE_UL(14)
#define SHE_SRC0_CLRR_LEN                   _SHE_UL(1)

/* SHE_SRC0_SETR (rw) */
#define SHE_SRC0_SETR_POS                   _SHE_UL(15)
#define SHE_SRC0_SETR_LEN                   _SHE_UL(1)


#endif
