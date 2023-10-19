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
 * $Filename__:dfc_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:06.07.2012$
 * $Class_____:SWHDR$
 * $Name______:dfc_pub$
 * $Variant___:2.10.0$
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
 * 2.10.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.8.0; 0     16.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 2.5.0; 0     15.09.2011 ZUZ2SI
 *   (378248) CRQ: Extension of DisblMsk to support 32 bits 
 *   
 *   Docu complement due to virtual DFC
 * 
 * 2.3.1; 0     22.09.2009 PKA2SI
 *   bugfix: tested flag reset in DDRC state in combination with DEB_MULCYCL and
 *    4h DCY
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfc_pub.h
 *      Version: \main\basis\b_CORE\7
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DFC_PUB_H
#define _DFC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - fault check status array definition
 *              Definition of public interfaces
 *
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Defines for the arguments of dfc interface */
/* Fault levels */
#define   DSM_FAULT_PERCENT_00            0u
#define   DSM_FAULT_PERCENT_25            4u
#define   DSM_FAULT_PERCENT_50            8u
#define   DSM_FAULT_PERCENT_100           15u

/* Debounce levels */
#define   DSM_DEBOUNCE_PERCENT_00         0u
#define   DSM_DEBOUNCE_PERCENT_25         4u
#define   DSM_DEBOUNCE_PERCENT_50         8u
#define   DSM_DEBOUNCE_PERCENT_75         12u
#define   DSM_DEBOUNCE_PERCENT_100        15u


/* Tested State */
#define DSM_TST_NOT_READY                 0u
#define DSM_TST_READY                     1u

/* Distributed validation */
#define DSM_REPORT_EVENT_VALIDATE         0u
#define DSM_REPORT_ONLY_VALIDATE          1u

/* Bitpositions and field lengths (if more than one bit) within the status words */
/* fault status and masks*/
/* Fault status: */


/* Bit fields */
/* Bit position */
#define DSM_ST_CHECK_ST_FAULT_POS     0u
/* number of bits */
#define DSM_ST_CHECK_ST_FAULT_LEN     4u
/* access mask */
#define DSM_ST_CHECK_ST_FAULT_MSK     \
        ((((1u << (DSM_ST_CHECK_ST_FAULT_LEN))-1u)) << (DSM_ST_CHECK_ST_FAULT_POS))
/* maximum value */
#define DSM_ST_CHECK_ST_FAULT_MAX     15



/* Debounce status: */
/* Bit position */
#define DSM_ST_CHECK_ST_DEB_POS       8u
/* number of bits */
#define DSM_ST_CHECK_ST_DEB_LEN       4u
/* access mask */
#define DSM_ST_CHECK_ST_DEB_MSK     \
        ((((1 << (DSM_ST_CHECK_ST_DEB_LEN))-1)) << (DSM_ST_CHECK_ST_DEB_POS))
/* maximum value */
#define DSM_ST_CHECK_ST_DEB_MAX       15u



/* single Bits */

/* Last debounced digital fault state */
#define DSM_ST_CHECK_ST_LDF_POS       4u
#define DSM_ST_CHECK_ST_LDF_MSK     \
        (1u << (DSM_ST_CHECK_ST_LDF_POS))

/* Test status since power fail (old) */
#define DSM_ST_CHECK_ST_TPF_POS       5u
#define DSM_ST_CHECK_ST_TPF_MSK     \
        (1u << (DSM_ST_CHECK_ST_TPF_POS))

/* Test status since clear (new) */
#define DSM_ST_CHECK_ST_TSC_POS       5u
#define DSM_ST_CHECK_ST_TSC_MSK     \
        (1u << (DSM_ST_CHECK_ST_TSC_POS))

/* Memory status */
#define DSM_ST_CHECK_ST_MEM_POS       6u
#define DSM_ST_CHECK_ST_MEM_MSK     \
        (1u << (DSM_ST_CHECK_ST_MEM_POS))

/* Run status (active/passive) */
#define DSM_ST_CHECK_ST_RUN_POS       7u
#define DSM_ST_CHECK_ST_RUN_MSK     \
        (1u << (DSM_ST_CHECK_ST_RUN_POS))

/* Fault since clear status */
#define DSM_ST_CHECK_ST_FSC_POS       12u
#define DSM_ST_CHECK_ST_FSC_MSK     \
        (1u << (DSM_ST_CHECK_ST_FSC_POS))

/* Test status */
#define DSM_ST_CHECK_ST_TST_POS       13u
#define DSM_ST_CHECK_ST_TST_MSK     \
        (1u << (DSM_ST_CHECK_ST_TST_POS))

/* test finalized for this driving cycle (not further test possible) */
#define DSM_ST_CHECK_ST_FINAL_POS     15u
#define DSM_ST_CHECK_ST_FINAL_MSK     \
        (1u << (DSM_ST_CHECK_ST_FINAL_POS))



/*
 ***************************************************************************************************
 * Defines for DFC disable state (used by DSM_GetDFCDisblSt() )
 ***************************************************************************************************
 */

#define DSM_ST_DFC_DYN_DISBL_POS        0u
#define DSM_ST_DFC_DYN_DISBL_MSK        \
        (1u << (DSM_ST_DFC_DYN_DISBL_POS))

#define DSM_ST_DFC_STAT_DISBL_POS       1u
#define DSM_ST_DFC_STAT_DISBL_MSK       \
        (1u << (DSM_ST_DFC_STAT_DISBL_POS))

#define DSM_ST_DFC_FLTCLS_DISBL_POS     2u
#define DSM_ST_DFC_FLTCLS_DISBL_MSK     \
        (1u << (DSM_ST_DFC_FLTCLS_DISBL_POS))

/* Get macros */
/**************************************************************************************************/
#define DSM_GetSFCErr(stCheck)     \
        ((uint)SrvB_GetBitField( (stCheck), DSM_ST_CHECK_ST_FAULT_POS, DSM_ST_CHECK_ST_FAULT_LEN))

#define DSM_GetSFCDeb(stCheck)     \
        ((uint)SrvB_GetBitField( (stCheck), DSM_ST_CHECK_ST_DEB_POS, DSM_ST_CHECK_ST_DEB_LEN))

#define DSM_GetSFCErD(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_LDF_POS))

#define DSM_GetSFCZyf(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_TST_POS))

/* provide Test since clear also with new name to enable migration to new name */
#define DSM_GetSFCTst(stCheck)   (DSM_GetSFCZyf(stCheck))

#define DSM_GetSFCZpf(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_TPF_POS))

/* provide Test since clear also with new name to enable migration to new name */
#define DSM_GetSFCTSC(stCheck)   (DSM_GetSFCZpf(stCheck))

#define DSM_GetSFCMem(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_MEM_POS))

#define DSM_GetSFCRun(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_RUN_POS))

#define DSM_GetSFCFSC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_FSC_POS))

#define DSM_GetSFCFinal(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECK_ST_FINAL_POS))


/*
 ******************************************
 * Macro to convert from DFCType to DFC.id
 ******************************************
*/
#define DSM_DFCTypeToIdx(Cname)     ((uint)((Cname).id))



/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**
 DFC = Diagnostic fault check reference type.
 Integer packed into structure to enable parameter checking */
/********************************/
/* MISRA RULE 111 VIOLATION: bit field of uint16 required to spare ressources */
typedef struct
{
    uint id      : 12;  /* reference number  */
    uint debmode : 4;   /* assigned predebouncing mode */
} DSM_DFCType;

/**
 SFC = Status Fault Check.
 container for the status bits of fault checks and signal Qualities
 This is a simple scalar type because access shall happen with Masks
 instead of bitfiles                                                */
/*******************************/
typedef uint16  DSM_SFCType;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__dsm__1_5ms__RAM__x16__START

/* Message containing the number of DFCs Tested. This messaage is externally visible */
extern uint16 DFC_ctTstd;

__PRAGMA_USE__dsm__1_5ms__RAM__x16__END


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_RepCheck
    (
        DSM_DFCType CName,
        uint        stResult,
        uint        stTst,
        uint        stDeb,
        uint        stAttrib
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
DSM_DFCType DSM_DFCArray( DSM_DFCType CName
                         ,uint  idx
                        );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
DSM_SFCType  DSM_GetCheckStatus( DSM_DFCType    CName        /* Reference to check                */
                               );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_GetDFCNumber(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_SetDFCFinal(DSM_DFCType CName  /* Reference to check */ );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

/* similar conditions interface */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
bool DSM_DfcGetFcmFrzExists(DSM_DFCType CName);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint16 DSM_DfcGetFcmEngineSpeedP0C(DSM_DFCType CName);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_DfcGetFcmLoadCondP04(DSM_DFCType CName);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_DfcGetFcmCoolTempP05(DSM_DFCType CName);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint16 DSM_GetCurrEngineSpeedP0C(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_GetCurrLoadCondP04(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_GetCurrCoolTempP05(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint16 DSM_GetThresEngineSpeedP0C(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_GetThresLoadCondP04(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint8 DSM_GetThresCoolTempP05(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END
/* support of distributed validation */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_RepValCheckDfc(
        DSM_DFCType dfcEvent,
        uint        stResult,
        uint        stTst,
        uint        stDeb,
        uint        stAttrib,
        DSM_DFCType dfcScanTool,
        DSM_FIdType fidValidate,
        uint        reportMode
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebRepValCheckDfc(
        DSM_DFCType dfcEvent,
        uint        stResult,
        uint        stAttrib,
        sint32      tiDiff,
        DSM_DFCType dfcScanTool,
        DSM_FIdType fidValidate,
        uint        reportMode
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_RepValCheck(
        uint        stResult,
        uint        stTst,
        uint        stDeb,
        uint        stAttrib,
        DSM_DFCType dfcScanTool,
        DSM_FIdType fidValidate,
        uint        stLastDebResult
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_DebRepValCheck(
        uint        stResult,
        uint        stMergeTstDeb,
        uint        stAttrib,
        DSM_DFCType dfcScanTool,
        DSM_FIdType fidValidate,
        uint        stLastDebResult
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_GetDFCCtlMsk(uint numCheck);           /* reference number for dfc (fault check number)  */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_GetDFCDisblMsk(uint numCheck);         /* reference number for dfc (fault check number)  */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint32 DSM_GetDFCDisblMsk2(uint numCheck);         /* reference number for dfc (fault check number)  */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_GetDFCDisblSt(uint idxDFC);            /* Get disable state of a DFC  */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
bool DFC_GetInitState(uint numCheck);            /* Check whether DFC is currently in reinitialization */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


#endif
