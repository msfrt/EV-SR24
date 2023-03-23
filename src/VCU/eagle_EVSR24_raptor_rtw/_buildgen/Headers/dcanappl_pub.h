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
 * $Filename__:dcanappl_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:BUR6KOR$ 
 * $Date______:04.05.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:dcanappl_pub$ 
 * $Variant___:8.9.2$ 
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
 * 8.9.2; 0     04.05.2012 BUR6KOR
 *   Migrated from clearcase: B_DIAG.9.0.2,  B_DIAG_Conf.9.0.2.
 * 
 * 8.8.0; 0     19.12.2008 MXA2SI
 *   Migrated from clearcase : B_DIAG_Conf.8.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DCANAPPL_PUB_H
#define _DCANAPPL_PUB_H

/*!
 *********************************************************************
 * \moduldescription
 *          configuration header file for Dcan layer
 *
 * \scope   CONF
 *********************************************************************
 */

/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */


#define     DCAN_PREEMPTABLE   1
#define     DCAN_NOTPREEMPTABLE   0
#define     DCAN_DEFAULT_PROT   0



/*
 **************************************************************************************************
 *    External data
 **************************************************************************************************
 */

__PRAGMA_USE__diagcom__10ms__constant__s32__START
extern Dcan_conf_t Dcan_drConf_cs;
__PRAGMA_USE__diagcom__10ms__constant__s32__END

#ifdef DIAG_MASTER_SLAVE
__PRAGMA_USE__diagcom__10ms__constant__s32__START

extern Dcan_conf_t Dcan_drConfSlave_cs;
__PRAGMA_USE__diagcom__10ms__constant__s32__END

#endif
/*
 **************************************************************************************************
 *    Function prototypes
 **************************************************************************************************
 */
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
extern void Dcan_Co_Proc_Ini (void);
extern bool Dcan_CheckCondition(void);
extern void Dcan_SessionTimeout(void);
extern bool Dcan_OBDCheckCondition(void);
extern bool Dcan_SBCheckCondition(void);

/* function for setting handle for event response tx. */
extern void Dcan_SetEventConfig(void);
extern bool Dcan_GetMsgState(void);

#if((DIAGCOM_RDPI_SY != DIAGCOM_RDPI_DISABLED) && (DIAG_RDPIRESPTYPE2_ENABLE != FALSE))
/* function to transmit message from Diag bypassing Tp */
extern void Dcan_CanTransferMsg(uint8* txBuf_pu8, uint8 txLen_u8);
#endif

__PRAGMA_USE__CODE__diagcom__NormalSpeed__END


#endif /* _DCANAPPL_PUB_H */
