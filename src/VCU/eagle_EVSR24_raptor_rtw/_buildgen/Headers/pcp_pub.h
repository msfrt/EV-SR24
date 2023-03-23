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
 * $Filename__:pcp_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Peripheral Control Processor$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:30.03.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pcp_pub$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pcp_pub.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PCP_PUB_H
#define _PCP_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Public header for the PCP module.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* PCP register offsets within channel context (base address = address of register R7) */
#define PCP_R0_OFFSET                   0x1C
#define PCP_R1_OFFSET                   0x18
#define PCP_R2_OFFSET                   0x14
#define PCP_R3_OFFSET                   0x10
#define PCP_R4_OFFSET                   0x0C
#define PCP_R5_OFFSET                   0x08
#define PCP_R6_OFFSET                   0x04
#define PCP_R7_OFFSET                   0x00

#define PCP_MAX_ARBTR_CYCLES            0x04UL          /* maximum number of arbitration cycles */

/** macro interface to read current state of PCP */
#define Pcp_GetState()                  (Pcp_stPcp_u32)

/* return values of Pcp_GetState() */
#define PCP_ST_INACTIVE                 0x01UL
#define PCP_ST_ACTIVE                   0x02UL
#define PCP_ST_ERROR                    0x04UL

/* macro to indicate that interface Pcp_Shutdown() is available */
#define PCP_SHUTDOWN_DEF                1


/**
 ***************************************************************************************************
 * PCP runtime measurement macros.
 *
 * These macros Pcp_RtmPrologue
 *              Pcp_RtmEpilogue
 *              Pcp_RtmDisableInt
 *              Pcp_RtmEnableInt
 * are designed for use with PCP mnemonics (pcp_mnemonics.h) and will not work in plain PCP code.
 * For use in plain PCP assembler use the following macros with exact the same functionality:
 *              Pcp_RtmPrologueAs
 *              Pcp_RtmEpilogueAs
 *              Pcp_RtmDisableIntAs
 *              Pcp_RtmEnableIntAs
 *
 * Required step before using PCP runtime measurement macros:
 * - Add following lines to your PCP function declaration:
 *      #include "cpu.h"
 *      static  uintp*  adSysTicks    = &Cpu_GetSysTicks();
 *      static  uintp   tiRunTimeTemp = 0;
 *      static  uintp   tiRunTime     = 0;
 *      static  uintp   tiRunTimePeak = 0;
 *      static  uintp   tiRunTimeMin  = 0x7FFFFFFF;
 *
 * Usage:
 * - Place Pcp_RtmPrologue directly after the BEGIN_PCP_CHAN macro.
 * - Place Pcp_RtmEpilogue directly before the 'exit' macro.
 *   Hint for channel resume mode (if applicable):
 *   In this case the runtime of the jump instruction after the exit to the channel start
 *   is not taken into consideration.
 * - One may use Pcp_RtmDisableInt and Pcp_RtmEnableInt to measure net ('netto') runtime of a
 *   PCP channel without interruption of channels with higher priority.
 * - If Pcp_RtmDisableInt and Pcp_RtmEnableInt are not used, one can check if the channel keeps
 *   to the required latency time (the measured time will include interruptions by other channels).
 * - Place Pcp_RtmDisableInt directly before Pcp_RtmPrologue.
 * - Place Pcp_RtmEnableInt directly after Pcp_RtmEpilogue.
 *
 * Check the PCP report (pcp_report.txt) for the location of the following PCP runtime measurement
 * result variables within PRAM:
 *     tiRunTime       holds the most recent runtime
 *     tiRunTimePeak   holds the maximum measured runtime
 *     tiRunTimeMin    holds the minimum measured runtime
 * the results are available in CPU system ticks.
 *
 * Register usage / macro parameters:
 * The PCP runtime measurement macros need to use two registers for their calculations. As macro
 * parameter (Prologue/Epilogue macros) give two different registers which contents may
 * be overwritten. Following rules must be fulfilled:
 * - do not give the same register twice (i.e. parameter1 != parameter2)
 * - the use of r7 is forbidden
 * - the registers used for Pcp_RtmPrologue and Pcp_RtmEpilogue may differ
 *
 ***************************************************************************************************
 */

#define Pcp_RtmPrologue(rega, regb)                                                                \
                                   ld_pi   (rega, adSysTicks)      /* load current system time  */ \
                                   ld_f    (regb, rega, 32)        /* load current system time  */ \
                                   st_pi   (regb, tiRunTimeTemp)   /* store timestamp to PRAM   */

#define Pcp_RtmEpilogue(rega, regb)                                                                \
                                   ld_pi   (rega, adSysTicks)      /* load current system time  */ \
                                   ld_f    (regb, rega, 32)        /* load current system time  */ \
                                   ld_pi   (rega, tiRunTimeTemp)   /* load prologue timestamp   */ \
                                   sub     (regb, rega, uc)        /* calculate runtime         */ \
                                   st_pi   (regb, tiRunTime)       /* store current runtime     */ \
                                   ld_i    (rega, tiRunTimePeak)   /* load tiRunTimePeak offset */ \
                                   comp_pi (regb, tiRunTimePeak)   /* new peak value?           */ \
                                   st_p    (regb, rega, sgt)       /* store if yes              */ \
                                   ld_i    (rega, tiRunTimeMin)    /* load tiRunTimeMin offset  */ \
                                   comp_pi (regb, tiRunTimeMin)    /* new minimum value?        */ \
                                   st_p    (regb, rega, slt)       /* store if yes              */

#define Pcp_RtmDisableInt          clr     (r7, PCP_R7_IEN_POS)    /* clear R7.IEN bit          */
#define Pcp_RtmEnableInt           set     (r7, PCP_R7_IEN_POS)    /* set R7.IEN bit            */


/*
 ***************************************************************************************************
 * PCP assembly implementation, for comments see the mnemonics comments
 ***************************************************************************************************
 */

/* MISRA RULE 19.10 VIOLATION: for assembler macros parameter can not be enclosed in () */
#define Pcp_RtmPrologueAs(rega, regb)                                                              \
                                   ld.pi   rega, adSysTicks;                                       \
                                   ld.f    regb, rega, size=32;                                    \
                                   st.pi   regb, tiRunTimeTemp

/* MISRA RULE 19.10 VIOLATION: for assembler macros parameter can not be enclosed in () */
#define Pcp_RtmEpilogueAs(rega, regb)                                                              \
                                   ld.pi   rega, adSysTicks;                                       \
                                   ld.f    regb, rega, size=32;                                    \
                                   ld.pi   rega, tiRunTimeTemp;                                    \
                                   sub     regb, rega, cc_uc;                                      \
                                   st.pi   regb, tiRunTime;                                        \
                                   ld.i    rega, tiRunTimePeak;                                    \
                                   comp.pi regb, tiRunTimePeak;                                    \
                                   st.p    regb, rega, cc_sgt;                                     \
                                   ld.i    rega, tiRunTimeMin;                                     \
                                   comp.pi regb, tiRunTimeMin;                                     \
                                   st.p    regb, rega, cc_slt

#define Pcp_RtmDisableIntAs        clr     r7, PCP_R7_IEN_POS_NDT
#define Pcp_RtmEnableIntAs         set     r7, PCP_R7_IEN_POS_NDT



/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* interface structure for PCP monitoring */
typedef struct
{
    uint32 xQuestion_u32;       /* store question here     */
    uint32 xAnswer_u32;         /* answer can be read here */
    uint32 xBuffer_u32;         /* internal use only       */
} Pcp_MonData_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__START
extern uint32 Pcp_stPcp_u32;
__PRAGMA_USE__hwe__1_5ms__InitRAM__x32__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern volatile Pcp_MonData_t Pcp_Mon_Data_s;
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Pcp_ErrorHandler_Proc(void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Pcp_Proc_Ini(void);
extern void Pcp_InitCsaR7(void);
extern void Pcp_Enable_Proc_IniEnd(void);
extern void Pcp_Load_Proc_IniEnd(void);
extern void Pcp_Load_Proc(void);
extern void Pcp_Mon_Ini(void);
extern void Pcp_Shutdown(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END


/* _PCP_PUB_H */
#endif
