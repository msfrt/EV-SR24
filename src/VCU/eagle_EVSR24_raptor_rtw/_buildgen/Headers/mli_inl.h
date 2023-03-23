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
 * $Filename__:mli_inl.h$ 
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
 * $Name______:mli_inl$ 
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
 *      File name: mli_inl.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MLI_INL_H                                      /* protect multiple includes              */
#define _MLI_INL_H                                      /* obsolete when consolidation is ready   */



/**
 ***************************************************************************************************
 * moduledescription
 *               Inline functions of the Mli module.
 *
 * scope         API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes of inline functions
 ***************************************************************************************************
 */
/* The defines ;LI_MLI0_PRESENT and MLI_MLI1_PRESENT are built automatically at configuration
   script dependeing on the configured machine type.                                              */

#ifdef MLI_MLI0_PRESENT
static __inline__ void Mli_Read_MLI0(uint32 adWindow_u32, uint32 adRead_u32) __attribute__ (( always_inline ));
static __inline__ void Mli_Write_MLI0(uint32 adWindow_u32, uint32 adWrite_u32, uint32 xValue_u32) __attribute__ (( always_inline ));
#endif

#ifdef MLI_MLI1_PRESENT
static __inline__ void Mli_Read_MLI1(uint32 adWindow_u32, uint32 adRead_u32) __attribute__ (( always_inline ));
static __inline__ void Mli_Write_MLI1(uint32 adWindow_u32, uint32 adWrite_u32, uint32 xValue_u32) __attribute__ (( always_inline ));
#endif

/*
 ***************************************************************************************************
 * Inline function declarations
 ***************************************************************************************************
 */
/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/* Access macros for TPxBAR of MLI0 */
#ifdef MLI_MLI0_PRESENT
#define Mli_SetWinBase_MLI0(window, adBase, offset)                                         \
        do {                                                                                \
            MLI0.window = (adBase & 0xFFFFFFF0ul) | offset;                                 \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
              && (Reg_GetBit(MLI0, TRSTATR, TRSTATR_BAV) != FALSE));                        \
        } while (0)
#endif

/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/* Access macros for TPxBAR of MLI1 */
#ifdef MLI_MLI1_PRESENT
#define Mli_SetWinBase_MLI1(window, adBase, offset)                                         \
        do {                                                                                \
            MLI1.window = (adBase & 0xFFFFFFF0ul) |  offset;                                \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
              && (Reg_GetBit(MLI1, TRSTATR, TRSTATR_BAV) != FALSE));                        \
        } while (0)
#endif

/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/* Access macros for TCMDR of MLI0 */
#ifdef MLI_MLI0_PRESENT
#define Mli_WriteTCMDR_MLI0(cmd, value)                                                     \
        do {                                                                                \
            (*((uint8 volatile *) (((uint32)&MLI0.TCMDR) + cmd))) = value;              \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
               && (Reg_GetBit(MLI0, TRSTATR, TRSTATR_CV##cmd) != FALSE));                   \
        } while (0)
#endif

/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/* Access macros for TCMDR of MLI1 */
#ifdef MLI_MLI1_PRESENT
#define Mli_WriteTCMDR_MLI1(cmd, value)                                                     \
        do {                                                                                \
            (*((uint8 volatile *) (((uint32)&MLI1.TCMDR) + cmd))) = value;              \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
                    && (Reg_GetBit(MLI1, TRSTATR, TRSTATR_CV##cmd) != FALSE));              \
        } while (0)
#endif

/* Macro for access to MLI0 */
#ifdef MLI_MLI0_PRESENT
#define Mli_ReadPoll_MLI0(pipe)                                                             \
        do {                                                                                \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
                                                                                            \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
                    && (Reg_GetBit(MLI0, TRSTATR, TRSTATR_RP##pipe) != FALSE));             \
        } while (0)
#endif

/* Macro for access to MLI1 */
#ifdef MLI_MLI1_PRESENT
#define Mli_ReadPoll_MLI1(pipe)                                                             \
        do {                                                                                \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
                                                                                            \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
             && (Reg_GetBit(MLI1, TRSTATR, TRSTATR_RP##pipe) != FALSE));                    \
        } while (0)
#endif

/* Macro for access to MLI0 */
#ifdef MLI_MLI0_PRESENT
#define Mli_WritePoll_MLI0(pipe)                                                            \
        do {                                                                                \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
                                                                                            \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
            && (Reg_GetBit(MLI0, TRSTATR, TRSTATR_DV##pipe) != FALSE));                     \
        } while (0)
#endif

/* Macro for access to MLI1 */
#ifdef MLI_MLI1_PRESENT
#define Mli_WritePoll_MLI1(pipe)                                                            \
        do {                                                                                \
            Mli_tiStamp_u32 = Cpu_GetTIM0;                                                  \
            do                                                                              \
            {                                                                               \
                                                                                            \
            }while(((Cpu_GetTIM0 - Mli_tiStamp_u32) <= CPU_US_TO_TICKS(MLI_TIME_TO_WAIT))   \
            && (Reg_GetBit(MLI1, TRSTATR, TRSTATR_DV##pipe) != FALSE));                     \
        } while (0)
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Inline function for access to MLI0
 *
 ***************************************************************************************************
 */
#ifdef MLI_MLI0_PRESENT
static __inline__ void Mli_Read_MLI0(uint32 adWindow_u32, uint32 adRead_u32)
{
    volatile uint32 xValue_u32;
    xValue_u32 = *(uint32*)((adRead_u32 - MLI0.TCBAR) + adWindow_u32);
}
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Inline function for access to MLI1
 *
 ***************************************************************************************************
 */
#ifdef MLI_MLI1_PRESENT
static __inline__ void Mli_Read_MLI1(uint32 adWindow_u32, uint32 adRead_u32)
{
    volatile uint32 xValue_u32;
    xValue_u32 = *(uint32*)((adRead_u32 - MLI1.TCBAR) + adWindow_u32);
}
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macro for write access on a mli window for MLI0
 *
 ***************************************************************************************************
 */
#ifdef MLI_MLI0_PRESENT
static __inline__ void Mli_Write_MLI0(uint32 adWindow_u32, uint32 adWrite_u32, uint32 xValue_u32)
{
    volatile uint32* adWrite_pu32;
    adWrite_pu32 = (uint32*)((adWrite_u32 - MLI0.TCBAR) + adWindow_u32);
    *adWrite_pu32 = xValue_u32;
}
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macro for write access on a mli window for MLI1
 *
 ***************************************************************************************************
 */
#ifdef MLI_MLI1_PRESENT
static __inline__ void Mli_Write_MLI1(uint32 adWindow_u32, uint32 adWrite_u32, uint32 xValue_u32)
{
    volatile uint32* adWrite_pu32;
    adWrite_pu32 = (uint32*)((adWrite_u32 - MLI1.TCBAR) + adWindow_u32);
    *adWrite_pu32 = xValue_u32;
}
#endif

/* _MLI_INL_H                                                                                     */
#endif
