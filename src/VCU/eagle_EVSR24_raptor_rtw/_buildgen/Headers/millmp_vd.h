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
 * $Filename__:millmp_vd.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:ZUZ2SI$ 
 * $Date______:11.10.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:millmp_vd$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 1     11.10.2012 ZUZ2SI
 *   after review
 * 
 * 1.6.0; 0     20.09.2012 ZUZ2SI
 *   MDG1 technology migration
 * 
 * 1.5.0; 1     30.08.2012 VIK9KOR
 *   Review change
 * 
 * 1.5.0; 0     29.08.2012 VIK9KOR
 *   Introduce CoDsplCtl_ErrLmpBlnDia intervention to control MIL in tester 
 *   active mode.
 *   
 * 
 * 1.4.0; 1     01.02.2012 MSL1COB
 *   To include activation of MIL lamp in a test mode when particular conditions
 *    are met.
 * 
 * 1.4.0; 0     04.01.2012 MSL1COB
 *   To activate MIL lamp in a tester mode when some special conditions are met.
 * 
 * 1.3.0; 0     20.01.2011 VIK9KOR
 *   (RCMS00824209): Activation of 2Hz MILLmp blinking based on ASW message.
 * 
 * 1.2.0; 0     15.10.2010 ZUZ2SI
 *         export MILLmp_stReqOn and MILLmp_stReqBln
 * 
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: MILLmp_VD
 *      Variant: 2.60
 *      Revision: 1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef     MILLMP_VD_H_ModId
#define     MILLMP_VD_H_ModId                /* module identifier */

 /* Include Headerfiles                                                  */
 /* ===================                                                  */

#include "memlay.h"


/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/

/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/

/* Constants                                                           */
/* =========                                                           */

/* Macros Local To This Module                                          */
/* ===========================                                          */

/* states */
#define MILLmp_PRESTRT_MSK          (0x01)
#define MILLmp_AFTSTRT_MSK          (0x02)
#define MILLmp_CRUISING_MSK         (0x04)
#define MILLmp_VISTST_MSK           (0x10)
#define MILLmp_RDNBLN_MSK           (0x20)
#define MILLmp_WAITFORSTRT_MSK      (0x40)

/* requisitioner */
#define MILLmp_DFES_MSK             (0x01)
#define MILLmp_DMDMIL_MSK           (0x02)
#define MILLmp_TRAECU_MSK           (0x04)
#define MILLmp_ECU1_MSK             (0x08)
#define MILLmp_ECU2_MSK             (0x10)
#define MILLmp_ECU3_MSK             (0x20)
/*#define MILLmp_reserved_MSK        (0x40)*/
#define MILLmp_SLV_MSK              (0x80)

#define MILLmp_OWNECU_MSK           (0x03)

/* requests */
#define MILLmp_NOREQ_MSK            (0x00)
#define MILLmp_MILON_MSK            (0x01)
#define MILLmp_MILBLN_MSK           (0x02)
/* MILLmp_MODE3VIS_MSK functionally not necessary any more,
   kept for stable inferface to other functions */
#define MILLmp_MODE3VIS_MSK         (0x04)

#define MILLmp_REQ_MSK              (0x03)

/* output for MILLmp_DD */
#define MILLmp_MILON                (255)    /* MIL ON         */
#define MILLmp_MILOFF               (0)      /* MIL OFF        */
#define MILLmp_MIL1HZ               (10)     /* MIL BLINK 1 HZ */
#define MILLmp_MIL2HZ               (5)      /* MIL BLINK 2 HZ */

/* encoding for the MIL output from DSM to CAN */
#define MILLmp_LMPOUT_MILOFF        (0)      /* MIL Off value to send via CAN */
#define MILLmp_LMPOUT_MIL4HZ        (1)      /* MIL blinks with 4Hz to send via CAN */
#define MILLmp_LMPOUT_MIL2HZ        (2)      /* MIL blinks with 2Hz to send via CAN */
#define MILLmp_LMPOUT_MIL1HZ        (3)      /* MIL blinks with 1Hz to send via CAN */
#define MILLmp_LMPOUT_MILON         (7)      /* MIL On value to send via CAN */



/* Exported RAM-Definitions                                             */
/* ========================                                             */

/* Definition of variables to be exported to other modules but not      */
/* relevant for application                                             */

 /* requests */
MEMLAY_USE_ENVRAM (extern uint8, MILLmp_stReqOn);
MEMLAY_USE_ENVRAM (extern uint8, MILLmp_stReqBln);

/* Imported RAM-Definitions                                             */
/* ========================                                             */

/* Declaration of variables to be imported from other modules but not   */
/* relevant for application                                             */

/* Global Prototypes                                                    */
/* =================                                                    */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
/* Function to set requests from requisitioner
   param source: ID of the requisitioner (e.g. MILLmp_DFES_MSK)
   param req: request (e.g. MILLmp_MILON_MSK) */
void MILLmp_VD_SetReq (uint8 source, uint8 req);

/* Returns the requested MIL state for the device driver */
uint8 MILLmp_VD_GetMIL (void);

/* Returns the state of the state machine */
uint8 MILLmp_VD_GetSt (void);

/* Returns external MIL_ON requests */
/* Function is used for calculation of PID$21 for all ECU in the vehicle */
/* MIL_BLINK is ignored, because only MIL_ON is relevant for the MIL status in PID$01 */
uint8 MILLmp_VD_GetExtReq(void);
/* map old name to the new name */
#define MILLmp_VD_GetExtRequ MILLmp_VD_GetExtReq


/* Returns if a MIL ON request exists
   This function is e.g. for the comunication between the slave and master
   for projects with 2 ECUs. The slave can send this information to the master,
   that he knows if there is a MIL ON request at the slave */
bool MILLmp_VD_ExistMILOnReq(void);

/* Returns if a MIL BLINK request exists
   This function is e.g. for the comunication between the slave and master
   for projects with 2 ECUs. The slave can send this information to the master,
   that he knows if there is a MIL BLINK request at the slave */
bool MILLmp_VD_ExistMILBlnReq(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END
#endif

