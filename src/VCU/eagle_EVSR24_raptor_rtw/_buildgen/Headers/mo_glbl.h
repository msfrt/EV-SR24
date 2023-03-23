/* EasyCASE V6.5 27.09.2011 15:41:38 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=386 */
/* EasyCASE ( 1
   Globale Definitionen der Funktionsueberwachung */
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
 * $Filename__:mo_glbl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 **************************************************************************
*/
/* EasyCASE ( 44
   Module Information and History */
/**************************************************************************
 * $Domain____:SDOM$ 
 * $User______:TRJ2ST$ 
 * $Date______:27.09.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:mo_glbl$ 
 * $Variant___:21.2.0$ 
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
 * 21.2.0; 1     27.09.2011 TRJ2ST
 *   Additional Measurement point Bits for instruction test.  
 *   Include common.h and BITUTIL.H not for new FCs, only for compatibility with
 *    BC_MO 1.5.8 and newer.
 * 
 * 21.2.0; 0     19.07.2011 TRJ2ST
 *   ICO Request in Level 1
 * 
 * 21.0.0; 1     07.02.2011 TRJ2ST
 *   mo_pub.h shifted
 * 
 * 21.0.0; 0     13.09.2010 TRJ2ST
 *   DGS: Creation based on the DGS Monitoring Guidelines
 * 
 * 12.0.0; 2     07.09.2010 GHS2SI
 *   Ergaenzung verschiedener defines 
 *   + Maske fuer neue Statusleiste MoF_stStrt2
 * 
 * 12.0.0; 1     21.05.2010 TRJ2ST
 *   Common Defines
 * 
 * 12.0.0; 0     27.01.2010 RWF2SI
 *   Common Mo_Glbl for DGS GS version
 *   5. step : add definition of Mo_stCplChk for compatibilty in an merged DS 
 *   and GS monitoring environment
 *   
 *   
 * 
 * 2.5.0; 10     15.10.2009 TRJ2ST
 *   Migrated from Mo_Glbl 2.50; 24    
 *    I: new Masks for MoF_stGearLvr and MoF_stMS
 * 
 * 2.5.0; 9     09.09.2009 GHS2SI
 *   New Mask for MoF_stStrtIn2
 *   Additional some other Mask
 *   
 * 
 * 2.5.0; 8     23.07.2009 TRJ2ST
 *   Derived from Mx17 FS : MO_GLBL 2.50 Rev.16 and DOSP : MO_ME17 MO_ME17_2V0 
 *   Rev.6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* EasyCASE ) */
#ifndef _MO_GLBL_H
#define _MO_GLBL_H
/* EasyCASE ( 370
   Include */
/* 
Do not use Include of common.h and BITUTIL.H for new FCs or FC changes. 
Only for reverse compatibility with BC_MO 1.5.8 and newer 
*/
#include    "common.h"            /* General Declarations                                                  */
#include    "BITUTIL.H"           /* Macros for Bit Processing                                             */
/* EasyCASE - */
#include    "moexe_co.h"          /* Import Constants for PFC                                              */
#include    "mofsrv_lib.h"        /* Import monitoring routines                                            */
/* EasyCASE ) */
/* EasyCASE ( 102
   Defines */
/*
***************************************************************************************************
* Defines
***************************************************************************************************
*/
/* EasyCASE ( 103
   Konstanten fuer Bitzugriffe (BIT) */
/* ***************************************************************************************************** */
/* ****              Konstanten fuer Bit-Zugriffe innerhalb der Funktionsueberwachung               **** */
/* ****   (ACHTUNG: Masken duerfen nicht zum Zugriff auf die Bits der Flagbytes verwendet werden)   **** */
/* ***************************************************************************************************** */

#define   MO_BIT00_MSK   0x01
#define   MO_BIT01_MSK   0x02
#define   MO_BIT02_MSK   0x04
#define   MO_BIT03_MSK   0x08
#define   MO_BIT04_MSK   0x10
#define   MO_BIT05_MSK   0x20
#define   MO_BIT06_MSK   0x40
#define   MO_BIT07_MSK   0x80

#define   MO_BIT08_MSK   0x0100
#define   MO_BIT09_MSK   0x0200
#define   MO_BIT10_MSK   0x0400
#define   MO_BIT11_MSK   0x0800
#define   MO_BIT12_MSK   0x1000
#define   MO_BIT13_MSK   0x2000
#define   MO_BIT14_MSK   0x4000
#define   MO_BIT15_MSK   0x8000

#define   MO_BIT16_MSK   0x00010000
#define   MO_BIT17_MSK   0x00020000
#define   MO_BIT18_MSK   0x00040000
#define   MO_BIT19_MSK   0x00080000
#define   MO_BIT20_MSK   0x00100000
#define   MO_BIT21_MSK   0x00200000
#define   MO_BIT22_MSK   0x00400000
#define   MO_BIT23_MSK   0x00800000
#define   MO_BIT24_MSK   0x01000000
#define   MO_BIT25_MSK   0x02000000
#define   MO_BIT26_MSK   0x04000000
#define   MO_BIT27_MSK   0x08000000
#define   MO_BIT28_MSK   0x10000000
#define   MO_BIT29_MSK   0x20000000
#define   MO_BIT30_MSK   0x40000000
#define   MO_BIT31_MSK   0x80000000

/* ***************************************************************************************************** */
/* EasyCASE ) */
/* EasyCASE ( 139
   Konstanten fuer Zugriff auf Messages */
/* ***************************************************************************************************** */
/* ****              Bitinformationen als Messages werden in einem Byte gespeichert.                **** */
/* ****              Beschreiben mit TRUE ist nicht zulaessig, da Compilerabhaengig.                **** */
/* ****                       Deshalb Zuweisung mit Konstanten  0 und 1                             **** */
/* ***************************************************************************************************** */

#define   MO_TRUE              0x01              /* Status "wahr" */
#define   MO_FALSE             0x00              /* Status "falsch" */

#define   MO_TRUE_MSG          MO_TRUE           /* Messages Byte mit 1 beschreiben */
#define   MO_FALSE_MSG         MO_FALSE          /* Messages Byte mit 0 beschreiben */
/* EasyCASE ) */
/* EasyCASE ( 128
   Konstanten fuer Bytezugriffe (BYTE) */
/* ***************************************************************************************************** */
/* ****              Konstanten fuer Byte-Zugriffe innerhalb der Funktionsueberwachung              **** */
/* ****   (ACHTUNG: Diese Konstanten muessen bei CAN-Zugriffen als Y-Parameter verwendet werden)    **** */
/* ***************************************************************************************************** */

#define   MO_BYTE00      0x00
#define   MO_BYTE01      0x01
#define   MO_BYTE02      0x02
#define   MO_BYTE03      0x03
#define   MO_BYTE04      0x04
#define   MO_BYTE05      0x05
#define   MO_BYTE06      0x06
#define   MO_BYTE07      0x07
#define   MO_BYTE08      0x08
#define   MO_BYTE09      0x09
#define   MO_BYTE10      0x0A
#define   MO_BYTE11      0x0B
#define   MO_BYTE12      0x0C
#define   MO_BYTE13      0x0D
#define   MO_BYTE14      0x0E
#define   MO_BYTE15      0x0F

/* ***************************************************************************************************** */
/* EasyCASE ) */
/* EasyCASE ( 104
   Konstanten fuer Shiebeoperationen (SHIFT) */
/* ***************************************************************************************************** */
/* *******        Konstanten fuer Schiebeoperationen innerhalb der Funktionsueberwachung         ******* */
/* ***************************************************************************************************** */

#define   MO_SHIFT01      0x01
#define   MO_SHIFT02      0x02
#define   MO_SHIFT03      0x03
#define   MO_SHIFT04      0x04
#define   MO_SHIFT05      0x05
#define   MO_SHIFT06      0x06
#define   MO_SHIFT07      0x07
#define   MO_SHIFT08      0x08
#define   MO_SHIFT09      0x09
#define   MO_SHIFT10      0x0A
#define   MO_SHIFT11      0x0B
#define   MO_SHIFT12      0x0C
#define   MO_SHIFT13      0x0D
#define   MO_SHIFT14      0x0E
#define   MO_SHIFT15      0x0F
#define   MO_SHIFT16      0x10
#define   MO_SHIFT17      0x11
#define   MO_SHIFT18      0x12
#define   MO_SHIFT19      0x13
#define   MO_SHIFT20      0x14
#define   MO_SHIFT21      0x15
#define   MO_SHIFT22      0x16
#define   MO_SHIFT23      0x17
#define   MO_SHIFT24      0x18
#define   MO_SHIFT25      0x19
#define   MO_SHIFT26      0x1A
#define   MO_SHIFT27      0x1B
#define   MO_SHIFT28      0x1C
#define   MO_SHIFT29      0x1D
#define   MO_SHIFT30      0x1E
#define   MO_SHIFT31      0x1F

/* ***************************************************************************************************** */
/* EasyCASE ) */
/* EasyCASE ( 105
   Konstanten fuer Begrenzungswerte (MIN/MAX) */
/* ***************************************************************************************************** */
/* *******       Konstanten fuer Bereichsbegrenzungen innerhalb der Funktionsueberwachung        ******* */
/* ***************************************************************************************************** */

#define   MO_MAXUINT8      255                   /* Max Value of a  8 Bit unsigned Variable: (2^8 - 1)   */
#define   MO_MAXUINT8_CPL  0u

#define   MO_MAXUINT16     65535                 /* Max Value of a 16 Bit unsigned Variable: (2^16 - 1)  */
#define   MO_MAXUINT16_CPL            0u

#define   MO_MAXUINT32       4294967295          /* Max Value of a 32 Bit unsigned Variable: (2^32 - 1)  */
#define   MO_MAXUINT32_CPL            0u

/* ***************************************************************************************************** */

#define   MO_MAXSINT8      127                   /* Max Value of a   8 Bit signed Variable: (2^7 - 1)    */
#define   MO_MAXSINT8_CPL           128u

#define   MO_MINSINT8      (-127-1)              /* Min Value of a   8 Bit signed Variable: (0 - 2^7)    */
#define   MO_MINSINT8_CPL           127u

#define   MO_MAXSINT16     32767                 /* Max Value of a  16 Bit signed Variable: (2^15 - 1)   */
#define   MO_MAXSINT16_CPL        32768u

#define   MO_MINSINT16     (-32767-1)            /* Min Value of a  16 Bit signed Variable: (0 - 2^15)   */
#define   MO_MINSINT16_CPL        32767u

#define   MO_MAXSINT32       2147483647          /* Max Value of a  32 Bit signed Variable: (2^31 - 1)   */
#define   MO_MAXSINT32_CPL   2147483648u

#define   MO_MINSINT32     (-2147483647L-1L)     /* Min Value of a  32 Bit signed Variable: (0 - 2^31)   */
#define   MO_MINSINT32_CPL   2147483647u

/* ***************************************************************************************************** */

#define   MO_ZERO          0                     /* Zero                                                 */
#define   MO_ZERO08_CPL    0xFFu                 /* Initialisierungswert fuer Doppelablage  8-Bit        */
#define   MO_ZERO16_CPL          0xFFFFu         /* Initialisierungswert fuer Doppelablage 16-Bit        */
#define   MO_ZERO32_CPL      0xFFFFFFFFu         /* Initialisierungswert fuer Doppelablage 32-Bit        */

/* ***************************************************************************************************** */
                                                 /* Begrenzungswerte fuer Kupplungs-Momente              */
#define   MO_TRQCLTHMAX    MO_MAXSINT16          /* Absolutes, positives Moment (MAX) der Ueberwachung   */
#define   MO_TRQCLTHZERO   0                     /* Absolutes, Nullmoment der Ueberwachung               */
#define   MO_TRQCLTHMIN    MO_MINSINT16          /* Absolutes, negatives Moment (MIN) der Ueberwachung   */

/* ***************************************************************************************************** */
                                                 /* Begrenzungswerte fuer Rad-Momente                    */
#define   MO_TRQWHLMAX     MO_MAXSINT16          /* Absolutes, positives Moment (MAX) der Ueberwachung   */
#define   MO_TRQWHLZERO    0                     /* Absolutes, Nullmoment der Ueberwachung               */
#define   MO_TRQWHLMIN     MO_MINSINT16          /* Absolutes, negatives Moment (MIN) der Ueberwachung   */

/* ***************************************************************************************************** */

#define   MO_RTRQMAX       MO_MAXUINT8           /* Relatives, maximales Moment der Ueberwachung         */
#define   MO_RTRQMAX_CPL            0u

/* ***************************************************************************************************** */
/* EasyCASE - */
/* ***************************************************************************************************** */
/* *******    Konstanten fuer Funktionale Werte Begrenzung innerhalb der Funktionsueberwachung   ******* */
/* ***************************************************************************************************** */

#define   MO_CTRSTMAX      MO_MAXUINT8           /* Maximale Anzahl ausfuehrbarer Resets durch Mo_ctRst  */
#define   MO_CTRSTMAX_CPL            0u

/* ***************************************************************************************************** */
/* EasyCASE ) */
/* EasyCASE ( 118
   Diverse weitere Konstanten */
/* ***************************************************************************************************** */
/* ****     Diverse weitere Konstanten fuer die Verwendung innerhalb der Funktionsueberwachung      **** */
/* ***************************************************************************************************** */

#define MO_ONE           1u

#define MO_LSB           0x01                  /* LSB - Basis fuer Shift Operationen auf Bitbasis        */

#define MO_LO_NIBBLE_U8  0x0F                  /* Maske fuer Byte LOW -Nibble     0000 1111              */
#define MO_HI_NIBBLE_U8  0xF0                  /* Maske fuer Byte HIGH-Nibble     1111 0000              */

#define MO_LO_BYTE_U16   0x00FF                /* Maske fuer Word LOW -Byte 0000 0000 1111 1111          */
#define MO_HI_BYTE_U16   0xFF00                /* Maske fuer Word HIGH-Byte 1111 1111 0000 0000          */

#define MO_ERROR         0x69                  /* Allgemeine Kennung fuer Fehler                         */
#define MO_NOERROR       0x00                  /* Allgemeine Kennung fuer kein Fehler                    */

#define MOCRAM_PROTRAMCLEARED    0x33          /* Protected-RAM geprueft und geloescht                   */
#define MOCRAM_PROTRAMNOTCLEARED 0xCC          /* Protected-RAM nicht geprueft und nicht geloescht       */
/* EasyCASE - */
/* ***************************************************************************************************** */
/* ****     Diverse weitere Konstanten fuer die Verwendung innerhalb des Befehlstests               **** */
/* ***************************************************************************************************** */

#define MOI_BIT_ON 0x96          /* Kennung fuer Bit = TRUE im Befehlstest */
/* EasyCASE - */
/* ***************************************************************************************************** */

#define MOF_EXTINTTRQOFS 0x07D0 /* Momentenoffset fuer externe Momentenanforderung */
/* EasyCASE ) */
/* EasyCASE ( 162
   Masken fuer Statusbits */
/* EasyCASE ( 158
   [Mo_stMoC] - Status aus Ebene 3 Umfeld */
#define  MO_CPLCHK_MSK      0x01      /* Failure in Complement Check */
#define  MO_RAMERR_MSK      0x02      /* RAM Error occured in cyclic check */
#define  MO_ROMERR_MSK      0x04      /* ROM Error occured in cyclic check */

/*
* Mo_stMoC
* +---+---+---+---+---+---+---+---+
* | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
* +---+---+---+---+---+---+---+---+
*   |   |   |   |   |   |   |   | 
*   |   |   |   |   |   |   |   +- Mo_bCplChk...........(MO_CPLCHK_MSK)
*   |   |   |   |   |   |   +----- Mo_bRamErr...........(MO_RAMERR_MSK)
*   |   |   |   |   |   +--------- Mo_bRomErr...........(MO_ROMERR_MSK)
*   |   |   |   |   +------------- .....................(   )
*   |   |   |   +----------------- .....................(   )
*   |   |   +--------------------- .....................(   )
*   |   +------------------------- .....................(   )
*   +----------------------------- .....................(   )
*/
/* EasyCASE ) */
/* EasyCASE ( 159
   [Mo_stMoF] - Status aus Ebene 2 Umfeld */
/* Flag-Byte wird fuer PRE ICO Reset verwendet !) */

#define  MO_ICOL2_MSK             0x01     /* Fehlerreaktions-Info der Funktionsueberwachung              */
#define  MO_ICOL1_MSK             0x02     /* Funktions-Fehlerreaktion irreversible EMB                   */
#define  MO_LOVLTG_MSK            0x04     /* Batteriesp. nicht o.k., Unterspannungsabschaltung aktiv     */
#define  MO_LOWVLTG_MSK           0x04     /* DS-Kompatibilitaet                                          */
#define  MO_ADDDISBLPREICORST_MSK 0x08     /* Zusaetzliche Bedingung Verriegelung Pre-ICO Reset           */
#define  MO_NLH_MSK               0x10     /* Anforderung Notlauf  mit Lambda 1 aus Funktionsueberwachung */
#define  MO_EMGCYAIR_MSK          0x20     /* Anforderung Notluftfahren aus der Funktion                  */
#define  MO_SYNCLOS_MSK           0x40     /* Erkannter Synchro-Verlust                                   */
#define  MO_ADDCONPFC_MSK         0x80     /* Anforderung eines zusaetzl. Antwortbeitrages aus MoFICO_Co  */

#define  MO_APPLIMP_MSK           0x08     /* Bit Ersatzfunktion nach Fahrpedalsignalfehler in Funktion 
                                              - Maske wegen Rueckwaertskompatibilitaet stehen lassen      */
/*
* Mo_stMoF
* +---+---+---+---+---+---+---+---+
* | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
* +---+---+---+---+---+---+---+---+
*   |   |   |   |   |   |   |   | 
*   |   |   |   |   |   |   |   +- Mo_bICOL2............(MO_ICOL2_MSK)
*   |   |   |   |   |   |   +----- Mo_bICOL1............(MO_ICOL1_MSK)
*   |   |   |   |   |   +--------- Mo_bLoVltg...........(MO_LOVLTG_MSK)
*   |   |   |   |   |   +--------- Mo_bLoVltg...........(MO_LOWVLTG_MSK)
*   |   |   |   |   +------------- Mo_bAddDisblPreICORst(MO_ADDDISBLPREICORST_MSK)
*   |   |   |   +----------------- Mo_bNlh..............(MO_NLH_MSK)
*   |   |   +--------------------- Mo_bEmgcyAir.........(MO_EMGCYAIR_MSK)
*   |   +------------------------- Mo_bSyncLos..........(MO_SYNCLOS_MSK)
*   +----------------------------- Mo_bAddConPFC........(MO_ADDCONPFC_MSK)
*/
/* EasyCASE ) */
/* EasyCASE ( 184
   [Mo_stErrHyb] - Status fuer Fehlerreaktionsanforderungen Hybridsysteme */
#define  MO_IRVHYBLIMPL2_MSK   (1 << 0)   /* Irreversibler Hybrid Ersatzbetrieb aus Ebene 2 angefordert */
#define  MO_IRVHYBLIMPL1_MSK   (1 << 1)   /* Irreversibler Hybrid Ersatzbetrieb aus Ebene 1 angefordert */
#define  MO_IRVTRQLIML2_MSK    (1 << 2)   /* Irreversibler Momentenbegrenzung aus Ebene 2 in der FU     */
#define  MO_IRVTRQLIML1_MSK    (1 << 3)   /* Irreversibler Momentenbegrenzung aus Ebene 1 in der FU     */
#define  MO_IRVHYBP1LIMPL2_MSK (1 << 4)   /* Irreversibler Ersatzbetrieb P1-Hybrid aus der Ebene 2 in FU*/
#define  MO_IRVELMIDL_MSK      (1 << 5)   /* Irreversible Leerlaufanforderung an die E-Maschine         */
/*
#define  MOF_EMPTY_MSK (1 << 7)
*/

/*
* Mo_stErrHyb
* +---+---+---+---+---+---+---+---+
* | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
* +---+---+---+---+---+---+---+---+
*   |   |   |   |   |   |   |   | 
*   |   |   |   |   |   |   |   +- Mo_bIrvHybLimpL2.....(MO_IRVHYBLIMPL2_MSK)
*   |   |   |   |   |   |   +----- Mo_bIrvHybLimpL1.....(MO_IRVHYBLIMPL1_MSK)
*   |   |   |   |   |   +--------- Mo_bIrvTrqLimL2......(MO_IRVTRQLIML2_MSK)
*   |   |   |   |   +------------- Mo_bIrvTrqLimL1......(MO_IRVTRQLIML1_MSK)
*   |   |   |   +----------------- Mo_bIrvHybP1LimpL2...(MO_IRVHYBP1LIMPL2_MSK)
*   |   |   +--------------------- Mo_bIrvElMIdl........(MO_IRVELMIDL_MSK)
*   |   +------------------------- .....................(   )
*   +----------------------------- .....................(   )
*/
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 122
   Bitmasken fuer Codewort CW_BDE_UM */
/* *************************** Vergleichsmasken fuer BDE-Betriebsarten in FU *************************** */
/* ***************************           CW_BDE_UM (BDE-Codewort)            *************************** */

#define  M_BLSU_UM   0x01              /* Maske BDE Bereitschaft LSU in der Funktionsueberwachung */
#define  M_2BANK_UM  0x02              /* Maske BDE 2-Bank-System in der Funktionsueberwachung */
#define  M_BHOM_UM   0x04              /* Maske BDE Homogen-Betrieb moeglich in der FU */
#define  M_ADWM_UM   0x08              /* Maske BDE Adaptionswerte Mittelwert wird eingerechnet */
#define  M_LRSEZ_UM  0x10              /* Maske BDE Einzelzylinderlambdaregelung */
#define  M_COPOT_UM  0x20              /* Maske BDE CO-Poti */

/* ***************************************************************************************************** */
/* EasyCASE ) */
/* EasyCASE ( 343
   Bitmasken fuer Mo_stIrvErrReacMsg */
/* DS */
/* BitMasks to heal ICO , irreversible CAN errors and PSM irreversible error                     */
/* Healing by Power-On Reset by message Mo_stIrvErrReacMsg to Syc                                */
#define  MO_IRVERRREACICO_MSK  0x01   /* Bit 0: ICO occured and can be healed by T15 off/on       */
#define  MO_IRVERRREACCAN_MSK  0x02   /* Bit 1: irrev.CAN error occured, can be healed by T15 on  */
#define  MO_IRVERRREACPSM_MSK  0x04   /* Bit 2: irrev.PSM error occured, can be healed by T15 on  */
#define  MO_IRVERRREACVSS_MSK  0x08   /* Bit 3: irrev.VSS error occured, can be healed by T15 on  */
#define  MO_IRVERRREACSTSP_MSK 0x10   /* Bit 4: irrev.STSP error occured, can be healed by T15 on */

/* GS */
#define MOFICO_EMBL2ACT       0x01   /* Kennung fuer Statusinfo an Ebene 1, das EMB aus FU aktiv */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 109
   Type Definitions */
/* EasyCASE < */
/*
***************************************************************************************************
* Type definition
***************************************************************************************************
*/

/* ********************************************************************************************* */
/* * Union fuer den universellen Zugriff auf die Temporaer-Variablen der Funktionsueberwachung * */
/* ********************************************************************************************* */

typedef union
{   uint32* p32;
    uint32  u32;
    sint32  s32;
    struct  {sint16 l; sint16 h;} s16;
    struct  {uint16 l; uint16 h;} u16;
    struct  {uint8 ll; uint8 lh; uint8 hl; uint8 hh;} u8;
    struct  {sint8 ll; sint8 lh; sint8 hl; sint8 hh;} s8;
} Mo_Tmp32_t;


/* ********************************************************************************************* */
/* * Definition fuer die Temporaeren-Bits der Funktionsueberwachung                            * */
/* ********************************************************************************************* */

typedef uint8 Mo_TmpBit_t;


/* ********************************************************************************************* */
/* * Export der Temporaer-Variablen und Sektionierungsanweisung fuer "schnelles " RAM          * */
/* ********************************************************************************************* */

#define  START_SECTION_Mo_RamCyclicCheck
#include "mo_pragma.h"

extern Mo_Tmp32_t  Mo_Tmp[];
extern Mo_TmpBit_t Mo_TmpBit0;
extern Mo_TmpBit_t Mo_TmpBit1;
   
#define  STOP_SECTION_Mo_RamCyclicCheck
#include "mo_pragma.h"

/* ********************************************************************************************* */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 110
   Variables */
/*
***************************************************************************************************
* Variables
***************************************************************************************************
*/
/* EasyCASE ) */
/* EasyCASE ( 342
   Prototypes */
/* Functional Instruction test */
#if (MOCCPU_IT_SY == 1)
/* EasyCASE - */
#define START_SECTION_Mo_CodeNoCyclicCheck
#include "mo_pragma.h"
/* EasyCASE - */
extern uint8  Dio_MoIGet (uint8 Dio_ID);
extern uint8  Dio_MoISet (uint8 Dio_ID,uint8 Value);
extern sint16 MoI_Adc_GetRawRatio(sint16  Adc_ID);
extern uint8  MoI_Reset_SWReset(uint32 Reset_Group_ID, uint32 Reset_Number, uint32 Local_status_Value);
/* EasyCASE - */
#define STOP_SECTION_Mo_CodeNoCyclicCheck
#include "mo_pragma.h"
/* EasyCASE - */
#endif /* (MOCCPU_IT_SY == 1) */
/* EasyCASE ) */
#endif /* _MO_GLBL_H */
/* EasyCASE ) */
