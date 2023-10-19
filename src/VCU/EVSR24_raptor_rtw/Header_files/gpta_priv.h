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
 * $Filename__:gpta_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GS72FE$
 * $Date______:07.02.2011$
 * $Class_____:SWHDR$
 * $Name______:gpta_priv$
 * $Variant___:1.16.0$
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
 * 1.16.0; 1     07.02.2011 GS72FE
 *   RCMS00957044: GPTA: Add support for machine type TC1724
 *   RCMS00968739: GPTA: Merge customer specific TOG changes into GPTA package
 * 
 * 1.16.0; 0     26.01.2011 GS72FE
 *   first GPTA.1.16.0 revision includuding preliminary TOG changes
 * 
 * 1.14.0; 2     14.06.2010 GS72FE
 *   adding TC1793 support, adding Gpta_PwmGen_Rslvr() interface
 * 
 * 1.14.0; 1     10.06.2010 GS72FE
 *   removing MISRA warnings
 * 
 * 1.14.0; 0     09.06.2010 GS72FE
 *   RCMS00917932: merge GPTA_SD changes from ClearCase
 * 
 * 1.13.0; 1     08.06.2010 GS72FE
 *   merge GPTA_PWM_GEN changes from ClearCase
 * 
 * 1.13.0; 0     24.11.2009 AWL2SI
 *   B_GPTA.13.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _GPTA_PRIV_H
#define _GPTA_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              This is the GPTA module.
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
// #include "gpta_prot.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define GPTA_GTC_INIT(chan,cr,cx) {(cr),((cx) & 0xFFFFFF)} /* limit to 24 bit */
#define GPTA_LTC_INIT(chan,cr,cx) {cr,cx}
#define GPTA_SRC_INIT(chan,val)   {val}


/**************************************************************************************************/
/* ASC emulation macros                                                                           */
/**************************************************************************************************/

/* interface to PCP macros                                                                        */
#define GPTA_LST_TISTMP_MARK_POS   31

#define GPTA_ASCEMU_TXIDLE_POS      0
#define GPTA_ASCEMU_TXIDLE_LEN      1
#define GPTA_ASCEMU_RXIDLE_POS      0
#define GPTA_ASCEMU_RXIDLE_LEN      1

#define GPTA_ASCEMU_TXSOF_POS       1
#define GPTA_ASCEMU_TXSOF_LEN       1
#define GPTA_ASCEMU_RXSOF_POS       1
#define GPTA_ASCEMU_RXSOF_LEN       1

/* interface macros for Gpta_CalcPrty() function                                                  */
#define GPTA_EVEN_PARITY           TRUE
#define GPTA_ODD_PARITY            FALSE

/* ASC emulation: total number of data frame bits macros (including SOF bit)                      */
#define GPTA_ASC_NOMODE_NUMBITS     0
#define GPTA_ASC_EVEN7D1S_NUMBITS  10
#define GPTA_ASC_ODD7D1S_NUMBITS   10
#define GPTA_ASC_8D1S_NUMBITS      10
#define GPTA_ASC_8D2S_NUMBITS      11
#define GPTA_ASC_EVEN8D1S_NUMBITS  11
#define GPTA_ASC_ODD8D1S_NUMBITS   11
#define GPTA_ASC_4D1S_NUMBITS       6
#define GPTA_ASC_7D1S_NUMBITS       9

/****************************/
/*         GPTA_SD          */
/****************************/
/* Normalization Factors for Timer Frequency                                 */
/* e.g. 2,5 Mhz / 1 Mhz = GTCFREQ / INPUTFREQ_MAX                            */
/* GTCFREQ = <Frequency of GTx>                                              */
/* INPUTFREQ_MAX = <Maxmimum Frequency of Input Signal> (Optimal 2^x)        */
#define GPTA_SD_FACT1                   5
#define GPTA_SD_DIVISOR                 2
/* TimerGT0_overflow = (1s / 1000000Hz) * (2^16-1) * 2500000Hz = 0x27FFE     */
#define GPTA_SD_CLOCKED_OVFTHD 0x00027FFEul
/* max LTCXR ticks: 16 bit (@ 400 ns like GT0)                               */
#define GPTA_SD_GATED_OVFTHD  0x0000FFFFul

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* GPTA configutation structure                                                                   */
typedef struct
{
  uint32 FPCCTR0;                 /* GPTA Filter and Prescaler Cell Control Register 0            */
  uint32 FPCTIM0;                 /* GPTA Filter and Prescaler Cell Timer Register 0              */
  uint32 FPCCTR1;                 /* GPTA Filter and Prescaler Cell Control Register 1            */
  uint32 FPCTIM1;                 /* GPTA Filter and Prescaler Cell Timer Register 1              */
  uint32 FPCCTR2;                 /* GPTA Filter and Prescaler Cell Control Register 2            */
  uint32 FPCTIM2;                 /* GPTA Filter and Prescaler Cell Timer Register 2              */
  uint32 FPCCTR3;                 /* GPTA Filter and Prescaler Cell Control Register 3            */
  uint32 FPCTIM3;                 /* GPTA Filter and Prescaler Cell Timer Register 3              */
  uint32 FPCCTR4;                 /* GPTA Filter and Prescaler Cell Control Register 4            */
  uint32 FPCTIM4;                 /* GPTA Filter and Prescaler Cell Timer Register 4              */
  uint32 FPCCTR5;                 /* GPTA Filter and Prescaler Cell Control Register 5            */
  uint32 FPCTIM5;                 /* GPTA Filter and Prescaler Cell Timer Register 5              */
  uint32 PDLCTR;                  /* GPTA Phase Discrimination Logic Control Register             */
  uint32 DCMCTR0;                 /* GPTA Duty Cycle Measurement Control Register 0               */
  uint32 DCMTIM0;                 /* GPTA Duty Cycle Measurement Timer Register 0                 */
  uint32 DCMCAV0;                 /* GPTA Duty Cycle Measurement Capture Register 0               */
  uint32 DCMCOV0;                 /* GPTA Duty Cycle Measurement Capture/Compare Register 0       */
  uint32 DCMCTR1;                 /* GPTA Duty Cycle Measurement Control Register 1               */
  uint32 DCMTIM1;                 /* GPTA Duty Cycle Measurement Timer Register 1                 */
  uint32 DCMCAV1;                 /* GPTA Duty Cycle Measurement Capture Register 1               */
  uint32 DCMCOV1;                 /* GPTA Duty Cycle Measurement Capture/Compare Register 1       */
  uint32 DCMCTR2;                 /* GPTA Duty Cycle Measurement Control Register 2               */
  uint32 DCMTIM2;                 /* GPTA Duty Cycle Measurement Timer Register 2                 */
  uint32 DCMCAV2;                 /* GPTA Duty Cycle Measurement Capture Register 2               */
  uint32 DCMCOV2;                 /* GPTA Duty Cycle Measurement Capture/Compare Register 2       */
  uint32 DCMCTR3;                 /* GPTA Duty Cycle Measurement Control Register 3               */
  uint32 DCMTIM3;                 /* GPTA Duty Cycle Measurement Timer Register 3                 */
  uint32 DCMCAV3;                 /* GPTA Duty Cycle Measurement Capture Register 3               */
  uint32 DCMCOV3;                 /* GPTA Duty Cycle Measurement Capture/Compare Register 3       */
  uint32 PLLCTR;                  /* GPTA Phase Locked Loop Control Register                      */
  uint32 PLLMTI;                  /* GPTA Phase Locked Loop Micro Tick Register                   */
  uint32 PLLCNT;                  /* GPTA Phase Locked Loop Counter Register                      */
  uint32 PLLSTP;                  /* GPTA Phase Locked Loop Step Register                         */
  uint32 PLLREV;                  /* GPTA Phase Locked Loop Reload Register                       */
  uint32 PLLDTR;                  /* GPTA Phase Locked Loop Delta Register                        */
  uint32 CKBCTR;                  /* GPTA Clock Bus Control Register                              */
  uint32 GTCTR0;                  /* GPTA Global Timer Control Register 0                         */
  uint32 GTREV0;                  /* GPTA Global Timer Reload Value Register 0                    */
  uint32 GTTIM0;                  /* GPTA Global Timer Register 0                                 */
  uint32 GTCTR1;                  /* GPTA Global Timer Control Register 1                         */
  uint32 GTREV1;                  /* GPTA Global Timer Reload Value Register 1                    */
  uint32 GTTIM1;                  /* GPTA Global Timer Register 1                                 */
} Gpta_Conf_t;

/* private TOG type */
typedef struct
{
    uint8 numPort_u8;                   /* TOG port number     */
    uint8 numPin_u8;                    /* TOG pin number      */
} Gpta_TogConf_t;

/* private ASCEMUL type, holding all AscEmul variables to be modified during runtime              */
typedef struct
{
    uint16 tiAscBaudPer_u16;            /* period duration of one bit depending on baud rate      */
    uint16 tiUpLim_u16;                 /* upper limit of ASCEMUL bit duration                    */
    uint16 tiLoLim_u16;                 /* lower limit of ASCEMUL bit duration                    */
    uint8  xAscMode_u8;                 /* ASC mode selected by user                              */
    uint8  numBitPrFrm_u8;              /* number of bits per ASC frame                           */
} Gpta_AscEmulPriv_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/* Gpta_PwmGen */
__PRAGMA_USE__gpta__10ms__constant__s32__START
extern Gpta_PwmGen_Conf_t  const Gpta_PwmGen_Conf_ca[];
extern Gpta_PwmGen_Rslvr_t const Gpta_PwmGen_Rslvr_ca[];
__PRAGMA_USE__gpta__10ms__constant__s32__END

/* SD evaluation */
__PRAGMA_USE__CODE__gpta__LowSpeed__START
extern void Gpta_Sd_Proc_Ini(void);
__PRAGMA_USE__CODE__gpta__LowSpeed__END
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern void Gpta_Sd_Proc_10ms(void);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END
__PRAGMA_USE__gpta__10ms__constant__s32__START
extern const Gpta_SdCfg_t Gpta_Sd_Cfg_ca[];
__PRAGMA_USE__gpta__10ms__constant__s32__END

/* TOG evaluation                                                                                 */
#ifdef GPTA_TOG_SWIRQ
__PRAGMA_USE__CODE__gpta__HighSpeed__START
extern void     Gpta_TogEval       (void);
__PRAGMA_USE__CODE__gpta__HighSpeed__END
__PRAGMA_USE__gpta__1_5ms__RAM__x32__START
extern          uint32             Gpta_tiRefTog_u32;
extern          uint32             Gpta_tiTempTog_u32;
extern          uint32             Gpta_tiHtgTog_u32;
extern          uint32             Gpta_tiClgTog_u32;
extern          uint32             Gpta_tiSymLst_u32;
extern          uint32             Gpta_tiUpdLst_u32;
__PRAGMA_USE__gpta__1_5ms__RAM__x32__END
__PRAGMA_USE__gpta__1_5ms__RAM__x8__START
extern          uint8              Gpta_ctTimeTemp_u8;
extern          uint8              Gpta_ctTimeRef_u8;
#if ( GPTA_TOGSEL_SC != FALSE )
extern          uint8              Gpta_ctTogConSym_u8;
#endif
__PRAGMA_USE__gpta__1_5ms__RAM__x8__END
__PRAGMA_USE__gpta__1_5ms__InitRAM__x8__START
extern          bool               Gpta_swNewTogData_b;
extern          bool               Gpta_swToutEvt_b;
__PRAGMA_USE__gpta__1_5ms__InitRAM__x8__END

#endif

/* ASC emulation                                                                                  */
__PRAGMA_USE__CODE__gpta__HighSpeed__START
extern void     Gpta_AscRx(void);
__PRAGMA_USE__CODE__gpta__HighSpeed__END
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern uint32 Gpta_TxDataInitPrty(uint32 xData_u32, bool stPrty_b, uint32 numPcpBits_u32);
extern uint32 Gpta_TxDataInit(uint32 xData_u32, uint32 numPcpBits_u32);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END
__PRAGMA_USE__gpta__1_5ms__RAM__s32__START
extern          Gpta_AscEmulPriv_t Gpta_xAscEmulPriv_s;
__PRAGMA_USE__gpta__1_5ms__RAM__s32__END

__PRAGMA_USE__CODE__gpta__LowSpeed__START
extern void     Gpta_PreInitPhase(void);
extern void     Gpta_Gpta0_Ini(void);

#ifdef GPTA_GPTA1_PRS
extern void     Gpta_Gpta1_Ini(void);
#endif
#ifdef GPTA_LTCA2_PRS
extern void     Gpta_Ltca2_Ini(void);
#endif
__PRAGMA_USE__CODE__gpta__LowSpeed__END

__PRAGMA_USE__gpta__50ms_1s__constant__arr32__START
extern const    uint32             Gpta_Gpta0FifoConf_ca[54];  /* array to write to the I/O mux   */
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__END
__PRAGMA_USE__gpta__50ms_1s__constant__s32__START
extern const    Gpta_GtcImageObj_t Gpta_Gpta0GtcImage_ca[32];  /* GPTA0 GTC configuration data    */
extern const    Gpta_LtcImageObj_t Gpta_Gpta0LtcImage_ca[64];  /* GPTA0 LTC configuration data    */
extern const    Gpta_Conf_t        Gpta_Gpta0CellConf_cs;      /* various GPTA0 config info       */
__PRAGMA_USE__gpta__50ms_1s__constant__s32__END

#ifdef GPTA_GPTA1_PRS
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__START
extern const    uint32             Gpta_Gpta1FifoConf_ca[54];  /* array to write to the I/O mux   */
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__END
__PRAGMA_USE__gpta__50ms_1s__constant__s32__START
extern const    Gpta_GtcImageObj_t Gpta_Gpta1GtcImage_ca[32];  /* GPTA1 GTC configuration data    */
extern const    Gpta_LtcImageObj_t Gpta_Gpta1LtcImage_ca[64];  /* GPTA1 LTC configuration data    */
extern const    Gpta_Conf_t        Gpta_Gpta1CellConf_cs;      /* various GPTA1 config info       */
__PRAGMA_USE__gpta__50ms_1s__constant__s32__END
#endif
#ifdef GPTA_LTCA2_PRS
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__START
extern const uint32             Gpta_Ltca2FifoConf_ca[];    /* array for write the I/O mux     */
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__END
__PRAGMA_USE__gpta__50ms_1s__constant__s32__START
extern const Gpta_LtcImageObj_t Gpta_Ltca2LtcImage_ca[];    /* LTCA2 LTC configuration data    */
__PRAGMA_USE__gpta__50ms_1s__constant__s32__END
#endif

__PRAGMA_USE__gpta__50ms_1s__constant__arr32__START
extern volatile uint32* const      Gpta_GtcPreInitReqAdr_ca[]; /* GTC cells with init action      */
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__END
__PRAGMA_USE__gpta__50ms_1s__constant__arr8__START
extern const    uint8              Gpta_GtcPreInitReqVal_ca[];
__PRAGMA_USE__gpta__50ms_1s__constant__arr8__END
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__START
extern volatile uint32* const      Gpta_LtcPreInitReqAdr_ca[]; /* LTC cells with init action      */
__PRAGMA_USE__gpta__50ms_1s__constant__arr32__END
__PRAGMA_USE__gpta__50ms_1s__constant__arr8__START
extern const    uint8              Gpta_LtcPreInitReqVal_ca[];
__PRAGMA_USE__gpta__50ms_1s__constant__arr8__END

/* _GPTA_PRIV_H                                                                                   */
#endif
