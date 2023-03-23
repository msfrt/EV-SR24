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
 * $Filename__:devlib_digouterrhndlr_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MCH1FE$ 
 * $Date______:19.08.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_digouterrhndlr_pub$ 
 * $Variant___:1.145.0$ 
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
 * 1.145.0; 0     19.08.2011 MCH1FE
 *   Function DevLib_DigOutErrHndlrTstPls() supports additional DFC report 
 *   Argument
 * 
 * 1.144.0; 0     12.02.2010 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_digouterrhndlr_pub.h
 *      Version: \main\basis\b_DE_DevLib\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/**
 ***************************************************************************************************
 * \moduledescription
 *                      The public header for the device library for digital output power stage
 *                      error handling.
 *
 * \scope               INTERN
 ***************************************************************************************************
 */

#ifndef _DEVLIB_DIGOUTERRHNDLR_PUB_H
#define _DEVLIB_DIGOUTERRHNDLR_PUB_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define DEVLIB_DIO_SCB_BP     0       /* Bit position for SCB error in the static variable */
#define DEVLIB_DIO_SCG_BP     1       /* Bit position for SCG error in the static variable */
#define DEVLIB_DIO_OL_BP      5       /* Bit position for OL error in the static variable */
#define DEVLIB_DIO_OT_BP      2       /* Bit position for OT error in the static variable*/
#define DEVLIB_DIO_TSTIMP_BP  6       /* Bit position for Test impulse requested status */
                                      /* in the static variable */
#define DEVLIB_DIO_SHTOFF_BP  7       /* Bit position for power stage shut off state*/



/*
 ***************************************************************************************************
 * Type defines
 ***************************************************************************************************
 */

/* The devLib static structure */
typedef struct
{
    SrvB_SWTmrS16 tmrTBtwTst;         /* Timer to save the time between tests */
    uint16        ctTstDne;           /* Counter for number of tests done */
    uint16        stPrevTstRslt;      /* The previous test result saved. */
}DevLib_DigOutStat_t;

/* DigOut parameter structure */
typedef struct
{
    sint16 tiBtwTstSCB_C;             /* Time between tests for SCB error */
    sint16 tiBtwTstOT_C;              /* Time between tests for OT error */
    uint16 numTstMax_C;               /* Maximum number of tests allowed on permanent defect */
}DevLib_DigOutPar_t;

/* Static Structure */
typedef struct
{
    uint8 swtTstPls;                /* Switch-Interface for DE to Enable/Disable sending of test-pulse */
    uint  stAttrbt_DFC_OL;          /* optional information for fault report OL */
    uint  stAttrbt_DFC_SCB;         /* optional information for fault report SCB */
    uint  stAttrbt_DFC_SCG;         /* optional information for fault report SCG */
    uint  stAttrbt_DFC_OT;          /* optional information for fault report OT */    
}DevLib_DigOutTstPlsStat_t;

/*
 ***************************************************************************************************
 * Function Prototypes
 ***************************************************************************************************
 */
    
__PRAGMA_USE__CODE__devlib__NormalSpeed__START
/*!
 * \brief Set the argument which is passed in DFC report for OL
 */
uint DevLib_DigOutErrHndlrTstPlsSetOLAttrbt(DevLib_DigOutTstPlsStat_t *DigOutTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for SCB
 */
uint DevLib_DigOutErrHndlrTstPlsSetSCBAttrbt(DevLib_DigOutTstPlsStat_t *DigOutTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for SCG
 */
uint DevLib_DigOutErrHndlrTstPlsSetSCGAttrbt(DevLib_DigOutTstPlsStat_t *DigOutTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for OT
 */
uint DevLib_DigOutErrHndlrTstPlsSetOTAttrbt(DevLib_DigOutTstPlsStat_t *DigOutTstPlsStatStruct, uint stAttribute);
__PRAGMA_USE__CODE__devlib__NormalSpeed__END    
    
    
    
__PRAGMA_USE__CODE__devlib__HighSpeed__START
void DevLib_DigOutErrHndlr( uint32         stError        /* Diagnosis information for the Ps */
                         ,uint8            stPsDiaDisbl   /* Switch to disable Ps diagnosis	*/
                         ,Dio_Signal_t     DigOutSig      /* Digital output signal name */
                         ,DSM_DFCType      DFC_PsSCB      /* DFC for short circuit to battery error	*/
                         ,DSM_DFCType      DFC_PsSCG      /* DFC for short circuit to ground error */
                         ,DSM_DFCType      DFC_PsOL       /* DFC for open load error */
                         ,DSM_DFCType      DFC_PsOT       /* DFC for Over temperature error	*/
                         ,const DevLib_DigOutPar_t  *DigOutParStruct   /* Parameter structure */
                         ,DevLib_DigOutStat_t       *DigOutStatStruct  /* Static structure */
                         ,sint32                    dT                 /* Process scheduling time DT */
                        );

void DevLib_DigOutErrHndlrTstPls( uint32         stError        /* Diagnosis information for the Ps */
                               ,uint8            stPsDiaDisbl   /* Switch to disable Ps diagnosis */
                               ,Dio_Signal_t     DigOutSig      /* Digital output signal name */
                               ,DSM_DFCType      DFC_PsSCB      /* DFC for short circuit to battery error */
                               ,DSM_DFCType      DFC_PsSCG      /* DFC for short circuit to ground error */
                               ,DSM_DFCType      DFC_PsOL       /* DFC for open load error */
                               ,DSM_DFCType      DFC_PsOT       /* DFC for Over temperature error */
                               ,const DevLib_DigOutPar_t  *DigOutParStruct         /* Parameter structure	*/
                               ,DevLib_DigOutStat_t       *DigOutStatStruct        /* Static structure */
                               ,DevLib_DigOutTstPlsStat_t *DigOutTstPlsStatStruct  /* Static structure */
                               ,sint32                    dT    /* Process scheduling time DT */
                              );

void DevLib_DigOutErrHndlrExt( uint32       stError        /* Diagnosis information for the Ps */
                         ,uint8             stPsDiaDisbl   /* Switch to disable Ps diagnosis */
                         ,uint8             stTstImpEna    /* Switch to enable test impulse	*/
                         ,Dio_Signal_t      DigOutSig      /* Digital output signal name */
                         ,DSM_DFCType       DFC_PsSCB      /* DFC for short circuit to battery error */
                         ,DSM_DFCType       DFC_PsSCG      /* DFC for short circuit to ground error	*/
                         ,DSM_DFCType       DFC_PsOL       /* DFC for open load error */
                         ,DSM_DFCType       DFC_PsOT       /* DFC for Over temperature error */
                         ,const DevLib_DigOutPar_t  *DigOutParStruct   /* Parameter structure */
                         ,DevLib_DigOutStat_t       *DigOutStatStruct  /* Static structure */
                         ,sint32                    dT                 /* Process scheduling time DT */
                        );

__PRAGMA_USE__CODE__devlib__HighSpeed__END
#endif
