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
 * $Filename__:memlay_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:12.02.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:memlay_prot$ 
 * $Variant___:1.13.0$ 
 * $Revision__:1$ 
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
 * 1.13.0; 1     12.02.2010 JWI2SI
 *   add tc1793
 * 
 * 1.13.0; 0     27.01.2010 JWI2SI
 *   I: remove warning for MemLay_bypreserved
 * 
 * 1.11.0; 0     04.08.2009 AWL2SI
 *   B_MEMLAY.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MEMLAY_PROT_H
#define _MEMLAY_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      MEMLAY protected header.
 *      This is not a configuration file. Do not modify or branch this file for projects!
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 *********************************************************************
 * Extern declarations
 *********************************************************************
 */

/* CSA structure */
/* MISRA RULE 18.4 VIOLATION: union is needed */
typedef union
{
    struct
    {
        uint32 PCXI_u32;
        uint32 PSW_u32;
        uint32 A10_u32;
        uint32 A11_u32;
        uint32 D8_u32;
        uint32 D9_u32;
        uint32 D10_u32;
        uint32 D11_u32;
        uint32 A12_u32;
        uint32 A13_u32;
        uint32 A14_u32;
        uint32 A15_u32;
        uint32 D12_u32;
        uint32 D13_u32;
        uint32 D14_u32;
        uint32 D15_u32;
    } UpperContextCall_s;
    struct
    {
        uint32 PCXI_u32;
        uint32 PC_u32;
        uint32 A2_u32;
        uint32 A3_u32;
        uint32 D0_u32;
        uint32 D1_u32;
        uint32 D2_u32;
        uint32 D3_u32;
        uint32 A4_u32;
        uint32 A5_u32;
        uint32 A6_u32;
        uint32 A7_u32;
        uint32 D4_u32;
        uint32 D5_u32;
        uint32 D6_u32;
        uint32 D7_u32;
    } LowerContextInt_s;
}MemLay_CSA_t;


/* infoblock for initialized ram */
typedef struct
{
    uint32* Destination_pu32;
    uint32* Source_pu32;
    uint32  numData_u32;
}MemLay_RamInit_t;

/* Variable for CSA. 64 Byte alignment is required at link stage. */
extern MemLay_CSA_t MemLay_CSA_as[] __attribute__ ((asection(".userCSA_a64")));

extern const IB_Epilog_t MemLay_EpilogAsw0_cs  \
    __attribute__ ((asection(".asw0_epilog","f=a")));

extern const IB_Epilog_t MemLay_EpilogDs0_cs   \
    __attribute__ ((asection(".ds0_epilog","f=a")));

__PRAGMA_USE__eos__50ms_1s__constant__s32__START
/* MemLay_OCRamOverlayInit_cas is only present, if MEMLAY_NUM_OCRAM_OVERLAY_INIT is defined */
extern const MemLay_RamInit_t MemLay_OCRamOverlayInit_cas[];
/* MemLay_OCRamOverlaySet_cas is only present, if MEMLAY_NUM_OCRAM_OVERLAY_SET is defined */
#ifdef _OVC_1797_H
extern const OVC_OvrReg_t MemLay_OCRamOverlaySet_cas[];
#endif
#ifdef _OVC_1793_H
extern const OVC_OvrReg_t MemLay_OCRamOverlaySet_cas[];
#endif
__PRAGMA_USE__eos__50ms_1s__constant__s32__END

/* _MEMLAY_PROT_H */
#endif
