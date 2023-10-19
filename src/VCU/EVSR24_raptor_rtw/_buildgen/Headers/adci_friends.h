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
 * $Filename__:adci_friends.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:adci_friends$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: adci_friends.h
 *      Version: \main\basis\b_CORE\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ADCI_FRIENDS_H                     /* protect multiple includes             */
#define _ADCI_FRIENDS_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                   Protected header file of the driver for the internal ADC of the TriCore.
 *
 * \scope          API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * first class friend : ADC
 * gets all the ADCI header including the "adci_i_prot.h" containing
 * the pointer table of interface functions
 ***************************************************************************************************
 */
#if  (defined(_ADC_H))
    /* foreign exported interfaces */
    #include "cpu.h"
    #include "reg.h"
    #include REG_ADC_H
    #include REG_SCU_H
    #include "reset.h"

    #if ((MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1796))
        #include "dsm.h"
    #else
        #include "pwm.h"
    #endif

    /* exported ADCI interfaces */
    #include "adci_prot.h"
    #ifndef _LIBRARYABILITY_H
        #include "adci_auto_confprot.h"
    #else
        #error "ADCI component is not able to be build into a library."
    #endif
    #include "adci_inl.h"
    #include "adci_i_prot.h"

 /*
 ***************************************************************************************************
 * second class friends : ADCI, DIO and PCP
 * get the normal ADCI interface headers
 ***************************************************************************************************
 */
#elif (defined(_ADCI_INF_H)         || \
       defined(_DIO_INF_H)          || \
       defined(_PCP_AUTO_CONFPRIV_H))
    /* foreign exported interfaces */
    #include "cpu.h"
    #include "reg.h"
    #include REG_ADC_H
    #include REG_SCU_H
    #include "reset.h"
    #if ((MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1796))
        #include "dsm.h"
    #else
        #include "pwm.h"
    #endif

    /* exported ADCI interfaces */
    #include "adci_prot.h"
    #ifndef _LIBRARYABILITY_H
        #include "adci_auto_confprot.h"
    #else
        #error "ADCI component is not able to be build into a library."
    #endif
    #include "adci_inl.h"

/*
 ***************************************************************************************************
 * third class friend : RAND in TPROT
 * only gets the inline header and needed foreign headers
 ***************************************************************************************************
 */
#elif (defined(_RAND_INF_H))
    /* foreign exported interfaces */
    #include "reg.h"
    #include REG_ADC_H
    #include REG_SCU_H

    /* exported ADCI interfaces */
    #include "adci_inl.h"

#else
    #error "Friends interfaces can only be used by dedicated components."
#endif


#endif  // _ADCI_FRIENDS_H

