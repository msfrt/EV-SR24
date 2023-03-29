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
 * $Filename__:i14229_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:30.11.2012$
 * $Class_____:SWHDR$
 * $Name______:i14229_pub$
 * $Variant___:5.7.1$
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
 * 5.7.1; 0     30.11.2012 JAG2ABT
 *   exchanged header file for a buggy file FC:I14229_Tpr
 * 
 * 5.6.0; 0     30.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229_pub.h
 *      Version: \main\14
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _I14229_PUB_H
#define _I14229_PUB_H


/* if ring buffer is not enabled then it must work as in the past without the ring buffer */
#ifdef DIAGCOM_USE_RINGBUFFER
#undef DIAGCOM_USE_RINGBUFFER
#endif

#ifndef DIAGCOM_RINGBUF_SY
#define DIAGCOM_USE_RINGBUFFER  FALSE
#else
#define DIAGCOM_USE_RINGBUFFER DIAGCOM_RINGBUF_SY
#endif


/* Check for response on event enabled */
#ifndef DIAGCOM_RESPONEVT_SY
#define DIAGCOM_RESPONEVT_SY 1
#endif

/* Check for severity and functional unit is enabled through system constant */
#ifndef I14229_RDTCSEVERITY_SY
#define I14229_RDTC_DISABLE_SEVERITY 0
#else
#define I14229_RDTC_DISABLE_SEVERITY I14229_RDTCSEVERITY_SY
#endif


/**
 ***************************************************************************************************
 * \moduledescription
 *      Public header file for ISO14229 module : ISO I14229 -1 services
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START

extern void I14229_Co_Proc_Ini(void);




extern void I14229_Tpr(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
extern void I14229_Cc(void *not_used, DiagCom_Msg_t *Msg_ps);


#if(DIAGCOM_RESPONEVT_SY != DIAGCOM_ROE_DISABLED)
extern void I14229_Roe(void *Config_pv, DiagCom_Msg_t *Msg_ps);
extern void I14229_Roe_ComIni(void);
#endif

extern void I14229_Rmba_Ini(void);
extern void I14229_Rmba(void *Config_pv, DiagCom_Msg_t *Msg_ps);
extern void I14229_Wmba_Ini(void);
extern void I14229_Wmba(void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif /* _I14229_PUB_H */
