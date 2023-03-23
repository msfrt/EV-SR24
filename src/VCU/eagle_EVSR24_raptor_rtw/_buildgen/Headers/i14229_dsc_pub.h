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
 * $Filename__:i14229_dsc_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DUE2ABT$ 
 * $Date______:14.01.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_dsc_pub$ 
 * $Variant___:14.0.0$ 
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
 * 14.0.0; 0     14.01.2011 DUE2ABT
 *   new version for ferrari maserati
 * 
 * 6.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from Clearcase :
 *   B_BASSVR.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _I14229_DSC_PUB_H
#define _I14229_DSC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      Public header file for Diagnostic Session Control service
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define I14229_DSC_RESPONSE_LEN  0x05   /* With Session record            */

/* Status of DSC: */
#define I14229_DSC_ST_READY         0           /* Ready to receive new message                   */
#define I14229_DSC_ST_WAIT          1           /* Waiting until background routine finished      */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Configuration for P2Can_Server timings */
typedef struct
{
    uint32 P2Can_Server_u32;       /* Default P2Can_Server_max timing supported by
                                      the server for the activated diagnostic session     */
    uint32 P2StarCan_Server_u32;   /* Enhanced (NRC 78 hex) P2Can_Server_max supported by
                                      the server for the activated diagnostic session     */
}
I14229_Dsc_TiP2CanServer_t;


/* Summary of configuration constants: */
typedef struct
{
    uint8 const *DiaSesss_pcu8;         /* Pointer to array of supported diagnostic sessions*/
    bit32 const *Protection_pcb32;      /* Pointer to array of bitfields for protection  */
                                            /* of diagnostic sessions                        */
    uint16      (*const(*Routine_pcf))(void); /* Pointer to array of pointers to routines      */
                                            /* which have to be executed by start of         */
                                            /* diagnostic sessions                           */
    uint16   (*AllowClientId_pf)(uint32);   /* allow certain Client identifier,
                                          ex: 0xF4 :Allow only clinet identifier 0xF4 */
    uint8       numDiaSesss_u8;             /* Number of supported diagnostic sessions       */
                                            /* = size of arrays                              */
    uint16  (*GetMoreParamsForNegResp)(uint8*);/* Fct. writes additional bytes to location of     */
                                                /* uint8*, and returns No of written bytes        */
    I14229_Dsc_TiP2CanServer_t const *TiP2CanServer_pcs; /* configuration for P2can server and P2
                                                      star server timings */
}
I14229_Dsc_Config_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__bassvr__10ms__RAM__x8__START
extern uint8   I14229_Dsc_st_u8;                 /* Status of I14229_Dsc (ready/busy)   */
extern uint8   I14229_Dsc_PrevDiaSess_u8;        /* Previous diagnostic session  */
extern uint8   I14229_Dsc_ctDiaSess_u8 ;         /* requested diagnostic session */
__PRAGMA_USE__bassvr__10ms__RAM__x8__END

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Dsc_FillSessRecord(DiagCom_Msg_t *Msg_ps);  /* fill  session record */
extern void I14229_Dsc_ResetOtherDiaSession(void); /* Reinitialise diagnostic session        */

extern void I14229_Dsc_Ini(void);
extern void I14229_Dsc(const void * Config_pv, DiagCom_Msg_t *Msg_ps);

/* Reinitialise diagnostic session  */
extern uint16 I14229_Dsc_DefaultToOtherDiaSess(const void * Config_pv,const DiagCom_Msg_t *Msg_ps);
/* Reinitialise diagnostic session        */
extern uint16 I14229_Dsc_ResetAnyOtherDiaSess(const void * Config_pv,const DiagCom_Msg_t *Msg_ps);
/* Reinitialise diagnostic session        */
extern uint16 I14229_Dsc_OtherDiaSessToDefault(const void * Config_pv,const DiagCom_Msg_t *Msg_ps);

/* P2CAN server timing - used externally by Fill session record function */
extern void I14229_Dsc_SetP2CanServer_ti(void);  /* P2CAN server max */

__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

__PRAGMA_USE__bassvr__10ms__RAM__x32__START
extern I14229_Dsc_TiP2CanServer_t const *I14229_Dsc_TiP2CanServer_pcs;
__PRAGMA_USE__bassvr__10ms__RAM__x32__END

#endif /* _I14229_DSC_PUB_H */
