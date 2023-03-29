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
 * $Filename__:ddrc_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PKA2SI$ 
 * $Date______:06.08.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:ddrc_pub$ 
 * $Variant___:8.0.0$ 
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
 * 8.0.0; 0     06.08.2010 PKA2SI
 *   introduction of Dem,Fim wrapper features
 * 
 * 2.3.0; 0     09.07.2009 PKA2SI
 *   DTR update demanded bit in DDRC return value
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ddrc_pub.h
 *      Version: \main\12
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DDRC_PUB_H
#define _DDRC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - Integrated Predebouncing Headerfile with prototypes
 *
 * \scope           API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Common makros for all debouncing methods */
/* Return values for the debouncing methods */

/* Bit positions **********************************************************************************/
/**
 Bit position preliminary defect bit in return value of call DSM_DebRepCheck()                    */
#define   DSM_ST_DEB_PRELIM_DEF_BIT    0x00u
/**
 Bit position defect bit in return value of call DSM_DebRepCheck()                                */
#define   DSM_ST_DEB_DEFECT_BIT        0x01u
/**
 Bit position preliminary healed bit in return value of call DSM_DebRepCheck()                    */
#define   DSM_ST_DEB_PRELIM_HEAL_BIT   0x02u
/**
 Bit position test completed bit in return value of call DSM_DebRepCheck()                        */
#define   DSM_ST_DEB_TST_BIT           0x03u
/**
 Bit position DTR/service06 updated desired in return value of call DSM_DebRepCheck()             */
#define   DSM_ST_DEB_DTR_BIT           0x04u


/* Masks ******************************************************************************************/
/**
 Bit mask preliminary defect bit in return value of call DSM_DebRepCheck()                        */
#define   DSM_ST_DEB_PRELIM_DEF_MSK      (0x01u << DSM_ST_DEB_PRELIM_DEF_BIT)
/**
 Bit mask defect bit in return value of call DSM_DebRepCheck()                                    */
#define   DSM_ST_DEB_DEFECT_MSK          (0x01u << DSM_ST_DEB_DEFECT_BIT)
/**
 Bit mask preliminary healed bit in return value of call DSM_DebRepCheck()                        */
#define   DSM_ST_DEB_PRELIM_HEAL_MSK     (0x01u << DSM_ST_DEB_PRELIM_HEAL_BIT)
/**
 Bit mask debounce stage in return value of call DSM_DebRepCheck(), 
 those 3 bits are 0 means debounce state is OK                                                    */
#define   DSM_ST_DEB_STAGE_MSK           (  DSM_ST_DEB_PRELIM_DEF_MSK   \
                                          | DSM_ST_DEB_DEFECT_MSK       \
                                          | DSM_ST_DEB_PRELIM_HEAL_MSK)
/**
  value for debounce state is ok within DSM_ST_DEB_STAGE_MSK part
  in return value of call DSM_DebRepCheck()                            */
#define   DSM_ST_DEB_STAGE_OK_VALUE      (0)
/**
 Bit mask test completed bit in return value of call DSM_DebRepCheck()                            */
#define   DSM_ST_DEB_TST_MSK             (0x01u << DSM_ST_DEB_TST_BIT)
/**
 Bit mask DTR/service06 updated desired in return value of call DSM_DebRepCheck()                 */
#define   DSM_ST_DEB_DTR_MSK             (0x01u << DSM_ST_DEB_DTR_BIT)


/* Masks for attributes */
/** Mask for deactivation of automatic tested recognition in debounced interface */
#define   DSM_ATTR_NON_AUTO               0x01u
/** Mask for Test finished if atuotmatic tested recognition is disabled  */
#define   DSM_ATTR_TESTED                 0x02u
/** Mask for Testresult under tester influence */
#define   DSM_ATTR_TESTER                 0x04u
/** Mask for Testresult under EOL tester influence */
#define   DSM_ATTR_EOL                    0x08u
/** Mask for disabling call of low level report after debouncing */
#define   DSM_ATTR_NON_REPORT             0x10u
/** Mask for enabling variable event size for debouncing */
#define   DSM_ATTR_EVT_SIZE               0x20u
/** Mask for performing tested debouncing continously even after the tested flag being set */
#define   DSM_ATTR_MUL_TST                0x40u
/** Mask to prevent setting of run flag of DFC state (call of DSM_RepCheck wo diagnostic activity)*/
#define   DSM_ATTR_NO_RUN               0x0800u
/** Mask for tested ok recognition (response on event handling) */
#define   DSM_ATTR_TESTED_OK            0x1000u
/** Mask for tested error recognition (response on event handling) */
#define   DSM_ATTR_TESTED_ERR           0x2000u
/** Mask for status change ok to error recognition (response on event handling) */
#define   DSM_ATTR_STCHNG_OK2ERR        0x4000u
/** Mask for status change error to ok recognition (response on event handling) */
#define   DSM_ATTR_STCHNG_ERR2OK        0x8000u


/* Values for fault levels ************************************************************************/
/** Value for check result complete OK */
#define   DSM_CHECK_RESULT_OK             0u
/** Value for check result complete Defect */
#define   DSM_CHECK_RESULT_DEF            15u


/* Values for debounce levels *********************************************************************/



/***** Prototypes *********************************************************************************/


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebTiRow(    DSM_DFCType      CName         /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                 );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebTiUD(    DSM_DFCType      CName          /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebTiUDSm(    DSM_DFCType      CName        /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                  );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebEvntRow(    DSM_DFCType     CName        /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                   );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebEvntUD(    DSM_DFCType      CName        /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                  );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebEvntUDSm(    DSM_DFCType    CName        /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebTiRowSm(    DSM_DFCType     CName       /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                   );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebEvntRowSm(  DSM_DFCType     CName        /* Reference for Check                       */
                       , uint           stResult
                       , uint           stAttrib
                       , uint32         tiDiff
                     );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_DebRepCheck(  DSM_DFCType CName   /* Check Name                                */
                       , uint stResult               /* Status ofResult                           */
                       , uint stAttrib               /* Attributes of Check                       */
                       , uint32 tiDiff               /* Time difference since last call           */
                    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSM_GetDebStatus(  DSM_DFCType      CName );
sint8 DSM_GetDebFaultDetCnt(DSM_DFCType CName);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_ResetDebounce(  DSM_DFCType      CName );   /* Reference for Check                       */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_ResetDebRep(  DSM_DFCType CName             /* Reference for Check                       */
                       ,uint       stResult          /* defect status                             */
                       ,uint       stAttrib          /* Atrribute parameter                       */
                    );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint32 DSM_GetDFCDebTmr(  DSM_DFCType      CName     /* Reference for Check                       */
                        , uint32         *tiDebDef   /* return of defect debounce time            */
                        , uint32         *tiDebOk    /* return of ok debounce time                */
                        );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_ResetDebAndClearDFC(  DSM_DFCType  CName ); /* Reference for Check                       */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DSM_DRCInit(void);                              /* init function                             */
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DDRC_ClearAll(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END


#endif
