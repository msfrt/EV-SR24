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
 * $Filename__:epmcas_meas_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FC for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DRE2FE$ 
 * $Date______:02.04.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcas_meas_pub$ 
 * $Variant___:1.27.0$ 
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
 * 1.27.0; 0     02.04.2012 DRE2FE
 *   RQONE00027552 - Parallel measurement of edges for all Camshafts in nsync 
 *   and 10ms raster
 * 
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EPMCAS_MEAS_PUB_H                                    /* protect multiple includes             */
#define _EPMCAS_MEAS_PUB_H


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
extern void EpmCaS_Meas_Proc_IniEnd (void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCaS_Meas_10ms_Proc (void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCaS_Meas_Proc (void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
