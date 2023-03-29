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
 * $Filename__:memlay_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:12.10.2010$
 * $Class_____:SWHDR$
 * $Name______:memlay_pub$
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
 * 1.14.0; 0     12.10.2010 JWI2SI
 *   D-Cache for TC1793
 * 
 * 1.13.0; 2     12.07.2010 JWI2SI
 *   bugfix in memlay_rtprptect.c
 * 
 * 1.13.0; 1     07.05.2010 JWI2SI
 *   Support TC1724
 * 
 * 1.13.0; 0     27.01.2010 JWI2SI
 *   I: remove warnings
 * 
 * 1.12.0; 0     23.11.2009 AWL2SI
 *   B_MEMLAY.12.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _MEMLAY_PUB_H
#define _MEMLAY_PUB_H

/*!
 *********************************************************************
 * \moduldescription
 *          Header file for MemLay interface.
 *          This is not a configuration file. Do not modify or branch this file for projects!
 *
 * \scope   API
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

/* relocation offset for noncached access */
#define MEMLAY_OFFSET_NONCACHED 0x20000000

#ifndef LINK_RUN
/* MemLay macros for locating variables and functions in specific sections */
/* Examples for using:                                                     */
/* Variable in ProtRam : MEMLAY_USE_PROTRAM(extern uint32, Test);          */
/* Function in SpRam   : MEMLAY_USE_SPRAM_FCT(extern void Test(void));     */
/* Monitored variables : MEMLAY_USE_MOF_RAM(extern uint8, Test);           */

/* MISRA RULE 90,93,96 VIOLATION: MISRA does not fit our needs:            */
/* The Macro body cannot be enclosed in () for syntactical reasons.        */
/* The Macro parameters cannot be enclosed in () for syntactical reasons.  */
/* Global Variables cannot declared/defined in functions                   */
/**/
/* Constants, far addressing, noncached */
#define MEMLAY_USE_CONST_NONCACHED(typ, var)    typ var __attribute__ ((asection(".rodata.noncached","f=a")))
/* Constants, absolute addressing */
#define MEMLAY_USE_CONST_ABS(typ, var)          typ var __attribute__ ((asection(".zdata.rodata","f=az")))
/* Constants, register relative addressing */
#define MEMLAY_USE_CONST_NEAR(typ, var)         typ var __attribute__ ((asection(".sdata.rodata","f=as")))
/**/
/* Code ASW noncached */
#define MEMLAY_USE_ASW_NONCACHED(fct)               fct __attribute__ ((asection(".text.noncached","f=ax")))
/* Code ASW 0 */
#define MEMLAY_USE_ASW_0(fct)                       fct __attribute__ ((asection(".text.asw0","f=ax")))
/* Code ASW 1 */
#define MEMLAY_USE_ASW_1(fct)                       fct __attribute__ ((asection(".text.asw1","f=ax")))
/* Code ASW 2 */
#define MEMLAY_USE_ASW_2(fct)                       fct __attribute__ ((asection(".text.asw2","f=ax")))
/**/
/* Variables RAM 0 */
#define MEMLAY_USE_RAM_0(typ, var)              typ var __attribute__ ((asection(".bss.ram0","f=aw")))
/* Variables RAM 0, absolute addressing */
#define MEMLAY_USE_RAM_0_ABS(typ, var)          typ var __attribute__ ((asection(".zbss.ram0","f=awz")))
/* Bit Variables RAM 0 */
#define MEMLAY_USE_RAM_0_BIT(typ, var)          typ var __attribute__ ((asection(".bbss.ram0","f=awbz")))
/**/
/* Variables RAM 1 */
#define MEMLAY_USE_RAM_1(typ, var)              typ var __attribute__ ((asection(".bss.ram1","f=aw")))
/* Variables RAM 1, absolute addressing */
#define MEMLAY_USE_RAM_1_ABS(typ, var)          typ var __attribute__ ((asection(".zbss.ram1","f=awz")))
/* Bit Variables RAM 1 */
#define MEMLAY_USE_RAM_1_BIT(typ, var)          typ var __attribute__ ((asection(".bbss.ram1","f=awbz")))
/**/
/* Variables RAM 2 */
#define MEMLAY_USE_RAM_2(typ, var)              typ var __attribute__ ((asection(".bss.ram2","f=aw")))
/* Variables, register relative addressing */
#define MEMLAY_USE_RAM_NEAR(typ, var)           typ var __attribute__ ((asection(".sbss","f=aws")))
/**/
/* Variables in Restricted Ram: Read protected for calibration and diagnosis */
#define MEMLAY_USE_RAM_RESTRICTED(typ, var)     typ var __attribute__ ((asection(".bss.ram0.restricted","f=aw")))
#define MEMLAY_USE_RAM_RESTRICTED_A(typ, var, align) \
                                                typ var MEMLAY_ATTRIBUTE_A(.bss.ram0.restricted.a##align, f=aw, a=align)
/* Variables in Restricted Protected Ram: Read protected for calibration and diagnosis */
#define MEMLAY_USE_PROTRAM_RESTRICTED(typ, var)  typ var __attribute__ ((asection(".bss.protram.restricted","f=aw")))
#define MEMLAY_USE_PROTRAM_RESTRICTED_A(typ, var, align) \
                                                typ var MEMLAY_ATTRIBUTE_A(.bss.protram.restricted.a##align, f=aw, a=align)
/**/
/* Variables in Protected Ram */
#define MEMLAY_USE_PROTRAM(typ, var)            typ var __attribute__ ((asection(".bss.protram","f=aw")))
#define MEMLAY_USE_PROTRAM_A(typ, var, align)   typ var MEMLAY_ATTRIBUTE_A(.bss.protram.a##align, f=aw, a=align)
/* Variables in Protected Ram, absolute addressing */
#define MEMLAY_USE_PROTRAM_ABS(typ, var)        typ var __attribute__ ((asection(".zbss.protram","f=awz")))
#define MEMLAY_USE_PROTRAM_ABS_A(typ, var, align) \
                                                typ var MEMLAY_ATTRIBUTE_A(.zbss.protram.a##align, f=awz, a=align)
/* Bit Variables in Protected Ram */
#define MEMLAY_USE_PROTRAM_BIT(typ, var)        typ var __attribute__ ((asection(".bbss.protram","f=awbz")))
/**/
/* Variables in emulated non volatile (env) Ram */
#define MEMLAY_USE_ENVRAM(typ, var)             typ var __attribute__ ((asection(".bss.envram","f=aw")))
#define MEMLAY_USE_ENVRAM_A(typ, var, align)    typ var MEMLAY_ATTRIBUTE_A(.bss.envram.a##align, f=aw, a=align)
#define MEMLAY_USE_ENVRAM_INIT(typ, var)        typ var __attribute__ ((asection(".data.envram","f=aw")))
#define MEMLAY_USE_ENVRAM_INIT_A(typ, var, align) typ var MEMLAY_ATTRIBUTE_A(.data.envram.a##align, f=aw, a=align)
/**/
/* Functions in Scratch Pad Ram */
#define MEMLAY_USE_SPRAM_CODE(fct)                  fct __attribute__ ((asection(".text.spram","f=ax")))
/* Variables in Scratch Pad Ram */
#define MEMLAY_USE_SPRAM(typ, var)              typ var __attribute__ ((asection(".bss.spram","f=aw")))
/**/
/* Force inlining */
#define MEMLAY_USE_FORCE_INLINE(fct)            static inline fct __attribute__ ((always_inline)); \
                                                static inline fct
/**/
/* Variables in Dual Ported Ram: special alignment sections. Must only contain size aligned data.*/
/* Compiler does support alignment up to 32 bytes. Larger alignment must be handled by the linker */
#define MEMLAY_USE_DPRAM_A1024(typ, var)        typ var __attribute__ ((asection(".bss.dpram_a1024","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A512(typ, var)         typ var __attribute__ ((asection(".bss.dpram_a512","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A256(typ, var)         typ var __attribute__ ((asection(".bss.dpram_a256","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A128(typ, var)         typ var __attribute__ ((asection(".bss.dpram_a128","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A64(typ, var)          typ var __attribute__ ((asection(".bss.dpram_a64","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A32(typ, var)          typ var __attribute__ ((asection(".bss.dpram_a32","f=aw","a=32")))
#define MEMLAY_USE_DPRAM_A16(typ, var)          typ var __attribute__ ((asection(".bss.dpram_a16","f=aw","a=16")))
#define MEMLAY_USE_DPRAM_A8(typ, var)           typ var __attribute__ ((asection(".bss.dpram.a8","f=aw","a=8")))
#define MEMLAY_USE_DPRAM_A4(typ, var)           typ var __attribute__ ((asection(".bss.dpram.a4","f=aw","a=4")))
#define MEMLAY_USE_DPRAM_A2(typ, var)           typ var __attribute__ ((asection(".bss.dpram.a2","f=aw","a=2")))
#define MEMLAY_USE_DPRAM_A1(typ, var)           typ var __attribute__ ((asection(".bss.dpram.a1","f=aw","a=1")))
/* Variables in Dual Ported Ram */
#define MEMLAY_USE_DPRAM(typ, var)              typ var __attribute__ ((asection(".bss.dpram","f=aw")))
/* Measurement points */
#define MEMLAY_USE_MPRAM(typ, var)              typ var __attribute__ ((asection(".bss.mpram","f=aw")))
#define MEMLAY_USE_MPRAM_A(typ, var, align)     typ var MEMLAY_ATTRIBUTE_A(.bss.mpram.a##align, f=aw, a=align)
/* for import of FAR adressed linker labels */
#define MEMLAY_USE_LABEL(typ, var)              typ var __attribute__ ((asection(".label_only")))
/**/
/* for monitoring */
#define MEMLAY_USE_MO_RAM_CYCCHECK(typ, var)     typ var __attribute__ ((asection(".bss.Mo_RamCyclicCheck","f=aw")))
#define MEMLAY_USE_MO_RAM_CYCCHECK_A(typ, var, align) \
                                                 typ var MEMLAY_ATTRIBUTE_A(.bss.Mo_RamCyclicCheck.a##align, f=aw, a=align)
#define MEMLAY_USE_MO_RAM_CPL(typ, var)          typ var __attribute__ ((asection(".bss.Mo_RamCpl","f=aw")))
#define MEMLAY_USE_MO_RAM_CPL_A(typ, var, align) typ var MEMLAY_ATTRIBUTE_A(.bss.Mo_RamCpl.a##align, f=aw, a=align)
#define MEMLAY_USE_MO_RAM_COM(typ, var)          typ var __attribute__ ((asection(".bss.Mo_RamCom","f=aw")))
#define MEMLAY_USE_MO_RAM_COM_A(typ, var, align) typ var MEMLAY_ATTRIBUTE_A(.bss.Mo_RamCom.a##align, f=aw, a=align)
#define MEMLAY_USE_MO_RAM_IT(typ, var)           typ var __attribute__ ((asection(".bss.Mo_RamIt","f=aw")))
#define MEMLAY_USE_MO_RAM_IT_A(typ, var, align)  typ var MEMLAY_ATTRIBUTE_A(.bss.Mo_RamIt.a##align, f=aw, a=align)
#define MEMLAY_USE_MO_RAM_TMP(typ, var)          typ var __attribute__ ((asection(".bss.Mo_RamTmp","f=aw")))
#define MEMLAY_USE_MO_RAM_TMP_A(typ, var, align) typ var MEMLAY_ATTRIBUTE_A(.bss.Mo_RamTmp.a##align, f=aw, a=align)
#define MEMLAY_USE_EARLY_CLEARED_RAM(typ, var)   typ var __attribute__ ((asection(".bss.earlycleared","f=aw")))
#define MEMLAY_USE_MO_CHCCODE(fct)                   fct __attribute__ ((asection(".Mo_ChCCode","f=ax")))
#define MEMLAY_USE_MO_CODE(fct)                      fct __attribute__ ((asection(".Mo_Code","f=ax")))
/* deprecated, for compatibility only: */
#define MEMLAY_USE_MOF_RAM(typ, var)            typ var __attribute__ ((asection(".bss.MoF_Ram","f=aw")))
#define MEMLAY_USE_MOF_CPLRAM(typ, var)         typ var __attribute__ ((asection(".bss.MoF_CplRam","f=aw")))
#define MEMLAY_USE_MOF_COMRAM(typ, var)         typ var __attribute__ ((asection(".bss.MoF_ComRam","f=aw")))
#define MEMLAY_USE_MOI_RAM(typ, var)            typ var __attribute__ ((asection(".bss.MoI_Ram","f=aw")))
#define MEMLAY_USE_MOF_DIABITRAM(typ, var)      typ var __attribute__ ((asection(".bbss.MoF_DiaBitRam","f=awb")))
#define MEMLAY_USE_MOF_TMPRAM(typ, var)         typ var __attribute__ ((asection(".bss.MoF_TmpRam","f=aw")))
#define MEMLAY_USE_MOF_NVRAM(typ, var)          typ var __attribute__ ((asection(".bss.MoF_NvRam","f=aw")))
/**/
/* define for generatin attribute string. Only to be used by other defines of memlay_pub.h */
/* MISRA RULE 19.12 VIOLATION: multiple # operators where used to string edition */
#define MEMLAY_ATTRIBUTE_A(SECTION, FLAG, ALIGN) __attribute__ ((asection(#SECTION, #FLAG, #ALIGN)))

/* return value for MemLay_Translate24to32() */
/* invalid address depends on hardware, as there must be no memory at this address */
#define MEMLAY_AD_INVALID 0xFFFFFFFFUL

#define MEMLAY_RAM_INIT MemLay_RamInit

/* Parameter "direction_u32" in the function Memlay_ChkAccPerm */
#define MEMLAY_ACCPR_ST_READ               0x00 /* Request Read */
#define MEMLAY_ACCPR_ST_WRITE              0x01 /* Request Write */

/*Return values of Memlay_ChkAccPerm function */

#define MEMLAY_ACCPR_PERMDENIED                   0x00     /* Permission denied*/
#define MEMLAY_ACCPR_OK                           0x01     /* Access OK*/
#define MEMLAY_ACCPR_CNC                          0x02     /* Condition not correct*/
#define MEMLAY_ACCPR_INVALID_ADDRESS              0x03     /* Invalid address*/

/* MISRA RULE 5 VIOLATION: no alternative available for asm code */
/* Initalize CSA before MemLay_CacheInit, because CSA size has to be granted */
/* Usage only from Core_Env (_main() ). Otherwise do not use this define! */
#define MEMLAY_CSA_INIT \
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
        MEMLAY_CSA_LOOP:                                                                                \n\
        mov.d   %d1, %a4                            # %d1 = current CSA address                  \n\
        extr.u  %d1, %d1, 6, 16                     # get CSA index                              \n\
        or      %d1, %d1, %d0                       # add segment number                         \n\
        st.w    [%a3], %d1                          # store nextCSA pointer                      \n\
        mov.aa  %a4, %a3                            # %a4 = current CSA address                  \n\
        lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                         \n\
        loop    %a5, MEMLAY_CSA_LOOP                       # repeat until done                          \n\
        mov.d   %d1, %a4                            # %d1 = current CSA address                  \n\
        extr.u  %d1, %d1, 6, 16                     # get CSA index                              \n\
        or      %d1, %d1, %d0                       # add segment number                         \n\
        mtcr    $fcx, %d1                           # initialize FCX                             \n\
        isync                                                                                    \n\
    ");

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */
/* infoblock for cleared ram */
typedef struct
{
    uint32* Start_pu32;
    uint32  numData_u32;
}MemLay_RamInfo_t;

/* infoblock for dataset mapping */
typedef struct
{
    uint32  adFlashStart_u32;
    uint32  adFlashEnd_u32;
    uint32  LinkOffset_u32;
    uint32  OCRamOffset_u32;
}MemLay_MapInfo_t;

/*
 *********************************************************************
 * Extern declarations
 *********************************************************************
 */
extern const uint32 MemLay_CompIdDs0_u32     __attribute__ ((asection(".label_only","f=a")));
extern const uint32 MemLay_CompRefDs0_u32    __attribute__ ((asection(".ds0_compref","f=a")));
extern       uint32 MemLay_CompRefDs0Etk_u32 __attribute__ ((asection(".label_only","f=a")));
extern       uint32 MemLay_CompRefEtk_u32    __attribute__ ((asection(".bss.distab_write","f=aw")));

MEMLAY_USE_RAM_0_ABS(extern uint8,           MemLay_stMpFunc);
/* MemLay_ctMpAccess and MemLay_adMpFuncAddress must be absolut addressed, due to absolut access in asm. code  */
MEMLAY_USE_RAM_0_ABS(extern uint32,          MemLay_ctMpAccess);
MEMLAY_USE_RAM_0_ABS(extern uint32,          MemLay_adMpFuncAddress);

__PRAGMA_USE__eos__10ms__RAM__arr32__START
extern       uint32 MemLay_SaveDebugCx_au32[4] __attribute__ ((aligned (16)));
__PRAGMA_USE__eos__10ms__RAM__arr32__END

/* linker labels for restricted ram and protram */
MEMLAY_USE_LABEL(extern uint32, __PROTRAM_RESTRICTED_START);
MEMLAY_USE_LABEL(extern uint32, __PROTRAM_RESTRICTED_END);
MEMLAY_USE_LABEL(extern uint32, __RAM0_RESTRICTED_START);
MEMLAY_USE_LABEL(extern uint32, __RAM0_RESTRICTED_END);

/* No pragmas for this functions! */
/* Code must not be relocated to SPRAM, because functions can be called before SPRAM init. */
extern void   MemLay_Proc_ReIni(void);
extern void   MemLay_RamInit(void);
extern uint32 MemLay_GetIntInfo(uint32 BlkId_u32, uint32 Index_u32);

__PRAGMA_USE__CODE__eos__NormalSpeed__START
extern void   MemLay_Rtprotect_Proc_Ini(void);
extern void   MemLay_Rtprotect10ms_Proc(void);
extern void   MemLay_Rtprotect_Shutdown(void);
extern void   Memlay_RtprotectBreak(void);
extern uint32 MemLay_CRCA_8_32(const uint8 *adData_pcu8, const uint8 *adEnd_pcu8,
                               uint32 CRCValue_u32);
extern uint32 MemLay_CRCA_32_32(const uint32 *adData_pcu32, const uint32 *adEnd_pcu32,
                                uint32 CRCValue_u32);
extern uint32 MemLay_Translate24to32(uint32 adInput24_u32);
extern uint32 Memlay_ChkAccPerm(uint32 adStart_u32, uint32 size_u32, uint32 direction_u32,
                       uint32 accPerm_u32 );

__PRAGMA_USE__CODE__eos__NormalSpeed__END


/**
 ***************************************************************************************************
 * MemLay_TranslateToRpb - Translate CPU address to SPB address.
 *
 * Translate CPU address to SPB address
 *
 * \param  adCpuVar_cu32    : address to be translated
 * \return                  : corresponding address on SPB
 * \retval                  : translated address
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
/* MISRA RULE 52 VIOLATION: MISRA doesn't know inline sometimes */
MEMLAY_USE_FORCE_INLINE(uint32 MemLay_TranslateToSpb(const uint32 adCpuVar_cu32))
{
    /* TC1724/TC1767/TC1782/TC1797 can use the same address on SPB */
    return (adCpuVar_cu32);
}


/**
 ***************************************************************************************************
 * MemLay_TranslateToRpb - Translate CPU address to RPB address.
 *
 * Translate CPU address to RPB address
 *
 * \param  adCpuVar_cu32    : address to be translated
 * \return                  : corresponding address on RPB
 * \retval                  : translated address
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
/* MISRA RULE 52 VIOLATION: MISRA doesn't know inline sometimes */
MEMLAY_USE_FORCE_INLINE(uint32 MemLay_TranslateToRpb(const uint32 adCpuVar_cu32))
{
    return (MemLay_TranslateToSpb(adCpuVar_cu32));
}

/**
 ***************************************************************************************************
 * MemLay_TranslateToNonCached - Tanslate to noncached address.
 *
 * Redirect address from segment 8 to segment A to disable cache or data read buffer.
 *
 * \param  adVar_u32        : address to be translated
 * \return                  : address of corresponding noncached memory
 * \retval                  : translated address
 * \seealso MemLay_TranslateToCached()
 * \usedresources
 ***************************************************************************************************
 */
/* MISRA RULE 52 VIOLATION: MISRA doesn't know inline sometimes */
MEMLAY_USE_FORCE_INLINE(uint32 MemLay_TranslateToNonCached(uint32 adVar_u32))
{
    /* redirect segment 8/9 to segment A/B to enable cache or data read buffer */
    if ((adVar_u32 >> 29) == 0x4)
    {
        adVar_u32 += MEMLAY_OFFSET_NONCACHED;
    }

    return adVar_u32;
}

/**
 ***************************************************************************************************
 * MemLay_TranslateToCached - Tanslate to cached address.
 *
 * Redirect address from segment A to segment 8 to enable cache or data read buffer.
 *
 * \param  adVar_u32        : address to be translated
 * \return                  : address of corresponding cached memory
 * \retval                  : translated address
 * \seealso MemLay_TranslateToNonCached()
 * \usedresources
 ***************************************************************************************************
 */
/* MISRA RULE 52 VIOLATION: MISRA doesn't know inline sometimes */
MEMLAY_USE_FORCE_INLINE(uint32 MemLay_TranslateToCached(uint32 adVar_u32))
{
    /* redirect segment A/B to segment 8/9 to enable cache or data read buffer */
    if ((adVar_u32 >> 29) == 0x5)
    {
        adVar_u32 -= MEMLAY_OFFSET_NONCACHED;
    }

    return adVar_u32;
}

/* LINK_RUN */
#endif
/* _MEMLAY_PUB_H */
#endif
