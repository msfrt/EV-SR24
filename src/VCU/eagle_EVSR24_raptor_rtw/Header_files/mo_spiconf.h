/* EasyCASE V6.5 02.08.2007 08:07:10 */
/* EasyCASE O
If=vertical
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,12632256,0,0,0,16711680,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier,,100,65530,-83,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=26 */
/* EasyCASE ( 1
   MoCSOP_priv.h */
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
 * $Filename__:mo_spiconf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Ford configuration$
 *
 ***************************************************************************************************
*/
/* EasyCASE ( 3
   Module Information and History */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:SPB4COB$
 * $Date______:25.05.2017$
 * $Class_____:SWHDR$
 * $Name______:mo_spiconf$
 * $Variant___:104.0.0$
 * $Revision__:1$
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
 * 104.0.0; 1     25.05.2017 SPB4COB
 *   Review fixes
 * 
 * 104.0.0; 0     19.05.2017 SPB4COB
 *   Monitoring configuration support for New Eagle automotive application
 * 
 * 1.0.0_MED1735_69; 1     16.09.2013 ZIC2SI
 *   changes for second DVE
 * 
 * 1.0.0_MED1735_69; 0     07.02.2012 ZIC2SI
 *   initial version
 * 
 * 1.0.0_MED1734_69; 0     01.12.2011 SHA2ABT
 *   mo_spiconf.h - added DVE2_status_request, 
 *                           DVE2_status_read
 *   mo_swconf.h - MO_GET_DIO_MN_BRK, 
 *                           MO_GET_DIO_RED_BRK,  
 *                           MO_GET_DIO_CrCtlMnSwt
 * 
 * 1.0.0_MEX_3_30; 1     28.01.2010 ARS2COB
 *   I: correction in header inclusion
 *   note:MO_SPICONF_pavast.xml is changed to mo_conf_pavast.xml
 * 
 * 1.0.0_MEX_3_30; 0     08.01.2010 ARS2COB
 *   N: creation for BMW GS projects
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
#ifndef _MO_SPICONF_H
#define _MO_SPICONF_H
/* EasyCASE ( 4
   Includes */
/*
***************************************************************************************************
* Includes
***************************************************************************************************
*/


#include "pwr.h"
#include "pmd.h"
#include "cpu.h"
#include "dio.h"
#include "hbr.h"
#include "mo_conf.d"

#if (SY_CJ840AT > 0)
  #include "spi.h"
  #include "ivgdips.h"
#endif
/* EasyCASE ) */
/* EasyCASE ( 5
   Defines */
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* EasyCASE ) */
/* EasyCASE ( 6
   Type Definitions */
/*
Konfiguration der Fehlerreaktion des Ueberwachungsmoduls im CY320/CY327

TRUE:
Das Ueberwachungsmodul im CY320/CY327 loest als Fehlerreaktion aus der Rechnerueberwachung
zusaetzlich einen Reset (Power on Reset) des Funktionsrechners aus. Die Fehlerreaktion
erfolgt bei einem Fehlerzaehlerstand >7. Die Resetanzahl wird vom CY320 auf 7 begrenzt.
Die Fehlerreaktion schaltet die Endstufen durch das WDA-Signal bereits bei einem
Fehlerzaehlerstand >4 ab.

FALSE:
Das Ueberwachungsmodul im CY320/CY327 loest in der Fehlerreaktion aus der Rechnerueberwachung
"keinen" Reset (Power on Reset) des Funktionsrechners aus.
Die Fehlerreaktion schaltet weiterhin die Endstufen durch das WDA-Signal bereits bei
einem Fehlerzaehlerstand >4 ab.
*/

#define MO_MM_RESET   TRUE
/* EasyCASE ) */
/* EasyCASE ( 26
   Hardwarezugriffe */
/* Ansprechen der DVE-Disable-Leitung */

#define DVE_ENABLE_PS        Hbr_Mon_SwitchOn(ThrVlv_O_T); Hbr_Mon_SwitchOn(ThrVlv3_O_T);  /* means DVE power stage ON  */
#define DVE_DISABLE_PS		 Hbr_Mon_SwitchOff(ThrVlv_O_T); Hbr_Mon_SwitchOff(ThrVlv3_O_T);/* means DVE power stage OFF */
#define DVE_DISABLE_PS_L1	 Hbr_SwitchOff(ThrVlv_O_T); Hbr_SwitchOff(ThrVlv3_O_T);    /* Switch off throttle valve power stage */

#define DVE_POWER_STAGE_OFF 1
#define DVE_POWER_STAGE_ON  0
/* EasyCASE - */
/* EasyCASE < */
/* Abschalten der EV-DIS1-Leitung fuer Systeme mit EV Pruefung */
/* Muss fuer MOCCOM Plattform bereitgestellt werden. */

#define EV_DISABLE_PS       do{}while(0)
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 8
   Prototypes */
/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* EasyCASE - */
/* DVE-Endstufe L9959 (HBR-Konzept) */

/* Function to request DVE status */
#define DVE_status_request()        Hbr_Mon_ReqStatus(ThrVlv_O_T)

/* Function to read DVE status */
#define DVE_status_read()         Hbr_Mon_GetStatus(ThrVlv_O_T)

/* Function to request DVE status */
#define DVE2_status_request()       Hbr_Mon_ReqStatus(ThrVlv3_O_T)

    /* Function to read DVE status */
#define DVE2_status_read()         Hbr_Mon_GetStatus(ThrVlv3_O_T)


#if (SY_CJ840AT > 0)
  /* Function to request HDEV1 status */
  #define HDEV1_status_request()    InjVlvPs_dia_requestWDA(0)

  /* Function to read HDEV1 status */
  #define HDEV1_status_read()       InjVlvPs_dia_readWDA(0)
#endif


#if ((SY_CJ840AT == 2) || (SY_CJ840AT == 6))
  /* Function to request HDEV2 status */
  #define HDEV2_status_request()    InjVlvPs_dia_requestWDA(1)

  /* Function to read HDEV2 status */
  #define HDEV2_status_read()       InjVlvPs_dia_readWDA(1)
#endif
/* EasyCASE - */
/* PWR-Endstufe (VDD5-Ueberwachung)  CJ945 / CJ950 / R2S2 oder TLE8209 */

/* Abschalten der Latch-Funktion aller VDD5-Monitoring-Bausteine (0xFFFF) */
#define MOCSOP_CO_VMTRESET_ALL         Pwr_VmtReset(PWR_VMT_ALL_CHIPS)

/* Abschalten der Latch-Funktion des ersten VDD5-Monitoring-Bausteins */
#define MOCSOP_CO_VMTRESET_ZERO        Pwr_VmtReset(0)

/* Einschalten der Latch-Funktion fuer die Ueberspannung des ersten VDD5-Monitoring-Bausteins */
/* Normalbetrieb */
#define MOCSOP_CO_VMTNORMAL_ZERO       Pwr_VmtNormal(0)

/* Verschieben der Abschaltschwelle fuer Ueberspannung des ersten VDD5-Monitoring-Bausteins */
#define MOCSOP_CO_VMTSETUPLI_ZERO      Pwr_VmtSetUpLi(0)

/* Anfordern des Statuses der ABE-Leitung */
#define MOCSOP_CO_REQUESTABESTATE      Pwr_RequestAbeState()

/* Einlesen des ABE-Statuses */
#define MOCSOP_CO_GETABE               Pwr_Get(ABE)
/* EasyCASE ) */
#endif
/* EasyCASE ) */
