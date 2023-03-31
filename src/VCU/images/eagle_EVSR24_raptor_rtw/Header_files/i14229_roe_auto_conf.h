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
 * $Filename__:i14229_roe_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:29.10.2008$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:i14229_roe_template_conf$ 
 * $Variant___:3.6.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 3.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229_roe_template_conf.ht
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_ROE_AUTO_CONF_H
#define _I14229_ROE_AUTO_CONF_H

/*
 ***************************************************************************************************
 * \moduldescription    
 *   Automatically generated configuration headerfile for I14229 
 *
 * \scope              [CONF]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*If I14229_ROE Configuration Exists, then use CONFIG_EXIST to include all variable and function
declarations, in the i14229_roe_conf.c config file  */
#define ROE_CONFIG_EXIST


/* Event Types */

#define I14229_ROE_EVENTTYP_NEW_DTC    0x01
#define I14229_ROE_EVENTTYP_TIMER_INT    0x02
#define I14229_ROE_EVENTTYP_CHK_RECV    0x03

/* Restart (resume) ROE services after reset, without any request from tester: set to TRUE to
enable this feature */
#define RESUME_ROE              FALSE

/* Multiplication Factor for Event Window Time (Converted into sec.s ) */
#define WINDOWTIME_M_FACTOR     2

/* Max no of Events supported in parallel  */
#define MAX_NO_EVENTS           2

/* Max no of Event Types */
#define MAX_EVENT_TYPES         3

/* Size of the Event Buffer in Diag  */
#define ROE_BUF_LENGTH          32

/* Available Data Length in Event Buffer */
#define DATA_LENGTH_EV_BUF      (ROE_BUF_LENGTH - 2)

/* Max no of SID parameters that can come with request 86  */
#define MAX_SID_PARAM           10

/* No of Event Type parameters that can come with request 86  */

/* Maximum Event type parameter length */
#define MAX_EVENT_TYPE_PARAM    3

/* Minimum Event type parameter length */
#define MIN_EVENT_TYPE_PARAM    1


/*
 ******************************************************************************
 *    Function prototypes
 ******************************************************************************
 */

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern bool myCheckEvent(uint8* EventTypeParameter);
extern bool myEventInit(uint8* EventTypeParameter);
extern DiagCom_EventConf_t EventConfig;
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END


#endif
