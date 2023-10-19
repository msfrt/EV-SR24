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
 * $Filename__:spi_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SRU1COB$ 
 * $Date______:11.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:spi_inf$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 1     11.10.2011 SRU1COB
 *   update review comments
 * 
 * 1.13.0; 0     28.09.2011 SRU1COB
 *   add queue overflow error in INCA
 * 
 * 1.8.0; 0     04.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: spi_inf.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SPI_INF_H
#define _SPI_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * SPI import interface header.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */


#include "spi.h"
#include "spi_friends.h"

#include "cpu.h"
#include "dma.h"
#include "gpta.h"
#include "memlay.h"
#include "port.h"
#include "reg.h"
#include "srvb.h"
#include "reset.h"

#ifdef CPU_PCP_AVL
#include "pcp.h"
#include "pcp_pramdef_auto_conf.h"
#endif

#ifdef SPI_DEBUG
#include "dio.h"
#endif

/* include "general_1766.h" ... */
#include REG_GENERAL_H

/* if DAMOS is available, include generated data header file */
/* switch is defined in spi_pub.h                            */
#if (SPI_USE_DAMOS)
#include "spi_dat.h"
#endif


/* _SPI_INF_H */
#endif
