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
 * $Filename__:general_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:general_1793$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GENERAL_1793_H
#define _GENERAL_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GENERAL_UL(x) x
#else
    #define _GENERAL_UL(x) x##UL
#endif

/* CLC Clock Control Register */
#define DISR         _GENERAL_UL(0x00000001)      /* Modul Disable Request Bit */
#define DISS         _GENERAL_UL(0x00000002)      /* Modul Disable Status Bit */
#define SPEN         _GENERAL_UL(0x00000004)      /* Modul Suspend Enable Bit for OCDS */
#define EDIS         _GENERAL_UL(0x00000008)      /* Modul External Disable */
#define SBWE         _GENERAL_UL(0x00000010)      /* Modul Suspend Bit Write Enable for OCDS */
#define FSOE         _GENERAL_UL(0x00000020)      /* Fast Switch Off Enable */
#define RMC_MSK      _GENERAL_UL(0x0000FF00)      /* Clock Divider for RUN Mode */
#define RMC_1        _GENERAL_UL(0x00000100)      /* Clock Divider for RUN Mode = 1 */
#define RMC_2        _GENERAL_UL(0x00000200)      /* Clock Divider for RUN Mode = 2 */
#define RMC_4        _GENERAL_UL(0x00000400)      /* Clock Divider for RUN Mode = 4 */
#define RMC_8        _GENERAL_UL(0x00000800)      /* Clock Divider for RUN Mode = 8 */
#define RMC_16       _GENERAL_UL(0x00001000)      /* Clock Divider for RUN Mode = 16 */
#define RMC_32       _GENERAL_UL(0x00002000)      /* Clock Divider for RUN Mode = 32 */
#define RMC_64       _GENERAL_UL(0x00004000)      /* Clock Divider for RUN Mode = 64 */
#define RMC_128      _GENERAL_UL(0x00008000)      /* Clock Divider for RUN Mode = 128 */
#define SMC_MSK      _GENERAL_UL(0x00FF0000)      /* Clock Divider Addition for Sleep Mode */

/* ID Modul Identifikation Register */
#define REV_MSK      _GENERAL_UL(0x000000FF)      /* Modul Revision Number */
#define MOD_MSK      _GENERAL_UL(0x0000FF00)      /* Modul Number */

/* SRC Service Request Register */
#define SRPN_MSK     _GENERAL_UL(0x000000FF)      /* Service Request Priority Number */
#define TOS_MSK      _GENERAL_UL(0x00000C00)      /* Service Request Type of Service Control */
#define TOS_00       _GENERAL_UL(0x00000000)      /* CPU Interrupt Request */
#define TOS_01       _GENERAL_UL(0x00000400)      /* PCP Interrupt Request */
#define SRE          _GENERAL_UL(0x00001000)      /* Service Request Node Enable Control */
#define SRE_POS      _GENERAL_UL(12)              /* Service Request Node Enable Control Bit Pos. */
#define SRR          _GENERAL_UL(0x00002000)      /* Service Request Flag */
#define SRR_POS      _GENERAL_UL(13)              /* Service Request Flag Bit Position */
#define CLRR         _GENERAL_UL(0x00004000)      /* Clear Service Request Flag */
#define CLRR_POS     _GENERAL_UL(14)              /* Clear Service Request Flag Bit Position */
#define SETR         _GENERAL_UL(0x00008000)      /* Set Service Request Flag */
#define SETR_POS     _GENERAL_UL(15)              /* Set Service Request Flag Bit Position */


#endif
