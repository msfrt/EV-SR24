/* EasyCASE V6.5 05.04.2011 09:58:39 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=351 */
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
 * $Filename__:mocmm_pub.h$ 
 * 
 * $Author____:RWF2SI$ 
 * 
 * $Function__:initial version$ 
 * 
 **************************************************************************
*/
/* EasyCASE ( 44
   Module Information and History */
/**************************************************************************
 * $Domain____:SDOM$ 
 * $User______:RWF2SI$ 
 * $Date______:04.04.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:mocmm_pub$ 
 * $Variant___:2.0.0$ 
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
 * 2.0.0; 0     04.04.2011 RWF2SI
 *   Monitoring Configuration DGS GS Projects
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* EasyCASE ) */
#ifndef _MOCMM_PUB_H
#define _MOCMM_PUB_H
/* EasyCASE ( 327
   Includes */
#include "mocsop_co.h"
/* EasyCASE ) */
/* EasyCASE ( 110
   Services */
/* EasyCASE ( 329
   MoCSOP_Co */
/* ################################################################### */
/* Provide interface for MoCSOP_Co                                     */
/* ################################################################### */
extern void MoCSOP_Co_Proc_IniEnd(void);
extern void MoCSOP_Co_Proc_IniDrv(void);
extern void MoCSOP_Co_Proc(void);

#define MOCSOP_VMTRESET_ALL    MOCSOP_CO_VMTRESET_ALL
#define MOCSOP_VMTRESET_ZERO   MOCSOP_CO_VMTRESET_ZERO
#define MOCSOP_VMTNORMAL_ZERO  MOCSOP_CO_VMTNORMAL_ZERO
#define MOCSOP_VMTSETUPLI_ZERO MOCSOP_CO_VMTSETUPLI_ZERO
#define MOCSOP_REQUESTABESTATE MOCSOP_CO_REQUESTABESTATE
#define MOCSOP_GETABE          MOCSOP_CO_GETABE
/* EasyCASE ) */
/* EasyCASE ( 330
   MoCCom_Co */
/* ################################################################### */
/* Provide interface for MoCCom_Co                                     */
/* ################################################################### */
extern void MoCCom_Co_Proc_IniEnd(void);
extern void MoCCom_Co_Proc_IniDrv(void);
extern void MoCCom_Co_Proc(void);

extern void MoCCom_Co_IncErrCnt(void); /* Interface for system control */
/* EasyCASE - */
/* Backward Compatibility */
#define MoCCom_IncErrCnt MoCCom_Co_IncErrCnt
/* EasyCASE ) */
/* EasyCASE ) */
#endif /* _MOCMM_PUB_H */
/* EasyCASE ) */
