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
 * $Filename__:devlib_pwmouterrhndlr_pub.h$ 
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
 * $Name______:devlib_pwmouterrhndlr_pub$ 
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
 *   Function DevLib_PWMOutErrHndlrTstPls() supports additional DFC report 
 *   Argument
 * 
 * 1.144.0; 0     12.02.2010 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_pwmouterrhndlr_pub.h
 *      Version: \main\basis\b_DE_DevLib\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWMOUTERRHNDLR_PUB_H
#define _DEVLIB_PWMOUTERRHNDLR_PUB_H

/*
 ***************************************************************************************************
 * Type defines
 ***************************************************************************************************
 */
#define DEVLIB_SCB_BP     0       /* Bit position for SCB error in the static variable            */
#define DEVLIB_SCG_BP     1       /* Bit position for SCG error in the static variable            */
#define DEVLIB_OL_BP      5       /* Bit position for OL error in the static variable             */
#define DEVLIB_OT_BP      2       /* Bit position for OT error in the static variable             */
#define DEVLIB_TSTIMP_BP  6       /* Bit position for Test impulse requested status               */
                                  /* in the static variable               */
#define DEVLIB_SHTOFF_BP  7       /* Bit position for power stage shut off state                  */

#define DEVLIB_BATT_ERR_BMSK 0x000C /* Mask to select the battery error conditions                  */

/* This #define will be removed in latter versions  */
#define DE_BATT_ERR_BMSK 0x0C  //Mask to select the battery error conditions

 /* The devLib state structure */
typedef struct
{
    SrvB_SWTmrS16 tmrTBtwTst;         /* Timer to save the time between tests                     */
    uint16        ctTstDne;           /* Counter for number of tests done                         */
    uint16        stPrevTstRslt;      /* The previous test result saved.                          */
    uint8         stDGKActv;          /* Status to indicate is diagnostic ground keying is active */
}DevLib_PWMOutStat_t;

/* PMW parameter structure */
typedef struct
{
    sint16 rMin_C;                    /* Minimum threshold for the duty cycle                     */
    sint16 rMax_C;                    /* Maximum threshold for the duty cycle                     */
    sint16 tiBtwTstSCB_C;             /* Time between tests for SCB error                         */
    sint16 tiBtwTstOT_C;              /* Time between tests for OT error                          */
    uint16 numTstMax_C;               /* Maximum number of tests allowed on permanent defect      */
    uint8  swtBattCor_C;              /* Switch to enable battery correction.                     */
    uint8  swtPsInv_C;                /* Power stage output inversion status.                     */
}DevLib_PWMOutPar_t;

/* Static Structure */
typedef struct
{
    uint8 swtTstPls;                /* Switch-Interface for DE to Enable/Disable sending of test-pulse */ 
    uint  stAttrbt_DFC_OL;          /* optional information for fault report OL */
    uint  stAttrbt_DFC_SCB;         /* optional information for fault report SCB */
    uint  stAttrbt_DFC_SCG;         /* optional information for fault report SCG */
    uint  stAttrbt_DFC_OT;          /* optional information for fault report OT */
}DevLib_PWMOutTstPlsStat_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__devlib__NormalSpeed__START
/*!
 * \brief Set the argument which is passed in DFC report for OL
 */
uint DevLib_PWMOutErrHndlrTstPlsSetOLAttrbt(DevLib_PWMOutTstPlsStat_t  *PWMTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for SCB
 */
uint DevLib_PWMOutErrHndlrTstPlsSetSCBAttrbt(DevLib_PWMOutTstPlsStat_t  *PWMTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for SCG
 */
uint DevLib_PWMOutErrHndlrTstPlsSetSCGAttrbt(DevLib_PWMOutTstPlsStat_t  *PWMTstPlsStatStruct, uint stAttribute);

/*!
 * \brief Set the argument which is passed in DFC report for OT
 */
uint DevLib_PWMOutErrHndlrTstPlsSetOTAttrbt(DevLib_PWMOutTstPlsStat_t  *PWMTstPlsStatStruct, uint stAttribute);
__PRAGMA_USE__CODE__devlib__NormalSpeed__END  
__PRAGMA_USE__CODE__devlib__HighSpeed__START
void DevLib_PWMOutErrHndlr( sint16           *rHWE          /* Pointer to duty cycle value */
                           ,uint8            stPsDiaDisbl   /* Switch to disable Ps diagnosis */
                           ,sint16           facBattCor     /* Battery correction factor */
                           ,Pwmout_signal_t  PWMSig         /* PWM output signal name */
                           ,DSM_DFCType      DFC_PsSCB      /* DFC for short circuit to battery error */
                           ,DSM_DFCType      DFC_PsSCG      /* DFC for short circuit to ground error */
                           ,DSM_DFCType      DFC_PsOL       /* DFC for open load error */
                           ,DSM_DFCType      DFC_PsOT       /* DFC for Over temperature error */
                           ,const DevLib_PWMOutPar_t  *PWMParStruct   /* Parameter structure */
                           ,DevLib_PWMOutStat_t       *PWMStatStruct  /* Static structure */
                           ,sint32                    dT              /* Process scheduling time */
                          );

void DevLib_PWMOutErrHndlrTstPls( sint16           *rHWE          /* Pointer to duty cycle value */
                                 ,uint8            stPsDiaDisbl   /* Switch to disable Ps diagnosis	*/
                                 ,sint16           facBattCor     /* Battery correction factor */
                                 ,Pwmout_signal_t  PWMSig         /* PWM output signal name	*/
                                 ,DSM_DFCType      DFC_PsSCB      /* DFC for short circuit to battery error	*/
                                 ,DSM_DFCType      DFC_PsSCG      /* DFC for short circuit to ground error */
                                 ,DSM_DFCType      DFC_PsOL       /* DFC for open load error */
                                 ,DSM_DFCType      DFC_PsOT       /* DFC for Over temperature error	*/
                                 ,const DevLib_PWMOutPar_t   *PWMParStruct             /* Parameter structure */
                                 ,DevLib_PWMOutStat_t        *PWMStatStruct            /* Static structure	*/
                                 ,DevLib_PWMOutTstPlsStat_t  *PWMTstPlsStatStruct   /* Static structure */
                                 ,sint32           dT             /* Process scheduling time */
                                );

void DevLib_PWMOutErrHndlrExt( sint16           *rHWE         /* Pointer to duty cycle value */
                              ,uint32           stPsError     /* Error Status of Ps	*/
                              ,uint8            stDoTstImp    /* Enable output of test impulse */
                              ,uint8            stPsDiaDisbl  /* Switch to disable Ps diagnosis	*/
                              ,sint16           facBattCor    /* Battery correction factor */
                              ,Pwmout_signal_t  PWMSig        /* PWM output signal name	*/
                              ,DSM_DFCType      DFC_PsSCB     /* DFC for short circuit to battery error */
                              ,DSM_DFCType      DFC_PsSCG     /* DFC for short circuit to ground error */
                              ,DSM_DFCType      DFC_PsOL      /* DFC for open load error */
                              ,DSM_DFCType      DFC_PsOT      /* DFC for Over temperature error	*/
                              ,const DevLib_PWMOutPar_t  *PWMParStruct   /* Parameter structure	*/
                              ,DevLib_PWMOutStat_t       *PWMStatStruct  /* Static structure */
                              ,sint32                    dT              /* Process scheduling time	*/
                             );

__PRAGMA_USE__CODE__devlib__HighSpeed__END

#endif /* _DEVLIB_PWMOUTERRHNDLR_PUB_H */
