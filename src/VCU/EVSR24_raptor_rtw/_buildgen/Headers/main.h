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
 * $Filename__:main.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Ford STBA project$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:main$ 
 * $Variant___:1.0.0$ 
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
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Migrated from Mx17 eASEE for DA Move VC4
 *   SWHDR : MAIN  NFD; 1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/*---------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------
 */

#ifndef _MAIN_H
#define _MAIN_H


/* _main should not be called by any C-module but only from the assembler startup */
/* define prototype in main_priv.h to make MISRA checker happy                    */
extern sint _main(void);

/* prototype temporarily defined only */
/* can be removed if patch of initSytemTimer is removed from main.c */
extern void initTimeTableRegister(void);


#endif





