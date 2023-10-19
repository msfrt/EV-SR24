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
 * $Filename__:dme_confpriv.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:AWL2SI$
 * $Date______:23.11.2009$
 * $Class_____:CONFTPLHDR$
 * $Name______:dme_confpriv$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   Initial import from Clearcase 
 *      File name: dme_confpriv.ht
 *      Version: \main\22
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _DME_AUTO_CONFPRIV_H
#define _DME_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/* import tprot interfaces, if TPROT component available */
#include "tprot.h"


/**
 ***************************************************************************************************
 * \moduledescription
 *              dme_auto_confpriv.h: calibration software - public configuration header file
 *
 * \scope           CONF
 ***************************************************************************************************
 */

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

#define DME_PTA_INIT      /* minimal PTA initialization              */
#define DME_PTA_READ      /* PTA read (requ. PTA Init.)              */
#define DME_PTA_WRITE     /* PTA write (requ. PTA Read)              */

#define DME_OVL           /* OVL calibration                         */
#define DME_DISABLE_BY_TPROT


/* conditions for seram emulation of NOPTA/NOSERAP data */
#if defined(DME_SERAM) && (MEMLAY_DS0_LINK_OFFSET != 0)
#define DME_SERAM_NOPTA
#endif

#if defined(DME_SERAM) && defined(MEMLAY_OCRAM_OVERLAY)
#error "DME_SERAM=YES is not supported if external overlay is enabled by MEMLAY_OCRAM_ETKT_NOSERAP=OVERLAY"
#endif

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

typedef struct
{
    #ifdef DME_OVL
    Dme_Ovl_t Ovl_s;
    #endif

    #ifdef DME_PTA_INIT
    Dme_Pta_t Pta_s;
    #endif

    /* Variables for Copy: additionally initialized on DME-Reset */
    uint32* CopyDestStart_pu32; /* Copy Destination: NULL = nothing allocated */
    uint32  numCopyDone_u32;    /* number of Bytes already copied */
    uint32  numCopy_u32;        /* number of Bytes for copy */

    /* Free RAM available for dynamic calibration using Overlay and PTA method */
    #if defined(DME_OVL) || defined(DME_PTA_WRITE)
    Dme_CalibrationRam_t RamFree_as[DME_NUM_CAL_RAM_FREE];
    #endif

    /* Compatibility Identifier of Dataset stored for detection of Flash change */
    uint32  DatasetCompRef_u32;

    #ifdef DME_DATA_RETENTION_RAM
    /* checksum entries for data retention */
    uint32  DataRetentionChecksum_u32;
    uint32  BlockRetentionChecksum_u32;
    #endif

    /* current active page in ECU */
    uint8   ctCalPageEcu_u8;

    /* Init: user for background task */
    uint8   ctBackgroundUser_u8;

    /* enable calibration methods */
    uint8   stEnable_u8;
    /* DME reset state */
    uint8   stReset_u8;

    #ifdef DME_CYCLIC_CALIBRATION
    uint8   stCyclicCal_u8;     /* cyclic calibration active flag, cleared only by Dme_ResetDo() */
    uint8   ctCyclicCalUser_u8; /* is only valid, when stCyclicCal_u8 is 0 */
    #endif
}Dme_t;

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */
MEMLAY_USE_PROTRAM(extern Dme_t*, Dme_ps); /* initialized on PowerOn-Reset and DME-Reset */

/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */
__PRAGMA_USE__CODE__dme__NormalSpeed__START
/* dme_calmem.c */
extern Dme_t* Dme_CalMemSelect(uint32 stEnable_u32);

/* dme_ovl.c */
extern void    Dme_SetCalPageOvl(const Dme_t* const Ram_cpcs, uint32 ctCalPage_u32);
extern void    Dme_SetOvlRegs(const Dme_t* const Ram_cpcs);
extern void    Dme_OvlCalDisable(const Dme_t* const Ram_cpcs);
__PRAGMA_USE__CODE__dme__NormalSpeed__END

/* _LIBRARYABILITY_H */
#endif
/* _DME_AUTO_CONFPRIV_H */
#endif
