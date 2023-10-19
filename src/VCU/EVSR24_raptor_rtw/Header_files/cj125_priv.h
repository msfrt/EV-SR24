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
 * $Filename__:cj125_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:EGF2FE$
 * $Date______:28.10.2010$
 * $Class_____:SWHDR$
 * $Name______:cj125_priv$
 * $Variant___:1.10.0$
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
 * 1.10.0; 0     28.10.2010 EGF2FE
 *   MISRA warnings removed
 * 
 * 1.8.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cj125_priv.h
 *      Version: \main\basis\b_CORE\6
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *                  Peripheral module driver for the Cj125, this driver has no interface function
 *                  to the driving software.
 *
 * \scope           Intern
 ***************************************************************************************************
 */


#ifndef _CJ125_PRIV_H
#define _CJ125_PRIV_H


/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */

#define CJ125_PM_INIT2_MASK          0x003F      /* Mask for comparing the Peripheral Monitoring bits         */
#define CJ125_COM_ERRCTR_LIMIT       10

/* different error, checkbyte and data masks                                                      */
/*------------------------------------------------------------------------------------------------*/
/*                         7 6 5 4 3 2 1 0 (Bit number)                                           */
/* CONTROL BYTE of CJ125:  X X 1 0 1 X X 0                                                        */
/*                                       |                                                        */
/*                                       + in case of 'current command is valid'                  */
/*                                         X: bit is not fix                                      */
/*------------------------------------------------------------------------------------------------*/
#define CJ125_CHECK_BYTE_MASK           0x3900      /* Mask for valid part of control byte        */
#define CJ125_CHECK_BYTE_VALUE          0x2800      /* Default value of valid control byte        */

/*------------------------------------------------------------------------------------------------*/
/*                         7 6 5 4 3 2 1 0 (Bit number)                                           */
/* INIT1 REGISTER       :  X X 0 X X X 0 X                                                        */
/* of CJ125                                                                                       */
/*                                         X: bit is not fix                                      */
/*------------------------------------------------------------------------------------------------*/
#define CJ125_DATA_INIT1_MASK           0x00DD      /* Mask for changeable part of INIT1 Register */

/*------------------------------------------------------------------------------------------------*/
/*                         7 6 5 4 3 2 1 0 (Bit number)                                           */
/* INIT2 REGISTER       :  0 X X X X X X X                                                        */
/* of CJ125                                                                                       */
/*                                         X: bit is not fix                                      */
/*------------------------------------------------------------------------------------------------*/
#define CJ125_DATA_INIT2_MASK           0x007F      /* Mask for changeable part of INIT2 Register */

/*------------------------------------------------------------------------------------------------*/
/*                         7 6 5 4 3 2 1 0 (Bit number)                                           */
/* DIAGNOSTIC REGISTER  :  X X X X X X X X                                                        */
/* of CJ125                -+- -+- -+- -+-                                                        */
/*                          |   |   |   |                                                         */
/*                          |   |   |   +- diagnostic info for pin VM                             */
/*                          |   |   +----- diagnostic info for pin UN                             */
/*                          |   +--------- diagnostic info for pin IA/IP                          */
/*                          +------------- diagnostic info for external heater                    */
/*------------------------------------------------------------------------------------------------*/
#define CJ125_DATA_DIAG_MASK            0x00FF      /* Mask for valid part of diagnostic register */
#define CJ125_NO_ERROR_IN_DIAG          0xFF        /* No error inserted in the diag register     */

/* Bit masks of the different errors at the diagnostic register of CJ125                          */
enum CJ125_ERR_BIT_MSK
{
    CJ125_ST_STG_DB8    =               0x00,       /* short to ground                            */
    CJ125_ST_LBOL_DB8   =               0x01,       /* low battery / open load                    */
    CJ125_ST_STB_DB8    =               0x02,       /* short to battery                           */
    CJ125_ST_OK_DB8     =               0x03        /* no error                                   */
};

/* defines for the different errors of the signals at CJ125 */
#define CJ125_SIGNALERROR_STB           0x01        /* short to U battery                         */
#define CJ125_SIGNALERROR_STG           0x02        /* short to ground                            */
#define CJ125_SIGNALERROR_OPL           0x20        /* open load (only heater)                    */
#define CJ125_SIGNALERROR_UPDATE        0x80        /* errors updated since last call             */

/* Mask with all used error flags for signal errors at CJ125                                      */
#define CJ125_SIGNALERROR_MASK          (CJ125_SIGNALERROR_STB | \
                                         CJ125_SIGNALERROR_STG | \
                                         CJ125_SIGNALERROR_OPL)

/* Mask for the flag indicating updated signal error infornmation                                 */
#define CJ125_SIGNALERROR_UPDATED_MASK   CJ125_SIGNALERROR_UPDATE

/* Value for shifting the errors from device variable to positions at interface                   */
/* variable (32 bit)                                                                              */
#define CJ125_SIGNALERROR_SHIFT         (0-0)   /* bit0,1,5 errors                                */
#define CJ125_SIGNALERROR_UPDATE_SHIFT  (31-7)  /* bit 8 shifted to bit 31                        */

/* defines for the different errors of the chip at CJ125 */
#define CJ125_CHIPERROR_COM             0x01    /* wrong receive data                             */
#define CJ125_CHIPERROR_SPI             0x02    /* no spi send possible                           */
#define CJ125_CHIPERROR_LOWBAT          0x04    /* low battery at Ub-pin                          */
#define CJ125_CHIPERROR_INIT            0x08    /* initialisation of register failed              */
#define CJ125_CHIPERROR_UPDATE          0x80    /* errors updated since last call                 */

/* Mask with all used error flags for chip errors at CJ125 */
#define CJ125_CHIPERROR_MASK            (CJ125_CHIPERROR_COM    | \
                                         CJ125_CHIPERROR_SPI    | \
                                         CJ125_CHIPERROR_LOWBAT | \
                                         CJ125_CHIPERROR_INIT)

/* Mask for the flag indicating updated chip error infornmation                                   */
#define CJ125_CHIPERROR_UPDATED_MASK     CJ125_CHIPERROR_UPDATE

/* Value for shifting the errors from device variable to positions at interface                   */
/* variable (32 bit)                                                                              */
#define CJ125_CHIPERROR_SHIFT           (6-0)   /* bit0...3 errors                                */
#define CJ125_CHIPERROR_UPDATE_SHIFT    (31-7)  /* bit 8 shifted to bit 31                        */

/* commands for the spi communication                                                             */
#define CJ125_NUM_RD_IDENT              0x4800
#define CJ125_NUM_RD_DIAG               0x7800

#define CJ125_NUM_WR_INIT1              0x5600
#define CJ125_NUM_RD_INIT1              0x6C00

#define CJ125_NUM_WR_INIT2              0x5A00
#define CJ125_NUM_RD_INIT2              0x7E00


#define CJ125_INIT_SEQ_LEN              4

#define CJ125_RD_DIAG_SEQ_LEN           1
#define CJ125_RD_DIAG_SEQ               \
        CJ125_NUM_RD_DIAG

/*--------------------------------------------------------------------------------------------------
 * Type definitions
 *--------------------------------------------------------------------------------------------------
 */
/* This struct contains internal data which is necessary for each Cj125 1 time                    */
typedef struct
{
    const uint8 ctSendDiag_cu8;              /* number of process-calls after DiagSeq is sent     */
    const uint8 ctSendRdMode_cu8;            /* number of process-calls after RdModeSeq is sent   */
}Cj125_ConstChipInfo_t;

typedef struct
{
    uint16  dSystemTimeLastDeb_u16;          /* system timer value of last process scheduling     */
    uint8   ctProcCall_Dia_u8;               /* process-call counter for cyclic sending           */
    uint8   ctProcCall_RdMode_u8;            /* process-call counter for cyclic sending           */
    bit     ActRegAccWrite_b;                /* 1... send RegAccWrite Seq. on next process call   */
    bit     ActRegAccRead_b;                 /* 1... send RegAccRead  Seq. on next process call   */
}Cj125_VarChipInfo_t;

/*--------------------------------------------------------------------------------------------------
 * Externals
 *--------------------------------------------------------------------------------------------------
 */

/* ************************************************************************************* */
/* Use this block if the chip errors will be reported to the DSM - START                 */
/* ************************************************************************************* */
/* DSM                                                                                   */
/* extern const DSM_DFCType *         DFC_Cj125_SpiCom_cs [];                            */
/* ************************************************************************************* */
/* Use this block if the chip errors will be reported to the DSM - END                   */
/* ************************************************************************************* */

/* struct which contains information about the chip                                               */
__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Cj125_ConstChipInfo_t      Cj125_ConstChipInfo_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END
__PRAGMA_USE__hwe__10ms__InitRAM__s16__START
extern       Cj125_VarChipInfo_t        Cj125_VarChipInfo_s[];
__PRAGMA_USE__hwe__10ms__InitRAM__s16__END

/* sequences for access to the 2 init register                                                    */
__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t               Cj125_InitRegSeq_cs[];

/* MCJ125_RdDia                                                                                   */
extern const Spi_SeqDef_t               Cj125_ReadDiagSeq_cs[];

/* MCJ125_RdDia                                                                                   */
extern const Spi_SeqDef_t               Cj125_RdModeRegSeq_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

/* Variable containing the diagnostic information of the signals of CJ125                         */
__PRAGMA_USE__hwe__10ms__InitRAM__arr8__START
extern uint8    Cj125_DiagSig_u8[];
__PRAGMA_USE__hwe__10ms__InitRAM__arr8__END

__PRAGMA_USE__hwe__10ms__RAM__arr8__START
extern uint8  Cj125_ctComErr_u8[];
extern uint8  Cj125_ctPeriCheck_au8[];
extern bool   Cj125_stComErrHeal_b[];
extern bool   Cj125_stIniTx_b[];
__PRAGMA_USE__hwe__10ms__RAM__arr8__END

__PRAGMA_USE__hwe__10ms__RAM__arr16__START
extern uint16 Cj125_cpTxBuf_u16[];
__PRAGMA_USE__hwe__10ms__RAM__arr16__END

/* hwe-internal functions                                                                         */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cj125_EvalDia( uint ChipNr_ui );
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* _CJ125_PRIV_H                                                                                  */
#endif
