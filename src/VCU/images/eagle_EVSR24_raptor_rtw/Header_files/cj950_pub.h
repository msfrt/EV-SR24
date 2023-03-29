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
 * $Filename__:cj950_pub.h$ 
 * 
 * $Author____:EHF2SI$ 
 * 
 * $Function__:first new version$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:YTU1HC$ 
 * $Date______:04.01.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:cj950_pub$ 
 * $Variant___:1.4.1$ 
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
 * 1.4.1; 0     04.01.2016 YTU1HC
 *   Version 1 checking for cj950 report file correction
 *   RQONE00765706
 * 
 * 1.3.1; 0     13.08.2013 KHA4KOR
 *   correct variant
 * 
 * 1.3.0; 1     07.08.2013 KHA4KOR
 *   addition of global structure variable
 * 
 * 1.3.0; 0     14.11.2012 EHF2SI
 *   new interface, fixes
 * 
 * 1.2.0; 1     26.05.2011 MZW2FE
 *   Additiona interface for MoCSOP Cj950 for bit ABE_IMPACT
 * 
 * 1.2.0; 0     23.05.2011 MZW2FE
 *   new interface for MoCSOP added
 * 
 * 1.0.2; 0     10.02.2011 EHF2SI
 *   change definition in pub.h for CONREG4.6
 * 
 * 1.0.0; 1     28.10.2010 EHF2SI
 *   adaptations
 * 
 * 1.0.0; 0     21.09.2010 EHF2SI
 *   new created
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CJ950_PUB_H
#define _CJ950_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Peripheral module driver for the CJ950, this driver has no interface function to
 * the driving software.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define CJ950_TEST_UPPER_THRESHOLD   (0x80 << CJ950_DATA_OFFSET)      /* testmode on, OV error is latched, OV threshold */
#define CJ950_TEST_LOWER_THRESHOLD   (0xC0 << CJ950_DATA_OFFSET)      /* testmode on, OV error is latched, UV threshold */
#define CJ950_TEST_RESET_THRESHOLD   (0x20 << CJ950_DATA_OFFSET)      /* testmode off, overvoltage error is not latched */
#define CJ950_TEST_NORMAL_THRESHOLD  (0xA0 << CJ950_DATA_OFFSET)      /* testmode off, overvoltage error is latched     */
#define CJ950_VMT_MSK                0xE3ED                          /* mask for deleting the vmt relevant bits        */
#define CJ950_VMT_DIA6_OFF           0                               /* offset for DiaReg6 in VMT-Sequence             */
#define CJ950_VMT_DIA7_OFF           1                               /* offset for DiaReg7 in VMT-Sequence             */

/*

 ***************************************************************************************************
 * Format of a Command-Frame
 ***************************************************************************************************

              Data (CD7...0)            Command C(4...0)
     |<----------------------------->|<----------------->|
     +---+---+---+---+---+---+---+---+---+---+---+---+---+
     |   |   |   |   |   |   |   |   |   |   |   |   |   |
     |   |   |   |   |   |   |   |   |   |   |   |   |   |
     +---+---+---+---+---+---+---+---+---+---+---+---+---+
 */
#define CJ950_DATA_OFFSET    5           /* necessary shift value for access to the data part      */
/*
 ***************************************************************************************************
 * Read-Data-Command
 ***************************************************************************************************
 */
#define CJ950_RD_DIAGREG1    0x1013
#define CJ950_RD_DIAGREG2    0x0813
#define CJ950_RD_DIAGREG3    0x0413
#define CJ950_RD_DIAGREG4    0x0213
#define CJ950_RD_DIAGREG5    0x0113
#define CJ950_RD_DIAGREG6    0x0093      /* this register contains the ABE-Pin-Status              */
#define CJ950_RD_DIAGREG7    0x0053      /* this register contains the Over-/Undervoltage errors   */

#define CJ950_RD_IDENTREG    0x0033

/*
 ***************************************************************************************************
 * Read-Config-Command
 ***************************************************************************************************
 */
#define CJ950_RD_CONREG1     0x1010
#define CJ950_RD_CONREG2     0x0810
#define CJ950_RD_CONREG3     0x0410
#define CJ950_RD_CONREG4     0x0210
#define CJ950_RD_OUT1516     0x0110
#define CJ950_RD_CURMON1     0x0090
#define CJ950_RD_CURMON2     0x0050
/* #define CJ950_RD_GENCONF     0x0030 --> Register reserved in first HW versions */

/*
 ***************************************************************************************************
 * Write-Command-Frame
 ***************************************************************************************************
 */
#define CJ950_WR_CONREG1     0x0001
#define CJ950_WR_CONREG2     0x0002
#define CJ950_WR_CONREG3     0x0004
#define CJ950_WR_CONREG4     0x000D
#define CJ950_WR_OUT1516     0x0007
#define CJ950_WR_RESET       0x0008
#define CJ950_WR_START       0x000B
#define CJ950_WR_GENCONF     0x000E



/**************************************************************************************************/
/* necessary defines for "new" pwr module which supports several modules (e.g. CJ950, CJ945)       */
/**************************************************************************************************/
#define CJ950_REG_ABE_OFFSET  CJ950_VMT_DIA6_OFF
#define CJ950_REG_OV_OFFSET   CJ950_VMT_DIA7_OFF
#define CJ950_REG_UV_OFFSET   CJ950_VMT_DIA7_OFF
#define CJ950_VMT_BUFF_LEN    2               /* number of entries for each chip in the VMT-buffer */

/* bitposition and bitmask for access to bits in register DIAREG6+7 via Pwr_GetStatcon-Interface  */
#define CJ950_PRESENT
#define CJ950_VMT_BP_ABE      CJ950_REG_ABE_OFFSET, 3
#define CJ950_VMT_MSK_ABE     1
#define CJ950_VMT_BP_OV       CJ950_REG_OV_OFFSET, 5
#define CJ950_VMT_MSK_OV      1
#define CJ950_VMT_BP_UV       CJ950_REG_UV_OFFSET, 6
#define CJ950_VMT_MSK_UV      1
#define CJ950_VMT_BP_OUTSTBY  CJ950_VMT_DIA6_OFF, 0
#define CJ950_VMT_MSK_OUTSTBY 1
#define CJ950_VMT_BP_POR      CJ950_VMT_DIA6_OFF, 2
#define CJ950_VMT_MSK_POR     1
#define CJ950_VMT_BP_DIS1     CJ950_VMT_DIA6_OFF, 6
#define CJ950_VMT_MSK_DIS1    1
#define CJ950_VMT_BP_DIS2     CJ950_VMT_DIA6_OFF, 7
#define CJ950_VMT_MSK_DIS2    1
/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/* This struct contains variable internal data which is necessary for each CJ950 1 time            */
typedef struct
{
    uint16 dSystemTimeLastDebPVMT_u16;          /* time of last debounce of PVMT errors           */
    uint16 dSystemTimeLastDeb_u16;              /* time of last debounce of COM/SPI error         */
    uint8  ctProcCall_Dia_u8;                   /* process-call counter for cyclic sending        */
    bool    ActScbSeq_b;                         /* 1... send Scb-mode Seq. on next process call   */
    bool    ActOlSeq_b;                          /* Send diag curr enable or disable on next process call */
} CJ950_VarChipInfo_t;

/* function-pointer for switching-off the powerstages                                             */
typedef struct
{
    void (*CJ950_DioFunc_pf)(bool);
} CJ950_ShutOffFunc_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void   Cj950_Proc               (void);
extern void   Cj950_Proc_Ini           (void);
extern void   Cj950_Proc_ReInit        (void);
extern bool   Cj950_ReqRdDiagReg       (void);
extern uint32 Cj950_ShutOffPwrStg      (void);
extern uint32  Cj950_CheckPmError       (uint32 ctChipIDX_u32);
extern uint32 Cj950_ScbMode            (uint32 xChip_u32, uint32 dPowerStage_u32, uint32 dMode_u32);
extern void   Cj950_SwitchOff          (uint16 xChip_u16, uint16 xStage_u16, bool xnotUsed_b);
extern uint8   Cj950_EvalDiagReg        (uint16 xRelChipIdx_u16, uint16 xRegOffset_u16, uint16 xBitPos_u16, uint16 xBitMask_u16);
extern uint8   Cj950_Pvmt               (uint32 dCmdTxRamTest_u32, uint32 xMode_u32);
extern void   Cj950_DioSet             (uint16 numChip_u16, uint16 numPwstg_u16, bool stValue_b);
extern void   Cj950_DioSetBitField1516 (uint32 numChip_u32, uint32 xMask_b32, uint32 stValues_b32);
extern uint32  Cj950_DioGetBitField1516 (uint32 numChip_u32, uint32 xMask_b32);
extern void   Cj950_ClearErr           (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint32 Cj950_GetErrorInfo       (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint32 Cj950_TstImp             (uint16 numChip_u16, uint16 numPwstg_u16);
extern void   Cj950_PwmPpty            (uint16 numChip_u16, uint16 numPwstg_u16, uint32 tiLow_u32, uint32 tiHigh_u32);
extern void   Cj950_DioPpty            (uint16 numChip_u16, uint16 numPwstg_u16, bool stValue_b);
extern uint8  Cj950_Diag_OLcurr_SwOff  (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint8  Cj950_Diag_OLcurr_SwOn   (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint8  Cj950_ActvtOvLd_SwOff    (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint8  Cj950_ActvtOvLd_CurrLimit(uint16 numChip_u16, uint16 numPwstg_u16);
extern bool   Cj950_GetState           (uint16 numChip_u16, uint16 numPwstg_u16);
extern uint8   Cj950_GetStatconAll      (uint16 xShreda_u16, uint16 xShredb_u16, uint16 xShredc_u16);

extern void   Cj950_SetAbeImpact       (uint16 xChip_u16,   bool   xValue_b );

__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__START
extern        uint32                   CJ950_stIniErr_b32[];
__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__END

/* _CJ950_PUB_H */
#endif
