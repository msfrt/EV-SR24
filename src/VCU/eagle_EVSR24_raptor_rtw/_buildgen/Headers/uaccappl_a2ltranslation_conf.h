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
 * $Filename__:uaccappl_a2ltranslation_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JAG2ABT$ 
 * $Date______:02.12.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:uaccappl_a2ltranslation_conf$ 
 * $Variant___:36.0.0$ 
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
 * 36.0.0; 0     02.12.2010 JAG2ABT
 *   Configuration for Ferrari,Maserati
 * 
 * 3.87.0; 0     07.06.2010 ALD2SI
 *   MED17.7.2 M270 Kennungen fuer Serienstand auf Basis VC4U2 (Test CB und 
 *   Flashen)
 * 
 * 3.8.0; 0     02.12.2008 DIB2SI
 *   Migration MoVE VC5:
 *     Identical to GS
 *     CONFIG : UACC  B_UACC.6.0.0_MED17752; 8
 *     CONFIG : UACCAPPL_FPRTHIST  1.10; 1
 *     CONFIG : UACCAPPL_ECUID_CONF  ME177.1.10_MED17752; 0
 * 
 * 3.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: uaccappl_a2ltranslation_conf
 *      Variant: MED17752
 *      Revision: 6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _UACCAPPL_A2LTRANSLATION_CONF_H
#define _UACCAPPL_A2LTRANSLATION_CONF_H

/***************************************************************************************************
Translate BOSCH's Name of a2l File to customers Name of a2l File.
Used for ExchangeID Service in CCP
Precondition: Following Compilerswitches are active (see CONFIG.MAK):
                      -DPROGRAMBEZ="\"$(PROGRAMNAME)\""
                      -D"PSTNAME_$(PROGRAMNAME)"
How to extended the translation list:
1. Copy the following template to the position right in front of the #else instruction
   ( see Comment ' Insertion Point ' )
2. Replace <RB_A2L_NAME> by the real Name of PST, resp. of hexfile
3. Replace <DC_A2L_NAME> by the corresponding customers a2l name / PST name.
   Length mustn't exceed 31 Byte!
4. Be happy :-)
*** Template:
#elif defined(PSTNAME_<RB_A2L_NAME>)
   #define  UACCAPPL_ECUID_A2L <DC_A2L_NAME>
*** End of Template
***************************************************************************************************/

#if defined(PSTNAME_17701_0300I)
   #define  UACCAPPL_ECUID_A2L "TEST PST"

#elif defined(PSTNAME_D177_80_0408S)
   #define  UACCAPPL_ECUID_A2L "4D34080000000"


/* *** Insertion Point: Insert new definitions above this Line   ***                              */
#else
   #define UACCAPPL_ECUID_A2L PROGRAMBEZ  /* No customer a2l file available=>
                                             take BOSCH's PST name for A2L Name */
#endif

/* Declaration of variable in flash for translation value */
#pragma section .sdata.rodata.a2lname as
extern const uint8 UAccAppl_EcuIDA2l[];
#pragma section

#endif
