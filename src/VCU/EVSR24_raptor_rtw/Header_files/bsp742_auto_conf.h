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
 * $Filename__:bsp742_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIN4KOR$ 
 * $Date______:13.05.2010$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:bsp742_template_conf$ 
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
 * 1.7.0; 0     13.05.2010 VIN4KOR
 *   Misra Warning Removal
 * 
 * 1.6.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: bsp742_template_conf.ht
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _BSP742_AUTO_CONF_H
#define _BSP742_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Configuration of the BSP742 device driver module.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define BSP742_NUM_ICS  1
#define BSP742_NUMPWSTG 1



/**************************************************************************************************/
/* Configuration defines for the BSP742                                                           */
/**************************************************************************************************/


/**************************************************************************************************/
/* Extern definitions for the SwitchOff fucntions                                                 */
/**************************************************************************************************/
extern void Bsp742_Off_Dummy(bool i);
extern void Bsp742_Ppty_Dummy(uint16 x,uint16 y,bool i);
extern void Bsp742_Control_1_1 (bool xVal_b);               


#define BSP742_DIOSET_1_1(VAL)  PORT_DIOSET_P7_P5(VAL)       





/* _BSP742_AUTO_CONF_H                                                                            */
#endif
