/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:cj135_priv.h$
 * $Author____:LENZSI$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:UPA4KOR$
 * $Date______:19.02.2014$
 * $Class_____:SWHDR$
 * $Name______:cj135_priv$
 * $Variant___:1.10.0$
 * $Revision__:2$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.10.0; 2     19.02.2014 UPA4KOR
 *    Updated with SPI error bug fix.
 *     
 *     Bug description : When the system has more than one Cj135 chip,
 *     SPI errors may reported by Cj135 driver.
 *     
 *     Changes:
 *     1) Added extern declaration for varible 
 *       Cj135_IsActModeDebounce_ab.
 * 
 * 1.10.0; 1     12.12.2013 UPA4KOR
 *   Updated with test defect found durring Acceptance testing.
 *   
 *   Defect:
 *    Wrong memory section pragama is used for intialized 
 *   variable in CJ135 private header file.
 * 
 * 1.10.0; 0     28.10.2013 UPA4KOR
 *   Craeted for the CJ135 heater pwm signal timing 
 *   changes in swtich - on mode , task
 * 
 * 1.9.0; 0     13.06.2013 UPA4KOR
 *   Added all the required macros and buffer fo CJ136 support
 * 
 * 1.8.0; 1     11.03.2013 ABE3KOR
 *     The variable Cj135_Req_Virtual_au16[] is renamed to 
 *   Cj135_Reg_Virtual_au16.
 *     as per revew comment in id 202174.
 *     this is a hex neutral change.
 * 
 * 1.8.0; 0     18.12.2012 ABE3KOR
 *   A new virtual register-bank parameter is introduced to solve the cooling 
 *   issues of the lambda sensor in Normal 3 operation of cj135.
 *   With the introduction of this, the 16bit validity register is now changed 
 *   to a 32bit. Hence the name is also updated to Cj135_RegBnk_Validity_au32.
 *   a new variable to store the request for the virtual register is also added.
 * 
 * 1.7.0; 6     13.11.2012 NUT1HC
 *   Update pavast file and remove the feature DEBUG
 * 
 * 1.7.0; 5     09.11.2012 ABE3KOR
 *   Cj135_TstImpl_Error() is removed. The functionality is implemented in 
 *   Cj135_TstImpl_UpdateInfo(bool)
 *   #define CJ135_IRQDIST_US                    9990          is defined.
 * 
 * 1.7.0; 4     02.11.2012 ABE3KOR
 *     Introducing wait times after enabling and disabling the voltage divider. 
 *   This 
 *     is needed to stabilize the voltage at the feedback ckt.
 * 
 * 1.7.0; 3     25.10.2012 NUT1HC
 *   Update new findings
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CJ135_PRIV_H
#define _CJ135_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Private header for the CJ135 device driver.
 *
 * \scope INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines fuer Prototypenboard V3
 ***************************************************************************************************
 */

/* Identifier at the ID register of CJ135 device */
#define     CJ135_DEVICE_ID                         0x69
/* Identifier at the ID register of CJ136 device */
#define     CJ136_DEVICE_ID                         0x7F
/* Identifier at the Rev register of supported device*/
#define CJ135_BA_REV                        0x02
#define CJ135_CA_REV                        0x03
#define CJ136_REV                           0x00
/* Identifier at the HW-Rev register of supported device */
#define CJ135_BA_HWREV                      0x00
#define CJ135_CA_HWREV                      0x00
#define CJ136_HWREV                         0x01
#define WRONG_CHIP                          2

#if !defined(CJ135_NUM_ICS)

#define     CJ135_NUM_ICS         0

#endif
/************************************************************************/
/* Defines for Heater diag ERROR Flags                                      */
/************************************************************************/
/*
 ***************************************************************************************************
 * Diagnosis Type definitions
 ***************************************************************************************************
 *
 *
 *                                                                    open load
 *                                                                    |
 *                updated since last call                             |
 *                | testimpulse since last call                       |
 *                | | testimpulse running                             |
 *                | | | testimpulse requested                         |       short to ground
 *                | | | |                                             |       | short to batt
 *                | | | |                                             |       | |
 *                | | | |                                             |       | |
 *                | | | |                                             |       | |
 *                | | | |                                             |       | |
 *                | | | |                                             |       | |
 *                | | | |                                             |       | |
 *                | | | |                 TestedFlags                 |       | |
 *                | | | |                 OL                          |       | |
 *                | | | |                 |                           |       | |
 *                | | | |                 |   SCG                     |       | |
 *                | | | |                 |   | SCB                   |       | |
 *                | | | |                 |   | |                     |       | |
 *                V V V V                 V   V V                     V       V V
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_u32 |N| | | | | | | |0|0|0|0| | | | |0|0|0|0|0|0|0|0| | | | | | | | | valReturn
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *               |       |       |       |       |       |       |       |       |
 *               3130292827262524....                          ...7 6 5 4 3 2 1 0
 */
/* defines for the StageError_u8 */
#define CJ135_HTR_STAGEERROR_STB            0x01   /* short to U battery                  */
#define CJ135_HTR_STAGEERROR_STG            0x02   /* short to ground                     */
#define CJ135_HTR_STAGEERROR_DUMMY1         0x04   /* overtemperatureg                    */
#define CJ135_HTR_STAGEERROR_DUMMY2         0x08   /* short to battery or overtemperature */
#define CJ135_HTR_STAGEERROR_DUMMY3         0x10   /* overload                            */
#define CJ135_HTR_STAGEERROR_OPL            0x20   /* open load                           */
#define CJ135_HTR_STAGEERROR_NEW            0x80   /* new value indication                */
/**/

#define CJ135_HTR_STAGEERROR_MASK          (CJ135_HTR_STAGEERROR_STB    | \
                                            CJ135_HTR_STAGEERROR_STG    | \
                                            CJ135_HTR_STAGEERROR_OPL   )

#define CJ135_HTR_STAGEERROR_SHIFT          (0-0)   /* bit0..5 errors                      */
#define CJ135_HTR_STAGEERROR_NEW_SHIFT      (31-7)  /* NEW indication                      */

/* Defines for the StageFlags_u8 */
#define CJ135_STAGEFLAG_TSTREQ              0x01   /* BIT 0 testimpulse requested         */
#define CJ135_STAGEFLAG_TSTRUN              0x02   /* BIT 1 testimpulse running           */
#define CJ135_STAGEFLAG_TSTFIN              0x04   /* BIT 2 testimpulse finished          */
#define CJ135_STAGEFLAG_SUSPEND             0x40   /* BIT 6 diag suspended                */
#define CJ135_STAGEFLAG_NEW                 0x80   /* BIT 7 new value indication          */

#define CJ135_STAGEFLAG_TST_MASK           (CJ135_STAGEFLAG_TSTREQ | \
                                            CJ135_STAGEFLAG_TSTRUN | \
                                            CJ135_STAGEFLAG_TSTFIN)
#define CJ135_STAGEFLAG_TST_SHIFT           (28-0)  /* bit0..3 flags                      */
#define CJ135_STAGEFLAG_NEW_SHIFT           (31-7)  /* NEW indication                     */

#define CJ135_HTR_TESTEDFLAG_STB            0x01   /* short to U battery                  */
#define CJ135_HTR_TESTEDFLAG_STG            0x02   /* short to ground                     */
#define CJ135_HTR_TESTEDFLAG_DUMMY1         0x04   /* overtemperatureg                    */
#define CJ135_HTR_TESTEDFLAG_OPL            0x08   /* open load                           */
#define CJ135_HTR_TESTEDFLAG_DUMMY2         0x10   /* frequence drift                     */


#define CJ135_HTR_TESTEDFLAG_MASK          (CJ135_HTR_TESTEDFLAG_STB   | \
                                            CJ135_HTR_TESTEDFLAG_STG   | \
                                            CJ135_HTR_TESTEDFLAG_OPL )

#define CJ135_HTR_TESTEDFLAG_SHIFT          (16-0)  /*                     */

#define CJ135_HTR_TESTEDFLAG_HIGH           (CJ135_HTR_TESTEDFLAG_STG | \
                                            CJ135_HTR_TESTEDFLAG_OPL )

#define CJ135_HTR_TESTEDFLAG_LOW            (CJ135_HTR_TESTEDFLAG_STB)

#define CJ135_SCB_LOW_THRSHLD               900
#define CJ135_SCB_HIGH_THRSHLD              9990

#define CJ135_SCG_LOW_THRSHLD               0
#define CJ135_SCG_HIGH_THRSHLD              8600

#define CJ135_OL_LOW_THRSHLD                300
#define CJ135_OL_HIGH_THRSHLD               8600

#define CJ135_SCG_OL_LOW_THRSHLD            0
#define CJ135_SCG_OL_HIGH_THRSHLD           8600

#define CJ135_HTRERR_ALLWAYS_LOW_US         9950
#define CJ135_HTRERR_ALLWAYS_HIGH_US        0

#define CJ135_HTR_VOLT_DIVDR_ENABLE         0
#define CJ135_HTR_VOLT_DIVDR_DISABLE        1

#define CJ135_HTR_PWS_PORT_PIN_HIGH         1
#define CJ135_HTR_PWS_PORT_PIN_LOW          0

#define CJ135_OL_ERR_CNT_US                 0
#define CJ135_SCB_ERR_CNT_US                0

#define CJ135_TSTIMPL_VOLTDIV_WAITTIME_US   75

#define CJ135_IRQDIST_US                    9990

/************************************************************************/
/* Defines for Peripheral monitoring function                                      */
/************************************************************************/

#define   CJ135_COM_ERRCTR_LIMIT        10  /* Debounce counter for communication error                */
#define   CJ135_CHIPSTAT_POWRST_MSK   0x10  /*Bit position of POWRST*/
#define   CJ135_CHIPSTAT_POWRST_VAL   0x10  /*Value of POWRST bit when there is a power on reset. */


/************************************************************************/
/* Defines for heater PWM function                                      */
/************************************************************************/
#define CJ135_HTR_TBL_SIZE        32

/************************************************************************/
/* Defines for modes of CJ135 prototype testboard V3                    */
/* - used by Lsm_Set when only a part of a register should be changed   */
/*   (e.g. CJ135_REGPART_MODE)                                          */
/*   also used for evaluation of MODE contents                          */
/************************************************************************/

/* defines for ChipStat Reg */
#define     CJ135_CHIPSTAT_BNKINDX_BP                       0
#define     CJ135_CHIPSTAT_BNKINDX_MSK                      (0x01<<CJ135_CHIPSTAT_BNKINDX_BP)

/* defines for Status word 3 Measurement Value */
#define     CJ135_STATWRD3_BNKINDX_BP                       6
#define     CJ135_STATWRD3_BNKINDX_MSK                      (0x01 << CJ135_STATWRD3_BNKINDX_BP)

/* define of number of writeable registers at register bank */
#define     CJ135_NUM_REGBNK                                16
#define     CJ135_NUM_REGBNKNEW                             14



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* defines for check byte at SPI transmissions of device driver CJ135 */
#define     CJ135_CHECK_BYTE_MSK                            0x3D00
#define     CJ135_CHECK_BYTE_VAL                            0x2800

#define     CJ135_SPI_CHKBYTE_MSK                           CJ135_CHECK_BYTE_MSK
#define     CJ135_SPI_CHKBYTE_VAL                           CJ135_CHECK_BYTE_VAL

/***************************************************/
/* Defines of SPI commands for CJ135 device driver */
/***************************************************/

/* Values for parity bits */
#define     CJ135_PAR_BIT_0                                 0
#define     CJ135_PAR_BIT_1                                 1

/* Address commands for reading value from a register from register bank (00 - 47) */
/* The address bits are 6 ... 1, bit 0 is the parity bit                           */
/* even parity -> even number of 1s                                                */
#define     CJ135_RAM_ADR_00                                ((0x00 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_01                                ((0x01 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_02                                ((0x02 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_03                                ((0x03 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_04                                ((0x04 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_05                                ((0x05 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_06                                ((0x06 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_07                                ((0x07 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_08                                ((0x08 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_09                                ((0x09 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_10                                ((0x0A << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_11                                ((0x0B << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_12                                ((0x0C << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_13                                ((0x0D << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_14                                ((0x0E << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_15                                ((0x0F << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_16                                ((0x10 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_17                                ((0x11 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_18                                ((0x12 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_19                                ((0x13 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_20                                ((0x14 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_21                                ((0x15 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_22                                ((0x16 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_23                                ((0x17 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_24                                ((0x18 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_25                                ((0x19 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_26                                ((0x1A << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_27                                ((0x1B << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_28                                ((0x1C << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_29                                ((0x1D << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_30                                ((0x1E << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_31                                ((0x1F << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_32                                ((0x20 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_33                                ((0x21 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_34                                ((0x22 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_35                                ((0x23 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_36                                ((0x24 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_37                                ((0x25 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_38                                ((0x26 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_39                                ((0x27 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_40                                ((0x28 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_41                                ((0x29 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_42                                ((0x2A << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_43                                ((0x2B << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_44                                ((0x2C << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_45                                ((0x2D << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_46                                ((0x2E << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_47                                ((0x2F << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_48                                ((0x30 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_49                                ((0x31 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_50                                ((0x32 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_51                                ((0x33 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_52                                ((0x34 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_53                                ((0x35 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_54                                ((0x36 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_55                                ((0x37 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_56                                ((0x38 << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_57                                ((0x39 << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_58                                ((0x3A << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_59                                ((0x3B << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_60                                ((0x3C << 1) | CJ135_PAR_BIT_0)
#define     CJ135_RAM_ADR_61                                ((0x3D << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_62                                ((0x3E << 1) | CJ135_PAR_BIT_1)
#define     CJ135_RAM_ADR_63                                ((0x3F << 1) | CJ135_PAR_BIT_0)

/* Address commands for different registers of register bank */
#define     CJ135_MODE_REGBNK_ADR                           CJ135_RAM_ADR_00
#define     CJ135_UNSET_REGBNK_ADR                          CJ135_RAM_ADR_01
#define     CJ135_UNRGL_B0_REGBNK_ADR                       CJ135_RAM_ADR_02
#define     CJ135_UNRGL_B1_REGBNK_ADR                       CJ135_RAM_ADR_03
#define     CJ135_UNRGL_B2_REGBNK_ADR                       CJ135_RAM_ADR_04
#define     CJ135_UP0LN_REGBNK_ADR                          CJ135_RAM_ADR_05
#define     CJ135_UP0RCH_REGBNK_ADR                         CJ135_RAM_ADR_06
#define     CJ135_UPRGL_B0_REGBNK_ADR                       CJ135_RAM_ADR_07
#define     CJ135_UPRGL_B1_REGBNK_ADR                       CJ135_RAM_ADR_08
#define     CJ135_UPRGL_B2_REGBNK_ADR                       CJ135_RAM_ADR_09
#define     CJ135_IPOFF_REGBNK_ADR                          CJ135_RAM_ADR_10
#define     CJ135_STEERPAT_REGBNK_ADR                       CJ135_RAM_ADR_11
#define     CJ135_CONFIGDSP_REGBNK_ADR                      CJ135_RAM_ADR_12
#define     CJ135_TRIM_REGBNK_ADR                           CJ135_RAM_ADR_13
#define     CJ135_REFPAT_REGBNK_ADR                         CJ135_RAM_ADR_14
#define     CJ135_ACTMODE_REGBNK_ADR                        CJ135_RAM_ADR_16

/* SPI commands for reading measurement data from CJ135 RAM    */
#define     CJ135_RD_RAM_DATA                               0x6100

/* SPI commands for reading 8 bit register contents from CJ135 */
#define     CJ135_RD_ID                                     0x4000
#define     CJ135_RD_REV                                    0x4500
#define     CJ135_RD_HWREV                                  0x4900
#define     CJ135_RD_CHIPST                                 0x4C00
#define     CJ135_RD_DIAG0                                  0x5100
#define     CJ135_RD_DSPST                                  0x5400
#define     CJ135_RD_DIAG1                                  0x6400

/* SPI commands for writing 16 bit register contents at CJ135 (at register bank) */
#define     CJ135_WR_HB_REGBNK                              0x5200
#define     CJ135_WR_LB_REGBNK                              0x5700
#define     CJ135_WR_REGBNK                                 0x5B00

/* SPI commands for reading 16 bit register contents from CJ135 PTB V3 (from register bank) */
#define     CJ135_RD_REGBNK                                 0x5D00

#define     CJ135_RD_REG_MODE                               (CJ135_RD_REGBNK | CJ135_MODE_REGBNK_ADR)
#define     CJ135_RD_REG_UNSET                              (CJ135_RD_REGBNK | CJ135_UNSET_REGBNK_ADR)
#define     CJ135_RD_REG_UP0LN                              (CJ135_RD_REGBNK | CJ135_UP0LN_REGBNK_ADR)
#define     CJ135_RD_REG_UP0RCH                             (CJ135_RD_REGBNK | CJ135_UP0RCH_REGBNK_ADR)
#define     CJ135_RD_REG_CONFIGDSP                          (CJ135_RD_REGBNK | CJ135_CONFIGDSP_REGBNK_ADR)
#define     CJ135_RD_REG_TRIM                               (CJ135_RD_REGBNK | CJ135_TRIM_REGBNK_ADR)

#define     CJ135_RD_REG_UNRGL_B0                           (CJ135_RD_REGBNK | CJ135_UNRGL_B0_REGBNK_ADR)
#define     CJ135_RD_REG_UNRGL_B1                           (CJ135_RD_REGBNK | CJ135_UNRGL_B1_REGBNK_ADR)
#define     CJ135_RD_REG_UNRGL_B2                           (CJ135_RD_REGBNK | CJ135_UNRGL_B2_REGBNK_ADR)

#define     CJ135_RD_REG_UPRGL_B0                           (CJ135_RD_REGBNK | CJ135_UPRGL_B0_REGBNK_ADR)
#define     CJ135_RD_REG_UPRGL_B1                           (CJ135_RD_REGBNK | CJ135_UPRGL_B1_REGBNK_ADR)
#define     CJ135_RD_REG_UPRGL_B2                           (CJ135_RD_REGBNK | CJ135_UPRGL_B2_REGBNK_ADR)

#define     CJ135_RD_REG_ACTMODE                            (CJ135_RD_REGBNK | CJ135_ACTMODE_REGBNK_ADR)

/*********************************************************/
/* Defines of TX-buffer contents for CJ135 SPI sequences */
/*********************************************************/

/* sequence length for evaluation of initialization sequence */
#define     CJ135_INISEQ_RDID_ANSWER_POS                    1
#define     CJ135_INISEQ_RDREV_ANSWER_POS                   2
#define     CJ135_INISEQ_RDHWREV_ANSWER_POS                 3
#define     CJ135_INISEQ_RDCHIPST_ANSWER_POS                4


/* initialization sequence for CJ135 */
#define     CJ135_INI_SEQ                                   \
            CJ135_RD_ID,                                    \
            CJ135_RD_REV,                                   \
            CJ135_RD_HWREV,                                 \
            CJ135_RD_CHIPST,                                \
            CJ135_RD_ID

/* positions of answers for read commands at diagnostic sequence */
#define     CJ135_DIASEQ_RDDIA0_ANSWER_POS                  1
#define     CJ135_DIASEQ_RDDIA1_ANSWER_POS                  2
#define     CJ135_DIASEQ_RDCHIPST_ANSWER_POS                3
#define     CJ135_DIASEQ_RDDSPST_ANSWER_POS                 4
#define     CJ135_DIASEQ_RDACTMODE_ANSWER_POS               5

/* diagnostic sequence for CJ135 */
#define     CJ135_DIA_SEQ                                   \
            CJ135_RD_DIAG0,                                 \
            CJ135_RD_DIAG1,                                 \
            CJ135_RD_CHIPST,                                \
            CJ135_RD_DSPST,                                 \
            CJ135_RD_REG_ACTMODE,                           \
            CJ135_RD_ID

/* workaround for new names at diagnostic sequence */
#define     CJ135_DIAG_SEQ                      CJ135_DIA_SEQ

/* initial content of sequence for writing MODE register at register bank of CJ135 */
#define     CJ135_MODE_SEQ                                  \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_MODE_REGBNK_ADR),   \
            CJ135_RD_ID

/* initial content of sequence for writing UNSET register at register bank of CJ135 */
#define     CJ135_UNSET_SEQ                                 \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UNSET_REGBNK_ADR),  \
            CJ135_RD_ID

/* initial content of sequence for writing BO, B1 and B2 coefficient of UP regulator at register bank of CJ135 */
#define     CJ135_UNBX_SEQ                                  \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UNRGL_B0_REGBNK_ADR),\
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UNRGL_B1_REGBNK_ADR),\
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UNRGL_B2_REGBNK_ADR),\
            CJ135_RD_ID


/* initial content of sequence for writing UP0LEAN and UP0RICH register at register bank of CJ135 */
#define     CJ135_UP0_SEQ                                   \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UP0LN_REGBNK_ADR),   \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UP0RCH_REGBNK_ADR),  \
            CJ135_RD_ID

/* initial content of sequence for writing BO coefficient of UP regulator at register bank of CJ135 */
#define     CJ135_UPBX_SEQ                                  \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UPRGL_B0_REGBNK_ADR),\
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UPRGL_B1_REGBNK_ADR),\
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_UPRGL_B2_REGBNK_ADR),\
            CJ135_RD_ID

/* initial content of sequence for writing IPOFF register at register bank of CJ135 */
#define     CJ135_IPOFF_SEQ                                 \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_IPOFF_REGBNK_ADR),   \
            CJ135_RD_ID

/* initial content of sequence for writing STEERPAT register at register bank of CJ135 */
#define     CJ135_STEERPAT_SEQ                              \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_STEERPAT_REGBNK_ADR),\
            CJ135_RD_ID

/* initial content of sequence for writing REFPAT register at register bank of CJ135 */
#define     CJ135_REFPAT_SEQ                                \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_REFPAT_REGBNK_ADR),  \
            CJ135_RD_ID

/* initial content of sequence for writing CONFIGDSP register at register bank of CJ135 */
#define     CJ135_CONFDSP_SEQ                               \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_CONFIGDSP_REGBNK_ADR),\
            CJ135_RD_ID

/* initial content of sequence for writing TRIM register at register bank of CJ135 */
#define     CJ135_TRIM_SEQ                                  \
            (CJ135_WR_HB_REGBNK | 0x00),                    \
            (CJ135_WR_LB_REGBNK | 0x00),                    \
            (CJ135_WR_REGBNK    | CJ135_TRIM_REGBNK_ADR),    \
            CJ135_RD_ID


/* positions of answers for read commands at read RAM sequence */
#define     CJ135_RAMSEQ_ADR0_ANSWER_POS                    1
#define     CJ135_RAMSEQ_ADR63_ANSWER_POS                   67
#define     CJ135_RAMSEQ_1ST_CHIPID_ANSWER_POS              17
#define     CJ135_RAMSEQ_2ND_CHIPID_ANSWER_POS              34
#define     CJ135_RAMSEQ_3RD_CHIPID_ANSWER_POS              51

#define     CJ135_RAMSEQ_NUM_MEASVALS                       64

/* read RAM sequences 1 - 4, for complete reading */
/* the first read RAM sequence has an additional dummy read command after reading address 15 !!! */
/* sequence read RAM 1 - Tx buffer [0] to [17], 18 values */
#define     CJ135_RDRAM1_SEQ                                                           \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_00),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_01),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_02),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_03),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_04),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_05),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_06),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_07),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_08),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_09),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_10),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_11),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_12),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_13),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_14),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_15),                                    \
            CJ135_RD_ID

/* the second read RAM sequence has an additional dummy read command after reading address 31 !!! */
/* sequence read RAM 2 - Tx buffer [18] to [34], 17 values */
#define     CJ135_RDRAM2_SEQ                                                           \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_16),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_17),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_18),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_19),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_20),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_21),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_22),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_23),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_24),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_25),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_26),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_27),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_28),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_29),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_30),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_31),                                    \
            CJ135_RD_ID

/* the third read RAM sequence has an additional dummy read command after reading address 47 !!! */
/* sequence read RAM 3 - Tx buffer [35] to [51], 17 values */
#define     CJ135_RDRAM3_SEQ                                                           \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_32),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_33),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_34),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_35),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_36),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_37),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_38),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_39),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_40),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_41),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_42),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_43),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_44),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_45),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_46),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_47),                                    \
            CJ135_RD_ID

/* the fourth read RAM sequence has an additional dummy read command after reading address 63 !!! */
/* sequence read RAM 4 - Tx buffer [52] to [68], 17 values */
#define     CJ135_RDRAM4_SEQ                                                           \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_48),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_49),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_50),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_51),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_52),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_53),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_54),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_55),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_56),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_57),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_58),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_59),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_60),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_61),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_62),                                    \
            (CJ135_RD_RAM_DATA | CJ135_RAM_ADR_63),                                    \
            CJ135_RD_ID


#define     CJ135_WRMUP_UG0IAI_POS          16
#define     CJ135_WRMUP_UG0IEI_POS          13
#define     CJ135_WRMUP_UG0A_POS            10
#define     CJ135_WRMUP_UG0E_POS            7
#define     CJ135_WRMUP_UG0I_POS            4


#define CJ135_SYS_INACTV                0
#define CJ135_SYS_ACTV                  1

/* CJ135 heater pwm signal related macros*/
/* macros for IDLE mode CJ135 which are configured as discrete power stage*/
#define CJ135_DISCRETE_LTC1_COMP        0x1039 /* OCM = 010b,REN=1,SOH=SOL = 1, MOD = 01b */
#define CJ135_DISCRETE_LTC1_COMP_OIA    0x5039 /* OIA = 1 */
/* macros for IDLE mode CJ135 which are not configured as discrete power stage*/
#define CJ135_LTC1_COMP                 0x1031  /* OCM = 010b, SOH=SOL = 1, MOD = 01b */
#define CJ135_LTC1_COMP_OIA             0x5031  /* OIA = 1 */
/*Configuration for IDLE mode*/
#define CJ135_LTC2_SOL_FE               0x3811 /*OCM = 111b, SOL = 1,     MOD = 01b */
#define CJ135_LTC3_SOH_FE               0x3821 /*OCM = 111b, SOH = 1,     MOD = 01b */
#define CJ135_IDLE_LTC3_COMP_OIA        0x7821 /* OIA = 1*/
/* macros for any synchonous modes (!= IDLE)*/
#define CJ135_LTC1_CAPTURE              0x0020 /* OCM = 000b, FED = 1,     MOD = 00b */
#define CJ135_LTC2_COMP                 0x3031 /* OCM = 110b, SOH=SOL = 1, MOD = 01b */
#define CJ135_LTC3_COMP                 0x3831 /* OCM = 111b, SOH=SOL = 1, MOD = 01b */
#define CJ135_LTC3_COMP_OIA             0x7831 /* OIA = 1 */

#define CJ135_SWTON_DLY_US    10
#define CJ135_NORM1_DLY_US   268
#define CJ135_NORM2_DLY_US   268
#define CJ135_WARMUP_DLY_US  268
#define CJ135_NORM3_DLY_US   268

#define CJ135_IRQDIST_US   9990
#define CJ135_IRQLTCY_US    100

#define CJ135_WARMUP_SIZE      32
#define CJ135_NORMAL1_SIZE     32
#define CJ135_NORMAL2_SIZE     10
#define CJ135_NORMAL3_SIZE     26
#define CJ135_BA_SWONFL0_SIZE  8
#define CJ135_BA_SWONFL1_SIZE  6
#define CJ135_CA_SWONFL0_SIZE  10
#define CJ135_CA_SWONFL1_SIZE  8
/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*State machine*/

typedef enum
{
    CJ135_INI,
    CJ135_REGBNK_ACPTREQ_IDLE,
    CJ135_REGBNK_TXREQ_IDLE,
    CJ135_REGBNK_RETX_IDLE,
    CJ135_REGBNK_EVALRX_IDLE,
    CJ135_REGBNK_ACPTREQ_ACTV,
    CJ135_REGBNK_TXREQ_ACTV,
    CJ135_REGBNK_RETX_ACTV,
    CJ135_REGBNK_EVALRX_ACTV,
    CJ135_RAM_FAILURE
}CJ135_CHIP_STATE_t;


/* for debug purpose */
typedef enum
{
    CJ135_DEV_OPMD_RST,
    CJ135_DEV_OPMD_IDLE,
    CJ135_DEV_OPMD_SWTON,
    CJ135_DEV_OPMD_N1,
    CJ135_DEV_OPMD_N2,
    CJ135_DEV_OPMD_WRMUP,
    CJ135_DEV_OPMD_N3,
    CJ135_DEV_OPMD_FAIL
} Cj135_DevOpMode_t;

/* Structure for storing the timestamps of the interrupts from CJ135        */
/*                                                                          */
/* tiLastTStmp_u32   - time stamp of last interrupt                         */
/* tiDifTStmp_u32    - time distance between two interrupts                 */
/* tiMValEvalDur_u32 - duration of ISR while evaluation of measurement data */
/* stTStmpRead_u8   - gives the read status of the time stamp              */
typedef struct
{
   uint32           tiLastTStmp_u32;
   uint32           tiDifTStmp_u32;
   uint32           tiMValEvalDur_u32;
   uint8            stTStmpRead_u8;
}Cj135_TStmp_t;


/* Structure containing the mapping of the RAM of CJ135 at operation mode SWITCHON */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00 */
    uint16          Uipe01_u16;             /* RAM address 01 */
    uint16          Ug001_u16;              /* RAM address 02 */
    uint16          Ug0a01_u16;             /* RAM address 03 */
    uint16          Ug0i01_u16;             /* RAM address 04 */
    uint16          Ug0e01_u16;             /* RAM address 05 */
    uint16          Up001_u16;              /* RAM address 06 */
    uint16          Uria01_u16;             /* RAM address 07 */
    uint16          Uoffgnd101_u16;         /* RAM address 08 */
    uint16          Uref101_u16;            /* RAM address 09 */
    uint16          Uoffgnd201_u16;         /* RAM address 10 */
    uint16          Uref2101_u16;           /* RAM address 11 */
    uint16          Uref2201_u16;           /* RAM address 12 */
    uint16          Uoffgnd301_u16;         /* RAM address 13 */
    uint16          Uref301_u16;            /* RAM address 14 */
    uint16          Uoffvcc101_u16;         /* RAM address 15 */
    uint16          Uoffvcc201_u16;         /* RAM address 16 */
    uint16          Uoffvcc301_u16;         /* RAM address 17 */
    uint16          Uoffmes01_u16;          /* RAM address 18 */
    uint16          Ugk01_u16;              /* RAM address 19 */
    uint16          Uipcal01_u16;           /* RAM address 20 */
    uint16          Ugk02_u16;              /* RAM address 21 */
    uint16          Uipcal02_u16;           /* RAM address 22 */
    uint16          Ugk03_u16;              /* RAM address 23 */
    uint16          Uipcal03_u16;           /* RAM address 24 */
    uint16          Ugk04_u16;              /* RAM address 25 */
    uint16          Uipcal04_u16;           /* RAM address 26 */
    uint16          Ugk05_u16;              /* RAM address 27 */
    uint16          Uipcal05_u16;           /* RAM address 28 */
    uint16          Ugk06_u16;              /* RAM address 29 */
    uint16          Uipcal06_u16;           /* RAM address 30 */
    uint16          Ugk07_u16;              /* RAM address 31 */
    uint16          Uipcal07_u16;           /* RAM address 32 */
    uint16          Ugk08_u16;              /* RAM address 33 */
    uint16          Ugkav01_u16;            /* RAM address 34 */
    uint16          Uipcal08_u16;           /* RAM address 35 */
    uint16          Uipcalav01_u16;         /* RAM address 36 */
    uint16          State01_u16;            /* RAM address 37 */
    uint16          State02_u16;            /* RAM address 38 */
    uint16          State03_u16;            /* RAM address 39 */
    uint16          RamAdr40_u16;           /* RAM address 40 */
    uint16          RamAdr41_u16;           /* RAM address 41 */
    uint16          RamAdr42_u16;           /* RAM address 42 */
    uint16          RamAdr43_u16;           /* RAM address 43 */
    uint16          RamAdr44_u16;           /* RAM address 44 */
    uint16          RamAdr45_u16;           /* RAM address 45 */
    uint16          RamAdr46_u16;           /* RAM address 46 */
    uint16          RamAdr47_u16;           /* RAM address 47 */
    uint16          RamAdr48_u16;           /* RAM address 48 */
    uint16          RamAdr49_u16;           /* RAM address 49 */
    uint16          RamAdr50_u16;           /* RAM address 50 */
    uint16          RamAdr51_u16;           /* RAM address 51 */
    uint16          RamAdr52_u16;           /* RAM address 52 */
    uint16          RamAdr53_u16;           /* RAM address 53 */
    uint16          RamAdr54_u16;           /* RAM address 54 */
    uint16          RamAdr55_u16;           /* RAM address 55 */
    uint16          RamAdr56_u16;           /* RAM address 56 */
    uint16          RamAdr57_u16;           /* RAM address 57 */
    uint16          RamAdr58_u16;           /* RAM address 58 */
    uint16          RamAdr59_u16;           /* RAM address 59 */
    uint16          RamAdr60_u16;           /* RAM address 60 */
    uint16          RamAdr61_u16;           /* RAM address 61 */
    uint16          RamAdr62_u16;           /* RAM address 62 */
    uint16          RamAdr63_u16;           /* RAM address 63 */
}Cj135_RamMapSwtOn_t;
/* Structure containing the mapping of the RAM of CJ135 at operation mode SWITCHON, */
/* for devices CJ135 at ASIC step CA (or with other naming convention C1, Metalfix) */
/* The difference to the formerly RAM map is at address 6 to 9.                     */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00 */
    uint16          Uipe01_u16;             /* RAM address 01 */
    uint16          Ug001_u16;              /* RAM address 02 */
    uint16          Ug0a01_u16;             /* RAM address 03 */
    uint16          Ug0i01_u16;             /* RAM address 04 */
    uint16          Ug0e01_u16;             /* RAM address 05 */
    uint16          Uoffgnd101_u16;         /* RAM address 06 */
    uint16          Uref101_u16;            /* RAM address 07 */
    uint16          Up001_u16;              /* RAM address 08 */
    uint16          Uria01Uoffvcci201_u16;  /* RAM address 09 */
    uint16          Uoffgnd201_u16;         /* RAM address 10 */
    uint16          Uref2101_u16;           /* RAM address 11 */
    uint16          Uref2201_u16;           /* RAM address 12 */
    uint16          Uoffgnd301_u16;         /* RAM address 13 */
    uint16          Uref301_u16;            /* RAM address 14 */
    uint16          Uoffvcc101_u16;         /* RAM address 15 */
    uint16          Uoffvcc201_u16;         /* RAM address 16 */
    uint16          Uoffvcc301_u16;         /* RAM address 17 */
    uint16          Uoffmes01_u16;          /* RAM address 18 */
    uint16          Ugk01_u16;              /* RAM address 19 */
    uint16          Uipcal01_u16;           /* RAM address 20 */
    uint16          Ugk02_u16;              /* RAM address 21 */
    uint16          Uipcal02_u16;           /* RAM address 22 */
    uint16          Ugk03_u16;              /* RAM address 23 */
    uint16          Uipcal03_u16;           /* RAM address 24 */
    uint16          Ugk04_u16;              /* RAM address 25 */
    uint16          Uipcal04_u16;           /* RAM address 26 */
    uint16          Ugk05_u16;              /* RAM address 27 */
    uint16          Uipcal05_u16;           /* RAM address 28 */
    uint16          Ugk06_u16;              /* RAM address 29 */
    uint16          Uipcal06_u16;           /* RAM address 30 */
    uint16          Ugk07_u16;              /* RAM address 31 */
    uint16          Uipcal07_u16;           /* RAM address 32 */
    uint16          Ugk08_u16;              /* RAM address 33 */
    uint16          Ugkav01_u16;            /* RAM address 34 */
    uint16          Uipcal08_u16;           /* RAM address 35 */
    uint16          Uipcalav01_u16;         /* RAM address 36 */
    uint16          State01_u16;            /* RAM address 37 */
    uint16          State02_u16;            /* RAM address 38 */
    uint16          State03_u16;            /* RAM address 39 */
    uint16          RamAdr40_u16;           /* RAM address 40 */
    uint16          RamAdr41_u16;           /* RAM address 41 */
    uint16          RamAdr42_u16;           /* RAM address 42 */
    uint16          RamAdr43_u16;           /* RAM address 43 */
    uint16          RamAdr44_u16;           /* RAM address 44 */
    uint16          RamAdr45_u16;           /* RAM address 45 */
    uint16          RamAdr46_u16;           /* RAM address 46 */
    uint16          RamAdr47_u16;           /* RAM address 47 */
    uint16          RamAdr48_u16;           /* RAM address 48 */
    uint16          RamAdr49_u16;           /* RAM address 49 */
    uint16          RamAdr50_u16;           /* RAM address 50 */
    uint16          RamAdr51_u16;           /* RAM address 51 */
    uint16          RamAdr52_u16;           /* RAM address 52 */
    uint16          RamAdr53_u16;           /* RAM address 53 */
    uint16          RamAdr54_u16;           /* RAM address 54 */
    uint16          RamAdr55_u16;           /* RAM address 55 */
    uint16          RamAdr56_u16;           /* RAM address 56 */
    uint16          RamAdr57_u16;           /* RAM address 57 */
    uint16          RamAdr58_u16;           /* RAM address 58 */
    uint16          RamAdr59_u16;           /* RAM address 59 */
    uint16          RamAdr60_u16;           /* RAM address 60 */
    uint16          RamAdr61_u16;           /* RAM address 61 */
    uint16          RamAdr62_u16;           /* RAM address 62 */
    uint16          RamAdr63_u16;           /* RAM address 63 */
}Cj135_RamMapSwtOnCAStep_t;


/* Structure containing the mapping of the RAM of CJ135 at operation mode WARMUP */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00 */
    uint16          Up0001_u16;             /* RAM address 01 */
    uint16          Un0WL01_u16;            /* RAM address 02 */
    uint16          Ug001_u16;              /* RAM address 03 */
    uint16          Ug0i01_u16;             /* RAM address 04 */
    uint16          Up0002_u16;             /* RAM address 05 */
    uint16          Un0WL02_u16;            /* RAM address 06 */
    uint16          Ug0e01_u16;             /* RAM address 07 */
    uint16          Up0003_u16;             /* RAM address 08 */
    uint16          Un0WL03_u16;            /* RAM address 09 */
    uint16          Ug0a01_u16;             /* RAM address 10 */
    uint16          Up0004_u16;             /* RAM address 11 */
    uint16          Un0WL04_u16;            /* RAM address 12 */
    uint16          Ug0iei01_u16;           /* RAM address 13 */
    uint16          Up0005_u16;             /* RAM address 14 */
    uint16          Un0WL05_u16;            /* RAM address 15 */
    uint16          Ug0iai01_u16;           /* RAM address 16 */
    uint16          Up0006_u16;             /* RAM address 17 */
    uint16          Un0WL06_u16;            /* RAM address 18 */
    uint16          Uria01_u16;             /* RAM address 19 */
    uint16          Ucal01_u16;             /* RAM address 20 */
    uint16          Uoff01_u16;             /* RAM address 21 */
    uint16          Uref01_u16;             /* RAM address 22 */
    uint16          Up0007_u16;             /* RAM address 23 */
    uint16          Un0WL07_u16;            /* RAM address 24 */
    uint16          UrieWL01_u16;           /* RAM address 25 */
    uint16          Up0008_u16;             /* RAM address 26 */
    uint16          Un0WL08_u16;            /* RAM address 27 */
    uint16          Uoffvcci201_u16;        /* RAM address 28 */
    uint16          Up0009_u16;             /* RAM address 29 */
    uint16          Un0WL09_u16;            /* RAM address 30 */
    uint16          Up0010_u16;             /* RAM address 31 */
    uint16          Un0WL10_u16;            /* RAM address 32 */
    uint16          Up0011_u16;             /* RAM address 33 */
    uint16          Un0WL11_u16;            /* RAM address 34 */
    uint16          Up0012_u16;             /* RAM address 35 */
    uint16          Un0WL12_u16;            /* RAM address 36 */
    uint16          Up0013_u16;             /* RAM address 37 */
    uint16          Un0WL13_u16;            /* RAM address 38 */
    uint16          Up0014_u16;             /* RAM address 39 */
    uint16          Un0WL14_u16;            /* RAM address 40 */
    uint16          Up0015_u16;             /* RAM address 41 */
    uint16          Un0WL15_u16;            /* RAM address 42 */
    uint16          State01_u16;            /* RAM address 43 */
    uint16          State02_u16;            /* RAM address 44 */
    uint16          State03_u16;            /* RAM address 45 */
    uint16          RamAdr46_u16;           /* RAM address 46 */
    uint16          RamAdr47_u16;           /* RAM address 47 */
    uint16          RamAdr48_u16;           /* RAM address 48 */
    uint16          RamAdr49_u16;           /* RAM address 49 */
    uint16          RamAdr50_u16;           /* RAM address 50 */
    uint16          RamAdr51_u16;           /* RAM address 51 */
    uint16          RamAdr52_u16;           /* RAM address 52 */
    uint16          RamAdr53_u16;           /* RAM address 53 */
    uint16          RamAdr54_u16;           /* RAM address 54 */
    uint16          RamAdr55_u16;           /* RAM address 55 */
    uint16          RamAdr56_u16;           /* RAM address 56 */
    uint16          RamAdr57_u16;           /* RAM address 57 */
    uint16          RamAdr58_u16;           /* RAM address 58 */
    uint16          RamAdr59_u16;           /* RAM address 59 */
    uint16          RamAdr60_u16;           /* RAM address 60 */
    uint16          RamAdr61_u16;           /* RAM address 61 */
    uint16          RamAdr62_u16;           /* RAM address 62 */
    uint16          RamAdr63_u16;           /* RAM address 63 */
}Cj135_RamMapWrmUp_t;

/* Structure containing the mapping of the RAM of CJ135 at operation mode NORMAL1 */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00 */
    uint16          Up0Lp01_u16;            /* RAM address 01 */
    uint16          Ip01_u16;               /* RAM address 02 */
    uint16          Up0Lp02_u16;            /* RAM address 03 */
    uint16          Ip02_u16;               /* RAM address 04 */
    uint16          Up0Rn01_u16;            /* RAM address 05 */
    uint16          Un0Ln01_u16;            /* RAM address 06 */
    uint16          UrieLn01_u16;           /* RAM address 07 */
    uint16          Ip03_u16;               /* RAM address 08 */
    uint16          Ugi01_u16;              /* RAM address 09 */
    uint16          Uga01_u16;              /* RAM address 10 */
    uint16          Up0Lp03_u16;            /* RAM address 11 */
    uint16          Ip04_u16;               /* RAM address 12 */
    uint16          Up0Rn02_u16;            /* RAM address 13 */
    uint16          Ug001_u16;              /* RAM address 14 */
    uint16          Ip05_u16;               /* RAM address 15 */
    uint16          Up0Rn03_u16;            /* RAM address 16 */
    uint16          Un0Ln02_u16;            /* RAM address 17 */
    uint16          Uria01UrieLn02_u16;     /* RAM address 18 */
    uint16          Ip06_u16;               /* RAM address 19 */
    uint16          Ugi02_u16;              /* RAM address 20 */
    uint16          Uga02_u16;              /* RAM address 21 */
    uint16          Up0Lp04_u16;            /* RAM address 22 */
    uint16          Ip07_u16;               /* RAM address 23 */
    uint16          Uape01_u16;             /* RAM address 24 */
    uint16          Uipe01Uoffipe1201_u16;  /* RAM address 25 */
    uint16          Up0Lp05_u16;            /* RAM address 26 */
    uint16          Ip08_u16;               /* RAM address 27 */
    uint16          UpLp01_u16;             /* RAM address 28 */
    uint16          Up0Rn04_u16;            /* RAM address 29 */
    uint16          Un0Ln03_u16;            /* RAM address 30 */
    uint16          UrieLn03Uoffvcci1201_u16;   /* RAM address 31 */
    uint16          Ip09_u16;               /* RAM address 32 */
    uint16          Ugi03_u16;              /* RAM address 33 */
    uint16          Uga03_u16;              /* RAM address 34 */
    uint16          Up0Lp06_u16;            /* RAM address 35 */
    uint16          Ip10_u16;               /* RAM address 36 */
    uint16          Up0Lp07_u16;            /* RAM address 37 */
    uint16          Ip11_u16;               /* RAM address 38 */
    uint16          Up0Rn05_u16;            /* RAM address 39 */
    uint16          Un0Ln04_u16;            /* RAM address 40 */
    uint16          UrieLn04_u16;           /* RAM address 41 */
    uint16          Ip12_u16;               /* RAM address 42 */
    uint16          Ugi04_u16;              /* RAM address 43 */
    uint16          Uga04_u16;              /* RAM address 44 */
    uint16          Up0Lp08_u16;            /* RAM address 45 */
    uint16          Ip13_u16;               /* RAM address 46 */
    uint16          Up0Lp09_u16;            /* RAM address 47 */
    uint16          Ip14_u16;               /* RAM address 48 */
    uint16          Up0Rn06_u16;            /* RAM address 49 */
    uint16          Un0Ln05_u16;            /* RAM address 50 */
    uint16          UrieLn05_u16;           /* RAM address 51 */
    uint16          Ip15_u16;               /* RAM address 52 */
    uint16          Ugi05_u16;              /* RAM address 53 */
    uint16          Ucal01_u16;             /* RAM address 54 */
    uint16          Uoff01_u16;             /* RAM address 55 */
    uint16          Uref01_u16;             /* RAM address 56 */
    uint16          Uga05_u16;              /* RAM address 57 */
    uint16          State01_u16;            /* RAM address 58 */
    uint16          State02_u16;            /* RAM address 59 */
    uint16          State03_u16;            /* RAM address 60 */
    uint16          RamAdr61_u16;           /* RAM address 61 */
    uint16          RamAdr62_u16;           /* RAM address 62 */
    uint16          RamAdr63_u16;           /* RAM address 63 */
}Cj135_RamMapNorm1_t;

/* Structure containing the mapping of the RAM of CJ135 at operation mode NORMAL2 */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00*/
    uint16          Up0Lp01_u16;            /* RAM address 01*/
    uint16          Ip01_u16;               /* RAM address 02*/
    uint16          Up0Lp02_u16;            /* RAM address 03*/
    uint16          Ip02_u16;               /* RAM address 04*/
    uint16          Up0Rn01_u16;            /* RAM address 05*/
    uint16          Un0Ln01_u16;            /* RAM address 06*/
    uint16          UrieLn01_u16;           /* RAM address 07*/
    uint16          Ip03_u16;               /* RAM address 08*/
    uint16          UpLp01_u16;             /* RAM address 09*/
    uint16          Up0Rn02_u16;            /* RAM address 10*/
    uint16          Ug001_u16;              /* RAM address 11*/
    uint16          Ip04_u16;               /* RAM address 12*/
    uint16          Ucal01_u16;             /* RAM address 13*/
    uint16          Uoff01_u16;             /* RAM address 14*/
    uint16          Uref01_u16;             /* RAM address 15*/
    uint16          Uga01_u16;              /* RAM address 16*/
    uint16          Up0Lp03_u16;            /* RAM address 17*/
    uint16          Ip05_u16;               /* RAM address 18*/
    uint16          Ugui01_u16;             /* RAM address 19*/
    uint16          Ugua01_u16;             /* RAM address 20*/
    uint16          Up0Lp04_u16;            /* RAM address 21*/
    uint16          Ip06_u16;               /* RAM address 22*/
    uint16          Ugui02_u16;             /* RAM address 23*/
    uint16          Ugua02_u16;             /* RAM address 24*/
    uint16          Up0Lp05_u16;            /* RAM address 25*/
    uint16          Ip07_u16;               /* RAM address 26*/
    uint16          Ugui03_u16;             /* RAM address 27*/
    uint16          Ugua03_u16;             /* RAM address 28*/
    uint16          Up0Lp06_u16;            /* RAM address 29*/
    uint16          Ip08_u16;               /* RAM address 30*/
    uint16          Ugui04_u16;             /* RAM address 31*/
    uint16          Ugua04_u16;             /* RAM address 32*/
    uint16          Up0Lp07_u16;            /* RAM address 33*/
    uint16          Ip09_u16;               /* RAM address 34*/
    uint16          Ugui05_u16;             /* RAM address 35*/
    uint16          Ugua05_u16;             /* RAM address 36*/
    uint16          Up0Lp08_u16;            /* RAM address 37*/
    uint16          Ip10_u16;               /* RAM address 38*/
    uint16          Ugui06_u16;             /* RAM address 39*/
    uint16          Ugua06_u16;             /* RAM address 40*/
    uint16          Up0Lp09_u16;            /* RAM address 41*/
    uint16          Ip11_u16;               /* RAM address 42*/
    uint16          Ugui07_u16;             /* RAM address 43*/
    uint16          Ugua07_u16;             /* RAM address 44*/
    uint16          Up0Lp10_u16;            /* RAM address 45*/
    uint16          Ip12_u16;               /* RAM address 46*/
    uint16          Ugui08_u16;             /* RAM address 47*/
    uint16          Ugua08_u16;             /* RAM address 48*/
    uint16          Up0Lp11_u16;            /* RAM address 49*/
    uint16          Ip13_u16;               /* RAM address 50*/
    uint16          Ugui09_u16;             /* RAM address 51*/
    uint16          Ugua09_u16;             /* RAM address 52*/
    uint16          Up0Lp12_u16;            /* RAM address 53*/
    uint16          Ip14_u16;               /* RAM address 54*/
    uint16          Ugui10_u16;             /* RAM address 55*/
    uint16          Ugua10_u16;             /* RAM address 56*/
    uint16          Up0Lp13_u16;            /* RAM address 57*/
    uint16          Ip15_u16;               /* RAM address 58*/
    uint16          Ugui11_u16;             /* RAM address 59*/
    uint16          Ugua11_u16;             /* RAM address 60*/
    uint16          State01_u16;            /* RAM address 61*/
    uint16          State02_u16;            /* RAM address 62*/
    uint16          State03_u16;            /* RAM address 63*/
}Cj135_RamMapNorm2_t;


/* Structure containing the mapping of the RAM of CJ135 at operation mode NORMAL3 */
typedef struct
{
    uint16          Mode_u16;               /* RAM address 00, receive buffer element 2 */
    uint16          Ip01_u16;               /* RAM address 01, receive buffer element 3 */
    uint16          Ui2101_u16;             /* RAM address 02, receive buffer element 4 */
    uint16          Up0Lp01_u16;            /* RAM address 03, receive buffer element 5 */
    uint16          Ip02_u16;               /* RAM address 04, receive buffer element 6 */
    uint16          Ua201_u16;              /* RAM address 05, receive buffer element 7 */
    uint16          UpLp01_u16;             /* RAM address 06, receive buffer element 8 */
    uint16          Un0Ln01_u16;            /* RAM address 07, receive buffer element 9 */
    uint16          UrieLn01_u16;           /* RAM address 08, receive buffer element 10 */
    uint16          Ip03_u16;               /* RAM address 09, receive buffer element 11 */
    uint16          Up0Lp02_u16;            /* RAM address 10, receive buffer element 12 */
    uint16          Ip04_u16;               /* RAM address 11, receive buffer element 13 */
    uint16          Ui2102_u16;             /* RAM address 12, receive buffer element 14 */
    uint16          UpLp02_u16;             /* RAM address 13, receive buffer element 15 */
    uint16          Ug001_u16;              /* RAM address 14, receive buffer element 16 */
    uint16          Ip05_u16;               /* RAM address 15, receive buffer element 17 */
    uint16          Ua202_u16;              /* RAM address 16, receive buffer element 19 */
    uint16          Un0Ln02_u16;            /* RAM address 17, receive buffer element 20 */
    uint16          Uria01UrieLn02_u16;     /* RAM address 18, receive buffer element 21 */
    uint16          Ip06_u16;               /* RAM address 19, receive buffer element 22 */
    uint16          Ip07_u16;               /* RAM address 20, receive buffer element 23 */
    uint16          Ui2103_u16;             /* RAM address 21, receive buffer element 24 */
    uint16          Up0Lp03_u16;            /* RAM address 22, receive buffer element 25 */
    uint16          Ip08_u16;               /* RAM address 23, receive buffer element 26 */
    uint16          Ua203_u16;              /* RAM address 24, receive buffer element 27 */
    uint16          UpLp03_u16;             /* RAM address 25, receive buffer element 28 */
    uint16          Un0Ln03_u16;            /* RAM address 26, receive buffer element 29 */
    uint16          UrieLn03Uoffvcci1201_u16; /* RAM address 27, receive buffer element 30 */
    uint16          Ip09_u16;               /* RAM address 28, receive buffer element 31 */
    uint16          Ip10_u16;               /* RAM address 29, receive buffer element 32 */
    uint16          Ui2104_u16;             /* RAM address 30, receive buffer element 33 */
    uint16          Up0Lp04_u16;            /* RAM address 31, receive buffer element 34 */
    uint16          Ip11_u16;               /* RAM address 32, receive buffer element 36 */
    uint16          Ua204_u16;              /* RAM address 33, receive buffer element 37 */
    uint16          UpLp04_u16;             /* RAM address 34, receive buffer element 38 */
    uint16          Un0Ln04_u16;            /* RAM address 35, receive buffer element 39 */
    uint16          UrieLn04_u16;           /* RAM address 36, receive buffer element 40 */
    uint16          Ip12_u16;               /* RAM address 37, receive buffer element 41 */
    uint16          Ugi01Uga01_u16;         /* RAM address 38, receive buffer element 42 */
    uint16          Ucal01_u16;             /* RAM address 39, receive buffer element 43 */
    uint16          Uoff01_u16;             /* RAM address 40, receive buffer element 44 */
    uint16          Uref01_u16;             /* RAM address 41, receive buffer element 45 */
    uint16          Uga02Ugi02_u16;         /* RAM address 42, receive buffer element 46 */
    uint16          Ip13_u16;               /* RAM address 43, receive buffer element 47 */
    uint16          Ugui01Ugua01_u16;       /* RAM address 44, receive buffer element 48 */
    uint16          Ugua01Ugui01_u16;       /* RAM address 45, receive buffer element 49 */
    uint16          Up0Lp05_u16;            /* RAM address 46, receive buffer element 50 */
    uint16          Ip14_u16;               /* RAM address 47, receive buffer element 51 */
    uint16          Ua205_u16;              /* RAM address 48, receive buffer element 53 */
    uint16          Ua3101_u16;             /* RAM address 49, receive buffer element 54 */
    uint16          Ua3201_u16;             /* RAM address 50, receive buffer element 55 */
    uint16          Ua3301_u16;             /* RAM address 51, receive buffer element 56 */
    uint16          UpLp05_u16;             /* RAM address 52, receive buffer element 57 */
    uint16          Un0Ln05_u16;            /* RAM address 53, receive buffer element 58 */
    uint16          UrieLn05_u16;           /* RAM address 54, receive buffer element 59 */
    uint16          Ip15_u16;               /* RAM address 55, receive buffer element 60 */
    uint16          Ui2105_u16;             /* RAM address 56, receive buffer element 61 */
    uint16          Ui2201_u16;             /* RAM address 57, receive buffer element 62 */
    uint16          Ui2301_u16;             /* RAM address 58, receive buffer element 63 */
    uint16          Ui2401_u16;             /* RAM address 59, receive buffer element 64 */
    uint16          Ui401Uoffipe1201_u16;   /* RAM address 60, receive buffer element 65 */
    uint16          State01_u16;            /* RAM address 61, receive buffer element 66 */
    uint16          State02_u16;            /* RAM address 62, receive buffer element 67 */
    uint16          State03_u16;            /* RAM address 63, receive buffer element 68 */
}Cj135_RamMapNorm3_t;

typedef struct
{
    uint8 diag0_u8;
    uint8 diag1_u8;
    uint8 chipstat_u8;
    uint8 dspstat_u8;
    bool  stEvalBnkSwtErr_b;
}Cj135_DiagStatus_Reg_t;

typedef struct
{
    uint32  timestamp_u32;
    uint8   failpos_u8;
    uint8   stflags_u8;
}Cj135_RamMeas_Info_t;

// typedef for runtime structure
typedef struct
{
    uint16       tiPerUs_u16;                   // heater signal period duration
    uint16       tiPlsUs_u16;                   // heater signal pulse duration
    Cj135_Mode_t swtState_e;                    // current state of CJ135 state machine
    Cj135_Mode_t swtStateOld_e;                 // old state of CJ135 state machine
    uint16       tiLtcyUs_u16;                  // latency measurement (interrupt delay)
    uint8        cntIsr_u8;                     // ISR counter
} Cj135_HtrPwm_t;


// typedef for global configuration array
typedef struct
{
    GPTA0_LTC_t*     adLtcCtr_pu32;          // timer cell address
    volatile uint32* adSrn_pu32;             // pointer to service request node
    Cj135_HtrPwm_t*  ptrHtr_ps;              // pointer to Heater Pwm structure
} Cj135_Conf_t;

typedef struct
{
    uint8  StageTested_u8;      /* Testable information */
    uint8  StageError_u8;      /* Error information */
    uint8  StageFlags_u8;        /* Stage of flags */
    uint8  PrevSTageTested_u8; /*used to remove false SCB error instance when duty changes from
                                0% to >900us in switchon mode.But used to bypass in all modes*/
    bool   Eval_SCG_OL_Only_b; /*When set allow to check the errors with voltage
                                 divider disabled*/
    bool   NotCheck_OL_b;        /*When SCG condition removed without sync with the evaluation
                                then OL detects erroniously.To eliminate set a debounce*/
    bool   ModeChanged_b;       /*Mode change information to disable the diagnosis for one cycle
                                to avoid false error information to the ASW during mode transition*/
    bool   Cud_BitSet_b;        /* If CUD bit set then only consider inactive cell as previous duty
                                in Cj135_EvalDiaDisHtrPs function else consider only the active cell
                                This is added to eliminate the wrong SCB error when two ISR comes
                                with in 10ms proc */
}Cj135_Htr_DiagStage_t;

typedef struct
{
    GPTA0_LTC_t*        adLtcCtr_HtrGated_pu32; /* timer cell address of the gated mode GPTA */
    volatile uint32*    adSrn_pu32;             /* pointer to service request node */
    uint16              numHighTime_u16;        /* high test impulse time */
    uint16              numLowTime_u16;         /* low test impulse time */
    uint16              param1_u16;             /* Port number of the Discrete heater power stage */
    uint16              param2_u16;             /* Pin number of the Discrete heater power stage */
    uint8               htrDiagSwt_Port;        /* Port number of Voltage divider switch */
    uint8               htrDiagSwt_Pin;         /* Pin number of Voltage divider switch */
    bool                psType_b;               /* Power Stage Type.0 => ASIC power stage, 1 => Discrete */
} Cj135_Htr_DPSInfo_t;

#define CJ135_HTR_PSTYP_DISCRETE      1
#define CJ135_HTR_PSTYP_ASIC          0

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Functions                                                                                      */
/* The following functions are called inside the runtime process, therefore pragma with NormalSpeed is used */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern  bool Cj135_StSys_NoInterrupt(void);
extern  void Cj135_ToggleIntPin4Sync(void);
extern  void Cj135_DiagStatusReg_Eval(void);
extern  void Cj135_DiagStatusReg_Tx(void);
extern  void  Cj135_InterruptMon(void);
extern  uint8 Cj135_GetRamMeas_Normal1(uint32 par_u32, uint16 *addr_pu16, uint32 chipidx_u32);
extern  uint8 Cj135_GetRamMeas_Normal2(uint32 par_u32, uint16 *addr_pu16, uint32 chipidx_u32);
extern  uint8 Cj135_GetRamMeas_Normal3(uint32 par_u32, uint16 *addr_pu16, uint32 chipidx_u32);
extern  uint8 Cj135_GetRamMeas_SwtOn(uint32 par_u32, uint16 *addr_pu16, uint32 chipidx_u32);
extern  uint8 Cj135_GetRamMeas_WrmUp(uint32 par_u32, uint16 *addr_pu16, uint32 chipidx_u32);
extern  void Cj135_Expand13BitTo16Bit(volatile uint16* value_pu16, uint8 numvals_u8);
extern  void Cj135_Expand14BitTo16Bit(volatile uint16* valcompl_pu16, uint8 numvals_u8);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* Functions                                                                                      */
/* The following functions are called inside the runtime process, therefore pragma with NormalSpeed is used */
#ifdef CJ135_HTR_DISPS_PRESENT

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern  void Cj135_Diag_Testimpulse(uint32 numChip_u32);
extern  void Cj135_TstImpl_Wait(void);
extern  void Cj135_TstImpl_EvalHighPulse(void);
extern  void Cj135_TstImpl_DisVoltDiv(void);
extern  void Cj135_TstImpl_SCG_OL_ErrDetect(void);
extern  void Cj135_TstImpl_LowPulse(void);
extern  void Cj135_TstImpl_SCB_ErrDetect(void);
extern  void Cj135_TstImpl_UpdateInfo(bool stTstImpl_b);

__PRAGMA_USE__CODE__hwe__NormalSpeed__END

#endif /* #ifdef CJ135_HTR_DISPS_PRESENT */

/* The following functions are called inside the interrupt service routine, therefore pragma with HighSpeed is used */
__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern  void Cj135_ISR(void);
extern  void Cj135_EvalTStmp(uint32 tiTimeStamp_u32);
extern  void Cj135_RamBnk_Rx(uint chipidx_ui);
extern  void Cj135_RamBnk_Tx(uint chipidx_ui);
extern  void Cj135_RamBnk_Eval(uint chipidx_ui);
extern  void Cj135_ChipState_RamFail(uint chipidx_ui);
extern  void Cj135_RamSearch(uint chipidx_ui);
extern  bool Cj135_RamBnk_ChkRxBit(uint32 chipidx_u32);
extern  void Cj135_RamBnk_ClrRxBit(uint32 chipidx_u32);
extern  bool Cj135_RamBnk_TxSeq(uint chipidx_ui);
extern  void Cj135_RamBnk_SetStBits(uint chipidx_ui);
extern  bool Cj135_IsOddParity(uint16 value_u16);
extern  void Cj35_RegBnk_Tx(uint numChip_ui);
extern  void Cj135_RegBnk_EvalRx (uint numChip_ui);


extern  void   Cj135_Htr_SetMode ( uint16 arg_swtNewMode_u16,
                                   uint32 arg_idxChip_u32);
extern  void   Cj135_Htr_SetDuty (uint32 const arg_idxChip_cu32);

extern  void   Cj135_HtrPsPpty( uint32 tiLow_u32,
                                uint32 tiHigh_u32,
                                uint32 idxChip_u32);
extern  void    Cj135_EvalDiaDisHtrPs(uint32 numChip_u32);
extern  void    Cj135_PwmPpty(uint16 numChip_u16, uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_HtrPsPpty_Dummy(uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_HtrPsPpty_Dev1(uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_HtrPsPpty_Dev2(uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_HtrPsPpty_Dev3(uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_HtrPsPpty_Dev4(uint32 tiLow_u32, uint32 tiHigh_u32);
extern  void    Cj135_DisHtrPsDia_Dummy(uint32 idxChip_u32);
extern  void    Cj135_DisHtrPsDia(uint32 idxChip_u32);
extern  void    Cj135_DisHtrPsDia_Dev1(uint32 idxChip_u32);
extern  void    Cj135_DisHtrPsDia_Dev2(uint32 idxChip_u32);
extern  void    Cj135_DisHtrPsDia_Dev3(uint32 idxChip_u32);
extern  void    Cj135_DisHtrPsDia_Dev4(uint32 idxChip_u32);
extern  uint16  Cj135_Htr_GetNearest (uint16 _low_u16, uint16 _val_u16, uint16 _high_u16);
__PRAGMA_USE__CODE__hwe__HighSpeed__END


/* Variables                                                                                      */

__PRAGMA_USE__hwe__1_5ms__RAM__arr16__START

extern                  uint16                      Cj135_RegBnk_SpiErr_au16[];
extern                  uint16                      Cj135_RegBnk_Req_au16[];
extern                  uint16                      Cj135_Reg_Virtual_au16[];
extern                  uint16                      Cj135_RegBnk_DspMirror_au16[];
extern                  uint16                      Cj135_RamBnk_MeasVal_u16[];

__PRAGMA_USE__hwe__1_5ms__RAM__arr16__END


__PRAGMA_USE__hwe__1_5ms__RAM__arr32__START

extern                  uint32                      Cj135_RegBnk_Validity_au32[];

__PRAGMA_USE__hwe__1_5ms__RAM__arr32__END



__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern                  CJ135_CHIP_STATE_t          Cj135_ChipState_ae[];
extern                  Cj135_RamMeas_Info_t        Cj135_RamMeas_Info_as[];
extern                  Cj135_DiagStatus_Reg_t      Cj135_DiagStatus_Reg_as[];
extern                  Cj135_TStmp_t               Cj135_tiTStmp_s;
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern                  uint8                       Cj135_SysState_u8;
extern                  uint8                       Cj135_IRQErr_u8;
extern                  uint8                       Cj135_CntIntMonitoring_u8;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END
/* Variables for Peripheral Monitoring */
/* Error observed during drive phase. One bit for each chip*/
__PRAGMA_USE__hwe__10ms__RAM__arr8__START
extern                  uint8                       Cj135_ctComErr_au8[]; /* Communication errors observed during drive phase   */
__PRAGMA_USE__hwe__10ms__RAM__arr8__END

__PRAGMA_USE__hwe__10ms__InitRAM__s32__START
extern                  Cj135_Htr_DiagStage_t       Cj135_Htr_DiagStage_s[];
__PRAGMA_USE__hwe__10ms__InitRAM__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START

extern                  uint8                       Cj135_ChipId_au8[];
extern                  uint8                       Cj135_CAstep_ab[];
extern                  uint8                       Cj135_Rev_au8[];
extern                  uint8                       Cj135_HWRev_au8[];
extern                  uint8                       Cj135_ChipError_au8[];
extern                  bool                        Cj135_IsActModeDebounce_ab[];
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr16__START
/* declarations for variables for storing the current content of the registers */
extern                  uint16                      Cj135_RegStatusCntntCur_au16[];
__PRAGMA_USE__hwe__1_5ms__RAM__arr16__END

__PRAGMA_USE__hwe__1_5ms__RAM__x16__START
/* Variable for storing the served chip index of test impulse of the CJ135 */
extern                  uint16                      Cj135_TstImp_ServedChip_u16;
__PRAGMA_USE__hwe__1_5ms__RAM__x16__END

/************************************************/
/* external declarations of CJ135 SPI sequences */
/************************************************/
/* All this variable are used in 10ms raster but it is also used in ISR
 so to reduce isr execution we define in it 1 to 5 ms section*/
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const            Spi_SeqDef_t                Cj135_IniSeq_acs[];
extern const            Spi_SeqDef_t                Cj135_DiagSeq_acs[];
extern const            Spi_SeqDef_t                Cj135_RdRam1Seq_cs[];
extern const            Spi_SeqDef_t                Cj135_RdRam2Seq_cs[];
extern const            Spi_SeqDef_t                Cj135_RdRam3Seq_cs[];
extern const            Spi_SeqDef_t                Cj135_RdRam4Seq_cs[];
extern                  Cj135_Conf_t const          Cj135_Config_ca[];
extern                  Cj135_Htr_DPSInfo_t const   Cj135_Htr_DPSInfo_acs[];

__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
/* Pointer to sequence structure for writing into the register */
extern const            Spi_SeqDef_t               *Cj135_RegSeq_pas[]; 
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__arr16__START

extern const            uint16                  Cj135_Warmup_pwm[];
extern const 			uint16 					Cj135_Normal1_pwm[];
extern const 			uint16 					Cj135_Normal2_pwm[];
extern const 			uint16 					Cj135_Normal3_pwm[];
extern const 			uint16 					Cj135BA_Swtonrcodemeasoff0_pwm[];
extern const 			uint16 					Cj135BA_Swtonrcodemeasoff1_pwm[];
extern const 			uint16 					Cj135CA_Swtonrcodemeasoff0_pwm[];
extern const 			uint16 					Cj135CA_Swtonrcodemeasoff1_pwm[];
	   
__PRAGMA_USE__hwe__1_5ms__constant__arr16__END

/* _CJ135_PRIV_H                                                                                  */
#endif
