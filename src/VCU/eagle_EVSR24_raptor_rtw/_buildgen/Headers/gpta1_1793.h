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
 * $Filename__:gpta1_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:gpta1_1793$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GPTA1_1793_H
#define _GPTA1_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GPTA1_UL(x) x
#else
    #define _GPTA1_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module GPTA1 on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for local timer cell (LTC) */
typedef struct {
    volatile uint32 LTCCTR;        // GPTA Local Timer Cell Control Register
    volatile uint32 LTCXR;         // GPTA Local Timer Cell X Register
} GPTA1_LTC_t;

/* sub-structure for global timer cell (GTC) */
typedef struct {
    volatile uint32 GTCCTR;        // GPTA Global Timer Cell Control Register
    volatile uint32 GTCXR;         // GPTA Global Timer Cell X Register
} GPTA1_GTC_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF0002008] : GPTA1 Identification Register
    volatile uint32 RESERVED0[1];        // [0xF000200C...0xF000200F] : reserved space
    volatile uint32 SRSC0;               // [0xF0002010] : GPTA1 Service Request State Clear Register 0
    volatile uint32 SRSS0;               // [0xF0002014] : GPTA1 Service Request State Set Register 0
    volatile uint32 SRSC1;               // [0xF0002018] : GPTA1 Service Request State Clear Register 1
    volatile uint32 SRSS1;               // [0xF000201C] : GPTA1 Service Request State Set Register 1
    volatile uint32 SRSC2;               // [0xF0002020] : GPTA1 Service Request State Clear Register 2
    volatile uint32 SRSS2;               // [0xF0002024] : GPTA1 Service Request State Set Register 2
    volatile uint32 SRSC3;               // [0xF0002028] : GPTA1 Service Request State Clear Register 3
    volatile uint32 SRSS3;               // [0xF000202C] : GPTA1 Service Request State Set Register 3
    volatile uint32 SRNR;                // [0xF0002030] : GPTA1 Service Request Node Redirection Register
    volatile uint32 RESERVED1[1];        // [0xF0002034...0xF0002037] : reserved space
    volatile uint32 MRACTL;              // [0xF0002038] : GPTA1 Multiplexer Register Array Control Register
    volatile uint32 MRADIN;              // [0xF000203C] : GPTA1 Multiplexer Register Array Data In Register
    volatile uint32 MRADOUT;             // [0xF0002040] : GPTA1 Multiplexer Register Array Data Out Register
    volatile uint32 FPCSTAT;             // [0xF0002044] : GPTA1 Filter and Prescaler Cell Status Register
    volatile uint32 FPCCTR0;             // [0xF0002048] : GPTA1 Filter and Prescaler Cell Control Register 0
    volatile uint32 FPCTIM0;             // [0xF000204C] : GPTA1 Filter and Prescaler Cell Timer Register 0
    volatile uint32 FPCCTR1;             // [0xF0002050] : GPTA1 Filter and Prescaler Cell Control Register 1
    volatile uint32 FPCTIM1;             // [0xF0002054] : GPTA1 Filter and Prescaler Cell Timer Register 1
    volatile uint32 FPCCTR2;             // [0xF0002058] : GPTA1 Filter and Prescaler Cell Control Register 2
    volatile uint32 FPCTIM2;             // [0xF000205C] : GPTA1 Filter and Prescaler Cell Timer Register 2
    volatile uint32 FPCCTR3;             // [0xF0002060] : GPTA1 Filter and Prescaler Cell Control Register 3
    volatile uint32 FPCTIM3;             // [0xF0002064] : GPTA1 Filter and Prescaler Cell Timer Register 3
    volatile uint32 FPCCTR4;             // [0xF0002068] : GPTA1 Filter and Prescaler Cell Control Register 4
    volatile uint32 FPCTIM4;             // [0xF000206C] : GPTA1 Filter and Prescaler Cell Timer Register 4
    volatile uint32 FPCCTR5;             // [0xF0002070] : GPTA1 Filter and Prescaler Cell Control Register 5
    volatile uint32 FPCTIM5;             // [0xF0002074] : GPTA1 Filter and Prescaler Cell Timer Register 5
    volatile uint32 PDLCTR;              // [0xF0002078] : GPTA1 Phase Discrimination Logic Control Register
    volatile uint32 RESERVED2[1];        // [0xF000207C...0xF000207F] : reserved space
    volatile uint32 DCMCTR0;             // [0xF0002080] : GPTA1 Duty Cycle Measurement Control Register 0
    volatile uint32 DCMTIM0;             // [0xF0002084] : GPTA1 Duty Cycle Measurement Timer Register 0
    volatile uint32 DCMCAV0;             // [0xF0002088] : GPTA1 Duty Cycle Measurement Capture Register 0
    volatile uint32 DCMCOV0;             // [0xF000208C] : GPTA1 Duty Cycle Measurement Capture/Compare Register 0
    volatile uint32 DCMCTR1;             // [0xF0002090] : GPTA1 Duty Cycle Measurement Control Register 1
    volatile uint32 DCMTIM1;             // [0xF0002094] : GPTA1 Duty Cycle Measurement Timer Register 1
    volatile uint32 DCMCAV1;             // [0xF0002098] : GPTA1 Duty Cycle Measurement Capture Register 1
    volatile uint32 DCMCOV1;             // [0xF000209C] : GPTA1 Duty Cycle Measurement Capture/Compare Register 1
    volatile uint32 DCMCTR2;             // [0xF00020A0] : GPTA1 Duty Cycle Measurement Control Register 2
    volatile uint32 DCMTIM2;             // [0xF00020A4] : GPTA1 Duty Cycle Measurement Timer Register 2
    volatile uint32 DCMCAV2;             // [0xF00020A8] : GPTA1 Duty Cycle Measurement Capture Register 2
    volatile uint32 DCMCOV2;             // [0xF00020AC] : GPTA1 Duty Cycle Measurement Capture/Compare Register 2
    volatile uint32 DCMCTR3;             // [0xF00020B0] : GPTA1 Duty Cycle Measurement Control Register 3
    volatile uint32 DCMTIM3;             // [0xF00020B4] : GPTA1 Duty Cycle Measurement Timer Register 3
    volatile uint32 DCMCAV3;             // [0xF00020B8] : GPTA1 Duty Cycle Measurement Capture Register 3
    volatile uint32 DCMCOV3;             // [0xF00020BC] : GPTA1 Duty Cycle Measurement Capture/Compare Register 3
    volatile uint32 PLLCTR;              // [0xF00020C0] : GPTA1 Phase Locked Loop Control Register
    volatile uint32 PLLMTI;              // [0xF00020C4] : GPTA1 Phase Locked Loop Microtick Register
    volatile uint32 PLLCNT;              // [0xF00020C8] : GPTA1 Phase Locked Loop Counter Register
    volatile uint32 PLLSTP;              // [0xF00020CC] : GPTA1 Phase Locked Loop Step Register
    volatile uint32 PLLREV;              // [0xF00020D0] : GPTA1 Phase Locked Loop Reload Register
    volatile uint32 PLLDTR;              // [0xF00020D4] : GPTA1 Phase Locked Loop Delta Register
    volatile uint32 CKBCTR;              // [0xF00020D8] : GPTA1 Clock Bus Control Register
    volatile uint32 RESERVED3[1];        // [0xF00020DC...0xF00020DF] : reserved space
    volatile uint32 GTCTR0;              // [0xF00020E0] : GPTA1 Global Timer Control Register 0
    volatile uint32 GTREV0;              // [0xF00020E4] : GPTA1 Global Timer Reload Value Register 0
    volatile uint32 GTTIM0;              // [0xF00020E8] : GPTA1 Global Timer Register 0
    volatile uint32 RESERVED4[1];        // [0xF00020EC...0xF00020EF] : reserved space
    volatile uint32 GTCTR1;              // [0xF00020F0] : GPTA1 Global Timer Control Register 1
    volatile uint32 GTREV1;              // [0xF00020F4] : GPTA1 Global Timer Reload Value Register 1
    volatile uint32 GTTIM1;              // [0xF00020F8] : GPTA1 Global Timer Register 1
    volatile uint32 RESERVED5[1];        // [0xF00020FC...0xF00020FF] : reserved space
    GPTA1_GTC_t     GTC[32];             // [0xF0002100...0xF00021FF] : GPTA1 Global Timer Cells
    GPTA1_LTC_t     LTC[64];             // [0xF0002200...0xF00023FF] : GPTA1 Local  Timer Cells
    volatile uint32 RESERVED6[218];      // [0xF0002400...0xF0002767] : reserved space
    volatile uint32 SRC37;               // [0xF0002768] : GPTA1 Interrupt Service Request Control Register 37
    volatile uint32 SRC36;               // [0xF000276C] : GPTA1 Interrupt Service Request Control Register 36
    volatile uint32 SRC35;               // [0xF0002770] : GPTA1 Interrupt Service Request Control Register 35
    volatile uint32 SRC34;               // [0xF0002774] : GPTA1 Interrupt Service Request Control Register 34
    volatile uint32 SRC33;               // [0xF0002778] : GPTA1 Interrupt Service Request Control Register 33
    volatile uint32 SRC32;               // [0xF000277C] : GPTA1 Interrupt Service Request Control Register 32
    volatile uint32 SRC31;               // [0xF0002780] : GPTA1 Interrupt Service Request Control Register 31
    volatile uint32 SRC30;               // [0xF0002784] : GPTA1 Interrupt Service Request Control Register 30
    volatile uint32 SRC29;               // [0xF0002788] : GPTA1 Interrupt Service Request Control Register 29
    volatile uint32 SRC28;               // [0xF000278C] : GPTA1 Interrupt Service Request Control Register 28
    volatile uint32 SRC27;               // [0xF0002790] : GPTA1 Interrupt Service Request Control Register 27
    volatile uint32 SRC26;               // [0xF0002794] : GPTA1 Interrupt Service Request Control Register 26
    volatile uint32 SRC25;               // [0xF0002798] : GPTA1 Interrupt Service Request Control Register 25
    volatile uint32 SRC24;               // [0xF000279C] : GPTA1 Interrupt Service Request Control Register 24
    volatile uint32 SRC23;               // [0xF00027A0] : GPTA1 Interrupt Service Request Control Register 23
    volatile uint32 SRC22;               // [0xF00027A4] : GPTA1 Interrupt Service Request Control Register 22
    volatile uint32 SRC21;               // [0xF00027A8] : GPTA1 Interrupt Service Request Control Register 21
    volatile uint32 SRC20;               // [0xF00027AC] : GPTA1 Interrupt Service Request Control Register 20
    volatile uint32 SRC19;               // [0xF00027B0] : GPTA1 Interrupt Service Request Control Register 19
    volatile uint32 SRC18;               // [0xF00027B4] : GPTA1 Interrupt Service Request Control Register 18
    volatile uint32 SRC17;               // [0xF00027B8] : GPTA1 Interrupt Service Request Control Register 17
    volatile uint32 SRC16;               // [0xF00027BC] : GPTA1 Interrupt Service Request Control Register 16
    volatile uint32 SRC15;               // [0xF00027C0] : GPTA1 Interrupt Service Request Control Register 15
    volatile uint32 SRC14;               // [0xF00027C4] : GPTA1 Interrupt Service Request Control Register 14
    volatile uint32 SRC13;               // [0xF00027C8] : GPTA1 Interrupt Service Request Control Register 13
    volatile uint32 SRC12;               // [0xF00027CC] : GPTA1 Interrupt Service Request Control Register 12
    volatile uint32 SRC11;               // [0xF00027D0] : GPTA1 Interrupt Service Request Control Register 11
    volatile uint32 SRC10;               // [0xF00027D4] : GPTA1 Interrupt Service Request Control Register 10
    volatile uint32 SRC09;               // [0xF00027D8] : GPTA1 Interrupt Service Request Control Register 09
    volatile uint32 SRC08;               // [0xF00027DC] : GPTA1 Interrupt Service Request Control Register 08
    volatile uint32 SRC07;               // [0xF00027E0] : GPTA1 Interrupt Service Request Control Register 07
    volatile uint32 SRC06;               // [0xF00027E4] : GPTA1 Interrupt Service Request Control Register 06
    volatile uint32 SRC05;               // [0xF00027E8] : GPTA1 Interrupt Service Request Control Register 05
    volatile uint32 SRC04;               // [0xF00027EC] : GPTA1 Interrupt Service Request Control Register 04
    volatile uint32 SRC03;               // [0xF00027F0] : GPTA1 Interrupt Service Request Control Register 03
    volatile uint32 SRC02;               // [0xF00027F4] : GPTA1 Interrupt Service Request Control Register 02
    volatile uint32 SRC01;               // [0xF00027F8] : GPTA1 Interrupt Service Request Control Register 01
    volatile uint32 SRC00;               // [0xF00027FC] : GPTA1 Interrupt Service Request Control Register 00
} GPTA1_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern GPTA1_RegMap_t GPTA1 __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/


/* these are bit definitions which are missing in the current sourcefile revision */

/* GPTA1_LTCCTR63_OSM (rw) */
#define GPTA1_LTCCTR63_OSM_POS         _GPTA1_UL(1)
#define GPTA1_LTCCTR63_OSM_LEN         _GPTA1_UL(1)

/* GPTA1_LTCCTR63_REN (rw) */
#define GPTA1_LTCCTR63_REN_POS         _GPTA1_UL(2)
#define GPTA1_LTCCTR63_REN_LEN         _GPTA1_UL(2)
/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS END HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* GPTA1_ID_MOD_NUMBER (r) */
#define GPTA1_ID_MOD_NUMBER_POS                _GPTA1_UL(16)
#define GPTA1_ID_MOD_NUMBER_LEN                _GPTA1_UL(16)

/* GPTA1_ID_MOD_REV (r) */
#define GPTA1_ID_MOD_REV_POS                   _GPTA1_UL(0)
#define GPTA1_ID_MOD_REV_LEN                   _GPTA1_UL(8)

/* GPTA1_ID_MOD_TYPE (r) */
#define GPTA1_ID_MOD_TYPE_POS                  _GPTA1_UL(8)
#define GPTA1_ID_MOD_TYPE_LEN                  _GPTA1_UL(8)

/* GPTA1_ID_MOD_REV (r) */
#define GPTA1_ID_MOD_REV_POS                 _GPTA1_UL(0)
#define GPTA1_ID_MOD_REV_LEN                 _GPTA1_UL(8)

/* GPTA1_ID_MOD_TYPE (r) */
#define GPTA1_ID_MOD_TYPE_POS                _GPTA1_UL(8)
#define GPTA1_ID_MOD_TYPE_LEN                _GPTA1_UL(8)

/* GPTA1_ID_MOD_NUM (r) */
#define GPTA1_ID_MOD_NUM_POS                 _GPTA1_UL(16)
#define GPTA1_ID_MOD_NUM_LEN                 _GPTA1_UL(16)

/* GPTA1_SRSC0_DCM00R (rwh) */
#define GPTA1_SRSC0_DCM00R_POS               _GPTA1_UL(0)
#define GPTA1_SRSC0_DCM00R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM00F (rwh) */
#define GPTA1_SRSC0_DCM00F_POS               _GPTA1_UL(1)
#define GPTA1_SRSC0_DCM00F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM00C (rwh) */
#define GPTA1_SRSC0_DCM00C_POS               _GPTA1_UL(2)
#define GPTA1_SRSC0_DCM00C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM01R (rwh) */
#define GPTA1_SRSC0_DCM01R_POS               _GPTA1_UL(3)
#define GPTA1_SRSC0_DCM01R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM01F (rwh) */
#define GPTA1_SRSC0_DCM01F_POS               _GPTA1_UL(4)
#define GPTA1_SRSC0_DCM01F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM01C (rwh) */
#define GPTA1_SRSC0_DCM01C_POS               _GPTA1_UL(5)
#define GPTA1_SRSC0_DCM01C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM02R (rwh) */
#define GPTA1_SRSC0_DCM02R_POS               _GPTA1_UL(6)
#define GPTA1_SRSC0_DCM02R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM02F (rwh) */
#define GPTA1_SRSC0_DCM02F_POS               _GPTA1_UL(7)
#define GPTA1_SRSC0_DCM02F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM02C (rwh) */
#define GPTA1_SRSC0_DCM02C_POS               _GPTA1_UL(8)
#define GPTA1_SRSC0_DCM02C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM03R (rwh) */
#define GPTA1_SRSC0_DCM03R_POS               _GPTA1_UL(9)
#define GPTA1_SRSC0_DCM03R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM03F (rwh) */
#define GPTA1_SRSC0_DCM03F_POS               _GPTA1_UL(10)
#define GPTA1_SRSC0_DCM03F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_DCM03C (rwh) */
#define GPTA1_SRSC0_DCM03C_POS               _GPTA1_UL(11)
#define GPTA1_SRSC0_DCM03C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSC0_PLL (rwh) */
#define GPTA1_SRSC0_PLL_POS                  _GPTA1_UL(12)
#define GPTA1_SRSC0_PLL_LEN                  _GPTA1_UL(1)

/* GPTA1_SRSC0_GT00 (rwh) */
#define GPTA1_SRSC0_GT00_POS                 _GPTA1_UL(13)
#define GPTA1_SRSC0_GT00_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC0_GT01 (rwh) */
#define GPTA1_SRSC0_GT01_POS                 _GPTA1_UL(14)
#define GPTA1_SRSC0_GT01_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM00R (rwh) */
#define GPTA1_SRSS0_DCM00R_POS               _GPTA1_UL(0)
#define GPTA1_SRSS0_DCM00R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM00F (rwh) */
#define GPTA1_SRSS0_DCM00F_POS               _GPTA1_UL(1)
#define GPTA1_SRSS0_DCM00F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM00C (rwh) */
#define GPTA1_SRSS0_DCM00C_POS               _GPTA1_UL(2)
#define GPTA1_SRSS0_DCM00C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM01R (rwh) */
#define GPTA1_SRSS0_DCM01R_POS               _GPTA1_UL(3)
#define GPTA1_SRSS0_DCM01R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM01F (rwh) */
#define GPTA1_SRSS0_DCM01F_POS               _GPTA1_UL(4)
#define GPTA1_SRSS0_DCM01F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM01C (rwh) */
#define GPTA1_SRSS0_DCM01C_POS               _GPTA1_UL(5)
#define GPTA1_SRSS0_DCM01C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM02R (rwh) */
#define GPTA1_SRSS0_DCM02R_POS               _GPTA1_UL(6)
#define GPTA1_SRSS0_DCM02R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM02F (rwh) */
#define GPTA1_SRSS0_DCM02F_POS               _GPTA1_UL(7)
#define GPTA1_SRSS0_DCM02F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM02C (rwh) */
#define GPTA1_SRSS0_DCM02C_POS               _GPTA1_UL(8)
#define GPTA1_SRSS0_DCM02C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM03R (rwh) */
#define GPTA1_SRSS0_DCM03R_POS               _GPTA1_UL(9)
#define GPTA1_SRSS0_DCM03R_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM03F (rwh) */
#define GPTA1_SRSS0_DCM03F_POS               _GPTA1_UL(10)
#define GPTA1_SRSS0_DCM03F_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_DCM03C (rwh) */
#define GPTA1_SRSS0_DCM03C_POS               _GPTA1_UL(11)
#define GPTA1_SRSS0_DCM03C_LEN               _GPTA1_UL(1)

/* GPTA1_SRSS0_PLL (rwh) */
#define GPTA1_SRSS0_PLL_POS                  _GPTA1_UL(12)
#define GPTA1_SRSS0_PLL_LEN                  _GPTA1_UL(1)

/* GPTA1_SRSS0_GT00 (rwh) */
#define GPTA1_SRSS0_GT00_POS                 _GPTA1_UL(13)
#define GPTA1_SRSS0_GT00_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS0_GT01 (rwh) */
#define GPTA1_SRSS0_GT01_POS                 _GPTA1_UL(14)
#define GPTA1_SRSS0_GT01_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC0 (rwh) */
#define GPTA1_SRSC1_GTC0_POS                 _GPTA1_UL(0)
#define GPTA1_SRSC1_GTC0_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC1 (rwh) */
#define GPTA1_SRSC1_GTC1_POS                 _GPTA1_UL(1)
#define GPTA1_SRSC1_GTC1_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC2 (rwh) */
#define GPTA1_SRSC1_GTC2_POS                 _GPTA1_UL(2)
#define GPTA1_SRSC1_GTC2_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC3 (rwh) */
#define GPTA1_SRSC1_GTC3_POS                 _GPTA1_UL(3)
#define GPTA1_SRSC1_GTC3_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC4 (rwh) */
#define GPTA1_SRSC1_GTC4_POS                 _GPTA1_UL(4)
#define GPTA1_SRSC1_GTC4_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC5 (rwh) */
#define GPTA1_SRSC1_GTC5_POS                 _GPTA1_UL(5)
#define GPTA1_SRSC1_GTC5_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC6 (rwh) */
#define GPTA1_SRSC1_GTC6_POS                 _GPTA1_UL(6)
#define GPTA1_SRSC1_GTC6_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC7 (rwh) */
#define GPTA1_SRSC1_GTC7_POS                 _GPTA1_UL(7)
#define GPTA1_SRSC1_GTC7_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC8 (rwh) */
#define GPTA1_SRSC1_GTC8_POS                 _GPTA1_UL(8)
#define GPTA1_SRSC1_GTC8_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC9 (rwh) */
#define GPTA1_SRSC1_GTC9_POS                 _GPTA1_UL(9)
#define GPTA1_SRSC1_GTC9_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC10 (rwh) */
#define GPTA1_SRSC1_GTC10_POS                _GPTA1_UL(10)
#define GPTA1_SRSC1_GTC10_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC11 (rwh) */
#define GPTA1_SRSC1_GTC11_POS                _GPTA1_UL(11)
#define GPTA1_SRSC1_GTC11_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC12 (rwh) */
#define GPTA1_SRSC1_GTC12_POS                _GPTA1_UL(12)
#define GPTA1_SRSC1_GTC12_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC13 (rwh) */
#define GPTA1_SRSC1_GTC13_POS                _GPTA1_UL(13)
#define GPTA1_SRSC1_GTC13_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC14 (rwh) */
#define GPTA1_SRSC1_GTC14_POS                _GPTA1_UL(14)
#define GPTA1_SRSC1_GTC14_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC15 (rwh) */
#define GPTA1_SRSC1_GTC15_POS                _GPTA1_UL(15)
#define GPTA1_SRSC1_GTC15_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC16 (rwh) */
#define GPTA1_SRSC1_GTC16_POS                _GPTA1_UL(16)
#define GPTA1_SRSC1_GTC16_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC17 (rwh) */
#define GPTA1_SRSC1_GTC17_POS                _GPTA1_UL(17)
#define GPTA1_SRSC1_GTC17_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC18 (rwh) */
#define GPTA1_SRSC1_GTC18_POS                _GPTA1_UL(18)
#define GPTA1_SRSC1_GTC18_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC19 (rwh) */
#define GPTA1_SRSC1_GTC19_POS                _GPTA1_UL(19)
#define GPTA1_SRSC1_GTC19_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC20 (rwh) */
#define GPTA1_SRSC1_GTC20_POS                _GPTA1_UL(20)
#define GPTA1_SRSC1_GTC20_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC21 (rwh) */
#define GPTA1_SRSC1_GTC21_POS                _GPTA1_UL(21)
#define GPTA1_SRSC1_GTC21_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC22 (rwh) */
#define GPTA1_SRSC1_GTC22_POS                _GPTA1_UL(22)
#define GPTA1_SRSC1_GTC22_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC23 (rwh) */
#define GPTA1_SRSC1_GTC23_POS                _GPTA1_UL(23)
#define GPTA1_SRSC1_GTC23_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC24 (rwh) */
#define GPTA1_SRSC1_GTC24_POS                _GPTA1_UL(24)
#define GPTA1_SRSC1_GTC24_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC25 (rwh) */
#define GPTA1_SRSC1_GTC25_POS                _GPTA1_UL(25)
#define GPTA1_SRSC1_GTC25_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC26 (rwh) */
#define GPTA1_SRSC1_GTC26_POS                _GPTA1_UL(26)
#define GPTA1_SRSC1_GTC26_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC27 (rwh) */
#define GPTA1_SRSC1_GTC27_POS                _GPTA1_UL(27)
#define GPTA1_SRSC1_GTC27_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC28 (rwh) */
#define GPTA1_SRSC1_GTC28_POS                _GPTA1_UL(28)
#define GPTA1_SRSC1_GTC28_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC29 (rwh) */
#define GPTA1_SRSC1_GTC29_POS                _GPTA1_UL(29)
#define GPTA1_SRSC1_GTC29_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC30 (rwh) */
#define GPTA1_SRSC1_GTC30_POS                _GPTA1_UL(30)
#define GPTA1_SRSC1_GTC30_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC1_GTC31 (rwh) */
#define GPTA1_SRSC1_GTC31_POS                _GPTA1_UL(31)
#define GPTA1_SRSC1_GTC31_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC0 (rwh) */
#define GPTA1_SRSS1_GTC0_POS                 _GPTA1_UL(0)
#define GPTA1_SRSS1_GTC0_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC1 (rwh) */
#define GPTA1_SRSS1_GTC1_POS                 _GPTA1_UL(1)
#define GPTA1_SRSS1_GTC1_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC2 (rwh) */
#define GPTA1_SRSS1_GTC2_POS                 _GPTA1_UL(2)
#define GPTA1_SRSS1_GTC2_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC3 (rwh) */
#define GPTA1_SRSS1_GTC3_POS                 _GPTA1_UL(3)
#define GPTA1_SRSS1_GTC3_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC4 (rwh) */
#define GPTA1_SRSS1_GTC4_POS                 _GPTA1_UL(4)
#define GPTA1_SRSS1_GTC4_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC5 (rwh) */
#define GPTA1_SRSS1_GTC5_POS                 _GPTA1_UL(5)
#define GPTA1_SRSS1_GTC5_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC6 (rwh) */
#define GPTA1_SRSS1_GTC6_POS                 _GPTA1_UL(6)
#define GPTA1_SRSS1_GTC6_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC7 (rwh) */
#define GPTA1_SRSS1_GTC7_POS                 _GPTA1_UL(7)
#define GPTA1_SRSS1_GTC7_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC8 (rwh) */
#define GPTA1_SRSS1_GTC8_POS                 _GPTA1_UL(8)
#define GPTA1_SRSS1_GTC8_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC9 (rwh) */
#define GPTA1_SRSS1_GTC9_POS                 _GPTA1_UL(9)
#define GPTA1_SRSS1_GTC9_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC10 (rwh) */
#define GPTA1_SRSS1_GTC10_POS                _GPTA1_UL(10)
#define GPTA1_SRSS1_GTC10_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC11 (rwh) */
#define GPTA1_SRSS1_GTC11_POS                _GPTA1_UL(11)
#define GPTA1_SRSS1_GTC11_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC12 (rwh) */
#define GPTA1_SRSS1_GTC12_POS                _GPTA1_UL(12)
#define GPTA1_SRSS1_GTC12_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC13 (rwh) */
#define GPTA1_SRSS1_GTC13_POS                _GPTA1_UL(13)
#define GPTA1_SRSS1_GTC13_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC14 (rwh) */
#define GPTA1_SRSS1_GTC14_POS                _GPTA1_UL(14)
#define GPTA1_SRSS1_GTC14_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC15 (rwh) */
#define GPTA1_SRSS1_GTC15_POS                _GPTA1_UL(15)
#define GPTA1_SRSS1_GTC15_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC16 (rwh) */
#define GPTA1_SRSS1_GTC16_POS                _GPTA1_UL(16)
#define GPTA1_SRSS1_GTC16_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC17 (rwh) */
#define GPTA1_SRSS1_GTC17_POS                _GPTA1_UL(17)
#define GPTA1_SRSS1_GTC17_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC18 (rwh) */
#define GPTA1_SRSS1_GTC18_POS                _GPTA1_UL(18)
#define GPTA1_SRSS1_GTC18_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC19 (rwh) */
#define GPTA1_SRSS1_GTC19_POS                _GPTA1_UL(19)
#define GPTA1_SRSS1_GTC19_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC20 (rwh) */
#define GPTA1_SRSS1_GTC20_POS                _GPTA1_UL(20)
#define GPTA1_SRSS1_GTC20_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC21 (rwh) */
#define GPTA1_SRSS1_GTC21_POS                _GPTA1_UL(21)
#define GPTA1_SRSS1_GTC21_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC22 (rwh) */
#define GPTA1_SRSS1_GTC22_POS                _GPTA1_UL(22)
#define GPTA1_SRSS1_GTC22_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC23 (rwh) */
#define GPTA1_SRSS1_GTC23_POS                _GPTA1_UL(23)
#define GPTA1_SRSS1_GTC23_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC24 (rwh) */
#define GPTA1_SRSS1_GTC24_POS                _GPTA1_UL(24)
#define GPTA1_SRSS1_GTC24_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC25 (rwh) */
#define GPTA1_SRSS1_GTC25_POS                _GPTA1_UL(25)
#define GPTA1_SRSS1_GTC25_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC26 (rwh) */
#define GPTA1_SRSS1_GTC26_POS                _GPTA1_UL(26)
#define GPTA1_SRSS1_GTC26_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC27 (rwh) */
#define GPTA1_SRSS1_GTC27_POS                _GPTA1_UL(27)
#define GPTA1_SRSS1_GTC27_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC28 (rwh) */
#define GPTA1_SRSS1_GTC28_POS                _GPTA1_UL(28)
#define GPTA1_SRSS1_GTC28_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC29 (rwh) */
#define GPTA1_SRSS1_GTC29_POS                _GPTA1_UL(29)
#define GPTA1_SRSS1_GTC29_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC30 (rwh) */
#define GPTA1_SRSS1_GTC30_POS                _GPTA1_UL(30)
#define GPTA1_SRSS1_GTC30_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS1_GTC31 (rwh) */
#define GPTA1_SRSS1_GTC31_POS                _GPTA1_UL(31)
#define GPTA1_SRSS1_GTC31_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC0 (rwh) */
#define GPTA1_SRSC2_LTC0_POS                 _GPTA1_UL(0)
#define GPTA1_SRSC2_LTC0_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC1 (rwh) */
#define GPTA1_SRSC2_LTC1_POS                 _GPTA1_UL(1)
#define GPTA1_SRSC2_LTC1_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC2 (rwh) */
#define GPTA1_SRSC2_LTC2_POS                 _GPTA1_UL(2)
#define GPTA1_SRSC2_LTC2_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC3 (rwh) */
#define GPTA1_SRSC2_LTC3_POS                 _GPTA1_UL(3)
#define GPTA1_SRSC2_LTC3_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC4 (rwh) */
#define GPTA1_SRSC2_LTC4_POS                 _GPTA1_UL(4)
#define GPTA1_SRSC2_LTC4_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC5 (rwh) */
#define GPTA1_SRSC2_LTC5_POS                 _GPTA1_UL(5)
#define GPTA1_SRSC2_LTC5_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC6 (rwh) */
#define GPTA1_SRSC2_LTC6_POS                 _GPTA1_UL(6)
#define GPTA1_SRSC2_LTC6_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC7 (rwh) */
#define GPTA1_SRSC2_LTC7_POS                 _GPTA1_UL(7)
#define GPTA1_SRSC2_LTC7_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC8 (rwh) */
#define GPTA1_SRSC2_LTC8_POS                 _GPTA1_UL(8)
#define GPTA1_SRSC2_LTC8_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC9 (rwh) */
#define GPTA1_SRSC2_LTC9_POS                 _GPTA1_UL(9)
#define GPTA1_SRSC2_LTC9_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC10 (rwh) */
#define GPTA1_SRSC2_LTC10_POS                _GPTA1_UL(10)
#define GPTA1_SRSC2_LTC10_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC11 (rwh) */
#define GPTA1_SRSC2_LTC11_POS                _GPTA1_UL(11)
#define GPTA1_SRSC2_LTC11_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC12 (rwh) */
#define GPTA1_SRSC2_LTC12_POS                _GPTA1_UL(12)
#define GPTA1_SRSC2_LTC12_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC13 (rwh) */
#define GPTA1_SRSC2_LTC13_POS                _GPTA1_UL(13)
#define GPTA1_SRSC2_LTC13_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC14 (rwh) */
#define GPTA1_SRSC2_LTC14_POS                _GPTA1_UL(14)
#define GPTA1_SRSC2_LTC14_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC15 (rwh) */
#define GPTA1_SRSC2_LTC15_POS                _GPTA1_UL(15)
#define GPTA1_SRSC2_LTC15_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC16 (rwh) */
#define GPTA1_SRSC2_LTC16_POS                _GPTA1_UL(16)
#define GPTA1_SRSC2_LTC16_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC17 (rwh) */
#define GPTA1_SRSC2_LTC17_POS                _GPTA1_UL(17)
#define GPTA1_SRSC2_LTC17_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC18 (rwh) */
#define GPTA1_SRSC2_LTC18_POS                _GPTA1_UL(18)
#define GPTA1_SRSC2_LTC18_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC19 (rwh) */
#define GPTA1_SRSC2_LTC19_POS                _GPTA1_UL(19)
#define GPTA1_SRSC2_LTC19_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC20 (rwh) */
#define GPTA1_SRSC2_LTC20_POS                _GPTA1_UL(20)
#define GPTA1_SRSC2_LTC20_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC21 (rwh) */
#define GPTA1_SRSC2_LTC21_POS                _GPTA1_UL(21)
#define GPTA1_SRSC2_LTC21_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC22 (rwh) */
#define GPTA1_SRSC2_LTC22_POS                _GPTA1_UL(22)
#define GPTA1_SRSC2_LTC22_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC23 (rwh) */
#define GPTA1_SRSC2_LTC23_POS                _GPTA1_UL(23)
#define GPTA1_SRSC2_LTC23_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC24 (rwh) */
#define GPTA1_SRSC2_LTC24_POS                _GPTA1_UL(24)
#define GPTA1_SRSC2_LTC24_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC25 (rwh) */
#define GPTA1_SRSC2_LTC25_POS                _GPTA1_UL(25)
#define GPTA1_SRSC2_LTC25_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC26 (rwh) */
#define GPTA1_SRSC2_LTC26_POS                _GPTA1_UL(26)
#define GPTA1_SRSC2_LTC26_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC27 (rwh) */
#define GPTA1_SRSC2_LTC27_POS                _GPTA1_UL(27)
#define GPTA1_SRSC2_LTC27_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC28 (rwh) */
#define GPTA1_SRSC2_LTC28_POS                _GPTA1_UL(28)
#define GPTA1_SRSC2_LTC28_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC29 (rwh) */
#define GPTA1_SRSC2_LTC29_POS                _GPTA1_UL(29)
#define GPTA1_SRSC2_LTC29_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC30 (rwh) */
#define GPTA1_SRSC2_LTC30_POS                _GPTA1_UL(30)
#define GPTA1_SRSC2_LTC30_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC2_LTC31 (rwh) */
#define GPTA1_SRSC2_LTC31_POS                _GPTA1_UL(31)
#define GPTA1_SRSC2_LTC31_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC0 (rwh) */
#define GPTA1_SRSS2_LTC0_POS                 _GPTA1_UL(0)
#define GPTA1_SRSS2_LTC0_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC1 (rwh) */
#define GPTA1_SRSS2_LTC1_POS                 _GPTA1_UL(1)
#define GPTA1_SRSS2_LTC1_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC2 (rwh) */
#define GPTA1_SRSS2_LTC2_POS                 _GPTA1_UL(2)
#define GPTA1_SRSS2_LTC2_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC3 (rwh) */
#define GPTA1_SRSS2_LTC3_POS                 _GPTA1_UL(3)
#define GPTA1_SRSS2_LTC3_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC4 (rwh) */
#define GPTA1_SRSS2_LTC4_POS                 _GPTA1_UL(4)
#define GPTA1_SRSS2_LTC4_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC5 (rwh) */
#define GPTA1_SRSS2_LTC5_POS                 _GPTA1_UL(5)
#define GPTA1_SRSS2_LTC5_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC6 (rwh) */
#define GPTA1_SRSS2_LTC6_POS                 _GPTA1_UL(6)
#define GPTA1_SRSS2_LTC6_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC7 (rwh) */
#define GPTA1_SRSS2_LTC7_POS                 _GPTA1_UL(7)
#define GPTA1_SRSS2_LTC7_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC8 (rwh) */
#define GPTA1_SRSS2_LTC8_POS                 _GPTA1_UL(8)
#define GPTA1_SRSS2_LTC8_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC9 (rwh) */
#define GPTA1_SRSS2_LTC9_POS                 _GPTA1_UL(9)
#define GPTA1_SRSS2_LTC9_LEN                 _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC10 (rwh) */
#define GPTA1_SRSS2_LTC10_POS                _GPTA1_UL(10)
#define GPTA1_SRSS2_LTC10_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC11 (rwh) */
#define GPTA1_SRSS2_LTC11_POS                _GPTA1_UL(11)
#define GPTA1_SRSS2_LTC11_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC12 (rwh) */
#define GPTA1_SRSS2_LTC12_POS                _GPTA1_UL(12)
#define GPTA1_SRSS2_LTC12_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC13 (rwh) */
#define GPTA1_SRSS2_LTC13_POS                _GPTA1_UL(13)
#define GPTA1_SRSS2_LTC13_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC14 (rwh) */
#define GPTA1_SRSS2_LTC14_POS                _GPTA1_UL(14)
#define GPTA1_SRSS2_LTC14_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC15 (rwh) */
#define GPTA1_SRSS2_LTC15_POS                _GPTA1_UL(15)
#define GPTA1_SRSS2_LTC15_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC16 (rwh) */
#define GPTA1_SRSS2_LTC16_POS                _GPTA1_UL(16)
#define GPTA1_SRSS2_LTC16_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC17 (rwh) */
#define GPTA1_SRSS2_LTC17_POS                _GPTA1_UL(17)
#define GPTA1_SRSS2_LTC17_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC18 (rwh) */
#define GPTA1_SRSS2_LTC18_POS                _GPTA1_UL(18)
#define GPTA1_SRSS2_LTC18_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC19 (rwh) */
#define GPTA1_SRSS2_LTC19_POS                _GPTA1_UL(19)
#define GPTA1_SRSS2_LTC19_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC20 (rwh) */
#define GPTA1_SRSS2_LTC20_POS                _GPTA1_UL(20)
#define GPTA1_SRSS2_LTC20_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC21 (rwh) */
#define GPTA1_SRSS2_LTC21_POS                _GPTA1_UL(21)
#define GPTA1_SRSS2_LTC21_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC22 (rwh) */
#define GPTA1_SRSS2_LTC22_POS                _GPTA1_UL(22)
#define GPTA1_SRSS2_LTC22_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC23 (rwh) */
#define GPTA1_SRSS2_LTC23_POS                _GPTA1_UL(23)
#define GPTA1_SRSS2_LTC23_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC24 (rwh) */
#define GPTA1_SRSS2_LTC24_POS                _GPTA1_UL(24)
#define GPTA1_SRSS2_LTC24_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC25 (rwh) */
#define GPTA1_SRSS2_LTC25_POS                _GPTA1_UL(25)
#define GPTA1_SRSS2_LTC25_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC26 (rwh) */
#define GPTA1_SRSS2_LTC26_POS                _GPTA1_UL(26)
#define GPTA1_SRSS2_LTC26_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC27 (rwh) */
#define GPTA1_SRSS2_LTC27_POS                _GPTA1_UL(27)
#define GPTA1_SRSS2_LTC27_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC28 (rwh) */
#define GPTA1_SRSS2_LTC28_POS                _GPTA1_UL(28)
#define GPTA1_SRSS2_LTC28_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC29 (rwh) */
#define GPTA1_SRSS2_LTC29_POS                _GPTA1_UL(29)
#define GPTA1_SRSS2_LTC29_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC30 (rwh) */
#define GPTA1_SRSS2_LTC30_POS                _GPTA1_UL(30)
#define GPTA1_SRSS2_LTC30_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS2_LTC31 (rwh) */
#define GPTA1_SRSS2_LTC31_POS                _GPTA1_UL(31)
#define GPTA1_SRSS2_LTC31_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC32 (rwh) */
#define GPTA1_SRSC3_LTC32_POS                _GPTA1_UL(0)
#define GPTA1_SRSC3_LTC32_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC33 (rwh) */
#define GPTA1_SRSC3_LTC33_POS                _GPTA1_UL(1)
#define GPTA1_SRSC3_LTC33_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC34 (rwh) */
#define GPTA1_SRSC3_LTC34_POS                _GPTA1_UL(2)
#define GPTA1_SRSC3_LTC34_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC35 (rwh) */
#define GPTA1_SRSC3_LTC35_POS                _GPTA1_UL(3)
#define GPTA1_SRSC3_LTC35_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC36 (rwh) */
#define GPTA1_SRSC3_LTC36_POS                _GPTA1_UL(4)
#define GPTA1_SRSC3_LTC36_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC37 (rwh) */
#define GPTA1_SRSC3_LTC37_POS                _GPTA1_UL(5)
#define GPTA1_SRSC3_LTC37_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC38 (rwh) */
#define GPTA1_SRSC3_LTC38_POS                _GPTA1_UL(6)
#define GPTA1_SRSC3_LTC38_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC39 (rwh) */
#define GPTA1_SRSC3_LTC39_POS                _GPTA1_UL(7)
#define GPTA1_SRSC3_LTC39_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC40 (rwh) */
#define GPTA1_SRSC3_LTC40_POS                _GPTA1_UL(8)
#define GPTA1_SRSC3_LTC40_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC41 (rwh) */
#define GPTA1_SRSC3_LTC41_POS                _GPTA1_UL(9)
#define GPTA1_SRSC3_LTC41_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC42 (rwh) */
#define GPTA1_SRSC3_LTC42_POS                _GPTA1_UL(10)
#define GPTA1_SRSC3_LTC42_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC43 (rwh) */
#define GPTA1_SRSC3_LTC43_POS                _GPTA1_UL(11)
#define GPTA1_SRSC3_LTC43_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC44 (rwh) */
#define GPTA1_SRSC3_LTC44_POS                _GPTA1_UL(12)
#define GPTA1_SRSC3_LTC44_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC45 (rwh) */
#define GPTA1_SRSC3_LTC45_POS                _GPTA1_UL(13)
#define GPTA1_SRSC3_LTC45_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC46 (rwh) */
#define GPTA1_SRSC3_LTC46_POS                _GPTA1_UL(14)
#define GPTA1_SRSC3_LTC46_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC47 (rwh) */
#define GPTA1_SRSC3_LTC47_POS                _GPTA1_UL(15)
#define GPTA1_SRSC3_LTC47_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC48 (rwh) */
#define GPTA1_SRSC3_LTC48_POS                _GPTA1_UL(16)
#define GPTA1_SRSC3_LTC48_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC49 (rwh) */
#define GPTA1_SRSC3_LTC49_POS                _GPTA1_UL(17)
#define GPTA1_SRSC3_LTC49_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC50 (rwh) */
#define GPTA1_SRSC3_LTC50_POS                _GPTA1_UL(18)
#define GPTA1_SRSC3_LTC50_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC51 (rwh) */
#define GPTA1_SRSC3_LTC51_POS                _GPTA1_UL(19)
#define GPTA1_SRSC3_LTC51_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC52 (rwh) */
#define GPTA1_SRSC3_LTC52_POS                _GPTA1_UL(20)
#define GPTA1_SRSC3_LTC52_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC53 (rwh) */
#define GPTA1_SRSC3_LTC53_POS                _GPTA1_UL(21)
#define GPTA1_SRSC3_LTC53_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC54 (rwh) */
#define GPTA1_SRSC3_LTC54_POS                _GPTA1_UL(22)
#define GPTA1_SRSC3_LTC54_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC55 (rwh) */
#define GPTA1_SRSC3_LTC55_POS                _GPTA1_UL(23)
#define GPTA1_SRSC3_LTC55_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC56 (rwh) */
#define GPTA1_SRSC3_LTC56_POS                _GPTA1_UL(24)
#define GPTA1_SRSC3_LTC56_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC57 (rwh) */
#define GPTA1_SRSC3_LTC57_POS                _GPTA1_UL(25)
#define GPTA1_SRSC3_LTC57_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC58 (rwh) */
#define GPTA1_SRSC3_LTC58_POS                _GPTA1_UL(26)
#define GPTA1_SRSC3_LTC58_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC59 (rwh) */
#define GPTA1_SRSC3_LTC59_POS                _GPTA1_UL(27)
#define GPTA1_SRSC3_LTC59_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC60 (rwh) */
#define GPTA1_SRSC3_LTC60_POS                _GPTA1_UL(28)
#define GPTA1_SRSC3_LTC60_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC61 (rwh) */
#define GPTA1_SRSC3_LTC61_POS                _GPTA1_UL(29)
#define GPTA1_SRSC3_LTC61_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC62 (rwh) */
#define GPTA1_SRSC3_LTC62_POS                _GPTA1_UL(30)
#define GPTA1_SRSC3_LTC62_LEN                _GPTA1_UL(1)

/* GPTA1_SRSC3_LTC63 (rwh) */
#define GPTA1_SRSC3_LTC63_POS                _GPTA1_UL(31)
#define GPTA1_SRSC3_LTC63_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC32 (rwh) */
#define GPTA1_SRSS3_LTC32_POS                _GPTA1_UL(0)
#define GPTA1_SRSS3_LTC32_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC33 (rwh) */
#define GPTA1_SRSS3_LTC33_POS                _GPTA1_UL(1)
#define GPTA1_SRSS3_LTC33_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC34 (rwh) */
#define GPTA1_SRSS3_LTC34_POS                _GPTA1_UL(2)
#define GPTA1_SRSS3_LTC34_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC35 (rwh) */
#define GPTA1_SRSS3_LTC35_POS                _GPTA1_UL(3)
#define GPTA1_SRSS3_LTC35_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC36 (rwh) */
#define GPTA1_SRSS3_LTC36_POS                _GPTA1_UL(4)
#define GPTA1_SRSS3_LTC36_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC37 (rwh) */
#define GPTA1_SRSS3_LTC37_POS                _GPTA1_UL(5)
#define GPTA1_SRSS3_LTC37_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC38 (rwh) */
#define GPTA1_SRSS3_LTC38_POS                _GPTA1_UL(6)
#define GPTA1_SRSS3_LTC38_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC39 (rwh) */
#define GPTA1_SRSS3_LTC39_POS                _GPTA1_UL(7)
#define GPTA1_SRSS3_LTC39_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC40 (rwh) */
#define GPTA1_SRSS3_LTC40_POS                _GPTA1_UL(8)
#define GPTA1_SRSS3_LTC40_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC41 (rwh) */
#define GPTA1_SRSS3_LTC41_POS                _GPTA1_UL(9)
#define GPTA1_SRSS3_LTC41_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC42 (rwh) */
#define GPTA1_SRSS3_LTC42_POS                _GPTA1_UL(10)
#define GPTA1_SRSS3_LTC42_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC43 (rwh) */
#define GPTA1_SRSS3_LTC43_POS                _GPTA1_UL(11)
#define GPTA1_SRSS3_LTC43_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC44 (rwh) */
#define GPTA1_SRSS3_LTC44_POS                _GPTA1_UL(12)
#define GPTA1_SRSS3_LTC44_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC45 (rwh) */
#define GPTA1_SRSS3_LTC45_POS                _GPTA1_UL(13)
#define GPTA1_SRSS3_LTC45_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC46 (rwh) */
#define GPTA1_SRSS3_LTC46_POS                _GPTA1_UL(14)
#define GPTA1_SRSS3_LTC46_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC47 (rwh) */
#define GPTA1_SRSS3_LTC47_POS                _GPTA1_UL(15)
#define GPTA1_SRSS3_LTC47_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC48 (rwh) */
#define GPTA1_SRSS3_LTC48_POS                _GPTA1_UL(16)
#define GPTA1_SRSS3_LTC48_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC49 (rwh) */
#define GPTA1_SRSS3_LTC49_POS                _GPTA1_UL(17)
#define GPTA1_SRSS3_LTC49_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC50 (rwh) */
#define GPTA1_SRSS3_LTC50_POS                _GPTA1_UL(18)
#define GPTA1_SRSS3_LTC50_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC51 (rwh) */
#define GPTA1_SRSS3_LTC51_POS                _GPTA1_UL(19)
#define GPTA1_SRSS3_LTC51_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC52 (rwh) */
#define GPTA1_SRSS3_LTC52_POS                _GPTA1_UL(20)
#define GPTA1_SRSS3_LTC52_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC53 (rwh) */
#define GPTA1_SRSS3_LTC53_POS                _GPTA1_UL(21)
#define GPTA1_SRSS3_LTC53_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC54 (rwh) */
#define GPTA1_SRSS3_LTC54_POS                _GPTA1_UL(22)
#define GPTA1_SRSS3_LTC54_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC55 (rwh) */
#define GPTA1_SRSS3_LTC55_POS                _GPTA1_UL(23)
#define GPTA1_SRSS3_LTC55_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC56 (rwh) */
#define GPTA1_SRSS3_LTC56_POS                _GPTA1_UL(24)
#define GPTA1_SRSS3_LTC56_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC57 (rwh) */
#define GPTA1_SRSS3_LTC57_POS                _GPTA1_UL(25)
#define GPTA1_SRSS3_LTC57_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC58 (rwh) */
#define GPTA1_SRSS3_LTC58_POS                _GPTA1_UL(26)
#define GPTA1_SRSS3_LTC58_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC59 (rwh) */
#define GPTA1_SRSS3_LTC59_POS                _GPTA1_UL(27)
#define GPTA1_SRSS3_LTC59_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC60 (rwh) */
#define GPTA1_SRSS3_LTC60_POS                _GPTA1_UL(28)
#define GPTA1_SRSS3_LTC60_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC61 (rwh) */
#define GPTA1_SRSS3_LTC61_POS                _GPTA1_UL(29)
#define GPTA1_SRSS3_LTC61_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC62 (rwh) */
#define GPTA1_SRSS3_LTC62_POS                _GPTA1_UL(30)
#define GPTA1_SRSS3_LTC62_LEN                _GPTA1_UL(1)

/* GPTA1_SRSS3_LTC63 (rwh) */
#define GPTA1_SRSS3_LTC63_POS                _GPTA1_UL(31)
#define GPTA1_SRSS3_LTC63_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC01R (rw) */
#define GPTA1_SRNR_GTC01R_POS                _GPTA1_UL(0)
#define GPTA1_SRNR_GTC01R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC03R (rw) */
#define GPTA1_SRNR_GTC03R_POS                _GPTA1_UL(1)
#define GPTA1_SRNR_GTC03R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC05R (rw) */
#define GPTA1_SRNR_GTC05R_POS                _GPTA1_UL(2)
#define GPTA1_SRNR_GTC05R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC07R (rw) */
#define GPTA1_SRNR_GTC07R_POS                _GPTA1_UL(3)
#define GPTA1_SRNR_GTC07R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC09R (rw) */
#define GPTA1_SRNR_GTC09R_POS                _GPTA1_UL(4)
#define GPTA1_SRNR_GTC09R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC11R (rw) */
#define GPTA1_SRNR_GTC11R_POS                _GPTA1_UL(5)
#define GPTA1_SRNR_GTC11R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC13R (rw) */
#define GPTA1_SRNR_GTC13R_POS                _GPTA1_UL(6)
#define GPTA1_SRNR_GTC13R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC15R (rw) */
#define GPTA1_SRNR_GTC15R_POS                _GPTA1_UL(7)
#define GPTA1_SRNR_GTC15R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC17R (rw) */
#define GPTA1_SRNR_GTC17R_POS                _GPTA1_UL(8)
#define GPTA1_SRNR_GTC17R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC19R (rw) */
#define GPTA1_SRNR_GTC19R_POS                _GPTA1_UL(9)
#define GPTA1_SRNR_GTC19R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC21R (rw) */
#define GPTA1_SRNR_GTC21R_POS                _GPTA1_UL(10)
#define GPTA1_SRNR_GTC21R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC23R (rw) */
#define GPTA1_SRNR_GTC23R_POS                _GPTA1_UL(11)
#define GPTA1_SRNR_GTC23R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC25R (rw) */
#define GPTA1_SRNR_GTC25R_POS                _GPTA1_UL(12)
#define GPTA1_SRNR_GTC25R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC27R (rw) */
#define GPTA1_SRNR_GTC27R_POS                _GPTA1_UL(13)
#define GPTA1_SRNR_GTC27R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC29R (rw) */
#define GPTA1_SRNR_GTC29R_POS                _GPTA1_UL(14)
#define GPTA1_SRNR_GTC29R_LEN                _GPTA1_UL(1)

/* GPTA1_SRNR_GTC31R (rw) */
#define GPTA1_SRNR_GTC31R_POS                _GPTA1_UL(15)
#define GPTA1_SRNR_GTC31R_LEN                _GPTA1_UL(1)

/* GPTA1_MRACTL_MAEN (rw) */
#define GPTA1_MRACTL_MAEN_POS                _GPTA1_UL(0)
#define GPTA1_MRACTL_MAEN_LEN                _GPTA1_UL(1)

/* GPTA1_MRACTL_WCRES (w) */
#define GPTA1_MRACTL_WCRES_POS               _GPTA1_UL(1)
#define GPTA1_MRACTL_WCRES_LEN               _GPTA1_UL(1)

/* GPTA1_MRACTL_FIFOFULL (r) */
#define GPTA1_MRACTL_FIFOFULL_POS            _GPTA1_UL(2)
#define GPTA1_MRACTL_FIFOFULL_LEN            _GPTA1_UL(1)

/* GPTA1_MRACTL_FIFOFILLCNT (r) */
#define GPTA1_MRACTL_FIFOFILLCNT_POS         _GPTA1_UL(8)
#define GPTA1_MRACTL_FIFOFILLCNT_LEN         _GPTA1_UL(6)

/* GPTA1_MRADIN_DATAIN (w) */
#define GPTA1_MRADIN_DATAIN_POS              _GPTA1_UL(0)
#define GPTA1_MRADIN_DATAIN_LEN              _GPTA1_UL(32)

/* GPTA1_MRADOUT_DATAOUT (rh) */
#define GPTA1_MRADOUT_DATAOUT_POS            _GPTA1_UL(0)
#define GPTA1_MRADOUT_DATAOUT_LEN            _GPTA1_UL(32)

/* GPTA1_FPCSTAT_REG0 (rwh) */
#define GPTA1_FPCSTAT_REG0_POS               _GPTA1_UL(0)
#define GPTA1_FPCSTAT_REG0_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_REG1 (rwh) */
#define GPTA1_FPCSTAT_REG1_POS               _GPTA1_UL(1)
#define GPTA1_FPCSTAT_REG1_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_REG2 (rwh) */
#define GPTA1_FPCSTAT_REG2_POS               _GPTA1_UL(2)
#define GPTA1_FPCSTAT_REG2_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_REG3 (rwh) */
#define GPTA1_FPCSTAT_REG3_POS               _GPTA1_UL(3)
#define GPTA1_FPCSTAT_REG3_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_REG4 (rwh) */
#define GPTA1_FPCSTAT_REG4_POS               _GPTA1_UL(4)
#define GPTA1_FPCSTAT_REG4_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_REG5 (rwh) */
#define GPTA1_FPCSTAT_REG5_POS               _GPTA1_UL(5)
#define GPTA1_FPCSTAT_REG5_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG0 (rwh) */
#define GPTA1_FPCSTAT_FEG0_POS               _GPTA1_UL(8)
#define GPTA1_FPCSTAT_FEG0_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG1 (rwh) */
#define GPTA1_FPCSTAT_FEG1_POS               _GPTA1_UL(9)
#define GPTA1_FPCSTAT_FEG1_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG2 (rwh) */
#define GPTA1_FPCSTAT_FEG2_POS               _GPTA1_UL(10)
#define GPTA1_FPCSTAT_FEG2_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG3 (rwh) */
#define GPTA1_FPCSTAT_FEG3_POS               _GPTA1_UL(11)
#define GPTA1_FPCSTAT_FEG3_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG4 (rwh) */
#define GPTA1_FPCSTAT_FEG4_POS               _GPTA1_UL(12)
#define GPTA1_FPCSTAT_FEG4_LEN               _GPTA1_UL(1)

/* GPTA1_FPCSTAT_FEG5 (rwh) */
#define GPTA1_FPCSTAT_FEG5_POS               _GPTA1_UL(13)
#define GPTA1_FPCSTAT_FEG5_LEN               _GPTA1_UL(1)

/* GPTA1_FPCCTR0_CMP (rw) */
#define GPTA1_FPCCTR0_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR0_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR0_MOD (rw) */
#define GPTA1_FPCCTR0_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR0_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR0_IPS (rw) */
#define GPTA1_FPCCTR0_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR0_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR0_CLK (rw) */
#define GPTA1_FPCCTR0_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR0_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR0_RTG (rw) */
#define GPTA1_FPCCTR0_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR0_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM0_TIM (rwh) */
#define GPTA1_FPCTIM0_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM0_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR1_CMP (rw) */
#define GPTA1_FPCCTR1_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR1_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR1_MOD (rw) */
#define GPTA1_FPCCTR1_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR1_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR1_IPS (rw) */
#define GPTA1_FPCCTR1_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR1_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR1_CLK (rw) */
#define GPTA1_FPCCTR1_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR1_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR1_RTG (rw) */
#define GPTA1_FPCCTR1_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR1_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM1_TIM (rwh) */
#define GPTA1_FPCTIM1_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM1_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR2_CMP (rw) */
#define GPTA1_FPCCTR2_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR2_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR2_MOD (rw) */
#define GPTA1_FPCCTR2_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR2_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR2_IPS (rw) */
#define GPTA1_FPCCTR2_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR2_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR2_CLK (rw) */
#define GPTA1_FPCCTR2_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR2_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR2_RTG (rw) */
#define GPTA1_FPCCTR2_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR2_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM2_TIM (rwh) */
#define GPTA1_FPCTIM2_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM2_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR3_CMP (rw) */
#define GPTA1_FPCCTR3_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR3_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR3_MOD (rw) */
#define GPTA1_FPCCTR3_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR3_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR3_IPS (rw) */
#define GPTA1_FPCCTR3_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR3_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR3_CLK (rw) */
#define GPTA1_FPCCTR3_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR3_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR3_RTG (rw) */
#define GPTA1_FPCCTR3_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR3_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM3_TIM (rwh) */
#define GPTA1_FPCTIM3_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM3_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR4_CMP (rw) */
#define GPTA1_FPCCTR4_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR4_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR4_MOD (rw) */
#define GPTA1_FPCCTR4_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR4_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR4_IPS (rw) */
#define GPTA1_FPCCTR4_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR4_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR4_CLK (rw) */
#define GPTA1_FPCCTR4_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR4_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR4_RTG (rw) */
#define GPTA1_FPCCTR4_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR4_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM4_TIM (rwh) */
#define GPTA1_FPCTIM4_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM4_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR5_CMP (rw) */
#define GPTA1_FPCCTR5_CMP_POS                _GPTA1_UL(0)
#define GPTA1_FPCCTR5_CMP_LEN                _GPTA1_UL(16)

/* GPTA1_FPCCTR5_MOD (rw) */
#define GPTA1_FPCCTR5_MOD_POS                _GPTA1_UL(16)
#define GPTA1_FPCCTR5_MOD_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR5_IPS (rw) */
#define GPTA1_FPCCTR5_IPS_POS                _GPTA1_UL(19)
#define GPTA1_FPCCTR5_IPS_LEN                _GPTA1_UL(3)

/* GPTA1_FPCCTR5_CLK (rw) */
#define GPTA1_FPCCTR5_CLK_POS                _GPTA1_UL(22)
#define GPTA1_FPCCTR5_CLK_LEN                _GPTA1_UL(2)

/* GPTA1_FPCCTR5_RTG (rw) */
#define GPTA1_FPCCTR5_RTG_POS                _GPTA1_UL(24)
#define GPTA1_FPCCTR5_RTG_LEN                _GPTA1_UL(1)

/* GPTA1_FPCTIM5_TIM (rwh) */
#define GPTA1_FPCTIM5_TIM_POS                _GPTA1_UL(0)
#define GPTA1_FPCTIM5_TIM_LEN                _GPTA1_UL(16)

/* GPTA1_PDLCTR_MUX0 (rw) */
#define GPTA1_PDLCTR_MUX0_POS                _GPTA1_UL(0)
#define GPTA1_PDLCTR_MUX0_LEN                _GPTA1_UL(1)

/* GPTA1_PDLCTR_TSE0 (rw) */
#define GPTA1_PDLCTR_TSE0_POS                _GPTA1_UL(1)
#define GPTA1_PDLCTR_TSE0_LEN                _GPTA1_UL(1)

/* GPTA1_PDLCTR_ERR0 (rwh) */
#define GPTA1_PDLCTR_ERR0_POS                _GPTA1_UL(2)
#define GPTA1_PDLCTR_ERR0_LEN                _GPTA1_UL(1)

/* GPTA1_PDLCTR_MUX1 (rw) */
#define GPTA1_PDLCTR_MUX1_POS                _GPTA1_UL(4)
#define GPTA1_PDLCTR_MUX1_LEN                _GPTA1_UL(1)

/* GPTA1_PDLCTR_TSE1 (rw) */
#define GPTA1_PDLCTR_TSE1_POS                _GPTA1_UL(5)
#define GPTA1_PDLCTR_TSE1_LEN                _GPTA1_UL(1)

/* GPTA1_PDLCTR_ERR1 (rwh) */
#define GPTA1_PDLCTR_ERR1_POS                _GPTA1_UL(6)
#define GPTA1_PDLCTR_ERR1_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_RCA (rw) */
#define GPTA1_DCMCTR0_RCA_POS                _GPTA1_UL(0)
#define GPTA1_DCMCTR0_RCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_OCA (rw) */
#define GPTA1_DCMCTR0_OCA_POS                _GPTA1_UL(1)
#define GPTA1_DCMCTR0_OCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_RZE (rw) */
#define GPTA1_DCMCTR0_RZE_POS                _GPTA1_UL(2)
#define GPTA1_DCMCTR0_RZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_FZE (rw) */
#define GPTA1_DCMCTR0_FZE_POS                _GPTA1_UL(3)
#define GPTA1_DCMCTR0_FZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_RCK (rw) */
#define GPTA1_DCMCTR0_RCK_POS                _GPTA1_UL(4)
#define GPTA1_DCMCTR0_RCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_FCK (rw) */
#define GPTA1_DCMCTR0_FCK_POS                _GPTA1_UL(5)
#define GPTA1_DCMCTR0_FCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_QCK (w) */
#define GPTA1_DCMCTR0_QCK_POS                _GPTA1_UL(6)
#define GPTA1_DCMCTR0_QCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_RRE (rw) */
#define GPTA1_DCMCTR0_RRE_POS                _GPTA1_UL(7)
#define GPTA1_DCMCTR0_RRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_FRE (rw) */
#define GPTA1_DCMCTR0_FRE_POS                _GPTA1_UL(8)
#define GPTA1_DCMCTR0_FRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR0_CRE (rw) */
#define GPTA1_DCMCTR0_CRE_POS                _GPTA1_UL(9)
#define GPTA1_DCMCTR0_CRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMTIM0_TIM (rwh) */
#define GPTA1_DCMTIM0_TIM_POS                _GPTA1_UL(0)
#define GPTA1_DCMTIM0_TIM_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCAV0_CAV (rwh) */
#define GPTA1_DCMCAV0_CAV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCAV0_CAV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCOV0_COV (rwh) */
#define GPTA1_DCMCOV0_COV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCOV0_COV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCTR1_RCA (rw) */
#define GPTA1_DCMCTR1_RCA_POS                _GPTA1_UL(0)
#define GPTA1_DCMCTR1_RCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_OCA (rw) */
#define GPTA1_DCMCTR1_OCA_POS                _GPTA1_UL(1)
#define GPTA1_DCMCTR1_OCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_RZE (rw) */
#define GPTA1_DCMCTR1_RZE_POS                _GPTA1_UL(2)
#define GPTA1_DCMCTR1_RZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_FZE (rw) */
#define GPTA1_DCMCTR1_FZE_POS                _GPTA1_UL(3)
#define GPTA1_DCMCTR1_FZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_RCK (rw) */
#define GPTA1_DCMCTR1_RCK_POS                _GPTA1_UL(4)
#define GPTA1_DCMCTR1_RCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_FCK (rw) */
#define GPTA1_DCMCTR1_FCK_POS                _GPTA1_UL(5)
#define GPTA1_DCMCTR1_FCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_QCK (w) */
#define GPTA1_DCMCTR1_QCK_POS                _GPTA1_UL(6)
#define GPTA1_DCMCTR1_QCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_RRE (rw) */
#define GPTA1_DCMCTR1_RRE_POS                _GPTA1_UL(7)
#define GPTA1_DCMCTR1_RRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_FRE (rw) */
#define GPTA1_DCMCTR1_FRE_POS                _GPTA1_UL(8)
#define GPTA1_DCMCTR1_FRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR1_CRE (rw) */
#define GPTA1_DCMCTR1_CRE_POS                _GPTA1_UL(9)
#define GPTA1_DCMCTR1_CRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMTIM1_TIM (rwh) */
#define GPTA1_DCMTIM1_TIM_POS                _GPTA1_UL(0)
#define GPTA1_DCMTIM1_TIM_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCAV1_CAV (rwh) */
#define GPTA1_DCMCAV1_CAV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCAV1_CAV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCOV1_COV (rwh) */
#define GPTA1_DCMCOV1_COV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCOV1_COV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCTR2_RCA (rw) */
#define GPTA1_DCMCTR2_RCA_POS                _GPTA1_UL(0)
#define GPTA1_DCMCTR2_RCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_OCA (rw) */
#define GPTA1_DCMCTR2_OCA_POS                _GPTA1_UL(1)
#define GPTA1_DCMCTR2_OCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_RZE (rw) */
#define GPTA1_DCMCTR2_RZE_POS                _GPTA1_UL(2)
#define GPTA1_DCMCTR2_RZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_FZE (rw) */
#define GPTA1_DCMCTR2_FZE_POS                _GPTA1_UL(3)
#define GPTA1_DCMCTR2_FZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_RCK (rw) */
#define GPTA1_DCMCTR2_RCK_POS                _GPTA1_UL(4)
#define GPTA1_DCMCTR2_RCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_FCK (rw) */
#define GPTA1_DCMCTR2_FCK_POS                _GPTA1_UL(5)
#define GPTA1_DCMCTR2_FCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_QCK (w) */
#define GPTA1_DCMCTR2_QCK_POS                _GPTA1_UL(6)
#define GPTA1_DCMCTR2_QCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_RRE (rw) */
#define GPTA1_DCMCTR2_RRE_POS                _GPTA1_UL(7)
#define GPTA1_DCMCTR2_RRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_FRE (rw) */
#define GPTA1_DCMCTR2_FRE_POS                _GPTA1_UL(8)
#define GPTA1_DCMCTR2_FRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR2_CRE (rw) */
#define GPTA1_DCMCTR2_CRE_POS                _GPTA1_UL(9)
#define GPTA1_DCMCTR2_CRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMTIM2_TIM (rwh) */
#define GPTA1_DCMTIM2_TIM_POS                _GPTA1_UL(0)
#define GPTA1_DCMTIM2_TIM_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCAV2_CAV (rwh) */
#define GPTA1_DCMCAV2_CAV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCAV2_CAV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCOV2_COV (rwh) */
#define GPTA1_DCMCOV2_COV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCOV2_COV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCTR3_RCA (rw) */
#define GPTA1_DCMCTR3_RCA_POS                _GPTA1_UL(0)
#define GPTA1_DCMCTR3_RCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_OCA (rw) */
#define GPTA1_DCMCTR3_OCA_POS                _GPTA1_UL(1)
#define GPTA1_DCMCTR3_OCA_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_RZE (rw) */
#define GPTA1_DCMCTR3_RZE_POS                _GPTA1_UL(2)
#define GPTA1_DCMCTR3_RZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_FZE (rw) */
#define GPTA1_DCMCTR3_FZE_POS                _GPTA1_UL(3)
#define GPTA1_DCMCTR3_FZE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_RCK (rw) */
#define GPTA1_DCMCTR3_RCK_POS                _GPTA1_UL(4)
#define GPTA1_DCMCTR3_RCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_FCK (rw) */
#define GPTA1_DCMCTR3_FCK_POS                _GPTA1_UL(5)
#define GPTA1_DCMCTR3_FCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_QCK (w) */
#define GPTA1_DCMCTR3_QCK_POS                _GPTA1_UL(6)
#define GPTA1_DCMCTR3_QCK_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_RRE (rw) */
#define GPTA1_DCMCTR3_RRE_POS                _GPTA1_UL(7)
#define GPTA1_DCMCTR3_RRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_FRE (rw) */
#define GPTA1_DCMCTR3_FRE_POS                _GPTA1_UL(8)
#define GPTA1_DCMCTR3_FRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMCTR3_CRE (rw) */
#define GPTA1_DCMCTR3_CRE_POS                _GPTA1_UL(9)
#define GPTA1_DCMCTR3_CRE_LEN                _GPTA1_UL(1)

/* GPTA1_DCMTIM3_TIM (rwh) */
#define GPTA1_DCMTIM3_TIM_POS                _GPTA1_UL(0)
#define GPTA1_DCMTIM3_TIM_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCAV3_CAV (rwh) */
#define GPTA1_DCMCAV3_CAV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCAV3_CAV_LEN                _GPTA1_UL(24)

/* GPTA1_DCMCOV3_COV (rwh) */
#define GPTA1_DCMCOV3_COV_POS                _GPTA1_UL(0)
#define GPTA1_DCMCOV3_COV_LEN                _GPTA1_UL(24)

/* GPTA1_PLLCTR_MUX (rw) */
#define GPTA1_PLLCTR_MUX_POS                 _GPTA1_UL(0)
#define GPTA1_PLLCTR_MUX_LEN                 _GPTA1_UL(2)

/* GPTA1_PLLCTR_AEN (rw) */
#define GPTA1_PLLCTR_AEN_POS                 _GPTA1_UL(2)
#define GPTA1_PLLCTR_AEN_LEN                 _GPTA1_UL(1)

/* GPTA1_PLLCTR_PEN (rwh) */
#define GPTA1_PLLCTR_PEN_POS                 _GPTA1_UL(3)
#define GPTA1_PLLCTR_PEN_LEN                 _GPTA1_UL(1)

/* GPTA1_PLLCTR_REN (rw) */
#define GPTA1_PLLCTR_REN_POS                 _GPTA1_UL(4)
#define GPTA1_PLLCTR_REN_LEN                 _GPTA1_UL(1)

/* GPTA1_PLLMTI_MTI (rw) */
#define GPTA1_PLLMTI_MTI_POS                 _GPTA1_UL(0)
#define GPTA1_PLLMTI_MTI_LEN                 _GPTA1_UL(16)

/* GPTA1_PLLCNT_CNT (rwh) */
#define GPTA1_PLLCNT_CNT_POS                 _GPTA1_UL(0)
#define GPTA1_PLLCNT_CNT_LEN                 _GPTA1_UL(16)

/* GPTA1_PLLSTP_STP (rw) */
#define GPTA1_PLLSTP_STP_POS                 _GPTA1_UL(0)
#define GPTA1_PLLSTP_STP_LEN                 _GPTA1_UL(16)

/* GPTA1_PLLREV_REV (rw) */
#define GPTA1_PLLREV_REV_POS                 _GPTA1_UL(0)
#define GPTA1_PLLREV_REV_LEN                 _GPTA1_UL(24)

/* GPTA1_PLLDTR_DTR (rwh) */
#define GPTA1_PLLDTR_DTR_POS                 _GPTA1_UL(0)
#define GPTA1_PLLDTR_DTR_LEN                 _GPTA1_UL(25)

/* GPTA1_CKBCTR_DFA02 (rw) */
#define GPTA1_CKBCTR_DFA02_POS               _GPTA1_UL(0)
#define GPTA1_CKBCTR_DFA02_LEN               _GPTA1_UL(4)

/* GPTA1_CKBCTR_DFA04 (rw) */
#define GPTA1_CKBCTR_DFA04_POS               _GPTA1_UL(4)
#define GPTA1_CKBCTR_DFA04_LEN               _GPTA1_UL(4)

/* GPTA1_CKBCTR_DFA06 (rw) */
#define GPTA1_CKBCTR_DFA06_POS               _GPTA1_UL(8)
#define GPTA1_CKBCTR_DFA06_LEN               _GPTA1_UL(4)

/* GPTA1_CKBCTR_DFA07 (rw) */
#define GPTA1_CKBCTR_DFA07_POS               _GPTA1_UL(12)
#define GPTA1_CKBCTR_DFA07_LEN               _GPTA1_UL(4)

/* GPTA1_CKBCTR_DFA03 (rw) */
#define GPTA1_CKBCTR_DFA03_POS               _GPTA1_UL(16)
#define GPTA1_CKBCTR_DFA03_LEN               _GPTA1_UL(2)

/* GPTA1_CKBCTR_DFALTC (rw) */
#define GPTA1_CKBCTR_DFALTC_POS              _GPTA1_UL(18)
#define GPTA1_CKBCTR_DFALTC_LEN              _GPTA1_UL(3)

/* GPTA1_GTCTR0_SCO (rw) */
#define GPTA1_GTCTR0_SCO_POS                 _GPTA1_UL(0)
#define GPTA1_GTCTR0_SCO_LEN                 _GPTA1_UL(4)

/* GPTA1_GTCTR0_MUX (rw) */
#define GPTA1_GTCTR0_MUX_POS                 _GPTA1_UL(4)
#define GPTA1_GTCTR0_MUX_LEN                 _GPTA1_UL(3)

/* GPTA1_GTCTR0_REN (rw) */
#define GPTA1_GTCTR0_REN_POS                 _GPTA1_UL(7)
#define GPTA1_GTCTR0_REN_LEN                 _GPTA1_UL(1)

/* GPTA1_GTREV0_REV (rw) */
#define GPTA1_GTREV0_REV_POS                 _GPTA1_UL(0)
#define GPTA1_GTREV0_REV_LEN                 _GPTA1_UL(24)

/* GPTA1_GTTIM0_TIM (rwh) */
#define GPTA1_GTTIM0_TIM_POS                 _GPTA1_UL(0)
#define GPTA1_GTTIM0_TIM_LEN                 _GPTA1_UL(24)

/* GPTA1_GTCTR1_SCO (rw) */
#define GPTA1_GTCTR1_SCO_POS                 _GPTA1_UL(0)
#define GPTA1_GTCTR1_SCO_LEN                 _GPTA1_UL(4)

/* GPTA1_GTCTR1_MUX (rw) */
#define GPTA1_GTCTR1_MUX_POS                 _GPTA1_UL(4)
#define GPTA1_GTCTR1_MUX_LEN                 _GPTA1_UL(3)

/* GPTA1_GTCTR1_REN (rw) */
#define GPTA1_GTCTR1_REN_POS                 _GPTA1_UL(7)
#define GPTA1_GTCTR1_REN_LEN                 _GPTA1_UL(1)

/* GPTA1_GTREV1_REV (rw) */
#define GPTA1_GTREV1_REV_POS                 _GPTA1_UL(0)
#define GPTA1_GTREV1_REV_LEN                 _GPTA1_UL(24)

/* GPTA1_GTTIM1_TIM (rwh) */
#define GPTA1_GTTIM1_TIM_POS                 _GPTA1_UL(0)
#define GPTA1_GTTIM1_TIM_LEN                 _GPTA1_UL(24)

/* GPTA1_GTCCTR_MOD (rw) */
#define GPTA1_GTCCTR_MOD_POS                 _GPTA1_UL(0)
#define GPTA1_GTCCTR_MOD_LEN                 _GPTA1_UL(2)

/* GPTA1_GTCCTR_OSM (rw) */
#define GPTA1_GTCCTR_OSM_POS                 _GPTA1_UL(2)
#define GPTA1_GTCCTR_OSM_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_REN (rw) */
#define GPTA1_GTCCTR_REN_POS                 _GPTA1_UL(3)
#define GPTA1_GTCCTR_REN_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_RED (rw) */
#define GPTA1_GTCCTR_RED_POS                 _GPTA1_UL(4)
#define GPTA1_GTCCTR_RED_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_CAC (rw) */
#define GPTA1_GTCCTR_CAC_POS                 _GPTA1_UL(5)
#define GPTA1_GTCCTR_CAC_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_CAT (rw) */
#define GPTA1_GTCCTR_CAT_POS                 _GPTA1_UL(6)
#define GPTA1_GTCCTR_CAT_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_BYP (rw) */
#define GPTA1_GTCCTR_BYP_POS                 _GPTA1_UL(7)
#define GPTA1_GTCCTR_BYP_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_EOA (rwh) */
#define GPTA1_GTCCTR_EOA_POS                 _GPTA1_UL(8)
#define GPTA1_GTCCTR_EOA_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_CEN (rh) */
#define GPTA1_GTCCTR_CEN_POS                 _GPTA1_UL(10)
#define GPTA1_GTCCTR_CEN_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_OCM (rw) */
#define GPTA1_GTCCTR_OCM_POS                 _GPTA1_UL(11)
#define GPTA1_GTCCTR_OCM_LEN                 _GPTA1_UL(3)

/* GPTA1_GTCCTR_OIA (rw) */
#define GPTA1_GTCCTR_OIA_POS                 _GPTA1_UL(14)
#define GPTA1_GTCCTR_OIA_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_OUT (rh) */
#define GPTA1_GTCCTR_OUT_POS                 _GPTA1_UL(15)
#define GPTA1_GTCCTR_OUT_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_GES (rw) */
#define GPTA1_GTCCTR_GES_POS                 _GPTA1_UL(4)
#define GPTA1_GTCCTR_GES_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_FED (rw) */
#define GPTA1_GTCCTR_FED_POS                 _GPTA1_UL(5)
#define GPTA1_GTCCTR_FED_LEN                 _GPTA1_UL(1)

/* GPTA1_GTCCTR_NE (rw) */
#define GPTA1_GTCCTR_NE_POS                  _GPTA1_UL(6)
#define GPTA1_GTCCTR_NE_LEN                  _GPTA1_UL(1)

/* GPTA1_GTCXR_X (rwh) */
#define GPTA1_GTCXR_X_POS                    _GPTA1_UL(0)
#define GPTA1_GTCXR_X_LEN                    _GPTA1_UL(24)

/* GPTA1_LTCCTR_MOD (rw) */
#define GPTA1_LTCCTR_MOD_POS                 _GPTA1_UL(0)
#define GPTA1_LTCCTR_MOD_LEN                 _GPTA1_UL(2)

/* GPTA1_LTCCTR_OSM (rw) */
#define GPTA1_LTCCTR_OSM_POS                 _GPTA1_UL(2)
#define GPTA1_LTCCTR_OSM_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_REN (rw) */
#define GPTA1_LTCCTR_REN_POS                 _GPTA1_UL(3)
#define GPTA1_LTCCTR_REN_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_SOL (rw) */
#define GPTA1_LTCCTR_SOL_POS                 _GPTA1_UL(4)
#define GPTA1_LTCCTR_SOL_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_FED (rw) */
#define GPTA1_LTCCTR_FED_POS                 _GPTA1_UL(5)
#define GPTA1_LTCCTR_FED_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_BYP (rw) */
#define GPTA1_LTCCTR_BYP_POS                 _GPTA1_UL(6)
#define GPTA1_LTCCTR_BYP_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_EOA (rwh) */
#define GPTA1_LTCCTR_EOA_POS                 _GPTA1_UL(7)
#define GPTA1_LTCCTR_EOA_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_ILM (rw) */
#define GPTA1_LTCCTR_ILM_POS                 _GPTA1_UL(8)
#define GPTA1_LTCCTR_ILM_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_SLL (rh) */
#define GPTA1_LTCCTR_SLL_POS                 _GPTA1_UL(9)
#define GPTA1_LTCCTR_SLL_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_CEN (rh) */
#define GPTA1_LTCCTR_CEN_POS                 _GPTA1_UL(10)
#define GPTA1_LTCCTR_CEN_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_OCM (rw) */
#define GPTA1_LTCCTR_OCM_POS                 _GPTA1_UL(11)
#define GPTA1_LTCCTR_OCM_LEN                 _GPTA1_UL(3)

/* GPTA1_LTCCTR_OIA (rw) */
#define GPTA1_LTCCTR_OIA_POS                 _GPTA1_UL(14)
#define GPTA1_LTCCTR_OIA_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_OUT (rh) */
#define GPTA1_LTCCTR_OUT_POS                 _GPTA1_UL(15)
#define GPTA1_LTCCTR_OUT_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_GBYP (rw) */
#define GPTA1_LTCCTR_GBYP_POS                _GPTA1_UL(16)
#define GPTA1_LTCCTR_GBYP_LEN                _GPTA1_UL(1)

/* GPTA1_LTCCTR_BRM (rw) */
#define GPTA1_LTCCTR_BRM_POS                 _GPTA1_UL(0)
#define GPTA1_LTCCTR_BRM_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_RED (rw) */
#define GPTA1_LTCCTR_RED_POS                 _GPTA1_UL(4)
#define GPTA1_LTCCTR_RED_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_AIL (rw) */
#define GPTA1_LTCCTR_AIL_POS                 _GPTA1_UL(5)
#define GPTA1_LTCCTR_AIL_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_SLO (rwh) */
#define GPTA1_LTCCTR_SLO_POS                 _GPTA1_UL(6)
#define GPTA1_LTCCTR_SLO_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_CUDCLR (w) */
#define GPTA1_LTCCTR_CUDCLR_POS              _GPTA1_UL(7)
#define GPTA1_LTCCTR_CUDCLR_LEN              _GPTA1_UL(1)

/* GPTA1_LTCCTR_CUD (rwh) */
#define GPTA1_LTCCTR_CUD_POS                 _GPTA1_UL(9)
#define GPTA1_LTCCTR_CUD_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_PEN (rw) */
#define GPTA1_LTCCTR_PEN_POS                 _GPTA1_UL(4)
#define GPTA1_LTCCTR_PEN_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCCTR_SOH (rw) */
#define GPTA1_LTCCTR_SOH_POS                 _GPTA1_UL(5)
#define GPTA1_LTCCTR_SOH_LEN                 _GPTA1_UL(1)

/* GPTA1_LTCXR_X (rwh) */
#define GPTA1_LTCXR_X_POS                    _GPTA1_UL(0)
#define GPTA1_LTCXR_X_LEN                    _GPTA1_UL(16)

/* GPTA1_SRC37_SRPN (rw) */
#define GPTA1_SRC37_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC37_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC37_TOS (rw) */
#define GPTA1_SRC37_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC37_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC37_SRE (rw) */
#define GPTA1_SRC37_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC37_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC37_SRR (rh) */
#define GPTA1_SRC37_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC37_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC37_CLRR (w) */
#define GPTA1_SRC37_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC37_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC37_SETR (w) */
#define GPTA1_SRC37_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC37_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC36_SRPN (rw) */
#define GPTA1_SRC36_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC36_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC36_TOS (rw) */
#define GPTA1_SRC36_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC36_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC36_SRE (rw) */
#define GPTA1_SRC36_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC36_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC36_SRR (rh) */
#define GPTA1_SRC36_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC36_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC36_CLRR (w) */
#define GPTA1_SRC36_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC36_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC36_SETR (w) */
#define GPTA1_SRC36_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC36_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC35_SRPN (rw) */
#define GPTA1_SRC35_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC35_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC35_TOS (rw) */
#define GPTA1_SRC35_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC35_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC35_SRE (rw) */
#define GPTA1_SRC35_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC35_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC35_SRR (rh) */
#define GPTA1_SRC35_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC35_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC35_CLRR (w) */
#define GPTA1_SRC35_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC35_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC35_SETR (w) */
#define GPTA1_SRC35_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC35_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC34_SRPN (rw) */
#define GPTA1_SRC34_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC34_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC34_TOS (rw) */
#define GPTA1_SRC34_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC34_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC34_SRE (rw) */
#define GPTA1_SRC34_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC34_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC34_SRR (rh) */
#define GPTA1_SRC34_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC34_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC34_CLRR (w) */
#define GPTA1_SRC34_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC34_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC34_SETR (w) */
#define GPTA1_SRC34_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC34_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC33_SRPN (rw) */
#define GPTA1_SRC33_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC33_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC33_TOS (rw) */
#define GPTA1_SRC33_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC33_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC33_SRE (rw) */
#define GPTA1_SRC33_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC33_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC33_SRR (rh) */
#define GPTA1_SRC33_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC33_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC33_CLRR (w) */
#define GPTA1_SRC33_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC33_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC33_SETR (w) */
#define GPTA1_SRC33_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC33_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC32_SRPN (rw) */
#define GPTA1_SRC32_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC32_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC32_TOS (rw) */
#define GPTA1_SRC32_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC32_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC32_SRE (rw) */
#define GPTA1_SRC32_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC32_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC32_SRR (rh) */
#define GPTA1_SRC32_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC32_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC32_CLRR (w) */
#define GPTA1_SRC32_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC32_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC32_SETR (w) */
#define GPTA1_SRC32_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC32_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC31_SRPN (rw) */
#define GPTA1_SRC31_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC31_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC31_TOS (rw) */
#define GPTA1_SRC31_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC31_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC31_SRE (rw) */
#define GPTA1_SRC31_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC31_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC31_SRR (rh) */
#define GPTA1_SRC31_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC31_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC31_CLRR (w) */
#define GPTA1_SRC31_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC31_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC31_SETR (w) */
#define GPTA1_SRC31_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC31_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC30_SRPN (rw) */
#define GPTA1_SRC30_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC30_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC30_TOS (rw) */
#define GPTA1_SRC30_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC30_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC30_SRE (rw) */
#define GPTA1_SRC30_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC30_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC30_SRR (rh) */
#define GPTA1_SRC30_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC30_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC30_CLRR (w) */
#define GPTA1_SRC30_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC30_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC30_SETR (w) */
#define GPTA1_SRC30_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC30_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC29_SRPN (rw) */
#define GPTA1_SRC29_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC29_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC29_TOS (rw) */
#define GPTA1_SRC29_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC29_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC29_SRE (rw) */
#define GPTA1_SRC29_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC29_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC29_SRR (rh) */
#define GPTA1_SRC29_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC29_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC29_CLRR (w) */
#define GPTA1_SRC29_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC29_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC29_SETR (w) */
#define GPTA1_SRC29_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC29_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC28_SRPN (rw) */
#define GPTA1_SRC28_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC28_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC28_TOS (rw) */
#define GPTA1_SRC28_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC28_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC28_SRE (rw) */
#define GPTA1_SRC28_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC28_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC28_SRR (rh) */
#define GPTA1_SRC28_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC28_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC28_CLRR (w) */
#define GPTA1_SRC28_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC28_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC28_SETR (w) */
#define GPTA1_SRC28_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC28_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC27_SRPN (rw) */
#define GPTA1_SRC27_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC27_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC27_TOS (rw) */
#define GPTA1_SRC27_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC27_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC27_SRE (rw) */
#define GPTA1_SRC27_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC27_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC27_SRR (rh) */
#define GPTA1_SRC27_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC27_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC27_CLRR (w) */
#define GPTA1_SRC27_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC27_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC27_SETR (w) */
#define GPTA1_SRC27_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC27_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC26_SRPN (rw) */
#define GPTA1_SRC26_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC26_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC26_TOS (rw) */
#define GPTA1_SRC26_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC26_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC26_SRE (rw) */
#define GPTA1_SRC26_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC26_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC26_SRR (rh) */
#define GPTA1_SRC26_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC26_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC26_CLRR (w) */
#define GPTA1_SRC26_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC26_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC26_SETR (w) */
#define GPTA1_SRC26_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC26_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC25_SRPN (rw) */
#define GPTA1_SRC25_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC25_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC25_TOS (rw) */
#define GPTA1_SRC25_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC25_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC25_SRE (rw) */
#define GPTA1_SRC25_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC25_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC25_SRR (rh) */
#define GPTA1_SRC25_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC25_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC25_CLRR (w) */
#define GPTA1_SRC25_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC25_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC25_SETR (w) */
#define GPTA1_SRC25_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC25_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC24_SRPN (rw) */
#define GPTA1_SRC24_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC24_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC24_TOS (rw) */
#define GPTA1_SRC24_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC24_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC24_SRE (rw) */
#define GPTA1_SRC24_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC24_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC24_SRR (rh) */
#define GPTA1_SRC24_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC24_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC24_CLRR (w) */
#define GPTA1_SRC24_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC24_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC24_SETR (w) */
#define GPTA1_SRC24_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC24_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC23_SRPN (rw) */
#define GPTA1_SRC23_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC23_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC23_TOS (rw) */
#define GPTA1_SRC23_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC23_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC23_SRE (rw) */
#define GPTA1_SRC23_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC23_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC23_SRR (rh) */
#define GPTA1_SRC23_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC23_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC23_CLRR (w) */
#define GPTA1_SRC23_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC23_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC23_SETR (w) */
#define GPTA1_SRC23_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC23_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC22_SRPN (rw) */
#define GPTA1_SRC22_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC22_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC22_TOS (rw) */
#define GPTA1_SRC22_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC22_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC22_SRE (rw) */
#define GPTA1_SRC22_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC22_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC22_SRR (rh) */
#define GPTA1_SRC22_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC22_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC22_CLRR (w) */
#define GPTA1_SRC22_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC22_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC22_SETR (w) */
#define GPTA1_SRC22_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC22_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC21_SRPN (rw) */
#define GPTA1_SRC21_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC21_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC21_TOS (rw) */
#define GPTA1_SRC21_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC21_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC21_SRE (rw) */
#define GPTA1_SRC21_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC21_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC21_SRR (rh) */
#define GPTA1_SRC21_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC21_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC21_CLRR (w) */
#define GPTA1_SRC21_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC21_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC21_SETR (w) */
#define GPTA1_SRC21_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC21_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC20_SRPN (rw) */
#define GPTA1_SRC20_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC20_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC20_TOS (rw) */
#define GPTA1_SRC20_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC20_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC20_SRE (rw) */
#define GPTA1_SRC20_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC20_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC20_SRR (rh) */
#define GPTA1_SRC20_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC20_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC20_CLRR (w) */
#define GPTA1_SRC20_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC20_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC20_SETR (w) */
#define GPTA1_SRC20_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC20_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC19_SRPN (rw) */
#define GPTA1_SRC19_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC19_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC19_TOS (rw) */
#define GPTA1_SRC19_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC19_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC19_SRE (rw) */
#define GPTA1_SRC19_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC19_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC19_SRR (rh) */
#define GPTA1_SRC19_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC19_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC19_CLRR (w) */
#define GPTA1_SRC19_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC19_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC19_SETR (w) */
#define GPTA1_SRC19_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC19_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC18_SRPN (rw) */
#define GPTA1_SRC18_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC18_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC18_TOS (rw) */
#define GPTA1_SRC18_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC18_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC18_SRE (rw) */
#define GPTA1_SRC18_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC18_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC18_SRR (rh) */
#define GPTA1_SRC18_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC18_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC18_CLRR (w) */
#define GPTA1_SRC18_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC18_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC18_SETR (w) */
#define GPTA1_SRC18_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC18_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC17_SRPN (rw) */
#define GPTA1_SRC17_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC17_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC17_TOS (rw) */
#define GPTA1_SRC17_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC17_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC17_SRE (rw) */
#define GPTA1_SRC17_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC17_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC17_SRR (rh) */
#define GPTA1_SRC17_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC17_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC17_CLRR (w) */
#define GPTA1_SRC17_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC17_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC17_SETR (w) */
#define GPTA1_SRC17_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC17_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC16_SRPN (rw) */
#define GPTA1_SRC16_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC16_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC16_TOS (rw) */
#define GPTA1_SRC16_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC16_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC16_SRE (rw) */
#define GPTA1_SRC16_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC16_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC16_SRR (rh) */
#define GPTA1_SRC16_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC16_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC16_CLRR (w) */
#define GPTA1_SRC16_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC16_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC16_SETR (w) */
#define GPTA1_SRC16_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC16_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC15_SRPN (rw) */
#define GPTA1_SRC15_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC15_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC15_TOS (rw) */
#define GPTA1_SRC15_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC15_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC15_SRE (rw) */
#define GPTA1_SRC15_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC15_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC15_SRR (rh) */
#define GPTA1_SRC15_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC15_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC15_CLRR (w) */
#define GPTA1_SRC15_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC15_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC15_SETR (w) */
#define GPTA1_SRC15_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC15_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC14_SRPN (rw) */
#define GPTA1_SRC14_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC14_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC14_TOS (rw) */
#define GPTA1_SRC14_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC14_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC14_SRE (rw) */
#define GPTA1_SRC14_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC14_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC14_SRR (rh) */
#define GPTA1_SRC14_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC14_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC14_CLRR (w) */
#define GPTA1_SRC14_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC14_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC14_SETR (w) */
#define GPTA1_SRC14_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC14_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC13_SRPN (rw) */
#define GPTA1_SRC13_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC13_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC13_TOS (rw) */
#define GPTA1_SRC13_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC13_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC13_SRE (rw) */
#define GPTA1_SRC13_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC13_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC13_SRR (rh) */
#define GPTA1_SRC13_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC13_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC13_CLRR (w) */
#define GPTA1_SRC13_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC13_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC13_SETR (w) */
#define GPTA1_SRC13_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC13_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC12_SRPN (rw) */
#define GPTA1_SRC12_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC12_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC12_TOS (rw) */
#define GPTA1_SRC12_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC12_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC12_SRE (rw) */
#define GPTA1_SRC12_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC12_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC12_SRR (rh) */
#define GPTA1_SRC12_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC12_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC12_CLRR (w) */
#define GPTA1_SRC12_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC12_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC12_SETR (w) */
#define GPTA1_SRC12_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC12_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC11_SRPN (rw) */
#define GPTA1_SRC11_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC11_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC11_TOS (rw) */
#define GPTA1_SRC11_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC11_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC11_SRE (rw) */
#define GPTA1_SRC11_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC11_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC11_SRR (rh) */
#define GPTA1_SRC11_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC11_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC11_CLRR (w) */
#define GPTA1_SRC11_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC11_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC11_SETR (w) */
#define GPTA1_SRC11_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC11_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC10_SRPN (rw) */
#define GPTA1_SRC10_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC10_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC10_TOS (rw) */
#define GPTA1_SRC10_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC10_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC10_SRE (rw) */
#define GPTA1_SRC10_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC10_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC10_SRR (rh) */
#define GPTA1_SRC10_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC10_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC10_CLRR (w) */
#define GPTA1_SRC10_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC10_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC10_SETR (w) */
#define GPTA1_SRC10_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC10_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC09_SRPN (rw) */
#define GPTA1_SRC09_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC09_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC09_TOS (rw) */
#define GPTA1_SRC09_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC09_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC09_SRE (rw) */
#define GPTA1_SRC09_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC09_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC09_SRR (rh) */
#define GPTA1_SRC09_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC09_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC09_CLRR (w) */
#define GPTA1_SRC09_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC09_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC09_SETR (w) */
#define GPTA1_SRC09_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC09_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC08_SRPN (rw) */
#define GPTA1_SRC08_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC08_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC08_TOS (rw) */
#define GPTA1_SRC08_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC08_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC08_SRE (rw) */
#define GPTA1_SRC08_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC08_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC08_SRR (rh) */
#define GPTA1_SRC08_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC08_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC08_CLRR (w) */
#define GPTA1_SRC08_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC08_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC08_SETR (w) */
#define GPTA1_SRC08_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC08_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC07_SRPN (rw) */
#define GPTA1_SRC07_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC07_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC07_TOS (rw) */
#define GPTA1_SRC07_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC07_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC07_SRE (rw) */
#define GPTA1_SRC07_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC07_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC07_SRR (rh) */
#define GPTA1_SRC07_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC07_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC07_CLRR (w) */
#define GPTA1_SRC07_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC07_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC07_SETR (w) */
#define GPTA1_SRC07_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC07_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC06_SRPN (rw) */
#define GPTA1_SRC06_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC06_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC06_TOS (rw) */
#define GPTA1_SRC06_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC06_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC06_SRE (rw) */
#define GPTA1_SRC06_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC06_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC06_SRR (rh) */
#define GPTA1_SRC06_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC06_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC06_CLRR (w) */
#define GPTA1_SRC06_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC06_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC06_SETR (w) */
#define GPTA1_SRC06_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC06_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC05_SRPN (rw) */
#define GPTA1_SRC05_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC05_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC05_TOS (rw) */
#define GPTA1_SRC05_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC05_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC05_SRE (rw) */
#define GPTA1_SRC05_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC05_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC05_SRR (rh) */
#define GPTA1_SRC05_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC05_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC05_CLRR (w) */
#define GPTA1_SRC05_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC05_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC05_SETR (w) */
#define GPTA1_SRC05_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC05_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC04_SRPN (rw) */
#define GPTA1_SRC04_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC04_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC04_TOS (rw) */
#define GPTA1_SRC04_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC04_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC04_SRE (rw) */
#define GPTA1_SRC04_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC04_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC04_SRR (rh) */
#define GPTA1_SRC04_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC04_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC04_CLRR (w) */
#define GPTA1_SRC04_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC04_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC04_SETR (w) */
#define GPTA1_SRC04_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC04_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC03_SRPN (rw) */
#define GPTA1_SRC03_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC03_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC03_TOS (rw) */
#define GPTA1_SRC03_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC03_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC03_SRE (rw) */
#define GPTA1_SRC03_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC03_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC03_SRR (rh) */
#define GPTA1_SRC03_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC03_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC03_CLRR (w) */
#define GPTA1_SRC03_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC03_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC03_SETR (w) */
#define GPTA1_SRC03_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC03_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC02_SRPN (rw) */
#define GPTA1_SRC02_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC02_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC02_TOS (rw) */
#define GPTA1_SRC02_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC02_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC02_SRE (rw) */
#define GPTA1_SRC02_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC02_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC02_SRR (rh) */
#define GPTA1_SRC02_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC02_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC02_CLRR (w) */
#define GPTA1_SRC02_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC02_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC02_SETR (w) */
#define GPTA1_SRC02_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC02_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC01_SRPN (rw) */
#define GPTA1_SRC01_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC01_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC01_TOS (rw) */
#define GPTA1_SRC01_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC01_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC01_SRE (rw) */
#define GPTA1_SRC01_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC01_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC01_SRR (rh) */
#define GPTA1_SRC01_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC01_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC01_CLRR (w) */
#define GPTA1_SRC01_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC01_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC01_SETR (w) */
#define GPTA1_SRC01_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC01_SETR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC00_SRPN (rw) */
#define GPTA1_SRC00_SRPN_POS                 _GPTA1_UL(0)
#define GPTA1_SRC00_SRPN_LEN                 _GPTA1_UL(8)

/* GPTA1_SRC00_TOS (rw) */
#define GPTA1_SRC00_TOS_POS                  _GPTA1_UL(10)
#define GPTA1_SRC00_TOS_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC00_SRE (rw) */
#define GPTA1_SRC00_SRE_POS                  _GPTA1_UL(12)
#define GPTA1_SRC00_SRE_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC00_SRR (rh) */
#define GPTA1_SRC00_SRR_POS                  _GPTA1_UL(13)
#define GPTA1_SRC00_SRR_LEN                  _GPTA1_UL(1)

/* GPTA1_SRC00_CLRR (w) */
#define GPTA1_SRC00_CLRR_POS                 _GPTA1_UL(14)
#define GPTA1_SRC00_CLRR_LEN                 _GPTA1_UL(1)

/* GPTA1_SRC00_SETR (w) */
#define GPTA1_SRC00_SETR_POS                 _GPTA1_UL(15)
#define GPTA1_SRC00_SETR_LEN                 _GPTA1_UL(1)

#endif
