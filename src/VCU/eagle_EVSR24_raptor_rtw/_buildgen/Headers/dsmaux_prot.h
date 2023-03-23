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
 * $Filename__:dsmaux_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JHS4KOR$
 * $Date______:04.02.2013$
 * $Class_____:SWHDR$
 * $Name______:dsmaux_prot$
 * $Variant___:2.22.0$
 * $Revision__:2$
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
 * 2.22.0; 2     04.02.2013 JHS4KOR
 *   Warm up cycle evaluation extension.
 * 
 * 2.22.0; 1     25.01.2013 JHS4KOR
 *   Warm up cycle evaluation extension.
 * 
 * 2.22.0; 0     16.01.2013 JHS4KOR
 *   Warm up cycle evaluation extension.
 * 
 * 2.19.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.18.0; 0     15.06.2012 MMO2FE
 *   Removal of CV Features depending on configuration: 
 *   DSM_HDOBD_SY, DSM_MDOBD_SY, DFES_EOBDCV_SY.
 *   Hexneutral for Non CV configuration.
 * 
 * 2.16.0; 0     19.03.2012 RMP2SI
 *   DSM compiler independency task.
 * 
 * 2.14.0; 0     07.10.2011 PKA2SI
 *   support AUTOSAR InitMonitorForEvent callbacks
 * 
 * 2.7.0; 0     19.03.2010 PKA2SI
 *   suppress temporary FID releases caused by NotTested inhibit limits
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmaux_prot.h
 *      Version: \main\18
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DSMAUX_PROT_H
#define _DSMAUX_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - Auxiliary functions (Trigger interface, ... )
 *              Definition of private interfaces and prototypes
 *
 *
 * \scope           INT
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define DSM_REINIT_IDLE         0u  /* IDLE means ReInit is inactive */
#define DSM_REINIT_DFC_PART1A   1u
#define DSM_REINIT_DFC_PART1B   2u
#define DSM_REINIT_CLR_ORDERS   3u
#define DSM_REINIT_MERGE_ORDERS 4u
#define DSM_REINIT_DFES_PART1   5u
#define DSM_REINIT_DSCHED       6u
#define DSM_REINIT_DSMAUX       7u
#define DSM_REINIT_DSMDUR       8u
#define DSM_REINIT_DSMRDY       9u
#define DSM_REINIT_DFC_PART2    10u
#define DSM_REINIT_DINH         11u
#define DSM_REINIT_DSQ          12u
#define DSM_REINIT_DIUMPR       13u
#define DSM_REINIT_DFES_PART2   14u
#define DSM_REINIT_FINISHED     15u   /* must be highest value of all reinit states */


/* states for DSM_stPostDrive
   During the complete postdrive the state should be different from DSM_PSTDRV_IDLE.
   Some functions like ReInit or DIUMPR checks for DSM_stPostDrive != DSM_PSTDRV_IDLE to
   detect start of postdrive */
#define DSM_PSTDRV_IDLE         0u  /* IDLE means PostDrive is inactive */
#define DSM_PSTDRV_BGN          1u
#define DSM_PSTDRV_DIUMPR       2u
#define DSM_PSTDRV_CTDEL        3u
#define DSM_PSTDRV_END          4u
#define DSM_PSTDRV_SEQ          5u
#define DSM_PSTDRV_AUX          6u
#define DSM_PSTDRV_FINISHED     7u
#define DSM_PSTDRV_BLOCKED      8u
#define DSM_PSTDRV_MUL_BGN      9u
#define DSM_PSTDRV_MUL_END     10u
#define DSM_PSTDRV_DSMRDY      11u

/* calibration value for DSMAUX_xClearTrg_C to clear and initialize error memory */
#define DSMAUX_CLR_INI_TRG     0xFF

/* DCy complete or not complete selector for DSMAUX Ini */
#define DSMAUX_INIT            0x00
#define DSMAUX_INITDC          0x01

/* DCy lifecycle states  */
#define DSMAUX_DCY_COMPLETE    0x00  /* DCy with Engine Speed qualification and T15 Off detected */
#define DSMAUX_DCY_NEW         0x01  /* DCy without Engine speed qualification yet */
#define DSMAUX_DCY_QUALIFIED   0x02  /* DCy with Engine Speed qualification */


/* maximal number of InitMonitorForEvent callback functions triggered
 * in one 10ms step of ReInit */
#define DSM_INIT_MONITORS_MAX_CALLBACKS_PER_STEP    (16u)

/* set AUTOSAR #defines if not present */
#ifndef DEM_INIT_MONITOR_CLEAR
#define DEM_INIT_MONITOR_CLEAR (0x01)
#endif
#ifndef DEM_INIT_MONITOR_RESTART
#define DEM_INIT_MONITOR_RESTART (0x02)
#endif


/*
  DSMAUX_SwtWucVrnt_C
  Calibration switch to choose between different variants of warm up cycle.
  This calibration parameter is defined only if DSM_WUCDET_SY = 255
 
  Physical Values               Coded Values                internal defines
  ==============================================================================================
  Vrnt_WUCDET_0                      0                      DSMAUX_WUC_VRNT_0
  Vrnt_WUCDET_1                      1                      DSMAUX_WUC_VRNT_1
  Vrnt_WUCDET_2                      2                      DSMAUX_WUC_VRNT_2
  Vrnt_WUCDET_eWUC                   3                      DSMAUX_WUC_VRNT_EWUC
  
*/

#define DSMAUX_WUC_VRNT_0       0x00
#define DSMAUX_WUC_VRNT_1       0x01
#define DSMAUX_WUC_VRNT_2       0x02
#define DSMAUX_WUC_VRNT_EWUC    0x03

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern sint16 DSMAUX_tClntStrt;       /* Start coolant temperature                                */
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8  DSMAUX_stClearDemand;   /* buffer for last processed trigger status                 */
extern uint8  DSM_stPostDrive;
extern uint8  DSM_stReInit;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern bool  DSMAUX_stRefTemp;        /* status of reference temperature                          */
extern bool  DSMAUX_stStrtEnd;        /* Start end status                                         */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMAUX_Init(uint stInit);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMAUX_TCSort(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMAUX_TCSortInit(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

#endif
