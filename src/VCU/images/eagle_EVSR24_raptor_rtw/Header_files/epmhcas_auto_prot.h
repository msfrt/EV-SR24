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
 * $Filename__:epmhcas_template_prot.ht$ 
 * 
 * $Author____:NF72FE$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:16.10.2009$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:epmhcas_template_prot$ 
 * $Variant___:1.22.2$ 
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
 * 1.22.2; 0     16.10.2009 TUC2SI
 *   header fixed
 * 
 * 1.22.0; 0     15.07.2009 TUC2SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMHCAS_AUTO_PROT_H
#define _EPMHCAS_AUTO_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Automatically generated configuration headerfile of EPM module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */



#include REG_GPTA0_H
#include REG_GPTA1_H
#include REG_PORT_H
#include "pcp.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 *--------------------------------------------------------------------------------------------------
 * Configuartion of cam shaft system
 *--------------------------------------------------------------------------------------------------
 */
#define EPMHCAS_NUMBUFSIZE      16L
// Maximum trials to prepare buffer before function is left with an error state
#define EPMHCAS_MAXTRYPREBUF    100L


// Bit-Offset of camshaft-positions 
#define EPMHCAS_OFFSET_BP     16  

// Defines of bitpositions of CaS-level for CrS 
enum EpmHCaS_LevBP_t
{
    EPMHCAS_CAS_I1_LEV_BP    = 16
};




/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/**
 *--------------------------------------------------------------------------------------------------
 * Configuartion of cam shaft system
 *--------------------------------------------------------------------------------------------------
 */





#endif
