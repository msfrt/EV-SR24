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
 * $Filename__:port_tc17xx_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO1SI$ 
 * $Date______:19.11.2010$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:port_tc17xx_template_conf$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     19.11.2010 MMO1SI
 *   ESB scan pins: Must be user defined (2-5 pins)
 *   Updates for TC1724
 *   Support new tag PORT_EBU_ACTIVE pushed by Memlay
 *   Activate confhash validation checker
 * 
 * 1.12.0; 0     18.03.2010 MMO1SI
 *   Added support for TC1793 and TC1724
 * 
 * 1.11.0; 0     25.11.2009 JWI2SI
 *   B_PORT.11.0.0
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: port_tc17xx_template_conf.ht
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PORT_AUTO_CONF_H
#define _PORT_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * port_auto_conf.h  - automatically generated configuration headerfile of PORT module for TC1796.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Definitions of Output Modification Register (OMR) bit positions for setting and reseting values
 * Function of the Bits PRx and PSx
 * PRx  PSx  Function
 * 0    0    Bit Pn_OUT.Px is not changed.
 * 0    1    Bit Pn_OUT.Px is set.
 * 1    0    Bit Pn_OUT.Px is reset.
 * 1    1    Bit Pn_OUT.Px is toggled.
 */
#define PORT_SETIO_0        0x00000001UL
#define PORT_SETIO_1        0x00000002UL
#define PORT_SETIO_2        0x00000004UL
#define PORT_SETIO_3        0x00000008UL
#define PORT_SETIO_4        0x00000010UL
#define PORT_SETIO_5        0x00000020UL
#define PORT_SETIO_6        0x00000040UL
#define PORT_SETIO_7        0x00000080UL
#define PORT_SETIO_8        0x00000100UL
#define PORT_SETIO_9        0x00000200UL
#define PORT_SETIO_10       0x00000400UL
#define PORT_SETIO_11       0x00000800UL
#define PORT_SETIO_12       0x00001000UL
#define PORT_SETIO_13       0x00002000UL
#define PORT_SETIO_14       0x00004000UL
#define PORT_SETIO_15       0x00008000UL

#define PORT_RESETIO_0      0x00010000UL
#define PORT_RESETIO_1      0x00020000UL
#define PORT_RESETIO_2      0x00040000UL
#define PORT_RESETIO_3      0x00080000UL
#define PORT_RESETIO_4      0x00100000UL
#define PORT_RESETIO_5      0x00200000UL
#define PORT_RESETIO_6      0x00400000UL
#define PORT_RESETIO_7      0x00800000UL
#define PORT_RESETIO_8      0x01000000UL
#define PORT_RESETIO_9      0x02000000UL
#define PORT_RESETIO_10     0x04000000UL
#define PORT_RESETIO_11     0x08000000UL
#define PORT_RESETIO_12     0x10000000UL
#define PORT_RESETIO_13     0x20000000UL
#define PORT_RESETIO_14     0x40000000UL
#define PORT_RESETIO_15     0x80000000UL

/* Base address of port module for TC1766, TC1796 */
#define PORT_BASEADR        0xF0000C00UL

/* Offset between port registers is 0x100 (256 bytes) */
#define PORT_OFFSETREG      0x100

/** Offset to Output Modification Register (OMR) */
#define PORT_XREG_OMR       0x4

/** Offset to Input Register (IN) */
#define PORT_XREG_IN        0x24

/** Offset to Input/Output Control Register 0 (IOCR0)*/
#define PORT_XREG_IOCR0     0x10

/** Port_PutBit(mod,reg,bit,val).
    Macro to decide between setting and reseting port pin.
*/
/* MISRA RULE 96,98 VIOLATION: parameters can not be enclosed within parentheses, otherwise macro
 * using construct ## does not work properly.
 */
#define Port_PutBit(mod,reg,bit,val) \
        (mod.reg = ((val) != 0) ? PORT_SETIO_##bit : PORT_RESETIO_##bit )

/**
 ***************************************************************************************************
 * Macro to get address of correspoding PORT Output register.
 *
 * This macro calls service PORT_GETREGADR(numPort, offset) which is able to calculate the address
 * of a PORT Output register by given port number and a offset of 0 (hex value) related to the port
 * base address.
 *
 * \param numPort  number of port
 * \seealso PORT_GETREGADR
 ***************************************************************************************************
 */
#define PORT_GETOUTREGADR(numPort)     (PORT_GETREGADR((numPort), 0x0))

/**
 ***************************************************************************************************
 * Macro to get address of correspoding PORT Output Modification register.
 *
 * This macro calls service PORT_GETREGADR(numPort, offset) which is able to calculate the address
 * of a PORT Output Modification register by given port number and a offset of 4 (hex value)
 * related to the port base address.
 *
 * \param numPort  number of port
 * \seealso PORT_GETREGADR
 ***************************************************************************************************
 */
#define PORT_GETOMRREGADR(numPort)     (PORT_GETREGADR((numPort), 0x4))

/**
 ***************************************************************************************************
 * Macro to get address of correspoding PORT Input register.
 *
 * This macro calls service PORT_GETREGADR(numPort, offset) which is able to calculate the address
 * of a PORT Input register by given port number and a offset of 24 (hex value) related to the port
 * base address.
 *
 * \param numPort  number of port
 * \seealso PORT_GETREGADR
 ***************************************************************************************************
 */
#define PORT_GETINREGADR(numPort)      (PORT_GETREGADR((numPort), 0x24))

/**
 ***************************************************************************************************
 * Macro to calculate address of port register.
 *
 * This macro calls service PORT_GETREGADR(numPort, offset) which is able to calculate the address
 * of a port register by given port number and a offset (hex value) related to the port base
 * address.
 * Hint: An additional Offset of 0x2FE800 is added to Ports > 11 for the TC1724, TC1793 & TC1797
 *       (see Processor Spec)
 *
 * \param numPort  number of port
 * \param offset   offset related to PORT base address
 * \seealso PORT_GETREGADR
 ***************************************************************************************************
 */
#if ((MACHINE_TYPE == TC_1724) || (MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1793))
    #define PORT_GETREGADR(numPort, offset)                                                        \
        ((numPort) > 11)?                                                                            \
            ((PORT_BASEADR) + ((uint32)(PORT_OFFSETREG * (numPort))) + (uint32)(offset) + 0x2FE800)\
        :                                                                                          \
            ((PORT_BASEADR) + ((uint32)(PORT_OFFSETREG * (numPort))) + (uint32)(offset))
#elif ( (MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1767) || (MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1782) )
    #define PORT_GETREGADR(numPort, offset)                                                        \
        ((PORT_BASEADR) + ((uint32)(PORT_OFFSETREG * (numPort))) + (uint32)(offset))
#else
    #error "Machine Type not supported! Check Port Register Base Address calculations in port_tc17xx_template_conf.ht "
#endif

/* Defines for PORT OMR register ('SOFTRESET' initialization) */
#define PORT_OMR_IMG0  0x00000000UL 
#define PORT_OMR_IMG1  0x00000000UL 
#define PORT_OMR_IMG2  0x00000000UL 
#define PORT_OMR_IMG3  0x00000000UL 
#define PORT_OMR_IMG4  0x00000000UL 
#define PORT_OMR_IMG5  0x00000002UL 
#define PORT_OMR_IMG6  0x0000aa00UL 
#define PORT_OMR_IMG7  0x0000000eUL 
#define PORT_OMR_IMG8  0x00000000UL 
#define PORT_OMR_IMG9  0x00000000UL 
#define PORT_OMR_IMG10 0x00000000UL 
#define PORT_OMR_IMG11 0x00000000UL 
#define PORT_OMR_IMG12 0x00000000UL 
#define PORT_OMR_IMG13 0x00000000UL 
#define PORT_OMR_IMG14 0x00000000UL 
#define PORT_OMR_IMG15 0x00000000UL 
#define PORT_OMR_IMG16 0x00000000UL 
#define PORT_OMR_IMG17 0x00000000UL 



/* Defines for Standard GPIO via DIO */
#define PORT_DIOSET_P0_P1(val)  (Port_PutBit(P0, OMR, 1, (val)))  
#define PORT_DIOGET_P0_P2       Reg_GetBit(P0,IN,IN_P2)           
#define PORT_DIOSET_P0_P3(val)  (Port_PutBit(P0, OMR, 3, (val)))  
#define PORT_DIOSET_P0_P5(val)  (Port_PutBit(P0, OMR, 5, (val)))  
#define PORT_DIOGET_P0_P6       Reg_GetBit(P0,IN,IN_P6)           
#define PORT_DIOGET_P0_P7       Reg_GetBit(P0,IN,IN_P7)           
#define PORT_DIOGET_P0_P11      Reg_GetBit(P0,IN,IN_P11)          
#define PORT_DIOGET_P0_P12      Reg_GetBit(P0,IN,IN_P12)          
#define PORT_DIOGET_P0_P13      Reg_GetBit(P0,IN,IN_P13)          
#define PORT_DIOGET_P1_P0       Reg_GetBit(P1,IN,IN_P0)           
#define PORT_DIOSET_P1_P1(val)  (Port_PutBit(P1, OMR, 1, (val)))  
#define PORT_DIOGET_P1_P1       Reg_GetBit(P1,IN,IN_P1)           
#define PORT_DIOSET_P1_P2(val)  (Port_PutBit(P1, OMR, 2, (val)))  
#define PORT_DIOGET_P1_P2       Reg_GetBit(P1,IN,IN_P2)           
#define PORT_DIOGET_P1_P3       Reg_GetBit(P1,IN,IN_P3)           
#define PORT_DIOGET_P1_P4       Reg_GetBit(P1,IN,IN_P4)           
#define PORT_DIOGET_P1_P5       Reg_GetBit(P1,IN,IN_P5)           
#define PORT_DIOSET_P1_P7(val)  (Port_PutBit(P1, OMR, 7, (val)))  
#define PORT_DIOSET_P1_P8(val)  (Port_PutBit(P1, OMR, 8, (val)))  
#define PORT_DIOSET_P1_P11(val) (Port_PutBit(P1, OMR, 11, (val))) 
#define PORT_DIOGET_P1_P14      Reg_GetBit(P1,IN,IN_P14)          
#define PORT_DIOGET_P1_P15      Reg_GetBit(P1,IN,IN_P15)          
#define PORT_DIOGET_P2_P8       Reg_GetBit(P2,IN,IN_P8)           
#define PORT_DIOGET_P2_P9       Reg_GetBit(P2,IN,IN_P9)           
#define PORT_DIOGET_P2_P10      Reg_GetBit(P2,IN,IN_P10)          
#define PORT_DIOGET_P2_P12      Reg_GetBit(P2,IN,IN_P12)          
#define PORT_DIOGET_P2_P14      Reg_GetBit(P2,IN,IN_P14)          
#define PORT_DIOGET_P2_P15      Reg_GetBit(P2,IN,IN_P15)          
#define PORT_DIOGET_P3_P0       Reg_GetBit(P3,IN,IN_P0)           
#define PORT_DIOGET_P3_P1       Reg_GetBit(P3,IN,IN_P1)           
#define PORT_DIOSET_P3_P12(val) (Port_PutBit(P3, OMR, 12, (val))) 
#define PORT_DIOSET_P3_P13(val) (Port_PutBit(P3, OMR, 13, (val))) 
#define PORT_DIOSET_P3_P14(val) (Port_PutBit(P3, OMR, 14, (val))) 
#define PORT_DIOSET_P3_P15(val) (Port_PutBit(P3, OMR, 15, (val))) 
#define PORT_DIOSET_P4_P0(val)  (Port_PutBit(P4, OMR, 0, (val)))  
#define PORT_DIOGET_P4_P0       Reg_GetBit(P4,IN,IN_P0)           
#define PORT_DIOGET_P4_P1       Reg_GetBit(P4,IN,IN_P1)           
#define PORT_DIOSET_P4_P3(val)  (Port_PutBit(P4, OMR, 3, (val)))  
#define PORT_DIOSET_P4_P4(val)  (Port_PutBit(P4, OMR, 4, (val)))  
#define PORT_DIOSET_P4_P5(val)  (Port_PutBit(P4, OMR, 5, (val)))  
#define PORT_DIOGET_P4_P7       Reg_GetBit(P4,IN,IN_P7)           
#define PORT_DIOSET_P4_P8(val)  (Port_PutBit(P4, OMR, 8, (val)))  
#define PORT_DIOSET_P4_P9(val)  (Port_PutBit(P4, OMR, 9, (val)))  
#define PORT_DIOGET_P4_P10      Reg_GetBit(P4,IN,IN_P10)          
#define PORT_DIOSET_P4_P11(val) (Port_PutBit(P4, OMR, 11, (val))) 
#define PORT_DIOGET_P4_P12      Reg_GetBit(P4,IN,IN_P12)          
#define PORT_DIOSET_P4_P14(val) (Port_PutBit(P4, OMR, 14, (val))) 
#define PORT_DIOSET_P4_P15(val) (Port_PutBit(P4, OMR, 15, (val))) 
#define PORT_DIOGET_P6_P7       Reg_GetBit(P6,IN,IN_P7)           
#define PORT_DIOGET_P7_P0       Reg_GetBit(P7,IN,IN_P0)           
#define PORT_DIOSET_P7_P1(val)  (Port_PutBit(P7, OMR, 1, (val)))  
#define PORT_DIOSET_P7_P2(val)  (Port_PutBit(P7, OMR, 2, (val)))  
#define PORT_DIOSET_P7_P3(val)  (Port_PutBit(P7, OMR, 3, (val)))  
#define PORT_DIOGET_P7_P4       Reg_GetBit(P7,IN,IN_P4)           
#define PORT_DIOSET_P7_P5(val)  (Port_PutBit(P7, OMR, 5, (val)))  
#define PORT_DIOSET_P7_P6(val)  (Port_PutBit(P7, OMR, 6, (val)))  
#define PORT_DIOGET_P7_P7       Reg_GetBit(P7,IN,IN_P7)           
#define PORT_DIOGET_P8_P0       Reg_GetBit(P8,IN,IN_P0)           
#define PORT_DIOGET_P8_P1       Reg_GetBit(P8,IN,IN_P1)           
#define PORT_DIOGET_P8_P2       Reg_GetBit(P8,IN,IN_P2)           
#define PORT_DIOGET_P8_P3       Reg_GetBit(P8,IN,IN_P3)           
#define PORT_DIOGET_P8_P7       Reg_GetBit(P8,IN,IN_P7)           
#define PORT_DIOGET_P9_P0       Reg_GetBit(P9,IN,IN_P0)           
#define PORT_DIOGET_P9_P1       Reg_GetBit(P9,IN,IN_P1)           
#define PORT_DIOGET_P9_P2       Reg_GetBit(P9,IN,IN_P2)           
#define PORT_DIOGET_P9_P3       Reg_GetBit(P9,IN,IN_P3)           
#define PORT_DIOGET_P9_P5       Reg_GetBit(P9,IN,IN_P5)           
#define PORT_DIOGET_P9_P7       Reg_GetBit(P9,IN,IN_P7)           
#define PORT_DIOGET_P9_P8       Reg_GetBit(P9,IN,IN_P8)           
#define PORT_DIOGET_P9_P9       Reg_GetBit(P9,IN,IN_P9)           
#define PORT_DIOGET_P9_P10      Reg_GetBit(P9,IN,IN_P10)          
#define PORT_DIOGET_P9_P11      Reg_GetBit(P9,IN,IN_P11)          
#define PORT_DIOGET_P9_P12      Reg_GetBit(P9,IN,IN_P12)          
#define PORT_DIOGET_P9_P13      Reg_GetBit(P9,IN,IN_P13)          
#define PORT_DIOGET_P9_P14      Reg_GetBit(P9,IN,IN_P14)          
#define PORT_DIOGET_P10_P2      Reg_GetBit(P10,IN,IN_P2)          



/* Defines for Bi-Directional GPIO via DIO */
#define PORT_DIO_RESTORE_P1P1  (Reg_SetBitField(P1, IOCR0, IOCR0_PC1, 0x00000000UL)) 
#define PORT_DIO_INIT_P1P1     (Reg_SetBitField(P1, IOCR0, IOCR0_PC1, 0x00000008UL)) 
#define PORT_DIO_DIRIN_P1P1()  (Reg_SetBitField(P1, IOCR0, IOCR0_PC1, 0x00000000UL)) 
#define PORT_DIO_DIROUT_P1P1() (Reg_SetBitField(P1, IOCR0, IOCR0_PC1, 0x00000008UL)) 
#define PORT_DIO_RESTORE_P1P2  (Reg_SetBitField(P1, IOCR0, IOCR0_PC2, 0x00000000UL)) 
#define PORT_DIO_INIT_P1P2     (Reg_SetBitField(P1, IOCR0, IOCR0_PC2, 0x00000008UL)) 
#define PORT_DIO_DIRIN_P1P2()  (Reg_SetBitField(P1, IOCR0, IOCR0_PC2, 0x00000000UL)) 
#define PORT_DIO_DIROUT_P1P2() (Reg_SetBitField(P1, IOCR0, IOCR0_PC2, 0x00000008UL)) 
#define PORT_DIO_INIT_P4P0     (Reg_SetBitField(P4, IOCR0, IOCR0_PC0, 0x00000000UL)) 
#define PORT_DIO_RESTORE_P4P0  (Reg_SetBitField(P4, IOCR0, IOCR0_PC0, 0x00000008UL)) 
#define PORT_DIO_DIRIN_P4P0()  (Reg_SetBitField(P4, IOCR0, IOCR0_PC0, 0x00000000UL)) 
#define PORT_DIO_DIROUT_P4P0() (Reg_SetBitField(P4, IOCR0, IOCR0_PC0, 0x00000008UL)) 



/* _LIBRARYABILITY_H */
#endif

/* _PORT_AUTO_CONF_H */
#endif
