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
 * $Filename__:cj135_inf.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:EGF2FE$ 
 * $Date______:28.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:cj135_inf$ 
 * $Variant___:1.2.0$ 
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
 * 1.2.0; 0     28.05.2010 EGF2FE
 *   Implementation of several improvements at the CJ135 device driver.
 *   - simplification at handling of writing data to register bank 
 *   - decrease of RAM resources for writing register bank
 *   - improvement of diagnosis functionality inside device driver
 *   - implementation of several minor review findings and test results
 *   - improvement of configuration by perl script (heater, interrupt, clock 
 *   connection)
 *   - preparation for support of 2 CJ135 devices (not complete)
 * 
 * 1.0.0; 0     23.10.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cj135_inf.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CJ135_INF_H
#define _CJ135_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "cj135.h"

#include "cj135_dat.h"

#include "spi.h"
#include "cpu.h"
#include "gpta.h"
#include "srvb.h"
#include "dio.h"
#include "pmd.h"

/* _CJ135_INF_H                                                                                   */
#endif
