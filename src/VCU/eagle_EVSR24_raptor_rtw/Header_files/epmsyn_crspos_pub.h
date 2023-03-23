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
 * $Filename__:epmsyn_crspos_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:changes in calibration docu$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIP3KOR$ 
 * $Date______:22.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmsyn_crspos_pub$ 
 * $Variant___:1.29.0_1$ 
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
 * 1.29.0_1; 0     22.02.2011 VIP3KOR
 *   RCMS00956065
 * 
 * 1.28.0; 0     02.02.2011 VIP3KOR
 *   New global variable EpmSyn_ctIncEngPos_10ms for DG23I sensor.
 * 
 * 1.22.0; 0     04.12.2009 TUC2SI
 *   changes in calibration docu
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMSYN_CRSPOS_PUB_H                                   /* protect multiple includes              */
#define _EPMSYN_CRSPOS_PUB_H


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/* States of crankshaft synchronization EpmSyn_stCrSPos */
#define EPMSYN_NO_SYNC     0
#define EPMSYN_CRS_SYNC    1
#define EPMSYN_CAS_SYNC    2
#define EPMSYN_FULL_SYNC   3


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
__PRAGMA_USE__epm__nsync__RAM__x16__START
extern sint16 EpmSyn_phiOffs;                // offset of angle base
extern sint16 EpmSyn_phiOffsCor;             // corrected offset of angle base
__PRAGMA_USE__epm__nsync__RAM__x16__END

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmSyn_CrSPos_Proc( void );
extern void EpmSyn_CrSPos_Proc_SyncIni( void );
extern void EpmSyn_CrSPos_10ms_Proc( void );
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
