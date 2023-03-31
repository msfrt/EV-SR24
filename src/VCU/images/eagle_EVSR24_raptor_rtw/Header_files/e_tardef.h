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
 * $Filename__:e_tardef.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:29.09.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_tardef$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     29.09.2009 AWL2SI
 *   B_OS.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/**************************************************************************************************
 *  FILE:           E_TARDEF.H
 *
 *  DESCRIPTION:    target specific definitions - external visible
 *
 *  AUTHOR:         ETAS/PSC1-Sz
 *
 *  CREATED:        24.01.2003            11:00:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 

 History:
 --------

who when         call        what
---------------------------------------------------------------------------------------------------
Sz  24.01.2003  42628        moved to line 03c and created a seperate file for each function
Sz  27.01.2003  46417        Support of TC1796
Vr  27.02.2003  42695        DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Sz  18.03.2003  42695        no os_ in front of ISR macro function
Vr  17.04.2003  xxxxx        Added macro SYSTEM_TIME_HIGH
Sz  20.05.2003  48213        DD002 Error Handling implement OSEK conformant check for maxallowedvalue
Sz  27.05.2003  48213        reset constant OSMAXALLOWEDVALUE to old value
Vr  17.06.2003  xxxxx        DD006 ShutdownOS Added Empty MACROs to enable Compilation
Vr  21.07.2003  xxxxx        DD006 ShutdownOS Moved MACROS to intdef.h
Ry  28.08.2003 	xxxxx        DD201 Global variable instead of config-data record
Ry  05.09.2003	xxxxx	     DD110 Prescaler!=1 available
Sz  02.10.2003  xxxxx        DD112 Compensation in SetAbsAlarm for SystemTime does not start at 
                             init, but at reset.
Sz  06.10.2003   xxxxx       DD112 Compensation in SetAbsAlarm for SystemTime does not start at 
                              init, but at reset.                        
Vr  20.10.2003  xxxxx        Remove _proc from ISR
Sz  12.11.2003  51363        Review on TriCore,DD011 Clearify FAR, NEAR added __indirect to fast_code
                             to make it locatable in internal SPRAM.
Sz  24.11.2003  51600        Added newline at the end of the file                      
Ajs 08.12.2003  xxxxx        Added #ifndef to avoid warnings from GNU Compiler 
Ry  09.12.2003  DD111        Inline OSEK APIs.OSEK API Inline Functions should be callable from external
       					     object code as well
Ry  01.01.2004  51783        Suspend/ResumeAllInterrupts as Macro/Inline  
Ry  04.03.2004  53583        SuspendAllInterrupt as inline function cross effects on other target      					     
Ry  11.03.2004  53583        SuspendAllInterrupt as inline function cross effects on other target.Removed
                             macro TRICORE_G 
Ry  26.05.2004  80069DD001   MISRA mark ERCOSEK headers.
                             MISRA RULE VIOLATION: Warning 620 Suspicious constant L or one.
                             [Classified:Mistake].Replaced l with L in macro SYSTEM_TICK_DURATION_P 
Ry  26.05.2004  80069DD001   MISRA mark ERCOSEK headers.
                             MISRA RULE 18 VIOLATION: Numerical constant requires suffix.
                             [Classified:Mistake].Added suffix for macro definition OSMAXALLOWEDVALUE
Ry  11.06.2004  55197        Missing macro NO_SOURCE_INLINE in SuspendAllInterrupts as inline function
                             implementation
Vr  12.06.2004  54014	     Const variable in RAM
Ry  28.06.2004  80069DD001   MISRA mark ERCOSEK headers.
                             Added error inhibition options for MISRA VIOLATIONs Rule 20,Rule 53.
Sz  23.07.2004  52996        Added optimisation for calling ISRs
JSR 2004.12.09  56929        Added conditional code for advanced/tick-based timer calculations
Ry  21.12.2004  80069DD003   MISRA mark ERCOSEK Kernel.
                             MISRA RULE 13 VIOLATION: Note 970: Use of modifier or type 'unsigned'
                             outside of a typedef.[Classified:Mistake].
Ry  21.12.2004  80069DD003   MISRA mark ERCOSEK Kernel.
                             MISRA RULE 98 VIOLATION:  Note 960: Violates  Multiple use of '#/##' 
                             operators in macro definition.[Classified:Deliberate].Added comment.
                             MISRA RULE 13 VIOLATION: Note 970: Use of modifier or type 'unsigned'
                             outside of a typedef.[Classified:Mistake].Replaced unsigned int with 
                             T_os_uint
Ry  2005.07.29  61489        Short addressing causes Linker errors
R   2005.08.19  xxxxx        Added macro OS_VERSION_LABEL
JSR 2009.05.15  86611        Use of resources leads to missing task dispatches
*/

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */
/* Don't run lint checking over Compiler supplied header file. */ 
/*lint -save -e* */
#include <intrinsics.h>
/*lint -restore */
/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */
 
#ifndef __E_TARDEF_H
#define __E_TARDEF_H

#define OS_VERSION_LABEL           "V4.3.12"
#define OS_CONST
#define OS_CONST_CODGEN     const
/* Infineon controller use little endian byte ordering */
#define OS_HIGH_BYTE_FIRST              0
#define OS_LIN_ADDRESS_SPACE            1
/* number of general purpose registers */
#define OS_GPR_NUM                      16

/* define number of processor interrupt levels */
#define OS_INT_LEVELS                   255

/* code generation specific definitions */
#define OS_FAR                                   
#define OS_NEAR                            
#define OS_VOLATILE                     volatile

#define NO_CFG_PTR

#define OSMAXALLOWEDVALUE               (0x80000000u)
#define OSMINCYCLE                      (MICROSECONDS_TO_TICKS_VAR(100))

/* define for OSEK compatibility */                                         
#define INITIAL_INTERRUPT_DESCRIPTOR    ((IntDescriptorType)0x0000)

/* ASD extension of task monitor structure */
#define OS_ASD_MONITOR_ELEMENTS

/* Correction for MPC56x only */
#define OS_PLUSMPC56xOFFSET

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

#define STACK_CODE_SYNC  __asm__ volatile ("":::"memory");

#ifndef		OS_ADVANCED_TIMER_CALCULATION
#define		OS_ADVANCED_TIMER_CALCULATION	(1)
#endif

/* system tick duration in nano seconds (equals to the mod_clk cycle time) */
#define SYSTEM_TICK_DURATION_P(inputFreq,prescaler) (( (TickType)(prescaler)*1000000uL) \
                                                                / (TickType)inputFreq)

#if		OS_ADVANCED_TIMER_CALCULATION == 0

#define TICKS_TO_MICROSECONDS(ticks)    (TickType)(((ticks) * SYSTEM_TICK_DURATION) / 1000)

#define TICKS_TO_MICROSEC_P(ticks,inputFreq,prescaler)              \
                ((TickType)((ticks * SYSTEM_TICK_DURATION_P(inputFreq,prescaler)) / 1000))
#else

#define TICKS_TO_MICROSECONDS(ticks)    (TickType)(((ticks) * 1000uL * PRESCALER) / INPUT_FREQ)

#define TICKS_TO_MICROSEC_P(ticks,inputFreq,prescaler)  ((TickType)((ticks) * 1000uL * os_prescaler) / os_inputFreq))
#endif		/* OS_ADVANCED_TIMER_CALCULATION == 0 */

#define SYSTEM_TIME_LOW             GetSystemTimeLow()
#define SYSTEM_TIME_HIGH            GetSystemTimeHigh()

#define SUSPEND_LS_INTERRUPTS       os_suspend_interrupts(os_lsIntMask);
#define SUSPEND_HS_INTERRUPTS       os_suspend_interrupts(os_hsIntMask);
#define SUSPEND_ALL_INTERRUPTS      os_suspend_interrupts(0xFF);

#define RESUME_INTERRUPTS           os_resume_interrupts();

#define ENABLE_USER_ISR(x)          { (x) |=  0x00001000  /* set bit SRE (Service Request Enable) */; }
#define DISABLE_USER_ISR(x)         { (x) &= ~(0x00001000 /* clear bit SRE (Service Request Enable) */); }
#define CLEARPEND_USER_ISR(x)       { (x) |=   0x00004000 /* CLRR (CLeaR Request) */; }

#define ISR( name )                 void isr_##name( void )
/* MISRA RULE 98 VIOLATION:Note 960: Violates  Multiple use of '#/##' operators in macro definition.
                                     [Classified:Deliberate]. ## is used for generation of ISR 
                                     prototype which is more efficient for ISR's */
/*lint -e960 */
#define SMALL_ISR( name )           void isr_##name##_uses_JL ( void )  __attribute__ ((interrupt_handler)); \
									void isr_##name##_uses_JL ( void )
/*lint -restore*/

/* MISRA RULE 20 VIOLATION:Error 40: Undeclared identifier 'asm' 
   MISRA RULE 53 VIOLATION:Warning 522: Expected void type, assignment,increment or decrement 
   MISRA RULE VIOLATION   :Error 123: Macro 'asm' defined with arguments at location unknown --
                                      this is just a warning
   						   Error 10: Expecting ';'.
   						   [Classified:Deliberate].Lint does not understand keywords 
   						   asm volatile(..) in macro definition included from  
   						   GNU Toolchain provided header file intrinsics.h */    		 
#define OS_GENERATE_NOPS            /*lint -e123 -e522 -e40 -e10*/  _nop() /*lint -restore*/; \
                                    /*lint -e123 -e522 -e40 -e10*/  _nop() /*lint -restore*/;

/* TriCore specific macro to compensate that SytemTime start at reset and not at initSystemTimer */
#define OS_PLUS_START_TIME_TRICORE +os_SystemTimeTriCoreInit

#ifndef ESCAPE_PARSER
   #define OS_PREFIX_FOR_FAST_FUNCS
#endif

/* To enable declarations for the functions SuspendAllInterrupts() and ResumeAllInterrupts()*/
#define NO_SOURCE_INLINE

/* Macros for short addressing mechanism */
#ifndef SMALL_ADDRESSABLE_DATA 
   #define __LOCATE_IN(SECTION) 
#else
 #ifndef ANSI_C_CHECK
   #ifndef  ESCAPE_PARSER
     /* macros for locating items in specific sections */
	 #define __LOCATE_IN(SECTION)          __LOCATE_IN_##SECTION
     #define __LOCATE_IN_ERC_ROM	   __attribute__ ((asection(".rodata.erc_rom")))
	 #define __LOCATE_IN_ERC_COC       __attribute__ ((asection(".rodata.erc_coc")))
	 #define __LOCATE_IN_BSS_A1		   __attribute__ ((asection(".bss.a1")))
	 #define __LOCATE_IN_BSS_A4		   __attribute__ ((asection(".bss.a4")))
   #endif   /* ESCAPE_PARSER */
 #endif	 /* ANSI_C_CHECK */
#endif

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

typedef struct gptu
{
        volatile T_os_uint CLC;              /* GPTU Clock Control Register (E) */
        volatile T_os_uint RESERVED0[1];     /* Reserved */
        volatile T_os_uint ID;               /* GPTU Identification Register (R) */
        volatile T_os_uint RESERVED1[1];     /* Reserved */
        volatile T_os_uint T01IRS;           /* Timers T0, T1 Input and Reload Source Selection Register */
        volatile T_os_uint T01OTS;           /* Timers T0, T1 Output, Trigger and Service Request Register */
        volatile T_os_uint T2CON;            /* Timer T2 Control Register */
        volatile T_os_uint T2RCCON;          /* Timer T2 Reload / Capture Control Register */
        volatile T_os_uint T2AIS;            /* Timer T2 / T2A External Input Selection Register */
        volatile T_os_uint T2BIS;            /* Timer TB2 External Input Selection Register */
        volatile T_os_uint T2ES;             /* Timer T2 External Input Edge Selection Register */
        volatile T_os_uint OSEL;             /* GPTU Output Source Selection Register */
        volatile T_os_uint OUT;              /* GPTU Output Register */
        volatile T_os_uint T0DCBA;           /* Timer T0 Count Register (T0D, T0C, T0B, T0A) */
        volatile T_os_uint T0CBA;            /* Timer T0 Count Register (T0C, T0B, T0A) */
        volatile T_os_uint T0RDCBA;          /* Timer T0 Reload Register (T0D, T0C, T0B, T0A) */
        volatile T_os_uint T0RCBA;           /* Timer T0 Reload Register (T0C, T0B, T0A) */
        volatile T_os_uint T1DCBA;           /* Timer T1 Count Register (T1D, T1C, T1B, T1A) */
        volatile T_os_uint T1CBA;            /* Timer T1 Count Register (T1C, T1B, T1A) */
        volatile T_os_uint T1RDCBA;          /* Timer T1 Reload Register (T1D, T1C, T1B, T1A) */
        volatile T_os_uint T1RCBA;           /* Timer T1 Reload Register (T1C, T1B, T1A) */
        volatile T_os_uint T2;               /* Timer T2 Count Register */
        volatile T_os_uint T2RC0;            /* Timer 2 Reload / Capture Register 0 */
        volatile T_os_uint T2RC1;            /* Timer 2 Reload / Capture Register 1 */
        volatile T_os_uint T012RUN;          /* Timer T0, T1, T2 Run Control Register */
        volatile T_os_uint RESERVED2[30];    /* Reserved */
        volatile T_os_uint SRSEL;            /* GPTU Service Request Source Select Register */
        volatile T_os_uint SRC7;             /* GPTU Service Request Control Register 7 */
        volatile T_os_uint SRC6;             /* GPTU Service Request Control Register 6 */
        volatile T_os_uint SRC5;             /* GPTU Service Request Control Register 5 */
        volatile T_os_uint SRC4;             /* GPTU Service Request Control Register 4 */
        volatile T_os_uint SRC3;             /* GPTU Service Request Control Register 3 */
        volatile T_os_uint SRC2;             /* GPTU Service Request Control Register 2 */
        volatile T_os_uint SRC1;             /* GPTU Service Request Control Register 1 */
        volatile T_os_uint SRC0;             /* GPTU Service Request Control Register 0 */
} GPTU;

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */
/*#ifndef is required to avoid GNU compiler warnings as declaration already exists into e_intern.h file.*/
#ifndef __E_INTERN_H
extern volatile T_os_uint                os_dpp0Ini;
extern volatile T_os_uint                os_dpp2Ini;
#endif
/* when locating the application, the user can choose the base addresses of the TriCore modules
used by ERCOSEK. This is done by assigning the address to the corresponding make- file variable
in target_settings.mk */

/* section information required for short addressing in TriCore GNU compiler */
#pragma section .zdata.absolute
extern volatile T_os_uint   			 SC_INT_ADR;		   /* scheduling interrupt control register address defined during linking*/
extern volatile T_os_uint   			 STM_BASE_ADR;		   /* System control unit base- address defined during linking*/    
extern volatile T_os_uint                SCU_BASE_ADR;         /* System control unit base- address defined during linking*/    
extern volatile T_os_uint                GPTU_BASE_ADR;		   /* GPTU base base- address defined during linking*/

extern volatile T_os_uint                ALARM_SRC_ADR;           /* Timeout base base- address defined during linking */
extern volatile T_os_uint                TIMETABLE_SRC_ADR;       /* TimeTable base base- address defined during linking */
extern volatile T_os_uint                SYSTEM_TIME_REGISTER_TC; /* System Timer counter - address defined during linking depending on  prescaler */
#pragma section


extern T_os_uint                         os_SystemTimeTriCoreInit;

/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */
void  os_unprotect_wdcon(void);
void  os_protect_wdcon(void);
void  os_init_SCHED_INT(void);
void  os_initAlarmTimerRegister(void);
void  os_initTimeTableRegister(void);
void  EnableAllInterrupts(void);
void  DisableAllInterrupts(void);


#endif /* __E_TARDEF_H */

/***************************************************************************************/
