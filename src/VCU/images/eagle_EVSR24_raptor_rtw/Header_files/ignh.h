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
 * $Filename__:ignh.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:YAK1KOR$
 * $Date______:08.09.2010$
 * $Class_____:SWHDR$
 * $Name______:ignh$
 * $Variant___:2.21.0$
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
 * 2.21.0; 0     08.09.2010 YAK1KOR
 *   CRQ:342359 
 *   Header file  generation during Make using core configuration.
 * 
 * 2.20.0; 1     16.08.2010 UWDAEMMR
 *   Removed more MISRA warnings
 * 
 * 2.20.0; 0     13.08.2010 UWDAEMMR
 *   Removed MISRA warnings
 * 
 * 2.19.0; 0     03.03.2010 BUA2ABT
 *   Support of IgnCl_Tmpr
 * 
 * 2.17.0; 0     20.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.14.1; 0     24.11.2008 HIA3SI
 *   Component Toolbox-Import
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _IGNH_H
#define _IGNH_H

#include "common.h"
#include "intrinsics.h"
#include "cdrv_conf.h"
#include "cdrv_shared.h"   /* must be included after cdrv_conf.h to avoid double definition
                              warnings. */
#include "cpu.h"
#include "gpta.h"
#include "pcp.h"
#include "srvb.h"
#include "epm.h"
#include "cdrv_memlay.h"
#include "ignh_prot_conf.h"
#include "ignh_auto_conf.h"


/* not included into production code */
/* MISRA RULE 19.11 VIOLATION:
   IGNH_DEBUG is tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
#include "testcd_ignh.h"
#endif

/* A HW bug on BC step was detected that causes spurious immediate events, if GRC_CTR.GES
   is set, even if the compare value written into X register is far in the future.
   Therefore the GPTA GE Compare software workaround shall be always enabled, no matter what
   the setting in cdrv_conf.h is! */
#undef CDRV_GLOBAL_GTC_WO
#define CDRV_GLOBAL_GTC_WO 1

/* CDRV_GLOBAL_GTC_WO from cdrv_conf.h */
#ifdef CDRV_GLOBAL_GTC_WO
/* MISRA RULE 19.11 VIOLATION:
   IGNH_DEBUG is tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
# define IGNH_DEBUG_XR
#endif
#ifdef IGNH_DEBUG_XR
extern volatile uint32 IgnH_DbgGTCCTRSave;
extern volatile uint32 IgnH_DbgGTCXRSave;
extern volatile uint32 IgnH_DbgGTCCTRSave1;
extern volatile uint32 IgnH_DbgGTCXRSave1;
#endif
#endif

/* to be included after definition of CDRV_GLOBAL_GTC_WO! */
#include "ignh_gpta_pub.h"


/* Define GTCCTR register mask constants */

#if (IGNH_PIN_ACTIVE == TRUE)
# define IGNH_GTC_OCM01_OUT_ACT           GTC_OCM01_FORCE_1
# define IGNH_GTC_OCM01_OUT_PAS           GTC_OCM01_FORCE_0
#elif (IGNH_PIN_ACTIVE == FALSE)
# define IGNH_GTC_OCM01_OUT_ACT           GTC_OCM01_FORCE_0
# define IGNH_GTC_OCM01_OUT_PAS           GTC_OCM01_FORCE_1
#else
# error Macro IGNH_PIN_ACTIVE not defined in ignh_conf!
#endif



/* Predefined GTC_CTR register masks */

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETPAS_INT \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/


/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETPAS_INT \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT     << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETPAS_CACGT0 \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT_EXT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETPAS_INT_BYP_CACGT0 \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETPAS_CACGT0 \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT_EXT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETPAS_INT_CACGT0 \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETPAS_INT_IMM \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/


/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETPAS_INT_IMM \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 |(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 |( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETACT_CACGT0 \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_ACT << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT_EXT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETACT_INT_CACGT0 \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_ACT << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/


/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETACT_CACGT0 \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_ACT << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT_EXT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT1_SETACT_INT_CACGT0 \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 |(           GTC_GES_GREATER_EQUAL << GPTA_GTCCTR_GES_POS)  \
 |(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 |( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_ACT << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_GT0_SETPAS_IMM_DISABLE \
 ((             GTC_MOD_CAPTURE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 |(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 |(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 |(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 |(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 |(      GTC_CAT_CAPTURE_SAME_TIMER << GPTA_GTCCTR_CAT_POS)  \
 |(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 |(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                GTC_OCM2_INT_EXT << GPTA_GTCCTR_OCM2_POS) \
 |(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_GTCCTR_DISABLE_SETPAS \
 ((0x00000000ul )\
 |(                GTC_EOA_DISABLED << GPTA_GTCCTR_EOA_POS)  \
 |(          IGNH_GTC_OCM01_OUT_PAS << GPTA_GTCCTR_OCM01_POS)\
 |(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 |(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))
/**************************************************************************************************/

/* Predefined LTC_CTR register masks */
/**************************************************************************************************/
#define IGNH_LTCCTR_DISABLE 0x0ul
/**************************************************************************************************/

/**************************************************************************************************/
#define IGNH_LTCCTR_FREERUNNING \
 ((             2 << GPTA0_LTCCTR_MOD_POS)  \
 |(             1 << GPTA0_LTCCTR_OSM_POS)  \
 |(             1 << GPTA0_LTCCTR_REN_POS)  \
 |(             1 << GPTA0_LTCCTR_RED_POS))
/**************************************************************************************************/



/**************************************************************************************************/
#define IGNH_INCANGLE_DEG (360/EPMHCRS_NUMINC)  /* Angle of one increment tooth in degrees CA */
#define IGNH_INCANGLE ((IGNH_INCANGLE_DEG * EPM_PHIMAX_SY) / 720)  /* in GT1 units */

#define IGNH_MASK(len,pos) (((1ul << (len)) - 1ul) << (pos)) /* Generates MISRA rule 93 warning:
                                                                accepted. */

/* Timeout to wait for FSM response in us: must be equal or greater than value "<PCP_CHNL_LATENCY>"
   of "IgnH Channel x" chan. request in ignh_conf.xml, i.e. worst case channel deadline.
   CAVEAT: Make sure "<PCP_CHNL_LATENCY>" is defined in units of us in IgnH PCP configuration! */
#ifdef IGNH0_LTCY  /* from pcp_auto_conf.h */
#define IGNH_TIMEOUT_WAITFSMRESP (CPU_US_TO_TICKS(IGNH0_LTCY))
#else
#define IGNH_TIMEOUT_WAITFSMRESP (CPU_US_TO_TICKS(200))
#endif

/** Error numbers for error handler routine */
typedef enum IgnH_ErrNo
    {
        IGNH_ERR_NOERR,         /**< No error. */
        IGNH_ERR_IRINIDLE,      /**< Interrupt in idle state. */
        IGNH_ERR_UNKNOWNSTATE,  /**< State number out of range of IgnH_State. */
        IGNH_ERR_UNKNOWNIR,     /**< Inconsistent event flags of GTC pair detected. */
        IGNH_ERR_50NSTIMEOUT,   /**< Timeout during waiting for next GPTA tick. */
        IGNH_ERR_NOMODE,        /**< Mode bit was wrong, so go toIdle */
        IGNH_WRN_STOPPED,       /**< Warning, driver stopped. */
        IGNH_WRN_RETR_ABORTED   /**< Warning, retrigger aborted, because of pulse event. */
    } IgnH_ErrNo_t;


/** Driver mode of operation */
/* When something is changed here IgnH_ChlSetMode must also be changed */
#define IGNH_DRV_STOPPED_P 0x00u
#define IGNH_DRV_NORMAL_P 0x01u
#define IGNH_DRV_DIRECT_P 0x02u
/* legacy code: for backward compatibility */
#define IGNH_DRV_STOP IGNH_DRV_STOPPED_P

typedef enum IgnH_DrvMode
    {
        IGNH_DRV_STOPPED = IGNH_DRV_STOPPED_P,
        IGNH_DRV_NORMAL = IGNH_DRV_NORMAL_P,
        IGNH_DRV_DIRECT = IGNH_DRV_DIRECT_P
    } IgnH_DrvMode_t;


/** Channel states with flags encoded within state symbols:
    Bits #0 .. 3 are a state number, #4 ..7 are the flags.
    Bit 4: Flag IGNACT - "Ignition Active".
    Bit 5: Flag TRIGABLE - "Triggerable State"
    Bit 6: Flag TRIGABLE_TMP - "Triggerable State, data to be passed through intermediate buffer"
    Bit 7: not used.
*/
#define IGNH_S_NUM_STATES 8u
#define IGNH_S_IDLE_P 0x20u
#define IGNH_S_TRIGGERED_P 0x41u
#define IGNH_S_RELEASED_P 0x42u
#define IGNH_S_DWELLPERIOD_P 0x13u
#define IGNH_S_IGNFOLLOWUP_P 0x14u
#define IGNH_S_IGNCOMPLETED_P 0x05u
#define IGNH_S_WAITMINOFFTIME_P 0x26u
#define IGNH_S_WAITMAXIGNANGLE_P 0x07u


typedef enum IgnH_State
    {
        IGNH_S_IGNCOMPLETED = IGNH_S_IGNCOMPLETED_P,
        IGNH_S_WAITMAXIGNANGLE = IGNH_S_WAITMAXIGNANGLE_P,
        IGNH_S_DWELLPERIOD = IGNH_S_DWELLPERIOD_P,
        IGNH_S_IGNFOLLOWUP = IGNH_S_IGNFOLLOWUP_P,
        IGNH_S_IDLE = IGNH_S_IDLE_P,
        IGNH_S_WAITMINOFFTIME = IGNH_S_WAITMINOFFTIME_P,
        IGNH_S_TRIGGERED = IGNH_S_TRIGGERED_P,
        IGNH_S_RELEASED = IGNH_S_RELEASED_P
    } IgnH_State_t;


/** Function pointer type of error handling callback routine. */
typedef void (*IgnH_ErrHandler_fp_t)(IgnH_ErrNo_t IgnH_ErrNo, uint8 chl);




/** Variable driver data. To be allocated in RAM. */
typedef struct IgnH_Drvdata_s
{
    uint32 EdgeCtrs;   /**< Free running counters of start dwell edges and ign. edges.
                            MS 16bits = StartDwellCtr, LS 16bit = IgnCtr. */
} IgnH_DrvData_t;

#define IGNH_STARTDWELLCTR_MASK 0xffff0000ul
#define IGNH_STARTDWELLCTR_POS  16u
#define IGNH_IGNCTR_MASK        0x0000fffful
#define IGNH_IGNCTR_POS         0u

#ifdef IGNH_CPU
# define IGNH_STARTDWELLCTR (IgnH_DrvData.EdgeCtrs >> IGNH_STARTDWELLCTR_POS)
# define IGNH_IGNCTR (IgnH_DrvData.EdgeCtrs & IGNH_IGNCTR_MASK)
#else /* PCP */
# define IGNH_STARTDWELLCTR (Pcp_Pram_s.IgnH_EdgeCtrs >> IGNH_STARTDWELLCTR_POS)
# define IGNH_IGNCTR (Pcp_Pram_s.IgnH_EdgeCtrs & IGNH_IGNCTR_MASK)
#endif

/** Constant (write once) driver data.
    To be allocated in flash (use "const" attribute). */
typedef struct IgnH_DrvConst_s
{
    sint32 MinOffTime;       /**< Minimum off time between ignitions */
#ifdef IGNH_CPU
    IgnH_ErrHandler_fp_t ErrHandler_fp;   /** < Pointer to error handling callback routine */
#endif
} IgnH_DrvConst_t;

#ifdef IGNH_CPU
# define IGNH_MINOFFTIME (IgnH_DrvConst.MinOffTime)
#else /* PCP */
# define IGNH_MINOFFTIME (Pcp_Pram_s.IgnH_MinOffTime)
#endif


/** Variable channel data. To be allocated in RAM. */
typedef struct IgnH_ChlData_s
{
    sint32 IA;                   /**< 0- Ignition angle or delay time [dep. on mode] */
    sint32 DwT;                  /**< 1- Dwell time */
    sint32 FSPT;                 /**< 2- Follow up sparks pause time */
    sint32 FSDwT;                /**< 3- Follow up sparks dwell time */
    sint32 IAmax;                /**< 4- Maximum ignition angle limit */
    sint32 NOFS;                 /**< 5- Number of follow up pulses */
    sint32 State;                /**< 6- State of internal statemachine:
                                      bits[23:16] = state symbol as per IgnH_State_t
                                      bits[15:0] = address of state handler function on PCP */
    sint32 Flags;                /**< 7- Internal flags:
                                      bits[15:8] - INC_IR_MODE = 14, ACTV_MSI = 11, IAMAX_IR = 10, INC_IR = 9, SW_IR = 8;
                                      bits[7:0] = Mode - channel mode of operation */
    struct IgnH_ChlDataTmp_s     /* temporary data buffer for coherent data transfer CPU-PCP */
    {
        sint32 IA;               /**< 8- IAtmp */
        sint32 DwT;              /**< 9- DwTtmp */
        sint32 FSPT;             /**< 10- FSPTtmp */
        sint32 FSDwT;            /**< 11- FSDwTtmp */
        sint32 NOFS;             /**< 12- NOFStmp */
        sint32 Flags;            /**< 12- Flagstmp */
    } tmp;
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ( (defined(IGNARCDURMONI)&&(IGNARCDURMONI==1)) || (defined(IGNCL_CLCRNTMON)&&(IGNCL_CLCRNTMON==1)) )
    sint32 dwellStartFlag;       /**< 13- to recognize end of main pulse for SpMon */
#endif
} IgnH_ChlData_t;

/* bitfield definitions for IgnH_ChlData_t.State, IgnH_ChlData_t.Flags and IgnH_ChlData_t.NOFS */
/** Maximum number of follow-up pulses.
    This number is limited by the r6.cnt1 bitfield length, since PCP auto decrement on exit is used
    to count the follow-up pulses. Must be consistent w/ IGNH_R6_CNT1_MASK in ignh_pcp.h. */
#define IGNH_NOFS_MAX IGNH_MASK(PCP_R6_CNT1_LEN, PCP_R6_CNT1_POS)

#define IGNH_STATE_PTR_POS 0u
#define IGNH_STATE_PTR_LEN 16u

#define IGNH_STATE_NUM_POS 16u
#define IGNH_STATE_NUM_LEN 16u

#define IGNH_STATE_IGNACT_POS (IGNH_STATE_NUM_POS+4)
#define IGNH_STATE_TRIGABLE_POS (IGNH_STATE_IGNACT_POS+1)
#define IGNH_STATE_TRIGABLE_TMP_POS (IGNH_STATE_IGNACT_POS+2)

#define IGNH_STATE_IGNACT_MASK IGNH_MASK(1, IGNH_STATE_IGNACT_POS)
#define IGNH_STATE_TRIGABLE_MASK IGNH_MASK(1, IGNH_STATE_TRIGABLE_POS)
#define IGNH_STATE_TRIGABLE_TMP_MASK IGNH_MASK(1, IGNH_STATE_TRIGABLE_TMP_POS)

#define IGNH_MODE_POS 0u
#define IGNH_MODE_LEN 8u
#define IGNH_MODE_MASK IGNH_MASK(IGNH_MODE_LEN, IGNH_MODE_POS)

#define IGNH_SW_IR_POS  8u
#define IGNH_SW_IR_LEN  1u
#define IGNH_SW_IR_MASK IGNH_MASK(IGNH_SW_IR_LEN, IGNH_SW_IR_POS)
#define IGNH_FLAGS_IAM_IR_POS 10u
#define IGNH_FLAGS_IAM_IR_LEN 1u
#define IGNH_FLAGS_IAM_IR_MASK IGNH_MASK(IGNH_FLAGS_IAM_IR_LEN, IGNH_FLAGS_IAM_IR_POS)
#define IGNH_FLAGS_ACTV_MSI_POS 11u
#define IGNH_FLAGS_ACTV_MSI_LEN 1u
#define IGNH_FLAGS_ACTV_MSI_MASK IGNH_MASK(IGNH_FLAGS_ACTV_MSI_LEN, IGNH_FLAGS_ACTV_MSI_POS)
#define IGNH_INC_IR_POS 9u
#define IGNH_INC_IR_LEN 1u
#define IGNH_INC_IR_MASK IGNH_MASK(IGNH_INC_IR_LEN, IGNH_INC_IR_POS)

#define IGNH_INC_IR_MODE_POS 14u
#define IGNH_INC_IR_MODE_LEN 1u
#define IGNH_INC_IR_MODE_MASK IGNH_MASK(IGNH_INC_IR_MODE_LEN, IGNH_INC_IR_MODE_POS)

/* mask input bits */
#define IGNH_INP_FLAGMASK   (IGNH_SW_IR_MASK | IGNH_INC_IR_MASK)
/* mask all input bits, but SW_IR */
#define IGNH_INP_FLAGMASK_WOSW   (IGNH_INC_IR_MASK)
/* mask all bits */
#define IGNH_FLAGMASK   (IGNH_INP_FLAGMASK | IGNH_INC_IR_MODE_MASK)

#define IGNH_NOFS_POS 0u
#define IGNH_NOFS_LEN 30u
#define IGNH_NOFS_MASK IGNH_MASK(IGNH_NOFS_LEN, IGNH_NOFS_POS)


/** Constant (write once) channel data.
    To be allocated in flash (use "const" attribute). */
typedef struct IgnH_ChlConst_s
{
    GPTA_GTC_t *GTCn;           /* Global timer cell 1 */
    volatile uint32 *SRC;       /* Service request node control register */
    volatile uint32 *SRS;       /* Service request state register */
    uint32 SRSPos;              /* mask of SRS bit of GTC(n) */
    GPTA_LTC_t *LTC;            /* LTC for max. ignition angle */
    volatile uint32 *LTCSRC;    /* Service request node control reg. of LTC */
    volatile uint32 *LTCSRSC;   /* Service request state clear register */
    uint32 LTCSRSC_MASK;           /* mask of bit for ltc in srsc */
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ( ((defined IGNINCIR) && (IGNINCIR == 1)) || (defined(IGNARCDURMONI) && (IGNARCDURMONI == 1))  || (defined(IGNCL_CLCRNTMON)&&(IGNCL_CLCRNTMON==1)))
    uint32 chlMask;             /* bitmask of channel# */
#endif
#if(defined(IGNARCDURMONI) && (IGNARCDURMONI == 1))
    volatile uint32 *spmon_CTR;    /* control register of spmon ltc */
    volatile uint32 *spmon_SRSC;   /* service request state clear of spmon ltc */
    uint32 spmon_SRS_mask;         /* mask of spmon ltc in srsc */
    uint32 spmonPartner_mask;      /* mask of partner channel for spmon */
#endif
} IgnH_ChlConst_t;


/** Channel data pointers */
/* "volatile" neccessary to force 32bit accesses from CPU to PCP PRAM.
   This concerns any function prototype using IgnH_ChlConst_t or IgnH_ChlData_t in its
   argument list, too.
 */
typedef struct IgnH_ChlDataPtr_s
{
    volatile IgnH_ChlConst_t *Const_p;
    volatile IgnH_ChlData_t *Data_p;
} IgnH_ChlDataPtr_t;

/*************************************************************************************************/
/**************************** Declarations for debug instrumentation. ****************************/
/*************************************************************************************************/
/* MISRA RULE 19.11 VIOLATION:
   IGNH_DEBUG is tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
#define IGNH_DBG_BUFLEN 50

typedef struct IgnH_DbgMonitor_s
{
    volatile uint32 IgnH_DbgChlTimeMon;     /* GTC capture time stamp */
    volatile uint32 IgnH_DbgChlAngleMon;
    volatile uint32 IgnH_DbgChlIAMon;
    volatile uint32 IgnH_DbgChlIAMaxMon;
/*     volatile uint8 IgnH_DbgChlStateMon;     /\* FSM state *\/ */
/*     volatile bool IgnH_DbgChlDataOutMon;    /\* GTC data out line state *\/ */
} IgnH_DbgMonitor_t;

#define IGNH_DBG_INCR_INDEX if (IgnH_DbgBufIndex[chl] < IGNH_DBG_BUFLEN-2)  \
                            {                                               \
                                IgnH_DbgBufIndex[chl]++;                    \
                            }                                               \
                            else                                            \
                            {                                               \
                                IgnH_DbgBufIndex[chl] = 0;                  \
                            }

extern volatile uint8 IgnH_DbgBufIndex[IGNH_NO_OF_CHAN];
extern IgnH_DbgMonitor_t IgnH_DbgMonitor[IGNH_NO_OF_CHAN][IGNH_DBG_BUFLEN];


typedef struct IgnH_DbgXIAmax_s
{
    volatile uint32 IgnH_DbgChlAngleMon;
    volatile uint32 IgnH_DbgChlcompare;
    volatile uint32 IgnH_DbgChlXRn;
    volatile uint32 IgnH_DbgChlXRn1;
    volatile uint32 IgnH_DbgChlctr_n;
    volatile uint32 IgnH_DbgChlctr_n1;
    volatile uint32 IgnH_DbgChlsrs;
} IgnH_DbgXIAmax_t;

/* Increment index of ringbuffer */
#define IGNH_DBG_INCR_IDX(idx, length) if ((idx) < (length)-2) \
                                       {                   \
                                           (idx)++;          \
                                       }                   \
                                       else                \
                                       {                   \
                                           (idx) = 0;        \
                                       }

#define IGNH_DBG_XIAMAXINIT(no_chl, length) { \
   uint32 i,j; \
   for(i=0;i<(no_chl);i++) \
   { \
      IgnH_DbgIAmaxIdx[i] = 0u; \
      for(j=0;j<(length);j++) \
      { \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlAngleMon = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlcompare = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlXRn = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlXRn1 = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlctr_n = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlctr_n1 = 0ul; \
         IgnH_DbgIAmax[i][j].IgnH_DbgChlsrs = 0ul; \
      } \
   } \
}

#define IGNH_DBG_XIAMAXSAVE(chl, chl_p, value)  \
IgnH_DbgIAmax[(chl)][IgnH_DbgIAmaxIdx[(chl)]].IgnH_DbgChlAngleMon = Gpta_GetGT1(GPTA0); \
IgnH_DbgIAmax[(chl)][IgnH_DbgIAmaxIdx[(chl)]].IgnH_DbgChlcompare = (value); \
IgnH_DbgIAmax[(chl)][IgnH_DbgIAmaxIdx[(chl)]].IgnH_DbgChlctr_n = (chl_p)->GTCCTR; \
IgnH_DbgIAmax[(chl)][IgnH_DbgIAmaxIdx[(chl)]].IgnH_DbgChlctr_n1 = ((chl_p)-1)->GTCCTR; \
IgnH_DbgIAmax[(chl)][IgnH_DbgIAmaxIdx[(chl)]].IgnH_DbgChlsrs = *(IgnH_ChlCfg[(chl)].IgnH_SRS);


extern volatile uint8 IgnH_DbgIAmaxIdx[IGNH_NO_OF_CHAN];
extern IgnH_DbgXIAmax_t IgnH_DbgIAmax[IGNH_NO_OF_CHAN][IGNH_DBG_BUFLEN];
/*************************************************************************************************/
#endif /* IGNH_DEBUG */
/*************************************************************************************************/


/* externs */
extern const IgnH_ChlConst_t IgnH_ChlCfg[];
extern const IgnH_DrvConst_t IgnH_DrvCfg;
extern const sint32 IgnH_DrvLeadAngleMap[];

extern IgnH_DrvData_t IgnH_DrvData;
extern IgnH_ChlData_t IgnH_ChlData[];
extern const IgnH_ChlDataPtr_t IgnH_ChlDataPtr[];


/* Declarations of default errorhandler. */
#ifdef IGNH_DEFAULTERRHAND
extern uint8 IgnH_Error;
extern uint8 IgnH_ErrChl;
void IgnH_ErrHandler_Def(IgnH_ErrNo_t IgnH_ErrNo, uint8 chl);
#endif


/* Prototypes */
/* public interface */
CODE_SLOW (void IgnH_Proc_Ini(void));
void IgnH_DrvInit(void) __attribute__ ((alias ("IgnH_Proc_Ini"))); /* legacy code */

CODE_NORM (bit8 IgnH_ChlSetMode(uint8 chl, IgnH_DrvMode_t mode));
#if ((defined MSI) && (MSI == 1))
CODE_NORM (bit8 IgnH_ChlSetDataMSI(uint8 chl, sint32 ia, sint32 dt, sint32 fspt, sint32 fsdt, sint16 nofs, bool actvMSI));
#endif
CODE_NORM (bit8 IgnH_ChlSetData(uint8 chl, sint32 ia, sint32 dt, sint32 fspt, sint32 fsdt, sint16 nofs));

INLINE_FUNCTION void IgnH_ChlSetIAmax(uint8 chl, sint32 iamax);
INLINE_FUNCTION bool IgnH_ChlGetDataOut(uint8 chl);
INLINE_FUNCTION void IgnH_ChlStop(uint8 chl);
#ifndef IGNH_CPU
INLINE_FUNCTION void IgnH_DrvSetMinOffTime(sint32 mot);
#endif
INLINE_FUNCTION bit8 IgnH_DrvSetMode(IgnH_DrvMode_t mode);
INLINE_FUNCTION uint8 IgnH_ChlGetMode(uint8 chl);
INLINE_FUNCTION uint16 IgnH_DrvGetStartDwellCtr(void);
INLINE_FUNCTION uint16 IgnH_DrvGetIgnCtr(void);
INLINE_FUNCTION bool IgnH_ChlGetActFlag(uint8 chl);
INLINE_FUNCTION uint16 IgnH_DrvGetActFlag(void);
INLINE_FUNCTION uint32 IgnH_ChlGetState(uint8 chl);
INLINE_FUNCTION bool IgnH_ChlIsCycleActive(uint8 chl);

#if ((defined IGNINCIR) && (IGNINCIR == 1))
INLINE_FUNCTION void IgnH_DrvSetINCIR(bool on_off);
#endif

/* private functions */
INLINE_FUNCTION GPTA_GTC_t *IgnH_MakeGTCnPtr(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION GPTA_LTC_t *IgnH_MakeLTCPtr(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION void IgnH_GptaSetGTCPreInit(GPTA_GTC_t *gtc_p);
INLINE_FUNCTION void IgnH_GptaGTCSetupComp(GPTA_GTC_t *gtc_p, sint32 compare, uint32 mask) POST_ATTRIB_ALWAYS_INLINE;
INLINE_FUNCTION void IgnH_GptaGTCDisable(GPTA_GTC_t *gtc_p);
INLINE_FUNCTION bool IgnH_GptaGTCGetCEN(const GPTA_GTC_t *gtc_p);
INLINE_FUNCTION void IgnH_GptaSetRequest(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION bool IgnH_GptaGetRequest(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION void IgnH_GptaClrRequest(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION bool IgnH_ChlGetDataOutInt(const volatile IgnH_ChlConst_t *chlcfg_p);
INLINE_FUNCTION sint32 IgnH_CalcStartAngle(sint32 angle, sint32 time, sint32 timeperincr);
INLINE_FUNCTION sint32 IgnH_TabLookUp(sint32 input, const sint32 table[], const sint32 space, const uint maxidx);
INLINE_FUNCTION uint8 IgnH_ChlGetMode_p(const volatile IgnH_ChlData_t *chlData_p);
INLINE_FUNCTION uint32 IgnH_ChlGetState_p(const volatile IgnH_ChlData_t *chlData_p);
INLINE_FUNCTION bool IgnH_ChlGetTRIGABLE_p(const volatile IgnH_ChlData_t *chlData_p);
INLINE_FUNCTION bool IgnH_ChlGetTRIGABLE_TMP_p(const volatile IgnH_ChlData_t *chlData_p);
INLINE_FUNCTION bool IgnH_ChlGetIGNACT_p(const volatile IgnH_ChlData_t *chlData_p);
#if ((defined IGNINCIR) && (IGNINCIR == 1))
INLINE_FUNCTION void IgnH_ChlSetINCIR(uint8 chl, bool on_off);
#endif
/* MISRA RULE 19.11 VIOLATION:
   IGNH_DEBUG is tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
INLINE_FUNCTION uint8 IgnH_ChlGetErrNo(const uint8 chl);
#endif

/*******************************************************************************************/

/* Buffer access methods */

/**
***************************************************************************************************
 * Set ignition channel maximum ignition angle limit (latest possible ignition timing).
 *
 * Pass a new maximum ignition angle limit to the driver. The new angle limit is taken into the
 * working data buffer.
 *
 * \param chl - Channel number.
 * \param iamax - Ignition angle limit [Epm angle (GT1) quantisation, 0 ... 720deg counted from
 *                software reference mark.].
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION void IgnH_ChlSetIAmax(uint8 chl, sint32 iamax)
{
    IgnH_ChlDataPtr[chl].Data_p->IAmax = iamax;
}


/**
 **************************************************************************************************
 * Query state of a specific ignition channel.
 *
 * \param chl - channel number.
 * \return uint32 - state of channel [FSM]
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION uint32 IgnH_ChlGetState(uint8 chl)
{
    return ((uint32)(IgnH_ChlDataPtr[chl].Data_p->State));    /* force 32bit read [PRAM] */
}



/****************************************************************
process: ignh_ChlIsCycleActive
purpose: test if current is already switched on
input:   number of channel
output:  bool, false, if current is still off,
               true,  if current is on or already ignited
****************************************************************/

INLINE_FUNCTION bool IgnH_ChlIsCycleActive(uint8 chl)
{
    sint32  state_s32;

    state_s32 = IgnH_ChlDataPtr[chl].Data_p->State;    /* force 32bit read [PRAM] */

    return (!( (SrvB_GetBit((uint32)state_s32, IGNH_STATE_TRIGABLE_POS)) ||
               (SrvB_GetBit((uint32)state_s32, IGNH_STATE_TRIGABLE_TMP_POS)) ) );
}



/**
 **************************************************************************************************
 * Query state from pointer to chlData structure.
 *
 * \param chlData_p -  pointer to chlData structure.
 * \return flag status
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION uint32 IgnH_ChlGetState_p(const volatile IgnH_ChlData_t *chlData_p)
{
    return((uint32) chlData_p->State);
}


/**
 **************************************************************************************************
 * Query activity flag of a specific ignition channel.
 *
 * The activity flag is set on start dwell interrupt and reset at the end of the last follow up
 * pulse.
 *
 * \param chl - channel number.
 * \return bool - activity state of channel
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetActFlag(uint8 chl)
{
    sint32 tmp;
    tmp = IgnH_ChlDataPtr[chl].Data_p->State;    /* force 32bit read [PRAM] */
    return(SrvB_GetBit((uint32)tmp, IGNH_STATE_IGNACT_POS));
}


/**
 **************************************************************************************************
 * Query activity flags of all ignition channels.
 *
 * Build a flagword that reflects channel activity states. bit# corresponds to channel number.
 *
 * \return uint16 - activity state flagword
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION  uint16 IgnH_DrvGetActFlag(void)
{
    uint8 i;
    uint32 flag;

    flag = 0;
    for (i=0; i<IGNH_NO_OF_CHAN; i++)
    {
        if (IgnH_ChlGetActFlag(i))
        {
            flag = flag | (1u << i);
        }
    }
    return((uint16) flag);
}


/**
 **************************************************************************************************
 * Query data output state of ignition output on specified channel with respect to configured
 * inversion.
 *
 * Read "data out" flag from CTR register of global timer cell associated with the specified
 * output channel.
 *
 * \param chl - channel number.
 * \return state of data out line. If TRUE, data out is "active", if "FALSE", data out is
 *         "passive".
 * \seealso enum ...
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetDataOut(uint8 chl)
{
    /* uint32 * */GPTA_GTC_t *tmp_p;
    const IgnH_ChlConst_t *chlCfg_p;

    chlCfg_p = &IgnH_ChlCfg[chl];
    /* tmp_p = (uint32 *) IgnH_MakeGTCnPtr(chlCfg_p); */
    tmp_p = IgnH_MakeGTCnPtr(chlCfg_p);
#if (IGNH_PIN_ACTIVE == TRUE)
    return(Gpta_Get_GTC_DataOut_Adr(&(tmp_p->GTCCTR)));
#elif (IGNH_PIN_ACTIVE == FALSE)
    return(!Gpta_Get_GTC_DataOut_Adr(&(tmp_p->GTCCTR)));
#endif
}


/**
 **************************************************************************************************
 * Stop ignition output pulse on specified channel.
 *
 * Generate a fake IAMax event by triggering an immediate event on LTC. An immediate event
 * is set raising an interrupt on the SRN of the LTC und by setting the corresponding bit in srss.
 * Drives the PCP low level driver into state "IDLE" or "WAITMINOFFTIME".
 * Since the low level FSM code runs concurrently, FSM will need a certain time to respond to this
 * function, i.e. to really stop the channel.
 *
 * \param chl - channel number.
 * \seealso
 * \usedresources
 **************************************************************************************************
 */

INLINE_FUNCTION void IgnH_ChlStop(uint8 chl)
{
    volatile IgnH_ChlConst_t *chlCfg_p;
    volatile IgnH_ChlData_t *chlData_p;

    Cpu_SuspendInt();   /*all CPU interrupts are disabled to protect this function from any
                        preemption*/
    /* Load pointers to channel data structs */
    chlData_p = IgnH_ChlDataPtr[chl].Data_p;
    chlCfg_p = IgnH_ChlDataPtr[chl].Const_p;
    /* set IAM_IR flag */
    SrvB_SetBitAtmc32(chlData_p->Flags, IGNH_FLAGS_IAM_IR_POS);
    /* create interrupt on service request node */
    IgnH_GptaSetRequest(chlCfg_p);
    Cpu_ResumeInt();   /*CPU interrupts are enabled here*/
}

#ifndef IGNH_CPU
/**
 **************************************************************************************************
 * Set minimum-off-time parameter in PCP PRAM.
 *
 * \param mot - minimum-off-time in GT0 timer units
 * \seealso enum IgnH_DrvMode
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION void IgnH_DrvSetMinOffTime(sint32 mot)
{
    Pcp_Pram_s.IgnH_MinOffTime = mot;
}
#endif


/**
 **************************************************************************************************
 * Set ignition driver mode of operation for all channels simultaneously. Stop all channels if
 * mode requested is IGNH_DRV_STOPPED.
 *
 * To change mode of operation it is necessary that all channels are stopped. Thus if a change
 * of mode is requested all channels are stopped [wait for response of PCP, means FSM has gone into
 * inactive state], then new mode is set. If no response is received within a setable timeout
 * interval, exit with "!VALID" [cf. IgnH_ChlSetMode].
 *
 * \param mode - requested mode of operation from enum "IgnH_DrvMode".
 * \retval - VALID, if no timeout has occurred, !VALID, if timeout has occurred.
 * \seealso enum IgnH_DrvMode
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bit8 IgnH_DrvSetMode(IgnH_DrvMode_t mode)
{
    uint8 chl;
    bit8 retval;

    retval = 0;
    for (chl=0; chl < IGNH_NO_OF_CHAN; chl++)
    {
        retval |= IgnH_ChlSetMode(chl, mode);
    }
    return (retval);
}


/**
 **************************************************************************************************
 * Query ignition channel mode of operation.
 *
 *
 * \return Mode of operation from enum "IgnH_DrvMode".
 * \seealso enum IgnH_DrvMode.
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION uint8 IgnH_ChlGetMode(uint8 chl)
{
    volatile IgnH_ChlData_t *chlData_p;
    uint32 tmp;

    chlData_p = IgnH_ChlDataPtr[chl].Data_p;
    tmp = (uint32) SrvB_GetBitField(chlData_p->Flags, IGNH_MODE_POS, IGNH_MODE_LEN);
    return((uint8) tmp);
}


/**
 **************************************************************************************************
 * Query ignition driver mode of operation [from pointer to chlData structure].
 *
 *
 * \return Mode of operation from enum "IgnH_DrvMode".
 * \seealso enum IgnH_DrvMode.
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION uint8 IgnH_ChlGetMode_p(const volatile IgnH_ChlData_t *chlData_p)
{
    uint32 tmp;

    tmp = (uint32) SrvB_GetBitField(chlData_p->Flags, IGNH_MODE_POS, IGNH_MODE_LEN);
    return((uint8) tmp);
}


#if ((defined IGNINCIR) && (IGNINCIR == 1))
/**
 **************************************************************************************************
 * Set ignition driver increment interrupt mode for all channels simultaneously.
 *
 * \param on_off - TRUE, if to be set "on", FALSE, if to be set "off".
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION void IgnH_DrvSetINCIR(bool on_off)
{
    uint8 chl;
    for (chl=0; chl < IGNH_NO_OF_CHAN; chl++)
    {
        IgnH_ChlSetINCIR(chl, on_off);
    }
}


/**
 **************************************************************************************************
 * Set ignition driver increment interrupt mode for one channel.
 *
 * Sets or clears the bit IGNH_INC_IR_MODE on the channel data structure.
 *
 * \param chl - Channel number.
 * \param on_off - TRUE, if to be set "on", FALSE, if to be set "off".
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION void IgnH_ChlSetINCIR(uint8 chl, bool on_off)
{
    SrvB_PutBitAtmc32(IgnH_ChlDataPtr[chl].Data_p->Flags, IGNH_INC_IR_MODE_POS, on_off);
}
#endif
/* IGNINCIR) */


/**
 **************************************************************************************************
 * Query TRIGABLE flag [FSM in triggerable state] from pointer to chlData structure.
 *
 * \param chlData_p -  pointer to chlData structure.
 * \return flag status
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetTRIGABLE_p(const volatile IgnH_ChlData_t *chlData_p)
{
    uint32 tmp;
    tmp = SrvB_GetBit((uint32)chlData_p->State, IGNH_STATE_TRIGABLE_POS);
    return((bool) tmp);
}


/**
 **************************************************************************************************
 * Query TRIGABLE_TMP flag [FSM in "triggerable through temporary data buffer" state] from pointer
 * to chlData structure.
 *
 * \param chlData_p -  pointer to chlData structure.
 * \return flag status
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetTRIGABLE_TMP_p(const volatile IgnH_ChlData_t *chlData_p)
{
    uint32 tmp;
    tmp = SrvB_GetBit((uint32)chlData_p->State, IGNH_STATE_TRIGABLE_TMP_POS);
    return((bool) tmp);
}


/**
 **************************************************************************************************
 * Query IGNACT flag [from pointer to chlData structure].
 *
 * \return flag status
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetIGNACT_p(const volatile IgnH_ChlData_t *chlData_p)
{
    uint32 tmp;
    tmp = SrvB_GetBit((uint32)chlData_p->State, IGNH_STATE_IGNACT_POS);
    return((bool) tmp);
}


/**
 **************************************************************************************************
 * Query counter of "start dwell" events.
 *
 * Free running 16 bit counter.
 *
 * \return Counter value of "start dwell" events.
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
INLINE_FUNCTION uint16 IgnH_DrvGetStartDwellCtr(void)
{
    return((uint16) IGNH_STARTDWELLCTR);
}


/**
 **************************************************************************************************
 * Query counter of ignition events.
 *
 * Free running 16 bit counter.
 *
 * \return Counter value of ignition events.
 * \seealso
 * \usedresources
 ***************2***********************************************************************************
 */
INLINE_FUNCTION uint16 IgnH_DrvGetIgnCtr(void)
{
    return((uint16) IGNH_IGNCTR);
}




/**************************************************************************************************/
/* Private functions                                                                              */
/**************************************************************************************************/

/* Convert a channel index to the corresponding GTC base pointer */
INLINE_FUNCTION GPTA_GTC_t *IgnH_MakeGTCnPtr(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    return(chlcfg_p->GTCn);
}

/* Convert a channel index to the corresponding LTC base pointer */
INLINE_FUNCTION GPTA_LTC_t *IgnH_MakeLTCPtr(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    return(chlcfg_p->LTC);
}

/*
 ***************************************************************************************************
 * Disable GTC and set GTC data output line to configured passive state.
 *
 * This function resets the GTCCTR register to 0x0 and triggers an Output Immediate Action to set
 * the cell's data output line to passive pin state.
 * This is done with one single shot [GTCCTR.OSM] = 1. Additionally, cell is disabled for local
 * events [GTCCTR.EOA = 1].
 * Functional reproduction of macro "Gpta_Set_GTC_PreInit_Adr" from gpta_pub.h.
 *
 * \param gtc_p    base pointer to GTC [CTR,XR] registers of GTC to be triggered.
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
INLINE_FUNCTION void IgnH_GptaSetGTCPreInit(GPTA_GTC_t *gtc_p)
{
    Gpta_Set_GTC_PreInit_Adr(&(gtc_p->GTCCTR), IGNH_GTC_OCM01_OUT_PAS);
}


/*
 ***************************************************************************************************
 * Set up GPTA GTC (Global Timer Cell) compare event.
 *
 * Inline function.
 * Set GTC control register according to mask passed
 * (cf. \\SI9346\carpu$\extern\Info\user manuals\TC1796\tc1796_ts_supu_v12_Anm.pdf)
 * Since the "greater than" compare is triggered by write access to GTCX register the following
 * order of register accesses has to be met:
 * 1. Write new compare value to GTCXR. Avoids "equal" compare with old GTCXR contents on writing
 *    GTCCTR.
 * 2. Write GTCCTR (set GES=1).
 * 3. Write again new compare value to GTCXR to trigger the "greater" than compare action.
 * It is assumed that write access to GTCXR is NOT locked (due to CAC, "single shot"), when this
 * function is called.
 * Also, it is assumed that the GTC addressed is always disabled upon entry. This is assured,
 * because the interrupts run always in "single shot mode".
 *
 * \param gtc_p    pointer to GTCCTR register of GTC to be triggered (GPTA_GTC_t *)
 * \param compare  new compare value (sint32)
 * \param mask     GTCCTR register mask (uint32). Cf. tc1796_ts_supu_v12_Anm.pdf
 *                 A set of predefined mask symbols is defined in ignh.h.
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
#if ((defined(CDRV_GLOBAL_GTC_WO)) && (CDRV_GLOBAL_GTC_WO == 1))
INLINE_FUNCTION void IgnH_GptaGTCSetupComp(GPTA_GTC_t *gtc_p, sint32 compare, uint32 mask)
/* Workaround for >= compare on TC17xx (66,67,96 and 97) controllers.
   Function too long to be inlineable! Generates warning:
   inlining failed in call to `IgnH_GptaGTCSetupComp'
   Makes multiple instances of this function in all modules that include 'ignh.h'. Accepted,
   since temporary workaround. */
{
    sint32 diff_compare;
    uint32 tmp_xreg;

    /* Unlock XReg after single shot */
    tmp_xreg = gtc_p->GTCXR;
    gtc_p->GTCXR = (uint32) compare;
    gtc_p->GTCCTR = mask;

    if (mask & IGNH_MASK(1,GPTA_GTCCTR_MOD_POS))
    {   /* hooked on GT1 */
        /* 13 instr. from "suspend" to "resume" (counted from debugger dissassembly).
           87ns - fsys=150MHz one instr. per clock.
           173ns - one instr. per two clocks
           Measured runtime ca. > 2.2us.
        */
        /* Detect if event angle is past ... and do a pseudo immediate compare. */
        Cpu_SuspendInt();
        diff_compare = compare - (sint32) EpmHCrS_GetAngleCnt;
        /* Shift 24 bit subtraction sign bit to 32bit sign bit and test <= 0 */
        if ((sint32)((uint32)diff_compare << 8) <= 0)
        {
            uint32 x_value;
            /* Angle counter GT1 on GPTA0/1 run synchronously by Epm initiialisation
               (max. deviation = 1tick), so we can always refer to GPTA0. */
            x_value = EpmHCrS_GetAngleCnt + 10;  /* immediate angle error: 10*6/273 = 0.22° */
            gtc_p->GTCXR = x_value;     /* !!! value 30 depends on speed of execution.
                                           Check before change!!! At PLL burst 20MHz <==> 50ns per
                                           GT1 tick. Measured runtime = ca. 300ns (3 instr.) */
            tmp_xreg = gtc_p->GTCXR;    /* force flush of FPI queue to assure that the XReg is
                                           really written now [cf. IFX AN 32009]. */
        }
        Cpu_ResumeInt();
    }
    else
    {   /* hooked on GT0 */
        /* Detect if event time is past ... and do a pseudo immediate compare. */
        Cpu_SuspendInt();
        diff_compare = compare - (sint32) Gpta_GetGT0(GPTA0);
        /* Shift 24 bit subtraction sign bit to 32bit sign bit and test <= 0 */
        if ((sint32)((uint32)diff_compare << 8) <= 0)
        {
            uint32 x_value;
            /* GPTA0, GPTA1 GT0 are started one immediately after the other so they
               run [nearly] synchronously and we can refer to GPTA0. */
            x_value = Gpta_GetGT0(GPTA0) + 3;
            gtc_p->GTCXR = x_value;     /* !!! value 3 depends on speed of execution. Check before
                                           change!!! 1 tick = 400ns, measured runtime = ca. 300ns.
                                           If this value is reduced, pulses will be missing on small
                                           compare delta times. */
            tmp_xreg = gtc_p->GTCXR;    /* force flush of FPI queue to assure that the XReg is
                                           really written now [cf. IFX AN 32009]. */
        }
        Cpu_ResumeInt();
    }
}
#else
INLINE_FUNCTION void IgnH_GptaGTCSetupComp(GPTA_GTC_t *gtc_p, sint32 compare, uint32 mask)
{
    uint32 tmp_xreg;

    /* Unlock XReg after single shot */
    tmp_xreg = gtc_p->GTCXR;

    gtc_p->GTCXR = compare;
    gtc_p->GTCCTR = mask;
    gtc_p->GTCXR = compare;
}
#endif


/* Get GTC "cell enable" [CEN] state */
INLINE_FUNCTION bool IgnH_GptaGTCGetCEN(const GPTA_GTC_t *gtc_p)
{
    return(SrvB_GetBit(gtc_p->GTCCTR, GPTA_GTCCTR_CEN_POS));
}


/* Disable GTC by setting it to capture mode with no edge sensitivity */
INLINE_FUNCTION void IgnH_GptaGTCDisable(GPTA_GTC_t *gtc_p)
{
    gtc_p->GTCCTR = IGNH_GTCCTR_GT0_SETPAS_IMM_DISABLE;
}


/* Set service request bit in SRC corresponding to "chl". Trigger a software reset. */
INLINE_FUNCTION void IgnH_GptaSetRequest(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    Cpu_SetIntReq(*(chlcfg_p->SRC));
}


/* Get service request bit in SRC corresponding to "chl". */
INLINE_FUNCTION bool IgnH_GptaGetRequest(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    return(Cpu_IsIntPending(*(chlcfg_p->SRC)));
}


/* Clear service request bit in SRC corresponding to "chl". */
INLINE_FUNCTION void IgnH_GptaClrRequest(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    Cpu_ClrIntReq(*(chlcfg_p->SRC));
}




/*
 **************************************************************************************************
 * Query data output state of ignition output on specified channel with respect to configured
 * inversion.
 *
 * Read "data out" flag from CTR register of global timer cell associated with the specified
 * output channel.
 *
 * \param chlcfg_p - pointer to channel configuration data struct.
 * \return state of data out line. If TRUE, data out is "active", if "FALSE", data out is
 *         "passive".
 *
 **************************************************************************************************
 */
INLINE_FUNCTION bool IgnH_ChlGetDataOutInt(const volatile IgnH_ChlConst_t *chlcfg_p)
{
    GPTA_GTC_t *tmp_p;
    tmp_p = IgnH_MakeGTCnPtr(chlcfg_p);

#if (IGNH_PIN_ACTIVE == TRUE)
    return(Gpta_Get_GTC_DataOut_Adr(&(tmp_p->GTCCTR)));
#elif (IGNH_PIN_ACTIVE == FALSE)
    return(!Gpta_Get_GTC_DataOut_Adr(&(tmp_p->GTCCTR)));
#endif
}


/*
 ***************************************************************************************************
 * Calculate expected start angle of a pulse of given end angle with a given lead time.
 *
 * Expected start angle is determined on assumption of constant angular speed.
 * StartAngle = EndAngle - dwellangle with dwellangle = IncrAngle/factor * LeadTime.
 * factor = time per angular sample increment (IncrAngle).
 * Dwell angle is limited to maximum of 720°CA (EPM_PHIMAX_SY in GT1 ticks).
 * [Result is automatically limited to span 24bits in GT1 units, because the relevant XR
 * is 24 bits wide.]
 *
 * \param angle   End angle in units of GT1 angle ticks.
 * \param time   Lead time in units of GT0 timer ticks.
 * \param timeperincr   tooth time in GT0 timer ticks.
 * \return Start angle in units of GT1 angle ticks.
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
INLINE_FUNCTION sint32 IgnH_CalcStartAngle(sint32 angle, sint32 time, sint32 timeperincr)
{
    sint32 dwellangle;
    sint32 retval;

    dwellangle = (sint32) ((IGNH_INCANGLE*time)/timeperincr);
    /* Dwell angle limitation to 720°CA */
    if (dwellangle < EPM_PHIMAX_SY)
    {
        retval = angle - dwellangle;
    }
    else
    {
        retval = angle - EPM_PHIMAX_SY;
    }
    return(retval);
}


/*
 ***************************************************************************************************
 * Table look up to determine lead angle value from IgnH_DrvLeadAngleMap.
 *
 * Return table value. Input range is divided into bins: [0, 1*space] --> table[0],
 * ]space, 2*space] --> table [1] etc.
 * Small input values are assumed to be most likely.
 * Index of input bin is searched such that input values most probable are handled with
 * as least number of loops as possible.
 *
 * \param input
 * \param table[] - start addr. of table
 * \param space - space between adjacent table values in units of input bits. Width of input bins.
 * \param maxidx - number of index values.
 * \return table value connected with input.
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */
INLINE_FUNCTION sint32 IgnH_TabLookUp(sint32 input, const sint32 table[], const sint32 space, const uint maxidx)
{
    uint i;

    /* Small input values are assumed to be most likely.
       Search index of input bin such that input values most probable are handled with
       the least number of loops. */
    for(i = 0; i < (maxidx-1); i++)
    {
        input = input - space;
        if (input <= 0)
        {
            break;  /* Generates MISRA rule 58 warning: Accepted [same algorithm as PCP-Asm] */
        }
    }

    return(table[i]);
}


/* MISRA RULE 19.11 VIOLATION:
   IGNH_DEBUG is tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
/*
 **************************************************************************************************
 * Query error number of specified channel.
 *
 * Available on chl=0. For chl != 0, only available, if IGNH_NO_OF_CHAN <= 4!
 *
 * \param chl - channel no.
 * \return error number.
 *
 **************************************************************************************************
 */
INLINE_FUNCTION uint8 IgnH_ChlGetErrNo(const uint8 chl)
{
    uint32 errno;

    switch(chl)
    {
      case 0:
          errno = Pcp_Pram_s.IgnH0_ErrNo;
          break;
#if (IGNH_NO_OF_CHAN > 1)
      case 1:
          errno = Pcp_Pram_s.IgnH1_ErrNo;
          break;
#if (IGNH_NO_OF_CHAN > 2)
      case 2:
          errno = Pcp_Pram_s.IgnH2_ErrNo;
          break;
#if (IGNH_NO_OF_CHAN > 3)
      case 3:
          errno = Pcp_Pram_s.IgnH3_ErrNo;
          break;
#endif
#endif
#endif
      default:
          errno = 0xffu;
          break;
    }
    return ((uint8)errno);
}
#endif

#endif
/* _IGNH_H */
