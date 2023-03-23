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
 * $Filename__:lin_api_pub.h$ 
 * 
 * $Author____:STGOLLNI$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MNE2KOR$ 
 * $Date______:13.04.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:lin_api_pub$ 
 * $Variant___:1.5.0$ 
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
 * 1.5.0; 1     13.04.2011 MNE2KOR
 *   removal of MISRA warnings
 * 
 * 1.5.0; 0     10.10.2008 STGOLLNI
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LIN_API_PUB_H
#define _LIN_API_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      Definition of alias to support the LIN API specified by the LIN
 *                      Recommended Practice
 *
 * scope               API
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* map the LIN spec interface names to our Lin driver API */
#define l_ifc_init          Lin_NodeInit
#define l_ifc_connect       Lin_Connect
#define l_ifc_disconnect    Lin_Disconnect
#define l_ifc_ioctl         Lin_IOControl

#ifdef LIN_SINGLEBYTETRANSFER
    #define l_ifc_rx            Lin_RxSingleByte
    #define l_ifc_tx            Lin_TxSingleByte
#else
    #define l_ifc_rx            Lin_RxBuffered
    #define l_ifc_tx            Lin_TxBuffered
#endif

#define l_sch_tick          Lin_SchedTick

#define l_bool_rd           Lin_BoolRead
#define l_u8_rd             Lin_Uint8Read
#define l_u16_rd            Lin_Uint16Read
#define l_bool_wr           Lin_BoolWrite
#define l_u8_wr             Lin_Uint8Write
#define l_u16_wr            Lin_Uint16Write
#define l_bytes_read        Lin_BytesRead
#define l_bytes_write       Lin_BytesWrite

#define l_ifc_goto_sleep    Lin_GotoSleep
#define l_ifc_wake_up       Lin_Wakeup
#define l_ifc_read_status   Lin_ReadStatus


/* map the LIN spec data types to our data types */
#define l_bool              bool
#define l_u8                uint8
#define l_u16               uint16
#define l_ioctl_op          Lin_IOCtrlOp_t


/*
 ***************************************************************************************************
 * Inline functions
 ***************************************************************************************************
 */
	  
 static __inline__ bool l_sys_init(void);
 static __inline__ void l_sch_set( uint8 numNodeId_u8, Lin_SchedTabEntry_t *schedTab_pcs,
                                  uint8 numEntryPoint_u8)  ;

/* system init corresponds to general init */
 static __inline__ bool l_sys_init(void)
 {
    Lin_Co_Proc_Ini();
    return TRUE;
 }

/* only permanent switching is supported by LIN API */
static __inline__ void l_sch_set( uint8 numNodeId_u8, Lin_SchedTabEntry_t *schedTab_pcs,
                                  uint8 numEntryPoint_u8)
{
    Lin_SchedSet(numNodeId_u8, schedTab_pcs, numEntryPoint_u8, LIN_SCHEDTAB_PERMANENT);
}


/* _LIN_API_PUB_H                                                                                 */
#endif
