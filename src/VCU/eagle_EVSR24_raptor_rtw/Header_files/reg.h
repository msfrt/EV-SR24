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
 * $Filename__:reg.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NAS4COB$ 
 * $Date______:29.03.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:reg$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 0     29.03.2012 NAS4COB
 *   Reg: she_1793.h file update
 * 
 * 1.14.0; 0     02.02.2011 RAT1COB
 *   TC1724 update
 * 
 * 1.12.0; 2     22.10.2010 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 1     19.05.2010 RAT1COB
 *   Updated for TC1793 and TC1724  header files
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: reg.h
 *      Version: \main\basis\b_CORE\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _REG_H
#define _REG_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                Register access macros for peripheral modules
 *
 * \scope            [API]
 ***************************************************************************************************
*/

/*
 * internal macro definitions
 */

/* build register structure identifier */
/* MISRA RULE 19.10 VIOLATION: The parameter should not be closed with () */
#define _REG(mod,reg) (mod.reg)

/* build name of bit(field) position #define */
#define _POS(mod,bit) (mod##_##bit##_POS)

/* build name of bit(field) length #define */
#define _LEN(mod,bit) (mod##_##bit##_LEN)

/* build a mask with ones at the bit position(s) of a specified bit(field) */
#define _MSK(mod,bit) ((uint32)(((1ull << (_LEN(mod,bit))) - 1ull) << (_POS(mod,bit))))

/**
 ***************************************************************************************************
 * Reg_SetBit(mod,reg,bit).
 *
 * Set a bit in a peripheral module register to "1".
 * This macro uses the optimum addressing mode for each peripheral module,
 * e.g. single bit instructions (st.t) if possible.
 *
 * \param mod - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg - register on this peripheral
 * \param bit - bit to be set
 ***************************************************************************************************
 */

#define Reg_SetBit(mod,reg,bit) _REG_SET_BIT_STD(mod,reg,bit)

/**
 ***************************************************************************************************
 * Reg_ClrBit(mod,reg,bit).
 *
 * Set a bit in a peripheral module register to "0".
 * This macro uses the optimum addressing mode for each peripheral module,
 * e.g. single bit instructions (st.t) if possible.
 *
 * \param mod - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg - register on this peripheral
 * \param bit - bit to be cleared
 ***************************************************************************************************
 */

#define Reg_ClrBit(mod,reg,bit) _REG_CLR_BIT_STD(mod,reg,bit)

/**
 ***************************************************************************************************
 * Reg_PutBit(mod,reg,bit,val).
 *
 * Set the value of a bit in a peripheral register
 * This macro uses the optimum addressing mode for each peripheral module,
 * e.g. single bit instructions (st.t) if possible.
 *
 * \param mod - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg - register on this peripheral
 * \param bit - bit to be set
 * \param val - value
 ***************************************************************************************************
 */

#define Reg_PutBit(mod,reg,bit,val) _REG_PUT_BIT_STD(mod,reg,bit,val)

/**
 ***************************************************************************************************
 * Reg_GetBit(mod,reg,bit).
 *
 * Read the value of a bit in a peripheral register
 *
 * \param mod - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg - register on this peripheral
 * \param bit - bit to be read
 * \return value of the bit (0/1)
 ***************************************************************************************************
 */

#define Reg_GetBit(mod,reg,bit)                                   \
            ( (bool)((_REG(mod,reg) & _MSK(mod,bit)) != 0ul ) )

/**
 ***************************************************************************************************
 * Reg_SetBitfield(mod,reg,bitfield,val).
 *
 * Set a bitfield (or a single bit) in a peripheral module register to a specified value
 *
 * \param mod      - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg      - register on this peripheral
 * \param bitfield - bit or bitfield to be modified
 * \param val      - desired value for bit(field)
 ***************************************************************************************************
 */

#define Reg_SetBitField(mod, reg, bitfield, val)                                        \
        ( _REG(mod,reg) =   ( _REG(mod,reg) & ~_MSK(mod,bitfield) )                     \
                          | ( ((val) << _POS(mod,bitfield)) & _MSK(mod,bitfield) ) )

/**
 ***************************************************************************************************
 * Reg_GetBitfield(mod,reg,bit).
 *
 * Read the value of a bit in a peripheral register
 *
 * \param mod      - peripheral module to work on (e.g. ADC0, CAN...)
 * \param reg      - register on this peripheral
 * \param bitfield - bitfield to be read
 * \return value of the bitfiled
 ***************************************************************************************************
 */

#define Reg_GetBitField(mod, reg, bitfield)                                 \
            ((_REG(mod,reg) & _MSK(mod,bitfield)) >> _POS(mod,bitfield))

/**
 ***************************************************************************************************
 * Reg_Mask(bit).
 *
 * Return a bitmask for the specified bit/bitfield which can be used for logical operations
 *
 * \param bit - bit(field) for which a bitmask should be created
 * \return bitmask, contains "1" at the bit position(s) occupied by the specified bit(field)
 ***************************************************************************************************
 */

#define Reg_Mask(mod,reg,bit) _MSK(mod,bit)

/**
 ***************************************************************************************************
 * Reg_Shift(bit).
 *
 * Return the number of bits a value must be shifted to "fit" into the specified bit(field).
 * A possible use case is to extract a bitfield by ANDing a mask created with Reg_Mask() to the
 * register value and right-shifting the result by Reg_Shift().
 *
 * \param bit - bit(field) for which the shift value is to be determined
 * \return shift count
 ***************************************************************************************************
 */

#define Reg_Shift(mod,reg,bit) _POS(mod,bit)

/*
 ***************************************************************************************************
 * Set a bit in a peripheral register to "1", use standard addressing
 ***************************************************************************************************
 */

#define _REG_SET_BIT_STD(mod, reg, bit)                                     \
            ( _REG(mod,reg) |= _MSK(mod,bit) )

/*
 ***************************************************************************************************
 * Set a bit in a peripheral register to "0", use standard addressing
 ***************************************************************************************************
 */

#define _REG_CLR_BIT_STD(mod, reg, bit)                                     \
            ( _REG(mod,reg) &= ~_MSK(mod,bit) )

/*
 ***************************************************************************************************
 * Set a bit in a peripheral register to a given value, use standard addressing
 ***************************************************************************************************
 */

#define _REG_PUT_BIT_STD(mod, reg, bit, val)                                \
            ( _REG(mod,reg) = ((val) != 0ul) ?                              \
                              (_REG(mod,reg) | _MSK(mod,bit)) :              \
                              (_REG(mod,reg) & ~_MSK(mod,bit)))

/*
 ***************************************************************************************************
 * For each bit manipulation function, the optimum method is defined specifically for each
 * peripheral module. For those modules located in the first 16kByte of Segment 15,
 * absolute addressing is possible. For the other modules, standard addressing modes
 * have to be applied.
 ***************************************************************************************************
 */

/*
 * hardware specific addressing for TC1796 (METIS)
 */

#if (MACHINE_TYPE == TC_1796)

#define REG_ADC_H          "adc_1796.h"
#define REG_ASC_H          "asc_1796.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1796.h"
#define REG_CBS_H          "cbs_1796.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1796.h"
#define REG_CPS_H          "cps_1796.h"
#define REG_CPU_H          "core_env.h"
#define REG_CSFR_H         "csfr_1796.h"
#define REG_DBCU_H         "dbcu_1796.h"
#define REG_DMA_H          "dma_1796.h"
#define REG_DMI_H          "dmi_1796.h"
#define REG_DMU_H          "dmu_1796.h"
#define REG_EBU_H          "ebu_1796.h"
#define REG_EMEM_H         "emem_1796.h"
#define REG_ERAY_H         "core_env.h"
#define REG_FADC_H         "fadc_1796.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1796.h"
#define REG_FPU_H          "core_env.h"
#define REG_GENERAL_H      "general_1796.h"
#define REG_GPR_H          "gpr_1796.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1796.h"
#define REG_GPTA1_H        "gpta1_1796.h"
#define REG_LBCU_H         "core_env.h"
#define REG_LFI_H          "lfi_1796.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "ltca2_1796.h"
#define REG_MCHK_H         "mchk_1796.h"
#define REG_MLI_H          "mli_1796.h"
#define REG_MMU_H          "core_env.h"
#define REG_MPR_H          "mpr_1796.h"
#define REG_MSC_H          "msc_1796.h"
#define REG_OVC_H          "core_env.h"
#define REG_PBCU_H         "pbcu_1796.h"
#define REG_PCP_H          "pcp_1796.h"
#define REG_PMI_H          "pmi_1796.h"
#define REG_PMU_H          "pmu_1796.h"
#define REG_PORT_H         "port_1796.h"
#define REG_RBCU_H         "rbcu_1796.h"
#define REG_REGS_H         "regs_1796.h"
#define REG_SBCU_H         "sbcu_1796.h"
#define REG_SCU_H          "scu_1796.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1796.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1796.h"
#define REG_XBAR_H         "core_env.h"


/* #endif */

/*
 * hardware specific addressing for TC1766 (LedaLight)
 */

#elif (MACHINE_TYPE == TC_1766)

#define REG_ADC_H          "adc_1766.h"
#define REG_ASC_H          "asc_1766.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1766.h"
#define REG_CBS_H          "cbs_1766.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1766.h"
#define REG_CPS_H          "cps_1766.h"
#define REG_CPU_H          "core_env.h"
#define REG_CSFR_H         "csfr_1766.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1766.h"
#define REG_DMI_H          "dmi_1766.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "core_env.h"
#define REG_FADC_H         "fadc_1766.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1766.h"
#define REG_FPU_H          "core_env.h"
#define REG_GENERAL_H      "general_1766.h"
#define REG_GPR_H          "gpr_1766.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1766.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "lbcu_1766.h"
#define REG_LFI_H          "lfi_1766.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "core_env.h"
#define REG_MCHK_H         "mchk_1766.h"
#define REG_MLI_H          "mli_1766.h"
#define REG_MMU_H          "core_env.h"
#define REG_MPR_H          "mpr_1766.h"
#define REG_MSC_H          "msc_1766.h"
#define REG_OVC_H          "core_env.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1766.h"
#define REG_PMI_H          "pmi_1766.h"
#define REG_PMU_H          "pmu_1766.h"
#define REG_PORT_H         "port_1766.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1766.h"
#define REG_SBCU_H         "sbcu_1766.h"
#define REG_SCU_H          "scu_1766.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1766.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1766.h"
#define REG_XBAR_H         "core_env.h"

/* #endif */

/*
 * hardware specific addressing for TC1762
 */

/* workaround until TC 1762 is supported by CPU module configuration */
#elif ((defined TC_1762) && (MACHINE_TYPE == TC_1762))

#define REG_ADC_H          "adc_1762.h"
#define REG_ASC_H          "asc_1762.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1762.h"
#define REG_CBS_H          "cbs_1762.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1762.h"
#define REG_CPS_H          "cps_1762.h"
#define REG_CPU_H          "core_env.h"
#define REG_CSFR_H         "csfr_1762.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1762.h"
#define REG_DMI_H          "dmi_1762.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "core_env.h"
#define REG_FADC_H         "fadc_1762.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1762.h"
#define REG_FPU_H          "core_env.h"
#define REG_GENERAL_H      "general_1762.h"
#define REG_GPR_H          "gpr_1762.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1762.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "core_env.h"
#define REG_LFI_H          "lfi_1762.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "core_env.h"
#define REG_MCHK_H         "mchk_1762.h"
#define REG_MLI_H          "mli_1762.h"
#define REG_MMU_H          "core_env.h"
#define REG_MPR_H          "mpr_1762.h"
#define REG_MSC_H          "msc_1762.h"
#define REG_OVC_H          "core_env.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "core_env.h"
#define REG_PMI_H          "pmi_1762.h"
#define REG_PMU_H          "pmu_1762.h"
#define REG_PORT_H         "port_1762.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1762.h"
#define REG_SBCU_H         "sbcu_1762.h"
#define REG_SCU_H          "scu_1762.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1762.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1762.h"
#define REG_XBAR_H         "core_env.h"

/* #endif */

/*
 * hardware specific addressing for TC1767
 */

#elif (MACHINE_TYPE == TC_1767)

#define REG_ADC_H          "adc_1767.h"
#define REG_ASC_H          "asc_1767.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1767.h"
#define REG_CBS_H          "cbs_1767.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1767.h"
#define REG_CPS_H          "cps_1767.h"
#define REG_CPU_H          "cpu_1767.h"
#define REG_CSFR_H         "csfr_1767.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1767.h"
#define REG_DMI_H          "dmi_1767.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "core_env.h"
#define REG_FADC_H         "fadc_1767.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1767.h"
#define REG_FPU_H          "fpu_1767.h"
#define REG_GENERAL_H      "general_1767.h"
#define REG_GPR_H          "gpr_1767.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1767.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "lbcu_1767.h"
#define REG_LFI_H          "lfi_1767.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "ltca2_1767.h"
#define REG_MCHK_H         "mchk_1767.h"
#define REG_MLI_H          "mli_1767.h"
#define REG_MMU_H          "mmu_1767.h"
#define REG_MPR_H          "mpr_1767.h"
#define REG_MSC_H          "msc_1767.h"
#define REG_OVC_H          "ovc_1767.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1767.h"
#define REG_PMI_H          "pmi_1767.h"
#define REG_PMU_H          "pmu_1767.h"
#define REG_PORT_H         "port_1767.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1767.h"
#define REG_SBCU_H         "sbcu_1767.h"
#define REG_SCU_H          "scu_1767.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1767.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1767.h"
#define REG_XBAR_H         "core_env.h"

/*
 * hardware specific addressing for TC_1782
 */

#elif (MACHINE_TYPE == TC_1782)

#define REG_ADC_H          "adc_1782.h"
#define REG_ASC_H          "asc_1782.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1782.h"
#define REG_CBS_H          "cbs_1782.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1782.h"
#define REG_CPS_H          "cps_1782.h"
#define REG_CPU_H          "cpu_1782.h"
#define REG_CSFR_H         "csfr_1782.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1782.h"
#define REG_DMI_H          "dmi_1782.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "eray_1782.h"
#define REG_FADC_H         "fadc_1782.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1782.h"
#define REG_FPU_H          "fpu_1782.h"
#define REG_GENERAL_H      "general_1782.h"
#define REG_GPR_H          "gpr_1782.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1782.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "lbcu_1782.h"
#define REG_LFI_H          "lfi_1782.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "ltca2_1782.h"
#define REG_MCHK_H         "mchk_1782.h"
#define REG_MLI_H          "mli_1782.h"
#define REG_MMU_H          "mmu_1782.h"
#define REG_MPR_H          "mpr_1782.h"
#define REG_MSC_H          "msc_1782.h"
#define REG_OVC_H          "ovc_1782.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1782.h"
#define REG_PMI_H          "pmi_1782.h"
#define REG_PMU_H          "pmu_1782.h"
#define REG_PORT_H         "port_1782.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1782.h"
#define REG_SBCU_H         "sbcu_1782.h"
#define REG_SCU_H          "scu_1782.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1782.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1782.h"
#define REG_XBAR_H         "core_env.h"

/*
 * hardware specific addressing for TC1797
 */

#elif (MACHINE_TYPE == TC_1797)

#define REG_ADC_H          "adc_1797.h"
#define REG_ASC_H          "asc_1797.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1797.h"
#define REG_CBS_H          "cbs_1797.h"
#define REG_CCU6_H         "core_env.h"
#define REG_CORE_H         "core_1797.h"
#define REG_CPS_H          "cps_1797.h"
#define REG_CPU_H          "cpu_1797.h"
#define REG_CSFR_H         "csfr_1797.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1797.h"
#define REG_DMI_H          "dmi_1797.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "ebu_1797.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "eray_1797.h"
#define REG_FADC_H         "fadc_1797.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1797.h"
#define REG_FPU_H          "fpu_1797.h"
#define REG_GENERAL_H      "general_1797.h"
#define REG_GPR_H          "gpr_1797.h"
#define REG_GPT12_H        "core_env.h"
#define REG_GPTA0_H        "gpta0_1797.h"
#define REG_GPTA1_H        "gpta1_1797.h"
#define REG_LBCU_H         "lbcu_1797.h"
#define REG_LFI_H          "lfi_1797.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "ltca2_1797.h"
#define REG_MCHK_H         "mchk_1797.h"
#define REG_MLI_H          "mli_1797.h"
#define REG_MMU_H          "mmu_1797.h"
#define REG_MPR_H          "mpr_1797.h"
#define REG_MSC_H          "msc_1797.h"
#define REG_OVC_H          "ovc_1797.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1797.h"
#define REG_PMI_H          "pmi_1797.h"
#define REG_PMU_H          "pmu_1797.h"
#define REG_PORT_H         "port_1797.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1797.h"
#define REG_SBCU_H         "sbcu_1797.h"
#define REG_SCU_H          "scu_1797.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1797.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1797.h"
#define REG_XBAR_H         "core_env.h"

/*
 * hardware specific addressing for TC1793
 */

#elif (MACHINE_TYPE == TC_1793)

#define REG_ADC_H          "adc_1793.h"
#define REG_ASC_H          "asc_1793.h"
#define REG_BMU_H          "bmu_1793.h"
#define REG_CAN_H          "can_1793.h"
#define REG_CBS_H          "cbs_1793.h"
#define REG_CCU6_H         "ccu6_1793.h"
#define REG_CORE_H         "core_1793.h"
#define REG_CPS_H          "cps_1793.h"
#define REG_CPU_H          "cpu_1793.h"
#define REG_CSFR_H         "csfr_1793.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1793.h"
#define REG_DMI_H          "dmi_1793.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "ebu_1793.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "eray_1793.h"
#define REG_FADC_H         "fadc_1793.h"
#define REG_FCE_H          "fce_1793.h"
#define REG_FLASH_H        "flash_1793.h"
#define REG_FPU_H          "fpu_1793.h"
#define REG_GENERAL_H      "general_1793.h"
#define REG_GPR_H          "gpr_1793.h"
#define REG_GPT12_H        "gpt12_1793.h"
#define REG_GPTA0_H        "gpta0_1793.h"
#define REG_GPTA1_H        "gpta1_1793.h"
#define REG_LBCU_H         "core_env.h"
#define REG_LFI_H          "core_env.h"
#define REG_LMU_H          "lmu_1793.h"
#define REG_LTCA2_H        "ltca2_1793.h"
#define REG_MCHK_H         "mchk_1793.h"
#define REG_MLI_H          "mli_1793.h"
#define REG_MMU_H          "mmu_1793.h"
#define REG_MPR_H          "mpr_1793.h"
#define REG_MSC_H          "msc_1793.h"
#define REG_OVC_H          "ovc_1793.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1793.h"
#define REG_PMI_H          "pmi_1793.h"
#define REG_PMU_H          "pmu_1793.h"
#define REG_PORT_H         "port_1793.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1793.h"
#define REG_SBCU_H         "sbcu_1793.h"
#define REG_SCU_H          "scu_1793.h"
#define REG_SDMA_H         "sdma_1793.h"
#define REG_SENT_H         "sent_1793.h"
#define REG_SHE_H          "she_1793.h"
#define REG_SSC_H          "ssc_1793.h"
#define REG_SSCG_H         "sscg_1793.h"
#define REG_STM_H          "stm_1793.h"
#define REG_XBAR_H         "xbar_1793.h"
/*
 * hardware specific addressing for TC_1724
 */
#elif (MACHINE_TYPE == TC_1724)

#define REG_ADC_H          "adc_1724.h"
#define REG_ASC_H          "asc_1724.h"
#define REG_BMU_H          "bmu_1724.h"
#define REG_CAN_H          "can_1724.h"
#define REG_CBS_H          "cbs_1724.h"
#define REG_CCU6_H         "ccu6_1724.h"
#define REG_CORE_H         "core_1724.h"
#define REG_CPS_H          "cps_1724.h"
#define REG_CPU_H          "cpu_1724.h"
#define REG_CSFR_H         "csfr_1724.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1724.h"
#define REG_DMI_H          "dmi_1724.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "core_env.h"
#define REG_FADC_H         "fadc_1724.h"
#define REG_FCE_H          "fce_1724.h"
#define REG_FLASH_H        "flash_1724.h"
#define REG_FPU_H          "fpu_1724.h"
#define REG_GENERAL_H      "general_1724.h"
#define REG_GPR_H          "gpr_1724.h"
#define REG_GPT12_H        "gpt12_1724.h"
#define REG_GPTA0_H        "gpta0_1724.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "lbcu_1724.h"
#define REG_LFI_H          "lfi_1724.h"
#define REG_LMU_H          "core_env.h"
#define REG_LTCA2_H        "core_env.h"
#define REG_MCHK_H         "mchk_1724.h"
#define REG_MLI_H          "mli_1724.h"
#define REG_MMU_H          "mmu_1724.h"
#define REG_MPR_H          "mpr_1724.h"
#define REG_MSC_H          "msc_1724.h"
#define REG_OVC_H          "ovc_1724.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1724.h"
#define REG_PMI_H          "pmi_1724.h"
#define REG_PMU_H          "pmu_1724.h"
#define REG_PORT_H         "port_1724.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1724.h"
#define REG_SBCU_H         "sbcu_1724.h"
#define REG_SCU_H          "scu_1724.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1724.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1724.h"
#define REG_XBAR_H         "core_env.h"

/*
 * hardware specific addressing for TC1387
 */

#elif (MACHINE_TYPE == TC_1387)

#define REG_ADC_H          "adc_1387.h"
#define REG_ASC_H          "asc_1387.h"
#define REG_BMU_H          "core_env.h"
#define REG_CAN_H          "can_1387.h"
#define REG_CBS_H          "cbs_1387.h"
#define REG_CCU6_H         "ccu6_1387.h"
#define REG_CORE_H         "core_1387.h"
#define REG_CPS_H          "cps_1387.h"
#define REG_CPU_H          "cpu_1387.h"
#define REG_CSFR_H         "csfr_1387.h"
#define REG_DBCU_H         "core_env.h"
#define REG_DMA_H          "dma_1387.h"
#define REG_DMI_H          "dmi_1387.h"
#define REG_DMU_H          "core_env.h"
#define REG_EBU_H          "core_env.h"
#define REG_EMEM_H         "core_env.h"
#define REG_ERAY_H         "eray_1387.h"
#define REG_FADC_H         "core_env.h"
#define REG_FCE_H          "core_env.h"
#define REG_FLASH_H        "flash_1387.h"
#define REG_FPU_H          "fpu_1387.h"
#define REG_GENERAL_H      "general_1387.h"
#define REG_GPR_H          "gpr_1387.h"
#define REG_GPT12_H        "gpt12_1387.h"
#define REG_GPTA0_H        "gpta0_1387.h"
#define REG_GPTA1_H        "core_env.h"
#define REG_LBCU_H         "lbcu_1387.h"
#define REG_LFI_H          "lfi_1387.h"
#define REG_LTCA2_H        "core_env.h"
#define REG_MCHK_H         "mchk_1387.h"
#define REG_MLI_H          "mli_1387.h"
#define REG_LMU_H          "core_env.h"
#define REG_MMU_H          "mmu_1387.h"
#define REG_MPR_H          "mpr_1387.h"
#define REG_MSC_H          "core_env.h"
#define REG_OVC_H          "ovc_1387.h"
#define REG_PBCU_H         "core_env.h"
#define REG_PCP_H          "pcp_1387.h"
#define REG_PMI_H          "pmi_1387.h"
#define REG_PMU_H          "pmu_1387.h"
#define REG_PORT_H         "port_1387.h"
#define REG_RBCU_H         "core_env.h"
#define REG_REGS_H         "regs_1387.h"
#define REG_SBCU_H         "sbcu_1387.h"
#define REG_SCU_H          "scu_1387.h"
#define REG_SDMA_H         "core_env.h"
#define REG_SENT_H         "core_env.h"
#define REG_SSC_H          "ssc_1387.h"
#define REG_SSCG_H         "core_env.h"
#define REG_STM_H          "stm_1387.h"
#define REG_XBAR_H         "core_env.h"
#endif

#endif
