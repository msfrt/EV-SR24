/* EasyCASE V6.5 07.02.2011 10:03:19 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=326 */
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
 * $Filename__:mo_pub.h$ 
 * 
 * $Author____:RWF2SI$ 
 * 
 * $Function__:add mo_pub for common monitoring coding style
 *             temprary branch for pilot project VW EA211
 *             will be branched back in the future$ 
 * 
 **************************************************************************
*/
/* EasyCASE ( 44
   Module Information and History */
/**************************************************************************
 * $Domain____:SDOM$ 
 * $User______:RWF2SI$ 
 * $Date______:12.05.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:mo_pub$ 
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
 * 2.0.0; 0     12.05.2011 RWF2SI
 *   add header for partial package configuration MoCMM for export interfaces to
 *    other packages
 * 
 * 61.0.0; 0     03.02.2011 GHS2SI
 *   DGS: Creation based on the DGS Monitoring Guidelines
 * 
 * 21.0.0; 0     24.11.2010 TRJ2ST
 *   DGS: Creation based on the DGS Monitoring Guidelines
 * 
 * 33.0.0; 0     23.11.2010 RWF2SI
 *   Mo_Glbl branch for S0 reference pst with build in common DGS memory check
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* EasyCASE ) */
#ifndef _MO_PUB_H
#define _MO_PUB_H
/* EasyCASE ( 326
   Include */
/* Include */
/* Include Headerfiles                                                                      */
/* ===================                                                                      */

/* include   Filename              description                                              */

#include "mocfc_pub.h"         /* export interface from subpackage MoCFC */
#include "mocmm_pub.h"         /* export interface from subpackage MoCMM */
/* EasyCASE ) */
#endif /* _MO_PUB_H */
/* EasyCASE ) */
