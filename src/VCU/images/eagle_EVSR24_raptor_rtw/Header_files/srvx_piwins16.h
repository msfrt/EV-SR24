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
 * $Filename__:srvx_piwins16.h$ 
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
 * $Name______:srvx_piwins16$ 
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
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_PIWINS16_H
#define _SRVX_PIWINS16_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      PI element with windowing mechanism
 *
 * \scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/** Initialization method                                                                         */
#define SrvX_PIInit(Val, State) ((State)->Yp = 0, (State)->Yi = (Val))


#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

    /** SrvX_PIWinSetLimit: Set the Min and Max limit of the PIWin element. */
    #define SrvX_PIWinSetLimit(Limit, MinVal, MaxVal)  \
                ((Limit)->Min = (MinVal),(Limit)->Max = (MaxVal))

#else
/** define structure type according to ASW naming convention */

    /** SrvX_PIWinSetLimit: Set the Min and Max limit of the PIWin element. */
    #define SrvX_PIWinSetLimit(Limit, MinVal, MaxVal)  \
                ((Limit)->Min_C = (MinVal),(Limit)->Max_C = (MaxVal))

/* __ASW_NAMES__ */
#endif


/** SrvX_PIWinSetState: Set the internal sate values for the PIWin element. */
#define SrvX_PIWinSetState(Struc, YpVal, YiVal)  \
((Struc)->Yp = ((YpVal) ),(Struc)->Yi = ((YiVal)  * 65536l))

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/* Struct containing limits for proportional and integral component                               */
typedef struct
{
    sint32 Max;
    sint32 Min;
} SrvX_LimitParam_t;

#else
/** define structure type according to ASW naming convention */

/* Struct containing limits for proportional and integral component                               */
typedef struct
{
    sint32 Max_C;
    sint32 Min_C;
} SrvX_LimitParam_t;


/*__ASW_NAMES__*/
#endif


/* Struct containing state of proportional and integral component                                 */
typedef struct
{
    sint32 Yp;
    sint32 Yi;
} SrvX_PIWinState_t;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

#if   (SRVX_PIWINS16_LOCATION == SRVX_LOCATION_CACHED)

extern sint16 SrvX_PIWinS16(sint32 X, sint32 Pv,
                            const SrvX_PWinParam_t  *Pparam,
                            const SrvX_IWinParam_t  *Iparam,
                            const SrvX_LimitParam_t *Limits,
                            SrvX_PIWinState_t *State,
                            sint32 Dt
                           );

#elif (SRVX_PIWINS16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_PIWinS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_PIWINS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PIWinS16(sint32 X, sint32 Pv,
                                                      const SrvX_PWinParam_t  *Pparam,
                                                      const SrvX_IWinParam_t  *Iparam,
                                                      const SrvX_LimitParam_t *Limits,
                                                      SrvX_PIWinState_t *State,
                                                      sint32 Dt
                                                     ));
#else

    #error >>>>'Configuration for SrvX_PIWinS16 not supported'

#endif

/* _SRVX_PIWINS16_H */
#endif
