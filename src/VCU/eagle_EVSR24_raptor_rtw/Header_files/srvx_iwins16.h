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
 * $Filename__:srvx_iwins16.h$ 
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
 * $Name______:srvx_iwins16$ 
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
 * 1.9.0; 0     29.08.2008 VKA2FE
 *   Component Toolbox-Import
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_IWINS16_H
#define _SRVX_IWINS16_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    I- element with windowing functionality
 *
 * \scope             API
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
    SrvX_IWinSetKi: Macro for setting the parameters for the I element.
    Struc has to be passed as a pointer.
*/
#define    SrvX_IWinSetKi(Struc, KiVal, KiPosVal, KiNegVal)     \
           ((Struc)->Ki    = (KiVal),(Struc)->KiPos  = (KiPosVal),(Struc)->KiNeg  = (KiNegVal))

/**
    SrvX_IWinSetWin: Macro for setting the window size of the I element.
    Struc has to be passed as  a pointer.
*/
#define     SrvX_IWinSetWin(Struc, WinPosVal, WinNegVal)        \
            ((Struc)->WinPos = (WinPosVal),(Struc)->WinNeg = (WinNegVal))

#else
/** define structure type according to ASW naming convention */

/**
    SrvX_IWinSetKi: Macro for setting the parameters for the I element.
    Struc has to be passed as a pointer.
*/
#define    SrvX_IWinSetKi(Struc, KiVal, KiPosVal, KiNegVal)     \
           ((Struc)->Ki_C    = (KiVal),(Struc)->KiPos_C  = (KiPosVal),(Struc)->KiNeg_C  = (KiNegVal))

/**
    SrvX_IWinSetWin: Macro for setting the window size of the I element.
    Struc has to be passed as  a pointer.
*/
#define     SrvX_IWinSetWin(Struc, WinPosVal, WinNegVal)        \
            ((Struc)->WinPos_C = (WinPosVal),(Struc)->WinNeg_C = (WinNegVal))

/* __ASW_NAMES__ */
#endif

/**
    SrvX_IWinSetState: Macro for setting the internal state ot the I element.

    Macro for setting the internal state ot the I element.
    The internal state of the I element is stored as (Val << 16).
    State has to be passed as a pointer.
*/
#define     SrvX_IWinSetState(State, Val)  ( (*(State)) = ((Val) * 65536l) )


#define     SrvX_IWinOut(State)  ((State) / 65536L)


/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */


/**
    SrvX_IWinParam_t: Parameter Structure for IWin element.
    Quantization for Ki, KiPos, KiNeg 2^15.
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32 Ki;                          /**< Ki        Ki factor within the window                */
    sint32 KiPos;                       /**< KiPos     Ki factor above the window                 */
    sint32 KiNeg;                       /**< KiNeg     Ki factor below the window                 */
    sint32 WinPos;                      /**< WinPos    Upper border of window                     */
    sint32 WinNeg;                      /**< WinNeg    Lower border of window                     */
}SrvX_IWinParam_t;


#else
/** define structure type according to ASW naming convention */

typedef struct
{
    sint32 Ki_C;                        /**< Ki_C        Ki_C factor within the window            */
    sint32 KiPos_C;                     /**< KiPos_C     Ki_C factor above the window             */
    sint32 KiNeg_C;                     /**< KiNeg_C     Ki_C factor below the window             */
    sint32 WinPos_C;                    /**< WinPos_C    Upper border of window                   */
    sint32 WinNeg_C;                    /**< WinNeg_C    Lower border of window                   */
}SrvX_IWinParam_t;

/*__ASW_NAMES__*/
#endif



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
#if   (SRVX_IWINS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IWinS16(sint32 X, sint32 *State, const SrvX_IWinParam_t *Param, sint32 Dt);

#elif (SRVX_IWINS16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_IWinS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_IWINS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IWinS16(sint32 X, sint32 *State,
                                                    const SrvX_IWinParam_t *Param, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_IWinS16 not supported'

/* SRVX_IWINS16_LOCATION */
#endif

/*_SRVX_IWINS16_H */
#endif
