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
 * $Filename__:i14229_rc_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:23.11.2011$
 * $Class_____:SWHDR$
 * $Name______:i14229_rc_pub$
 * $Variant___:16.1.0_1$
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
 * 16.1.0_1; 0     23.11.2011 JAG2ABT
 *   Implement RC services for customer
 * 
 * 5.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from Clearcase :
 *   B_BASSVR.7.0.0
 *   
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _I14229_RC_PUB_H
#define _I14229_RC_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 *      Public Header-file for ISO I14229 -1 : Routine control service
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define RC_START_ROUTINE            0x01  /* Start routine */
#define RC_STOP_ROUTINE             0x02  /* Stop routine  */
#define RC_REQUEST_ROUTINE_RESULT   0x03  /* Request routine results */

#define RC_MINMUM_REQUEST_LENGTH    0x03  /* Minimum request length : RCTP + RI_ (B1 + B2) */
#define RC_MINMUM_RESPONSE_LENGTH   0x03  /*Minimum response length : RCTP + RI_ (B1 + B2) */

#define I14229_RC_ST_IDLE      0   /* Routine control service - idle state */
#define I14229_RC_ST_RUNNING   1   /* Routine control service - routine is already started */
#define I14229_RC_ST_WAIT      2   /* Routine control service - routine is running and
                                         in wait state - in this state routine has to send a
                                         negative response */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Summary of configuration constants: */
typedef struct
{
  uint16  const (*RoutineId_pcu16);         /* Pointer to start location of a range supported identifier */
  uint16  const (*RoutineEndId_pcu16);      /* Pointer to end location of a range supported identifier */
  bit32   const (*Protection_pcb32);        /* Pointer to array of bitfields for protection  */
  uint16  (*const(*StartRoutine_pcf))(DiagCom_Msg_t*);   /* Pointer to array of pointers to
                                                                Start  routines*/
  uint16  (*const(*StopRoutine_pcf))(DiagCom_Msg_t*);    /* Pointer to array of pointers to
                                                                Stop  routines*/
  uint16  (*const(*RequestRoutine_pcf))(DiagCom_Msg_t*); /* Pointer to array of pointers to
                                                                Request  routines*/
  uint16   numRoutineId_u16;        /* number of routines identifiers  */
}
I14229_RC_Config_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_RC(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif /* _I14229_RC_PUB_H */
