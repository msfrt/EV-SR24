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
 * $Filename__:can_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AKN4KOR$ 
 * $Date______:23.10.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:can_priv$ 
 * $Variant___:1.20.0$ 
 * $Revision__:1$ 
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
 * 1.20.0; 1     23.10.2013 AKN4KOR
 *   Removed macro CAN_ALIGN_BYTES
 * 
 * 1.20.0; 0     15.10.2013 BUR6KOR
 *   A new interface is provided which will append SAE J1850 8bit CRC for the 
 *   
 *     received message if the received DLC is equal to 8 and application buffer
 *    is 
 *   
 *     alligned to 16bit boundary.
 *   
 *     Projects which want to use this new interface should allocate buffer of 
 *   size 
 *   
 *     DLC+1.
 * 
 * 1.17.0; 0     25.01.2012 GPG1KOR
 *   Single hex for series and development ECU - VM-I Requirements are 
 *   implemented onto PLS MX17 platform with configuration tag.
 * 
 * 1.16.0; 0     16.09.2011 GPG1KOR
 *   Changes in CAN DpramCheck - Check of ID and DLC fields of msg object is 
 *   done along with MODATA register.
 * 
 * 1.15.1; 0     23.08.2011 GPG1KOR
 *   Correction of initialization of MCR register to select required clock for 
 *   Machine type TC1724.
 * 
 * 1.14.0; 2     10.02.2011 GPG1KOR
 *   Reset Node status register to clear the Pending Error interrupt of Nodes.
 * 
 * 1.14.0; 1     08.02.2011 GPG1KOR
 *   TC1724 support - Changes due to addition of new bit field to select the 
 *     module clock (CLKSEL) in MCR register.
 * 
 * 1.14.0; 0     07.01.2011 GPG1KOR
 *   Updated for follwing changes: 
 *   
 *   Remove PacoIn and move the contents to PavaSt
 *   
 *   Perl script improvement for certain CPU types to give correct warninig 
 *   information when more than maximum supported buffers are configured.
 *   
 *   Removal of Cchecker warnings of Can_auto_conf.c file.
 * 
 * 1.13.0; 0     25.10.2010 GPG1KOR
 *   CAN Package updated for following changes.
 *      1. Bugfix for can_init.
 *       If CAN buffers are initialized before program control comes to 
 *   Can_Proc_Ini 
 *     (Eg: in CB, SB),
 *       then CAN driver may not properly initialize the CAN buffers under 
 *   certain 
 *     circumstances.
 *      2. Changes done to start only the configured nodes at the end of 
 *     can_proc_ini.
 *      3. Changes done to remove compiler warnings, which are generated while 
 *     integrating latest CAN package into an older HWE package
 *       due to missing CPU types.
 * 
 * 1.12.0; 1     18.05.2010 GPG1KOR
 *   Updated for the changes done to remove workaround for Errata - 
 *   MULTICAN_TC.021: Wrong MultiCAN identifier-transmission.
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CAN_PRIV_H
#define _CAN_PRIV_H


/**
 ***************************************************************************************************
 * \moduledescription
 * CAN module - private interface header
 *
 * \scope           [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#ifdef CAN_USE
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define CAN_MSGIN_BUFFER_RESET_U16    0xFFFFu        /*< Reset Value for Message in Buffer Global Variable  */
#define CAN_MSGBUFFER_RESET_U8        0xFFu          /*< Reset Value for Message in Buffer Global Variable  */
#define CAN_MSG_STATUS_RESET_U8       0x00u          /*< Reset Value for Message Status Global Variable     */
#define CAN_NODE_STATUS_RESET_U16     0x00u          /*< Reset Value for Node Status Global Variable        */
#define CAN_NODE_BAUDRATE_RESET_U32   0xFFFFFFFFUL   /*< Reset Value for Node Baudrate GlobalVariable       */
#define CAN_REG_NPCR_RESET            0x00           /*< NPCR Register Initial Reset Value                  */
#define CAN_REG_NECNT_RESET           0x600000UL     /*< NECNT Register Initial Reset Value                 */
#define CAN_REG_NSR_RESET             0x0            /*< NSR Register Initial Reset Value                   */
#define CAN_REG_MODATA_RESET          0xFFFFFFFFul   /*< MODATA Register Initial Reset Value                */
#define CAN_MOFCR_RESET				  0x00000000ul /* MOFCR Register Initial Reset Value */	
#define CAN_MOAR_RESET				  0x00000000ul /* MOAR Register Initial Reset Value */	
#define CAN_MSIMASK_RESET			  0x00000000ul /* MSIMASK Register Initial Reset Value */	
#define CAN_MOIPR_RESET			  	  0x00000000ul /* MOIPR Register Initial Reset Value */	
#define CAN_MOFGPR_RESET			  0x00000000ul /* MOFGPR Register Initial Reset Value */
#define CAN_TC1724_MCR_CLKSEL		  0x00000001ul /* MCR Register value to select control clock fclc */
#define CAN_TC1724_MCR_RESET		  0x00000000ul /* Reset value of MCR register - clear CLKSEL */
#define CAN_NSR_RESET				  0x00000000ul /* NSR Register Initial Reset Value */
	
#define CAN_MSPND_RESET			  	  0x00000000ul /* MSPND Register Initial Reset Value */	
#define CAN_MAX_MSPND				  0x08u			/* Maximum number of MSPND regusters */

#define CAN_REG_NPCR_TC1782_CAN2      0x02u          /*< TC1782 CAN 2 NPCR Register Value (only Port 4)     */


#define CAN_BUSOFF_INTR_SRC           0x5UL          /*< Bus off Interrupt Source                           */
#define CAN_REG_MSGPND_RESET          0x0u           /*< MSGPND Register Reset Value                        */

#define CAN_RX_RETRIES                0x2u           /*< Number Can Read Retries in Case of Data Corruption */
#define CAN_MOFGPR_CURPOS             16             /* Position of CUR filed in MOFGPR register */

#define CAN_CRC_INITIAL_U8			  0xFFu           /* Initial value for CRC calculation */

/*
 ***************************************************************************************************
 * Extern Declaration -- START
 ***************************************************************************************************
 */

__PRAGMA_USE__can__1_5ms__RAM__x32__START

    /* Can Buffer Queue Start */
    extern uint32 Can_BufferQueueStart_u32;

    /* Global variable to maintain the count of number function calls - Cpu_DisableSRN ()*/
    extern uint32 cpu_disableSRN_Nestedprot_u32;

   /* Can Buffer Queue End */
    extern uint32 Can_BufferQueueEnd_u32;

__PRAGMA_USE__can__1_5ms__RAM__x32__END

__PRAGMA_USE__can__1_5ms__constant__x16__START

    /* Number of configured Messages */
    extern const uint16 Can_numMessages_cu16;

    /* End of CAN Messages            */
    extern const uint16 Can_Msg_End_cu16;

    /* Start of FIFO CAN Messages */
    extern const uint16 Can_FifoMsg_Start_cu16;

    /* End of FIFO CAN Messages        */
    extern const uint16 Can_FifoMsg_End_cu16;

    /* Start of Gateway Messages */
    extern const uint16 Can_GatewayMsg_Start_cu16;

    /* End of Gateway CAN Messages */
    extern const uint16 Can_GatewayMsg_End_cu16;

__PRAGMA_USE__can__1_5ms__constant__x16__END

__PRAGMA_USE__can__1_5ms__constant__x8__START

    /* Number of configured CAN Nodes */
    extern const uint8 Can_numNode_cu8;

    /* Number of configured Required Baudrate at Run time */
    extern const uint8 Can_numBdrate_cu8;

    /* Maximum buffers in controller */
    extern const uint8 Can_MaxBuffers_cu8;

    /* Maximum Nodes in controller */
    extern const uint8 Can_MaxNodes_cu8;

    /* Number of Users for CAN Driver  */
    extern const uint8 Can_Users_cu8;

    /* number of Configured Transmit Queues */
    extern const uint8 Can_numTxQueues_cu8;

    /* number of Configured Receive Queues */
    extern const uint8 Can_numRxQueues_cu8;

__PRAGMA_USE__can__1_5ms__constant__x8__END

__PRAGMA_USE__can__1_5ms__RAM__x8__START

    /* DPRAM Status  Array         */
    extern uint8  Can_DpramStatus_u8;

    #if (CAN_SINGLE_HEX_FUNC)
    /* Global flag used to indicate APPL CAN avaibility */
    extern uint8 ApplCan_u8 ;
	#endif

__PRAGMA_USE__can__1_5ms__RAM__x8__END

__PRAGMA_USE__can__1_5ms__RAM__arr16__START

    /* Message Handle in Buffer */
    extern uint16  Can_MsgInBuffer_u16[];

    /* Node Status Array */
    extern uint16  Can_NodeStatus_u16[];

__PRAGMA_USE__can__1_5ms__RAM__arr16__END


__PRAGMA_USE__can__1_5ms__RAM__s32__START

    /* can Tx Queue Message details */
    extern Can_TxQMsgConfig_t  Can_TxQMsgConfig_s[];

    /* Const Baudrate  Structure */
    extern  Can_Baudrate_t *Can_Baudrate_pcs;

    /* can node details pointer structure */
    extern Can_dev_t *Can_NodeDetails_pcs;

__PRAGMA_USE__can__1_5ms__RAM__s32__END

__PRAGMA_USE__can__1_5ms__constant__s32__START

    /* can Tx Queue details */
    extern const Can_TxQConfig_t Can_Tx_Qdet_cs[];

    /* can Rx Queue details */
    extern const Can_RxQConfig_t Can_Rx_Qdet_cs[];

__PRAGMA_USE__can__1_5ms__constant__s32__END

/*
 ***************************************************************************************************
 * Extern Declaration -- END
 ***************************************************************************************************
 */
/* CAN_USE*/
#endif

#endif
