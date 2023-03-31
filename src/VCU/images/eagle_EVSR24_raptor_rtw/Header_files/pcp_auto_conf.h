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
 * $Filename__:pcp_template_conf.ht$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Peripheral Control Processor$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HGJ2FE$
 * $Date______:25.11.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:pcp_template_conf$
 * $Variant___:1.10.0$
 * $Revision__:0$
 * $Type______:HT$
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
 * 1.10.0; 0     25.11.2010 HGJ2FE
 *   - Improve scaling of function runtime between different PCP clocks and FPI 
 *   clocks
 *   - Improve runtime configuration of PCP functions to be able to configure
 *     the function runtime for a specified PCP and FPI clock
 *   - Add sorting to some lists to ensure that the same code is generated for 
 *   the same configuration
 *   - Move Pcp_Load to extra priority group if not all priority groups are used
 *   - Improve usage of conf_process::Pop for better reliability
 *   - Comment MISRA warning in pcp_auto_conf.c
 *   
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: pcp_template_conf.ht
 *      Version: \main\basis\b_CORE\1
 * 
 * $
 *
 *************************************************************************
</RBHead>*/


#ifndef _PCP_AUTO_CONF_H
#define _PCP_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * PCP auto generated configuration file.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/***************************************************************************************************
 * macros for channel priorities
 */

#define PCP_LOAD_PRIO                                                   0x01    /*   1            */
#define PCP_MON_PRIO                                                    0x02    /*   2            */
#define CCP_DAQ2TX_PRIO                                                 0x03    /*   3            */
#define MSC_USTOUT_PRIO                                                 0x04    /*   4            */
#define CCP_DAQ1TX_PRIO                                                 0x05    /*   5            */
#define INJHPFI_SWIR_PRIO                                               0x06    /*   6            */
#define INJHPFI_CHL0_PRIO                                               0x07    /*   7            */
#define INJHPFI_CHL1_PRIO                                               0x08    /*   8            */
#define INJHPFI_CHL2_PRIO                                               0x09    /*   9            */
#define INJHPFI_CHL3_PRIO                                               0x0A    /*  10            */
#define INJHPFI_CHL4_PRIO                                               0x0B    /*  11            */
#define INJHPFI_CHL5_PRIO                                               0x0C    /*  12            */
#define INJHPFI_CHL6_PRIO                                               0x0D    /*  13            */
#define INJHPFI_CHL7_PRIO                                               0x0E    /*  14            */
#define INJHPFI_MAXANGLE_PRIO                                           0x0F    /*  15            */
#define EPMHCAS_CAS_I1_PRIO                                             0x10    /*  16            */
#define IGNH0_PRIO                                                      0x11    /*  17            */
#define IGNH1_PRIO                                                      0x12    /*  18            */
#define IGNH2_PRIO                                                      0x13    /*  19            */
#define IGNH3_PRIO                                                      0x14    /*  20            */
#define IGNH4_PRIO                                                      0x15    /*  21            */
#define IGNH5_PRIO                                                      0x16    /*  22            */
#define IGNH6_PRIO                                                      0x17    /*  23            */
#define IGNH7_PRIO                                                      0x18    /*  24            */
#define EPMHCRS_INC_PRIO                                                0x19    /*  25            */
#define IGNH_DIST_PRIO                                                  0x1A    /*  26            */
#define IGNH_MAXANGLE_PRIO                                              0x1B    /*  27            */
#define EPMHCRS_DGI_PRIO                                                0x1C    /*  28            */
#define EPMHCRS_IGNTIME_PRIO                                            0x1D    /*  29            */
#define EPMHCRS_PLSDGI_PRIO                                             0x1E    /*  30            */
#define EPMHCRS_PLLCOR_PRIO                                             0x1F    /*  31            */
#define EPMHCRS_TMRMODE_PRIO                                            0x20    /*  32            */
#define EPMHCRS_TIMEOUT_PRIO                                            0x21    /*  33            */
#define EPMHCRS_STOPSIGMODE_PRIO                                        0x22    /*  34            */
#define EPMHCRS_DISBLNEWSYNC_PRIO                                       0x23    /*  35            */
#define EPMHCRS_RESYNCUPPERLVL_PRIO                                     0x24    /*  36            */
#define EPMHCRS_STARTSIGMODE_PRIO                                       0x25    /*  37            */
#define CCP_DAQ0TX_PRIO                                                 0x26    /*  38            */
#define MSC_MSC0QHNDLR_PRIO                                             0x27    /*  39            */
#define MSC_MSC1QHNDLR_PRIO                                             0x28    /*  40            */
#define PWMOUT_O_F_ECUA046_PRIO                                         0x29    /*  41            */
#define MSC_MSC0RXTRANS_PRIO                                            0x2A    /*  42            */
#define MSC_MSC1RXTRANS_PRIO                                            0x2B    /*  43            */
#define SPI_PCPDATATRANSSSC0_PRIO                                       0x2C    /*  44            */
#define SPI_PCPDATATRANSSSC1_PRIO                                       0x2D    /*  45            */


/***************************************************************************************************
 * macros for current PCP priority number (CPPN)
 */

#define PCP_LOAD_CPPN                                                   0x01    /*   1            */
#define PCP_MON_CPPN                                                    0x0F    /*  15            */
#define CCP_DAQ2TX_CPPN                                                 0x0F    /*  15            */
#define MSC_USTOUT_CPPN                                                 0x0F    /*  15            */
#define CCP_DAQ1TX_CPPN                                                 0x0F    /*  15            */
#define INJHPFI_SWIR_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL0_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL1_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL2_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL3_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL4_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL5_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL6_CPPN                                               0x0F    /*  15            */
#define INJHPFI_CHL7_CPPN                                               0x0F    /*  15            */
#define INJHPFI_MAXANGLE_CPPN                                           0x0F    /*  15            */
#define EPMHCAS_CAS_I1_CPPN                                             0x2D    /*  45            */
#define IGNH0_CPPN                                                      0x2D    /*  45            */
#define IGNH1_CPPN                                                      0x2D    /*  45            */
#define IGNH2_CPPN                                                      0x2D    /*  45            */
#define IGNH3_CPPN                                                      0x2D    /*  45            */
#define IGNH4_CPPN                                                      0x2D    /*  45            */
#define IGNH5_CPPN                                                      0x2D    /*  45            */
#define IGNH6_CPPN                                                      0x2D    /*  45            */
#define IGNH7_CPPN                                                      0x2D    /*  45            */
#define EPMHCRS_INC_CPPN                                                0x2D    /*  45            */
#define IGNH_DIST_CPPN                                                  0x2D    /*  45            */
#define IGNH_MAXANGLE_CPPN                                              0x2D    /*  45            */
#define EPMHCRS_DGI_CPPN                                                0x2D    /*  45            */
#define EPMHCRS_IGNTIME_CPPN                                            0x2D    /*  45            */
#define EPMHCRS_PLSDGI_CPPN                                             0x2D    /*  45            */
#define EPMHCRS_PLLCOR_CPPN                                             0x2D    /*  45            */
#define EPMHCRS_TMRMODE_CPPN                                            0x2D    /*  45            */
#define EPMHCRS_TIMEOUT_CPPN                                            0x2D    /*  45            */
#define EPMHCRS_STOPSIGMODE_CPPN                                        0x2D    /*  45            */
#define EPMHCRS_DISBLNEWSYNC_CPPN                                       0x2D    /*  45            */
#define EPMHCRS_RESYNCUPPERLVL_CPPN                                     0x2D    /*  45            */
#define EPMHCRS_STARTSIGMODE_CPPN                                       0x2D    /*  45            */
#define CCP_DAQ0TX_CPPN                                                 0x2D    /*  45            */
#define MSC_MSC0QHNDLR_CPPN                                             0x2D    /*  45            */
#define MSC_MSC1QHNDLR_CPPN                                             0x2D    /*  45            */
#define PWMOUT_O_F_ECUA046_CPPN                                         0x2D    /*  45            */
#define MSC_MSC0RXTRANS_CPPN                                            0x2D    /*  45            */
#define MSC_MSC1RXTRANS_CPPN                                            0x2D    /*  45            */
#define SPI_PCPDATATRANSSSC0_CPPN                                       0x2D    /*  45            */
#define SPI_PCPDATATRANSSSC1_CPPN                                       0x2D    /*  45            */


/***************************************************************************************************
 * macros for data pointer (DPTR)
 */

#define PCP_LOAD_DPTR                                                   0xFF    /* 255            */
#define PCP_MON_DPTR                                                    0x0B    /*  11            */
#define CCP_DAQ2TX_DPTR                                                 0x0C    /*  12            */
#define MSC_USTOUT_DPTR                                                 0x0A    /*  10            */
#define CCP_DAQ1TX_DPTR                                                 0x0C    /*  12            */
#define INJHPFI_SWIR_DPTR                                               0xFF    /* 255            */
#define INJHPFI_CHL0_DPTR                                               0x08    /*   8            */
#define INJHPFI_CHL1_DPTR                                               0x09    /*   9            */
#define INJHPFI_CHL2_DPTR                                               0x0A    /*  10            */
#define INJHPFI_CHL3_DPTR                                               0x0B    /*  11            */
#define INJHPFI_CHL4_DPTR                                               0x0C    /*  12            */
#define INJHPFI_CHL5_DPTR                                               0x0D    /*  13            */
#define INJHPFI_CHL6_DPTR                                               0x0E    /*  14            */
#define INJHPFI_CHL7_DPTR                                               0x0F    /*  15            */
#define INJHPFI_MAXANGLE_DPTR                                           0xFF    /* 255            */
#define EPMHCAS_CAS_I1_DPTR                                             0x0A    /*  10            */
#define IGNH0_DPTR                                                      0x08    /*   8            */
#define IGNH1_DPTR                                                      0x09    /*   9            */
#define IGNH2_DPTR                                                      0x0A    /*  10            */
#define IGNH3_DPTR                                                      0x0B    /*  11            */
#define IGNH4_DPTR                                                      0x0C    /*  12            */
#define IGNH5_DPTR                                                      0x0D    /*  13            */
#define IGNH6_DPTR                                                      0x0E    /*  14            */
#define IGNH7_DPTR                                                      0x0F    /*  15            */
#define EPMHCRS_INC_DPTR                                                0x12    /*  18            */
#define IGNH_DIST_DPTR                                                  0x0B    /*  11            */
#define IGNH_MAXANGLE_DPTR                                              0xFF    /* 255            */
#define EPMHCRS_DGI_DPTR                                                0x08    /*   8            */
#define EPMHCRS_IGNTIME_DPTR                                            0x12    /*  18            */
#define EPMHCRS_PLSDGI_DPTR                                             0x12    /*  18            */
#define EPMHCRS_PLLCOR_DPTR                                             0x12    /*  18            */
#define EPMHCRS_TMRMODE_DPTR                                            0x12    /*  18            */
#define EPMHCRS_TIMEOUT_DPTR                                            0x12    /*  18            */
#define EPMHCRS_STOPSIGMODE_DPTR                                        0x12    /*  18            */
#define EPMHCRS_DISBLNEWSYNC_DPTR                                       0x12    /*  18            */
#define EPMHCRS_RESYNCUPPERLVL_DPTR                                     0x12    /*  18            */
#define EPMHCRS_STARTSIGMODE_DPTR                                       0x12    /*  18            */
#define CCP_DAQ0TX_DPTR                                                 0x09    /*   9            */
#define MSC_MSC0QHNDLR_DPTR                                             0x10    /*  16            */
#define MSC_MSC1QHNDLR_DPTR                                             0x11    /*  17            */
#define PWMOUT_O_F_ECUA046_DPTR                                         0x0C    /*  12            */
#define MSC_MSC0RXTRANS_DPTR                                            0xFF    /* 255            */
#define MSC_MSC1RXTRANS_DPTR                                            0xFF    /* 255            */
#define SPI_PCPDATATRANSSSC0_DPTR                                       0x08    /*   8            */
#define SPI_PCPDATATRANSSSC1_DPTR                                       0x09    /*   9            */


/***************************************************************************************************
 * macros for configured latency of channel program
 */

#define PCP_LOAD_LTCY                                                   1000000
#define PCP_MON_LTCY                                                    20000
#define CCP_DAQ2TX_LTCY                                                 2000
#define MSC_USTOUT_LTCY                                                 500
#define CCP_DAQ1TX_LTCY                                                 400
#define INJHPFI_SWIR_LTCY                                               200
#define INJHPFI_CHL0_LTCY                                               200
#define INJHPFI_CHL1_LTCY                                               200
#define INJHPFI_CHL2_LTCY                                               200
#define INJHPFI_CHL3_LTCY                                               200
#define INJHPFI_CHL4_LTCY                                               200
#define INJHPFI_CHL5_LTCY                                               200
#define INJHPFI_CHL6_LTCY                                               200
#define INJHPFI_CHL7_LTCY                                               200
#define INJHPFI_MAXANGLE_LTCY                                           200
#define EPMHCAS_CAS_I1_LTCY                                             200
#define IGNH0_LTCY                                                      200
#define IGNH1_LTCY                                                      200
#define IGNH2_LTCY                                                      200
#define IGNH3_LTCY                                                      200
#define IGNH4_LTCY                                                      200
#define IGNH5_LTCY                                                      200
#define IGNH6_LTCY                                                      200
#define IGNH7_LTCY                                                      200
#define EPMHCRS_INC_LTCY                                                100
#define IGNH_DIST_LTCY                                                  100
#define IGNH_MAXANGLE_LTCY                                              100
#define EPMHCRS_DGI_LTCY                                                100
#define EPMHCRS_IGNTIME_LTCY                                            100
#define EPMHCRS_PLSDGI_LTCY                                             100
#define EPMHCRS_PLLCOR_LTCY                                             100
#define EPMHCRS_TMRMODE_LTCY                                            100
#define EPMHCRS_TIMEOUT_LTCY                                            100
#define EPMHCRS_STOPSIGMODE_LTCY                                        100
#define EPMHCRS_DISBLNEWSYNC_LTCY                                       100
#define EPMHCRS_RESYNCUPPERLVL_LTCY                                     100
#define EPMHCRS_STARTSIGMODE_LTCY                                       100
#define CCP_DAQ0TX_LTCY                                                 75
#define MSC_MSC0QHNDLR_LTCY                                             50
#define MSC_MSC1QHNDLR_LTCY                                             50
#define PWMOUT_O_F_ECUA046_LTCY                                         50
#define MSC_MSC0RXTRANS_LTCY                                            21
#define MSC_MSC1RXTRANS_LTCY                                            21
#define SPI_PCPDATATRANSSSC0_LTCY                                       15
#define SPI_PCPDATATRANSSSC1_LTCY                                       15


/***************************************************************************************************
 * miscellaneous macros for PCP configuration
 */

#define PCP_NUM_ARBTR_CYCLES                                            0x03UL



/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* structure for PCP channel context */
typedef struct
{
    volatile uint32 xR7_u32;
    volatile uint32 xR6_u32;
    volatile uint32 xR5_u32;
    volatile uint32 xR4_u32;
    volatile uint32 xR3_u32;
    volatile uint32 xR2_u32;
    volatile uint32 xR1_u32;
    volatile uint32 xR0_u32;
} Pcp_Csa_t;

/* structure for PCP PRAM */
typedef struct
{
                   uint32    xStuffIt0[8];
    volatile       Pcp_Csa_t Pcp_Load;
    volatile       Pcp_Csa_t Pcp_Mon;
    volatile       Pcp_Csa_t Ccp_DAQ2Tx;
    volatile       Pcp_Csa_t Msc_UsTOut;
    volatile       Pcp_Csa_t Ccp_DAQ1Tx;
    volatile       Pcp_Csa_t InjHPfi_SwIr;
    volatile       Pcp_Csa_t InjHPfi_Chl0;
    volatile       Pcp_Csa_t InjHPfi_Chl1;
    volatile       Pcp_Csa_t InjHPfi_Chl2;
    volatile       Pcp_Csa_t InjHPfi_Chl3;
    volatile       Pcp_Csa_t InjHPfi_Chl4;
    volatile       Pcp_Csa_t InjHPfi_Chl5;
    volatile       Pcp_Csa_t InjHPfi_Chl6;
    volatile       Pcp_Csa_t InjHPfi_Chl7;
    volatile       Pcp_Csa_t InjHPfi_MaxAngle;
    volatile       Pcp_Csa_t EpmHCaS_CAS_I1;
    volatile       Pcp_Csa_t IgnH0;
    volatile       Pcp_Csa_t IgnH1;
    volatile       Pcp_Csa_t IgnH2;
    volatile       Pcp_Csa_t IgnH3;
    volatile       Pcp_Csa_t IgnH4;
    volatile       Pcp_Csa_t IgnH5;
    volatile       Pcp_Csa_t IgnH6;
    volatile       Pcp_Csa_t IgnH7;
    volatile       Pcp_Csa_t EpmHCrS_INC;
    volatile       Pcp_Csa_t IgnH_Dist;
    volatile       Pcp_Csa_t IgnH_MaxAngle;
    volatile       Pcp_Csa_t EpmHCrS_DGI;
    volatile       Pcp_Csa_t EpmHCrS_IGNTIME;
    volatile       Pcp_Csa_t EpmHCrS_PLSDGI;
    volatile       Pcp_Csa_t EpmHCrS_PllCor;
    volatile       Pcp_Csa_t EpmHCrS_TmrMode;
    volatile       Pcp_Csa_t EpmHCrS_Timeout;
    volatile       Pcp_Csa_t EpmHCrS_STOPSIGMODE;
    volatile       Pcp_Csa_t EpmHCrS_DISBLNEWSYNC;
    volatile       Pcp_Csa_t EpmHCrS_RESYNCUPPERLVL;
    volatile       Pcp_Csa_t EpmHCrS_STARTSIGMODE;
    volatile       Pcp_Csa_t Ccp_DAQ0Tx;
    volatile       Pcp_Csa_t Msc_Msc0QHndlr;
    volatile       Pcp_Csa_t Msc_Msc1QHndlr;
    volatile       Pcp_Csa_t PwmOut_O_F_ECUA046;
    volatile       Pcp_Csa_t Msc_Msc0RxTrans;
    volatile       Pcp_Csa_t Msc_Msc1RxTrans;
    volatile       Pcp_Csa_t Spi_PcpDataTransSsc0;
    volatile       Pcp_Csa_t Spi_PcpDataTransSsc1;
                   uint32    xStuffIt1[144];
    volatile       sint32    IgnH0_ChlData[14];
    volatile       uint32    IgnH0_ChlConst[9];
    volatile       uint32    IgnH0_ErrNo;
    volatile       sint32    InjHPfi_Chl0_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl0_InjHPfi_ChlConstData[7];
    volatile       uint32    Spi_PcpDataTransSsc0_numSeqLen_u32;
    volatile       uint32    Spi_PcpDataTransSsc0_adTxSrc_u32;
    volatile       uint32*   Spi_PcpDataTransSsc0_adTxDest_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc0_adRxSrc_pu32;
    volatile       uint32    Spi_PcpDataTransSsc0_adRxDest_u32;
    volatile       uint32*   Spi_PcpDataTransSsc0_adQHSrn_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc0_adSscCon_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc0_adLtcCtr_pu32;
    volatile       uint32    Spi_PcpDataTransSsc0_xBsyXr_u32;
    volatile       uint32    Spi_PcpDataTransSsc0_xInactXr_u32;
    volatile       uint32    Spi_PcpDataTransSsc0_xSelSlso_u32;
    volatile       uint32    Spi_PcpDataTransSsc0_xDeSelSlso_u32;
    volatile       uint32    Spi_PcpDataTransSsc0_xOrigSsoc_u32;
    volatile       sint32    EpmHCrS_DGI_PCP_EpmHCrS_tiMinPF;
    volatile       sint32    EpmHCrS_DGI_PCP_EpmHCrS_tiMaxPF;
    volatile       sint32    EpmHCrS_DGI_PCP_EpmHCrS_tiMinPR;
    volatile       sint32    EpmHCrS_DGI_PCP_EpmHCrS_tiMaxPR;
    volatile       sint32    EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZeroNxt;
    volatile       uint32    EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZero;
    volatile       uint32    EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZeroLst;
    volatile       sint32    IgnH1_ChlData[14];
    volatile       uint32    IgnH1_ChlConst[9];
    volatile       uint32    IgnH1_ErrNo;
    volatile       sint32    InjHPfi_Chl1_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl1_InjHPfi_ChlConstData[7];
    volatile       uint32    Spi_PcpDataTransSsc1_numSeqLen_u32;
    volatile       uint32    Spi_PcpDataTransSsc1_adTxSrc_u32;
    volatile       uint32*   Spi_PcpDataTransSsc1_adTxDest_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc1_adRxSrc_pu32;
    volatile       uint32    Spi_PcpDataTransSsc1_adRxDest_u32;
    volatile       uint32*   Spi_PcpDataTransSsc1_adQHSrn_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc1_adSscCon_pu32;
    volatile       uint32*   Spi_PcpDataTransSsc1_adLtcCtr_pu32;
    volatile       uint32    Spi_PcpDataTransSsc1_xBsyXr_u32;
    volatile       uint32    Spi_PcpDataTransSsc1_xInactXr_u32;
    volatile       uint32    Spi_PcpDataTransSsc1_xSelSlso_u32;
    volatile       uint32    Spi_PcpDataTransSsc1_xDeSelSlso_u32;
    volatile       uint32    Spi_PcpDataTransSsc1_xOrigSsoc_u32;
    volatile       uint32*   Ccp_DAQ0Tx_adCanBuf0_pu32;
    volatile       uint32*   Ccp_DAQ0Tx_adOdtStart0_pu32;
    volatile       uint32    Ccp_DAQ0Tx_numLastReqOdt0_u32;
    volatile       uint32    Ccp_DAQ0Tx_stFlags0_u32;
    volatile       uint32*   Ccp_DAQ0Tx_stMeasBuffer0_pu8;
    volatile       uint32*   Ccp_DAQ0Tx_stActiveRaster0_pu8;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_numTiIncPerAvrg;
    volatile       sint32    IgnH2_ChlData[14];
    volatile       uint32    IgnH2_ChlConst[9];
    volatile       uint32    IgnH2_ErrNo;
    volatile       sint32    InjHPfi_Chl2_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl2_InjHPfi_ChlConstData[7];
    volatile       uint32    EpmHCaS_CAS_I1_PCP_stActEdge;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_numEdgeMax;
    volatile       void*     EpmHCaS_CAS_I1_PCP_adStBuf;
    volatile       void*     EpmHCaS_CAS_I1_PCP_adBuf;
    volatile       uint32*   EpmHCaS_CAS_I1_PCP_adGptaFPCSTAT;
    volatile       uint32*   EpmHCaS_CAS_I1_PCP_adGptaSRSC1;
    volatile       uint32*   EpmHCaS_CAS_I1_PCP_adGptaSRSS1;
    volatile       uint32*   EpmHCaS_CAS_I1_PCP_adGptaGTTIM0;
    volatile       uint32*   EpmHCaS_CAS_I1_PCP_adGptaGTCCTR;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_FpcGlitchMask;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_GtcMask;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_numCaS;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_numPageOtherCaS;
    volatile       sint32    EpmHCaS_CAS_I1_PCP_phiCorREdg;
    volatile       sint32    EpmHCaS_CAS_I1_PCP_phiCorFEdg;
    volatile       uint32    EpmHCaS_CAS_I1_PCP_tiCaSEdge;
    volatile       uint32    Msc_UsTOut_mskSrs1stMod_u32;
    volatile       uint32    Msc_UsTOut_mskSrs2ndMod_u32;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPerAvrg;
    volatile       uint32*   CDrv_SrvH_GT0;
    volatile       sint32    IgnH3_ChlData[14];
    volatile       uint32    IgnH3_ChlConst[9];
    volatile       uint32    IgnH3_ErrNo;
    volatile       sint32    InjHPfi_Chl3_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl3_InjHPfi_ChlConstData[7];
    volatile       uint32    Pcp_Mon_xQABuf_a[2];
    volatile       uint32*   Pcp_Mon_adQABuf_pa;
    volatile       uint32    Pcp_Mon_xConst1_u32;
    volatile       uint32    Pcp_Mon_xConst2_u32;
    volatile       uint32    Pcp_Mon_xConst3_u32;
    volatile       uint32    Pcp_Mon_xBuf1_u32;
    volatile       uint32    Pcp_Mon_xConst4_u32;
    volatile       uint32    Pcp_Mon_regR6Safe_u32;
    volatile       void*     Pcp_Mon_ptrData_s;
    volatile       uint32    IgnH_Dist_chlDPTR[8];
    volatile       uint32*   IgnHIncIRSRN;
    volatile       uint32    IgnH_EdgeCtrs;
    volatile       sint32    IgnH4_ChlData[14];
    volatile       uint32    IgnH4_ChlConst[9];
    volatile       uint32    IgnH4_ErrNo;
    volatile       sint32    InjHPfi_Chl4_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl4_InjHPfi_ChlConstData[7];
    volatile       uint32    PwmOut_O_F_ECUA046_PwmOut_LocBuf[2];
    volatile       uint32    PwmOut_O_F_ECUA046_PwmOut_MaxUint24;
    volatile       uint32*   PwmOut_O_F_ECUA046_PwmOut_LocBufAdr;
    volatile       void*     PwmOut_O_F_ECUA046_PwmOut_CpuBufAdr;
    volatile       uint32    PwmOut_O_F_ECUA046_PwmOut_CurLtcy;
    volatile       uint32    PwmOut_O_F_ECUA046_PwmOut_MaxLtcy;
    volatile       uint32*   PwmOut_O_F_ECUA046_PwmOut_Gt0Adr;
    volatile       uint32*   Ccp_DAQ1Tx_adCanBuf1_pu32;
    volatile       uint32*   Ccp_DAQ1Tx_adOdtStart1_pu32;
    volatile       uint32    Ccp_DAQ1Tx_numLastReqOdt1_u32;
    volatile       uint32    Ccp_DAQ1Tx_stFlags1_u32;
    volatile       uint32*   Ccp_DAQ1Tx_stMeasBuffer1_pu8;
    volatile       uint32*   Ccp_DAQ1Tx_stActiveRaster1_pu8;
    volatile       uint32*   Ccp_DAQ2Tx_adCanBuf2_pu32;
    volatile       uint32*   Ccp_DAQ2Tx_adOdtStart2_pu32;
    volatile       uint32    Ccp_DAQ2Tx_numLastReqOdt2_u32;
    volatile       uint32    Ccp_DAQ2Tx_stFlags2_u32;
    volatile       uint32*   Ccp_DAQ2Tx_stMeasBuffer2_pu8;
    volatile       uint32*   Ccp_DAQ2Tx_stActiveRaster2_pu8;
    volatile       sint32    IgnH5_ChlData[14];
    volatile       uint32    IgnH5_ChlConst[9];
    volatile       uint32    IgnH5_ErrNo;
    volatile       sint32    InjHPfi_Chl5_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl5_InjHPfi_ChlConstData[7];
    volatile       sint32    IgnH_LeadAngle[6];
    volatile       sint32    IgnH_MinOffTime;
    volatile       uint32    InjHPfi_Drv_AbortCnt;
    volatile       uint32    InjHPfi_Drv_MiDiCnt;
    volatile       uint32    InjHPfi_Drv_NextFreeSwIrId;
    volatile       uint32    InjHPfi_Drv_NextSwIrIdTbex;
                   uint32    xStuffIt2[9];
    volatile       sint32    IgnH6_ChlData[14];
    volatile       uint32    IgnH6_ChlConst[9];
    volatile       uint32    IgnH6_ErrNo;
    volatile       sint32    InjHPfi_Chl6_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl6_InjHPfi_ChlConstData[7];
                   uint32    xStuffIt3[20];
    volatile       sint32    IgnH7_ChlData[14];
    volatile       uint32    IgnH7_ChlConst[9];
    volatile       uint32    IgnH7_ErrNo;
    volatile       sint32    InjHPfi_Chl7_InjHPfi_ChlData[13];
    volatile       uint32    InjHPfi_Chl7_InjHPfi_ChlConstData[7];
                   uint32    xStuffIt4[20];
    volatile       uint32    Msc_Msc0QHndlr_xCmdQueue_au32[33];
    volatile       uint32    Msc_Msc0QHndlr_regUsrDscOcr_au32[6];
    volatile       uint32*   Msc_Msc0QHndlr_adClbckSrn_apu32[1];
    volatile       void*     Msc_Msc0QHndlr_adUsBuf_pu8;
    volatile       uint32    Msc_Msc0QHndlr_idxWr_u32;
    volatile       uint32*   Msc_Msc0QHndlr_adSwSrn_pu32;
    volatile       uint32*   Msc_Msc0QHndlr_adHwSrn_pu32;
    volatile       uint32    Msc_Msc0QHndlr_regSrnQHndlr_u32;
    volatile       uint32    Msc_Msc0QHndlr_regSrnRxTrans_u32;
    volatile       uint32*   Msc_Msc0QHndlr_adUd0_pu32;
    volatile       uint32    Msc_Msc0QHndlr_regIcrUsFrm_u32;
    volatile       uint32    Msc_Msc0QHndlr_regIcrCmdFrm_u32;
    volatile       uint32*   Msc_Msc0QHndlr_adGt0_pu32;
    volatile       uint32*   Msc_Msc0QHndlr_adTc_pu32;
    volatile       uint32    Msc_Msc0QHndlr_regTcCtr_u32;
    volatile       uint32    Msc_Msc0QHndlr_tiUsTOut1st_u32;
    volatile       uint32    Msc_Msc0QHndlr_tiUsTOut_u32;
    volatile       uint32    Msc_Msc0QHndlr_tiCmplUsDly_u32;
    volatile       uint32    Msc_Msc0QHndlr_mskTcXr_u32;
    volatile       uint32    Msc_Msc0QHndlr_stCmd_u32;
    volatile       uint32    Msc_Msc0QHndlr_numUsFrmRmn_u32;
    volatile       uint32*   Msc_Msc0QHndlr_adMon_pu32;
    volatile       uint32    Msc_Msc0QHndlr_sizeCmdTab_u32;
                   uint32    xStuffIt5[4];
    volatile       uint32    Msc_Msc1QHndlr_xCmdQueue_au32[33];
    volatile       uint32    Msc_Msc1QHndlr_regUsrDscOcr_au32[6];
    volatile       uint32*   Msc_Msc1QHndlr_adClbckSrn_apu32[1];
    volatile       void*     Msc_Msc1QHndlr_adUsBuf_pu8;
    volatile       uint32    Msc_Msc1QHndlr_idxWr_u32;
    volatile       uint32*   Msc_Msc1QHndlr_adSwSrn_pu32;
    volatile       uint32*   Msc_Msc1QHndlr_adHwSrn_pu32;
    volatile       uint32    Msc_Msc1QHndlr_regSrnQHndlr_u32;
    volatile       uint32    Msc_Msc1QHndlr_regSrnRxTrans_u32;
    volatile       uint32*   Msc_Msc1QHndlr_adUd0_pu32;
    volatile       uint32    Msc_Msc1QHndlr_regIcrUsFrm_u32;
    volatile       uint32    Msc_Msc1QHndlr_regIcrCmdFrm_u32;
    volatile       uint32*   Msc_Msc1QHndlr_adGt0_pu32;
    volatile       uint32*   Msc_Msc1QHndlr_adTc_pu32;
    volatile       uint32    Msc_Msc1QHndlr_regTcCtr_u32;
    volatile       uint32    Msc_Msc1QHndlr_tiUsTOut1st_u32;
    volatile       uint32    Msc_Msc1QHndlr_tiUsTOut_u32;
    volatile       uint32    Msc_Msc1QHndlr_tiCmplUsDly_u32;
    volatile       uint32    Msc_Msc1QHndlr_mskTcXr_u32;
    volatile       uint32    Msc_Msc1QHndlr_stCmd_u32;
    volatile       uint32    Msc_Msc1QHndlr_numUsFrmRmn_u32;
    volatile       uint32*   Msc_Msc1QHndlr_adMon_pu32;
    volatile       uint32    Msc_Msc1QHndlr_sizeCmdTab_u32;
                   uint32    xStuffIt6[4];
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_st;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_stCpuPcp;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_stSigMode;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctInc;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_idxWrDgi;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_facIncPlausLow;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_facIncPlausHigh;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_facGapPlausHigh;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiMinPer;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiMaxPer;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIgnSig;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_numIgnInc;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_facGapCrit1;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_facGapCrit2;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_stPllCor;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctIgnEdge;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctIncAddOneMicroTick;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctGap2Gap;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctGapPos;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncTrans;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_rIncPer;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPerCG;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPer;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPer50ns;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPer50nsNoCor;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPerTn;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPerTn_1;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPerTn_2;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPerTn_3;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_tiTo;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiToInterrim;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiIncPlausLow;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_idxWr;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_ctGlitch;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_PLLMTI;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_PLLMTI_1;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_GTCXR;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_GTTIM1;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_phiIncTrans;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_phiIncDvt;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_SigBuf_tiMax;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_SigBuf_Max;
    volatile       uint32    EpmHCrS_INC_PCP_R2;
    volatile       uint32    EpmHCrS_INC_PCP_R8;
    volatile       uint32    EpmHCrS_INC_PCP_R9;
    volatile       uint32    EpmHCrS_INC_PCP_R10;
    volatile       uint32    EpmHCrS_INC_PCP_R11;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_LevCaS;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_TAACor0;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_TAACor1;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_TAACor2;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_TAACor3;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_tiPred;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPredErr;
    volatile       uint32    EpmHCrS_INC_PCP_EpmHCrS_tiPredNonCor;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPredDvt;
    volatile       sint32    EpmHCrS_INC_PCP_EpmHCrS_tiPredDvtAvrg;
    volatile       uint32    EpmHCrS_INC_PCP_Tn_119_div_Tn_120;
    volatile       uint32    EpmHCrS_INC_EpmHInt_SigEvtCaS;
    volatile       uint32    EpmHCrS_INC_EpmHInt_stSigModeLst;
    volatile       uint32    EpmHCrS_INC_EpmHInt_numSyncInt;
    volatile       uint32    EpmHCrS_INC_EpmHInt_stInt;
    volatile       uint32    EpmHCrS_INC_EpmHInt_IntTyp;
    volatile       uint32    EpmHCrS_INC_EpmHInt_ctInc;
    volatile       uint32    InjHPfi_Drv_SwIrId[32];
} Pcp_Pram_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

extern volatile Pcp_Pram_t Pcp_Pram_s __attribute__ ((asection (".pcpdata","f=awp")));

extern void Pcp_DmyFuncCcp_DAQ0Tx(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncCcp_DAQ1Tx(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncCcp_DAQ2Tx(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCaS_ISR(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_DGI(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_DISBLNEWSYNC(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_IGNTIME(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_INC(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_PLSDGI(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_PllCor(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_RESYNCUPPERLVL(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_STARTSIGMODE(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_STOPSIGMODE(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_Timeout(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncEpmHCrS_TmrMode(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncIgnH_ChlFSM(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncIgnH_Distributor_INC_IR(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncIgnH_MaxIgnitionAngleFunc(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncInjHPfi_ChlFsm(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncInjHPfi_MaxInjectionAngleFunc(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncInjHPfi_SwIrISR(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncMsc_QueueHndlr(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncMsc_RxTrans(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncMsc_UsTOut(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncPcp_Load(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncPcp_Mon(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncPwmOut_Gtc2(void) __attribute__ ((asection(".text.discard","f=ax")));
extern void Pcp_DmyFuncSpi_PcpDataTrans(void) __attribute__ ((asection(".text.discard","f=ax")));


/* _LIBRARYABILITY_H */
#endif

/* _PCP_AUTO_CONF_H */
#endif
