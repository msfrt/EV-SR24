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
 * $Filename__:adci_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AMR4COB$
 * $Date______:07.03.2011$
 * $Class_____:SWHDR$
 * $Name______:adci_inf$
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
 *   support for tc1724
 *   
 * 
 * 1.14.0; 0     21.02.2011 AMR4COB
 *   Adc for TC1724
 * 
 * 1.13.0; 0     24.03.2010 LENZSI
 *   add new machine type to header files
 * 
 * 1.12.0; 0     24.11.2009 AWL2SI
 *   B_ADC.12.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _ADCI_INF_H
#define _ADCI_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      Import header file of the driver for the internal ADC of the TriCore.
 *
 * \scope          API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "adc.h"
#include "adci_friends.h"
#include REG_GENERAL_H

/* the TC17x6 needs the PCP for ADC0 demultiplexing */
#if ((MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1796))
    #include "pcp.h"    /*  */
    #include "pcp_pramdef_auto_conf.h" /* */

/* the TC17x7 needs the PMW for timer triggering */
#elif ((MACHINE_TYPE == TC_1767) || (MACHINE_TYPE == TC_1797) || \
       (MACHINE_TYPE == TC_1782) || (MACHINE_TYPE == TC_1793) || (MACHINE_TYPE == TC_1724))

    /* in case a muxer is used the DMA will be needed */
    #if (ADCI_NOF_MULTIPLEXERS > 0)
        #include "dma.h"
    #endif

    /* in case more than 1 muxers are used, the PCP is needed */
    #if (ADCI_NOF_MULTIPLEXERS > 1)
        #include "pcp.h"    /*  */
        #include "pcp_pramdef_auto_conf.h" /* */
    #endif
#endif



/* _ADCI_INF_H                                                                                    */
#endif
