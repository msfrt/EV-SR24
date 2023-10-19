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
 * $Filename__:kndet_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:ceentral header for KnDet$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KHC2ST$ 
 * $Date______:19.08.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:kndet_prot$ 
 * $Variant___:2.5.0$ 
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
 * 2.5.0; 0     19.08.2010 KHC2ST
 *   further changes regarding new configuration concept
 *   
 * 
 * 2.4.0; 0     03.03.2010 KHC2ST
 *   new configuration concept, remove of hard FADC,DMA ressources
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   w
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef KNDET_PROT_H                                 /* protect multiple includes              */
#define KNDET_PROT_H


#ifndef _COMMON_H
#include <common.h>
#endif

#ifndef _SRVB_H
#include "srvb.h"  /* macros for bit handling */
#endif


#ifndef _CPU_H
#include "cpu.h"	   /* DMA, ERU, SCU, FADC definitions*/
#endif

#ifndef _GPTA_H
#include "gpta.h"
#endif

#ifndef _DMA_H
#include "dma.h"
#endif

#ifndef _FADC_H
#include "fadc.h"
#endif

#ifndef _MEMLAY_H
#include "memlay.h"
#endif


#ifndef KnDet_Lldinit_ModId
	#ifndef KNDETSIGEVAL_ModId  
		#ifndef KnDetControl_ModId
#include "KnDet_conf.d"
		#endif
	#endif
#endif

#include "KnDet_confprot.h"

#ifndef	 CDRV_CONF_H
#include "cdrv_conf.h"
#endif

#ifndef _CDRV_MEMLAY_H
#include <cdrv_memlay.h>		/* Macros to support flexible memory allocation for CDRV modules */
#endif
#ifndef _DME_H
#include "dme.h"
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Header file -> 	Interfaces and functions of the Low Level driver used by KnDet
									    Device driver are declared here.
 										KnDet related protected configuration in KnDet_confprot.h
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
//user: don't touch:
//rename the implementation's functions definitions to force client to import this interface file

#define KnDet_SetFadc KnDet_SetFadc_x2
#define KnDet_LldInit KnDet_LldInit_x2
#define KnDet_SetMeasWin KnDet_SetMeasWin_x2

/* Definition for the active(connected) FADC channels based on SY_KSx*/

#ifdef SY_KSZA
  #if (SY_KSZA  == 1)
     #define KNDET_ACTVCHN_MSK    (1 << SY_KS1)
  #elif (SY_KSZA  == 2)
     #define KNDET_ACTVCHN_MSK    ((1 << SY_KS1) | (1 << SY_KS2))
  #elif (SY_KSZA  == 3)
    #define KNDET_ACTVCHN_MSK    ((1 << SY_KS1) | (1 << SY_KS2)  | (1<< SY_KS3))
  #elif (SY_KSZA  == 4)
     #define KNDET_ACTVCHN_MSK    ((1 << SY_KS1) | (1 << SY_KS2)  | (1<< SY_KS3) | (1 << SY_KS4))
  #else
    #define KNDET_ACTVCHN_MSK    0x00
  #endif
  #endif


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */




/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes (declaration of public functions)
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Driver for dynamically changing the configuration of FADC for knock detection purposes.
 *
 * This driver is to be used to prepare the FADC used for knock detection for the next
 * measuring window; that is changing channel and its setting, changing gain, activate special mode.
 * All other not dynamically changeable settings of FADC are done by offline configuration and its
 * according initialization function or implicit by the driver if it is not of user interest to take
 * care of them.
 *
 * \param          channel  : leads to activation of according channel timer's mode:
 *   \arg          0        : channel 1 will be activated
 *   \arg          1        : channel 2 will be activated
 *   \arg          2        : channel 3 will be activated  !valid only for METIS
 *   \arg          3        : channel 4 will be activated  !valid only for METIS
 * \param          enInput  : setting of positive and negative input line of selected channel:
 *   \arg          0        : both lines closed
 *   \arg          1        : ENP opened
 *   \arg          2        : ENN opened
 * \param          gain     : set gain of common amplifier:
 *   \arg          0        : gain factor is 1
 *   \arg          1        : gain factor is 2
 *   \arg          2        : gain factor is 4
 *   \arg          3        : gain factor is 8
 * \param          muxTest  : "Nulltest": no channel amp is connected to common amp
 *   \arg          1        : activate "Nulltest"
 *   \arg          0        : normal functionality
 * \return                    contents of Conversion Request Status Register CRSR
 *   \retval       00xx0x0x : see target specification for detailed bit coding description
 * \seealso                   configuration settings for the initialization function
 * \usedresources             date of evaluation: 29Apr05		   .
 *   \arg          7,2         : us (METIS, 150MHz, xflash, A-sample )
 *   \arg          322      : bytes of code
 *   \arg          0        : bytes of static variables
 *   \arg          0        : bytes of stack frame
 ***************************************************************************************************
 */
CODE_NORM(extern uint32 KnDet_SetFadc(uint8 channel, uint8 enInput, uint8 gain, uint8 muxTest));



/**
 ***************************************************************************************************
 * Driver for initialising FADC and other needed target ressources for knock detection purposes.
 *
 * This driver is to be used to set up a basic configuration of FADC, DMA, SCU (ERU), GPTA0 and
 * Ports used for knock detection;
 * thus it shall be called (usually once) for initialization.
 * The involved registers of target TC1796 will be initialized according to the (offline)
 * defined data or implicit by the driver if it is not of user interest to take care of them.
 * In order to be able to choose different settings the address of the specific
 * configuration variable is handed over by parameter rather than implicitly reading them out
 * of a (global) variable.
 *
 * \param         *iniData  : address of variable containing the configuration data
 * \return                    current status of module FADC (register FADC_CLC.DISS)
 *   \retval      true      : module FADC disabled
 *   \retval      false     : module FADC enabled
 * \seealso                   settings done by dynamical FADC driver
 * \usedresources             date of evaluation: 29Apr05		   .
 *   \arg          18,36    : us (METIS, 150MHz, xflash, A-sample)
 *   \arg          1224     : bytes of code
 *   \arg          0        : bytes of static varis
 *   \arg          0        : bytes of stack frame
 ***************************************************************************************************
 */
CODE_SLOW(extern void KnDet_LldInit(const struct KnDet_LldConf_s *iniData));



/**
 ***************************************************************************************************
 * Process for initially setting up the knock detection measuring window
 *
 * This process is to be used to initially set up the chain of knock detection's measuring window
 * start and end service requests (interrupts).
 * It has to be processed one time after synchronizing that is for example within task TnSyncFirst_Task
 * or S_0_First.
 * It will check for the actual position and generate a dummy measuring window start some degrees
 * after the according next TDC.
 * The measuring window start is a compare event of a GTC of GPTA and will request an interrupt
 * handler to be processed. Within this routine the end of the measuring window is prepared.
 * Overall the measuring window gates the TC1796's fadc which samples the knock sensors' data.
 *
 * \return                    none (a process is a void-void function)
 *   \retval       -        : -
 * \seealso                   interrupt handlers for start and end of measuring window
 * \usedresources             date of evaluation: 29Apr05		   .
 *   \arg          4,9        : us (METIS, 150MHz, xflash, A-sample)
 *   \arg          208      : bytes of code
 *   \arg          0        : bytes of static variables
 *   \arg          0        : bytes of stack frame
 ***************************************************************************************************
 */
CODE_NORM(extern void KnDet_IniMeasWin_proc(void));



/**
 ***************************************************************************************************
 * Driver for generating a knock detection measuring window
 *
 * This driver is to be used to generate a measuring window to gate the TC17x6, TC17x7 fadc for sampling
 * the knock sensor data.
 * It is to be called at the end of the actual measure window end interrupt to prepare the next
 * cylinder's measure window beginning (which in turn prepares the measure window end).
 * Information from engine position management (epm) is used to prepare a GTC for compare actions
 * with the desired begin and length angle handed over from the caller.
 *
 * \param         *MWData   : address of variable containing the start and length angle with resolution from epm
 * \return                    status of processed function
 *   \retval                : see defines in kndet_measwinctl
 * \seealso                   interrupt handlers for start and end of measuring window
 * \usedresources             date of evaluation: 29Apr05		   .
 *   \arg          7,44        : us (METIS, 150MHz, xflash, A-sample)
 *   \arg          354      : bytes of code
 *   \arg          4        : bytes of static variables
 *   \arg          0        : bytes of stack frame
 ***************************************************************************************************
 */
CODE_NORM(extern uint8 KnDet_MeasWinSet(const struct KnDet_measWinData_s *MWData));



/**
 ***************************************************************************************************
 * Interrupt handler hooked to compare event of a GTC at measure window start and end
 *
 * This function is to be used as an interrupt routine triggered at compare event of a GTC hooked to
 * GPTA's GT1 (== angle clock) at measure window start and end (== FADC gate) to process knock sensor
 * data and control knock detection functionality.
 *
 * \usedresources             date of evaluation: 29Apr05		   .
 *   \arg          -        : us: sum of functions called within this task plus few cycles pro/epilog
 *   \arg          174+x    : bytes of code
 *                          : x == sum of user function calls and other user actions within this task
 *   \arg          4        : bytes of static variables
 *   \arg          ?        : bytes of stack frame: depends on the user load within this task
 ***************************************************************************************************
 */
CODE_NORM(extern void KnDet_MeasWin_ISR(void));




/**
 ***************************************************************************************************
 * Interrupt handler for evaluation FADC data at "Teilblockende" and rest of measure window end branch.
 *
 * This function is to be used as an interrupt routine triggered at "Teilblockende" (that is
 * every x DMA transfers configured by element: see API) to evaluate the knock sensor data
 * that is preprocessed by the FADC for knock detection. Also this handlers is triggered by hand
 * within the measure window END branch of MFIntHandler to process the not so urgent tasks of
 * the measure window end event at a lower interrupt level.
 *
 * \usedresources             date of evaluation: 29Apr05
 *   \arg          -        : us: sum of functions called within this task plus few cycles pro/epilog
 *   \arg          348+x     : bytes of code
 *                          : x == sum of user function calls and other user actions within this task
 *   \arg          1        : bytes of static variables
 *   \arg          ?        : bytes of stack frame: depends on the user load within this task
 ***************************************************************************************************
 */
CODE_NORM(extern void KnDet_SubBlock_ISR(void));



/**
 ***************************************************************************************************
 * Function for monitoring the processing of the measure window interrupt handler chain
 *
 * This process is to be put to a time task to monitor the processing of
 * the angle based measuring window interrupt handler. On absence the initialization process that
 * sets up the used global timer cell is called.
 *
 * \return                  . TRUE - if the measurement window generation is OK
 *   \retval       -        : -
 * \seealso                   interrupt handler for start and end of measuring window
 * \usedresources             date of evaluation: -	29Apr05		   .
 *   \arg           1       : us (METIS, 150MHz, xflash, A-sample)
 *   \arg          110       : bytes of code
 *   \arg          1        : bytes of static variables
 *   \arg          ?        : bytes of stack frame
 ***************************************************************************************************
 */
CODE_SLOW(extern bool KnDet_MFIntPlaus(void));



/*
 ***************************************************************************************************
 * Function definitions - KnDet_ResetMeasWin(void)
 * Input                - void
 * Return               - void
  * This function can be used to reset the measurment window ( preferred in swoff and inisyn)
 * \usedresources             date of evaluation: - 29Apr05		   .
 *   \arg          1,5     : us (METIS, 150MHz, xflash, A-sample)
 *   \arg          44      : bytes of code
 *   \arg          8       : bytes of static variables
 *   \arg          ?       : bytes of stack frame
 ****************************************************************************************************
 */
CODE_NORM(extern void KnDet_ResetMeasWin(void));



#ifndef KNDETSIGEVAL_ModId
CODE_FAST(extern void KnDetSigEval(uint32 KnDet_adNewVal, bool B_mfe));
#endif
#ifndef KnDetControl_ModId
extern void KnDetControl_mfe(void);
extern void KnDetControl_mfehigh(void);
#endif
extern void KnDetLTest_mfe(void);

RAM_SBSS_FAST(extern uint32 KnDet_newFADCDataEndAddress);  /*the actual FADC data DMA destination address
                                                  shared with MW interrupt*/
RAM_SBSS_FAST8(extern bool KnDet_ConMeasWinEnd);                  /*flag for distinguishing the reason of a DMA
													end of block service */


RAM_SBSS_FAST8(extern bool KnDet_ConMFIntProcessed);              /*acknowledge flag "yes, MFInthandler is processed"*/



RAM_SBSS_FAST(extern sint32 KnDet_phiMeasWinLngthNxtCmb);        /*holds measure window length passed at MWend interrupt
                                                   till next MWstart interrupt.is only KnDet-driver internally used.*/


RAM_SBSS_FAST8(extern uint8  KnDet_stRstUnTx);

RAM_SBSS_FAST8(extern bool KnDet_bStOvl);
RAM_SBSS_FAST8(extern bool KnDet_bStTxUnErr);	    			  /*request lost status*/
/* _COMP<x>_PROT_H                                                                                */
#endif
