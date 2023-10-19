/* EasyCASE V6.5 23.12.2004 15:11:40 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,16711680,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=194 */
/* EasyCASE ( 102
   Header fuer externe SW-Configuration der Funktionsueberwachung */
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
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in by [N]estor)      ***************************
 ***************************************************************************************************
 *
 * $Filename__:mo_swconf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:.$
 *
 ***************************************************************************************************
*/
/* EasyCASE ( 171
   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:RRH2KOR$
 * $Date______:21.03.2014$
 * $Class_____:SWHDR$
 * $Name______:mo_swconf$
 * $Variant___:1.0.0_NEW_EAGLE_0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $generated_:$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * Points to be taken into consideration when/if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.0.0_NEW_EAGLE_0; 0     21.03.2014 RRH2KOR
 *   For New Eagle Software sharing
 *   Prototype
 * 
 * 1.0.0_69; 11     15.01.2014 SHA2ABT
 *   changes after MO review in brake switches
 * 
 * 1.0.0_69; 10     28.11.2013 ZIC2SI
 *   added changes from F150
 * 
 * 1.0.0_69; 9     28.11.2013 ZIC2SI
 *   changes for I_A_PBR
 * 
 * 1.0.0_69; 8     21.11.2013 ZIC2SI
 *   added define for access of I_A_PBR
 * 
 * 1.0.0_69; 7     17.10.2013 ZIC2SI
 *   changed MO_GETADC_BRKUMNRAWRATIO + MO_GETADC_BATTUURAWRATIO
 * 
 * 1.0.0_69; 6     20.09.2013 SHA2ABT
 *   changes for Ferrari V12
 * 
 * 1.0.0_69; 5     19.08.2013 SHA2ABT
 *   added 
 *   MOF_MSG_VSS, MOF_MSG_VSS2, MOF_MSG_STRTIN3
 *   MOF_MSG_DCS2, MOF_MSG_HPU_EAD, MOF_MSG_HPU_ELM
 *   added new defines for 08C0
 * 
 * 1.0.0_69; 4     17.04.2013 SHA2ABT
 *   added MOF_MSG_ASR2, MOF_MSG_ASR11, MOF_MSG_HPU1, MOF_MSG_HPU2
 * 
 * 1.0.0_69; 3     15.08.2012 SHA2ABT
 *   changes for Maserati - 
 *   added MOF_MSG_DRDEM, MOF_MSG_TRNSSPD
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
#ifndef MO_SWCONF_H
  #define MO_SWCONF_H                                             /* module identifier  */
/* EasyCASE ( 69
   Include */
/* ===========================================================                      */
/* Include Headerfiles                                                              */
/* ===========================================================                      */

#include "can2frm.h"
//#include "injddgdi.h"    /* function prototype for injection monitoring          */
#include "dio.h"
#include "can.h"
// #include "frm.h"
#include "t15_dd_inf.h"
//#include "clth_vdautostrt_inf.h"
//#include "clth_vdautostrt_priv.h"
/* EasyCASE ) */
/* EasyCASE ( 183
   ADC */
#define      MO_GETADC_FW1          Adc_GetRawRatio(APP1_I_A)
#define      MO_GETADC_FW2          Adc_GetRawRatio(APP2_I_A)
#define      MO_GETADC_UTEST        Adc_GetRawRatio(UTEST)
#define      MO_ADC_FORCELOW_FW2    Adc_ForceLow(APP2_I_A)
#define      MO_ADC_RELEASE         Adc_Release(APP2_I_A)

#if (ECU_TRICORE_SY == 14)
    /* MED17.3.5 */
  #define      MO_GET_DIO_MN_BRK      Dio_Get(BrkMn_I_D)
  #define      MO_GET_DIO_RED_BRK     Dio_Get(BrkRed_I_D)
  #define      MO_GET_DIO_BRK_LGHT    MO_GET_DIO_RED_BRK
#else
    /* MED17.3.4 */
  #define      MO_GET_DIO_BRK_LGHT    0x0
  #define      MO_GET_DIO_MN_BRK      0x1
  #define      MO_GET_DIO_RED_BRK     0x1
#endif

#if (SY_BKV == 2)
    #define  MO_ADC_GET_PBR         Adc_Get(I_A_PBR)
#endif

/* only dummy */
#define      MO_GET_DIO_CrCtlRes    0x0
#define      MO_GET_DIO_CrCtlDec    0x0
#define      MO_GET_DIO_CrCtlAcc    0x0
#define      MO_GET_DIO_CrCtlMnSwt  0x0

#if (HEVTYP_SY > 0) /* HYBRID */
    #define      MO_GETADC_BRKUMNRAWRATIO    0xFF
    #define      MO_GETADC_BATTUURAWRATIO    0x0 
#endif

/* EasyCASE ) */
/* EasyCASE ( 82
   CAN */
/*  <<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */
/*                  Zugriff auf den CAN-Buffer                   */
/*  <<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */

extern t_mirobject  can_arr;
#define         MOF_CAN(X,Y)         can_arr.msg[X].mirdata[Y]

/* EasyCASE - */
/*  <<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */
/*  Zuordnung der CAN-Message-Numbers entsprechend in can2frm.h */
/*  <<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */

/* Care: the order of the definition has to be correlated with can2frm.h */
#if (SY_CANVAR == 4) /* Florence CAN */
    #define MOF_MSG_CRCTL       0x0 /* STATUS_B_CAN2 */
 #if (HEVTYP_SY == 0) /* non hybrid = ASR1, hybrid = ASR10 */
    #define MOF_MSG_DCS         0x1 /* ASR1 */
 #endif
 #if (HEVTYP_SY > 0) /* HYBRID CAN */
    #define MOF_MSG_VSS         0x1 /* ASR1 */
 #endif
    #define MOF_MSG_TRA1        0x2 /* DCTMOT */
    #define MOF_MSG_TRA2        0x3 /* DCTMOT2 */
    #define MOF_MSG_ASR2        0x4 /* ASR2 */
    #define MOF_MSG_VSS2         0x4 /* ASR2 */
 #if (HEVTYP_SY > 0) /* HYBRID CAN */
    #define MOF_MSG_DCS         0x5 /* ASR10 */
    #define MOF_MSG_ASR10       0x5 /* ASR10 */
    #define MOF_MSG_ELM         0x6 /* EM_AUX1 */
    #define MOF_MSG_EM_AUX_2    0x7 /* EM_AUX2 */
    #define MOF_MSG_EAD         0x8 /* EM_MAIN1 */
    #define MOF_MSG_HCU_EM_MAIN 0x9 /* HCU_EM_MAIN */
   #if (TRA_DCT_SY > 0) /* GBX DCT */
    #define MOF_MSG_DCT1        0xA /* GBX DCT1 */
    #define MOF_MSG_STRTIN3      0xA /* GBX DCT1 */
   #endif
    #define MOF_MSG_ASR11       0xB /* ASR11 */
    #define MOF_MSG_DCS2         0xB /* ASR11 */
    #define MOF_MSG_HPU1        0xC /* HPU1 */
    #define MOF_MSG_HPU_EAD      0xC /* HPU1 */
    #define MOF_MSG_HPU2        0xD /* HPU2 */
    #define MOF_MSG_HPU_ELM      0xD /* HPU2 */
  #endif
#endif

#if (SY_CANVAR == 5) /* Chrysler Powernet CAN */
    #define MOF_MSG_DCS         0x0 /* ESP_M156 */
    #define MOF_MSG_ENGTRQ2     0x1 /* TCM_EngTrq2 */
    #define MOF_MSG_CRCTL       0x2 /* SCCM_CRS_CTRL */
    #define MOF_MSG_BRK         0x3 /* ESP_A1 */
    #define MOF_MSG_TRNSSPD     0x4 /* TRNS_SPD */
    #define MOF_MSG_DRDEM       0x5 /* TCM_A7 */
#endif

#if (HEVTYP_SY > 0) /* HYBRID */
    #define MOF_285h_MS_TX_HANDLE_ID    0x285 /*M2S 0x285*/
    #define MOF_295h_MS_TX_HANDLE_ID    0x295 /*S2M 0x295*/
    #define MOF_285h_MS_RX_HANDLE_ID    0x285 /*M2S 0x285*/
    #define MOF_295h_MS_RX_HANDLE_ID    0x295 /*S2M 0x295*/
    #define MO_DIOGET_LOCK    Stm_Get(LOCK)
    #define MO_PWR_GET_T15    Pwr_Get(T15)
#endif


/* EasyCASE ) */
/* EasyCASE ( 187
   Makro fuer den Zugriff auf den BDE-Einspritzzaehler */
/* Lokalen Funktionsprototyp fuer weitere Funktionen zugaenglich machen */
// #define GET_INJECTIONCOUNTER injddgdi_MonNumInj()
/* EasyCASE ) */
#endif
/* EasyCASE ) */
