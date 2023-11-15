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
 * $Filename__:srvx_pwins16.h$ 
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
 * $Name______:srvx_pwins16$ 
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
 *      Version: \main\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _SRVX_PWINS16_H
#define _SRVX_PWINS16_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        Proportional element with windowing functionality
 *
 * \scope                 API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/**
    SrvX_PWinSetKp: Set the K factors of the P element.
    Param has to be passed as a pointer.
*/
#define    SrvX_PWinSetKp(Param, KpVal, KpPosVal, KpNegVal)     \
            ((Param)->Kp    = (KpVal),(Param)->KpPos = (KpPosVal),(Param)->KpNeg = (KpNegVal))

/**
    SrvX_PWinSetWin: Set the window borders of the P element.
    Param has to be passed as a pointer.
*/
#define    SrvX_PWinSetWin(Param, WinPosVal, WinNegVal)         \
            ((Param)->WinPos = (WinPosVal),(Param)->WinNeg = (WinNegVal))

#else
/** define structure type according to ASW naming convention */

/**
    SrvX_PWinSetKp: Set the K factors of the P element.
    Param has to be passed as a pointer.
*/
#define    SrvX_PWinSetKp(Param, KpVal, KpPosVal, KpNegVal)     \
            ((Param)->Kp_C    = (KpVal),(Param)->KpPos_C = (KpPosVal),(Param)->KpNeg_C = (KpNegVal))

/**
    SrvX_PWinSetWin: Set the window borders of the P element.
    Param has to be passed as a pointer.
*/
#define    SrvX_PWinSetWin(Param, WinPosVal, WinNegVal)         \
            ((Param)->WinPos_C = (WinPosVal),(Param)->WinNeg_C = (WinNegVal))

/* __ASW_NAMES__ */
#endif

/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */

/**
    PWinStruct -Parameter struct for proportional component.
    Kp, KpPos, KpNeg are quantised with 2^15.
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32 Kp;              /**< Proportional factor Kp within window                             */
    sint32 KpPos;           /**< Proportional factor Kp above positive window border              */
    sint32 KpNeg;           /**< Proportional factor Kp below negative window border              */
    sint32 WinPos;          /**< Positive window border                                           */
    sint32 WinNeg;          /**< Negative window border                                           */
} SrvX_PWinParam_t;

#else
/** define structure type according to ASW naming convention */

typedef struct
{
    sint32 Kp_C;              /**< Proportional factor Kp_C within window                         */
    sint32 KpPos_C;           /**< Proportional factor Kp_C above positive window border          */
    sint32 KpNeg_C;           /**< Proportional factor Kp_C below negative window border          */
    sint32 WinPos_C;          /**< Positive window border                                         */
    sint32 WinNeg_C;          /**< Negative window border                                         */
} SrvX_PWinParam_t;

/*__ASW_NAMES__*/
#endif


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_PWINS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PWinS16(sint32 X, const SrvX_PWinParam_t *Param);

#elif (SRVX_PWINS16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_PWinS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_PWINS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PWinS16(sint32 X, const SrvX_PWinParam_t *Param));

#else

    #error >>>> 'Configuration for SrvX_PWinS16 not supported'

/* SRVX_PWINS16_LOCATION */
#endif


/* _SRVX_PWINS16_H */
#endif
