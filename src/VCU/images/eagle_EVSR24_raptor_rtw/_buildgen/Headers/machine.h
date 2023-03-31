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
 * $Filename__:cpu_machine.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:KOI2KOR$
 * $Date______:29.03.2012$
 * $Class_____:CONFTPLHDR$
 * $Name______:cpu_machine$
 * $Variant___:1.13.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.13.0; 0     29.03.2012 KOI2KOR
 *   SHE module support for TC1793 controller
 * 
 * 1.12.0; 2     04.03.2011 AHT2FE
 *   Fix for TC_1724
 * 
 * 1.12.0; 1     18.02.2011 AHT2FE
 *   Fix cpu_machine.ht for TC_1724
 * 
 * 1.12.0; 0     11.02.2011 AHT2FE
 *   Fix cpu_machine.ht for TC_1724
 * 
 * 1.11.0; 0     25.10.2010 AHT2FE
 *   Improved 1793 support
 * 
 * 1.10.0; 2     31.05.2010 AHT2FE
 *   Fixes for new TC_1793 spec
 * 
 * 1.10.0; 1     26.04.2010 AHT2FE
 *   Added TC:_1793
 * 
 * 1.10.0; 0     16.03.2010 AHT2FE
 *   Added support for TC_1793
 * 
 * 1.9.0; 0     24.11.2009 AWL2SI
 *   B_CPU.9.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _MACHINE_H
#define _MACHINE_H

/**
 ***************************************************************************************************
 * \moduledescription
 *           Header file which contains CPU dependent definitions
 *
 *           THIS FILE IS GENERATED AUTOMATICALLY - DO NOT EDIT!
 *
 *
 * \scope    API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* if this header is used in C-context, add type suffix to constant values */
/* in linker context, do not use suffixes                                  */

#ifdef LINK_RUN
  #define DEF_CONST(x) x
#else
  #define DEF_CONST(x) x##UL
#endif

/**
 ***************************************************************************************************
 *  Specification of the CPU type.
 *
 *  valid options are:
 *
 *  TC_1762    TC_1762 is not supported by CPU package only this define is created
 *  TC_1796    Infineon TriCore 1.3 TC1796  (METIS)
 *  TC_1766    Infineon TriCore 1.3 TC1766  (LedaLight)
 *  TC_1767    Infineon TriCore V1.3.1 TC1767
 *  TC_1797    Infineon TriCore V1.3.1 TC1797
 *  TC_1782    Infineon TriCore V1.3.1 TC1782
 *  TC_1793    Infineon TriCore V1.6 TC1793
 *  TC_1724    Infineon TriCore V1.3.1 TC1724
 *  TC_1792    Infineon TriCore 1.3 TC1792  (METIS with reduced featureset)
 *  TC_1764    Infineon TriCore 1.3 TC1764  (LedaLight with reduced featureset)
 *  TC_1736    Infineon TriCore V1.3.1 TC1736
 *  TC_1736F40 Infineon TriCore V1.3.1 TC1736F40
 *  TC_1387    TC_1387 is not supported by CPU package only this define is created
 *
 *
 ***************************************************************************************************
*/

#define TC_1762                        0
#define TC_1796                        2
#define TC_1766                        3
#define TC_1767                        4
#define TC_1797                        5
#define TC_1782                        6
#define TC_1793                        7
#define TC_1724                        8
#define TC_1792                        21
#define TC_1764                        31
#define TC_1736                        41
#define TC_1736F40                     42
#define TC_1387                        0xFFFF



/* define current processor type */
#ifndef DECLARE_MACHINE_TYPE_EXTERNAL
#define MACHINE_TYPE                   TC_1793
#define MACHINE_SUBTYPE                TC_1793

#endif

/**
 ***************************************************************************************************
 *  Define chip identification values of supported devices
 *
 *  These values can be used to determine the processor type during runtime.
 *  The chip identification can be read by calling Reg_GetBitfield(SCU, CHIPID, CHIPID_CHID)
 *
 ***************************************************************************************************
*/

#define MACHINE_CHID_TC_1796           0x8A
#define MACHINE_CHID_TC_1766           0x8B
#define MACHINE_CHID_TC_1767           0x90
#define MACHINE_CHID_TC_1797           0x91
#define MACHINE_CHID_TC_1782           0x93
#define MACHINE_CHID_TC_1793           0x97
#define MACHINE_CHID_TC_1724           0x9B
#define MACHINE_CHID_TC_1792           0x8A
#define MACHINE_CHID_TC_1764           0x8B
#define MACHINE_CHID_TC_1736           0x92
#define MACHINE_CHID_TC_1736F40        0x92


/**
 ***************************************************************************************************
 *  Define endianness of the CPU.
 *
 *  This define configures platform independent SW modules (e.g. service library) for the
 *  TriCore target processors.
 *
 ***************************************************************************************************
*/

#define LITTLE_ENDIAN                  


/**
 ***************************************************************************************************
 *  Defines for available modules.
 *
 *  Defines can be used to check if a module e.g. PCP is available on the microcontroller
 ***************************************************************************************************
*/

#define CPU_PCP_AVL                    


/**
 ***************************************************************************************************
 *
 *  Define the address mapping of memories and peripheral modules.
 *
 ***************************************************************************************************
*/

#if (MACHINE_TYPE == TC_1796)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

/* Program flash  */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x801FFFFF)

/* Data flash (identical on TC1796 and TC1792) */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE0FFFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE1FFFF)

#if (MACHINE_SUBTYPE == TC_1792)

/* **************************************************************************** */
/* * PCP - only for compatibility, defines not available on all machine types * */
/* **************************************************************************** */
/* PCP Code RAM */
#define MEM_RAM_PCPCODE_START       DEF_CONST(0xF0060000)
#define MEM_RAM_PCPCODE_END         DEF_CONST(0xF0063FFF)
/* PCP Data RAM */
#define MEM_RAM_PCPDATA_START       DEF_CONST(0xF0050000)
#define MEM_RAM_PCPDATA_END         DEF_CONST(0xF0051FFF)

/* ******************************************************************************** */
/* * DMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMU SRAM */
#define MEM_RAM_DMUSRAM_START       DEF_CONST(0xC0000000)
#define MEM_RAM_DMUSRAM_END         DEF_CONST(0xC0003FFF)
/* DMU Standby RAM */
#define MEM_RAM_DMUSBRAM_START      DEF_CONST(0xC03FC000)
#define MEM_RAM_DMUSBRAM_END        DEF_CONST(0xC03FFFFF)

/* ******************************************************************************** */
/* * DMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMI LDRAM */
#define MEM_RAM_DMILDRAM_START      DEF_CONST(0xD0000000)
#define MEM_RAM_DMILDRAM_END        DEF_CONST(0xD000DFFF)

/************************************************************************/
/* C A U T I O N :                                                      */
/* ===============                                                      */
/* The following RAM area within DMI is present, but not dual ported in */
/* case of TC_1972!                                                     */
/* This is taken care of by the MEMLAY module which prevents access to  */
/* this RAM area via the second (RPB-side) port in case of TC_1792.     */
/************************************************************************/

/* Dual Ported RAM */
#define MEM_RAM_DMIDPRAM_START      DEF_CONST(0xD000E000)
#define MEM_RAM_DMIDPRAM_END        DEF_CONST(0xD000FFFF)

/* ******************************************************************************** */
/* * PMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* Scratch pad RAM */
#define MEM_RAM_PMISPRAM_START      DEF_CONST(0xD4000000)
#define MEM_RAM_PMISPRAM_END        DEF_CONST(0xD4005FFF)

/* ******************************************************************************** */
/* * PMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* PMU Overlay RAM */
#define MEM_RAM_PMUOVRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_PMUOVRAM_END        DEF_CONST(0x00000000)

#else

/* **************************************************************************** */
/* * PCP - only for compatibility, defines not available on all machine types * */
/* **************************************************************************** */
/* PCP Code RAM */
#define MEM_RAM_PCPCODE_START       DEF_CONST(0xF0060000)
#define MEM_RAM_PCPCODE_END         DEF_CONST(0xF0067FFF)
/* PCP Data RAM */
#define MEM_RAM_PCPDATA_START       DEF_CONST(0xF0050000)
#define MEM_RAM_PCPDATA_END         DEF_CONST(0xF0053FFF)

/* ******************************************************************************** */
/* * DMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMU SRAM */
#define MEM_RAM_DMUSRAM_START       DEF_CONST(0xC0000000)
#define MEM_RAM_DMUSRAM_END         DEF_CONST(0xC000FFFF)
/* DMU Standby RAM */
#define MEM_RAM_DMUSBRAM_START      DEF_CONST(0xC03FC000)
#define MEM_RAM_DMUSBRAM_END        DEF_CONST(0xC03FFFFF)

/* ******************************************************************************** */
/* * DMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMI LDRAM */
#define MEM_RAM_DMILDRAM_START      DEF_CONST(0xD0000000)
#define MEM_RAM_DMILDRAM_END        DEF_CONST(0xD000DFFF)
/* Dual Ported RAM */
#define MEM_RAM_DMIDPRAM_START      DEF_CONST(0xD000E000)
#define MEM_RAM_DMIDPRAM_END        DEF_CONST(0xD000FFFF)

/* ******************************************************************************** */
/* * PMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* Scratch pad RAM */
#define MEM_RAM_PMISPRAM_START      DEF_CONST(0xD4000000)
#define MEM_RAM_PMISPRAM_END        DEF_CONST(0xD400BFFF)

/* ******************************************************************************** */
/* * PMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* PMU Overlay RAM */
#define MEM_RAM_PMUOVRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_PMUOVRAM_END        DEF_CONST(0x00000000)

/* END OF TC1792 / TC1796 dependencies */
#endif

/* ****************** */
/* * External Memory* */
/* ****************** */
/* External RAM */
#define MEM_RAM_EXTERN_START        DEF_CONST(0x82000000)

/* External flash */
#define MEM_ROM_EXTERN_START        DEF_CONST(0x80800000)

#ifdef LINK_RUN

  /*************************************/
  /*                                   */
  /*  TC 1796/92 register description  */
  /*                                   */
  /*************************************/

  /* analog to digital converters */
  ADC        = 0xF0100400;
  ADC0       = 0xF0100400;
  ADC1       = 0xF0100600;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* CBS */
  CBS        = 0xF0000400;
  /* Core registers */
  CORE       = 0xF7E1FD00;
  /* CPU slave interface registers */
  CPS        = 0xF7E0FF00;
  /* core special function registers */
  CSFR       = 0xF7E1FE00;
  /* DBCU */
  DBCU       = 0xF87FFA00;
  /* DMA */
  DMA        = 0xF0003C00;
  /* DMI */
  DMI        = 0xF87FFC00;
  /* DMU */
  DMU        = 0xF8010100;
  /* External Bus unit */
  EBU        = 0xF8000000;
  /* FADC */
  FADC       = 0xF0100300;
  /* Flash module */
  FLASH      = 0xF8002000;
  /* General purpose registers */
  GPR        = 0xF7E1FF00;
  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  GPTA1      = 0xF0002000;
  /* LFI */
  LFI        = 0xF87FFF00;
#if (MACHINE_SUBTYPE != TC_1792)
  /* Local timer cells array */
  LTCA2      = 0xF0002800;
#endif
  /* Memory checker */
  MCHK       = 0xF010C200;
  /* MLI */
  MLI        = 0xF010C000;
  MLI0       = 0xF010C000;
  MLI1       = 0xF010C100;
  /* Memory protection */
  MPR        = 0xF7E1C000;
  /* MSC */
  MSC        = 0xF0000800;
  MSC0       = 0xF0000800;
#if (MACHINE_SUBTYPE != TC_1792)
  MSC1       = 0xF0000900;
#endif
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P10        = 0xF0001600;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  P6         = 0xF0001200;
  P7         = 0xF0001300;
  P8         = 0xF0001400;
  P9         = 0xF0001500;
  /* PBCU */
  PBCU       = 0xF87FFE00;
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMI */
  PMI        = 0xF87FFD00;
  /* PMU */
  PMU        = 0xF8000500;
  /* Remote bus control unit */
  RBCU       = 0xF0100000;
  /* System bus control unit */
  SBCU       = 0xF0000100;
  /* system control unit */
  SCU        = 0xF0000000;
  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0100100;
  SSC0       = 0xF0100100;
  SSC1       = 0xF0100200;
  /* system timer */
  STM        = 0xF0000200;

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = (CPS + 0xFC);
  STM_BASE_ADR              = STM;
  SCU_BASE_ADR              = SCU;
  ALARM_SRC_ADR             = (STM + 0xF8);
  TIMETABLE_SRC_ADR         = (STM + 0xFC);
  SYSTEM_TIME_REGISTER_TC   = (STM + 0x10);

#endif

#elif (MACHINE_TYPE == TC_1766)

#if (MACHINE_SUBTYPE == TC_1764)

/* ****************** */
/* * Internal Flash * */
/* ****************** */
/* Program flash  */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x800FFFFF)
/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE01FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE11FFF)

/* **************************************************************************** */
/* * PCP - only for compatibility, defines not available on all machine types * */
/* **************************************************************************** */
/* PCP Code RAM */
#define MEM_RAM_PCPCODE_START       DEF_CONST(0xF0060000)
#define MEM_RAM_PCPCODE_END         DEF_CONST(0xF0061FFF)
/* PCP Data RAM */
#define MEM_RAM_PCPDATA_START       DEF_CONST(0xF0050000)
#define MEM_RAM_PCPDATA_END         DEF_CONST(0xF00507FF)

/* ******************************************************************************** */
/* * DMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMU SRAM */
#define MEM_RAM_DMUSRAM_START       DEF_CONST(0x00000000)
#define MEM_RAM_DMUSRAM_END         DEF_CONST(0x00000000)
/* DMU Standby RAM */
#define MEM_RAM_DMUSBRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_DMUSBRAM_END        DEF_CONST(0x00000000)

/* ******************************************************************************** */
/* * DMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMI LDRAM */
#define MEM_RAM_DMILDRAM_START      DEF_CONST(0xD0000000)
#define MEM_RAM_DMILDRAM_END        DEF_CONST(0xD0007FFF)
/* Dual Ported RAM */
#define MEM_RAM_DMIDPRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_DMIDPRAM_END        DEF_CONST(0x00000000)

/* ******************************************************************************** */
/* * PMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* Scratch pad RAM */
#define MEM_RAM_PMISPRAM_START      DEF_CONST(0xD4000000)
#define MEM_RAM_PMISPRAM_END        DEF_CONST(0xD4001FFF)

/* ******************************************************************************** */
/* * PMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* PMU Overlay RAM */
#define MEM_RAM_PMUOVRAM_START      DEF_CONST(0xC0000000)
#define MEM_RAM_PMUOVRAM_END        DEF_CONST(0xC0001FFF)

#else

/* ****************** */
/* * Internal Flash * */
/* ****************** */
/* Program flash  */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x80177FFF)
/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE03FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE13FFF)

/* **************************************************************************** */
/* * PCP - only for compatibility, defines not available on all machine types * */
/* **************************************************************************** */
/* PCP Code RAM */
#define MEM_RAM_PCPCODE_START       DEF_CONST(0xF0060000)
#define MEM_RAM_PCPCODE_END         DEF_CONST(0xF0062FFF)
/* PCP Data RAM */
#define MEM_RAM_PCPDATA_START       DEF_CONST(0xF0050000)
#define MEM_RAM_PCPDATA_END         DEF_CONST(0xF0051FFF)

/* ******************************************************************************** */
/* * DMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMU SRAM */
#define MEM_RAM_DMUSRAM_START       DEF_CONST(0x00000000)
#define MEM_RAM_DMUSRAM_END         DEF_CONST(0x00000000)
/* DMU Standby RAM */
#define MEM_RAM_DMUSBRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_DMUSBRAM_END        DEF_CONST(0x00000000)

/* ******************************************************************************** */
/* * DMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* DMI LDRAM */
#define MEM_RAM_DMILDRAM_START      DEF_CONST(0xD0000000)
#define MEM_RAM_DMILDRAM_END        DEF_CONST(0xD000DFFF)
/* Dual Ported RAM */
#define MEM_RAM_DMIDPRAM_START      DEF_CONST(0x00000000)
#define MEM_RAM_DMIDPRAM_END        DEF_CONST(0x00000000)

/* ******************************************************************************** */
/* * PMI RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* Scratch pad RAM */
#define MEM_RAM_PMISPRAM_START      DEF_CONST(0xD4000000)
#define MEM_RAM_PMISPRAM_END        DEF_CONST(0xD4003FFF)

/* ******************************************************************************** */
/* * PMU RAM - only for compatibility, defines not available on all machine types * */
/* ******************************************************************************** */
/* PMU Overlay RAM */
#define MEM_RAM_PMUOVRAM_START      DEF_CONST(0xC0000000)
#define MEM_RAM_PMUOVRAM_END        DEF_CONST(0xC0001FFF)

/* END OF TC1764 / TC1766 dependencies */
#endif

/* ****************** */
/* * External Memory* */
/* ****************** */
/* External RAM */
#define MEM_RAM_EXTERN_START        DEF_CONST(0x00000000)

/* External flash */
#define MEM_ROM_EXTERN_START        DEF_CONST(0x00000000)

/* Emulation device RAM */
#define MEM_RAM_EMULATION_START     DEF_CONST(0x8FF20000)
#define MEM_RAM_EMULATION_END       DEF_CONST(0x8FF5FFFF)

#ifdef LINK_RUN

  /*************************************/
  /*                                   */
  /*  TC 1766/64 register description  */
  /*                                   */
  /*************************************/

  /* analog to digital converter */
  ADC        = 0xF0100400;
  ADC0       = 0xF0100400;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* CBS */
  CBS        = 0xF0000400;
  /* Core registers */
  CORE       = 0xF7E1FD00;
  /* CPU slave interface registers */
  CPS        = 0xF7E0FF00;
  /* core special function registers */
  CSFR       = 0xF7E1FE00;
  /* DMA */
  DMA        = 0xF0003C00;
  /* DMI */
  DMI        = 0xF87FFC00;
  /* FADC */
  FADC       = 0xF0100300;
  /* Flash module */
  FLASH      = 0xF8002000;
  /* General purpose registers */
  GPR        = 0xF7E1FF00;
  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  /* LBCU */
  LBCU       = 0xF87FFE00;
  /* LFI */
  LFI        = 0xF87FFF00;
  /* Memory checker */
  MCHK       = 0xF010C200;
  /* MLI */
  MLI        = 0xF010C000;
  MLI0       = 0xF010C000;

  /***************************************************************************/
  /* C A U T I O N :                                                         */
  /* ===============                                                         */
  /* MLI1 interface is not available on TC_1764 !!!                          */
  /* However, as TC_1764 SW must run on a TC_1766 emulation device without   */
  /* changes, the MLI1 must be present in the machine.h file.                */
  /*                                                                         */
  /* MLI1 _must not_ be used by any SW module except from DME driver in case */
  /* of TC_1764 configuration.                                               */
  /***************************************************************************/

  MLI1       = 0xF010C100;
  /* Memory protection */
  MPR        = 0xF7E1C000;
  /* MSC */
  MSC        = 0xF0000800;
  MSC0       = 0xF0000800;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMI */
  PMI        = 0xF87FFD00;
  /* PMU */
  PMU        = 0xF8000500;
  /* System bus control unit */
  SBCU       = 0xF0000100;
  /* system control unit */
  SCU        = 0xF0000000;
  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0100100;
  SSC0       = 0xF0100100;
#if (MACHINE_SUBTYPE != TC_1764)
  SSC1       = 0xF0100200;
#endif
  /* system timer */
  STM        = 0xF0000200;

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = (CPS + 0xFC);
  STM_BASE_ADR              = STM;
  SCU_BASE_ADR              = SCU;
  ALARM_SRC_ADR             = (STM + 0xF8);
  TIMETABLE_SRC_ADR         = (STM + 0xFC);
  SYSTEM_TIME_REGISTER_TC   = STM + 0x10;

#endif


#elif (MACHINE_TYPE == TC_1767)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

#if (MACHINE_SUBTYPE == TC_1736)

/* Program flash TC_1736 */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x800FFFFF)

/* Data flash TC_1736 */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE03FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE13FFF)

#elif (MACHINE_SUBTYPE == TC_1736F40)

/* Program flash TC_1736F40 */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x800BFFFF)

/* Data flash TC_1736F40 */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE03FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE13FFF)

#else

/* Program flash  */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x801FFFFF)

/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE07FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE17FFF)

#endif

#ifdef LINK_RUN

  /*************************************/
  /*                                   */
  /*  TC 1767 register description     */
  /*                                   */
  /*************************************/

  /* analog to digital converters */
  ADC        = 0xF0101000;
  ADC0       = 0xF0101000;
  ADC1       = 0xF0101400;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* On-Chip Debug Support (Cerberus) */
  CBS        = 0xF0000464;
  /* Core registers */
  CORE       = 0xF7E1FD00;
  /* CPU slave interface registers */
  CPS          = 0xF7E0FF08;
  CPS_CPU_SRC0 = 0xF7E0FFFC;  /* for ERCOSEK: SRN control register to be the scheduling interrupt */
  /* CPU tricore registers */
  CPU        = 0xF7E19004;
  /* core special function registers */
  CSFR       = 0xF7E1FE00;
  /* DMA */
  DMA        = 0xF0003C00;
  /* CPU DMI Registers */
  DMI        = 0xF87FFC08;
  /* EBU Registers */
  EBU        = 0xF8000000;
  /* FADC */
  FADC       = 0xF0100400;
  /* Flash module */
  FLASH      = 0xF8002008;
  FLASH0     = 0xF8002008;
  /* Floating-Point Unit registers */
  FPU        = 0xF7E1A000;
  /* General purpose registers */
  GPR        = 0xF7E1FF00;
  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  /* Local Memory Bus Control Unit */
  LBCU       = 0xF87FFE08;
  /* LFI */
  LFI        = 0xF87FFF08;
  /* Local timer cells array */
#if (MACHINE_SUBTYPE != TC_1736)
  LTCA2      = 0xF0002808;
#endif
  /* Memory checker */
  MCHK       = 0xF010C208;
  /* MLI */
  MLI         = 0xF010C008;
  MLI0        = 0xF010C008;
  /* MMU */
  MMU        = 0xF7E18000;
  /* Memory protection */
  MPR        = 0xF7E1C000;
  /* MicroSecond Bus Controller */
  MSC         = 0xF0000800;
  MSC0        = 0xF0000800;
  /* Overlay Control Unit (OVC) */
  OVC        = 0xF87FFB20;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
#if (MACHINE_SUBTYPE != TC_1736)
  P6         = 0xF0001200;
  P7         = 0xF0001300;
  P8         = 0xF0001400;
#endif
  P9         = 0xF0001500;
  /* peripheral control processor */
#if (MACHINE_SUBTYPE != TC_1736)
  PCP        = 0xF0043F00;
#endif
  /* PMI */
  PMI        = 0xF87FFD08;
  /* PMU */
  PMU        = 0xF8000508;
  /* System bus control unit */
  SBCU       = 0xF0000108;
  /* system control unit */
  SCU             = 0xF0000508;
  SCU_WDT_ERCOSEK = 0xF00005F0 - 0x20; /* for ERCOSEK: WDT-control register adress to lock/unlock registers in Ercosek code*/
                                     /* -0x20, because the ERCOSEK-Lib is compiled for TC1796 and adds
                                        the TC1796-Offset of &SCU.WDT_CON0-&SCU (+0x20) */
  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0100100;
  SSC0       = 0xF0100100;
  SSC1       = 0xF0100200;
  /* system timer */
  STM        = 0xF0000200;
  STM_TIM0   = 0xF0000210; /* for ERCOSEK: System Timer counter  */
  STM_SRC1   = 0xF00002F8; /* for ERCOSEK: SRN control register to be the Alarm interrupt  */
  STM_SRC0   = 0xF00002FC; /* for ERCOSEK: SRN control register to be the Timetable interrupt */

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = CPS_CPU_SRC0;
  SCU_BASE_ADR              = SCU_WDT_ERCOSEK;
  STM_BASE_ADR              = STM;
  ALARM_SRC_ADR             = STM_SRC1;
  TIMETABLE_SRC_ADR         = STM_SRC0;
  SYSTEM_TIME_REGISTER_TC   = STM_TIM0;

#endif

#elif (MACHINE_TYPE == TC_1782)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

/* Program flash */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x8027FFFF)

/* Data flash */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE0FFFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE1FFFF)

#ifdef LINK_RUN

  /*************************************/
  /*                                   */
  /*  TC 1782 register description     */
  /*                                   */
  /*************************************/

  /* analog to digital converters */
  ADC        = 0xF0101000;
  ADC0       = 0xF0101000;
  ADC1       = 0xF0101400;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* On-Chip Debug Support (Cerberus) */
  CBS        = 0xF0000464;
  /* Core registers */
  CORE       = 0xF7E1FD00;
  /* CPU slave interface registers */
  CPS          = 0xF7E0FF08;
  CPS_CPU_SRC0 = 0xF7E0FFFC;  /* for ERCOSEK: SRN control register to be the scheduling interrupt */
  /* CPU tricore registers */
  CPU        = 0xF7E1900C;
  /* core special function registers */
  CSFR       = 0xF7E1FE00;
  /* DMA */
  DMA        = 0xF0003C00;
  /* CPU DMI Registers */
  DMI        = 0xF87FFC08;
  /* EBU Registers */
  EBU        = 0xF8000000;
  /* Flexray Registers*/
  ERAY       = 0xF0010000;
  /* FADC */
  FADC       = 0xF0100400;
  /* Flash module */
  FLASH      = 0xF8002008;
  FLASH0     = 0xF8002008;
  /* Floating-Point Unit registers */
  FPU        = 0xF7E1A000;
  /* General purpose registers */
  GPR        = 0xF7E1FF00;
  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  /* Local Memory Bus Control Unit */
  LBCU       = 0xF87FFE08;
  /* LFI */
  LFI        = 0xF87FFF08;
  /* Local timer cells array */
  LTCA2      = 0xF0002808;
  /* Memory checker */
  MCHK       = 0xF010C208;
  /* MLI */
  MLI         = 0xF010C008;
  MLI0        = 0xF010C008;
  /* MMU */
  MMU        = 0xF7E18000;
  /* Memory protection */
  MPR        = 0xF7E1C000;
  /* MicroSecond Bus Controller */
  MSC         = 0xF0000800;
  MSC0        = 0xF0000800;
  /* Overlay Control Unit (OVC) */
  OVC        = 0xF87FFB20;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  P6         = 0xF0001200;
  P7         = 0xF0001300;
  P8         = 0xF0001400;
  P9         = 0xF0001500;
  P10        = 0xF0001600;
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMI */
  PMI        = 0xF87FFD08;
  /* PMU */
  PMU        = 0xF8000508;
  /* System bus control unit */
  SBCU       = 0xF0000108;
  /* system control unit */
  SCU             = 0xF0000508;
  SCU_WDT_ERCOSEK = 0xF00005F0 - 0x20;  /* for ERCOSEK: WDT-control register adress to lock/unlock registers in Ercosek code */
                                        /* -0x20, because the ERCOSEK-Lib is compiled for TC1796 and adds
                                           the TC1796-Offset of &SCU.WDT_CON0-&SCU (+0x20) */
  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0100100;
  SSC0       = 0xF0100100;
  SSC1       = 0xF0100200;
  SSC2       = 0xF0100300;
  /* system timer */
  STM        = 0xF0000200;
  STM_TIM0   = 0xF0000210; /* for ERCOSEK: System Timer counter  */
  STM_SRC1   = 0xF00002F8; /* for ERCOSEK: SRN control register to be the Alarm interrupt  */
  STM_SRC0   = 0xF00002FC; /* for ERCOSEK: SRN control register to be the Timetable interrupt */

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = CPS_CPU_SRC0;
  SCU_BASE_ADR              = SCU_WDT_ERCOSEK;
  STM_BASE_ADR              = STM;
  ALARM_SRC_ADR             = STM_SRC1;
  TIMETABLE_SRC_ADR         = STM_SRC0;
  SYSTEM_TIME_REGISTER_TC   = STM_TIM0;
#endif



#elif (MACHINE_TYPE == TC_1797)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

/* Program flash  */
#define MEM_ROM_PFLASH0_START       DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH0_END         DEF_CONST(0x801FFFFF)
#define MEM_ROM_PFLASH1_START       DEF_CONST(0x80200000)
#define MEM_ROM_PFLASH1_END         DEF_CONST(0x803FFFFF)
#define MEM_ROM_PFLASH_START        MEM_ROM_PFLASH0_START
#define MEM_ROM_PFLASH_END          MEM_ROM_PFLASH1_END

/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE07FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE17FFF)


#ifdef LINK_RUN

  /*************************************/
  /*                                   */
  /*  TC 1797 register description     */
  /*                                   */
  /*************************************/

  /* analog to digital converters */
  ADC        = 0xF0101000;
  ADC0       = 0xF0101000;
  ADC1       = 0xF0101400;
  ADC2       = 0xF0101800;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* On-Chip Debug Support (Cerberus) */
  CBS        = 0xF0000464;
  /* Core registers */
  CORE       = 0xF7E1FD00;
  /* CPU slave interface registers */
  CPS        = 0xF7E0FF08;
  CPS_CPU_SRC0 = 0xF7E0FFFC;  /* for ERCOSEK: SRN control register to be the scheduling interrupt */
  /* CPU tricore registers */
  CPU        = 0xF7E19004;
  /* core special function registers */
  CSFR       = 0xF7E1FE00;
  /* DMA */
  DMA        = 0xF0003C00;
  /* CPU DMI Registers */
  DMI        = 0xF87FFC08;
  /* EBU Registers */
  EBU        = 0xF8000000;
  /* Flexray Registers*/
  ERAY       = 0xF0010000;
  /* FADC */
  FADC       = 0xF0100400;
  /* Flash module */
  FLASH      = 0xF8002008;
  FLASH0     = 0xF8002008;
  FLASH1     = 0xF8004008;
  /* Floating-Point Unit registers */
  FPU        = 0xF7E1A000;
  /* General purpose registers */
  GPR        = 0xF7E1FF00;
  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  GPTA1      = 0xF0002000;
  /* Local Memory Bus Control Unit */
  LBCU       = 0xF87FFE08;
  /* LFI */
  LFI        = 0xF87FFF08;
  /* Local timer cells array */
  LTCA2      = 0xF0002808;
  /* Memory checker */
  MCHK       = 0xF010C208;
  /* MLI */
  MLI        = 0xF010C008;
  MLI0       = 0xF010C008;
  MLI1       = 0xF010C108;
  /* MMU */
  MMU        = 0xF7E18000;
  /* Memory protection */
  MPR        = 0xF7E1C000;
  /* MicroSecond Bus Controller */
  MSC        = 0xF0000800;
  MSC0       = 0xF0000800;
  MSC1       = 0xF0000900;
  /* Overlay Control Unit (OVC) */
  OVC        = 0xF87FFB20;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  P6         = 0xF0001200;
  P7         = 0xF0001300;
  P8         = 0xF0001400;
  P9         = 0xF0001500;
  P10        = 0xF0001600;
  P11        = 0xF0001700;
  P12        = 0xF0300000;
  P13        = 0xF0300100;
  P14        = 0xF0300200;
  P15        = 0xF0300300;
  P16        = 0xF0300400;
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMI */
  PMI        = 0xF87FFD08;
  /* PMU */
  PMU        = 0xF8000508;
  /* System bus control unit */
  SBCU       = 0xF0000108;
  /* system control unit */
  SCU        = 0xF0000508;
  SCU_WDT_ERCOSEK = 0xF00005F0 - 0x20; /* for ERCOSEK: WDT-control register adress to lock/unlock registers in Ercosek code*/
                                     /* -0x20, because the ERCOSEK-Lib is compiled for TC1796 and adds
                                        the TC1796-Offset of &SCU.WDT_CON0-&SCU (+0x20) */
  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0100100;
  SSC0       = 0xF0100100;
  SSC1       = 0xF0100200;
  /* system timer */
  STM        = 0xF0000200;
  STM_TIM0   = 0xF0000210; /* for ERCOSEK: System Timer counter  */
  STM_SRC1   = 0xF00002F8; /* for ERCOSEK: SRN control register to be the Alarm interrupt  */
  STM_SRC0   = 0xF00002FC; /* for ERCOSEK: SRN control register to be the Timetable interrupt */

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = CPS_CPU_SRC0;
  SCU_BASE_ADR              = SCU_WDT_ERCOSEK;
  STM_BASE_ADR              = STM;
  ALARM_SRC_ADR             = STM_SRC1;
  TIMETABLE_SRC_ADR         = STM_SRC0;
  SYSTEM_TIME_REGISTER_TC   = STM_TIM0;
#endif


#elif (MACHINE_TYPE == TC_1793)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

/* Program flash  */
#define MEM_ROM_PFLASH0_START       DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH0_END         DEF_CONST(0x801FFFFF)
#define MEM_ROM_PFLASH1_START       DEF_CONST(0x80800000)
#define MEM_ROM_PFLASH1_END         DEF_CONST(0x809FFFFF)
#define MEM_ROM_PFLASH_START        MEM_ROM_PFLASH0_START
#define MEM_ROM_PFLASH_END          MEM_ROM_PFLASH1_END

/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0xAF000000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0xAF017FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0xAF080000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0xAF097FFF)


#ifdef LINK_RUN
  /*************************************/
  /*                                   */
  /*  TC 1793 register description     */
  /*                                   */
  /*************************************/
  /* analog to digital converters */
  ADC        = 0xF0101000;
  ADC0       = 0xF0101000;
  ADC1       = 0xF0101400;
  ADC2       = 0xF0101800;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* Bus Monitoring Unit */
  BMU        = 0xF0323000;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* On-Chip Debug Support (Cerberus) */
  CBS        = 0xF0000464;
    
  /* CPU slave interface registers */
  CPS        = 0xF7E0FFBC;
  CPS_CPU_SRC0 = 0xF7E0FFFC;  /* for ERCOSEK: SRN control register to be the scheduling interrupt */
  /* DMA */
  DMA        = 0xF0003C00;
  /* EBU Registers */
  EBU        = 0xF8000000;
  /* Flexray Registers*/
  ERAY       = 0xF0010000;
  /* FADC */
  FADC       = 0xF0100400;
  
  /* FCE */
  FCE        = 0xF0320000;
  
  /* Flash module */
  FLASH      = 0xF8002000;
  FLASH0     = 0xF8002000;
  FLASH1     = 0xF8004000;

  /* general purpose timer array */
  GPTA       = 0xF0001800;
  GPTA0      = 0xF0001800;
  GPTA1      = 0xF0002008;
  
  /* GPT12 Module */
  GPT12      = 0xF0003400;
  GPT120     = 0xF0003400;
  GPT121     = 0xF0003500;
  
  /* Local Memory Unit */
  LMU        = 0xF8700800;
  /* Local timer cells array */
  LTCA2      = 0xF0002808;
  /* Memory checker */
  MCHK       = 0xF010C208;
  /* MLI */
  MLI        = 0xF010C000;
  MLI0       = 0xF010C000;
  MLI1       = 0xF010C100;

  /* MicroSecond Bus Controller */
  MSC        = 0xF0000800;
  MSC0       = 0xF0000800;
  MSC1       = 0xF0000900;
  /* Overlay Control Unit (OVC) */
  OVC        = 0xF87FFB20;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  P6         = 0xF0001200;
  P7         = 0xF0001300;
  P8         = 0xF0001400;
  P9         = 0xF0001500;
  P10        = 0xF0001600;
  P11        = 0xF0001700;
  P12        = 0xF0300000;
  P13        = 0xF0300100;
  P14        = 0xF0300200;
  P15        = 0xF0300300;
  P16        = 0xF0300400;
  P17        = 0xF0300510;
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMU */
  PMU        = 0xF8000508;
  /* System bus control unit */
  SBCU       = 0xF0000108;
  /* system control unit */
  SCU        = 0xF0000508;
  SCU_WDT_ERCOSEK = 0xF00005F0 - 0x20; /* for ERCOSEK: WDT-control register adress to lock/unlock registers in Ercosek code*/
                                       /* -0x20, because the ERCOSEK-Lib is compiled for TC1796 and adds the TC1796-Offset
                                       of &SCU.WDT_CON0-&SCU (+0x20) */
  /* SDMA */
  SDMA       = 0xF0003800;
  
  /* SENT */
  SENT       = 0xF0321000;

  /* SHE */
  SHE        = 0xF0320200;

  /* synchronous serial interfaces (SPI) */
  SSC        = 0xF0310000;
  SSC0       = 0xF0310000;
  SSC1       = 0xF0310100;
  SSC2       = 0xF0310200;
  SSC3       = 0xF0310300;
  /* system timer */
  STM        = 0xF0000200;
  STM_TIM0   = 0xF0000210; /* for ERCOSEK: System Timer counter  */
  STM_SRC1   = 0xF00002F8; /* for ERCOSEK: SRN control register to be the Alarm interrupt  */
  STM_SRC0   = 0xF00002FC; /* for ERCOSEK: SRN control register to be the Timetable interrupt */
  /* XBAR */
  XBAR       = 0xF8700004;

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = CPS_CPU_SRC0;
  SCU_BASE_ADR              = SCU_WDT_ERCOSEK;
  STM_BASE_ADR              = STM;
  ALARM_SRC_ADR             = STM_SRC1;
  TIMETABLE_SRC_ADR         = STM_SRC0;
  SYSTEM_TIME_REGISTER_TC   = STM_TIM0;
#endif

#elif (MACHINE_TYPE == TC_1724)

/* ****************** */
/* * Internal Flash * */
/* ****************** */

/* Program flash  */
#define MEM_ROM_PFLASH_START        DEF_CONST(0x80000000)
#define MEM_ROM_PFLASH_END          DEF_CONST(0x8017FFFF)

/* Data flash  */
#define MEM_ROM_DFLASH1_START       DEF_CONST(0x8FE00000)
#define MEM_ROM_DFLASH1_END         DEF_CONST(0x8FE07FFF)
#define MEM_ROM_DFLASH2_START       DEF_CONST(0x8FE10000)
#define MEM_ROM_DFLASH2_END         DEF_CONST(0x8FE17FFF)

#ifdef LINK_RUN
/* FIXME */
  /*************************************/
  /*                                   */
  /*  TC 1724 register description     */
  /*                                   */
  /*************************************/

  /* analog to digital converters */
  ADC        = 0xF0101000;
  ADC0       = 0xF0101000;
  ADC1       = 0xF0101400;
  /* async. serial interfaces (UART) */
  ASC        = 0xF0000A00;
  ASC0       = 0xF0000A00;
  ASC1       = 0xF0000B00;
  /* MultiCAN controller */
  CAN        = 0xF0004000;
  /* On-Chip Debug Support (Cerberus) */
  CBS        = 0xF0000464;
  /* CPU slave interface registers */
  CPS        = 0xF7E0FF08;
  CPS_CPU_SRC0 = 0xF7E0FFFC;  /* for ERCOSEK: SRN control register to be the scheduling interrupt */
  /* DMA */
  DMA        = 0xF0003C00;
  /* CPU DMI Registers */
  DMI        = 0xF87FFC08;
  /* FADC */
  FADC       = 0xF0100400;
  /* Flash module */
  FLASH      = 0xF8001000;
  FLASH0     = 0xF8001000;
  /* general purpose timer array */
  GPTA0      = 0xF0001800;
  
  /* Local Memory Bus Control Unit */
  LBCU       = 0xF87FFE08;
  /* LFI */
  LFI        = 0xF87FFF08;
  /* Memory checker */
  MCHK       = 0xF010C208;
  
  /* MicroLink Interface */
  MLI0       = 0xF010C000;

  /* MicroSecond Bus Controller */
  MSC        = 0xF0000800;
  MSC0       = 0xF0000800;
  
  /* Overlay Control Unit (OVC) */
  OVC        = 0xF87FFB20;
  /* GPIO ports */
  P0         = 0xF0000C00;
  P1         = 0xF0000D00;
  P2         = 0xF0000E00;
  P3         = 0xF0000F00;
  P4         = 0xF0001000;
  P5         = 0xF0001100;
  P8         = 0xF0001400;
  P9         = 0xF0001500;
  P11        = 0xF0001700;
  P12        = 0xF0300000;
  
  /* peripheral control processor */
  PCP        = 0xF0043F00;
  /* PMI */
  PMI        = 0xF87FFD08;
  /* PMU */
  PMU        = 0xF8000508;
  /* System bus control unit */
  SBCU       = 0xF0000108;
  /* system control unit */
  SCU        = 0xF0000508;
  SCU_WDT_ERCOSEK = 0xF00005F0 - 0x20; /* for ERCOSEK: WDT-control register adress to lock/unlock registers in Ercosek code*/
                                     /* -0x20, because the ERCOSEK-Lib is compiled for TC1796 and adds
                                        the TC1796-Offset of &SCU.WDT_CON0-&SCU (+0x20) */
  /* synchronous serial interfaces (SPI) */
  SSC0       = 0xF0100100;
  SSC1       = 0xF0100200;
  SSC2       = 0xF0100300;
  SSC3       = 0xF0100000;
  
  /* system timer */
  STM        = 0xF0000200;
  STM_TIM0   = 0xF0000210; /* for ERCOSEK: System Timer counter  */
  STM_SRC1   = 0xF00002F8; /* for ERCOSEK: SRN control register to be the Alarm interrupt  */
  STM_SRC0   = 0xF00002FC; /* for ERCOSEK: SRN control register to be the Timetable interrupt */

  /* Symbols used by ERCOSEK */
  SC_INT_ADR                = CPS_CPU_SRC0;
  SCU_BASE_ADR              = SCU_WDT_ERCOSEK;
  STM_BASE_ADR              = STM;
  ALARM_SRC_ADR             = STM_SRC1;
  TIMETABLE_SRC_ADR         = STM_SRC0;
  SYSTEM_TIME_REGISTER_TC   = STM_TIM0;

#endif

#else
#error "UNSUPPORTED MACHINE_TYPE!"

/* MACHINE_TYPE */
#endif

/* system ticks per us */
#define MACHINE_TICKS_PER_US           DEF_CONST(90)


/* system clock [MHz] */
#define MACHINE_SYSCLOCK_MHZ           DEF_CONST(90)


/* CPU clock [MHz] */
#define MACHINE_CPUCLOCK_MHZ           DEF_CONST(270)


/* The following errata workarounds are active */


/* _MACHINE_H */
#endif
