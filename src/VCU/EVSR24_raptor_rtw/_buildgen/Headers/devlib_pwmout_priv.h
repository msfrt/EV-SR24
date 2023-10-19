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
 * $Filename__:devlib_pwmout_priv.h$ 
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
 * $Name______:devlib_pwmout_priv$ 
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
 *      File name: devlib_pwmout_priv.h
 *      Version: \main\basis\b_DE_DevLib\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWMOUT_PRIV_H
#define _DEVLIB_PWMOUT_PRIV_H

/*
 ***************************************************************************************************
 * defines, type defs, enums, inlines, macros ...
 ***************************************************************************************************
 */
#define DEVLIB_TEST_MAX 0xFFFFu     /* No of test impulse that can be sent is set to maximum      */

/* Bit masks                                                                                      */
#define DEVLIB_COMM_SPI_ERROR_MSK   0x000000C0ul /* Mask for comm/SPI error                       */
#define DEVLIB_STAT_UPDT_MSK        0x80000000ul /* Mask for status updated flag.                 */
#define DEVLIB_COT_ERROR_MSK        0x04000000ul /* Mask for central OT bit                       */
#define DEVLIB_SCB_ERROR_MSK        0x00000001ul /* Mask for short circuit to battery error       */
#define DEVLIB_SCG_ERROR_MSK        0x00000002ul /* Mask for short circuit to ground error        */
#define DEVLIB_OL_ERROR_MSK         0x00000020ul /* Mask for open load error                      */
#define DEVLIB_OT_ERROR_MSK         0x00000004ul /* Mask for powerstage specific OT error         */
#define DEVLIB_TSTIMP_FINISHED_MSK  0x40000000ul /* Mask for selcting TstImp finished flag.       */

#define DEVLIB_PS_ERRORS_MSK        0x27ul /* Mask for selecting the Ps errors from stPrevTstRslt */
#define DEVLIB_PS_SCBSCGOTERR_MSK   0x25ul /* Mask for selecting the Ps errors from stPrevTstRslt */


/* #defines for switch - case                                                                     */
#define DEVLIB_NO_TSTIMP          0              /* No test impulse to be sent                    */
#define DEVLIB_TSTIMP_EVERYRASTER 1              /* Send the test impulse every raster            */
#define DEVLIB_TSTIMP_SCB_ERR     2              /* A permanent / healing in SCB error            */
#define DEVLIB_TSTIMP_OT_ERR      3              /* OT error detected                             */

#endif /* _DEVLIB_PWMOUT_PRIV_H */
