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
 * $Filename__:dma_pub.h$ 
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
 * $Name______:dma_pub$ 
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
 *      File name: dma_pub.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DMA_PUB_H
#define _DMA_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription : public header for DMA
 *
 ***************************************************************************************************
 */
#define DMA_SHUTDOWN_DEF     1               /*  Dma_Shutdown is available                        */



__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Dma_Proc_Ini     (void);
extern void Dma_ErrorInt_Proc(void);
extern void Dma_Shutdown     (void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

/* _DMA_PUB_H                                                                                     */
#endif
