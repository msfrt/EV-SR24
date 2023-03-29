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
 * $Filename__:epmhwe_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:TSL2FE$
 * $Date______:02.09.2013$
 * $Class_____:SWHDR$
 * $Name______:epmhwe_prot$
 * $Variant___:1.35.0$
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
 * 1.35.0; 0     02.09.2013 TSL2FE
 *   Correction of Header-File-Concept
 * 
 * 1.33.0; 0     09.05.2012 OMO2FE
 *   header concept restructuring for polarity check.
 * 
 * 1.22.2; 0     16.10.2009 TUC2SI
 *   header fixed
 * 
 * 1.22.0; 0     20.07.2009 LDB2FE
 *   This version is created by migration tool
 * 
 * 1.18.1; 0     04.11.2008 MAH5COB
 *   Initial import from Clearcase 
 *      File name: epmhwe_prot.h
 *      Version: \main\basis\b_Epm\12
 * 
 * 1.18.0; 0     31.07.2008 NESTORADMINSDOM
 *   EPM 18 migrated from CC
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHWE_PROT_H
#define _EPMHWE_PROT_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "cpu.h"
#include "epmhspc_check_prot.h"
#include "epmhcas_prot.h"
#include "epmhcrs_prot.h"
#include "epmhint_prot.h"


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* MISRA RULE 90,93 VIOLATION: macro neeeds less ressources */
/**
 * The macro calculate the index of last array element.
 * The calculation occur during the compile time.
 */
#define LAST( array)  ((sizeof((array)) / sizeof((array)[0])) - 1UL)
/**
 * The macro calculate the index of last array element.
 * The calculation occur during the compile time.
 */
#define SIZE( array)  (sizeof((array)) / sizeof((array)[0]))


/**
 * Compiler switch EPMHWE_RTM_SY for EpmHwe Run Time Measuerement.
 * 0 - deactivated (no extra code).
 * 1 - activated.
 */

#if   (EPMHWE_RTM_SY == 1)    // EpmHwe Run Time Measurement activated
/**
 * Macro: Time Start.
 * The macro read System Timer and save the current time as start value for Run Time Measurement.
 * The timer value is put into an array at the position determinate by idx.
 * After store the index will be incremented.
 */
#define EPMHWE_TI_STRT(member)                                                                   \
                          if (EpmHwe_Rtm.member.idx < LAST(EpmHwe_Rtm.member.tiStrt))            \
                          {                                                                      \
                              EpmHwe_Rtm.member.idx++;                                           \
                          }                                                                      \
                          else                                                                   \
                          {                                                                      \
                              EpmHwe_Rtm.member.idx = 0;                                         \
                          }                                                                      \
                          EpmHwe_Rtm.member.tiStrt[EpmHwe_Rtm.member.idx] = Cpu_GetTIM0

#define EpmHwe_ti_strt(member)                                                                   \
                          asm(                                                                   \
                          "ldl.iu  R4, %0           /* R4 = &Epm_Rtm */                         ;\
                           ldl.il  R4, %0                                                       ;\
                           ldl.iu  R3, %1           /* R3 = STRUCT_OFFS(Epm_Rtm_t, member) */   ;\
                           ldl.il  R3, %1                                                       ;\
                           add     R4, R3, cc_UC    /* R4 = &Epm_Rtm.member */                  ;\
                           ld.if  [R4],%2, Size=32  /* R0 = Epm_Rtm.member.idx */               ;\
                           ldl.iu  R3, %5           /* R3 = LAST(Epm_Rtm.member.tiStrt) */      ;\
                           ldl.il  R3, %5                                                       ;\
                           comp    R3, R0, cc_UC                                                ;\
                           jc      1f, cc_Z         /* if (idx = LAST()) {jump} */              ;\
                           add.i   R0, 1            /* idx++ */                                 ;\
                           jc      2f, cc_UC                                                    ;\
                       1:  ld.i    R0, 0            /* idx = 0 */                               ;\
                       2:  st.if  [R4],%2, Size=32  /* Epm_Rtm.member.idx = R0 */               ;\
                           shl     R0, 2            /* R0 = idx * sizeof(tiStrt) */             ;\
                           add     R4, R0, cc_UC    /* R4 = &Epm_Rtm.member.ti____[idx] */      ;\
                           ldl.iu  R3, %3           /* R3 = STRUCT_OFFS(Epm_tiMeas_t, tiStrt)*/ ;\
                           ldl.il  R3, %3                                                       ;\
                           add     R4, R3, cc_UC    /* R4 = &Epm_Rtm.member.tiStrt[idx] */      ;\
                           ldl.iu  R5, %6           /* R5 = &Cpu_GetTIM0 */                     ;\
                           ldl.il  R5, %6                                                       ;\
                           ld.if  [R5],0, Size=32   /* R0 = Cpu_GetTIM0 */                      ;\
                           st.if  [R4],0, Size=32"  /* Epm_Rtm.member.tiStrt[idx] = R0 */        \
                           :                                                                     \
               /* %0 */    :"i"(&EpmHwe_Rtm),                                                    \
               /*  1 */     "i"(STRUCT_OFFS(EpmHwe_Rtm_t, member)),                              \
               /*  2 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, idx)),                              \
               /*  3 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiStrt)),                           \
               /*  4 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiDiff)),                           \
               /*  5 */     "i"(LAST(EpmHwe_Rtm.member.tiStrt)),                                 \
               /*  6 */     "i"(&Cpu_GetTIM0)                                                    \
                          );

/**
 * Macro: Time Stop.
 * The macro read System Timer and calculate the time difference for Run Time Measurement.
 * The difference is put into an array at the position determinate by current idx.
 */
#define EPMHWE_TI_STOP(member)                                                                   \
                          EpmHwe_Rtm.member.tiDiff[EpmHwe_Rtm.member.idx] = Cpu_GetTIM0 -        \
                          EpmHwe_Rtm.member.tiStrt[EpmHwe_Rtm.member.idx]

#define EpmHwe_ti_stop(member)                                                                   \
                          asm(                                                                   \
                          "ldl.iu  R4, %0           /* R4 = &Epm_Rtm */                         ;\
                           ldl.il  R4, %0                                                       ;\
                           ldl.iu  R3, %1           /* R3 = STRUCT_OFFS(Epm_Rtm_t, member) */   ;\
                           ldl.il  R3, %1                                                       ;\
                           add     R4, R3, cc_UC    /* R4 = &Epm_Rtm.member */                  ;\
                           ld.if  [R4],%2, Size=32  /* R0 = Epm_Rtm.member.idx */               ;\
                           shl     R0, 2            /* R0 = idx * sizeof(tiStrt) */             ;\
                           add     R4, R0, cc_UC    /* R4 = &Epm_Rtm.member.ti____[idx] */      ;\
                           mov     R5, R4, cc_UC    /* R5 = R4 */                               ;\
                           ldl.iu  R3, %3           /* R3 = STRUCT_OFFS(Epm_tiMeas_t, tiStrt)*/ ;\
                           ldl.il  R3, %3                                                       ;\
                           add     R5, R3, cc_UC    /* R5 = &Epm_Rtm.member.tiStrt[idx] */      ;\
                           ld.f    R1, [R5], Size=32/* R0 = Epm_Rtm.member.tiStrt[idx] */       ;\
                           ldl.iu  R3, %4           /* R3 = STRUCT_OFFS(Epm_tiMeas_t, tiDiff)*/ ;\
                           ldl.il  R3, %4                                                       ;\
                           add     R4, R3, cc_UC    /* R4 = &Epm_Rtm.member.tiDiff[idx] */      ;\
                           ldl.iu  R5, %6           /* R5 = &Cpu_GetTIM0 */                     ;\
                           ldl.il  R5, %6                                                       ;\
                           ld.if  [R5],0, Size=32   /* R0 = Cpu_GetTIM0 */                      ;\
                           sub     R0, R1, cc_UC    /* R0 = Cpu_GetTIM0 - tiStrt */             ;\
                           st.if  [R4],0, Size=32"  /* Epm_Rtm.member.tiDiff[idx] = R0 */        \
                           :                                                                     \
               /* %0 */    :"i"(&EpmHwe_Rtm),                                                    \
               /*  1 */     "i"(STRUCT_OFFS(EpmHwe_Rtm_t, member)),                              \
               /*  2 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, idx)),                              \
               /*  3 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiStrt)),                           \
               /*  4 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiDiff)),                           \
               /*  5 */     "i"(LAST(EpmHwe_Rtm.member.tiStrt)),                                 \
               /*  6 */     "i"(&Cpu_GetTIM0)                                                    \
                             );

/**
 * Macro: Read register into variable start.
 * The macro read register value and put it to the array of start marks.
 * The array position is determinate by idx.
 * After store the index will be incremented.
 */
#define EPMHWE_TI_REG2STRT(member, reg)                                                          \
                          if (EpmHwe_Rtm.member.idx < LAST(EpmHwe_Rtm.member.tiStrt))            \
                          {                                                                      \
                              EpmHwe_Rtm.member.idx++;                                           \
                          }                                                                      \
                          else                                                                   \
                          {                                                                      \
                              EpmHwe_Rtm.member.idx = 0;                                         \
                          }                                                                      \
                          EpmHwe_Rtm.member.tiStrt[EpmHwe_Rtm.member.idx] = (reg)

#define EpmHwe_ti_reg2strt(member, reg)                                                          \
                          asm(                                                                   \
                          "ldl.iu  R4, %0           /* R4 = &Epm_Rtm */                         ;\
                           ldl.il  R4, %0                                                       ;\
                           ldl.iu  R5, %1           /* R5 = STRUCT_OFFS(Epm_Rtm_t, member) */   ;\
                           ldl.il  R5, %1                                                       ;\
                           add     R4, R5, cc_UC    /* R4 = &Epm_Rtm.member */                  ;\
                           ld.if  [R4],%2, Size=32  /* R0 = Epm_Rtm.member.idx */               ;\
                           ldl.iu  R5, %5           /* R5 = LAST(Epm_Rtm.member.tiStrt) */      ;\
                           ldl.il  R5, %5                                                       ;\
                           comp    R5, R0, cc_UC                                                ;\
                           jc      1f, cc_Z         /* if (idx = LAST()) {jump} */              ;\
                           add.i   R0, 1            /* idx++ */                                 ;\
                           jc      2f, cc_UC                                                    ;\
                       1:  ld.i    R0, 0            /* idx = 0 */                               ;\
                       2:  st.if  [R4],%2, Size=32  /* Epm_Rtm.member.idx = R0 */               ;\
                           shl     R0, 2            /* R0 = idx * sizeof(tiStrt) */             ;\
                           add     R4, R0, cc_UC    /* R4 = &Epm_Rtm.member.ti____[idx] */      ;\
                           ldl.iu  R5, %3           /* R5 = STRUCT_OFFS(Epm_tiMeas_t, tiStrt)*/ ;\
                           ldl.il  R5, %3                                                       ;\
                           add     R4, R5, cc_UC    /* R4 = &Epm_Rtm.member.tiStrt[idx] */      ;\
                           ldl.iu  R5, %6           /* R5 = &Cpu_GetTIM0 */                     ;\
                           ldl.il  R5, %6                                                       ;\
                           ld.if  [R5],0, Size=32   /* R0 = Cpu_GetTIM0 */                      ;\
                           st.if  [R4],0, Size=32"  /* Epm_Rtm.member.tiStrt[idx] = R0 */        \
                           :                                                                     \
               /* %0 */    :"i"(&EpmHwe_Rtm),                                                    \
               /*  1 */     "i"(STRUCT_OFFS(EpmHwe_Rtm_t, member)),                              \
               /*  2 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, idx)),                              \
               /*  3 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiStrt)),                           \
               /*  4 */     "i"(STRUCT_OFFS(EpmHwe_tiMeas_t, tiDiff)),                           \
               /*  5 */     "i"(LAST(EpmHwe_Rtm.member.tiStrt)),                                 \
               /*  6 */     "i"(&reg)                                                            \
                          );
#endif


/**
 * Macro: Timer Start.
 * The macro read System Timer and save the current time as start value.
 * The System Timer work at 75MHz METIS, 80MHz LEDA Light
 * Use macro CPU_TICKS_TO_US(); to change the unit
 *
 * currently e.g.:
 *                714
 *  tiINC [µs] = ------ = 9,52 [µs]
 *                 75
 */
#define EPMHWE_TIMER_STRT( var) ((var).strt = Cpu_GetTIM0)
#define EpmHwe_timer_strt( var_t, var)                                                           \
                          asm(                                                                   \
                          "ldl.iu  R5, %0           /* R5 = &Cpu_GetTIM0 */                     ;\
                           ldl.il  R5, %0                                                       ;\
                           ld.if  [R5], 0, Size=32  /* R0 = Cpu_GetTIM0 */                      ;\
                           ldl.iu  R5, %1           /* R5 = &Epm_tiInt4Del */                   ;\
                           ldl.il  R5, %1                                                       ;\
                           st.if  [R5],%2, Size=32" /* Epm_tiInt4Del.strt = R0 */                \
                           :                                                                     \
               /* %0 */    :"i"(&Cpu_GetTIM0),                                                   \
               /*  1 */     "i"(&(var)),                                                         \
               /*  2 */     "i"(STRUCT_OFFS(var_t, strt))                                        \
                             );

/**
 * Macro: Timer Diff.
 * The macro read System Timer and calculate the time difference from start value.
 * The System Timer work at 75MHz METIS, 80MHz LEDA Light
 * Use macro CPU_TICKS_TO_US(); to change the unit
 */
#define EPMHWE_TIMER_DIFF( var)   ((var).diff = Cpu_GetTIM0 - (var).strt)
#define EpmHwe_timer_diff( var_t, var)                                                           \
                          asm(                                                                   \
                          "ldl.iu  R5, %0           /* R5 = &Cpu_GetTIM0 */                     ;\
                           ldl.il  R5, %0                                                       ;\
                           ld.f    R1,[R5],Size=32  /* R1 = Cpu_GetTIM0 */                      ;\
                           ldl.iu  R5, %1           /* R5 = &Epm_tiInt4Del */                   ;\
                           ldl.il  R5, %1                                                       ;\
                           ld.if  [R5],%2,Size=32   /* R0 = Epm_tiInt4Del.strt */               ;\
                           sub     R1, R0, cc_UC    /* R1 = curr - start */                     ;\
                           mov     R0, R1, cc_UC    /* R0 = R1 */                               ;\
                           st.if  [R5],%3, Size=32" /* Epm_tiInt4Del.diff = R0 */                \
                           :                                                                     \
               /* %0 */    :"i"(&Cpu_GetTIM0),                                                   \
               /*  1 */     "i"(&(var)),                                                         \
               /*  2 */     "i"(STRUCT_OFFS(var_t, strt)),                                       \
               /*  3 */     "i"(STRUCT_OFFS(var_t, diff))                                        \
                             );


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

#if   (EPMHWE_RTM_SY == 1)    // EpmHwe Run Time Measurement activated
/**
 * EpmHwe Run Time Measurement
 */
typedef struct
{
    uint32          idx;            /**< index. */
    uint32          tiDiff[120];    /**< time differenz between ti_strt() and ti_stop(). */
    uint32          tiStrt[120];    /**< time differenz between ti_strt() and ti_stop(). */

} EpmHwe_tiMeas_t;

/**
 * EpmHwe Run Time Measurement
 */
typedef struct
{
    EpmHwe_tiMeas_t     EpmHCrS_tiINC;
    EpmHwe_tiMeas_t     EpmHCrS_tiIGNTIME;
    EpmHwe_tiMeas_t     EpmHCrS_tiPllCor;
    EpmHwe_tiMeas_t     EpmHCrS_PLL;
    EpmHwe_tiMeas_t     EpmHInt_ti;
    EpmHwe_tiMeas_t     EpmHInt_tiPCP2CPU;
    EpmHwe_tiMeas_t     EpmHCaS_ti;

} EpmHwe_Rtm_t;
#endif


typedef struct
{
    uint32          strt;       /**< start time stamp. */
    uint32          diff;       /**< time differenz between strt and stop(). */

} EpmHwe_timer_t;


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
#if   (EPMHWE_RTM_SY == 1)    // EpmHwe Run Time Measurement activated
extern EpmHwe_Rtm_t   EpmHwe_Rtm;
#endif

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#endif
