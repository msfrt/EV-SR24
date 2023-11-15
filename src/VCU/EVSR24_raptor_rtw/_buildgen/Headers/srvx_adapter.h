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
 * $Filename__:srvx_adapter.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Extended services
 *             Derived from B_SRVX.10.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.12.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_adapter$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 0     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings 
 *   
 *   2. Removal of SAT specific switches.
 * 
 * 1.15.0; 1     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 0     18.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvX
 * 
 * 1.13.3; 0     30.03.2011 VKA2FE
 *   Bugfix delivery, derived from B_SRVX.13.0.3
 *   Correction of map nipol services
 * 
 * 1.12.2; 0     24.02.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.12.0.2
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX.12.0.0
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVX.11.0.0
 * 
 * 1.10.0; 1     13.07.2009 VKA2FE
 *   Delivery B_SRVX.10.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVX.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_ADAPTER_H
#define _SRVX_ADAPTER_H


#include "srvx_dt1win.h"
#include "srvx_dt1.h"
#include "srvx_dt1ctrl.h"
#include "srvx_int.h"
#include "srvx_iwins16.h"
#include "srvx_pt1s16.h"
#include "srvx_pt1u8.h"
#include "srvx_pwins16.h"
#include "srvx_piwins16.h"
#include "srvx_deadtime.h"
#include "srvx_debounce.h"
#include "srvx_ramp.h"
#include "srvx_rampswitch.h"
#include "srvx_turnoffondelay.h"

/*
 ***********************************************************************************************************************
 * Old types for interpolation
 ***********************************************************************************************************************
 */

/** SearchRes_t - type for search results.                                                        */
typedef sint32  SrvX_SearchRes_t;

/** CurveU8 - type for unsigned integer 8Bit map.                                                 */
typedef const uint8  SrvX_CurveU8_t[];

/** CurveS16 - type for signed integer 16Bit map.                                                 */
typedef  const sint16 SrvX_CurveS16_t[];

/** MapU8 - type for unsigned integer 8Bit map.                                                   */
typedef const uint8  SrvX_MapU8_t[];

/** MapS16 - type for signed integer 16Bit map.                                                   */
typedef const sint16 SrvX_MapS16_t[];

/** DistribU8 - type for unsigned integer 8Bit distribution                                       */
typedef const uint8  SrvX_DistribU8_t[];
typedef const sint8  SrvX_DistribS8_t[];

/** DistribS16 - type for signed integer 16Bit distribution                                       */
typedef const sint16 SrvX_DistribS16_t[];
typedef const uint16 SrvX_DistribU16_t[];

/** ValU8 - type for unsigned integer 8Bit value array                                            */
typedef const uint8  SrvX_ValU8_t[];

/** ValS8 - type for signed integer 8Bit value array                                              */
typedef const sint8  SrvX_ValS8_t[];

/** ValS16 - type for signed integer 16Bit value array                                            */
typedef const sint16 SrvX_ValS16_t[];


/* Additions for DynIpo functions                                                                 */
enum SrvX_DynIpoCurveType
{
    MethodCur_Xs16Ws8 = 0,
    MethodCur_Xs16Ws16 = 1
};

enum SrvX_DynIpoMapType
{
    MethodMap_Xs16Ys16Ws8 = 0,
    MethodMap_Xs16Ys16Ws16 = 1
};

typedef struct
{
    uint16  method;
} SrvX_DynIpoCurveS16Data_t;

typedef struct
{
    uint16  method;
} SrvX_DynIpoMapS16Data_t;


/*
 ***********************************************************************************************************************
 * Mapping of old GS srva_ascet services (only inline)
 ***********************************************************************************************************************
 */


/* G */
#define gkf_nipol(gkf, anz_y, sstErg_x, sstErg_y)           gkf_nipol_U8((gkf), (anz_y), (sstErg_x), (sstErg_y))
#define gkl_sst(X_DIST,X_INPUT)                             SrvX_sst_U8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gkl_sst_U8(X_DIST,X_INPUT)                          SrvX_sst_U8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gkl_sst_S8(X_DIST,X_INPUT)                          SrvX_sst_S8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gkl_sst_U16(X_DIST,X_INPUT)                         SrvX_sst_U16( (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gkl_sst_S16(X_DIST,X_INPUT)                         SrvX_sst_S16( (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])

#define gklm_sst(X_DIST,X_INPUT,OLD_RESULT)                 SrvX_sst_U8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gklm_sst_U8(X_DIST,X_INPUT,OLD_RESULT)              SrvX_sst_U8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gklm_sst_S8(X_DIST,X_INPUT,OLD_RESULT)              SrvX_sst_S8(  (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gklm_sst_U16(X_DIST,X_INPUT,OLD_RESULT)             SrvX_sst_U16( (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])
#define gklm_sst_S16(X_DIST,X_INPUT,OLD_RESULT)             SrvX_sst_S16( (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])


/* I */
#define ip_U8_U8(delta,factor,x1,x2)         (SrvX_IpoDeltaFactorU8_Points_U8  ((delta), (factor), (x1), (x2)))
#define ip_U8_S8(delta,factor,x1,x2)         (SrvX_IpoDeltaFactorU8_Points_S8  ((delta), (factor), (x1), (x2)))
#define ip_U8_U16(delta,factor,x1,x2)        (SrvX_IpoDeltaFactorU8_Points_U16 ((delta), (factor), (x1), (x2)))
#define ip_U8_S16(delta,factor,x1,x2)        (SrvX_IpoDeltaFactorU8_Points_S16 ((delta), (factor), (x1), (x2)))


/* K */
#define kl_ipol(CURVE,X)                                    SrvX_IpoCurve_U8_U8(   (uint8)(X), (uint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_ipol_U16(CURVE,X)                                SrvX_IpoCurve_U16_U16((uint16)(X),(uint16)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_ipol_S8( CURVE,X)                                SrvX_IpoCurve_S8_S8(   (sint8)(X), (sint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))

#define kl_ipol_U8( CURVE,X)                                SrvX_IpoCurve_U8_U8(   (uint8)(X), (uint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))

#define kl_ipol_U16U16(CURVE,X)                             SrvX_IpoCurve_U16_U16((uint16)(X),(uint16)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_ipol_S8S8(  CURVE,X)                             SrvX_IpoCurve_S8_S8(   (sint8)(X), (sint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_ipol_U8U8(  CURVE,X)                             SrvX_IpoCurve_U8_U8(   (uint8)(X), (uint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_ipol_S16S16(CURVE,X)                             SrvX_IpoCurve_S16_S16((sint16)(X),(sint16)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))

#define kl_ipol_U8S8(  N,XDIST,VAL,X)                       SrvX_IpoCurve_U8_S8(   (uint8)(X), (uint8)(N),(XDIST),(VAL))
#define kl_ipol_S8U8(  N,XDIST,VAL,X)                       SrvX_IpoCurve_S8_U8(   (sint8)(X), (sint8)(N),(XDIST),(VAL))
#define kl_ipol_U8U16( N,XDIST,VAL,X)                       SrvX_IpoCurve_U8_U16(  (uint8)(X), (uint8)(N),(XDIST),(VAL))
#define kl_ipol_S16U16(N,XDIST,VAL,X)                       SrvX_IpoCurve_S16_U16((sint16)(X),(sint16)(N),(XDIST),(VAL))
#define kl_ipol_U16S16(N,XDIST,VAL,X)                       SrvX_IpoCurve_U16_S16((uint16)(X),(uint16)(N),(XDIST),(VAL))
#define kl_ipol_U16S8( N,XDIST,VAL,X)                       SrvX_IpoCurve_U16_S8( (uint16)(X),(uint16)(N),(XDIST),(VAL))
#define kl_ipol_U16U8( N,XDIST,VAL,X)                       SrvX_IpoCurve_U16_U8( (uint16)(X),(uint16)(N),(XDIST),(VAL))

#define kl_nipol(CURVE,X)                                   SrvX_LkUpCurve_U8_U8(   (uint8)(X), (uint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_nipol_U16(CURVE,X)                               SrvX_LkUpCurve_U16_U16((uint16)(X),(uint16)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_nipol_S8( CURVE,X)                               SrvX_LkUpCurve_S8_S8(   (sint8)(X), (sint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_nipol_S16(CURVE,X)                               SrvX_LkUpCurve_S16_S16((sint16)(X),(sint16)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))
#define kl_nipol_U8( CURVE,X)                               SrvX_LkUpCurve_U8_U8(   (uint8)(X), (uint8)((CURVE)[0]),&((CURVE)[1]),&((CURVE)[1+((CURVE)[0])]))

#define kl_nipol_U8U16( N,XDIST,VAL,X)                      SrvX_LkUpCurve_U8_U16(  (uint8)(X), (uint8)(N),(XDIST),(VAL))
#define kl_nipol_S16U16(N,XDIST,VAL,X)                      SrvX_LkUpCurve_S16_U16((sint16)(X),(sint16)(N),(XDIST),(VAL))

#define kf_ipol(    MAP,X,Y)                                SrvX_IpoMap_U8U8_U8(    (uint8)(X), (uint8)(Y), (uint8)(MAP)[0], (uint8)(MAP)[1], &((MAP)[2]), &((MAP)[(2+(MAP)[0])]) ,&((MAP)[(2+(MAP)[0]+(MAP)[1])]))
#define kf_ipol_U8( MAP,X,Y)                                SrvX_IpoMap_U8U8_U8(    (uint8)(X), (uint8)(Y), (uint8)(MAP)[0], (uint8)(MAP)[1], &((MAP)[2]), &((MAP)[(2+(MAP)[0])]) ,&((MAP)[(2+(MAP)[0]+(MAP)[1])]))
#define kf_ipol_U16(MAP,X,Y)                                SrvX_IpoMap_U16U16_U16((uint16)(X),(uint16)(Y),(uint16)(MAP)[0],(uint16)(MAP)[1],                  &((MAP)[2]),                  &((MAP)[(2+(MAP)[0])]),&((MAP)[(2+(MAP)[0]+(MAP)[1])]))

#define kf_ipol_U16U16_S16(MAP,X,Y)                         SrvX_IpoMap_U16U16_S16((uint16)(X),(uint16)(Y),(uint16)(MAP)[0],(uint16)(MAP)[1],(const uint16*)(&((MAP)[2])),(const uint16*)(&((MAP)[(2+(MAP)[0])])),(const sint16*)(&((MAP)[(2+(MAP)[0]+(MAP)[1])])))
#define kf_ipol_U8U8S8(   NX,XDIST,NY,YDIST,VAL,X,Y)        SrvX_IpoMap_U8U8_S8(    (uint8)(X), (uint8)(Y), (uint8)(NX), (uint8)(NY),(XDIST),(YDIST),(VAL))
#define kf_ipol_U16U8U8(  NX,XDIST,NY,YDIST,VAL,X,Y)        SrvX_IpoMap_U16U8_U8(  (uint16)(X), (uint8)(Y),(uint16)(NX),(uint16)(NY),(XDIST),(YDIST),(VAL))
#define kf_ipol_S16U8S16( NX,XDIST,NY,YDIST,VAL,X,Y)        SrvX_IpoMap_S16U8_S16( (sint16)(X), (uint8)(Y),(sint16)(NX),(sint16)(NY),(XDIST),(YDIST),(VAL))
#define kf_ipol_S16U8U16( NX,XDIST,NY,YDIST,VAL,X,Y)        SrvX_IpoMap_S16U8_U16( (sint16)(X), (uint8)(Y),(sint16)(NX),(sint16)(NY),(XDIST),(YDIST),(VAL))
#define kf_ipol_U16S8S8(  NX,XDIST,NY,YDIST,VAL,X,Y)        SrvX_IpoMap_U16S8_S8(  (uint16)(X), (sint8)(Y),(uint16)(NX),(uint16)(NY),(XDIST),(YDIST),(VAL))

#define kf_nipol(kf, input_x, input_y)                      kf_nipol_U8((kf), (input_x), (input_y))

/* S */
#define sst_U8( X_DIST,X_N,X_INPUT)                         SrvX_sst_U8(  (sint32)(X_INPUT), (sint32)(X_N), (X_DIST))
#define sst_S8( X_DIST,X_N,X_INPUT)                         SrvX_sst_S8(  (sint32)(X_INPUT), (sint32)(X_N), (X_DIST))
#define sst_U16(X_DIST,X_N,X_INPUT)                         SrvX_sst_U16( (sint32)(X_INPUT), (sint32)(X_N), (X_DIST))
#define sst_S16(X_DIST,X_N,X_INPUT)                         SrvX_sst_S16( (sint32)(X_INPUT), (sint32)(X_N), (X_DIST))
#define sst_idx_S16(X_DIST,X_INPUT)                         SrvX_sst_S16( (sint32)(X_INPUT), (sint32)(X_DIST)[0], &(X_DIST)[1])


/*
 ***********************************************************************************************************************
 * Memory configuration
 ***********************************************************************************************************************
 */


/* SRVX_DYNIPOCURVES16_LOCATION */
#if   (SRVX_DYNIPOCURVES16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DynIpoCurveS16(sint32 X, const SrvX_DynIpoCurveS16Data_t* data);

#elif (SRVX_DYNIPOCURVES16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_DynIpoCurveS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_DYNIPOCURVES16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DynIpoCurveS16(sint32 X, const SrvX_DynIpoCurveS16Data_t* data));
#else
    #error >>>>'Configuration for SrvX_DynIpoCurveS16 not supported'

/* SRVX_DYNIPOCURVES16_LOCATION */
#endif

/* SRVX_DYNIPOMAPS16_LOCATION */
#if   (SRVX_DYNIPOMAPS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DynIpoMapS16(sint32 X, sint32 Y, const SrvX_DynIpoMapS16Data_t* data);

#elif (SRVX_DYNIPOMAPS16_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DynIpoMapS16 SrvX_DynIpoMapS16_inline

#elif (SRVX_DYNIPOMAPS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DynIpoMapS16(sint32 X, sint32 Y, const SrvX_DynIpoMapS16Data_t* data));
#else
    #error >>>>'Configuration for SrvX_DynIpoMapS16 not supported'

/* SRVX_DYNIPOMAPS16_LOCATION */
#endif

/* SRVX_DYNIPOMAPS16EXTD_LOCATION */
#if   (SRVX_DYNIPOMAPS16EXTD_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DynIpoMapS16Extd(sint32 X, sint32 Y, const SrvX_DynIpoMapS16Data_t* data);

#elif (SRVX_DYNIPOMAPS16EXTD_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_DynIpoMapS16Extd SrvX_DynIpoMapS16Extd_inline

#elif (SRVX_DYNIPOMAPS16EXTD_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DynIpoMapS16Extd(sint32 X, sint32 Y, const SrvX_DynIpoMapS16Data_t* data));
#else
    #error >>>>'Configuration for SrvX_DynIpoMapS16Extd not supported'

/* SRVX_DYNIPOMAPS16EXTD_LOCATION */
#endif

 /* SRVX_IPOMAPS16S16S8EXTD_LOCATION */
#if   (SRVX_IPOMAPS16S16S8EXTD_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IpoMapS16S16S8Extd(sint32 X, sint32 Y, const sint8* MapVal);

#elif (SRVX_IPOMAPS16S16S8EXTD_LOCATION == SRVX_LOCATION_INLINE)

    #define SrvX_IpoMapS16S16S8Extd SrvX_IpoMapS16S16S8Extd_inline

#elif (SRVX_IPOMAPS16S16S8EXTD_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IpoMapS16S16S8Extd(sint32 X, sint32 Y, const sint8* MapVal));

#else
    #error >>>>'Configuration for SrvX_IpoMapS16S16S8Extd not supported'

/* SRVX_IPOMAPS16S16S8EXTD_LOCATION */
#endif


/* SRVX_IPODELTAFACTORU8_POINTS_LOCATION **********************************************************/
#if   (SRVX_IPODELTAFACTORU8_POINTS_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32   SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(uint8 delta, uint8 factor, sint32 x1, sint32 x2);

#elif (SRVX_IPODELTAFACTORU8_POINTS_LOCATION == SRVX_LOCATION_INLINE)

    #error 'The function SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32 can\'t be inlined: Configuration not supported'

#elif (SRVX_IPODELTAFACTORU8_POINTS_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32     SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32(uint8 delta, uint8 factor, sint32 x1, sint32 x2));

#else

    #error 'Configuration for SrvX_IpoDeltaFactorU8_Points_X8X16_but_never_use_X32 not supported'

/* SRVX_IPODELTAFACTORU8_POINTS_LOCATION */
#endif


#ifdef SRVX_ADAPTER_LOCATION
#if (SRVX_ADAPTER_LOCATION == SRVX_LOCATION_INLINE)


    /*
     ***********************************************************************************************************************
     * Wrappers to old DS: Mapping to inline function
     ***********************************************************************************************************************
     */

    #define SrvX_IpoCurveS16                            SrvX_IpoCurveS16_inline
    #define SrvX_IpoMapS16S16                           SrvX_IpoMapS16S16_inline

    #define SrvX_DistrSearchS16                         SrvX_DistrSearchS16_inline
    #define SrvX_DistrSearchS8                          SrvX_DistrSearchS8_inline
    #define SrvX_DistrSearchU16                         SrvX_DistrSearchU16_inline
    #define SrvX_DistrSearchU8                          SrvX_DistrSearchU8_inline
    #define SrvX_IpoGroupCurveS16                       SrvX_IpoGroupCurveS16_inline
    #define SrvX_IpoGroupCurveU8                        SrvX_IpoGroupCurveU8_inline
    #define SrvX_IpoGroupMapS16                         SrvX_IpoGroupMapS16_inline
    #define SrvX_IpoGroupMapS8                          SrvX_IpoGroupMapS8_inline
    #define SrvX_IpoGroupMapU8                          SrvX_IpoGroupMapU8_inline

    #define SrvX_IpoGroupMapS8Extd                      SrvX_IpoGroupMapS8Extd_inline


    /*
     ***********************************************************************************************************************
     * Wrappers to old GS: Mapping to inline function
     ***********************************************************************************************************************
     */

    #define kl_ipol_S16                                 kl_ipol_S16_inline
    #define kf_ipol_S16                                 kf_ipol_S16_inline


    #define SrvX_sst_S16                                SrvX_sst_S16_inline
    #define SrvX_sst_U16                                SrvX_sst_U16_inline
    #define SrvX_sst_S8                                 SrvX_sst_S8_inline
    #define SrvX_sst_U8                                 SrvX_sst_U8_inline

    #define gkl_ipol_S8                                 gkl_ipol_S8_inline
    #define gkl_ipol_S16                                gkl_ipol_S16_inline
    #define gkl_ipol_U8                                 gkl_ipol_U8_inline
    #define gkl_ipol_U16                                gkl_ipol_U16_inline
    #define gkl_ipol                                    gkl_ipol_inline

    #define gkl_nipol_S16                               gkl_nipol_S16_inline
    #define gkl_nipol_U16                               gkl_nipol_U16_inline
    #define gkl_nipol_S8                                gkl_nipol_S8_inline
    #define gkl_nipol_U8                                gkl_nipol_U8_inline
    #define gkl_nipol                                   gkl_nipol_inline

    #define gkf_ipol                                    gkf_ipol_inline
    #define gkf_ipol_S16                                gkf_ipol_S16_inline
    #define gkf_ipol_U16                                gkf_ipol_U16_inline
    #define gkf_ipol_S8                                 gkf_ipol_S8_inline
    #define gkf_ipol_U8                                 gkf_ipol_U8_inline

#else


    /*
     ***********************************************************************************************************************
     * Wrappers to old DS: Prototypes of callable functions
     ***********************************************************************************************************************
     */

    sint16 SrvX_IpoCurveS16(sint32 X,const sint16* CURVE);
    sint16 SrvX_IpoMapS16S16( sint32 X,sint32 Y,const sint16* MAP);

    SrvX_SearchRes_t SrvX_DistrSearchS16(sint32 X, sint32 Num,  SrvX_DistribS16_t Distr);
    SrvX_SearchRes_t SrvX_DistrSearchS8(sint32 X, sint32 Num,  SrvX_DistribS8_t Distr);
    SrvX_SearchRes_t SrvX_DistrSearchU16(sint32 X, sint32 Num,  SrvX_DistribU16_t Distr);
    SrvX_SearchRes_t SrvX_DistrSearchU8(sint32 X, sint32 Num,  SrvX_DistribU8_t Distr);
    sint16 SrvX_IpoGroupCurveS16(SrvX_SearchRes_t SearchResult, SrvX_ValS16_t CurveVal);
    uint8 SrvX_IpoGroupCurveU8(SrvX_SearchRes_t SearchResult, SrvX_ValU8_t CurveVal);
    sint16 SrvX_IpoGroupMapS16(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValS16_t CurveVal);
    sint8 SrvX_IpoGroupMapS8(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValS8_t CurveVal);
    uint8 SrvX_IpoGroupMapU8(SrvX_SearchRes_t SearchResultX, SrvX_SearchRes_t SearchResultY, sint32 N_s32, SrvX_ValU8_t CurveVal);
    sint16 SrvX_IpoGroupMapS8Extd(SrvX_SearchRes_t XSearchRes, SrvX_SearchRes_t YSearchRes, sint32 Num, SrvX_ValS8_t MapVal);


    /*
     ***********************************************************************************************************************
     * Wrappers to old GS: Prototypes of callable functions
     ***********************************************************************************************************************
     */

    sint16 kl_ipol_S16(const sint16* CURVE, sint16 X);
    sint16 kf_ipol_S16(const sint16* MAP, sint16 X,sint16 Y);

    uint32 SrvX_sst_S16(sint32 X, sint32 Num,  SrvX_DistribS16_t Distr);
    uint32 SrvX_sst_U16(sint32 X, sint32 Num,  SrvX_DistribU16_t Distr);
    uint32 SrvX_sst_S8(sint32 X, sint32 Num,  SrvX_DistribS8_t Distr);
    uint32 SrvX_sst_U8(sint32 X, sint32 Num,  SrvX_DistribU8_t Distr);

    sint8 gkl_ipol_S8(const sint8 *gkl, uint32 sst_erg);
    sint16 gkl_ipol_S16(const sint16 *gkl, uint32 sst_erg);
    uint8 gkl_ipol_U8(const uint8 *gkl, uint32 sst_erg);
    uint8 gkl_ipol(const uint8 *gkl, uint32 sst_erg);
    uint16 gkl_ipol_U16(const uint16 *gkl, uint32 sst_erg);

    sint16 gkl_nipol_S16(const sint16 *gkl, uint32 sst_erg);
    sint8 gkl_nipol_S8(const sint8 *gkl, uint32 sst_erg);
    uint8 gkl_nipol_U8(const uint8 *gkl, uint32 sst_erg);
    uint8 gkl_nipol(const uint8 *gkl, uint32 sst_erg);
    uint16 gkl_nipol_U16(const uint16 *gkl, uint32 sst_erg);

    uint8 gkf_ipol(const uint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);
    uint8 gkf_ipol_U8(const uint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);
    sint8 gkf_ipol_S8(const sint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);
    sint16 gkf_ipol_S16(const sint16 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);
    uint16 gkf_ipol_U16(const uint16 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);

/* SRVX_ADAPTER_LOCATION */
#endif
#else
    #error SRVX_ADAPTER_LOCATION not defined, look at srvx_conf.h
#endif


/*********************************************************************************************************************/
/*********************************************************************************************************************/
/* Old GS specific services ******************************************************************************************/
/*********************************************************************************************************************/
/*********************************************************************************************************************/
/**
 * Variables Totzeitglied mit U16 - Ein- und Ausgang
 * Diesem Totzeitglied liegt ein Fliezbandmodell zugrunde, das in einem festen Raster gerechnet wird.
 * Auf dem Fliezband konnen "nbuf" Werte transportiert werden. Entsprechend der Anzahl nbuf muz ein Feld
 * mit nbuf Elementen definiert werden, dessen Anfangsadresse dem Zeiger "dtbufStatic_w" zugewiesen wird.
 * Der Abstand zwischen zwei Paketen ist abhangig von nbuf und wird in "dsweiter_w" eingegeben.
 */
typedef struct totzeit
{
    uint8 nbuf;                 /* number of packs on the assy line                     */
    uint16 *dtbufStatic_w;      /* pointer to the buffer of the input and output values */
    uint16 dsintStatic_w;       /* time since the last pack was written                 */
    uint16 *lszStatic_w;        /* pointer to the actual pack                           */
    uint16 ds_w;                /* actual spread of the assy line                       */
    uint16 dsweiter_w;          /* (1 / (NBUF - 1) => time between two packs            */
    uint16 input_w;             /* input value                                          */
} Totzeit_t;

typedef struct totzeit2
{
    uint16  dsintStatic_w;      /* time since the last pack was written */
    uint16  *lszStatic_w;       /* pointer to actual buffer position */
    uint16  *dtbufBegStatic_w;  /* pointer to begin of buffer */
    uint16  *dtbufEndStatic_w;  /* pointer to end of buffer  */
} Totzeit2_t;


/* Structure definitions for TurnOnDelayVariable services */
struct DELAYVARIABLE_U8
{
    uint8 outbit;
    uint8 time;
};

struct DELAYVARIABLE_U16
{
    uint16 time;
    uint8 outbit;
};


extern sint8  Accumulator_S8 (sint8  *memory, sint8 in, sint8 mn, sint8 mx);
extern sint16 Accumulator_S16(sint16 *memory, sint16 in, sint16 mn, sint16 mx);
extern sint32 Accumulator_S32(sint32 *memory, sint32 in, sint32 mn, sint32 mx);
extern uint8  Accumulator_U8 (uint8  *memory, uint8 in, uint8 mn, uint8 mx);
extern uint16 Accumulator_U16(uint16 *memory, uint16 in, uint16 mn, uint16 mx);
extern uint8  gkf_nipol_U8(const uint8 *gkf, uint32 anz_y, uint32 sstErg_x, uint32 sstErg_y);
extern void   IntegratorK_U16(uint32 *memory, uint16 in, uint16 K);
extern void   IntegratorK_SU16(uint32 *memory, sint16 in, uint16 K);
extern void   IntegratorK_S16(sint32 *memory, sint16 in, uint16 K);
extern void   IntegratorK_S8(sint16 *memory, sint8 in, uint8 K);
extern void   IntegratorKLimited_U16(uint32 *memory, uint16 in, uint16 K, uint16 mn, uint16 mx);
extern void   IntegratorKLimited_SU16(uint32 *memory, sint16 in, uint16 K, uint16 mn, uint16 mx);
extern void   IntegratorKLimited_S16(sint32 *memory, sint16 in, uint16 K, sint16 mn, sint16 mx);
extern void   IntegratorKLimited_S8(sint16 *memory, sint8 in, uint8 K, sint8 mn, sint8 mx);
extern void   IntegratorT_S16(sint32 *memory, sint16 in, uint16 T);
extern void   IntegratorT_S8(sint16 *memory, sint8 in, uint8 T);
extern void   IntegratorTLimited_S16(sint32 *memory, sint16 in, uint16 T, sint16 mn, sint16 mx);
extern void   IntegratorTLimited_S8(sint16 *memory, sint8 in, uint8 T, sint8 mn, sint8 mx);
extern uint16 int_U16(uint16 factor, uint16 InputVal, uint16 LastVal, uint16 min, uint16 max);
extern sint16 int_S16(uint16 factor, sint16 InputVal, sint16 LastVal, sint16 min, sint16 max);
extern sint16 int_S16x(uint16 factor, sint16 InputVal, sint16 LastVal);
extern sint32 int_S32(uint16 factor, sint16 InputVal, sint16 hi_LastVal, uint16 lo_LastVal, sint16 hi_min, uint16 lo_min, sint16 hi_max, uint16 lo_max);
extern uint32 int_U32(uint16 factor, uint16 InputVal, uint16 hi_LastVal, uint16 lo_LastVal, uint16 hi_min, uint16 lo_min, uint16 hi_max, uint16 lo_max);
extern sint32 int_S32x(uint16 factor, sint16 InputVal, sint16 hi_LastVal, uint16 lo_LastVal);
extern uint32 int_U32x(uint16 factor, uint16 InputVal, uint16 hi_LastVal, uint16 lo_LastVal);
extern uint32 int_S16U32(uint16 factor, sint16 InputVal, uint16 hi_LastVal, uint16 lo_LastVal, uint16 min, uint16 max);
extern uint32 int_S16U32x(uint16 factor, sint16 InputVal, uint16 hi_LastVal, uint16 lo_LastVal);
extern uint8  kf_nipol_U8 (const uint8 *kf, uint8 input_x, uint8 input_y);
extern void   LowPassK_S16(sint32 *memory, sint16 in, uint16 K);
extern void   LowPassK_S8 (sint16 *memory, sint8  in, uint8  K);
extern void   LowPassK_U16(uint32 *memory, uint16 in, uint16 K);
extern void   LowPassK_U8 (uint16 *memory, uint8  in, uint8  K);
extern void   LowPassT_S16(sint32 *memory, sint16 in, uint16 T);
extern void   LowPassT_S8(sint16 *memory, sint8 in, uint8 T);
extern void   LowPassT_U16(uint32 *memory, uint16 in, uint16 T);
extern void   LowPassT_U8(uint16 *memory, uint8 in, uint8 T);
extern uint8  Timer_U8 (uint8  *timeCounter);
extern uint16 Timer_U16(uint16 *timeCounter);
extern uint8  TimerEnabled_U8 (uint8 *timeCounter, bool *inOld, bool enable, bool in, uint8 startTime);
extern uint16 TimerEnabled_U16(uint16 *timeCounter, bool *inOld, bool enable, bool in, uint16 startTime);
extern uint8  TimerRetriggerEnabled_U8 (uint8 *timeCounter, bool *inOld,bool enable, bool in, uint8 startTime);
extern uint16 TimerRetriggerEnabled_U16(uint16 *timeCounter, bool *inOld,bool enable, bool in, uint16 startTime);
extern uint16 tot_U16(struct totzeit *totval);
extern uint16 tot2_U16(struct totzeit2 *totval, uint16 input, uint16 ds, uint16 dsWeiter);
extern uint32 tp1_U32(uint16 factor, uint16 InputVal, uint16 hi_LastVal, uint16 lo_LastVal);
extern sint32 tp1_S32(uint16 factor, sint16 InputVal, sint16 hi_LastVal, uint16 lo_LastVal);
extern uint16 tp1_U16(uint16 factor, uint8 InputVal, uint16 LastVal);
extern sint16 tp1_S16(uint16 factor, sint8 InputVal, sint16 LastVal);
extern bool   TurnOnDelay_U8 (uint8  *time, bool signal, uint8  delayTime);
extern bool   TurnOnDelay_U16(uint16 *time, bool signal, uint16 delayTime);
extern bool   TurnOffDelay_U8 (uint8  *time, bool signal, uint8  delayTime);
extern bool   TurnOffDelay_U16(uint16 *time, bool signal, uint16 delayTime);
extern void   TurnOnDelayVariable_U8 (struct DELAYVARIABLE_U8 * s, bool signal, uint8  delayTime);
extern void   TurnOnDelayVariable_U16 (struct DELAYVARIABLE_U16 * s, bool signal, uint16  delayTime);
extern void   TurnOffDelayVariable_U8 (struct DELAYVARIABLE_U8 * s, bool signal, uint8  delayTime);
extern void   TurnOffDelayVariable_U16 (struct DELAYVARIABLE_U16 * s, bool signal, uint16  delayTime);
extern bool   TurnOnDelayVariableNoMem_U8 (uint8 *time, uint16 signal, uint8 delayTime);
extern bool   TurnOnDelayVariableNoMem_U16 (uint16 * time, uint16 signal, uint16 delayTime);
extern bool   TurnOffDelayVariableNoMem_U8 (uint8 * time, uint16 signal, uint8 delayTime);
extern bool   TurnOffDelayVariableNoMem_U16 (uint16 * time, uint16 signal, uint16 delayTime);

extern uint8  kf_ipol_U8U16U8(const uint32 anz_x, const uint8  *xsst,
                              const uint32 anz_y, const uint16 *ysst,
                              const uint8 *werte,
                              uint8  input_x,
                              uint16 input_y);

extern uint8  kf_ipol_S8U16U8(const uint32 anz_x, const sint8  *xsst,
                              const uint32 anz_y, const uint16 *ysst,
                              const uint8 *werte,
                              sint8  input_x,
                              uint16 input_y);

extern uint16 kf_ipol_U8U16U16(const uint32 anz_x, const uint8  *xsst,
                               const uint32 anz_y, const uint16 *ysst,
                               const uint16 *werte,
                               uint8 input_x,
                               uint16 input_y);

extern uint16 kf_ipol_S16U16U16(const uint32 anz_x, const sint16 *xsst,
                                const uint32 anz_y, const uint16 *ysst,
                                const uint16 *werte,
                                sint16 input_x,
                                uint16 input_y);

extern uint8  kf_ipol_S8U8U8(const uint32 anz_x, const sint8 *xsst,
                             const uint32 anz_y, const uint8 *ysst,
                             const uint8 *werte,
                             sint8 input_x,
                             uint8 input_y);

extern sint16 kf_ipol_S8U8S16(const uint32 anz_x, const sint8 *xsst,
                              const uint32 anz_y, const uint8 *ysst,
                              const sint16 *werte,
                              sint8 input_x,
                              uint8 input_y);

/* _SRVX_ADAPTER_H */
#endif
