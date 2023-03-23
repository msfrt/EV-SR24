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
 * $Filename__:msc_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:24.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:msc_pub$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_pub.h
 *      Version: \main\basis\b_CORE\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MSC_PUB_H
#define _MSC_PUB_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * Public header for the MSC low level driver.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/**
 set this to FALSE to be independent from DAMOS (for delivery to external customers)
 */
#ifndef MSC_USE_DAMOS
#define MSC_USE_DAMOS       (TRUE)
#endif

/* bit positions for public flags of command status (also used by PCP therefore no type classifier used) */
#define MSC_ST_ACCEPTED_BP              0       /**< MSC command is entered into the MSC command queue */
#define MSC_ST_COMPLETED_BP             1       /**< MSC command is completed */
#define MSC_ST_ERR_QUEUE_FULL_BP        2       /**< MSC command queue full error */
#define MSC_ST_ERR_USFRM_PRTY_BP        3       /**< upstream parity error */
#define MSC_ST_ERR_US_TOUT_BP           4       /**< upstream timeout error */
#define MSC_ST_ERR_US_BP                5       /**< upstream error (unexpected or missing upstream frame) */

/* masks for public flags of command status (also used by PCP therefore no type classifier used) */
#define MSC_ST_ACCEPTED_MSK             (1 << MSC_ST_ACCEPTED_BP)
                                                /**< The accepted flag is used in the MSC_Shutdown function to
                                                     detect unfinished commands in the queue. Therefore it is
                                                     necessary that this flag is not cleared until completion */
#define MSC_ST_COMPLETED_MSK            (1 << MSC_ST_COMPLETED_BP)
#define MSC_ST_ERR_QUEUE_FULL_MSK       (1 << MSC_ST_ERR_QUEUE_FULL_BP)
#define MSC_ST_ERR_USFRM_PRTY_MSK       (1 << MSC_ST_ERR_USFRM_PRTY_BP)
#define MSC_ST_ERR_US_TOUT_MSK          (1 << MSC_ST_ERR_US_TOUT_BP)
#define MSC_ST_ERR_US_MSK               (1 << MSC_ST_ERR_US_BP)

/* combined error mask for public error flags of command status (also used by PCP therefore no type classifier used) */
#define MSC_ST_ERR_MSK                  (  MSC_ST_ERR_QUEUE_FULL_MSK                                                   \
                                         | MSC_ST_ERR_USFRM_PRTY_MSK                                                   \
                                         | MSC_ST_ERR_US_TOUT_MSK                                                      \
                                         | MSC_ST_ERR_US_MSK)

/* MSC queue states, returned by Msc_GetQueueSt() */
#define MSC_QUEUE_INACTIVE              0UL     /**< MSC queue is not active */
#define MSC_QUEUE_ACTIVE                1UL     /**< MSC queue is active */
#define MSC_QUEUE_LOCKED                2UL     /**< MSC queue is locked, this state is used to flush the MSC
                                                     queue when switching from active to inactive MSC queue */

/* macros for Msc_GetMux() and Msc_SetMux() interfaces */
#define MSC_MUX_DD                      0x00000000UL
#define MSC_MUX_ALTIN                   0xAAAAAAAAUL
#define MSC_MUX_ALTIN_INV               0xFFFFFFFFUL


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void    Msc_PrePort_Proc_Ini(void);
extern void    Msc_Proc_Ini(void);
extern void    Msc_Proc_IniEnd(void);
extern void    Msc_Shutdown(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool    Msc_ActvCmd(uint32 idxDev_u32, uint32 idxCmd_u32);
extern void    Msc_SndCmdImmd(uint32 idxDev_u32, uint32 xCmd_u32);
extern uint32  Msc_GetQueueSt(void);
extern uint32  Msc_ShDwnTrans(uint32 idxDev_u32, uint32 xCmd_u32, uint32 numUsFrm_u32, uint8 * xUsBuf_pau8);

extern uint32  Msc_GetCmd(uint32 idxDev_u32, uint32 idxCmd_u32);
extern uint32  Msc_GetCmdSt(uint32 idxDev_u32, uint32 idxCmd_u32);
extern uint8 * Msc_GetUsBuf(uint32 idxDev_u32, uint32 idxCmd_u32);
extern void    Msc_SetCmd(uint32 idxDev_u32, uint32 idxCmd_u32, uint32 xCmd_u32);
extern void    Msc_SetNumUsFrm(uint32 idxDev_u32, uint32 idxCmd_u32, uint32 numUsFrm_u32);

extern uint32  Msc_GetMux(uint32 idxSig_u32);
extern void    Msc_SetMux(uint32 idxSig_u32, uint32 xMux_u32);
extern uint32  Msc_GetDD(uint32 idxSig_u32);
extern void    Msc_SetDD(uint32 idxSig_u32, uint32 xVal_u32);
extern void    Msc_ShOff(uint32 idxDev_u32);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* _MSC_PUB_H */
#endif
