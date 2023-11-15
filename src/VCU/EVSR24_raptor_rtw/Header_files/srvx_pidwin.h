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
 * $Filename__:srvx_pidwin.h$ 
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
 * $Name______:srvx_pidwin$ 
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
 *      Version: \main\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_PIDWIN_H
#define _SRVX_PIDWIN_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        srvx_pidwin.h Headerfile for PID controller element
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
    SrvX_PIDWinSetKp: Macro for setting the K parameters for the P part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKp(Struc, KpVal, KpPosVal, KpNegVal)          \
        (                                                           \
            (Struc)->Kp    = (KpVal),                               \
            (Struc)->KpPos = (KpPosVal),                            \
            (Struc)->KpNeg = (KpNegVal)                             \
        )


/**
    SrvX_PIDWinSetKi: Macro for setting the K parameters for the I part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKi(Struc, KiVal, KiPosVal, KiNegVal)          \
        (                                                           \
            (Struc)->Ki    = (KiVal),                               \
            (Struc)->KiPos = (KiPosVal),                            \
            (Struc)->KiNeg = (KiNegVal)                             \
        )

/**
    SrvX_PIDWinSetKd: Macro for setting the K parameters for the D part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKd(Struc, KdVal, KdPosVal, KdNegVal)          \
        (                                                           \
            (Struc)->Kd    = (KdVal),                               \
            (Struc)->KdPos = (KdPosVal),                            \
            (Struc)->KdNeg = (KdNegVal)                             \
         )
/**
    SrvX_PIDWinSetT: Macro for setting the time parameter for the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetT(Struc, T1Val)                               \
        (                                                           \
            (Struc)->T1Rec = (T1Val)                                \
        )

/**
    SrvX_PIDWinSetK: Macro for setting ALL parameters of the PID element at once.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetK(Struc, KpVal, KpPosVal, KpNegVal,           \
                               KiVal, KiPosVal, KiNegVal,           \
                               KdVal, KdPosVal, KdNegVal, T1Val)    \
       (                                                            \
            (Struc)->Kp    = (KpVal),                               \
            (Struc)->KpPos = (KpPosVal),                            \
            (Struc)->KpNeg = (KpNegVal),                            \
            (Struc)->Ki    = (KiVal),                               \
            (Struc)->KiPos = (KiPosVal),                            \
            (Struc)->KiNeg = (KiNegVal),                            \
            (Struc)->Kd    = (KdVal),                               \
            (Struc)->KdPos = (KdPosVal),                            \
            (Struc)->KdNeg = (KdNegVal),                            \
            (Struc)->T1Rec = (T1Val)                                \
        )
/**
    SrvX_PIDWinSetWin: Macro for setting the window borders for the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetWin(Struc, PWinPosVal, PWinNegVal,            \
                                 IWinPosVal, IWinNegVal,            \
                                 DWinPosVal, DWinNegVal)            \
        (                                                           \
            (Struc)->PWinPos = (PWinPosVal),                        \
            (Struc)->PWinNeg = (PWinNegVal),                        \
            (Struc)->IWinPos = (PWinPosVal),                        \
            (Struc)->IWinNeg = (PWinNegVal),                        \
            (Struc)->DWinPos = (PWinPosVal),                        \
            (Struc)->DWinNeg = (PWinNegVal)                         \
         )

#else
/** define structure type according to ASW naming convention */

/**
    SrvX_PIDWinSetKp: Macro for setting the K parameters for the P part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKp(Struc, KpVal, KpPosVal, KpNegVal)          \
        (                                                           \
            (Struc)->Kp_C    = (KpVal),                             \
            (Struc)->KpPos_C = (KpPosVal),                          \
            (Struc)->KpNeg_C = (KpNegVal)                           \
        )


/**
    SrvX_PIDWinSetKi: Macro for setting the K parameters for the I part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKi(Struc, KiVal, KiPosVal, KiNegVal)          \
        (                                                           \
            (Struc)->Ki_C    = (KiVal),                             \
            (Struc)->KiPos_C = (KiPosVal),                          \
            (Struc)->KiNeg_C = (KiNegVal)                           \
        )

/**
    SrvX_PIDWinSetKd: Macro for setting the K parameters for the D part of the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetKd(Struc, KdVal, KdPosVal, KdNegVal)          \
        (                                                           \
            (Struc)->Kd_C    = (KdVal),                             \
            (Struc)->KdPos_C = (KdPosVal),                          \
            (Struc)->KdNeg_C = (KdNegVal)                           \
         )
/**
    SrvX_PIDWinSetT: Macro for setting the time parameter for the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetT(Struc, T1Val)                               \
        (                                                           \
            (Struc)->T1_C = (T1Val)                                 \
        )

/**
    SrvX_PIDWinSetK: Macro for setting ALL parameters of the PID element at once.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetK(Struc, KpVal, KpPosVal, KpNegVal,           \
                               KiVal, KiPosVal, KiNegVal,           \
                               KdVal, KdPosVal, KdNegVal, T1Val)    \
       (                                                            \
            (Struc)->Kp_C    = (KpVal),                             \
            (Struc)->KpPos_C = (KpPosVal),                          \
            (Struc)->KpNeg_C = (KpNegVal),                          \
            (Struc)->Ki_C    = (KiVal),                             \
            (Struc)->KiPos_C = (KiPosVal),                          \
            (Struc)->KiNeg_C = (KiNegVal),                          \
            (Struc)->Kd_C    = (KdVal),                             \
            (Struc)->KdPos_C = (KdPosVal),                          \
            (Struc)->KdNeg_C = (KdNegVal),                          \
            (Struc)->T1_C = (T1Val)                                 \
        )
/**
    SrvX_PIDWinSetWin: Macro for setting the window borders for the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetWin(Struc, PWinPosVal, PWinNegVal,            \
                                 IWinPosVal, IWinNegVal,            \
                                 DWinPosVal, DWinNegVal)            \
        (                                                           \
            (Struc)->PWinPos_C = (PWinPosVal),                      \
            (Struc)->PWinNeg_C = (PWinNegVal),                      \
            (Struc)->IWinPos_C = (PWinPosVal),                      \
            (Struc)->IWinNeg_C = (PWinNegVal),                      \
            (Struc)->DWinPos_C = (PWinPosVal),                      \
            (Struc)->DWinNeg_C = (PWinNegVal)                       \
         )


/* __ASW_NAMES__ */
#endif


/**
    SrvX_PIDWinSetState: Macro for setting the internal sate values for the PID element.
    Struc has to be passed as a pointer.
*/
#define SrvX_PIDWinSetState(Struc, XVal, YVal)                      \
        (                                                           \
            (Struc)->X = ((XVal) << 15),                            \
            (Struc)->Y = ((YVal) << 15)                             \
        )


/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */

/**
    SrvX_PIDWinParam_t: structure to save the necessary parameters for SrvX_RIDWin.
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32  Kp;             /**< K- factor for P part within window borders                       */
    sint32  KpPos;          /**< K- factor for P part above window borders                        */
    sint32  KpNeg;          /**< K- factor for P part below window borders                        */
    sint32  Ki;             /**< K- factor for I part within window borders                       */
    sint32  KiPos;          /**< K- factor for i part above window borders                        */
    sint32  KiNeg;          /**< K- factor for I part below window borders                        */
    sint32  Kd;             /**< K- factor for D part within window borders                       */
    sint32  KdPos;          /**< K- factor for D part above window borders                        */
    sint32  KdNeg;          /**< K- factor for D part below window borders                        */
    sint32  PWinPos;        /**< Upper window border for P part                                   */
    sint32  PWinNeg;        /**< Lower window border for P part                                   */
    sint32  IWinPos;        /**< Upper window border for I part                                   */
    sint32  IWinNeg;        /**< Lower window border for I part                                   */
    sint32  DWinPos;        /**< Upper window border for D part                                   */
    sint32  DWinNeg;        /**< Lower window border for D part                                   */
    sint32  T1Rec;          /**< Reciprocal time factor                                           */
}SrvX_PIDWinParam_t;


#else
/** define structure type according to ASW naming convention */
typedef struct
{
    sint32  Kp_C;             /**< K- factor for P part within window borders                     */
    sint32  KpPos_C;          /**< K- factor for P part above window borders                      */
    sint32  KpNeg_C;          /**< K- factor for P part below window borders                      */
    sint32  Ki_C;             /**< K- factor for I part within window borders                     */
    sint32  KiPos_C;          /**< K- factor for i part above window borders                      */
    sint32  KiNeg_C;          /**< K- factor for I part below window borders                      */
    sint32  Kd_C;             /**< K- factor for D part within window borders                     */
    sint32  KdPos_C;          /**< K- factor for D part above window borders                      */
    sint32  KdNeg_C;          /**< K- factor for D part below window borders                      */
    sint32  PWinPos_C;        /**< Upper window border for P part                                 */
    sint32  PWinNeg_C;        /**< Lower window border for P part                                 */
    sint32  IWinPos_C;        /**< Upper window border for I part                                 */
    sint32  IWinNeg_C;        /**< Lower window border for I part                                 */
    sint32  DWinPos_C;        /**< Upper window border for D part                                 */
    sint32  DWinNeg_C;        /**< Lower window border for D part                                 */
    sint32  T1_C;             /**< Reciprocal time factor                                         */
}SrvX_PIDWinParam_t;


/*__ASW_NAMES__*/
#endif

/**
    SrvX_PIDWinState_t: Structure for saving the actual state and input value of PID element.
*/
typedef struct
{
    sint32 X;                /**< Storage of X(k-1)                                               */
    sint32 Y;                /**< Storage of Y(k-1)                                               */
} SrvX_PIDWinState_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_PIDWIN_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_PIDWin(sint32 Input, SrvX_PIDWinState_t *State, sint32 Nominal,
                    sint32 Precontr, const SrvX_PIDWinParam_t *Param,  sint32 Dt);

#elif (SRVX_PIDWIN_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_PIDWin can\'t be inlined: Configuration not supported'

#elif (SRVX_PIDWIN_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_PIDWin(sint32 Input, SrvX_PIDWinState_t *State,
                            sint32 Nominal, sint32 Precontr, const SrvX_PIDWinParam_t *Param,
                            sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_PIDWin not supported'

/* SRVX_PIDWIN_LOCATION */
#endif

/* _SRVX_PIDWIN_H */
#endif
