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
 * $Filename__:srvf_adapter.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:SrvF Float services
 *             Derived from B_SRVF.10.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NSL2COB$ 
 * $Date______:11.11.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_adapter$ 
 * $Variant___:1.22.1$ 
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
 * 1.22.1; 0     11.11.2014 NSL2COB
 *   -Bugfixed
 * 
 * 1.17.0; 1     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings.
 *   
 *   2. Provision of inline options for new float functionalities.
 *   
 *   3. Removal of SATH specific switches
 * 
 * 1.17.0; 0     02.11.2012 PIR5COB
 *   New float functionalities are added.
 *   
 *   1. srvf_isplusinfinity_r32
 *   
 *   2. srvf_isminusinfinity_r32
 *   
 *   3. srvf_realvalueclassify_r32
 *   
 *   4. srvf_isinfinity_r32
 * 
 * 1.16.0; 0     10.07.2012 SWC1COB
 *   IsNaN, convertion and Validation limiter functionality added
 * 
 * 1.14.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvF
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVF.11.0.0
 * 
 * 1.10.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVF.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_ADAPTER_H
#define _SRVF_ADAPTER_H


/*
 ***********************************************************************************************************************
 * Includes
 ***********************************************************************************************************************
 */

#include "srvf_dt1.h"
#include "srvf_dt1win.h"
#include "srvf_iwin.h"
#include "srvf_pwin.h"
#include "srvf_piwin.h"
#include "srvf_pdt1.h"
#include "srvf_pdt1win.h"
#include "srvf_pt1.h"
#include "srvf_ramp.h"
#include "srvf_rampswitch.h"


/*
 ***********************************************************************************************************************
 * Types old GS
 ***********************************************************************************************************************
 */

 typedef struct
{
    uint32 xSize;
    real32 xzData[1];
} fCurve;

typedef struct
{
    uint32 xSize;
    uint32 ySize;
    real32 xyzData[1];
} fMap;

typedef struct
{
    uint32 index;
    real32 ratio;
} fSstIdx;

/*
 ***********************************************************************************************************************
 * Types old DS
 ***********************************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

    /** Type for keeping search result                                                                */
    typedef struct
    {
        sint32 Index;            /**< Index of distribution entry right before search value           */
        real32 Ratio;            /**< Ration between the two distribution entries                     */
    } SrvF_SearchResult_t;

    /** Curve structure (minimum size => don't use for declaring curve data!!)                        */
    typedef struct
    {
        sint32 XSize;        /**< Number of entries                                                   */
        real32 XZData[1];    /**< Pointer to distribution and data array                              */
    } SrvF_Curve_t;

    /** Map structure (minimum size => don't use for declaring map data!!)                            */
    typedef struct
    {
        sint32 XSize;        /**< Number of entries in X direction                                    */
        sint32 YSize;        /**< Number of entries in X direction                                    */
        real32 XYZData[1];  /**< Pointer to distribution and data array                               */
    } SrvF_Map_t;

#else
/** define structure type according to ASW naming convention */

    /** Type for keeping search result                                                                */
    typedef struct
    {
        sint32 Index_C;          /**< Index of distribution entry right before search value           */
        real32 Ratio_C;          /**< Ration between the two distribution entries                     */
    } SrvF_SearchResult_t;

    /** Curve structure (minimum size => don't use for declaring curve data!!)                        */
    typedef struct
    {
        sint32 XSize_C;        /**< Number of entries                                                 */
        real32 XZData_CUR[1];    /**< Pointer to distribution and data array                          */
    } SrvF_Curve_t;

    /** Map structure (minimum size => don't use for declaring map data!!)                            */
    typedef struct
    {
        sint32 XSize_C;        /**< Number of entries in X direction                                  */
        sint32 YSize_C;        /**< Number of entries in X direction                                  */
        real32 XYZData_MAP[1];  /**< Pointer to distribution and data array                           */
    } SrvF_Map_t;

/*__ASW_NAMES__*/
#endif

/*   Parameter struct for Hysteresis.                                                                 */
/*   Contains the threshold values and the according output values for hysteresis calculation.        */
typedef struct
{
    real32 XLow;        /**< Lower threshold                                                          */
    real32 XHigh;       /**< Upper threshold                                                          */
    real32 YLow;        /**< Output value for lower threshold                                         */
    real32 YHigh;       /**< Output value for upper threshold                                         */
} SrvF_HysteresisParam_t;


/*********************************************************************************************************************/
/*********************************************************************************************************************/
/* Old DS specific services ******************************************************************************************/
/*********************************************************************************************************************/
/*********************************************************************************************************************/

/**
 ***************************************************************************************************
 * Absolute function.
 * Return the absolute value of the given parameter X.
 *
 * \param           X Input value
 * \return          Returns the absolute value of X.
 * \retval          (-X) if X is less than zero.
 * \retval          (X) if X is greater then zero.
 ***************************************************************************************************
 */
#define  SrvF_Abs(X)                            SrvF_Abs_R32((X))

/* old hysteresis */
#define Srvf_Hysteresis(X, Par, State) \
        (SrvF_SwitchHystLR_R32_B((X), (Par)->XLow, (Par)->XHigh, (State)) ? (Par)->YHigh : (Par)->YLow)
#define Srvf_Hysteresis_Delta_RSP(X, Delta, Rsp, State)             SrvF_SwitchHystDR_R32_B((X), (Delta), (Rsp), (State))
#define Srvf_Hysteresis_LSP_Delta(X, Lsp, Delta, State)             SrvF_SwitchHystLD_R32_B((X), (Lsp), (Delta), (State))
#define Srvf_Hysteresis_MSP_DeltaHalf(X, Msp, DeltaHalf, State)     SrvF_SwitchHystCHD_R32_B((X), (Msp), (DeltaHalf), (State))
#define SrvF_Hysteresis_LSP_RSP(X, Lsp, Rsp, State)                 SrvF_SwitchHystLR_R32_B((X), (Lsp), (Rsp), (State))


__PRAGMA_USE__CODE__srv__HighSpeed__START
extern real32 SrvF_Accumulator(real32 X, real32 Min, real32 Max, real32 *Memory);
extern real32 SrvF_Sint64ToReal32(sint64 Var_s64);
extern real32 SrvF_Uint64ToReal32(uint64 Var_u64);
extern uint8 SrvF_RealValueClassify_U8(real32 X_r32);
__PRAGMA_USE__CODE__srv__HighSpeed__END


/*********************************************************************************************************************/
/*********************************************************************************************************************/
/* Old GS specific services ******************************************************************************************/
/*********************************************************************************************************************/
/*********************************************************************************************************************/

/* old hysteresis */
#define Hysteresis_Delta_RSP_R32(hysterese, x, delta, rsp)          SrvF_SwitchHystDR_R32_B((x),(delta),(rsp),(hysterese))
#define Hysteresis_LSP_Delta_R32(hysterese, x, lsp, delta)          SrvF_SwitchHystLD_R32_B((x),(lsp),(delta),(hysterese))
#define Hysteresis_LSP_RSP_R32(hysterese, x, lsp, rsp)              SrvF_SwitchHystLR_R32_B((x),(lsp),(rsp),(hysterese))
#define Hysteresis_MSP_DeltaHalf_R32(hysterese, x, msp, deltaHalf)  SrvF_SwitchHystCHD_R32_B((x),(msp),(deltaHalf),(hysterese))

/* old limiter */
#define Limiter_R32(mn, x, mx)                                      SrvF_RangeLimiter_R32((x),(mn),(mx))

/* old negation */
#define neg_r32_r32(x) (-(x))
#define neg_r64_r32(x) (((x) > MAXREAL32) ? (MINREAL32) : (((x) < MINREAL32) ? (MAXREAL32) : (-((real32)(x)))))
#define neg_r32_r64(x) (-((real64)(x)))
#define neg_r64_r64(x) (-(x))

extern real32 Accumulator_R32(real32 *memory, real32 in, real32 mn, real32 mx);
extern real32 IntegratorK_R32(real32 *memory, real32 in, real32 K);
extern real32 IntegratorKLimited_R32(real32 *memory, real32 in, real32 K, real32 mn, real32 mx);
extern real32 IntegratorT_R32(real32 *memory, real32 in, real32 T);
extern real32 IntegratorTLimited_R32(real32 *memory, real32 in, real32 T, real32 mn, real32 mx);
extern real32 LowPassK_R32(real32 *memory, real32 in, real32 K);
extern real32 LowPassT_R32(real32 *memory, real32 in, real32 T);
extern real32 Median5_R32(const real32 *array);


/* _SRVF_ADAPTER_H */
#endif
