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
 * $Filename__:cpu_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:26.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:cpu_inf$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     26.04.2010 AHT2FE
 *   Added TC_1793
 * 
 * 1.9.0; 0     24.11.2009 AWL2SI
 *   B_CPU.9.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPU_INF_H
#define _CPU_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Cpu module - import header
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

/* interfaces of own component */
#include "cpu.h"

/* service library */
#include "srvb.h"

/* access to SB info structure */
#include "sb.h"

/* software reset interface */
#include "reset.h"

/* reference GPTA and PCP modules only if GPTA SRN demultiplexing is used */
#ifdef CPU_ENABLE_SRN_DEMUX
  #include "gpta.h"
  #include "pcp.h"
#endif

/* reference ERCOSEK resources only if stack/CSA monitoring functions are used */
#ifdef CPU_MONITORING_ENABLE
  /* ERCOSEK operating system interfaces */
  #include "os.h"
#endif

#include "reg.h"

/* debugger detection functionality needs CBS and CORE registers */
#include REG_CBS_H
#include REG_CORE_H

/* register files needed for error interrupt handling */
#if (MACHINE_TYPE == TC_1796)
  #include "dbcu_1796.h"
  #include "pbcu_1796.h"
  #include "rbcu_1796.h"
  #include "sbcu_1796.h"
  #include "dma_1796.h"
#elif (MACHINE_TYPE == TC_1793)
  #include REG_SBCU_H
  #include REG_DMA_H
  #include REG_XBAR_H
#else
  /* for all other machine types go here */
  #include REG_LBCU_H
  #include REG_SBCU_H
  #include REG_DMA_H
#endif

#ifndef _LIBRARYABILITY_H
  /* if DAMOS is available, include generated data header file */
  /* switch is defined in cpu_pub.h                            */
  #if (CPU_USE_DAMOS)
    #include "cpu_dat.h"
  #endif

  #ifdef CPU_PCP_AVL
    /* definitions for PCP PRAM access */
    #include "pcp_pramdef_auto_conf.h"
  #endif
#endif

/* end of #ifdef block _CPU_INF_H */
#endif

