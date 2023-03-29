/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/
#ifndef _PMD_AUTO_CONF_H
#define _PMD_AUTO_CONF_H

/*include files of the used chip handler */

#include "bsp742.h" 
#include "l9959.h" 
#include "cj950.h" 


/* additional includes, depending if a module exists in make */


/* Peripheral Monitoring Includes */
#include "cj135.h"
#include "cj950.h"
#include "cy327.h"
#include "l9959.h"



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*------------------------------------------------------------------------------------------------*/
/* Defines for  Pmd_SignalInfo_cs[]                                                               */
/*------------------------------------------------------------------------------------------------*/
#define PMD_MAX_SIGNAL_INDEX  45

/*------------------------------------------------------------------------------------------------*/
/* Defines for  Pmd_Prio[]                                                                        */
/*------------------------------------------------------------------------------------------------*/
#define PMD_INDEX_BSP742      0
#define PMD_INDEX_L9959       1
#define PMD_INDEX_CJ950       4

#define PMD_INDEX_MAX         6
#define PMD_INDEX_CNT         7



#define DPS_EV8E_PMD 1
#define DPS_ECUK012_PMD 2
#define DPS_ECUK069_PMD 3
#define DPS_ECUA002_PMD 4
#define DPS_ECUK055_PMD 5
#define DPS_EV4E_PMD 6
#define DPS_ECUK021_PMD 7
#define DPS_ECUK059_PMD 8
#define DPS_UEGOHeatrPsS1B1_PMD 9
#define DPS_EV7E_PMD 10
#define DPS_ECUA004_PMD 11
#define DPS_ECUA094_PMD 12
#define DPS_ECUK036_PMD 13
#define DPS_ECUK056_PMD 14
#define DPS_ECUA024_PMD 15
#define DPS_ECUK039_PMD 16
#define DPS_ECUK019_PMD 17
#define DPS_EV3E_PMD 18
#define DPS_ECUA011_PMD 19
#define DPS_ECUK072_PMD 20
#define DPS_ECUK089_PMD 21
#define DPS_ECUK073_PMD 22
#define DPS_ECUK070_PMD 23
#define DPS_EV2E_PMD 24
#define DPS_ECUA033_PMD 25
#define DPS_ECUK037_PMD 26
#define DPS_ECUA093_PMD 27
#define DPS_ECUA054_PMD 28
#define DPS_ECUA023_PMD 29
#define DPS_ECUA010_PMD 30
#define DPS_ECUA009_PMD 31
#define DPS_UEGOHeatrPsS1B2_PMD 32
#define DPS_ECUK057_PMD 33
#define DPS_ECUK071_PMD 34
#define DPS_ECUK038_PMD 35
#define DPS_ECUK088_PMD 36
#define DPS_ECUK020_PMD 37
#define DPS_ECUK054_PMD 38
#define DPS_EV6E_PMD 39
#define DPS_EV5E_PMD 40
#define DPS_ECUA046_PMD 41
#define DPS_ECUA031_PMD 42
#define DPS_ECUA045_PMD 43
#define DPS_ECUK084_PMD 44
#define DPS_EV1E_PMD 45


/*------------------------------------------------------------------------------------------------*/
/* some defines for compatibility reason                                                          */
/*------------------------------------------------------------------------------------------------*/
#ifndef PMD_INDEX_CJ945
   #define PMD_INDEX_CJ945       0
#endif
#ifndef PMD_INDEX_TLE6232
   #define PMD_INDEX_TLE6232     0
#endif
#ifndef PMD_INDEX_CY100
   #define PMD_INDEX_CY100       0
#endif
#ifndef PMD_INDEX_BSP742
   #define PMD_INDEX_BSP742      0
#endif
#ifndef PMD_INDEX_R2S2
   #define PMD_INDEX_R2S2        0
#endif
#ifndef PMD_INDEX_CJ950
   #define PMD_INDEX_CJ950        0
#endif
/*------------------------------------------------------------------------------------------------*/


/*
 ***************************************************************************************************
 * Signal specific defines
 *
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Peripheral Monitioring Related definitions
 ***************************************************************************************************
 */

                #define PMD_PERIMON_ACTIVE 

                #define PMD_PM_INI_ERROR_SET 0x80000000u
  
/* _PMD_AUTO_CONF_H */
#endif


