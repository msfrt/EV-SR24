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
 * $Filename__:dps_tmp.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MCH1FE$
 * $Date______:28.06.2012$
 * $Class_____:SWHDR$
 * $Name______:dps_tmp$
 * $Variant___:1.0.2$
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
 * 1.0.2; 0     28.06.2012 MCH1FE
 *   CRQ415030: Initiating an open load error leads to SCB error entry 
 *   (DFC_KPEmax) which is 
 *   wrong
 * 
 * 1.0.1; 0     11.01.2012 CRA1KOR
 *   MDG1 compatible.
 * 
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: DPS_TMP
 *      Variant: 2.20
 *      Revision: 0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/



#ifndef _DPS_TEMPLATE_
#define _DPS_TEMPLATE_

#include "pmd.h"
#include "dekon.h"


/* error bit positions for standard diagnostic of endstages for
   cy310/5; cj940/5 and tle6232 */

#define PMD_BP_KSUB                 0
#define PMD_BP_KSUB_UT_UL           1
#define PMD_BP_KSUB_UT              2
#define PMD_BP_LA_UT                3
#define PMD_BP_LA                   4
#define PMD_BP_KSM                  5
#define PMD_BP_COM_ERR              6
#define PMD_BP_SPI_ERR              7
#define PMD_BP_TIMP_REQ             12
#define PMD_BP_TIMP_RUN             13
#define PMD_BP_TIMP_END             14


/* rename functions */
#define Pm_TstImp                    Pmd_TstImp
#define Pm_GetErr                    Pmd_GetErr

/*Wl-pmd*/
#define Pm_ClrErr       Pmd_ClearErr
#define Pm_ClrErrTrace  Pmd_ClrErrTrace


typedef struct
{
    uint16 error;
    uint16 errStat;
    uint8  WaitTime;
    uint8  tmpState;
}
DPS_State;

/******************************************************/
/******* Function declarations ************************/
/******************************************************/
SfpType DPS_StdDiag(DPS_State* p, SfpType sfpStatus, uint16 numSignal);
SfpType DPS_Recovery(SfpType sfpStatus, uint16 errStat_w);
SfpType DPS_Verify(SfpType sfpStatus, uint16 error_w, uint16 errStat_w);


#ifndef DPS_TEMPLATE_ModId


/******************************************************/
/*******      Module Internal Definitions       *******/
/******************************************************/

#ifndef DPS_NOLOCAL_STATES
    /* Install the local state variables */
    #define DPS_LOCAL_STATES
#endif /* DPS_NOLOCAL_STATES */

#ifndef DECJ_ModId    /* DECJ function doesn't need a local DPS_State structure for its module */
    #ifndef DPS_COUNT
        /* No index address mode required */

        #ifdef DPS_INDEX_0
            /* Defined in KGS-File for powerstage, see DPSIndex */
            #define DPS_INDEX DPS_INDEX_0
        #endif

        #ifdef DPS_INDEX
            /* Alternative definition also possible in dekon.h.
             * Install the local (static) Dps functions */
            #define DPS_LOCAL_FUNCTIONS
        #endif

        #ifdef DPS_LOCAL_STATES
            /* Must be static !!! */
            static DPS_State dpsState;
            /* Must be static !!! */
        #endif

    #elif (DPS_COUNT > 8)
        #error "DPS_COUNT > 8 not supported"
    #elif (DPS_COUNT == 0)
        #error "DPS_COUNT = 0 not supported"
    #else
        /* With index address mode */
        #ifdef DPS_LOCAL_STATES
        /* Must be static !!! */
        static DPS_State dpsState[DPS_COUNT];
        /* Must be static !!! */
        #endif

        #define DPS_LOCAL_FUNCTIONS
    #endif /* DPS_COUNT */
#endif /* DECJ_ModId */

/*------------------------------------------------------------------------
 * Clear all error trace buffer entries
 *------------------------------------------------------------------------*/

INLINE_FUNCTION  void Dps_ClrErrTrace(void)
{
    Pm_ClrErrTrace();
}


#ifdef DPS_LOCAL_FUNCTIONS

    /*------------------------------------------------------------------------
     * Clear all local state variables
     *------------------------------------------------------------------------*/

    #ifdef DPS_LOCAL_STATES
    INLINE_FUNCTION void Dps_Init(uint32 index)
    {
        #ifndef DPS_COUNT
            dpsState.error = 0;
            dpsState.errStat = 0;
            dpsState.WaitTime = 0;
            dpsState.tmpState = 0;
            (void) index;
        #else
            dpsState[index].error = 0;
            dpsState[index].errStat = 0;
            dpsState[index].WaitTime = 0;
            dpsState[index].tmpState = 0;
        #endif
    }
    #endif

    /*------------------------------------------------------------------------
     * Clear the error trace buffer entry referenced by index
     *------------------------------------------------------------------------*/

    INLINE_FUNCTION void Dps_ClrErr(uint32 index, uint32 enable)
    {
        #ifndef DPS_COUNT
            (void) index;
            #ifdef DPS_LOCAL_STATES
            Dps_Init(0);
            #endif

            if (enable)
            {
                Pm_ClrErr((uint32)DPS_INDEX);
            }

        #else
            #ifdef DPS_LOCAL_STATES
            Dps_Init(index);
            #endif

            if (enable)
            {
                Pm_ClrErr((uint32)(DPS_INDEX[index]));
            }
        #endif
    }

    /*------------------------------------------------------------------------
     * Standard output stage diagnostic function
     *------------------------------------------------------------------------*/

    #ifdef DPS_LOCAL_STATES
    INLINE_FUNCTION SfpType Dps_StdDiag(SfpType sfpStatus, uint32 index)
    {
        #ifndef DPS_COUNT
            return DPS_StdDiag(&dpsState, sfpStatus, ((uint32)DPS_INDEX));
            (void) index;
        #else
            return DPS_StdDiag(&dpsState[index], sfpStatus, ((uint32)(DPS_INDEX[index])));
        #endif
    }
    #endif

    /*------------------------------------------------------------------------
     * Output stage diagnostic methods
     *------------------------------------------------------------------------*/

    INLINE_FUNCTION uint16 Dps_Error(uint32 index)
    {
        #ifndef DPS_COUNT
            return Pm_GetErr((uint32)DPS_INDEX);
            (void) index;
        #else
            return Pm_GetErr((uint32)(DPS_INDEX[index]));
        #endif
    }

    INLINE_FUNCTION uint8 Dps_TstImp(uint32 index)
    {
        #ifndef DPS_COUNT
            return Pm_TstImp(((uint32)DPS_INDEX));
            (void) index;
        #else
            return Pm_TstImp(((uint32)(DPS_INDEX[index])));
        #endif
    }

#endif /* DPS_LOCAL_FUNCTIONS */

#endif /* DPS_TEMPLATE_ModId */

#endif /* _DPS_TEMPLATE_ */
