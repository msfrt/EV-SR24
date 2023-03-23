/* EasyCASE V6.5 30.08.2010 14:52:49 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=yes
Colors=16777215,0,12582912,12632256,0,0,0,16711680,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=System,,100,1,-13,0,700,0,0,0,0,0,0,1,2,1,34,96,96
PrinterFont=Courier,,100,65530,-83,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=36 */
/* EasyCASE ( 1 */
/* Header fuer den kompletten RAM-Check */
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
 * $Filename__:mocram_co.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 */
/* Modulheader und Aenderungskommentar */
/************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RWF2SI$ 
 * $Date______:01.09.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:mocram_co$ 
 * $Variant___:5.0.0$ 
 * $Revision__:2$ 
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
 * 5.0.0; 2     01.09.2010 RWF2SI
 *   add new Clear RAM functionality for shutdown which is needed for new Kl15 
 *   reset concept
 *   
 *   preparation for FCI, changes for avoiding warning, error messages from 
 *   compiler, EOS and QAC
 * 
 * 5.0.0; 1     08.07.2010 RWF2SI
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
 * 5.0.0; 0     10.06.2010 RWF2SI
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
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _MOCRAM_CO_H
#define _MOCRAM_CO_H
/* EasyCASE - */
/* EasyCASE < */
/* If it is possible to define the structure in MSR, the */
/* typedef and instances will be removed.                */
/* base-structure of testpattern for writeability-test
 * in the complete RAM-Check
 */
typedef struct
   {
   const uint32 Block[MOCRAM_CO_PATTERN_NUMBER] ;
   } MoCRAM_RamTabDefPattern_t;
/* EasyCASE > */
/* EasyCASE - */
#endif /*  _MOCRAM_CO_H */
/* EasyCASE ) */
