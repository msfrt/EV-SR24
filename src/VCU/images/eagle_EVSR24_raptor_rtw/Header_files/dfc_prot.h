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
 * $Filename__:dfc_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:18.09.2012$
 * $Class_____:SWHDR$
 * $Name______:dfc_prot$
 * $Variant___:2.12.0$
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
 * 2.12.0; 0     18.09.2012 MMO2FE
 *   New ROE Event ERR2OK_ACT that only comes in Ini-ReIni if LDF is set and 
 *   ResetAtIni is calibrated.
 * 
 * 2.10.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfc_prot.h
 *      Version: \main\basis\b_CORE\12
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFC_PROT_H
#define _DFC_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - fault check status array definition
 *              Definition of the status array data
 *              Data types and access macros
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Set macros = copy of value into destination, direct values are handled partly by preprocessor  */
/**************************************************************************************************/

/* internal DFC Status */

/* Bit fields */

/* Bit position */
#define DSM_ST_CHECK_INT_FAULT_POS     0u
/* number of bits */
#define DSM_ST_CHECK_INT_FAULT_LEN     2u
/* access mask */
#define DSM_ST_CHECK_INT_FAULT_MSK     \
        ((((1u << (DSM_ST_CHECK_INT_FAULT_LEN))-1u)) << (DSM_ST_CHECK_INT_FAULT_POS))


/* single Bits */

/* most significant bit of fault level (DFES relevance) */
#define DSM_ST_CHECK_INT_MSB_FLT_POS   1u
#define DSM_ST_CHECK_INT_MSB_FLT_MSK \
        (1u << (DSM_ST_CHECK_INT_MSB_FLT_POS))

/* Debounce active status */
#define DSM_ST_CHECK_INT_DA_POS        2u
#define DSM_ST_CHECK_INT_DA_MSK      \
        (1u << (DSM_ST_CHECK_INT_DA_POS))

/* Test status */
#define DSM_ST_CHECK_INT_TST_POS       3u
#define DSM_ST_CHECK_INT_TST_MSK     \
        (1u << (DSM_ST_CHECK_INT_TST_POS))

/* Last debounced digital fault state */
#define DSM_ST_CHECK_INT_LDF_POS       4u
#define DSM_ST_CHECK_INT_LDF_MSK     \
        (1u << (DSM_ST_CHECK_INT_LDF_POS))

/* Test status since clear (new) */
#define DSM_ST_CHECK_INT_TSC_POS       5u
#define DSM_ST_CHECK_INT_TSC_MSK     \
        (1u << (DSM_ST_CHECK_INT_TSC_POS))

/* Memory status */
#define DSM_ST_CHECK_INT_MEM_POS       6u
#define DSM_ST_CHECK_INT_MEM_MSK     \
        (1u << (DSM_ST_CHECK_INT_MEM_POS))


/* Fault since clear status */
#define DSM_ST_CHECK_INT_FSC_POS       7u
#define DSM_ST_CHECK_INT_FSC_MSK     \
        (1u << (DSM_ST_CHECK_INT_FSC_POS))



/* Get macros for status bits */
#define DSM_GetSFCIntMem(stCheck) ((uint)( ((stCheck) & DSM_ST_CHECK_INT_MEM_MSK) != 0u))


/* Set macros for status bits */

#define DSM_SetStCheckTst(stCheck)     \
        (SrvB_SetBit( (stCheck), DSM_ST_CHECK_INT_TST_POS))

#define DSM_SetStCheckMem(stCheck)     \
        (SrvB_SetBit( (stCheck), DSM_ST_CHECK_INT_MEM_POS))

/* Clear macros for status bits */

#define DSM_ClrStCheckTst(stCheck)     \
        (SrvB_ClrBit( (stCheck), DSM_ST_CHECK_INT_TST_POS))

#define DSM_ClrStCheckMem(stCheck)     \
        (SrvB_ClrBit( (stCheck), DSM_ST_CHECK_INT_MEM_POS))



/* Macros used for Run flag */
#define DFC_GetStRun(idxDFC)         \
        (((DFC_stRun[((idxDFC) >> 4u)]) >> ((idxDFC) & 0xFu)) & 0x01)

#define DFC_setStRun(idxDFC)         \
        ((DFC_stRun[((idxDFC) >> 4u)]) |= (uint16)(1 << ((idxDFC) & 0xFu)))

#define DFC_clrStRun(idxDFC)         \
        ((DFC_stRun[((idxDFC) >> 4u)]) &=  (uint16)(~((uint)(1 << ((idxDFC) & 0xFu)))))

#define DFC_clrStRunWrd(idx)    (DFC_stRun[(idx)] = 0)

/*  if Run will not exist (-> dfc_conf.c) the access can be re-routed (SW adapter) */
/*
#define  DFC_GetStRun(idxDFC)         (0)
#define  DFC_setStRun(idxDFC)
#define  DFC_clrStRun(idxDFC)
#define  DFC_clrStRunWrd(idx)

*/


/* Macros used for Final flag */
#define DFC_GetStFinal(idxDFC)         \
        (((DFC_stFinal[((idxDFC) >> 4u)]) >> ((idxDFC) & 0xFu)) & 0x01)

#define DFC_setStFinal(idxDFC)         \
        ((DFC_stFinal[((idxDFC) >> 4u)]) |= (uint16)(1 << ((idxDFC) & 0xFu)))

#define DFC_clrStFinal(idxDFC)         \
        ((DFC_stFinal[((idxDFC) >> 4u)]) &=  (uint16)(~((uint)(1 << ((idxDFC) & 0xFu)))))

#define DFC_clrStFinalWrd(idx)          (DFC_stFinal[(idx)] = 0)

/* Macros used for MaxFltflag */
#define DFC_GetStMaxFlt(idxDFC)         \
        (((DFC_stMaxFlt[((idxDFC) >> 4u)]) >> ((idxDFC) & 0xFu)) & 0x01)

#define DFC_setStMaxFlt(idxDFC)         \
        ((DFC_stMaxFlt[((idxDFC) >> 4u)]) |= (uint16)(1 << ((idxDFC) & 0xFu)))

#define DFC_clrStMaxFlt(idxDFC)         \
        ((DFC_stMaxFlt[((idxDFC) >> 4u)]) &=  (uint16)(~((uint)(1 << ((idxDFC) & 0xFu)))))

#define DFC_clrStMaxFltWrd(idx)         (DFC_stMaxFlt[(idx)] = 0)

/*  if MaxFlt will not exist (-> dfc_conf.c) the access can be re-routed (SW adapter) */
/*
#define  DFC_GetStMaxFlt(idxDFC)         (0)
#define  DFC_setStMaxFlt(idxDFC)
#define  DFC_clrStMaxFlt(idxDFC)
#define  DFC_clrStMaxFltWrd(idx)

*/


/**************************************************************************************************/
/* Macros for access to the reported values (simple values, not in the structure)                 */
/**************************************************************************************************/
/* internal fault status */

/* Defines for the arguments of dfc interface */
/* Fault levels */
#define   DSM_FAULT_INT_PERCENT_00      0u
#define   DSM_FAULT_INT_PERCENT_25      1u
#define   DSM_FAULT_INT_PERCENT_50      2u
#define   DSM_FAULT_INT_PERCENT_100     3u

/* MSB of 4 bit value = fault state for debouncing external representation */
#define DSM_GetRepBoolCheckRes(stFault)    ((uint)(((stFault) & 0x8u) > 0u))

/* get fault level from DFC status in external representation */
/* 0% 00 -> 0000, 25% 01 -> 0100, 50% 10 -> 1000, 100% 11 -> 1100 */
#define DSM_GetSFCExtFL(stCheck) ((uint)(((uint)(stCheck) & DSM_ST_CHECK_INT_FAULT_MSK) << 2u))


/**************************************************************************************************/
/* DSMDFC_ReInit modes                                                                            */
/**************************************************************************************************/

#define DFC_REINIT_PART_INI 1u
#define DFC_REINIT_PART1    2u
#define DFC_REINIT_PART2    3u

/**************************************************************************************************/
/* maximum number of DFCs to be handled in one call of DSMDFC_ReInit(DFC_REINIT_PART1)            */
/**************************************************************************************************/
#define DFC_REINIT_MAX_DFC_PER_STEP 300u

/**************************************************************************************************/
/* DSMDFC_ReInit Marker for DSM_UdtDFCInh() and Response On Event Function                                                                             */
/**************************************************************************************************/

#define DFC_NOCHNG          0u
#define DFC_TST2NOTTST      1u
#define DFC_ERR2OK          2u
#define DFC_ERR2OK_ACT      3u

/**************************************************************************************************/
/* Init of TestNotPassedSince DFC bits                                                            */
/**************************************************************************************************/
#define DFC_TNPSC_INIT 0xFFFF


/* Macros used for Test Not Passed Since Current Power Up */
#define DFC_getStTnpsCPU(Offset)         \
        (((DFC_stTnpsCPU[((Offset) >> 4u)]) >> ((Offset) & 0xFu)) & 0x01)

#define DFC_setStTnpsCPU(Offset)         \
        ((DFC_stTnpsCPU[((Offset) >> 4u)]) |= (uint16)(1 << ((Offset) & 0xFu)))

#define DFC_clrStTnpsCPU(Offset)         \
        ((DFC_stTnpsCPU[((Offset) >> 4u)]) &=  (uint16)(~((uint)(1 << ((Offset) & 0xFu)))))


/* Macros used for Test Not Passed Since DTC cleared */
#define DFC_getStTnpsDTCc(Offset)         \
        (((DFC_stTnpsDTCc[((Offset) >> 4u)]) >> ((Offset) & 0xFu)) & 0x01)

#define DFC_setStTnpsDTCc(Offset)         \
        ((DFC_stTnpsDTCc[((Offset) >> 4u)]) |= (uint16)(1 << ((Offset) & 0xFu)))

#define DFC_clrStTnpsDTCc(Offset)         \
        ((DFC_stTnpsDTCc[((Offset) >> 4u)]) &=  (uint16)(~((uint)(1 << ((Offset) & 0xFu)))))




/* disable mask for unused DFCs to set the cycle flag in the init process */
#define DSM_SetZDisblMsk DFC_DISBL_MSK_DFC_UNUSED_MSK


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/**
internal SFC = Status Fault Check.
 container for the status bits of fault checks and signal Qualities
 This is a simple scalar type because access shall happen with Masks
 instead of bitfiles                                                */
/*******************************/
typedef uint8 DSM_SFCInt_t;



/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
/* Temporary message containing the number of DFCs Tested. */
extern uint16 DFC_ctTstdTmp;

/* DFC index travelling from 0 to DSM_NUM_DFC_MAX during ReInit to switch to 2nd order queue */
extern uint16 DFC_idxReInitDFC;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
/* Marker that DFC is currently under Reinit treatment and its effects on DFES, DINH are to lock*/
extern uint8  DFC_stReInitDFC;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

/* total count of dfcs + 1 */
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DSM_ctCfgDFCMax ;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END

/* status Array for all fault checks */
MEMLAY_USE_ENVRAM(extern DSM_SFCInt_t, DFC_st[]);
/* Collection message array for testNotPassedSinceCurrentPowerUp */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DFC_stTnpsCPU[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END
/* Collection message array for testNotPassedSinceDTCCleared */
MEMLAY_USE_ENVRAM(extern uint16, DFC_stTnpsDTCc[]);

__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
/* additional bit array for run flags */
extern uint16 DFC_stRun[];
/* additional bit array for final flags */
extern uint16 DFC_stFinal[];
/* additional bit array for Fault 100% reached flags */
extern uint16 DFC_stMaxFlt[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFC_MeasProc(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMDFC_Init(void);
uint DSMDFC_ReInit(uint stmode);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


#endif
