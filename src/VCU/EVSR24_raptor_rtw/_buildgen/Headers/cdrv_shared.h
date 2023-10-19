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
 * $Filename__:cdrv_shared.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DAH5KOR$ 
 * $Date______:09.08.2017$ 
 * $Class_____:SWHDR$ 
 * $Name______:cdrv_shared$ 
 * $Variant___:2.8.0_103$ 
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
 * 2.8.0_103; 0     09.08.2017 DAH5KOR
 *   TDC position made calibratable as per the EPM calibration label
 * 
 * 2.8.0; 0     13.03.2012 GEHAAF
 *   Support for 1 or 2 Cylinders
 *   Warnings removed
 * 
 * 2.7.0; 0     26.10.2010 TVH2SI
 *     (344946) CRQ: Misra Warning Removal from SDOM_BMW_BC : CDShdG  1.1.0; 1
 * 
 * 2.6.0; 0     13.08.2009 HIA3SI
 *   Ported from Nestor
 *   CDCOMP : CDRV_SHARED  2.60; 0
 * 
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/** \defgroup   CDRV_SHARED         complex driver shared

    \brief      Definitions useable for all complex drivers.

    @{
*/

#ifndef __CDRV_SHARED_H_
#define __CDRV_SHARED_H_           /* Module Identifier */


/* Include Headerfiles */
/* =================== */
#include <common.h>
//#include <cdrv_shared.d>   /* DAMOS definitions and declarations    */
#include <cdrv_memlay.h>
#include <epm.h>                    /* epm public header                            */
#include <gpta.h>

/* check system constants used in this module */
#ifndef EPM_PHIMAX_SY
    #error >>>>  'EPM_PHIMAX_SY' undefined!
#endif
#ifndef EPM_NUMCRSREVWCY_SY
    #error >>>>  'EPM_NUMCRSREVWCY_SY' undefined!
#endif


/** Macro to declare a function inline. By declaring a function inline, you can direct GCC to integrate that function's code into the code for its callers. This makes execution faster by eliminating the function-call overhead; in addition, if any of the actual argument values are constant, their known values may permit simplifications at compile time so that not all of the inline function's code needs to be included. The effect on code size is less predictable; object code may be larger or smaller with function inlining, depending on the particular case. Inlining of functions is an optimization and it really "works" only in optimizing compilation.

    \remarks    To always inline a function use \ref CDRV_ALWAYS_INLINE.

    \attention  Using -Winline will warn when a function marked inline could not be substituted, and will give the reason for the failure. This option is activated in the Mx17 enviroment.
*/
#define CDRV_INLINE         static __inline__

#ifndef INLINE_FUNCTION
    /* Makro fuer aeltere CDrv-Funktionen, sollte nicht fuer neue Funktionen benutzt werden. */
    #define INLINE_FUNCTION     CDRV_INLINE
#endif

/** Attribute for functions which should always be inlined - function should act
    like a macro.

    \remarks    Do not use this directly, use \ref CDRV_ALWAYS_INLINE instead!
*/
#define POST_ATTRIB_ALWAYS_INLINE   __attribute__((always_inline))

#ifndef DOXYGEN
    #define CDRV_ALWAYS_INLINE(x)       x POST_ATTRIB_ALWAYS_INLINE
#else   /* DOXYGEN */
    #warning "Doxygen version"
    /** Macro to make a function like a macro. The compiler will always
        inline this code undependend from compiler options.
        \par Example
            \code
                CDRV_ALWAYS_INLINE( CDRV_INLINE int example(int) );

                CDRV_INLINE int example(int i)
                {
                    return (i/10);
                }
            \endcode
    */
    #define CDRV_ALWAYS_INLINE(x)       x
#endif  /* DOXYGEN */


/* **************************************************************** */
/*  references                                                      */
/* **************************************************************** */

/** array for BM angles */
extern sint16 CDRV_BM_CYL[];


/* TDC array ECU No. 1 */

/** TDCs in angle timer ticks */
extern uint16 CDRV_TDC_CYL [];
/** distance between TDCs in angle timer ticks */
extern uint16 CDRV_DELTA_TDC_CYL [];

#if (SY_SGANZ > 1)
/* TDC array ECU No. 2 (slave) */

    /** TDCs in angle timer ticks (slave) */
    extern uint16 CDRV_TDC_S1_CYL [];
    /** distance between TDCs in angle timer ticks (slave) */
    extern uint16 CDRV_DELTA_TDC_S1_CYL [];

#endif  /* (SY_SGANZ > 1) */



/* **************************************************************** */
/*  defines                                                         */
/* **************************************************************** */

/** EPM_PHIMAX_SY + 1 is one workcycle in angle clock ticks.
    At a 4-stroke engine this are 720 deg crs. */
#define CDRV_ACT_A720    (EPM_PHIMAX_SY + 1)

/** Macro to change degrees to angle clock ticks
    \remarks offline Macro, should not be used during runtime because of float calculation */
#define CDRV_DEG2ACT(deg)  ( ( (double)(deg) * (double)CDRV_ACT_A720 ) / (360.*EPM_NUMCRSREVWCY_SY) )

/** One tooth in angle timer tick quantization [720/2^15 deg crs/inc].

    \remarks    It would also be possible to take the define EPMHCRS_NUM_MICROTICK from epmhcrs_prot.h, but this is a protected header.
*/
#define CDRV_ACT_PER_TOOTH  CDRV_DEG2ACT( (360/EPMHCRS_NUMINC) )



/* **************************************************************** */
/*  function prototypes                                             */
/* **************************************************************** */

/**
***************************************************************************************************
* Wait for next GPTA clock tick with timeout.
*
* Wait until GPTA 50ns clock has proceeded 1 tick to finish OIA action. In case the GPTA clock
* does not run there is an additional timeout condition derived from the Tricore system timer.
*
* \param       -
* \seealso
***************************************************************************************************
*/
CODE_NORM(extern void CDRV_WaitForGPTATick(void));



/** Get timestamp of present time + an offset time in micorseconds. Function is used to calculate timestamp of ignition moment
 * for engine direct start.

    \param[in]      offsetTime_u32  Addend one.

    \return         timestamp of ignition moment in GTTIM0 ticks.

*/
CDRV_INLINE uint32 CDrv_GetTimeRef(const uint32 offsetTime_u32);

/** Add two values. If the sum is bigger/equal than the limit, than
    the result is (sum - limit).

    \param[in]      addend1_ui  Addend one.

    \param[in]      addend2_ui  Addend two.

    \param[in]      limit_ui    If the sum is bigger/equal than the limit, than
                                the result is (sum - limit).

    \return     sum with overflow

    \sa cdrv_shared_subWithOverflow().
*/
CDRV_INLINE uint cdrv_shared_addWithOverflow( const uint addend1_ui, const uint addend2_ui, const uint limit_ui  );

/* ************************************************************** */
/** Berechnen eines absoluten Winkels aus einem Bezugswinkel und dem Delta Winkel dazu.

    \param[in]  refAg_Ci32      Bezugswinkel [720/2^15 deg crs/inc].

    \param[in]  phiAdd_Ci32     Winkel der zu dem Bezugswinkel [720/2^15 deg crs/inc] addiert werden soll. Ist phiAdd_Ci32 > 0 liegt der gesuchte absolute Winkel nach dem Bezugswinkel, andernfalls vor dem Bezugswinkel.

    \return     Absoluter Winkel [720/2^15 deg crs/inc]. Der Winkel liegt im Bereich [0; EPMHCRS_AGCNT_MAX].
*/
CDRV_INLINE sint32 cdrv_shared_calcAgAbs( const sint32 refAg_Ci32, const sint32 phiAdd_Ci32 );

/* ************************************************************** */
/** Conversion function for angle to microticks.

    The function converts a angle phiAbs to the hardware angle base (e.g. GT1 counter). The angle phiAbs base on the engine angle system with zero at the gap or at first TDC. The function checks also if the angle is in the past or in future. The parameter phiLimit is the length of the future. If the event is in the past it will mapped to the angel base also in the past. If the GTC cell, used for the event, is configured for "greater equal" compare, the event will happend immediately.

    \remarks    Dies ist die Kopie einer EPM Funktion, mit dem Unterschied, dass der aktuelle Winkelcounter Wert mit uebergeben wird. Diese Funktion entspricht EpmHCrS_CnvAg() aus epmhcrs_interface.c Version 1.120;0.

    \param      phiAbs          absolute angle of an event base on the engine angle system. [720/2^15 deg crs/inc]

    \param      phiLimit        limit of step from future to past [720/2^15 deg crs/inc]. Liegt die mit phiAbs berechnete Winkeldifferenz zu dem aktuellen Winkel agCntCurPos_s32 in diesem Bereich, wird davon ausgegangen, dass der Winkel in der Zukunft erreicht wird.

    \param[in]  agCntCurPos_s32 current value of angle base full length [720/2^15 deg crs/inc]

    \return     counter value in mikroticks for angle base of the event [720/2^15 deg crs/inc]
 */
CDRV_INLINE sint32 cdrv_shared_cnvAg( sint32 phiAbs, sint32 phiLimit, sint32 agCntCurPos_s32 );

/* ************************************************************** */
/** Ist der Winkel gleich/nach einem bestimmten Winkelwert?

    \param[in]  refAg_Ci32      Bezugswinkel [720/2^15 deg crs/inc].

    \param[in]  cmpAg_Ci32      Winkel [720/2^15 deg crs/inc].

    \param[in]  phiThresAfter_u16       Schwellwert bis zu diesem Abstand zum Bezugswinkel, ist der Winkel nach dem Bezugswinkel.

    \retval TRUE: Winkel ist innerhalb des Schwellwerts nach dem Bezugswinkel.
*/
CDRV_INLINE bool cdrv_shared_isAgAfter(  const sint32 refAg_Ci32, const sint32 cmpAg_Ci32, const uint16 phiThresAfter_u16 );

/* ************************************************************** */
/** Ist der Winkel gleich/vor einem bestimmten Winkelwert?

    \param[in]  refAg_Ci32      Bezugswinkel [720/2^15 deg crs/inc].

    \param[in]  cmpAg_Ci32      Winkel [720/2^15 deg crs/inc].

    \param[in]  phiThresBefore_u16      Schwellwert bis zu diesem Abstand zum Bezugswinkel, ist der Winkel vor dem Bezugswinkel [720/2^15 deg crs/inc].

    \retval TRUE: Winkel ist innerhalb des Schwellwerts vor dem Bezugswinkel.
*/
CDRV_INLINE bool cdrv_shared_isAgBefore(  const sint32 refAg_Ci32, const sint32 cmpAg_Ci32, const uint32 phiThresBefore_u32 );

/* ************************************************************** */
/** Determine expected begin angle through end angle and time distance.

    \param[in]  phiEndAbs_i32   Requested end angle [720 deg crs/2^15 /inc] - [0; EPMHCRS_AGCNT_MSK[.

    \param[in]  t_u32           Time [0.4 us/inc].

    \return     Der vorraussichtliche Beginnwinkel der Einspritzung auf den Nullpunkt des Drehzahlsystems bezogen [720 deg crs/2^15 /inc].

    \sa cdrv_shared_time2act().
*/
CDRV_INLINE sint32 cdrv_shared_phiBgn( sint32 phiEndAbs_i32, uint32 t_u32 );

/* ************************************************************** */
/** Subtract two values. If the difference is smaller than 0, than
    the result is (difference + limit).

    \attention      limit_ui should not be bigger than the maximum value of uint divided through 2.

    \param[in]      minuend_ui  Minuend.

    \param[in]      subtrahend_ui  Subtrahend.

    \param[in]      limit_ui    If the difference is smaller than the 0, than the result is (difference + limit).

    \return     sum with overflow

    \sa cdrv_shared_addWithOverflow().
*/
CDRV_INLINE uint cdrv_shared_subWithOverflow( const uint minuend_ui, const uint subtrahend_ui, const uint limit_ui  );

/* ************************************************************** */
/** Eine Zeit in ticks der Winkeluhr umrechnen. Die Umrechnung erfolgt anhand der gemittelten Zahnzeit - EpmHCrS_tiIncPerAvrg.

    \param[in]  t_u32   Zeit die umgewandelt werden soll [0.4us/inc].

    \par used global variables:
        - EpmHCrS_tiIncPerAvrg  Zahnperiode eines Zahns gemittelt [0.4us/inc]

    \remarks    Ist die Zahnzeit (EpmHCrS_tiIncPerAvrg) = 0, wird der halbe Wert, den die Winkeluhr darstellen kann zurueckgegeben! Dies sollte eigentlich nie vorkommen.

    \sa cdrv_shared_phiBgn().
*/
CDRV_INLINE uint32 cdrv_shared_time2act( uint32 t_u32 );


/**********************************************************************

Which sequence should be used

OSM MOD0 GES CAC CAT  Sequence
-----------------------------------
 0   u    x   x   x  ->  1   not supported
 0   c    0   x   x  ->  2   not supported
 0   c    1   x   x  ->  3   not supported
 1   x    0   x   x  ->  4   use  cdrv_setGtcSeq4
 1   u    1   0   x  ->  5   use  cdrv_setGtcSeq5
 1   u    1   1   0  ->  6   use  cdrv_setGtcSeq6
 1   u    1   1   1  ->  7   use  cdrv_setGtcSeq7
 1   c    1   0   x  ->  8   use  cdrv_setGtcSeq8
 1   c    1   1   0  ->  7   use  cdrv_setGtcSeq7
 1   c    1   1   1  ->  6   use  cdrv_setGtcSeq6

    x = don't care
    u = unchanged
    c = changed

 OSM: One Shot Mode
 MOD0 is the LSB of MOD that selects the GT
 GES: Greater Equal Select
 CAC: Capture After Compare
 CAT: Capture Alternate Timer


If you are in doubt, please use Sequence 7.


The parameters of cdrv_setGtcSeqx(uint32 GtcAdr, uint32 ctrl, uint32 xr):
  GtcAdr is the base Address of the GTC or the address of the control register
  ctrl is the new control command
  xr is the new timer value

**********************************************************************/


CDRV_INLINE void cdrv_setGtcSeq4(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr);

CDRV_INLINE void cdrv_setGtcSeq5(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr);

CDRV_INLINE void cdrv_setGtcSeq6(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr);

CDRV_INLINE void cdrv_setGtcSeq7(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr);

CDRV_INLINE void cdrv_setGtcSeq8(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr);



/* **************************************************************** */
/*  static/inline functions                                         */
/* **************************************************************** */

/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE uint32 CDrv_GetTimeRef(const uint32 offsetTime_u32)
{
    return ((uint32)(Gpta_GetGT0_GPTA0 + GPTA_GT0_US_TO_TICKS(offsetTime_u32)) & (uint32) 0x00FFFFFF);
}

/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE uint cdrv_shared_addWithOverflow( const uint addend1_ui, const uint addend2_ui, const uint limit_ui  )
{
    uint sum_ui;

    sum_ui = addend1_ui + addend2_ui;
    if (sum_ui >= limit_ui)
    {
        sum_ui = sum_ui - limit_ui;
    }
    return ( sum_ui );
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE sint32 cdrv_shared_calcAgAbs( const sint32 refAg_Ci32, const sint32 phiAdd_Ci32 )
{
    sint32 ag_i32 = refAg_Ci32 + phiAdd_Ci32;
    ag_i32 = (sint32)((uint32)ag_i32 & EPMHCRS_AGCNT_MAX);
    return ag_i32;
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE sint32 cdrv_shared_phiBgn( sint32 phiEndAbs_i32, uint32 t_u32 )
{
    uint32 phiInj_u32;  /* die Einspritzzeit in Winkel [720 Grd/2^15 /inc] */
    sint32 phiAbsInjBgn_i32;

    /* tInjAprx_u32 [0.4us/inc] in Winkel [720Grd/2^15 /inc] umrechnen
    ** tInjAprx_u32 darf maximal 2^32-1 / CDRV_ACT_PER_TOOTH sein,
    ** bei 6deg crs pro Zahn: 15.5e6 * 0.4us = 6.2s */
    phiInj_u32 = cdrv_shared_time2act( t_u32 );

    /* Den voraussichtlichen absolute Beginnwinkel der Einspritzung berechnen [720Grd/2^15 /inc] */
    phiAbsInjBgn_i32 = cdrv_shared_calcAgAbs( phiEndAbs_i32, ((sint32) (0-phiInj_u32)) );

    return( phiAbsInjBgn_i32 );
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE sint32 cdrv_shared_cnvAg( sint32 phiAbs, sint32 phiLimit, sint32 agCntCurPos_s32 )
{
    sint32 phiTmp;

    /* MISRA RULE 37 VIOLATION: overflow is avoided by system constant EPM_PHIMAX_SY */
    //
    // add the offset of angle base to phiAbs
    // phiTmp is the angle of the event related to angle base
    phiTmp = EpmSyn_phiOffs + phiAbs;
    // cal. the difference between current counter value of angle base and the angle of the event
    phiTmp -= agCntCurPos_s32;
    // compensation of 720 deg under- / overflow
    /* MISRA RULE 12.7 VIOLATION: Code ist so uebernommen von epmhcrs_interface.c Version 1.120;0 */
    phiTmp = (sint32)((uint32)phiTmp & EPM_PHIMAX_SY);
    // check if the event is in the past
    if( phiTmp > phiLimit )
    {
        // shift the event to past of angle base
        // if the GTC cell, used for the event, is configured for
        // greater equal compare, the event will happend immediate
        phiTmp -= (sint32)(EPMHCRS_AGCNT_MSK + 1);
    }
    // add the distance to the current counter value to get full counter value for the event
    phiTmp += agCntCurPos_s32;
    // compensation of angle counter under- / overflow
    /* MISRA RULE 12.7 VIOLATION: Code ist so uebernommen von epmhcrs_interface.c Version 1.120;0 */
    phiTmp = (sint32)((uint32)phiTmp & EPMHCRS_AGCNT_MAX);


    return( phiTmp );
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE bool cdrv_shared_isAgAfter(  const sint32 refAg_Ci32, const sint32 cmpAg_Ci32, const uint16 phiThresAfter_u16 )
{
    bool bRetval_b = (bool)FALSE;
    uint32 delta_u32 = (uint32)cdrv_shared_calcAgAbs( cmpAg_Ci32, (-refAg_Ci32) );
    if ( delta_u32 <= phiThresAfter_u16 )
    {
        /* Winkel ist nach dem Bezugswinkel und innerhalb der Schwelle. */
        bRetval_b = (bool)TRUE;
    }
    return bRetval_b;
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE bool cdrv_shared_isAgBefore(  const sint32 refAg_Ci32, const sint32 cmpAg_Ci32, const uint32 phiThresBefore_u32 )
{
    bool bRetval_b = (bool)FALSE;
    uint32 delta_u32 = (uint32)cdrv_shared_calcAgAbs( refAg_Ci32, (-cmpAg_Ci32) );
    if ( delta_u32 <= phiThresBefore_u32 )
    {
        /* Winkel ist vor dem Bezugswinkel und innerhalb der Schwelle. */
        bRetval_b = (bool)TRUE;
    }
    return bRetval_b;
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE uint cdrv_shared_subWithOverflow( const uint minuend_ui, const uint subtrahend_ui, const uint limit_ui  )
{
    uint difference_ui;

    difference_ui = minuend_ui - subtrahend_ui;
    if ( difference_ui >= limit_ui )
    {
        /* Ergebnis ist kleiner als 0. */
        difference_ui = difference_ui + limit_ui;
    }
    return ( difference_ui );
}


/* ************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE uint32 cdrv_shared_time2act( uint32 t_u32 )
{
    if (EpmHCrS_tiIncPerAvrg == 0)
    {
        return (sint32)(EPMHCRS_AGCNT_MAX/2);
    }
    return ( (((uint32)CDRV_ACT_PER_TOOTH * t_u32) / (uint32)EpmHCrS_tiIncPerAvrg) );
}





/* ************************************************************** */

/* function description is by prototype */

CDRV_INLINE void cdrv_setGtcSeq4(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr)
{

    GtcBase->GTCXR  = xr;                      /* write the new compare value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCCTR = ctrl;                    /* write the new control value */
    CPU_SET_SEQUENCE_POINT();

}


/* function description is by prototype */

CDRV_INLINE void cdrv_setGtcSeq5(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr)
{

    GtcBase->GTCXR  = xr;                      /* write the new compare value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCCTR = ctrl;                    /* write the new control value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCXR  = xr;                      /* rewrite the new compare value */

}


/* function description is by prototype */


CDRV_INLINE void cdrv_setGtcSeq6(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr)
{
    uint32 tmp;

    tmp    = GtcBase->GTCXR;                   /* dummy read stops the write protection */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCCTR = ctrl;                    /* write the new control value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCXR  = xr;                      /* write the new compare value */
}

/* function description is by prototype */

CDRV_INLINE void cdrv_setGtcSeq7(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr)
{
    uint32 tmp;

    tmp    = GtcBase->GTCXR;                   /* dummy read stops the write protection */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCXR  = xr;                      /* write the new compare value */
    CPU_SET_SEQUENCE_POINT();

    CDRV_WaitForGPTATick();                    /* wait for the next GPTA clock */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCCTR = ctrl;                    /* write the new control value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCXR  = xr;                      /* rewrite the new compare value */
}

/* function description is by prototype */

CDRV_INLINE void cdrv_setGtcSeq8(volatile GPTA_GTC_t *GtcBase, uint32 ctrl, uint32 xr)
{

    GtcBase->GTCXR  = xr;                      /* write the new compare value */
    CPU_SET_SEQUENCE_POINT();

    CDRV_WaitForGPTATick();                    /* wait for the next GPTA clock */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCCTR = ctrl;                    /* write the new control value */
    CPU_SET_SEQUENCE_POINT();

    GtcBase->GTCXR  = xr;                      /* rewrite the new compare value */
}



#endif  /* __CDRV_CONF_H_ */
/** @} */
