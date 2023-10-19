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
 * $Filename__:can_1782.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:30.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:can_1782$ 
 * $Variant___:1.16.0$ 
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
 * 1.16.0; 0     30.10.2011 RAT1COB
 *   TC1782 update and TPROT register details
 *   updated in pmu_1782.h and flash_1782.h
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: can_1782.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CAN_1782_H
#define _CAN_1782_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CAN_UL(x) x
#else
    #define _CAN_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CAN on TC1782
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-struct for message object definition */
typedef struct {
    volatile uint32 MOFCR;           // Message Object Function Control Register
    volatile uint32 MOFGPR;          // Message Object FIFO/Gateway Pointer Register
    volatile uint32 MOIPR;           // Message Object Interrupt Pointer Register
    volatile uint32 MOAMR;           // Message Object Acceptance Mask Register
    volatile uint32 MODATAL;         // Message Object Data Register Low
    volatile uint32 MODATAH;         // Message Object Data Register High
    volatile uint32 MOAR;            // Message Object Arbitration Register
    volatile uint32 MOCTR;           // Message Object Control Register
} Can_MsgObj_t;

/* sub-struct for Node control registers */
typedef struct {
    volatile uint32 NCR;                //  Node Control Register
    volatile uint32 NSR;                //  Node Status Register
    volatile uint32 NIPR;               //  Node Interrupt Pointer Register
    volatile uint32 NPCR;               //  Node Port Control Register
    volatile uint32 NBTR;               //  Node Bit Timming Register
    volatile uint32 NECNT;              //  Node Error Counter Register
    volatile uint32 NFCR;               //  Node Frame Counter Register
    volatile uint32 RESERVED10[57];     //  reserved space
}Can_NodeCtrl_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0004000] : CAN Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0004004...0xF0004007] : reserved space
    volatile uint32 ID;                  // [0xF0004008] : Module Identification Register
    volatile uint32 FDR;                 // [0xF000400C] : CAN Fractional Divider Register
    volatile uint32 RESERVED1[44];       // [0xF0004010...0xF00040BF] : reserved space
    volatile uint32 SRC15;               // [0xF00040C0] : CAN Service Request Control Register 15
    volatile uint32 SRC14;               // [0xF00040C4] : CAN Service Request Control Register 14
    volatile uint32 SRC13;               // [0xF00040C8] : CAN Service Request Control Register 13
    volatile uint32 SRC12;               // [0xF00040CC] : CAN Service Request Control Register 12
    volatile uint32 SRC11;               // [0xF00040D0] : CAN Service Request Control Register 11
    volatile uint32 SRC10;               // [0xF00040D4] : CAN Service Request Control Register 10
    volatile uint32 SRC9;                // [0xF00040D8] : CAN Service Request Control Register 9
    volatile uint32 SRC8;                // [0xF00040DC] : CAN Service Request Control Register 8
    volatile uint32 SRC7;                // [0xF00040E0] : CAN Service Request Control Register 7
    volatile uint32 SRC6;                // [0xF00040E4] : CAN Service Request Control Register 6
    volatile uint32 SRC5;                // [0xF00040E8] : CAN Service Request Control Register 5
    volatile uint32 SRC4;                // [0xF00040EC] : CAN Service Request Control Register 4
    volatile uint32 SRC3;                // [0xF00040F0] : CAN Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF00040F4] : CAN Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF00040F8] : CAN Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF00040FC] : CAN Service Request Control Register 0
    volatile uint32 LIST[8];             // [0xF0004100...0xF000411F] : List Register 
    volatile uint32 RESERVED2[8];        // [0xF0004120...0xF000413F] : reserved space
    volatile uint32 MSPND[8];            // [0xF0004140...0xF000415F] : Message Pending Register 
    volatile uint32 RESERVED3[8];        // [0xF0004160...0xF000417F] : reserved space
    volatile uint32 MSID[8];            // [0xF0004180...0xF000419F] : Message Index Register 
    volatile uint32 RESERVED4[8];        // [0xF00041A0...0xF00041BF] : reserved space
    volatile uint32 MSIMASK;             // [0xF00041C0] : Message Index Mask Register
    volatile uint32 PANCTR;              // [0xF00041C4] : Panel Control Register
    volatile uint32 MCR;                 // [0xF00041C8] : Module Control Register
    volatile uint32 MITR;                // [0xF00041CC] : Module Interrupt Trigger Register
    volatile uint32 RESERVED5[12];       // [0xF00041D0...0xF00041FF] : reserved space
    Can_NodeCtrl_t  NODE[3];             // [0xF0004200...0xF00044FF] : Node Control register
    volatile uint32 RESERVED6[704];      // [0xF0004500...0xF0004FFF] : reserved space
    Can_MsgObj_t    MO[128];             // [0xF0005000...0xF0005FFF] : Message object register
} CAN_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CAN_RegMap_t CAN __attribute__ ((asection (".bss.label_only")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

#define CAN_BASE                _CAN_UL(0xF0004000)

/******************OFFSET ADDREESS**************/

#define CAN_SRC_OFFSET _CAN_UL(0x00000001)



/********* Module Control Registers ***********/

/* Clock Control Register */

#define CAN_CLC_DISR _CAN_UL(0x00000001)
#define CAN_CLC_DISS _CAN_UL(0x00000002)
#define CAN_CLC_SPEN _CAN_UL(0x00000004)
#define CAN_CLC_EDIS _CAN_UL(0x00000008)
#define CAN_CLC_SBWE _CAN_UL(0x00000010)


#define  CAN_CLC_RESET   _CAN_UL(0x00000002)
#define  CAN_CLC_ENABLE  _CAN_UL(0x00000008)




/* Fractional Divider Register */

#define CAN_FDR_STEP     _CAN_UL(0x000003FF)
#define CAN_FDR_SC       _CAN_UL(0x00003000)
#define CAN_FDR_DM       _CAN_UL(0x0000C000)
#define CAN_FDR_RESULT   _CAN_UL(0x03FF0000)
#define CAN_FDR_SUSACK   _CAN_UL(0x10000000)
#define CAN_FDR_SUSRES   _CAN_UL(0x20000000)
#define CAN_FDR_ENHW     _CAN_UL(0x40000000)
#define CAN_FDR_DISCLK   _CAN_UL(0x80000000)



/* Service Request Control Register */

#define CAN_SRC_SRPN     _CAN_UL(0x000000FF)
#define CAN_SRC_TOS      _CAN_UL(0x00000C00)
#define CAN_SRC_SRE      _CAN_UL(0x00001000)
#define CAN_SRC_SRRR     _CAN_UL(0x00002000)
#define CAN_SRC_CLRR     _CAN_UL(0x00004000)
#define CAN_SRC_SETR     _CAN_UL(0x00008000)



/* Command Panel Registers */

#define CAN_PANCTR_PANCMD _CAN_UL(0x000000FF)
#define CAN_PANCTR_BUSY   _CAN_UL(0x00000100)
#define CAN_PANCTR_RBUSY  _CAN_UL(0x00002000)
#define CAN_PANCTR_PANAR1 _CAN_UL(0x00FF0000)
#define CAN_PANCTR_PANAR2 _CAN_UL(0xFF000000)


#define CAN_PANCTR_PANCMD_INIT          _CAN_UL(0x00000001)
#define CAN_PANCTR_PANCMD_STAT_ALLOC    _CAN_UL(0x00000002)
#define CAN_PANCTR_PANCMD_DYNC_ALLOC    _CAN_UL(0x00000003)
#define CAN_PANCTR_PANCMD_STAT_INS_BEF  _CAN_UL(0x00000004)
#define CAN_PANCTR_PANCMD_DYNC_INS_BEF  _CAN_UL(0x00000005)
#define CAN_PANCTR_PANCMD_STAT_INS_BEH  _CAN_UL(0x00000006)
#define CAN_PANCTR_PANCMD_DYNC_INS_BEH  _CAN_UL(0x00000007)


/* Message Index Register*/

#define CAN_MSID_INDEX          _CAN_UL(0x00000020)



/****** Node Specific Registers *************/


/* Node Control Register*/

#define CAN_NCR_INIT    _CAN_UL(0x00000001)
#define CAN_NCR_TRIE    _CAN_UL(0x00000002)
#define CAN_NCR_LECIE   _CAN_UL(0x00000004)
#define CAN_NCR_ALIE    _CAN_UL(0x00000008)
#define CAN_NCR_CANDIS  _CAN_UL(0x00000010)
#define CAN_NCR_CCE     _CAN_UL(0x00000040)
#define CAN_NCR_CALM    _CAN_UL(0x00000080)
#define CAN_NCR_SUSEN   _CAN_UL(0x00000100)



/* Node Status Register */

#define CAN_NSR_LEC     _CAN_UL(0x00000007)
#define CAN_NSR_TXOK    _CAN_UL(0x00000008)
#define CAN_NSR_RXOK    _CAN_UL(0x00000010)
#define CAN_NSR_ALERT   _CAN_UL(0x00000020)
#define CAN_NSR_EWRN    _CAN_UL(0x00000040)
#define CAN_NSR_BOFF    _CAN_UL(0x00000080)
#define CAN_NSR_LLE     _CAN_UL(0x00000100)
#define CAN_NSR_LOE     _CAN_UL(0x00000200)
#define CAN_NSR_SUSACK  _CAN_UL(0x00000400)

#define CAN_NSR_LEC_STUFF_ERR  _CAN_UL(0x00000001)
#define CAN_NSR_LEC_FORM_ERR   _CAN_UL(0x00000002)
#define CAN_NSR_LEC_ACK_ERR    _CAN_UL(0x00000003)
#define CAN_NSR_LEC_BIT1_ERR   _CAN_UL(0x00000004)
#define CAN_NSR_LEC_BIT0_ERR   _CAN_UL(0x00000005)
#define CAN_NSR_LEC_CRC_ERR    _CAN_UL(0x00000006)


/* Node Interrupt Pointer Register */

#define CAN_NIPR_ALINP  _CAN_UL(0x0000000F)
#define CAN_NIPR_LECINP _CAN_UL(0x000000F0)
#define CAN_NIPR_TRINP  _CAN_UL(0x00000F00)
#define CAN_NIPR_CFCINP _CAN_UL(0x0000F000)


/* Node Port Control Register */

#define CAN_NPCR_RXSEL  _CAN_UL(0x00000007)
#define CAN_NPCR_LBM    _CAN_UL(0x00000100)


/* Node Bit Timing Register */

#define CAN_NBTR_BRP    _CAN_UL(0x0000003F)
#define CAN_NBTR_SJW    _CAN_UL(0x000000C0)
#define CAN_NBTR_TSEG1  _CAN_UL(0x00000F00)
#define CAN_NBTR_TSEG2  _CAN_UL(0x00007000)
#define CAN_NBTR_DIV8   _CAN_UL(0x00008000)


/* Node Error Counter Register */

#define CAN_NECNT_REC       _CAN_UL(0x000000FF)
#define CAN_NECNT_TEC       _CAN_UL(0x0000FF00)
#define CAN_NECNT_EWRNVL    _CAN_UL(0x00FF0000)
#define CAN_NECNT_LETD      _CAN_UL(0x01000000)
#define CAN_NECNT_LEINC     _CAN_UL(0x02000000)


 /* Node Frame Counter Register */

#define CAN_NFCR_CFC        _CAN_UL(0x0000FFFF)
#define CAN_NFCR_CFSEL      _CAN_UL(0x00070000)
#define CAN_NFCR_CFMOD      _CAN_UL(0x00180000)
#define CAN_NFCR_CFCIE      _CAN_UL(0x00400000)
#define CAN_NFCR_CFCOV      _CAN_UL(0x00800000)



/******** Message Object Registers ****************/

/* Message Object Control Register */

  /* To set a bit use #define with _WR */
  /* To Reset particular bit use without _WR #defines */

#define CAN_MOCTR_RXPND     _CAN_UL(0x00000001)
#define CAN_MOCTR_TXPND     _CAN_UL(0x00000002)
#define CAN_MOCTR_RXUPD     _CAN_UL(0x00000004)
#define CAN_MOCTR_NEWDAT    _CAN_UL(0x00000008)
#define CAN_MOCTR_MSGLST    _CAN_UL(0x00000010)
#define CAN_MOCTR_MSGVAL    _CAN_UL(0x00000020)
#define CAN_MOCTR_RTSEL     _CAN_UL(0x00000040)
#define CAN_MOCTR_RXEN      _CAN_UL(0x00000080)
#define CAN_MOCTR_TXRQ      _CAN_UL(0x00000100)
#define CAN_MOCTR_TXEN0     _CAN_UL(0x00000200)
#define CAN_MOCTR_TXEN1     _CAN_UL(0x00000400)
#define CAN_MOCTR_DIR       _CAN_UL(0x00000800)
#define CAN_MOCTR_LIST      _CAN_UL(0x0000F000)

#define CAN_MOCTR_RXPND_SET     _CAN_UL(0x00010000)
#define CAN_MOCTR_TXPND_SET     _CAN_UL(0x00020000)
#define CAN_MOCTR_RXUPD_SET     _CAN_UL(0x00040000)
#define CAN_MOCTR_NEWDAT_SET    _CAN_UL(0x00080000)
#define CAN_MOCTR_MSGLST_SET    _CAN_UL(0x00100000)
#define CAN_MOCTR_MSGVAL_SET    _CAN_UL(0x00200000)
#define CAN_MOCTR_RTSEL_SET     _CAN_UL(0x00400000)
#define CAN_MOCTR_RXEN_SET      _CAN_UL(0x00800000)
#define CAN_MOCTR_TXRQ_SET      _CAN_UL(0x01000000)
#define CAN_MOCTR_TXEN0_SET     _CAN_UL(0x02000000)
#define CAN_MOCTR_TXEN1_SET     _CAN_UL(0x04000000)
#define CAN_MOCTR_DIR_SET       _CAN_UL(0x08000000)



/* Message Object Interrupt Pointer Register */

#define CAN_MOIPR_RXINP     _CAN_UL(0x0000000F)
#define CAN_MOIPR_TXINP     _CAN_UL(0x000000F0)
#define CAN_MOIPR_MPN       _CAN_UL(0x0000FF00)
#define CAN_MOIPR_CFCVAL    _CAN_UL(0xFFFF0000)



/* Message Object Function Control Register */

#define CAN_MOFCR_MMC       _CAN_UL(0x0000000F)
#define CAN_MOFCR_GDFS      _CAN_UL(0x00000100)
#define CAN_MOFCR_IDC       _CAN_UL(0x00000200)
#define CAN_MOFCR_DLCC      _CAN_UL(0x00000400)
#define CAN_MOFCR_DATC      _CAN_UL(0x00000800)
#define CAN_MOFCR_RXIE      _CAN_UL(0x00010000)
#define CAN_MOFCR_TXIE      _CAN_UL(0x00020000)
#define CAN_MOFCR_OVIE      _CAN_UL(0x00040000)
#define CAN_MOFCR_FRRENB    _CAN_UL(0x00100000)
#define CAN_MOFCR_RMM       _CAN_UL(0x00200000)
#define CAN_MOFCR_SDT       _CAN_UL(0x00400000)
#define CAN_MOFCR_STT       _CAN_UL(0x00800000)
#define CAN_MOFCR_DLC       _CAN_UL(0x0F000000)
#define CAN_MOFCR_MSC       _CAN_UL(0xF0000000)



/* Message Object FIFO/Gateway Pointer Register   */

#define CAN_MOGPR_BOT       _CAN_UL(0x000000FF)
#define CAN_MOGPR_TOP       _CAN_UL(0x0000FF00)
#define CAN_MOGPR_CUR       _CAN_UL(0x00FF0000)
#define CAN_MOGPR_SEL       _CAN_UL(0xFF000000)


/* Message Object Acceptance Mask Register */

#define CAN_MOAMR_AM        _CAN_UL(0x1FFFFFFF)
#define CAN_MOAMR_MIDE      _CAN_UL(0x20000000)


 /* Message Object Arbitration Register */

#define CAN_MOAR_ID         _CAN_UL(0x1FFFFFFF)
#define CAN_MOAR_IDE_EXD    _CAN_UL(0x20000000)
#define CAN_MOAR_PRI        _CAN_UL(0xC0000000)

/* Message Data low Register */

#define CAN_MODATA_DB0      _CAN_UL(0x000000FF)
#define CAN_MODATA_DB1      _CAN_UL(0x0000FF00)
#define CAN_MODATA_DB2      _CAN_UL(0x00FF0000)
#define CAN_MODATA_DB3      _CAN_UL(0xFF000000)

/* Message Data High Register */

#define CAN_MODATA_DB4      _CAN_UL(0x000000FF)
#define CAN_MODATA_DB5      _CAN_UL(0x0000FF00)
#define CAN_MODATA_DB6      _CAN_UL(0x00FF0000)
#define CAN_MODATA_DB7      _CAN_UL(0xFF000000)

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

/* CAN_ID_MOD_NUMBER (r) */
#define CAN_ID_MOD_NUMBER_POS                _CAN_UL(16)
#define CAN_ID_MOD_NUMBER_LEN                _CAN_UL(16)

/* CAN_ID_MOD_REV (r) */
#define CAN_ID_MOD_REV_POS                   _CAN_UL(0)
#define CAN_ID_MOD_REV_LEN                   _CAN_UL(8)

/* CAN_ID_MOD_TYPE (r) */
#define CAN_ID_MOD_TYPE_POS                  _CAN_UL(8)
#define CAN_ID_MOD_TYPE_LEN                  _CAN_UL(8)

/* CAN_CLC_DISR (rw) */
#define CAN_CLC_DISR_POS                     _CAN_UL(0)
#define CAN_CLC_DISR_LEN                     _CAN_UL(1)

/* CAN_CLC_DISS (r) */
#define CAN_CLC_DISS_POS                     _CAN_UL(1)
#define CAN_CLC_DISS_LEN                     _CAN_UL(1)

/* CAN_CLC_SPEN (rw) */
#define CAN_CLC_SPEN_POS                     _CAN_UL(2)
#define CAN_CLC_SPEN_LEN                     _CAN_UL(1)

/* CAN_CLC_EDIS (rw) */
#define CAN_CLC_EDIS_POS                     _CAN_UL(3)
#define CAN_CLC_EDIS_LEN                     _CAN_UL(1)

/* CAN_CLC_SBWE (w) */
#define CAN_CLC_SBWE_POS                     _CAN_UL(4)
#define CAN_CLC_SBWE_LEN                     _CAN_UL(1)

/* CAN_CLC_FSOE (rw) */
#define CAN_CLC_FSOE_POS                     _CAN_UL(5)
#define CAN_CLC_FSOE_LEN                     _CAN_UL(1)

/* CAN_ID_MOD_REV (r) */
#define CAN_ID_MOD_REV_POS                   _CAN_UL(0)
#define CAN_ID_MOD_REV_LEN                   _CAN_UL(8)

/* CAN_ID_MOD_TYPE (r) */
#define CAN_ID_MOD_TYPE_POS                  _CAN_UL(8)
#define CAN_ID_MOD_TYPE_LEN                  _CAN_UL(8)

/* CAN_ID_MOD_NUMBER (r) */
#define CAN_ID_MOD_NUMBER_POS                _CAN_UL(16)
#define CAN_ID_MOD_NUMBER_LEN                _CAN_UL(16)

/* CAN_FDR_STEP (rw) */
#define CAN_FDR_STEP_POS                     _CAN_UL(0)
#define CAN_FDR_STEP_LEN                     _CAN_UL(10)

/* CAN_FDR_SM (rw) */
#define CAN_FDR_SM_POS                       _CAN_UL(11)
#define CAN_FDR_SM_LEN                       _CAN_UL(1)

/* CAN_FDR_SC (rw) */
#define CAN_FDR_SC_POS                       _CAN_UL(12)
#define CAN_FDR_SC_LEN                       _CAN_UL(2)

/* CAN_FDR_DM (rw) */
#define CAN_FDR_DM_POS                       _CAN_UL(14)
#define CAN_FDR_DM_LEN                       _CAN_UL(2)

/* CAN_FDR_RESULT (rh) */
#define CAN_FDR_RESULT_POS                   _CAN_UL(16)
#define CAN_FDR_RESULT_LEN                   _CAN_UL(10)

/* CAN_FDR_SUSACK (rh) */
#define CAN_FDR_SUSACK_POS                   _CAN_UL(28)
#define CAN_FDR_SUSACK_LEN                   _CAN_UL(1)

/* CAN_FDR_SUSREQ (rh) */
#define CAN_FDR_SUSREQ_POS                   _CAN_UL(29)
#define CAN_FDR_SUSREQ_LEN                   _CAN_UL(1)

/* CAN_FDR_ENHW (rw) */
#define CAN_FDR_ENHW_POS                     _CAN_UL(30)
#define CAN_FDR_ENHW_LEN                     _CAN_UL(1)

/* CAN_FDR_DISCLK (rwh) */
#define CAN_FDR_DISCLK_POS                   _CAN_UL(31)
#define CAN_FDR_DISCLK_LEN                   _CAN_UL(1)

/* CAN_SRC15_SRPN (rw) */
#define CAN_SRC15_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC15_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC15_TOS (rw) */
#define CAN_SRC15_TOS_POS                    _CAN_UL(10)
#define CAN_SRC15_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC15_SRE (rw) */
#define CAN_SRC15_SRE_POS                    _CAN_UL(12)
#define CAN_SRC15_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC15_SRR (rh) */
#define CAN_SRC15_SRR_POS                    _CAN_UL(13)
#define CAN_SRC15_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC15_CLRR (w) */
#define CAN_SRC15_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC15_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC15_SETR (w) */
#define CAN_SRC15_SETR_POS                   _CAN_UL(15)
#define CAN_SRC15_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC14_SRPN (rw) */
#define CAN_SRC14_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC14_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC14_TOS (rw) */
#define CAN_SRC14_TOS_POS                    _CAN_UL(10)
#define CAN_SRC14_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC14_SRE (rw) */
#define CAN_SRC14_SRE_POS                    _CAN_UL(12)
#define CAN_SRC14_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC14_SRR (rh) */
#define CAN_SRC14_SRR_POS                    _CAN_UL(13)
#define CAN_SRC14_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC14_CLRR (w) */
#define CAN_SRC14_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC14_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC14_SETR (w) */
#define CAN_SRC14_SETR_POS                   _CAN_UL(15)
#define CAN_SRC14_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC13_SRPN (rw) */
#define CAN_SRC13_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC13_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC13_TOS (rw) */
#define CAN_SRC13_TOS_POS                    _CAN_UL(10)
#define CAN_SRC13_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC13_SRE (rw) */
#define CAN_SRC13_SRE_POS                    _CAN_UL(12)
#define CAN_SRC13_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC13_SRR (rh) */
#define CAN_SRC13_SRR_POS                    _CAN_UL(13)
#define CAN_SRC13_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC13_CLRR (w) */
#define CAN_SRC13_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC13_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC13_SETR (w) */
#define CAN_SRC13_SETR_POS                   _CAN_UL(15)
#define CAN_SRC13_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC12_SRPN (rw) */
#define CAN_SRC12_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC12_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC12_TOS (rw) */
#define CAN_SRC12_TOS_POS                    _CAN_UL(10)
#define CAN_SRC12_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC12_SRE (rw) */
#define CAN_SRC12_SRE_POS                    _CAN_UL(12)
#define CAN_SRC12_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC12_SRR (rh) */
#define CAN_SRC12_SRR_POS                    _CAN_UL(13)
#define CAN_SRC12_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC12_CLRR (w) */
#define CAN_SRC12_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC12_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC12_SETR (w) */
#define CAN_SRC12_SETR_POS                   _CAN_UL(15)
#define CAN_SRC12_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC11_SRPN (rw) */
#define CAN_SRC11_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC11_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC11_TOS (rw) */
#define CAN_SRC11_TOS_POS                    _CAN_UL(10)
#define CAN_SRC11_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC11_SRE (rw) */
#define CAN_SRC11_SRE_POS                    _CAN_UL(12)
#define CAN_SRC11_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC11_SRR (rh) */
#define CAN_SRC11_SRR_POS                    _CAN_UL(13)
#define CAN_SRC11_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC11_CLRR (w) */
#define CAN_SRC11_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC11_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC11_SETR (w) */
#define CAN_SRC11_SETR_POS                   _CAN_UL(15)
#define CAN_SRC11_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC10_SRPN (rw) */
#define CAN_SRC10_SRPN_POS                   _CAN_UL(0)
#define CAN_SRC10_SRPN_LEN                   _CAN_UL(8)

/* CAN_SRC10_TOS (rw) */
#define CAN_SRC10_TOS_POS                    _CAN_UL(10)
#define CAN_SRC10_TOS_LEN                    _CAN_UL(1)

/* CAN_SRC10_SRE (rw) */
#define CAN_SRC10_SRE_POS                    _CAN_UL(12)
#define CAN_SRC10_SRE_LEN                    _CAN_UL(1)

/* CAN_SRC10_SRR (rh) */
#define CAN_SRC10_SRR_POS                    _CAN_UL(13)
#define CAN_SRC10_SRR_LEN                    _CAN_UL(1)

/* CAN_SRC10_CLRR (w) */
#define CAN_SRC10_CLRR_POS                   _CAN_UL(14)
#define CAN_SRC10_CLRR_LEN                   _CAN_UL(1)

/* CAN_SRC10_SETR (w) */
#define CAN_SRC10_SETR_POS                   _CAN_UL(15)
#define CAN_SRC10_SETR_LEN                   _CAN_UL(1)

/* CAN_SRC9_SRPN (rw) */
#define CAN_SRC9_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC9_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC9_TOS (rw) */
#define CAN_SRC9_TOS_POS                     _CAN_UL(10)
#define CAN_SRC9_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC9_SRE (rw) */
#define CAN_SRC9_SRE_POS                     _CAN_UL(12)
#define CAN_SRC9_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC9_SRR (rh) */
#define CAN_SRC9_SRR_POS                     _CAN_UL(13)
#define CAN_SRC9_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC9_CLRR (w) */
#define CAN_SRC9_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC9_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC9_SETR (w) */
#define CAN_SRC9_SETR_POS                    _CAN_UL(15)
#define CAN_SRC9_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC8_SRPN (rw) */
#define CAN_SRC8_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC8_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC8_TOS (rw) */
#define CAN_SRC8_TOS_POS                     _CAN_UL(10)
#define CAN_SRC8_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC8_SRE (rw) */
#define CAN_SRC8_SRE_POS                     _CAN_UL(12)
#define CAN_SRC8_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC8_SRR (rh) */
#define CAN_SRC8_SRR_POS                     _CAN_UL(13)
#define CAN_SRC8_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC8_CLRR (w) */
#define CAN_SRC8_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC8_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC8_SETR (w) */
#define CAN_SRC8_SETR_POS                    _CAN_UL(15)
#define CAN_SRC8_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC7_SRPN (rw) */
#define CAN_SRC7_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC7_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC7_TOS (rw) */
#define CAN_SRC7_TOS_POS                     _CAN_UL(10)
#define CAN_SRC7_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC7_SRE (rw) */
#define CAN_SRC7_SRE_POS                     _CAN_UL(12)
#define CAN_SRC7_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC7_SRR (rh) */
#define CAN_SRC7_SRR_POS                     _CAN_UL(13)
#define CAN_SRC7_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC7_CLRR (w) */
#define CAN_SRC7_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC7_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC7_SETR (w) */
#define CAN_SRC7_SETR_POS                    _CAN_UL(15)
#define CAN_SRC7_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC6_SRPN (rw) */
#define CAN_SRC6_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC6_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC6_TOS (rw) */
#define CAN_SRC6_TOS_POS                     _CAN_UL(10)
#define CAN_SRC6_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC6_SRE (rw) */
#define CAN_SRC6_SRE_POS                     _CAN_UL(12)
#define CAN_SRC6_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC6_SRR (rh) */
#define CAN_SRC6_SRR_POS                     _CAN_UL(13)
#define CAN_SRC6_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC6_CLRR (w) */
#define CAN_SRC6_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC6_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC6_SETR (w) */
#define CAN_SRC6_SETR_POS                    _CAN_UL(15)
#define CAN_SRC6_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC5_SRPN (rw) */
#define CAN_SRC5_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC5_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC5_TOS (rw) */
#define CAN_SRC5_TOS_POS                     _CAN_UL(10)
#define CAN_SRC5_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC5_SRE (rw) */
#define CAN_SRC5_SRE_POS                     _CAN_UL(12)
#define CAN_SRC5_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC5_SRR (rh) */
#define CAN_SRC5_SRR_POS                     _CAN_UL(13)
#define CAN_SRC5_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC5_CLRR (w) */
#define CAN_SRC5_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC5_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC5_SETR (w) */
#define CAN_SRC5_SETR_POS                    _CAN_UL(15)
#define CAN_SRC5_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC4_SRPN (rw) */
#define CAN_SRC4_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC4_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC4_TOS (rw) */
#define CAN_SRC4_TOS_POS                     _CAN_UL(10)
#define CAN_SRC4_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC4_SRE (rw) */
#define CAN_SRC4_SRE_POS                     _CAN_UL(12)
#define CAN_SRC4_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC4_SRR (rh) */
#define CAN_SRC4_SRR_POS                     _CAN_UL(13)
#define CAN_SRC4_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC4_CLRR (w) */
#define CAN_SRC4_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC4_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC4_SETR (w) */
#define CAN_SRC4_SETR_POS                    _CAN_UL(15)
#define CAN_SRC4_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC3_SRPN (rw) */
#define CAN_SRC3_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC3_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC3_TOS (rw) */
#define CAN_SRC3_TOS_POS                     _CAN_UL(10)
#define CAN_SRC3_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC3_SRE (rw) */
#define CAN_SRC3_SRE_POS                     _CAN_UL(12)
#define CAN_SRC3_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC3_SRR (rh) */
#define CAN_SRC3_SRR_POS                     _CAN_UL(13)
#define CAN_SRC3_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC3_CLRR (w) */
#define CAN_SRC3_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC3_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC3_SETR (w) */
#define CAN_SRC3_SETR_POS                    _CAN_UL(15)
#define CAN_SRC3_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC2_SRPN (rw) */
#define CAN_SRC2_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC2_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC2_TOS (rw) */
#define CAN_SRC2_TOS_POS                     _CAN_UL(10)
#define CAN_SRC2_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC2_SRE (rw) */
#define CAN_SRC2_SRE_POS                     _CAN_UL(12)
#define CAN_SRC2_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC2_SRR (rh) */
#define CAN_SRC2_SRR_POS                     _CAN_UL(13)
#define CAN_SRC2_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC2_CLRR (w) */
#define CAN_SRC2_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC2_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC2_SETR (w) */
#define CAN_SRC2_SETR_POS                    _CAN_UL(15)
#define CAN_SRC2_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC1_SRPN (rw) */
#define CAN_SRC1_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC1_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC1_TOS (rw) */
#define CAN_SRC1_TOS_POS                     _CAN_UL(10)
#define CAN_SRC1_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC1_SRE (rw) */
#define CAN_SRC1_SRE_POS                     _CAN_UL(12)
#define CAN_SRC1_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC1_SRR (rh) */
#define CAN_SRC1_SRR_POS                     _CAN_UL(13)
#define CAN_SRC1_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC1_CLRR (w) */
#define CAN_SRC1_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC1_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC1_SETR (w) */
#define CAN_SRC1_SETR_POS                    _CAN_UL(15)
#define CAN_SRC1_SETR_LEN                    _CAN_UL(1)

/* CAN_SRC0_SRPN (rw) */
#define CAN_SRC0_SRPN_POS                    _CAN_UL(0)
#define CAN_SRC0_SRPN_LEN                    _CAN_UL(8)

/* CAN_SRC0_TOS (rw) */
#define CAN_SRC0_TOS_POS                     _CAN_UL(10)
#define CAN_SRC0_TOS_LEN                     _CAN_UL(1)

/* CAN_SRC0_SRE (rw) */
#define CAN_SRC0_SRE_POS                     _CAN_UL(12)
#define CAN_SRC0_SRE_LEN                     _CAN_UL(1)

/* CAN_SRC0_SRR (rh) */
#define CAN_SRC0_SRR_POS                     _CAN_UL(13)
#define CAN_SRC0_SRR_LEN                     _CAN_UL(1)

/* CAN_SRC0_CLRR (w) */
#define CAN_SRC0_CLRR_POS                    _CAN_UL(14)
#define CAN_SRC0_CLRR_LEN                    _CAN_UL(1)

/* CAN_SRC0_SETR (w) */
#define CAN_SRC0_SETR_POS                    _CAN_UL(15)
#define CAN_SRC0_SETR_LEN                    _CAN_UL(1)

/* CAN_LIST_BEGIN (rh) */
#define CAN_LIST_BEGIN_POS                   _CAN_UL(0)
#define CAN_LIST_BEGIN_LEN                   _CAN_UL(8)

/* CAN_LIST_END (rh) */
#define CAN_LIST_END_POS                     _CAN_UL(8)
#define CAN_LIST_END_LEN                     _CAN_UL(8)

/* CAN_LIST_SIZE (rh) */
#define CAN_LIST_SIZE_POS                    _CAN_UL(16)
#define CAN_LIST_SIZE_LEN                    _CAN_UL(8)

/* CAN_LIST_EMPTY (rh) */
#define CAN_LIST_EMPTY_POS                   _CAN_UL(24)
#define CAN_LIST_EMPTY_LEN                   _CAN_UL(1)

/* CAN_MSPND_PND (rwh) */
#define CAN_MSPND_PND_POS                    _CAN_UL(0)
#define CAN_MSPND_PND_LEN                    _CAN_UL(32)

/* CAN_MSID_INDEX (rh) */
#define CAN_MSID_INDEX_POS                   _CAN_UL(0)
#define CAN_MSID_INDEX_LEN                   _CAN_UL(6)

/* CAN_MSIMASK_IM (rw) */
#define CAN_MSIMASK_IM_POS                   _CAN_UL(0)
#define CAN_MSIMASK_IM_LEN                   _CAN_UL(32)

/* CAN_PANCTR_PANCMD (rwh) */
#define CAN_PANCTR_PANCMD_POS                _CAN_UL(0)
#define CAN_PANCTR_PANCMD_LEN                _CAN_UL(8)

/* CAN_PANCTR_BUSY (rh) */
#define CAN_PANCTR_BUSY_POS                  _CAN_UL(8)
#define CAN_PANCTR_BUSY_LEN                  _CAN_UL(1)

/* CAN_PANCTR_RBUSY (rh) */
#define CAN_PANCTR_RBUSY_POS                 _CAN_UL(9)
#define CAN_PANCTR_RBUSY_LEN                 _CAN_UL(1)

/* CAN_PANCTR_PANAR1 (rwh) */
#define CAN_PANCTR_PANAR1_POS                _CAN_UL(16)
#define CAN_PANCTR_PANAR1_LEN                _CAN_UL(8)

/* CAN_PANCTR_PANAR2 (rwh) */
#define CAN_PANCTR_PANAR2_POS                _CAN_UL(24)
#define CAN_PANCTR_PANAR2_LEN                _CAN_UL(8)

/* CAN_MCR_MPSEL (rw) */
#define CAN_MCR_MPSEL_POS                    _CAN_UL(12)
#define CAN_MCR_MPSEL_LEN                    _CAN_UL(4)

/* CAN_MITR_IT (w) */
#define CAN_MITR_IT_POS                      _CAN_UL(0)
#define CAN_MITR_IT_LEN                      _CAN_UL(16)

/* CAN_NCR0_INIT (rwh) */
#define CAN_NCR0_INIT_POS                    _CAN_UL(0)
#define CAN_NCR0_INIT_LEN                    _CAN_UL(1)

/* CAN_NCR0_TRIE (rw) */
#define CAN_NCR0_TRIE_POS                    _CAN_UL(1)
#define CAN_NCR0_TRIE_LEN                    _CAN_UL(1)

/* CAN_NCR0_LECIE (rw) */
#define CAN_NCR0_LECIE_POS                   _CAN_UL(2)
#define CAN_NCR0_LECIE_LEN                   _CAN_UL(1)

/* CAN_NCR0_ALIE (rw) */
#define CAN_NCR0_ALIE_POS                    _CAN_UL(3)
#define CAN_NCR0_ALIE_LEN                    _CAN_UL(1)

/* CAN_NCR0_CANDIS (rw) */
#define CAN_NCR0_CANDIS_POS                  _CAN_UL(4)
#define CAN_NCR0_CANDIS_LEN                  _CAN_UL(1)

/* CAN_NCR0_CCE (rw) */
#define CAN_NCR0_CCE_POS                     _CAN_UL(6)
#define CAN_NCR0_CCE_LEN                     _CAN_UL(1)

/* CAN_NCR0_CALM (rw) */
#define CAN_NCR0_CALM_POS                    _CAN_UL(7)
#define CAN_NCR0_CALM_LEN                    _CAN_UL(1)

/* CAN_NCR0_SUSEN (rw) */
#define CAN_NCR0_SUSEN_POS                   _CAN_UL(8)
#define CAN_NCR0_SUSEN_LEN                   _CAN_UL(1)

/* CAN_NSR0_LEC (rwh) */
#define CAN_NSR0_LEC_POS                     _CAN_UL(0)
#define CAN_NSR0_LEC_LEN                     _CAN_UL(3)

/* CAN_NSR0_TXOK (rwh) */
#define CAN_NSR0_TXOK_POS                    _CAN_UL(3)
#define CAN_NSR0_TXOK_LEN                    _CAN_UL(1)

/* CAN_NSR0_RXOK (rwh) */
#define CAN_NSR0_RXOK_POS                    _CAN_UL(4)
#define CAN_NSR0_RXOK_LEN                    _CAN_UL(1)

/* CAN_NSR0_ALERT (rwh) */
#define CAN_NSR0_ALERT_POS                   _CAN_UL(5)
#define CAN_NSR0_ALERT_LEN                   _CAN_UL(1)

/* CAN_NSR0_EWRN (rh) */
#define CAN_NSR0_EWRN_POS                    _CAN_UL(6)
#define CAN_NSR0_EWRN_LEN                    _CAN_UL(1)

/* CAN_NSR0_BOFF (rh) */
#define CAN_NSR0_BOFF_POS                    _CAN_UL(7)
#define CAN_NSR0_BOFF_LEN                    _CAN_UL(1)

/* CAN_NSR0_LLE (rwh) */
#define CAN_NSR0_LLE_POS                     _CAN_UL(8)
#define CAN_NSR0_LLE_LEN                     _CAN_UL(1)

/* CAN_NSR0_LOE (rwh) */
#define CAN_NSR0_LOE_POS                     _CAN_UL(9)
#define CAN_NSR0_LOE_LEN                     _CAN_UL(1)

/* CAN_NSR0_SUSACK (rh) */
#define CAN_NSR0_SUSACK_POS                  _CAN_UL(10)
#define CAN_NSR0_SUSACK_LEN                  _CAN_UL(1)

/* CAN_NIPR0_ALINP (rw) */
#define CAN_NIPR0_ALINP_POS                  _CAN_UL(0)
#define CAN_NIPR0_ALINP_LEN                  _CAN_UL(4)

/* CAN_NIPR0_LECINP (rw) */
#define CAN_NIPR0_LECINP_POS                 _CAN_UL(4)
#define CAN_NIPR0_LECINP_LEN                 _CAN_UL(4)

/* CAN_NIPR0_TRINP (rw) */
#define CAN_NIPR0_TRINP_POS                  _CAN_UL(8)
#define CAN_NIPR0_TRINP_LEN                  _CAN_UL(4)

/* CAN_NIPR0_CFCINP (rw) */
#define CAN_NIPR0_CFCINP_POS                 _CAN_UL(12)
#define CAN_NIPR0_CFCINP_LEN                 _CAN_UL(4)

/* CAN_NPCR0_RXSEL (rw) */
#define CAN_NPCR0_RXSEL_POS                  _CAN_UL(0)
#define CAN_NPCR0_RXSEL_LEN                  _CAN_UL(3)

/* CAN_NPCR0_LBM (rw) */
#define CAN_NPCR0_LBM_POS                    _CAN_UL(8)
#define CAN_NPCR0_LBM_LEN                    _CAN_UL(1)

/* CAN_NBTR0_BRP (rw) */
#define CAN_NBTR0_BRP_POS                    _CAN_UL(0)
#define CAN_NBTR0_BRP_LEN                    _CAN_UL(6)

/* CAN_NBTR0_SJW (rw) */
#define CAN_NBTR0_SJW_POS                    _CAN_UL(6)
#define CAN_NBTR0_SJW_LEN                    _CAN_UL(2)

/* CAN_NBTR0_TSEG1 (rw) */
#define CAN_NBTR0_TSEG1_POS                  _CAN_UL(8)
#define CAN_NBTR0_TSEG1_LEN                  _CAN_UL(4)

/* CAN_NBTR0_TSEG2 (rw) */
#define CAN_NBTR0_TSEG2_POS                  _CAN_UL(12)
#define CAN_NBTR0_TSEG2_LEN                  _CAN_UL(3)

/* CAN_NBTR0_DIV8 (rw) */
#define CAN_NBTR0_DIV8_POS                   _CAN_UL(15)
#define CAN_NBTR0_DIV8_LEN                   _CAN_UL(1)

/* CAN_NECNT0_REC (rwh) */
#define CAN_NECNT0_REC_POS                   _CAN_UL(0)
#define CAN_NECNT0_REC_LEN                   _CAN_UL(8)

/* CAN_NECNT0_TEC (rwh) */
#define CAN_NECNT0_TEC_POS                   _CAN_UL(8)
#define CAN_NECNT0_TEC_LEN                   _CAN_UL(8)

/* CAN_NECNT0_EWRNLVL (rw) */
#define CAN_NECNT0_EWRNLVL_POS               _CAN_UL(16)
#define CAN_NECNT0_EWRNLVL_LEN               _CAN_UL(8)

/* CAN_NECNT0_LETD (rh) */
#define CAN_NECNT0_LETD_POS                  _CAN_UL(24)
#define CAN_NECNT0_LETD_LEN                  _CAN_UL(1)

/* CAN_NECNT0_LEINC (rh) */
#define CAN_NECNT0_LEINC_POS                 _CAN_UL(25)
#define CAN_NECNT0_LEINC_LEN                 _CAN_UL(1)

/* CAN_NFCR0_CFC (rwh) */
#define CAN_NFCR0_CFC_POS                    _CAN_UL(0)
#define CAN_NFCR0_CFC_LEN                    _CAN_UL(16)

/* CAN_NFCR0_CFSEL (rw) */
#define CAN_NFCR0_CFSEL_POS                  _CAN_UL(16)
#define CAN_NFCR0_CFSEL_LEN                  _CAN_UL(3)

/* CAN_NFCR0_CFMOD (rw) */
#define CAN_NFCR0_CFMOD_POS                  _CAN_UL(19)
#define CAN_NFCR0_CFMOD_LEN                  _CAN_UL(2)

/* CAN_NFCR0_CFCIE (rw) */
#define CAN_NFCR0_CFCIE_POS                  _CAN_UL(22)
#define CAN_NFCR0_CFCIE_LEN                  _CAN_UL(1)

/* CAN_NFCR0_CFCOV (rwh) */
#define CAN_NFCR0_CFCOV_POS                  _CAN_UL(23)
#define CAN_NFCR0_CFCOV_LEN                  _CAN_UL(1)

/* CAN_NCR1_INIT (rwh) */
#define CAN_NCR1_INIT_POS                    _CAN_UL(0)
#define CAN_NCR1_INIT_LEN                    _CAN_UL(1)

/* CAN_NCR1_TRIE (rw) */
#define CAN_NCR1_TRIE_POS                    _CAN_UL(1)
#define CAN_NCR1_TRIE_LEN                    _CAN_UL(1)

/* CAN_NCR1_LECIE (rw) */
#define CAN_NCR1_LECIE_POS                   _CAN_UL(2)
#define CAN_NCR1_LECIE_LEN                   _CAN_UL(1)

/* CAN_NCR1_ALIE (rw) */
#define CAN_NCR1_ALIE_POS                    _CAN_UL(3)
#define CAN_NCR1_ALIE_LEN                    _CAN_UL(1)

/* CAN_NCR1_CANDIS (rw) */
#define CAN_NCR1_CANDIS_POS                  _CAN_UL(4)
#define CAN_NCR1_CANDIS_LEN                  _CAN_UL(1)

/* CAN_NCR1_CCE (rw) */
#define CAN_NCR1_CCE_POS                     _CAN_UL(6)
#define CAN_NCR1_CCE_LEN                     _CAN_UL(1)

/* CAN_NCR1_CALM (rw) */
#define CAN_NCR1_CALM_POS                    _CAN_UL(7)
#define CAN_NCR1_CALM_LEN                    _CAN_UL(1)

/* CAN_NCR1_SUSEN (rw) */
#define CAN_NCR1_SUSEN_POS                   _CAN_UL(8)
#define CAN_NCR1_SUSEN_LEN                   _CAN_UL(1)

/* CAN_NSR1_LEC (rwh) */
#define CAN_NSR1_LEC_POS                     _CAN_UL(0)
#define CAN_NSR1_LEC_LEN                     _CAN_UL(3)

/* CAN_NSR1_TXOK (rwh) */
#define CAN_NSR1_TXOK_POS                    _CAN_UL(3)
#define CAN_NSR1_TXOK_LEN                    _CAN_UL(1)

/* CAN_NSR1_RXOK (rwh) */
#define CAN_NSR1_RXOK_POS                    _CAN_UL(4)
#define CAN_NSR1_RXOK_LEN                    _CAN_UL(1)

/* CAN_NSR1_ALERT (rwh) */
#define CAN_NSR1_ALERT_POS                   _CAN_UL(5)
#define CAN_NSR1_ALERT_LEN                   _CAN_UL(1)

/* CAN_NSR1_EWRN (rh) */
#define CAN_NSR1_EWRN_POS                    _CAN_UL(6)
#define CAN_NSR1_EWRN_LEN                    _CAN_UL(1)

/* CAN_NSR1_BOFF (rh) */
#define CAN_NSR1_BOFF_POS                    _CAN_UL(7)
#define CAN_NSR1_BOFF_LEN                    _CAN_UL(1)

/* CAN_NSR1_LLE (rwh) */
#define CAN_NSR1_LLE_POS                     _CAN_UL(8)
#define CAN_NSR1_LLE_LEN                     _CAN_UL(1)

/* CAN_NSR1_LOE (rwh) */
#define CAN_NSR1_LOE_POS                     _CAN_UL(9)
#define CAN_NSR1_LOE_LEN                     _CAN_UL(1)

/* CAN_NSR1_SUSACK (rh) */
#define CAN_NSR1_SUSACK_POS                  _CAN_UL(10)
#define CAN_NSR1_SUSACK_LEN                  _CAN_UL(1)

/* CAN_NIPR1_ALINP (rw) */
#define CAN_NIPR1_ALINP_POS                  _CAN_UL(0)
#define CAN_NIPR1_ALINP_LEN                  _CAN_UL(4)

/* CAN_NIPR1_LECINP (rw) */
#define CAN_NIPR1_LECINP_POS                 _CAN_UL(4)
#define CAN_NIPR1_LECINP_LEN                 _CAN_UL(4)

/* CAN_NIPR1_TRINP (rw) */
#define CAN_NIPR1_TRINP_POS                  _CAN_UL(8)
#define CAN_NIPR1_TRINP_LEN                  _CAN_UL(4)

/* CAN_NIPR1_CFCINP (rw) */
#define CAN_NIPR1_CFCINP_POS                 _CAN_UL(12)
#define CAN_NIPR1_CFCINP_LEN                 _CAN_UL(4)

/* CAN_NPCR1_RXSEL (rw) */
#define CAN_NPCR1_RXSEL_POS                  _CAN_UL(0)
#define CAN_NPCR1_RXSEL_LEN                  _CAN_UL(3)

/* CAN_NPCR1_LBM (rw) */
#define CAN_NPCR1_LBM_POS                    _CAN_UL(8)
#define CAN_NPCR1_LBM_LEN                    _CAN_UL(1)

/* CAN_NBTR1_BRP (rw) */
#define CAN_NBTR1_BRP_POS                    _CAN_UL(0)
#define CAN_NBTR1_BRP_LEN                    _CAN_UL(6)

/* CAN_NBTR1_SJW (rw) */
#define CAN_NBTR1_SJW_POS                    _CAN_UL(6)
#define CAN_NBTR1_SJW_LEN                    _CAN_UL(2)

/* CAN_NBTR1_TSEG1 (rw) */
#define CAN_NBTR1_TSEG1_POS                  _CAN_UL(8)
#define CAN_NBTR1_TSEG1_LEN                  _CAN_UL(4)

/* CAN_NBTR1_TSEG2 (rw) */
#define CAN_NBTR1_TSEG2_POS                  _CAN_UL(12)
#define CAN_NBTR1_TSEG2_LEN                  _CAN_UL(3)

/* CAN_NBTR1_DIV8 (rw) */
#define CAN_NBTR1_DIV8_POS                   _CAN_UL(15)
#define CAN_NBTR1_DIV8_LEN                   _CAN_UL(1)

/* CAN_NECNT1_REC (rwh) */
#define CAN_NECNT1_REC_POS                   _CAN_UL(0)
#define CAN_NECNT1_REC_LEN                   _CAN_UL(8)

/* CAN_NECNT1_TEC (rwh) */
#define CAN_NECNT1_TEC_POS                   _CAN_UL(8)
#define CAN_NECNT1_TEC_LEN                   _CAN_UL(8)

/* CAN_NECNT1_EWRNLVL (rw) */
#define CAN_NECNT1_EWRNLVL_POS               _CAN_UL(16)
#define CAN_NECNT1_EWRNLVL_LEN               _CAN_UL(8)

/* CAN_NECNT1_LETD (rh) */
#define CAN_NECNT1_LETD_POS                  _CAN_UL(24)
#define CAN_NECNT1_LETD_LEN                  _CAN_UL(1)

/* CAN_NECNT1_LEINC (rh) */
#define CAN_NECNT1_LEINC_POS                 _CAN_UL(25)
#define CAN_NECNT1_LEINC_LEN                 _CAN_UL(1)

/* CAN_NFCR1_CFC (rwh) */
#define CAN_NFCR1_CFC_POS                    _CAN_UL(0)
#define CAN_NFCR1_CFC_LEN                    _CAN_UL(16)

/* CAN_NFCR1_CFSEL (rw) */
#define CAN_NFCR1_CFSEL_POS                  _CAN_UL(16)
#define CAN_NFCR1_CFSEL_LEN                  _CAN_UL(3)

/* CAN_NFCR1_CFMOD (rw) */
#define CAN_NFCR1_CFMOD_POS                  _CAN_UL(19)
#define CAN_NFCR1_CFMOD_LEN                  _CAN_UL(2)

/* CAN_NFCR1_CFCIE (rw) */
#define CAN_NFCR1_CFCIE_POS                  _CAN_UL(22)
#define CAN_NFCR1_CFCIE_LEN                  _CAN_UL(1)

/* CAN_NFCR1_CFCOV (rwh) */
#define CAN_NFCR1_CFCOV_POS                  _CAN_UL(23)
#define CAN_NFCR1_CFCOV_LEN                  _CAN_UL(1)

/* CAN_NCR2_INIT (rwh) */
#define CAN_NCR2_INIT_POS                    _CAN_UL(0)
#define CAN_NCR2_INIT_LEN                    _CAN_UL(1)

/* CAN_NCR2_TRIE (rw) */
#define CAN_NCR2_TRIE_POS                    _CAN_UL(1)
#define CAN_NCR2_TRIE_LEN                    _CAN_UL(1)

/* CAN_NCR2_LECIE (rw) */
#define CAN_NCR2_LECIE_POS                   _CAN_UL(2)
#define CAN_NCR2_LECIE_LEN                   _CAN_UL(1)

/* CAN_NCR2_ALIE (rw) */
#define CAN_NCR2_ALIE_POS                    _CAN_UL(3)
#define CAN_NCR2_ALIE_LEN                    _CAN_UL(1)

/* CAN_NCR2_CANDIS (rw) */
#define CAN_NCR2_CANDIS_POS                  _CAN_UL(4)
#define CAN_NCR2_CANDIS_LEN                  _CAN_UL(1)

/* CAN_NCR2_CCE (rw) */
#define CAN_NCR2_CCE_POS                     _CAN_UL(6)
#define CAN_NCR2_CCE_LEN                     _CAN_UL(1)

/* CAN_NCR2_CALM (rw) */
#define CAN_NCR2_CALM_POS                    _CAN_UL(7)
#define CAN_NCR2_CALM_LEN                    _CAN_UL(1)

/* CAN_NCR2_SUSEN (rw) */
#define CAN_NCR2_SUSEN_POS                   _CAN_UL(8)
#define CAN_NCR2_SUSEN_LEN                   _CAN_UL(1)

/* CAN_NSR2_LEC (rwh) */
#define CAN_NSR2_LEC_POS                     _CAN_UL(0)
#define CAN_NSR2_LEC_LEN                     _CAN_UL(3)

/* CAN_NSR2_TXOK (rwh) */
#define CAN_NSR2_TXOK_POS                    _CAN_UL(3)
#define CAN_NSR2_TXOK_LEN                    _CAN_UL(1)

/* CAN_NSR2_RXOK (rwh) */
#define CAN_NSR2_RXOK_POS                    _CAN_UL(4)
#define CAN_NSR2_RXOK_LEN                    _CAN_UL(1)

/* CAN_NSR2_ALERT (rwh) */
#define CAN_NSR2_ALERT_POS                   _CAN_UL(5)
#define CAN_NSR2_ALERT_LEN                   _CAN_UL(1)

/* CAN_NSR2_EWRN (rh) */
#define CAN_NSR2_EWRN_POS                    _CAN_UL(6)
#define CAN_NSR2_EWRN_LEN                    _CAN_UL(1)

/* CAN_NSR2_BOFF (rh) */
#define CAN_NSR2_BOFF_POS                    _CAN_UL(7)
#define CAN_NSR2_BOFF_LEN                    _CAN_UL(1)

/* CAN_NSR2_LLE (rwh) */
#define CAN_NSR2_LLE_POS                     _CAN_UL(8)
#define CAN_NSR2_LLE_LEN                     _CAN_UL(1)

/* CAN_NSR2_LOE (rwh) */
#define CAN_NSR2_LOE_POS                     _CAN_UL(9)
#define CAN_NSR2_LOE_LEN                     _CAN_UL(1)

/* CAN_NSR2_SUSACK (rh) */
#define CAN_NSR2_SUSACK_POS                  _CAN_UL(10)
#define CAN_NSR2_SUSACK_LEN                  _CAN_UL(1)

/* CAN_NIPR2_ALINP (rw) */
#define CAN_NIPR2_ALINP_POS                  _CAN_UL(0)
#define CAN_NIPR2_ALINP_LEN                  _CAN_UL(4)

/* CAN_NIPR2_LECINP (rw) */
#define CAN_NIPR2_LECINP_POS                 _CAN_UL(4)
#define CAN_NIPR2_LECINP_LEN                 _CAN_UL(4)

/* CAN_NIPR2_TRINP (rw) */
#define CAN_NIPR2_TRINP_POS                  _CAN_UL(8)
#define CAN_NIPR2_TRINP_LEN                  _CAN_UL(4)

/* CAN_NIPR2_CFCINP (rw) */
#define CAN_NIPR2_CFCINP_POS                 _CAN_UL(12)
#define CAN_NIPR2_CFCINP_LEN                 _CAN_UL(4)

/* CAN_NPCR2_RXSEL (rw) */
#define CAN_NPCR2_RXSEL_POS                  _CAN_UL(0)
#define CAN_NPCR2_RXSEL_LEN                  _CAN_UL(3)

/* CAN_NPCR2_LBM (rw) */
#define CAN_NPCR2_LBM_POS                    _CAN_UL(8)
#define CAN_NPCR2_LBM_LEN                    _CAN_UL(1)

/* CAN_NBTR2_BRP (rw) */
#define CAN_NBTR2_BRP_POS                    _CAN_UL(0)
#define CAN_NBTR2_BRP_LEN                    _CAN_UL(6)

/* CAN_NBTR2_SJW (rw) */
#define CAN_NBTR2_SJW_POS                    _CAN_UL(6)
#define CAN_NBTR2_SJW_LEN                    _CAN_UL(2)

/* CAN_NBTR2_TSEG1 (rw) */
#define CAN_NBTR2_TSEG1_POS                  _CAN_UL(8)
#define CAN_NBTR2_TSEG1_LEN                  _CAN_UL(4)

/* CAN_NBTR2_TSEG2 (rw) */
#define CAN_NBTR2_TSEG2_POS                  _CAN_UL(12)
#define CAN_NBTR2_TSEG2_LEN                  _CAN_UL(3)

/* CAN_NBTR2_DIV8 (rw) */
#define CAN_NBTR2_DIV8_POS                   _CAN_UL(15)
#define CAN_NBTR2_DIV8_LEN                   _CAN_UL(1)

/* CAN_NECNT2_REC (rwh) */
#define CAN_NECNT2_REC_POS                   _CAN_UL(0)
#define CAN_NECNT2_REC_LEN                   _CAN_UL(8)

/* CAN_NECNT2_TEC (rwh) */
#define CAN_NECNT2_TEC_POS                   _CAN_UL(8)
#define CAN_NECNT2_TEC_LEN                   _CAN_UL(8)

/* CAN_NECNT2_EWRNLVL (rw) */
#define CAN_NECNT2_EWRNLVL_POS               _CAN_UL(16)
#define CAN_NECNT2_EWRNLVL_LEN               _CAN_UL(8)

/* CAN_NECNT2_LETD (rh) */
#define CAN_NECNT2_LETD_POS                  _CAN_UL(24)
#define CAN_NECNT2_LETD_LEN                  _CAN_UL(1)

/* CAN_NECNT2_LEINC (rh) */
#define CAN_NECNT2_LEINC_POS                 _CAN_UL(25)
#define CAN_NECNT2_LEINC_LEN                 _CAN_UL(1)

/* CAN_NFCR2_CFC (rwh) */
#define CAN_NFCR2_CFC_POS                    _CAN_UL(0)
#define CAN_NFCR2_CFC_LEN                    _CAN_UL(16)

/* CAN_NFCR2_CFSEL (rw) */
#define CAN_NFCR2_CFSEL_POS                  _CAN_UL(16)
#define CAN_NFCR2_CFSEL_LEN                  _CAN_UL(3)

/* CAN_NFCR2_CFMOD (rw) */
#define CAN_NFCR2_CFMOD_POS                  _CAN_UL(19)
#define CAN_NFCR2_CFMOD_LEN                  _CAN_UL(2)

/* CAN_NFCR2_CFCIE (rw) */
#define CAN_NFCR2_CFCIE_POS                  _CAN_UL(22)
#define CAN_NFCR2_CFCIE_LEN                  _CAN_UL(1)

/* CAN_NFCR2_CFCOV (rwh) */
#define CAN_NFCR2_CFCOV_POS                  _CAN_UL(23)
#define CAN_NFCR2_CFCOV_LEN                  _CAN_UL(1)

#endif
