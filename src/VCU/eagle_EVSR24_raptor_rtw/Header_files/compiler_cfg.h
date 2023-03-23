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
 * $Filename__:compiler_cfg.h$
 * $Author____:RMP2SI$
 * $Function__:Temporary provision of DCM for integration test$
 * $Domain____:SDOM$
 * $User______:KLMEYER$
 * $Date______:05.07.2010$
 * $Class_____:SWHDR$
 * $Name______:compiler_cfg$
 * $Variant___:1.14.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 1     05.07.2010 KLMEYER
 *   add RTA-OS memclass defines
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef COMPILER_CFG_H 
#define COMPILER_CFG_H  

/**
 ***************************************************************************************************
 * moduledescription
 *                     Compiler specific configuration
 *
 * scope               [API]
 ***************************************************************************************************
 */

/*
 *******************************************************************************
 *                      type defs                                             
 *******************************************************************************
*/

/*
The following type definitions are compiler specific.
These type definitions are used
for tasking intrinsic function
to be used in bit field structures.
This helps in avoding two MISRA complaints.
Rule 13 and Rule 111
*/

typedef signed int signed_int;

typedef unsigned int unsigned_int;



/*******************************************************************************
**                      Configuration data                                    **
*******************************************************************************/



/*
Compiler Specific Defines. 
*/

#define _TASKING_C_AudoF



/*
Tasking Keyword for Interrupt
*/

#define INTERRUPT __interrupt



/*
volatile keyword
*/

#define _VOLATILE_     volatile

/*

Inline keyword

*/

#define _INLINE_       inline

/*
extern keyword
*/

#define _EXTERN_       extern





/*
Tasking Intrinsic: move contents of the addressed core SFR into a data register
*/

#define MFCR(Reg) (__mfcr((Reg)))



/*
Tasking Intrinsic:  Move contents of a data register (Data) 
to the addressed core SFR (Reg)
*/

/*#define MTCR(Reg, Data) (__mtcr((Reg), (Data)))*/



/*
Tasking Intrinsic: Insert ISYNC Instruction
*/

/*#define ISYNC() (__isync())*/



/*
Tasking Intrinsic: Disable Global Interrupt Flag
*/

/*#define DISABLE() (__disable())*/



/*
Tasking Intrinsic: Enable Global Interrupt Flag
*/

/*#define ENABLE() (__enable())*/





/*******************************************************************************
** Macro Syntax : IMASKLDMST(Address, Value, Offset, Bits)                    **
**                                                                            **
** Parameters (in) :  Address: Address of the Variable to be Modified         **
**                    Value  : Value to be written                            **
**                    Offset : Bit Offset from LSB                            **
**                    Bits   : No of Bits Modified                            **
** Parameters (out):  None                                                    **
**                                                                            **
** Description    : IMASKLDMST is used to write atomic instructions in        **
**                  code.The function writes the number of bits of an integer **
**                  value at a certain address location in memory with a ...  **
**                  bitoffset. The number of bits must be a constant value... **
**                  Note that the Address must be Word Aligned.A direct type  **
**                  cast to "int"is needed to avoid Misra Violation           **
*******************************************************************************/

/*
Use of Atomic Write Intrinsic from Tasking. A direct type cast to "int"
is needed to avoid Misra Violation
*/

#define IMASKLDMST(address,val,offset,bits) \
                               ( __imaskldmst((signed_int*)(address),\
                                 (signed_int)(val),     \
                                 (signed_int)(offset),  \
                                 (signed_int)(bits)) )




/*******************************************************************************
** Macro Syntax : EXT_IMASKLDMST(Address, Value, Offset, Bits)                **
**                                                                            **
** Parameters (in) :  Address: Address of the Variable to be Modified         **
**                    Value  : Value to be written                            **
**                    Offset : Bit Offset from LSB                            **
**                    Bits   : No of Bits Modified                            **
** Parameters (out):  None                                                    **
**                                                                            **
** Description    : If the variable is placed out side 16K boundary then      **
**                  Normal IMASKLDMST will result in compiler error,          **
**                  The user should                                           **
**                  use the following EXTENDED IMASKLDMST macro.              **
*******************************************************************************/

/*
Example:
A variable TESTVAR should be set to value 10 from  bit number 3 to 6.
Case 1:

  uint32 TESTVAR;  assume the variable is located at 0xd0001000 
  IMASKLDMST(&TESTVAR,10,3,4);
  
	This will produce assembly instructions like
    imask	e0,#10,#3,#4
	ldmst	TESTVAR,e0

Case 2:
	
  Now if the variable is placed at outside 16K boundary
  uint32 TESTVAR __at(0xd0004000);

  Using IMASKLDMST will result in compile time error.
  So the user should use EXT_IMASKLDMST. The resulting
  assembly will be

  mov16	d15,#10
  movh.a	a15,#@his(TESTVAR)
  mov16	d0,#3
  lea	a15,[a15]@los(TESTVAR)
  imask e2,d15,d0,#4 
  ldmst [a15]0,e2

*/

#define EXT_IMASKLDMST(address,val,offset,bits) \
  do {                                                                    \
    register uint32 *EXT_IMASKLDMSTaddr = address;                                \
    register uint32 EXT_IMASKLDMSTval = val;                                 \
    register uint32 EXT_IMASKLDMSToffset = offset;                                 \
    __asm("  imask e2,%0,%1,#" #bits " \n ldmst [%2]0,e2" : : "d" (EXT_IMASKLDMSTval), "d" (EXT_IMASKLDMSToffset), "a" (EXT_IMASKLDMSTaddr) : "e2"); \
  } while(0)
 

/*******************************************************************************
** Macro Syntax : EXTRACT(value,pos,width)                                    **
**                                                                            **
** Parameters (in) :                                                          **
**                    Value  : Value to be extracted                          **
**                    pos : Bit Offset from LSB                               **
**                    Width   : No of Bits to be read                         **
** Parameters (out):  None                                                    **
** return value    : integer (extracted value)                                **
** Description    : EXTRACT is used to read value from a required position    **
**                  for the desired number of bits.                           **
**                  Reads the values in a single instruction when compared    **
**                  mask and loading the same                                 **
*******************************************************************************/

#define EXTRACT(value,pos,width)            (__extru((signed_int)(value), \
                                                    (signed_int)(pos), \
                                                    (signed_int)(width)))

/*******************************************************************************
** Macro Syntax : Mcal_CountLeadingZeros(Variable)                            **
**                                                                            **
** Parameters (in) :  Variable: variable whose leading zero needs to          **
**                              counted.                                      **
**                                                                            **
** Parameters (out):  None                                                    **
**                                                                            **
** Description     : Macro to Count Leading Zeros in a  variable. The tasking **
**                   intrinsic __clz is used for this purpose.                **
**                                                                            **
*******************************************************************************/

#define Mcal_CountLeadingZeros(Variable) ( __clz((signed_int)(Variable)))





/* 

 * The following memory and pointer classes can be configured per module.

 * Those defines are passed to the compiler abstraction macros in Compiler.h

 */



/*******************************************************************************

**                                 MCU                                        **

*******************************************************************************/

/*To be used for code*/

#define MCU_CODE



/*To be used for all global or static variables that are never initialized*/

#define MCU_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define MCU_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define MCU_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define MCU_VAR



/*To be used for global or static constants*/

#define MCU_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define MCU_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define MCU_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define MCU_APPL_CODE



/*******************************************************************************

**                                 PORT                                        *

*******************************************************************************/

/*To be used for code*/

#define PORT_CODE



/*To be used for all global or static variables that are never initialized*/

#define PORT_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define PORT_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define PORT_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define PORT_VAR



/*To be used for global or static constants*/

#define PORT_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define PORT_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define PORT_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define PORT_APPL_CODE



/*******************************************************************************

**                                 DIO                                        **

*******************************************************************************/

/*To be used for code*/

#define DIO_CODE



/*To be used for all global or static variables that are never initialized*/

#define DIO_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define DIO_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define DIO_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define DIO_VAR



/*To be used for global or static constants*/

#define DIO_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define DIO_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define DIO_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define DIO_APPL_CODE



/*******************************************************************************

**                                 ADC                                        **

*******************************************************************************/

/*To be used for code*/

#define ADC_CODE



/*To be used for all global or static variables that are never initialized*/

#define ADC_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define ADC_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define ADC_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define ADC_VAR



/*To be used for global or static constants*/

#define ADC_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define ADC_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define ADC_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define ADC_APPL_CODE



/*******************************************************************************

**                                 GPTA                                        *

*******************************************************************************/

/*To be used for code*/

#define GPTA_CODE



/*To be used for all global or static variables that are never initialized*/

#define GPTA_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define GPTA_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define GPTA_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define GPTA_VAR



/*To be used for global or static constants*/

#define GPTA_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define GPTA_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define GPTA_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define GPTA_APPL_CODE



/*******************************************************************************

**                                 GPT                                        **

*******************************************************************************/

/*To be used for code*/

#define GPT_CODE



/*To be used for all global or static variables that are never initialized*/

#define GPT_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define GPT_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define GPT_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define GPT_VAR



/*To be used for global or static constants*/

#define GPT_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define GPT_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define GPT_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define GPT_APPL_CODE



/*******************************************************************************

**                                 ICU                                        **

*******************************************************************************/

/*To be used for code*/

#define ICU_CODE



/*To be used for all global or static variables that are never initialized*/

#define ICU_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define ICU_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define ICU_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define ICU_VAR



/*To be used for global or static constants*/

#define ICU_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define ICU_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define ICU_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define ICU_APPL_CODE



/*******************************************************************************

**                                 PWM                                        **

*******************************************************************************/

/*To be used for code*/

#define PWM_CODE



/*To be used for all global or static variables that are never initialized*/

#define PWM_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define PWM_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define PWM_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define PWM_VAR



/*To be used for global or static constants*/

#define PWM_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define PWM_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define PWM_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define PWM_APPL_CODE



/*******************************************************************************

**                                 SPI                                        **

*******************************************************************************/

/*To be used for code*/

#define SPI_CODE



/*To be used for all global or static variables that are never initialized*/

#define SPI_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define SPI_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define SPI_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define SPI_VAR



/*To be used for global or static constants*/

#define SPI_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define SPI_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define SPI_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define SPI_APPL_CODE



/*******************************************************************************

**                                 CAN                                        **

*******************************************************************************/

/*To be used for code*/

#define CAN_CODE



/*To be used for all global or static variables that are never initialized*/

#define CAN_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define CAN_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define CAN_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define CAN_VAR



/*To be used for global or static constants*/

#define CAN_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define CAN_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define CAN_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define CAN_APPL_CODE


/*******************************************************************************

**                                 NMV                                         *

*******************************************************************************/

/*To be used for code*/

#define NVM_CODE


/*To be used for global or static variables that are initialized after every 

reset.*/

#define NVM_VAR



/*To be used for global or static constants*/

#define NVM_CONST


/*******************************************************************************

**                                 FEE                                         *

*******************************************************************************/

/*To be used for code*/

#define FEE_CODE

/*To be used for global or static variables that are initialized after every 

reset.*/

#define FEE_VAR



/*To be used for global or static constants*/

#define FEE_CONST



/*******************************************************************************

**                                 DET                                         *

*******************************************************************************/

/*To be used for code*/

#define DET_CODE



/*To be used for all global or static variables that are never initialized*/

#define DET_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define DET_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define DET_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define DET_VAR



/*To be used for global or static constants*/

#define DET_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define DET_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define DET_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define DET_APPL_CODE

/*******************************************************************************

**                                 WDG                                        **

*******************************************************************************/

/*To be used for code*/

#define WDG_CODE



/*To be used for all global or static variables that are never initialized*/

#define WDG_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define WDG_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define WDG_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define WDG_VAR



/*To be used for global or static constants*/

#define WDG_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define WDG_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define WDG_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define WDG_APPL_CODE



/*******************************************************************************

**                                 CANTRCV                                     *

*******************************************************************************/

/*To be used for code*/

#define CANTRCV_CODE



/*To be used for all global or static variables that are never initialized*/

#define CANTRCV_VAR_NOINIT 



/*To be used for all global or static variables that are initialized only after power on reset*/

#define CANTRCV_VAR_POWER_ON_INIT 



/* To be used for all global or static variables that have at least one of the 

following properties:

-accessed bitwise

-frequently used

-high number of accesses in source code*/

#define CANTRCV_VAR_FAST 



/*To be used for global or static variables that are initialized after every 

reset.*/

#define CANTRCV_VAR



/*To be used for global or static constants*/

#define CANTRCV_CONST



/*To be used for references on application data (expected to be in RAM or ROM) passed via API*/

#define CANTRCV_APPL_DATA



/*To be used for references on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API*/

#define CANTRCV_APPL_CONST



/*To be used for references on application functions. (e.g. call back function pointers)*/

#define CANTRCV_APPL_CODE



/* memclass and ptrclass macros for OS */
#define OS_CODE               /* not required */ /* Code */
#define OS_CONST              /* not required */ /* Global or static constants. */
#define OS_APPL_DATA          /* not required */ /* References on application data (expected to be in RAM or ROM) passed via API. */
#define OS_APPL_CONST         /* not required */ /* References on application constants (expected to be certainly in ROM, for instance pointer of Init-function) passed via API */
#define OS_APPL_CODE          /* not required */ /* References on application functions. (e.g. call back function pointers) */
#define OS_VAR_NOINIT         /* not required */ /* Globals or statics which are never initialized. */
#define OS_VAR_POWER_ON_INIT  /* not required */ /* Globals or statics which are initialized after PO reset. */
#define OS_VAR_FAST           /* not required */ /* Globals or statics which require fast or bitwise access. */
#define OS_VAR                /* not required */ /* Globals or statics which are initialized after every reset. */


#endif /* COMPILER_CFG_H */

