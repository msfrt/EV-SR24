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
 * $Filename__:i14229_seca_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_seca_pub$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: i14229_seca_pub
 *      Variant: B_BASSVR.6.0.0
 *      Revision: 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_SECA_PUB_H
#define _I14229_SECA_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                       Public header for ISO 14229 service: Security access
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Type of on entry in table of access modes: */
typedef struct
{
    uint8   AccMode_u8;                 /* Access mode                                    */
    uint8   SecLevel_u8;                /* Security level                                 */
    uint8   FunctIndex_u8;              /* Index of corresponding seed&key algorithm      */
    uint32  Config_u32;                 /* Configuration of seed&key algorithm            */
    bit32   diaModes_b32;                 /* Diagnostic modes where subfunction  is available  */
}
I14229_SecA_AcmTable_t;


/* Summary of configuration constants: */
typedef struct
{
    I14229_SecA_AcmTable_t const *AcmTable_pcs;/* Pointer to table of access modes     */
    uint8 (*const(*GetSeed_pcp)[])(uint32, uint8*);
    uint8 (*const(*CompareKey_pcp)[])(uint32, uint8*, uint8);
    uint32 DelayInvKey_u32;        /* Delay after failed security access (in ticks)  */
    uint8  numMaxAttGetSeed_u8;    /* Maximum number of attempts to get valid seed   */
    uint8  numMaxAttDelay_u8;      /* Number of failed security accesses after which */
                                   /* the delay is activated                         */
    uint8  numMaxAttLock_u8;       /* Number of failed security accesses after which */
                                   /* security access is locked                      */
    uint8  numSeed00_u8;           /* Size of seed when security level is already    */
                                   /* active (seed = 00...00)                        */
    uint16  (*GetMoreParamsForNegResp)(uint8*);/* Fct. writes additional bytes to location of     */
                                                /* uint8*, and returns No of written bytes        */
    uint8  numTableSize_u8;        /* Size of I14229_SecA_AcmTable_t table (number of entries) */

}
I14229_SecA_Config_t;



/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void   I14229_SecA_Ini(void);
extern void   I14229_SecA(void * Config_pv, DiagCom_Msg_t *Msg_ps);
extern uint32 I14229_SecA_GetDelay(void);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif /* _I14229_SECA_PUB_H */
