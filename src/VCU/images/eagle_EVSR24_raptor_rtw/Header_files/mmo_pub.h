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
 * $Filename__:mmo_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:23.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:mmo_pub$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     23.11.2009 AWL2SI
 *   B_MMO.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MMO_PUB_H
#define _MMO_PUB_H

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/* variable, visible in INCA */
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32  Mmo_ctArray_u32;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END
__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern uint8  Mmo_RequestCDC_u8;
extern uint8   Mmo_flState_u8;
__PRAGMA_USE__eos__1_5ms__RAM__x8__END
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32  Mmo_State_Count_u32;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END
__PRAGMA_USE__eos__1_5ms__RAM__s32__START
extern uint32  Mmo_ctRamArray1_u32[];
__PRAGMA_USE__eos__1_5ms__RAM__s32__END
/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */
__PRAGMA_USE__CODE__eos__HighSpeed__START
void  Mmo_Sample_proc (void);
void  Mmo_DataBreak   (void);
__PRAGMA_USE__CODE__eos__HighSpeed__END

#ifdef MMO_USE_TRAP
void  Mmo_DataBreak_  (void);
#endif /*MMO_USE_TRAP*/

/*_MMO_PUB_H*/
#endif
