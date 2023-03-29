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
 * $Filename__:codegen_srv_logic.h$
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
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_logic$
 * $Variant___:1.0.0$
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
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_LOGIC_H
#define _CODEGEN_SRV_LOGIC_H

/*************************************************************************/
/* EXOR (for < V3.0)                                                     */
/*************************************************************************/

#define EXOR_U8_out(x, y)                        ((uint8) EXOR_IMPL_out(x, y))
#define EXOR_U16_out(x, y)                       ((uint16)EXOR_IMPL_out(x, y))
#define EXOR_U32_out(x, y)                       ((uint32)EXOR_IMPL_out(x, y))
#define EXOR_S8_out(x, y)                        ((sint8) EXOR_IMPL_out(x, y))
#define EXOR_S16_out(x, y)                       ((sint16)EXOR_IMPL_out(x, y))
#define EXOR_S32_out(x, y)                       ((sint32)EXOR_IMPL_out(x, y))

#define EXOR_IMPL_out(x, y)                      ((x) ^ (y))

/*************************************************************************/
/* XOR (for >= V3.0)                                                     */
/*************************************************************************/

/* Gueltig ab V3.0 */
#define XOR_U8_out(x, y)                         ((uint8) XOR_IMPL_out(x, y))
#define XOR_U16_out(x, y)                        ((uint16)XOR_IMPL_out(x, y))
#define XOR_U32_out(x, y)                        ((uint32)XOR_IMPL_out(x, y))
#define XOR_S8_out(x, y)                         ((sint8) XOR_IMPL_out(x, y))
#define XOR_S16_out(x, y)                        ((sint16)XOR_IMPL_out(x, y))
#define XOR_S32_out(x, y)                        ((sint32)XOR_IMPL_out(x, y))

#define XOR_IMPL_out(x, y)                       (((x)&&(!(y))) || ((!(x))&&(y)))

#endif  /*#ifndef _CODEGEN_SRV_LOGIC_H*/
