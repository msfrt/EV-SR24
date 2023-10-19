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
 * $Filename__:srvx_dt1.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:07.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_dt1$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     07.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *                        DT1 element
 *
 * \scope                 API
 ***************************************************************************************************
 */

#ifndef _SRVX_DT1_H
#define _SRVX_DT1_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/**
    SrvX_DT1SetState: Macro for setting the state variables of a DT1 element.
*/
#define SrvX_DT1SetParam(Param, T1RecVal, KdVal)        \
        ((Param)->T1Rec = (T1RecVal),(Param)->Kd    = (KdVal))

#else
/** define structure type according to ASW naming convention */

/**
    SrvX_DT1SetState: Macro for setting the state variables of a DT1 element.
*/
#define SrvX_DT1SetParam(Param, T1RecVal, KdVal)        \
        ((Param)->T1_C = (T1RecVal),(Param)->Kd_C = (KdVal))

/* __ASW_NAMES__ */
#endif


/**
    SrvX_DT1SetState: Macro for setting the state variables of a DT1 element.
*/
#define SrvX_DT1SetState(State, XVal, YVal)             \
        ((State)->X = (XVal),(State)->Y = ((YVal) * 65536l))

/**
    SrvX_DT1Out: Macro which returns the actual output state of the DT1 element.
*/
#define SrvX_DT1Out(State)                          ( ((State)->Y) / 65536l )

/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */


/**
    SrvX_DT1Param_t.
    Structure for storing the functional parameter of a DT1 element
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32 T1Rec;  /**< Reciprocal of time delay T1    */
    sint32 Kd;     /**< Differential factor Kd = Td/T1 */
} SrvX_DT1Param_t;

#else
/** define structure type according to ASW naming convention */

typedef struct
{
    sint32 T1_C;     /**< time delay T1    */
    sint32 Kd_C;     /**< Differential factor Kd = Td/T1 */
} SrvX_DT1Param_t;

/*__ASW_NAMES__*/
#endif


/**
    SrvX_DT1State_t.
    Structure for storing the actual input and output state of a DT1 element
*/
typedef struct
{
    sint32 X;     /**< Storage of X(k-1)             */
    sint32 Y;     /**< Storage of Y(k-1)             */
} SrvX_DT1State_t;



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_DT1S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DT1S16(sint32 X, SrvX_DT1State_t *State,
                              const SrvX_DT1Param_t *Param, sint32 Dt);

#elif (SRVX_DT1S16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_DT1S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_DT1S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DT1S16(sint32 X, SrvX_DT1State_t *State,
                                                    const SrvX_DT1Param_t *Param, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_DT1S16 not supported'

/* SRVX_DT1S16_LOCATION */
#endif

/* _SRVX_DT1_H */
#endif
