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
 * $Filename__:can_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:GPG1KOR$ 
 * $Date______:25.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:can_inl$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     25.05.2010 GPG1KOR
 *   CAN package updated to remove Or suppress MISRA warnings.
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: can_inl.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CAN_INL_H
#define _CAN_INL_H

/**
 ***************************************************************************************************
 * moduledescription
 *               Inline functions of the CAN module.
 *
 * scope         API
 ***************************************************************************************************
 */
#ifdef CAN_USE
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* local inline keyword */
/* all inline function are declared as static, so they are always inlined. */
/* consequences: - there is no "linkable" instance of the functions        */
/*               - function pointers to these functions can not be defined */
#define CAN_INLINE static __inline__

/*
 ***************************************************************************************************
 * Variable declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__can__1_5ms__RAM__arr32__START

   /* Node BaudRate Array */
  extern uint32  Can_NodeBaudrate_u32[];

__PRAGMA_USE__can__1_5ms__RAM__arr32__END

 /* CAN Message Details Structure */
 extern Can_MsgConfig_t *Can_MsgDetails_pcs;

__PRAGMA_USE__can__1_5ms__RAM__arr8__START

  /* Buffer alloted to Message by CAN Driver */
  extern uint8  Can_MsgBuffer_u8[];

  /* Message Status Array         */
  extern uint8  Can_MsgStatus_u8[];	

__PRAGMA_USE__can__1_5ms__RAM__arr8__END


__PRAGMA_USE__can__1_5ms__InitRAM__s32__START

  /* Active tables at runtime */
  extern Can_Variant_t* Can_ActiveVariant_a[];

__PRAGMA_USE__can__1_5ms__InitRAM__s32__END

/*
 ***************************************************************************************************
 * Inline function declarations
 ***************************************************************************************************
 */

CAN_INLINE uint32  Can_GetNodeBaudRate(uint8 node_u8);
CAN_INLINE uint8 Can_ReadMsgBuffer(uint16 msgHandle_u16);
CAN_INLINE Can_MsgConfig_t * Can_ReadMsgDetails(uint16 msgHandle_u16);
CAN_INLINE uint8 Can_ReadMsgDlc(uint16 msgHandle_u16);
CAN_INLINE uint32 Can_ReadMsgId(uint16 msgHandle_u16);
CAN_INLINE void Can_SetActiveVariant(uint8 user_u8, const Can_Variant_t * variant);
CAN_INLINE uint8 Can_GetRxIntrMsgStatus(uint16 msgHandle_u16);

/**
 ***************************************************************************************************
 * Can_GetNodeBaudRate - returns baudrate for valid CAN device.
 *
 * This function returns the baudrate at which the node is operating.
 *
 * \param  node_u8  CAN device number
 * \return
 * \retval          uint32
 * \seealso         CAN-API description
 * \usedresources
 *\ return      :  returns baudrate for valid node ,else returns 0
 ***************************************************************************************************
 */

CAN_INLINE uint32  Can_GetNodeBaudRate(uint8 node_u8)
{
    return(Can_NodeBaudrate_u32[node_u8]);
}

/**
 ***************************************************************************************************
 * Can_ReadMsgBuffer - returns the CAN Buffer used for the Configured Message.
 *
 * This function returns the CAN Buffer Used for a configured CAN Message handle.
 *
 * \param  msgHandle_u16  Message handle in the table
 * \return
 * \retval          uint32
 * \seealso         CAN-API description
 * \usedresources
 *\ return      :  returns the Used Buffer number
 ***************************************************************************************************
 */
CAN_INLINE uint8 Can_ReadMsgBuffer(uint16 msgHandle_u16)
{
    /* Return the corresponding data length */
    return(Can_MsgBuffer_u8[msgHandle_u16]);
}

 /**
 ***************************************************************************************************
 * Can_ReadMsgDetials - returns the  Message details Configured.
 *
 * This function returns the configured Message Details for a message handle.
 *
 * \param  msgHandle_u16  Message handle in the table
 * \return
 * \retval          uint32
 * \seealso         CAN-API description
 * \usedresources
 *\ return      :  returns the Message Details
 ***************************************************************************************************
 */
CAN_INLINE Can_MsgConfig_t * Can_ReadMsgDetails(uint16 msgHandle_u16)
{
    /* Return the corresponding data length */
    return(&Can_MsgDetails_pcs[msgHandle_u16]);
}

 /**
 ***************************************************************************************************
 * Can_ReadMsgDlc - returns the  Message Data Length.
 *
 *This function returns the configured Data Length for a message handle.
 *
 * \param  msgHandle_u16  Message handle in the table
 * \return
 * \retval          uint32
 * \seealso         CAN-API description
 * \usedresources
 *\ return      :  returns the Data Length
 ***************************************************************************************************
 */
CAN_INLINE uint8 Can_ReadMsgDlc(uint16 msgHandle_u16)
{
    /* Return the corresponding data length */
    return(Can_MsgDetails_pcs[msgHandle_u16].msgDlc_u8);
}

 /**
 ***************************************************************************************************
 * Can_ReadMsgId - returns the  Message identifier.
 *
 * This function returns the configured Identifer for a message handle.
 *
 * \param  msgHandle_u16  Message handle in the table
 * \return
 * \retval          uint32
 * \seealso         CAN-API description
 * \usedresources
 *\ return      :  returns the identifier
 ***************************************************************************************************
 */
CAN_INLINE uint32 Can_ReadMsgId(uint16 msgHandle_u16)
{
    /* Return the corresponding identifier  */
    return(*(Can_MsgDetails_pcs[msgHandle_u16].msgID_pcu32));
}


/**
 ***************************************************************************************************
 * Can_SetActiveVariant -  Set the given Message table active for a user.
 *
 * This function sets the given Message table active for given user.
 *
 * \param       user_u8   Enumerator of Can_User_u8
 * \param       variant Address of constant variant structure
 * \return     None
 * \seealso         CAN-API description.
 ***************************************************************************************************
 */
CAN_INLINE void Can_SetActiveVariant(uint8 user_u8, const Can_Variant_t * variant)
{

    /* update the Variant table */
    /* MISRA RULE 45 VIOLATION: The cast must take place here. */
    Can_ActiveVariant_a[user_u8] =(Can_Variant_t *)(uint32)(variant);
}

/**
 ***************************************************************************************************
 * Can_GetRxIntrMsgStatus - 
 * Returns the status of message reception which are configured for interrupt.
 * This function has to be called only in the callback function of receive message
 *
 * \param    msgHandle_u16  Message handle in the Rx Message 
 * \return	 The received message status (only for interrupt enabled receive messages)
 * \retval    0x08u     CAN Msg Rx Corrupt    
 * \retval    0x01u     CAN Msg Rx Sucessful 
 * \usedresources
 ***************************************************************************************************
 */

CAN_INLINE uint8 Can_GetRxIntrMsgStatus(uint16 msgHandle_u16)
{
	return(Can_MsgStatus_u8[msgHandle_u16]);
}


/* end of #ifdef CAN_USE */
#endif

/* end of #ifdef block _CAN_INL_H */
#endif
