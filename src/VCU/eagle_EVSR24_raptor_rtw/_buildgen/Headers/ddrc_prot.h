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
 * $Filename__:ddrc_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:16.03.2012$
 * $Class_____:SWHDR$
 * $Name______:ddrc_prot$
 * $Variant___:2.7.0$
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
 * 2.7.0; 0     16.03.2012 MMO2FE
 *   Compiler Independence warnings removal
 * 
 * 8.0.0; 0     28.09.2010 PKA2SI
 *   fixes for FCI
 * 
 * 2.3.0; 0     09.07.2009 PKA2SI
 *   DTR update bit in DDRC return value
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ddrc_prot.h
 *      Version: \main\7
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DDRC_PROT_H
#define _DDRC_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - Integrated Predebouncing Headerfile with prototypes
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* assign number to the debounce methods = refference for predebounce function table              */
#define      TIME_IN_ROW              0u
#define      EVENT_IN_ROW             1u
#define      TIME_UP_DOWN             2u
#define      EVENT_UP_DOWN            3u
#define      TIME_UP_DOWN_SMALL       4u
#define      EVENT_UP_DOWN_SMALL      5u
#define      TIME_IN_ROW_SMALL        6u
#define      EVENT_IN_ROW_SMALL       7u
#define      NO_DEBOUNCE              8u
#define      NATIVE                   8u



/***************************************************************************************************
 * Definitions for handling the status/timer ram of small debouncings
 ***************************************************************************************************
 */
/* Reference to assigned 16bit Ram value; count the 32 bit timers twice for index                 */
#define ctPreDebSmall(numCheck)  (DSM_ctPreDebSm[(numCheck) - (uint)(DSM_ctCfgPreDebEvntUDMax)])

/* Last result is coded in Bit 15 = MSB */
#define DSM_CHECK_DEBSM_LAST_RES_POS               15u
/* Tested status is coded in Bit 14  */
#define DSM_CHECK_DEBSM_TESTED_POS                 14u
/* Test debouncing active is coded in Bit 13  */
#define DSM_CHECK_DEBSM_TEST_ACT_POS               13u
/* Maximum timer value and at the same time timer Mask (the bits 0 - 12) */
#define DSM_CHECK_DEBSM_TI_MAX                     0x1FFFu
/* Maximum timer value using up down debounce method */
#define DSM_CHECK_DEBSM_TI_UD_MAX                  0x7FFu

/* convert difference time to timer resolution (/1000 = int resolution equal to 1ms */
#define DSMDRC_CnvUS2SmRes(tiUs)           ((uint) ((tiUs) / 1000ul))

/* convert timer resolution to us (*1000 = int resolution equal to 1ms */
#define DSMDRC_CnvDebSm2usRes(tiDeb)            ((tiDeb) * 1000u)

/* convert calibration parameter resolution (10 ms) to internal resolution (1ms) */
#define DSMDRC_CnvCal2SmRes(tiCal)          ((uint32)(tiCal) * 10u)



/* Extract, set and clear contens from loacal copy of status/timer 16 bit value */
#define GetDebSmLastRes(stLocal)      (((stLocal) >>  (DSM_CHECK_DEBSM_LAST_RES_POS)) & 0x01u   )

#define GetDebSmTst(stLocal)          (((stLocal) >>  (DSM_CHECK_DEBSM_TESTED_POS)) & 0x01u   )

#define GetDebSmTstAct(stLocal)       (((stLocal) >>  (DSM_CHECK_DEBSM_TEST_ACT_POS)) & 0x01u   )

#define GetDebSmTi(stLocal)           ((stLocal)  &   (DSM_CHECK_DEBSM_TI_MAX))

/* Write back macros */
#define SetDebSmLastRes(stLocal)      ((stLocal)  |=  (0x01u << (DSM_CHECK_DEBSM_LAST_RES_POS)))
/* set the tested status to finished */
#define SetDebSmTst(stLocal)          ((stLocal)  |=  (0x01u << (DSM_CHECK_DEBSM_TESTED_POS)))
/* Set the test active status to active */
#define SetDebSmTstAct(stLocal)       ((stLocal)  |=  (0x01u << (DSM_CHECK_DEBSM_TEST_ACT_POS)))

#define ClrDebSmLastRes(stLocal)      ((stLocal)  &= ~(0x01u << (DSM_CHECK_DEBSM_LAST_RES_POS)))

#define ClrDebSmTst(stLocal)          ((stLocal)  &= ~(0x01u << (DSM_CHECK_DEBSM_TESTED_POS)))

#define ClrDebSmTstAct(stLocal)       ((stLocal)  &= ~(0x01u << (DSM_CHECK_DEBSM_TEST_ACT_POS)))


#define CpyDebSmTi(stLocal, tiVal)   ((stLocal) = ((stLocal) & ~(DSM_CHECK_DEBSM_TI_MAX)) |        \
                                                   ((tiVal) & DSM_CHECK_DEBSM_TI_MAX))


/***************************************************************************************************
 * Definitions for handling the status/timer ram of 32 bit debouncings
 ***************************************************************************************************
 */
/* Reference to assigned 32bit Ram value; cast to 32 bit (variable is declared 16 bit because this
   array is used for 16 and 32 bit debouncings                  */
#define ctPreDeb(numCheck)  (DSM_ctPreDeb[(numCheck)])

/* Last result is coded in Bit 31 = MSB */
#define DSM_CHECK_DEB_LAST_RES_POS               31ul
/* Tested status is coded in Bit 30  */
#define DSM_CHECK_DEB_TESTED_POS                 30ul
/* Test debouncing active is coded in Bit 29  */
#define DSM_CHECK_DEB_TEST_ACT_POS               29ul
/* Maximum timer value and at the same time timer Mask (the bits 0 - 28) */
#define DSM_CHECK_DEB_TI_MAX                     0x1FFFFFFFul

/* convert difference time to timer resolution (/10 = int resolution equal to 10 us */
#define DSMDRC_CnvUS2Res(tiUs)                   ((tiUs) /10ul)

/* convert timer resolution to us (*10 = int resolution equal to 10us */
#define DSMDRC_CnvDeb2usRes(tiDeb)            ((tiDeb) * 10ul)



/* convert calibration parameter resolution (10 ms) to internal resolution (10 us) */
#define DSMDRC_CnvCal2Res(tiCal)          ((uint32)(tiCal) * 1000ul)



/* Extract, set and clear contens from loacal copy of status/timer 16 bit value */
#define GetDebLastRes(stLocal)      (((stLocal) >> (DSM_CHECK_DEB_LAST_RES_POS)) & 0x01ul   )

#define GetDebTst(stLocal)          (((stLocal) >> (DSM_CHECK_DEB_TESTED_POS)) & 0x01ul   )

#define GetDebTstAct(stLocal)       (((stLocal) >> (DSM_CHECK_DEB_TEST_ACT_POS)) & 0x01ul   )

#define GetDebTi(stLocal)           ((stLocal)  &  (DSM_CHECK_DEB_TI_MAX))

/* Write back macros */
#define SetDebLastRes(stLocal)      ((stLocal)  |= (0x01u << (DSM_CHECK_DEB_LAST_RES_POS)))
/* set the tested status to finished */
#define SetDebTst(stLocal)          ((stLocal)  |= (0x01u << (DSM_CHECK_DEB_TESTED_POS)))
/* Set the test active status to active */
#define SetDebTstAct(stLocal)       ((stLocal)  |= (0x01u << (DSM_CHECK_DEB_TEST_ACT_POS)))

#define ClrDebLastRes(stLocal)      ((stLocal)  &= ~(0x01u << (DSM_CHECK_DEB_LAST_RES_POS)))

#define ClrDebTst(stLocal)          ((stLocal)  &= ~(0x01u << (DSM_CHECK_DEB_TESTED_POS)))

#define ClrDebTstAct(stLocal)       ((stLocal) &= ~(0x01u << (DSM_CHECK_DEB_TEST_ACT_POS)))


#define CpyDebTi(stLocal, tiVal)    ((stLocal) = ((stLocal) &  ~(DSM_CHECK_DEB_TI_MAX)) |          \
                                                  ((tiVal) & DSM_CHECK_DEB_TI_MAX))




/* Access to Application parameters */
/* Array DSM_PreDebCalRef_CSTR contains one element per debounced check with same order. Each
   element contains the index which reffers to the assigned debounce parameters within the
   structure DSM_PreDebCal_G  if this structure is treated as an array by casting it */
#define GetDebToDef(numCheck)     \
            (DDRC_adDebCal[((DSM_PreDebCalRef_CSTR [(numCheck)] *2) + 1)])

#define GetDebToOk(numCheck)      \
            (DDRC_adDebCal[((DSM_PreDebCalRef_CSTR [(numCheck)]) * 2)])

#define GetDebRatio(numCheck)     \
            (DDRC_adDebRatioCal[(DSM_PreDebCalRef_CSTR [(numCheck)])])


/* conversion of calibration resolution into us */
#define DSMDRC_CnvCal2usRes(tiCal)          ((tiCal) * 10000ul)


/*
 ***************************************************************************************************
 * Variable Prototypes
 ***************************************************************************************************
 */
/* Check Number of last Check assigned to Debounce method "Time in row" */
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DSM_ctCfgPreDebTiMax;
/* Check Number of last Check assigned to Debounce method "Event in row" */
extern const uint16 DSM_ctCfgPreDebEvntMax;
/* Check Number of last Check assigned to Debounce method "Time up/down" */
extern const uint16 DSM_ctCfgPreDebTiUDMax;
/* Check Number of last Check assigned to Debounce method "Event up/down" */
extern const uint16 DSM_ctCfgPreDebEvntUDMax;
/* Check Number of last Check assigned to Debounce method "Time up/down small" */
extern const uint16 DSM_ctCfgPreDebTiUDSmMax;
/* Check Number of last Check assigned to Debounce method "Event up/down small" */
extern const uint16 DSM_ctCfgPreDebEvntUDSmMax;
/* Check Number of last Check assigned to Debounce method "Time in row small" */
extern const uint16 DSM_ctCfgPreDebTiSmMax;
/* Check Number of last Check assigned to Debounce method "Event in row small" */
extern const uint16 DSM_ctCfgPreDebEvntSmMax;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/* Arrays with RAM for the debouncings */
/* for 32 bit normal debouncing */
__PRAGMA_USE__dsm__1_5ms__RAM__arr32__START
extern uint32 DSM_ctPreDeb[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr32__END
/* for 16 bit small debouncings */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DSM_ctPreDebSm[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END

/* Array with one element per fault check which contains the index of the assigned debouncing */
__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DSM_PreDebCalRef_CSTR [] ;
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END

extern uint (*const DSM_PreDebFunc[]) ( DSM_DFCType CName,
                                        uint stResult,
                                        uint stAttrib,
                                        uint32 tiDiff);

extern const uint16 * DDRC_adDebCal;          /* pointer to debounce calibration values           */
extern const uint8  * DDRC_adDebRatioCal;     /* pointer to debounce ratio calibration values     */

__PRAGMA_USE__dsm__50ms_1s__RAM__x16__START
extern uint16 DSM_xTabVersion;          /* signature of DSM tables                                */
__PRAGMA_USE__dsm__50ms_1s__RAM__x16__END

__PRAGMA_USE__dsm__50ms_1s__constant__arr16__START
extern const uint16 DSM_ctPreDebEnvramOffs[];
__PRAGMA_USE__dsm__50ms_1s__constant__arr16__END


/* for 32 bit normal debouncing */
MEMLAY_USE_ENVRAM(extern uint32, DSM_ctPreDebEnvram[]);
/* for 16 bit small debouncings */
MEMLAY_USE_ENVRAM(extern uint16, DSM_ctPreDebSmEnvram[]);

__PRAGMA_USE__dsm__50ms_1s__RAM__x8__START
extern bool DSM_ctPreDebInit;
__PRAGMA_USE__dsm__50ms_1s__RAM__x8__END
 /*
 ***************************************************************************************************
 * internal function prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebNative
    (
        DSM_DFCType CName /* Reference for Check */
      , uint        stResult
      , uint        stAttrib
      , uint32      tiDiff
    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DDRC_Proc (void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DSM_DebEnvRamWrite(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DSM_DebEnvRamRead(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END
#endif
