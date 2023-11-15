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
 * $Filename__:port_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO1SI$ 
 * $Date______:25.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:port_prot$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 1     25.03.2010 MMO1SI
 *   Correct PORT TC1724 TC1793 and TC1797.
 *   Bugfix for TC1797 P10 P[3:0] PDR assignment.
 * 
 * 1.12.0; 0     18.03.2010 MMO1SI
 *   Added support for TC1793 and TC1724
 * 
 * 1.8.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: port_prot.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PORT_PROT_H
#define _PORT_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Protected header of PORT module.
 *
 * \scope          INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define PORT_IMG      Port_Image_ca

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/* C-structure definition for hardware module */
#if (MACHINE_TYPE == TC_1724) || (MACHINE_TYPE == TC_1793)
typedef struct
{
    uint32 OMR;                 // Port x: Output Modification Register
    uint32 IOCR0;               // Port x: Input/Output Control Register 0
    uint32 IOCR4;               // Port x: Input/Output Control Register 4
    uint32 IOCR8;               // Port x: Input/Output Control Register 8
    uint32 IOCR12;              // Port x: Input/Output Control Register 12
    uint32 PDR0;                // Port x: Pad Driver Mode Register 0
    uint32 PDR1;                // Port x: Pad Driver Mode Register 1
    uint32 ESR;                 // Port x: Emergency Stop Register
} Port_RegMap_t;
#else
typedef struct
{
    uint32 OMR;                 // Port x: Output Modification Register
    uint32 IOCR0;               // Port x: Input/Output Control Register 0
    uint32 IOCR4;               // Port x: Input/Output Control Register 4
    uint32 IOCR8;               // Port x: Input/Output Control Register 8
    uint32 IOCR12;              // Port x: Input/Output Control Register 12
    uint32 PDR;                 // Port x: Pad Driver Mode Register
    uint32 ESR;                 // Port x: Emergency Stop Register
} Port_RegMap_t;
#endif

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/** Port arrays */
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Port_RegMap_t Port_Image_ca[];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

/*
 ***************************************************************************************************
 * Variables (target independent)
 ***************************************************************************************************
 */

MEMLAY_USE_PROTRAM(extern uint8, Port_Init_u8);

/*_PORT_PROT_H */
#endif
