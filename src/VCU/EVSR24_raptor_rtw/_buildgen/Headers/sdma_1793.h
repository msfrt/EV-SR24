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
 * $Filename__:sdma_1793.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:Update of TC1793 header files$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:12.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:sdma_1793$ 
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
 * 1.12.0; 0     12.05.2010 RAT1COB
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _SDMA_1793_H
#define _SDMA_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SDMA_UL(x) x
#else
    #define _SDMA_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SDMA on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0003800] : SDMA Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0003804...0xF0003807] : reserved space
    volatile uint32 ID;                  // [0xF0003808] : Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF000380C...0xF000380F] : reserved space
    volatile uint32 CHRSTR;              // [0xF0003810] : SDMA Channel Reset Request Register
    volatile uint32 TRSR;                // [0xF0003814] : SDMA Transaction Request State Register
    volatile uint32 STREQ;               // [0xF0003818] : SDMA Software Transaction Request Register
    volatile uint32 HTREQ;               // [0xF000381C] : SDMA Hardware Transaction Request Register
    volatile uint32 EER;                 // [0xF0003820] : SDMA Enable Error Register
    volatile uint32 ERRSR;               // [0xF0003824] : SDMA Error Status Register
    volatile uint32 CLRE;                // [0xF0003828] : SDMA Clear Error Register
    volatile uint32 GINTR;               // [0xF000382C] : SDMA Global Interrupt Set Register
    volatile uint32 MESR;                // [0xF0003830] : SDMA Move Engine Status Register
    volatile uint32 ME0R;                // [0xF0003834] : SDMA Move Engine 0 Read Register
    volatile uint32 RESERVED2[1];        // [0xF0003838...0xF000383B] : reserved space
    volatile uint32 ME0PR;               // [0xF000383C] : SDMA Move Engine 0 Pattern Register
    volatile uint32 RESERVED3[5];        // [0xF0003840...0xF0003853] : reserved space
    volatile uint32 INTSR;               // [0xF0003854] : SDMA Interrupt Status Register
    volatile uint32 INTCR;               // [0xF0003858] : SDMA Interrupt Clear Register
    volatile uint32 WRPSR;               // [0xF000385C] : SDMA Wrap Status Register
    volatile uint32 RESERVED4[1];        // [0xF0003860...0xF0003863] : reserved space
    volatile uint32 OCDSR;               // [0xF0003864] : SDMA OCDS Register
    volatile uint32 SUSPMR;              // [0xF0003868] : SDMA Suspend Mode Register
    volatile uint32 RESERVED5[5];        // [0xF000386C...0xF000387F] : reserved space
    volatile uint32 CHSR00;              // [0xF0003880] : SDMA Channel 00 Status Register
    volatile uint32 CHCR00;              // [0xF0003884] : SDMA Channel 00 Control Register
    volatile uint32 CHICR00;             // [0xF0003888] : SDMA Channel 00 Interrupt Control Register
    volatile uint32 ADRCR00;             // [0xF000388C] : SDMA Channel 00 Address Control Register
    volatile uint32 SADR00;              // [0xF0003890] : SDMA Channel 00 Source Address Register
    volatile uint32 DADR00;              // [0xF0003894] : SDMA Channel 00 Destination Address Register
    volatile uint32 SHADR00;             // [0xF0003898] : SDMA Channel 00 Shadow Address Register
    volatile uint32 RESERVED6[1];        // [0xF000389C...0xF000389F] : reserved space
    volatile uint32 CHSR01;              // [0xF00038A0] : SDMA Channel 01 Status Register
    volatile uint32 CHCR01;              // [0xF00038A4] : SDMA Channel 01 Control Register
    volatile uint32 CHICR01;             // [0xF00038A8] : SDMA Channel 01 Interrupt Control Register
    volatile uint32 ADRCR01;             // [0xF00038AC] : SDMA Channel 01 Address Control Register
    volatile uint32 SADR01;              // [0xF00038B0] : SDMA Channel 01 Source Address Register
    volatile uint32 DADR01;              // [0xF00038B4] : SDMA Channel 01 Destination Address Register
    volatile uint32 SHADR01;             // [0xF00038B8] : SDMA Channel 01 Shadow Address Register
    volatile uint32 RESERVED7[1];        // [0xF00038BC...0xF00038BF] : reserved space
    volatile uint32 CHSR02;              // [0xF00038C0] : SDMA Channel 02 Status Register
    volatile uint32 CHCR02;              // [0xF00038C4] : SDMA Channel 02 Control Register
    volatile uint32 CHICR02;             // [0xF00038C8] : SDMA Channel 02 Interrupt Control Register
    volatile uint32 ADRCR02;             // [0xF00038CC] : SDMA Channel 02 Address Control Register
    volatile uint32 SADR02;              // [0xF00038D0] : SDMA Channel 02 Source Address Register
    volatile uint32 DADR02;              // [0xF00038D4] : SDMA Channel 02 Destination Address Register
    volatile uint32 SHADR02;             // [0xF00038D8] : SDMA Channel 02 Shadow Address Register
    volatile uint32 RESERVED8[1];        // [0xF00038DC...0xF00038DF] : reserved space
    volatile uint32 CHSR03;              // [0xF00038E0] : SDMA Channel 03 Status Register
    volatile uint32 CHCR03;              // [0xF00038E4] : SDMA Channel 03 Control Register
    volatile uint32 CHICR03;             // [0xF00038E8] : SDMA Channel 03 Interrupt Control Register
    volatile uint32 ADRCR03;             // [0xF00038EC] : SDMA Channel 03 Address Control Register
    volatile uint32 SADR03;              // [0xF00038F0] : SDMA Channel 03 Source Address Register
    volatile uint32 DADR03;              // [0xF00038F4] : SDMA Channel 03 Destination Address Register
    volatile uint32 SHADR03;             // [0xF00038F8] : SDMA Channel 03 Shadow Address Register
    volatile uint32 RESERVED9[1];        // [0xF00038FC...0xF00038FF] : reserved space
    volatile uint32 CHSR04;              // [0xF0003900] : SDMA Channel 04 Status Register
    volatile uint32 CHCR04;              // [0xF0003904] : SDMA Channel 04 Control Register
    volatile uint32 CHICR04;             // [0xF0003908] : SDMA Channel 04 Interrupt Control Register
    volatile uint32 ADRCR04;             // [0xF000390C] : SDMA Channel 04 Address Control Register
    volatile uint32 SADR04;              // [0xF0003910] : SDMA Channel 04 Source Address Register
    volatile uint32 DADR04;              // [0xF0003914] : SDMA Channel 04 Destination Address Register
    volatile uint32 SHADR04;             // [0xF0003918] : SDMA Channel 04 Shadow Address Register
    volatile uint32 RESERVED10[1];       // [0xF000391C...0xF000391F] : reserved space
    volatile uint32 CHSR05;              // [0xF0003920] : SDMA Channel 05 Status Register
    volatile uint32 CHCR05;              // [0xF0003924] : SDMA Channel 05 Control Register
    volatile uint32 CHICR05;             // [0xF0003928] : SDMA Channel 05 Interrupt Control Register
    volatile uint32 ADRCR05;             // [0xF000392C] : SDMA Channel 05 Address Control Register
    volatile uint32 SADR05;              // [0xF0003930] : SDMA Channel 05 Source Address Register
    volatile uint32 DADR05;              // [0xF0003934] : SDMA Channel 05 Destination Address Register
    volatile uint32 SHADR05;             // [0xF0003938] : SDMA Channel 05 Shadow Address Register
    volatile uint32 RESERVED11[1];       // [0xF000393C...0xF000393F] : reserved space
    volatile uint32 CHSR06;              // [0xF0003940] : SDMA Channel 06 Status Register
    volatile uint32 CHCR06;              // [0xF0003944] : SDMA Channel 06 Control Register
    volatile uint32 CHICR06;             // [0xF0003948] : SDMA Channel 06 Interrupt Control Register
    volatile uint32 ADRCR06;             // [0xF000394C] : SDMA Channel 06 Address Control Register
    volatile uint32 SADR06;              // [0xF0003950] : SDMA Channel 06 Source Address Register
    volatile uint32 DADR06;              // [0xF0003954] : SDMA Channel 06 Destination Address Register
    volatile uint32 SHADR06;             // [0xF0003958] : SDMA Channel 06 Shadow Address Register
    volatile uint32 RESERVED12[1];       // [0xF000395C...0xF000395F] : reserved space
    volatile uint32 CHSR07;              // [0xF0003960] : SDMA Channel 07 Status Register
    volatile uint32 CHCR07;              // [0xF0003964] : SDMA Channel 07 Control Register
    volatile uint32 CHICR07;             // [0xF0003968] : SDMA Channel 07 Interrupt Control Register
    volatile uint32 ADRCR07;             // [0xF000396C] : SDMA Channel 07 Address Control Register
    volatile uint32 SADR07;              // [0xF0003970] : SDMA Channel 07 Source Address Register
    volatile uint32 DADR07;              // [0xF0003974] : SDMA Channel 07 Destination Address Register
    volatile uint32 SHADR07;             // [0xF0003978] : SDMA Channel 07 Shadow Address Register
    volatile uint32 RESERVED13[1];       // [0xF000397C...0xF000397F] : reserved space
    volatile uint32 SAMIN00;             // [0xF0003980] : SDMA Channel 00 Source Address Lower Boundary Register
    volatile uint32 SAMAX00;             // [0xF0003984] : SDMA Channel 00 Source Address Lower Boundary Register
    volatile uint32 DAMIN00;             // [0xF0003988] : SDMA Channel 00 Destination Address Lower Boundary Register
    volatile uint32 DAMAX00;             // [0xF000398C] : SDMA Channel 00 Destination Address Upper Boundary Register
    volatile uint32 SCRC00;              // [0xF0003990] : SDMA Channel 00 Source Address CRC Register
    volatile uint32 DCRC00;              // [0xF0003994] : SDMA Channel 00 Destination Address CRC Register
    volatile uint32 RDCRC00;             // [0xF0003998] : SDMA Channel 00 Read Data CRC Register
    volatile uint32 RESERVED14[1];       // [0xF000399C...0xF000399F] : reserved space
    volatile uint32 SAMIN01;             // [0xF00039A0] : SDMA Channel 01 Source Address Lower Boundary Register
    volatile uint32 SAMAX01;             // [0xF00039A4] : SDMA Channel 01 Source Address Lower Boundary Register
    volatile uint32 DAMIN01;             // [0xF00039A8] : SDMA Channel 01 Destination Address Lower Boundary Register
    volatile uint32 DAMAX01;             // [0xF00039AC] : SDMA Channel 01 Destination Address Upper Boundary Register
    volatile uint32 SCRC01;              // [0xF00039B0] : SDMA Channel 01 Source Address CRC Register
    volatile uint32 DCRC01;              // [0xF00039B4] : SDMA Channel 01 Destination Address CRC Register
    volatile uint32 RDCRC01;             // [0xF00039B8] : SDMA Channel 01 Read Data CRC Register
    volatile uint32 RESERVED15[1];       // [0xF00039BC...0xF00039BF] : reserved space
    volatile uint32 SAMIN02;             // [0xF00039C0] : SDMA Channel 02 Source Address Lower Boundary Register
    volatile uint32 SAMAX02;             // [0xF00039C4] : SDMA Channel 02 Source Address Lower Boundary Register
    volatile uint32 DAMIN02;             // [0xF00039C8] : SDMA Channel 02 Destination Address Lower Boundary Register
    volatile uint32 DAMAX02;             // [0xF00039CC] : SDMA Channel 02 Destination Address Upper Boundary Register
    volatile uint32 SCRC02;              // [0xF00039D0] : SDMA Channel 02 Source Address CRC Register
    volatile uint32 DCRC02;              // [0xF00039D4] : SDMA Channel 02 Destination Address CRC Register
    volatile uint32 RDCRC02;             // [0xF00039D8] : SDMA Channel 02 Read Data CRC Register
    volatile uint32 RESERVED16[1];       // [0xF00039DC...0xF00039DF] : reserved space
    volatile uint32 SAMIN03;             // [0xF00039E0] : SDMA Channel 03 Source Address Lower Boundary Register
    volatile uint32 SAMAX03;             // [0xF00039E4] : SDMA Channel 03 Source Address Lower Boundary Register
    volatile uint32 DAMIN03;             // [0xF00039E8] : SDMA Channel 03 Destination Address Lower Boundary Register
    volatile uint32 DAMAX03;             // [0xF00039EC] : SDMA Channel 03 Destination Address Upper Boundary Register
    volatile uint32 SCRC03;              // [0xF00039F0] : SDMA Channel 03 Source Address CRC Register
    volatile uint32 DCRC03;              // [0xF00039F4] : SDMA Channel 03 Destination Address CRC Register
    volatile uint32 RDCRC03;             // [0xF00039F8] : SDMA Channel 03 Read Data CRC Register
    volatile uint32 RESERVED17[1];       // [0xF00039FC...0xF00039FF] : reserved space
    volatile uint32 SAMIN04;             // [0xF0003A00] : SDMA Channel 04 Source Address Lower Boundary Register
    volatile uint32 SAMAX04;             // [0xF0003A04] : SDMA Channel 04 Source Address Lower Boundary Register
    volatile uint32 DAMIN04;             // [0xF0003A08] : SDMA Channel 04 Destination Address Lower Boundary Register
    volatile uint32 DAMAX04;             // [0xF0003A0C] : SDMA Channel 04 Destination Address Upper Boundary Register
    volatile uint32 SCRC04;              // [0xF0003A10] : SDMA Channel 04 Source Address CRC Register
    volatile uint32 DCRC04;              // [0xF0003A14] : SDMA Channel 04 Destination Address CRC Register
    volatile uint32 RDCRC04;             // [0xF0003A18] : SDMA Channel 04 Read Data CRC Register
    volatile uint32 RESERVED18[1];       // [0xF0003A1C...0xF0003A1F] : reserved space
    volatile uint32 SAMIN05;             // [0xF0003A20] : SDMA Channel 05 Source Address Lower Boundary Register
    volatile uint32 SAMAX05;             // [0xF0003A24] : SDMA Channel 05 Source Address Lower Boundary Register
    volatile uint32 DAMIN05;             // [0xF0003A28] : SDMA Channel 05 Destination Address Lower Boundary Register
    volatile uint32 DAMAX05;             // [0xF0003A2C] : SDMA Channel 05 Destination Address Upper Boundary Register
    volatile uint32 SCRC05;              // [0xF0003A30] : SDMA Channel 05 Source Address CRC Register
    volatile uint32 DCRC05;              // [0xF0003A34] : SDMA Channel 05 Destination Address CRC Register
    volatile uint32 RDCRC05;             // [0xF0003A38] : SDMA Channel 05 Read Data CRC Register
    volatile uint32 RESERVED19[1];       // [0xF0003A3C...0xF0003A3F] : reserved space
    volatile uint32 SAMIN06;             // [0xF0003A40] : SDMA Channel 06 Source Address Lower Boundary Register
    volatile uint32 SAMAX06;             // [0xF0003A44] : SDMA Channel 06 Source Address Lower Boundary Register
    volatile uint32 DAMIN06;             // [0xF0003A48] : SDMA Channel 06 Destination Address Lower Boundary Register
    volatile uint32 DAMAX06;             // [0xF0003A4C] : SDMA Channel 06 Destination Address Upper Boundary Register
    volatile uint32 SCRC06;              // [0xF0003A50] : SDMA Channel 06 Source Address CRC Register
    volatile uint32 DCRC06;              // [0xF0003A54] : SDMA Channel 06 Destination Address CRC Register
    volatile uint32 RDCRC06;             // [0xF0003A58] : SDMA Channel 06 Read Data CRC Register
    volatile uint32 RESERVED20[1];       // [0xF0003A5C...0xF0003A5F] : reserved space
    volatile uint32 SAMIN07;             // [0xF0003A60] : SDMA Channel 07 Source Address Lower Boundary Register
    volatile uint32 SAMAX07;             // [0xF0003A64] : SDMA Channel 07 Source Address Lower Boundary Register
    volatile uint32 DAMIN07;             // [0xF0003A68] : SDMA Channel 07 Destination Address Lower Boundary Register
    volatile uint32 DAMAX07;             // [0xF0003A6C] : SDMA Channel 07 Destination Address Upper Boundary Register
    volatile uint32 SCRC07;              // [0xF0003A70] : SDMA Channel 07 Source Address CRC Register
    volatile uint32 DCRC07;              // [0xF0003A74] : SDMA Channel 07 Destination Address CRC Register
    volatile uint32 RDCRC07;             // [0xF0003A78] : SDMA Channel 07 Read Data CRC Register
    volatile uint32 RESERVED21[25];      // [0xF0003A7C...0xF0003ADF] : reserved space
    volatile uint32 SRC7;                // [0xF0003AE0] : SDMA Service Request Control Register 7
    volatile uint32 SRC6;                // [0xF0003AE4] : SDMA Service Request Control Register 6
    volatile uint32 SRC5;                // [0xF0003AE8] : SDMA Service Request Control Register 5
    volatile uint32 SRC4;                // [0xF0003AEC] : SDMA Service Request Control Register 4
    volatile uint32 SRC3;                // [0xF0003AF0] : SDMA Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF0003AF4] : SDMA Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF0003AF8] : SDMA Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0003AFC] : SDMA Service Request Control Register 0
} SDMA_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SDMA_RegMap_t SDMA __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* SDMA_ID_MOD_NUMBER (r) */
#define SDMA_ID_MOD_NUMBER_POS                _SDMA_UL(16)
#define SDMA_ID_MOD_NUMBER_LEN                _SDMA_UL(16)

/* SDMA_ID_MOD_REV (r) */
#define SDMA_ID_MOD_REV_POS                   _SDMA_UL(0)
#define SDMA_ID_MOD_REV_LEN                   _SDMA_UL(8)

/* SDMA_ID_MOD_TYPE (r) */
#define SDMA_ID_MOD_TYPE_POS                  _SDMA_UL(8)
#define SDMA_ID_MOD_TYPE_LEN                  _SDMA_UL(8)

/* SDMA_CLC_DISR (rw) */
#define SDMA_CLC_DISR_POS                    _SDMA_UL(0)
#define SDMA_CLC_DISR_LEN                    _SDMA_UL(1)

/* SDMA_CLC_DISS (r) */
#define SDMA_CLC_DISS_POS                    _SDMA_UL(1)
#define SDMA_CLC_DISS_LEN                    _SDMA_UL(1)

/* SDMA_CLC_SPEN (rw) */
#define SDMA_CLC_SPEN_POS                    _SDMA_UL(2)
#define SDMA_CLC_SPEN_LEN                    _SDMA_UL(1)

/* SDMA_CLC_EDIS (rw) */
#define SDMA_CLC_EDIS_POS                    _SDMA_UL(3)
#define SDMA_CLC_EDIS_LEN                    _SDMA_UL(1)

/* SDMA_CLC_SBWE (w) */
#define SDMA_CLC_SBWE_POS                    _SDMA_UL(4)
#define SDMA_CLC_SBWE_LEN                    _SDMA_UL(1)

/* SDMA_CLC_FSOE (rw) */
#define SDMA_CLC_FSOE_POS                    _SDMA_UL(5)
#define SDMA_CLC_FSOE_LEN                    _SDMA_UL(1)

/* SDMA_ID_MOD_REV (r) */
#define SDMA_ID_MOD_REV_POS                  _SDMA_UL(0)
#define SDMA_ID_MOD_REV_LEN                  _SDMA_UL(8)

/* SDMA_ID_MOD_TYPE (r) */
#define SDMA_ID_MOD_TYPE_POS                 _SDMA_UL(8)
#define SDMA_ID_MOD_TYPE_LEN                 _SDMA_UL(8)

/* SDMA_ID_MOD_NUMBER (r) */
#define SDMA_ID_MOD_NUMBER_POS               _SDMA_UL(16)
#define SDMA_ID_MOD_NUMBER_LEN               _SDMA_UL(16)

/* SDMA_CHRSTR_CH00 (rwh) */
#define SDMA_CHRSTR_CH00_POS                 _SDMA_UL(0)
#define SDMA_CHRSTR_CH00_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH01 (rwh) */
#define SDMA_CHRSTR_CH01_POS                 _SDMA_UL(1)
#define SDMA_CHRSTR_CH01_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH02 (rwh) */
#define SDMA_CHRSTR_CH02_POS                 _SDMA_UL(2)
#define SDMA_CHRSTR_CH02_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH03 (rwh) */
#define SDMA_CHRSTR_CH03_POS                 _SDMA_UL(3)
#define SDMA_CHRSTR_CH03_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH04 (rwh) */
#define SDMA_CHRSTR_CH04_POS                 _SDMA_UL(4)
#define SDMA_CHRSTR_CH04_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH05 (rwh) */
#define SDMA_CHRSTR_CH05_POS                 _SDMA_UL(5)
#define SDMA_CHRSTR_CH05_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH06 (rwh) */
#define SDMA_CHRSTR_CH06_POS                 _SDMA_UL(6)
#define SDMA_CHRSTR_CH06_LEN                 _SDMA_UL(1)

/* SDMA_CHRSTR_CH07 (rwh) */
#define SDMA_CHRSTR_CH07_POS                 _SDMA_UL(7)
#define SDMA_CHRSTR_CH07_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_CH00 (rh) */
#define SDMA_TRSR_CH00_POS                   _SDMA_UL(0)
#define SDMA_TRSR_CH00_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH01 (rh) */
#define SDMA_TRSR_CH01_POS                   _SDMA_UL(1)
#define SDMA_TRSR_CH01_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH02 (rh) */
#define SDMA_TRSR_CH02_POS                   _SDMA_UL(2)
#define SDMA_TRSR_CH02_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH03 (rh) */
#define SDMA_TRSR_CH03_POS                   _SDMA_UL(3)
#define SDMA_TRSR_CH03_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH04 (rh) */
#define SDMA_TRSR_CH04_POS                   _SDMA_UL(4)
#define SDMA_TRSR_CH04_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH05 (rh) */
#define SDMA_TRSR_CH05_POS                   _SDMA_UL(5)
#define SDMA_TRSR_CH05_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH06 (rh) */
#define SDMA_TRSR_CH06_POS                   _SDMA_UL(6)
#define SDMA_TRSR_CH06_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_CH07 (rh) */
#define SDMA_TRSR_CH07_POS                   _SDMA_UL(7)
#define SDMA_TRSR_CH07_LEN                   _SDMA_UL(1)

/* SDMA_TRSR_HTRE00 (rh) */
#define SDMA_TRSR_HTRE00_POS                 _SDMA_UL(16)
#define SDMA_TRSR_HTRE00_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE01 (rh) */
#define SDMA_TRSR_HTRE01_POS                 _SDMA_UL(17)
#define SDMA_TRSR_HTRE01_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE02 (rh) */
#define SDMA_TRSR_HTRE02_POS                 _SDMA_UL(18)
#define SDMA_TRSR_HTRE02_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE03 (rh) */
#define SDMA_TRSR_HTRE03_POS                 _SDMA_UL(19)
#define SDMA_TRSR_HTRE03_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE04 (rh) */
#define SDMA_TRSR_HTRE04_POS                 _SDMA_UL(20)
#define SDMA_TRSR_HTRE04_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE05 (rh) */
#define SDMA_TRSR_HTRE05_POS                 _SDMA_UL(21)
#define SDMA_TRSR_HTRE05_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE06 (rh) */
#define SDMA_TRSR_HTRE06_POS                 _SDMA_UL(22)
#define SDMA_TRSR_HTRE06_LEN                 _SDMA_UL(1)

/* SDMA_TRSR_HTRE07 (rh) */
#define SDMA_TRSR_HTRE07_POS                 _SDMA_UL(23)
#define SDMA_TRSR_HTRE07_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH00 (w) */
#define SDMA_STREQ_SCH00_POS                 _SDMA_UL(0)
#define SDMA_STREQ_SCH00_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH01 (w) */
#define SDMA_STREQ_SCH01_POS                 _SDMA_UL(1)
#define SDMA_STREQ_SCH01_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH02 (w) */
#define SDMA_STREQ_SCH02_POS                 _SDMA_UL(2)
#define SDMA_STREQ_SCH02_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH03 (w) */
#define SDMA_STREQ_SCH03_POS                 _SDMA_UL(3)
#define SDMA_STREQ_SCH03_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH04 (w) */
#define SDMA_STREQ_SCH04_POS                 _SDMA_UL(4)
#define SDMA_STREQ_SCH04_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH05 (w) */
#define SDMA_STREQ_SCH05_POS                 _SDMA_UL(5)
#define SDMA_STREQ_SCH05_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH06 (w) */
#define SDMA_STREQ_SCH06_POS                 _SDMA_UL(6)
#define SDMA_STREQ_SCH06_LEN                 _SDMA_UL(1)

/* SDMA_STREQ_SCH07 (w) */
#define SDMA_STREQ_SCH07_POS                 _SDMA_UL(7)
#define SDMA_STREQ_SCH07_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH00 (w) */
#define SDMA_HTREQ_ECH00_POS                 _SDMA_UL(0)
#define SDMA_HTREQ_ECH00_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH01 (w) */
#define SDMA_HTREQ_ECH01_POS                 _SDMA_UL(1)
#define SDMA_HTREQ_ECH01_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH02 (w) */
#define SDMA_HTREQ_ECH02_POS                 _SDMA_UL(2)
#define SDMA_HTREQ_ECH02_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH03 (w) */
#define SDMA_HTREQ_ECH03_POS                 _SDMA_UL(3)
#define SDMA_HTREQ_ECH03_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH04 (w) */
#define SDMA_HTREQ_ECH04_POS                 _SDMA_UL(4)
#define SDMA_HTREQ_ECH04_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH05 (w) */
#define SDMA_HTREQ_ECH05_POS                 _SDMA_UL(5)
#define SDMA_HTREQ_ECH05_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH06 (w) */
#define SDMA_HTREQ_ECH06_POS                 _SDMA_UL(6)
#define SDMA_HTREQ_ECH06_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_ECH07 (w) */
#define SDMA_HTREQ_ECH07_POS                 _SDMA_UL(7)
#define SDMA_HTREQ_ECH07_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH00 (w) */
#define SDMA_HTREQ_DCH00_POS                 _SDMA_UL(16)
#define SDMA_HTREQ_DCH00_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH01 (w) */
#define SDMA_HTREQ_DCH01_POS                 _SDMA_UL(17)
#define SDMA_HTREQ_DCH01_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH02 (w) */
#define SDMA_HTREQ_DCH02_POS                 _SDMA_UL(18)
#define SDMA_HTREQ_DCH02_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH03 (w) */
#define SDMA_HTREQ_DCH03_POS                 _SDMA_UL(19)
#define SDMA_HTREQ_DCH03_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH04 (w) */
#define SDMA_HTREQ_DCH04_POS                 _SDMA_UL(20)
#define SDMA_HTREQ_DCH04_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH05 (w) */
#define SDMA_HTREQ_DCH05_POS                 _SDMA_UL(21)
#define SDMA_HTREQ_DCH05_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH06 (w) */
#define SDMA_HTREQ_DCH06_POS                 _SDMA_UL(22)
#define SDMA_HTREQ_DCH06_LEN                 _SDMA_UL(1)

/* SDMA_HTREQ_DCH07 (w) */
#define SDMA_HTREQ_DCH07_POS                 _SDMA_UL(23)
#define SDMA_HTREQ_DCH07_LEN                 _SDMA_UL(1)

/* SDMA_EER_ETRL00 (rw) */
#define SDMA_EER_ETRL00_POS                  _SDMA_UL(0)
#define SDMA_EER_ETRL00_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL01 (rw) */
#define SDMA_EER_ETRL01_POS                  _SDMA_UL(1)
#define SDMA_EER_ETRL01_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL02 (rw) */
#define SDMA_EER_ETRL02_POS                  _SDMA_UL(2)
#define SDMA_EER_ETRL02_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL03 (rw) */
#define SDMA_EER_ETRL03_POS                  _SDMA_UL(3)
#define SDMA_EER_ETRL03_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL04 (rw) */
#define SDMA_EER_ETRL04_POS                  _SDMA_UL(4)
#define SDMA_EER_ETRL04_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL05 (rw) */
#define SDMA_EER_ETRL05_POS                  _SDMA_UL(5)
#define SDMA_EER_ETRL05_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL06 (rw) */
#define SDMA_EER_ETRL06_POS                  _SDMA_UL(6)
#define SDMA_EER_ETRL06_LEN                  _SDMA_UL(1)

/* SDMA_EER_ETRL07 (rw) */
#define SDMA_EER_ETRL07_POS                  _SDMA_UL(7)
#define SDMA_EER_ETRL07_LEN                  _SDMA_UL(1)

/* SDMA_EER_EME0SER (rw) */
#define SDMA_EER_EME0SER_POS                 _SDMA_UL(16)
#define SDMA_EER_EME0SER_LEN                 _SDMA_UL(1)

/* SDMA_EER_EME0DER (rw) */
#define SDMA_EER_EME0DER_POS                 _SDMA_UL(17)
#define SDMA_EER_EME0DER_LEN                 _SDMA_UL(1)

/* SDMA_EER_ME0INP (rw) */
#define SDMA_EER_ME0INP_POS                  _SDMA_UL(20)
#define SDMA_EER_ME0INP_LEN                  _SDMA_UL(4)

/* SDMA_EER_TRLINP (rw) */
#define SDMA_EER_TRLINP_POS                  _SDMA_UL(28)
#define SDMA_EER_TRLINP_LEN                  _SDMA_UL(4)

/* SDMA_ERRSR_TRL00 (rh) */
#define SDMA_ERRSR_TRL00_POS                 _SDMA_UL(0)
#define SDMA_ERRSR_TRL00_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL01 (rh) */
#define SDMA_ERRSR_TRL01_POS                 _SDMA_UL(1)
#define SDMA_ERRSR_TRL01_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL02 (rh) */
#define SDMA_ERRSR_TRL02_POS                 _SDMA_UL(2)
#define SDMA_ERRSR_TRL02_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL03 (rh) */
#define SDMA_ERRSR_TRL03_POS                 _SDMA_UL(3)
#define SDMA_ERRSR_TRL03_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL04 (rh) */
#define SDMA_ERRSR_TRL04_POS                 _SDMA_UL(4)
#define SDMA_ERRSR_TRL04_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL05 (rh) */
#define SDMA_ERRSR_TRL05_POS                 _SDMA_UL(5)
#define SDMA_ERRSR_TRL05_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL06 (rh) */
#define SDMA_ERRSR_TRL06_POS                 _SDMA_UL(6)
#define SDMA_ERRSR_TRL06_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_TRL07 (rh) */
#define SDMA_ERRSR_TRL07_POS                 _SDMA_UL(7)
#define SDMA_ERRSR_TRL07_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_ME0SER (rh) */
#define SDMA_ERRSR_ME0SER_POS                _SDMA_UL(16)
#define SDMA_ERRSR_ME0SER_LEN                _SDMA_UL(1)

/* SDMA_ERRSR_ME0DER (rh) */
#define SDMA_ERRSR_ME0DER_POS                _SDMA_UL(17)
#define SDMA_ERRSR_ME0DER_LEN                _SDMA_UL(1)

/* SDMA_ERRSR_FPIER (rh) */
#define SDMA_ERRSR_FPIER_POS                 _SDMA_UL(20)
#define SDMA_ERRSR_FPIER_LEN                 _SDMA_UL(1)

/* SDMA_ERRSR_LECME0 (rh) */
#define SDMA_ERRSR_LECME0_POS                _SDMA_UL(24)
#define SDMA_ERRSR_LECME0_LEN                _SDMA_UL(3)

/* SDMA_CLRE_CTL00 (w) */
#define SDMA_CLRE_CTL00_POS                  _SDMA_UL(0)
#define SDMA_CLRE_CTL00_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL01 (w) */
#define SDMA_CLRE_CTL01_POS                  _SDMA_UL(1)
#define SDMA_CLRE_CTL01_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL02 (w) */
#define SDMA_CLRE_CTL02_POS                  _SDMA_UL(2)
#define SDMA_CLRE_CTL02_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL03 (w) */
#define SDMA_CLRE_CTL03_POS                  _SDMA_UL(3)
#define SDMA_CLRE_CTL03_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL04 (w) */
#define SDMA_CLRE_CTL04_POS                  _SDMA_UL(4)
#define SDMA_CLRE_CTL04_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL05 (w) */
#define SDMA_CLRE_CTL05_POS                  _SDMA_UL(5)
#define SDMA_CLRE_CTL05_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL06 (w) */
#define SDMA_CLRE_CTL06_POS                  _SDMA_UL(6)
#define SDMA_CLRE_CTL06_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CTL07 (w) */
#define SDMA_CLRE_CTL07_POS                  _SDMA_UL(7)
#define SDMA_CLRE_CTL07_LEN                  _SDMA_UL(1)

/* SDMA_CLRE_CME0SER (w) */
#define SDMA_CLRE_CME0SER_POS                _SDMA_UL(16)
#define SDMA_CLRE_CME0SER_LEN                _SDMA_UL(1)

/* SDMA_CLRE_CME0DER (w) */
#define SDMA_CLRE_CME0DER_POS                _SDMA_UL(17)
#define SDMA_CLRE_CME0DER_LEN                _SDMA_UL(1)

/* SDMA_CLRE_CFPIER (w) */
#define SDMA_CLRE_CFPIER_POS                 _SDMA_UL(20)
#define SDMA_CLRE_CFPIER_LEN                 _SDMA_UL(1)

/* SDMA_GINTR_SIDMA0 (w) */
#define SDMA_GINTR_SIDMA0_POS                _SDMA_UL(0)
#define SDMA_GINTR_SIDMA0_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA1 (w) */
#define SDMA_GINTR_SIDMA1_POS                _SDMA_UL(1)
#define SDMA_GINTR_SIDMA1_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA2 (w) */
#define SDMA_GINTR_SIDMA2_POS                _SDMA_UL(2)
#define SDMA_GINTR_SIDMA2_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA3 (w) */
#define SDMA_GINTR_SIDMA3_POS                _SDMA_UL(3)
#define SDMA_GINTR_SIDMA3_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA4 (w) */
#define SDMA_GINTR_SIDMA4_POS                _SDMA_UL(4)
#define SDMA_GINTR_SIDMA4_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA5 (w) */
#define SDMA_GINTR_SIDMA5_POS                _SDMA_UL(5)
#define SDMA_GINTR_SIDMA5_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA6 (w) */
#define SDMA_GINTR_SIDMA6_POS                _SDMA_UL(6)
#define SDMA_GINTR_SIDMA6_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA7 (w) */
#define SDMA_GINTR_SIDMA7_POS                _SDMA_UL(7)
#define SDMA_GINTR_SIDMA7_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA8 (w) */
#define SDMA_GINTR_SIDMA8_POS                _SDMA_UL(8)
#define SDMA_GINTR_SIDMA8_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA9 (w) */
#define SDMA_GINTR_SIDMA9_POS                _SDMA_UL(9)
#define SDMA_GINTR_SIDMA9_LEN                _SDMA_UL(1)

/* SDMA_GINTR_SIDMA10 (w) */
#define SDMA_GINTR_SIDMA10_POS               _SDMA_UL(10)
#define SDMA_GINTR_SIDMA10_LEN               _SDMA_UL(1)

/* SDMA_GINTR_SIDMA11 (w) */
#define SDMA_GINTR_SIDMA11_POS               _SDMA_UL(11)
#define SDMA_GINTR_SIDMA11_LEN               _SDMA_UL(1)

/* SDMA_GINTR_SIDMA12 (w) */
#define SDMA_GINTR_SIDMA12_POS               _SDMA_UL(12)
#define SDMA_GINTR_SIDMA12_LEN               _SDMA_UL(1)

/* SDMA_GINTR_SIDMA13 (w) */
#define SDMA_GINTR_SIDMA13_POS               _SDMA_UL(13)
#define SDMA_GINTR_SIDMA13_LEN               _SDMA_UL(1)

/* SDMA_GINTR_SIDMA14 (w) */
#define SDMA_GINTR_SIDMA14_POS               _SDMA_UL(14)
#define SDMA_GINTR_SIDMA14_LEN               _SDMA_UL(1)

/* SDMA_GINTR_SIDMA15 (w) */
#define SDMA_GINTR_SIDMA15_POS               _SDMA_UL(15)
#define SDMA_GINTR_SIDMA15_LEN               _SDMA_UL(1)

/* SDMA_MESR_ME0RS (rh) */
#define SDMA_MESR_ME0RS_POS                  _SDMA_UL(0)
#define SDMA_MESR_ME0RS_LEN                  _SDMA_UL(1)

/* SDMA_MESR_CH0 (rh) */
#define SDMA_MESR_CH0_POS                    _SDMA_UL(1)
#define SDMA_MESR_CH0_LEN                    _SDMA_UL(3)

/* SDMA_MESR_ME0WS (rh) */
#define SDMA_MESR_ME0WS_POS                  _SDMA_UL(4)
#define SDMA_MESR_ME0WS_LEN                  _SDMA_UL(1)

/* SDMA_MESR_RBTFPI (rh) */
#define SDMA_MESR_RBTFPI_POS                 _SDMA_UL(5)
#define SDMA_MESR_RBTFPI_LEN                 _SDMA_UL(3)

/* SDMA_ME0R_RD00 (rh) */
#define SDMA_ME0R_RD00_POS                   _SDMA_UL(0)
#define SDMA_ME0R_RD00_LEN                   _SDMA_UL(8)

/* SDMA_ME0R_RD01 (rh) */
#define SDMA_ME0R_RD01_POS                   _SDMA_UL(8)
#define SDMA_ME0R_RD01_LEN                   _SDMA_UL(8)

/* SDMA_ME0R_RD02 (rh) */
#define SDMA_ME0R_RD02_POS                   _SDMA_UL(16)
#define SDMA_ME0R_RD02_LEN                   _SDMA_UL(8)

/* SDMA_ME0R_RD03 (rh) */
#define SDMA_ME0R_RD03_POS                   _SDMA_UL(24)
#define SDMA_ME0R_RD03_LEN                   _SDMA_UL(8)

/* SDMA_ME0PR_PAT00 (rw) */
#define SDMA_ME0PR_PAT00_POS                 _SDMA_UL(0)
#define SDMA_ME0PR_PAT00_LEN                 _SDMA_UL(8)

/* SDMA_ME0PR_PAT01 (rw) */
#define SDMA_ME0PR_PAT01_POS                 _SDMA_UL(8)
#define SDMA_ME0PR_PAT01_LEN                 _SDMA_UL(8)

/* SDMA_ME0PR_PAT02 (rw) */
#define SDMA_ME0PR_PAT02_POS                 _SDMA_UL(16)
#define SDMA_ME0PR_PAT02_LEN                 _SDMA_UL(8)

/* SDMA_ME0PR_PAT03 (rw) */
#define SDMA_ME0PR_PAT03_POS                 _SDMA_UL(24)
#define SDMA_ME0PR_PAT03_LEN                 _SDMA_UL(8)

/* SDMA_INTSR_ICH00 (rh) */
#define SDMA_INTSR_ICH00_POS                 _SDMA_UL(0)
#define SDMA_INTSR_ICH00_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH01 (rh) */
#define SDMA_INTSR_ICH01_POS                 _SDMA_UL(1)
#define SDMA_INTSR_ICH01_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH02 (rh) */
#define SDMA_INTSR_ICH02_POS                 _SDMA_UL(2)
#define SDMA_INTSR_ICH02_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH03 (rh) */
#define SDMA_INTSR_ICH03_POS                 _SDMA_UL(3)
#define SDMA_INTSR_ICH03_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH04 (rh) */
#define SDMA_INTSR_ICH04_POS                 _SDMA_UL(4)
#define SDMA_INTSR_ICH04_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH05 (rh) */
#define SDMA_INTSR_ICH05_POS                 _SDMA_UL(5)
#define SDMA_INTSR_ICH05_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH06 (rh) */
#define SDMA_INTSR_ICH06_POS                 _SDMA_UL(6)
#define SDMA_INTSR_ICH06_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_ICH07 (rh) */
#define SDMA_INTSR_ICH07_POS                 _SDMA_UL(7)
#define SDMA_INTSR_ICH07_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM00 (rh) */
#define SDMA_INTSR_IPM00_POS                 _SDMA_UL(16)
#define SDMA_INTSR_IPM00_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM01 (rh) */
#define SDMA_INTSR_IPM01_POS                 _SDMA_UL(17)
#define SDMA_INTSR_IPM01_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM02 (rh) */
#define SDMA_INTSR_IPM02_POS                 _SDMA_UL(18)
#define SDMA_INTSR_IPM02_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM03 (rh) */
#define SDMA_INTSR_IPM03_POS                 _SDMA_UL(19)
#define SDMA_INTSR_IPM03_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM04 (rh) */
#define SDMA_INTSR_IPM04_POS                 _SDMA_UL(20)
#define SDMA_INTSR_IPM04_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM05 (rh) */
#define SDMA_INTSR_IPM05_POS                 _SDMA_UL(21)
#define SDMA_INTSR_IPM05_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM06 (rh) */
#define SDMA_INTSR_IPM06_POS                 _SDMA_UL(22)
#define SDMA_INTSR_IPM06_LEN                 _SDMA_UL(1)

/* SDMA_INTSR_IPM07 (rh) */
#define SDMA_INTSR_IPM07_POS                 _SDMA_UL(23)
#define SDMA_INTSR_IPM07_LEN                 _SDMA_UL(1)

/* SDMA_INTCR_CICH00 (w) */
#define SDMA_INTCR_CICH00_POS                _SDMA_UL(0)
#define SDMA_INTCR_CICH00_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH01 (w) */
#define SDMA_INTCR_CICH01_POS                _SDMA_UL(1)
#define SDMA_INTCR_CICH01_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH02 (w) */
#define SDMA_INTCR_CICH02_POS                _SDMA_UL(2)
#define SDMA_INTCR_CICH02_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH03 (w) */
#define SDMA_INTCR_CICH03_POS                _SDMA_UL(3)
#define SDMA_INTCR_CICH03_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH04 (w) */
#define SDMA_INTCR_CICH04_POS                _SDMA_UL(4)
#define SDMA_INTCR_CICH04_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH05 (w) */
#define SDMA_INTCR_CICH05_POS                _SDMA_UL(5)
#define SDMA_INTCR_CICH05_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH06 (w) */
#define SDMA_INTCR_CICH06_POS                _SDMA_UL(6)
#define SDMA_INTCR_CICH06_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CICH07 (w) */
#define SDMA_INTCR_CICH07_POS                _SDMA_UL(7)
#define SDMA_INTCR_CICH07_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP00 (w) */
#define SDMA_INTCR_CWRP00_POS                _SDMA_UL(16)
#define SDMA_INTCR_CWRP00_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP01 (w) */
#define SDMA_INTCR_CWRP01_POS                _SDMA_UL(17)
#define SDMA_INTCR_CWRP01_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP02 (w) */
#define SDMA_INTCR_CWRP02_POS                _SDMA_UL(18)
#define SDMA_INTCR_CWRP02_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP03 (w) */
#define SDMA_INTCR_CWRP03_POS                _SDMA_UL(19)
#define SDMA_INTCR_CWRP03_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP04 (w) */
#define SDMA_INTCR_CWRP04_POS                _SDMA_UL(20)
#define SDMA_INTCR_CWRP04_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP05 (w) */
#define SDMA_INTCR_CWRP05_POS                _SDMA_UL(21)
#define SDMA_INTCR_CWRP05_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP06 (w) */
#define SDMA_INTCR_CWRP06_POS                _SDMA_UL(22)
#define SDMA_INTCR_CWRP06_LEN                _SDMA_UL(1)

/* SDMA_INTCR_CWRP07 (w) */
#define SDMA_INTCR_CWRP07_POS                _SDMA_UL(23)
#define SDMA_INTCR_CWRP07_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS00 (rh) */
#define SDMA_WRPSR_WRPS00_POS                _SDMA_UL(0)
#define SDMA_WRPSR_WRPS00_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS01 (rh) */
#define SDMA_WRPSR_WRPS01_POS                _SDMA_UL(1)
#define SDMA_WRPSR_WRPS01_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS02 (rh) */
#define SDMA_WRPSR_WRPS02_POS                _SDMA_UL(2)
#define SDMA_WRPSR_WRPS02_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS03 (rh) */
#define SDMA_WRPSR_WRPS03_POS                _SDMA_UL(3)
#define SDMA_WRPSR_WRPS03_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS04 (rh) */
#define SDMA_WRPSR_WRPS04_POS                _SDMA_UL(4)
#define SDMA_WRPSR_WRPS04_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS05 (rh) */
#define SDMA_WRPSR_WRPS05_POS                _SDMA_UL(5)
#define SDMA_WRPSR_WRPS05_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS06 (rh) */
#define SDMA_WRPSR_WRPS06_POS                _SDMA_UL(6)
#define SDMA_WRPSR_WRPS06_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPS07 (rh) */
#define SDMA_WRPSR_WRPS07_POS                _SDMA_UL(7)
#define SDMA_WRPSR_WRPS07_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD00 (rh) */
#define SDMA_WRPSR_WRPD00_POS                _SDMA_UL(16)
#define SDMA_WRPSR_WRPD00_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD01 (rh) */
#define SDMA_WRPSR_WRPD01_POS                _SDMA_UL(17)
#define SDMA_WRPSR_WRPD01_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD02 (rh) */
#define SDMA_WRPSR_WRPD02_POS                _SDMA_UL(18)
#define SDMA_WRPSR_WRPD02_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD03 (rh) */
#define SDMA_WRPSR_WRPD03_POS                _SDMA_UL(19)
#define SDMA_WRPSR_WRPD03_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD04 (rh) */
#define SDMA_WRPSR_WRPD04_POS                _SDMA_UL(20)
#define SDMA_WRPSR_WRPD04_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD05 (rh) */
#define SDMA_WRPSR_WRPD05_POS                _SDMA_UL(21)
#define SDMA_WRPSR_WRPD05_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD06 (rh) */
#define SDMA_WRPSR_WRPD06_POS                _SDMA_UL(22)
#define SDMA_WRPSR_WRPD06_LEN                _SDMA_UL(1)

/* SDMA_WRPSR_WRPD07 (rh) */
#define SDMA_WRPSR_WRPD07_POS                _SDMA_UL(23)
#define SDMA_WRPSR_WRPD07_LEN                _SDMA_UL(1)

/* SDMA_OCDSR_BTRC0 (rw) */
#define SDMA_OCDSR_BTRC0_POS                 _SDMA_UL(0)
#define SDMA_OCDSR_BTRC0_LEN                 _SDMA_UL(2)

/* SDMA_OCDSR_BCHS0 (rw) */
#define SDMA_OCDSR_BCHS0_POS                 _SDMA_UL(2)
#define SDMA_OCDSR_BCHS0_LEN                 _SDMA_UL(3)

/* SDMA_OCDSR_BRL0 (rw) */
#define SDMA_OCDSR_BRL0_POS                  _SDMA_UL(5)
#define SDMA_OCDSR_BRL0_LEN                  _SDMA_UL(1)

/* SDMA_OCDSR_BTRC1 (rw) */
#define SDMA_OCDSR_BTRC1_POS                 _SDMA_UL(8)
#define SDMA_OCDSR_BTRC1_LEN                 _SDMA_UL(2)

/* SDMA_OCDSR_BCHS1 (rw) */
#define SDMA_OCDSR_BCHS1_POS                 _SDMA_UL(10)
#define SDMA_OCDSR_BCHS1_LEN                 _SDMA_UL(3)

/* SDMA_OCDSR_BRL1 (rw) */
#define SDMA_OCDSR_BRL1_POS                  _SDMA_UL(13)
#define SDMA_OCDSR_BRL1_LEN                  _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN00 (rw) */
#define SDMA_SUSPMR_SUSEN00_POS              _SDMA_UL(0)
#define SDMA_SUSPMR_SUSEN00_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN01 (rw) */
#define SDMA_SUSPMR_SUSEN01_POS              _SDMA_UL(1)
#define SDMA_SUSPMR_SUSEN01_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN02 (rw) */
#define SDMA_SUSPMR_SUSEN02_POS              _SDMA_UL(2)
#define SDMA_SUSPMR_SUSEN02_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN03 (rw) */
#define SDMA_SUSPMR_SUSEN03_POS              _SDMA_UL(3)
#define SDMA_SUSPMR_SUSEN03_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN04 (rw) */
#define SDMA_SUSPMR_SUSEN04_POS              _SDMA_UL(4)
#define SDMA_SUSPMR_SUSEN04_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN05 (rw) */
#define SDMA_SUSPMR_SUSEN05_POS              _SDMA_UL(5)
#define SDMA_SUSPMR_SUSEN05_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN06 (rw) */
#define SDMA_SUSPMR_SUSEN06_POS              _SDMA_UL(6)
#define SDMA_SUSPMR_SUSEN06_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSEN07 (rw) */
#define SDMA_SUSPMR_SUSEN07_POS              _SDMA_UL(7)
#define SDMA_SUSPMR_SUSEN07_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC00 (rh) */
#define SDMA_SUSPMR_SUSAC00_POS              _SDMA_UL(16)
#define SDMA_SUSPMR_SUSAC00_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC01 (rh) */
#define SDMA_SUSPMR_SUSAC01_POS              _SDMA_UL(17)
#define SDMA_SUSPMR_SUSAC01_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC02 (rh) */
#define SDMA_SUSPMR_SUSAC02_POS              _SDMA_UL(18)
#define SDMA_SUSPMR_SUSAC02_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC03 (rh) */
#define SDMA_SUSPMR_SUSAC03_POS              _SDMA_UL(19)
#define SDMA_SUSPMR_SUSAC03_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC04 (rh) */
#define SDMA_SUSPMR_SUSAC04_POS              _SDMA_UL(20)
#define SDMA_SUSPMR_SUSAC04_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC05 (rh) */
#define SDMA_SUSPMR_SUSAC05_POS              _SDMA_UL(21)
#define SDMA_SUSPMR_SUSAC05_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC06 (rh) */
#define SDMA_SUSPMR_SUSAC06_POS              _SDMA_UL(22)
#define SDMA_SUSPMR_SUSAC06_LEN              _SDMA_UL(1)

/* SDMA_SUSPMR_SUSAC07 (rh) */
#define SDMA_SUSPMR_SUSAC07_POS              _SDMA_UL(23)
#define SDMA_SUSPMR_SUSAC07_LEN              _SDMA_UL(1)

/* SDMA_CHSR00_TCOUNT (rh) */
#define SDMA_CHSR00_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR00_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR00_LXO (rh) */
#define SDMA_CHSR00_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR00_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR00_TREL (rw) */
#define SDMA_CHCR00_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR00_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR00_PRSEL (rw) */
#define SDMA_CHCR00_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR00_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR00_BLKM (rw) */
#define SDMA_CHCR00_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR00_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR00_RROAT (rw) */
#define SDMA_CHCR00_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR00_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR00_CHMODE (rw) */
#define SDMA_CHCR00_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR00_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR00_CHDW (rw) */
#define SDMA_CHCR00_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR00_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR00_PATSEL (rw) */
#define SDMA_CHCR00_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR00_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR00_CHPRIO (rw) */
#define SDMA_CHCR00_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR00_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR00_WRPSE (rw) */
#define SDMA_CHICR00_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR00_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR00_WRPDE (rw) */
#define SDMA_CHICR00_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR00_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR00_INTCT (rw) */
#define SDMA_CHICR00_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR00_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR00_WRPP (rw) */
#define SDMA_CHICR00_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR00_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR00_INTP (rw) */
#define SDMA_CHICR00_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR00_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR00_IRDV (rw) */
#define SDMA_CHICR00_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR00_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR00_SMF (rw) */
#define SDMA_ADRCR00_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR00_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR00_INCS (rw) */
#define SDMA_ADRCR00_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR00_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR00_DMF (rw) */
#define SDMA_ADRCR00_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR00_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR00_INCD (rw) */
#define SDMA_ADRCR00_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR00_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR00_CBLS (rw) */
#define SDMA_ADRCR00_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR00_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR00_CBLD (rw) */
#define SDMA_ADRCR00_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR00_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR00_SHCT (rw) */
#define SDMA_ADRCR00_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR00_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR00_SHWEN (rw) */
#define SDMA_ADRCR00_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR00_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR00_SADR (rwh) */
#define SDMA_SADR00_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR00_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR00_DADR (rwh) */
#define SDMA_DADR00_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR00_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR00_SHADR (rwh) */
#define SDMA_SHADR00_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR00_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR01_TCOUNT (rh) */
#define SDMA_CHSR01_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR01_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR01_LXO (rh) */
#define SDMA_CHSR01_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR01_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR01_TREL (rw) */
#define SDMA_CHCR01_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR01_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR01_PRSEL (rw) */
#define SDMA_CHCR01_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR01_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR01_BLKM (rw) */
#define SDMA_CHCR01_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR01_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR01_RROAT (rw) */
#define SDMA_CHCR01_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR01_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR01_CHMODE (rw) */
#define SDMA_CHCR01_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR01_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR01_CHDW (rw) */
#define SDMA_CHCR01_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR01_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR01_PATSEL (rw) */
#define SDMA_CHCR01_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR01_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR01_CHPRIO (rw) */
#define SDMA_CHCR01_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR01_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR01_WRPSE (rw) */
#define SDMA_CHICR01_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR01_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR01_WRPDE (rw) */
#define SDMA_CHICR01_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR01_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR01_INTCT (rw) */
#define SDMA_CHICR01_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR01_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR01_WRPP (rw) */
#define SDMA_CHICR01_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR01_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR01_INTP (rw) */
#define SDMA_CHICR01_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR01_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR01_IRDV (rw) */
#define SDMA_CHICR01_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR01_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR01_SMF (rw) */
#define SDMA_ADRCR01_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR01_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR01_INCS (rw) */
#define SDMA_ADRCR01_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR01_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR01_DMF (rw) */
#define SDMA_ADRCR01_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR01_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR01_INCD (rw) */
#define SDMA_ADRCR01_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR01_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR01_CBLS (rw) */
#define SDMA_ADRCR01_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR01_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR01_CBLD (rw) */
#define SDMA_ADRCR01_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR01_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR01_SHCT (rw) */
#define SDMA_ADRCR01_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR01_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR01_SHWEN (rw) */
#define SDMA_ADRCR01_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR01_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR01_SADR (rwh) */
#define SDMA_SADR01_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR01_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR01_DADR (rwh) */
#define SDMA_DADR01_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR01_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR01_SHADR (rwh) */
#define SDMA_SHADR01_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR01_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR02_TCOUNT (rh) */
#define SDMA_CHSR02_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR02_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR02_LXO (rh) */
#define SDMA_CHSR02_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR02_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR02_TREL (rw) */
#define SDMA_CHCR02_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR02_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR02_PRSEL (rw) */
#define SDMA_CHCR02_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR02_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR02_BLKM (rw) */
#define SDMA_CHCR02_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR02_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR02_RROAT (rw) */
#define SDMA_CHCR02_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR02_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR02_CHMODE (rw) */
#define SDMA_CHCR02_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR02_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR02_CHDW (rw) */
#define SDMA_CHCR02_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR02_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR02_PATSEL (rw) */
#define SDMA_CHCR02_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR02_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR02_CHPRIO (rw) */
#define SDMA_CHCR02_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR02_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR02_WRPSE (rw) */
#define SDMA_CHICR02_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR02_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR02_WRPDE (rw) */
#define SDMA_CHICR02_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR02_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR02_INTCT (rw) */
#define SDMA_CHICR02_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR02_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR02_WRPP (rw) */
#define SDMA_CHICR02_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR02_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR02_INTP (rw) */
#define SDMA_CHICR02_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR02_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR02_IRDV (rw) */
#define SDMA_CHICR02_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR02_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR02_SMF (rw) */
#define SDMA_ADRCR02_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR02_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR02_INCS (rw) */
#define SDMA_ADRCR02_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR02_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR02_DMF (rw) */
#define SDMA_ADRCR02_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR02_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR02_INCD (rw) */
#define SDMA_ADRCR02_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR02_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR02_CBLS (rw) */
#define SDMA_ADRCR02_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR02_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR02_CBLD (rw) */
#define SDMA_ADRCR02_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR02_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR02_SHCT (rw) */
#define SDMA_ADRCR02_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR02_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR02_SHWEN (rw) */
#define SDMA_ADRCR02_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR02_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR02_SADR (rwh) */
#define SDMA_SADR02_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR02_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR02_DADR (rwh) */
#define SDMA_DADR02_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR02_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR02_SHADR (rwh) */
#define SDMA_SHADR02_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR02_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR03_TCOUNT (rh) */
#define SDMA_CHSR03_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR03_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR03_LXO (rh) */
#define SDMA_CHSR03_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR03_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR03_TREL (rw) */
#define SDMA_CHCR03_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR03_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR03_PRSEL (rw) */
#define SDMA_CHCR03_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR03_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR03_BLKM (rw) */
#define SDMA_CHCR03_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR03_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR03_RROAT (rw) */
#define SDMA_CHCR03_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR03_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR03_CHMODE (rw) */
#define SDMA_CHCR03_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR03_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR03_CHDW (rw) */
#define SDMA_CHCR03_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR03_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR03_PATSEL (rw) */
#define SDMA_CHCR03_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR03_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR03_CHPRIO (rw) */
#define SDMA_CHCR03_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR03_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR03_WRPSE (rw) */
#define SDMA_CHICR03_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR03_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR03_WRPDE (rw) */
#define SDMA_CHICR03_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR03_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR03_INTCT (rw) */
#define SDMA_CHICR03_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR03_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR03_WRPP (rw) */
#define SDMA_CHICR03_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR03_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR03_INTP (rw) */
#define SDMA_CHICR03_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR03_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR03_IRDV (rw) */
#define SDMA_CHICR03_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR03_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR03_SMF (rw) */
#define SDMA_ADRCR03_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR03_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR03_INCS (rw) */
#define SDMA_ADRCR03_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR03_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR03_DMF (rw) */
#define SDMA_ADRCR03_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR03_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR03_INCD (rw) */
#define SDMA_ADRCR03_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR03_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR03_CBLS (rw) */
#define SDMA_ADRCR03_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR03_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR03_CBLD (rw) */
#define SDMA_ADRCR03_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR03_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR03_SHCT (rw) */
#define SDMA_ADRCR03_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR03_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR03_SHWEN (rw) */
#define SDMA_ADRCR03_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR03_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR03_SADR (rwh) */
#define SDMA_SADR03_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR03_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR03_DADR (rwh) */
#define SDMA_DADR03_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR03_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR03_SHADR (rwh) */
#define SDMA_SHADR03_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR03_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR04_TCOUNT (rh) */
#define SDMA_CHSR04_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR04_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR04_LXO (rh) */
#define SDMA_CHSR04_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR04_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR04_TREL (rw) */
#define SDMA_CHCR04_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR04_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR04_PRSEL (rw) */
#define SDMA_CHCR04_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR04_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR04_BLKM (rw) */
#define SDMA_CHCR04_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR04_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR04_RROAT (rw) */
#define SDMA_CHCR04_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR04_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR04_CHMODE (rw) */
#define SDMA_CHCR04_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR04_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR04_CHDW (rw) */
#define SDMA_CHCR04_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR04_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR04_PATSEL (rw) */
#define SDMA_CHCR04_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR04_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR04_CHPRIO (rw) */
#define SDMA_CHCR04_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR04_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR04_WRPSE (rw) */
#define SDMA_CHICR04_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR04_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR04_WRPDE (rw) */
#define SDMA_CHICR04_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR04_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR04_INTCT (rw) */
#define SDMA_CHICR04_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR04_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR04_WRPP (rw) */
#define SDMA_CHICR04_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR04_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR04_INTP (rw) */
#define SDMA_CHICR04_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR04_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR04_IRDV (rw) */
#define SDMA_CHICR04_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR04_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR04_SMF (rw) */
#define SDMA_ADRCR04_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR04_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR04_INCS (rw) */
#define SDMA_ADRCR04_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR04_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR04_DMF (rw) */
#define SDMA_ADRCR04_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR04_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR04_INCD (rw) */
#define SDMA_ADRCR04_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR04_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR04_CBLS (rw) */
#define SDMA_ADRCR04_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR04_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR04_CBLD (rw) */
#define SDMA_ADRCR04_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR04_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR04_SHCT (rw) */
#define SDMA_ADRCR04_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR04_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR04_SHWEN (rw) */
#define SDMA_ADRCR04_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR04_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR04_SADR (rwh) */
#define SDMA_SADR04_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR04_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR04_DADR (rwh) */
#define SDMA_DADR04_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR04_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR04_SHADR (rwh) */
#define SDMA_SHADR04_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR04_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR05_TCOUNT (rh) */
#define SDMA_CHSR05_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR05_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR05_LXO (rh) */
#define SDMA_CHSR05_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR05_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR05_TREL (rw) */
#define SDMA_CHCR05_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR05_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR05_PRSEL (rw) */
#define SDMA_CHCR05_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR05_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR05_BLKM (rw) */
#define SDMA_CHCR05_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR05_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR05_RROAT (rw) */
#define SDMA_CHCR05_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR05_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR05_CHMODE (rw) */
#define SDMA_CHCR05_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR05_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR05_CHDW (rw) */
#define SDMA_CHCR05_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR05_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR05_PATSEL (rw) */
#define SDMA_CHCR05_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR05_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR05_CHPRIO (rw) */
#define SDMA_CHCR05_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR05_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR05_WRPSE (rw) */
#define SDMA_CHICR05_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR05_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR05_WRPDE (rw) */
#define SDMA_CHICR05_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR05_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR05_INTCT (rw) */
#define SDMA_CHICR05_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR05_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR05_WRPP (rw) */
#define SDMA_CHICR05_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR05_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR05_INTP (rw) */
#define SDMA_CHICR05_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR05_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR05_IRDV (rw) */
#define SDMA_CHICR05_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR05_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR05_SMF (rw) */
#define SDMA_ADRCR05_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR05_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR05_INCS (rw) */
#define SDMA_ADRCR05_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR05_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR05_DMF (rw) */
#define SDMA_ADRCR05_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR05_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR05_INCD (rw) */
#define SDMA_ADRCR05_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR05_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR05_CBLS (rw) */
#define SDMA_ADRCR05_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR05_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR05_CBLD (rw) */
#define SDMA_ADRCR05_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR05_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR05_SHCT (rw) */
#define SDMA_ADRCR05_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR05_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR05_SHWEN (rw) */
#define SDMA_ADRCR05_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR05_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR05_SADR (rwh) */
#define SDMA_SADR05_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR05_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR05_DADR (rwh) */
#define SDMA_DADR05_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR05_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR05_SHADR (rwh) */
#define SDMA_SHADR05_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR05_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR06_TCOUNT (rh) */
#define SDMA_CHSR06_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR06_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR06_LXO (rh) */
#define SDMA_CHSR06_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR06_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR06_TREL (rw) */
#define SDMA_CHCR06_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR06_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR06_PRSEL (rw) */
#define SDMA_CHCR06_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR06_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR06_BLKM (rw) */
#define SDMA_CHCR06_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR06_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR06_RROAT (rw) */
#define SDMA_CHCR06_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR06_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR06_CHMODE (rw) */
#define SDMA_CHCR06_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR06_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR06_CHDW (rw) */
#define SDMA_CHCR06_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR06_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR06_PATSEL (rw) */
#define SDMA_CHCR06_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR06_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR06_CHPRIO (rw) */
#define SDMA_CHCR06_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR06_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR06_WRPSE (rw) */
#define SDMA_CHICR06_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR06_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR06_WRPDE (rw) */
#define SDMA_CHICR06_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR06_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR06_INTCT (rw) */
#define SDMA_CHICR06_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR06_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR06_WRPP (rw) */
#define SDMA_CHICR06_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR06_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR06_INTP (rw) */
#define SDMA_CHICR06_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR06_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR06_IRDV (rw) */
#define SDMA_CHICR06_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR06_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR06_SMF (rw) */
#define SDMA_ADRCR06_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR06_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR06_INCS (rw) */
#define SDMA_ADRCR06_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR06_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR06_DMF (rw) */
#define SDMA_ADRCR06_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR06_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR06_INCD (rw) */
#define SDMA_ADRCR06_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR06_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR06_CBLS (rw) */
#define SDMA_ADRCR06_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR06_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR06_CBLD (rw) */
#define SDMA_ADRCR06_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR06_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR06_SHCT (rw) */
#define SDMA_ADRCR06_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR06_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR06_SHWEN (rw) */
#define SDMA_ADRCR06_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR06_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR06_SADR (rwh) */
#define SDMA_SADR06_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR06_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR06_DADR (rwh) */
#define SDMA_DADR06_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR06_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR06_SHADR (rwh) */
#define SDMA_SHADR06_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR06_SHADR_LEN               _SDMA_UL(32)

/* SDMA_CHSR07_TCOUNT (rh) */
#define SDMA_CHSR07_TCOUNT_POS               _SDMA_UL(0)
#define SDMA_CHSR07_TCOUNT_LEN               _SDMA_UL(10)

/* SDMA_CHSR07_LXO (rh) */
#define SDMA_CHSR07_LXO_POS                  _SDMA_UL(15)
#define SDMA_CHSR07_LXO_LEN                  _SDMA_UL(1)

/* SDMA_CHCR07_TREL (rw) */
#define SDMA_CHCR07_TREL_POS                 _SDMA_UL(0)
#define SDMA_CHCR07_TREL_LEN                 _SDMA_UL(10)

/* SDMA_CHCR07_PRSEL (rw) */
#define SDMA_CHCR07_PRSEL_POS                _SDMA_UL(12)
#define SDMA_CHCR07_PRSEL_LEN                _SDMA_UL(4)

/* SDMA_CHCR07_BLKM (rw) */
#define SDMA_CHCR07_BLKM_POS                 _SDMA_UL(16)
#define SDMA_CHCR07_BLKM_LEN                 _SDMA_UL(3)

/* SDMA_CHCR07_RROAT (rw) */
#define SDMA_CHCR07_RROAT_POS                _SDMA_UL(19)
#define SDMA_CHCR07_RROAT_LEN                _SDMA_UL(1)

/* SDMA_CHCR07_CHMODE (rw) */
#define SDMA_CHCR07_CHMODE_POS               _SDMA_UL(20)
#define SDMA_CHCR07_CHMODE_LEN               _SDMA_UL(1)

/* SDMA_CHCR07_CHDW (rw) */
#define SDMA_CHCR07_CHDW_POS                 _SDMA_UL(21)
#define SDMA_CHCR07_CHDW_LEN                 _SDMA_UL(2)

/* SDMA_CHCR07_PATSEL (rw) */
#define SDMA_CHCR07_PATSEL_POS               _SDMA_UL(24)
#define SDMA_CHCR07_PATSEL_LEN               _SDMA_UL(2)

/* SDMA_CHCR07_CHPRIO (rw) */
#define SDMA_CHCR07_CHPRIO_POS               _SDMA_UL(28)
#define SDMA_CHCR07_CHPRIO_LEN               _SDMA_UL(1)

/* SDMA_CHICR07_WRPSE (rw) */
#define SDMA_CHICR07_WRPSE_POS               _SDMA_UL(0)
#define SDMA_CHICR07_WRPSE_LEN               _SDMA_UL(1)

/* SDMA_CHICR07_WRPDE (rw) */
#define SDMA_CHICR07_WRPDE_POS               _SDMA_UL(1)
#define SDMA_CHICR07_WRPDE_LEN               _SDMA_UL(1)

/* SDMA_CHICR07_INTCT (rw) */
#define SDMA_CHICR07_INTCT_POS               _SDMA_UL(2)
#define SDMA_CHICR07_INTCT_LEN               _SDMA_UL(2)

/* SDMA_CHICR07_WRPP (rw) */
#define SDMA_CHICR07_WRPP_POS                _SDMA_UL(4)
#define SDMA_CHICR07_WRPP_LEN                _SDMA_UL(4)

/* SDMA_CHICR07_INTP (rw) */
#define SDMA_CHICR07_INTP_POS                _SDMA_UL(8)
#define SDMA_CHICR07_INTP_LEN                _SDMA_UL(4)

/* SDMA_CHICR07_IRDV (rw) */
#define SDMA_CHICR07_IRDV_POS                _SDMA_UL(12)
#define SDMA_CHICR07_IRDV_LEN                _SDMA_UL(4)

/* SDMA_ADRCR07_SMF (rw) */
#define SDMA_ADRCR07_SMF_POS                 _SDMA_UL(0)
#define SDMA_ADRCR07_SMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR07_INCS (rw) */
#define SDMA_ADRCR07_INCS_POS                _SDMA_UL(3)
#define SDMA_ADRCR07_INCS_LEN                _SDMA_UL(1)

/* SDMA_ADRCR07_DMF (rw) */
#define SDMA_ADRCR07_DMF_POS                 _SDMA_UL(4)
#define SDMA_ADRCR07_DMF_LEN                 _SDMA_UL(3)

/* SDMA_ADRCR07_INCD (rw) */
#define SDMA_ADRCR07_INCD_POS                _SDMA_UL(7)
#define SDMA_ADRCR07_INCD_LEN                _SDMA_UL(1)

/* SDMA_ADRCR07_CBLS (rw) */
#define SDMA_ADRCR07_CBLS_POS                _SDMA_UL(8)
#define SDMA_ADRCR07_CBLS_LEN                _SDMA_UL(4)

/* SDMA_ADRCR07_CBLD (rw) */
#define SDMA_ADRCR07_CBLD_POS                _SDMA_UL(12)
#define SDMA_ADRCR07_CBLD_LEN                _SDMA_UL(4)

/* SDMA_ADRCR07_SHCT (rw) */
#define SDMA_ADRCR07_SHCT_POS                _SDMA_UL(16)
#define SDMA_ADRCR07_SHCT_LEN                _SDMA_UL(2)

/* SDMA_ADRCR07_SHWEN (rw) */
#define SDMA_ADRCR07_SHWEN_POS               _SDMA_UL(18)
#define SDMA_ADRCR07_SHWEN_LEN               _SDMA_UL(1)

/* SDMA_SADR07_SADR (rwh) */
#define SDMA_SADR07_SADR_POS                 _SDMA_UL(0)
#define SDMA_SADR07_SADR_LEN                 _SDMA_UL(32)

/* SDMA_DADR07_DADR (rwh) */
#define SDMA_DADR07_DADR_POS                 _SDMA_UL(0)
#define SDMA_DADR07_DADR_LEN                 _SDMA_UL(32)

/* SDMA_SHADR07_SHADR (rwh) */
#define SDMA_SHADR07_SHADR_POS               _SDMA_UL(0)
#define SDMA_SHADR07_SHADR_LEN               _SDMA_UL(32)

/* SDMA_SAMIN00_SAMIN (rw) */
#define SDMA_SAMIN00_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN00_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX00_SAMAX (rw) */
#define SDMA_SAMAX00_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX00_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN00_DAMIN (rw) */
#define SDMA_DAMIN00_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN00_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX00_DAMAX (rw) */
#define SDMA_DAMAX00_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX00_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC00_SCRC (rwh) */
#define SDMA_SCRC00_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC00_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC00_DCRC (rwh) */
#define SDMA_DCRC00_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC00_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC00_RDCRC (rwh) */
#define SDMA_RDCRC00_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC00_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN01_SAMIN (rw) */
#define SDMA_SAMIN01_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN01_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX01_SAMAX (rw) */
#define SDMA_SAMAX01_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX01_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN01_DAMIN (rw) */
#define SDMA_DAMIN01_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN01_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX01_DAMAX (rw) */
#define SDMA_DAMAX01_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX01_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC01_SCRC (rwh) */
#define SDMA_SCRC01_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC01_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC01_DCRC (rwh) */
#define SDMA_DCRC01_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC01_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC01_RDCRC (rwh) */
#define SDMA_RDCRC01_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC01_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN02_SAMIN (rw) */
#define SDMA_SAMIN02_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN02_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX02_SAMAX (rw) */
#define SDMA_SAMAX02_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX02_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN02_DAMIN (rw) */
#define SDMA_DAMIN02_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN02_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX02_DAMAX (rw) */
#define SDMA_DAMAX02_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX02_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC02_SCRC (rwh) */
#define SDMA_SCRC02_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC02_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC02_DCRC (rwh) */
#define SDMA_DCRC02_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC02_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC02_RDCRC (rwh) */
#define SDMA_RDCRC02_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC02_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN03_SAMIN (rw) */
#define SDMA_SAMIN03_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN03_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX03_SAMAX (rw) */
#define SDMA_SAMAX03_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX03_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN03_DAMIN (rw) */
#define SDMA_DAMIN03_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN03_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX03_DAMAX (rw) */
#define SDMA_DAMAX03_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX03_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC03_SCRC (rwh) */
#define SDMA_SCRC03_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC03_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC03_DCRC (rwh) */
#define SDMA_DCRC03_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC03_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC03_RDCRC (rwh) */
#define SDMA_RDCRC03_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC03_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN04_SAMIN (rw) */
#define SDMA_SAMIN04_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN04_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX04_SAMAX (rw) */
#define SDMA_SAMAX04_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX04_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN04_DAMIN (rw) */
#define SDMA_DAMIN04_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN04_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX04_DAMAX (rw) */
#define SDMA_DAMAX04_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX04_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC04_SCRC (rwh) */
#define SDMA_SCRC04_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC04_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC04_DCRC (rwh) */
#define SDMA_DCRC04_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC04_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC04_RDCRC (rwh) */
#define SDMA_RDCRC04_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC04_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN05_SAMIN (rw) */
#define SDMA_SAMIN05_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN05_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX05_SAMAX (rw) */
#define SDMA_SAMAX05_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX05_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN05_DAMIN (rw) */
#define SDMA_DAMIN05_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN05_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX05_DAMAX (rw) */
#define SDMA_DAMAX05_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX05_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC05_SCRC (rwh) */
#define SDMA_SCRC05_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC05_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC05_DCRC (rwh) */
#define SDMA_DCRC05_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC05_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC05_RDCRC (rwh) */
#define SDMA_RDCRC05_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC05_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN06_SAMIN (rw) */
#define SDMA_SAMIN06_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN06_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX06_SAMAX (rw) */
#define SDMA_SAMAX06_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX06_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN06_DAMIN (rw) */
#define SDMA_DAMIN06_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN06_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX06_DAMAX (rw) */
#define SDMA_DAMAX06_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX06_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC06_SCRC (rwh) */
#define SDMA_SCRC06_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC06_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC06_DCRC (rwh) */
#define SDMA_DCRC06_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC06_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC06_RDCRC (rwh) */
#define SDMA_RDCRC06_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC06_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SAMIN07_SAMIN (rw) */
#define SDMA_SAMIN07_SAMIN_POS               _SDMA_UL(0)
#define SDMA_SAMIN07_SAMIN_LEN               _SDMA_UL(32)

/* SDMA_SAMAX07_SAMAX (rw) */
#define SDMA_SAMAX07_SAMAX_POS               _SDMA_UL(0)
#define SDMA_SAMAX07_SAMAX_LEN               _SDMA_UL(32)

/* SDMA_DAMIN07_DAMIN (rw) */
#define SDMA_DAMIN07_DAMIN_POS               _SDMA_UL(0)
#define SDMA_DAMIN07_DAMIN_LEN               _SDMA_UL(32)

/* SDMA_DAMAX07_DAMAX (rw) */
#define SDMA_DAMAX07_DAMAX_POS               _SDMA_UL(0)
#define SDMA_DAMAX07_DAMAX_LEN               _SDMA_UL(32)

/* SDMA_SCRC07_SCRC (rwh) */
#define SDMA_SCRC07_SCRC_POS                 _SDMA_UL(0)
#define SDMA_SCRC07_SCRC_LEN                 _SDMA_UL(32)

/* SDMA_DCRC07_DCRC (rwh) */
#define SDMA_DCRC07_DCRC_POS                 _SDMA_UL(0)
#define SDMA_DCRC07_DCRC_LEN                 _SDMA_UL(32)

/* SDMA_RDCRC07_RDCRC (rwh) */
#define SDMA_RDCRC07_RDCRC_POS               _SDMA_UL(0)
#define SDMA_RDCRC07_RDCRC_LEN               _SDMA_UL(32)

/* SDMA_SRC7_SRPN (rw) */
#define SDMA_SRC7_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC7_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC7_TOS (rw) */
#define SDMA_SRC7_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC7_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC7_SRE (rw) */
#define SDMA_SRC7_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC7_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC7_SRR (rh) */
#define SDMA_SRC7_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC7_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC7_CLRR (w) */
#define SDMA_SRC7_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC7_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC7_SETR (w) */
#define SDMA_SRC7_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC7_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC6_SRPN (rw) */
#define SDMA_SRC6_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC6_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC6_TOS (rw) */
#define SDMA_SRC6_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC6_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC6_SRE (rw) */
#define SDMA_SRC6_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC6_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC6_SRR (rh) */
#define SDMA_SRC6_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC6_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC6_CLRR (w) */
#define SDMA_SRC6_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC6_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC6_SETR (w) */
#define SDMA_SRC6_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC6_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC5_SRPN (rw) */
#define SDMA_SRC5_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC5_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC5_TOS (rw) */
#define SDMA_SRC5_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC5_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC5_SRE (rw) */
#define SDMA_SRC5_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC5_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC5_SRR (rh) */
#define SDMA_SRC5_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC5_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC5_CLRR (w) */
#define SDMA_SRC5_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC5_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC5_SETR (w) */
#define SDMA_SRC5_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC5_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC4_SRPN (rw) */
#define SDMA_SRC4_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC4_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC4_TOS (rw) */
#define SDMA_SRC4_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC4_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC4_SRE (rw) */
#define SDMA_SRC4_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC4_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC4_SRR (rh) */
#define SDMA_SRC4_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC4_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC4_CLRR (w) */
#define SDMA_SRC4_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC4_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC4_SETR (w) */
#define SDMA_SRC4_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC4_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC3_SRPN (rw) */
#define SDMA_SRC3_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC3_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC3_TOS (rw) */
#define SDMA_SRC3_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC3_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC3_SRE (rw) */
#define SDMA_SRC3_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC3_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC3_SRR (rh) */
#define SDMA_SRC3_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC3_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC3_CLRR (w) */
#define SDMA_SRC3_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC3_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC3_SETR (w) */
#define SDMA_SRC3_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC3_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC2_SRPN (rw) */
#define SDMA_SRC2_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC2_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC2_TOS (rw) */
#define SDMA_SRC2_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC2_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC2_SRE (rw) */
#define SDMA_SRC2_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC2_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC2_SRR (rh) */
#define SDMA_SRC2_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC2_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC2_CLRR (w) */
#define SDMA_SRC2_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC2_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC2_SETR (w) */
#define SDMA_SRC2_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC2_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC1_SRPN (rw) */
#define SDMA_SRC1_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC1_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC1_TOS (rw) */
#define SDMA_SRC1_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC1_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC1_SRE (rw) */
#define SDMA_SRC1_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC1_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC1_SRR (rh) */
#define SDMA_SRC1_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC1_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC1_CLRR (w) */
#define SDMA_SRC1_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC1_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC1_SETR (w) */
#define SDMA_SRC1_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC1_SETR_LEN                   _SDMA_UL(1)

/* SDMA_SRC0_SRPN (rw) */
#define SDMA_SRC0_SRPN_POS                   _SDMA_UL(0)
#define SDMA_SRC0_SRPN_LEN                   _SDMA_UL(8)

/* SDMA_SRC0_TOS (rw) */
#define SDMA_SRC0_TOS_POS                    _SDMA_UL(10)
#define SDMA_SRC0_TOS_LEN                    _SDMA_UL(1)

/* SDMA_SRC0_SRE (rw) */
#define SDMA_SRC0_SRE_POS                    _SDMA_UL(12)
#define SDMA_SRC0_SRE_LEN                    _SDMA_UL(1)

/* SDMA_SRC0_SRR (rh) */
#define SDMA_SRC0_SRR_POS                    _SDMA_UL(13)
#define SDMA_SRC0_SRR_LEN                    _SDMA_UL(1)

/* SDMA_SRC0_CLRR (w) */
#define SDMA_SRC0_CLRR_POS                   _SDMA_UL(14)
#define SDMA_SRC0_CLRR_LEN                   _SDMA_UL(1)

/* SDMA_SRC0_SETR (w) */
#define SDMA_SRC0_SETR_POS                   _SDMA_UL(15)
#define SDMA_SRC0_SETR_LEN                   _SDMA_UL(1)

#endif
