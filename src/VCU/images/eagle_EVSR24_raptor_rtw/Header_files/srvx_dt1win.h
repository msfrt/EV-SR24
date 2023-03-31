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
 * $Filename__:srvx_dt1win.h$ 
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
 * $Name______:srvx_dt1win$ 
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
 *                      DT1 element with windowing mechanism
 *
 * \scope               API
 ***************************************************************************************************
 */

#ifndef _SRVX_DT1WIN_H
#define _SRVX_DT1WIN_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/**
    SrvX_DT1WinSetKDt1: Macro for setting the K and T factor for the DT1Win element.
*/
#define SrvX_DT1WinSetKDT1(Param, KdVal, KdPosVal, KdNegVal, T1RecVal)  \
        ((Param)->Kd    = (KdVal),(Param)->KdPos = (KdPosVal),(Param)->KdNeg = (KdNegVal),(Param)->T1Rec = (T1RecVal))
/**
    SrvX_DT1WinSetWin: Macro for setting the window borders for the DT1Win element.
*/
#define SrvX_DT1WinSetWin(Param, WinPosVal, WinNegVal)                  \
        ((Param)->WinPos = (WinPosVal),(Param)->WinNeg = (WinNegVal))

#else
/** define structure type according to ASW naming convention */

/**
    SrvX_DT1WinSetKDt1: Macro for setting the K and T factor for the DT1Win element.
*/
#define SrvX_DT1WinSetKDT1(Param, KdVal, KdPosVal, KdNegVal, T1RecVal)  \
        ((Param)->Kd_C    = (KdVal),(Param)->KdPos_C = (KdPosVal),(Param)->KdNeg_C = (KdNegVal),(Param)->T1_C = (T1RecVal))
/**
    SrvX_DT1WinSetWin: Macro for setting the window borders for the DT1Win element.
*/
#define SrvX_DT1WinSetWin(Param, WinPosVal, WinNegVal)                  \
        ((Param)->WinPos_C = (WinPosVal),(Param)->WinNeg_C = (WinNegVal))

/* __ASW_NAMES__ */
#endif

/**
    SrvX_DT1WinSetState: Macro for setting the state variables for the DT1Win element.
*/
#define SrvX_DT1WinSetState(State, XVal, YVal)                          \
        ((State)->X = (XVal),(State)->Y = ((YVal) * 65536l))

/**
    SrvX_DT1WinOut: Macro which returns the actual output state of the DT1Win element.
*/
#define SrvX_DT1WinOut(State)  ( ((State)->Y) / 65536l )



/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */

/**
    SrvX_DT1WinState_t:
    Structure for storing the actual input and output state of a DT1Win element.
*/
typedef struct
{
    sint32 X;                     /**< Storage of X(k-1)                                          */
    sint32 Y;                     /**< Storage of Y(k-1)                                          */
} SrvX_DT1WinState_t;

/**
    SrvX_DT1WinParam_t:
    Parameter struct for saving the DT1 parameters.

    Range for Kd, KdPos, KdNeg is [-16.0...16.0], quantization is by 2^16.
    WinNeg, WinPos must be of the same quantization.
    Quantization of T1Rec must be the the same as dT.
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */
typedef struct
{
    sint32 T1Rec;          /**< Reciprocal time factor                                            */
    sint32 Kd;             /**< K-factor within window                                            */
    sint32 KdPos;          /**< K-factor above window                                             */
    sint32 KdNeg;          /**< K-factor below window                                             */
    sint32 WinPos;         /**< Upper window boundary                                             */
    sint32 WinNeg;         /**< Lower window boundary                                             */
} SrvX_DT1WinParam_t;


#else
/** define structure type according to ASW naming convention */
typedef struct
{
    sint32 T1_C;             /**< Reciprocal time factor                                          */
    sint32 Kd_C;             /**< K-factor within window                                          */
    sint32 KdPos_C;          /**< K-factor above window                                           */
    sint32 KdNeg_C;          /**< K-factor below window                                           */
    sint32 WinPos_C;         /**< Upper window boundary                                           */
    sint32 WinNeg_C;         /**< Lower window boundary                                           */
} SrvX_DT1WinParam_t;

/* __ASW_NAMES__*/
#endif


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

#if   (SRVX_DT1WINS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DT1WinS16(sint32 X, SrvX_DT1WinState_t *State,
                                 const SrvX_DT1WinParam_t *Param, sint32 Dt);

#elif (SRVX_DT1WINS16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_DT1WinS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_DT1WINS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DT1WinS16(sint32 X, SrvX_DT1WinState_t *State,
                                                       const SrvX_DT1WinParam_t *Param, sint32 Dt));

#else

    #error >>>>'Configuration for SrvX_DT1WinS16 not supported'
/* SRVX_DT1WINS16_LOCATION */
#endif


/* _SRVX_DT1WIN_H */
#endif
