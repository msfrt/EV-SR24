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
 * $Filename__:core_env_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:25.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:core_env_pub$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     25.08.2008 KLMEYER
 *   Initial import from Clearcase 
 *      File name: core_env_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CORE_ENV_PUB_H
#define _CORE_ENV_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public interface headerfile of component CORE_ENV
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* in order to ensure compatibility with SyC versions, tell SyC that Core shutdown */
/* and re-initialisation is handled by Core_Env */
#define CORE_ENV_SHUTDOWN

/* in order to ensure compatibility with SyC versions, tell SyC that prepare shutdown */
/* functionality is available in Core_Env */
#define CORE_ENV_PREPSHUTDOWN

/*
 ***************************************************************************************************
 * Function prototypes
 ***************************************************************************************************
 */

extern void Core_Env_PrepShutdown(void);
extern void Core_Env_Shutdown(void);
extern void Core_Env_ReInit(void);
extern bool Core_Env_ChkClkCstnc(void);

/* end of _CORE_ENV_PUB_H */
#endif
