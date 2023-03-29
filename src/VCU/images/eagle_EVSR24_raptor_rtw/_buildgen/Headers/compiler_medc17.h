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
 * $Filename__:compiler_medc17.h$
 * $Author____:MZT2FE$
 * $Function__:MEDC17 compiler.h for legacy.$
 * $Domain____:SDOM$
 * $User______:MZT2FE$
 * $Date______:25.06.2010$
 * $Class_____:SWHDR$
 * $Name______:compiler_medc17$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/
 

#ifndef _COMPILER_MEDC17_H
#define _COMPILER_MEDC17_H

/**
 ***************************************************************************************************
 * moduledescription
 *                     Compiler specific definitions
 *
 * scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifdef TASKING
/* compiler dependent names of builtin functions */
#define MTCR __mtcr
#define ISYNC __isync
#define Disable_Interrupts __disable
#define Enable_Interrupts __enable
#endif

#ifdef __GNUC__
/* intrinsic functions */
#include "intrinsics.h"
/* pragmas */
#include "gnu_pragma_conf.h"

/* compiler dependent names of builtin functions */
#define MTCR _mtcr
#define ISYNC _isync
#define Disable_Interrupts _disable
#define Enable_Interrupts _enable
#else
/* pragmas deactivated */
#include "gnu_pragma_default_conf.h"
#endif

/*
 ***************************************************************************************************
 * Compiler dependent macro for unused parameter to avoid compiler warnings.
 *
 * Usage:   PARAM_UNUSED(xNotUsed_u16)
 *
 *          for structures:
 *          PARAM_UNUSED(&xNotUsed_s)
 *
 ***************************************************************************************************
*/
#define PARAM_UNUSED(param) if ((param) != 0) {}

/*
 ***************************************************************************************************
 * Macro to initialize a global / static RAM variable with a constant value.
 *
 * This macro must only be used to initialize RAM variables with a constant value.
 * If [val] is zero, no initialization code is generated (as uninitialized variables are set to zero
 * during ECU startup by default).
 *
 * pseudo code:    IF (val != 0)
 *                 {
 *                     *x = val;
 *                 }
 *                 ELSE
 *                 {
 *                     *x = *x;   -> This will be optimized to "nothing" by compiler!
 *                 }
 *
 * Usage:       initValueRAM( 0,    &myGlobVar   );    -> no code is generated
 *              initValueRAM( 1234, &myStaticVar );    -> init code is generated
 *
 * Parameters:  val - constant value
 *              x   - address of variable in RAM (static or global)
 *
 ***************************************************************************************************
 */
#define initValueRAM(val, x)      ( *(x) = ((val) ? (val) : *(x)) )


/*
 ***************************************************************************************************
 * Macro to avoid Codecheck warnings.
 *
 * This macro is used only internally and helps to avoid codecheck warnings if compiler specific
 * interface __builtin_types_compatible_p is used.
 *
 * !!!Do not use this macro!!!
 *
 ***************************************************************************************************
 */
#define __builtin_types_compatible_p_misra(X,Y) (1)

#endif
