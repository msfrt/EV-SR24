
/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:cdgen.h$
 *
 * $Author____:BLF2SI$
 *
 * $Function__:main header for  DGS-target$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAJ2KOR$
 * $Date______:12.03.2013$
 * $Class_____:SWHDR$
 * $Name______:cdgen$
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
 * 2.5.0; 0     12.03.2013 DAJ2KOR
 *   Compiler independent version of CdGen.
 * 
 * 2.4.0; 0     03.01.2012 PRG2SI
 *   Removal MISRA warnings
 *   Compiler independent
 *   FC Restructuring
 *   Adaption to Srv 1.17.0
 * 
 * 2.3.0; 0     15.11.2011 PRG2SI
 *   Adaption to Srv 1.16
 *   
 *   Adaption to ASL 6.2.17
 * 
 * 1.0.0; 0     07.07.2009 BLF2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


/*************************************************************************/
/*                                                                       */
/*                                                                       */
/*            general header for code generated files                    */
/*                                                                       */
/*                                                                       */
/*************************************************************************/

#include "compiler.h"
#ifndef _CDGEN_H
#define _CDGEN_H

#ifndef true
#define true TRUE
#endif

#ifndef false
#define false FALSE
#endif

#ifndef __ASW_NAMES__
    #define __ASW_NAMES__
#endif

#ifndef INLINE_FUNCTION
   #define INLINE_FUNCTION LOCAL_INLINE
#endif

#include "codegen_srv.h"
#include "codegen_dsm.h"
#include "codegen_hwe.h"
#include "codegen_dedia.h"
#include "codegen_dia.h"
#include "codegen_bypass.h"
#include "codegen_sysc.h"
#include "codegen_measpnt.h"

#endif /* _CDGEN_H */
