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
 * $Filename__:epmcrs_revcnt_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:GAI2KOR$ 
 * $Date______:22.12.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcrs_revcnt_pub$ 
 * $Variant___:1.24.0$ 
 * $Revision__:1$ 
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
 * 1.24.0; 1     22.12.2010 GAI2KOR
 *   Review changes
 * 
 * 1.24.0; 0     13.12.2010 GAI2KOR
 *   RCMS00768795 3 - Undesired reset of EpmCrS_ctRevStrt in MSS (Part Epm)
 *   
 * 
 * 1.23.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCRS_REVCNT_PUB_H                                  /* protect multiple includes              */
#define _EPMCRS_REVCNT_PUB_H




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
extern void EpmCrS_RevCnt_Syn_Proc( void );
extern void EpmCrS_RevCnt_Proc_SyncIni(void);

extern void EpmCrS_StrtRevCnt(uint16* ctRev);
extern void EpmCrS_StopRevCnt(uint16* ctRev);
extern uint16 EpmCrS_GetDiffRevCnt(uint16* ctRev);
extern uint16 EpmCrS_SubtrRevCnt(uint16 ctRev1, uint16 ctRev2);
extern bool EpmCrS_DiffRevCnt(uint16* ctRev, uint16 ctDiffRev);

extern void EpmCrS_RevCnt_Proc_10ms(void );

__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCrS_RevCnt_Proc_IniEnd(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

#endif
