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
 * $Filename__:fee_cfg.ht$ 
 * 
 * $Author____:MZT2FE$ 
 * 
 * $Function__:Template.$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HQ82FE$ 
 * $Date______:28.01.2011$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:fee_cfg$ 
 * $Variant___:1.3.0$ 
 * $Revision__:1$ 
 * $Type______:HT$ 
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
 * 1.3.0; 1     28.01.2011 HQ82FE
 *   .
 * 
 * 1.3.0; 0     20.01.2011 HQ82FE
 *   .
 * 
 * 1.2.1; 0     14.12.2010 HQ82FE
 *   Make aborts if Fee is not used
 * 
 * 1.1.0; 0     11.08.2010 HQ82FE
 *   Update changes for TC1793
 * 
 * 1.0.0; 0     29.06.2010 MZT2FE
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef  FEE_CFG_H_
#define  FEE_CFG_H_

#include "memif_types.h"

/**************************************************************************************************/
/*                                                                                                */
/*  Description    : Vendor and Software version information                                      */
/*                                                                                                */
/**************************************************************************************************/
#define FEE_VENDOR_ID               6
#define FEE_MODULE_ID               21
#define FEE_AR_MAJOR_VERSION        3
#define FEE_AR_MINOR_VERSION        1
#define FEE_AR_PATCH_VERSION        0
#define FEE_SW_MAJOR_VERSION        1
#define FEE_SW_MINOR_VERSION        3
#define FEE_SW_PATCH_VERSION        0
#define FEE_VERSION_INFO_API        STD_ON
#define FEE_INSTANCE_ID             0x00u
#define FEE_NUM_PAGES               ((FEE_BANK0_END-FEE_BANK0_START+1)/FEE_PAGE_LEN)

/* generate DFLASH configuration */

#define FEE_BANK0_START         0xAF000000
#define FEE_BANK0_END           0xaf017fff
#define FEE_BANK1_START         0xAF080000
#define FEE_BANK1_END           0xaf097fff
#define FEE_ERASE_CYCLES        30000            /* number of erase cycles per sector */

#define FEE_FLASHERASEPATTERN   0           /* erase pattern of FLASH, to detect an empty page */
#define FEE_FLASHINVPATTERN     255             /* invalidate pattern */


#define FEE_ACTIVE    /* FEE Code is active, maybe with an Adapter to MEDC17 */
#define FEE_USE_ADAPTER                     1 /* adapter for MEDC17 blocks necessary */ 

/* access defines for LifeTimeMonitoring and DebugMonitoring */
#define FEE_NVM_ID_ENVRAM                   623
#define FEE_BLK_ID_DEBUG_MONITORING         624
#define FEE_BLK_ID_DEBUG_MONITORING_LEN     122

#define FEE_LAYOUT_CRC            0xEAE3D9F4U /* crc32 value over all blocknames. If this value changes, blockversioncounter, drivingcycle counter and relative sector change counter will be reseted */
#define FEE_NUM_MAX_FEE_PAGES     51     /* Max number of pages for the greatest FEE block */
#define FEE_NUM_BLOCKS            628 
#define FEE_NUM_TOTAL_USED_PAGES  678 /* Total number of used pages in project, considering max. configured ENVRAM */
#define FEE_NUM_DIFF_BLOCKS       624 
#define FEE_MAX_PAGES_IN_1_BLOCK  7   /* number of pages of the biggest block, but as required entries in a uint8 array... */
#define FEE_MX17_BLK_OFFSET       0x1
#define FEE_MAX_SEC_LEVEL         2 /* max. sec-level in FEE module (2 for official AutoSar */
#define FEE_DEBUG_MONITORING
#define FEE_LIFETIME_MONITORING
#define FEE_BD_ADD_SW_UPDATE_INFO
#define USE_FEE_SRV_CRC
#define FEE_USE_GLOBAL_PLC
/* #define FEE_USE_INT_SECTOR_CHANGE */
#define FEE_USED_IN_MX17
/* #define FEE_USED_AS_CBEEP */
#define FEE_PD_RETRY              3     /* Maximum retry for PD write */



#ifdef FEE_USED_AS_CBEEP
    #define FEE_USE_READBLOCK_FROM_ADDRESS
#endif

#ifdef FEE_LIFETIME_MONITORING
    #ifndef FEE_USE_READBLOCK_FROM_ADDRESS
        #define FEE_USE_READBLOCK_FROM_ADDRESS
    #endif
#endif

#endif  /* FEE_CFG_H_ */
