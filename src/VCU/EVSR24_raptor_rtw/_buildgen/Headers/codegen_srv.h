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
 * $Filename__:codegen_srv.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAJ2KOR$
 * $Date______:27.06.2014$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv$
 * $Variant___:1.1.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.1.0; 0     27.06.2014 DAJ2KOR
 *   Removal of dT macro
 *   
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_H
#define _CODEGEN_SRV_H

/* Removed dT macro EBY-721*/

#include "srv.h"

#ifndef     MAXBYTE
#define     MAXBYTE         ((uint8)(0xFFu))
#endif

#ifndef     MINBYTE
#define     MINBYTE         ((uint8)(0x00u))
#endif

#include "codegen_srv_abs_limit.h"
#include "codegen_srv_abs_nolimit.h"
#include "codegen_srv_neg_limit.h"
#include "codegen_srv_neg_nolimit.h"
#include "codegen_srv_add_limit.h"
#include "codegen_srv_add_nolimit.h"
#include "codegen_srv_sub_limit.h"
#include "codegen_srv_sub_nolimit.h"
#include "codegen_srv_mul_limit.h"
#include "codegen_srv_mul_nolimit.h"
#include "codegen_srv_div_limit.h"
#include "codegen_srv_div_nolimit.h"
#include "codegen_srv_mulshright_limit.h"
#include "codegen_srv_mulshright_nolimit.h"
#include "codegen_srv_muldiv_limit.h"
#include "codegen_srv_muldiv_nolimit.h"
#include "codegen_srv_comparator.h"
#include "codegen_srv_counter.h"
#include "codegen_srv_delay.h"
#include "codegen_srv_memory.h"
#include "codegen_srv_misc.h"
#include "codegen_srv_nonlinear.h"
#include "codegen_srv_controller.h"
#include "codegen_srv_arithmetic.h"
#include "codegen_srv_bit.h"
#include "codegen_srv_logic.h"

#endif  /*#ifndef _CODEGEN_SRV_H*/
