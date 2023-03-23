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
 * $Filename__:sws_can.h$ 
 * 
 * $Author____:LEC5WI$ 
 * 
 * $Function__:customer specific PWM DIO ADC CAN configuration$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DAH5KOR$ 
 * $Date______:03.11.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:sws_can$ 
 * $Variant___:NE_BSW_SWSH_M5$ 
 * $Revision__:4$ 
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
 * NE_BSW_SWSH_M5; 4     03.11.2016 DAH5KOR
 *   CAN Rx Multiplexing support and EEP configured to 608 Blocks equivalent to 
 *   76KB.
 * 
 * NE_BSW_SWSH_M5; 3     20.01.2016 DAH5KOR
 *   125Kbps added as Baud Rate for the CAN nodes
 * 
 * NE_BSW_SWSH_M5; 2     03.11.2015 DAH5KOR
 *    Message ID format added for transmit messages
 * 
 * NE_BSW_SWSH_M5; 1     29.04.2015 DAH5KOR
 *   CAN interface function SWSRC files modified.
 *   EEP files modified
 * 
 * NE_BSW_SWSH_M5; 0     30.03.2015 DAH5KOR
 *   EEP and CAN interface function development
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef CAN_MACRO_H_ModId
#define CAN_MACRO_H_ModId                /* module identifier */


/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
/*{system_constant_check...}*/

/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/
#include "can.h"

/**********************************************************/

/* Baud Rate defines */
#define CAN_250K_BAUD               0x0001
#define CAN_500K_BAUD               0x0002
#define CAN_1MB_BAUD				0x0003
#define CAN_125K_BAUD				0x0004

/* ID Format defines */
#define CAN_STANDARD_ID_FORMAT      0x0000
#define CAN_EXTENDED_ID_FORMAT      0x0001

/* CAN RX Return values */
#define CANRX_STAT_OK               0x0000
#define CANRX_STAT_EMPTY            0x0001
#define CANRX_STAT_OVERRUN          0x0002
#define CANRX_STAT_BUSY             0x0003
#define CANRX_STAT_WRONG_IDENT      0x0004

/* CAN TX Return values */
#define CANTX_STAT_OK               0x0000
#define CANTX_STAT_BUSY             0x0001
#define CANTX_STAT_WRONG_IDENT      0x0002

/* CAN initialisation defines */
#define CAN_INIT_FAILED             0x0000
#define CAN_INIT_COMPLETE           0x0001

/* CAN BUSOFF STATUS Return values */
#define CAN_BUS_OFF_NO  0x0000
#define CAN_BUS_OFF_YES 0x0001

/* Busoff start timer */
extern bool start_timer;

/* Counters for  Busoff Recover strategy */
//extern uint8 counter_10ms;
//extern uint8 counter_40ms; 

/* CAN node status variables */
extern bool node_start_status;
extern bool node_stop_status;
extern uint16 can_node_status;
extern bool ini_run;

/* CAN node id variable*/
extern uint8 can_node_id;

typedef volatile struct
{
    uint32 MessageId;
    uint8 MessageDirection;
    uint8 MessageFormat;
	uint32 AcptnMask;
	uint8 Nodenum;
}can_msg_id_init_t;

typedef volatile struct
{
    uint8 NumMsgIDs;
    can_msg_id_init_t *CanMsgIDInfo;
}can_msg_init_t;


/*************************************************************************
 * CAN related structures and #defines -- END
*************************************************************************/


/* Define-Constants                                                     */
/* ================                                                     */

/*{constant_definition...}*/

/* Number of Users for CAN Driver */
extern const uint8 Can_Users_cu8;

/* DPRAM Status  Array */
extern uint8 Can_DpramStatus_u8;

/* Message Status Array */
/* extern uint8 Can_MsgStatus_u8[];*/

/* Extern decalration for CAN low level interface drivers */
extern bool swsh_caninit_user (uint8 bus_id, can_msg_init_t *can_init_data);
extern uint32 swsh_canrx_user(uint32 *msgid_rx, uint32 message_ID, uint8 *data_buffer, uint8 *length);
extern uint32 swsh_cantx_user(uint8 bus_id, uint32 message_ID, uint8 *data_buffer, uint8 length, uint8 idformat);
extern uint8 swsh_Can_GetNodeStatus_user( uint8 bus_id);
extern bool swsh_ChangeBaudRate_ini( uint8 node_num,uint32 BaudRate_u32 );





/* Macros Local To This Module                                          */
/* ===========================                                          */

/*{macro_definition...}*/

/* Exported RAM-Definitions                                             */
/* ========================                                             */

/* Definition of variables to be exported to other modules but not      */
/* relevant for application                                             */

/*{global_ram_definition...}*/

/* Imported RAM-Definitions                                             */
/* ========================                                             */

/* Declaration of variables to be imported from other modules but not   */
/* relevant for application                                             */

/*{extern_ram_definition...}*/

/* Global Prototypes                                                    */
/* =================                                                    */

/* Declarations (Prototypes) of functions                               */

/*{global_function_prototype...}*/

/* Inline Functions                                                     */
/* ================                                                     */

/* Declarations of inline functions                                     */

/*{inline_function...}*/

#endif	// CAN_MACRO_H_
