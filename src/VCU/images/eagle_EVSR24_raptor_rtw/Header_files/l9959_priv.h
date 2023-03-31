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
 * $Filename__:l9959_priv.h$
 *
 * $Author____:ROG2SI$
 *
 * $Function__:initial version$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HRB5KOR$
 * $Date______:27.05.2014$
 * $Class_____:SWHDR$
 * $Name______:l9959_priv$
 * $Variant___:1.6.0$
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
 * 1.6.0; 1     27.05.2014 HRB5KOR
 *   Code review point implementation
 * 
 * 1.6.0; 0     08.05.2014 HRB5KOR
 *   Review Implementation
 * 
 * 1.4.4; 0     07.03.2013 ROG2SI
 *   SPI write HW bug fix
 *   Send each write register command 4 times 
 *   Read back register
 *   compare write with read data
 *   Redo 4 time register writing exact one time
 * 
 * 1.3.1; 0     26.09.2012 ROG2SI
 *   Bug fix of OL SwOff failure
 *   Resetting of internal variable to enable faster than 
 *   10ms on-off-switching
 * 
 * 1.3.0; 2     10.05.2012 ROG2SI
 *   test pulse timings specified by HW-responsible
 * 
 * 1.3.0; 1     27.04.2012 ROG2SI
 *   Test pulse adaptions for OLDA 
 *   2nd foward and free wheeling phase added
 *   locating of config data corrected
 * 
 * 1.3.0; 0     04.04.2012 ROG2SI
 *   Adaptions to HW C-Sample
 * 
 * 1.2.1; 1     18.01.2012 ROG2SI
 *   rework of of long period counter handling
 * 
 * 1.2.1; 0     17.01.2012 ROG2SI
 *   Bug fix for restart of long period counter in case of off-on transistion
 * 
 * 1.1.1; 0     12.09.2011 ROG2SI
 *   Pragma corrections
 *   Port pushing corrected
 *   PVMT interface pushing to Pwr only if monitoring is enabled
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef _L9959_PRIV_H
#define _L9959_PRIV_H

#ifndef L9959_NOT_USED
/* Control interface */
#define L9959_GETSTATE_OFF      0x00
#define L9959_GETSTATE_ON       0x01
#define L9959_GETSTATE_ERR      0xFF

/* SPI  */
#define L9959_CHECK_BYTE_MASK   0x3E00      /* mask for the received checkbytes                   */
#define L9959_CHECK_BYTE_VALUE  0x2A00      /* value of the checkbytes                            */

/* PVMT values */
#define L9959_VMT_ALL_DEV       PWR_VMT_ALL_CHIPS

/* PMD values */
#define L9959_DIA1_REG_INI      0xCF        /* Bit 4 and 5 = 0 keep alive */
#define L9959_DIA2_REG_INI      0xFF        /* Bit 4 = 1       keep alive */

/* masks and values for Var0 .. Var1 special usage bits */
#define L9959_DIA1_REG_MSK      0x30
#define L9959_DIA1_REG_VAL      0x00
#define L9959_DIA2_REG_MSK      0x10
#define L9959_DIA2_REG_VAL      0x10

#define L9959_COM_ERRCTR_LIMIT  10u

/* GetErrorInfo modes */
#define L9959_DIAGINFO_NORM     TRUE
#define L9959_DIAGINFO_TSTPUL   FALSE

#define L9959_10MS_IN_US        10000u

/* Stage timings */
#define L9959_TSTPUL_DDIS_US                20u     /* Delay disable    12,5us * 1,5 Sicherheit = 18,75 ca. 20 */
#define L9959_TSTPUL_SWOFF_EXTENT           2000u   /* time for retest if device is switch off extent enable time */

/* test pulse timing confirmed by HW */
#define L9959_MIN_WIDTH_TO_DETECT_SCG_US    43u
#define L9959_MIN_WIDTH_TO_DETECT_SCB_US    43u
#define L9959_MIN_WIDTH_TO_DETECT_OL_US     43u
#define L9959_MIN_WIDTH_TO_DETECT_SCL_US    87u
#define L9959_MIN_WIDTH_TO_DETECT_ERR_US    135u    /* Test pulse length 87 * 1,5 = approx. 135 */  
#define L9959_TSTPUL_DEN_US                 75u     /* 50us * 1,5 reenable wait time */
#define L9959_SWOFFOLHWTIME                 24u     /* wait 230ms for secure end of OL diagnostic in switch off mode */
#define L9959_SWOFFMINTIME                   2u     /* wait 10ms  for secure end of SC diagnostic in switch off mode */

#define L9959_TSTPUL_ENDISR_US    (L9959_MIN_WIDTH_TO_DETECT_ERR_US+L9959_TSTPUL_DEN_US)

/* defines for tested flags */
#define L9959_TESTEDFLAG_SCB1           0x01    /* short to U battery - OUT1     */
#define L9959_TESTEDFLAG_SCG1           0x02    /* short to Ground    - OUT1     */
#define L9959_TESTEDFLAG_SCB2           0x04    /* short to U battery - OUT2     */
#define L9959_TESTEDFLAG_SCG2           0x08    /* short to Ground    - OUT2     */
#define L9959_TESTEDFLAG_SCL            0x10    /* Short circuit over load       */
#define L9959_TESTEDFLAG_OL             0x20    /* Open Load                     */
#define L9959_TESTEDFLAG_OT             0x40    /* Over Temperature              */

#define L9959_TESTEDFLAG_VAL            (L9959_TESTEDFLAG_SCB1  | \
                                         L9959_TESTEDFLAG_SCG1  | \
                                         L9959_TESTEDFLAG_SCB2  | \
                                         L9959_TESTEDFLAG_SCG2  | \
                                         L9959_TESTEDFLAG_SCL   | \
                                         L9959_TESTEDFLAG_OL    | \
                                         L9959_TESTEDFLAG_OT)

#define L9959_TESTEDFLAG_WITHOUT_OL_VAL (L9959_TESTEDFLAG_SCB1  | \
                                         L9959_TESTEDFLAG_SCG1  | \
                                         L9959_TESTEDFLAG_SCB2  | \
                                         L9959_TESTEDFLAG_SCG2  | \
                                         L9959_TESTEDFLAG_SCL   | \
                                         L9959_TESTEDFLAG_OT)

#define L9959_TESTEDFLAG_SHIFT          16u
#define L9959_ERR_NEW_SHIFT             16u

/* defines for the stage errors */
#define L9959_ERR_SCB1_VAL               HBR_GEI_ERR_SCB1_MSK   /* short to U battery - OUT1     */
#define L9959_ERR_SCG1_VAL               HBR_GEI_ERR_SCG1_MSK   /* short to Ground    - OUT1     */
#define L9959_ERR_SCB2_VAL               HBR_GEI_ERR_SCB2_MSK   /* short to U battery - OUT2     */
#define L9959_ERR_SCG2_VAL               HBR_GEI_ERR_SCG2_MSK   /* short to Ground    - OUT2     */
#define L9959_ERR_SCL_VAL                HBR_GEI_ERR_SCOL_MSK   /* Short circuit over load       */
#define L9959_ERR_OL_VAL                 HBR_GEI_ERR_OL_MSK     /* Open Load                     */
#define L9959_ERR_OT_VAL                 HBR_GEI_ERR_OT_MSK     /* Over Temperature              */
#define L9959_ERR_UV_VAL                 HBR_GEI_ERR_UV_MSK     /* Under Voltage                 */
#define L9959_ERR_CurrLim_VAL            HBR_GEI_ERR_CL_MSK     /* Current Limited               */
#define L9959_ERR_CurrRed_VAL            HBR_GEI_ERR_CR_MSK     /* Current Reduction             */
#define L9959_ERR_COM_VAL                HBR_GEI_ERR_COM_MSK    /* Communication error           */
#define L9959_ERR_NEW_VAL                0x8000u                /* new value indication          */

#define L9959_ENDISR_ERR_MSK            (L9959_ERR_SCB1_VAL      | \
                                         L9959_ERR_SCG1_VAL      | \
                                         L9959_ERR_SCB2_VAL      | \
                                         L9959_ERR_SCG2_VAL      | \
                                         L9959_ERR_SCL_VAL       | \
                                         L9959_ERR_OT_VAL        | \
                                         L9959_ERR_OL_VAL)
                                         
#define L9959_ERR_VAL                   (L9959_ERR_SCB1_VAL      | \
                                         L9959_ERR_SCG1_VAL      | \
                                         L9959_ERR_SCB2_VAL      | \
                                         L9959_ERR_SCG2_VAL      | \
                                         L9959_ERR_SCL_VAL       | \
                                         L9959_ERR_OL_VAL        | \
                                         L9959_ERR_OT_VAL        | \
                                         L9959_ERR_UV_VAL        | \
                                         L9959_ERR_CurrLim_VAL   | \
                                         L9959_ERR_CurrRed_VAL   | \
                                         L9959_ERR_COM_VAL)

/* defines for the  xDiagFlags_u8 */
#define L9959_STAGEFLAG_SWOFFDIAG_ABB   0x01   /* BIT 0 SwitchOff diag aborted     */     
#define L9959_STAGEFLAG_SWOFFDIAG_REQ   0x02   /* BIT 1 switchOff diag requested   */ 
#define L9959_STAGEFLAG_TSTABORTED      0x08   /* BIT 3 test pulse aborted         */
#define L9959_STAGEFLAG_TSTREQ          0x10   /* BIT 4 test pulse requested       */
#define L9959_STAGEFLAG_TSTRUN          0x20   /* BIT 5 test pulse running         */
#define L9959_STAGEFLAG_TSTFIN          0x40   /* BIT 6 test pulse finished        */
#define L9959_STAGEFLAG_NEW             0x80   /* BIT 7 test pulse new info        */

#define L9959_STAGEFLAG_MASK            (L9959_STAGEFLAG_SWOFFDIAG_ABB    | \
                                         L9959_STAGEFLAG_SWOFFDIAG_REQ    | \
                                         L9959_STAGEFLAG_TSTABORTED       | \
                                         L9959_STAGEFLAG_TSTREQ           | \
                                         L9959_STAGEFLAG_TSTRUN           | \
                                         L9959_STAGEFLAG_TSTFIN           | \
                                         L9959_STAGEFLAG_NEW)    
                                         
#define L9959_STAGEFLAG_SHIFT           24u

#define L9959_OL_TEST_ERRFLAG           0x00200020
/*************************************************************************************************/
/* L9959 Register masks and values                                                               */
/*************************************************************************************************/
#define L9959_CONFIG_OLDA_MSK           0x01
#define L9959_CONFIG_OLDA_VAL           0x01

#define L9959_CONFIG_FW_MSK             0x80
#define L9959_CONFIG_FW_VAL             0x80

#define L9959_DIAREG1_ERR_MSK           0x7F
#define L9959_DIAREG1_NO_ERR_VAL        0x7F

#define L9959_DIAREG1_DIS_BP            7u
#define L9959_DIAREG1_DIS_MSK           0x80
#define L9959_DIAREG1_DIS_VAL           0x00

#define L9959_DIAREG1_OT_MSK            0x40
#define L9959_DIAREG1_OT_VAL            0x00

#define L9959_DIAREG1_SCG1_VAL          0x01    /* Short ciruit to ground  on OUT1          */
#define L9959_DIAREG1_SCG2_VAL          0x02    /* Short ciruit to ground  on OUT2          */
#define L9959_DIAREG1_SCB1_VAL          0x05    /* Short ciruit to battery on OUT1          */
#define L9959_DIAREG1_SCB2_VAL          0x06    /* Short ciruit to battery on OUT2          */
#define L9959_DIAREG1_SCL_VAL           0x07    /* Short ciruit over the load               */
#define L9959_DIAREG1_SCB_VAL           0x08    /* Short ciruit to batt   at disabled stage */
#define L9959_DIAREG1_SCG_VAL           0x09    /* Short ciruit to ground at disabled stage */
#define L9959_DIAREG1_OL_VAL            0x0A    /* open load                                */
#define L9959_DIAREG1_UV_VAL            0x0D    /* under voltage                            */
#define L9959_DIAREG1_NO_ERR            0x0F    /* no error                                 */

#define L9959_DIAREG2_CURRL_BP          0x06    /* Current limitation                       */
#define L9959_DIAREG2_CURRR_BP          0x07    /* Current reduction temperatur depended    */

#define L9959_DIAREG2_CURRL_MSK         (1<<L9959_DIAREG2_CURRL_BP)
#define L9959_DIAREG2_CURRR_MSK         (1<<L9959_DIAREG2_CURRR_BP)

/* state queue length 20 */
#define L9959_STATE_QUEUE_LENGHT        20
#define L9959_QUEUE_INI {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

/*************************************************************************************************/
/* L9959 states                                                                                  */
/*************************************************************************************************/
typedef enum
{
    L9959_INI,                      /* L9959 in ini state */
	L9959_SWITCH_ON,                /* DIS low device on   */
    L9959_SWITCH_OFF_ACTDEB,        /* DIS high device off actuator not yet debounced      */
    L9959_SWITCH_OFF_ACTDEB_REST,   /* DIS high device off actuator not yet debounced      */
    L9959_SWITCH_OFF,               /* DIS high device off actuator         debounced once */
    L9959_SWITCH_OFF_OL,            /* Reenable during switch off for repeated OL diag */
    L9959_MON_SWITCH_ON,            /* Monitor  device on   */
    L9959_MON_SWITCH_OFF,           /* Monitor  device off  */
    L9959_ENDISR_REQ,               /* Enable Disable Reset DIS needed*/
    L9959_ENDISR_RUN,               /* Enable Disable Reset */
    L9959_ENDISR_END,               /* Transmit after ENDISR */
    L9959_TSTPULSE_REQ,             /* Test pulse requested                         */
    L9959_TSTPULSE_STRT,            /* Test pulse start, monitoring start ignored   */
    L9959_TSTPULSE_FWD_CTRL_1,      /* Test pulse forward control first phase of test pulse */
    L9959_TSTPULSE_FW_LOW_1,        /* Test pulse free wheeling  */
    L9959_TSTPULSE_FWD_CTRL_2,      /* Test pulse forward control first phase of test pulse */
    L9959_TSTPULSE_FW_LOW_2,        /* Test pulse free wheeling  */
    L9959_TSTPULSE_REV_CTRL,        /* Test pulse reverse control  */
    L9959_TSTPULSE_FW_LOW_3,        /* Test pulse free wheeling  */
    L9959_TSTPULSE_END              /* last  phase of test pulse */
}L9959_States_t;

typedef enum
{
    L9959_QUEUE_ENTRY_DEFAULT,
    L9959_QUEUE_ENTRY_SWITCH_ON,
    L9959_QUEUE_ENTRY_SWITCH_OFF,
    L9959_QUEUE_ENTRY_SWITCH_OFF_OL,
    L9959_QUEUE_ENTRY_SWITCH_OFF_OL_END,
    L9959_QUEUE_ENTRY_MON_START,
    L9959_QUEUE_ENTRY_MON_STOP,
    L9959_QUEUE_ENTRY_MON_SWITCH_ON,
    L9959_QUEUE_ENTRY_MON_SWITCH_OFF,
    L9959_QUEUE_ENTRY_REQ_TSTPLS,
    L9959_QUEUE_ENTRY_EXE_TSTPLS,
    L9959_QUEUE_ENTRY_RX,
    L9959_QUEUE_ENTRY_TX,
	L9959_QUEUE_ENTRY_REQ_ENDISR,
    L9959_QUEUE_ENTRY_RUN_ENDISR,
    L9959_QUEUE_ENTRY_GETERROR
}L9959_QEntries_t;

typedef struct
{
    uint8   numPort_u8 ;    /* port number */
    uint8   numPin_u8;      /* pin  number */
} L9959_PinConf_t;

typedef struct
{
    L9959_PinConf_t *   adrPwm_ps;          /* port_pin name for PWM line */
    L9959_PinConf_t *   adrDir_ps;          /* port_Pin name for DIR line */
    L9959_PinConf_t *   adrDis_ps;          /* port_pin name for DIS line */
    Gpta_PwmGen_Mode_t  gptaMode_e ;        /* enum struct to hol        */
    uint16              nrConfOLSwOff_u16;  /* wait time in 10ms steps*/
    uint8               gptaType_u8;        /* gpta type                  */
    uint8               cellNum_u8;         /* cell number                */
	bool                monEnbl_b;          /* monitor enable config      */
} L9959_StageConf_t;

typedef struct
{
    uint32   tiPerUs_u32;   /* requested period duration in us               */
    sint16   ratDty_s16;    /* dty cyc: 7FFF..0     100%..0                  */
                            /*          8000..FFFF -100%..0,066% = (1/2^15)% */
}L9959_PwmGenBuf_t;

typedef struct
{
    L9959_PwmGenBuf_t   xPwmBuf_s;
    uint16              cntrOLSwOff_u16;        /* open load switch off counter      */
    uint16              nrOLSwOff_u16;          /* end value for ol switch off count */
    L9959_States_t      state_e;
    L9959_States_t      stTstPlsRstState_e;
	L9959_States_t      stIniState_e;           /* Initial device state */
	L9959_QEntries_t    stateQueue_ae[L9959_STATE_QUEUE_LENGHT];
    uint8               idxQueueRd_u8;
    uint8               idxQueueWr_u8;
    bool                isStateBusy_b;
    bool                isOLSwOffErr_b;
    bool                isPermSwOffErr_b;
}L9959_StageData_t;

typedef struct
{
    uint16          xErrPhase_u16[3];       /* contains the errors in the three different phases */
    uint16          cntr_PerTsk_u16;        /* switch period counter */
    uint16          xMaxPer_NumTsk_u16;     /* max number of 10ms task to be debounced */
    uint16          xLstValPerTsk_u16;      /* last valid value */
    uint8           xDiagFlags_u8;          /* stage state for _GetErrorInfo() does NOT control any L9959 state machine */
    /* variables to pass the testable error cases aka "tested flags" though all debouncing phases */
    uint8           xTestedPhase_u8[4];      /* Tested flags phases */
    uint8           cntrCurrRed_u8;         /* HW weakpoint*/
    bool            isPerCntEnabled_b;      /* controls long period counting */
} L9959_DiagData_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern L9959_StageData_t L9959_StageData_as[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

__PRAGMA_USE__hwe__10ms__RAM__x8__START
extern uint8 L9959_xValidDataRead_u8;
extern uint8 L9959_nrDevSwOffOL_u8;
extern bool L9959_isPmdTimerEngage_b;
__PRAGMA_USE__hwe__10ms__RAM__x8__END

__PRAGMA_USE__hwe__10ms__RAM__x32__START
extern uint32  L9959_nrChipCurrTstPul_u32;
__PRAGMA_USE__hwe__10ms__RAM__x32__END

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern L9959_DiagData_t L9959_DiagData_s[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START
extern uint8 L9959_DiaReg1Mirror_u8[L9959_NUM_ICS];
extern uint8 L9959_DiaReg2Mirror_u8[L9959_NUM_ICS];
extern uint8 L9959_StatconMirror_u8[L9959_NUM_ICS];
/*-----------------------------------------------*/
/* Variable of workaround for SPI HW bug         */
/*-----------------------------------------------*/
extern uint8 L9959_cntrTx_u8[L9959_NUM_ICS];
extern bool  L9959_stSpiHwBug_b[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__arr8__START
extern uint8 L9959_config_value_au8[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__InitRAM__arr8__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr16__START
extern uint16 L9959_TstPul_DiagReg_u16[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__RAM__arr16__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__START
extern uint8 L9959_ctComErr_u8[L9959_NUM_ICS];
extern bool  L9959_stComErrHeal_b[L9959_NUM_ICS];
__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr32__START
extern uint32  L9959_TstPul_DiagData_u32[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__RAM__arr32__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t L9959_RdRevSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_RdIdSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_WrDiagSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_WrDiagBugSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_WrStatSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_WrStatBugSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_TogConfigSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_TogConfigBugSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_RdConfigSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_WrConfigSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_WrConfigBugSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_DiagSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_MonRdStatconSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_MonStatconSeq_cs[L9959_NUM_ICS];
extern const Spi_SeqDef_t L9959_MonStatconBugSeq_cs[L9959_NUM_ICS];

extern const Spi_SeqDef_t L9959_MonRdDiagSeq_cs[L9959_NUM_ICS];
extern const L9959_StageConf_t L9959_ConfData_acs[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__START
extern L9959_PinConf_t L9959_PinConfPwm_as[L9959_NUM_ICS];
extern L9959_PinConf_t L9959_PinConfDir_as[L9959_NUM_ICS];
extern L9959_PinConf_t L9959_PinConfDis_as[L9959_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void L9959_DiagReg_Eval(uint32 numDevIdx_u32);
extern bool L9959_SetQueueEntry(uint32 numDevIdx_u32, L9959_QEntries_t  QueueEntry);
extern bool L9959_GetQueueEntry(uint32 numDevIdx_u32, L9959_QEntries_t *QueueEntry);
extern void L9959_StateMachine(uint32 numDevIdx_u32);
extern void L9959_Ppty(uint32 numDevIdx_u32);
extern void L9959_RdDiag_SPICallBk(uint32 numDevIdx_u32);
extern void L9959_MonStatcon_SPICallBk(uint32 numDevIdx_u32);
extern void L9959_TstPulse_End(uint32 numDevIdx_u32);
extern void L9959_TstPulse_Analysis(uint32 numDevIdx_u32);
extern void L9959_TstPulse_ToglDis(void);
/* HW work around*/
extern void L9959_OL_ToglDis(void);
extern void L9959_TstPulse_Exe(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END


#endif
#endif
