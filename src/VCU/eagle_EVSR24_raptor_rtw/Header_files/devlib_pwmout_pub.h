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
 * $Filename__:devlib_pwmout_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:19.08.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_pwmout_pub$ 
 * $Variant___:1.144.0$ 
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
 * 1.144.0; 0     19.08.2011 KLN1SI
 *   Remove typedefs which are taken over in DevLib_PWMOutErrHndlr, as in PLF 
 *   this function is removed!
 *   
 * 
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_pwmout_pub.h
 *      Version: \main\basis\b_DE_DevLib\13
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWMOUT_PUB_H
#define _DEVLIB_PWMOUT_PUB_H

/*
 ***************************************************************************************************
 * This part will be removed in future release
 ***************************************************************************************************
 */
/* Structure type defenition */
typedef struct
{
    sint16 rMin_C;         /* Lower limit for output duty cycle */
    sint16 rMax_C;         /* Upper limit for output duty cycle */
    uint8 swtBattCor_C;
} DevLib_PwmOutPar_CSTR;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__HighSpeed__START
void DevLib_PWMOutErrHdl( sint16           *rHWE          //Pointer to duty cycle value
                         ,uint8            stPsDiaDisbl   //Status to disable Ps diagnosis
                         ,sint16           facBattCor     //Battery correction factor
                         ,Pwmout_signal_t  PWMSig         //PWM output signal name
                         ,DSM_DFCType      DFC_PsSCB      //DFC for short circuit to battery error
                         ,DSM_DFCType      DFC_PsSCG      //DFC for short circuit to ground error
                         ,DSM_DFCType      DFC_PsOL       //DFC for short circuit to open load error
                         ,const DevLib_PWMOutPar_t  *PWMParStruct   // Parameter structure
                         ,DevLib_PWMOutStat_t       *PWMStatStruct  // Static structure
                         ,sint32                    dT              // Process scheduling time
                        );


/* Funcion with extended interface for High end systems */
void DevLib_PWMOutErrHdlExt( sint16           *rHWE          //Pointer to duty cycle value
                            ,uint32           stPsError      //Error Status of Ps
                            ,uint8            stDoTstImp     //Enable output of test impuls
                            ,uint8            stPsDiaDisbl   //Switch to disable Ps diagnosis
                            ,sint16           facBattCor     //Battery correction factor
                            ,Pwmout_signal_t  PWMSig         //PWM output signal name
                            ,DSM_DFCType      DFC_PsSCB      //DFC for short circuit to battery error
                            ,DSM_DFCType      DFC_PsSCG      //DFC for short circuit to ground error
                            ,DSM_DFCType      DFC_PsOL       //DFC for open load error
                            ,const DevLib_PWMOutPar_t  *PWMParStruct   // Parameter structure
                            ,DevLib_PWMOutStat_t       *PWMStatStruct  // Static structure
                            ,sint32                    dT              // Process scheduling time
                           );

__PRAGMA_USE__CODE__devlib__HighSpeed__END

#endif /* _DEVLIB_PWMOUT_PUB_H */
