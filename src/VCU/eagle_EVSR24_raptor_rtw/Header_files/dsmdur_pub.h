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
 * $Filename__:dsmdur_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmdur_pub$ 
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
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmdur_pub.h
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DSMDUR_PUB_H
#define _DSMDUR_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Duration counter access
 *
 * \scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define DSMDUR_CTR_INVLD  0x7FFFFFFFl

/*
 ***************************************************************************************************
 * Prototype declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint   DSMDur_GetDFESCnt(uint idxDFES,
                         uint idxCnt);

uint32 DSMDur_GetGlbCnt(uint idxCnt);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END



/* _DSMDUR_PUB_H */
#endif
