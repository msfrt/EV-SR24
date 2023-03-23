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
 * $Filename__:epmcrs_seg_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:01.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcrs_seg_pub$ 
 * $Variant___:1.23.0$ 
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
 * 1.23.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCRS_SEG_PUB_H                                  /* protect multiple includes              */
#define _EPMCRS_SEG_PUB_H




/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_Seg_Proc_SyncIni(void);
extern void EpmCrS_Seg_Syn_Proc(void);
extern void EpmCrS_Seg_First_Proc(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END


#endif
