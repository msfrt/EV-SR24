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
 * $Filename__:srvx_dt1ctrl.h$ 
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
 * $Name______:srvx_dt1ctrl$ 
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
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *                        DT1Ctrl element
 *
 * \scope                 API
 ***************************************************************************************************
 */

#ifndef _SRVX_DT1CTRL_H
#define _SRVX_DT1CTRL_H


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* SrvX_DT1CtrlSetParam: Macro for setting the parameter variables of a DT1Ctrl element. */
#ifndef __ASW_NAMES__
/* define structure type according to CORE naming convention for internal use */

#define SrvX_DT1CtrlSetParam(Param, T1RecVal, KdVal)    \
        ((Param)->T1Rec = (T1RecVal),(Param)->Kd    = (KdVal))

#else

#define SrvX_DT1CtrlSetParam(Param, T1RecVal, KdVal)    \
        ((Param)->T1_C = (T1RecVal),(Param)->Kd_C = (KdVal))

/* __ASW_NAMES__ */
#endif


/* SrvX_DT1CtrlSetState: Macro for setting the state variables of a DT1Ctrl element. */
#define SrvX_DT1CtrlSetState(State, XVal, YVal)         \
        ((State)->X = (XVal),(State)->Y = ((YVal) * 65536l))


/* SrvX_DT1Out: Macro which returns the actual output state of the DT1Ctrl element. */
#define SrvX_DT1CtrlOut(State) ( ((State)->Y) / 65536l )


/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */

/* SrvX_DT1CtrlParam_t. Structure for storing the functional parameter of a DT1Ctrl element */

#ifndef __ASW_NAMES__
/* define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32 T1Rec;   /* Reciprocal of time delay T1    */
    sint32 Kd;      /* Differential factor Kd = Td/T1 */
} SrvX_DT1CtrlParam_t;

#else

typedef struct
{
    sint32 T1_C;    /* Reciprocal of time delay T1    */
    sint32 Kd_C;    /* Differential factor Kd = Td/T1 */
} SrvX_DT1CtrlParam_t;

/*__ASW_NAMES__*/
#endif


/* SrvX_DT1CtrlState_t: Structure for storing the input and output state of a DT1Ctrl element */
typedef struct
{
    sint32 X;       /* Storage of X(k-1)              */
    sint32 Y;       /* Storage of Y(k-1)              */
} SrvX_DT1CtrlState_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

#if   (SRVX_DT1CTRLS16_LOCATION == SRVX_LOCATION_CACHED)
    extern sint16 SrvX_DT1CtrlS16(sint32 X, SrvX_DT1CtrlState_t *State,
                                  const SrvX_DT1CtrlParam_t *Param, sint32 Dt);

#elif (SRVX_DT1CTRLS16_LOCATION == SRVX_LOCATION_INLINE)
    #error >>>>'The function SrvX_DT1CtrlS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_DT1CTRLS16_LOCATION == SRVX_LOCATION_SPRAM)
    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DT1CtrlS16(sint32 X, SrvX_DT1CtrlState_t *State,
                                                        const SrvX_DT1CtrlParam_t *Param, sint32 Dt));
#else
    #error >>>> 'Configuration for SrvX_DT1CtrlS16 not supported'

/* SRVX_DT1CTRLS16_LOCATION */
#endif

/* _SRVX_DT1CTRL_H */
#endif
