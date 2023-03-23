/* EasyCASE V6.5 04/11/2016 11:48:53 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=403 */
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
 * $Filename__:mocfc_pub.h$ 
 * 
 * $Author____:GHS2SI$ 
 * 
 * $Function__:DGS: Creation based on the DGS Monitoring Guidelines$ 
 * 
 **************************************************************************
*/
/* EasyCASE ( 44
   Module Information and History */
/**************************************************************************
 * $Domain____:SDOM$ 
 * $User______:SVN1COB$ 
 * $Date______:25.04.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:mocfc_pub$ 
 * $Variant___:42.0.0$ 
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
 * 42.0.0; 0     25.04.2016 SVN1COB
 *   ECU-MST test goal for DGS platform version
 * 
 * 4.0.0; 0     19.10.2011 NID3COB
 *   Changes for DGS VW-EV
 * 
 * 2.1.0; 0     18.02.2011 RWF2SI
 *   Rework interface export to other modules
 * 
 * 2.0.0; 0     09.02.2011 RWF2SI
 *   Monitoring: Configuration
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* EasyCASE ) */
#ifndef _MOCFC_PUB_H
#define _MOCFC_PUB_H
/* EasyCASE ( 110
   Services */
/* EasyCASE ( 337
   Includes */
/* Header for MoCADC_Co                                   */
#include "mo_glbl.h"

/* Header for memory check  -  Temporary Solution !!!!!!  */
#include "sbib.h"
#include "mocrom_co.h"           /* structure definitions */
#include "mocmem_co.h"           /* structure definitions */
/* EasyCASE ) */
/* EasyCASE ( 336
   MoCADC_Co */
/* #################################### */
/*                MoCADC_Co             */
/* #################################### */
/* EasyCASE - */
/* Kompatibilitaeszuweisungen fuer Vorgaengerversionen (kann spaeter entfallen)                     */

extern void MoCADC_Co_Proc_Ini(void);
extern void MoCADC_Co_Proc_ReIni(void);
extern void MoCADC_Co_Proc(void);
extern void MoCADC_Co_Diag_Proc(void);
/* EasyCASE - */
/* Backward Compatibility */
#define MOCADC_NTP_REL_MSK MOCADC_NTPREL_MSK
#define MOCADC_NTP_ACTV_MSK MOCADC_NTPACTV_MSK
/* EasyCASE ) */
/* EasyCASE ( 338
   MoCCPU_Co */
/* #################################### */
/*                MoCCPU_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCCPU_Co_AppendResp(uint16 PartResp, uint8 FITId );
extern void MoCCPU_Co_SeqStrt(void);
extern void MoCCPU_Co_SeqEnd(void);
extern void MoCCPU_Co_Proc(void);
extern void MoCCPU_Co_OTCG(void);
/* EasyCASE - */
/* Backward Compatibility */
#define MoCCPU_AppendResp  MoCCPU_Co_AppendResp
/* EasyCASE ) */
/* EasyCASE ( 339
   MoCGPTA_Co */
/* #################################### */
/*                MoCGPTA_Co            */
/* #################################### */
/* EasyCASE - */
extern void MoCGPTA_Co_Proc_Ini(void);
extern void MoCGPTA_Co_Proc(void);
/* EasyCASE ) */
/* EasyCASE ( 340
   MoCMem_Co */
/* #################################### */
/*                MoCMem_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCMem_Co_ChkRam_Proc_Ini(void); 
extern void MoCMem_Co_ChkRom_Proc_Ini(void); 
extern void MoCMem_Co_ErrHdl_Proc_Ini(void);

extern void MoCMem_Co_ChkRam_Proc(void); 
extern void MoCMem_Co_ChkRom_Proc(void); 
extern void MoCMem_Co_ErrHdl_Proc(void);

extern uint8*  MoCMem_Co_ChkSingleU8( uint8 *memAdr); 
extern uint16* MoCMem_Co_ChkSingleU16( uint16 *memAdr); 
extern uint32* MoCMem_Co_ChkSingleU32( uint32 *memAdr); 


extern uint32 MoCMem_Co_ChkROMAdd32( const uint32 *startAdr, const uint8  *endAdr);

extern MoCROM_ChkSumBlockPtr_t MoCMem_Co_SearchCSTab( const uint32*  adStartChkActPtr, 
                                               const uint8*   adEndChkActPtr);

extern uint8 MoCMem_Co_ChkCSArea( MoCROM_ChkSumBlockPtr_t ad_CSStructPtr, /* Pointer auf Checksummenblock */
                        const uint32*  adStartChkActPtr,              /* Startadresse fuer Checksummenbereich   */
                                                                      /* ab dem geprueft werden soll.           */
                        const uint8*  adEndChkActPtr,                 /* Endeadresse Checksummenblock           */
                        uint32* numChkSumPtr,                         /* Pointer auf Startwert fuer             */
                                                                      /* Checksummenberechnung.                 */
                                                                      /* Eine bereits vorher berechnete         */
                                                                      /* Teilchecksumme kann hier als neuen     */
                                                                      /* Startwert uebergeben werden.           */
                        uint32* numChkSumPtrCpl,                      /* Pointer auf Complement zu              */
                                                                      /* numChkSumPtr                           */
                        bool    b_tst,                                /* Flag das anzeigt, das die Checksumme   */
                                                                      /* verfaelscht werden soll                */
                                                                      /* => Testanforderung                     */
                        bool    stLastBlock,                          /* Letzter Block des Checksummenbereich   */
                                                                      /* wird berechnet                         */
                        bool    stAccessDME );                        /* Bei der Wiederholungspruefung immer    */
                                                                      /* FALSE !!!!                             */
/* EasyCASE - */
/* #################################### */
/*    Watchdog Service in  MoCMem_Co    */
/* #################################### */
extern void MoCMem_Co_SetWatchdogTimeoutRaw(MoCMem_wdt_timeout_t wdtTimeout);
extern MoCMem_wdt_timeout_t MoCMem_Co_GetWatchdogTimeoutRaw(void);
/* EasyCASE - */
/* Backward Compatibility with DS Classic systems */
/* This content can be removed if all L2 / L3 use */
/* the new service name.                          */
#define MoCMem_ChkSingleU8  MoCMem_Co_ChkSingleU8
#define MoCMem_ChkSingleU16 MoCMem_Co_ChkSingleU16
#define MoCMem_ChkSingleU32 MoCMem_Co_ChkSingleU32

/* Attention: In some systems MoCMem_ChkROM is implemented as MoCMem_Co_ChkROMAdd16 */
#define MoCMem_ChkROM MoCMem_Co_ChkROMAdd32
/* EasyCASE ) */
/* EasyCASE ( 345
   MoCPCP_Co */
/* #################################### */
/*                MoCPCP_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCPCP_Co_Proc_Ini(void);
extern void MoCPCP_Co_Proc(void);
/* EasyCASE ) */
/* EasyCASE ( 332
   MoCPFC_Co */
/* #################################### */
/*                MoCPFC_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCPFC_Co_Proc_Ini(void);
extern void MoCPFC_Co_Proc(void);
extern void MoCPFC_Co_Set(uint32 checkword);
extern void MoCPFC_Co_Check(void);
/* EasyCASE - */
/* Backward Compatibility */
#define MoCPFC_Set   MoCPFC_Co_Set
#define MoCPFC_Check MoCPFC_Co_Check
/* EasyCASE ) */
#if(MO_EXTDTSK_SC != FALSE)
/* Extended monitoring task feature is enabled */
/* EasyCASE ( 389
   MoCPFCExtdTsk_Co */
/* #################################### */
/*            MoCPFCExtdTsk_Co          */
/* #################################### */
/* EasyCASE - */
extern void MoCPFCExtdTsk_Co_Proc_Ini(void);
extern void MoCPFCExtdTsk_Co_Proc(void);
extern void MoCPFCExtdTsk_Co_Set(uint32 checkword);
extern void MoCPFCExtdTsk_Co_Check(void);
/* EasyCASE ) */
#endif
/* EasyCASE ( 346
   MoCRAM_Co */
/* #################################### */
/*                MoCRAM_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCRAM_Co_MainRamChk_Proc(void);
extern void MoCRAM_Co_MainProtRam_Proc(void);
extern void MoCRAM_Co_RepEx_Proc(void);
extern void MoCRAM_Co_PostRamChk_Proc(void);
extern void MoCRAM_Co_ClrRAM_Proc(void);
/* EasyCASE - */
/* old compatibility Makro  for VMx17 systems in Mx17 domain           */
#define MOCRAM_SHUTDOWN  MoCRAM_Co_PostRamChk_Proc()
#define MOCRAM_CLRRAMTAB MoCRAM_Co_ClrRAM_Proc()
/* EasyCASE - */
/* Makro compatibility for VMx17 / EDC17 / Mx17 systems in SDOM domain */
/* ==>> Prefered solution for the future                               */
#define MOCRAM_CO_SHUTDOWN  MoCRAM_Co_PostRamChk_Proc()
#define MOCRAM_CO_CLRRAMTAB MoCRAM_Co_ClrRAM_Proc()
/* EasyCASE ) */
/* EasyCASE ( 347
   MoCRAM_Inl */
/* ################################################################### */
/* Provide service for CSA initialization                              */
/* ################################################################### */
/* ==>> include "mocram_inl.h" in main.c                               */
/* EasyCASE ) */
/* EasyCASE ( 348
   MoCROM_Co */
/* #################################### */
/*                MoCROM_Co             */
/* #################################### */
/* EasyCASE - */
extern void MoCROM_Co_RepEx_Proc(void);
extern void MoCROM_Co_PostRomChk_Proc(void);
/* EasyCASE - */
/* old Makro compatibility for VMx17 / EDC17 / Mx17 systems            */
#define MOCROM_SHUTDOWN MoCROM_Co_PostRomChk_Proc()
/* EasyCASE - */
/* Makro compatibility for VMx17 / EDC17 / Mx17 systems in SDOM domain */
/* ==>> Prefered solution for the future                               */
#define MOCROM_CO_SHUTDOWN MoCROM_Co_PostRomChk_Proc()
/* EasyCASE ) */
/* EasyCASE ) */
#endif /* _MOCFC_PUB_H */
/* EasyCASE ) */
