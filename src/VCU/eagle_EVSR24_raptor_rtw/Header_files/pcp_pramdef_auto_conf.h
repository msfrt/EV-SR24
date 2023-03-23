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
 * $Filename__:pcp_pramdef_template_conf.ht$
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
 * $Name______:pcp_pramdef_template_conf$
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
 *      File name: pcp_pramdef_template_conf.ht
 *      Version: \main\3
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef _PCP_PRAMDEF_AUTO_CONF_H
#define _PCP_PRAMDEF_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Auto generated configuration file of PCP with macros for offsets of PCP PRAM variables.
 *
 * \scope CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/***************************************************************************************************
 * macros for function Ccp_DAQ0Tx
 */
#ifdef CCP_DAQ0TX_SELECT
#define CCP_DAQ0TX_BASE_DPTR                                    ((0x09 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CCP_DAQ0TX_BASE_DPTR_NO_IEN                             ((0x09 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adCanBuf0_pu32                                          57
#define adOdtStart0_pu32                                        58
#define numLastReqOdt0_u32                                      59
#define stActiveRaster0_pu8                                     62
#define stFlags0_u32                                            60
#define stMeasBuffer0_pu8                                       61
/* CCP_DAQ0TX_SELECT */
#endif

/***************************************************************************************************
 * macros for function Ccp_DAQ1Tx
 */
#ifdef CCP_DAQ1TX_SELECT
#define CCP_DAQ1TX_BASE_DPTR                                    ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CCP_DAQ1TX_BASE_DPTR_NO_IEN                             ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adCanBuf1_pu32                                          52
#define adOdtStart1_pu32                                        53
#define numLastReqOdt1_u32                                      54
#define stActiveRaster1_pu8                                     57
#define stFlags1_u32                                            55
#define stMeasBuffer1_pu8                                       56
/* CCP_DAQ1TX_SELECT */
#endif

/***************************************************************************************************
 * macros for function Ccp_DAQ2Tx
 */
#ifdef CCP_DAQ2TX_SELECT
#define CCP_DAQ2TX_BASE_DPTR                                    ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CCP_DAQ2TX_BASE_DPTR_NO_IEN                             ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adCanBuf2_pu32                                          58
#define adOdtStart2_pu32                                        59
#define numLastReqOdt2_u32                                      60
#define stActiveRaster2_pu8                                     63
#define stFlags2_u32                                            61
#define stMeasBuffer2_pu8                                       62
/* CCP_DAQ2TX_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCaS_ISR
 */
#ifdef EPMHCAS_ISR_SELECT
#define EPMHCAS_ISR_BASE_DPTR                                   ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCAS_ISR_BASE_DPTR_NO_IEN                            ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_FpcGlitchMask                                       53
#define PCP_GtcMask                                             54
#define PCP_adBuf                                               47
#define PCP_adGptaFPCSTAT                                       48
#define PCP_adGptaGTCCTR                                        52
#define PCP_adGptaGTTIM0                                        51
#define PCP_adGptaSRSC1                                         49
#define PCP_adGptaSRSS1                                         50
#define PCP_adStBuf                                             46
#define PCP_numCaS                                              55
#define PCP_numEdgeMax                                          45
#define PCP_numPageOtherCaS                                     56
#define PCP_phiCorFEdg                                          58
#define PCP_phiCorREdg                                          57
#define PCP_stActEdge                                           44
#define PCP_tiCaSEdge                                           59
#define EpmHInt_SigEvtCaS_FAR                                   58
#define EpmHInt_SigEvtCaS_DPTR                                  ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EpmHInt_SigEvtCaS_DPTR_NO_IEN                           ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_LevCaS_FAR                                  47
#define PCP_EpmHCrS_LevCaS_DPTR                                 ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_LevCaS_DPTR_NO_IEN                          ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_ctInc_FAR                                   3
#define PCP_EpmHCrS_ctInc_DPTR                                  ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_ctInc_DPTR_NO_IEN                           ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_stSigMode_FAR                               2
#define PCP_EpmHCrS_stSigMode_DPTR                              ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_stSigMode_DPTR_NO_IEN                       ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* EPMHCAS_ISR_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_DGI
 */
#ifdef EPMHCRS_DGI_SELECT
#define EPMHCRS_DGI_BASE_DPTR                                   ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_DGI_BASE_DPTR_NO_IEN                            ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZero                                62
#define PCP_EpmHCrS_numIncPhZeroLst                             63
#define PCP_EpmHCrS_numIncPhZeroNxt                             61
#define PCP_EpmHCrS_tiMaxPF                                     58
#define PCP_EpmHCrS_tiMaxPR                                     60
#define PCP_EpmHCrS_tiMinPF                                     57
#define PCP_EpmHCrS_tiMinPR                                     59
/* EPMHCRS_DGI_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_DISBLNEWSYNC
 */
#ifdef EPMHCRS_DISBLNEWSYNC_SELECT
#define EPMHCRS_DISBLNEWSYNC_BASE_DPTR                          ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_DISBLNEWSYNC_BASE_DPTR_NO_IEN                   ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define EpmHInt_stSigModeLst                                    59
#define PCP_EpmHCrS_stCpuPcp                                    1
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_DISBLNEWSYNC_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_IGNTIME
 */
#ifdef EPMHCRS_IGNTIME_SELECT
#define EPMHCRS_IGNTIME_BASE_DPTR                               ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_IGNTIME_BASE_DPTR_NO_IEN                        ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_IGNTIME_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_INC
 */
#ifdef EPMHCRS_INC_SELECT
#define EPMHCRS_INC_BASE_DPTR                                   ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_INC_BASE_DPTR_NO_IEN                            ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define EpmHInt_IntTyp                                          62
#define EpmHInt_SigEvtCaS                                       58
#define EpmHInt_ctInc                                           63
#define EpmHInt_numSyncInt                                      60
#define EpmHInt_stInt                                           61
#define EpmHInt_stSigModeLst                                    59
#define PCP_EpmHCrS_GTCXR                                       36
#define PCP_EpmHCrS_GTTIM1                                      37
#define PCP_EpmHCrS_LevCaS                                      47
#define PCP_EpmHCrS_PLLMTI                                      34
#define PCP_EpmHCrS_PLLMTI_1                                    35
#define PCP_EpmHCrS_SigBuf_Max                                  41
#define PCP_EpmHCrS_SigBuf_tiMax                                40
#define PCP_EpmHCrS_TAACor0                                     48
#define PCP_EpmHCrS_TAACor1                                     49
#define PCP_EpmHCrS_TAACor2                                     50
#define PCP_EpmHCrS_TAACor3                                     51
#define PCP_EpmHCrS_ctGap2Gap                                   17
#define PCP_EpmHCrS_ctGapPos                                    18
#define PCP_EpmHCrS_ctGlitch                                    33
#define PCP_EpmHCrS_ctIgnEdge                                   15
#define PCP_EpmHCrS_ctInc                                       3
#define PCP_EpmHCrS_ctIncAddOneMicroTick                        16
#define PCP_EpmHCrS_facGapCrit1                                 12
#define PCP_EpmHCrS_facGapCrit2                                 13
#define PCP_EpmHCrS_facGapPlausHigh                             7
#define PCP_EpmHCrS_facIncPlausHigh                             6
#define PCP_EpmHCrS_facIncPlausLow                              5
#define PCP_EpmHCrS_idxWr                                       32
#define PCP_EpmHCrS_idxWrDgi                                    4
#define PCP_EpmHCrS_numIgnInc                                   11
#define PCP_EpmHCrS_phiIncDvt                                   39
#define PCP_EpmHCrS_phiIncTrans                                 38
#define PCP_EpmHCrS_rIncPer                                     20
#define PCP_EpmHCrS_st                                          0
#define PCP_EpmHCrS_stCpuPcp                                    1
#define PCP_EpmHCrS_stPllCor                                    14
#define PCP_EpmHCrS_stSigMode                                   2
#define PCP_EpmHCrS_tiIgnSig                                    10
#define PCP_EpmHCrS_tiIncPer                                    22
#define PCP_EpmHCrS_tiIncPer50ns                                23
#define PCP_EpmHCrS_tiIncPer50nsNoCor                           24
#define PCP_EpmHCrS_tiIncPerCG                                  21
#define PCP_EpmHCrS_tiIncPlausLow                               31
#define PCP_EpmHCrS_tiIncTrans                                  19
#define PCP_EpmHCrS_tiMaxPer                                    9
#define PCP_EpmHCrS_tiMinPer                                    8
#define PCP_EpmHCrS_tiPerTn                                     25
#define PCP_EpmHCrS_tiPerTn_1                                   26
#define PCP_EpmHCrS_tiPerTn_2                                   27
#define PCP_EpmHCrS_tiPerTn_3                                   28
#define PCP_EpmHCrS_tiPred                                      52
#define PCP_EpmHCrS_tiPredDvt                                   55
#define PCP_EpmHCrS_tiPredDvtAvrg                               56
#define PCP_EpmHCrS_tiPredErr                                   53
#define PCP_EpmHCrS_tiPredNonCor                                54
#define PCP_EpmHCrS_tiTo                                        29
#define PCP_EpmHCrS_tiToInterrim                                30
#define PCP_R10                                                 45
#define PCP_R11                                                 46
#define PCP_R2                                                  42
#define PCP_R8                                                  43
#define PCP_R9                                                  44
#define PCP_Tn_119_div_Tn_120                                   57
#define PCP_EpmHCrS_numTiIncPerAvrg_FAR                         63
#define PCP_EpmHCrS_numTiIncPerAvrg_DPTR                        ((0x09 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_numTiIncPerAvrg_DPTR_NO_IEN                 ((0x09 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_FAR                            62
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR                           ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR_NO_IEN                    ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZero_FAR                            62
#define PCP_EpmHCrS_numIncPhZero_DPTR                           ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZero_DPTR_NO_IEN                    ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZeroLst_FAR                         63
#define PCP_EpmHCrS_numIncPhZeroLst_DPTR                        ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZeroLst_DPTR_NO_IEN                 ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZeroNxt_FAR                         61
#define PCP_EpmHCrS_numIncPhZeroNxt_DPTR                        ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_numIncPhZeroNxt_DPTR_NO_IEN                 ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiMaxPF_FAR                                 58
#define PCP_EpmHCrS_tiMaxPF_DPTR                                ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiMaxPF_DPTR_NO_IEN                         ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiMaxPR_FAR                                 60
#define PCP_EpmHCrS_tiMaxPR_DPTR                                ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiMaxPR_DPTR_NO_IEN                         ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiMinPF_FAR                                 57
#define PCP_EpmHCrS_tiMinPF_DPTR                                ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiMinPF_DPTR_NO_IEN                         ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiMinPR_FAR                                 59
#define PCP_EpmHCrS_tiMinPR_DPTR                                ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiMinPR_DPTR_NO_IEN                         ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* EPMHCRS_INC_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_PLSDGI
 */
#ifdef EPMHCRS_PLSDGI_SELECT
#define EPMHCRS_PLSDGI_BASE_DPTR                                ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_PLSDGI_BASE_DPTR_NO_IEN                         ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_ctGap2Gap                                   17
#define PCP_EpmHCrS_rIncPer                                     20
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_PLSDGI_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_PllCor
 */
#ifdef EPMHCRS_PLLCOR_SELECT
#define EPMHCRS_PLLCOR_BASE_DPTR                                ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_PLLCOR_BASE_DPTR_NO_IEN                         ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_stPllCor                                    14
/* EPMHCRS_PLLCOR_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_RESYNCUPPERLVL
 */
#ifdef EPMHCRS_RESYNCUPPERLVL_SELECT
#define EPMHCRS_RESYNCUPPERLVL_BASE_DPTR                        ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_RESYNCUPPERLVL_BASE_DPTR_NO_IEN                 ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define EpmHInt_stSigModeLst                                    59
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_RESYNCUPPERLVL_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_STARTSIGMODE
 */
#ifdef EPMHCRS_STARTSIGMODE_SELECT
#define EPMHCRS_STARTSIGMODE_BASE_DPTR                          ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_STARTSIGMODE_BASE_DPTR_NO_IEN                   ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define EpmHInt_stSigModeLst                                    59
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_STARTSIGMODE_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_STOPSIGMODE
 */
#ifdef EPMHCRS_STOPSIGMODE_SELECT
#define EPMHCRS_STOPSIGMODE_BASE_DPTR                           ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_STOPSIGMODE_BASE_DPTR_NO_IEN                    ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_stSigMode                                   2
/* EPMHCRS_STOPSIGMODE_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_Timeout
 */
#ifdef EPMHCRS_TIMEOUT_SELECT
#define EPMHCRS_TIMEOUT_BASE_DPTR                               ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_TIMEOUT_BASE_DPTR_NO_IEN                        ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiTo                                        29
/* EPMHCRS_TIMEOUT_SELECT */
#endif

/***************************************************************************************************
 * macros for function EpmHCrS_TmrMode
 */
#ifdef EPMHCRS_TMRMODE_SELECT
#define EPMHCRS_TMRMODE_BASE_DPTR                               ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define EPMHCRS_TMRMODE_BASE_DPTR_NO_IEN                        ((0x12 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_stPllCor                                    14
/* EPMHCRS_TMRMODE_SELECT */
#endif

/***************************************************************************************************
 * macros for function IgnH_ChlFSM
 */
#ifdef IGNH_CHLFSM_SELECT
#define IGNH_CHLFSM_BASE_DPTR                                   ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IGNH_CHLFSM_BASE_DPTR_NO_IEN                            ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define ChlConst                                                14
#define ChlData                                                 0
#define ErrNo                                                   23
#define CDrv_SrvH_GT0_FAR                                       63
#define CDrv_SrvH_GT0_DPTR                                      ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CDrv_SrvH_GT0_DPTR_NO_IEN                               ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define IgnHIncIRSRN_FAR                                        62
#define IgnHIncIRSRN_DPTR                                       ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IgnHIncIRSRN_DPTR_NO_IEN                                ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define IgnH_EdgeCtrs_FAR                                       63
#define IgnH_EdgeCtrs_DPTR                                      ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IgnH_EdgeCtrs_DPTR_NO_IEN                               ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define IgnH_LeadAngle_FAR                                      44
#define IgnH_LeadAngle_DPTR                                     ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IgnH_LeadAngle_DPTR_NO_IEN                              ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define IgnH_MinOffTime_FAR                                     50
#define IgnH_MinOffTime_DPTR                                    ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IgnH_MinOffTime_DPTR_NO_IEN                             ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_FAR                            62
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR                           ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR_NO_IEN                    ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* IGNH_CHLFSM_SELECT */
#endif

/***************************************************************************************************
 * macros for function IgnH_Distributor_INC_IR
 */
#ifdef IGNH_DISTRIBUTOR_INC_IR_SELECT
#define IGNH_DISTRIBUTOR_INC_IR_BASE_DPTR                       ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IGNH_DISTRIBUTOR_INC_IR_BASE_DPTR_NO_IEN                ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define chlDPTR                                                 54
/* IGNH_DISTRIBUTOR_INC_IR_SELECT */
#endif

/***************************************************************************************************
 * macros for function IgnH_MaxIgnitionAngleFunc
 */
#ifdef IGNH_MAXIGNITIONANGLEFUNC_SELECT
#define IGNH_MAXIGNITIONANGLEFUNC_BASE_DPTR                     ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define IGNH_MAXIGNITIONANGLEFUNC_BASE_DPTR_NO_IEN              ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* IGNH_MAXIGNITIONANGLEFUNC_SELECT */
#endif

/***************************************************************************************************
 * macros for function InjHPfi_ChlFsm
 */
#ifdef INJHPFI_CHLFSM_SELECT
#define INJHPFI_CHLFSM_BASE_DPTR                                ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define INJHPFI_CHLFSM_BASE_DPTR_NO_IEN                         ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_ChlConstData                                    37
#define InjHPfi_ChlData                                         24
#define CDrv_SrvH_GT0_FAR                                       63
#define CDrv_SrvH_GT0_DPTR                                      ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CDrv_SrvH_GT0_DPTR_NO_IEN                               ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_Drv_AbortCnt_FAR                                51
#define InjHPfi_Drv_AbortCnt_DPTR                               ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define InjHPfi_Drv_AbortCnt_DPTR_NO_IEN                        ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_Drv_MiDiCnt_FAR                                 52
#define InjHPfi_Drv_MiDiCnt_DPTR                                ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define InjHPfi_Drv_MiDiCnt_DPTR_NO_IEN                         ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_FAR                            62
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR                           ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_EpmHCrS_tiIncPerAvrg_DPTR_NO_IEN                    ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* INJHPFI_CHLFSM_SELECT */
#endif

/***************************************************************************************************
 * macros for function InjHPfi_MaxInjectionAngleFunc
 */
#ifdef INJHPFI_MAXINJECTIONANGLEFUNC_SELECT
#define INJHPFI_MAXINJECTIONANGLEFUNC_BASE_DPTR                 ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define INJHPFI_MAXINJECTIONANGLEFUNC_BASE_DPTR_NO_IEN          ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* INJHPFI_MAXINJECTIONANGLEFUNC_SELECT */
#endif

/***************************************************************************************************
 * macros for function InjHPfi_SwIrISR
 */
#ifdef INJHPFI_SWIRISR_SELECT
#define INJHPFI_SWIRISR_BASE_DPTR                               ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define INJHPFI_SWIRISR_BASE_DPTR_NO_IEN                        ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define CDrv_SrvH_GT0_FAR                                       63
#define CDrv_SrvH_GT0_DPTR                                      ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define CDrv_SrvH_GT0_DPTR_NO_IEN                               ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_Drv_NextFreeSwIrId_FAR                          53
#define InjHPfi_Drv_NextFreeSwIrId_DPTR                         ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define InjHPfi_Drv_NextFreeSwIrId_DPTR_NO_IEN                  ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_Drv_NextSwIrIdTbex_FAR                          54
#define InjHPfi_Drv_NextSwIrIdTbex_DPTR                         ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define InjHPfi_Drv_NextSwIrIdTbex_DPTR_NO_IEN                  ((0x0D << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define InjHPfi_Drv_SwIrId_FAR                                  0
#define InjHPfi_Drv_SwIrId_DPTR                                 ((0x13 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define InjHPfi_Drv_SwIrId_DPTR_NO_IEN                          ((0x13 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* INJHPFI_SWIRISR_SELECT */
#endif

/***************************************************************************************************
 * macros for function Msc_QueueHndlr
 */
#ifdef MSC_QUEUEHNDLR_SELECT
#define MSC_QUEUEHNDLR_BASE_DPTR                                ((0x10 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define MSC_QUEUEHNDLR_BASE_DPTR_NO_IEN                         ((0x10 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adClbckSrn_apu32                                        39
#define adGt0_pu32                                              49
#define adHwSrn_pu32                                            43
#define adMon_pu32                                              58
#define adSwSrn_pu32                                            42
#define adTc_pu32                                               50
#define adUd0_pu32                                              46
#define adUsBuf_pu8                                             40
#define idxWr_u32                                               41
#define mskTcXr_u32                                             55
#define numUsFrmRmn_u32                                         57
#define regIcrCmdFrm_u32                                        48
#define regIcrUsFrm_u32                                         47
#define regSrnQHndlr_u32                                        44
#define regSrnRxTrans_u32                                       45
#define regTcCtr_u32                                            51
#define regUsrDscOcr_au32                                       33
#define sizeCmdTab_u32                                          59
#define stCmd_u32                                               56
#define tiCmplUsDly_u32                                         54
#define tiUsTOut1st_u32                                         52
#define tiUsTOut_u32                                            53
#define xCmdQueue_au32                                          0
/* MSC_QUEUEHNDLR_SELECT */
#endif

/***************************************************************************************************
 * macros for function Msc_RxTrans
 */
#ifdef MSC_RXTRANS_SELECT
#define MSC_RXTRANS_BASE_DPTR                                   ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define MSC_RXTRANS_BASE_DPTR_NO_IEN                            ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* MSC_RXTRANS_SELECT */
#endif

/***************************************************************************************************
 * macros for function Msc_UsTOut
 */
#ifdef MSC_USTOUT_SELECT
#define MSC_USTOUT_BASE_DPTR                                    ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define MSC_USTOUT_BASE_DPTR_NO_IEN                             ((0x0A << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define mskSrs1stMod_u32                                        60
#define mskSrs2ndMod_u32                                        61
/* MSC_USTOUT_SELECT */
#endif

/***************************************************************************************************
 * macros for function Pcp_Load
 */
#ifdef PCP_LOAD_SELECT
#define PCP_LOAD_BASE_DPTR                                      ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_LOAD_BASE_DPTR_NO_IEN                               ((0xFF << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
/* PCP_LOAD_SELECT */
#endif

/***************************************************************************************************
 * macros for function Pcp_Mon
 */
#ifdef PCP_MON_SELECT
#define PCP_MON_BASE_DPTR                                       ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PCP_MON_BASE_DPTR_NO_IEN                                ((0x0B << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adQABuf_pa                                              46
#define ptrData_s                                               53
#define regR6Safe_u32                                           52
#define xBuf1_u32                                               50
#define xConst1_u32                                             47
#define xConst2_u32                                             48
#define xConst3_u32                                             49
#define xConst4_u32                                             51
#define xQABuf_a                                                44
/* PCP_MON_SELECT */
#endif

/***************************************************************************************************
 * macros for function PwmOut_Gtc2
 */
#ifdef PWMOUT_GTC2_SELECT
#define PWMOUT_GTC2_BASE_DPTR                                   ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define PWMOUT_GTC2_BASE_DPTR_NO_IEN                            ((0x0C << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define PwmOut_CpuBufAdr                                        48
#define PwmOut_CurLtcy                                          49
#define PwmOut_Gt0Adr                                           51
#define PwmOut_LocBuf                                           44
#define PwmOut_LocBufAdr                                        47
#define PwmOut_MaxLtcy                                          50
#define PwmOut_MaxUint24                                        46
/* PWMOUT_GTC2_SELECT */
#endif

/***************************************************************************************************
 * macros for function Spi_PcpDataTrans
 */
#ifdef SPI_PCPDATATRANS_SELECT
#define SPI_PCPDATATRANS_BASE_DPTR                              ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))
#define SPI_PCPDATATRANS_BASE_DPTR_NO_IEN                       ((0x08 << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT))
#define adLtcCtr_pu32                                           51
#define adQHSrn_pu32                                            49
#define adRxDest_u32                                            48
#define adRxSrc_pu32                                            47
#define adSscCon_pu32                                           50
#define adTxDest_pu32                                           46
#define adTxSrc_u32                                             45
#define numSeqLen_u32                                           44
#define xBsyXr_u32                                              52
#define xDeSelSlso_u32                                          55
#define xInactXr_u32                                            53
#define xOrigSsoc_u32                                           56
#define xSelSlso_u32                                            54
/* SPI_PCPDATATRANS_SELECT */
#endif



/* _LIBRARYABILITY_H */
#endif

/* _PCP_PRAMDEF_AUTO_CONF_H */
#endif
