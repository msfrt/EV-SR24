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
 * $Filename__:epmhwe_srv_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:add the header file epmhwe_srv_pub.h$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:BMR3KOR$
 * $Date______:06.11.2012$
 * $Class_____:SWHDR$
 * $Name______:epmhwe_srv_pub$
 * $Variant___:1.27.0$
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
 * 1.27.0; 0     06.11.2012 BMR3KOR
 *   change of defines in enum EpmHwe_OvrFlwHdl_t
 * 
 * 1.26.0; 0     17.07.2012 KAG4FE
 *   RQONE00047402: HW independant provision of EPMHCAS_TIMESTAMPMAX
 * 
 * 1.25.0; 1     05.04.2012 NF72FE
 *   moving define from header to c-file
 * 
 * 1.25.0; 0     03.04.2012 NF72FE
 *   remove of parameter in EpmHwe_GetTimeClock to get rid of hardware 
 *   dependency
 *   Additional functions for reading and converting Timervalues
 *   Additional function to subtract timestamps based on HW-times under 
 *   consideration of overflows
 * 
 * 1.24.0; 1     22.03.2012 VIK4KOR
 *   Changes after compilation
 * 
 * 1.24.0; 0     15.03.2012 VIK4KOR
 *   RCMS01257877: GPTA resources are encapsulated.
 *   EpmHwe_CnvTimeClockTicks2US, EpmHwe_CnvModuleClockTicks2US and 
 *   EpmHwe_GetTimeClock are added
 * 
 * 1.23.0; 0     03.12.2009 OMO2FE
 *   add the header file epmhwe_srv_pub.h
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHWE_SRV_PUB_H
#define _EPMHWE_SRV_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  public interface of EPM Hardware Encapsulation
 *
 * \scope
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

typedef enum
{
    EPMHWE_OVRFLWCHK_FULL,          // 0
    EPMHWE_OVRFLWCHK_HALF          // 1
}EpmHwe_OvrFlwHdl_t;


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern sint32 EpmHwe_CnvAg2HweT(sint16 phiDiff,sint16 nEng);
extern sint16 EpmHwe_CnvHweT2Ag(sint32 tiDiff,sint16 nEng);
extern sint32 EpmHwe_CnvTimeClockTicks2US (uint32 ticks);
extern uint32 EpmHwe_GetTimeClock (void);
extern sint32 EpmHwe_CnvModuleClockTicks2US (uint32 ticks);
extern sint32 EpmHwe_GetTimeUs(void);
extern sint32 EpmHwe_GetTimeDiff(sint32 tiNew, sint32 tiOld, EpmHwe_OvrFlwHdl_t range);
extern uint32 EpmHwe_GetCaSTimestampMax(void);

/* _EPMHWE_SRV_PUB_H */
#endif
