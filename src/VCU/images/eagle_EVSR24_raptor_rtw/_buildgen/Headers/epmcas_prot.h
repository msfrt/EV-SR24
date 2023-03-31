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
 * $Filename__:epmcas_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:27.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcas_prot$ 
 * $Variant___:1.23.0$ 
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
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   transfer of Epm.20.0.0 from CC to SDOM
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EPMCAS_PROT_H
#define _EPMCAS_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * protected header-file for camshaft. The variables and defines declared here could be used in
 * every EPM-file
 *
 * \scope               INTERN
 ***************************************************************************************************
 */
#include "epmcas_seg_dat.h" // this dat-file is necessary for system constants in *_prot.h and must be included before
#include "epmcas_adap_prot.h"                             
#include "epmcas_diag_prot.h"                     
#include "epmcas_ofsdiag_prot.h"                        
#include "epmcas_seg_prot.h"                      
#include "epmcas_segcor_prot.h"                         

#endif
