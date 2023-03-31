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
 * $Filename__:pwmout_template_confpriv.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:template file$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MVA8COB$ 
 * $Date______:12.12.2013$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:pwmout_template_confpriv$ 
 * $Variant___:1.23.0$ 
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
 * 1.23.0; 0     12.12.2013 MVA8COB
 *   This FC is introduced for providing support for L9779 device in Pwm module.
 * 
 * 1.21.0; 0     31.07.2012 NNG1HC
 *   Updated for CJ960 new ASIC feature implementation
 * 
 * 1.20.0; 0     27.04.2012 KRN2COB
 *   Creating a new component TLE7244
 * 
 * 1.19.0; 1     31.10.2011 KRN2COB
 *   Changes to support FSCSPS
 * 
 * 1.19.0; 0     19.10.2011 TSE1KOR
 *   Changes to support powerstages of the U-Chip CJ721
 * 
 * 1.16.0; 0     28.10.2010 INTECKEN
 *   Support of new powerstage CJ950
 * 
 * 1.12.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmout_template_confpriv.ht
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PWMOUT_AUTO_CONFPRIV_H
#define _PWMOUT_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                          Pwmout - Pulse width modulated output signals.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "pcp.h"
#include "pcp_pramdef_auto_conf.h"






#include "cj950.h"









/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define PWMOUT_DEBUG_LEVEL (1)


#define PWMOUTLTC2FREQ_USED
#define PWMOUTLTC4COH_DC_USED
#define PWMOUTGTC2_USED
#define PWMOUTLTC5COH_USED



/* _LIBRARYABILITY_H                                                                              */
#endif

/* _PWMOUT_AUTO_CONFPRIV_H                                                                        */
#endif
