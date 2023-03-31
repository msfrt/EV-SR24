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
 * $Filename__:isotp_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:22.12.2008$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:isotp_template_conf$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     22.12.2008 MXA2SI
 *   HMC Gasoline
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ISOTP_AUTO_CONF_H
#define _ISOTP_AUTO_CONF_H


/*
 ***************************************************************************************************
 *    Include files
 ***************************************************************************************************
 */

/* import diag interfaces, if DIAG component available */
#include "diag.h"


/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */

/* ECU Physical Address */

#define    ISOTP_PHYS_ADDRESS          ECU_PHYS_ADDRESS
#define    ISOTP_PHYS_ADDRESS_SLAVE    ECU_PHYS_ADDRESS


/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */


typedef enum
{

 /* Note: handles of Kwp on CAN must be defined at first */
    	TP_DIAG_UDS,


    /* ... */
    ISOTP_NUM_MESSAGES
} IsoTp_Messages_t;

/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */








#endif /* _ISOTP_AUTO_CONF_H */
