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
 * $Filename__:sbtarget.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:ANU5KOR$
 * $Date______:30.09.2011$
 * $Class_____:SWHDR$
 * $Name______:sbtarget$
 * $Variant___:1.22.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.22.0; 0     30.09.2011 ANU5KOR
 *   RCMS00834769:
 *   External Flash Support for 1793.
 *   B_SB.22.0.0
 * 
 * 1.16.0; 1     28.05.2010 MZT2FE
 *   Update for TC1793.
 * 
 * 1.16.0; 0     15.03.2010 MZT2FE
 *   1.16.0
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   B_SB.14.0.0
 * 
 * 1.13.1; 0     06.11.2009 AWL2SI
 *   Right version of SB 13.0.0 migrated from ClearCase
 * 
 * 1.13.0; 0     03.08.2009 AWL2SI
 *   B_SB.13.0..0
 * 
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _SBTARGET_H
#define _SBTARGET_H


/*!
 *********************************************************************
 * \moduldescription
 *          Interface header file for SB target.
 *
 * \scope INTERN
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/* ******************** */
/* * Global interface * */
/* ******************** */

/* Number of chipselects entries */
#define SBTARGET_NUM_CSENTRIES    7ul

/* Defintions of CPU types */
typedef enum
{
    NO_PROZ,
    TC1775,
    METIS,
    LEDA,
    LEDA_LIGHT,
    TC1762,
    TC1792,
    TC1764,
    TC1767,
    TC1797,
    TC1736,
    TC1387,
    TC1782,
    TC1736F40,
	TC1793,
	TC1724
} SBTarget_CPUType_t;

/* Defintions of application interface types */
typedef enum
{
    NO_APPL_INTF,
    ED_DEVICE,
    SERAM,
    ETK
} SBTarget_ApplType_t;

/* Defintions of flash types */
typedef enum
{
    NO_DEVICE,
    EXT_RAM,
    METIS_PFLASH,
    METIS_DFLASH,
    LEDA_LIGHT_PFLASH,
    LEDA_LIGHT_DFLASH,
    LEDA_PFLASH,
    LEDA_DFLASH,
    STM58BW016,
    AMD29BDD160,
    AMD29BL162X2,
    AMD29BDD320,
    TC_1762_PFLASH,
    TC_1762_DFLASH,
    TC_1792_PFLASH,
    TC_1792_DFLASH,
    TC_1764_PFLASH,
    TC_1764_DFLASH,
    TC_1767_PFLASH,
    TC_1767_DFLASH,
    TC_1797_PFLASH,
    TC_1797_DFLASH,
    STM58BW032,
    TC_1736_PFLASH,
    TC_1736_DFLASH,
    TC_1387_PFLASH,
    TC_1387_DFLASH,
    TC_1782_PFLASH,
    TC_1782_DFLASH,
    TC_1736F40_PFLASH,
    TC_1736F40_DFLASH,
    TC_1367_PFLASH,
    TC_1367_DFLASH,
    TC_1337_PFLASH,
    TC_1337_DFLASH,
    TC_1793_PFLASH,
    TC_1793_DFLASH,
	TC_1724_PFLASH,
    TC_1724_DFLASH,
	S29CL032J
} SBTarget_MemoryType_t;

typedef struct
{
    SBTarget_MemoryType_t   xDeviceType_e;
    uint32                  adStartAddress_u32;
    uint32                  adEndAddress_u32;
}SBTarget_MemoryProperties_t;

/* Structure for detection of target init */
typedef struct
{
    uint32  fSysFreq_u32;                      /* System frequency in kHz            */
    SBTarget_CPUType_t xMasterCPUTyp_e;        /* Master CPU typ                     */
    uint8  xMasterCPURev_u8;                   /* Master CPU revision                */
    SBTarget_CPUType_t xSlaveCPUTyp_e;         /* Slave CPU typ                      */
    uint8  xSlaveCPURev_u8;                    /* Slave CPU revision                 */
    uint32 xSlaveCPUBaseAddr_u32;              /* Slave CPU MLI Window               */
    SBTarget_ApplType_t xApplTyp_e;            /* Typ of application interface       */
    SBTarget_MemoryProperties_t idxFlash_s[SBTARGET_NUM_CSENTRIES]; /* Properties of Flash-devices        */
} SBTarget_Info_t;

/* Structure for temporary storage of CS-settings */
typedef struct
{
    uint32 BusAp_u32;                           /* temp. storage for BUSAP-setting   */
    uint32 BusCon_u32;                          /* temp. storage for BUSCON-setting  */
} CsBuffer_t;

#endif
