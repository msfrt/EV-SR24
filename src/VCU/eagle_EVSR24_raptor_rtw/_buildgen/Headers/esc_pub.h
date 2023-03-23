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
 * $Filename__:esc_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:VKA1KOR$
 * $Date______:26.02.2013$
 * $Class_____:SWHDR$
 * $Name______:esc_pub$
 * $Variant___:2.18.3$
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
 * 2.18.3; 0     26.02.2013 VKA1KOR
 *   Removal of system constants from esc_pub.h file
 *   to accomodate GS make along with DGS make.
 * 
 * 2.18.2; 2     11.02.2013 VKA1KOR
 *   Changes in pub file to facilitate inclusion of
 *   system constant
 * 
 * 2.18.2; 1     04.02.2013 VKA1KOR
 *   Review changes
 * 
 * 2.18.2; 0     30.01.2013 VKA1KOR
 *   Encapsulating the 40ms ESC Push process with
 *   a new system constant so that projects can choose
 *   to use this process by enabling this syscon.
 * 
 * 2.18.0; 1     16.03.2011 GAI2KOR
 *   Implemented change deleted
 * 
 * 2.18.0; 0     17.11.2010 GAI2KOR
 *   System constant (ESC_SYNCTASK_SC) encapsulation for the functions:
 *   ESC_PushSampTime_SEGTIME_Proc and 
 *   ESC_PushSampTime_PARTSEGTIME_Proc
 * 
 * 2.16.0; 0     04.12.2008 NF72FE
 *   transfer of ESC.15.2.0 from CC to SDOM
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _ESC_PUB_H
#define _ESC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  public interface of ESC
 *
 * \scope API
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


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
extern sint32 ESC_tiSampling;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

extern void ESC_Proc(void);
extern void ESC_Proc_SyncIni(void);
extern void ESC_Proc_SyncFirst(void);
extern void ESC_StrtPreTask(void);

extern void ESC_PopSampTime_Proc(void);
extern void ESC_PushSampTime_Proc_1ms(void);
extern void ESC_PushSampTime_Proc_2ms(void);
extern void ESC_PushSampTime_Proc_5ms(void);
extern void ESC_PushSampTime_Proc_10ms(void);
extern void ESC_PushSampTime_Proc_20ms(void);
extern void ESC_PushSampTime_Proc_40ms(void);
extern void ESC_PushSampTime_Proc_50ms(void);
extern void ESC_PushSampTime_Proc_100ms(void);
extern void ESC_PushSampTime_Proc_200ms(void);
extern void ESC_PushSampTime_Proc_1000ms(void);

extern void ESC_PushSampTime_SEGTIME_Proc(void);
extern void ESC_PushSampTime_PARTSEGTIME_Proc(void);
/*
 ***************************************************************************************************
 * Macros
 ***************************************************************************************************
 */

#define    DT  ESC_tiSampling

/* _ESC_PUB_H */
#endif
