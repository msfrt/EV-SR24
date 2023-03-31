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
 * $Filename__:cpu_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KOI2KOR$ 
 * $Date______:29.03.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:cpu_inl$ 
 * $Variant___:1.10.1$ 
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
 * 1.10.1; 0     29.03.2012 KOI2KOR
 *   BUG Fix for Cpu_ModifyProtSFR( ) interface.
 * 
 * 1.10.0; 0     11.02.2010 AHT2FE
 *   RCMS00736171:
 *   Anbindung des ECU-Innentemperaturfuehlers 
 *   und Implementierung einer entsprechenden 
 *   OBD Ueberwachungsstrategie (Anteil HWE 
 *   von C5977)
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: cpu_inl.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPU_INL_H
#define _CPU_INL_H

/**
 ***************************************************************************************************
 * moduledescription
 *               Inline functions of the Cpu module.
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
 * Variable declarations
 ***************************************************************************************************
 */

/* state of watchdog timer */
extern bool Cpu_stWDTDisabled_b;

/*
 ***************************************************************************************************
 * Prototypes of inline functions
 ***************************************************************************************************
 */

CPU_INLINE_PROTOTYPE void   Cpu_UnlockWDTCON0(void);
CPU_INLINE_PROTOTYPE void   Cpu_ModifyWDTCON0(uint32 xValue_u32, uint32 xMask_u32);
CPU_INLINE_PROTOTYPE uint64 Cpu_GetSysTime(void);
CPU_INLINE_PROTOTYPE void   Cpu_ModifyProtSFR(uint32 *xReg_u32, uint32 xMask_u32, uint32 xVal_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_GetCPUPrio(void);
CPU_INLINE_PROTOTYPE void   Cpu_SetCPUPrio(uint32 numPrio_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemCopy64(uint64* xDest_pu64, const uint64* xSrc_pcu64,
                                          uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemCopy32(uint32* xDest_pu32, const uint32* xSrc_pcu32,
                                          uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemCopy16(uint16* xDest_pu16, const uint16* xSrc_pcu16, 
                                          uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemCopy8(uint8* xDest_pu8, const uint8* xSrc_pcu8, 
                                         uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_MemCompare64(const uint64* xSrc1_pcu64, const uint64* xSrc2_pcu64, 
                                             uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_MemCompare32(const uint32* xSrc1_pcu32, const uint32* xSrc2_pcu32, 
                                             uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_MemCompare16(const uint16* xSrc1_pcu16, const uint16* xSrc2_pcu16, 
                                             uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_MemCompare8(const uint8* xSrc1_pcu8, const uint8* xSrc2_pcu8, 
                                            uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemSet64(uint64* xDest_pu64, uint64 xPattern_u64, 
                                         uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemSet32(uint32* xDest_pu32, uint32 xPattern_u32, 
                                         uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemSet16(uint16* xDest_pu16, uint32 xPattern_u32, 
                                         uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_MemSet8(uint8* xDest_pu8, uint32 xPattern_u32, uint32 numBytes_u32);
CPU_INLINE_PROTOTYPE void   Cpu_SwapBytes16(uint8* xValue_pu8);
CPU_INLINE_PROTOTYPE void   Cpu_SwapBytes32(uint8* xValue_pu8);
CPU_INLINE_PROTOTYPE void   Cpu_Wait(uint32 numCycles_u32);
CPU_INLINE_PROTOTYPE uint32 Cpu_GetSysClock(void);

/*
 ***************************************************************************************************
 * Inline function declarations
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Unlock WDTCON0 register.
 *
 * This function performs an unlock access to WDTCON0.
 *
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!! Unlocking WDTCON0 sets the watchdog to TIMEOUT mode (short timeout period).    !!!
 * !!! The watchdog re-enters NORMAL mode __only__ after a valid modify access to     !!!
 * !!! WDTCON0 with ENDINIT bit set to 1.                                             !!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *
 * Modification of the register values of WDTCON0 must be performed with the function
 * Cpu_ModifyWDTCON0() after unlocking.
 *
 * \seealso Cpu_ModifyWDTCON0()
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_UnlockWDTCON0(void)
{
    uint32          xPasswd_u32;
    volatile uint32 xReadBack_u32;

    xPasswd_u32 = SCU.WDT_CON0;        /* load value from WDTCON0    */
    xPasswd_u32 = xPasswd_u32 | 0x0F0UL;  /* set HW password to 0b1111  */

    /* copy current state of WDTCON1.WDTIR and WDTCON1.WDTDR to password */
    xPasswd_u32 = (SCU.WDT_CON1 & 0x00CUL) | (xPasswd_u32 & 0xFFFFFFF3UL);

    /* toggle value of WDTLCK bit of WDTCON0 */
    xPasswd_u32 = (xPasswd_u32 ^ 0x00000002UL);
    SCU.WDT_CON0 = xPasswd_u32;

    /* workaround: read back register contents to make sure modifications */
    /* take effect before subsequent accesses to registers                */
    xReadBack_u32 = SCU.WDT_CON0;
}

/**
 ***************************************************************************************************
 * Modify (and lock) WDTCON0 register.
 *
 * This function modifies the specified bits in WDTCON0 and locks the register.
 * Only those bits set to "1" in the parameter dMask_u32 are modified:
 *
 *       WDTCON0 = (WDTCON0 & ~xMask_u32) | (xValue_u32 & xMask_u32)
 *
 * Modification of the register values is only possible after unlocking the register with
 * Cpu_UnlockWDTCON0().
 *
 * \param  xValue_u32 - value to be written to WDTCON0
 * \param  xMask_u32  - mask of bits to be modified.
 * \seealso Cpu_UnlockWDTCON0()
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_ModifyWDTCON0(uint32 xValue_u32, uint32 xMask_u32)
{
    uint32          xNewVal_u32;
    volatile uint32 xReadBack_u32;

    /* bits selected by the mask will be changed */
    xNewVal_u32 = SCU.WDT_CON0 & ~xMask_u32;
    xNewVal_u32 = xNewVal_u32 | (xValue_u32 & xMask_u32);

    /* set HW-password1 to 0b1111, HW-password0 to 0b00 and set WDTLCK bit */
    xNewVal_u32 = ((0xF2UL | xNewVal_u32) & (0xFFFFFFF3UL));

    /* write new value to WDTCON0 */
    SCU.WDT_CON0 = xNewVal_u32;

    /* workaround: read back register contents to make sure modifications */
    /* take effect before subsequent accesses to registers                */
    xReadBack_u32 = SCU.WDT_CON0;
}

/**
 ***************************************************************************************************
 * Read out the system timer (STM).
 *
 * Read the contents of the 56 bit wide system timer (STM).
 * Hardware ensures that data is consistent (2 register accesses are necessary).
 * To make sure that no other access to a sub-timer is performed between the accesses
 * to TIM0 and CAP (e.g. by a higher priority interrupt), interrupts are suspended.
 *
 * \return value of system timer (56 significant bits in a uint64)
 ***************************************************************************************************
 */

CPU_INLINE uint64 Cpu_GetSysTime(void)
{
    uint64 tiSys_u64;

    /* ensure coherent reading of both timer registers */
    Cpu_SuspendInt();
    /* read TIM0 first, then captured upper 24bit value */
    tiSys_u64 = (uint64)STM.TIM0;
    asm volatile ("" ::: "memory");
    tiSys_u64 |= ((uint64)STM.CAP << 32UL);
    Cpu_ResumeInt();

    return (tiSys_u64);
}

/**
 ***************************************************************************************************
 * Modify a protected SFR (special function register).
 *
 * Reset the ENDINIT-bit, write value to SFR and set ENDINIT-bit again.
 *
 * \param xReg_u32  - register to be modified
 * \param xMask_u32 - mask of bits which should be modified
 * \param xVal_u32  - value to be written to REG
 * \seealso Cpu_SetEndinit(), Cpu_ResetEndinit()
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_ModifyProtSFR(uint32 *xReg_u32, uint32 xMask_u32, uint32 xVal_u32)
{
    /* reset ENDINIT protection (this function disables interrupts!) */
    Cpu_ResetEndinit();

    /* modify register value */
    *xReg_u32 = (*xReg_u32 &~ xMask_u32) | (xVal_u32 & xMask_u32);

    /* enable ENDINIT protection again (and re-enable interrupts, if required) */
    Cpu_SetEndinit();
}

/**
 ***************************************************************************************************
 * Return current CPU priority number.
 *
 * This function accesses the ICR (interrupt control register) and returns the CCPN (current
 * CPU priority number)
 *
 * \return value of CCPN bitfield
 ***************************************************************************************************
 */

CPU_INLINE uint32 Cpu_GetCPUPrio(void)
{
    uint32 xICR_u32;

    /* access ICR register and return prio number */
    /* MISRA RULE 5 VIOLATION: use of character necessary for asm instruction */
    asm volatile ("mfcr %0, $icr":"=d" (xICR_u32) : );

    /* MISRA RULE 30 VIOLATION: variable is initialized by above asm instruction */
    return (xICR_u32 & 0x000000FFUL);
}

/**
 ***************************************************************************************************
 * Set current CPU priority number.
 *
 * This function accesses the ICR (interrupt control register) and sets the CCPN (current
 * CPU priority number). ISYNC is necessary to ensure completion of the MTCR before the next
 * instruction is executed.
 *
 * \param numPrio_u32 - value of CCPN bitfield (current CPU priority number)
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_SetCPUPrio(uint32 numPrio_u32)
{
    uint32 xTemp_u32;

    /* load current contents of ICR */
    /* MISRA RULE 5 VIOLATION: use of character necessary for asm instruction */
    asm volatile ("mfcr %0, $icr":"=d" (xTemp_u32) : );

    /* modify CCPN bitfield */
    /* MISRA RULE 30 VIOLATION: variable is initialized by above asm instruction */
    xTemp_u32 = (xTemp_u32 & 0xFFFFFF00UL) | (numPrio_u32 & 0x000000FFUL);

    /* store new ICR value and perform the mandatory isync */
    /* MISRA RULE 5 VIOLATION: use of character necessary for asm instruction */
    asm volatile ("mtcr $icr, %0": :"d" (xTemp_u32):"memory");
    asm volatile ("isync");
}

/**
 ***************************************************************************************************
 * Cpu_MemCopy64 - copy non overlapping memory in 64 Bit blocks
 *
 * Memory copy routine. Source and destination must not overlap. Pointer parameters must be 8 Byte
 * aligned. The size should be a multiple of 8. If not, it is rounded down to the next multiple
 * of 8.
 *
 * \param   xDest_pu64      destination address
 * \param   xSrc_pcu64      source address
 * \param   numBytes_u32    number of bytes to be copied
 * \seealso     Cpu_MemCopy8, Cpu_MemCopy16, Cpu_MemCopy32
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemCopy64(uint64* xDest_pu64, const uint64* xSrc_pcu64, uint32 numBytes_u32)
{
    uint64 xTemp_u64;
    uint8* ctLoop_pu8;

    if (numBytes_u32 > 7UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 8UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        1:                      \n\
            ld.d   %A0,[%2+]8   \n\
            st.d   [%1+]8,%A0   \n\
            loop   %3,1b        \n\
            "
            : "=d"(xTemp_u64), "+a"(xDest_pu64), "+a"(xSrc_pcu64), "+a"(ctLoop_pu8): : "memory");
        /*   0                      1                2               3    */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemCopy32 - copy non overlapping memory in 32 Bit blocks
 *
 * Memory copy routine. Source and destination must not overlap. Pointer parameters must be 4 Byte
 * aligned. The size should be a multiple of 4. If not, it is rounded down to the next multiple
 * of 4.
 *
 * \param   xDest_pu32      destination address
 * \param   xSrc_pcu32      source address
 * \param   numBytes_u32    number of bytes to be copied
 * \seealso     Cpu_MemCopy8, Cpu_MemCopy16, Cpu_MemCopy64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemCopy32(uint32* xDest_pu32, const uint32* xSrc_pcu32, uint32 numBytes_u32)
{
    uint32 xTemp_u32;
    uint8* ctLoop_pu8;

    if (numBytes_u32 > 3UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 4UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        1:                      \n\
            ld.w   %0,[%2+]4    \n\
            st.w   [%1+]4,%0    \n\
            loop   %3,1b        \n\
            "
            : "=d"(xTemp_u32), "+a"(xDest_pu32), "+a"(xSrc_pcu32), "+a"(ctLoop_pu8): : "memory");
        /*   0                      1                2               3    */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemCopy16 - copy non overlapping memory in 16 Bit blocks
 *
 * Memory copy routine. Source and destination must not overlap. Pointer parameters must be 2 Byte
 * aligned. The size should be a multiple of 2. If not, it is rounded down to the next multiple
 * of 2.
 *
 * \param   xDest_pu16      destination address
 * \param   xSrc_pcu16      source address
 * \param   numBytes_u32    number of bytes to be copied
 * \seealso     Cpu_MemCopy8, Cpu_MemCopy32, Cpu_MemCopy64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemCopy16(uint16* xDest_pu16, const uint16* xSrc_pcu16, uint32 numBytes_u32)
{
    uint32 xTemp_u32;
    uint8* ctLoop_pu8;

    if (numBytes_u32 > 1UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 2UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        1:                      \n\
            ld.hu  %0,[%2+]2    \n\
            st.h   [%1+]2,%0    \n\
            loop   %3,1b        \n\
            "
            : "=d"(xTemp_u32), "+a"(xDest_pu16), "+a"(xSrc_pcu16), "+a"(ctLoop_pu8): : "memory");
        /*   0                      1                2               3    */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemCopy8 - copy non overlapping memory
 *
 * Memory copy routine. Source and destination must not overlap.
 *
 * \param   xDest_pu8       destination address
 * \param   xSrc_pcu8       source address
 * \param   numBytes_u32    number of bytes to be copied
 * \seealso     Cpu_MemCopy16, Cpu_MemCopy32, Cpu_MemCopy64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemCopy8(uint8* xDest_pu8, const uint8* xSrc_pcu8, uint32 numBytes_u32)
{
    uint32 xTemp_u32;
    uint8* ctLoop_pu8;

    if (numBytes_u32 > 0UL)
    {
        ctLoop_pu8 = (uint8*)(numBytes_u32 - 1UL);

        /* fast forward copy loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            ld.bu  %0,[%2+]1    \n\
            st.b   [%1+]1,%0    \n\
            loop   %3,1b        \n\
        "
        : "=d"(xTemp_u32), "+a"(xDest_pu8), "+a"(xSrc_pcu8), "+a"(ctLoop_pu8): : "memory");
        /*   0                      1               2              3    */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemCompare64 - compare memory in 64 Bit blocks
 *
 * Memory compare routine. Pointer parameters must be 8 Byte aligned. The size should be a
 * multiple of 8. If not, it is rounded down to the next multiple of 8.
 *
 * \param   xSrc1_pcu32     first source address
 * \param   xSrc2_pcu32     second source address
 * \param   numBytes_u32    number of bytes to be compared
 * \return  stEqual_u32     result of comparison
 * \retval  0               memory area contents are equal
 * \retval  1               memory area contents differ
 * \seealso     Cpu_MemCompare8, Cpu_MemCompare16, Cpu_MemCompare32
 ***************************************************************************************************
 */
CPU_INLINE uint32 Cpu_MemCompare64(const uint64* xSrc1_pcu64, const uint64* xSrc2_pcu64,
                                   uint32 numBytes_u32)
{
    uint32 stEqual_u32;
    uint64 xTemp1_u64;
    uint64 xTemp2_u64;
    uint8* ctLoop_pu8;

    /* initialize return value */
    stEqual_u32 = 1UL;

    if (numBytes_u32 > 7UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 8UL) - 1UL);

        /* fast forward compare loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            ld.d   %A4,[%1+]8   \n\
            ld.d   %A5,[%2+]8   \n\
            jne    %L4,%L5,2f   \n\
            jne    %H4,%H5,2f   \n\
            nop    # CPU_TC.070 workaround \n\
            nop    # CPU_TC.070 workaround \n\
            loop   %3,1b        \n\
            mov    %0,0         \n\
        2:                      \n\
        "
        : "+d"(stEqual_u32), "+a"(xSrc1_pcu64), "+a"(xSrc2_pcu64),
        /*   0                  1                2      */
        "+a"(ctLoop_pu8),  "=d"(xTemp1_u64), "=d"(xTemp2_u64): : "memory");
        /*   3                  4                5      */
    }

    return stEqual_u32;
}

/**
 ***************************************************************************************************
 * Cpu_MemCompare32 - compare memory in 32 Bit blocks
 *
 * Memory compare routine. Pointer parameters must be 4 Byte aligned. The size should be a
 * multiple of 4. If not, it is rounded down to the next multiple of 4.
 *
 * \param   xSrc1_pcu32     first source address
 * \param   xSrc2_pcu32     second source address
 * \param   numBytes_u32    number of bytes to be compared
 * \return  stEqual_u32     result of comparison
 * \retval  0               memory area contents are equal
 * \retval  1               memory area contents differ
 * \seealso     Cpu_MemCompare8, Cpu_MemCompare16, Cpu_MemCompare64
 ***************************************************************************************************
 */
CPU_INLINE uint32 Cpu_MemCompare32(const uint32* xSrc1_pcu32, const uint32* xSrc2_pcu32,
                                   uint32 numBytes_u32)
{
    uint32 stEqual_u32;
    uint32 xTemp1_u32;
    uint32 xTemp2_u32;
    uint8* ctLoop_pu8;

    /* initialize return value */
    stEqual_u32 = 1UL;

    if (numBytes_u32 > 3UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 4UL) - 1UL);

        /* fast forward compare loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            ld.w   %4,[%1+]4    \n\
            ld.w   %5,[%2+]4    \n\
            jne    %4,%5,2f     \n\
            nop    # CPU_TC.070 workaround \n\
            nop    # CPU_TC.070 workaround \n\
            loop   %3,1b        \n\
            mov    %0,0         \n\
        2:                      \n\
        "
        : "+d"(stEqual_u32), "+a"(xSrc1_pcu32), "+a"(xSrc2_pcu32),
        /*   0                  1                2      */
        "+a"(ctLoop_pu8),  "=d"(xTemp1_u32), "=d"(xTemp2_u32): : "memory");
        /*   3                  4                5      */
    }

    return stEqual_u32;
}

/**
 ***************************************************************************************************
 * Cpu_MemCompare16 - compare memory in 16 Bit blocks
 *
 * Memory compare routine. Pointer parameters must be 2 Byte aligned. The size should be a
 * multiple of 2. If not, it is rounded down to the next multiple of 2.
 *
 * \param   xSrc1_pcu16     first source address
 * \param   xSrc2_pcu16     second source address
 * \param   numBytes_u32    number of bytes to be compared
 * \return  stEqual_u32     result of comparison
 * \retval  0               memory area contents are equal
 * \retval  1               memory area contents differ
 * \seealso     Cpu_MemCompare8, Cpu_MemCompare32, Cpu_MemCompare64
 ***************************************************************************************************
 */
CPU_INLINE uint32 Cpu_MemCompare16(const uint16* xSrc1_pcu16, const uint16* xSrc2_pcu16,
                                   uint32 numBytes_u32)
{
    uint32 stEqual_u32;
    uint32 xTemp1_u32;
    uint32 xTemp2_u32;
    uint8* ctLoop_pu8;

    /* initialize return value */
    stEqual_u32 = 1UL;

    if (numBytes_u32 > 1UL)
    {
        ctLoop_pu8 = (uint8*)((numBytes_u32 / 2UL) - 1UL);

        /* fast forward compare loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            ld.hu  %4,[%1+]2    \n\
            ld.hu  %5,[%2+]2    \n\
            jne    %4,%5,2f     \n\
            nop    # CPU_TC.070 workaround \n\
            nop    # CPU_TC.070 workaround \n\
            loop   %3,1b        \n\
            mov    %0,0         \n\
        2:                      \n\
        "
        : "+d"(stEqual_u32), "+a"(xSrc1_pcu16), "+a"(xSrc2_pcu16),
        /*   0                  1                2      */
        "+a"(ctLoop_pu8),  "=d"(xTemp1_u32), "=d"(xTemp2_u32): : "memory");
        /*   3                  4                5      */
    }

    return stEqual_u32;
}

/**
 ***************************************************************************************************
 * Cpu_MemCompare8 - compare memory
 *
 * Memory compare routine.
 *
 * \param   xSrc1_pcu8      pointer to the first source address
 * \param   xSrc2_pcu8      pointer to the second source address
 * \param   numBytes_u32    number of bytes to be compared
 * \return  stEqual_u32     result of comparison
 * \retval  0               memory area contents are equal
 * \retval  1               memory area contents differ
 * \seealso     Cpu_MemCompare16, Cpu_MemCompare32, Cpu_MemCompare64
 ***************************************************************************************************
 */
CPU_INLINE uint32 Cpu_MemCompare8(const uint8* xSrc1_pcu8, const uint8* xSrc2_pcu8,
                                  uint32 numBytes_u32)
{
    uint32 stEqual_u32;
    uint32 xTemp1_u32;
    uint32 xTemp2_u32;
    uint8* ctLoop_pu8;

    /* initialize return value */
    stEqual_u32 = 1UL;

    if (numBytes_u32 > 0UL)
    {
        ctLoop_pu8 = (uint8*)(numBytes_u32 - 1UL);

        /* fast forward compare loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            ld.bu  %4,[%1+]1    \n\
            ld.bu  %5,[%2+]1    \n\
            jne    %4,%5,2f     \n\
            nop    # CPU_TC.070 workaround \n\
            nop    # CPU_TC.070 workaround \n\
            loop   %3,1b        \n\
            mov    %0,0         \n\
        2:                      \n\
        "
        : "+d"(stEqual_u32), "+a"(xSrc1_pcu8), "+a"(xSrc2_pcu8),
        /*   0                  1               2       */
        "+a"(ctLoop_pu8), "=d"(xTemp1_u32), "=d"(xTemp2_u32): : "memory");
        /*   3                 4                5       */
    }

    return stEqual_u32;
}

/**
 ***************************************************************************************************
 * Cpu_MemSet64 - initialize memory with 64 Bit data
 *
 * Memory initialization routine. 64 Bit Pattern is written to the destination.
 * Destination must be 4 Byte aligned. The size should be a multiple of 8. If not, it is rounded
 * down to the next multiple of 8.
 *
 * \param   xDest_pu32      destination address
 * \param   Pattern_u32     fill pattern
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     Cpu_MemSet8, Cpu_MemSet16, Cpu_MemSet32
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemSet64(uint64* xDest_pu64, uint64 xPattern_u64, uint32 numBytes_u32)
{
    uint8* ct_pu8;

    if (numBytes_u32 > 7UL)
    {
        ct_pu8      = (uint8*)(((numBytes_u32) / 8UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            st.d   [%0+]8,%A2   \n\
            loop   %1,1b        \n\
        "
        : "+a"(xDest_pu64), "+a"(ct_pu8) : "d"(xPattern_u64): "memory");
        /*   0                1             2     */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemSet32 - initialize memory with 32 Bit data
 *
 * Memory initialization routine. 32 Bit Pattern is written to the destination.
 * Destination must be 4 Byte aligned. The size should be a multiple of 4. If not, it is rounded
 * down to the next multiple of 4.
 *
 * \param   xDest_pu32      destination address
 * \param   Pattern_u32     fill pattern
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     Cpu_MemSet8, Cpu_MemSet16, Cpu_MemSet64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemSet32(uint32* xDest_pu32, uint32 xPattern_u32, uint32 numBytes_u32)
{
    uint8* ct_pu8;

    if (numBytes_u32 > 3UL)
    {
        ct_pu8      = (uint8*)(((numBytes_u32) / 4UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            st.w   [%0+]4,%2    \n\
            loop   %1,1b        \n\
        "
        : "+a"(xDest_pu32), "+a"(ct_pu8) : "d"(xPattern_u32): "memory");
        /*   0                1             2     */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemSet16 - initialize memory with 16 Bit data
 *
 * Memory initialization routine. 16 Bit Pattern is written to the destination.
 * Destination must be 2 Byte aligned. The size should be a multiple of 2. If not, it is rounded
 * down to the next multiple of 2.
 *
 * \param   xDest_pu32      destination address
 * \param   Pattern_u32     fill pattern
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     Cpu_MemSet8, Cpu_MemSet32, Cpu_MemSet64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemSet16(uint16* xDest_pu16, uint32 xPattern_u32, uint32 numBytes_u32)
{
    uint8* ct_pu8;

    if (numBytes_u32 > 1UL)
    {
        ct_pu8      = (uint8*)(((numBytes_u32) / 2UL) - 1UL);

        /* fast forward copy loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            st.h   [%0+]2,%2    \n\
            loop   %1,1b        \n\
        "
        : "+a"(xDest_pu16), "+a"(ct_pu8) : "d"(xPattern_u32): "memory");
        /*   0                1             2     */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_MemSet8 - initialize memory with 8 Bit data
 *
 * Memory initialization routine. 8 Bit Pattern is written to the destination.
 *
 * \param   xDest_pu8       destination address
 * \param   xPattern_u32    fill pattern, only lower 8 bit used
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     Cpu_MemSet16, Cpu_MemSet32, Cpu_MemSet64
 ***************************************************************************************************
 */
CPU_INLINE void Cpu_MemSet8(uint8* xDest_pu8, uint32 xPattern_u32, uint32 numBytes_u32)
{
    uint8* ct_pu8;

    if (numBytes_u32 > 0UL)
    {
        ct_pu8      = (uint8*)(numBytes_u32 - 1UL);

        /* fast forward copy loop */
        asm volatile(
        "                       \n\
        1:                      \n\
            st.b   [%0+]1,%2    \n\
            loop   %1,1b        \n\
        "
        : "+a"(xDest_pu8), "+a"(ct_pu8) :  "d"(xPattern_u32): "memory");
        /*   0               1              2    */
    }

    return;
}

/**
 ***************************************************************************************************
 * Cpu_SwapBytes16 - swap byte order in a 16bit value
 *
 * This function can be used to change the byte order of a 16bit value between big and little
 * endian format.
 *
 *              big endian:      little endian:
 *                 HH LL    <->      LL HH
 *
 * Note: byte access is mandatory, because function should be applicable to any 16bit data value
 *       regardless whether it's 16bit aligned or not (e.g. data communication buffers)
 *
 * \param       xValue_pu8      pointer to value to be byte-swapped
 * \seealso     Cpu_SwapBytes32
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_SwapBytes16(uint8 *xValue_pu8)
{
    uint8 temp_u8;

    /* swap bytes 0 <-> 1 */
    temp_u8 = xValue_pu8[0];
    xValue_pu8[0] = xValue_pu8[1];
    xValue_pu8[1] = temp_u8;
}


/**
 ***************************************************************************************************
 * Cpu_SwapBytes32 - swap byte order in a 32bit value
 *
 * This function can be used to change the byte order of a 32bit value between big and little
 * endian format:
 *
 *              big endian:      little endian:
 *              HH HL LH LL  <->  LL LH HL HH
 *
 * Note: byte access is mandatory, because function should be applicable to any 16bit data value
 *       regardless whether it's 16bit aligned or not (e.g. data communication buffers)
 *
 * \param       xValue_pu8      pointer to value to be byte-swapped
 * \seealso     Cpu_SwapBytes16
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_SwapBytes32(uint8 *xValue_pu8)
{
    uint8 temp_u8;

    /* swap bytes 0 <-> 3 */
    temp_u8 = xValue_pu8[0];
    xValue_pu8[0] = xValue_pu8[3];
    xValue_pu8[3] = temp_u8;
    /* swap bytes 1 <-> 2 */
    temp_u8 = xValue_pu8[1];
    xValue_pu8[1] = xValue_pu8[2];
    xValue_pu8[2] = temp_u8;
}

/**
 ***************************************************************************************************
 * Cpu_Wait - wait for a number of CPU cycles (without doing FPI bus accesses)
 *
 * This function waits for (at least) a specified number of CPU clock cycles.
 * It does not use system timer and thus avoids accessing/loading the FPI bus.
 *
 * \param       numCycles_u32      number of CPU clock cycles
 ***************************************************************************************************
 */

CPU_INLINE void Cpu_Wait(uint32 numCycles_u32)
{
    uint8* ct_pu8;

    /* initialize loop counter */
    ct_pu8      = (uint8*)numCycles_u32;

    /* wait loop */
    asm volatile(
    "                       \n\
    1:                      \n\
        nop                 \n\
        loop   %0,1b        \n\
    "
    : "+a"(ct_pu8) : : "memory");

    return;
}

/**
 ***************************************************************************************************
 * Cpu_GetSysClock - Get current system clock frequency.
 *
 * \return Current system clock in kHz
 ***************************************************************************************************
 */

CPU_INLINE uint32 Cpu_GetSysClock(void)
{
    return(MACHINE_TICKS_PER_US * 1000UL);
}

/* end of #ifdef block _CPU_INL_H */
#endif
