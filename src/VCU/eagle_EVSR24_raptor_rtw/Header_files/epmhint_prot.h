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
 * $Filename__:epmhint_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SPW5KOR$
 * $Date______:13.03.2014$
 * $Class_____:SWHDR$
 * $Name______:epmhint_prot$
 * $Variant___:1.27.1$
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
 * 1.27.1; 0     13.03.2014 SPW5KOR
 *   RQONE00326887:changes to correct resyncronisation due to high syncro 
 *   latency
 * 
 * 1.27.0; 0     03.09.2013 TSL2FE
 *   RQONE00052145: Correction of Header-File-Concept
 * 
 * 1.26.0; 2     21.11.2011 GSU2KOR
 *   Review changes
 * 
 * 1.26.0; 1     12.10.2011 GSU2KOR
 *   Changes after review
 * 
 * 1.26.0; 0     06.10.2011 GSU2KOR
 *   RCMS00982183
 *   1\4-TDC ISR: interrupt service routine to call different tasks every 45 CrS
 * 
 * 1.25.0; 0     21.09.2010 MKC2FE
 *   Restrukturierung: Seperate FC fuer CPC- und CPU-Betrieb
 * 
 * 1.24.0; 0     09.06.2010 PIE2SI
 *   KEEPDGISYNC: new interrupt type definition
 * 
 * 1.23.0; 0     17.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.22.0; 0     01.07.2009 LDB2FE
 *   Initial import from Clearcase 
 *      File name: epmhint_prot.h
 *      Version: \main\basis\b_Epm\13
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHINT_PROT_H
#define _EPMHINT_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  protected interface of EPM Hardware Encapsulation - interrupt system
 *
 * \scope                       INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "epmhint_auto_prot.h"

#ifndef _LIBRARYABILITY_H
#include "epmhint_intgen_dat.h"
#endif

#ifndef EPMHWE_SWTCPU_SY
  #error >>>> 'EPMHWE_SWTCPU_SY' undefined !
#endif


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/** This enumerator defines the interrupt-types (and sources) which could be enabled. The enumerator
    values are used as parameter for the function EpmHInt_SetEnableInt and to demask the value
    returned from the function EpmHInt_GetIntTyp. For each interrupt-type one bit is used.
    The variable EpmHInt_numIntTyp is not the enumerator-type. The enumerator is only used for a
    better documentation possibility with doxygen. */
enum EpmHInt_numIntTyp_t
{										/**<                                        name   BitPos */
    EPMHINT_RESET       = 0x00000001,   /**< CrS-IR: change of CrS-state machine to RESET     :0  */
    EPMHINT_HALT        = 0x00000002,   /**< CrS-IR: change of CrS-state machine to HALT      :1  */
    EPMHINT_WAITSIG     = 0x00000004,   /**< CrS-IR: change of CrS-state machine to WAITSIG   :2  */
    EPMHINT_IGNTIME     = 0x00000008,   /**< CrS-IR: change of CrS-state machine to IGNTIME   :3  */
    EPMHINT_IGNFRSTEDGE = 0x00000010,   /**< CrS-IR: change of CrS-state machine toIGNFRSTEDGE:4  */
    EPMHINT_IGNEDGE     = 0x00000020,   /**< CrS-IR: change of CrS-state machine to IGNEDGE   :5  */
    EPMHINT_WAITGAP     = 0x00000040,   /**< CrS-IR: change of CrS-state machine to WAITGAP   :6  */
    EPMHINT_GAPFOUND    = 0x00000080,   /**< CrS-IR: change of CrS-state machine to GAPFOUND  :7  */
    EPMHINT_TIMERMODE   = 0x00000100,   /**< CrS-IR: change of CrS-state machine to TIMERMODE :8  */
										/**< CrS-IR: chg of CrS-state machine to  :9  */
										/**< CrS-IR: chg of CrS-state machine to  :10 */
    EPMHINT_KEEPDGISYNC = 0x00000800,	/**< CrS_IR: change of CrS-state machine KEEPDGISYNC  :11 */
    EPMHINT_CRS         = 0x000019C2,   /**< CrS-IR: only changes on CrS-state machine with
                                             information for CPU generate a IR Bits:1,6,7,8,11,12 */

    EPMHINT_RESYNCUPPERLVL = 0x00001000,/**< CrS-IR: interrrupt of type RESYNCUPPERLVL        :12 */

    EPMHINT_CAS_I1      = 0x00010000,   /**< CaS-IR: interrupt from CaS I_1 is generated      :16 */
    EPMHINT_CAS_O1      = 0x00020000,   /**< CaS-IR: interrupt from CaS O_1 is generated      :17 */
    EPMHINT_CAS_I2      = 0x00040000,   /**< CaS-IR: interrupt from CaS I_2 is generated      :18 */
    EPMHINT_CAS_O2      = 0x00080000,   /**< CaS-IR: interrupt from CaS O_2 is generated      :19 */
    EPMHINT_CAS         = 0x000F0000,   /**< CaS-IR: all CaS interrupts are generated 16,17,18,19 */

    EPMHINT_SYNCRO      = 0x40000000    /**< Syncro-IR is generated                            :30*/
};

#define EPMHINT_RESYNCUPPERLVL_POS   12    /**< CrS-IR: bit position of RESYNCUPPERLVL */
#define EPMHINT_SYNCHRO_BIT          30    /** syncro-bit     */
#define EPMHINT_SEMA_BIT             31    /** semaphore-bit  */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

#if (EPMHWE_SWTCPU_SY == 1) // CPU
/**
 * Hardware interrupt generator data
 */
typedef struct
{
    volatile                    uint32  SigEvtCaS;
    volatile enum EpmHCrS_stSigMode_t   stSigModeLst;
    volatile                    uint32  numSyncInt;
    volatile                    uint32  stInt;
    volatile                    uint32  IntTyp;
    volatile                    uint32  ctInc;

} EpmHInt_IntGenCfg_t;
#endif


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************/
extern volatile uint32  EpmHInt_AgIncTrans;

#if (EPMHWE_SWTCPU_SY == 1) // CPU
/**
 * Hardware interrupt generator data
 */
extern EpmHInt_IntGenCfg_t  EpmHInt_IntGenCfg;
#endif


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Initialize the Interrupt generator
 *
 * This function initializes the interrupt generator of the EPM. The crankshaft interrupt is
 * enabled.
 ***************************************************************************************************
 */
extern void EpmHInt_Init(void);


/**
 ***************************************************************************************************
 * Measure-Process of EpmHInt to measure Latency between activation of CPU-Task from PCP and real
 * activation of CPU-Task
 ***************************************************************************************************
 */


/**
 ***************************************************************************************************
 * Set the next syncro interrupt
 *
 * This function sets the next syncro-interrupt. The function gets the tooth-number at which the
 * next IR must be generated. The tooth-number relies to the increment-counter of the crankshaft-
 * system.
 * The Syncro-IR is enabled.
 *
 * \param   numIncSyncInt: tooth-no at which the next IR should be generated
 ***************************************************************************************************
*/
extern void EpmHInt_SetNxtInt (sint16 numIncSyncInt);

/**
 ***************************************************************************************************
 * Configure the GTC for next angular event
 *
 * This function uses another interface function to convert the absolute angle position of the next
 * task into hardware angle base.This output of the interface function is directly copied into the
 * GTC comparator.
 ***************************************************************************************************
*/
extern void EpmHInt_AngleEvent_GtcUpdate (sint32 GtcTicks);



/**
 ***************************************************************************************************
 * Function to disable the anglular event interrupt
 * 
 * This function is called by the EpmSeq module during SyncIni task. Interrupt is disabled by 
 * clearing the SRE bit of the Interrupt Service Node.
 *
 ***************************************************************************************************
*/
void EpmHInt_AngleEvent_Disabl (void);
/**
 ***************************************************************************************************
 * Enable/Disable interrupts
 *
 * This function enables or disables the interrupts. The bits given in stInt represent the
 * interrupts which should be enabled. All other interrupt sources are disabled.
 *
 * \param   stInt Interrupt which should be enabled
 * \arg     EPMHINT_CRS enable crankshaft-interrupts (Single Bits could also be set)
 * \arg     EPMHINT_CAS enable/disable Camshaft-Interrupts (Single Bits could also be set)
 * \arg     EPMHINT_SYNCRO enable Syncro-Interrupt (this is automatically done by programming the
 *          next syncro-interrupt)
 * \arg     for single crankshaft- or camshaft interrupts refer to the values of the enumerator
 *          EpmHInt_numIntTyp_t
 ***************************************************************************************************
 */
extern void EpmHInt_SetEnableInt(uint32 stInt);


/**
 ***************************************************************************************************
 * Get interrupt type
 *
 * This function checks, if the PCP is changing the global interrupt type. If so, it reads the value
 * as long the PCP operates on this value. If the PCP is not changing the value, a copy of this
 * value is made and the global value is reset. The copy is returned to the calling function.
 *
 * \return  Interrupt-Type the values could appear together, e.g. EPMHINT_CRS & EPMHINT_CAS
 * \retval  EPMHINT_CRS crankshaft-interrupt - normaly only single bits should be set, for
 *          detailed interrupttype refer to the defines
 * \retval  EPMHINT_CAS camshaft-interrupt - normaly only single bits should be set, for
 *          detailed interrupttype refer to the defines
 * \retval  EPMHINT_SYNCRO syncro-interupt
 * \retval  to demask the interrupt type use the values of the enumerator EpmHInt_numIntTyp_t
 ***************************************************************************************************
*/
extern uint32 EpmHInt_GetIntTyp(void);


/**
 ***************************************************************************************************
 * Get value of increment counter at time of interrupt activation
 *
 * This function returns the value of EpmHInt_ctInc. This value is a copy of EpmHCrS_ctInc which is
 * made before the CPU-EPM-interrupt is set.
 * \return  EpmHInt_ctInc increment counter at time of interrupt activation
 ***************************************************************************************************
*/
extern uint8 EpmHInt_GetCtInc(void);


/**
 ***************************************************************************************************
 * Generate interrupts to CPU if requested
 *
 * This function generates the EPM- or CHAIN-interrupts after an event on the signal-line. If an old
 * interrupt is pending only the interrupttype-variable is changed and no new interrupt will be
 * generated.
 ***************************************************************************************************
*/
extern void EpmHInt_IntGen_CPU (void);

#endif
