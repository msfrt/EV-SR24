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
 * $Filename__:devlib_transstage_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:25.03.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_transstage_pub$ 
 * $Variant___:1.142.0$ 
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
 * 1.142.0; 0     25.03.2009 KLN1SI
 *   Component Toolbox-Import
 * 
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_transstage_pub.h
 *      Version: \main\basis\b_DE_DevLib\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_TRANSSTAGE_PUB_H
#define _DEVLIB_TRANSSTAGE_PUB_H

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

#define TEMP_DEFECT  0x01
#define FINAL_DEFECT 0x00

#define DEVLIB_HEALING_RAMP_DESIRED_BP     0x01   /* healing ramp is desired                      */
#define DEVLIB_HEALING_RAMP_ACTIVE_BP      0x02   /* healing ramp is active                       */
#define DEVLIB_DEFECT_RAMP_COMPLETED_BP    0x03   /* defect ramp already completed                */
#define DEVLIB_DEFECT_RAMP_ACTIVE_BP       0x04   /* defect ramp is active                        */

#define DEVLIB_SENSVAL_MODE                0x00   /* sensed value as the replacement value        */
#define DEVLIB_FRZVAL_MODE                 0x01   /* frozen value as the replacement value        */
#define DEVLIB_JMPVAL_MODE                 0x02   /* jump to the replacememt value                */
#define DEVLIB_RMPVAL_MODE                 0x04   /* ramp to the replacement value                */


typedef struct
{
    sint16 OldVal;      /* last valid value                                                       */
    uint8  StateVal;    /* status of the previous errors                                          */
} DevLib_TransStageState;

typedef struct
{
    sint16 InVal;       /* sensed value                                                           */
    sint16 ModVal;      /* model value                                                            */
    uint8  stSig;       /* signal status                                                          */
    uint8  stErr;       /* status of the errors                                                   */
} DevLib_TransStageInput;

typedef struct
{
    sint16  Dfl_C;       /* fixed replacement value                                               */
    uint8   stSensId_C;  /* Sensor Id word                                                        */
} DevLib_TransStagePar;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__HighSpeed__START
sint16 DevLib_TransStage( DevLib_TransStageState     *State,
                          DevLib_TransStageInput     *InStruct,
                          const DevLib_TransStagePar *ParStruct,
                          const SrvX_RampParam_t     *RampStruct,
                          sint32                      T0
                        );

__PRAGMA_USE__CODE__devlib__HighSpeed__END

#endif
