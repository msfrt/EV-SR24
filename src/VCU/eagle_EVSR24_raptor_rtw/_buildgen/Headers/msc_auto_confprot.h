/*<RBHead>
 ***********************************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***********************************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:msc_template_confprot.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:SRU1COB$
 * $Date______:16.08.2012$
 * $Class_____:CONFTPLHDR$
 * $Name______:msc_template_confprot$
 * $Variant___:1.16.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.16.0; 0     16.08.2012 SRU1COB
 *   add support of two device types on one msc
 * 
 * 1.13.0; 0     24.11.2010 MMO1SI
 *   Remove old deprecated interface Msc_SndCmdImmd
 *   Improve PCP channel latency
 *   Correct PCP channel run times
 *   Activate confhash validation checker
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_template_confprot.ht
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 ***********************************************************************************************************************
 </RBHead>*/

#ifndef _MSC_AUTO_CONFPROT_H
#define _MSC_AUTO_CONFPROT_H
#ifndef _LIBRARYABILITY_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Protected configuration header of MSC low level driver.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* pre-initialisation macros for OCR registers */
#define MSC_MSC0_OCR_PRE_INIT          ((0UL << MSC0_OCR_CLP_POS)                                                    | \
                                        (0UL << MSC0_OCR_SLP_POS)                                                    | \
                                        (1UL << MSC0_OCR_CSLP_POS)                                                   | \
                                        (0UL << MSC0_OCR_ILP_POS)                                                    | \
                                        (0UL << MSC0_OCR_CSL_POS)                                                    | \
                                        (1UL << MSC0_OCR_CSH_POS))
#define MSC_MSC1_OCR_PRE_INIT          ((0UL << MSC1_OCR_CLP_POS)                                                    | \
                                        (0UL << MSC1_OCR_SLP_POS)                                                    | \
                                        (1UL << MSC1_OCR_CSLP_POS)                                                   | \
                                        (0UL << MSC1_OCR_ILP_POS)                                                    | \
                                        (0UL << MSC1_OCR_CSL_POS))

/* initialisation macros for OCR registers */
#define MSC_MSC0_OCR_INIT              (MSC_MSC0_OCR_PRE_INIT                                                        | \
                                        (1UL << MSC0_OCR_CLKCTRL_POS))
#define MSC_MSC1_OCR_INIT              (MSC_MSC1_OCR_PRE_INIT                                                        | \
                                        (1UL << MSC1_OCR_CLKCTRL_POS))

/* initialisation macros for DSC registers */
#define MSC_MSC0_DSC_INIT              (( 1UL << MSC0_DSC_TM_POS)                                                    | \
                                        ( 2UL << MSC0_DSC_PPD_POS)                                                   | \
                                        (16UL << MSC0_DSC_NDBL_POS)                                                  | \
                                        ( 1UL << MSC0_DSC_ENSELL_POS)                                                | \
                                        (16UL << MSC0_DSC_NDBH_POS)                                                  | \
                                        ( 1UL << MSC0_DSC_ENSELH_POS))
#define MSC_MSC1_DSC_INIT              (( 1UL << MSC1_DSC_TM_POS)                                                    | \
                                        ( 2UL << MSC1_DSC_PPD_POS)                                                   | \
                                        (16UL << MSC1_DSC_NDBL_POS)                                                  | \
                                        ( 1UL << MSC1_DSC_ENSELL_POS))

/* device specific macros to set-up OCR register to use proper enable signal for command frames */
#define MSC_MSC0_OCR_CJ950_1           (MSC_MSC0_OCR_INIT                                                            | \
                                        (0UL << MSC0_OCR_CSC_POS))
#define MSC_MSC0_OCR_CJ950_2           (MSC_MSC0_OCR_INIT                                                            | \
                                        (1UL << MSC0_OCR_CSC_POS))
#define MSC_MSC1_OCR_CJ950_3           (MSC_MSC1_OCR_INIT                                                            | \
                                        (0UL << MSC1_OCR_CSC_POS))

/* device specific macros for DSC registers */
#define MSC_MSC0_DSC_CJ950_1           (MSC_MSC0_DSC_INIT                                                            | \
                                        (16UL << MSC0_DSC_NBC_POS))
#define MSC_MSC0_DSC_CJ950_2           (MSC_MSC0_DSC_INIT                                                            | \
                                        (16UL << MSC0_DSC_NBC_POS))
#define MSC_MSC1_DSC_CJ950_3           (MSC_MSC1_DSC_INIT                                                            | \
                                        (16UL << MSC1_DSC_NBC_POS))

/* device specific macros for USR registers */
#define MSC_MSC0_USR_CJ950_1           ((0UL << MSC0_USR_UFT_POS)                                                    | \
                                        (5UL << MSC0_USR_URR_POS)                                                    | \
                                        (0UL << MSC0_USR_PCTR_POS))
#define MSC_MSC0_USR_CJ950_2           ((0UL << MSC0_USR_UFT_POS)                                                    | \
                                        (5UL << MSC0_USR_URR_POS)                                                    | \
                                        (0UL << MSC0_USR_PCTR_POS))
#define MSC_MSC1_USR_CJ950_3           ((0UL << MSC1_USR_UFT_POS)                                                    | \
                                        (5UL << MSC1_USR_URR_POS)                                                    | \
                                        (0UL << MSC1_USR_PCTR_POS))

/* command queue handler specific configuration macros (protected) */
#define MSC_QHNDLR_NUM_MOD              2
#define MSC_QHNDLR_NUM_CMD              48
#define MSC_QHNDLR_NUM_USFRM            48


/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */

/* structure used to build command table - it holds the command status and value (and optional monitoring variables) */
typedef struct
{
    volatile uint32 stCmd_u32;          /* command status */
    uint32          xCmd_u32;           /* command value (to be copied to MSCx.DC) */
} Msc_CmdTab_t;

 /* structure used for default monitoring purposes (and optional extended monitoring) */
typedef struct
{
    uint8 numQLoadMax_u8;       /* maximum queue load up to now */
    uint8 ctErrAccepted_u8;     /* counter of Msc_ActvCmd() calls while this command is already accepted (queued) */
    uint8 ctErrQOvrFlw_u8;      /* counter of Msc_ActvCmd() calls while queue is full */
    uint8 ctErrSndCmdImmd_u8;   /* counter of Msc_SndCmdImmd() calls while queue active */
    uint8 ctErrUsTOut_u8;       /* counter of error type "Upstream Timeout Error" */
    uint8 ctErrUsPrty_u8;       /* counter of error type "Upstream Parity Error" */
    uint8 ctErrUs_u8;           /* counter of error type "Upstream Error" */
} Msc_Mon_t;


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern Msc_CmdTab_t       Msc_xCmdTab_as[MSC_QHNDLR_NUM_CMD];
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START
extern uint8  Msc_xUsBuf_au8[MSC_QHNDLR_NUM_USFRM];
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END
__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern       Msc_Mon_t    Msc_xMon_as[MSC_QHNDLR_NUM_MOD];
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

/* _LIBRARYABILITY_H */
#endif

/* _MSC_AUTO_CONFPROT_H */
#endif
