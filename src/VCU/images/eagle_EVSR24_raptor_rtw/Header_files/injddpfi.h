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
 * $Filename__:injddpfi.h$
 *
 * $Author____:HIA3SI$
 *
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :CDCOMP
 *                  Object name :INJDDPFI
 *                  Variant :2.50
 *                  Revision :1$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GEHAAF$
 * $Date______:06.06.2011$
 * $Class_____:SWHDR$
 * $Name______:injddpfi$
 * $Variant___:2.15.0$
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
 * 2.15.0; 0     06.06.2011 GEHAAF
 *    Air Bleeding verified with GetActrVal
 *   
 *   
 * 
 * 2.12.0; 0     21.03.2011 GEHAAF
 *    Dual gasoline injection: direct and port fuel injection,
 *    matched with 4.2.1,  Development for Bi-Fuel CNG project
 * 
 * 2.11.0; 0     16.03.2011 VEH1KOR
 *   CRQ 342359 : Perl Script for Injection Package
 * 
 * 2.8.0; 0     14.10.2009 HIA3SI
 *   Ported from Nestor
 *   CDCOMP : INJDDPFI 2.80; 0
 *   
 *   CRQ 275122
 *   Unterstuetzung von Start-Voreinspritzungen
 * 
 * 2.5.0; 0     22.10.2008 HIA3SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :injddpfi
 *        Variant :2.30
 *        Revision :1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
/*******************************************************************
 *
 *    DESCRIPTION:
 *
 *    AUTHOR:
 *
 *    HISTORY:
 *
 *******************************************************************/

/** include files **/

/** local definitions **/

/** default settings **/

/** external functions **/

/** external data **/

/** internal functions **/

/** public data **/

/** private data **/

/** public functions **/

/** private functions **/

#ifndef     INJDDPFI_H_ModId
#define     INJDDPFI_H_ModId                /* module identifier */


/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
/*{system_constant_check...}*/

/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/


/* Include Headerfiles */
/* =================== */

/* #include PROJECT_H */
#include <injhpfi.h>

#include <cdrv_memlay.h>         /* cdrv memory location                 */

#include "injddpfi_auto_conf.h"


/* Define-Constants                                                     */
/* ================                                                     */

#define     injddpfi_MonNumInj      InjHPfi_Get_Drv_MiDiCnt

#define     STVE_NOT_STARTED      0
#define     STVE_STARTED          1
#define     STVE_FINISHED         2
#define     STVE_INTERRUPTED    255

#ifdef INJVLV_ONOFF_ATS_SC                                 /* OnOff, Airbleeding Port Fuel Injection */
  #define ATS_AIR_BLEEDING   1
  #define ATS_CUTOFF         2
#endif


/**
 **************************************************************************************************
 * Calling InjHPfi_Get_Drv_MiDiCnt() or injddpfi_MonNumInj() retrieves the number of main injection
 * pulses and direct injection pulses (time based position) since the last InjHPfi_Init() or
 * InjHPfi_StopStart().
 * The main injection pulse is counted at the time of the begin edge. The direct pulse is counted
 * at the time where the begin time is set up on GTC. Since the counter is not limited overflow
 * occurs at 2^32.
 **************************************************************************************************
 */



/*{constant_definition...}*/

/* Return Values of PFItest, GDItest and ZUEtest */
typedef enum
{
    XXX_TEST_OK     = 0,
    N_ENG_GT_0      = 1,
    MORE_THAN_1_CYL = 2,
    ALREADY_RUNNING = 3
}  pfitest_status_t;



 #if(SY_GDIPFI > 0)
   #define NUM_ELEMENTS_PERCYL     2u

   #define TDC_ARRAY_INDEX_0       0u
   #define TDC_ARRAY_INDEX_1       1u
 #endif



/* Macros Local To This Module                                          */
/* ===========================                                          */

/*{macro_definition...}*/

/* Exported RAM-Definitions                                             */
/* ========================                                             */

/* Definition of variables to be exported to other modules but not      */
/* relevant for application                                             */

/*{global_ram_definition...}*/

/* Imported RAM-Definitions                                             */
/* ========================                                             */

/* Declaration of variables to be imported from other modules but not   */
/* relevant for application                                             */

/*{extern_ram_definition...}*/
 extern uint16 InjDDPfi_injEnadCylMsk;
 extern uint16 InjDDPfi_injTrigCylMsk;

/* Global Prototypes                                                    */
/* =================                                                    */

/* Declarations (Prototypes) of functions                               */

 CODE_SLOW(uint8            injddpfi_getFirstCyl(void));
 CODE_SLOW(void             injddpfi_setDI(uint32 ti, uint16 tvub, uint16 zyl));
 CODE_SLOW(pfitest_status_t PFItest (uint16 zyl, uint32 Dauer, uint32 Periode, uint16 Anzahl));
 CODE_SLOW(void             stopPFItest(void));
#if (SY_CNG > 0)
 CODE_SLOW(void             injddpfi_clrInjCtState(uint8 cyl));
 CODE_SLOW(uint8            injddpfi_getInjCtState(void));
 CODE_SLOW(uint8            injddpfi_getInjBegState(void));
 CODE_SLOW(void             injddpfi_clrInjBegState(uint8 cyl));
#endif

#if (SY_IPRCRSH > 0)
  CODE_SLOW(void             injvlvpfi_CrashInj(uint8 ti));
 #define   injvlvpfi_restart stopPFItest
#endif




#if (SY_GDIPFI > 0)
 CODE_NORM(sint32           injddpfi_getphiTdcLch(uint8 cyl,uint8 index));
 CODE_NORM(void             injddpfi_updtphiTdcLch(uint8 cyl,sint32 phitdc, uint8 index));
 CODE_NORM(void             injddpfi_resetphiTdcLch(uint8 cyl,uint8 index));

 CODE_SLOW(void             injddpfi_calcAnzti(void));

 CODE_SLOW(void             injddpfi_CalcFrstInjCyl(uint8 cyl));
 CODE_SLOW(uint8            injddpfi_getFrstInjCyl(void));
#endif





/*{global_function_prototype...}*/

/* Inline Functions                                                     */
/* ================                                                     */

/* Declarations of inline functions                                     */

static __inline__ uint16 InjDDPfi_Get_injTrigCylMsk(void);
static __inline__ uint16 InjDDPfi_Get_injEnadCylMsk(void);


/**
**************************************************************************************************
 * Calling InjDDPfi_Get_injTrigCylMsk() retrieves the cylinders for which an injection or a cutoff
 * is triggered in this synchro or at the beginning of the next synchro.
 * The return value is a flagbyte with the marked cylinders.
**************************************************************************************************
 */
static __inline__ uint16 InjDDPfi_Get_injTrigCylMsk(void)
{
    return InjDDPfi_injTrigCylMsk;
}


/**
**************************************************************************************************
 * Calling InjDDPfi_Get_injEnadCylMsk() retrieves the cylinders for which an injection
 * is triggered in this synchro or at the beginning of the next synchro.
 * The return value is a flagbyte with the marked cylinders.
**************************************************************************************************
 */
static __inline__ uint16 InjDDPfi_Get_injEnadCylMsk(void)
{
    return InjDDPfi_injEnadCylMsk;
}



/*{inline_function...}*/

#endif
