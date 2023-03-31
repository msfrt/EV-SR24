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
 * $Filename__:fadc_template_confpriv.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:fadc_template_confpriv$ 
 * $Variant___:1.4.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.4.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: fadc_template_confpriv.ht
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FADC_AUTO_CONFPRIV_H
#define _FADC_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***********************************************************************************************************************
 *  Initialise FADC.
 *
 *  This function initialises registers of the FADC HW module and does initial channel calibration if requested.
 *
 *  \param      void
 *  \return     void
 ***********************************************************************************************************************
 */
static __inline__ void Fadc_Ini(void) __attribute__ ((always_inline));
static __inline__ void Fadc_Ini(void)
{
    /* initialise general FADC configuration registers */
    FADC.GCR  = 0x00240000UL;
}


/* _LIBRARYABILITY_H */
#endif

/* _FADC_AUTO_CONFPRIV_H */
#endif
