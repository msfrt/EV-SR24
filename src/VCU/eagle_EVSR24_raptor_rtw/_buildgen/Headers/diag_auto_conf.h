#ifndef _DIAG_AUTO_CONF_H
#define _DIAG_AUTO_CONF_H

/*!
 *********************************************************************
 * \moduldescription
 *          Header for KWP2000 session layer and service distributor
 *
 * \scope   CONF
 *********************************************************************
 */



/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */

#define ECU_ADDRESS_TO_CHECK       0

#define 	 DIAG_MAX_DATA_LENGTH 	0xFFF
#define 	 ECU_PHYS_ADDRESS 	0x11
#define 	 CARB_FCT_ADDR 	0x33
#define 	 DIAG_SIDVALIDATION_ENABLE 	TRUE 
#define 	 DIAG_INVALID_SID 	0x40 
#define 	 DIAG_RDPIRESPTYPE2_ENABLE 	0 
#define		DIAG_ISOTP_ENABLE





/* Functional address for all ECUs   */
#ifndef ECU_FCT_ADDRESS
#define    ECU_FCT_ADDRESS       0xFE

#endif

/* Functional address of ECU - CARB  */
#define CARB_PHYS_ADDR             0x6A

/* CAN baud rate change */ 




/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */

/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */


/*
 ***************************************************************************************************
 *    External Data
 ***************************************************************************************************
 */

__PRAGMA_USE__diagcom__10ms__constant__s32__START 
 extern Diag_ProtConf_t      Diag_ProtConfig_cs; 
__PRAGMA_USE__diagcom__10ms__constant__s32__END 


__PRAGMA_USE__diagcom__10ms__constant__s32__START
extern Diag_conf_t          Diag_LayerConfig_cs;
__PRAGMA_USE__diagcom__10ms__constant__s32__END

__PRAGMA_USE__diagcom__10ms__constant__s32__START
extern const WakeupInterface Diag_Can_Wakeup;
extern const WakeupInterface Diag_Uart_Wakeup;
__PRAGMA_USE__diagcom__10ms__constant__s32__END


/*
 **************************************************************************************************
 * Function prototypes
 **************************************************************************************************
 */



#endif /* _DIAG_AUTO_CONF_H*/
