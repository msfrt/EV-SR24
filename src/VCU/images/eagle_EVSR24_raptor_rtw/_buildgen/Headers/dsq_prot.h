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
 * $Filename__:dsq_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KKA4KOR$ 
 * $Date______:10.06.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsq_prot$ 
 * $Variant___:2.3.0$ 
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
 * 2.3.0; 0     10.06.2013 KKA4KOR
 *     Chnage in DSQ status update
 * 
 * 2.2.0; 0     20.03.2012 RMP2SI
 *   DSM compiler independency task.
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsq_prot.h
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DSQ_PROT_H
#define _DSQ_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *             DSM - signal quality array definition
 *                                   Definition of the status array data
 *                                   Data types and access macros
 *
 * \scope          INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/* Bit fields */
/* Bit position */
#define DSM_ST_QUALITY_POS     0u
/* number of bits */
#define DSM_ST_QUALITY_LEN     4u
/* access mask */
#define DSM_ST_QUALITY_MSK     \
        ((((1u << (DSM_ST_QUALITY_LEN))-1u)) << (DSM_ST_QUALITY_POS))
/* maximum value */
#define DSM_ST_QUALITY_MAX     15u

#define DSQ_MODE7_VIS_MSK      0x10


/* Use this to clear the signal quality bits while updating the DSQ status */
#define DSQ_ST_QUALITY_CLR      0xF0

/* set mode 7 visibility, DSQ is provided by a FID which ich inhibited by a DFC visible on GSTT */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSQ_SetMode7Visibility(DSQId)  (DSQ_st[((DSQId) - (uint) DSM_ctCfgDFCMax)] \
                                        |= (uint8) DSQ_MODE7_VIS_MSK)

/* clear mode 7 visibility */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSQ_ClrMode7Visibility(DSQId)  (DSQ_st[((DSQId) - (uint) DSM_ctCfgDFCMax)] \
                                        &= (uint8) (~DSQ_MODE7_VIS_MSK))

/* get mode 7 visibility */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSQ_GetMode7Visibility(DSQId)  ((DSQ_st[((DSQId) - (uint) DSM_ctCfgDFCMax)] \
                                        & DSQ_MODE7_VIS_MSK) > 0)


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
/* total count of quality array entries + 1 */
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16    DSM_ctCfgDSQMax;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END
/* status Array for all fault checks and signal qualities */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8 DSQ_st[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END
/* local inhibited DSQs: Array with local inhibited DSQs for all DSQs */
__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DSQ_numDSQLclInh[];
/* local inhibited DSQs: Array with start index for each DSQ */
extern const uint16 DSQ_idxOfsDSQLclInh[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSQ_MeasProc(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

#endif
