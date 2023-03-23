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
 * $Filename__:devlib_pwrstgstate_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:manual$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:CRA1KOR$ 
 * $Date______:28.05.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_pwrstgstate_inl$ 
 * $Variant___:1.144.0$ 
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
 * 1.144.0; 0     28.05.2012 CRA1KOR
 *   Warnings and errors removed.
 * 
 * 1.141.0; 0     11.11.2008 KLN1SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWRSTGSTATE_INL_H                       /* protect multiple includes              */
#define _DEVLIB_PWRSTGSTATE_INL_H                       /* obsolete when consolidation is ready   */
/**
 ***************************************************************************************************
 * \moduledescription
 *                      Inline header for variant is powerstage state evaluation
 *
 * \scope               [INTERN]
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Static variables
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */

#if (DEVLIB_PWRSTGSTATE_INLINE_ENABLE != 0)
    #define DEVLIB_PWRSTGSTATE_INLINE LOCAL_INLINE /*inline implementation for DevLib is  on */
#else
    #define DEVLIB_PWRSTGSTATE_INLINE                  /*inline implementation for DevLib is  off*/
#endif

/*
 ***************************************************************************************************
 * Function prototypes
 ***************************************************************************************************
 */


DEVLIB_PWRSTGSTATE_INLINE void DevLib_PsState_Var( uint16 *stPs );

DEVLIB_PWRSTGSTATE_INLINE void DevLib_PsState_IniVar( void );

/*
 ***************************************************************************************************
 * Defines used only in this file
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */
    DEVLIB_PWRSTGSTATE_INLINE void DevLib_PsState_Var( uint16 *stPs )
    {
       /* To avoid compiler varning */
       PARAM_UNUSED(stPs);
    }

/***************************************************************************************************
 * Inline function to initialize bits 6&7 of powerstage
 ***************************************************************************************************
*/
    DEVLIB_PWRSTGSTATE_INLINE void DevLib_PsState_IniVar( void )
    {
       return;
    }


#endif
