/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:compiler.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:RAT1COB$
 * $Date______:22.07.2010$
 * $Class_____:SWHDR$
 * $Name______:compiler$
 * $Variant___:1.14.0$
 * $Revision__:2$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 2     22.07.2010 RAT1COB
 *   Removing MISRA warnings
 * 
 * 1.14.0; 1     30.06.2010 MZT2FE
 *   Update
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _COMPILER_H
#define _COMPILER_H

/**
 ***************************************************************************************************
 * moduledescription
 *                     AUTOSAR Specific compiler macros  (HIGHTEC GNU Compiler)
 *
 * scope
 ***************************************************************************************************
 */

#include "compiler_cfg.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Version Info
 ***************************************************************************************************
 */
/* tag: COMPILER043 */
/*Vendor ID of the dedicated implementation of this module according to the AUTOSAR vendor list   */
#define COMPILER_VENDOR_ID 0xFFFF
/* Major version number of AUTOSAR specification                                                  */
#define COMPILER_AR_MAJOR_VERSION 1
/*Minor version number of AUTOSAR specification                                                   */
#define COMPILER_AR_MINOR_VERSION 0
 /*Patch level version number of AUTOSAR specification                                            */
#define COMPILER_AR_PATCH_VERSION 0

/*Major version number of the vendor specific implementation                                      */
#define COMPILER_SW_MAJOR_VERSION 3
/*Minor version number of the vendor specific implementation                                      */
#define COMPILER_SW_MINOR_VERSION 6
/*Patch level version number of the vendor specific implementation                                */
#define COMPILER_SW_PATCH_VERSION 9


/*
 ***************************************************************************************************
 * Definitions
 ***************************************************************************************************
 */

/* COMPILER046: Memory class AUTOMATIC is provided as empty definition for local declarations     */
#define AUTOMATIC

/* COMPILER049: Memory class _STATIC_ for static type                                             */
#define _STATIC_  static

/* COMPILER051: Definition of NULL pointer                                                        */
#ifndef NULL_PTR
 #define NULL_PTR  ((void *)0)
#endif

/* COMPILER060: Definition of LOCAL_INLINE                                                        */
#define LOCAL_INLINE static inline __attribute__ ((always_inline))

/*
 ***************************************************************************************************
 * Macros for Functions
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * COMPILER001: Macro for Declaration and definition of function.
 *
 * \param       rettype:  Return type of the function
 * \param       memclass: Classification of the function itself
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: The parameter should not be closed with () */
#define FUNC(rettype, memclass)  rettype

/**
 ***************************************************************************************************
 * COMPILER006: Macro for Declaration and definition of pointers in RAM, pointing to Variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer’s variable itself
 *                        (not used in 32bit system)
 * \param       ptrclass: Defines the classification of the pointer’s distance
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define P2VAR(ptrtype, memclass, ptrclass)   ptrtype *

/**
 ***************************************************************************************************
 * COMPILER013: Macro for Declaration and definition of pointers in RAM, pointing to Constants.
 *
 * \param       ptrtype:  Type of the referenced constant
 * \param       memclass: Classification of the pointer’s variable itself
 *                        (not used in 32bit system)
 * \param       ptrclass: Defines the classification of the pointer’s distance
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype  *

/**
 ***************************************************************************************************
 * COMPILER031: Macro for Declaration and definition of constant pointers accessing variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer’s constant itself
 *                        (not used in 32bit system)
 * \param       ptrclass: Defines the classification of the pointer’s distance
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define CONSTP2VAR(ptrtype, memclass, ptrclass)  ptrtype *const

/**
 ***************************************************************************************************
 * COMPILER032: Macro for Declaration and definition of constant pointers accessing constants.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer’s constant itself
 *                        (not used in 32bit system)
 * \param       ptrclass: Defines the classification of the pointer’s distance
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const

/**
 ***************************************************************************************************
 * COMPILER039: Macro for type definition of pointers to function.
 *
 * \param       rettype:  Return type of the function
 * \param       ptrclass: Defines the classification of the pointer’s distance
 *                        (not used in 32bit system)
 * \param       fctname:  Function name respectively name of the defined type
 * \return      None
 ***************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define P2FUNC(rettype, ptrclass, fctname)  rettype (*fctname)

/**
 ***************************************************************************************************
 * COMPILER023: Macro for declaration and definition of constants.
 *
 * \param       consttype: Type of the constant
 * \param       memclass:  Classification of the constant itself
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
#define CONST(type, memclass)  const type

/**
 ***************************************************************************************************
 * COMPILER026: Macro for declaration and definition of variables.
 *
 * \param       vartype:   Type of the variable
 * \param       memclass:  Classification of the variable itself
 *                        (not used in 32bit system)
 * \return      None
 ***************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define VAR(type, memclass)  type

#endif
