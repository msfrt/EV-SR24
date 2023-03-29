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
 * $Filename__:pragma.h$ 
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
 * $Name______:pragma$ 
 * $Variant___:1.4.0$ 
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
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/* MISRA RULE 0883 VIOLATION: repeated inclusion is necessary  */

/****************************************************************************************/
/*                                                                                      */
/* The PRAGMA_UNUSED macro is used to know if the required pragma has been found or not */
/* If it hasn't been found, the compilation failed with the following message:          */
/* "Error: The file PRAGMA.H has been included, but no pragma was found"                */
/*                                                                                      */
/****************************************************************************************/

#define PRAGMA_UNUSED

/****************************************************************************************/
/*                                                                                      */
/*                              Project specific headers                                */
/*                        and overwritten plattform definitions                         */
/*                             * use with care !!! *                                    */
/*                                                                                      */
/****************************************************************************************/

#ifdef PRAGMA_UNUSED
    #include "PRAGMA_KUNDE.H"
#endif

/****************************************************************************************/
/*                                                                                      */
/*                  Standard Headers, as defined by the Plattform                       */
/*                                                                                      */
/****************************************************************************************/

#ifdef PRAGMA_UNUSED
    #include "STD_PRAGMA.H"
#endif

/****************************************************************************************/
/*                                                                                      */
/*                       Test: does the required Pragma exist ?                         */
/*                                                                                      */
/****************************************************************************************/

#ifdef PRAGMA_UNUSED
    #error "Error: The file PRAGMA.H has been included, but no pragma was found"
#endif

/* End Of File : no include after this test */
