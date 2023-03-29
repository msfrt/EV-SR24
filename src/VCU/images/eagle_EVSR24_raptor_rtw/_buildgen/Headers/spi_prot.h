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
 * $Filename__:spi_prot.h$ 
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
 * $Name______:spi_prot$ 
 * $Variant___:1.3.0$ 
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
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: spi_prot.h
 *      Version: \main\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _SPI_PROT_H
#define _SPI_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * SPI protected header.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define SPI_SSC0_DRV_STRONG_SHARP   0x00000000UL
#define SPI_SSC0_DRV_STRONG_SOFT    ((0x01UL << SCU_CON_SLSPDR_POS) |                              \
                                     (0x01UL << SCU_CON_SSC0PDR_POS))

#define SPI_VVT_SSC_CON_INIT        0xC05F          /* data width = 16 bit
                                                       transmit/receive MSB first
                                                       latch on trailing edge
                                                       idle clock line is high
                                                       master mode
                                                       enable transmission and reception */

#define SPI_VVT_BUF_DEFAULT         0xFFFFFFFFUL    /* default value for VVT buffer content */


/* _SPI_PROT_H */
#endif
