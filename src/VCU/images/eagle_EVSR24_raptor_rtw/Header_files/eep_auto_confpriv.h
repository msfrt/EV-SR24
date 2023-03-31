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
 * $Filename__:eephal_confpriv.ht$
 * $Author____:LENZSI$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:18.05.2012$
 * $Class_____:CONFTPLHDR$
 * $Name______:eephal_confpriv$
 * $Variant___:1.24.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.24.0; 0     18.05.2012 RUO1KOR
 *   Introduction of extended masterlayout concept
 * 
 * 1.17.0; 0     25.06.2010 MZT2FE
 *   .
 * 
 * 1.14.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: eephal_confpriv.ht
 *      Version: \main\9
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _EEP_AUTO_CONFPRIV_H
#define _EEP_AUTO_CONFPRIV_H

#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                 Automatically generated configuration file of EEP module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "eeebd_prot.h"
#include "fee.h"
#include "fee_priv.h"

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/** Definition of first init value list */
typedef struct
{
    Eep_MB_Mrly_Syc_t  MB_Mrly_Syc_Init; /* Offset: 000000 Size: 0x0078 */
    Eep_MB_Mo_t  MB_Mo_Init; /* Offset: 0x0078 Size: 0x0078 */
    Eep_MB_EpmCaS_t  MB_EpmCaS_Init; /* Offset: 0x00f0 Size: 0x0078 */

} Eep_FirstInitList_t;


/** Definition of replace value list */
typedef struct
{
    Eep_EEPData1_t  EEPData1_Replace; /* Offset: 000000 Size: 0x0070 */
    Eep_MB_Mrly_Syc_t  MB_Mrly_Syc_Replace; /* Offset: 0x0070 Size: 0x0078 */
    Eep_MB_Mo_t  MB_Mo_Replace; /* Offset: 0x00e8 Size: 0x0078 */

} Eep_ReplaceList_t;

/* 
 ***************************************************************************************************
 * External declarations
 ***************************************************************************************************
 */
extern const Eep_FirstInitList_t  Eep_FirstInitList_cs;
extern const Eep_ReplaceList_t    Eep_ReplaceList_cs;
#ifdef EEP_USE_EXT_MASTER_LAYOUT
extern const Eep_EXTMB_TOC_t Eep_ExtendedMasterLayoutList_cs[];
extern const Eep_EXT_SB_t Eep_ExtendedSpecialBlockList_cs;
#endif

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Defines for ENVRAM */
#define EEP_ENVRAM
#define EEP_ENVRAM_BLKIDX     621
#define EEP_ENVRAM_MAXSIZE    6144


/* Other defines */
#define EEP_NUM_BLOCKS           622
#define EEP_NUM_FIRSTINIT_BLOCKS 617
#define EEP_MAX_BLOCK_LENGTH     120
#define EEP_SIZE_ALL_BLOCKS_ABS  74512
#define EEP_NUM_PDL              1


/* _LIBRARYABILITY_H */
#endif

/* _EEP_AUTO_CONFPRIV_H */
#endif
