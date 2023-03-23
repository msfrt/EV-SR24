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
 * $Filename__:epmhwe_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NF72FE$ 
 * $Date______:17.11.2008$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:epmhwe_template_conf$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     17.11.2008 NF72FE
 *   transfer of Epm.20.0.0 from CC to SDOM
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMHWE_AUTO_CONF_H
#define _EPMHWE_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduledescription   
 * Automatically generated configuration headerfile of EPMHWE module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 *--------------------------------------------------------------------------------------------------
 * Configuration of crank shaft system
 *--------------------------------------------------------------------------------------------------
 */

// Defines for GPTA
#define EPMHCRS_NUM_DCM                     3
#define EPMHCRS_NUM_GTC                     30
#define EPMHCRS_NUM_FPC_FILTER              4
#define EPMHCRS_NUM_FPC_PLAUS               5
#define EPMHCRS_GPTAX                       GPTA0
#define EPMHCRS_FALLING_EDGE                0
#define EPMHCRS_RISING_EDGE                 1
#define EPMHWE_STACTEDGE                    EPMHCRS_FALLING_EDGE
#define EPMHCRS_FPCCTR_PLAUS_AE             0x00280000
#define EPMHCRS_DCMCTR_RISING_EDGE          0x0017
#define EPMHCRS_DCMCTR_FALLING_EDGE         0x002A
#define EPMHCRS_DCMCTR_ACTIVE_EDGE          EPMHCRS_DCMCTR_FALLING_EDGE
#define EPMHCRS_DCMCTR_PASSIVE_EDGE         EPMHCRS_DCMCTR_RISING_EDGE
#define EPMHCRS_ANGLE_STAMP_RISING_EDGE     0x0411
#define EPMHCRS_ANGLE_STAMP_FALLING_EDGE    0x0421
#define EPMHCRS_ANGLE_STAMP_ACTIVE_EDGE     EPMHCRS_ANGLE_STAMP_FALLING_EDGE
#define EPMHCRS_ANGLE_STAMP_PASSIVE_EDGE    EPMHCRS_ANGLE_STAMP_RISING_EDGE


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

#endif

