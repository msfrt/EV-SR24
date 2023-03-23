/* EasyCASE V6.5 30.08.2010 13:40:47 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=yes
Colors=16777215,0,12582912,16744448,0,0,0,255,16711680,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-23,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=1434 */
/* EasyCASE ( 471
   <Template zur Softwareerstellung MEx17> */
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
 * $Filename__:mocmem_conf.h$
 *
 * $Author____:RWF2SI$
 *
 * $Function__:preparation for FCI, changes for avoiding warning, error messages
 *              from compiler, EOS and QAC
 *             centralized configuration parts$
 *
 ***************************************************************************************************
*/
/* EasyCASE ( 885
   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:RWF2SI$
 * $Date______:10.01.2011$
 * $Class_____:SWHDR$
 * $Name______:mocmem_conf$
 * $Variant___:3.0.0$
 * $Revision__:0$
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
 * 3.0.0; 0     10.01.2011 RWF2SI
 *   Rework for findings in Software-Review with ID 31408
 * 
 * 1.0.0; 0     01.09.2010 RWF2SI
 *   preparation for FCI, changes for avoiding warning, error messages from 
 *   compiler, EOS and QAC
 *   
 *   centralized configuration parts
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
/* EasyCASE ( 886
   Include */
/* ******************************************************************************************************* */
/* *******************************************     Includes     ****************************************** */
/* ******************************************************************************************************* */

#ifndef _MOCMEM_CONF_H
#define _MOCMEM_CONF_H

#include    "common.h"
#include    "mo_glbl.h"           /* Import global declarations for Monitoring */
#include    "mocmem_conf.h"
/* EasyCASE ) */
/* EasyCASE ( 1432
   Strukturdefinitionen */
/* EasyCASE < */
/* base-structure for complete RAM-Check                  */
typedef struct
   {
   uint32*  adStartSection;
   uint8*    adEndSection;
   } MoCRAM_RamStructTabBlock_t;
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
/* If it is possible to define the structure in MSR, the */
/* typedef and instances will be removed.                */
/* base-structure for complete RAM-Check in Main 0       */
typedef struct
   {
   const MoCRAM_RamStructTabBlock_t Block[MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS] ;
   } MoCRAM_RamTabDefChkMain_t;
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
/* If it is possible to define the structure in MSR, the */
/* typedef and instances will be removed.                */
/* base-structure for complete RAM-Check in Main 1       */
typedef struct
   {
   const MoCRAM_RamStructTabBlock_t Block[MOCMEM_CONF_NUM_RAMBLOCK_MAIN1] ;
   } MoCRAM_RamTabDefChkInit_t;
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
/* If it is possible to define the structure in MSR, the */
/* typedef and instances will be removed.                */
/* base-structure for complete RAM-Check in Main 2       */
typedef struct
   {
   const MoCRAM_RamStructTabBlock_t Block[MOCMEM_CONF_NUM_RAMBLOCK_MAIN2] ;
   } MoCRAM_RamTabDefChkProt_t;
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
/* If it is possible to define the structure in MSR, the */
/* typedef and instances will be removed.                */
/* base-structure for complete RAM-Check in postdrive    */
typedef struct
   {
   const MoCRAM_RamStructTabBlock_t Block[MOCMEM_CONF_NUM_RAMBLOCK_AROER] ;
   } MoCRAM_RamTabDefChkShDo_t;
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 1431
   Access Macro */
/* Macros for direkt accessing address content */
#define GETADR_MORAM_CO_INITRAM_START_LABEL  (MoCRAM_StructTabSys_I.Block[0].adStartSection)
#define GETADR_MORAM_CO_INITRAM_END_LABEL    (MoCRAM_StructTabSys_I.Block[0].adEndSection)
#define GETADR_MORAM_CO_ASW_CSA_START_LABEL  (MoCRAM_StructTabSys_I.Block[0].adStartSection)
#define GETADR_MORAM_CO_ASW_CSA_END_LABEL     (MoCRAM_StructTabSys_I.Block[0].adEndSection)
#define GETADR_MORAM_CO_RSTPTR_START_LABEL    (MoCRAM_StructTabSys_I.Block[1].adStartSection)
#define GETADR_MORAM_CO_RSTPTR_END_LABEL       (MoCRAM_StructTabSys_I.Block[1].adEndSection)
#define GETADR_MORAM_CO_STACK_START_LABEL      (MoCRAM_StructTabSys_I.Block[2].adStartSection)
#define GETADR_MORAM_CO_STACK_END_LABEL         (MoCRAM_StructTabSys_I.Block[2].adEndSection)
#define GETADR_MORAM_CO_XRAM_START_LABEL       (MoCRAM_StructTabSys_I.Block[3].adStartSection)
#define GETADR_MORAM_CO_XRAM_END_LABEL          (MoCRAM_StructTabSys_I.Block[3].adEndSection)

#endif /* _MOCMEM_CONF_H */
/* EasyCASE ) */
/* EasyCASE ) */
