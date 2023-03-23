/* EasyCASE V6.5 27.08.2010 14:31:41 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,12632256,0,0,0,16711680,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=System,,100,1,-13,0,700,0,0,0,0,0,0,1,2,1,34,96,96
PrinterFont=Courier,,100,65530,-83,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=6 */
/* EasyCASE ( 1 */
/* Header fuer den kompletten RAM-Check */
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
 * $Filename__:mocmem_co.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 ***************************************************************************************************
*/
/*   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:RWF2SI$
 * $Date______:01.09.2010$
 * $Class_____:SWHDR$
 * $Name______:mocmem_co$
 * $Variant___:5.0.0$
 * $Revision__:4$
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
 * 5.0.0; 4     01.09.2010 RWF2SI
 *   preparation for FCI, changes for avoiding warning, error messages from 
 *   compiler, EOS and QAC
 * 
 * 5.0.0; 3     08.07.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 5.0.0; 2     10.06.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 5.0.0; 1     20.05.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 5.0.0; 0     12.08.2009 RWF2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
#ifndef _MOCMEM_CO_H
#define _MOCMEM_CO_H
/* EasyCASE ( 2
   MoCMem_ChkRamInfoBlock_t */
/* EasyCASE C */
/* module identifier   */

/* Structure for cyclic RAM-Check */
/* Pointer auf uint8              */
typedef struct
   {
   uint32*  adStartSection;
   uint8*   adEndSection;
   } MoCMem_ChkRamInfoBlock_t;
/* EasyCASE E */
/* EasyCASE ) */
/* EasyCASE ( 5
   MoCMem_wdt_timeout_t */
/* EasyCASE C */
    /*
    * to prevent the compiler from using stack, a union (size: 32bit)
    * is used instead of a struct here
    */
/* MISRA RULE  18.4 VIOLATION: union needed for optimized programming  */
typedef union
   {
   uint32 reloadValue_prescaleValue_u32; /* must be the 1st */
   /* EasyCASE C */
   struct
   /* Struktur fuer Reload-Wert + Vorteiler Faktor */
      {
      uint16 reloadValue;
      uint16 prescaleValue;
      } u16;
   /* EasyCASE E */
   } MoCMem_wdt_timeout_t;
/* EasyCASE E */
/* EasyCASE ) */

#endif /* _MOCMEM_CO_H */
/* EasyCASE ) */
