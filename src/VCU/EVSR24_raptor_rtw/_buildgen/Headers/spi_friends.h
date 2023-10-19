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
 * $Filename__:spi_friends.h$ 
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
 * $Name______:spi_friends$ 
 * $Variant___:1.5.0$ 
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
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: spi_friends.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SPI_FRIENDS_H
#define _SPI_FRIENDS_H

/**
 ***************************************************************************************************
 * \moduledescription
 * SPI header file for friends.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * List of friends components
 ***************************************************************************************************
 */

#if !(defined(_SPI_INF_H) || defined(_PCP_INF_H))
#error "Friends interfaces can only be used by dedicated components."
#endif


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/* include "reg.h" */
/* include REG_SCU_H */
/* include REG_SSC_H */
/* replaces if (MACHINE_TYPE == TC_1766) */
/* include "scu_1766.h" ... */
/* include "ssc_1766.h" ... */
#include "reg.h"
#include REG_SCU_H
#include REG_SSC_H



/*
 ***************************************************************************************************
 * Prot-Section: include all required protected headers inside the component
 ***************************************************************************************************
 */

#include "spi_prot.h"


/* _SPI_FRIENDS_H */
#endif
