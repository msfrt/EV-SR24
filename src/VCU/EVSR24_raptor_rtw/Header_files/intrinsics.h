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
 * $Filename__:intrinsics.h$ 
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
 * $Name______:intrinsics$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: intrinsics.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

/*
 * intrinsics.h -- C interface for TriCore special machine instructions.
 *
 * Copyright (C) 1999 HighTec EDV-Systeme GmbH.
 *
 */

#ifndef __intrinsics_h
#define __intrinsics_h

/* Note: you must use a numerical constant here (not an integer variable),
   otherwise the assembler will issue an error message.  */
#define _bisr(intlvl) __bisr(intlvl)
#define __bisr(intlvl) asm volatile ("bisr "#intlvl : : : "memory")

/* Note: The parameter "regaddr" in the _mfcr and _mtcr macros may either
   be specified as a 16-bit constant or as a symbolic name (e.g., $psw).  */
#define _mfcr(regaddr) __mfcr(regaddr)
#define __mfcr(regaddr) \
  ({ int res; asm volatile ("mfcr %0,"#regaddr : "=d" (res) : : "memory"); res; })
#define _mtcr(regaddr,val) __mtcr(regaddr,val)
#define __mtcr(regaddr,val) \
  { int newval = (val); asm volatile ("mtcr "#regaddr",%0" : : "d" (newval) : "memory"); }

/* Note: you must use a numerical constant here (not an integer variable),
   otherwise the assembler will issue an error message.  */
#define _syscall(svcno) __syscall(svcno)
#define __syscall(svcno) asm volatile ("syscall "#svcno : : : "memory")

#define _disable() asm volatile ("disable" : : : "memory")
#define _enable() asm volatile ("enable" : : : "memory")
#define _debug() asm volatile ("debug" : : : "memory")
#define _isync() asm volatile ("isync" : : : "memory")
#define _dsync() asm volatile ("dsync" : : : "memory")
#define _rstv() asm volatile ("rstv" : : : "memory")
#define _rslcx() asm volatile ("rslcx" : : : "memory")
#define _svlcx() asm volatile ("svlcx" : : : "memory")
#define _nop() asm volatile ("nop")

#endif /* __intrinsics_h */
