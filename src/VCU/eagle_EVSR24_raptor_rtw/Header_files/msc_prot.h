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
 * $Filename__:msc_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO1SI$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:msc_prot$ 
 * $Variant___:1.12.0$ 
 * $Revision__:2$ 
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
 * 1.12.0; 2     25.06.2010 MMO1SI
 *   Support automatic module configuration
 *   Add queuehandler latency calculation
 *   Correct upstream timeout calculation
 *   Correct Gpta header usage
 *   Correct GLOBDATA entries
 *   Update Confrules info
 *   Remove UD register clearing in init
 * 
 * 1.12.0; 1     18.03.2010 MMO1SI
 *   Update for Monitoring
 * 
 * 1.12.0; 0     18.03.2010 MMO1SI
 *   Added support for TC1793 and TC1724
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_prot.h
 *      Version: \main\basis\b_CORE\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MSC_PROT_H
#define _MSC_PROT_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Protected header for the MSC low level driver.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* queue handler operation values for register MSCx.ICR for getting requests on downstream
   data frame transmission or on upstream data receiption */
#define MSC_MSC0_ICR_CMDFRM_REQ        ((1UL << MSC0_ICR_ECIP_POS) | \
                                        (1UL << MSC0_ICR_ECIE_POS))
#define MSC_MSC0_ICR_USFRM_REQ         ((1UL << MSC0_ICR_RDIP_POS) | \
                                        (1UL << MSC0_ICR_RDIE_POS))
#if (MACHINE_TYPE == TC_1793) || ((MACHINE_TYPE == TC_1796) && (MACHINE_SUBTYPE != TC_1792)) || \
    (MACHINE_TYPE == TC_1797)
#define MSC_MSC1_ICR_CMDFRM_REQ        ((1UL << MSC1_ICR_ECIP_POS) | \
                                        (1UL << MSC1_ICR_ECIE_POS))
#define MSC_MSC1_ICR_USFRM_REQ         ((1UL << MSC1_ICR_RDIP_POS) | \
                                        (1UL << MSC1_ICR_RDIE_POS))
#endif

#if (defined CPU_PCP_AVL && !defined MSC_QHNDLR_CPU)
/* set-up values for SRNs */
#define MSC_MSC0_SRNVAL_QHNDLR          ((uint32)MSC_MSC0QHNDLR_PRIO  | TOS_01 | CLRR)
#define MSC_MSC0_SRNVAL_RXTRANS         ((uint32)MSC_MSC0RXTRANS_PRIO | TOS_01 | CLRR)
#if (MACHINE_TYPE == TC_1793) || ((MACHINE_TYPE == TC_1796) && (MACHINE_SUBTYPE != TC_1792)) || \
    (MACHINE_TYPE == TC_1797)
#define MSC_MSC1_SRNVAL_QHNDLR          ((uint32)MSC_MSC1QHNDLR_PRIO  | TOS_01 | CLRR)
#define MSC_MSC1_SRNVAL_RXTRANS         ((uint32)MSC_MSC1RXTRANS_PRIO | TOS_01 | CLRR)
#endif
#// if (defined CPU_PCP_AVL && !defined MSC_QHNDLR_CPU)
#endif
/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */


/* _MSC_PROT_H */
#endif
