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
 * $Filename__:cj135_pub.h$
 *
 * $Author____:LENZSI$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:UPA4KOR$
 * $Date______:31.10.2013$
 * $Class_____:SWHDR$
 * $Name______:cj135_pub$
 * $Variant___:1.10.0$
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
 * 1.10.0; 1     31.10.2013 UPA4KOR
 *   Updated the macro CJ135_CHIPERR_MSK with wrong
 *   chip error information.
 * 
 * 1.10.0; 0     18.09.2013 UPA4KOR
 *   Heater PWM edges forbidden timing cahnges
 *    for switch on mode of CJ135
 *    Renamed the virtual register Bit_6 macro name 
 *    with new flag name SWTONRCODMEASOFF.
 * 
 * 1.9.0; 1     02.07.2013 UPA4KOR
 *   all te review point are updated
 * 
 * 1.9.0; 0     13.06.2013 UPA4KOR
 *   Remove unwanted macros and added new macros for 
 *   chip_id  and wrong_chip_error
 * 
 * 1.8.0; 0     18.12.2012 ABE3KOR
 *   A new virtual register-bank parameter is introduced to solve the cooling 
 *   issues of the lambda sensor in Normal 3 operation of cj135.
 *   The enum, bit definitions, bit positions and bit masks are defined for the 
 *   new virtual register.
 * 
 * 1.6.0; 4     30.01.2012 EGF2FE
 *   In this revision some confusing defines for device revision were removed.
 * 
 * 1.6.0; 3     21.12.2011 ABE3KOR
 *   MISRA warnings are solved
 * 
 * 1.6.0; 2     19.12.2011 NDI1KOR
 *   Updated for discrete power stage diagnosis
 * 
 * 1.6.0; 1     13.10.2011 ABE3KOR
 *   Corrections done for the initial test findings.
 * 
 * 1.6.0; 0     11.10.2011 ABE3KOR
 *   Design of Cj135 driver is updated.
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CJ135_PUB_H
#define _CJ135_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Peripheral module driver for the CJ135.
 *
 * \scope API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* values for MODE bitfield at register MODE of register bank */
typedef enum
{
    CJ135_MODE_RST,
    CJ135_MODE_IDLE,
    CJ135_MODE_SWTON,
    CJ135_MODE_NORM1,
    CJ135_MODE_NORM2,
    CJ135_MODE_WRMUP,
    CJ135_MODE_NORM3,
    CJ135_MODE_FAIL,
    CJ135_MODE_UNUSED
} Cj135_Mode_t;

/* define for enabling the takedata flag at register MODE of register bank */
#define CJ135_TAKEDATA_SET                                  0x01


/* Enumeration of CJ135 error signal names */

/* Enumeration of CJ135 measurement signal names and CJ135 register names */
/* These enumerators are used as parameters for Cj135_Get function          */
/* by DE software when reading measurement data or register contents      */
/* RAM measurement values */
/* Order of measurement values should be similar to LSM enums.*/
typedef enum
{
    /* parameter for measurement values */
    CJ135_MEAS_TIME,                      /*  0 */
    CJ135_MEAS_PHI,                       /*  1 */
    CJ135_MEAS_IP,                        /*  2 */
    CJ135_MEAS_IPOK,                      /*  3 */
    CJ135_MEAS_UN0,                       /*  4 */
    CJ135_MEAS_URIE,                      /*  5 */
    CJ135_MEAS_UGI,                       /*  6 */
    CJ135_MEAS_UGA,                       /*  7 */
    CJ135_MEAS_UG0,                       /*  8 */
    CJ135_MEAS_URIA,                      /*  9 */
    CJ135_MEAS_UAPE,                      /* 10 */
    CJ135_MEAS_UIPE,                      /* 11 */
    CJ135_MEAS_UOFFIPE1,                  /* 12 */
    CJ135_MEAS_UOFFIPE2,                  /* 13 */
    CJ135_MEAS_UP,                        /* 14 */
    CJ135_MEAS_UOFFVCCI1,                 /* 15 */
    CJ135_MEAS_UOFFVCCI2,                 /* 16 */
    CJ135_MEAS_UCAL,                      /* 17 */
    CJ135_MEAS_UGUI,                      /* 18 */
    CJ135_MEAS_UGUA,                      /* 19 */
    CJ135_MEAS_UP0,                       /* 20 */
    CJ135_MEAS_UG0A,                      /* 21 */
    CJ135_MEAS_UG0I,                      /* 22 */
    CJ135_MEAS_UG0IEI,                    /* 23 */
    CJ135_MEAS_UG0IAI,                    /* 24 */
    CJ135_MEAS_UG0E,                      /* 25 */
    CJ135_MEAS_UOFFGND1,                  /* 26 */
    CJ135_MEAS_UREF1,                     /* 27 */
    CJ135_MEAS_UOFFGND2,                  /* 28 */
    CJ135_MEAS_UREF21,                    /* 29 */
    CJ135_MEAS_UREF22,                    /* 30 */
    CJ135_MEAS_UOFFGND3,                  /* 31 */
    CJ135_MEAS_UREF3,                     /* 32 */
    CJ135_MEAS_UOFFVCC1,                  /* 33 */
    CJ135_MEAS_UOFFVCC2,                  /* 34 */
    CJ135_MEAS_UOFFVCC3,                  /* 35 */
    CJ135_MEAS_UOFFMES,                   /* 36 */
    CJ135_MEAS_UGK,                       /* 37 */
    CJ135_MEAS_UGKAV,                     /* 38 */
    CJ135_MEAS_UIPCAL,                    /* 39 */
    CJ135_MEAS_UIPCALAV,                  /* 40 */
    CJ135_MEAS_MODE,                      /* 41 */
    CJ135_MEAS_STWRD1,                    /* 42 */
    CJ135_MEAS_STWRD2,                    /* 43 */
    CJ135_MEAS_STWRD3,                    /* 44 */
    CJ135_MEAS_NUMFAILPOS,                /* 45 */
    CJ135_MEAS_UI21,                      /* 46, new at NORMAL3 */
    CJ135_MEAS_UA2,                       /* 47, new at NORMAL3 */
    CJ135_MEAS_UA31,                      /* 48, new at NORMAL3 */
    CJ135_MEAS_UA32,                      /* 49, new at NORMAL3 */
    CJ135_MEAS_UA33,                      /* 50, new at NORMAL3 */
    CJ135_MEAS_UI22,                      /* 51, new at NORMAL3 */
    CJ135_MEAS_UI23,                      /* 52, new at NORMAL3 */
    CJ135_MEAS_UI24,                      /* 53, new at NORMAL3 */
    CJ135_MEAS_UI4,                       /* 54, new at NORMAL3 */
    CJ135_MEAS_NUM                        /* 55 */
}CJ135_MEAS_VALS_E;
/*Register Bank */
/* Order of registers should be similar to LSM enums.*/
typedef enum
{
    CJ135_REG_UNSET,                      /*  0 */
    CJ135_REG_IPOFF,                      /*  1 */
    CJ135_REG_REFPAT,                     /*  2 */
    CJ135_REG_CONFIGDSP,                  /*  3 */
    CJ135_REG_TRIM,                       /*  4 */
    CJ135_REG_STEERPAT,                   /*  5 */
    CJ135_REG_UNB0,                       /*  6 */
    CJ135_REG_UNB1,                       /*  7 */
    CJ135_REG_UNB2,                       /*  8 */
    CJ135_REG_UPB0,                       /*  9 */
    CJ135_REG_UPB1,                       /* 10 */
    CJ135_REG_UPB2,                       /* 11 */
    CJ135_REG_UP0LEAN,                    /* 12 */
    CJ135_REG_UP0RICH,                    /* 13 */
    CJ135_REG_MODE,                       /* 14 */
    CJ135_REG_ACTMODE,                    /* 15 */
    CJ135_REG_VIRTUAL1,                   /* 16 */
    CJ135_REG_NUM,                        /* 17 */
    /* from here the parameters for parts of registers at register bank are following */
    CJ135_REGPART_MODE,                   /* 18, register MODE */
    CJ135_REGPART_TAKEDATA,               /* 19, register MODE */
    CJ135_REGPART_OFF,                    /* 20, register MODE */
    CJ135_REGPART_LP,                     /* 21, register MODE */
    CJ135_REGPART_LN,                     /* 22, register MODE */
    CJ135_REGPART_REF,                    /* 23, register MODE */
    CJ135_REGPART_OPT,                    /* 24, register MODE */
    CJ135_REGPART_URIA,                   /* 25, register MODE */
    CJ135_REGPART_MK,                     /* 26, register MODE */
    CJ135_REGPART_FUSKS,                  /* 27, register CONFIGDSP */
    CJ135_REGPART_FU0HYS,                 /* 28, register CONFIGDSP */
    CJ135_REGPART_RESDSP,                 /* 29, register CONFIGDSP */
    CJ135_REGPART_RESUP,                  /* 30, register CONFIGDSP */
    CJ135_REGPART_RESUN,                  /* 31, register CONFIGDSP */
    CJ135_REGPART_A1UP,                   /* 32, register CONFIGDSP */
    CJ135_REGPART_A1UN,                   /* 33, register CONFIGDSP */
    CJ135_REGPART_EN_SP,                  /* 34, register CONFIGDSP */
    CJ135_REGPART_TRIMSQR,                /* 35, register TRIM */
    CJ135_REGPART_TRIMSQ,                 /* 36, register TRIM */
    CJ135_REGPART_DSPDIAGDIS,             /* 37, register TRIM */
    CJ135_REGPART_IPSM,                   /* 38, register STEERPAT */
    CJ135_REGPART_PATTERN,                /* 39, register STEERPAT */
    /* attention ! the following values need to be at the end of this enumerator */
    CJ135_REGPART_N3MEASACTV,             /* 40  virtual register    */
    CJ135_REGPART_V1BIT1,                 /* 41  virtual register    */
    CJ135_REGPART_V1BIT2,                 /* 42  virtual register    */
    CJ135_REGPART_V1BIT3,                 /* 43  virtual register    */
    CJ135_REGPART_V1BIT4,                 /* 44  virtual register    */
    CJ135_REGPART_V1BIT5,                 /* 45  virtual register    */
    CJ135_REGPART_SWTONRCODMEASOFF,       /* 46  virtual register    */
    CJ135_REGPART_V1BF2,                  /* 47  virtual register    */
    CJ135_REGPART_V1BF3,                  /* 48  virtual register    */
    CJ135_REGPART_V1BF4,                  /* 49  virtual register    */
    CJ135_REG_PART                        /* 50 */
}CJ135_REG_VAL_E;

typedef enum
{
    CJ135_REG_SPISEQ_UNSET,                      /*  0 */
    CJ135_REG_SPISEQ_IPOFF,                      /*  1 */
    CJ135_REG_SPISEQ_REFPAT,                     /*  2 */
    CJ135_REG_SPISEQ_CONFIGDSP,                  /*  3 */
    CJ135_REG_SPISEQ_TRIM,                       /*  4 */
    CJ135_REG_SPISEQ_STEERPAT,                   /*  5 */
    CJ135_REG_SPISEQ_UNBX,                       /*  6 */
    CJ135_REG_SPISEQ_UPBX,                       /*  7 */
    CJ135_REG_SPISEQ_UP0,                        /*  8 */
    CJ135_REG_SPISEQ_MODE,                       /*  9 */
    CJ135_REG_SPISEQ_NUM                         /*  10 */
}CJ135_REG_SPISEQ_E;

/* Re-definition of register names for formerly UNB0, UNB1, UNB2 (necessary for NORMAL3/C1 ASIC step) */
#define     CJ135_REG_KP            CJ135_REG_UNB0
#define     CJ135_REG_KI            CJ135_REG_UNB1
#define     CJ135_REG_KD            CJ135_REG_UNB2

/* Re-definition of register names for formerly UPB0, UPB1, UPB2 (necessary for NORMAL3/C1 ASIC step) */
#define     CJ135_REG_IPSET         CJ135_REG_UPB0
#define     CJ135_REG_IPBLACK       CJ135_REG_UPB1
#define     CJ135_REG_KRF           CJ135_REG_UPB2

/* Re-definition of register names for formerly A1UP, A1UN (necessary for NORMAL3/C1 ASIC step) */
#define     CJ135_REGPART_IPSET     CJ135_REGPART_A1UP
#define     CJ135_REGPART_DSET      CJ135_REGPART_A1UN

#define     CJ135_REGPART_RESXDK    CJ135_REGPART_RESUP

typedef enum
{
    CJ135_REG_UNSET_NEW,            /* 00 */
    CJ135_REG_UNB0_NEW,             /* 01 */
    CJ135_REG_UNB1_NEW,             /* 02 */
    CJ135_REG_UNB2_NEW,             /* 03 */
    CJ135_REG_UP0LEAN_NEW,          /* 04 */
    CJ135_REG_UP0RICH_NEW,          /* 05 */
    CJ135_REG_UPB0_NEW,             /* 06 */
    CJ135_REG_UPB1_NEW,             /* 07 */
    CJ135_REG_UPB2_NEW,             /* 08 */
    CJ135_REG_IPOFF_NEW,            /* 09 */
    CJ135_REG_STEERPAT_NEW,         /* 10 */
    CJ135_REG_CONFIGDSP_NEW,        /* 11 */
    CJ135_REG_TRIM_NEW,             /* 12 */
    CJ135_REG_REFPAT_NEW,           /* 13 */
    CJ135_REG_MODE_NEW              /* 14 */
}CJ135_REG_VAL_NEW_E;





/* bit mask and bit position for return value of Cj135_GetRev interface */
#define     CJ135_REV_MSK                           0x000000FF
#define     CJ135_REV_POS                           0

#define     CJ135_HWREV_MSK                         0x0000FF00
#define     CJ135_HWREV_POS                         8

#define     CJ135_CHIPID_MSK                        0x00FF0000
#define     CJ135_CHIPID_POS                        16

/************************************************************************/
/* Defines for modes of CJ135 prototype testboard V3                    */
/* - used by Lsm_Set when only a part of a register should be changed   */
/*   (e.g. CJ135_REGPART_MODE)                                          */
/*   also used for evaluation of MODE contents                          */
/************************************************************************/

/* defines for MODE register */
#define     CJ135_TAKEDATA_REG_POS                          0
#define     CJ135_TAKEDATA_MSK                              0x0001

#define     CJ135_MODE_REG_POS                              1
#define     CJ135_MODE_MSK                                  0x000E

#define     CJ135_MK_REG_POS                                14
#define     CJ135_MK_MSK                                    0xC000
#define     CJ135_URIA_REG_POS                              13
#define     CJ135_URIA_MSK                                  0x2000
#define     CJ135_OPT_REG_POS                               11
#define     CJ135_OPT_MSK                                   0x1800
#define     CJ135_REF_REG_POS                               9
#define     CJ135_REF_MSK                                   0x0600
#define     CJ135_LN_REG_POS                                8
#define     CJ135_LN_MSK                                    0x0100
#define     CJ135_LP_REG_POS                                7
#define     CJ135_LP_MSK                                    0x0080
#define     CJ135_OFF_REG_POS                               4
#define     CJ135_OFF_MSK                                   0x0070

/* value used for NORMAL3 */
#define     CJ135_OPT_UI4_VAL                               0x0

#define     CJ135_OPT_UIPE_VAL                              0x0
#define     CJ135_OPT_UOFFIPE1_VAL                          0x1
#define     CJ135_OPT_UOFFIPE2_VAL                          0x2

#define     CJ135_OPT_UOFFVCCI1_VAL                         0x1
#define     CJ135_OPT_UOFFVCCI2_VAL                         0x2

#define     CJ135_OFF_UOFFGND1                              0x0
#define     CJ135_OFF_UOFFGND2                              0x1
#define     CJ135_OFF_UOFFGND3                              0x2
#define     CJ135_OFF_UOFFVCC1                              0x3
#define     CJ135_OFF_UOFFVCC2                              0x4
#define     CJ135_OFF_UOFFVCC3                              0x5

#define     CJ135_REF_UREF1                                 0x0
#define     CJ135_REF_UREF21                                0x1
#define     CJ135_REF_UREF22                                0x2
#define     CJ135_REF_UREF3                                 0x3

/* defines for CONFIGDSP register */
#define     CJ135_FUSKS_REG_POS                             0
#define     CJ135_FUSKS_MSK                                 0x000F

#define     CJ135_FU0HYS_REG_POS                            4
#define     CJ135_FU0HYS_MSK                                0x00F0

#define     CJ135_RESDSP_REG_POS                            8
#define     CJ135_RESDSP_MSK                                0x0100

#define     CJ135_RESUP_REG_POS                             9
#define     CJ135_RESUP_MSK                                 0x0200
/* new name of bit RESUP -> RESxdk */
#define     CJ135_RESXDK_REG_POS                            9
#define     CJ135_RESXDK_MSK                                0x0200

#define     CJ135_RESUN_REG_POS                             10
#define     CJ135_RESUN_MSK                                 0x0400

#define     CJ135_A1UP_REG_POS                              11
#define     CJ135_A1UP_MSK                                  0x0800
/* new name of bit A1UP -> IP_SET */
#define     CJ135_IPSET_REG_POS                             11
#define     CJ135_IPSET_MSK                                 0x0800

#define     CJ135_A1UN_REG_POS                              12
#define     CJ135_A1UN_MSK                                  0x1000
/* new name of bit A1UN -> D_SET */
#define     CJ135_DSET_REG_POS                              12
#define     CJ135_DSET_MSK                                  0x1000


#define     CJ135_ENSP_REG_POS                              14
#define     CJ135_ENSP_MSK                                  0xC000

/* defines for TRIM register */
#define     CJ135_TRIMSQR_REG_POS                           0
#define     CJ135_TRIMSQR_MSK                               0x007F

#define     CJ135_TRIMSQ_REG_POS                            7
//#define     CJ135_TRIMSQ_MSK                                0x007F
#define     CJ135_TRIMSQ_MSK                                0x3F80

#define     CJ135_DSPDIAGDIS_REG_POS                        14
#define     CJ135_DSPDIAGDIS_MSK                            0x4000

/* #defines for STEERPAT register */
#define     CJ135_IPSM_REG_POS                              15
#define     CJ135_IPSM_MSK                                  0x8000

#define     CJ135_PATTERN_REG_POS                           0
#define     CJ135_PATTERN_MSK                               0x7FFF

#define     CJ135_DUMMY_MSK                                 0xFFFF
#define     CJ135_DUMMY_BP                                  0x00

/* defines for status words */
#define     CJ135_STW3_ACTBNK_REG_POS                       6
#define     CJ135_STW3_ACTBNK_MSK                           0x0040

/* defines for virtual register */
#define     CJ135_N3MEASACTV_VREG_POS                       0
#define     CJ135_N3MEASACTV_MSK                            0x0001

#define     CJ135_V1BIT1_VREG_POS                           1
#define     CJ135_V1BIT1_MSK                                0x0002

#define     CJ135_V1BIT2_VREG_POS                           2
#define     CJ135_V1BIT2_MSK                                0x0004

#define     CJ135_V1BIT3_VREG_POS                           3
#define     CJ135_V1BIT3_MSK                                0x0008

#define     CJ135_V1BIT4_VREG_POS                           4
#define     CJ135_V1BIT4_MSK                                0x0010

#define     CJ135_V1BIT5_VREG_POS                           5
#define     CJ135_V1BIT5_MSK                                0x0020

#define     CJ135_SWTONRCODMEASOFF_VREG_POS          		6
#define     CJ135_SWTONRCODMEASOFF_MSK              		0x0040

#define     CJ135_V1BF2_VREG_POS                            7
#define     CJ135_V1BF2_MSK                                 0x0180

#define     CJ135_V1BF3_VREG_POS                            9
#define     CJ135_V1BF3_MSK                                 0x0E00

#define     CJ135_V1BF4_VREG_POS                            12
#define     CJ135_V1BF4_MSK                                 0xF000

/* Bit values of return value Return Value of Cj135_Get_RamMeas() (Lsm_Get())*/

#define CJ135_RAMBNK_STMODEREAD_BP      0
#define CJ135_RAMBNK_STMODEREAD_MSK     (0x01 << CJ135_RAMBNK_STMODEREAD_BP)
#define CJ135_RAMBNK_STMODEREAD_SET     (0x01 << CJ135_RAMBNK_STMODEREAD_BP)
#define CJ135_RAMBNK_STVALIDITY_BP      1
#define CJ135_RAMBNK_STVALIDITY_SET     (0x01 << CJ135_RAMBNK_STVALIDITY_BP)
#define CJ135_RAMBNK_STSPIERROR_BP      2
#define CJ135_RAMBNK_STSPIERROR_MSK     (0x01 << CJ135_RAMBNK_STSPIERROR_BP)
#define CJ135_RAMBNK_STSPIERROR_SET     (0x01 << CJ135_RAMBNK_STSPIERROR_BP)
#define CJ135_RAMBNK_STFAILURE_BP       3
#define CJ135_RAMBNK_STFAILURE_MSK      (0x01 << CJ135_RAMBNK_STFAILURE_BP)
#define CJ135_RAMBNK_STFAILURE_SET      (0x01 << CJ135_RAMBNK_STFAILURE_BP)
#define CJ135_RAMBNK_STDATALOST_BP      4
#define CJ135_RAMBNK_STDATALOST_SET     (0x01 << CJ135_RAMBNK_STDATALOST_BP)

#define CJ135_RAMBNK_STATUS_MSK         (CJ135_RAMBNK_STMODEREAD_SET |                            \
                                         CJ135_RAMBNK_STVALIDITY_SET|                             \
                                         CJ135_RAMBNK_STSPIERROR_SET|                             \
                                         CJ135_RAMBNK_STFAILURE_SET|                              \
                                         CJ135_RAMBNK_STDATALOST_SET)
#define CJ135_RAMBNK_NUMMEASVAL_BP      24
#define CJ135_RAMBNK_NUMMEASVAL_MSK     (0x0F<<CJ135_RAMBNK_NUMMEASVAL_BP)


/* Bit values of return value Return Value of Cj135_Get_RamMeas() for Time Stamp (Lsm_Get())*/

#define CJ135_TIMESTAMP_STREAD_BP           0
#define CJ135_TIMESTAMP_STREAD_MSK          (0x01 << CJ135_TIMESTAMP_STREAD_BP)
#define CJ135_TIMESTAMP_STREAD_SET          (0x01 << CJ135_TIMESTAMP_STREAD_BP)
#define CJ135_TIMESTAMP_STVALIDITY_BP       1
#define CJ135_TIMESTAMP_STVALIDITY_SET      (0x01 << CJ135_TIMESTAMP_STVALIDITY_BP)

/*Bit values of return value used in Cj135_GetRegVal() (Lsm_Get())*/
#define CJ135_REGBNK_STVALIDITY_BP              0x01
#define CJ135_REGBNK_STVALIDITY_SET             (0x01<<CJ135_REGBNK_STVALIDITY_BP)
#define CJ135_REGBNK_STSPIERROR_REQREG_BP       0x02
#define CJ135_REGBNK_STSPIERROR_REQREG_MSK      (0x01 << CJ135_REGBNK_STSPIERROR_REQREG_BP)

#define CJ135_REGBNK_STSPIERROR_ALLREG_BP       0x08
#define CJ135_REGBNK_STSPIERROR_ALLREG_MSK      (0xFFFF<<CJ135_REGBNK_STSPIERROR_ALLREG_BP)

/*Bit values of return value used in Cj135_Set() (Lsm_Set())*/
#define CJ135_REGBNK_STREQ_BP           0x00
#define CJ135_WR_REQ_ACCPT              0x0001
#define CJ135_REGBNK_MODEERR_BP         0x01
#define CJ135_WR_REQ_MODEERR            0x0002
#define CJ135_REGBNK_STTDBIT_BP         0x02
#define CJ135_WR_REQ_TDBSY              0x0004


/* Defines of index for diagnostic registers at the pointer variable *adr_u8 of Cj135_GetErrStat_Info() */
#define CJ135_DIAG0_INDEX               0
#define CJ135_DIAG1_INDEX               1
#define CJ135_CHIPSTAT_INDEX            2
#define CJ135_DSPSTAT_INDEX             3
#define CJ135_CHIPERR_INDEX             4
#define CJ135_IRQERR_INDEX              5

/* Bit values of Chip Error */
#define CJ135_CHIPERR_INITFAIL_BP       0x00
#define CJ135_CHIPERR_INITFAIL_VAL      (0x01 << CJ135_CHIPERR_INITFAIL_BP)
#define CJ135_CHIPERR_MODEFAIL_BP       0x01
#define CJ135_CHIPERR_MODEFAIL_VAL      (0x01 << CJ135_CHIPERR_MODEFAIL_BP)
#define CJ135_CHIPERR_BNKSWT_BP         0x02
#define CJ135_CHIPERR_BNKSWT_VAL        (0x01 << CJ135_CHIPERR_BNKSWT_BP)
#define CJ135_CHIPERR_SPIERR_BP         0x03
#define CJ135_CHIPERR_SPIERR_VAL        (0x01 << CJ135_CHIPERR_SPIERR_BP)
#define CJ135_CHIPERR_WRONGCHIP_BP      0x04
#define CJ135_CHIPERR_WRONGCHIP_VAL     (0x01 << CJ135_CHIPERR_WRONGCHIP_BP)
#define CJ135_CHIPERR_NEWVAL_BP         0x07
#define CJ135_CHIPERR_NEWVAL_VAL        (0x01 << CJ135_CHIPERR_NEWVAL_BP)

#define CJ135_CHIPERR_MSK               (CJ135_CHIPERR_INITFAIL_VAL|                            \
                                         CJ135_CHIPERR_MODEFAIL_VAL|                             \
										 CJ135_CHIPERR_WRONGCHIP_VAL|                             \
                                         CJ135_CHIPERR_BNKSWT_VAL)

/* Bit values for IRQ error => Errors in interrupt signal. */
#define CJ135_IRQErr_STSYS_BP           0x00
#define CJ135_IRQErr_STSYS_VAL          (0x01 << CJ135_IRQErr_STSYS_BP)
#define CJ135_IRQErr_INTSLOW_BP         0x01
#define CJ135_IRQErr_INTSLOW_VAL        (0x01 << CJ135_IRQErr_INTSLOW_BP)
#define CJ135_IRQErr_INTFAST_BP         0x02
#define CJ135_IRQErr_INTFAST_VAL        (0x01 << CJ135_IRQErr_INTFAST_BP)
#define CJ135_IRQErr_NOINT_BP           0x03
#define CJ135_IRQErr_NOINT_VAL          (0x01 << CJ135_IRQErr_NOINT_BP)

#define CJ135_IRQErr_MSK                CJ135_IRQErr_STSYS_VAL|                                   \
                                        CJ135_IRQErr_INTSLOW_VAL|                                 \
                                        CJ135_IRQErr_INTFAST_VAL|                                 \
                                        CJ135_IRQErr_NOINT_VAL 

/* Bit values of return value used in Cj135_GetErrStatInfo() */
#define CJ135_GETERRSTAT_SPIERR_BP      0x03
#define CJ135_GETERRSTAT_SPIERR_MSK     (1<<CJ135_GETERRSTAT_SPIERR_BP)
#define CJ135_GETERRSTAT_NEWINFO_BP     0x00
#define CJ135_GETERRSTAT_NEWINFO_MSK    (1<<CJ135_GETERRSTAT_NEWINFO_BP)


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern  void         Cj135_Proc_Ini(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern  void         Cj135_Proc_10ms(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern  uint32      Cj135_Get_RegVal(uint32 reg_indx_u32,
                                     uint16 *adr_pu16,
                                     uint32 chipidx_u32,
                                     uint8  indx_spiseq_u8,
                                     uint16 bitmsk_u16,
                                     uint8  bitpos_u8);

extern  uint32      Cj135_Get_RamMeas(uint32 par_u32, uint16 *adr_pu16, uint32 chipidx_u32);

extern  uint32      Cj135_Set(uint32 par_u32,
                             uint16 bitmsk_u16,
                             uint16 val_u16,
                             uint32 chipidx_u32,
                             uint8 indx_spiseq_u8,
                             uint8 indx_txbuf_u8);

extern  uint32      Cj135_GetErrStat_Info(uint8 *adr_pu8, uint32 chipidx_u32);

extern  uint32      Cj135_GetRev(uint32 chipidx_u32);

extern  uint32      Cj135_SetHtrPer(uint16 arg_tiPer_u16, uint32 arg_idxChip_u32);
extern  uint32      Cj135_SetHtrDty(uint16 arg_rDty_u16, uint32 arg_idxChip_u32);

extern  uint32      Cj135_GetErrorInfo(uint16 numChip_u16, uint16 numPwstg_u16);
extern  void        Cj135_ClearErr(uint16 numChip_u16, uint16 numPwstg_u16);
extern  uint32      Cj135_TstImp(uint16 numChip_u16, uint16 numPwstg_u16);




__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* Variables for Peripheral Monitoring */
/* Error observed during drive phase. One bit for each chip*/
__PRAGMA_USE__hwe__10ms__RAM__x32__START
/* Error observed during drive phase. One bit for each chip*/
extern                  bit32                       Cj135_stDrvErr_b32;
/* Error observed during init phase. One bit for each chip */
extern                  bit32                       Cj135_stIniErr_b32;
__PRAGMA_USE__hwe__10ms__RAM__x32__END


/* end of block: #ifndef _CJ135_PUB_H */
#endif
