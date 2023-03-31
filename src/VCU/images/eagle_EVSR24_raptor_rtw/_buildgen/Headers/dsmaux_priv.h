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
 * $Filename__:dsmaux_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmaux_priv$ 
 * $Variant___:2.0.0$ 
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
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmaux_priv.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          private header file for DSMAUX
 * \scope   API
 *********************************************************************
 */


#ifndef _DSMAUX_PRIV_H                     /* protect multiple includes             */
#define _DSMAUX_PRIV_H

/* this Variables are defined in the configuration. To make the code fit for library this
   external defintions must be coded fix here to be independent from generated files.
   Each variables will exist in each configuration */
__PRAGMA_USE__dsm__1_5ms__constant__s16__START
extern const DSM_TRGType  DTRG_Time200ms;
extern const DSM_TRGType  DTRG_DrivingCycleFLC;
extern const DSM_TRGType  DTRG_WarmUpCycle;
extern const DSM_TRGType  DTRG_DrivingCycleHLC;
extern const DSM_TRGType  DTRG_SimilarCondHLC;
extern const DSM_TRGType  DTRG_AlwaysTrue;
extern const DSM_TRGType  DTRG_DrivingCycleTimeFLC;
extern const DSM_TRGType  DTRG_DrivingCycleTimeHLC;
extern const DSM_TRGType  DTRG_WarmUpCycleTime;
__PRAGMA_USE__dsm__1_5ms__constant__s16__END

/* _DSMAUX_PRIV_H   */
#endif
