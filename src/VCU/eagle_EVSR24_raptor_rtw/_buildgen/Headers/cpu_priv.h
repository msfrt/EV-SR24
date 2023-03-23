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
 * $Filename__:cpu_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:26.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:cpu_priv$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     26.04.2010 AHT2FE
 *   Added TC_1793
 * 
 * 1.9.0; 0     24.11.2009 AWL2SI
 *   B_CPU.9.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPU_PRIV_H
#define _CPU_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Cpu module - private interface header
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* reference ERCOSEK resources only if monitoring functions are enabled */
#ifdef CPU_MONITORING_ENABLE

/* start and end address of context save area (from linker file) */
#define CPU_CSA_BEGIN  ((uint32)&__ASW_CSA_START)
#define CPU_CSA_END    ((uint32)&__ASW_CSA_END + 1UL)

/* calculate number of entries reserved for CSA */
#define CPU_NUM_CSA_ENTRIES ((CPU_CSA_END - CPU_CSA_BEGIN) >> 6UL)

/* pattern that identifies free CSA entries */
#define CPU_FREE_CSA_PATTERN    0x00000000UL

/* This macro calculates the effective address of a context save area entry          */
#define CPU_GET_EFF_CTX_ADDR(X) ( (((X) & 0x0000FFFFUL) << 6UL)  \
                                 |(((X) & 0x000F0000UL) << 12UL))


/* calculate number of used contexts */
/* MISRA RULE 45 VIOLATION: cast to integer is necessary here to access linker symbols */
#define CPU_NUM_CSA_USED        ((uint8)CPU_NUM_CSA_ENTRIES - Cpu_numCSAFree_u8)

/* calculate ratio in percent (internal representation is value in % * 655.36 */
#define CPU_CALC_RATIO(a,b)     (uint16)(((uint32)(a) << 16UL) / (uint32)(b))

/* number of reserved words for stack monitoring */
#define CPU_STACK_RESERVEDWORDS 2


/* Stack sizes from ERCOSEK */
#define CPU_SYS_STACK_SIZE   (os_stackMonitor.usedErcosekStackSpace)
#define CPU_SYS_STACK_MAXSIZE      (os_numberErcosekstackElements)

#define CPU_USER_STACK_SIZE  (os_stackMonitor.usedUserStackSpace)
#define CPU_USER_STACK_MAXSIZE     (os_numberUserstackElements)


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
 
/* allocation of context save area from linker command file */
MEMLAY_USE_LABEL(extern uint32,__ASW_CSA_START);
MEMLAY_USE_LABEL(extern uint32,__ASW_CSA_END);

typedef struct
{
    uint16 rCurUStackCons_u16;
    uint16 rCurSStackCons_u16;
    uint16 rCurCSACons_u16;
} Cpu_Mon_t;

MEMLAY_USE_ENVRAM(extern Cpu_NvMon_t, Cpu_NvMon_s);

__PRAGMA_USE__hwe__50ms_1s__RAM__s16__START
/* struct is accessed from background task */
extern Cpu_Mon_t Cpu_Mon_s;
__PRAGMA_USE__hwe__50ms_1s__RAM__s16__END

/* not really the best solution, but currently necessary to access OS structs */
#pragma section .sdata.erc_ram
extern const T_os_stackMonitor os_stackMonitor;
#pragma section

#pragma section .rodata.erc_rom
extern const uint16 os_numberErcosekstackElements;
#pragma section

#pragma section .rodata.erc_rom
extern const uint16 os_numberUserstackElements;
#pragma section

/* end of #ifdef block CPU_MONITORING_ENABLE */
#endif

#ifdef CPU_ENABLE_ERROR_INTERRUPTS

typedef struct
{
    uint8 ctFPUErr_u8;
    uint8 ctFPIErr_u8;
    uint8 ctLMBErr_u8;
#if(MACHINE_TYPE == TC_1793)    
    uint8 ctXBAR_Prot_Err_u8;
    uint8 ctXBAR_Sta_Err_u8;
    uint8 ctXBAR_TransID_Err_u8;
#endif
} Cpu_ErrStat_t;

__PRAGMA_USE__hwe__50ms_1s__RAM__s32__START
/* struct is accessed in case of critical error (e.g. bus error) only */
extern Cpu_ErrStat_t Cpu_ErrStat_s;
__PRAGMA_USE__hwe__50ms_1s__RAM__s32__END

/* end of #ifdef block CPU_ENABLE_ERROR_INTERRUPTS */
#endif

/* end of #ifdef block _CPU_PRIV_H */
#endif
