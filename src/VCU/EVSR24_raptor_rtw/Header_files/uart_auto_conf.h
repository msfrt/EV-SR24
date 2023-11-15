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
 * $Filename__:uart_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:RAT6KOR$
 * $Date______:26.08.2011$
 * $Class_____:CONFTPLHDR$
 * $Name______:uart_template_conf$
 * $Variant___:1.9.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.9.0; 0     26.08.2011 RAT6KOR
 *   Overrun Error Check functionality added.
 * 
 * 1.7.0; 0     04.03.2010 CMS2SI
 *   Initial Checkin ofnew version with modified files
 * 
 * 1.6.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: uart_template_conf.ht
 *      Version: \main\basis\b_CORE\9
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _UART_AUTO_CONF_H
#define _UART_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Configuration header of UART modul.
 *
 * \scope               CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
 

/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */
 // Which hardware is used. Three cases are possible; 1.ASC0, 2.ASC1, 3.ASC0 & ASC1.
#define UART_ST_USE_DEVICE0     TRUE 

#define ASC0_CONFIGURED
#define UART_ST_USE_DEVICE1     FALSE 

 	
/* number of used UARTs (SCIs)  (allowed values 0,1,2)
 * If no uart should be used, 0 has to be inserted. In this case all processes of
 * uart must be removed from dynamics.col and no other function of uart is allowed to be called!
 */
#define UART_NUM_DEVICES_DU8    1

// Default baud rate
#define UART_D_BAUD_DU32        9600

/* If no uart is used, nothing of this file will be compiled. */
#if (UART_NUM_DEVICES_DU8 > 0)

    #define ASC0_PISEL 			0
    

    #define ASC0_PORT_NUMBER 	5

    

    #define ASC0_PIN_NUMBER  	0

    

    #define ASC0_OPERATIONAL_MODE 		UART_ST_8DATA1STOP_DB32
    


    
    
    

    
    

	#define ASC0_OVERRUN_ERROR_CHECK 			0	  
	
	  
    /* Definitions of uart user identifiers */
	 typedef enum
	 {
		 UART_NUM_ID_NO_USER_E = UART_NUM_ID_NO_USER_DU8,
		 UART_NUM_ID_LIN_USER_E
	 }Uart_Users_t;

    /* Bit encoded uart users: */
	 #define UART_BP_NO_USER_DB8                   (1 << UART_NUM_ID_NO_USER_E)
	 #define UART_BP_LIN_USER_DB8                  (1 << UART_NUM_ID_LIN_USER_E)


    /* Definitions of uart user identifiers bit encoded. Used only for testing purpose  */
    /* MISRA RULE 32 VIOLATION: The enumerator is used for testing purpose only.*/
	 typedef enum
	 {
		 UART_BP_NO_USER_E = 0, /* UART_NUM_ID_NO_USER_E*/
		 UART_BP_LIN_USER_E = (1 << UART_NUM_ID_LIN_USER_E) ,
		 UART_BP_USER_LAST_E
	 } Uart_Users_be_t;


    /* Which uart number (resource) does the protocol use ?
     * The address to the configuration structure with that uart number as index has to be given as
     * first parameter to many uart functions. Example: &Uart_cs[UART_NUM_KWPSTD_UART_DU8]
     */
	 #define UART_NUM_LIN_UART_DU8                 UART_DEVICEASC0


    // Based on the number of used devices UART_NUM_DEVICES_DU8 say which array index corresponds to
    //  the device. This depends on Uart_cs[] in uart_conf.c

    /* _E because in previous version it was a enum */
    #define UART_DEVICEASC0                        UART_ARRAY_INDEX0
    #define UART_DEVICEASC1                        UART_ARRAY_INDEX1
#endif
/* The part below is read only !!!! not for configuration !!!! */
/* *************************************************************/

/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */
 /* Index of the array uart_cs */
#define UART_ARRAY_INDEX0 0 

#define UART_ARRAY_INDEX1 1 


#ifdef UART_TJA1020_NSLP_DIOSET_0
#define UART_TJA1020_NSLP_WAIT
#endif
#ifdef UART_TJA1020_NSLP_DIOSET_1
#define UART_TJA1020_NSLP_WAIT
#endif

#ifdef UART_TJA1020_NSLP_WAIT
#define TJA1020_GOTOSLEEP_MAX_US       (10UL)
#define TJA1020_GOTONORM_MAX_US        (10UL)
#define TJA1021_TINIT_NORM_MAX_US      (20UL)
#endif

#ifdef ASC_WUP_DETECTION_GPTA

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Uart_AscEdgeIsr_Proc(void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

#endif

/* _UART_AUTO_CONF_H */
#endif
