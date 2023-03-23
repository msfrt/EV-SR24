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
 * $Filename__:gpta_template_conf.ht$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GS72FE$
 * $Date______:04.11.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:gpta_template_conf$
 * $Variant___:1.15.0$
 * $Revision__:0$
 * $Type______:HT$
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
 * 1.15.0; 0     04.11.2010 GS72FE
 *   RCMS00957034 - GPTA: Add support for machine type TC1793
 *   
 *   Additional change:
 *   - add pre-release support for TC1724
 *   Minor changes:
 *   - beautify PDLCTR output in gpta_report.txt
 *   - GPTA_PININTR_GTNUM adjustment in gpta_confrules.xml
 *   - GPTA_CKBLINE_REQ adjustment of plaus check in gpta_main.pm
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
 * 1.13.1; 1     08.06.2010 GS72FE
 *   merge GPTA_PWM_GEN changes from ClearCase
 * 
 * 1.13.1; 0     18.02.2010 GS72FE
 *   Contents:
 *   RCMS00698876: GPTA: Wrong MUX setting for P4.0-3 inputs on TC1782
 *   RCMS00701688: GPTA: swb breaks with an eror message when a GPTA_SD signal 
 *   is configured
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: gpta_template_conf.ht
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef _GPTA_AUTO_CONF_H
#define _GPTA_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Automatically generated configuration headerfile of GPTA module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* common sub-structure for local timer cells (LTC) */
typedef GPTA0_LTC_t GPTA_LTC_t;

/* common sub-structure for global timer cells (GTC) */
typedef GPTA0_GTC_t GPTA_GTC_t;

/****************************/
/*         GPTA_SD          */
/****************************/
typedef enum Gpta_Sd_Mode_en
{
    GPTA_SD_DUMMY_E,
    GPTA_SD_CLOCKED_E,
    GPTA_SD_GATED_E,
    GPTA_SD_MODE_MAX_E
} Gpta_Sd_Mode_t;

typedef struct
{
    uint32               tiOvfThd_u32;       /* overflow threshold value depending on mode        */
    uint32               tiGt0_u32;          /* Global Timer value from last call                 */
    uint16               tiTimer_u16;        /* Local Timer value from last call                  */
    uint16               numOnes_u16;        /* calculated Value                                  */
    Gpta_Sd_Mode_t       swtMode_en;         /* acquisition mode of this channel                  */
    bool                 stFrstInv_b;        /* first call of SigmaDelta                          */
} Gpta_SdPriv_t;

typedef struct
{
    GPTA_LTC_t*     const regLtc_pst;        /* Pointer to Value register of Ltc                  */
    Gpta_SdPriv_t*  const xSdRuntimeData_ps; /* Pointer to Runtime Data Structure                 */
    real32          const facCorr_cf;        /* clocked mode correction factor from configuration */
    uint32          const regLtcClocked_u32; /* LTCCTR init value for clocked mode                */
    uint32          const regLtcGated_u32;   /* LTCCTR init value for gated mode                  */
    uint8           const xSdPort_u8;        /* Port number                                       */
    uint8           const xSdPin_u8;         /* Pin number                                        */
} Gpta_SdCfg_t;

/*********************************/
/*         GPTA_PWM_GEN          */
/*********************************/
#define GPTA_NUM_PWMGEN 3

typedef enum Gpta_PwmGen_e
{
    HBR_ThrVlv_O_T,
    HBR_ThrVlv2_O_T,
    HBR_ThrVlv3_O_T,
    GPTA_PWMGEN_NUMSIG_E
} Gpta_PwmGen_t;



typedef enum Gpta_PwmGen_Err_e
{
    GPTA_PWMGEN_NO_ERROR_E = 0,
    GPTA_PWMGEN_DUTY_VIO_E,
    GPTA_PWMGEN_MINPER_VIO_E,
    GPTA_PWMGEN_MAXPER_VIO_E,
    GPTA_PWMGEN_PERD_OVRFLW_E,
    GPTA_PWMGEN_MODE_UNKNWN_E,
    GPTA_PWMGEN_SIG_RNG_E,
    GPTA_PWMGEN_ERR_MAX_E                 /* always last element */
} Gpta_PwmGen_Err_t;

typedef enum Gpta_PwmGen_Mode_e
{
    GPTA_PWMGEN_PWM4_E,
    GPTA_PWMGEN_MODEMAX_E
} Gpta_PwmGen_Mode_t;

typedef struct
{
    Gpta_PwmGen_Mode_t const xMode_cen;
    uint8              const xGpta_cu8;
    uint8              const xNum_cu8;
    Gpta_PwmGen_t      const xType_cen;
} Gpta_PwmGen_Rslvr_t;

typedef struct Gpta_PwmGen_Tmp_st         /* structure for temporal parameter storage */
{
    uint32            tiPerUs_u32;        /* requested pulse duration in us     */
    sint16            ratDty_s16;         /* requested duty cycle in percent    */
    uint16            tiPerTicks_u16;     /* generated cycle period in ticks    */
    uint16            tiPlsTicks_u16;     /* generated pulse duration in ticks  */
    Gpta_PwmGen_Err_t stErr_en;           /* error information                  */
} Gpta_PwmGen_Buf_t;

/* MISRA RULE 18.4 VIOLATION: a union is useful here to save resources */
typedef union Gpta_adrCell_un             /* union is used to cover both LTC and GTC addresses */
{
  void*       adrInit_pv;                 /* dummy entry for initialisation purposes           */
  GPTA_LTC_t* adrLtc_pst;                 /* pointer to LTC type                               */
  GPTA_GTC_t* adrGtc_pst;                 /* pointer to GTC type                               */
} Gpta_adrCell_t;


typedef struct Gpta_PwmGen_Conf_st
{
    Gpta_adrCell_t     const adrCell_cun;     /* union is used to cover both LTC & GTC addresses  */
    Gpta_PwmGen_Buf_t* const adrBuffer_cpst;  /* pointer to temporary buffer                      */
    uint32 volatile*   const adrCbSrc_cpu32;  /* pointer to SRC register in case callback is used */
    uint32             const tiMinPerUs_u32;  /* lower period boundary                            */
    uint32             const tiMaxPerUs_u32;  /* upper period boundary                            */
    Gpta_PwmGen_Mode_t const swtMode_cen;     /* generation mode                                  */
    uint8              const facDiv_cu8;      /* divisor for period ticks calculation             */
    bool               const swtInv_cb;       /* inversion switch                                 */
} Gpta_PwmGen_Conf_t;

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define GPTAv4               4
#define GPTAv5               5

#define GPTA_GPTA0_MRA_CNT   54
#define GPTA_GPTA0_PRS       TRUE
#define GPTA_GPTA0_NUMLTCS   64
#define GPTA_GPTA0_NUMGTCS   32
#define GPTA_GPTA1_MRA_CNT   54
#define GPTA_GPTA1_PRS       TRUE
#define GPTA_GPTA1_NUMLTCS   64
#define GPTA_GPTA1_NUMGTCS   32
#define GPTA_LTCA2_MRA_CNT   32
#define GPTA_LTCA2_PRS       TRUE
#define GPTA_LTCA2_NUMLTCS   64
#define GPTA_LTCA2_NUMGTCS   0
#define GPTA_RVSN            GPTAv5

#define GPTA0_SRNR  0x0000D000ul
#define GPTA1_SRNR  0x000000F0ul
#define GPTA_GTC_AR_SIZE 9
#define GPTA_LTC_AR_SIZE 0

/* user #defines for GPTA0.FPC0 */
#define EPMHCAS1_FILTER_FPC_GPTA       0
#define EPMHCAS1_FILTER_FPC_NUM        0
#define EPMHCAS1_FILTER_FPC_CTR        GPTA0.FPCCTR0
#define EPMHCAS1_FILTER_FPC_TIM        GPTA0.FPCTIM0
#define EPMHCAS1_FILTER_FPC_STAT       GPTA0.FPCSTAT
#define EPMHCAS1_FILTER_FPC_STAT_BPREG 0
#define EPMHCAS1_FILTER_FPC_STAT_BPFEG 8
/* user #defines for GPTA0.FPC4 */
#define EPMHCRS_FILTER_FPC_GPTA       0
#define EPMHCRS_FILTER_FPC_NUM        4
#define EPMHCRS_FILTER_FPC_CTR        GPTA0.FPCCTR4
#define EPMHCRS_FILTER_FPC_TIM        GPTA0.FPCTIM4
#define EPMHCRS_FILTER_FPC_STAT       GPTA0.FPCSTAT
#define EPMHCRS_FILTER_FPC_STAT_BPREG 4
#define EPMHCRS_FILTER_FPC_STAT_BPFEG 12
/* user #defines for GPTA0.FPC5 */
#define EPMHCRS_PLAUS_FPC_GPTA       0
#define EPMHCRS_PLAUS_FPC_NUM        5
#define EPMHCRS_PLAUS_FPC_CTR        GPTA0.FPCCTR5
#define EPMHCRS_PLAUS_FPC_TIM        GPTA0.FPCTIM5
#define EPMHCRS_PLAUS_FPC_STAT       GPTA0.FPCSTAT
#define EPMHCRS_PLAUS_FPC_STAT_BPREG 5
#define EPMHCRS_PLAUS_FPC_STAT_BPFEG 13
/* macro set for GPTA0.1 */
#define I_F_ECUK018_GPTA     0
#define I_F_ECUK018_NUM      1
#define I_F_ECUK018_CTR      GPTA0.DCMCTR1
#define I_F_ECUK018_TIM      GPTA0.DCMTIM1
#define I_F_ECUK018_CAV      GPTA0.DCMCAV1
#define I_F_ECUK018_COV      GPTA0.DCMCOV1
#define I_F_ECUK018_SRSC     GPTA0.SRSC0
#define I_F_ECUK018_SRSS     GPTA0.SRSS0
#define I_F_ECUK018_SRS_BPR  3
#define I_F_ECUK018_SRS_BPF  4
#define I_F_ECUK018_SRS_BPC  5

/* macro set for GPTA0.2 */
#define I_F_ECUK052_GPTA     0
#define I_F_ECUK052_NUM      2
#define I_F_ECUK052_CTR      GPTA0.DCMCTR2
#define I_F_ECUK052_TIM      GPTA0.DCMTIM2
#define I_F_ECUK052_CAV      GPTA0.DCMCAV2
#define I_F_ECUK052_COV      GPTA0.DCMCOV2
#define I_F_ECUK052_SRSC     GPTA0.SRSC0
#define I_F_ECUK052_SRSS     GPTA0.SRSS0
#define I_F_ECUK052_SRS_BPR  6
#define I_F_ECUK052_SRS_BPF  7
#define I_F_ECUK052_SRS_BPC  8

/* macro set for GPTA0.3 */
#define EPMHCRS_PERIOD_DCM_GPTA     0
#define EPMHCRS_PERIOD_DCM_NUM      3
#define EPMHCRS_PERIOD_DCM_CTR      GPTA0.DCMCTR3
#define EPMHCRS_PERIOD_DCM_TIM      GPTA0.DCMTIM3
#define EPMHCRS_PERIOD_DCM_CAV      GPTA0.DCMCAV3
#define EPMHCRS_PERIOD_DCM_COV      GPTA0.DCMCOV3
#define EPMHCRS_PERIOD_DCM_SRSC     GPTA0.SRSC0
#define EPMHCRS_PERIOD_DCM_SRSS     GPTA0.SRSS0
#define EPMHCRS_PERIOD_DCM_SRS_BPR  9
#define EPMHCRS_PERIOD_DCM_SRS_BPF  10
#define EPMHCRS_PERIOD_DCM_SRS_BPC  11

/* user #defines for GPTA0.GTC0 */
#define INJHPFI_GTC_CH1_GPTA     0
#define INJHPFI_GTC_CH1_NUM      0
#define INJHPFI_GTC_CH1_CTR      GPTA0.GTC[0].GTCCTR
#define INJHPFI_GTC_CH1_XR       GPTA0.GTC[0].GTCXR
#define INJHPFI_GTC_CH1_STRUCT   GPTA0.GTC[0]
#define INJHPFI_GTC_CH1_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH1_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH1_SRS_BP   0
#define INJHPFI_GTC_CH1_SRN_CTR  GPTA0.SRC06
#define INJHPFI_GTC_CH1_SRN_NUM  6

/* user #defines for GPTA0.GTC2 */
#define INJHPFI_GTC_CH3_GPTA     0
#define INJHPFI_GTC_CH3_NUM      2
#define INJHPFI_GTC_CH3_CTR      GPTA0.GTC[2].GTCCTR
#define INJHPFI_GTC_CH3_XR       GPTA0.GTC[2].GTCXR
#define INJHPFI_GTC_CH3_STRUCT   GPTA0.GTC[2]
#define INJHPFI_GTC_CH3_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH3_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH3_SRS_BP   2
#define INJHPFI_GTC_CH3_SRN_CTR  GPTA0.SRC07
#define INJHPFI_GTC_CH3_SRN_NUM  7

/* user #defines for GPTA0.GTC4 */
#define INJHPFI_GTC_CH7_GPTA     0
#define INJHPFI_GTC_CH7_NUM      4
#define INJHPFI_GTC_CH7_CTR      GPTA0.GTC[4].GTCCTR
#define INJHPFI_GTC_CH7_XR       GPTA0.GTC[4].GTCXR
#define INJHPFI_GTC_CH7_STRUCT   GPTA0.GTC[4]
#define INJHPFI_GTC_CH7_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH7_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH7_SRS_BP   4
#define INJHPFI_GTC_CH7_SRN_CTR  GPTA0.SRC08
#define INJHPFI_GTC_CH7_SRN_NUM  8

/* user #defines for GPTA0.GTC8 */
#define O_F_ECUA046_GPTA     0
#define O_F_ECUA046_NUM      8
#define O_F_ECUA046_CTR      GPTA0.GTC[8].GTCCTR
#define O_F_ECUA046_XR       GPTA0.GTC[8].GTCXR
#define O_F_ECUA046_STRUCT   GPTA0.GTC[8]
#define O_F_ECUA046_SRSC     GPTA0.SRSC1
#define O_F_ECUA046_SRSS     GPTA0.SRSS1
#define O_F_ECUA046_SRS_BP   8
#define O_F_ECUA046_SRN_CTR  GPTA0.SRC10
#define O_F_ECUA046_SRN_NUM  10

/* user #defines for GPTA0.GTC10 */
#define INJHPFI_GTC_CH5_GPTA     0
#define INJHPFI_GTC_CH5_NUM      10
#define INJHPFI_GTC_CH5_CTR      GPTA0.GTC[10].GTCCTR
#define INJHPFI_GTC_CH5_XR       GPTA0.GTC[10].GTCXR
#define INJHPFI_GTC_CH5_STRUCT   GPTA0.GTC[10]
#define INJHPFI_GTC_CH5_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH5_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH5_SRS_BP   10
#define INJHPFI_GTC_CH5_SRN_CTR  GPTA0.SRC11
#define INJHPFI_GTC_CH5_SRN_NUM  11

/* user #defines for GPTA0.GTC14 */
#define MSC_MSC0_GPTA_US_TOUT_GPTA     0
#define MSC_MSC0_GPTA_US_TOUT_NUM      14
#define MSC_MSC0_GPTA_US_TOUT_CTR      GPTA0.GTC[14].GTCCTR
#define MSC_MSC0_GPTA_US_TOUT_XR       GPTA0.GTC[14].GTCXR
#define MSC_MSC0_GPTA_US_TOUT_STRUCT   GPTA0.GTC[14]
#define MSC_MSC0_GPTA_US_TOUT_SRSC     GPTA0.SRSC1
#define MSC_MSC0_GPTA_US_TOUT_SRSS     GPTA0.SRSS1
#define MSC_MSC0_GPTA_US_TOUT_SRS_BP   14
#define MSC_MSC0_GPTA_US_TOUT_SRN_CTR  GPTA0.SRC13
#define MSC_MSC0_GPTA_US_TOUT_SRN_NUM  13

/* user #defines for GPTA0.GTC15 */
#define MSC_MSC1_GPTA_US_TOUT_GPTA     0
#define MSC_MSC1_GPTA_US_TOUT_NUM      15
#define MSC_MSC1_GPTA_US_TOUT_CTR      GPTA0.GTC[15].GTCCTR
#define MSC_MSC1_GPTA_US_TOUT_XR       GPTA0.GTC[15].GTCXR
#define MSC_MSC1_GPTA_US_TOUT_STRUCT   GPTA0.GTC[15]
#define MSC_MSC1_GPTA_US_TOUT_SRSC     GPTA0.SRSC1
#define MSC_MSC1_GPTA_US_TOUT_SRSS     GPTA0.SRSS1
#define MSC_MSC1_GPTA_US_TOUT_SRS_BP   15
#define MSC_MSC1_GPTA_US_TOUT_SRN_CTR  GPTA0.SRC13
#define MSC_MSC1_GPTA_US_TOUT_SRN_NUM  13

/* user #defines for GPTA0.GTC24 */
#define KNDET_CELL_GPTA     0
#define KNDET_CELL_NUM      24
#define KNDET_CELL_CTR      GPTA0.GTC[24].GTCCTR
#define KNDET_CELL_XR       GPTA0.GTC[24].GTCXR
#define KNDET_CELL_STRUCT   GPTA0.GTC[24]
#define KNDET_CELL_SRSC     GPTA0.SRSC1
#define KNDET_CELL_SRSS     GPTA0.SRSS1
#define KNDET_CELL_SRS_BP   24
#define KNDET_CELL_SRN_CTR  GPTA0.SRC18
#define KNDET_CELL_SRN_NUM  18

/* user #defines for GPTA0.GTC25 */
#define INJHPFI_GTC_CH0_GPTA     0
#define INJHPFI_GTC_CH0_NUM      25
#define INJHPFI_GTC_CH0_CTR      GPTA0.GTC[25].GTCCTR
#define INJHPFI_GTC_CH0_XR       GPTA0.GTC[25].GTCXR
#define INJHPFI_GTC_CH0_STRUCT   GPTA0.GTC[25]
#define INJHPFI_GTC_CH0_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH0_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH0_SRS_BP   25
#define INJHPFI_GTC_CH0_SRN_CTR  GPTA0.SRC34
#define INJHPFI_GTC_CH0_SRN_NUM  34

/* user #defines for GPTA0.GTC28 */
#define INJHPFI_GTC_CH2_GPTA     0
#define INJHPFI_GTC_CH2_NUM      28
#define INJHPFI_GTC_CH2_CTR      GPTA0.GTC[28].GTCCTR
#define INJHPFI_GTC_CH2_XR       GPTA0.GTC[28].GTCXR
#define INJHPFI_GTC_CH2_STRUCT   GPTA0.GTC[28]
#define INJHPFI_GTC_CH2_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH2_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH2_SRS_BP   28
#define INJHPFI_GTC_CH2_SRN_CTR  GPTA0.SRC20
#define INJHPFI_GTC_CH2_SRN_NUM  20

/* user #defines for GPTA0.GTC29 */
#define INJHPFI_GTC_CH4_GPTA     0
#define INJHPFI_GTC_CH4_NUM      29
#define INJHPFI_GTC_CH4_CTR      GPTA0.GTC[29].GTCCTR
#define INJHPFI_GTC_CH4_XR       GPTA0.GTC[29].GTCXR
#define INJHPFI_GTC_CH4_STRUCT   GPTA0.GTC[29]
#define INJHPFI_GTC_CH4_SRSC     GPTA0.SRSC1
#define INJHPFI_GTC_CH4_SRSS     GPTA0.SRSS1
#define INJHPFI_GTC_CH4_SRS_BP   29
#define INJHPFI_GTC_CH4_SRN_CTR  GPTA0.SRC36
#define INJHPFI_GTC_CH4_SRN_NUM  36

/* user #defines for GPTA0.GTC30 */
#define EPMHCRS_TIME_STAMP_GTC_GPTA     0
#define EPMHCRS_TIME_STAMP_GTC_NUM      30
#define EPMHCRS_TIME_STAMP_GTC_CTR      GPTA0.GTC[30].GTCCTR
#define EPMHCRS_TIME_STAMP_GTC_XR       GPTA0.GTC[30].GTCXR
#define EPMHCRS_TIME_STAMP_GTC_STRUCT   GPTA0.GTC[30]
#define EPMHCRS_TIME_STAMP_GTC_SRSC     GPTA0.SRSC1
#define EPMHCRS_TIME_STAMP_GTC_SRSS     GPTA0.SRSS1
#define EPMHCRS_TIME_STAMP_GTC_SRS_BP   30
#define EPMHCRS_TIME_STAMP_GTC_SRN_CTR  GPTA0.SRC21
#define EPMHCRS_TIME_STAMP_GTC_SRN_NUM  21

/* user #defines for GPTA0.GTC31 */
#define EPMHCRS_TIMEOUT_GTC_GPTA     0
#define EPMHCRS_TIMEOUT_GTC_NUM      31
#define EPMHCRS_TIMEOUT_GTC_CTR      GPTA0.GTC[31].GTCCTR
#define EPMHCRS_TIMEOUT_GTC_XR       GPTA0.GTC[31].GTCXR
#define EPMHCRS_TIMEOUT_GTC_STRUCT   GPTA0.GTC[31]
#define EPMHCRS_TIMEOUT_GTC_SRSC     GPTA0.SRSC1
#define EPMHCRS_TIMEOUT_GTC_SRSS     GPTA0.SRSS1
#define EPMHCRS_TIMEOUT_GTC_SRS_BP   31
#define EPMHCRS_TIMEOUT_GTC_SRN_CTR  GPTA0.SRC37
#define EPMHCRS_TIMEOUT_GTC_SRN_NUM  37

/* user #defines for GPTA1.GTC8 */
#define IGNH_CHL0_GPTA     1
#define IGNH_CHL0_NUM      8
#define IGNH_CHL0_CTR      GPTA1.GTC[8].GTCCTR
#define IGNH_CHL0_XR       GPTA1.GTC[8].GTCXR
#define IGNH_CHL0_STRUCT   GPTA1.GTC[8]
#define IGNH_CHL0_SRSC     GPTA1.SRSC1
#define IGNH_CHL0_SRSS     GPTA1.SRSS1
#define IGNH_CHL0_SRS_BP   8
#define IGNH_CHL0_SRN_CTR  GPTA1.SRC10
#define IGNH_CHL0_SRN_NUM  10

/* user #defines for GPTA1.GTC9 */
#define IGNH_CHL1_GPTA     1
#define IGNH_CHL1_NUM      9
#define IGNH_CHL1_CTR      GPTA1.GTC[9].GTCCTR
#define IGNH_CHL1_XR       GPTA1.GTC[9].GTCXR
#define IGNH_CHL1_STRUCT   GPTA1.GTC[9]
#define IGNH_CHL1_SRSC     GPTA1.SRSC1
#define IGNH_CHL1_SRSS     GPTA1.SRSS1
#define IGNH_CHL1_SRS_BP   9
#define IGNH_CHL1_SRN_CTR  GPTA1.SRC26
#define IGNH_CHL1_SRN_NUM  26

/* user #defines for GPTA1.GTC10 */
#define IGNH_CHL2_GPTA     1
#define IGNH_CHL2_NUM      10
#define IGNH_CHL2_CTR      GPTA1.GTC[10].GTCCTR
#define IGNH_CHL2_XR       GPTA1.GTC[10].GTCXR
#define IGNH_CHL2_STRUCT   GPTA1.GTC[10]
#define IGNH_CHL2_SRSC     GPTA1.SRSC1
#define IGNH_CHL2_SRSS     GPTA1.SRSS1
#define IGNH_CHL2_SRS_BP   10
#define IGNH_CHL2_SRN_CTR  GPTA1.SRC11
#define IGNH_CHL2_SRN_NUM  11

/* user #defines for GPTA1.GTC11 */
#define IGNH_CHL3_GPTA     1
#define IGNH_CHL3_NUM      11
#define IGNH_CHL3_CTR      GPTA1.GTC[11].GTCCTR
#define IGNH_CHL3_XR       GPTA1.GTC[11].GTCXR
#define IGNH_CHL3_STRUCT   GPTA1.GTC[11]
#define IGNH_CHL3_SRSC     GPTA1.SRSC1
#define IGNH_CHL3_SRSS     GPTA1.SRSS1
#define IGNH_CHL3_SRS_BP   11
#define IGNH_CHL3_SRN_CTR  GPTA1.SRC27
#define IGNH_CHL3_SRN_NUM  27

/* user #defines for GPTA1.GTC12 */
#define IGNH_CHL4_GPTA     1
#define IGNH_CHL4_NUM      12
#define IGNH_CHL4_CTR      GPTA1.GTC[12].GTCCTR
#define IGNH_CHL4_XR       GPTA1.GTC[12].GTCXR
#define IGNH_CHL4_STRUCT   GPTA1.GTC[12]
#define IGNH_CHL4_SRSC     GPTA1.SRSC1
#define IGNH_CHL4_SRSS     GPTA1.SRSS1
#define IGNH_CHL4_SRS_BP   12
#define IGNH_CHL4_SRN_CTR  GPTA1.SRC12
#define IGNH_CHL4_SRN_NUM  12

/* user #defines for GPTA1.GTC13 */
#define IGNH_CHL5_GPTA     1
#define IGNH_CHL5_NUM      13
#define IGNH_CHL5_CTR      GPTA1.GTC[13].GTCCTR
#define IGNH_CHL5_XR       GPTA1.GTC[13].GTCXR
#define IGNH_CHL5_STRUCT   GPTA1.GTC[13]
#define IGNH_CHL5_SRSC     GPTA1.SRSC1
#define IGNH_CHL5_SRSS     GPTA1.SRSS1
#define IGNH_CHL5_SRS_BP   13
#define IGNH_CHL5_SRN_CTR  GPTA1.SRC28
#define IGNH_CHL5_SRN_NUM  28

/* user #defines for GPTA1.GTC14 */
#define IGNH_CHL6_GPTA     1
#define IGNH_CHL6_NUM      14
#define IGNH_CHL6_CTR      GPTA1.GTC[14].GTCCTR
#define IGNH_CHL6_XR       GPTA1.GTC[14].GTCXR
#define IGNH_CHL6_STRUCT   GPTA1.GTC[14]
#define IGNH_CHL6_SRSC     GPTA1.SRSC1
#define IGNH_CHL6_SRSS     GPTA1.SRSS1
#define IGNH_CHL6_SRS_BP   14
#define IGNH_CHL6_SRN_CTR  GPTA1.SRC13
#define IGNH_CHL6_SRN_NUM  13

/* user #defines for GPTA1.GTC15 */
#define IGNH_CHL7_GPTA     1
#define IGNH_CHL7_NUM      15
#define IGNH_CHL7_CTR      GPTA1.GTC[15].GTCCTR
#define IGNH_CHL7_XR       GPTA1.GTC[15].GTCXR
#define IGNH_CHL7_STRUCT   GPTA1.GTC[15]
#define IGNH_CHL7_SRSC     GPTA1.SRSC1
#define IGNH_CHL7_SRSS     GPTA1.SRSS1
#define IGNH_CHL7_SRS_BP   15
#define IGNH_CHL7_SRN_CTR  GPTA1.SRC29
#define IGNH_CHL7_SRN_NUM  29

/* user #defines for GPTA1.GTC25 */
#define INJHPFI_GTC_CH6_GPTA     1
#define INJHPFI_GTC_CH6_NUM      25
#define INJHPFI_GTC_CH6_CTR      GPTA1.GTC[25].GTCCTR
#define INJHPFI_GTC_CH6_XR       GPTA1.GTC[25].GTCXR
#define INJHPFI_GTC_CH6_STRUCT   GPTA1.GTC[25]
#define INJHPFI_GTC_CH6_SRSC     GPTA1.SRSC1
#define INJHPFI_GTC_CH6_SRSS     GPTA1.SRSS1
#define INJHPFI_GTC_CH6_SRS_BP   25
#define INJHPFI_GTC_CH6_SRN_CTR  GPTA1.SRC18
#define INJHPFI_GTC_CH6_SRN_NUM  18

/* user #defines for GPTA0.LTC0 */
#define HBR_THRVLV_O_T_GPTA     0
#define HBR_THRVLV_O_T_NUM      0
#define HBR_THRVLV_O_T_CTR      GPTA0.LTC[0].LTCCTR
#define HBR_THRVLV_O_T_XR       GPTA0.LTC[0].LTCXR
#define HBR_THRVLV_O_T_STRUCT   GPTA0.LTC[0]
#define HBR_THRVLV_O_T_SRSC     GPTA0.SRSC2
#define HBR_THRVLV_O_T_SRSS     GPTA0.SRSS2
#define HBR_THRVLV_O_T_SRS_BP   0
#define HBR_THRVLV_O_T_SRN_CTR  GPTA0.SRC22
#define HBR_THRVLV_O_T_SRN_NUM  22

/* user #defines for GPTA0.LTC6 */
#define CJ135_SENSOR2_GPTA     0
#define CJ135_SENSOR2_NUM      6
#define CJ135_SENSOR2_CTR      GPTA0.LTC[6].LTCCTR
#define CJ135_SENSOR2_XR       GPTA0.LTC[6].LTCXR
#define CJ135_SENSOR2_STRUCT   GPTA0.LTC[6]
#define CJ135_SENSOR2_SRSC     GPTA0.SRSC2
#define CJ135_SENSOR2_SRSS     GPTA0.SRSS2
#define CJ135_SENSOR2_SRS_BP   6
#define CJ135_SENSOR2_SRN_CTR  GPTA0.SRC23
#define CJ135_SENSOR2_SRN_NUM  23

/* user #defines for GPTA0.LTC10 */
#define AdcI_Timer_TRIG16_GPTA     0
#define AdcI_Timer_TRIG16_NUM      10
#define AdcI_Timer_TRIG16_CTR      GPTA0.LTC[10].LTCCTR
#define AdcI_Timer_TRIG16_XR       GPTA0.LTC[10].LTCXR
#define AdcI_Timer_TRIG16_STRUCT   GPTA0.LTC[10]
#define AdcI_Timer_TRIG16_SRSC     GPTA0.SRSC2
#define AdcI_Timer_TRIG16_SRSS     GPTA0.SRSS2
#define AdcI_Timer_TRIG16_SRS_BP   10
#define AdcI_Timer_TRIG16_SRN_CTR  GPTA0.SRC24
#define AdcI_Timer_TRIG16_SRN_NUM  24

/* user #defines for GPTA0.LTC12 */
#define O_F_ECUA024_GPTA     0
#define O_F_ECUA024_NUM      12
#define O_F_ECUA024_CTR      GPTA0.LTC[12].LTCCTR
#define O_F_ECUA024_XR       GPTA0.LTC[12].LTCXR
#define O_F_ECUA024_STRUCT   GPTA0.LTC[12]
#define O_F_ECUA024_SRSC     GPTA0.SRSC2
#define O_F_ECUA024_SRSS     GPTA0.SRSS2
#define O_F_ECUA024_SRS_BP   12
#define O_F_ECUA024_SRN_CTR  GPTA0.SRC25
#define O_F_ECUA024_SRN_NUM  25

/* user #defines for GPTA0.LTC16 */
#define O_F_ECUA045_GPTA     0
#define O_F_ECUA045_NUM      16
#define O_F_ECUA045_CTR      GPTA0.LTC[16].LTCCTR
#define O_F_ECUA045_XR       GPTA0.LTC[16].LTCXR
#define O_F_ECUA045_STRUCT   GPTA0.LTC[16]
#define O_F_ECUA045_SRSC     GPTA0.SRSC2
#define O_F_ECUA045_SRSS     GPTA0.SRSS2
#define O_F_ECUA045_SRS_BP   16
#define O_F_ECUA045_SRN_CTR  GPTA0.SRC26
#define O_F_ECUA045_SRN_NUM  26

/* user #defines for GPTA0.LTC20 */
#define O_F_ECUA054_GPTA     0
#define O_F_ECUA054_NUM      20
#define O_F_ECUA054_CTR      GPTA0.LTC[20].LTCCTR
#define O_F_ECUA054_XR       GPTA0.LTC[20].LTCXR
#define O_F_ECUA054_STRUCT   GPTA0.LTC[20]
#define O_F_ECUA054_SRSC     GPTA0.SRSC2
#define O_F_ECUA054_SRSS     GPTA0.SRSS2
#define O_F_ECUA054_SRS_BP   20
#define O_F_ECUA054_SRN_CTR  GPTA0.SRC27
#define O_F_ECUA054_SRN_NUM  27

/* user #defines for GPTA0.LTC25 */
#define CJ135_SENSOR1_GPTA     0
#define CJ135_SENSOR1_NUM      25
#define CJ135_SENSOR1_CTR      GPTA0.LTC[25].LTCCTR
#define CJ135_SENSOR1_XR       GPTA0.LTC[25].LTCXR
#define CJ135_SENSOR1_STRUCT   GPTA0.LTC[25]
#define CJ135_SENSOR1_SRSC     GPTA0.SRSC2
#define CJ135_SENSOR1_SRSS     GPTA0.SRSS2
#define CJ135_SENSOR1_SRS_BP   25
#define CJ135_SENSOR1_SRN_CTR  GPTA0.SRC28
#define CJ135_SENSOR1_SRN_NUM  28

/* user #defines for GPTA0.LTC31 */
#define O_F_ECUA023_GPTA     0
#define O_F_ECUA023_NUM      31
#define O_F_ECUA023_CTR      GPTA0.LTC[31].LTCCTR
#define O_F_ECUA023_XR       GPTA0.LTC[31].LTCXR
#define O_F_ECUA023_STRUCT   GPTA0.LTC[31]
#define O_F_ECUA023_SRSC     GPTA0.SRSC2
#define O_F_ECUA023_SRSS     GPTA0.SRSS2
#define O_F_ECUA023_SRS_BP   31
#define O_F_ECUA023_SRN_CTR  GPTA0.SRC29
#define O_F_ECUA023_SRN_NUM  29

/* user #defines for GPTA0.LTC40 */
#define SPI_SSC0_GPTA_TIMER_GPTA     0
#define SPI_SSC0_GPTA_TIMER_NUM      40
#define SPI_SSC0_GPTA_TIMER_CTR      GPTA0.LTC[40].LTCCTR
#define SPI_SSC0_GPTA_TIMER_XR       GPTA0.LTC[40].LTCXR
#define SPI_SSC0_GPTA_TIMER_STRUCT   GPTA0.LTC[40]
#define SPI_SSC0_GPTA_TIMER_SRSC     GPTA0.SRSC3
#define SPI_SSC0_GPTA_TIMER_SRSS     GPTA0.SRSS3
#define SPI_SSC0_GPTA_TIMER_SRS_BP   8
#define SPI_SSC0_GPTA_TIMER_SRN_CTR  GPTA0.SRC32
#define SPI_SSC0_GPTA_TIMER_SRN_NUM  32

/* user #defines for GPTA0.LTC41 */
#define I_F_ECUK048_LTC0_GPTA     0
#define I_F_ECUK048_LTC0_NUM      41
#define I_F_ECUK048_LTC0_CTR      GPTA0.LTC[41].LTCCTR
#define I_F_ECUK048_LTC0_XR       GPTA0.LTC[41].LTCXR
#define I_F_ECUK048_LTC0_STRUCT   GPTA0.LTC[41]
#define I_F_ECUK048_LTC0_SRSC     GPTA0.SRSC3
#define I_F_ECUK048_LTC0_SRSS     GPTA0.SRSS3
#define I_F_ECUK048_LTC0_SRS_BP   9
#define I_F_ECUK048_LTC0_SRN_CTR  GPTA0.SRC32
#define I_F_ECUK048_LTC0_SRN_NUM  32

/* user #defines for GPTA0.LTC42 */
#define I_F_ECUK048_LTC1_GPTA     0
#define I_F_ECUK048_LTC1_NUM      42
#define I_F_ECUK048_LTC1_CTR      GPTA0.LTC[42].LTCCTR
#define I_F_ECUK048_LTC1_XR       GPTA0.LTC[42].LTCXR
#define I_F_ECUK048_LTC1_STRUCT   GPTA0.LTC[42]
#define I_F_ECUK048_LTC1_SRSC     GPTA0.SRSC3
#define I_F_ECUK048_LTC1_SRSS     GPTA0.SRSS3
#define I_F_ECUK048_LTC1_SRS_BP   10
#define I_F_ECUK048_LTC1_SRN_CTR  GPTA0.SRC32
#define I_F_ECUK048_LTC1_SRN_NUM  32

/* user #defines for GPTA0.LTC43 */
#define I_F_ECUK048_LTC2_GPTA     0
#define I_F_ECUK048_LTC2_NUM      43
#define I_F_ECUK048_LTC2_CTR      GPTA0.LTC[43].LTCCTR
#define I_F_ECUK048_LTC2_XR       GPTA0.LTC[43].LTCXR
#define I_F_ECUK048_LTC2_STRUCT   GPTA0.LTC[43]
#define I_F_ECUK048_LTC2_SRSC     GPTA0.SRSC3
#define I_F_ECUK048_LTC2_SRSS     GPTA0.SRSS3
#define I_F_ECUK048_LTC2_SRS_BP   11
#define I_F_ECUK048_LTC2_SRN_CTR  GPTA0.SRC32
#define I_F_ECUK048_LTC2_SRN_NUM  32

/* user #defines for GPTA0.LTC45 */
#define I_F_ECUA035_LTC0_GPTA     0
#define I_F_ECUA035_LTC0_NUM      45
#define I_F_ECUA035_LTC0_CTR      GPTA0.LTC[45].LTCCTR
#define I_F_ECUA035_LTC0_XR       GPTA0.LTC[45].LTCXR
#define I_F_ECUA035_LTC0_STRUCT   GPTA0.LTC[45]
#define I_F_ECUA035_LTC0_SRSC     GPTA0.SRSC3
#define I_F_ECUA035_LTC0_SRSS     GPTA0.SRSS3
#define I_F_ECUA035_LTC0_SRS_BP   13
#define I_F_ECUA035_LTC0_SRN_CTR  GPTA0.SRC33
#define I_F_ECUA035_LTC0_SRN_NUM  33

/* user #defines for GPTA0.LTC46 */
#define I_F_ECUA035_LTC1_GPTA     0
#define I_F_ECUA035_LTC1_NUM      46
#define I_F_ECUA035_LTC1_CTR      GPTA0.LTC[46].LTCCTR
#define I_F_ECUA035_LTC1_XR       GPTA0.LTC[46].LTCXR
#define I_F_ECUA035_LTC1_STRUCT   GPTA0.LTC[46]
#define I_F_ECUA035_LTC1_SRSC     GPTA0.SRSC3
#define I_F_ECUA035_LTC1_SRSS     GPTA0.SRSS3
#define I_F_ECUA035_LTC1_SRS_BP   14
#define I_F_ECUA035_LTC1_SRN_CTR  GPTA0.SRC33
#define I_F_ECUA035_LTC1_SRN_NUM  33

/* user #defines for GPTA0.LTC47 */
#define I_F_ECUA035_LTC2_GPTA     0
#define I_F_ECUA035_LTC2_NUM      47
#define I_F_ECUA035_LTC2_CTR      GPTA0.LTC[47].LTCCTR
#define I_F_ECUA035_LTC2_XR       GPTA0.LTC[47].LTCXR
#define I_F_ECUA035_LTC2_STRUCT   GPTA0.LTC[47]
#define I_F_ECUA035_LTC2_SRSC     GPTA0.SRSC3
#define I_F_ECUA035_LTC2_SRSS     GPTA0.SRSS3
#define I_F_ECUA035_LTC2_SRS_BP   15
#define I_F_ECUA035_LTC2_SRN_CTR  GPTA0.SRC33
#define I_F_ECUA035_LTC2_SRN_NUM  33

/* user #defines for GPTA0.LTC52 */
#define O_F_ECUK084_GPTA     0
#define O_F_ECUK084_NUM      52
#define O_F_ECUK084_CTR      GPTA0.LTC[52].LTCCTR
#define O_F_ECUK084_XR       GPTA0.LTC[52].LTCXR
#define O_F_ECUK084_STRUCT   GPTA0.LTC[52]
#define O_F_ECUK084_SRSC     GPTA0.SRSC3
#define O_F_ECUK084_SRSS     GPTA0.SRSS3
#define O_F_ECUK084_SRS_BP   20
#define O_F_ECUK084_SRN_CTR  GPTA0.SRC35
#define O_F_ECUK084_SRN_NUM  35

/* user #defines for GPTA1.LTC10 */
#define I_F_ECUK029_LTC0_GPTA     1
#define I_F_ECUK029_LTC0_NUM      10
#define I_F_ECUK029_LTC0_CTR      GPTA1.LTC[10].LTCCTR
#define I_F_ECUK029_LTC0_XR       GPTA1.LTC[10].LTCXR
#define I_F_ECUK029_LTC0_STRUCT   GPTA1.LTC[10]
#define I_F_ECUK029_LTC0_SRSC     GPTA1.SRSC2
#define I_F_ECUK029_LTC0_SRSS     GPTA1.SRSS2
#define I_F_ECUK029_LTC0_SRS_BP   10
#define I_F_ECUK029_LTC0_SRN_CTR  GPTA1.SRC24
#define I_F_ECUK029_LTC0_SRN_NUM  24

/* user #defines for GPTA1.LTC11 */
#define I_F_ECUK029_LTC1_GPTA     1
#define I_F_ECUK029_LTC1_NUM      11
#define I_F_ECUK029_LTC1_CTR      GPTA1.LTC[11].LTCCTR
#define I_F_ECUK029_LTC1_XR       GPTA1.LTC[11].LTCXR
#define I_F_ECUK029_LTC1_STRUCT   GPTA1.LTC[11]
#define I_F_ECUK029_LTC1_SRSC     GPTA1.SRSC2
#define I_F_ECUK029_LTC1_SRSS     GPTA1.SRSS2
#define I_F_ECUK029_LTC1_SRS_BP   11
#define I_F_ECUK029_LTC1_SRN_CTR  GPTA1.SRC24
#define I_F_ECUK029_LTC1_SRN_NUM  24

/* user #defines for GPTA1.LTC12 */
#define I_F_ECUK029_LTC2_GPTA     1
#define I_F_ECUK029_LTC2_NUM      12
#define I_F_ECUK029_LTC2_CTR      GPTA1.LTC[12].LTCCTR
#define I_F_ECUK029_LTC2_XR       GPTA1.LTC[12].LTCXR
#define I_F_ECUK029_LTC2_STRUCT   GPTA1.LTC[12]
#define I_F_ECUK029_LTC2_SRSC     GPTA1.SRSC2
#define I_F_ECUK029_LTC2_SRSS     GPTA1.SRSS2
#define I_F_ECUK029_LTC2_SRS_BP   12
#define I_F_ECUK029_LTC2_SRN_CTR  GPTA1.SRC25
#define I_F_ECUK029_LTC2_SRN_NUM  25

/* user #defines for GPTA1.LTC13 */
#define O_F_ECUK088_GPTA     1
#define O_F_ECUK088_NUM      13
#define O_F_ECUK088_CTR      GPTA1.LTC[13].LTCCTR
#define O_F_ECUK088_XR       GPTA1.LTC[13].LTCXR
#define O_F_ECUK088_STRUCT   GPTA1.LTC[13]
#define O_F_ECUK088_SRSC     GPTA1.SRSC2
#define O_F_ECUK088_SRSS     GPTA1.SRSS2
#define O_F_ECUK088_SRS_BP   13
#define O_F_ECUK088_SRN_CTR  GPTA1.SRC25
#define O_F_ECUK088_SRN_NUM  25

/* user #defines for GPTA1.LTC28 */
#define HBR_THRVLV3_O_T_GPTA     1
#define HBR_THRVLV3_O_T_NUM      28
#define HBR_THRVLV3_O_T_CTR      GPTA1.LTC[28].LTCCTR
#define HBR_THRVLV3_O_T_XR       GPTA1.LTC[28].LTCXR
#define HBR_THRVLV3_O_T_STRUCT   GPTA1.LTC[28]
#define HBR_THRVLV3_O_T_SRSC     GPTA1.SRSC2
#define HBR_THRVLV3_O_T_SRSS     GPTA1.SRSS2
#define HBR_THRVLV3_O_T_SRS_BP   28
#define HBR_THRVLV3_O_T_SRN_CTR  GPTA1.SRC29
#define HBR_THRVLV3_O_T_SRN_NUM  29

/* user #defines for GPTA1.LTC44 */
#define O_F_ECUA010_GPTA     1
#define O_F_ECUA010_NUM      44
#define O_F_ECUA010_CTR      GPTA1.LTC[44].LTCCTR
#define O_F_ECUA010_XR       GPTA1.LTC[44].LTCXR
#define O_F_ECUA010_STRUCT   GPTA1.LTC[44]
#define O_F_ECUA010_SRSC     GPTA1.SRSC3
#define O_F_ECUA010_SRSS     GPTA1.SRSS3
#define O_F_ECUA010_SRS_BP   12
#define O_F_ECUA010_SRN_CTR  GPTA1.SRC33
#define O_F_ECUA010_SRN_NUM  33

/* user #defines for GPTA1.LTC52 */
#define O_F_ECUK057_GPTA     1
#define O_F_ECUK057_NUM      52
#define O_F_ECUK057_CTR      GPTA1.LTC[52].LTCCTR
#define O_F_ECUK057_XR       GPTA1.LTC[52].LTCXR
#define O_F_ECUK057_STRUCT   GPTA1.LTC[52]
#define O_F_ECUK057_SRSC     GPTA1.SRSC3
#define O_F_ECUK057_SRSS     GPTA1.SRSS3
#define O_F_ECUK057_SRS_BP   20
#define O_F_ECUK057_SRN_CTR  GPTA1.SRC35
#define O_F_ECUK057_SRN_NUM  35

/* user #defines for GPTA1.LTC56 */
#define HBR_THRVLV2_O_T_GPTA     1
#define HBR_THRVLV2_O_T_NUM      56
#define HBR_THRVLV2_O_T_CTR      GPTA1.LTC[56].LTCCTR
#define HBR_THRVLV2_O_T_XR       GPTA1.LTC[56].LTCXR
#define HBR_THRVLV2_O_T_STRUCT   GPTA1.LTC[56]
#define HBR_THRVLV2_O_T_SRSC     GPTA1.SRSC3
#define HBR_THRVLV2_O_T_SRSS     GPTA1.SRSS3
#define HBR_THRVLV2_O_T_SRS_BP   24
#define HBR_THRVLV2_O_T_SRN_CTR  GPTA1.SRC36
#define HBR_THRVLV2_O_T_SRN_NUM  36

/* user #defines for LTCA2.LTC0 */
#define INJHPFI_LTC_CH0_GPTA     2
#define INJHPFI_LTC_CH0_NUM      0
#define INJHPFI_LTC_CH0_CTR      LTCA2.LTC[0].LTCCTR
#define INJHPFI_LTC_CH0_XR       LTCA2.LTC[0].LTCXR
#define INJHPFI_LTC_CH0_STRUCT   LTCA2.LTC[0]
#define INJHPFI_LTC_CH0_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH0_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH0_SRS_BP   0
#define INJHPFI_LTC_CH0_SRN_CTR  LTCA2.SRC00
#define INJHPFI_LTC_CH0_SRN_NUM  0

/* user #defines for LTCA2.LTC1 */
#define INJHPFI_LTC_CH1_GPTA     2
#define INJHPFI_LTC_CH1_NUM      1
#define INJHPFI_LTC_CH1_CTR      LTCA2.LTC[1].LTCCTR
#define INJHPFI_LTC_CH1_XR       LTCA2.LTC[1].LTCXR
#define INJHPFI_LTC_CH1_STRUCT   LTCA2.LTC[1]
#define INJHPFI_LTC_CH1_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH1_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH1_SRS_BP   1
#define INJHPFI_LTC_CH1_SRN_CTR  LTCA2.SRC00
#define INJHPFI_LTC_CH1_SRN_NUM  0

/* user #defines for LTCA2.LTC2 */
#define INJHPFI_LTC_CH2_GPTA     2
#define INJHPFI_LTC_CH2_NUM      2
#define INJHPFI_LTC_CH2_CTR      LTCA2.LTC[2].LTCCTR
#define INJHPFI_LTC_CH2_XR       LTCA2.LTC[2].LTCXR
#define INJHPFI_LTC_CH2_STRUCT   LTCA2.LTC[2]
#define INJHPFI_LTC_CH2_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH2_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH2_SRS_BP   2
#define INJHPFI_LTC_CH2_SRN_CTR  LTCA2.SRC00
#define INJHPFI_LTC_CH2_SRN_NUM  0

/* user #defines for LTCA2.LTC3 */
#define INJHPFI_LTC_CH3_GPTA     2
#define INJHPFI_LTC_CH3_NUM      3
#define INJHPFI_LTC_CH3_CTR      LTCA2.LTC[3].LTCCTR
#define INJHPFI_LTC_CH3_XR       LTCA2.LTC[3].LTCXR
#define INJHPFI_LTC_CH3_STRUCT   LTCA2.LTC[3]
#define INJHPFI_LTC_CH3_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH3_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH3_SRS_BP   3
#define INJHPFI_LTC_CH3_SRN_CTR  LTCA2.SRC00
#define INJHPFI_LTC_CH3_SRN_NUM  0

/* user #defines for LTCA2.LTC4 */
#define INJHPFI_LTC_CH4_GPTA     2
#define INJHPFI_LTC_CH4_NUM      4
#define INJHPFI_LTC_CH4_CTR      LTCA2.LTC[4].LTCCTR
#define INJHPFI_LTC_CH4_XR       LTCA2.LTC[4].LTCXR
#define INJHPFI_LTC_CH4_STRUCT   LTCA2.LTC[4]
#define INJHPFI_LTC_CH4_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH4_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH4_SRS_BP   4
#define INJHPFI_LTC_CH4_SRN_CTR  LTCA2.SRC01
#define INJHPFI_LTC_CH4_SRN_NUM  1

/* user #defines for LTCA2.LTC5 */
#define INJHPFI_LTC_CH5_GPTA     2
#define INJHPFI_LTC_CH5_NUM      5
#define INJHPFI_LTC_CH5_CTR      LTCA2.LTC[5].LTCCTR
#define INJHPFI_LTC_CH5_XR       LTCA2.LTC[5].LTCXR
#define INJHPFI_LTC_CH5_STRUCT   LTCA2.LTC[5]
#define INJHPFI_LTC_CH5_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH5_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH5_SRS_BP   5
#define INJHPFI_LTC_CH5_SRN_CTR  LTCA2.SRC01
#define INJHPFI_LTC_CH5_SRN_NUM  1

/* user #defines for LTCA2.LTC6 */
#define INJHPFI_LTC_CH6_GPTA     2
#define INJHPFI_LTC_CH6_NUM      6
#define INJHPFI_LTC_CH6_CTR      LTCA2.LTC[6].LTCCTR
#define INJHPFI_LTC_CH6_XR       LTCA2.LTC[6].LTCXR
#define INJHPFI_LTC_CH6_STRUCT   LTCA2.LTC[6]
#define INJHPFI_LTC_CH6_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH6_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH6_SRS_BP   6
#define INJHPFI_LTC_CH6_SRN_CTR  LTCA2.SRC01
#define INJHPFI_LTC_CH6_SRN_NUM  1

/* user #defines for LTCA2.LTC7 */
#define INJHPFI_LTC_CH7_GPTA     2
#define INJHPFI_LTC_CH7_NUM      7
#define INJHPFI_LTC_CH7_CTR      LTCA2.LTC[7].LTCCTR
#define INJHPFI_LTC_CH7_XR       LTCA2.LTC[7].LTCXR
#define INJHPFI_LTC_CH7_STRUCT   LTCA2.LTC[7]
#define INJHPFI_LTC_CH7_SRSC     LTCA2.SRSC2
#define INJHPFI_LTC_CH7_SRSS     LTCA2.SRSS2
#define INJHPFI_LTC_CH7_SRS_BP   7
#define INJHPFI_LTC_CH7_SRN_CTR  LTCA2.SRC01
#define INJHPFI_LTC_CH7_SRN_NUM  1

/* user #defines for LTCA2.LTC8 */
#define IGNH_CHL0_LTC_GPTA     2
#define IGNH_CHL0_LTC_NUM      8
#define IGNH_CHL0_LTC_CTR      LTCA2.LTC[8].LTCCTR
#define IGNH_CHL0_LTC_XR       LTCA2.LTC[8].LTCXR
#define IGNH_CHL0_LTC_STRUCT   LTCA2.LTC[8]
#define IGNH_CHL0_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL0_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL0_LTC_SRS_BP   8
#define IGNH_CHL0_LTC_SRN_CTR  LTCA2.SRC02
#define IGNH_CHL0_LTC_SRN_NUM  2

/* user #defines for LTCA2.LTC9 */
#define IGNH_CHL1_LTC_GPTA     2
#define IGNH_CHL1_LTC_NUM      9
#define IGNH_CHL1_LTC_CTR      LTCA2.LTC[9].LTCCTR
#define IGNH_CHL1_LTC_XR       LTCA2.LTC[9].LTCXR
#define IGNH_CHL1_LTC_STRUCT   LTCA2.LTC[9]
#define IGNH_CHL1_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL1_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL1_LTC_SRS_BP   9
#define IGNH_CHL1_LTC_SRN_CTR  LTCA2.SRC02
#define IGNH_CHL1_LTC_SRN_NUM  2

/* user #defines for LTCA2.LTC10 */
#define IGNH_CHL2_LTC_GPTA     2
#define IGNH_CHL2_LTC_NUM      10
#define IGNH_CHL2_LTC_CTR      LTCA2.LTC[10].LTCCTR
#define IGNH_CHL2_LTC_XR       LTCA2.LTC[10].LTCXR
#define IGNH_CHL2_LTC_STRUCT   LTCA2.LTC[10]
#define IGNH_CHL2_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL2_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL2_LTC_SRS_BP   10
#define IGNH_CHL2_LTC_SRN_CTR  LTCA2.SRC02
#define IGNH_CHL2_LTC_SRN_NUM  2

/* user #defines for LTCA2.LTC11 */
#define IGNH_CHL3_LTC_GPTA     2
#define IGNH_CHL3_LTC_NUM      11
#define IGNH_CHL3_LTC_CTR      LTCA2.LTC[11].LTCCTR
#define IGNH_CHL3_LTC_XR       LTCA2.LTC[11].LTCXR
#define IGNH_CHL3_LTC_STRUCT   LTCA2.LTC[11]
#define IGNH_CHL3_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL3_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL3_LTC_SRS_BP   11
#define IGNH_CHL3_LTC_SRN_CTR  LTCA2.SRC02
#define IGNH_CHL3_LTC_SRN_NUM  2

/* user #defines for LTCA2.LTC12 */
#define IGNH_CHL4_LTC_GPTA     2
#define IGNH_CHL4_LTC_NUM      12
#define IGNH_CHL4_LTC_CTR      LTCA2.LTC[12].LTCCTR
#define IGNH_CHL4_LTC_XR       LTCA2.LTC[12].LTCXR
#define IGNH_CHL4_LTC_STRUCT   LTCA2.LTC[12]
#define IGNH_CHL4_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL4_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL4_LTC_SRS_BP   12
#define IGNH_CHL4_LTC_SRN_CTR  LTCA2.SRC03
#define IGNH_CHL4_LTC_SRN_NUM  3

/* user #defines for LTCA2.LTC13 */
#define IGNH_CHL5_LTC_GPTA     2
#define IGNH_CHL5_LTC_NUM      13
#define IGNH_CHL5_LTC_CTR      LTCA2.LTC[13].LTCCTR
#define IGNH_CHL5_LTC_XR       LTCA2.LTC[13].LTCXR
#define IGNH_CHL5_LTC_STRUCT   LTCA2.LTC[13]
#define IGNH_CHL5_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL5_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL5_LTC_SRS_BP   13
#define IGNH_CHL5_LTC_SRN_CTR  LTCA2.SRC03
#define IGNH_CHL5_LTC_SRN_NUM  3

/* user #defines for LTCA2.LTC14 */
#define IGNH_CHL6_LTC_GPTA     2
#define IGNH_CHL6_LTC_NUM      14
#define IGNH_CHL6_LTC_CTR      LTCA2.LTC[14].LTCCTR
#define IGNH_CHL6_LTC_XR       LTCA2.LTC[14].LTCXR
#define IGNH_CHL6_LTC_STRUCT   LTCA2.LTC[14]
#define IGNH_CHL6_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL6_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL6_LTC_SRS_BP   14
#define IGNH_CHL6_LTC_SRN_CTR  LTCA2.SRC03
#define IGNH_CHL6_LTC_SRN_NUM  3

/* user #defines for LTCA2.LTC15 */
#define IGNH_CHL7_LTC_GPTA     2
#define IGNH_CHL7_LTC_NUM      15
#define IGNH_CHL7_LTC_CTR      LTCA2.LTC[15].LTCCTR
#define IGNH_CHL7_LTC_XR       LTCA2.LTC[15].LTCXR
#define IGNH_CHL7_LTC_STRUCT   LTCA2.LTC[15]
#define IGNH_CHL7_LTC_SRSC     LTCA2.SRSC2
#define IGNH_CHL7_LTC_SRSS     LTCA2.SRSS2
#define IGNH_CHL7_LTC_SRS_BP   15
#define IGNH_CHL7_LTC_SRN_CTR  LTCA2.SRC03
#define IGNH_CHL7_LTC_SRN_NUM  3

/* user #defines for LTCA2.LTC22 */
#define GPTA_50NS_TIMER_GPTA     2
#define GPTA_50NS_TIMER_NUM      22
#define GPTA_50NS_TIMER_CTR      LTCA2.LTC[22].LTCCTR
#define GPTA_50NS_TIMER_XR       LTCA2.LTC[22].LTCXR
#define GPTA_50NS_TIMER_STRUCT   LTCA2.LTC[22]
#define GPTA_50NS_TIMER_SRSC     LTCA2.SRSC2
#define GPTA_50NS_TIMER_SRSS     LTCA2.SRSS2
#define GPTA_50NS_TIMER_SRS_BP   22
#define GPTA_50NS_TIMER_SRN_CTR  LTCA2.SRC05
#define GPTA_50NS_TIMER_SRN_NUM  5

/* user #defines for LTCA2.LTC23 */
#define SPI_SSC1_GPTA_TIMER_GPTA     2
#define SPI_SSC1_GPTA_TIMER_NUM      23
#define SPI_SSC1_GPTA_TIMER_CTR      LTCA2.LTC[23].LTCCTR
#define SPI_SSC1_GPTA_TIMER_XR       LTCA2.LTC[23].LTCXR
#define SPI_SSC1_GPTA_TIMER_STRUCT   LTCA2.LTC[23]
#define SPI_SSC1_GPTA_TIMER_SRSC     LTCA2.SRSC2
#define SPI_SSC1_GPTA_TIMER_SRSS     LTCA2.SRSS2
#define SPI_SSC1_GPTA_TIMER_SRS_BP   23
#define SPI_SSC1_GPTA_TIMER_SRN_CTR  LTCA2.SRC05
#define SPI_SSC1_GPTA_TIMER_SRN_NUM  5

/* user #defines for LTCA2.LTC32 */
#define O_F_ECUA093_GPTA     2
#define O_F_ECUA093_NUM      32
#define O_F_ECUA093_CTR      LTCA2.LTC[32].LTCCTR
#define O_F_ECUA093_XR       LTCA2.LTC[32].LTCXR
#define O_F_ECUA093_STRUCT   LTCA2.LTC[32]
#define O_F_ECUA093_SRSC     LTCA2.SRSC3
#define O_F_ECUA093_SRSS     LTCA2.SRSS3
#define O_F_ECUA093_SRS_BP   0
#define O_F_ECUA093_SRN_CTR  LTCA2.SRC08
#define O_F_ECUA093_SRN_NUM  8

/* user #defines for LTCA2.LTC40 */
#define PMD_TSTIMP_TIMER_GPTA     2
#define PMD_TSTIMP_TIMER_NUM      40
#define PMD_TSTIMP_TIMER_CTR      LTCA2.LTC[40].LTCCTR
#define PMD_TSTIMP_TIMER_XR       LTCA2.LTC[40].LTCXR
#define PMD_TSTIMP_TIMER_STRUCT   LTCA2.LTC[40]
#define PMD_TSTIMP_TIMER_SRSC     LTCA2.SRSC3
#define PMD_TSTIMP_TIMER_SRSS     LTCA2.SRSS3
#define PMD_TSTIMP_TIMER_SRS_BP   8
#define PMD_TSTIMP_TIMER_SRN_CTR  LTCA2.SRC10
#define PMD_TSTIMP_TIMER_SRN_NUM  10

/* user #defines for GPTA0.PLL */
#define EPMHCRS_PLL_GPTA       0
#define EPMHCRS_PLL_CTR        GPTA0.PLLCTR
#define EPMHCRS_PLL_MTI        GPTA0.PLLMTI
#define EPMHCRS_PLL_STP        GPTA0.PLLSTP
#define EPMHCRS_PLL_CNT        GPTA0.PLLCNT
#define EPMHCRS_PLL_REV        GPTA0.PLLREV
#define EPMHCRS_PLL_DTR        GPTA0.PLLDTR
#define EPMHCRS_PLL_SRSC       GPTA0.SRSC0
#define EPMHCRS_PLL_SRSS       GPTA0.SRSS0
#define EPMHCRS_PLL_SRS_BP     12
#define EPMHCRS_PLL_SRN_CTR    GPTA0.SRC04
#define EPMHCRS_PLL_SRS_NUM    4


/* additional macros for GPTA0.GTC8 to support PCP interrupt sharing */ 
#define O_F_ECUA046_SRN_SRSC     GPTA0.SRSC1
#define O_F_ECUA046_SRN_SRS_BP   8

/* additional macros for GPTA0.GTC24 to support PCP interrupt sharing */ 
#define KNDET_MWIN_SRN_SRSC     GPTA0.SRSC1
#define KNDET_MWIN_SRN_SRS_BP   24

/* additional macros for GPTA0.LTC24 to support PCP interrupt sharing */ 
#define CJ135_DEV1_RDMEASVAL_SRN_SRSC     GPTA0.SRSC2
#define CJ135_DEV1_RDMEASVAL_SRN_SRS_BP   24

/* additional macros for GPTA0.LTC40 to support PCP interrupt sharing */ 
#define SPI_SSC0_GPTA_TIMER_SRN_SRSC     GPTA0.SRSC3
#define SPI_SSC0_GPTA_TIMER_SRN_SRS_BP   8

/* additional macros for LTCA2.LTC23 to support PCP interrupt sharing */ 
#define SPI_SSC1_GPTA_TIMER_SRN_SRSC     LTCA2.SRSC2
#define SPI_SSC1_GPTA_TIMER_SRN_SRS_BP   23

/* additional macros for LTCA2.LTC40 to support PCP interrupt sharing */ 
#define PMD_TSTIMP_SRN_SRSC     LTCA2.SRSC3
#define PMD_TSTIMP_SRN_SRS_BP   8


/* macros used to set up GPTA-to-MSC multiplexter */
#define GPTA_MMX_CTR_00_VAL  0x01000404ul
#define GPTA_MMX_CTR_01_VAL  0x00000008ul
#define GPTA_MMX_CTR_10_VAL  0x00000000ul
#define GPTA_MMX_CTR_11_VAL  0x00000100ul


/* GPTA0 LTC initialisation macros */ 
#define GPTA_GPTA0LTC0_CTR 0x00000103
#define GPTA_GPTA0LTC0_XR  -2
#define GPTA_GPTA0LTC1_CTR 0x00001831
#define GPTA_GPTA0LTC1_XR  9996
#define GPTA_GPTA0LTC2_CTR 0x00003011
#define GPTA_GPTA0LTC2_XR  -1
#define GPTA_GPTA0LTC3_CTR 0x00003021
#define GPTA_GPTA0LTC3_XR  -1
#define GPTA_GPTA0LTC4_CTR 0x00000028
#define GPTA_GPTA0LTC4_XR  0
#define GPTA_GPTA0LTC5_CTR 0x0
#define GPTA_GPTA0LTC5_XR  0x0
#define GPTA_GPTA0LTC6_CTR 0x00000013
#define GPTA_GPTA0LTC6_XR  0x0000
#define GPTA_GPTA0LTC7_CTR 0x00001031
#define GPTA_GPTA0LTC7_XR  0x6000
#define GPTA_GPTA0LTC8_CTR 0x00007811
#define GPTA_GPTA0LTC8_XR  0xFFFF
#define GPTA_GPTA0LTC9_CTR 0x00007821
#define GPTA_GPTA0LTC9_XR  0xFFFF
#define GPTA_GPTA0LTC10_CTR 0x00004D03
#define GPTA_GPTA0LTC10_XR  MAXUINT16
#define GPTA_GPTA0LTC11_CTR 0x00008D31
#define GPTA_GPTA0LTC11_XR  10000-2
#define GPTA_GPTA0LTC12_CTR 0x00005413
#define GPTA_GPTA0LTC12_XR  MAXUINT16
#define GPTA_GPTA0LTC13_CTR 0x00002631
#define GPTA_GPTA0LTC13_XR  12500-2
#define GPTA_GPTA0LTC14_CTR 0x00007D11
#define GPTA_GPTA0LTC14_XR  -1
#define GPTA_GPTA0LTC15_CTR 0x00007D21
#define GPTA_GPTA0LTC15_XR  -1
#define GPTA_GPTA0LTC16_CTR 0x00005413
#define GPTA_GPTA0LTC16_XR  MAXUINT16
#define GPTA_GPTA0LTC17_CTR 0x00002631
#define GPTA_GPTA0LTC17_XR  8333-2
#define GPTA_GPTA0LTC18_CTR 0x00007D11
#define GPTA_GPTA0LTC18_XR  -1
#define GPTA_GPTA0LTC19_CTR 0x00007D21
#define GPTA_GPTA0LTC19_XR  -1
#define GPTA_GPTA0LTC20_CTR 0x00005413
#define GPTA_GPTA0LTC20_XR  MAXUINT16
#define GPTA_GPTA0LTC21_CTR 0x00002631
#define GPTA_GPTA0LTC21_XR  8333-2
#define GPTA_GPTA0LTC22_CTR 0x00007D11
#define GPTA_GPTA0LTC22_XR  -1
#define GPTA_GPTA0LTC23_CTR 0x00007D21
#define GPTA_GPTA0LTC23_XR  -1
#define GPTA_GPTA0LTC24_CTR 0x00000028
#define GPTA_GPTA0LTC24_XR  0x0000
#define GPTA_GPTA0LTC25_CTR 0x00000013
#define GPTA_GPTA0LTC25_XR  0x0000
#define GPTA_GPTA0LTC26_CTR 0x00001031
#define GPTA_GPTA0LTC26_XR  0x6000
#define GPTA_GPTA0LTC27_CTR 0x00007811
#define GPTA_GPTA0LTC27_XR  0xFFFF
#define GPTA_GPTA0LTC28_CTR 0x00007821
#define GPTA_GPTA0LTC28_XR  0xFFFF
#define GPTA_GPTA0LTC29_CTR 0x0
#define GPTA_GPTA0LTC29_XR  0x0
#define GPTA_GPTA0LTC30_CTR 0x0
#define GPTA_GPTA0LTC30_XR  0x0
#define GPTA_GPTA0LTC31_CTR 0x00005413
#define GPTA_GPTA0LTC31_XR  MAXUINT16
#define GPTA_GPTA0LTC32_CTR 0x00002631
#define GPTA_GPTA0LTC32_XR  12500-2
#define GPTA_GPTA0LTC33_CTR 0x00007D11
#define GPTA_GPTA0LTC33_XR  -1
#define GPTA_GPTA0LTC34_CTR 0x00007D21
#define GPTA_GPTA0LTC34_XR  -1
#define GPTA_GPTA0LTC35_CTR 0x0
#define GPTA_GPTA0LTC35_XR  0x0
#define GPTA_GPTA0LTC36_CTR 0x0
#define GPTA_GPTA0LTC36_XR  0x0
#define GPTA_GPTA0LTC37_CTR 0x0
#define GPTA_GPTA0LTC37_XR  0x0
#define GPTA_GPTA0LTC38_CTR 0x0
#define GPTA_GPTA0LTC38_XR  0x0
#define GPTA_GPTA0LTC39_CTR 0x0
#define GPTA_GPTA0LTC39_XR  0x0
#define GPTA_GPTA0LTC40_CTR 0x0000050E
#define GPTA_GPTA0LTC40_XR  0x0000FFF0
#define GPTA_GPTA0LTC41_CTR 0x00000413
#define GPTA_GPTA0LTC41_XR  0x0000
#define GPTA_GPTA0LTC42_CTR 0x00000410
#define GPTA_GPTA0LTC42_XR  0x0000
#define GPTA_GPTA0LTC43_CTR 0x00000420
#define GPTA_GPTA0LTC43_XR  0x0000
#define GPTA_GPTA0LTC44_CTR 0x0
#define GPTA_GPTA0LTC44_XR  0x0
#define GPTA_GPTA0LTC45_CTR 0x00000413
#define GPTA_GPTA0LTC45_XR  0x0000
#define GPTA_GPTA0LTC46_CTR 0x00000410
#define GPTA_GPTA0LTC46_XR  0x0000
#define GPTA_GPTA0LTC47_CTR 0x00000420
#define GPTA_GPTA0LTC47_XR  0x0000
#define GPTA_GPTA0LTC48_CTR 0x0
#define GPTA_GPTA0LTC48_XR  0x0
#define GPTA_GPTA0LTC49_CTR 0x0
#define GPTA_GPTA0LTC49_XR  0x0
#define GPTA_GPTA0LTC50_CTR 0x0
#define GPTA_GPTA0LTC50_XR  0x0
#define GPTA_GPTA0LTC51_CTR 0x0
#define GPTA_GPTA0LTC51_XR  0x0
#define GPTA_GPTA0LTC52_CTR 0x00005413
#define GPTA_GPTA0LTC52_XR  MAXUINT16
#define GPTA_GPTA0LTC53_CTR 0x00002631
#define GPTA_GPTA0LTC53_XR  8333-2
#define GPTA_GPTA0LTC54_CTR 0x00007D11
#define GPTA_GPTA0LTC54_XR  -1
#define GPTA_GPTA0LTC55_CTR 0x00007D21
#define GPTA_GPTA0LTC55_XR  -1
#define GPTA_GPTA0LTC56_CTR 0x0
#define GPTA_GPTA0LTC56_XR  0x0
#define GPTA_GPTA0LTC57_CTR 0x0
#define GPTA_GPTA0LTC57_XR  0x0
#define GPTA_GPTA0LTC58_CTR 0x0
#define GPTA_GPTA0LTC58_XR  0x0
#define GPTA_GPTA0LTC59_CTR 0x0
#define GPTA_GPTA0LTC59_XR  0x0
#define GPTA_GPTA0LTC60_CTR 0x0
#define GPTA_GPTA0LTC60_XR  0x0
#define GPTA_GPTA0LTC61_CTR 0x0
#define GPTA_GPTA0LTC61_XR  0x0
#define GPTA_GPTA0LTC62_CTR 0x0
#define GPTA_GPTA0LTC62_XR  0x0
#define GPTA_GPTA0LTC63_CTR 0x0
#define GPTA_GPTA0LTC63_XR  0x0

/* GPTA1 LTC initialisation macros */ 
#define GPTA_GPTA1LTC0_CTR 0x0
#define GPTA_GPTA1LTC0_XR  0x0
#define GPTA_GPTA1LTC1_CTR 0x0
#define GPTA_GPTA1LTC1_XR  0x0
#define GPTA_GPTA1LTC2_CTR 0x0
#define GPTA_GPTA1LTC2_XR  0x0
#define GPTA_GPTA1LTC3_CTR 0x0
#define GPTA_GPTA1LTC3_XR  0x0
#define GPTA_GPTA1LTC4_CTR 0x0
#define GPTA_GPTA1LTC4_XR  0x0
#define GPTA_GPTA1LTC5_CTR 0x0
#define GPTA_GPTA1LTC5_XR  0x0
#define GPTA_GPTA1LTC6_CTR 0x0
#define GPTA_GPTA1LTC6_XR  0x0
#define GPTA_GPTA1LTC7_CTR 0x0
#define GPTA_GPTA1LTC7_XR  0x0
#define GPTA_GPTA1LTC8_CTR 0x0
#define GPTA_GPTA1LTC8_XR  0x0
#define GPTA_GPTA1LTC9_CTR 0x0
#define GPTA_GPTA1LTC9_XR  0x0
#define GPTA_GPTA1LTC10_CTR 0x00000413
#define GPTA_GPTA1LTC10_XR  0x0000
#define GPTA_GPTA1LTC11_CTR 0x00000410
#define GPTA_GPTA1LTC11_XR  0x0000
#define GPTA_GPTA1LTC12_CTR 0x00000420
#define GPTA_GPTA1LTC12_XR  0x0000
#define GPTA_GPTA1LTC13_CTR 0x00005413
#define GPTA_GPTA1LTC13_XR  MAXUINT16
#define GPTA_GPTA1LTC14_CTR 0x00002651
#define GPTA_GPTA1LTC14_XR  25000-2
#define GPTA_GPTA1LTC15_CTR 0x00002661
#define GPTA_GPTA1LTC15_XR  25000-2
#define GPTA_GPTA1LTC16_CTR 0x00007D11
#define GPTA_GPTA1LTC16_XR  -1
#define GPTA_GPTA1LTC17_CTR 0x00007D21
#define GPTA_GPTA1LTC17_XR  -1
#define GPTA_GPTA1LTC18_CTR 0x0
#define GPTA_GPTA1LTC18_XR  0x0
#define GPTA_GPTA1LTC19_CTR 0x0
#define GPTA_GPTA1LTC19_XR  0x0
#define GPTA_GPTA1LTC20_CTR 0x0
#define GPTA_GPTA1LTC20_XR  0x0
#define GPTA_GPTA1LTC21_CTR 0x0
#define GPTA_GPTA1LTC21_XR  0x0
#define GPTA_GPTA1LTC22_CTR 0x0
#define GPTA_GPTA1LTC22_XR  0x0
#define GPTA_GPTA1LTC23_CTR 0x0
#define GPTA_GPTA1LTC23_XR  0x0
#define GPTA_GPTA1LTC24_CTR 0x0
#define GPTA_GPTA1LTC24_XR  0x0
#define GPTA_GPTA1LTC25_CTR 0x0
#define GPTA_GPTA1LTC25_XR  0x0
#define GPTA_GPTA1LTC26_CTR 0x0
#define GPTA_GPTA1LTC26_XR  0x0
#define GPTA_GPTA1LTC27_CTR 0x0
#define GPTA_GPTA1LTC27_XR  0x0
#define GPTA_GPTA1LTC28_CTR 0x00000103
#define GPTA_GPTA1LTC28_XR  -2
#define GPTA_GPTA1LTC29_CTR 0x00001831
#define GPTA_GPTA1LTC29_XR  9996
#define GPTA_GPTA1LTC30_CTR 0x00003011
#define GPTA_GPTA1LTC30_XR  -1
#define GPTA_GPTA1LTC31_CTR 0x00003021
#define GPTA_GPTA1LTC31_XR  -1
#define GPTA_GPTA1LTC32_CTR 0x0
#define GPTA_GPTA1LTC32_XR  0x0
#define GPTA_GPTA1LTC33_CTR 0x0
#define GPTA_GPTA1LTC33_XR  0x0
#define GPTA_GPTA1LTC34_CTR 0x0
#define GPTA_GPTA1LTC34_XR  0x0
#define GPTA_GPTA1LTC35_CTR 0x0
#define GPTA_GPTA1LTC35_XR  0x0
#define GPTA_GPTA1LTC36_CTR 0x0
#define GPTA_GPTA1LTC36_XR  0x0
#define GPTA_GPTA1LTC37_CTR 0x0
#define GPTA_GPTA1LTC37_XR  0x0
#define GPTA_GPTA1LTC38_CTR 0x0
#define GPTA_GPTA1LTC38_XR  0x0
#define GPTA_GPTA1LTC39_CTR 0x0
#define GPTA_GPTA1LTC39_XR  0x0
#define GPTA_GPTA1LTC40_CTR 0x0
#define GPTA_GPTA1LTC40_XR  0x0
#define GPTA_GPTA1LTC41_CTR 0x0
#define GPTA_GPTA1LTC41_XR  0x0
#define GPTA_GPTA1LTC42_CTR 0x0
#define GPTA_GPTA1LTC42_XR  0x0
#define GPTA_GPTA1LTC43_CTR 0x0
#define GPTA_GPTA1LTC43_XR  0x0
#define GPTA_GPTA1LTC44_CTR 0x00005413
#define GPTA_GPTA1LTC44_XR  MAXUINT16
#define GPTA_GPTA1LTC45_CTR 0x00002631
#define GPTA_GPTA1LTC45_XR  12500-2
#define GPTA_GPTA1LTC46_CTR 0x00007D11
#define GPTA_GPTA1LTC46_XR  -1
#define GPTA_GPTA1LTC47_CTR 0x00007D21
#define GPTA_GPTA1LTC47_XR  -1
#define GPTA_GPTA1LTC48_CTR 0x0
#define GPTA_GPTA1LTC48_XR  0x0
#define GPTA_GPTA1LTC49_CTR 0x0
#define GPTA_GPTA1LTC49_XR  0x0
#define GPTA_GPTA1LTC50_CTR 0x0
#define GPTA_GPTA1LTC50_XR  0x0
#define GPTA_GPTA1LTC51_CTR 0x0
#define GPTA_GPTA1LTC51_XR  0x0
#define GPTA_GPTA1LTC52_CTR 0x00005413
#define GPTA_GPTA1LTC52_XR  MAXUINT16
#define GPTA_GPTA1LTC53_CTR 0x00002631
#define GPTA_GPTA1LTC53_XR  8333-2
#define GPTA_GPTA1LTC54_CTR 0x00007D11
#define GPTA_GPTA1LTC54_XR  -1
#define GPTA_GPTA1LTC55_CTR 0x00007D21
#define GPTA_GPTA1LTC55_XR  -1
#define GPTA_GPTA1LTC56_CTR 0x00000103
#define GPTA_GPTA1LTC56_XR  -2
#define GPTA_GPTA1LTC57_CTR 0x00001831
#define GPTA_GPTA1LTC57_XR  9996
#define GPTA_GPTA1LTC58_CTR 0x00003011
#define GPTA_GPTA1LTC58_XR  -1
#define GPTA_GPTA1LTC59_CTR 0x00003021
#define GPTA_GPTA1LTC59_XR  -1
#define GPTA_GPTA1LTC60_CTR 0x0
#define GPTA_GPTA1LTC60_XR  0x0
#define GPTA_GPTA1LTC61_CTR 0x0
#define GPTA_GPTA1LTC61_XR  0x0
#define GPTA_GPTA1LTC62_CTR 0x0
#define GPTA_GPTA1LTC62_XR  0x0
#define GPTA_GPTA1LTC63_CTR 0x0
#define GPTA_GPTA1LTC63_XR  0x0

/* LTCA2 LTC initialisation macros */ 
#define GPTA_LTCA2LTC0_CTR 0x00000000
#define GPTA_LTCA2LTC0_XR  0x0000
#define GPTA_LTCA2LTC1_CTR 0x00000000
#define GPTA_LTCA2LTC1_XR  0x0000
#define GPTA_LTCA2LTC2_CTR 0x00000000
#define GPTA_LTCA2LTC2_XR  0x0000
#define GPTA_LTCA2LTC3_CTR 0x00000000
#define GPTA_LTCA2LTC3_XR  0x0000
#define GPTA_LTCA2LTC4_CTR 0x00000000
#define GPTA_LTCA2LTC4_XR  0x0000
#define GPTA_LTCA2LTC5_CTR 0x00000000
#define GPTA_LTCA2LTC5_XR  0x0000
#define GPTA_LTCA2LTC6_CTR 0x00000000
#define GPTA_LTCA2LTC6_XR  0x0000
#define GPTA_LTCA2LTC7_CTR 0x00000000
#define GPTA_LTCA2LTC7_XR  0x0000
#define GPTA_LTCA2LTC8_CTR 0x00000000
#define GPTA_LTCA2LTC8_XR  0x0000
#define GPTA_LTCA2LTC9_CTR 0x00000000
#define GPTA_LTCA2LTC9_XR  0x0000
#define GPTA_LTCA2LTC10_CTR 0x00000000
#define GPTA_LTCA2LTC10_XR  0x0000
#define GPTA_LTCA2LTC11_CTR 0x00000000
#define GPTA_LTCA2LTC11_XR  0x0000
#define GPTA_LTCA2LTC12_CTR 0x00000000
#define GPTA_LTCA2LTC12_XR  0x0000
#define GPTA_LTCA2LTC13_CTR 0x00000000
#define GPTA_LTCA2LTC13_XR  0x0000
#define GPTA_LTCA2LTC14_CTR 0x00000000
#define GPTA_LTCA2LTC14_XR  0x0000
#define GPTA_LTCA2LTC15_CTR 0x00000000
#define GPTA_LTCA2LTC15_XR  0x0000
#define GPTA_LTCA2LTC16_CTR 0x0
#define GPTA_LTCA2LTC16_XR  0x0
#define GPTA_LTCA2LTC17_CTR 0x0
#define GPTA_LTCA2LTC17_XR  0x0
#define GPTA_LTCA2LTC18_CTR 0x0
#define GPTA_LTCA2LTC18_XR  0x0
#define GPTA_LTCA2LTC19_CTR 0x0
#define GPTA_LTCA2LTC19_XR  0x0
#define GPTA_LTCA2LTC20_CTR 0x0
#define GPTA_LTCA2LTC20_XR  0x0
#define GPTA_LTCA2LTC21_CTR 0x0
#define GPTA_LTCA2LTC21_XR  0x0
#define GPTA_LTCA2LTC22_CTR 0x00000502
#define GPTA_LTCA2LTC22_XR  0x0000
#define GPTA_LTCA2LTC23_CTR 0x0000050E
#define GPTA_LTCA2LTC23_XR  0x0000FFF0
#define GPTA_LTCA2LTC24_CTR 0x0
#define GPTA_LTCA2LTC24_XR  0x0
#define GPTA_LTCA2LTC25_CTR 0x0
#define GPTA_LTCA2LTC25_XR  0x0
#define GPTA_LTCA2LTC26_CTR 0x0
#define GPTA_LTCA2LTC26_XR  0x0
#define GPTA_LTCA2LTC27_CTR 0x0
#define GPTA_LTCA2LTC27_XR  0x0
#define GPTA_LTCA2LTC28_CTR 0x0
#define GPTA_LTCA2LTC28_XR  0x0
#define GPTA_LTCA2LTC29_CTR 0x0
#define GPTA_LTCA2LTC29_XR  0x0
#define GPTA_LTCA2LTC30_CTR 0x0
#define GPTA_LTCA2LTC30_XR  0x0
#define GPTA_LTCA2LTC31_CTR 0x0
#define GPTA_LTCA2LTC31_XR  0x0
#define GPTA_LTCA2LTC32_CTR 0x00005413
#define GPTA_LTCA2LTC32_XR  MAXUINT16
#define GPTA_LTCA2LTC33_CTR 0x00002631
#define GPTA_LTCA2LTC33_XR  12500-2
#define GPTA_LTCA2LTC34_CTR 0x00007D11
#define GPTA_LTCA2LTC34_XR  -1
#define GPTA_LTCA2LTC35_CTR 0x00007D21
#define GPTA_LTCA2LTC35_XR  -1
#define GPTA_LTCA2LTC36_CTR 0x0
#define GPTA_LTCA2LTC36_XR  0x0
#define GPTA_LTCA2LTC37_CTR 0x0
#define GPTA_LTCA2LTC37_XR  0x0
#define GPTA_LTCA2LTC38_CTR 0x0
#define GPTA_LTCA2LTC38_XR  0x0
#define GPTA_LTCA2LTC39_CTR 0x0
#define GPTA_LTCA2LTC39_XR  0x0
#define GPTA_LTCA2LTC40_CTR 0x00000000
#define GPTA_LTCA2LTC40_XR  0
#define GPTA_LTCA2LTC41_CTR 0x0
#define GPTA_LTCA2LTC41_XR  0x0
#define GPTA_LTCA2LTC42_CTR 0x0
#define GPTA_LTCA2LTC42_XR  0x0
#define GPTA_LTCA2LTC43_CTR 0x0
#define GPTA_LTCA2LTC43_XR  0x0
#define GPTA_LTCA2LTC44_CTR 0x0
#define GPTA_LTCA2LTC44_XR  0x0
#define GPTA_LTCA2LTC45_CTR 0x0
#define GPTA_LTCA2LTC45_XR  0x0
#define GPTA_LTCA2LTC46_CTR 0x0
#define GPTA_LTCA2LTC46_XR  0x0
#define GPTA_LTCA2LTC47_CTR 0x0
#define GPTA_LTCA2LTC47_XR  0x0
#define GPTA_LTCA2LTC48_CTR 0x0
#define GPTA_LTCA2LTC48_XR  0x0
#define GPTA_LTCA2LTC49_CTR 0x0
#define GPTA_LTCA2LTC49_XR  0x0
#define GPTA_LTCA2LTC50_CTR 0x0
#define GPTA_LTCA2LTC50_XR  0x0
#define GPTA_LTCA2LTC51_CTR 0x0
#define GPTA_LTCA2LTC51_XR  0x0
#define GPTA_LTCA2LTC52_CTR 0x0
#define GPTA_LTCA2LTC52_XR  0x0
#define GPTA_LTCA2LTC53_CTR 0x0
#define GPTA_LTCA2LTC53_XR  0x0
#define GPTA_LTCA2LTC54_CTR 0x0
#define GPTA_LTCA2LTC54_XR  0x0
#define GPTA_LTCA2LTC55_CTR 0x0
#define GPTA_LTCA2LTC55_XR  0x0
#define GPTA_LTCA2LTC56_CTR 0x0
#define GPTA_LTCA2LTC56_XR  0x0
#define GPTA_LTCA2LTC57_CTR 0x0
#define GPTA_LTCA2LTC57_XR  0x0
#define GPTA_LTCA2LTC58_CTR 0x0
#define GPTA_LTCA2LTC58_XR  0x0
#define GPTA_LTCA2LTC59_CTR 0x0
#define GPTA_LTCA2LTC59_XR  0x0
#define GPTA_LTCA2LTC60_CTR 0x0
#define GPTA_LTCA2LTC60_XR  0x0
#define GPTA_LTCA2LTC61_CTR 0x0
#define GPTA_LTCA2LTC61_XR  0x0
#define GPTA_LTCA2LTC62_CTR 0x0
#define GPTA_LTCA2LTC62_XR  0x0
#define GPTA_LTCA2LTC63_CTR 0x0
#define GPTA_LTCA2LTC63_XR  0x0


/* GPTA0 GTC initialisation macros */ 
#define GPTA_GPTA0GTC0_CTR 0x00005900
#define GPTA_GPTA0GTC0_XR  0x00000000
#define GPTA_GPTA0GTC1_CTR 0x0
#define GPTA_GPTA0GTC1_XR  0x0
#define GPTA_GPTA0GTC2_CTR 0x00005900
#define GPTA_GPTA0GTC2_XR  0x00000000
#define GPTA_GPTA0GTC3_CTR 0x0
#define GPTA_GPTA0GTC3_XR  0x0
#define GPTA_GPTA0GTC4_CTR 0x00005900
#define GPTA_GPTA0GTC4_XR  0x00000000
#define GPTA_GPTA0GTC5_CTR 0x0
#define GPTA_GPTA0GTC5_XR  0x0
#define GPTA_GPTA0GTC6_CTR 0x0
#define GPTA_GPTA0GTC6_XR  0x0
#define GPTA_GPTA0GTC7_CTR 0x0
#define GPTA_GPTA0GTC7_XR  0x0
#define GPTA_GPTA0GTC8_CTR 0x1002
#define GPTA_GPTA0GTC8_XR  0x00FFFFFF
#define GPTA_GPTA0GTC9_CTR 0x3802
#define GPTA_GPTA0GTC9_XR  0x00FFFFFF
#define GPTA_GPTA0GTC10_CTR 0x00005900
#define GPTA_GPTA0GTC10_XR  0x00000000
#define GPTA_GPTA0GTC11_CTR 0x0
#define GPTA_GPTA0GTC11_XR  0x0
#define GPTA_GPTA0GTC12_CTR 0x0
#define GPTA_GPTA0GTC12_XR  0x0
#define GPTA_GPTA0GTC13_CTR 0x0
#define GPTA_GPTA0GTC13_XR  0x0
#define GPTA_GPTA0GTC14_CTR 0
#define GPTA_GPTA0GTC14_XR  0x00000000
#define GPTA_GPTA0GTC15_CTR 0
#define GPTA_GPTA0GTC15_XR  0x00000000
#define GPTA_GPTA0GTC16_CTR 0x0
#define GPTA_GPTA0GTC16_XR  0x0
#define GPTA_GPTA0GTC17_CTR 0x0
#define GPTA_GPTA0GTC17_XR  0x0
#define GPTA_GPTA0GTC18_CTR 0x0
#define GPTA_GPTA0GTC18_XR  0x0
#define GPTA_GPTA0GTC19_CTR 0x0
#define GPTA_GPTA0GTC19_XR  0x0
#define GPTA_GPTA0GTC20_CTR 0x0
#define GPTA_GPTA0GTC20_XR  0x0
#define GPTA_GPTA0GTC21_CTR 0x0
#define GPTA_GPTA0GTC21_XR  0x0
#define GPTA_GPTA0GTC22_CTR 0x0
#define GPTA_GPTA0GTC22_XR  0x0
#define GPTA_GPTA0GTC23_CTR 0x0
#define GPTA_GPTA0GTC23_XR  0x0
#define GPTA_GPTA0GTC24_CTR 0x0000
#define GPTA_GPTA0GTC24_XR  0x000000
#define GPTA_GPTA0GTC25_CTR 0x00005900
#define GPTA_GPTA0GTC25_XR  0x00000000
#define GPTA_GPTA0GTC26_CTR 0x001D
#define GPTA_GPTA0GTC26_XR  0
#define GPTA_GPTA0GTC27_CTR 0x0
#define GPTA_GPTA0GTC27_XR  0x0
#define GPTA_GPTA0GTC28_CTR 0x00005900
#define GPTA_GPTA0GTC28_XR  0x00000000
#define GPTA_GPTA0GTC29_CTR 0x00005900
#define GPTA_GPTA0GTC29_XR  0x00000000
#define GPTA_GPTA0GTC30_CTR 0x00000000
#define GPTA_GPTA0GTC30_XR  0x0000
#define GPTA_GPTA0GTC31_CTR 0x040A
#define GPTA_GPTA0GTC31_XR  0x0000

/* GPTA1 GTC initialisation macros */ 
#define GPTA_GPTA1GTC0_CTR 0x0
#define GPTA_GPTA1GTC0_XR  0x0
#define GPTA_GPTA1GTC1_CTR 0x0
#define GPTA_GPTA1GTC1_XR  0x0
#define GPTA_GPTA1GTC2_CTR 0x0
#define GPTA_GPTA1GTC2_XR  0x0
#define GPTA_GPTA1GTC3_CTR 0x0
#define GPTA_GPTA1GTC3_XR  0x0
#define GPTA_GPTA1GTC4_CTR 0x0
#define GPTA_GPTA1GTC4_XR  0x0
#define GPTA_GPTA1GTC5_CTR 0x0
#define GPTA_GPTA1GTC5_XR  0x0
#define GPTA_GPTA1GTC6_CTR 0x0
#define GPTA_GPTA1GTC6_XR  0x0
#define GPTA_GPTA1GTC7_CTR 0x0
#define GPTA_GPTA1GTC7_XR  0x0
#define GPTA_GPTA1GTC8_CTR 0x0000
#define GPTA_GPTA1GTC8_XR  0
#define GPTA_GPTA1GTC9_CTR 0x0000
#define GPTA_GPTA1GTC9_XR  0
#define GPTA_GPTA1GTC10_CTR 0x0000
#define GPTA_GPTA1GTC10_XR  0
#define GPTA_GPTA1GTC11_CTR 0x0000
#define GPTA_GPTA1GTC11_XR  0
#define GPTA_GPTA1GTC12_CTR 0x0000
#define GPTA_GPTA1GTC12_XR  0
#define GPTA_GPTA1GTC13_CTR 0x0000
#define GPTA_GPTA1GTC13_XR  0
#define GPTA_GPTA1GTC14_CTR 0x0000
#define GPTA_GPTA1GTC14_XR  0
#define GPTA_GPTA1GTC15_CTR 0x0000
#define GPTA_GPTA1GTC15_XR  0
#define GPTA_GPTA1GTC16_CTR 0x0
#define GPTA_GPTA1GTC16_XR  0x0
#define GPTA_GPTA1GTC17_CTR 0x0
#define GPTA_GPTA1GTC17_XR  0x0
#define GPTA_GPTA1GTC18_CTR 0x0
#define GPTA_GPTA1GTC18_XR  0x0
#define GPTA_GPTA1GTC19_CTR 0x0
#define GPTA_GPTA1GTC19_XR  0x0
#define GPTA_GPTA1GTC20_CTR 0x0
#define GPTA_GPTA1GTC20_XR  0x0
#define GPTA_GPTA1GTC21_CTR 0x0
#define GPTA_GPTA1GTC21_XR  0x0
#define GPTA_GPTA1GTC22_CTR 0x0
#define GPTA_GPTA1GTC22_XR  0x0
#define GPTA_GPTA1GTC23_CTR 0x0
#define GPTA_GPTA1GTC23_XR  0x0
#define GPTA_GPTA1GTC24_CTR 0x0
#define GPTA_GPTA1GTC24_XR  0x0
#define GPTA_GPTA1GTC25_CTR 0x00005900
#define GPTA_GPTA1GTC25_XR  0x00000000
#define GPTA_GPTA1GTC26_CTR 0x0
#define GPTA_GPTA1GTC26_XR  0x0
#define GPTA_GPTA1GTC27_CTR 0x0
#define GPTA_GPTA1GTC27_XR  0x0
#define GPTA_GPTA1GTC28_CTR 0x0
#define GPTA_GPTA1GTC28_XR  0x0
#define GPTA_GPTA1GTC29_CTR 0x0
#define GPTA_GPTA1GTC29_XR  0x0
#define GPTA_GPTA1GTC30_CTR 0x0
#define GPTA_GPTA1GTC30_XR  0x0
#define GPTA_GPTA1GTC31_CTR 0x0
#define GPTA_GPTA1GTC31_XR  0x0

/* LTCA2 GTC initialisation macros */ 




/* Gpta_SigmaDelta */
typedef enum
{
    GPTA_DUMMY_0_E,
    GPTA_NUM_SD_SIG_E,
    GPTA_SD_UNDEF_E
} Gpta_SdSgn_t;

#define GPTA_NUM_SD 0


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__gpta__50ms_1s__constant__x64__START
extern const uint64 Gpta_GPTA0_Gbyp_cu64;
__PRAGMA_USE__gpta__50ms_1s__constant__x64__END
__PRAGMA_USE__gpta__50ms_1s__constant__x64__START
extern const uint64 Gpta_GPTA1_Gbyp_cu64;
__PRAGMA_USE__gpta__50ms_1s__constant__x64__END
__PRAGMA_USE__gpta__50ms_1s__constant__x64__START
extern const uint64 Gpta_LTCA2_Gbyp_cu64;
__PRAGMA_USE__gpta__50ms_1s__constant__x64__END


__PRAGMA_USE__gpta__1_5ms__RAM__s32__START
extern Gpta_PwmGen_Buf_t Gpta_HBR_ThrVlv_O_T_st;
extern Gpta_PwmGen_Buf_t Gpta_HBR_ThrVlv2_O_T_st;
extern Gpta_PwmGen_Buf_t Gpta_HBR_ThrVlv3_O_T_st;
__PRAGMA_USE__gpta__1_5ms__RAM__s32__END



/* _LIBRARYABILITY_H                                                                              */
#endif

/* _GPTA_AUTO_CONF_H                                                                              */
#endif
