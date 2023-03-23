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
 * $Filename__:cbadci_priv.h$
 *
 * $Author____:LENZSI$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AMR4COB$
 * $Date______:07.03.2011$
 * $Class_____:SWHDR$
 * $Name______:cbadci_priv$
 * $Variant___:1.14.0$
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
 * 1.14.0; 1     07.03.2011 AMR4COB
 *   CbAdcI support for TC1724
 * 
 * 1.14.0; 0     21.02.2011 AMR4COB
 *   Adc for TC1724
 * 
 * 1.13.0; 0     18.03.2010 LENZSI
 *   support for TC1793
 * 
 * 1.12.0; 0     24.11.2009 AWL2SI
 *   Initial import from Clearcase 
 *      File name: cbadci_priv.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CBADCI_PRIV_H
#define _CBADCI_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Private Header file for CB Target
 *
 * \scope   INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define CBADCI_RES_10_BIT               0x0
#define CBADCI_RES_12_BIT               0x1
#define CBADCI_RES_8_BIT                0x2


#if ((MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1767) || (MACHINE_TYPE == TC_1782) || (MACHINE_TYPE == TC_1793) || (MACHINE_TYPE == TC_1724))
    #define CBADCI_REF_VOLT         25000
    #define CBADCI_ARB_SLOT0        0x00

    #if (MACHINE_TYPE == TC_1797)
        #define CBADCI_NOF_ADC          3
    #else
        #define CBADCI_NOF_ADC          2
    #endif

#elif ((MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1766))
    #define CBADCI_CHIN_VAL             0x00
    #define CBADCI_REF_VOLT             16500

    #if (MACHINE_TYPE == TC_1796)
        #define CBADCI_NOF_ADC          2
    #else
        #define CBADCI_NOF_ADC          1
    #endif
#endif


/*
 *********************************************************************
 * Typedefs
 *********************************************************************
 */



/**********************************************************************
 * Prototypes for Functions
 *********************************************************************
 */


#endif
