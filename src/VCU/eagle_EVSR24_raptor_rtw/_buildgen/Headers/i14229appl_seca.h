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
 * $Filename__:i14229appl_seca.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229appl_seca$ 
 * $Variant___:3.3.0$ 
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
 * 3.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: i14229_seca
 *      Variant: 10.30
 *      Revision: 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef     I14229APPL_SECA_H_ModId
#define     I14229APPL_SECA_H_ModId                /* module identifier */


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
void I14229_SecA_1000ms(void);
/*{global_function_prototype...}*/

/* Extern declaration of functions */
extern void I14229_SecA_StartDelay_SendKey(uint32 tiDelay_u32);
extern uint32 I14229_SecA_GetDelay_SendKey(void);
/* Inline Functions                                                     */
/* ================                                                     */

/* Declarations of inline functions                                     */

/*{inline_function...}*/

#endif
