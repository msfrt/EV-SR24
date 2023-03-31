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
 * $Filename__:devlib_psdiag_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:21.10.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_psdiag_priv$ 
 * $Variant___:1.140.0$ 
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
 * 1.140.0; 0     21.10.2008 KLN1SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PSDIAG_PRIV_H                            /* protect multiple includes              */
#define _DEVLIB_PSDIAG_PRIV_H                            /* obsolete when consolidation is ready   */

/*
 ***************************************************************************************************
 * defines, type defs, enums, inlines, macros ...
 ***************************************************************************************************
 */

#define DEVLIB_PSDIAG_NEWERRINFOAVL_MSK     0x80000000ul
#define DEVLIB_PSDIAG_COMM_SPI_ERROR_MSK    0x000000C0ul
#define DEVLIB_PSDIAG_TSTIMP_FINISHED_MSK   0x40000000ul

#define DEVLIB_PSDIAG_SCB_HWE_MSK            0x00000001ul
#define DEVLIB_PSDIAG_SCG_HWE_MSK            0x00000002ul
#define DEVLIB_PSDIAG_OT_HWE_MSK             0x00000004ul
#define DEVLIB_PSDIAG_OL_HWE_MSK             0x00000020ul

#define DEVLIB_PSDIAG_NUMTSTIMPMAX          0xFFFFu



#endif /* _DEVLIB_PSDIAG_PRIV_H */
