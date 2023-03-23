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
 * $Filename__:ats_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PRA2KOR$ 
 * $Date______:07.04.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ats_priv$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     07.04.2009 PRA2KOR
 *   1)Migration of BMW(p_731_VBG1) changes
 *   2) update of ATS_TstStatus_mp in ATS_ResetAll function.
 * 
 * 1.10.0; 0     21.01.2009 PRA2KOR
 *    Additional status functions for calling the actuator status.
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_priv.h
 *      Version: \main\12
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_priv.h
 *      Version: \main\12
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ATS_PRIV_H
#define _ATS_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Private header file for module ATS
 *
 * \scope              INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* values for the Tester Monitoring State Machine*/
#define ATS_TST_MON_IDLE       0    /* idle state:    now tester demand active              */
#define ATS_TST_MON_PEND       1    /* pending state: demand active, time limit running     */
#define ATS_TST_MON_LOCK       2    /* locked state:  limit time reached, demand still act  */
#define ATS_TST_MON_HEAL       4    /* healing state: no more demand active healing to idle */

/* values for the Tester Demand Status (summary for all demands) */
#define ATS_TST_DEM_ACT        0x01 /* at least one demand is active */
#define ATS_TST_DEM_NEW        0x02 /* at least one new demand was activated since last
                                       monitoring cycle */

#define ATS_NO_TSTACTIVE       0x00 /* no test is active */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__ats__10ms__RAM__x8__START
extern uint8  ATS_stDem;          /* Summary Status of all Tester Demands */
__PRAGMA_USE__ats__10ms__RAM__x8__END

__PRAGMA_USE__ats__10ms__RAM__arr8__START
extern uint8  ATS_TstStatus[];
extern uint8  ATS_tmpTstStatus[];
__PRAGMA_USE__ats__10ms__RAM__arr8__END

__PRAGMA_USE__ats__10ms__RAM__arr16__START
extern sint16 ATS_IntvVal[];
extern sint16 ATS_ActrVal[];
__PRAGMA_USE__ats__10ms__RAM__arr16__END


__PRAGMA_USE__ats__10ms__constant__arr32__START
extern const CbkFunc_pfn  ATS_CfgCbkArray_p[];
__PRAGMA_USE__ats__10ms__constant__arr32__END


__PRAGMA_USE__CODE__ats__NormalSpeed__START
extern const ATS_CfgData_s  * ATS_GetConfigByID(uint8 numId);
extern uint8  ATS_EnaCond_u8[];
void ATS_SetStatus(uint8 stTstDem, uint8 numActrID);
bool ATS_CnvFromInt(sint16 Val, sint32 Fac, sint16 Ofs, uint8 Norm, sint16* ConvVal);
bool ATS_CnvToInt(sint16 Val, sint32 Fac, sint16 Ofs, uint8 Norm, sint16* ConvVal);
__PRAGMA_USE__CODE__ats__NormalSpeed__END


#endif /* _ATS_PRIV_H */
