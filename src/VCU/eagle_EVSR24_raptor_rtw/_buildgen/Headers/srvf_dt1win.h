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
 * $Filename__:srvf_dt1win.h$ 
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
 * $Name______:srvf_dt1win$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_DT1WIN_H
#define _SRVF_DT1WIN_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/** Initialization method                                                                         */
#define SrvF_DT1WinInit(Xi, Yi, State) ((State)->X = (Xi), (State)->Y = (Yi))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/** State structure for DT1Win element                                                            */
typedef struct
{
    real32 X;       /**< Old input value                                                          */
    real32 Y;       /**< Old output value                                                         */
} SrvF_DT1WinState_t;


#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/** Parameter structure for Dt1Win element                                                        */
typedef struct
{
    real32 T1;        /**< Time delay T1                                                          */
    real32 Kd;        /**< Differential factor Kd = Td/T1 within window                           */
    real32 KdPos;     /**< Differential factor Kd = Td/T1 above positive window border            */
    real32 KdNeg;     /**< Differential factor Kd = Td/T1 below negative window border            */
    real32 WinPos;    /**< Positive window border                                                 */
    real32 WinNeg;    /**< Negative window border                                                 */
} SrvF_DT1WinParam_t;


#else
/** define structure type according to ASW naming convention */

/** Parameter structure for Dt1Win element                                                        */
typedef struct
{
    real32 T1_C;        /**< Time delay T1                                                        */
    real32 Kd_C;        /**< Differential factor Kd = Td/T1 within window                         */
    real32 KdPos_C;     /**< Differential factor Kd = Td/T1 above positive window border          */
    real32 KdNeg_C;     /**< Differential factor Kd = Td/T1 below negative window border          */
    real32 WinPos_C;    /**< Positive window border                                               */
    real32 WinNeg_C;    /**< Negative window border                                               */
} SrvF_DT1WinParam_t;


/*__ASW_NAMES__*/
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_DT1Win(real32 X, const SrvF_DT1WinParam_t *Param,
                          SrvF_DT1WinState_t *State, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_DT1WIN_H */
#endif
