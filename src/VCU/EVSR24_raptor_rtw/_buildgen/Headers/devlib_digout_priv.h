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
 * $Filename__:devlib_digout_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:05.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_digout_priv$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_digout_priv.h
 *      Version: \main\basis\b_DE_DevLib\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_DIGOUT_PRIV_H
#define _DEVLIB_DIGOUT_PRIV_H

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

    #define DEVLIB_DIO_TEST_MAX 0xFFFFu     // No of test impulse that can be sent is set to maximum

    /* Bit masks */
    #define DEVLIB_DIO_COMM_SPI_ERROR_MSK   0x000000C0ul // Mask for comm/SPI error
    #define DEVLIB_DIO_STAT_UPDT_MSK        0x80000000ul // Mask for status updated flag.
    #define DEVLIB_DIO_COT_ERROR_MSK        0x04000000ul // Mask for central OT bit
    #define DEVLIB_DIO_SCB_ERROR_MSK        0x00000001ul // Mask for short circuit to battery error
    #define DEVLIB_DIO_SCG_ERROR_MSK        0x00000002ul // Mask for short circuit to ground error
    #define DEVLIB_DIO_OL_ERROR_MSK         0x00000020ul // Mask for open load error
    #define DEVLIB_DIO_OT_ERROR_MSK         0x00000004ul // Mask for powerstage specific OT error
    #define DEVLIB_DIO_TSTIMP_FINISHED_MSK  0x40000000ul // Mask for selcting TstImp finished flag.

    #define DEVLIB_DIO_PS_ERRORS_MSK        0x27ul       /* Mask for selecting the Ps errors from
                                                            stPrevTstRslt                         */

    /* #defines for switch - case */
    #define DEVLIB_DIO_NO_TSTIMP          0              // No test impulse to be sent
    #define DEVLIB_DIO_TSTIMP_EVERYRASTER 1              // Send the test impulse every raster
    #define DEVLIB_DIO_TSTIMP_SCB_ERR     2              // A permanent / healing in SCB error
    #define DEVLIB_DIO_TSTIMP_OT_ERR      3              // OT error detected

#endif
