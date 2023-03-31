/*<RBHead>
*************************************************************************
* *
* ROBERT BOSCH GMBH *
* STUTTGART *
* *
* Alle Rechte vorbehalten - All rights reserved *
* *
*************************************************************************
*************************************************************************
* Administrative Information (automatically filled in by eASEE) *
*************************************************************************
*
* $Filename__:diaactr_elecpsdiag_priv.h$
*
* $Author____:KLN1SI$
*
* $Function__:intial start of development$
*
*************************************************************************
* $Domain____:SDOM$
* $User______:KLN1SI$
* $Date______:23.02.2011$
* $Class_____:SWHDR$
* $Name______:diaactr_elecpsdiag_priv$
* $Variant___:1.0.0$
* $Revision__:5$
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
* 1.0.0; 5     23.02.2011 KLN1SI
*   Adapt SCM conditions
*   Add review findings
* 
* 1.0.0; 4     10.02.2011 KLN1SI
*   Next development step
* 
* 1.0.0; 3     08.02.2011 KLN1SI
*   Development step
* 
* 1.0.0; 2     02.02.2011 KLN1SI
*   Development step
* 
* 1.0.0; 1     03.12.2010 KLN1SI
*   Development of common power stage diagnosis for DGS
* 
* 1.0.0; 0     13.08.2010 KLN1SI
*   intial start of development
* 
* $
*
*************************************************************************
</RBHead>*/
#ifndef _DIAACTR_ELECPSDIAG_PRIV_H
#define _DIAACTR_ELECPSDIAG_PRIV_H
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Signal states */
#define DIAACTR_ELECPSDIAG_FLTSTATE_INVALID    0   /**< Signal not processed init state */
#define DIAACTR_ELECPSDIAG_FLTSTATE_NOTEST     1   /**< Signal is not tested */
#define DIAACTR_ELECPSDIAG_FLTSTATE_NOFAULT    2   /**< All faults are tested and no fault detected */
#define DIAACTR_ELECPSDIAG_FLTSTATE_FAULT      3   /**< Signal has one specific fault */
#define DIAACTR_ELECPSDIAG_FLTSTATE_PREFAULT   4   /**< Signal has one preleminary specific fault */
#define DIAACTR_ELECPSDIAG_FLTSTATE_HEALFAULT  5   /**< Signal has one healing specific fault */
#define DIAACTR_ELECPSDIAG_FLTSTATE_WAITSTATE  6   /**< Signal wait state */

/* Init values for attibutes */
#define DIAACTR_ELECPSDIAG_NRTSTPLS_INIT       0   /**< Done testpulses in current driving cycle initialized */
#define DIAACTR_ELECPSDIAG_ERRORINFO_INIT      0   /**< Init value for error information from hwe */

/* Test pulse states */
#define DIAACTR_ELECPSDIAG_TSTPLS_NO           1   /**< No test pulse */
#define DIAACTR_ELECPSDIAG_TSTPLS_RQSTD        2   /**< Test pulse is requested by diagnostic service */
#define DIAACTR_ELECPSDIAG_TSTPLS_RUN          3   /**< Test pulse running */
#define DIAACTR_ELECPSDIAG_TSTPLS_FNSHD        4   /**< Test pulse finished */
#define DIAACTR_ELECPSDIAG_TSTPLS_RETRGRD      5   /**< Test pulse is re-triggered */

/* Test pulse time states */
#define DIAACTR_ELECPSDIAG_TSTPLSTMR_NO        0   /**< No time is required */
#define DIAACTR_ELECPSDIAG_TSTPLSTMR_EVRYRSTR  1   /**< Test pulse every raster */
#define DIAACTR_ELECPSDIAG_TSTPLSTMR_TM1       2   /**< Time between test pulse set to time 1 */
#define DIAACTR_ELECPSDIAG_TSTPLSTMR_TM2       3   /**< Time between test pulse set to time 2 */

#define DIAACTR_ELECPSDIAG_TSTPLSRSTRNUMMAX   10   /**< max. amount of rasters for tst pulse to finish until retrigger */
#define DIAACTR_ELECPSDIAG_TSTPLS_ENDLESS     (0xFFFFFFFFuL) /**< max. uint32 value means endless sending of test pulses
*/

/* Defines used for bit packaging of measurement points */
/* For signals */
#define DIAACTR_ELECPSDIAG_MP_SIGCFG_DIAG_BP       0   /**< Bit position of diagnosis disabled for bitcoded signal configuration measurement point  */
#define DIAACTR_ELECPSDIAG_MP_SIGCFG_TSTPLS_BP     1   /**< Bit position of test pulse disabled for bitcoded signal configuration measurement point  */
#define DIAACTR_ELECPSDIAG_MP_SIGCFG_REP_BP        2   /**< Bit position of fault report disabled for bitcoded signal configuration measurement point  */
/* For errors */
#define DIAACTR_ELECPSDIAG_MP_ERRCFG_TSTPLS_BP     0   /**< Bit position of test pulse disabled for bitcoded error configuration measurement point  */
#define DIAACTR_ELECPSDIAG_MP_ERRCFG_REP_BP        1   /**< Bit position of fault report disabled for bitcoded error configuration measurement point  */

/*
 ***************************************************************************************************
 * Declarations (private functions)
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__HighSpeed__START
/*!
 * \brief Evaluation of test pulse
 *
 * \param   Diagnose Signal
 * \param   Parameter
 *
 * \return 0 == test pulse not requested, 1 = test pulse requested, 2 = test pulse pending
 *
 * This function uses the summary information to determine:
 * - if a test pulse has to be requested
 * - the timing of the test pulse (electrical fault <-> over-temperature)
 *
 * It performs the timing and counting of test pulses and handles request of test pulses
 */
static uint8 EvlnTestPls( DiaActr_DiagSigClass_t * pDiagSig,
                          const DiaActr_SigPrmClass_t * pSigPrm );
/*!
 * \brief Evaluate next signal state depending on the fault information in the faults
 *
 * \param Signal Object
 * \return void
 */
static void EvlnNxtSigSts( DiaActr_DiagSigClass_t * pDiagSignal );

/*!
 * \brief evaluates next Test pulse timing state depending on the fault information in the faults
 *
 * \param Signal Object
 * \return next state of the test pulse timing
 */
static uint8 EvlnNxtTimeTstPlsSts( const DiaActr_DiagSigClass_t * pDiagSignal );

/*!
 * \brief Evaluate the time between test pulses
 *
 * \param stTimeTstPls Current state of the timer (which time to be evaluated)
 * \param pDiagSig Pointer to DiaActr_DiagSigClass_t
 * \param pDiagSigPrm Pointer to DiaActr_SigPrmClass_t
 * \return TRUE = test pulse request, FALSE = NO test pulse request
 */
static uint8 EvlnTstPlsTimer( uint8 stTimeTstPls,
                              DiaActr_DiagSigClass_t * pDiagSig,
                              const DiaActr_SigPrmClass_t * pDiagSigPrm );

/*!
 * \brief The function executes the test pulse
 *
 * \param SignalName Identification of the signal, needed as argument on hwe functions
 * \param SignalType Identifies the type of the signal if DigOut or PWMOut
 * \return 0 == test pulse not requested, 1 = test pulse requested
 */
static uint32 ExecTstPls( uint32 SignalName, uint8 SignalType );


/*!
 *  \brief EvlnFlt
 *
 *  \param ErrorInfo error information from HWE
 *  \param pErrorDiagnosis pointer to a specific error class
 *
 *  \return TRUE == no error, other == specific diagnosis error
 */
static uint32 EvlnFlt( uint32 ErrorInfo, DiaActr_DiagErrClass_t * pErrorDiagnosis );

/**
 * \brief Internal function to get error info from hwe
 *
 * \param DiagSigName Diagnostic signal name
 * \return Error information from hwe
 */
static uint32 GetErrInfo (const DiaActr_DiagSigClass_t * DiagSigName);

/**
 * \brief Clear the error diagnostic register of chip
 *
 * \param DiagSigName Diagnostic signal name
 */
static void ClearErr (const DiaActr_DiagSigClass_t * DiagSigName);

/**
 * \brief Report faults or read back signal state in DSM in case report disabled
 *
 * \param pErrorDiagnosis Points to error class which is processed
 * \param dT Contains the time difference to be reported
 * \return void
 */
static void FltRprt( DiaActr_DiagErrClass_t * pErrorDiagnosis, sint32 dT );

/**
 * \brief Read the current fault status stored in DSM for all errors
 * on the signal.
 *
 * \param pDiagSignal Points to signal class which errors are processed
 * \return Internal error Read was not possible "TRUE" else "FALSE"
 */
static void FltRead( DiaActr_DiagSigClass_t * pDiagSignal );

/**
 * \brief Reset internal status of signal specific information
 *
 * \param pDiagSignal Points to signal data
 */
static void RstStdPwrStgDiagSigSts( DiaActr_DiagSigClass_t * pDiagSignal );

/**
 * \brief Reset internal status of error specific information
 *
 * \param pDiagSignal Points to signal data
 */
static void RstStdPwrStgDiagErrSts( DiaActr_DiagSigClass_t * pDiagSignal );

/**
 * \brief Updates the measurement points for debugging. The debugging information is
 * divided in a set of measurements points which is always visible, and an additional
 * part with extended measuring information.
 * Additional measurement information is enabled when DEDIA_DBG_SC is set to true.
 *
 * \param pDiagSignal Points to signal data
 */
static void UpdtMeasmInfo( const DiaActr_DiagSigClass_t * pDiagSignal );

/*!
 * \brief Evaluate if the Test pulse has finished
 *
 * \param const DiaActr_DiagSigClass_t: pDiagSignal points to the signal
 * \return TRUE or FALSE: TRUE: Test pulse finished flag was set
 *                        FALSE: No test pulse finished flag set
 */
static uint8 EvlnTstPlsFnshd( const DiaActr_DiagSigClass_t * pDiagSignal );
__PRAGMA_USE__CODE__devlib__HighSpeed__END
#endif
