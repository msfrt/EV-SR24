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
 * $Filename__:cdrv_memlay_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:cdrv_memlay_conf$ 
 * $Variant___:2.5.0$ 
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
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef     CDRV_MEMLAY_CONF_H_ModId
#define     CDRV_MEMLAY_CONF_H_ModId                /* module identifier */


/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
/*{system_constant_check...}*/

/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/

/* Define-Constants                                                     */
/* ================                                                     */

/*{constant_definition...}*/

/******************************************************************************/
/*                                                                            */
/* address modes possible                                                     */
/* #define NORM          1              allgemeine Adressierung  32 Bit       */
/* #define SMALL         3              relative   Adressierung  16 Bit       */
/*                                                                            */
/* #define ADRMODE SMALL   or   NORM                                          */
/*                                                                            */
/******************************************************************************/

#define ADRMODE SMALL



/* Macros Local To This Module                                          */
/* ===========================                                          */

/*{macro_definition...}*/

/* Exported RAM-Definitions                                             */
/* ========================                                             */

/* Definition of variables to be exported to other modules but not      */
/* relevant for application                                             */

/*{global_ram_definition...}*/

/* Imported RAM-Definitions                                             */
/* ========================                                             */

/* Declaration of variables to be imported from other modules but not   */
/* relevant for application                                             */

/*{extern_ram_definition...}*/

/* Global Prototypes                                                    */
/* =================                                                    */

/* Declarations (Prototypes) of functions                               */

/*{global_function_prototype...}*/

/* Inline Functions                                                     */
/* ================                                                     */

/* Declarations of inline functions                                     */

/*{inline_function...}*/

#endif
