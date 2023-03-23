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
 * $Filename__:i14229_reset_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DUE2ABT$ 
 * $Date______:04.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_reset_pub$ 
 * $Variant___:17.0.1$ 
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
 * 17.0.1; 0     04.02.2011 DUE2ABT
 *   I: modify I14229_Reset_Config_t to remove compiler warning
 *   I: modify declaration of service to remove QAC waring
 * 
 * 2.1.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: I14229_RESET_PUB
 *      Variant: B_BASSVR.6.0.0
 *      Revision: 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _I14229_RESET_PUB_H
#define _I14229_RESET_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      Public header of ISO I14229 -1 service 'ECU Reset'
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/* Summary of configuration constants: */
typedef struct
{
    uint8   const *ResetMode_u8;  /* Pointer to array of supported diagnostic modes        */
    bit32   const *Protection_pcb32;      /* Pointer to array of bitfields for protection  */
    void    (*const(*ResetFct_pcf))(void);  /* Pointer to array of pointers to reset routines   */
    uint8   (*ResetAccept_pf)(const void*,uint8); /* reset accept call back function */
    uint8   PowerDownTime_u8;       /*  configure the power down time */
    uint8   numResetMode_u8;        /* number of Reset modes                                */
    uint16  (*GetMoreParamsForNegResp)(uint8*);/* Fct. writes additional bytes to location of     */
                                                /* uint8*, and returns No of written bytes        */
    bit32 const *diaModes_b32;       /* Diagnostic modes where subfunction  is available  */
}
I14229_Reset_Config_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Reset(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif /* _I14229_RESET_PUB_H */
