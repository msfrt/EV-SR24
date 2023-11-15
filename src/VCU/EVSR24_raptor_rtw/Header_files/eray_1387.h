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
 * $Filename__:eray_1387.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:16.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:eray_1387$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     16.04.2010 AHT2FE
 *   Update TC1387 header files
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: eray_1387.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ERAY_1387_H
#define _ERAY_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _ERAY_UL(x) x
#else
    #define _ERAY_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module ERAY on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0010000] : ERAY Clock Control Register
    volatile uint32 CUST1;               // [0xF0010004] : Busy and Input Buffer Control Register
    volatile uint32 ID;                  // [0xF0010008] : Module Identification Register
    volatile uint32 CUST3;               // [0xF001000C] : Customer Interface Timeout Counter
    volatile uint32 TEST1;               // [0xF0010010] : Test Register 1
    volatile uint32 TEST2;               // [0xF0010014] : Test Register 2
    volatile uint32 RESERVED0[1];        // [0xF0010018...0xF001001B] : reserved space
    volatile uint32 LCK;                 // [0xF001001C] : Lock Register
    volatile uint32 EIR;                 // [0xF0010020] : Error Service Request Register
    volatile uint32 SIR;                 // [0xF0010024] : Status Service Request Register
    volatile uint32 EILS;                // [0xF0010028] : Error Service Request Line Select
    volatile uint32 SILS;                // [0xF001002C] : Status Service Request Line Select
    volatile uint32 EIES;                // [0xF0010030] : Error Service Request Enable Set
    volatile uint32 EIER;                // [0xF0010034] : Error Service Request Enable Reset
    volatile uint32 SIES;                // [0xF0010038] : Status Service Request Enable Set
    volatile uint32 SIER;                // [0xF001003C] : Status Service Request Enable Reset
    volatile uint32 ILE;                 // [0xF0010040] : Service Request Line Enable
    volatile uint32 T0C;                 // [0xF0010044] : Timer 0 Configuration
    volatile uint32 T1C;                 // [0xF0010048] : Timer 1 Configuration
    volatile uint32 STPW1;               // [0xF001004C] : Stop Watch Register 1
    volatile uint32 STPW2;               // [0xF0010050] : Stop Watch Register 2
    volatile uint32 RESERVED1[11];       // [0xF0010054...0xF001007F] : reserved space
    volatile uint32 SUCC1;               // [0xF0010080] : SUC Configuration Register 1
    volatile uint32 SUCC2;               // [0xF0010084] : SUC Configuration Register 2
    volatile uint32 SUCC3;               // [0xF0010088] : SUC Configuration Register 3
    volatile uint32 NEMC;                // [0xF001008C] : NEM Configuration Register
    volatile uint32 PRTC1;               // [0xF0010090] : PRT Configuration Register 1
    volatile uint32 PRTC2;               // [0xF0010094] : PRT Configuration Register 2
    volatile uint32 MHDC;                // [0xF0010098] : MHD Configuration Register
    volatile uint32 RESERVED2[1];        // [0xF001009C...0xF001009F] : reserved space
    volatile uint32 GTUC01;              // [0xF00100A0] : GTU Configuration Register 1
    volatile uint32 GTUC02;              // [0xF00100A4] : GTU Configuration Register 2
    volatile uint32 GTUC03;              // [0xF00100A8] : GTU Configuration Register 3
    volatile uint32 GTUC04;              // [0xF00100AC] : GTU Configuration Register 4
    volatile uint32 GTUC05;              // [0xF00100B0] : GTU Configuration Register 5
    volatile uint32 GTUC06;              // [0xF00100B4] : GTU Configuration Register 6
    volatile uint32 GTUC07;              // [0xF00100B8] : GTU Configuration Register 7
    volatile uint32 GTUC08;              // [0xF00100BC] : GTU Configuration Register 8
    volatile uint32 GTUC09;              // [0xF00100C0] : GTU Configuration Register 9
    volatile uint32 GTUC10;              // [0xF00100C4] : GTU Configuration Register 10
    volatile uint32 GTUC11;              // [0xF00100C8] : GTU Configuration Register 11
    volatile uint32 RESERVED3[13];       // [0xF00100CC...0xF00100FF] : reserved space
    volatile uint32 CCSV;                // [0xF0010100] : Communication Controller Status Vector
    volatile uint32 CCEV;                // [0xF0010104] : Communication Controller Error Vector
    volatile uint32 RESERVED4[2];        // [0xF0010108...0xF001010F] : reserved space
    volatile uint32 SCV;                 // [0xF0010110] : Slot Counter Value
    volatile uint32 MTCCV;               // [0xF0010114] : Macrotick and Cycle Counter Value
    volatile uint32 RCV;                 // [0xF0010118] : Rate Correction Value
    volatile uint32 OCV;                 // [0xF001011C] : Offset Correction Value
    volatile uint32 SFS;                 // [0xF0010120] : SYNC Frame Status
    volatile uint32 SWNIT;               // [0xF0010124] : Symbol Window and Network Idle Time Status
    volatile uint32 ACS;                 // [0xF0010128] : Aggregated Channel Status
    volatile uint32 RESERVED5[1];        // [0xF001012C...0xF001012F] : reserved space
    volatile uint32 ESID01;              // [0xF0010130] : Even Sync ID Symbol Window 01
    volatile uint32 ESID02;              // [0xF0010134] : Even Sync ID Symbol Window 02
    volatile uint32 ESID03;              // [0xF0010138] : Even Sync ID Symbol Window 03
    volatile uint32 ESID04;              // [0xF001013C] : Even Sync ID Symbol Window 04
    volatile uint32 ESID05;              // [0xF0010140] : Even Sync ID Symbol Window 05
    volatile uint32 ESID06;              // [0xF0010144] : Even Sync ID Symbol Window 06
    volatile uint32 ESID07;              // [0xF0010148] : Even Sync ID Symbol Window 07
    volatile uint32 ESID08;              // [0xF001014C] : Even Sync ID Symbol Window 08
    volatile uint32 ESID09;              // [0xF0010150] : Even Sync ID Symbol Window 09
    volatile uint32 ESID10;              // [0xF0010154] : Even Sync ID Symbol Window 10
    volatile uint32 ESID11;              // [0xF0010158] : Even Sync ID Symbol Window 11
    volatile uint32 ESID12;              // [0xF001015C] : Even Sync ID Symbol Window 12
    volatile uint32 ESID13;              // [0xF0010160] : Even Sync ID Symbol Window 13
    volatile uint32 ESID14;              // [0xF0010164] : Even Sync ID Symbol Window 14
    volatile uint32 ESID15;              // [0xF0010168] : Even Sync ID Symbol Window 15
    volatile uint32 RESERVED6[1];        // [0xF001016C...0xF001016F] : reserved space
    volatile uint32 OSID01;              // [0xF0010170] : Odd Sync ID Symbol Window 01
    volatile uint32 OSID02;              // [0xF0010174] : Odd Sync ID Symbol Window 02
    volatile uint32 OSID03;              // [0xF0010178] : Odd Sync ID Symbol Window 03
    volatile uint32 OSID04;              // [0xF001017C] : Odd Sync ID Symbol Window 04
    volatile uint32 OSID05;              // [0xF0010180] : Odd Sync ID Symbol Window 05
    volatile uint32 OSID06;              // [0xF0010184] : Odd Sync ID Symbol Window 06
    volatile uint32 OSID07;              // [0xF0010188] : Odd Sync ID Symbol Window 07
    volatile uint32 OSID08;              // [0xF001018C] : Odd Sync ID Symbol Window 08
    volatile uint32 OSID09;              // [0xF0010190] : Odd Sync ID Symbol Window 09
    volatile uint32 OSID10;              // [0xF0010194] : Odd Sync ID Symbol Window 10
    volatile uint32 OSID11;              // [0xF0010198] : Odd Sync ID Symbol Window 11
    volatile uint32 OSID12;              // [0xF001019C] : Odd Sync ID Symbol Window 12
    volatile uint32 OSID13;              // [0xF00101A0] : Odd Sync ID Symbol Window 13
    volatile uint32 OSID14;              // [0xF00101A4] : Odd Sync ID Symbol Window 14
    volatile uint32 OSID15;              // [0xF00101A8] : Odd Sync ID Symbol Window 15
    volatile uint32 RESERVED7[1];        // [0xF00101AC...0xF00101AF] : reserved space
    volatile uint32 NMV1;                // [0xF00101B0] : Network Management Vector 1
    volatile uint32 NMV2;                // [0xF00101B4] : Network Management Vector 2
    volatile uint32 NMV3;                // [0xF00101B8] : Network Management Vector 3
    volatile uint32 RESERVED8[81];       // [0xF00101BC...0xF00102FF] : reserved space
    volatile uint32 MRC;                 // [0xF0010300] : Message RAM Configuration
    volatile uint32 FRF;                 // [0xF0010304] : FIFO Rejection Filter
    volatile uint32 FRFM;                // [0xF0010308] : FIFO Rejection Filter Mask
    volatile uint32 FCL;                 // [0xF001030C] : FIFO Critical Level
    volatile uint32 MHDS;                // [0xF0010310] : Message Handler Status
    volatile uint32 LDTS;                // [0xF0010314] : Last Dynamic Transmit Slot
    volatile uint32 FSR;                 // [0xF0010318] : FIFO Status Register
    volatile uint32 MHDF;                // [0xF001031C] : Message Handler Constraints Flags
    volatile uint32 TXRQ1;               // [0xF0010320] : Transmission Request Register 1
    volatile uint32 TXRQ2;               // [0xF0010324] : Transmission Request Register 2
    volatile uint32 TXRQ3;               // [0xF0010328] : Transmission Request Register 3
    volatile uint32 TXRQ4;               // [0xF001032C] : Transmission Request Register 4
    volatile uint32 NDAT1;               // [0xF0010330] : New Data Register 1
    volatile uint32 NDAT2;               // [0xF0010334] : New Data Register 2
    volatile uint32 NDAT3;               // [0xF0010338] : New Data Register 3
    volatile uint32 NDAT4;               // [0xF001033C] : New Data Register 4
    volatile uint32 MBSC1;               // [0xF0010340] : Message Buffer Status Changed 1
    volatile uint32 MBSC2;               // [0xF0010344] : Message Buffer Status Changed 2
    volatile uint32 MBSC3;               // [0xF0010348] : Message Buffer Status Changed 3
    volatile uint32 MBSC4;               // [0xF001034C] : Message Buffer Status Changed 4
    volatile uint32 RESERVED9[22];       // [0xF0010350...0xF00103A7] : reserved space
    volatile uint32 NDIC1;               // [0xF00103A8] : New Data Interrupt Control 1
    volatile uint32 NDIC2;               // [0xF00103AC] : New Data Interrupt Control 2
    volatile uint32 NDIC3;               // [0xF00103B0] : New Data Interrupt Control 3
    volatile uint32 NDIC4;               // [0xF00103B4] : New Data Interrupt Control 4
    volatile uint32 MSIC1;               // [0xF00103B8] : Message Buffer Status Changed Interrupt Control 1
    volatile uint32 MSIC2;               // [0xF00103BC] : Message Buffer Status Changed Interrupt Control 2
    volatile uint32 MSIC3;               // [0xF00103C0] : Message Buffer Status Changed Interrupt Control 3
    volatile uint32 MSIC4;               // [0xF00103C4] : Message Buffer Status Changed Interrupt Control 4
    volatile uint32 IBUSYSRC;            // [0xF00103C8] : Input Buffer Busy Service Request Control Register
    volatile uint32 OBUSYSRC;            // [0xF00103CC] : Output Buffer Busy Service Request Control Register
    volatile uint32 MBSC1SRC;            // [0xF00103D0] : Message Buffer Status Changed 1 Service Request Control Register
    volatile uint32 MBSC0SRC;            // [0xF00103D4] : Message Buffer Status Changed 0 Service Request Control Register
    volatile uint32 NDAT1SRC;            // [0xF00103D8] : New Data 1 Service Request Control Register
    volatile uint32 NDAT0SRC;            // [0xF00103DC] : New Data 0 Service Request Control Register
    volatile uint32 TINT1SRC;            // [0xF00103E0] : Timer Interrupt 1 Service Request Control Register
    volatile uint32 TINT0SRC;            // [0xF00103E4] : Timer Interrupt 0 Service Request Control Register
    volatile uint32 INT1SRC;             // [0xF00103E8] : Interrupt 1 Service Request Control Register
    volatile uint32 INT0SRC;             // [0xF00103EC] : Interrupt 0 Service Request Control Register
    volatile uint32 CREL;                // [0xF00103F0] : Core Release Register
    volatile uint32 ENDN;                // [0xF00103F4] : Endian Register
    volatile uint32 RESERVED10[2];       // [0xF00103F8...0xF00103FF] : reserved space
    volatile uint32 WRDS01;              // [0xF0010400] : Write Data Section 01
    volatile uint32 WRDS02;              // [0xF0010404] : Write Data Section 02
    volatile uint32 WRDS03;              // [0xF0010408] : Write Data Section 03
    volatile uint32 WRDS04;              // [0xF001040C] : Write Data Section 04
    volatile uint32 WRDS05;              // [0xF0010410] : Write Data Section 05
    volatile uint32 WRDS06;              // [0xF0010414] : Write Data Section 06
    volatile uint32 WRDS07;              // [0xF0010418] : Write Data Section 07
    volatile uint32 WRDS08;              // [0xF001041C] : Write Data Section 08
    volatile uint32 WRDS09;              // [0xF0010420] : Write Data Section 09
    volatile uint32 WRDS10;              // [0xF0010424] : Write Data Section 10
    volatile uint32 WRDS11;              // [0xF0010428] : Write Data Section 11
    volatile uint32 WRDS12;              // [0xF001042C] : Write Data Section 12
    volatile uint32 WRDS13;              // [0xF0010430] : Write Data Section 13
    volatile uint32 WRDS14;              // [0xF0010434] : Write Data Section 14
    volatile uint32 WRDS15;              // [0xF0010438] : Write Data Section 15
    volatile uint32 WRDS16;              // [0xF001043C] : Write Data Section 16
    volatile uint32 WRDS17;              // [0xF0010440] : Write Data Section 17
    volatile uint32 WRDS18;              // [0xF0010444] : Write Data Section 18
    volatile uint32 WRDS19;              // [0xF0010448] : Write Data Section 19
    volatile uint32 WRDS20;              // [0xF001044C] : Write Data Section 20
    volatile uint32 WRDS21;              // [0xF0010450] : Write Data Section 21
    volatile uint32 WRDS22;              // [0xF0010454] : Write Data Section 22
    volatile uint32 WRDS23;              // [0xF0010458] : Write Data Section 23
    volatile uint32 WRDS24;              // [0xF001045C] : Write Data Section 24
    volatile uint32 WRDS25;              // [0xF0010460] : Write Data Section 25
    volatile uint32 WRDS26;              // [0xF0010464] : Write Data Section 26
    volatile uint32 WRDS27;              // [0xF0010468] : Write Data Section 27
    volatile uint32 WRDS28;              // [0xF001046C] : Write Data Section 28
    volatile uint32 WRDS29;              // [0xF0010470] : Write Data Section 29
    volatile uint32 WRDS30;              // [0xF0010474] : Write Data Section 30
    volatile uint32 WRDS31;              // [0xF0010478] : Write Data Section 31
    volatile uint32 WRDS32;              // [0xF001047C] : Write Data Section 32
    volatile uint32 WRDS33;              // [0xF0010480] : Write Data Section 33
    volatile uint32 WRDS34;              // [0xF0010484] : Write Data Section 34
    volatile uint32 WRDS35;              // [0xF0010488] : Write Data Section 35
    volatile uint32 WRDS36;              // [0xF001048C] : Write Data Section 36
    volatile uint32 WRDS37;              // [0xF0010490] : Write Data Section 37
    volatile uint32 WRDS38;              // [0xF0010494] : Write Data Section 38
    volatile uint32 WRDS39;              // [0xF0010498] : Write Data Section 39
    volatile uint32 WRDS40;              // [0xF001049C] : Write Data Section 40
    volatile uint32 WRDS41;              // [0xF00104A0] : Write Data Section 41
    volatile uint32 WRDS42;              // [0xF00104A4] : Write Data Section 42
    volatile uint32 WRDS43;              // [0xF00104A8] : Write Data Section 43
    volatile uint32 WRDS44;              // [0xF00104AC] : Write Data Section 44
    volatile uint32 WRDS45;              // [0xF00104B0] : Write Data Section 45
    volatile uint32 WRDS46;              // [0xF00104B4] : Write Data Section 46
    volatile uint32 WRDS47;              // [0xF00104B8] : Write Data Section 47
    volatile uint32 WRDS48;              // [0xF00104BC] : Write Data Section 48
    volatile uint32 WRDS49;              // [0xF00104C0] : Write Data Section 49
    volatile uint32 WRDS50;              // [0xF00104C4] : Write Data Section 50
    volatile uint32 WRDS51;              // [0xF00104C8] : Write Data Section 51
    volatile uint32 WRDS52;              // [0xF00104CC] : Write Data Section 52
    volatile uint32 WRDS53;              // [0xF00104D0] : Write Data Section 53
    volatile uint32 WRDS54;              // [0xF00104D4] : Write Data Section 54
    volatile uint32 WRDS55;              // [0xF00104D8] : Write Data Section 55
    volatile uint32 WRDS56;              // [0xF00104DC] : Write Data Section 56
    volatile uint32 WRDS57;              // [0xF00104E0] : Write Data Section 57
    volatile uint32 WRDS58;              // [0xF00104E4] : Write Data Section 58
    volatile uint32 WRDS59;              // [0xF00104E8] : Write Data Section 59
    volatile uint32 WRDS60;              // [0xF00104EC] : Write Data Section 60
    volatile uint32 WRDS61;              // [0xF00104F0] : Write Data Section 61
    volatile uint32 WRDS62;              // [0xF00104F4] : Write Data Section 62
    volatile uint32 WRDS63;              // [0xF00104F8] : Write Data Section 63
    volatile uint32 WRDS64;              // [0xF00104FC] : Write Data Section 64
    volatile uint32 WRHS1;               // [0xF0010500] : Write Header Section 1
    volatile uint32 WRHS2;               // [0xF0010504] : Write Header Section 2
    volatile uint32 WRHS3;               // [0xF0010508] : Write Header Section 3
    volatile uint32 RESERVED11[1];       // [0xF001050C...0xF001050F] : reserved space
    volatile uint32 IBCM;                // [0xF0010510] : Input Buffer Command Mask
    volatile uint32 IBCR;                // [0xF0010514] : Input Buffer Command Request
    volatile uint32 RESERVED12[58];      // [0xF0010518...0xF00105FF] : reserved space
    volatile uint32 RDDS01;              // [0xF0010600] : Read Data Section 01
    volatile uint32 RDDS02;              // [0xF0010604] : Read Data Section 02
    volatile uint32 RDDS03;              // [0xF0010608] : Read Data Section 03
    volatile uint32 RDDS04;              // [0xF001060C] : Read Data Section 04
    volatile uint32 RDDS05;              // [0xF0010610] : Read Data Section 05
    volatile uint32 RDDS06;              // [0xF0010614] : Read Data Section 06
    volatile uint32 RDDS07;              // [0xF0010618] : Read Data Section 07
    volatile uint32 RDDS08;              // [0xF001061C] : Read Data Section 08
    volatile uint32 RDDS09;              // [0xF0010620] : Read Data Section 09
    volatile uint32 RDDS10;              // [0xF0010624] : Read Data Section 10
    volatile uint32 RDDS11;              // [0xF0010628] : Read Data Section 11
    volatile uint32 RDDS12;              // [0xF001062C] : Read Data Section 12
    volatile uint32 RDDS13;              // [0xF0010630] : Read Data Section 13
    volatile uint32 RDDS14;              // [0xF0010634] : Read Data Section 14
    volatile uint32 RDDS15;              // [0xF0010638] : Read Data Section 15
    volatile uint32 RDDS16;              // [0xF001063C] : Read Data Section 16
    volatile uint32 RDDS17;              // [0xF0010640] : Read Data Section 17
    volatile uint32 RDDS18;              // [0xF0010644] : Read Data Section 18
    volatile uint32 RDDS19;              // [0xF0010648] : Read Data Section 19
    volatile uint32 RDDS20;              // [0xF001064C] : Read Data Section 20
    volatile uint32 RDDS21;              // [0xF0010650] : Read Data Section 21
    volatile uint32 RDDS22;              // [0xF0010654] : Read Data Section 22
    volatile uint32 RDDS23;              // [0xF0010658] : Read Data Section 23
    volatile uint32 RDDS24;              // [0xF001065C] : Read Data Section 24
    volatile uint32 RDDS25;              // [0xF0010660] : Read Data Section 25
    volatile uint32 RDDS26;              // [0xF0010664] : Read Data Section 26
    volatile uint32 RDDS27;              // [0xF0010668] : Read Data Section 27
    volatile uint32 RDDS28;              // [0xF001066C] : Read Data Section 28
    volatile uint32 RDDS29;              // [0xF0010670] : Read Data Section 29
    volatile uint32 RDDS30;              // [0xF0010674] : Read Data Section 30
    volatile uint32 RDDS31;              // [0xF0010678] : Read Data Section 31
    volatile uint32 RDDS32;              // [0xF001067C] : Read Data Section 32
    volatile uint32 RDDS33;              // [0xF0010680] : Read Data Section 33
    volatile uint32 RDDS34;              // [0xF0010684] : Read Data Section 34
    volatile uint32 RDDS35;              // [0xF0010688] : Read Data Section 35
    volatile uint32 RDDS36;              // [0xF001068C] : Read Data Section 36
    volatile uint32 RDDS37;              // [0xF0010690] : Read Data Section 37
    volatile uint32 RDDS38;              // [0xF0010694] : Read Data Section 38
    volatile uint32 RDDS39;              // [0xF0010698] : Read Data Section 39
    volatile uint32 RDDS40;              // [0xF001069C] : Read Data Section 40
    volatile uint32 RDDS41;              // [0xF00106A0] : Read Data Section 41
    volatile uint32 RDDS42;              // [0xF00106A4] : Read Data Section 42
    volatile uint32 RDDS43;              // [0xF00106A8] : Read Data Section 43
    volatile uint32 RDDS44;              // [0xF00106AC] : Read Data Section 44
    volatile uint32 RDDS45;              // [0xF00106B0] : Read Data Section 45
    volatile uint32 RDDS46;              // [0xF00106B4] : Read Data Section 46
    volatile uint32 RDDS47;              // [0xF00106B8] : Read Data Section 47
    volatile uint32 RDDS48;              // [0xF00106BC] : Read Data Section 48
    volatile uint32 RDDS49;              // [0xF00106C0] : Read Data Section 49
    volatile uint32 RDDS50;              // [0xF00106C4] : Read Data Section 50
    volatile uint32 RDDS51;              // [0xF00106C8] : Read Data Section 51
    volatile uint32 RDDS52;              // [0xF00106CC] : Read Data Section 52
    volatile uint32 RDDS53;              // [0xF00106D0] : Read Data Section 53
    volatile uint32 RDDS54;              // [0xF00106D4] : Read Data Section 54
    volatile uint32 RDDS55;              // [0xF00106D8] : Read Data Section 55
    volatile uint32 RDDS56;              // [0xF00106DC] : Read Data Section 56
    volatile uint32 RDDS57;              // [0xF00106E0] : Read Data Section 57
    volatile uint32 RDDS58;              // [0xF00106E4] : Read Data Section 58
    volatile uint32 RDDS59;              // [0xF00106E8] : Read Data Section 59
    volatile uint32 RDDS60;              // [0xF00106EC] : Read Data Section 60
    volatile uint32 RDDS61;              // [0xF00106F0] : Read Data Section 61
    volatile uint32 RDDS62;              // [0xF00106F4] : Read Data Section 62
    volatile uint32 RDDS63;              // [0xF00106F8] : Read Data Section 63
    volatile uint32 RDDS64;              // [0xF00106FC] : Read Data Section 64
    volatile uint32 RDHS1;               // [0xF0010700] : Read Header Section 1
    volatile uint32 RDHS2;               // [0xF0010704] : Read Header Section 2
    volatile uint32 RDHS3;               // [0xF0010708] : Read Header Section 3
    volatile uint32 MBS;                 // [0xF001070C] : Message Buffer Status
    volatile uint32 OBCM;                // [0xF0010710] : Output Buffer Command Mask
    volatile uint32 OBCR;                // [0xF0010714] : Output Buffer Command Request
    volatile uint32 RESERVED13[60];      // [0xF0010718...0xF0010807] : reserved space
    volatile uint32 DEDCON;              // [0xF0010808] : DED Control
    volatile uint32 ECCR;                // [0xF001080C] : ECC Data Read Register
    volatile uint32 ECCW;                // [0xF0010810] : ECC Data Write Register
} ERAY_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern ERAY_RegMap_t ERAY __attribute__ ((asection (".bss.label_only")));


/*
 ***************************************************************************************************
 * Definitions of bits and bitfields.
 * Each bit(field) is defined by its position and length.
 *
 * Example:
 *                       /- length -\
 *           0000 0000 00xx xxxx xxxx 0000 0000 0000
 *           |                      ^              |
 *      Bit 31                      |              Bit 0
 *                                  +-- position
 *
 * Access mode flags:  r  - bit(field) can only be read
 *                     w  - bit(field) can only be written
 *                     rw - bit(field) can be read and written
 *                     h  - bit(field) can also be modified by hardware
 *                          (such as a status bit).
 *                          This symbol can be combined with rw or r
 *
 ***************************************************************************************************
 */

/* ERAY_ID_MOD_NUMBER (r) */
#define ERAY_ID_MOD_NUMBER_POS                _ERAY_UL(16)
#define ERAY_ID_MOD_NUMBER_LEN                _ERAY_UL(16)

/* ERAY_ID_MOD_REV (r) */
#define ERAY_ID_MOD_REV_POS                   _ERAY_UL(0)
#define ERAY_ID_MOD_REV_LEN                   _ERAY_UL(8)

/* ERAY_ID_MOD_TYPE (r) */
#define ERAY_ID_MOD_TYPE_POS                  _ERAY_UL(8)
#define ERAY_ID_MOD_TYPE_LEN                  _ERAY_UL(8)

/* ERAY_CLC_DISR (rw) */
#define ERAY_CLC_DISR_POS                    _ERAY_UL(0)
#define ERAY_CLC_DISR_LEN                    _ERAY_UL(1)

/* ERAY_CLC_DISS (rh) */
#define ERAY_CLC_DISS_POS                    _ERAY_UL(1)
#define ERAY_CLC_DISS_LEN                    _ERAY_UL(1)

/* ERAY_CLC_SPEN (rw) */
#define ERAY_CLC_SPEN_POS                    _ERAY_UL(2)
#define ERAY_CLC_SPEN_LEN                    _ERAY_UL(1)

/* ERAY_CLC_EDIS (rw) */
#define ERAY_CLC_EDIS_POS                    _ERAY_UL(3)
#define ERAY_CLC_EDIS_LEN                    _ERAY_UL(1)

/* ERAY_CLC_SBWE (w) */
#define ERAY_CLC_SBWE_POS                    _ERAY_UL(4)
#define ERAY_CLC_SBWE_LEN                    _ERAY_UL(1)

/* ERAY_CLC_FSOE (rw) */
#define ERAY_CLC_FSOE_POS                    _ERAY_UL(5)
#define ERAY_CLC_FSOE_LEN                    _ERAY_UL(1)

/* ERAY_CLC_RMC (rw) */
#define ERAY_CLC_RMC_POS                     _ERAY_UL(8)
#define ERAY_CLC_RMC_LEN                     _ERAY_UL(3)

/* ERAY_CUST1_INT0 (rwh) */
#define ERAY_CUST1_INT0_POS                  _ERAY_UL(0)
#define ERAY_CUST1_INT0_LEN                  _ERAY_UL(1)

/* ERAY_CUST1_OEN (rw) */
#define ERAY_CUST1_OEN_POS                   _ERAY_UL(1)
#define ERAY_CUST1_OEN_LEN                   _ERAY_UL(1)

/* ERAY_CUST1_IEN (rw) */
#define ERAY_CUST1_IEN_POS                   _ERAY_UL(2)
#define ERAY_CUST1_IEN_LEN                   _ERAY_UL(1)

/* ERAY_CUST1_IBFS (rh) */
#define ERAY_CUST1_IBFS_POS                  _ERAY_UL(3)
#define ERAY_CUST1_IBFS_LEN                  _ERAY_UL(1)

/* ERAY_CUST1_IBF1PAG (rw) */
#define ERAY_CUST1_IBF1PAG_POS               _ERAY_UL(4)
#define ERAY_CUST1_IBF1PAG_LEN               _ERAY_UL(1)

/* ERAY_CUST1_IBF2PAG (rw) */
#define ERAY_CUST1_IBF2PAG_POS               _ERAY_UL(7)
#define ERAY_CUST1_IBF2PAG_LEN               _ERAY_UL(1)

/* ERAY_CUST1_RISA (rw) */
#define ERAY_CUST1_RISA_POS                  _ERAY_UL(10)
#define ERAY_CUST1_RISA_LEN                  _ERAY_UL(2)

/* ERAY_CUST1_RISB (rw) */
#define ERAY_CUST1_RISB_POS                  _ERAY_UL(12)
#define ERAY_CUST1_RISB_LEN                  _ERAY_UL(2)

/* ERAY_CUST1_STPWTS (rw) */
#define ERAY_CUST1_STPWTS_POS                _ERAY_UL(14)
#define ERAY_CUST1_STPWTS_LEN                _ERAY_UL(2)

/* ERAY_ID_MOD_REV (r) */
#define ERAY_ID_MOD_REV_POS                  _ERAY_UL(0)
#define ERAY_ID_MOD_REV_LEN                  _ERAY_UL(8)

/* ERAY_ID_MOD_TYPE (r) */
#define ERAY_ID_MOD_TYPE_POS                 _ERAY_UL(8)
#define ERAY_ID_MOD_TYPE_LEN                 _ERAY_UL(8)

/* ERAY_ID_MOD_NUMBER (r) */
#define ERAY_ID_MOD_NUMBER_POS               _ERAY_UL(16)
#define ERAY_ID_MOD_NUMBER_LEN               _ERAY_UL(16)

/* ERAY_CUST3_TO (rw) */
#define ERAY_CUST3_TO_POS                    _ERAY_UL(0)
#define ERAY_CUST3_TO_LEN                    _ERAY_UL(32)

/* ERAY_TEST1_WRTEN (rw) */
#define ERAY_TEST1_WRTEN_POS                 _ERAY_UL(0)
#define ERAY_TEST1_WRTEN_LEN                 _ERAY_UL(1)

/* ERAY_TEST1_ELBE (rw) */
#define ERAY_TEST1_ELBE_POS                  _ERAY_UL(1)
#define ERAY_TEST1_ELBE_LEN                  _ERAY_UL(1)

/* ERAY_TEST1_TMC (rw) */
#define ERAY_TEST1_TMC_POS                   _ERAY_UL(4)
#define ERAY_TEST1_TMC_LEN                   _ERAY_UL(2)

/* ERAY_TEST1_AOA (rh) */
#define ERAY_TEST1_AOA_POS                   _ERAY_UL(8)
#define ERAY_TEST1_AOA_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_AOB (rh) */
#define ERAY_TEST1_AOB_POS                   _ERAY_UL(9)
#define ERAY_TEST1_AOB_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_RXA (rh) */
#define ERAY_TEST1_RXA_POS                   _ERAY_UL(16)
#define ERAY_TEST1_RXA_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_RXB (rh) */
#define ERAY_TEST1_RXB_POS                   _ERAY_UL(17)
#define ERAY_TEST1_RXB_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_TXA (rwh) */
#define ERAY_TEST1_TXA_POS                   _ERAY_UL(18)
#define ERAY_TEST1_TXA_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_TXB (rwh) */
#define ERAY_TEST1_TXB_POS                   _ERAY_UL(19)
#define ERAY_TEST1_TXB_LEN                   _ERAY_UL(1)

/* ERAY_TEST1_TXENA (rwh) */
#define ERAY_TEST1_TXENA_POS                 _ERAY_UL(20)
#define ERAY_TEST1_TXENA_LEN                 _ERAY_UL(1)

/* ERAY_TEST1_TXENB (rwh) */
#define ERAY_TEST1_TXENB_POS                 _ERAY_UL(21)
#define ERAY_TEST1_TXENB_LEN                 _ERAY_UL(1)

/* ERAY_TEST1_CERA (rh) */
#define ERAY_TEST1_CERA_POS                  _ERAY_UL(24)
#define ERAY_TEST1_CERA_LEN                  _ERAY_UL(4)

/* ERAY_TEST1_CERB (rh) */
#define ERAY_TEST1_CERB_POS                  _ERAY_UL(28)
#define ERAY_TEST1_CERB_LEN                  _ERAY_UL(4)

/* ERAY_TEST2_RS (rw) */
#define ERAY_TEST2_RS_POS                    _ERAY_UL(0)
#define ERAY_TEST2_RS_LEN                    _ERAY_UL(3)

/* ERAY_TEST2_SSEL (rw) */
#define ERAY_TEST2_SSEL_POS                  _ERAY_UL(4)
#define ERAY_TEST2_SSEL_LEN                  _ERAY_UL(3)

/* ERAY_TEST2_WRECC (rw) */
#define ERAY_TEST2_WRECC_POS                 _ERAY_UL(14)
#define ERAY_TEST2_WRECC_LEN                 _ERAY_UL(1)

/* ERAY_LCK_CLK (w) */
#define ERAY_LCK_CLK_POS                     _ERAY_UL(0)
#define ERAY_LCK_CLK_LEN                     _ERAY_UL(8)

/* ERAY_LCK_TMK (w) */
#define ERAY_LCK_TMK_POS                     _ERAY_UL(8)
#define ERAY_LCK_TMK_LEN                     _ERAY_UL(8)

/* ERAY_EIR_PEMC (rwh) */
#define ERAY_EIR_PEMC_POS                    _ERAY_UL(0)
#define ERAY_EIR_PEMC_LEN                    _ERAY_UL(1)

/* ERAY_EIR_CNA (rwh) */
#define ERAY_EIR_CNA_POS                     _ERAY_UL(1)
#define ERAY_EIR_CNA_LEN                     _ERAY_UL(1)

/* ERAY_EIR_SFBM (rwh) */
#define ERAY_EIR_SFBM_POS                    _ERAY_UL(2)
#define ERAY_EIR_SFBM_LEN                    _ERAY_UL(1)

/* ERAY_EIR_SFO (rwh) */
#define ERAY_EIR_SFO_POS                     _ERAY_UL(3)
#define ERAY_EIR_SFO_LEN                     _ERAY_UL(1)

/* ERAY_EIR_CCF (rwh) */
#define ERAY_EIR_CCF_POS                     _ERAY_UL(4)
#define ERAY_EIR_CCF_LEN                     _ERAY_UL(1)

/* ERAY_EIR_CCL (rwh) */
#define ERAY_EIR_CCL_POS                     _ERAY_UL(5)
#define ERAY_EIR_CCL_LEN                     _ERAY_UL(1)

/* ERAY_EIR_EERR (rh) */
#define ERAY_EIR_EERR_POS                    _ERAY_UL(6)
#define ERAY_EIR_EERR_LEN                    _ERAY_UL(1)

/* ERAY_EIR_RFO (rh) */
#define ERAY_EIR_RFO_POS                     _ERAY_UL(7)
#define ERAY_EIR_RFO_LEN                     _ERAY_UL(1)

/* ERAY_EIR_EFA (rwh) */
#define ERAY_EIR_EFA_POS                     _ERAY_UL(8)
#define ERAY_EIR_EFA_LEN                     _ERAY_UL(1)

/* ERAY_EIR_IIBA (rwh) */
#define ERAY_EIR_IIBA_POS                    _ERAY_UL(9)
#define ERAY_EIR_IIBA_LEN                    _ERAY_UL(1)

/* ERAY_EIR_IOBA (rwh) */
#define ERAY_EIR_IOBA_POS                    _ERAY_UL(10)
#define ERAY_EIR_IOBA_LEN                    _ERAY_UL(1)

/* ERAY_EIR_MHF (rwh) */
#define ERAY_EIR_MHF_POS                     _ERAY_UL(11)
#define ERAY_EIR_MHF_LEN                     _ERAY_UL(1)

/* ERAY_EIR_EDA (rwh) */
#define ERAY_EIR_EDA_POS                     _ERAY_UL(16)
#define ERAY_EIR_EDA_LEN                     _ERAY_UL(1)

/* ERAY_EIR_LTVA (rwh) */
#define ERAY_EIR_LTVA_POS                    _ERAY_UL(17)
#define ERAY_EIR_LTVA_LEN                    _ERAY_UL(1)

/* ERAY_EIR_TABA (rwh) */
#define ERAY_EIR_TABA_POS                    _ERAY_UL(18)
#define ERAY_EIR_TABA_LEN                    _ERAY_UL(1)

/* ERAY_EIR_EDB (rwh) */
#define ERAY_EIR_EDB_POS                     _ERAY_UL(24)
#define ERAY_EIR_EDB_LEN                     _ERAY_UL(1)

/* ERAY_EIR_LTVB (rwh) */
#define ERAY_EIR_LTVB_POS                    _ERAY_UL(25)
#define ERAY_EIR_LTVB_LEN                    _ERAY_UL(1)

/* ERAY_EIR_TABB (rwh) */
#define ERAY_EIR_TABB_POS                    _ERAY_UL(26)
#define ERAY_EIR_TABB_LEN                    _ERAY_UL(1)

/* ERAY_SIR_WST (rwh) */
#define ERAY_SIR_WST_POS                     _ERAY_UL(0)
#define ERAY_SIR_WST_LEN                     _ERAY_UL(1)

/* ERAY_SIR_CAS (rwh) */
#define ERAY_SIR_CAS_POS                     _ERAY_UL(1)
#define ERAY_SIR_CAS_LEN                     _ERAY_UL(1)

/* ERAY_SIR_CYCS (rwh) */
#define ERAY_SIR_CYCS_POS                    _ERAY_UL(2)
#define ERAY_SIR_CYCS_LEN                    _ERAY_UL(1)

/* ERAY_SIR_TXI (rwh) */
#define ERAY_SIR_TXI_POS                     _ERAY_UL(3)
#define ERAY_SIR_TXI_LEN                     _ERAY_UL(1)

/* ERAY_SIR_RXI (rwh) */
#define ERAY_SIR_RXI_POS                     _ERAY_UL(4)
#define ERAY_SIR_RXI_LEN                     _ERAY_UL(1)

/* ERAY_SIR_RFNE (rh) */
#define ERAY_SIR_RFNE_POS                    _ERAY_UL(5)
#define ERAY_SIR_RFNE_LEN                    _ERAY_UL(1)

/* ERAY_SIR_RFCL (rh) */
#define ERAY_SIR_RFCL_POS                    _ERAY_UL(6)
#define ERAY_SIR_RFCL_LEN                    _ERAY_UL(1)

/* ERAY_SIR_NMVC (rwh) */
#define ERAY_SIR_NMVC_POS                    _ERAY_UL(7)
#define ERAY_SIR_NMVC_LEN                    _ERAY_UL(1)

/* ERAY_SIR_TI0 (rwh) */
#define ERAY_SIR_TI0_POS                     _ERAY_UL(8)
#define ERAY_SIR_TI0_LEN                     _ERAY_UL(1)

/* ERAY_SIR_TI1 (rwh) */
#define ERAY_SIR_TI1_POS                     _ERAY_UL(9)
#define ERAY_SIR_TI1_LEN                     _ERAY_UL(1)

/* ERAY_SIR_TIBC (rwh) */
#define ERAY_SIR_TIBC_POS                    _ERAY_UL(10)
#define ERAY_SIR_TIBC_LEN                    _ERAY_UL(1)

/* ERAY_SIR_TOBC (rwh) */
#define ERAY_SIR_TOBC_POS                    _ERAY_UL(11)
#define ERAY_SIR_TOBC_LEN                    _ERAY_UL(1)

/* ERAY_SIR_SWE (rwh) */
#define ERAY_SIR_SWE_POS                     _ERAY_UL(12)
#define ERAY_SIR_SWE_LEN                     _ERAY_UL(1)

/* ERAY_SIR_SUCS (rwh) */
#define ERAY_SIR_SUCS_POS                    _ERAY_UL(13)
#define ERAY_SIR_SUCS_LEN                    _ERAY_UL(1)

/* ERAY_SIR_MBSI (rwh) */
#define ERAY_SIR_MBSI_POS                    _ERAY_UL(14)
#define ERAY_SIR_MBSI_LEN                    _ERAY_UL(1)

/* ERAY_SIR_SDS (rwh) */
#define ERAY_SIR_SDS_POS                     _ERAY_UL(15)
#define ERAY_SIR_SDS_LEN                     _ERAY_UL(1)

/* ERAY_SIR_WUPA (rwh) */
#define ERAY_SIR_WUPA_POS                    _ERAY_UL(16)
#define ERAY_SIR_WUPA_LEN                    _ERAY_UL(1)

/* ERAY_SIR_MTSA (rwh) */
#define ERAY_SIR_MTSA_POS                    _ERAY_UL(17)
#define ERAY_SIR_MTSA_LEN                    _ERAY_UL(1)

/* ERAY_SIR_WUPB (rwh) */
#define ERAY_SIR_WUPB_POS                    _ERAY_UL(24)
#define ERAY_SIR_WUPB_LEN                    _ERAY_UL(1)

/* ERAY_SIR_MTSB (rwh) */
#define ERAY_SIR_MTSB_POS                    _ERAY_UL(25)
#define ERAY_SIR_MTSB_LEN                    _ERAY_UL(1)

/* ERAY_EILS_PEMCL (rw) */
#define ERAY_EILS_PEMCL_POS                  _ERAY_UL(0)
#define ERAY_EILS_PEMCL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_CNAL (rw) */
#define ERAY_EILS_CNAL_POS                   _ERAY_UL(1)
#define ERAY_EILS_CNAL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_SFBML (rw) */
#define ERAY_EILS_SFBML_POS                  _ERAY_UL(2)
#define ERAY_EILS_SFBML_LEN                  _ERAY_UL(1)

/* ERAY_EILS_SFOL (rw) */
#define ERAY_EILS_SFOL_POS                   _ERAY_UL(3)
#define ERAY_EILS_SFOL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_CCFL (rw) */
#define ERAY_EILS_CCFL_POS                   _ERAY_UL(4)
#define ERAY_EILS_CCFL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_CCLL (rw) */
#define ERAY_EILS_CCLL_POS                   _ERAY_UL(5)
#define ERAY_EILS_CCLL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_EERRL (rw) */
#define ERAY_EILS_EERRL_POS                  _ERAY_UL(6)
#define ERAY_EILS_EERRL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_RFOL (rw) */
#define ERAY_EILS_RFOL_POS                   _ERAY_UL(7)
#define ERAY_EILS_RFOL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_EFAL (rw) */
#define ERAY_EILS_EFAL_POS                   _ERAY_UL(8)
#define ERAY_EILS_EFAL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_IIBAL (rw) */
#define ERAY_EILS_IIBAL_POS                  _ERAY_UL(9)
#define ERAY_EILS_IIBAL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_IOBAL (rw) */
#define ERAY_EILS_IOBAL_POS                  _ERAY_UL(10)
#define ERAY_EILS_IOBAL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_MHFL (rw) */
#define ERAY_EILS_MHFL_POS                   _ERAY_UL(11)
#define ERAY_EILS_MHFL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_EDAL (rw) */
#define ERAY_EILS_EDAL_POS                   _ERAY_UL(16)
#define ERAY_EILS_EDAL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_LTVAL (rw) */
#define ERAY_EILS_LTVAL_POS                  _ERAY_UL(17)
#define ERAY_EILS_LTVAL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_TABAL (rw) */
#define ERAY_EILS_TABAL_POS                  _ERAY_UL(18)
#define ERAY_EILS_TABAL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_EDBL (rw) */
#define ERAY_EILS_EDBL_POS                   _ERAY_UL(24)
#define ERAY_EILS_EDBL_LEN                   _ERAY_UL(1)

/* ERAY_EILS_LTVBL (rw) */
#define ERAY_EILS_LTVBL_POS                  _ERAY_UL(25)
#define ERAY_EILS_LTVBL_LEN                  _ERAY_UL(1)

/* ERAY_EILS_TABBL (rw) */
#define ERAY_EILS_TABBL_POS                  _ERAY_UL(26)
#define ERAY_EILS_TABBL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_WSTL (rw) */
#define ERAY_SILS_WSTL_POS                   _ERAY_UL(0)
#define ERAY_SILS_WSTL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_CASL (rw) */
#define ERAY_SILS_CASL_POS                   _ERAY_UL(1)
#define ERAY_SILS_CASL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_CYCSL (rw) */
#define ERAY_SILS_CYCSL_POS                  _ERAY_UL(2)
#define ERAY_SILS_CYCSL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_TXIL (rw) */
#define ERAY_SILS_TXIL_POS                   _ERAY_UL(3)
#define ERAY_SILS_TXIL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_RXIL (rw) */
#define ERAY_SILS_RXIL_POS                   _ERAY_UL(4)
#define ERAY_SILS_RXIL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_RFNEL (rw) */
#define ERAY_SILS_RFNEL_POS                  _ERAY_UL(5)
#define ERAY_SILS_RFNEL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_RFCLL (rw) */
#define ERAY_SILS_RFCLL_POS                  _ERAY_UL(6)
#define ERAY_SILS_RFCLL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_NMVCL (rw) */
#define ERAY_SILS_NMVCL_POS                  _ERAY_UL(7)
#define ERAY_SILS_NMVCL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_TI0L (rw) */
#define ERAY_SILS_TI0L_POS                   _ERAY_UL(8)
#define ERAY_SILS_TI0L_LEN                   _ERAY_UL(1)

/* ERAY_SILS_TI1L (rw) */
#define ERAY_SILS_TI1L_POS                   _ERAY_UL(9)
#define ERAY_SILS_TI1L_LEN                   _ERAY_UL(1)

/* ERAY_SILS_TIBCL (rw) */
#define ERAY_SILS_TIBCL_POS                  _ERAY_UL(10)
#define ERAY_SILS_TIBCL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_TOBCL (rw) */
#define ERAY_SILS_TOBCL_POS                  _ERAY_UL(11)
#define ERAY_SILS_TOBCL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_SWEL (rw) */
#define ERAY_SILS_SWEL_POS                   _ERAY_UL(12)
#define ERAY_SILS_SWEL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_SUCSL (rw) */
#define ERAY_SILS_SUCSL_POS                  _ERAY_UL(13)
#define ERAY_SILS_SUCSL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_MBSIL (rw) */
#define ERAY_SILS_MBSIL_POS                  _ERAY_UL(14)
#define ERAY_SILS_MBSIL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_SDSL (rw) */
#define ERAY_SILS_SDSL_POS                   _ERAY_UL(15)
#define ERAY_SILS_SDSL_LEN                   _ERAY_UL(1)

/* ERAY_SILS_WUPAL (rw) */
#define ERAY_SILS_WUPAL_POS                  _ERAY_UL(16)
#define ERAY_SILS_WUPAL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_MTSAL (rw) */
#define ERAY_SILS_MTSAL_POS                  _ERAY_UL(17)
#define ERAY_SILS_MTSAL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_WUPBL (rw) */
#define ERAY_SILS_WUPBL_POS                  _ERAY_UL(24)
#define ERAY_SILS_WUPBL_LEN                  _ERAY_UL(1)

/* ERAY_SILS_MTSBL (rw) */
#define ERAY_SILS_MTSBL_POS                  _ERAY_UL(25)
#define ERAY_SILS_MTSBL_LEN                  _ERAY_UL(1)

/* ERAY_EIES_PEMCE (rwh) */
#define ERAY_EIES_PEMCE_POS                  _ERAY_UL(0)
#define ERAY_EIES_PEMCE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_CNAE (rwh) */
#define ERAY_EIES_CNAE_POS                   _ERAY_UL(1)
#define ERAY_EIES_CNAE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_SFBME (rwh) */
#define ERAY_EIES_SFBME_POS                  _ERAY_UL(2)
#define ERAY_EIES_SFBME_LEN                  _ERAY_UL(1)

/* ERAY_EIES_SFOE (rwh) */
#define ERAY_EIES_SFOE_POS                   _ERAY_UL(3)
#define ERAY_EIES_SFOE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_CCFE (rwh) */
#define ERAY_EIES_CCFE_POS                   _ERAY_UL(4)
#define ERAY_EIES_CCFE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_CCLE (rwh) */
#define ERAY_EIES_CCLE_POS                   _ERAY_UL(5)
#define ERAY_EIES_CCLE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_EERRE (rwh) */
#define ERAY_EIES_EERRE_POS                  _ERAY_UL(6)
#define ERAY_EIES_EERRE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_RFOE (rwh) */
#define ERAY_EIES_RFOE_POS                   _ERAY_UL(7)
#define ERAY_EIES_RFOE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_EFAE (rwh) */
#define ERAY_EIES_EFAE_POS                   _ERAY_UL(8)
#define ERAY_EIES_EFAE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_IIBAE (rwh) */
#define ERAY_EIES_IIBAE_POS                  _ERAY_UL(9)
#define ERAY_EIES_IIBAE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_IOBAE (rwh) */
#define ERAY_EIES_IOBAE_POS                  _ERAY_UL(10)
#define ERAY_EIES_IOBAE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_MHFE (rwh) */
#define ERAY_EIES_MHFE_POS                   _ERAY_UL(11)
#define ERAY_EIES_MHFE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_EDAE (rwh) */
#define ERAY_EIES_EDAE_POS                   _ERAY_UL(16)
#define ERAY_EIES_EDAE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_LTVAE (rwh) */
#define ERAY_EIES_LTVAE_POS                  _ERAY_UL(17)
#define ERAY_EIES_LTVAE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_TABAE (rwh) */
#define ERAY_EIES_TABAE_POS                  _ERAY_UL(18)
#define ERAY_EIES_TABAE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_EDBE (rwh) */
#define ERAY_EIES_EDBE_POS                   _ERAY_UL(24)
#define ERAY_EIES_EDBE_LEN                   _ERAY_UL(1)

/* ERAY_EIES_LTVBE (rwh) */
#define ERAY_EIES_LTVBE_POS                  _ERAY_UL(25)
#define ERAY_EIES_LTVBE_LEN                  _ERAY_UL(1)

/* ERAY_EIES_TABBE (rwh) */
#define ERAY_EIES_TABBE_POS                  _ERAY_UL(26)
#define ERAY_EIES_TABBE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_PEMCE (rwh) */
#define ERAY_EIER_PEMCE_POS                  _ERAY_UL(0)
#define ERAY_EIER_PEMCE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_CNAE (rwh) */
#define ERAY_EIER_CNAE_POS                   _ERAY_UL(1)
#define ERAY_EIER_CNAE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_SFBME (rwh) */
#define ERAY_EIER_SFBME_POS                  _ERAY_UL(2)
#define ERAY_EIER_SFBME_LEN                  _ERAY_UL(1)

/* ERAY_EIER_SFOE (rwh) */
#define ERAY_EIER_SFOE_POS                   _ERAY_UL(3)
#define ERAY_EIER_SFOE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_CCFE (rwh) */
#define ERAY_EIER_CCFE_POS                   _ERAY_UL(4)
#define ERAY_EIER_CCFE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_CCLE (rwh) */
#define ERAY_EIER_CCLE_POS                   _ERAY_UL(5)
#define ERAY_EIER_CCLE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_EERRE (rwh) */
#define ERAY_EIER_EERRE_POS                  _ERAY_UL(6)
#define ERAY_EIER_EERRE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_RFOE (rwh) */
#define ERAY_EIER_RFOE_POS                   _ERAY_UL(7)
#define ERAY_EIER_RFOE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_EFAE (rwh) */
#define ERAY_EIER_EFAE_POS                   _ERAY_UL(8)
#define ERAY_EIER_EFAE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_IIBAE (rwh) */
#define ERAY_EIER_IIBAE_POS                  _ERAY_UL(9)
#define ERAY_EIER_IIBAE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_IOBAE (rwh) */
#define ERAY_EIER_IOBAE_POS                  _ERAY_UL(10)
#define ERAY_EIER_IOBAE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_MHFE (rwh) */
#define ERAY_EIER_MHFE_POS                   _ERAY_UL(11)
#define ERAY_EIER_MHFE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_EDAE (rwh) */
#define ERAY_EIER_EDAE_POS                   _ERAY_UL(16)
#define ERAY_EIER_EDAE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_LTVAE (rwh) */
#define ERAY_EIER_LTVAE_POS                  _ERAY_UL(17)
#define ERAY_EIER_LTVAE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_TABAE (rwh) */
#define ERAY_EIER_TABAE_POS                  _ERAY_UL(18)
#define ERAY_EIER_TABAE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_EDBE (rwh) */
#define ERAY_EIER_EDBE_POS                   _ERAY_UL(24)
#define ERAY_EIER_EDBE_LEN                   _ERAY_UL(1)

/* ERAY_EIER_LTVBE (rwh) */
#define ERAY_EIER_LTVBE_POS                  _ERAY_UL(25)
#define ERAY_EIER_LTVBE_LEN                  _ERAY_UL(1)

/* ERAY_EIER_TABBE (rwh) */
#define ERAY_EIER_TABBE_POS                  _ERAY_UL(26)
#define ERAY_EIER_TABBE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_WSTE (rwh) */
#define ERAY_SIES_WSTE_POS                   _ERAY_UL(0)
#define ERAY_SIES_WSTE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_CASE (rwh) */
#define ERAY_SIES_CASE_POS                   _ERAY_UL(1)
#define ERAY_SIES_CASE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_CYCSE (rwh) */
#define ERAY_SIES_CYCSE_POS                  _ERAY_UL(2)
#define ERAY_SIES_CYCSE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_TXIE (rwh) */
#define ERAY_SIES_TXIE_POS                   _ERAY_UL(3)
#define ERAY_SIES_TXIE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_RXIE (rwh) */
#define ERAY_SIES_RXIE_POS                   _ERAY_UL(4)
#define ERAY_SIES_RXIE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_RFNEE (rwh) */
#define ERAY_SIES_RFNEE_POS                  _ERAY_UL(5)
#define ERAY_SIES_RFNEE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_RFCLE (rwh) */
#define ERAY_SIES_RFCLE_POS                  _ERAY_UL(6)
#define ERAY_SIES_RFCLE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_NMVCE (rwh) */
#define ERAY_SIES_NMVCE_POS                  _ERAY_UL(7)
#define ERAY_SIES_NMVCE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_TI0E (rwh) */
#define ERAY_SIES_TI0E_POS                   _ERAY_UL(8)
#define ERAY_SIES_TI0E_LEN                   _ERAY_UL(1)

/* ERAY_SIES_TI1E (rwh) */
#define ERAY_SIES_TI1E_POS                   _ERAY_UL(9)
#define ERAY_SIES_TI1E_LEN                   _ERAY_UL(1)

/* ERAY_SIES_TIBCE (rwh) */
#define ERAY_SIES_TIBCE_POS                  _ERAY_UL(10)
#define ERAY_SIES_TIBCE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_TOBCE (rwh) */
#define ERAY_SIES_TOBCE_POS                  _ERAY_UL(11)
#define ERAY_SIES_TOBCE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_SWEE (rwh) */
#define ERAY_SIES_SWEE_POS                   _ERAY_UL(12)
#define ERAY_SIES_SWEE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_SUCSE (rwh) */
#define ERAY_SIES_SUCSE_POS                  _ERAY_UL(13)
#define ERAY_SIES_SUCSE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_MBSIE (rwh) */
#define ERAY_SIES_MBSIE_POS                  _ERAY_UL(14)
#define ERAY_SIES_MBSIE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_SDSE (rwh) */
#define ERAY_SIES_SDSE_POS                   _ERAY_UL(15)
#define ERAY_SIES_SDSE_LEN                   _ERAY_UL(1)

/* ERAY_SIES_WUPAE (rwh) */
#define ERAY_SIES_WUPAE_POS                  _ERAY_UL(16)
#define ERAY_SIES_WUPAE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_MTSAE (rwh) */
#define ERAY_SIES_MTSAE_POS                  _ERAY_UL(17)
#define ERAY_SIES_MTSAE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_WUPBE (rwh) */
#define ERAY_SIES_WUPBE_POS                  _ERAY_UL(24)
#define ERAY_SIES_WUPBE_LEN                  _ERAY_UL(1)

/* ERAY_SIES_MTSBE (rwh) */
#define ERAY_SIES_MTSBE_POS                  _ERAY_UL(25)
#define ERAY_SIES_MTSBE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_WSTE (rwh) */
#define ERAY_SIER_WSTE_POS                   _ERAY_UL(0)
#define ERAY_SIER_WSTE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_CASE (rwh) */
#define ERAY_SIER_CASE_POS                   _ERAY_UL(1)
#define ERAY_SIER_CASE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_CYCSE (rwh) */
#define ERAY_SIER_CYCSE_POS                  _ERAY_UL(2)
#define ERAY_SIER_CYCSE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_TXIE (rwh) */
#define ERAY_SIER_TXIE_POS                   _ERAY_UL(3)
#define ERAY_SIER_TXIE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_RXIE (rwh) */
#define ERAY_SIER_RXIE_POS                   _ERAY_UL(4)
#define ERAY_SIER_RXIE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_RFNEE (rwh) */
#define ERAY_SIER_RFNEE_POS                  _ERAY_UL(5)
#define ERAY_SIER_RFNEE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_RFCLE (rwh) */
#define ERAY_SIER_RFCLE_POS                  _ERAY_UL(6)
#define ERAY_SIER_RFCLE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_NMVCE (rwh) */
#define ERAY_SIER_NMVCE_POS                  _ERAY_UL(7)
#define ERAY_SIER_NMVCE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_TI0E (rwh) */
#define ERAY_SIER_TI0E_POS                   _ERAY_UL(8)
#define ERAY_SIER_TI0E_LEN                   _ERAY_UL(1)

/* ERAY_SIER_TI1E (rwh) */
#define ERAY_SIER_TI1E_POS                   _ERAY_UL(9)
#define ERAY_SIER_TI1E_LEN                   _ERAY_UL(1)

/* ERAY_SIER_TIBCE (rwh) */
#define ERAY_SIER_TIBCE_POS                  _ERAY_UL(10)
#define ERAY_SIER_TIBCE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_TOBCE (rwh) */
#define ERAY_SIER_TOBCE_POS                  _ERAY_UL(11)
#define ERAY_SIER_TOBCE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_SWEE (rwh) */
#define ERAY_SIER_SWEE_POS                   _ERAY_UL(12)
#define ERAY_SIER_SWEE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_SUCSE (rwh) */
#define ERAY_SIER_SUCSE_POS                  _ERAY_UL(13)
#define ERAY_SIER_SUCSE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_MBSIE (rwh) */
#define ERAY_SIER_MBSIE_POS                  _ERAY_UL(14)
#define ERAY_SIER_MBSIE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_SDSE (rwh) */
#define ERAY_SIER_SDSE_POS                   _ERAY_UL(15)
#define ERAY_SIER_SDSE_LEN                   _ERAY_UL(1)

/* ERAY_SIER_WUPAE (rwh) */
#define ERAY_SIER_WUPAE_POS                  _ERAY_UL(16)
#define ERAY_SIER_WUPAE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_MTSAE (rwh) */
#define ERAY_SIER_MTSAE_POS                  _ERAY_UL(17)
#define ERAY_SIER_MTSAE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_WUPBE (rwh) */
#define ERAY_SIER_WUPBE_POS                  _ERAY_UL(24)
#define ERAY_SIER_WUPBE_LEN                  _ERAY_UL(1)

/* ERAY_SIER_MTSBE (rwh) */
#define ERAY_SIER_MTSBE_POS                  _ERAY_UL(25)
#define ERAY_SIER_MTSBE_LEN                  _ERAY_UL(1)

/* ERAY_ILE_EINT0 (rw) */
#define ERAY_ILE_EINT0_POS                   _ERAY_UL(0)
#define ERAY_ILE_EINT0_LEN                   _ERAY_UL(1)

/* ERAY_ILE_EINT1 (rw) */
#define ERAY_ILE_EINT1_POS                   _ERAY_UL(1)
#define ERAY_ILE_EINT1_LEN                   _ERAY_UL(1)

/* ERAY_T0C_T0RC (rwh) */
#define ERAY_T0C_T0RC_POS                    _ERAY_UL(0)
#define ERAY_T0C_T0RC_LEN                    _ERAY_UL(1)

/* ERAY_T0C_T0MS (rw) */
#define ERAY_T0C_T0MS_POS                    _ERAY_UL(1)
#define ERAY_T0C_T0MS_LEN                    _ERAY_UL(1)

/* ERAY_T0C_T0CC (rw) */
#define ERAY_T0C_T0CC_POS                    _ERAY_UL(8)
#define ERAY_T0C_T0CC_LEN                    _ERAY_UL(7)

/* ERAY_T0C_T0MO (rw) */
#define ERAY_T0C_T0MO_POS                    _ERAY_UL(16)
#define ERAY_T0C_T0MO_LEN                    _ERAY_UL(14)

/* ERAY_T1C_T1RC (rwh) */
#define ERAY_T1C_T1RC_POS                    _ERAY_UL(0)
#define ERAY_T1C_T1RC_LEN                    _ERAY_UL(1)

/* ERAY_T1C_T1MS (rw) */
#define ERAY_T1C_T1MS_POS                    _ERAY_UL(1)
#define ERAY_T1C_T1MS_LEN                    _ERAY_UL(1)

/* ERAY_T1C_T1MC (rw) */
#define ERAY_T1C_T1MC_POS                    _ERAY_UL(16)
#define ERAY_T1C_T1MC_LEN                    _ERAY_UL(14)

/* ERAY_STPW1_ESWT (rwh) */
#define ERAY_STPW1_ESWT_POS                  _ERAY_UL(0)
#define ERAY_STPW1_ESWT_LEN                  _ERAY_UL(1)

/* ERAY_STPW1_SWMS (rw) */
#define ERAY_STPW1_SWMS_POS                  _ERAY_UL(1)
#define ERAY_STPW1_SWMS_LEN                  _ERAY_UL(1)

/* ERAY_STPW1_EDGE (rw) */
#define ERAY_STPW1_EDGE_POS                  _ERAY_UL(2)
#define ERAY_STPW1_EDGE_LEN                  _ERAY_UL(1)

/* ERAY_STPW1_SSWT (rwh) */
#define ERAY_STPW1_SSWT_POS                  _ERAY_UL(3)
#define ERAY_STPW1_SSWT_LEN                  _ERAY_UL(1)

/* ERAY_STPW1_EETP (rw) */
#define ERAY_STPW1_EETP_POS                  _ERAY_UL(4)
#define ERAY_STPW1_EETP_LEN                  _ERAY_UL(1)

/* ERAY_STPW1_EINT0 (rw) */
#define ERAY_STPW1_EINT0_POS                 _ERAY_UL(5)
#define ERAY_STPW1_EINT0_LEN                 _ERAY_UL(1)

/* ERAY_STPW1_EINT1 (rw) */
#define ERAY_STPW1_EINT1_POS                 _ERAY_UL(6)
#define ERAY_STPW1_EINT1_LEN                 _ERAY_UL(1)

/* ERAY_STPW1_SCCV (rh) */
#define ERAY_STPW1_SCCV_POS                  _ERAY_UL(8)
#define ERAY_STPW1_SCCV_LEN                  _ERAY_UL(6)

/* ERAY_STPW1_SMTV (rh) */
#define ERAY_STPW1_SMTV_POS                  _ERAY_UL(16)
#define ERAY_STPW1_SMTV_LEN                  _ERAY_UL(14)

/* ERAY_STPW2_SSCVA (rh) */
#define ERAY_STPW2_SSCVA_POS                 _ERAY_UL(0)
#define ERAY_STPW2_SSCVA_LEN                 _ERAY_UL(11)

/* ERAY_STPW2_SSCVB (rh) */
#define ERAY_STPW2_SSCVB_POS                 _ERAY_UL(16)
#define ERAY_STPW2_SSCVB_LEN                 _ERAY_UL(11)

/* ERAY_SUCC1_CMD (rwh) */
#define ERAY_SUCC1_CMD_POS                   _ERAY_UL(0)
#define ERAY_SUCC1_CMD_LEN                   _ERAY_UL(4)

/* ERAY_SUCC1_PBSY (rh) */
#define ERAY_SUCC1_PBSY_POS                  _ERAY_UL(7)
#define ERAY_SUCC1_PBSY_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_TXST (rw) */
#define ERAY_SUCC1_TXST_POS                  _ERAY_UL(8)
#define ERAY_SUCC1_TXST_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_TXSY (rw) */
#define ERAY_SUCC1_TXSY_POS                  _ERAY_UL(9)
#define ERAY_SUCC1_TXSY_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_CSA (rw) */
#define ERAY_SUCC1_CSA_POS                   _ERAY_UL(11)
#define ERAY_SUCC1_CSA_LEN                   _ERAY_UL(5)

/* ERAY_SUCC1_PTA (rw) */
#define ERAY_SUCC1_PTA_POS                   _ERAY_UL(16)
#define ERAY_SUCC1_PTA_LEN                   _ERAY_UL(5)

/* ERAY_SUCC1_WUCS (rw) */
#define ERAY_SUCC1_WUCS_POS                  _ERAY_UL(21)
#define ERAY_SUCC1_WUCS_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_TSM (rw) */
#define ERAY_SUCC1_TSM_POS                   _ERAY_UL(22)
#define ERAY_SUCC1_TSM_LEN                   _ERAY_UL(1)

/* ERAY_SUCC1_HCSE (rw) */
#define ERAY_SUCC1_HCSE_POS                  _ERAY_UL(23)
#define ERAY_SUCC1_HCSE_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_MTSA (rw) */
#define ERAY_SUCC1_MTSA_POS                  _ERAY_UL(24)
#define ERAY_SUCC1_MTSA_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_MTSB (rw) */
#define ERAY_SUCC1_MTSB_POS                  _ERAY_UL(25)
#define ERAY_SUCC1_MTSB_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_CCHA (rw) */
#define ERAY_SUCC1_CCHA_POS                  _ERAY_UL(26)
#define ERAY_SUCC1_CCHA_LEN                  _ERAY_UL(1)

/* ERAY_SUCC1_CCHB (rw) */
#define ERAY_SUCC1_CCHB_POS                  _ERAY_UL(27)
#define ERAY_SUCC1_CCHB_LEN                  _ERAY_UL(1)

/* ERAY_SUCC2_LT (rw) */
#define ERAY_SUCC2_LT_POS                    _ERAY_UL(0)
#define ERAY_SUCC2_LT_LEN                    _ERAY_UL(21)

/* ERAY_SUCC2_LTN (rw) */
#define ERAY_SUCC2_LTN_POS                   _ERAY_UL(24)
#define ERAY_SUCC2_LTN_LEN                   _ERAY_UL(4)

/* ERAY_SUCC3_WCP (rw) */
#define ERAY_SUCC3_WCP_POS                   _ERAY_UL(0)
#define ERAY_SUCC3_WCP_LEN                   _ERAY_UL(4)

/* ERAY_SUCC3_WCF (rw) */
#define ERAY_SUCC3_WCF_POS                   _ERAY_UL(4)
#define ERAY_SUCC3_WCF_LEN                   _ERAY_UL(4)

/* ERAY_NEMC_NML (rw) */
#define ERAY_NEMC_NML_POS                    _ERAY_UL(0)
#define ERAY_NEMC_NML_LEN                    _ERAY_UL(4)

/* ERAY_PRTC1_TSST (rw) */
#define ERAY_PRTC1_TSST_POS                  _ERAY_UL(0)
#define ERAY_PRTC1_TSST_LEN                  _ERAY_UL(4)

/* ERAY_PRTC1_CASM (rw) */
#define ERAY_PRTC1_CASM_POS                  _ERAY_UL(4)
#define ERAY_PRTC1_CASM_LEN                  _ERAY_UL(7)

/* ERAY_PRTC1_SPP (rw) */
#define ERAY_PRTC1_SPP_POS                   _ERAY_UL(12)
#define ERAY_PRTC1_SPP_LEN                   _ERAY_UL(2)

/* ERAY_PRTC1_BRP (rw) */
#define ERAY_PRTC1_BRP_POS                   _ERAY_UL(14)
#define ERAY_PRTC1_BRP_LEN                   _ERAY_UL(2)

/* ERAY_PRTC1_RXW (rw) */
#define ERAY_PRTC1_RXW_POS                   _ERAY_UL(16)
#define ERAY_PRTC1_RXW_LEN                   _ERAY_UL(9)

/* ERAY_PRTC1_RWP (rw) */
#define ERAY_PRTC1_RWP_POS                   _ERAY_UL(26)
#define ERAY_PRTC1_RWP_LEN                   _ERAY_UL(6)

/* ERAY_PRTC2_RXI (rw) */
#define ERAY_PRTC2_RXI_POS                   _ERAY_UL(0)
#define ERAY_PRTC2_RXI_LEN                   _ERAY_UL(6)

/* ERAY_PRTC2_RXL (rw) */
#define ERAY_PRTC2_RXL_POS                   _ERAY_UL(8)
#define ERAY_PRTC2_RXL_LEN                   _ERAY_UL(6)

/* ERAY_PRTC2_TXI (rw) */
#define ERAY_PRTC2_TXI_POS                   _ERAY_UL(16)
#define ERAY_PRTC2_TXI_LEN                   _ERAY_UL(8)

/* ERAY_PRTC2_TXL (rw) */
#define ERAY_PRTC2_TXL_POS                   _ERAY_UL(24)
#define ERAY_PRTC2_TXL_LEN                   _ERAY_UL(6)

/* ERAY_MHDC_SFDL (rw) */
#define ERAY_MHDC_SFDL_POS                   _ERAY_UL(0)
#define ERAY_MHDC_SFDL_LEN                   _ERAY_UL(7)

/* ERAY_MHDC_SLT (rw) */
#define ERAY_MHDC_SLT_POS                    _ERAY_UL(16)
#define ERAY_MHDC_SLT_LEN                    _ERAY_UL(13)

/* ERAY_GTUC01_UT (rw) */
#define ERAY_GTUC01_UT_POS                   _ERAY_UL(0)
#define ERAY_GTUC01_UT_LEN                   _ERAY_UL(20)

/* ERAY_GTUC02_MPC (rw) */
#define ERAY_GTUC02_MPC_POS                  _ERAY_UL(0)
#define ERAY_GTUC02_MPC_LEN                  _ERAY_UL(14)

/* ERAY_GTUC02_SNM (rw) */
#define ERAY_GTUC02_SNM_POS                  _ERAY_UL(16)
#define ERAY_GTUC02_SNM_LEN                  _ERAY_UL(4)

/* ERAY_GTUC03_UIOA (rw) */
#define ERAY_GTUC03_UIOA_POS                 _ERAY_UL(0)
#define ERAY_GTUC03_UIOA_LEN                 _ERAY_UL(8)

/* ERAY_GTUC03_UIOB (rw) */
#define ERAY_GTUC03_UIOB_POS                 _ERAY_UL(8)
#define ERAY_GTUC03_UIOB_LEN                 _ERAY_UL(8)

/* ERAY_GTUC03_MIOA (rw) */
#define ERAY_GTUC03_MIOA_POS                 _ERAY_UL(16)
#define ERAY_GTUC03_MIOA_LEN                 _ERAY_UL(7)

/* ERAY_GTUC03_MIOB (rw) */
#define ERAY_GTUC03_MIOB_POS                 _ERAY_UL(24)
#define ERAY_GTUC03_MIOB_LEN                 _ERAY_UL(7)

/* ERAY_GTUC04_NIT (rw) */
#define ERAY_GTUC04_NIT_POS                  _ERAY_UL(0)
#define ERAY_GTUC04_NIT_LEN                  _ERAY_UL(14)

/* ERAY_GTUC04_OCS (rw) */
#define ERAY_GTUC04_OCS_POS                  _ERAY_UL(16)
#define ERAY_GTUC04_OCS_LEN                  _ERAY_UL(14)

/* ERAY_GTUC05_DCA (rw) */
#define ERAY_GTUC05_DCA_POS                  _ERAY_UL(0)
#define ERAY_GTUC05_DCA_LEN                  _ERAY_UL(8)

/* ERAY_GTUC05_DCB (rw) */
#define ERAY_GTUC05_DCB_POS                  _ERAY_UL(8)
#define ERAY_GTUC05_DCB_LEN                  _ERAY_UL(8)

/* ERAY_GTUC05_CDD (rw) */
#define ERAY_GTUC05_CDD_POS                  _ERAY_UL(16)
#define ERAY_GTUC05_CDD_LEN                  _ERAY_UL(5)

/* ERAY_GTUC05_DEC (rw) */
#define ERAY_GTUC05_DEC_POS                  _ERAY_UL(24)
#define ERAY_GTUC05_DEC_LEN                  _ERAY_UL(8)

/* ERAY_GTUC06_ASR (rw) */
#define ERAY_GTUC06_ASR_POS                  _ERAY_UL(0)
#define ERAY_GTUC06_ASR_LEN                  _ERAY_UL(11)

/* ERAY_GTUC06_MOD (rw) */
#define ERAY_GTUC06_MOD_POS                  _ERAY_UL(16)
#define ERAY_GTUC06_MOD_LEN                  _ERAY_UL(11)

/* ERAY_GTUC07_SSL (rw) */
#define ERAY_GTUC07_SSL_POS                  _ERAY_UL(0)
#define ERAY_GTUC07_SSL_LEN                  _ERAY_UL(10)

/* ERAY_GTUC07_NSS (rw) */
#define ERAY_GTUC07_NSS_POS                  _ERAY_UL(16)
#define ERAY_GTUC07_NSS_LEN                  _ERAY_UL(10)

/* ERAY_GTUC08_MSL (rw) */
#define ERAY_GTUC08_MSL_POS                  _ERAY_UL(0)
#define ERAY_GTUC08_MSL_LEN                  _ERAY_UL(6)

/* ERAY_GTUC08_NMS (rw) */
#define ERAY_GTUC08_NMS_POS                  _ERAY_UL(16)
#define ERAY_GTUC08_NMS_LEN                  _ERAY_UL(13)

/* ERAY_GTUC09_APO (rw) */
#define ERAY_GTUC09_APO_POS                  _ERAY_UL(0)
#define ERAY_GTUC09_APO_LEN                  _ERAY_UL(6)

/* ERAY_GTUC09_MAPO (rw) */
#define ERAY_GTUC09_MAPO_POS                 _ERAY_UL(8)
#define ERAY_GTUC09_MAPO_LEN                 _ERAY_UL(5)

/* ERAY_GTUC09_DSI (rw) */
#define ERAY_GTUC09_DSI_POS                  _ERAY_UL(16)
#define ERAY_GTUC09_DSI_LEN                  _ERAY_UL(2)

/* ERAY_GTUC10_MOC (rw) */
#define ERAY_GTUC10_MOC_POS                  _ERAY_UL(0)
#define ERAY_GTUC10_MOC_LEN                  _ERAY_UL(14)

/* ERAY_GTUC10_MRC (rw) */
#define ERAY_GTUC10_MRC_POS                  _ERAY_UL(16)
#define ERAY_GTUC10_MRC_LEN                  _ERAY_UL(11)

/* ERAY_GTUC11_EOCC (rw) */
#define ERAY_GTUC11_EOCC_POS                 _ERAY_UL(0)
#define ERAY_GTUC11_EOCC_LEN                 _ERAY_UL(2)

/* ERAY_GTUC11_ERCC (rw) */
#define ERAY_GTUC11_ERCC_POS                 _ERAY_UL(8)
#define ERAY_GTUC11_ERCC_LEN                 _ERAY_UL(2)

/* ERAY_GTUC11_EOC (rw) */
#define ERAY_GTUC11_EOC_POS                  _ERAY_UL(16)
#define ERAY_GTUC11_EOC_LEN                  _ERAY_UL(3)

/* ERAY_GTUC11_ERC (rw) */
#define ERAY_GTUC11_ERC_POS                  _ERAY_UL(24)
#define ERAY_GTUC11_ERC_LEN                  _ERAY_UL(3)

/* ERAY_CCSV_POCS (rh) */
#define ERAY_CCSV_POCS_POS                   _ERAY_UL(0)
#define ERAY_CCSV_POCS_LEN                   _ERAY_UL(6)

/* ERAY_CCSV_FSI (rh) */
#define ERAY_CCSV_FSI_POS                    _ERAY_UL(6)
#define ERAY_CCSV_FSI_LEN                    _ERAY_UL(1)

/* ERAY_CCSV_HRQ (rh) */
#define ERAY_CCSV_HRQ_POS                    _ERAY_UL(7)
#define ERAY_CCSV_HRQ_LEN                    _ERAY_UL(1)

/* ERAY_CCSV_SLM (rh) */
#define ERAY_CCSV_SLM_POS                    _ERAY_UL(8)
#define ERAY_CCSV_SLM_LEN                    _ERAY_UL(2)

/* ERAY_CCSV_CSNI (rh) */
#define ERAY_CCSV_CSNI_POS                   _ERAY_UL(12)
#define ERAY_CCSV_CSNI_LEN                   _ERAY_UL(1)

/* ERAY_CCSV_CSAI (rh) */
#define ERAY_CCSV_CSAI_POS                   _ERAY_UL(13)
#define ERAY_CCSV_CSAI_LEN                   _ERAY_UL(1)

/* ERAY_CCSV_CSI (rh) */
#define ERAY_CCSV_CSI_POS                    _ERAY_UL(14)
#define ERAY_CCSV_CSI_LEN                    _ERAY_UL(1)

/* ERAY_CCSV_WSV (rh) */
#define ERAY_CCSV_WSV_POS                    _ERAY_UL(16)
#define ERAY_CCSV_WSV_LEN                    _ERAY_UL(3)

/* ERAY_CCSV_RCA (rh) */
#define ERAY_CCSV_RCA_POS                    _ERAY_UL(19)
#define ERAY_CCSV_RCA_LEN                    _ERAY_UL(5)

/* ERAY_CCSV_PSL (rh) */
#define ERAY_CCSV_PSL_POS                    _ERAY_UL(24)
#define ERAY_CCSV_PSL_LEN                    _ERAY_UL(6)

/* ERAY_CCEV_CCFC (rh) */
#define ERAY_CCEV_CCFC_POS                   _ERAY_UL(0)
#define ERAY_CCEV_CCFC_LEN                   _ERAY_UL(4)

/* ERAY_CCEV_ERRM (rh) */
#define ERAY_CCEV_ERRM_POS                   _ERAY_UL(6)
#define ERAY_CCEV_ERRM_LEN                   _ERAY_UL(2)

/* ERAY_CCEV_PTAC (rh) */
#define ERAY_CCEV_PTAC_POS                   _ERAY_UL(8)
#define ERAY_CCEV_PTAC_LEN                   _ERAY_UL(5)

/* ERAY_SCV_SCCA (rh) */
#define ERAY_SCV_SCCA_POS                    _ERAY_UL(0)
#define ERAY_SCV_SCCA_LEN                    _ERAY_UL(11)

/* ERAY_SCV_SCCB (rh) */
#define ERAY_SCV_SCCB_POS                    _ERAY_UL(16)
#define ERAY_SCV_SCCB_LEN                    _ERAY_UL(11)

/* ERAY_MTCCV_MTV (rh) */
#define ERAY_MTCCV_MTV_POS                   _ERAY_UL(0)
#define ERAY_MTCCV_MTV_LEN                   _ERAY_UL(14)

/* ERAY_MTCCV_CCV (rh) */
#define ERAY_MTCCV_CCV_POS                   _ERAY_UL(16)
#define ERAY_MTCCV_CCV_LEN                   _ERAY_UL(6)

/* ERAY_RCV_RCV (rh) */
#define ERAY_RCV_RCV_POS                     _ERAY_UL(0)
#define ERAY_RCV_RCV_LEN                     _ERAY_UL(12)

/* ERAY_OCV_OCV (rh) */
#define ERAY_OCV_OCV_POS                     _ERAY_UL(0)
#define ERAY_OCV_OCV_LEN                     _ERAY_UL(19)

/* ERAY_SFS_VSAE (rh) */
#define ERAY_SFS_VSAE_POS                    _ERAY_UL(0)
#define ERAY_SFS_VSAE_LEN                    _ERAY_UL(4)

/* ERAY_SFS_VSAO (rh) */
#define ERAY_SFS_VSAO_POS                    _ERAY_UL(4)
#define ERAY_SFS_VSAO_LEN                    _ERAY_UL(4)

/* ERAY_SFS_VSBE (rh) */
#define ERAY_SFS_VSBE_POS                    _ERAY_UL(8)
#define ERAY_SFS_VSBE_LEN                    _ERAY_UL(4)

/* ERAY_SFS_VSBO (rh) */
#define ERAY_SFS_VSBO_POS                    _ERAY_UL(12)
#define ERAY_SFS_VSBO_LEN                    _ERAY_UL(4)

/* ERAY_SFS_MOCS (rh) */
#define ERAY_SFS_MOCS_POS                    _ERAY_UL(16)
#define ERAY_SFS_MOCS_LEN                    _ERAY_UL(1)

/* ERAY_SFS_OCLR (rh) */
#define ERAY_SFS_OCLR_POS                    _ERAY_UL(17)
#define ERAY_SFS_OCLR_LEN                    _ERAY_UL(1)

/* ERAY_SFS_MRCS (rh) */
#define ERAY_SFS_MRCS_POS                    _ERAY_UL(18)
#define ERAY_SFS_MRCS_LEN                    _ERAY_UL(1)

/* ERAY_SFS_RCLR (rh) */
#define ERAY_SFS_RCLR_POS                    _ERAY_UL(19)
#define ERAY_SFS_RCLR_LEN                    _ERAY_UL(1)

/* ERAY_SWNIT_SESA (rh) */
#define ERAY_SWNIT_SESA_POS                  _ERAY_UL(0)
#define ERAY_SWNIT_SESA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SBSA (rh) */
#define ERAY_SWNIT_SBSA_POS                  _ERAY_UL(1)
#define ERAY_SWNIT_SBSA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_TCSA (rh) */
#define ERAY_SWNIT_TCSA_POS                  _ERAY_UL(2)
#define ERAY_SWNIT_TCSA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SESB (rh) */
#define ERAY_SWNIT_SESB_POS                  _ERAY_UL(3)
#define ERAY_SWNIT_SESB_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SBSB (rh) */
#define ERAY_SWNIT_SBSB_POS                  _ERAY_UL(4)
#define ERAY_SWNIT_SBSB_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_TCSB (rh) */
#define ERAY_SWNIT_TCSB_POS                  _ERAY_UL(5)
#define ERAY_SWNIT_TCSB_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_MTSA (rh) */
#define ERAY_SWNIT_MTSA_POS                  _ERAY_UL(6)
#define ERAY_SWNIT_MTSA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_MTSB (rh) */
#define ERAY_SWNIT_MTSB_POS                  _ERAY_UL(7)
#define ERAY_SWNIT_MTSB_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SENA (rh) */
#define ERAY_SWNIT_SENA_POS                  _ERAY_UL(8)
#define ERAY_SWNIT_SENA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SBNA (rh) */
#define ERAY_SWNIT_SBNA_POS                  _ERAY_UL(9)
#define ERAY_SWNIT_SBNA_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SENB (rh) */
#define ERAY_SWNIT_SENB_POS                  _ERAY_UL(10)
#define ERAY_SWNIT_SENB_LEN                  _ERAY_UL(1)

/* ERAY_SWNIT_SBNB (rh) */
#define ERAY_SWNIT_SBNB_POS                  _ERAY_UL(11)
#define ERAY_SWNIT_SBNB_LEN                  _ERAY_UL(1)

/* ERAY_ACS_VFRA (rwh) */
#define ERAY_ACS_VFRA_POS                    _ERAY_UL(0)
#define ERAY_ACS_VFRA_LEN                    _ERAY_UL(1)

/* ERAY_ACS_SEDA (rwh) */
#define ERAY_ACS_SEDA_POS                    _ERAY_UL(1)
#define ERAY_ACS_SEDA_LEN                    _ERAY_UL(1)

/* ERAY_ACS_CEDA (rwh) */
#define ERAY_ACS_CEDA_POS                    _ERAY_UL(2)
#define ERAY_ACS_CEDA_LEN                    _ERAY_UL(1)

/* ERAY_ACS_CIA (rwh) */
#define ERAY_ACS_CIA_POS                     _ERAY_UL(3)
#define ERAY_ACS_CIA_LEN                     _ERAY_UL(1)

/* ERAY_ACS_SBVA (rwh) */
#define ERAY_ACS_SBVA_POS                    _ERAY_UL(4)
#define ERAY_ACS_SBVA_LEN                    _ERAY_UL(1)

/* ERAY_ACS_VFRB (rwh) */
#define ERAY_ACS_VFRB_POS                    _ERAY_UL(8)
#define ERAY_ACS_VFRB_LEN                    _ERAY_UL(1)

/* ERAY_ACS_SEDB (rwh) */
#define ERAY_ACS_SEDB_POS                    _ERAY_UL(9)
#define ERAY_ACS_SEDB_LEN                    _ERAY_UL(1)

/* ERAY_ACS_CEDB (rwh) */
#define ERAY_ACS_CEDB_POS                    _ERAY_UL(10)
#define ERAY_ACS_CEDB_LEN                    _ERAY_UL(1)

/* ERAY_ACS_CIB (rwh) */
#define ERAY_ACS_CIB_POS                     _ERAY_UL(11)
#define ERAY_ACS_CIB_LEN                     _ERAY_UL(1)

/* ERAY_ACS_SBVB (rwh) */
#define ERAY_ACS_SBVB_POS                    _ERAY_UL(12)
#define ERAY_ACS_SBVB_LEN                    _ERAY_UL(1)

/* ERAY_ESID01_EID (rh) */
#define ERAY_ESID01_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID01_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID01_RXEA (rh) */
#define ERAY_ESID01_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID01_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID01_RXEB (rh) */
#define ERAY_ESID01_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID01_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID02_EID (rh) */
#define ERAY_ESID02_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID02_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID02_RXEA (rh) */
#define ERAY_ESID02_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID02_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID02_RXEB (rh) */
#define ERAY_ESID02_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID02_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID03_EID (rh) */
#define ERAY_ESID03_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID03_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID03_RXEA (rh) */
#define ERAY_ESID03_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID03_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID03_RXEB (rh) */
#define ERAY_ESID03_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID03_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID04_EID (rh) */
#define ERAY_ESID04_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID04_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID04_RXEA (rh) */
#define ERAY_ESID04_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID04_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID04_RXEB (rh) */
#define ERAY_ESID04_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID04_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID05_EID (rh) */
#define ERAY_ESID05_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID05_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID05_RXEA (rh) */
#define ERAY_ESID05_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID05_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID05_RXEB (rh) */
#define ERAY_ESID05_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID05_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID06_EID (rh) */
#define ERAY_ESID06_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID06_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID06_RXEA (rh) */
#define ERAY_ESID06_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID06_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID06_RXEB (rh) */
#define ERAY_ESID06_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID06_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID07_EID (rh) */
#define ERAY_ESID07_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID07_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID07_RXEA (rh) */
#define ERAY_ESID07_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID07_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID07_RXEB (rh) */
#define ERAY_ESID07_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID07_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID08_EID (rh) */
#define ERAY_ESID08_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID08_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID08_RXEA (rh) */
#define ERAY_ESID08_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID08_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID08_RXEB (rh) */
#define ERAY_ESID08_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID08_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID09_EID (rh) */
#define ERAY_ESID09_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID09_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID09_RXEA (rh) */
#define ERAY_ESID09_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID09_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID09_RXEB (rh) */
#define ERAY_ESID09_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID09_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID10_EID (rh) */
#define ERAY_ESID10_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID10_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID10_RXEA (rh) */
#define ERAY_ESID10_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID10_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID10_RXEB (rh) */
#define ERAY_ESID10_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID10_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID11_EID (rh) */
#define ERAY_ESID11_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID11_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID11_RXEA (rh) */
#define ERAY_ESID11_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID11_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID11_RXEB (rh) */
#define ERAY_ESID11_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID11_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID12_EID (rh) */
#define ERAY_ESID12_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID12_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID12_RXEA (rh) */
#define ERAY_ESID12_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID12_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID12_RXEB (rh) */
#define ERAY_ESID12_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID12_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID13_EID (rh) */
#define ERAY_ESID13_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID13_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID13_RXEA (rh) */
#define ERAY_ESID13_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID13_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID13_RXEB (rh) */
#define ERAY_ESID13_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID13_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID14_EID (rh) */
#define ERAY_ESID14_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID14_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID14_RXEA (rh) */
#define ERAY_ESID14_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID14_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID14_RXEB (rh) */
#define ERAY_ESID14_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID14_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_ESID15_EID (rh) */
#define ERAY_ESID15_EID_POS                  _ERAY_UL(0)
#define ERAY_ESID15_EID_LEN                  _ERAY_UL(10)

/* ERAY_ESID15_RXEA (rh) */
#define ERAY_ESID15_RXEA_POS                 _ERAY_UL(14)
#define ERAY_ESID15_RXEA_LEN                 _ERAY_UL(1)

/* ERAY_ESID15_RXEB (rh) */
#define ERAY_ESID15_RXEB_POS                 _ERAY_UL(15)
#define ERAY_ESID15_RXEB_LEN                 _ERAY_UL(1)

/* ERAY_OSID01_OID (rh) */
#define ERAY_OSID01_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID01_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID01_RXOA (rh) */
#define ERAY_OSID01_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID01_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID01_RXOB (rh) */
#define ERAY_OSID01_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID01_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID02_OID (rh) */
#define ERAY_OSID02_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID02_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID02_RXOA (rh) */
#define ERAY_OSID02_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID02_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID02_RXOB (rh) */
#define ERAY_OSID02_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID02_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID03_OID (rh) */
#define ERAY_OSID03_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID03_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID03_RXOA (rh) */
#define ERAY_OSID03_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID03_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID03_RXOB (rh) */
#define ERAY_OSID03_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID03_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID04_OID (rh) */
#define ERAY_OSID04_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID04_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID04_RXOA (rh) */
#define ERAY_OSID04_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID04_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID04_RXOB (rh) */
#define ERAY_OSID04_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID04_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID05_OID (rh) */
#define ERAY_OSID05_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID05_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID05_RXOA (rh) */
#define ERAY_OSID05_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID05_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID05_RXOB (rh) */
#define ERAY_OSID05_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID05_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID06_OID (rh) */
#define ERAY_OSID06_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID06_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID06_RXOA (rh) */
#define ERAY_OSID06_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID06_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID06_RXOB (rh) */
#define ERAY_OSID06_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID06_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID07_OID (rh) */
#define ERAY_OSID07_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID07_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID07_RXOA (rh) */
#define ERAY_OSID07_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID07_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID07_RXOB (rh) */
#define ERAY_OSID07_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID07_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID08_OID (rh) */
#define ERAY_OSID08_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID08_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID08_RXOA (rh) */
#define ERAY_OSID08_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID08_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID08_RXOB (rh) */
#define ERAY_OSID08_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID08_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID09_OID (rh) */
#define ERAY_OSID09_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID09_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID09_RXOA (rh) */
#define ERAY_OSID09_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID09_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID09_RXOB (rh) */
#define ERAY_OSID09_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID09_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID10_OID (rh) */
#define ERAY_OSID10_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID10_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID10_RXOA (rh) */
#define ERAY_OSID10_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID10_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID10_RXOB (rh) */
#define ERAY_OSID10_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID10_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID11_OID (rh) */
#define ERAY_OSID11_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID11_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID11_RXOA (rh) */
#define ERAY_OSID11_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID11_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID11_RXOB (rh) */
#define ERAY_OSID11_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID11_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID12_OID (rh) */
#define ERAY_OSID12_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID12_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID12_RXOA (rh) */
#define ERAY_OSID12_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID12_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID12_RXOB (rh) */
#define ERAY_OSID12_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID12_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID13_OID (rh) */
#define ERAY_OSID13_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID13_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID13_RXOA (rh) */
#define ERAY_OSID13_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID13_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID13_RXOB (rh) */
#define ERAY_OSID13_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID13_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID14_OID (rh) */
#define ERAY_OSID14_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID14_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID14_RXOA (rh) */
#define ERAY_OSID14_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID14_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID14_RXOB (rh) */
#define ERAY_OSID14_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID14_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_OSID15_OID (rh) */
#define ERAY_OSID15_OID_POS                  _ERAY_UL(0)
#define ERAY_OSID15_OID_LEN                  _ERAY_UL(10)

/* ERAY_OSID15_RXOA (rh) */
#define ERAY_OSID15_RXOA_POS                 _ERAY_UL(14)
#define ERAY_OSID15_RXOA_LEN                 _ERAY_UL(1)

/* ERAY_OSID15_RXOB (rh) */
#define ERAY_OSID15_RXOB_POS                 _ERAY_UL(15)
#define ERAY_OSID15_RXOB_LEN                 _ERAY_UL(1)

/* ERAY_NMV1_NM (rh) */
#define ERAY_NMV1_NM_POS                     _ERAY_UL(0)
#define ERAY_NMV1_NM_LEN                     _ERAY_UL(32)

/* ERAY_NMV2_NM (rh) */
#define ERAY_NMV2_NM_POS                     _ERAY_UL(0)
#define ERAY_NMV2_NM_LEN                     _ERAY_UL(32)

/* ERAY_NMV3_NM (rh) */
#define ERAY_NMV3_NM_POS                     _ERAY_UL(0)
#define ERAY_NMV3_NM_LEN                     _ERAY_UL(32)

/* ERAY_MRC_FDB (rw) */
#define ERAY_MRC_FDB_POS                     _ERAY_UL(0)
#define ERAY_MRC_FDB_LEN                     _ERAY_UL(8)

/* ERAY_MRC_FFB (rw) */
#define ERAY_MRC_FFB_POS                     _ERAY_UL(8)
#define ERAY_MRC_FFB_LEN                     _ERAY_UL(8)

/* ERAY_MRC_LCB (rw) */
#define ERAY_MRC_LCB_POS                     _ERAY_UL(16)
#define ERAY_MRC_LCB_LEN                     _ERAY_UL(8)

/* ERAY_MRC_SEC (rw) */
#define ERAY_MRC_SEC_POS                     _ERAY_UL(24)
#define ERAY_MRC_SEC_LEN                     _ERAY_UL(2)

/* ERAY_MRC_SPLM (rw) */
#define ERAY_MRC_SPLM_POS                    _ERAY_UL(26)
#define ERAY_MRC_SPLM_LEN                    _ERAY_UL(1)

/* ERAY_FRF_CH (rw) */
#define ERAY_FRF_CH_POS                      _ERAY_UL(0)
#define ERAY_FRF_CH_LEN                      _ERAY_UL(2)

/* ERAY_FRF_FID (rw) */
#define ERAY_FRF_FID_POS                     _ERAY_UL(2)
#define ERAY_FRF_FID_LEN                     _ERAY_UL(11)

/* ERAY_FRF_CYF (rw) */
#define ERAY_FRF_CYF_POS                     _ERAY_UL(16)
#define ERAY_FRF_CYF_LEN                     _ERAY_UL(7)

/* ERAY_FRF_RSS (rw) */
#define ERAY_FRF_RSS_POS                     _ERAY_UL(23)
#define ERAY_FRF_RSS_LEN                     _ERAY_UL(1)

/* ERAY_FRF_RNF (rw) */
#define ERAY_FRF_RNF_POS                     _ERAY_UL(24)
#define ERAY_FRF_RNF_LEN                     _ERAY_UL(1)

/* ERAY_FRFM_MFID (rw) */
#define ERAY_FRFM_MFID_POS                   _ERAY_UL(2)
#define ERAY_FRFM_MFID_LEN                   _ERAY_UL(11)

/* ERAY_FCL_CL (rw) */
#define ERAY_FCL_CL_POS                      _ERAY_UL(0)
#define ERAY_FCL_CL_LEN                      _ERAY_UL(8)

/* ERAY_MHDS_EIBF (rwh) */
#define ERAY_MHDS_EIBF_POS                   _ERAY_UL(0)
#define ERAY_MHDS_EIBF_LEN                   _ERAY_UL(1)

/* ERAY_MHDS_EOBF (rwh) */
#define ERAY_MHDS_EOBF_POS                   _ERAY_UL(1)
#define ERAY_MHDS_EOBF_LEN                   _ERAY_UL(1)

/* ERAY_MHDS_EMR (rwh) */
#define ERAY_MHDS_EMR_POS                    _ERAY_UL(2)
#define ERAY_MHDS_EMR_LEN                    _ERAY_UL(1)

/* ERAY_MHDS_ETBF1 (rwh) */
#define ERAY_MHDS_ETBF1_POS                  _ERAY_UL(3)
#define ERAY_MHDS_ETBF1_LEN                  _ERAY_UL(1)

/* ERAY_MHDS_ETBF2 (rwh) */
#define ERAY_MHDS_ETBF2_POS                  _ERAY_UL(4)
#define ERAY_MHDS_ETBF2_LEN                  _ERAY_UL(1)

/* ERAY_MHDS_FMBD (rwh) */
#define ERAY_MHDS_FMBD_POS                   _ERAY_UL(5)
#define ERAY_MHDS_FMBD_LEN                   _ERAY_UL(1)

/* ERAY_MHDS_MFMB (rwh) */
#define ERAY_MHDS_MFMB_POS                   _ERAY_UL(6)
#define ERAY_MHDS_MFMB_LEN                   _ERAY_UL(1)

/* ERAY_MHDS_CRAM (rh) */
#define ERAY_MHDS_CRAM_POS                   _ERAY_UL(7)
#define ERAY_MHDS_CRAM_LEN                   _ERAY_UL(1)

/* ERAY_MHDS_FMB (rh) */
#define ERAY_MHDS_FMB_POS                    _ERAY_UL(8)
#define ERAY_MHDS_FMB_LEN                    _ERAY_UL(7)

/* ERAY_MHDS_MBT (rh) */
#define ERAY_MHDS_MBT_POS                    _ERAY_UL(16)
#define ERAY_MHDS_MBT_LEN                    _ERAY_UL(7)

/* ERAY_MHDS_MBU (rh) */
#define ERAY_MHDS_MBU_POS                    _ERAY_UL(24)
#define ERAY_MHDS_MBU_LEN                    _ERAY_UL(7)

/* ERAY_LDTS_LDTA (rh) */
#define ERAY_LDTS_LDTA_POS                   _ERAY_UL(0)
#define ERAY_LDTS_LDTA_LEN                   _ERAY_UL(11)

/* ERAY_LDTS_LDTB (rh) */
#define ERAY_LDTS_LDTB_POS                   _ERAY_UL(16)
#define ERAY_LDTS_LDTB_LEN                   _ERAY_UL(11)

/* ERAY_FSR_RFNE (rh) */
#define ERAY_FSR_RFNE_POS                    _ERAY_UL(0)
#define ERAY_FSR_RFNE_LEN                    _ERAY_UL(1)

/* ERAY_FSR_RFCL (rh) */
#define ERAY_FSR_RFCL_POS                    _ERAY_UL(1)
#define ERAY_FSR_RFCL_LEN                    _ERAY_UL(1)

/* ERAY_FSR_RFO (rh) */
#define ERAY_FSR_RFO_POS                     _ERAY_UL(2)
#define ERAY_FSR_RFO_LEN                     _ERAY_UL(1)

/* ERAY_FSR_RFFL (rh) */
#define ERAY_FSR_RFFL_POS                    _ERAY_UL(8)
#define ERAY_FSR_RFFL_LEN                    _ERAY_UL(8)

/* ERAY_MHDF_SNUA (rwh) */
#define ERAY_MHDF_SNUA_POS                   _ERAY_UL(0)
#define ERAY_MHDF_SNUA_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_SNUB (rwh) */
#define ERAY_MHDF_SNUB_POS                   _ERAY_UL(1)
#define ERAY_MHDF_SNUB_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_FNFA (rwh) */
#define ERAY_MHDF_FNFA_POS                   _ERAY_UL(2)
#define ERAY_MHDF_FNFA_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_FNFB (rwh) */
#define ERAY_MHDF_FNFB_POS                   _ERAY_UL(3)
#define ERAY_MHDF_FNFB_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_TBFA (rwh) */
#define ERAY_MHDF_TBFA_POS                   _ERAY_UL(4)
#define ERAY_MHDF_TBFA_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_TBFB (rwh) */
#define ERAY_MHDF_TBFB_POS                   _ERAY_UL(5)
#define ERAY_MHDF_TBFB_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_TNSA (rwh) */
#define ERAY_MHDF_TNSA_POS                   _ERAY_UL(6)
#define ERAY_MHDF_TNSA_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_TNSB (rwh) */
#define ERAY_MHDF_TNSB_POS                   _ERAY_UL(7)
#define ERAY_MHDF_TNSB_LEN                   _ERAY_UL(1)

/* ERAY_MHDF_WAHP (rwh) */
#define ERAY_MHDF_WAHP_POS                   _ERAY_UL(8)
#define ERAY_MHDF_WAHP_LEN                   _ERAY_UL(1)

/* ERAY_IBUSYSRC_SRPN (rw) */
#define ERAY_IBUSYSRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_IBUSYSRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_IBUSYSRC_TOS (rw) */
#define ERAY_IBUSYSRC_TOS_POS                _ERAY_UL(10)
#define ERAY_IBUSYSRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_IBUSYSRC_SRE (rw) */
#define ERAY_IBUSYSRC_SRE_POS                _ERAY_UL(12)
#define ERAY_IBUSYSRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_IBUSYSRC_SRR (rh) */
#define ERAY_IBUSYSRC_SRR_POS                _ERAY_UL(13)
#define ERAY_IBUSYSRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_IBUSYSRC_CLRR (w) */
#define ERAY_IBUSYSRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_IBUSYSRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_IBUSYSRC_SETR (w) */
#define ERAY_IBUSYSRC_SETR_POS               _ERAY_UL(15)
#define ERAY_IBUSYSRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_OBUSYSRC_SRPN (rw) */
#define ERAY_OBUSYSRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_OBUSYSRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_OBUSYSRC_TOS (rw) */
#define ERAY_OBUSYSRC_TOS_POS                _ERAY_UL(10)
#define ERAY_OBUSYSRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_OBUSYSRC_SRE (rw) */
#define ERAY_OBUSYSRC_SRE_POS                _ERAY_UL(12)
#define ERAY_OBUSYSRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_OBUSYSRC_SRR (rh) */
#define ERAY_OBUSYSRC_SRR_POS                _ERAY_UL(13)
#define ERAY_OBUSYSRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_OBUSYSRC_CLRR (w) */
#define ERAY_OBUSYSRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_OBUSYSRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_OBUSYSRC_SETR (w) */
#define ERAY_OBUSYSRC_SETR_POS               _ERAY_UL(15)
#define ERAY_OBUSYSRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_MBSC1SRC_SRPN (rw) */
#define ERAY_MBSC1SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_MBSC1SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_MBSC1SRC_TOS (rw) */
#define ERAY_MBSC1SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_MBSC1SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_MBSC1SRC_SRE (rw) */
#define ERAY_MBSC1SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_MBSC1SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_MBSC1SRC_SRR (rh) */
#define ERAY_MBSC1SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_MBSC1SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_MBSC1SRC_CLRR (w) */
#define ERAY_MBSC1SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_MBSC1SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_MBSC1SRC_SETR (w) */
#define ERAY_MBSC1SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_MBSC1SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_MBSC0SRC_SRPN (rw) */
#define ERAY_MBSC0SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_MBSC0SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_MBSC0SRC_TOS (rw) */
#define ERAY_MBSC0SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_MBSC0SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_MBSC0SRC_SRE (rw) */
#define ERAY_MBSC0SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_MBSC0SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_MBSC0SRC_SRR (rh) */
#define ERAY_MBSC0SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_MBSC0SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_MBSC0SRC_CLRR (w) */
#define ERAY_MBSC0SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_MBSC0SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_MBSC0SRC_SETR (w) */
#define ERAY_MBSC0SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_MBSC0SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_NDAT1SRC_SRPN (rw) */
#define ERAY_NDAT1SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_NDAT1SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_NDAT1SRC_TOS (rw) */
#define ERAY_NDAT1SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_NDAT1SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_NDAT1SRC_SRE (rw) */
#define ERAY_NDAT1SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_NDAT1SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_NDAT1SRC_SRR (rh) */
#define ERAY_NDAT1SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_NDAT1SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_NDAT1SRC_CLRR (w) */
#define ERAY_NDAT1SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_NDAT1SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_NDAT1SRC_SETR (w) */
#define ERAY_NDAT1SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_NDAT1SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_NDAT0SRC_SRPN (rw) */
#define ERAY_NDAT0SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_NDAT0SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_NDAT0SRC_TOS (rw) */
#define ERAY_NDAT0SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_NDAT0SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_NDAT0SRC_SRE (rw) */
#define ERAY_NDAT0SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_NDAT0SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_NDAT0SRC_SRR (rh) */
#define ERAY_NDAT0SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_NDAT0SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_NDAT0SRC_CLRR (w) */
#define ERAY_NDAT0SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_NDAT0SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_NDAT0SRC_SETR (w) */
#define ERAY_NDAT0SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_NDAT0SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_TINT1SRC_SRPN (rw) */
#define ERAY_TINT1SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_TINT1SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_TINT1SRC_TOS (rw) */
#define ERAY_TINT1SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_TINT1SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_TINT1SRC_SRE (rw) */
#define ERAY_TINT1SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_TINT1SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_TINT1SRC_SRR (rh) */
#define ERAY_TINT1SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_TINT1SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_TINT1SRC_CLRR (w) */
#define ERAY_TINT1SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_TINT1SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_TINT1SRC_SETR (w) */
#define ERAY_TINT1SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_TINT1SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_TINT0SRC_SRPN (rw) */
#define ERAY_TINT0SRC_SRPN_POS               _ERAY_UL(0)
#define ERAY_TINT0SRC_SRPN_LEN               _ERAY_UL(8)

/* ERAY_TINT0SRC_TOS (rw) */
#define ERAY_TINT0SRC_TOS_POS                _ERAY_UL(10)
#define ERAY_TINT0SRC_TOS_LEN                _ERAY_UL(1)

/* ERAY_TINT0SRC_SRE (rw) */
#define ERAY_TINT0SRC_SRE_POS                _ERAY_UL(12)
#define ERAY_TINT0SRC_SRE_LEN                _ERAY_UL(1)

/* ERAY_TINT0SRC_SRR (rh) */
#define ERAY_TINT0SRC_SRR_POS                _ERAY_UL(13)
#define ERAY_TINT0SRC_SRR_LEN                _ERAY_UL(1)

/* ERAY_TINT0SRC_CLRR (w) */
#define ERAY_TINT0SRC_CLRR_POS               _ERAY_UL(14)
#define ERAY_TINT0SRC_CLRR_LEN               _ERAY_UL(1)

/* ERAY_TINT0SRC_SETR (w) */
#define ERAY_TINT0SRC_SETR_POS               _ERAY_UL(15)
#define ERAY_TINT0SRC_SETR_LEN               _ERAY_UL(1)

/* ERAY_INT1SRC_SRPN (rw) */
#define ERAY_INT1SRC_SRPN_POS                _ERAY_UL(0)
#define ERAY_INT1SRC_SRPN_LEN                _ERAY_UL(8)

/* ERAY_INT1SRC_TOS (rw) */
#define ERAY_INT1SRC_TOS_POS                 _ERAY_UL(10)
#define ERAY_INT1SRC_TOS_LEN                 _ERAY_UL(1)

/* ERAY_INT1SRC_SRE (rw) */
#define ERAY_INT1SRC_SRE_POS                 _ERAY_UL(12)
#define ERAY_INT1SRC_SRE_LEN                 _ERAY_UL(1)

/* ERAY_INT1SRC_SRR (rh) */
#define ERAY_INT1SRC_SRR_POS                 _ERAY_UL(13)
#define ERAY_INT1SRC_SRR_LEN                 _ERAY_UL(1)

/* ERAY_INT1SRC_CLRR (w) */
#define ERAY_INT1SRC_CLRR_POS                _ERAY_UL(14)
#define ERAY_INT1SRC_CLRR_LEN                _ERAY_UL(1)

/* ERAY_INT1SRC_SETR (w) */
#define ERAY_INT1SRC_SETR_POS                _ERAY_UL(15)
#define ERAY_INT1SRC_SETR_LEN                _ERAY_UL(1)

/* ERAY_INT0SRC_SRPN (rw) */
#define ERAY_INT0SRC_SRPN_POS                _ERAY_UL(0)
#define ERAY_INT0SRC_SRPN_LEN                _ERAY_UL(8)

/* ERAY_INT0SRC_TOS (rw) */
#define ERAY_INT0SRC_TOS_POS                 _ERAY_UL(10)
#define ERAY_INT0SRC_TOS_LEN                 _ERAY_UL(1)

/* ERAY_INT0SRC_SRE (rw) */
#define ERAY_INT0SRC_SRE_POS                 _ERAY_UL(12)
#define ERAY_INT0SRC_SRE_LEN                 _ERAY_UL(1)

/* ERAY_INT0SRC_SRR (rh) */
#define ERAY_INT0SRC_SRR_POS                 _ERAY_UL(13)
#define ERAY_INT0SRC_SRR_LEN                 _ERAY_UL(1)

/* ERAY_INT0SRC_CLRR (w) */
#define ERAY_INT0SRC_CLRR_POS                _ERAY_UL(14)
#define ERAY_INT0SRC_CLRR_LEN                _ERAY_UL(1)

/* ERAY_INT0SRC_SETR (w) */
#define ERAY_INT0SRC_SETR_POS                _ERAY_UL(15)
#define ERAY_INT0SRC_SETR_LEN                _ERAY_UL(1)

/* ERAY_CREL_DAY (r) */
#define ERAY_CREL_DAY_POS                    _ERAY_UL(0)
#define ERAY_CREL_DAY_LEN                    _ERAY_UL(8)

/* ERAY_CREL_MON (r) */
#define ERAY_CREL_MON_POS                    _ERAY_UL(8)
#define ERAY_CREL_MON_LEN                    _ERAY_UL(8)

/* ERAY_CREL_YEAR (r) */
#define ERAY_CREL_YEAR_POS                   _ERAY_UL(16)
#define ERAY_CREL_YEAR_LEN                   _ERAY_UL(4)

/* ERAY_CREL_STEP (r) */
#define ERAY_CREL_STEP_POS                   _ERAY_UL(24)
#define ERAY_CREL_STEP_LEN                   _ERAY_UL(4)

/* ERAY_CREL_REL (r) */
#define ERAY_CREL_REL_POS                    _ERAY_UL(28)
#define ERAY_CREL_REL_LEN                    _ERAY_UL(4)

/* ERAY_CREL_SUBSTEP (r) */
#define ERAY_CREL_SUBSTEP_POS                _ERAY_UL(24)
#define ERAY_CREL_SUBSTEP_LEN                _ERAY_UL(4)

/* ERAY_ENDN_ETV (r) */
#define ERAY_ENDN_ETV_POS                    _ERAY_UL(0)
#define ERAY_ENDN_ETV_LEN                    _ERAY_UL(32)

/* ERAY_WRHS1_FID (rw) */
#define ERAY_WRHS1_FID_POS                   _ERAY_UL(0)
#define ERAY_WRHS1_FID_LEN                   _ERAY_UL(11)

/* ERAY_WRHS1_CYC (rw) */
#define ERAY_WRHS1_CYC_POS                   _ERAY_UL(16)
#define ERAY_WRHS1_CYC_LEN                   _ERAY_UL(7)

/* ERAY_WRHS1_CHA (rw) */
#define ERAY_WRHS1_CHA_POS                   _ERAY_UL(24)
#define ERAY_WRHS1_CHA_LEN                   _ERAY_UL(1)

/* ERAY_WRHS1_CHB (rw) */
#define ERAY_WRHS1_CHB_POS                   _ERAY_UL(25)
#define ERAY_WRHS1_CHB_LEN                   _ERAY_UL(1)

/* ERAY_WRHS1_CFG (rw) */
#define ERAY_WRHS1_CFG_POS                   _ERAY_UL(26)
#define ERAY_WRHS1_CFG_LEN                   _ERAY_UL(1)

/* ERAY_WRHS1_PPIT (rw) */
#define ERAY_WRHS1_PPIT_POS                  _ERAY_UL(27)
#define ERAY_WRHS1_PPIT_LEN                  _ERAY_UL(1)

/* ERAY_WRHS1_TXM (rw) */
#define ERAY_WRHS1_TXM_POS                   _ERAY_UL(28)
#define ERAY_WRHS1_TXM_LEN                   _ERAY_UL(1)

/* ERAY_WRHS1_MBI (rw) */
#define ERAY_WRHS1_MBI_POS                   _ERAY_UL(29)
#define ERAY_WRHS1_MBI_LEN                   _ERAY_UL(1)

/* ERAY_WRHS2_CRC (rw) */
#define ERAY_WRHS2_CRC_POS                   _ERAY_UL(0)
#define ERAY_WRHS2_CRC_LEN                   _ERAY_UL(11)

/* ERAY_WRHS2_PLC (rw) */
#define ERAY_WRHS2_PLC_POS                   _ERAY_UL(16)
#define ERAY_WRHS2_PLC_LEN                   _ERAY_UL(7)

/* ERAY_WRHS3_DP (rw) */
#define ERAY_WRHS3_DP_POS                    _ERAY_UL(0)
#define ERAY_WRHS3_DP_LEN                    _ERAY_UL(11)

/* ERAY_IBCM_LHSH (rwh) */
#define ERAY_IBCM_LHSH_POS                   _ERAY_UL(0)
#define ERAY_IBCM_LHSH_LEN                   _ERAY_UL(1)

/* ERAY_IBCM_LDSH (rwh) */
#define ERAY_IBCM_LDSH_POS                   _ERAY_UL(1)
#define ERAY_IBCM_LDSH_LEN                   _ERAY_UL(1)

/* ERAY_IBCM_STXRH (rwh) */
#define ERAY_IBCM_STXRH_POS                  _ERAY_UL(2)
#define ERAY_IBCM_STXRH_LEN                  _ERAY_UL(1)

/* ERAY_IBCM_LHSS (rh) */
#define ERAY_IBCM_LHSS_POS                   _ERAY_UL(16)
#define ERAY_IBCM_LHSS_LEN                   _ERAY_UL(1)

/* ERAY_IBCM_LDSS (rh) */
#define ERAY_IBCM_LDSS_POS                   _ERAY_UL(17)
#define ERAY_IBCM_LDSS_LEN                   _ERAY_UL(1)

/* ERAY_IBCM_STXRS (rh) */
#define ERAY_IBCM_STXRS_POS                  _ERAY_UL(18)
#define ERAY_IBCM_STXRS_LEN                  _ERAY_UL(1)

/* ERAY_IBCR_IBRH (rwh) */
#define ERAY_IBCR_IBRH_POS                   _ERAY_UL(0)
#define ERAY_IBCR_IBRH_LEN                   _ERAY_UL(7)

/* ERAY_IBCR_IBSYH (rh) */
#define ERAY_IBCR_IBSYH_POS                  _ERAY_UL(15)
#define ERAY_IBCR_IBSYH_LEN                  _ERAY_UL(1)

/* ERAY_IBCR_IBRS (rh) */
#define ERAY_IBCR_IBRS_POS                   _ERAY_UL(16)
#define ERAY_IBCR_IBRS_LEN                   _ERAY_UL(7)

/* ERAY_IBCR_IBSYS (rh) */
#define ERAY_IBCR_IBSYS_POS                  _ERAY_UL(31)
#define ERAY_IBCR_IBSYS_LEN                  _ERAY_UL(1)

/* ERAY_RDHS1_FID (rh) */
#define ERAY_RDHS1_FID_POS                   _ERAY_UL(0)
#define ERAY_RDHS1_FID_LEN                   _ERAY_UL(11)

/* ERAY_RDHS1_CYC (rh) */
#define ERAY_RDHS1_CYC_POS                   _ERAY_UL(16)
#define ERAY_RDHS1_CYC_LEN                   _ERAY_UL(7)

/* ERAY_RDHS1_CHA (rh) */
#define ERAY_RDHS1_CHA_POS                   _ERAY_UL(24)
#define ERAY_RDHS1_CHA_LEN                   _ERAY_UL(1)

/* ERAY_RDHS1_CHB (rh) */
#define ERAY_RDHS1_CHB_POS                   _ERAY_UL(25)
#define ERAY_RDHS1_CHB_LEN                   _ERAY_UL(1)

/* ERAY_RDHS1_CFG (rh) */
#define ERAY_RDHS1_CFG_POS                   _ERAY_UL(26)
#define ERAY_RDHS1_CFG_LEN                   _ERAY_UL(1)

/* ERAY_RDHS1_PPIT (rh) */
#define ERAY_RDHS1_PPIT_POS                  _ERAY_UL(27)
#define ERAY_RDHS1_PPIT_LEN                  _ERAY_UL(1)

/* ERAY_RDHS1_TXM (rh) */
#define ERAY_RDHS1_TXM_POS                   _ERAY_UL(28)
#define ERAY_RDHS1_TXM_LEN                   _ERAY_UL(1)

/* ERAY_RDHS1_MBI (rh) */
#define ERAY_RDHS1_MBI_POS                   _ERAY_UL(29)
#define ERAY_RDHS1_MBI_LEN                   _ERAY_UL(1)

/* ERAY_RDHS2_CRC (rh) */
#define ERAY_RDHS2_CRC_POS                   _ERAY_UL(0)
#define ERAY_RDHS2_CRC_LEN                   _ERAY_UL(11)

/* ERAY_RDHS2_PLC (rh) */
#define ERAY_RDHS2_PLC_POS                   _ERAY_UL(16)
#define ERAY_RDHS2_PLC_LEN                   _ERAY_UL(7)

/* ERAY_RDHS2_PLR (rh) */
#define ERAY_RDHS2_PLR_POS                   _ERAY_UL(24)
#define ERAY_RDHS2_PLR_LEN                   _ERAY_UL(7)

/* ERAY_RDHS3_DP (rh) */
#define ERAY_RDHS3_DP_POS                    _ERAY_UL(0)
#define ERAY_RDHS3_DP_LEN                    _ERAY_UL(11)

/* ERAY_RDHS3_RCC (rh) */
#define ERAY_RDHS3_RCC_POS                   _ERAY_UL(16)
#define ERAY_RDHS3_RCC_LEN                   _ERAY_UL(6)

/* ERAY_RDHS3_RCI (rh) */
#define ERAY_RDHS3_RCI_POS                   _ERAY_UL(24)
#define ERAY_RDHS3_RCI_LEN                   _ERAY_UL(1)

/* ERAY_RDHS3_SFI (rh) */
#define ERAY_RDHS3_SFI_POS                   _ERAY_UL(25)
#define ERAY_RDHS3_SFI_LEN                   _ERAY_UL(1)

/* ERAY_RDHS3_SYN (rh) */
#define ERAY_RDHS3_SYN_POS                   _ERAY_UL(26)
#define ERAY_RDHS3_SYN_LEN                   _ERAY_UL(1)

/* ERAY_RDHS3_NFI (rh) */
#define ERAY_RDHS3_NFI_POS                   _ERAY_UL(27)
#define ERAY_RDHS3_NFI_LEN                   _ERAY_UL(1)

/* ERAY_RDHS3_PPI (rh) */
#define ERAY_RDHS3_PPI_POS                   _ERAY_UL(28)
#define ERAY_RDHS3_PPI_LEN                   _ERAY_UL(1)

/* ERAY_RDHS3_RES (rh) */
#define ERAY_RDHS3_RES_POS                   _ERAY_UL(29)
#define ERAY_RDHS3_RES_LEN                   _ERAY_UL(1)

/* ERAY_MBS_VFRA (rh) */
#define ERAY_MBS_VFRA_POS                    _ERAY_UL(0)
#define ERAY_MBS_VFRA_LEN                    _ERAY_UL(1)

/* ERAY_MBS_VFRB (rh) */
#define ERAY_MBS_VFRB_POS                    _ERAY_UL(1)
#define ERAY_MBS_VFRB_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SEOA (rh) */
#define ERAY_MBS_SEOA_POS                    _ERAY_UL(2)
#define ERAY_MBS_SEOA_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SEOB (rh) */
#define ERAY_MBS_SEOB_POS                    _ERAY_UL(3)
#define ERAY_MBS_SEOB_LEN                    _ERAY_UL(1)

/* ERAY_MBS_CEOA (rh) */
#define ERAY_MBS_CEOA_POS                    _ERAY_UL(4)
#define ERAY_MBS_CEOA_LEN                    _ERAY_UL(1)

/* ERAY_MBS_CEOB (rh) */
#define ERAY_MBS_CEOB_POS                    _ERAY_UL(5)
#define ERAY_MBS_CEOB_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SVOA (rh) */
#define ERAY_MBS_SVOA_POS                    _ERAY_UL(6)
#define ERAY_MBS_SVOA_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SVOB (rh) */
#define ERAY_MBS_SVOB_POS                    _ERAY_UL(7)
#define ERAY_MBS_SVOB_LEN                    _ERAY_UL(1)

/* ERAY_MBS_TCIA (rh) */
#define ERAY_MBS_TCIA_POS                    _ERAY_UL(8)
#define ERAY_MBS_TCIA_LEN                    _ERAY_UL(1)

/* ERAY_MBS_TCIB (rh) */
#define ERAY_MBS_TCIB_POS                    _ERAY_UL(9)
#define ERAY_MBS_TCIB_LEN                    _ERAY_UL(1)

/* ERAY_MBS_ESA (rh) */
#define ERAY_MBS_ESA_POS                     _ERAY_UL(10)
#define ERAY_MBS_ESA_LEN                     _ERAY_UL(1)

/* ERAY_MBS_ESB (rh) */
#define ERAY_MBS_ESB_POS                     _ERAY_UL(11)
#define ERAY_MBS_ESB_LEN                     _ERAY_UL(1)

/* ERAY_MBS_MLST (rh) */
#define ERAY_MBS_MLST_POS                    _ERAY_UL(12)
#define ERAY_MBS_MLST_LEN                    _ERAY_UL(1)

/* ERAY_MBS_FTA (rh) */
#define ERAY_MBS_FTA_POS                     _ERAY_UL(14)
#define ERAY_MBS_FTA_LEN                     _ERAY_UL(1)

/* ERAY_MBS_FTB (rh) */
#define ERAY_MBS_FTB_POS                     _ERAY_UL(15)
#define ERAY_MBS_FTB_LEN                     _ERAY_UL(1)

/* ERAY_MBS_CCS (rh) */
#define ERAY_MBS_CCS_POS                     _ERAY_UL(16)
#define ERAY_MBS_CCS_LEN                     _ERAY_UL(6)

/* ERAY_MBS_RCIS (rh) */
#define ERAY_MBS_RCIS_POS                    _ERAY_UL(24)
#define ERAY_MBS_RCIS_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SFIS (rh) */
#define ERAY_MBS_SFIS_POS                    _ERAY_UL(25)
#define ERAY_MBS_SFIS_LEN                    _ERAY_UL(1)

/* ERAY_MBS_SYNS (rh) */
#define ERAY_MBS_SYNS_POS                    _ERAY_UL(26)
#define ERAY_MBS_SYNS_LEN                    _ERAY_UL(1)

/* ERAY_MBS_NFIS (rh) */
#define ERAY_MBS_NFIS_POS                    _ERAY_UL(27)
#define ERAY_MBS_NFIS_LEN                    _ERAY_UL(1)

/* ERAY_MBS_PPIS (rh) */
#define ERAY_MBS_PPIS_POS                    _ERAY_UL(28)
#define ERAY_MBS_PPIS_LEN                    _ERAY_UL(1)

/* ERAY_MBS_RESS (rh) */
#define ERAY_MBS_RESS_POS                    _ERAY_UL(29)
#define ERAY_MBS_RESS_LEN                    _ERAY_UL(1)

/* ERAY_OBCM_RHSS (rwh) */
#define ERAY_OBCM_RHSS_POS                   _ERAY_UL(0)
#define ERAY_OBCM_RHSS_LEN                   _ERAY_UL(1)

/* ERAY_OBCM_RDSS (rwh) */
#define ERAY_OBCM_RDSS_POS                   _ERAY_UL(1)
#define ERAY_OBCM_RDSS_LEN                   _ERAY_UL(1)

/* ERAY_OBCM_RHSH (rh) */
#define ERAY_OBCM_RHSH_POS                   _ERAY_UL(16)
#define ERAY_OBCM_RHSH_LEN                   _ERAY_UL(1)

/* ERAY_OBCM_RDSH (rh) */
#define ERAY_OBCM_RDSH_POS                   _ERAY_UL(17)
#define ERAY_OBCM_RDSH_LEN                   _ERAY_UL(1)

/* ERAY_OBCR_OBRS (rw) */
#define ERAY_OBCR_OBRS_POS                   _ERAY_UL(0)
#define ERAY_OBCR_OBRS_LEN                   _ERAY_UL(7)

/* ERAY_OBCR_VIEW (rw) */
#define ERAY_OBCR_VIEW_POS                   _ERAY_UL(8)
#define ERAY_OBCR_VIEW_LEN                   _ERAY_UL(1)

/* ERAY_OBCR_REQ (rw) */
#define ERAY_OBCR_REQ_POS                    _ERAY_UL(9)
#define ERAY_OBCR_REQ_LEN                    _ERAY_UL(1)

/* ERAY_OBCR_OBSYS (rh) */
#define ERAY_OBCR_OBSYS_POS                  _ERAY_UL(15)
#define ERAY_OBCR_OBSYS_LEN                  _ERAY_UL(1)

/* ERAY_OBCR_OBRH (rh) */
#define ERAY_OBCR_OBRH_POS                   _ERAY_UL(16)
#define ERAY_OBCR_OBRH_LEN                   _ERAY_UL(7)

/* ERAY_DEDCON_DEDMEN (rw) */
#define ERAY_DEDCON_DEDMEN_POS               _ERAY_UL(0)
#define ERAY_DEDCON_DEDMEN_LEN               _ERAY_UL(1)

/* ERAY_DEDCON_DEDT1EN (rw) */
#define ERAY_DEDCON_DEDT1EN_POS              _ERAY_UL(1)
#define ERAY_DEDCON_DEDT1EN_LEN              _ERAY_UL(1)

/* ERAY_DEDCON_DEDT2EN (rw) */
#define ERAY_DEDCON_DEDT2EN_POS              _ERAY_UL(2)
#define ERAY_DEDCON_DEDT2EN_LEN              _ERAY_UL(1)

/* ERAY_DEDCON_DEDO1EN (rw) */
#define ERAY_DEDCON_DEDO1EN_POS              _ERAY_UL(3)
#define ERAY_DEDCON_DEDO1EN_LEN              _ERAY_UL(1)

/* ERAY_DEDCON_DEDO2EN (rw) */
#define ERAY_DEDCON_DEDO2EN_POS              _ERAY_UL(4)
#define ERAY_DEDCON_DEDO2EN_LEN              _ERAY_UL(1)

/* ERAY_DEDCON_DEDI1EN (rw) */
#define ERAY_DEDCON_DEDI1EN_POS              _ERAY_UL(5)
#define ERAY_DEDCON_DEDI1EN_LEN              _ERAY_UL(1)

/* ERAY_DEDCON_DEDI2EN (rw) */
#define ERAY_DEDCON_DEDI2EN_POS              _ERAY_UL(6)
#define ERAY_DEDCON_DEDI2EN_LEN              _ERAY_UL(1)

/* ERAY_ECCR_ECC (rh) */
#define ERAY_ECCR_ECC_POS                    _ERAY_UL(0)
#define ERAY_ECCR_ECC_LEN                    _ERAY_UL(7)

/* ERAY_ECCW_ECC (rw) */
#define ERAY_ECCW_ECC_POS                    _ERAY_UL(0)
#define ERAY_ECCW_ECC_LEN                    _ERAY_UL(7)

#endif
