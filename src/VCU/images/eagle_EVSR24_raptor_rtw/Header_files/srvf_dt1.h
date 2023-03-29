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
 * $Filename__:srvf_dt1.h$ 
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
 * $Name______:srvf_dt1$ 
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

#ifndef _SRVF_DT1_H
#define _SRVF_DT1_H

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
#define SrvF_DT1Init(xi, yi, state) ((state)->X = (xi), (state)->Y = (yi))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/** Parameter structure                                                                           */
typedef struct
{
    real32 T1;  /**< Time delay T1                                                                */
    real32 Kd;  /**< Differential factor Kd = Td/T1                                               */
} SrvF_DT1Param_t;

#else
/** define structure type according to ASW naming convention */

/** Parameter structure                                                                           */
typedef struct
{
    real32 T1_C;  /**< Time delay T1_C                                                            */
    real32 Kd_C;  /**< Differential factor Kd_C = Td/T1                                           */
} SrvF_DT1Param_t;

#endif


/** State structure                                                                               */
typedef struct
{
    real32 X;  /**< Old input value                                                               */
    real32 Y;  /**< Old output value                                                              */
} SrvF_DT1State_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_DT1(real32 X, const SrvF_DT1Param_t *Param, SrvF_DT1State_t *State, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_DT1_H */
#endif
