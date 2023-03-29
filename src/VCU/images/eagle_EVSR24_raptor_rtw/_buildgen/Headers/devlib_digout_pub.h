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
 * $Filename__:devlib_digout_pub.h$ 
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
 * $Name______:devlib_digout_pub$ 
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
 * 1.144.0; 0     19.08.2011 MCH1FE
 *   Deleted in devlib_digout_put.h:
 *   - #defines
 *   - struct DevLib_DigOutStat_t
 *   - struct DevLib_DigOutPar_t
 * 
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_digout_pub.h
 *      Version: \main\basis\b_DE_DevLib\8
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

#ifndef _DEVLIB_DIGOUT_PUB_H
#define _DEVLIB_DIGOUT_PUB_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Function Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__HighSpeed__START
void DevLib_DigOutErrHdl( uint32           stError        //Diagnosis information for the Ps.
                         ,uint8            stPsDiaDisbl   //Switch to disable Ps diagnosis
                         ,Dio_Signal_t     DigOutSig      //Digital output signal name
                         ,DSM_DFCType      DFC_PsSCB      //DFC for short circuit to battery error
                         ,DSM_DFCType      DFC_PsSCG      //DFC for short circuit to ground error
                         ,DSM_DFCType      DFC_PsOL       //DFC for open load error
                         ,const DevLib_DigOutPar_t  *DigOutParStruct   // Parameter structure
                         ,DevLib_DigOutStat_t       *DigOutStatStruct  // Static structure
                         ,sint32                    dT                 // Process scheduling time DT
                        );

/* Funcion with extended interface for High end systems */
void DevLib_DigOutErrHdlExt( uint32           stError        //Diagnosis information for the Ps.
                         ,uint8            stPsDiaDisbl   //Switch to disable Ps diagnosis
                         ,uint8            stTstImpEna
                         ,Dio_Signal_t     DigOutSig      //Digital output signal name
                         ,DSM_DFCType      DFC_PsSCB      //DFC for short circuit to battery error
                         ,DSM_DFCType      DFC_PsSCG      //DFC for short circuit to ground error
                         ,DSM_DFCType      DFC_PsOL       //DFC for open load error
                         ,const DevLib_DigOutPar_t  *DigOutParStruct   // Parameter structure
                         ,DevLib_DigOutStat_t       *DigOutStatStruct  // Static structure
                         ,sint32                    dT                 // Process scheduling time DT
                        );
__PRAGMA_USE__CODE__devlib__HighSpeed__END
#endif
