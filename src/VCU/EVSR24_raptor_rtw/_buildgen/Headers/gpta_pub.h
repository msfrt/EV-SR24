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
 * $Filename__:gpta_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GS72FE$
 * $Date______:19.11.2010$
 * $Class_____:SWHDR$
 * $Name______:gpta_pub$
 * $Variant___:1.15.0$
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
 * 1.15.0; 0     19.11.2010 GS72FE
 *   removing swa warnings
 * 
 * 1.14.0; 5     09.07.2010 GS72FE
 *   adding optional customer specific parts selected by two new system 
 *   constants
 * 
 * 1.14.0; 4     14.06.2010 GS72FE
 *   adding TC1793 support, adding Gpta_PwmGen_Rslvr() interface
 * 
 * 1.14.0; 3     09.06.2010 GS72FE
 *   RCMS00917932: merge GPTA_SD changes from ClearCase
 * 
 * 1.14.0; 2     08.06.2010 GS72FE
 *   merge GPTA_PWM_GEN changes from ClearCase
 * 
 * 1.14.0; 1     07.06.2010 GS72FE
 *   merging GPTA_SD fix from GPTA.1.13.1
 * 
 * 1.14.0; 0     28.01.2010 INTECKEN
 *   TC1793 quick make support
 * 
 * 1.13.0; 0     24.11.2009 AWL2SI
 *   B_GPTA.13.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _GPTA_PUB_H
#define _GPTA_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      GPTA - General Purpose Timer Array
 *
 ***************************************************************************************************
 */

/**
 set this to FALSE to be independent from DAMOS (for delivery to external customers)
 */
#ifndef GPTA_USE_DAMOS
#define GPTA_USE_DAMOS       (TRUE)
#endif

/*
 ***************************************************************************************************
 * Types
 ***************************************************************************************************
 */

/* Gpta types with reduces variable size to save flash memory space                               */
/* see also gptaX_tc1796.h                                                                        */
typedef struct
{
        const uint16 GTCCTR;           /* GTC Control Register */
        const uint32 GTCX;             /* GTC X is only uint24 */
} Gpta_GtcImageObj_t;

typedef struct
{
        const uint16 LTCCTR;           /* LTC Control Register */
        const uint16 LTCX;             /* LTC XR */
} Gpta_LtcImageObj_t;


/* TOG evaluation                                                                                 */
#define GPTA_TOG_LEVEL_POS     0
#define GPTA_TOG_LEVEL_LEN     1
#define GPTA_TOG_NEWDATA_POS   1
#define GPTA_TOG_NEWDATA_LEN   1
#define GPTA_TOG_TIMEOUT_POS   2
#define GPTA_TOG_TIMEOUT_LEN   1

typedef struct
{
    uint32 tiRefTog_u32;                /* reference time      */
    uint32 tiTempTog_u32;               /* temparature time    */
    uint32 tiHtgTog_u32;                /* heating time        */
    uint32 tiClgTog_u32;                /* cooling time        */
    uint16 stTog_u16;                   /* status bitfield     */
} Gpta_TogResult_t;


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/**
 Number of different GPTAs.
 This define returns the number of GPTAs, LTCAs are not considered.
 */
#if ( (MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1793) )
#define GPTA_NUM 2
#else
#define GPTA_NUM 1
#endif

/**
 ***************************************************************************************************
 * Read out GPTA module number, module type or module revision.
 *
 * This macros read and return the GPTA module number, type or revision from ID register.
 *
 * \param  gpta_number - GPTA/LTCA number to read module number from [0, 1, 2]
 * \return ID.MOD_NUMBER or ID.MOD_TYPE or ID.MOD_REV bitfield
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#define Gpta_GetModuleNumber(gpta_number)   (Reg_GetBitField(GPTA##gpta_number##,ID,ID_MOD_NUMBER))
#define Gpta_GetModuleType(gpta_number)     (Reg_GetBitField(GPTA##gpta_number##,ID,ID_MOD_TYPE))
#define Gpta_GetModuleRevision(gpta_number) (Reg_GetBitField(GPTA##gpta_number##,ID,ID_MOD_REV))


/**
 ***************************************************************************************************
 * Time to ticks conversion and vice versa.
 * These defines are used to convert GPTA ticks and GPTA.GT0 ticks into times or vice versa.
 ***************************************************************************************************
 */
/* GPTA module clock, desired clock is 20 MHz, exact value depends on system clock                */
#define GPTA_MODULE_CLOCK                Cpu_GetGPTAFreq()
#define GPTA_TICKS_PER_US_U32            ( ((GPTA_MODULE_CLOCK) + 500ul) / 1000ul )
#define GPTA_NS_PER_TICK_U32             ( (1000000ul + ((GPTA_MODULE_CLOCK)/2ul) ) / (GPTA_MODULE_CLOCK) )
/* Target independent GPTA GT0 clock, 2,5 MHz. The exact number of ticks depends on actual GPTA clock */
#define GPTA_GT0_TICKS_PER_10US_U32      ( ((GPTA_MODULE_CLOCK) + 400ul) / 800ul )
#define GPTA_GT0_TICKS_PER_2US_U32       ( ((GPTA_MODULE_CLOCK) + 2000ul) / 4000ul )
#define GPTA_GT0_TICKS_PER_10US_F        ( ((real32)(GPTA_MODULE_CLOCK)) / 800.0f )
#define GPTA_GT0_TICKS_PER_2US_F         ( ((real32)(GPTA_MODULE_CLOCK)) / 4000.0f )

/* This macros convert a given time [us] into GPTA clock ticks or vice versa.                     */
#define GPTA_US_TO_TICKS(microsecs)      ( (((microsecs) * (((GPTA_MODULE_CLOCK) + 5ul) / 10ul)) + 50ul) / 100ul )
#define GPTA_US_TO_TICKS_F(microsecs)    ( (real32)(microsecs) * ((real32)(GPTA_MODULE_CLOCK) / 1000.0f) )
#define GPTA_TICKS_TO_US(ticks)          ( (((ticks) * 250ul) + ((GPTA_MODULE_CLOCK) / 8ul))       \
                                         / (((GPTA_MODULE_CLOCK) + 2ul) / 4ul)                     \
                                         )
#define GPTA_TICKS_TO_US_F(ticks)        ( (real32)(ticks) * (1000.0f / (real32)(GPTA_MODULE_CLOCK)) )

/* This macros convert a given time [ms] into GPTA clock ticks or vice versa.                     */
#define GPTA_MS_TO_TICKS(millisecs)      ( (millisecs) * (GPTA_MODULE_CLOCK) )
#define GPTA_TICKS_TO_MS(ticks)          ( ((ticks) + ((GPTA_MODULE_CLOCK) / 2ul)) / (GPTA_MODULE_CLOCK) )

/* This macro converts a given number of ticks to a time [ns].                                    */
#define GPTA_TICKS_TO_NS(ticks)          ( (ticks) * GPTA_NS_PER_TICK_U32 )
#define GPTA_TICKS_TO_NS_F(ticks)        ( (1000000.0f / (real32)(GPTA_MODULE_CLOCK)) * ((real32)(ticks)) )

/* This macros convert a given time [us] into GPTA0/1 GT0 clock ticks or vice versa.              */
#define GPTA_GT0_US_TO_TICKS(microsecs)   ( (((uint32)(microsecs) * (((GPTA_MODULE_CLOCK) + 20ul) / 40ul)) + 100ul) \
                                          / 200ul                                                                   \
                                          )
#define GPTA_GT0_US_TO_TICKS_F(microsecs) ( ((real32)(microsecs)) * ((real32)(GPTA_MODULE_CLOCK) / 8000.0f) )
#define GPTA_GT0_TICKS_TO_US(ticks)       ( (((ticks) * 200ul) + ((GPTA_MODULE_CLOCK) / 80) )          \
                                          /                 (((GPTA_MODULE_CLOCK) + 20ul) / 40ul)      \
                                          )
#define GPTA_GT0_TICKS_TO_US_F(ticks)     ( (real32)(ticks) * (8000.0f / ((real32)(GPTA_MODULE_CLOCK))) )

#define GPTA_GT0_US_TO_TICKS_PCP(microsecs) ( (((microsecs) * (((GPTA_MODULE_CLOCK) + 20) / 40)) + 100) / 200 )
#define GPTA_GT0_TICKS_TO_US_PCP(ticks)     ( (((ticks) * 200) + ((GPTA_MODULE_CLOCK) / 80))       \
                                            /                    (((GPTA_MODULE_CLOCK) + 20) / 40) \
                                            )

/* This macros convert a given time [ms] into GPTA0/1 GT0 clock ticks or vice versa.              */
#define GPTA_GT0_MS_TO_TICKS(millisecs)  ( (millisecs) * (((GPTA_MODULE_CLOCK) + 4ul) / 8ul) )
#define GPTA_GT0_TICKS_TO_MS(ticks)      ( (((ticks) * 8ul) + ((GPTA_MODULE_CLOCK) / 2ul)) / (GPTA_MODULE_CLOCK) )

/** This macro converts GPTA0/1 GT0 ticks to GPTA module clock ticks                              */
#define GPTA_GT0_TO_GPTACLC_TICKS(ticks) ( (ticks) << 3 )

/* GT0 overflow value (valid for both GTPA0 and GPTA1 GT0 timers)                                 */
#define GPTA_MAX_GT0_TICKS               (0xFFFFFFul)
/* GT1 overflow value (valid for both GTPA0 and GPTA1 GT1 timers)                                 */
#define GPTA_MAX_GT1_TICKS               (0xFFFFFFul)
/* LTCXR overflow value (valid for GTPA0, GPTA1 and LTCA2 LTCs)                                   */
#define GPTA_MAX_LTC_TICKS               (MAXUINT16)
/* DCM timer overflow value                                                                       */
#define GPTA_MAX_DCM_TICKS               (0xFFFFFFul)


/**
 ***************************************************************************************************
 * Read out GT0 timer of a specified GPTA module.
 *
 * Read the GT0 timer value of the GPTA specified.
 * In case of TC1766 only one GT0 is present.
 *
 * \param GPTA_NUMBER - GPTA of which the GT0 is to be read. (Valid values are GPTA0 and GPTA1
 *                      for TC1796/7 and GPTA0 for TC1766/7).
 * \return value of GT0 (32 bit)
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#define Gpta_GetGT0(GPTA_NUMBER) Gpta_GetGT0_##GPTA_NUMBER

#ifdef GPTA_GPTA0_PRS
#define Gpta_GetGT0_GPTA0  (GPTA0.GTTIM0)
#endif
#ifdef GPTA_GPTA1_PRS
#define Gpta_GetGT0_GPTA1  (GPTA1.GTTIM0)
#endif


/**
 ***************************************************************************************************
 * Read out GT1 timer of a specified GPTA module.
 *
 * Read the GT1 timer value of the GPTA specified.
 * In case of TC1766 only one GT1 is present.
 *
 * \param GPTA_NUMBER - GPTA of which the GT1 is to be read. (Valid values are GPTA0 and GPTA1
 *                      for TC1796/7 and GPTA0 for TC1766/7).
 * \return value of GT1 (32 bit)
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#define Gpta_GetGT1(GPTA_NUMBER) Gpta_GetGT1_##GPTA_NUMBER

#ifdef GPTA_GPTA0_PRS
#define Gpta_GetGT1_GPTA0  (GPTA0.GTTIM1)
#endif
#ifdef GPTA_GPTA1_PRS
#define Gpta_GetGT1_GPTA1  (GPTA1.GTTIM1)
#endif


/**
 ***************************************************************************************************
 * Deactivate GTC timer cell.
 *
 * Deactivate a specific GTC timer cell. Cell is set to capture mode (capure GT0, MOD == 00b) with
 * no edge selected (FED==RED==0). This does not disable the cell (CEN remains set)!
 *
 * \param GPTA_NUMBER number of the desired cells' GPTA  [0, 1]
 * \param CELL_NUMBER number of the GTC cell to be deactivated [0..31]
 * \return -
 * \seealso TC1796 Target Specification
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Deactivate_GTC(GPTA_NUMBER, CELL_NUMBER) \
                                       (GPTA##GPTA_NUMBER.GTC[CELL_NUMBER].GTCCTR &= 0xFFCCul)


/**
 ***************************************************************************************************
 * Deactivate LTC timer cell.
 *
 * Deactivate a specific GTC timer cell. Cell is set to capture mode (MOD == 00b) with
 * no edge selected (FED==RED==0) and edge sensitive mode (ILM==0).
 * This does not disable the cell (CEN remains set)!
 *
 * \param GPTA_NUMBER number of the desired cells' GPTA  [0, 1, 2]
 * \param CELL_NUMBER number of the GTC cell to be deactivated [0, 63]
 * \return -
 * \seealso Gpta_Deactivate_GTC(), TC1796 Target Specification
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Deactivate_LTC(GPTA_NUMBER, CELL_NUMBER) \
                                       (GPTA##GPTA_NUMBER.LTC[CELL_NUMBER].LTCCTR &= 0xFECCul)


/**
 ***************************************************************************************************
 * Deactivate GTC timer cell (address based).
 *
 * Deactivate a specific GTC timer cell. Cell is set to capture mode (capure GT0, MOD == 00b) with
 * no edge selected (FED==RED==0). This does not disable the cell (CEN remains set)!
 *
 * \param base Address of the cell to be deactivated
 * \return -
 * \seealso TC1796 Target Specification
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Deactivate_GTC_Adr(base) (*(base) &= 0xFFCCul)


/**
 ***************************************************************************************************
 * Deactivate LTC timer cell (address based).
 *
 * Deactivate a specific GTC timer cell. Cell is set to capture mode (MOD == 00b) with
 * no edge selected (FED==RED==0) and edge sensitive mode (ILM==0).
 * This does not disable the cell (CEN remains set)!
 *
 * \param base Address of the cell to be deactivated
 * \return -
 * \seealso Gpta_Deactivate_GTC(), TC1796 Target Specification
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Deactivate_LTC_Adr(base) (*(base) &= 0xFECCul)


/**
 ***************************************************************************************************
 * Set GTC Data Output Line to 0 or 1.
 *
 * This macro triggers an Output Immediate Action to set the cells' data output line to 0 or 1.
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line.
 *
 * \param gpta_number number of the desired cells' GPTA  [0, 1]
 * \param cell_number number of the GTC cell to be triggered [0 .. 31]
 * \parm  state       desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_GTC_DataOut(gpta_number, cell_number, state)                        \
                      ( GPTA##gpta_number.GTC[cell_number].GTCCTR =                  \
                      ( (GPTA##gpta_number.GTC[cell_number].GTCCTR & 0xFFFFC7FFul) | \
                      ( 0x00005000ul | ((uint32)(state) << GPTA##gpta_number##_GTCCTR_OCM_POS) ) ) )


/**
 ***************************************************************************************************
 * Set LTC Data Output Line to 0 or 1.
 *
 * This macro triggers an Output Immediate Action to set the cells' data output line to 0 or 1.
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line.
 *
 * \param gpta_number number of the desired cells' GPTA  [0, 1, 2]
 * \param cell_number number of the LTC cell to be triggered [0 .. 63]
 * \parm  state       desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_LTC_DataOut(gpta_number, cell_number, state)                        \
                      ( GPTA##gpta_number.LTC[cell_number].LTCCTR =                  \
                      ( (GPTA##gpta_number.LTC[cell_number].LTCCTR & 0xFFFFC7FFul) | \
                      ( 0x00005000ul | ((uint32)(state) << GPTA##gpta_number##_GTCCTR_OCM_POS) ) ) )

/**
 ***************************************************************************************************
 * Set GTC Data Output Line to 0 or 1, based on address.
 *
 * This macro triggers an Output Immediate Action to set the cells' data output line to 0 or 1.
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line, this may enable diabled cells.
 *
 * \param base        address of the GTCCTR register
 * \parm  state       desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_GTC_DataOut_Adr(base, state)                        \
                      ( (*(base)) = ( (*(base)) & 0xFFFFC7FFul) |    \
                      ( 0x00005000ul | ((uint32)(state) << GPTA0_GTCCTR_OCM_POS) ) )

/**
 ***************************************************************************************************
 * Set LTC Data Output Line to 0 or 1, based on address.
 *
 * This macro triggers an Output Immediate Action to set the cells' data output line to 0 or 1.
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line, this may enable diabled cells.
 *
 * \param base        address of the GTCCTR register
 * \parm  state       desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_LTC_DataOut_Adr(base, state)                        \
                      ( (*(base)) = ( (*(base)) & 0xFFFFC7FFul) |    \
                      ( 0x00005000ul | ((uint32)(state) << GPTA0_GTCCTR_OCM_POS) ) )


/**
 ***************************************************************************************************
 * Read GTC output state.
 *
 * This macro reads and returns the GTCCTRk.OUT bit.
 *
 * \param gpta_number number of the desired cells' GPTA  [0, 1]
 * \param cell_number number of the GTC cell to be read [0 .. 31]
 * \return TRUE or FALSE
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Get_GTC_DataOut(gpta_number, cell_number) \
                           ( Reg_GetBit(GPTA##gpta_number, GTC[cell_number].GTCCTR, GTCCTR_OUT) )


/**
 ***************************************************************************************************
 * Read LTC output state.
 *
 * This macro reads and returns the LTCCTRk.OUT bit.
 *
 * \param gpta_number number of the desired cells' GPTA  [0, 1, 2]
 * \param cell_number number of the LTC cell to be read [0 .. 63]
 * \return TRUE or FALSE
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Get_LTC_DataOut(gpta_number, cell_number) \
                           ( Reg_GetBit(GPTA##gpta_number, LTC[cell_number].LTCCTR, LTCCTR_OUT) )


/**
 ***************************************************************************************************
 * Read LTC/GTC output state (address based).
 *
 * This macro reads and returns the LTCCTRk.OUT or GTCCTRk.OUT bit.
 *
 * \param base address of the desired LTC or GTC timer cell
 * \return TRUE or FALSE
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Get_LTC_DataOut_Adr(base) ( (bool) ( ((*(base)) >> GPTA0_LTCCTR_OUT_POS) & 0x1ul ) )
#define Gpta_Get_GTC_DataOut_Adr(base) ( (bool) ( ((*(base)) >> GPTA0_GTCCTR_OUT_POS) & 0x1ul ) )

/**
 ***************************************************************************************************
 * Set GTC Data Output Line to 0 or 1, sets OSM = EOA == 1 (address based).
 *
 * This macro resets the GTCCTR register to 0x0 and triggers an Output Immediate Action to set
 * the cells' data output line to 0 or 1.
 * Additionally GTCCTR.EOA is set to "1".
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line.
 *
 * \param base      address of the GTCCTR register
 * \parm  state     desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_GTC_PreInit_Adr(base, state) \
                    ((*(base)) = (0x00005100ul | ((uint32)(state) << GPTA0_GTCCTR_OCM_POS)))

/**
 ***************************************************************************************************
 * Set LTC Data Output Line to 0 or 1, sets OSM = EOA == 1 (address based).
 *
 * This macro resets the GTCCTR register to 0x0 and triggers an Output Immediate Action to set
 * the cells' data output line to 0 or 1.
 * Additionally GTCCTR.EOA is set to "1".
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line.
 *
 * \param base      address of the LTCCTR register
 * \parm  state     desired state of the data output line [0, 1, 2]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#define Gpta_Set_LTC_PreInit_Adr(base, state) \
                    ((*(base)) = (0x00005100ul | ((uint32)(state) << GPTA0_LTCCTR_OCM_POS)))

/* ASC emulation macros                                                                           */
#define GPTA_ASC_RXNEWDATA_POS    0
#define GPTA_ASC_RXNEWDATA_LEN    1
#define GPTA_ASC_RXBITERR_POS     1
#define GPTA_ASC_RXBITERR_LEN     1
#define GPTA_ASC_RXPRTYERR_POS    2
#define GPTA_ASC_RXPRTYERR_LEN    1
/* error bit has been renamed, keep compatibility to older versions                               */
#define GPTA_ASC_RXERR_POS        GPTA_ASC_RXBITERR_POS
#define GPTA_ASC_RXERR_LEN        GPTA_ASC_RXBITERR_LEN


#define GPTA_ASC_NOMODE           0
#define GPTA_ASC_8DATA1STOP       1
#define GPTA_ASC_8DATA2STOP       2
#define GPTA_ASC_EVEN7DATA1STOP   3
#define GPTA_ASC_ODD7DATA1STOP    4
#define GPTA_ASC_EVEN8DATA1STOP   5
#define GPTA_ASC_ODD8DATA1STOP    6
#define GPTA_ASC_4DATA1STOP       7
#define GPTA_ASC_7DATA1STOP       8

/**
 ***************************************************************************************************
 *  Map GPTA_SD interfacce macros to appropriate functions.
 *
 *  This function reads the result of the most recent conversion of the sigma delta conversion.
 *  The macro interface is directly mapped to the interface function, for further info see there
 *
 ***************************************************************************************************
 */
#define Gpta_Sd_AdcGetRatio(device, channel)     (Gpta_Sd_AdcGetRatioFunc((device), (channel)))
#define Gpta_Sd_AdcForceLow(device, channel)     (Gpta_Sd_AdcForceLowFunc((device), (channel)))
#define Gpta_Sd_AdcRelease(device, channel)      (Gpta_Sd_AdcReleaseFunc((device), (channel)))


/**
 ***************************************************************************************************
 *  Reads the reference voltage of an analog input.
 *
 *  This function reads the reference voltage which is used for conversion of the analogue singal.
 *  For GPTA_SD this is fixed to 3.3V for all channels.
 *
 *  Depending on the channel specific configuration it performs this task either by expanding
 *  the call to this function-like macro or by calling a "real" function. The latter is usually
 *  only necessary for channels where calibratable routing is required for the corresponding
 *  signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (currently not used by GPTA_SD).
 *  \param      idxChannel  Index of the channel (currently not used by GPTA_SD).
 *  \return     Represents the GPTA_SD reference voltage in 200uV increments (5V / 200uV).
 *  \seealso    Gpta_AdcGetReferenceFunc() Adc_GetReference()
 ***************************************************************************************************
 */
#define Gpta_Sd_AdcGetReference(idxDevice, idxChannel) (sint16)(5000000UL / 200UL)


/**
 ***************************************************************************************************
 *  Returns the FId for requesting general ADC fault information from DSM.
 *
 *  If the AdcI driver detects a general (i.e. not signal-specific) fault of the internal ADC
 *  of the TriCore, it reports this defect to DSM. There are more than one sources of possible
 *  faults which result in more than one AdcI-related DFCs (diagnostic fault checks). As a user
 *  of ADC functionality, however, one is usually only interested in the more general information
 *  "may I expect that the ADC that converts the signal of interest still works (no matter what
 *  the particular reason for any possible malfunction actually is) and therefore returns
 *  plausible data?". This information can be retrieved from DSM by invoking the
 *  DSM_GetDscPermission() service which expects a function identifier (FId) as an argument.
 *  The FId required for answering the ADC user's question mentioned above is returned by the
 *  AdcI_AdcGetFId() function.
 *
 *  Depending on signal-specific configuration, this task is performed either by expanding
 *  the call to this function directly to the appropriate code or by calling a "real" function.
 *  The latter is usually only necessary for channels where calibratable routing is required
 *  for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (currently not used by GPTA_SD).
 *  \param      idxChannel  Index of the channel (currently not used by GPTA_SD).
 *  \return     FId_InhibitNever is returned in any case
 *  \seealso    AdcI_AdcGetFIdFunc() Adc_GetFId() DSM_GetDscPermission()
 ***************************************************************************************************
 */
#define Gpta_Sd_AdcGetFId(idxDevice, idxChannel) (FId_InhibitNever)
#define Gpta_Sd_AdcGetFIdFunc(idxDevice, idxChannel) (FId_InhibitNever)


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* TOG evaluation prototypes                                                                      */
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern void   Gpta_GetTog(Gpta_TogResult_t* xRslt_ps, uint8 tiTout_u8);
extern void   Gpta_Tog_Ini(void);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END

__PRAGMA_USE__gpta__50ms_1s__RAM__x32__START
extern uint32 Gpta_tiTogHi_u32;
extern uint32 Gpta_tiTogLo_u32;
__PRAGMA_USE__gpta__50ms_1s__RAM__x32__END

/* ASC emulation prototypes                                                                       */
__PRAGMA_USE__gpta__1_5ms__RAM__arr32__START
extern  uint32 Gpta_xAscEmulRxBuf_a[10];
__PRAGMA_USE__gpta__1_5ms__RAM__arr32__END
__PRAGMA_USE__gpta__1_5ms__RAM__x16__START
extern  uint16 Gpta_xAscEmulRxData_u16;
extern  uint16 Gpta_xAscEmulRxFrm_u16;
__PRAGMA_USE__gpta__1_5ms__RAM__x16__END
__PRAGMA_USE__gpta__1_5ms__RAM__x8__START
extern  uint8  Gpta_stAscEmulRx_u8;
__PRAGMA_USE__gpta__1_5ms__RAM__x8__END

/* main GPTA initialisation function                                                              */
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern void Gpta_Proc_Ini(void);
extern bool Gpta_AscTx     (uint numAscEmul, uint32 xData_u32);
extern bool Gpta_SetAscEmul(uint numAscEmul, uint16 xBaudRate_u16, uint8 xAscMode_u8);
extern bool Gpta_CalcPrty  (uint32 xData_u32, bool stEven_b);
extern void Gpta_AscEmul_Ini(void);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END

/* SD evaluation */
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern sint16 Gpta_Sd_AdcGetRatioFunc    (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern sint16 Gpta_Sd_AdcGetReferenceFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);
extern void   Gpta_Sd_AdcForceLowFunc    (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern void   Gpta_Sd_AdcReleaseFunc     (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern void   Gpta_Sd_SetMode(Gpta_SdSgn_t   const arg_idxSgn_en,
                              Gpta_Sd_Mode_t const arg_swtMode_en);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END

/* Gpta_Pwm_Gen */
__PRAGMA_USE__CODE__gpta__NormalSpeed__START
extern bool              Gpta_PwmGen_SetDuty   (Gpta_PwmGen_t const arg_idxSig_en, sint16 arg_ratDty_s16);
extern bool              Gpta_PwmGen_SetPeriod (Gpta_PwmGen_t const arg_idxSig_en, uint32 arg_tiPerUs_u32);
extern bool              Gpta_PwmGen_ActvRstrt (Gpta_PwmGen_t const arg_idxSig_en);
extern Gpta_PwmGen_Err_t Gpta_PwmGen_GetErrStat(Gpta_PwmGen_t const arg_idxSig_en);
extern Gpta_PwmGen_t     Gpta_PwmGen_Rslvr     (Gpta_PwmGen_Mode_t const arg_xMode_cen,
                                                uint8              const arg_xGpta_cu8,
                                                uint8              const arg_xNum_cu8);
__PRAGMA_USE__CODE__gpta__NormalSpeed__END

/* _GPTA_PUB_H                                                                                    */
#endif
