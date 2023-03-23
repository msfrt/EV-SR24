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
 * $Filename__:ccp_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HMA2KOR$
 * $Date______:30.09.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:ccp_template_conf$
 * $Variant___:1.13.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.13.0; 0     30.09.2010 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.13.0.0
 * 
 * 1.10.0; 0     03.08.2009 MXA2SI
 *   Platform 
 *   Migrated from Clearcase.
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * 1.9.0; 0     28.07.2009 MXA2SI
 *   Migrated from Clearcase
 *   B_CCP.9.0.0
 *   B_CCP_Conf.9.0.0
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_template_conf.ht
 *      Version: \main\10
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_template_conf.ht
 *      Version: \main\10
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Header File for CCP Configuration
 *
 * \scope  CONF
 ***************************************************************************************************
 */

#ifndef _CCP_AUTO_CONF_H
#define _CCP_AUTO_CONF_H


/*
***************************************************************************************************
 *    Includes
 ***************************************************************************************************
 */

/* To merge the changes between PLS and PLV - "Base address offset concept */
 

/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

/*  #define for PCP usage */
#define CCP_PCP  TRUE

/* Enable the below defenition only if cold start is required in CCP */
/* #define CCP_ENABLE_COLDSTART_D  */

/* User should define  CCP_INTERRUPT if CCP messages are required on the interrupt basis */
/* In that case function Ccp_Precopy( ) should be configured in the can_conf.c file */
/* If CCP_INTERRUPT is not defined then CCP messages are polled */

/* #define CCP_INTERRUPT */



/* CCP Application/Series Enabled */ 
#define CCP_SERIES_ECU
extern Ccp_conf_t Ccp_conf_Series_cs ;






/* #define for CAN driver used with CCP */
#define CCP_CAN_DRIVER MEDC17_CAN


/* content of the tag SUPPORT_ED_STORAGE */
#define CCP_ED_STORAGE FALSE


/*  #define for ACCPR Check for CCP Measurement */
/*#define CCP_ACCPRCHK     FALSE*/           

/* #define for engine sync DAQ */
#define	CCP_SYNC_DAQ   CCP_DAQ_ENABLE

/* #define for 10ms DAQ */
#define	CCP_10MS_DAQ   CCP_DAQ_ENABLE

/* #define for 100ms DAQ */
#define	CCP_100MS_DAQ   CCP_DAQ_ENABLE

/* #define for additional 1ms DAQ */
#define	CCP_1MS_DAQ   CCP_DAQ_DISABLE

/* #define for additional 2ms DAQ */
#define	CCP_2MS_DAQ   CCP_DAQ_DISABLE


#define CCP_TOTAL_DAQS	3


/* Information about CAN SRC register used for CCP DAQs */ 
#define     CCP_CANSRC_DAQ0    3
#define     CCP_CANSRC_DAQ1    4
#define     CCP_CANSRC_DAQ2    0


/* Configure all the events to be supported */
typedef enum
{
CCP_SYNC_EVENT_E,
CCP_10MS_EVENT_E,
CCP_100MS_EVENT_E,

CCP_MAXEVENTS_E

} Ccp_Events_t ;


#define     CCP_DAQ0  0
#define     CCP_DAQ1  1
#define     CCP_DAQ2  2




#endif
