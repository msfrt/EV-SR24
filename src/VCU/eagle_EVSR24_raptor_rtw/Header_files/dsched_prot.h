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
 * $Filename$
 *
 * $Author$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User$
 * $Date______:29.03.2012$
 * $Class_____:SWHDR$
 * $Name$
 * $Variant___:1.6.0$
 * $Revision$
 * $Typ$
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
 * 1.6.0; 0     29.03.2012 GTN2SI
 *   Issue: RQONE00026843 - Reset of DSCHED-Lock Bit upon HD 4h DCY
 * 
 * 1.5.0; 0     19.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 1.4.0; 0     01.02.2011 ZUZ2SI
 *   RCMS00779107: extended operation mode condition (32 bits) for FId 
 *   permission
 * 
 * 1.0.0_1; 0     11.12.2008 PKA2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DSCHED_PROT_H
#define _DSCHED_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *                     DSCHED
 *
 * scope               INT
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Define-Constants                                                                               */
/* ================                                                                               */

#define DSCHED_WTT_SET          TRUE            /* WTT action set state                           */
#define DSCHED_RESET            0               /* Reset state of sched_flags                     */
#define DSCHED_FID_RESET        (DSCHED_PHY_MSK | DSCHED_ACT_MSK) /* RST mask of FId input state  */

#define DSCHED_ZOL_MSK          0x02           /*  Mask for schedStat.zol = zpf of last/ raw sched*/
#define DSCHED_TIN_MSK          0x01           /*  Mask for schedStat.tin = temprary inhibit      */
#define DSCHED_MRK_MSK          0x8000u         /*  Mask for dynPrio.mrk                           */
#define DSCHED_SWF_MSK          0x4000u        /*  Mask for dynPrio.swf                           */
#define DSCHED_WND_MSK          0x2000u        /*  Mask for dynPrio.win                           */
#define DSCHED_SWF_WND_MSK      0x6000u        /*  Mask for dynPrio.win and dynPrio.swf           */



#define DSM_WIND_RES            2              /*  Time factor for DCY time count                 */

#define DFC_NO_DFC              0              /*  None dfc code ==> move to dfc.h                */


#if (CMBTYP_SY == CMBTYP_DS)
#define FID_CAN_RUN(fid)    (DSCHED_getReady(fid) && (!DSCHED_getInhibInt(fid))     \
                             && (!DSCHED_getSleep(fid))  \
                             && (   ((uint)DSCHED_GetDrvModeMsk(fid) == 0)          \
                                 || (((uint)DSCHED_GetDrvModeMsk(fid)                   \
                                       & (uint)DSCHED_stDrvMode) > 0)))
#else
#define FID_CAN_RUN(fid)    (DSCHED_getReady(fid) && (!DSCHED_getInhibInt(fid)) \
                             && (!DSCHED_getSleep(fid)))
#endif





#define DSCHED_NO_MODE          0     /* no Operation mode possible - used to switch off scheduler*/


/* GDI-Mode specific conventions */
#if (DSCHED_COEOM_SY != 0)
    #define DSMBDETRANS         0x20            /* extra GDI mode: "in transition"  */
    /* Minimum value of priority for fid to be evaluated */
    #define DSCHED_MIN_PRIO     (DSCHED_GetOfsPrioOpMode())

    #define DO_START_FID(fid)   DSCHED_setSched (fid)       /* to use same code... */
    #define DO_STOP_FID(fid)    DSCHED_resetSched (fid)
#else
    #define DSCHED_MIN_PRIO     0     /* Minimum value of priority for fid to be evaluated */
    #define DO_START_FID(fid)   DSCHED_setPermission (fid)
    #define DO_STOP_FID(fid)    DSCHED_resetPermission (fid)
#endif



/* List of exclusion causes. This list must be mirrored in the verbal conversion table for
   exclusion causes which contains furthermore the scheduled FId */
#define DSCHED_NO_RUN            0xFF          /* fid can't run due to internal reasons (py, inh) */
#define DSCHED_MODE_IMPOSSIBLE   0xFE          /* fid not runable according to operation mode     */
#define DSCHED_NO_PRIO           0xFD          /* fid can't run - priority too low                */






#if (DSCHED_WTT_SY != 0)
/* access to WTT calibration table */
#define DSCHED_WTT_FID_MSK            0x7FFF
#define DSCHED_WTT_ACT_POS            15

#define DSCHED_GetWTTTi(idx)         (DSCHED_tiWTT_CA[(idx)])
#define DSCHED_GetWTTFId(idx)        ((uint)((DSCHED_xWTTFId_CA[(idx)]) &  DSCHED_WTT_FID_MSK))
#define DSCHED_GetWTTMode(idx)       ((uint) ((DSCHED_xWTTFId_CA[(idx)]) >> DSCHED_WTT_ACT_POS))
#endif


#define DSCHED_MAXRATE_LIMIT    8191 /* = 0x1FFF,                                                    */
                                     /*   limiting calculated part of DSCHED_DynPrio.FId_xx to 13 bit */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

typedef     uint16      RprioType;                  /*  Scheduler Ramp priority type              */
typedef     sint16      DprioType;                  /*  Scheduler Dynamic priority type           */



/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/* global RAM values */
//#if (DSCHED_WTT_SY != 0)
__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern uint16 DSCHED_tiWTT;                    /* time counter for windows time table             */
extern uint16 DSCHED_idxWTTAct;                /* actual working index of windows time table      */
//#endif
extern uint16 DSCHED_stDrvMode;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END

__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern uint32   DSCHED_stOpMode;                 /* copy of the operation set mode                  */
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END

/* RAM arrays with one element per scheduled FId */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16  DSCHED_RmpPrio[];
//#if (DSCHED_RATECALC_SY != 0)
extern uint16  DSCHED_TiActv[];
extern uint16  DSCHED_TiPas[];
//#endif
extern sint16  DSCHED_DynPrio[];
extern uint16  DSCHED_WhyExcl[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8   DSCHED_PhysPrio[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

/* constand values */
__PRAGMA_USE__dsm__1_5ms__constant__x8__START
extern const uint8 DSCHED_numWTT;
extern const uint8 DSCHED_numFktTst;
__PRAGMA_USE__dsm__1_5ms__constant__x8__END

/* Calibration parameters */

/*
 ***************************************************************************************************
 * prototype definitions
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void    DSCHED_TstReq(void);

void    DSCHED_Proc( void);
void    DSCHED_Proc1( void);
void    DSCHED_Proc2( void);
void    DSCHED_20msProc ( void);
void    DSCHED_Init ( void);
void    DSCHED_FIdInRst(void);

void    DSCHED_UpdDynPrio(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END
#if (DSCHED_COEOM_SY != 0 || CMBTYP_SY == CMBTYP_DS)
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void    DSCHED_OpModeFlt ( void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END
#endif


/*
 ***************************************************************************************************
 * ==> Scheduler interfaces
 ***************************************************************************************************
 */

/**
 **************************************************************************************************
 * This method will cancel the sleep bit in the scheduler state for the given FID.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetSleep)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetSleep(uint fid);
LOCAL_INLINE void DSCHED_resetSleep(uint fid)
#else
static void DSCHED_resetSleep(uint fid);
static void DSCHED_resetSleep(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit operation */
    Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
    DSCHED_St [fid] = ((DSCHED_St [fid]) & ~(DSCHED_StType)DSCHED_LCK_MSK);
    Cpu_ResumeInt(); /* end atomic (interrupt lock) */
}

#endif /* _DSCHED_PROT_H */


