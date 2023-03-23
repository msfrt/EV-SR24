#ifndef _LSMHAL_AUTO_CONF_H
#define _LSMHAL_AUTO_CONF_H 

/* CJ135 is configured for lambda sensor */


#include "cj135_auto_conf.h"
#include "cj135_pub.h"


/**************************************************************************************************/
/*                                                                                                */
/* Defines, Enumerators for Lsm working with device driver Cj135                                  */
/*                                                                                                */
/*                              CCC   JJJJJ    111   333   55555                                  */
/*                             C   C      J   11 1  3   3  5                                      */
/*                             C          J  1   1      3  5 55                                   */
/*                             C          J      1     3       5                                  */
/*                             C          J      1      3      5                                  */
/*                             C   C  J   J      1  3   3  5   5                                  */
/*                              CCC    JJJ       1   333    555                                   */
/*                                                                                                */
/**************************************************************************************************/

/*------------------------------------------------------------------------------------------------*/
/* Signalnames used as parameters for interfaces Lsm_Get and Lsm_Set                              */
/*------------------------------------------------------------------------------------------------*/
/* Enumeration of CJ135 measurement signal names and CJ135 register names       */
/* These enumerators are used as parameters for Lsm_Get function by DE software */
/* when reading measurement data or register contents                           */
/* THIS ENUMERATOR MUST HAVE THE SAME ORDER AS CJ135_MEAS_VALS_E at cj135_pub.h */
typedef enum
{
    /* parameter for measurement values */
    LSM_MEAS_TIME           = CJ135_MEAS_TIME,                      /*  0 */
    LSM_MEAS_PHI            = CJ135_MEAS_PHI,                       /*  1 */
    LSM_MEAS_IP             = CJ135_MEAS_IP,                        /*  2 */
    LSM_MEAS_IPOK           = CJ135_MEAS_IPOK,                      /*  3 */
    LSM_MEAS_UN0            = CJ135_MEAS_UN0,                       /*  4 */
    LSM_MEAS_URIE           = CJ135_MEAS_URIE,                      /*  5 */
    LSM_MEAS_UGI            = CJ135_MEAS_UGI,                       /*  6 */
    LSM_MEAS_UGA            = CJ135_MEAS_UGA,                       /*  7 */
    LSM_MEAS_UG0            = CJ135_MEAS_UG0,                       /*  8 */
    LSM_MEAS_URIA           = CJ135_MEAS_URIA,                      /*  9 */
    LSM_MEAS_UAPE           = CJ135_MEAS_UAPE,                      /* 10 */
    LSM_MEAS_UIPE           = CJ135_MEAS_UIPE,                      /* 11 */
    LSM_MEAS_UOFFIPE1       = CJ135_MEAS_UOFFIPE1,                  /* 12 */
    LSM_MEAS_UOFFIPE2       = CJ135_MEAS_UOFFIPE2,                  /* 13 */
    LSM_MEAS_UP             = CJ135_MEAS_UP,                        /* 14 */
    LSM_MEAS_UOFFVCCI1      = CJ135_MEAS_UOFFVCCI1,                 /* 15 */
    LSM_MEAS_UOFFVCCI2      = CJ135_MEAS_UOFFVCCI2,                 /* 16 */
    LSM_MEAS_UCAL           = CJ135_MEAS_UCAL,                      /* 17 */
    LSM_MEAS_UGUI           = CJ135_MEAS_UGUI,                      /* 18 */
    LSM_MEAS_UGUA           = CJ135_MEAS_UGUA,                      /* 19 */
    LSM_MEAS_UP0            = CJ135_MEAS_UP0,                       /* 20 */
    LSM_MEAS_UG0A           = CJ135_MEAS_UG0A,                      /* 21 */
    LSM_MEAS_UG0I           = CJ135_MEAS_UG0I,                      /* 22 */
    LSM_MEAS_UG0IEI         = CJ135_MEAS_UG0IEI,                    /* 23 */
    LSM_MEAS_UG0IAI         = CJ135_MEAS_UG0IAI,                    /* 24 */
    LSM_MEAS_UG0E           = CJ135_MEAS_UG0E,                      /* 25 */
    LSM_MEAS_UOFFGND1       = CJ135_MEAS_UOFFGND1,                  /* 26 */
    LSM_MEAS_UREF1          = CJ135_MEAS_UREF1,                     /* 27 */
    LSM_MEAS_UOFFGND2       = CJ135_MEAS_UOFFGND2,                  /* 28 */
    LSM_MEAS_UREF21         = CJ135_MEAS_UREF21,                    /* 29 */
    LSM_MEAS_UREF22         = CJ135_MEAS_UREF22,                    /* 30 */
    LSM_MEAS_UOFFGND3       = CJ135_MEAS_UOFFGND3,                  /* 31 */
    LSM_MEAS_UREF3          = CJ135_MEAS_UREF3,                     /* 32 */
    LSM_MEAS_UOFFVCC1       = CJ135_MEAS_UOFFVCC1,                  /* 33 */
    LSM_MEAS_UOFFVCC2       = CJ135_MEAS_UOFFVCC2,                  /* 34 */
    LSM_MEAS_UOFFVCC3       = CJ135_MEAS_UOFFVCC3,                  /* 35 */
    LSM_MEAS_UOFFMES        = CJ135_MEAS_UOFFMES,                   /* 36 */
    LSM_MEAS_UGK            = CJ135_MEAS_UGK,                       /* 37 */
    LSM_MEAS_UGKAV          = CJ135_MEAS_UGKAV,                     /* 38 */
    LSM_MEAS_UIPCAL         = CJ135_MEAS_UIPCAL,                    /* 39 */
    LSM_MEAS_UIPCALAV       = CJ135_MEAS_UIPCALAV,                  /* 40 */
    LSM_MEAS_MODE           = CJ135_MEAS_MODE,                      /* 41 */
    LSM_MEAS_STWRD1         = CJ135_MEAS_STWRD1,                    /* 42 */
    LSM_MEAS_STWRD2         = CJ135_MEAS_STWRD2,                    /* 43 */
    LSM_MEAS_STWRD3         = CJ135_MEAS_STWRD3,                    /* 44 */
    LSM_MEAS_NUMFAILPOS     = CJ135_MEAS_NUMFAILPOS,                /* 45 */
    LSM_MEAS_UI21           = CJ135_MEAS_UI21,                      /* 46, new at NORMAL3 */
    LSM_MEAS_UA2            = CJ135_MEAS_UA2,                       /* 47, new at NORMAL3 */
    LSM_MEAS_UA31           = CJ135_MEAS_UA31,                      /* 48, new at NORMAL3 */
    LSM_MEAS_UA32           = CJ135_MEAS_UA32,                      /* 49, new at NORMAL3 */
    LSM_MEAS_UA33           = CJ135_MEAS_UA33,                      /* 50, new at NORMAL3 */
    LSM_MEAS_UI22           = CJ135_MEAS_UI22,                      /* 51, new at NORMAL3 */
    LSM_MEAS_UI23           = CJ135_MEAS_UI23,                      /* 52, new at NORMAL3 */
    LSM_MEAS_UI24           = CJ135_MEAS_UI24,                      /* 53, new at NORMAL3 */
    LSM_MEAS_UI4            = CJ135_MEAS_UI4,                       /* 54, new at NORMAL3 */
    LSM_MEAS_NUM            = CJ135_MEAS_NUM                        /* 55 */
}LSM_MEAS_VALS_E;

typedef enum
{/* from here the parameters for registers at register bank are following */
   LSM_REG_UNSET             = CJ135_REG_UNSET,                      /*  0 */
   LSM_REG_IPOFF             = CJ135_REG_IPOFF,                      /*  1 */
   LSM_REG_REFPAT            = CJ135_REG_REFPAT,                     /*  2 */
   LSM_REG_CONFIGDSP         = CJ135_REG_CONFIGDSP,                  /*  3 */
   LSM_REG_TRIM              = CJ135_REG_TRIM,                       /*  4 */
   LSM_REG_STEERPAT          = CJ135_REG_STEERPAT,                   /*  5 */
   LSM_REG_UNB0              = CJ135_REG_UNB0,                       /*  6 */
   LSM_REG_UNB1              = CJ135_REG_UNB1,                       /*  7 */
   LSM_REG_UNB2              = CJ135_REG_UNB2,                       /*  8 */
   LSM_REG_UPB0              = CJ135_REG_UPB0,                       /*  9 */
   LSM_REG_UPB1              = CJ135_REG_UPB1,                       /* 10 */
   LSM_REG_UPB2              = CJ135_REG_UPB2,                       /* 11 */
   LSM_REG_UP0LEAN           = CJ135_REG_UP0LEAN,                    /* 12 */
   LSM_REG_UP0RICH           = CJ135_REG_UP0RICH,                    /* 13 */
   LSM_REG_MODE              = CJ135_REG_MODE,                       /* 14 */
   LSM_REG_ACTMODE           = CJ135_REG_ACTMODE,                    /* 15 */
   LSM_REG_VIRTUAL1          = CJ135_REG_VIRTUAL1,                   /* 16 */
   LSM_REG_NUM               = CJ135_REG_NUM,                        /* 17 */
   /* from here the parameters for parts of registers at register bank are following */
   LSM_REGPART_MODE          = CJ135_REGPART_MODE,                   /* 18, register MODE */
   LSM_REGPART_TAKEDATA      = CJ135_REGPART_TAKEDATA,               /* 19, register MODE */
   LSM_REGPART_OFF           = CJ135_REGPART_OFF,                    /* 20, register MODE */
   LSM_REGPART_LP            = CJ135_REGPART_LP,                     /* 21, register MODE */
   LSM_REGPART_LN            = CJ135_REGPART_LN,                     /* 22, register MODE */
   LSM_REGPART_REF           = CJ135_REGPART_REF,                    /* 23, register MODE */
   LSM_REGPART_OPT           = CJ135_REGPART_OPT,                    /* 24, register MODE */
   LSM_REGPART_URIA          = CJ135_REGPART_URIA,                   /* 25, register MODE */
   LSM_REGPART_MK            = CJ135_REGPART_MK,                     /* 26, register MODE */
   LSM_REGPART_FUSKS         = CJ135_REGPART_FUSKS,                  /* 27, register CONFIGDSP */
   LSM_REGPART_FU0HYS        = CJ135_REGPART_FU0HYS,                 /* 28, register CONFIGDSP */
   LSM_REGPART_RESDSP        = CJ135_REGPART_RESDSP,                 /* 29, register CONFIGDSP */
   LSM_REGPART_RESUP         = CJ135_REGPART_RESUP,                  /* 30, register CONFIGDSP */
   LSM_REGPART_RESUN         = CJ135_REGPART_RESUN,                  /* 31, register CONFIGDSP */
   LSM_REGPART_A1UP          = CJ135_REGPART_A1UP,                   /* 32, register CONFIGDSP */
   LSM_REGPART_A1UN          = CJ135_REGPART_A1UN,                   /* 33, register CONFIGDSP */
   LSM_REGPART_EN_SP         = CJ135_REGPART_EN_SP,                  /* 34, register CONFIGDSP */
   LSM_REGPART_TRIMSQR       = CJ135_REGPART_TRIMSQR,                /* 35, register TRIM */
   LSM_REGPART_TRIMSQ        = CJ135_REGPART_TRIMSQ,                 /* 36, register TRIM */
   LSM_REGPART_DSPDIAGDIS    = CJ135_REGPART_DSPDIAGDIS,             /* 37, register TRIM */
   LSM_REGPART_IPSM          = CJ135_REGPART_IPSM,                   /* 38, register STEERPAT */
   LSM_REGPART_PATTERN       = CJ135_REGPART_PATTERN,                /* 39, register STEERPAT */
   LSM_REGPART_N3MEASACTV    = CJ135_REGPART_N3MEASACTV,             /* 40  virtual register    */
   LSM_REGPART_V1BIT1        = CJ135_REGPART_V1BIT1,                 /* 41  virtual register    */
   LSM_REGPART_V1BIT2        = CJ135_REGPART_V1BIT2,                 /* 42  virtual register    */
   LSM_REGPART_V1BIT3        = CJ135_REGPART_V1BIT3,                 /* 43  virtual register    */
   LSM_REGPART_V1BIT4        = CJ135_REGPART_V1BIT4,                 /* 44  virtual register    */
   LSM_REGPART_V1BIT5        = CJ135_REGPART_V1BIT5,                 /* 45  virtual register    */
   LSM_REGPART_SWTONRCODMEASOFF = CJ135_REGPART_SWTONRCODMEASOFF,    /* 46  virtual register    */
   LSM_REGPART_V1BF2         = CJ135_REGPART_V1BF2,                  /* 47  virtual register    */
   LSM_REGPART_V1BF3         = CJ135_REGPART_V1BF3,                  /* 48  virtual register    */
   LSM_REGPART_V1BF4         = CJ135_REGPART_V1BF4,                  /* 49  virtual register    */
   LSM_REG_PART              = CJ135_REG_PART                        /* 50  number of elements  */
}LSM_REG_VAL_E;

/* Re-definition of register names for formerly UNB0, UNB1, UNB2 (necessary for NORMAL3/C1 ASIC step) */
#define     LSM_REG_KP            LSM_REG_UNB0
#define     LSM_REG_KI            LSM_REG_UNB1
#define     LSM_REG_KD            LSM_REG_UNB2

/* Re-definition of register names for formerly UPB0, UPB1, UPB2 (necessary for NORMAL3/C1 ASIC step) */
#define     LSM_REG_IPSET         LSM_REG_UPB0
#define     LSM_REG_IPBLACK       LSM_REG_UPB1
#define     LSM_REG_KRF           LSM_REG_UPB2

/* Re-definition of register names for formerly A1UP, A1UN (necessary for NORMAL3/C1 ASIC step) */
#define     LSM_REGPART_IPSET     LSM_REGPART_A1UP
#define     LSM_REGPART_DSET      LSM_REGPART_A1UN

#define     LSM_REGPART_RESXDK    LSM_REGPART_RESUP


/*------------------------------------------------------------------------------------------------*/
/* Defines for interface Lsm_Set (at CJ135)                                                       */
/*                                                                                                */
/*                      L      SSS   MM     MM         SSS   EEEEE  TTTTT                         */
/*                      L     S   S  M M   M M        S   S  E        T                           */
/*                      L     S      M  M M  M        S      E        T                           */
/*                      L      SSS   M   M   M         SSS   EEEE     T                           */
/*                      L         S  M       M            S  E        T                           */
/*                      L     S   S  M       M        S   S  E        T                           */
/*                      LLLLL  SSS   M       M  ____   SSS   EEEEE    T                           */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/


/*                                                                                    */
/* Parameters for setting the operation mode of CJ135 with parameter LSM_REGPART_MODE */
/* ATTENTION: these parameters will NOT work with parameter LSM_REG_MODE !!!          */
/*                                                                                    */
/* example: Lsm_Set((uint32)LSM_REGPART_MODE, (uint16)LSM_MODE_SWTON, (uint32)LSM_1); */
/*                                                                                    */
#define     LSM_MODE_IDLE                                   CJ135_MODE_IDLE
#define     LSM_MODE_SWTON                                  CJ135_MODE_SWTON
#define     LSM_MODE_NORM1                                  CJ135_MODE_NORM1
#define     LSM_MODE_NORM2                                  CJ135_MODE_NORM2
#define     LSM_MODE_WRMUP                                  CJ135_MODE_WRMUP
#define     LSM_MODE_NORM3                                  CJ135_MODE_NORM3
#define     LSM_MODE_FAIL                                   CJ135_MODE_FAIL

/* define for setting the take data bit at the register MODE */
#define     LSM_TAKEDATA_SET                                CJ135_TAKEDATA_SET

/* defines for different values to be written to register parts of MODE register */
#define     LSM_OPT_UIPE_VAL                                CJ135_OPT_UIPE_VAL
#define     LSM_OPT_UOFFIPE1_VAL                            CJ135_OPT_UOFFIPE1_VAL
#define     LSM_OPT_UOFFIPE2_VAL                            CJ135_OPT_UOFFIPE2_VAL

#define     LSM_OPT_UOFFVCCI1_VAL                           CJ135_OPT_UOFFVCCI1_VAL
#define     LSM_OPT_UOFFVCCI2_VAL                           CJ135_OPT_UOFFVCCI2_VAL

#define     LSM_OFF_UOFFGND1                                CJ135_OFF_UOFFGND1
#define     LSM_OFF_UOFFGND2                                CJ135_OFF_UOFFGND2
#define     LSM_OFF_UOFFGND3                                CJ135_OFF_UOFFGND3
#define     LSM_OFF_UOFFVCC1                                CJ135_OFF_UOFFVCC1
#define     LSM_OFF_UOFFVCC2                                CJ135_OFF_UOFFVCC2
#define     LSM_OFF_UOFFVCC3                                CJ135_OFF_UOFFVCC3

#define     LSM_REF_UREF1                                   CJ135_REF_UREF1
#define     LSM_REF_UREF21                                  CJ135_REF_UREF21
#define     LSM_REF_UREF22                                  CJ135_REF_UREF22
#define     LSM_REF_UREF3                                   CJ135_REF_UREF3

/* Defines for evaluation of return values of Lsm_Set interface                                   */
/* These defines can be used for clearing all other bits and comparing the result                 */
/*                                                                                                */
/* example:                                                                                       */
/* xRetVal_u32 = Lsm_Set((uint32)LSM_REGPART_MODE, (uint16)LSM_MODE_SWTON, (uint32)LSM_1);        */
/* if( !(xRetVal_u32 & LSM_WR_REQ_ACCPT) == LSM_WR_REQ_ACCPT)                                     */
/* {                                                                                              */
/*    Set order was rejected, do the needful ...;                                                 */
/* }                                                                                              */
/*                                                                                                */
/* LSM_WR_REQ_ACCPT - write order accepted                                                        */
/* LSM_WR_REQ_TDBSY - register takedata cycle busy, write order rejected                          */
/* LSM_WR_REQ_MODEERR - Invalid mode requested.                                                   */

/*Bit values of return value used in Cj135_Set() (Lsm_Set())*/
#define     LSM_WR_REQ_ACCPT                                CJ135_WR_REQ_ACCPT
#define     LSM_WR_REQ_MODEERR                              CJ135_WR_REQ_MODEERR
#define     LSM_WR_REQ_TDBSY                                CJ135_WR_REQ_TDBSY


/*------------------------------------------------------------------------------------------------*/
/* Defines for interface Lsm_Get (at CJ135)                                                       */
/*                                                                                                */
/*                      L      SSS   MM     MM         GGG   EEEEE  TTTTT                         */
/*                      L     S   S  M M   M M        G   G  E        T                           */
/*                      L     S      M  M M  M        G      E        T                           */
/*                      L      SSS   M   M   M        G GGG  EEEE     T                           */
/*                      L         S  M       M        G   G  E        T                           */
/*                      L     S   S  M       M        G   G  E        T                           */
/*                      LLLLL  SSS   M       M  ____   GGG   EEEEE    T                           */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/

/* Defines for evaluation of return values of Lsm_Get interface when reading MEASUREMENT value    */
/* These defines can be used for clearing all other bits and comparing the result                 */
/*                                                                                                */
/* example:                                                                                       */
/* xRetVal_u32 = Lsm_Get((uint32)LSM_MEAS_TIME, &xVal_u16[0], (uint32)LSM_1);                     */
/* if( (xRetVal_u32 & LSM_MEASVAL_STMODEREAD) != LSM_MEASVAL_STMODEREAD)                          */
/*  {                                                                                             */
/*      ... A new mode value is available. Restart the reading of Ram values starting from Mode ..*/
/*  }                                                                                             */
/* else {                                                                                         */
/*      if((xRetVal_u32 & LSM_MEASVAL_VALID) == LSM_MEASVAL_VALID)                                */
/*      {                                                                                         */
/*          Request is valid now check for spi error.                                     */
/*          if((xRetVal_u32 & LSM_MEASVAL_SPIERR) != LSM_MEASVAL_SPIERR)                          */
/*          {                                                                                     */
/*              This requested value was successfully read. Now you can use the returned value    */
/*              numVals_u8 = xRetVal_u32 >> LSM_MEASVAL_NUMVALS_BP;                               */
/*              xVal_u16[0] to xVal_u16[numVals_u8-1] can be used.                                */
/*          }                                                                                     */
/*          else{                                                                                 */
/*               do the necessary for spi error                                                   */
/*              }                                                                                 */
/*       else{                                                                                    */
/*            do the necessary for the measurement value requested not being a valid data.        */
/*       }                                                                                        */
/* }                                                                                              */
/*                                                                                                */
/* Simple way of handling the return values                                                       */
/* if( (xRetVal_u32 & (LSM_MEASVAL_STMODEREAD | LSM_MEASVAL_VALID | LSM_MEASVAL_SPIERR |LSM_MEASVAL_STFAILURE)) ==       */
/*                 (LSM_MEASVAL_STMODEREAD | LSM_MEASVAL_VALID))                                  */
/*  {                                                                                             */
/*       The mode value is already read and the requested data is valid. and there is no spi error*/
/*       seen while reading the ram bank of 64 words.                                             */
/*       This requested value was successfully read. Now you can use the returned value           */
/*        numVals_u8 = (uint8)xRetVal_u32 >> LSM_MEASVAL_NUMVALS_BP;                              */
/*        xVal_u16[0] to xVal_u16[numVals_u8-1] can be used.                                      */
/*  }                                                                                             */
/*  else{                                                                                         */
/*       Either the mode is not requested after the RAM bank is read or                           */
/*       the request is not valid                                                                 */
/*       or an spi error is seen.                                                                 */
/*       or a RAM Bank error has occured.                                                         */
/*       Now you need to check for individual errors and take necessary actions.                  */
/*                                                                                                */
/*  }                                                                                             */
/*                                                                                                */

/* Bit values of return value Return Value of Cj135_Get_RamMeas() (Lsm_Get())*/
/* BIT0: Bit value for the read status of Mode. If the mode of the RAM bank is already requested by the
   higher layer software, then this bit is set to ONE.*/
#define     LSM_MEASVAL_STMODEREAD_SET                      (uint32)CJ135_RAMBNK_STMODEREAD_SET
#define     LSM_MEASVAL_STMODEREAD_BP                       (uint32)CJ135_RAMBNK_STMODEREAD_BP
/* BIT1: Validity of the measurement value requested.
   The requested measurement value is invalid
        1. if the RAM is not read even once.
        2. if the measurement value does not belong to the mode of the ram bank read */
#define     LSM_MEASVAL_VALID_SET                           (uint32)CJ135_RAMBNK_STVALIDITY_SET
#define     LSM_MEASVAL_VALID_BP                            (uint32)CJ135_RAMBNK_STVALIDITY_BP
/* BIT2: If a Spi error was seen in atleast one read of the ram bank. In this case the whole RAM is set
   as SPI error. Do not evaluate the data returned. */
#define     LSM_MEASVAL_SPIERR_SET                          (uint32)CJ135_RAMBNK_STSPIERROR_SET
#define     LSM_MEASVAL_SPIERR_BP                           (uint32)CJ135_RAMBNK_STSPIERROR_BP

/* BIT3: The presence of a RAM failure is indicated by this bit*/
#define     LSM_MEASVAL_STFAILURE_SET                       (uint32)CJ135_RAMBNK_STFAILURE_SET
#define     LSM_MEASVAL_STFAILURE_BP                        (uint32)CJ135_RAMBNK_STFAILURE_BP

/* BIT4: If the previously read RAM bank was not read by the higher software layers, and a new read of RAM
  bank has taken place, then the Data lost bit is set.*/
#define     LSM_MEASVAL_LOST_SET                            (uint32)CJ135_RAMBNK_STDATALOST_SET
#define     LSM_MEASVAL_LOST_BP                             (uint32)CJ135_RAMBNK_STDATALOST_BP

/* BITs 24 to 27: Number of values copied for the requested Measurement value. Max of 16values*/
#define     LSM_MEASVAL_NUMVALS_BP                          CJ135_RAMBNK_NUMMEASVAL_BP
#define     LSM_MEASVAL_NUMVALS_MSK                         (uint32)CJ135_RAMBNK_NUMMEASVAL_MSK

/*Bit values of return value Return Value of Cj135_Get_RamMeas() for TimeStamp (Lsm_Get())*/
#define LSM_TIMESTAMP_STREAD_BP                           CJ135_TIMESTAMP_STREAD_BP
#define LSM_TIMESTAMP_STREAD_SET                          CJ135_TIMESTAMP_STREAD_SET
#define LSM_TIMESTAMP_STVALIDITY_BP                       CJ135_TIMESTAMP_STVALIDITY_BP
#define LSM_TIMESTAMP_STVALIDITY_SET                      CJ135_TIMESTAMP_STVALIDITY_SET





/* Defines for evaluation of return values of Lsm_Get interface when reading REGISTER value       */
/* These defines can be used for clearing all other bits and comparing the result                 */
/*                                                                                                */
/* example:                                                                                       */
/* xRetVal_u32 = Lsm_Get((uint32)CJ135_REG_CONFIGDSP, &xVal_u16[0], (uint32)LSM_1);               */
/* if( (xRetVal_u32 & (LSM_REGVAL_VALID | LSM_REGVAL_SPIERR_REQREG_BP)) ==                        */
/*     (LSM_REGVAL_VALID )                                                                        */
/*   )                                                                                            */
/* {                                                                                              */
/*      ... evaluate register value ...                                                           */
/*      The returned register values are always the ones that are copied into the dsp             */
/*      xVal_u16[0]  can be used.                                                                 */
/*      ...                                                                                       */
/* }                                                                                              */
/* To get the spi error of all the 15 registers do the following.                                 */
/* xSpiErrofAllReg_u16 =                                                                          */
/*            (uint16)((xRetVal_u32 & LSM_REGVAL_SPIERR_ALLREG_MSK) >> LSM_REGVAL_SPIERR_ALLREG_BP)*/


/*Bit values of return value used in Cj135_GetRegVal() (Lsm_Get())*/
/*BIT1: Validity of the value asked and passed. - The value is read atleast once */
#define     LSM_REGVAL_VALID                        (uint32)CJ135_REGBNK_STVALIDITY_SET
#define     LSM_REGBNK_STVALIDITY_BP                (uint32)CJ135_REGBNK_STVALIDITY_BP
/*BIT2: Spi error info for the register value requested.*/
#define     LSM_REGVAL_SPIERR_REQREG_MSK            (uint32)CJ135_REGBNK_STSPIERROR_REQREG_MSK
#define     LSM_REGVAL_SPIERR_REQREG_BP             (uint32)CJ135_REGBNK_STSPIERROR_REQREG_BP
/* BITs 8 to 23 - SPI error information of all the 15 registers. (SPI error for ACTMODE register can not be validated)
   This information can be used to debounce the spi error during register read.*/
#define     LSM_REGVAL_SPIERR_ALLREG_MSK            (uint32)CJ135_REGBNK_STSPIERROR_ALLREG_MSK
#define     LSM_REGVAL_SPIERR_ALLREG_BP             (uint32)CJ135_REGBNK_STSPIERROR_ALLREG_BP


/*                                                                                    */
/* Defines for evaluating the results from Lsm_Get interface for REGISTER PART        */
/* These defines can be used for clearing all other bits or bitfields of the returned */
/* register value (LSM_xxx_MSK). After masking the not interesting part of the value  */
/* another define can be used for shifting the interesting part to the LSB position   */
/* (LSM_xxx_POS).                                                                     */
/*                                                                                    */
/* example for reading current MODE register (ACTMODE) from register bank:            */
/* xRetVal_u32 = Lsm_Get((uint32)LSM_REG_ACTMODE, (uint16)xVar_u16, (uint32)LSM_1);   */
/* ... xRetVal_u32 evaluation ...                                                     */
/* dMode_u16 = (xVar_u16 & LSM_MODE_MSK) >> LSM_MODE_POS;                             */

/* defines for bitfields at MODE registers of register bank at CJ135 */
#define     LSM_TAKEDATA_POS                                CJ135_TAKEDATA_REG_POS
#define     LSM_TAKEDATA_MSK                                CJ135_TAKEDATA_MSK

#define     LSM_MODE_POS                                    CJ135_MODE_REG_POS
#define     LSM_MODE_MSK                                    CJ135_MODE_MSK

#define     LSM_MK_POS                                      CJ135_MK_REG_POS
#define     LSM_MK_MSK                                      CJ135_MK_MSK

#define     LSM_URIA_POS                                    CJ135_URIA_REG_POS
#define     LSM_URIA_MSK                                    CJ135_URIA_MSK

#define     LSM_OPT_POS                                     CJ135_OPT_REG_POS
#define     LSM_OPT_MSK                                     CJ135_OPT_MSK

#define     LSM_REF_POS                                     CJ135_REF_REG_POS
#define     LSM_REF_MSK                                     CJ135_REF_MSK

#define     LSM_LN_POS                                      CJ135_LN_REG_POS
#define     LSM_LN_MSK                                      CJ135_LN_MSK

#define     LSM_LP_POS                                      CJ135_LP_REG_POS
#define     LSM_LP_MSK                                      CJ135_LP_MSK

#define     LSM_OFF_POS                                     CJ135_OFF_REG_POS
#define     LSM_OFF_MSK                                     CJ135_OFF_MSK

/* defines for CONFIGDSP register */
#define     LSM_FUSKS_POS                                   CJ135_FUSKS_REG_POS
#define     LSM_FUSKS_MSK                                   CJ135_FUSKS_MSK

#define     LSM_FU0HYS_POS                                  CJ135_FU0HYS_REG_POS
#define     LSM_FU0HYS_MSK                                  CJ135_FU0HYS_MSK

#define     LSM_RESDSP_POS                                  CJ135_RESDSP_REG_POS
#define     LSM_RESDSP_MSK                                  CJ135_RESDSP_MSK

#define     LSM_RESUP_POS                                   CJ135_RESUP_REG_POS
#define     LSM_RESUP_MSK                                   CJ135_RESUP_MSK
/* new name of bit RESUP -> RESxdk */
#define     LSM_RESXDK_REG_POS                              CJ135_RESXDK_REG_POS
#define     LSM_RESXDK_MSK                                  CJ135_RESXDK_MSK

#define     LSM_RESUN_POS                                   CJ135_RESUN_REG_POS
#define     LSM_RESUN_MSK                                   CJ135_RESUN_MSK

#define     LSM_A1UP_POS                                    CJ135_A1UP_REG_POS
#define     LSM_A1UP_MSK                                    CJ135_A1UP_MSK

#define     LSM_A1UN_POS                                    CJ135_A1UN_REG_POS
#define     LSM_A1UN_MSK                                    CJ135_A1UN_MSK

/* new name of bit A1UN -> D_SET */
#define     LSM_DSET_REG_POS                                CJ135_DSET_REG_POS
#define     LSM_DSET_MSK                                    CJ135_DSET_MSK


#define     LSM_ENSP_REG_POS                                CJ135_ENSP_REG_POS
#define     LSM_ENSP_MSK                                    CJ135_ENSP_MSK

/* defines for TRIM register */
#define     LSM_TRIMSQR_POS                                 CJ135_TRIMSQR_REG_POS
#define     LSM_TRIMSQR_MSK                                 CJ135_TRIMSQR_MSK

#define     LSM_TRIMSQ_POS                                  CJ135_TRIMSQ_REG_POS
#define     LSM_TRIMSQ_MSK                                  CJ135_TRIMSQ_MSK

#define     LSM_DSPDIAGDIS_POS                              CJ135_DSPDIAGDIS_REG_POS
#define     LSM_DSPDIAGDIS_MSK                              CJ135_DSPDIAGDIS_MSK

/* #defines for STEERPAT register */
#define     LSM_IPSM_REG_POS                                CJ135_IPSM_REG_POS
#define     LSM_IPSM_MSK                                    CJ135_IPSM_MSK

#define     LSM_PATTERN_REG_POS                             CJ135_PATTERN_REG_POS
#define     LSM_PATTERN_MSK                                 CJ135_PATTERN_MSK

/* defines for virtual register */

#define     LSM_N3MEASACTV_VREG_POS                         CJ135_N3MEASACTV_VREG_POS
#define     LSM_N3MEASACTV_MSK                              CJ135_N3MEASACTV_MSK

#define     LSM_V1BIT1_VREG_POS                             CJ135_V1BIT1_VREG_POS
#define     LSM_V1BIT1_MSK                                  CJ135_V1BIT1_MSK

#define     LSM_V1BIT2_VREG_POS                             CJ135_V1BIT2_VREG_POS
#define     LSM_V1BIT2_MSK                                  CJ135_V1BIT2_MSK

#define     LSM_V1BIT3_VREG_POS                             CJ135_V1BIT3_VREG_POS
#define     LSM_V1BIT3_MSK                                  CJ135_V1BIT3_MSK

#define     LSM_V1BIT4_VREG_POS                             CJ135_V1BIT4_VREG_POS
#define     LSM_V1BIT4_MSK                                  CJ135_V1BIT4_MSK

#define     LSM_V1BIT5_VREG_POS                             CJ135_V1BIT5_VREG_POS
#define     LSM_V1BIT5_MSK                                  CJ135_V1BIT5_MSK

#define     LSM_SWTONRCODMEASOFF_VREG_POS                   CJ135_SWTONRCODMEASOFF_VREG_POS
#define     LSM_SWTONRCODMEASOFF_MSK                        CJ135_SWTONRCODMEASOFF_MSK

#define     LSM_V1BF2_VREG_POS                              CJ135_V1BF2_VREG_POS
#define     LSM_V1BF2_MSK                                   CJ135_V1BF2_MSK

#define     LSM_V1BF3_VREG_POS                              CJ135_V1BF3_VREG_POS
#define     LSM_V1BF3_MSK                                   CJ135_V1BF3_MSK

#define     LSM_V1BF4_VREG_POS                              CJ135_V1BF4_VREG_POS
#define     LSM_V1BF4_MSK                                   CJ135_V1BF4_MSK

/*------------------------------------------------------------------------------------------------*/
/* Defines for interface for interface Lsm_GetErr                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Signalnames used as parameters for interface Lsm_GetErr                                        */
/*------------------------------------------------------------------------------------------------*/
/* Enumeration of CJ135 error signal names                                         */
/* These enumerators are used as parameters for Lsm_GetErr function by DE software */
/* when reading error information of device driver                                 */
/* THIS ENUMERATOR MUST HAVE THE SAME ORDER AS CJ135_ERR_VALS_E at cj135_pub.h     */
typedef enum
{
/* Defines of index for diagnostic registers at the pointer variable *adr_u8 of Cj135_GetErrStat_Info() */
LSM_DIAG0_INDEX    = CJ135_DIAG0_INDEX,
LSM_DIAG1_INDEX    = CJ135_DIAG1_INDEX,
LSM_CHIPSTAT_INDEX = CJ135_CHIPSTAT_INDEX,
LSM_DSPSTAT_INDEX  = CJ135_DSPSTAT_INDEX,
LSM_CHIPERR_INDEX  = CJ135_CHIPERR_INDEX,
LSM_IRQERR_INDEX   = CJ135_IRQERR_INDEX
}LSM_GETDIAGSTATINFO_INDEX_E;


/*                Lsm_GetErrStatInfo()                                                            */
/* Defines for evaluating the results from Lsm_GetErrInfo interface with parameter LSM_ERR_CHIP */
/* These defines can be used for clearing all other bits or bitfields of the returned register  */
/* value (LSM_ERR_xxx_MSK). After masking the not interesting part of the value another define  */
/* can be used for shifting the interesting part to the LSB position (LSM_ERR_xxx_POS).         */
/*                                                                                              */
/* example for reading chip error from device driver:                                           */
/* xRetVal_u32 = Lsm_GetErrStatInfo(uint8 &xVal_u16[0], (uint32)LSM_1);                         */
/* if( (xRetVal_u32 & (LSM_GETERRSTAT_NEWINFO_MSK | LSM_GETERRSTAT_SPIERR_MSK) ) ==             */
/*               LSM_GETERRSTAT_NEWINFO_MSK)                                                    */
/* {                                                                                            */
/*     A new value is available and the data can be evaluated as there is not spi error.        */
/*     xVal_u16[LSM_DIAG0_INDEX to LSM_DSPSTAT_INDEX] can be used.                              */
/*                                                                                              */
/*     To check for Initialisation state                                                        */
/*      if( (xVal_u16[LSM_CHIPERR_INDEX] & LSM_CHIPERR_INITFAIL_VAL) ==  LSM_CHIPERR_INITFAIL_VAL)*/
/*      {                                                                                         */
/*       do the needful in the event of initialization failure.                                   */
/*      }                                                                                         */
/* }                                                                                              */
/* To check errors in interrupt of the system.                                                    */
/* if( (xVal_u16[LSM_IRQERR_INDEX] & LSM_IRQErr_STSYS_VAL) == LSM_IRQErr_STSYS_VAL)               */
/* {  Interrupt was active in the system. So all the errors indiated by                           */
/*       xVal_u16[LSM_IRQERR_INDEX] can be used.                                                  */
/*    The internal Global variable is erased after passing the information                        */
/*                                                                                                */
/*    To check for slow interrupt intervals.                                                      */
/*    if(( xVal_u16[LSM_IRQERR_INDEX] & LSM_IRQErr_INTSLOW_VAL) == LSM_IRQErr_INTSLOW_VAL)        */
/*    {                                                                                           */
/*           do the necessary for a slow interrupt.                                               */
/*    }                                                                                           */
/* }                                                                                              */
/*                                                                                                */

/* Defines for LSM_ERR_CHIP */

/* Bit values of Chip Error */
#define LSM_CHIPERR_INITFAIL_BP   CJ135_CHIPERR_INITFAIL_BP
#define LSM_CHIPERR_INITFAIL_VAL  CJ135_CHIPERR_INITFAIL_VAL
#define LSM_CHIPERR_MODEFAIL_BP   CJ135_CHIPERR_MODEFAIL_BP
#define LSM_CHIPERR_MODEFAIL_VAL  CJ135_CHIPERR_MODEFAIL_VAL
#define LSM_CHIPERR_BNKSWT_BP     CJ135_CHIPERR_BNKSWT_BP
#define LSM_CHIPERR_BNKSWT_VAL    CJ135_CHIPERR_BNKSWT_VAL

#define LSM_CHIPERR_MSK         CJ135_CHIPERR_MSK

/* Bit values for IRQ error => Errors in interrupt signal. */
#define LSM_IRQErr_STSYS_BP       CJ135_IRQErr_STSYS_BP
#define LSM_IRQErr_STSYS_VAL      CJ135_IRQErr_STSYS_VAL
#define LSM_IRQErr_INTSLOW_BP     CJ135_IRQErr_INTSLOW_BP
#define LSM_IRQErr_INTSLOW_VAL    CJ135_IRQErr_INTSLOW_VAL
#define LSM_IRQErr_INTFAST_BP     CJ135_IRQErr_INTFAST_BP
#define LSM_IRQErr_INTFAST_VAL    CJ135_IRQErr_INTFAST_VAL
#define LSM_IRQErr_NOINT_BP       CJ135_IRQErr_NOINT_BP
#define LSM_IRQErr_NOINT_VAL      CJ135_IRQErr_NOINT_VAL

#define LSM_IRQErr_MSK            CJ135_IRQErr_MSK


/* Bit values of return value used in Cj135_GetErrStatInfo() */
#define LSM_GETERRSTAT_SPIERR_BP      CJ135_GETERRSTAT_SPIERR_BP
#define LSM_GETERRSTAT_SPIERR_MSK     CJ135_GETERRSTAT_SPIERR_MSK

#define LSM_GETERRSTAT_NEWINFO_BP     CJ135_GETERRSTAT_NEWINFO_BP
#define LSM_GETERRSTAT_NEWINFO_MSK    CJ135_GETERRSTAT_NEWINFO_MSK


/*------------------------------------------------------------------------------------------------*/
/* Redefines of interface names for the device driver Cj135                                       */
/*------------------------------------------------------------------------------------------------*/
/* #define     Lsm_Get                                         Cj135_Get */
/* #define     Lsm_Set                                         Cj135_Set */
/* interface renaming for set-interfaces (writing registers or set heater signal) */
#define     Lsm_Set(par, val, chip)                         Lsm_Set_##par(val, chip)

/* write registers of CJ135 register bank */
#define     Lsm_Set_CJ135_REG_MODE(val, chip)               Cj135_Set(CJ135_REG_MODE      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_MODE        ,0)
#define     Lsm_Set_CJ135_REG_UNSET(val, chip)              Cj135_Set(CJ135_REG_UNSET     ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNSET       ,0)
#define     Lsm_Set_CJ135_REG_UNB0(val, chip)               Cj135_Set(CJ135_REG_UNB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,0)
#define     Lsm_Set_CJ135_REG_UNB1(val, chip)               Cj135_Set(CJ135_REG_UNB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,3)
#define     Lsm_Set_CJ135_REG_UNB2(val, chip)               Cj135_Set(CJ135_REG_UNB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,6)
#define     Lsm_Set_CJ135_REG_UP0LEAN(val, chip)            Cj135_Set(CJ135_REG_UP0LEAN   ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UP0         ,0)
#define     Lsm_Set_CJ135_REG_UP0RICH(val, chip)            Cj135_Set(CJ135_REG_UP0RICH   ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UP0         ,3)
#define     Lsm_Set_CJ135_REG_UPB0(val, chip)               Cj135_Set(CJ135_REG_UPB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,0)
#define     Lsm_Set_CJ135_REG_UPB1(val, chip)               Cj135_Set(CJ135_REG_UPB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,3)
#define     Lsm_Set_CJ135_REG_UPB2(val, chip)               Cj135_Set(CJ135_REG_UPB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,6)
#define     Lsm_Set_CJ135_REG_IPOFF(val, chip)              Cj135_Set(CJ135_REG_IPOFF     ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_IPOFF       ,0)
#define     Lsm_Set_CJ135_REG_STEERPAT(val, chip)           Cj135_Set(CJ135_REG_STEERPAT  ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_STEERPAT    ,0)
#define     Lsm_Set_CJ135_REG_CONFIGDSP(val, chip)          Cj135_Set(CJ135_REG_CONFIGDSP ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_CONFIGDSP   ,0)
#define     Lsm_Set_CJ135_REG_TRIM(val, chip)               Cj135_Set(CJ135_REG_TRIM      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_TRIM        ,0)
#define     Lsm_Set_CJ135_REG_REFPAT(val, chip)             Cj135_Set(CJ135_REG_REFPAT    ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_REFPAT      ,0)
#define     Lsm_Set_CJ135_REG_VIRTUAL1(val, chip)           Cj135_Set(CJ135_REG_VIRTUAL1  ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_VIRTUAL1           ,0)

/* New register names for CJ135 C1 step (formerly UNB0, UNB1, UNB2) */
#define     Lsm_Set_CJ135_REG_KP(val, chip)                 Cj135_Set(CJ135_REG_UNB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,0)
#define     Lsm_Set_CJ135_REG_KI(val, chip)                 Cj135_Set(CJ135_REG_UNB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,3)
#define     Lsm_Set_CJ135_REG_KD(val, chip)                 Cj135_Set(CJ135_REG_UNB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,6)
/* New register names for CJ135 C1 step (formerly UPB0, UPB1, UPB2) */
#define     Lsm_Set_CJ135_REG_IPSET(val, chip)              Cj135_Set(CJ135_REG_UPB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,0)
#define     Lsm_Set_CJ135_REG_IPBLACK(val, chip)            Cj135_Set(CJ135_REG_UPB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,3)
#define     Lsm_Set_CJ135_REG_KRF(val, chip)                Cj135_Set(CJ135_REG_UPB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,6)

#define     Lsm_Set_LSM_REG_MODE(val, chip)                 Cj135_Set(CJ135_REG_MODE      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_MODE        ,0)
#define     Lsm_Set_LSM_REG_UNSET(val, chip)                Cj135_Set(CJ135_REG_UNSET     ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNSET       ,0)
#define     Lsm_Set_LSM_REG_UNB0(val, chip)                 Cj135_Set(CJ135_REG_UNB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,0)
#define     Lsm_Set_LSM_REG_UNB1(val, chip)                 Cj135_Set(CJ135_REG_UNB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,3)
#define     Lsm_Set_LSM_REG_UNB2(val, chip)                 Cj135_Set(CJ135_REG_UNB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX        ,6)
#define     Lsm_Set_LSM_REG_UP0LEAN(val, chip)              Cj135_Set(CJ135_REG_UP0LEAN   ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UP0         ,0)
#define     Lsm_Set_LSM_REG_UP0RICH(val, chip)              Cj135_Set(CJ135_REG_UP0RICH   ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UP0         ,3)
#define     Lsm_Set_LSM_REG_UPB0(val, chip)                 Cj135_Set(CJ135_REG_UPB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,0)
#define     Lsm_Set_LSM_REG_UPB1(val, chip)                 Cj135_Set(CJ135_REG_UPB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,3)
#define     Lsm_Set_LSM_REG_UPB2(val, chip)                 Cj135_Set(CJ135_REG_UPB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX        ,6)
#define     Lsm_Set_LSM_REG_IPOFF(val, chip)                Cj135_Set(CJ135_REG_IPOFF     ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_IPOFF       ,0)
#define     Lsm_Set_LSM_REG_STEERPAT(val, chip)             Cj135_Set(CJ135_REG_STEERPAT  ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_STEERPAT    ,0)
#define     Lsm_Set_LSM_REG_CONFIGDSP(val, chip)            Cj135_Set(CJ135_REG_CONFIGDSP ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_CONFIGDSP   ,0)
#define     Lsm_Set_LSM_REG_TRIM(val, chip)                 Cj135_Set(CJ135_REG_TRIM      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_TRIM        ,0)
#define     Lsm_Set_LSM_REG_REFPAT(val, chip)               Cj135_Set(CJ135_REG_REFPAT    ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_REFPAT      ,0)
#define     Lsm_Set_LSM_REG_VIRTUAL1(val, chip)             Cj135_Set(CJ135_REG_VIRTUAL1  ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_VIRTUAL1           ,0)

/* New register names for CJ135 C1 step (formerly UNB0, UNB1, UNB2) */
#define     Lsm_Set_LSM_REG_KP(val, chip)                   Cj135_Set(CJ135_REG_UNB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX,0)
#define     Lsm_Set_LSM_REG_KI(val, chip)                   Cj135_Set(CJ135_REG_UNB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX,3)
#define     Lsm_Set_LSM_REG_KD(val, chip)                   Cj135_Set(CJ135_REG_UNB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UNBX,6)
/* New register names for CJ135 C1 step (formerly UPB0, UPB1, UPB2) */
#define     Lsm_Set_LSM_REG_IPSET(val, chip)                Cj135_Set(CJ135_REG_UPB0      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX,0)
#define     Lsm_Set_LSM_REG_IPBLACK(val, chip)              Cj135_Set(CJ135_REG_UPB1      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX,3)
#define     Lsm_Set_LSM_REG_KRF(val, chip)                  Cj135_Set(CJ135_REG_UPB2      ,CJ135_DUMMY_MSK, val, chip, CJ135_REG_SPISEQ_UPBX,6)

#define     Lsm_Set_CJ135_REGPART_MODE(val, chip)           Cj135_Set(CJ135_REGPART_MODE      ,CJ135_MODE_MSK       ,(val<<CJ135_MODE_REG_POS)       , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_TAKEDATA(val, chip)       Cj135_Set(CJ135_REGPART_TAKEDATA  ,CJ135_TAKEDATA_MSK   ,(val<<CJ135_TAKEDATA_REG_POS)   , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_OFF(val, chip)            Cj135_Set(CJ135_REGPART_OFF       ,CJ135_OFF_MSK        ,(val<<CJ135_OFF_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_LP(val, chip)             Cj135_Set(CJ135_REGPART_LP        ,CJ135_LP_MSK         ,(val<<CJ135_LP_REG_POS)         , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_LN(val, chip)             Cj135_Set(CJ135_REGPART_LN        ,CJ135_LN_MSK         ,(val<<CJ135_LN_REG_POS)         , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_REF(val, chip)            Cj135_Set(CJ135_REGPART_REF       ,CJ135_REF_MSK        ,(val<<CJ135_REF_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_OPT(val, chip)            Cj135_Set(CJ135_REGPART_OPT       ,CJ135_OPT_MSK        ,(val<<CJ135_OPT_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_URIA(val, chip)           Cj135_Set(CJ135_REGPART_URIA      ,CJ135_URIA_MSK       ,(val<<CJ135_URIA_REG_POS)       , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_MK(val, chip)             Cj135_Set(CJ135_REGPART_MK        ,CJ135_MK_MSK         ,(val<<CJ135_MK_REG_POS)         , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_CJ135_REGPART_FUSKS(val, chip)          Cj135_Set(CJ135_REGPART_FUSKS     ,CJ135_FUSKS_MSK      ,(val<<CJ135_FUSKS_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_FU0HYS(val, chip)         Cj135_Set(CJ135_REGPART_FU0HYS    ,CJ135_FU0HYS_MSK     ,(val<<CJ135_FU0HYS_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_RESDSP(val, chip)         Cj135_Set(CJ135_REGPART_RESDSP    ,CJ135_RESDSP_MSK     ,(val<<CJ135_RESDSP_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_RESUP(val, chip)          Cj135_Set(CJ135_REGPART_RESUP     ,CJ135_RESUP_MSK      ,(val<<CJ135_RESUP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_RESXDK(val, chip)         Cj135_Set(CJ135_REGPART_RESXDK    ,CJ135_RESUP_MSK      ,(val<<CJ135_RESUP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_RESUN(val, chip)          Cj135_Set(CJ135_REGPART_RESUN     ,CJ135_RESUN_MSK      ,(val<<CJ135_RESUN_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_A1UP(val, chip)           Cj135_Set(CJ135_REGPART_A1UP      ,CJ135_A1UP_MSK       ,(val<<CJ135_A1UP_REG_POS)       , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_A1UN(val, chip)           Cj135_Set(CJ135_REGPART_A1UN      ,CJ135_A1UN_MSK       ,(val<<CJ135_A1UN_REG_POS)       , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_EN_SP(val, chip)          Cj135_Set(CJ135_REGPART_EN_SP     ,CJ135_ENSP_MSK       ,(val<<CJ135_ENSP_REG_POS)       , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_TRIMSQR(val, chip)        Cj135_Set(CJ135_REGPART_TRIMSQR   ,CJ135_TRIMSQR_MSK    ,(val<<CJ135_TRIMSQR_REG_POS)    , chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_CJ135_REGPART_TRIMSQ(val, chip)         Cj135_Set(CJ135_REGPART_TRIMSQ    ,CJ135_TRIMSQ_MSK     ,(val<<CJ135_TRIMSQ_REG_POS)     , chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_CJ135_REGPART_DSPDIAGDIS(val, chip)     Cj135_Set(CJ135_REGPART_DSPDIAGDIS,CJ135_DSPDIAGDIS_MSK ,(val<<CJ135_DSPDIAGDIS_REG_POS) , chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_CJ135_REGPART_IPSM(val, chip)           Cj135_Set(CJ135_REGPART_IPSM      ,CJ135_IPSM_MSK       ,(val<<CJ135_IPSM_REG_POS)       , chip, CJ135_REG_SPISEQ_STEERPAT,0)
#define     Lsm_Set_CJ135_REGPART_PATTERN(val, chip)        Cj135_Set(CJ135_REGPART_PATTERN   ,CJ135_PATTERN_MSK    ,(val<<CJ135_PATTERN_REG_POS)    , chip, CJ135_REG_SPISEQ_STEERPAT,0)

#define     Lsm_Set_CJ135_REGPART_N3MEASACTV(val, chip)     Cj135_Set(CJ135_REGPART_N3MEASACTV,CJ135_N3MEASACTV_MSK ,(val<<CJ135_N3MEASACTV_VREG_POS), chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BIT1(val, chip)         Cj135_Set(CJ135_REGPART_V1BIT1    ,CJ135_V1BIT1_MSK     ,(val<<CJ135_V1BIT1_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BIT2(val, chip)         Cj135_Set(CJ135_REGPART_V1BIT2    ,CJ135_V1BIT2_MSK     ,(val<<CJ135_V1BIT2_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BIT3(val, chip)         Cj135_Set(CJ135_REGPART_V1BIT3    ,CJ135_V1BIT3_MSK     ,(val<<CJ135_V1BIT3_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BIT4(val, chip)         Cj135_Set(CJ135_REGPART_V1BIT4    ,CJ135_V1BIT4_MSK     ,(val<<CJ135_V1BIT4_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BIT5(val, chip)         Cj135_Set(CJ135_REGPART_V1BIT5    ,CJ135_V1BIT5_MSK     ,(val<<CJ135_V1BIT5_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_SWTONRCODMEASOFF(val, chip)  \
Cj135_Set(CJ135_REGPART_SWTONRCODMEASOFF ,CJ135_SWTONRCODMEASOFF_MSK ,(val<<CJ135_SWTONRCODMEASOFF_VREG_POS),chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BF2(val, chip)          Cj135_Set(CJ135_REGPART_V1BF2     ,CJ135_V1BF2_MSK      ,(val<<CJ135_V1BF2_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BF3(val, chip)          Cj135_Set(CJ135_REGPART_V1BF3     ,CJ135_V1BF3_MSK      ,(val<<CJ135_V1BF3_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_CJ135_REGPART_V1BF4(val, chip)          Cj135_Set(CJ135_REGPART_V1BF4     ,CJ135_V1BF4_MSK      ,(val<<CJ135_V1BF4_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)
                                                                                                                                      
/* New register part names for CJ135 C1 step (formerly A1UP, A1UN) */
#define     Lsm_Set_CJ135_REGPART_IPSET(val, chip)          Cj135_Set(CJ135_REGPART_A1UP      ,CJ135_A1UP_MSK       ,(val<<CJ135_A1UP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_CJ135_REGPART_DSET(val, chip)           Cj135_Set(CJ135_REGPART_A1UN      ,CJ135_A1UN_MSK       ,(val<<CJ135_A1UN_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)

#define     Lsm_Set_LSM_REGPART_MODE(val, chip)             Cj135_Set(CJ135_REGPART_MODE      ,CJ135_MODE_MSK       ,(val<<CJ135_MODE_REG_POS)      , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_TAKEDATA(val, chip)         Cj135_Set(CJ135_REGPART_TAKEDATA  ,CJ135_TAKEDATA_MSK   ,(val<<CJ135_TAKEDATA_REG_POS)  , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_OFF(val, chip)              Cj135_Set(CJ135_REGPART_OFF       ,CJ135_OFF_MSK        ,(val<<CJ135_OFF_REG_POS)       , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_LP(val, chip)               Cj135_Set(CJ135_REGPART_LP        ,CJ135_LP_MSK         ,(val<<CJ135_LP_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_LN(val, chip)               Cj135_Set(CJ135_REGPART_LN        ,CJ135_LN_MSK         ,(val<<CJ135_LN_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_REF(val, chip)              Cj135_Set(CJ135_REGPART_REF       ,CJ135_REF_MSK        ,(val<<CJ135_REF_REG_POS)       , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_OPT(val, chip)              Cj135_Set(CJ135_REGPART_OPT       ,CJ135_OPT_MSK        ,(val<<CJ135_OPT_REG_POS)       , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_URIA(val, chip)             Cj135_Set(CJ135_REGPART_URIA      ,CJ135_URIA_MSK       ,(val<<CJ135_URIA_REG_POS)      , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_MK(val, chip)               Cj135_Set(CJ135_REGPART_MK        ,CJ135_MK_MSK         ,(val<<CJ135_MK_REG_POS)        , chip, CJ135_REG_SPISEQ_MODE,0)
#define     Lsm_Set_LSM_REGPART_FUSKS(val, chip)            Cj135_Set(CJ135_REGPART_FUSKS     ,CJ135_FUSKS_MSK      ,(val<<CJ135_FUSKS_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_FU0HYS(val, chip)           Cj135_Set(CJ135_REGPART_FU0HYS    ,CJ135_FU0HYS_MSK     ,(val<<CJ135_FU0HYS_REG_POS)    , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_RESDSP(val, chip)           Cj135_Set(CJ135_REGPART_RESDSP    ,CJ135_RESDSP_MSK     ,(val<<CJ135_RESDSP_REG_POS)    , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_RESUP(val, chip)            Cj135_Set(CJ135_REGPART_RESUP     ,CJ135_RESUP_MSK      ,(val<<CJ135_RESUP_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_RESXDK(val, chip)           Cj135_Set(CJ135_REGPART_RESXDK    ,CJ135_RESUP_MSK      ,(val<<CJ135_RESUP_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_RESUN(val, chip)            Cj135_Set(CJ135_REGPART_RESUN     ,CJ135_RESUN_MSK      ,(val<<CJ135_RESUN_REG_POS)     , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_A1UP(val, chip)             Cj135_Set(CJ135_REGPART_A1UP      ,CJ135_A1UP_MSK       ,(val<<CJ135_A1UP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_A1UN(val, chip)             Cj135_Set(CJ135_REGPART_A1UN      ,CJ135_A1UN_MSK       ,(val<<CJ135_A1UN_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_EN_SP(val, chip)            Cj135_Set(CJ135_REGPART_EN_SP     ,CJ135_ENSP_MSK       ,(val<<CJ135_ENSP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_TRIMSQR(val, chip)          Cj135_Set(CJ135_REGPART_TRIMSQR   ,CJ135_TRIMSQR_MSK    ,(val<<CJ135_TRIMSQR_REG_POS)   , chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_LSM_REGPART_TRIMSQ(val, chip)           Cj135_Set(CJ135_REGPART_TRIMSQ    ,CJ135_TRIMSQ_MSK     ,(val<<CJ135_TRIMSQ_REG_POS)    , chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_LSM_REGPART_DSPDIAGDIS(val, chip)       Cj135_Set(CJ135_REGPART_DSPDIAGDIS,CJ135_DSPDIAGDIS_MSK ,(val<<CJ135_DSPDIAGDIS_REG_POS), chip, CJ135_REG_SPISEQ_TRIM,0)
#define     Lsm_Set_LSM_REGPART_IPSM(val, chip)             Cj135_Set(CJ135_REGPART_IPSM      ,CJ135_IPSM_MSK       ,(val<<CJ135_IPSM_REG_POS)      , chip, CJ135_REG_SPISEQ_STEERPAT,0)
#define     Lsm_Set_LSM_REGPART_PATTERN(val, chip)          Cj135_Set(CJ135_REGPART_PATTERN   ,CJ135_PATTERN_MSK    ,(val<<CJ135_PATTERN_REG_POS)   , chip, CJ135_REG_SPISEQ_STEERPAT,0)

#define     Lsm_Set_LSM_REGPART_N3MEASACTV(val, chip)       Cj135_Set(CJ135_REGPART_N3MEASACTV,CJ135_N3MEASACTV_MSK ,(val<<CJ135_N3MEASACTV_VREG_POS), chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BIT1(val, chip)           Cj135_Set(CJ135_REGPART_V1BIT1    ,CJ135_V1BIT1_MSK     ,(val<<CJ135_V1BIT1_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BIT2(val, chip)           Cj135_Set(CJ135_REGPART_V1BIT2    ,CJ135_V1BIT2_MSK     ,(val<<CJ135_V1BIT2_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BIT3(val, chip)           Cj135_Set(CJ135_REGPART_V1BIT3    ,CJ135_V1BIT3_MSK     ,(val<<CJ135_V1BIT3_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BIT4(val, chip)           Cj135_Set(CJ135_REGPART_V1BIT4    ,CJ135_V1BIT4_MSK     ,(val<<CJ135_V1BIT4_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BIT5(val, chip)           Cj135_Set(CJ135_REGPART_V1BIT5    ,CJ135_V1BIT5_MSK     ,(val<<CJ135_V1BIT5_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_SWTONRCODMEASOFF(val, chip)  \
Cj135_Set(CJ135_REGPART_SWTONRCODMEASOFF    ,CJ135_SWTONRCODMEASOFF_MSK     ,(val<<CJ135_SWTONRCODMEASOFF_VREG_POS)    , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BF2(val, chip)            Cj135_Set(CJ135_REGPART_V1BF2     ,CJ135_V1BF2_MSK      ,(val<<CJ135_V1BF2_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BF3(val, chip)            Cj135_Set(CJ135_REGPART_V1BF3     ,CJ135_V1BF3_MSK      ,(val<<CJ135_V1BF3_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)
#define     Lsm_Set_LSM_REGPART_V1BF4(val, chip)            Cj135_Set(CJ135_REGPART_V1BF4     ,CJ135_V1BF4_MSK      ,(val<<CJ135_V1BF4_VREG_POS)     , chip, CJ135_REG_VIRTUAL1,0)

/* New register part names for CJ135 C1 step (formerly A1UP, A1UN) */
#define     Lsm_Set_LSM_REGPART_IPSET(val, chip)            Cj135_Set(CJ135_REGPART_A1UP      ,CJ135_A1UP_MSK       ,(val<<CJ135_A1UP_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)
#define     Lsm_Set_LSM_REGPART_DSET(val, chip)             Cj135_Set(CJ135_REGPART_A1UN      ,CJ135_A1UN_MSK       ,(val<<CJ135_A1UN_REG_POS)      , chip, CJ135_REG_SPISEQ_CONFIGDSP,0)

/* heater signal of Cj135 */
#define     Lsm_Set_CJ135_HTR_DTY(val,chip)                 Cj135_SetHtrDty(val, chip)
#define     Lsm_Set_CJ135_HTR_PER(val,chip)                 Cj135_SetHtrPer(val, chip)

/* interface renaming for set-interfaces (writing registers or set heater signal) */
#define     Lsm_Get(par, adr, chip)                         Lsm_Get_##par(adr, chip)

/* read registers of CJ135 register bank */
#define     Lsm_Get_CJ135_REG_MODE(adr, chip)               Cj135_Get_RegVal(CJ135_REG_MODE,    adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UNSET(adr, chip)              Cj135_Get_RegVal(CJ135_REG_UNSET,   adr, chip, CJ135_REG_SPISEQ_UNSET,      CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UNB0(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UNB0,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UNB1(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UNB1,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UNB2(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UNB2,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UP0LEAN(adr, chip)            Cj135_Get_RegVal(CJ135_REG_UP0LEAN, adr, chip, CJ135_REG_SPISEQ_UP0,        CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UP0RICH(adr, chip)            Cj135_Get_RegVal(CJ135_REG_UP0RICH, adr, chip, CJ135_REG_SPISEQ_UP0,        CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UPB0(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UPB0,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UPB1(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UPB1,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_UPB2(adr, chip)               Cj135_Get_RegVal(CJ135_REG_UPB2,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_IPOFF(adr, chip)              Cj135_Get_RegVal(CJ135_REG_IPOFF,   adr, chip, CJ135_REG_SPISEQ_IPOFF,      CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_STEERPAT(adr, chip)           Cj135_Get_RegVal(CJ135_REG_STEERPAT,adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_CONFIGDSP(adr, chip)          Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,adr,chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_TRIM(adr, chip)               Cj135_Get_RegVal(CJ135_REG_TRIM,    adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_REFPAT(adr, chip)             Cj135_Get_RegVal(CJ135_REG_REFPAT,  adr, chip, CJ135_REG_SPISEQ_REFPAT,     CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_ACTMODE(adr, chip)            Cj135_Get_RegVal(CJ135_REG_ACTMODE, adr, chip, CJ135_REG_ACTMODE,           CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_VIRTUAL1(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,adr, chip, CJ135_REG_VIRTUAL1,          CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

#define     Lsm_Get_LSM_REG_MODE(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_MODE,    adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UNSET(adr, chip)                Cj135_Get_RegVal(CJ135_REG_UNSET,   adr, chip, CJ135_REG_SPISEQ_UNSET,      CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UNB0(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB0,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UNB1(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB1,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UNB2(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB2,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UP0LEAN(adr, chip)              Cj135_Get_RegVal(CJ135_REG_UP0LEAN, adr, chip, CJ135_REG_SPISEQ_UP0,        CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UP0RICH(adr, chip)              Cj135_Get_RegVal(CJ135_REG_UP0RICH, adr, chip, CJ135_REG_SPISEQ_UP0,        CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UPB0(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UPB0,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UPB1(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UPB1,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_UPB2(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UPB2,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_IPOFF(adr, chip)                Cj135_Get_RegVal(CJ135_REG_IPOFF,   adr, chip, CJ135_REG_SPISEQ_IPOFF,      CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_STEERPAT(adr, chip)             Cj135_Get_RegVal(CJ135_REG_STEERPAT,adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_CONFIGDSP(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,adr,chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_TRIM(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_TRIM,    adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_REFPAT(adr, chip)               Cj135_Get_RegVal(CJ135_REG_REFPAT,  adr, chip, CJ135_REG_SPISEQ_REFPAT,     CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_ACTMODE(adr, chip)              Cj135_Get_RegVal(CJ135_REG_ACTMODE, adr, chip, CJ135_REG_ACTMODE,           CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_VIRTUAL1(adr, chip)             Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,adr, chip, CJ135_REG_VIRTUAL1,          CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

/* Re-definition of register names for formerly UNB0, UNB1, UNB2 (necessary for NORMAL3/C1 ASIC step) */
#define     Lsm_Get_CJ135_REG_KP(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB0,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_KI(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB1,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_KD(adr, chip)                 Cj135_Get_RegVal(CJ135_REG_UNB2,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

/* Re-definition of register names for formerly UPB0, UPB1, UPB2 (necessary for NORMAL3/C1 ASIC step) */
#define     Lsm_Get_CJ135_REG_IPSET(adr, chip)              Cj135_Get_RegVal(CJ135_REG_UPB0,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_IPBLACK(adr, chip)            Cj135_Get_RegVal(CJ135_REG_UPB1,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_CJ135_REG_KRF(adr, chip)                Cj135_Get_RegVal(CJ135_REG_UPB2,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

/* Re-definition of register names for formerly UNB0, UNB1, UNB2 (necessary for NORMAL3/C1 ASIC step) */
#define     Lsm_Get_LSM_REG_KP(adr, chip)                   Cj135_Get_RegVal(CJ135_REG_UNB0,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_KI(adr, chip)                   Cj135_Get_RegVal(CJ135_REG_UNB1,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_KD(adr, chip)                   Cj135_Get_RegVal(CJ135_REG_UNB2,    adr, chip, CJ135_REG_SPISEQ_UNBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

/* Re-definition of register names for formerly UPB0, UPB1, UPB2 (necessary for NORMAL3/C1 ASIC step) */
#define     Lsm_Get_LSM_REG_IPSET(adr, chip)                Cj135_Get_RegVal(CJ135_REG_UPB0,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_IPBLACK(adr, chip)              Cj135_Get_RegVal(CJ135_REG_UPB1,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)
#define     Lsm_Get_LSM_REG_KRF(adr, chip)                  Cj135_Get_RegVal(CJ135_REG_UPB2,    adr, chip, CJ135_REG_SPISEQ_UPBX,       CJ135_DUMMY_MSK, CJ135_DUMMY_BP)

#define     Lsm_Get_CJ135_REGPART_MODE(adr, chip)           Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_MODE_MSK        ,CJ135_MODE_REG_POS)
#define     Lsm_Get_CJ135_REGPART_TAKEDATA(adr, chip)       Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_TAKEDATA_MSK    ,CJ135_TAKEDATA_REG_POS)
#define     Lsm_Get_CJ135_REGPART_OFF(adr, chip)            Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_OFF_MSK         ,CJ135_OFF_REG_POS)
#define     Lsm_Get_CJ135_REGPART_LP(adr, chip)             Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_LP_MSK          ,CJ135_LP_REG_POS)
#define     Lsm_Get_CJ135_REGPART_LN(adr, chip)             Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_LN_MSK          ,CJ135_LN_REG_POS)
#define     Lsm_Get_CJ135_REGPART_REF(adr, chip)            Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_REF_MSK         ,CJ135_REF_REG_POS)
#define     Lsm_Get_CJ135_REGPART_OPT(adr, chip)            Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_OPT_MSK         ,CJ135_OPT_REG_POS)
#define     Lsm_Get_CJ135_REGPART_URIA(adr, chip)           Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_URIA_MSK        ,CJ135_URIA_REG_POS)
#define     Lsm_Get_CJ135_REGPART_MK(adr, chip)             Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_MK_MSK          ,CJ135_MK_REG_POS)
#define     Lsm_Get_CJ135_REGPART_FUSKS(adr, chip)          Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_FUSKS_MSK       ,CJ135_FUSKS_REG_POS)
#define     Lsm_Get_CJ135_REGPART_FU0HYS(adr, chip)         Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_FU0HYS_MSK      ,CJ135_FU0HYS_REG_POS)
#define     Lsm_Get_CJ135_REGPART_RESDSP(adr, chip)         Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESDSP_MSK      ,CJ135_RESDSP_REG_POS)
#define     Lsm_Get_CJ135_REGPART_RESUP(adr, chip)          Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESUP_MSK       ,CJ135_RESUP_REG_POS)
#define     Lsm_Get_CJ135_REGPART_RESUN(adr, chip)          Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESUN_MSK       ,CJ135_RESUN_REG_POS)
#define     Lsm_Get_LSM_REGPART_EN_SP(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_ENSP_MSK        ,CJ135_ENSP_REG_POS)
#define     Lsm_Get_CJ135_REGPART_A1UP(adr, chip)           Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_A1UP_MSK        ,CJ135_A1UP_REG_POS)
#define     Lsm_Get_CJ135_REGPART_A1UN(adr, chip)           Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_A1UN_MSK        ,CJ135_A1UN_REG_POS)
#define     Lsm_Get_CJ135_REGPART_TRIMSQR(adr, chip)        Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_TRIMSQR_MSK     ,CJ135_TRIMSQR_REG_POS)
#define     Lsm_Get_CJ135_REGPART_TRIMSQ(adr, chip)         Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_TRIMSQ_MSK      ,CJ135_TRIMSQ_REG_POS)
#define     Lsm_Get_CJ135_REGPART_DSPDIAGDIS(adr, chip)     Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_DSPDIAGDIS_MSK  ,CJ135_DSPDIAGDIS_REG_POS)
#define     Lsm_Get_CJ135_REGPART_IPSM(adr, chip)           Cj135_Get_RegVal(CJ135_REG_STEERPAT,    adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_IPSM_MSK        ,CJ135_IPSM_REG_POS)
#define     Lsm_Get_CJ135_REGPART_PATTERN(adr, chip)        Cj135_Get_RegVal(CJ135_REG_STEERPAT,    adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_PATTERN_MSK     ,CJ135_PATTERN_REG_POS)

#define     Lsm_Get_CJ135_REGPART_N3MEASACTV(adr, chip)     Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_N3MEASACTV_MSK  ,CJ135_N3MEASACTV_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BIT1(adr, chip)         Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT1_MSK      ,CJ135_V1BIT1_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BIT2(adr, chip)         Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT2_MSK      ,CJ135_V1BIT2_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BIT3(adr, chip)         Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT3_MSK      ,CJ135_V1BIT3_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BIT4(adr, chip)         Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT4_MSK      ,CJ135_V1BIT4_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BIT5(adr, chip)         Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT5_MSK      ,CJ135_V1BIT5_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_SWTONRCODMEASOFF(adr, chip)  \
Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_SWTONRCODMEASOFF_MSK      ,CJ135_SWTONRCODMEASOFF_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BF2(adr, chip)          Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF2_MSK       ,CJ135_V1BF2_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BF3(adr, chip)          Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF3_MSK       ,CJ135_V1BF3_VREG_POS)
#define     Lsm_Get_CJ135_REGPART_V1BF4(adr, chip)          Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF4_MSK       ,CJ135_V1BF4_VREG_POS)

#define     Lsm_Get_LSM_REGPART_MODE(adr, chip)             Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_MODE_MSK        ,CJ135_MODE_REG_POS)
#define     Lsm_Get_LSM_REGPART_TAKEDATA(adr, chip)         Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_TAKEDATA_MSK    ,CJ135_TAKEDATA_REG_POS)
#define     Lsm_Get_LSM_REGPART_OFF(adr, chip)              Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_OFF_MSK         ,CJ135_OFF_REG_POS)
#define     Lsm_Get_LSM_REGPART_LP(adr, chip)               Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_LP_MSK          ,CJ135_LP_REG_POS)
#define     Lsm_Get_LSM_REGPART_LN(adr, chip)               Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_LN_MSK          ,CJ135_LN_REG_POS)
#define     Lsm_Get_LSM_REGPART_REF(adr, chip)              Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_REF_MSK         ,CJ135_REF_REG_POS)
#define     Lsm_Get_LSM_REGPART_OPT(adr, chip)              Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_OPT_MSK         ,CJ135_OPT_REG_POS)
#define     Lsm_Get_LSM_REGPART_URIA(adr, chip)             Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_URIA_MSK        ,CJ135_URIA_REG_POS)
#define     Lsm_Get_LSM_REGPART_MK(adr, chip)               Cj135_Get_RegVal(CJ135_REG_MODE,        adr, chip, CJ135_REG_SPISEQ_MODE,       CJ135_MK_MSK          ,CJ135_MK_REG_POS)
#define     Lsm_Get_LSM_REGPART_FUSKS(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_FUSKS_MSK       ,CJ135_FUSKS_REG_POS)
#define     Lsm_Get_LSM_REGPART_FU0HYS(adr, chip)           Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_FU0HYS_MSK      ,CJ135_FU0HYS_REG_POS)
#define     Lsm_Get_LSM_REGPART_RESDSP(adr, chip)           Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESDSP_MSK      ,CJ135_RESDSP_REG_POS)
#define     Lsm_Get_LSM_REGPART_RESUP(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESUP_MSK       ,CJ135_RESUP_REG_POS)
#define     Lsm_Get_LSM_REGPART_RESUN(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_RESUN_MSK       ,CJ135_RESUN_REG_POS)
#define     Lsm_Get_LSM_REGPART_A1UP(adr, chip)             Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_A1UP_MSK        ,CJ135_A1UP_REG_POS)
#define     Lsm_Get_LSM_REGPART_A1UN(adr, chip)             Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_A1UN_MSK        ,CJ135_A1UN_REG_POS)
#define     Lsm_Get_LSM_REGPART_EN_SP(adr, chip)            Cj135_Get_RegVal(CJ135_REG_CONFIGDSP,   adr, chip, CJ135_REG_SPISEQ_CONFIGDSP,  CJ135_ENSP_MSK        ,CJ135_ENSP_REG_POS)
#define     Lsm_Get_LSM_REGPART_TRIMSQR(adr, chip)          Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_TRIMSQR_MSK     ,CJ135_TRIMSQR_REG_POS)
#define     Lsm_Get_LSM_REGPART_TRIMSQ(adr, chip)           Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_TRIMSQ_MSK      ,CJ135_TRIMSQ_REG_POS)
#define     Lsm_Get_LSM_REGPART_DSPDIAGDIS(adr, chip)       Cj135_Get_RegVal(CJ135_REG_TRIM,        adr, chip, CJ135_REG_SPISEQ_TRIM,       CJ135_DSPDIAGDIS_MSK  ,CJ135_DSPDIAGDIS_REG_POS)
#define     Lsm_Get_LSM_REGPART_IPSM(adr, chip)             Cj135_Get_RegVal(CJ135_REG_STEERPAT,    adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_IPSM_MSK        ,CJ135_IPSM_REG_POS)
#define     Lsm_Get_LSM_REGPART_PATTERN(adr, chip)          Cj135_Get_RegVal(CJ135_REG_STEERPAT,    adr, chip, CJ135_REG_SPISEQ_STEERPAT,   CJ135_PATTERN_MSK     ,CJ135_PATTERN_REG_POS)

#define     Lsm_Get_LSM_REGPART_N3MEASACTV(adr, chip)       Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_N3MEASACTV_MSK  ,CJ135_N3MEASACTV_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BIT1(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT1_MSK      ,CJ135_V1BIT1_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BIT2(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT2_MSK      ,CJ135_V1BIT2_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BIT3(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT3_MSK      ,CJ135_V1BIT3_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BIT4(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT4_MSK      ,CJ135_V1BIT4_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BIT5(adr, chip)           Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BIT5_MSK      ,CJ135_V1BIT5_VREG_POS)
#define     Lsm_Get_LSM_REGPART_SWTONRCODMEASOFF(adr, chip)  \
Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_SWTONRCODMEASOFF_MSK      ,CJ135_SWTONRCODMEASOFF_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BF2(adr, chip)            Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF2_MSK       ,CJ135_V1BF2_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BF3(adr, chip)            Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF3_MSK       ,CJ135_V1BF3_VREG_POS)
#define     Lsm_Get_LSM_REGPART_V1BF4(adr, chip)            Cj135_Get_RegVal(CJ135_REG_VIRTUAL1,    adr, chip, CJ135_REG_VIRTUAL1,          CJ135_V1BF4_MSK       ,CJ135_V1BF4_VREG_POS)

/* read measurement values of CJ135 register bank */
#define     Lsm_Get_CJ135_MEAS_TIME(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_TIME, adr, chip)
#define     Lsm_Get_CJ135_MEAS_PHI(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_PHI, adr, chip)
#define     Lsm_Get_CJ135_MEAS_IP(adr, chip)                Cj135_Get_RamMeas(CJ135_MEAS_IP, adr, chip)
#define     Lsm_Get_CJ135_MEAS_IPOK(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_IPOK, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UN0(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UN0, adr, chip)
#define     Lsm_Get_CJ135_MEAS_URIE(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_URIE, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGI(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UGI, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGA(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UGA, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UG0, adr, chip)
#define     Lsm_Get_CJ135_MEAS_URIA(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_URIA, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UAPE(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UAPE, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UIPE(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UIPE, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFIPE1(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFIPE1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFIPE2(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFIPE2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UP(adr, chip)                Cj135_Get_RamMeas(CJ135_MEAS_UP, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFVCCI1(adr, chip)         Cj135_Get_RamMeas(CJ135_MEAS_UOFFVCCI1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFVCCI2(adr, chip)         Cj135_Get_RamMeas(CJ135_MEAS_UOFFVCCI2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UCAL(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UCAL, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGUI(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UGUI, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGUA(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UGUA, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UP0(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UP0, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0A(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UG0A, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0I(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UG0I, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0IEI(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_UG0IEI, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0IAI(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_UG0IAI, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UG0E(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UG0E, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFGND1(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFGND1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFGND1(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFGND1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UREF1(adr, chip)             Cj135_Get_RamMeas(CJ135_MEAS_UREF1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFGND2(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFGND2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UREF21(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_UREF21, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UREF22(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_UREF22, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFGND3(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFGND3, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UREF3(adr, chip)             Cj135_Get_RamMeas(CJ135_MEAS_UREF3, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFVCC1(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFVCC1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFVCC2(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFVCC2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFVCC3(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UOFFVCC3, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UOFFMES(adr, chip)           Cj135_Get_RamMeas(CJ135_MEAS_UOFFMES, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGK(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UGK, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UGKAV(adr, chip)             Cj135_Get_RamMeas(CJ135_MEAS_UGKAV, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UIPCAL(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_UIPCAL, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UIPCALAV(adr, chip)          Cj135_Get_RamMeas(CJ135_MEAS_UIPCALAV, adr, chip)
#define     Lsm_Get_CJ135_MEAS_MODE(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_MODE, adr, chip)
#define     Lsm_Get_CJ135_MEAS_STWRD1(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_STWRD1, adr, chip)
#define     Lsm_Get_CJ135_MEAS_STWRD2(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_STWRD2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_STWRD3(adr, chip)            Cj135_Get_RamMeas(CJ135_MEAS_STWRD3, adr, chip)
#define     Lsm_Get_CJ135_MEAS_NUMFAILPOS(adr, chip)        Cj135_Get_RamMeas(CJ135_MEAS_NUMFAILPOS, adr, chip)
/* New measurement values at operation mode NORMAL3 */
#define     Lsm_Get_CJ135_MEAS_UI21(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UI21, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UA2(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UA2, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UA31(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UA31, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UA32(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UA32, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UA33(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UA33, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UI22(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UI22, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UI23(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UI23, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UI24(adr, chip)              Cj135_Get_RamMeas(CJ135_MEAS_UI24, adr, chip)
#define     Lsm_Get_CJ135_MEAS_UI4(adr, chip)               Cj135_Get_RamMeas(CJ135_MEAS_UI4, adr, chip)

/* interface for reading error information from device driver */
/* Defines of index for diagnostic registers at the pointer variable *adr_u8 of Cj135_GetErrStat_Info() */
#define Lsm_DIAG0_INDEX       CJ135_DIAG0_INDEX          0
#define Lsm_DIAG1_INDEX       CJ135_DIAG1_INDEX          1
#define Lsm_CHIPSTAT_INDEX    CJ135_CHIPSTAT_INDEX       2
#define Lsm_DSPSTAT_INDEX     CJ135_DSPSTAT_INDEX        3
#define Lsm_CHIPERR_INDEX     CJ135_CHIPERR_INDEX        4
#define Lsm_IRQERR_INDEX      CJ135_IRQERR_INDEX         5


#define     Lsm_GetErrStatInfo                                  Lsm_GetErrorStatInfo
#define     Lsm_GetErrorStatInfo                                Cj135_GetErrStat_Info


/* Interface for getting revision information of CJ135 */
#define     Lsm_GetRev                                      Cj135_GetRev

/* bit mask and bit position for return value of Cj135_GetRev interface */
#define     LSM_REV_MSK                                     CJ135_REV_MSK
#define     LSM_REV_POS                                     CJ135_REV_POS

#define     LSM_HWREV_MSK                                   CJ135_HWREV_MSK
#define     LSM_HWREV_POS                                   CJ135_HWREV_POS

#define     LSM_CHIPID_MSK                                  CJ135_CHIPID_MSK
#define     LSM_CHIPID_POS                                  CJ135_CHIPID_POS


/* Interface for heater control */
#define     Lsm_SetHtrPer                                   Cj135_SetHtrPer
#define     Lsm_SetHtrDty                                   Cj135_SetHtrDty

#endif
/* end of _LSMHAL_AUTO_CONF_H */

