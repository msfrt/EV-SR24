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
 * $Filename__:epmcrs_plaus_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MRC2FE$ 
 * $Date______:13.02.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcrs_plaus_pub$ 
 * $Variant___:1.26.0$ 
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
 * 1.26.0; 0     13.02.2012 MRC2FE
 *   RCMS01254756: Function development: plausibilisation of angle clock and 
 *   tooth counter
 * 
 * 1.22.0; 1     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.22.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCRS_PLAUS_PUB_H                                  /* protect multiple includes              */
#define _EPMCRS_PLAUS_PUB_H



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
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCrS_Plaus_Proc_IniEnd(void);
extern void EpmCrS_meanValInc_20ms_Proc(void);
extern void EpmCrS_AgClkPlaus_Proc_Ini(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_AgClkPlaus_Proc_SyncIni(void);
extern void EpmCrS_AgClkPlaus_Proc(void);
extern void EpmCrS_Plaus_2ms_Proc(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
