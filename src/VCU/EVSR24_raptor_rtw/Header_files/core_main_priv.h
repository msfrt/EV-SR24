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
 * $Filename__:core_main_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:core_main_priv$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     25.06.2010 RAT1COB
 *   Core_Env support of TC1724 TC1782 TC1793
 * 
 * 1.9.0; 0     25.08.2008 KLMEYER
 *   Initial import from Clearcase 
 *      File name: core_main_priv.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *   Private headerfile of Core main initialization
 *
 * \scope          API
 ***************************************************************************************************
 */
#ifndef _CORE_MAIN_PRIV_H
#define _CORE_MAIN_PRIV_H

/*---------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------
 */

#include "reg.h"
#include REG_SCU_H
#include REG_CSFR_H


/* linker symbols */
/* linker symbols for user stack */
MEMLAY_USE_LABEL(extern uint32, __ASW_STACK_INIT);

/* linker symbols for context save areas */
MEMLAY_USE_LABEL(extern uint32, __ASW_CSA_START);
MEMLAY_USE_LABEL(extern uint32, __ASW_CSA_SIZE);
MEMLAY_USE_LABEL(extern uint32, __ASW_CSA_END);

/* linker symbols for RAM-areas */
MEMLAY_USE_LABEL(extern uint32, __RAM0_START);
MEMLAY_USE_LABEL(extern uint32, __RAM0_SIZE);
MEMLAY_USE_LABEL(extern uint32, __RAM1_START);
MEMLAY_USE_LABEL(extern uint32, __RAM1_SIZE);
MEMLAY_USE_LABEL(extern uint32, __RAM2_START);
MEMLAY_USE_LABEL(extern uint32, __RAM2_SIZE);

/* linker symbol for interrupt vector table */
MEMLAY_USE_LABEL(extern uint32, __INT_TABLE);

/* macros for init phase */
/* clear RAM */
#define CORE_RAM_ZERO \
asm ("                                                                                           \n\
        isync                                                                                    \n\
        dsync                                                                                    \n\
                                                                                                 \n\
        # initialize RAM-areas with 0                                                            \n\
        movh.a  %%a4, HI:MemLay_RamInfo_cas         # load start address of table                \n\
        lea     %%a4, [%%a4] LO:MemLay_RamInfo_cas                                               \n\
        mov.a   %%a5, %0                            # load size of table - 1                     \n\
                                                    # constraint prevents invalid size of 0      \n\
        RZ_AREA_LOOP:                                                                            \n\
                                                                                                 \n\
        ld.a    %%a15, [%%a4+]                      # load start address of area                 \n\
        ld.w    %%d15, [%%a4+]                      # load size of area                          \n\
                                                                                                 \n\
        jeq     %%d15, 0, RZ_END                                                                 \n\
        sh      %%d15, -0x2                         # copy 32bit in loop                         \n\
        add     %%d15, -0x1                                                                      \n\
        mov.a   %%a14, %%d15                                                                     \n\
        mov     %%d15, 0                                                                         \n\
        RZ_LOOP:                                                                                 \n\
        st.w    [%%a15+]4, %%d15                                                                 \n\
        loop    %%a14, RZ_LOOP                                                                   \n\
        RZ_END:                                                                                  \n\
                                                                                                 \n\
        loop    %%a5, RZ_AREA_LOOP                                                               \n\
                                                                                                 \n\
    "::"N"(MEMLAY_NUM_RAM_INFO - 1): "a4", "a5", "a14", "a15", "d15");


#define CORE_CSA_INIT \
asm ("                                                                                           \n\
        isync                                                                                    \n\
        dsync                                                                                    \n\
        # initialize context save areas (CSAs), PCXI, LCX and FCX                                \n\
        mfcr    %d0, $pcxi                          # clear PCX field in PCXI                    \n\
        movh    %d1, 0xfff0                                                                      \n\
        and     %d0, %d0, %d1                                                                    \n\
        mtcr    $pcxi,%d0                                                                        \n\
        isync                                                                                    \n\
        movh    %d0, hi:__ASW_CSA_START             # %d0 = begin of CSA                         \n\
        addi    %d0, %d0, lo:__ASW_CSA_START                                                     \n\
        movh    %d2, hi:__ASW_CSA_END               # %d2 = end of CSA                           \n\
        addi    %d2, %d2, lo:__ASW_CSA_END                                                       \n\
        add     %d2, 1                              # because endaddress is last address of area \n\
        sub     %d2, %d2, %d0                                                                    \n\
        sh      %d2, %d2, -6                        # %d2 = number of CSAs                       \n\
        mov.a   %a3, %d0                            # %a3 = address of first CSA                 \n\
        extr.u  %d0, %d0, 28, 4                     # %d0 = segment << 16                        \n\
        sh      %d0, %d0, 16                                                                     \n\
        lea     %a4, 0                              # %a4 = previous CSA = 0                     \n\
        st.a    [%a3], %a4                          # store it in 1st CSA                        \n\
        mov.aa  %a4, %a3                            # %a4 = current CSA                          \n\
        lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                         \n\
        mov.d   %d1, %a3                                                                         \n\
        extr.u  %d1, %d1, 6, 16                     # get CSA index                              \n\
        or      %d1, %d1, %d0                       # add segment number                         \n\
        mtcr    $lcx, %d1                           # initialize LCX                             \n\
        add     %d2, %d2, -2                        # CSAs to initialize -= 2                    \n\
        mov.a   %a5, %d2                            # %a5 = loop counter                         \n\
        CSA_LOOP:                                                                                \n\
        mov.d   %d1, %a4                            # %d1 = current CSA address                  \n\
        extr.u  %d1, %d1, 6, 16                     # get CSA index                              \n\
        or      %d1, %d1, %d0                       # add segment number                         \n\
        st.w    [%a3], %d1                          # store nextCSA pointer                      \n\
        mov.aa  %a4, %a3                            # %a4 = current CSA address                  \n\
        lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                         \n\
        loop    %a5, CSA_LOOP                       # repeat until done                          \n\
        mov.d   %d1, %a4                            # %d1 = current CSA address                  \n\
        extr.u  %d1, %d1, 6, 16                     # get CSA index                              \n\
        or      %d1, %d1, %d0                       # add segment number                         \n\
        mtcr    $fcx, %d1                           # initialize FCX                             \n\
        isync                                                                                    \n\
    ");


#define CORE_ASTACK_INIT \
asm ("                                                                                           \n\
        # load stackpointer SP (user stack)                                                      \n\
        movh.a  %sp, hi:__ASW_STACK_INIT                                                         \n\
        lea     %sp, [%sp]lo:__ASW_STACK_INIT                                                    \n\
    ");


#define CORE_BIV_ISTACK_INIT \
asm volatile ("                                                                                  \n\
        # clear endinit bit                                                                      \n\
        # password access                                                                        \n\
        jl      WDT_UNL                                                                          \n\
        # modifiy access                                                                         \n\
        andn    %%d15, %%d15, 0x0f                                                               \n\
        or      %%d15, 0x02                                                                      \n\
        st.w    %0, %%d15                                                                        \n\
        ld.w    %%d15, %0    # workaround: sometimes BIV/ISP was set before ENDINIT was cleared  \n\
                             # so first read WDTCON0 back and then change expected registers     \n\
                                                                                                 \n\
        # load BIV                                                                               \n\
        movh    %%d0, hi:__INT_TABLE                                                             \n\
        addi    %%d0, %%d0, lo:__INT_TABLE                                                       \n\
        mtcr    $biv, %%d0                                                                       \n\
        isync                                                                                    \n\
                                                                                                 \n\
        # load interrupt stackpointer ISP to 0. we don't use the special istack, so if access to \n\
        # ISP will be initiated it will end in a trap                                            \n\
        mov     %%d0, 0                                                                          \n\
        mtcr    $isp,%%d0                                                                        \n\
        isync                                                                                    \n\
                                                                                                 \n\
        # set endinit bit                                                                        \n\
        # password access                                                                        \n\
        jl      WDT_UNL                                                                          \n\
        # modifiy access                                                                         \n\
        andn    %%d15, %%d15, 0x0f                                                               \n\
        or      %%d15, 0x03                                                                      \n\
        st.w    %0, %%d15                                                                        \n\
        j       MBII_END                                                                         \n\
                                                                                                 \n\
        WDT_UNL:                                                                                 \n\
        # password access (unlock sequence)                                                      \n\
        ld.w    %%d15, %0                           # load value from WDTCON0                    \n\
        ld.w    %%d0, %1                            # load value from WDTCON1                    \n\
        andn    %%d15, %%d15, 0x0c                  # clear bits 3:2 from WDTCON0                \n\
        or      %%d15, 0xf0                         # set bits 7:4 to 1 from WDTCON0             \n\
        and     %%d0, %%d0, 0x0c                    # mask bits 3:2 from WDTCON1                 \n\
        or      %%d15, %%d0                         # or bits 3:2 from WDTCON1 with WDTCON0      \n\
        xor     %%d15, %%d15, 0x02                  # invert bit 1                               \n\
        st.w    %0, %%d15                           # write password to WDTCON0                  \n\
        ji      %%a11                                                                            \n\
                                                                                                 \n\
        MBII_END:                                                                                \n\
                  " :  : "i"(&SCU.WDT_CON0), "i"(&SCU.WDT_CON1));


#define CORE_GLOBREG_INIT \
    {                                                                                              \
        uint32 PswTemp_u32;                                                                        \
                                                                                                   \
        PswTemp_u32 = __mfcr($PSW);                                    /* save PSW     */          \
        __mtcr($PSW, (PswTemp_u32 | (1 << CSFR_PSW_GW_POS)));          /* set bit GW   */          \
        _isync();                                                      /* ISYNC        */          \
                                                                                                   \
        asm volatile ("movh.a %a0,   HI: _SMALL_DATA_ ");              /* Set global register A0 */\
        asm volatile ("lea %a0,[%a0] LO: _SMALL_DATA_ ");                                          \
        asm volatile ("movh.a %a1,   HI: _SMALL_DATA2_ ");             /* Set global register A1 */\
        asm volatile ("lea %a1,[%a1] LO: _SMALL_DATA2_ ");                                         \
        asm volatile ("movh.a %a8,   HI: _SMALL_DATA3_ ");             /* Set global register A8 */\
        asm volatile ("lea %a8,[%a8] LO: _SMALL_DATA3_ ");                                         \
        asm volatile ("mov.a %a9, 0 ");                                /* Set global register A9 */\
                                                                                                   \
        __mtcr($PSW, PswTemp_u32);                                     /* restore PSW  */          \
        _isync();                                                      /* ISYNC        */          \
    }
#endif

#if (MACHINE_SUBTYPE == TC_1766) || (MACHINE_SUBTYPE == TC_1796)
#define CORE_CHECK_UNSUPPORTED_CPUS()                                                              \
    /* make sure, that SW is not running on "old", unsupported TC1796/TC1766 A-Step CPUs */        \
    /*                 /-TC1796-Ax (0x8A01)          /-TC1766-Ax (0x8B01)                */        \
    /*                 |                             |                                   */        \
    if ((SCU.CHIPID == 0x00008A01) || (SCU.CHIPID == 0x00008B01))                                  \
    {                                                                                              \
        Reset_SWResetRequest(SWRESET_CORE_ENV_E, SWRESET_UNSUPPORTED_CPU_E, SCU.CHIPID);           \
    }
#else
#define CORE_CHECK_UNSUPPORTED_CPUS()
#endif

#define CORE_CHECK_CLKCSTNC()                                                                      \
    /* check consistency of system clock frequency set up by the startup block with the system */  \
    /* clock frequency for which the SW has been compiled.                                     */  \
    /* If a mismatch is detected, start RB flash programming.                                  */  \
    if (Core_Env_ChkClkCstnc() == FALSE)                                                           \
    {                                                                                              \
        Reset_SWResetRequest(SWRESET_GRP_SB_E, SWRESET_RB_PROG_E, 0x0);                            \
    }
