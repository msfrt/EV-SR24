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
 * $Filename__:diaactr_elecpsdiag_pub.h$
 *
 * $Author____:KLN1SI$
 *
 * $Function__:intial start of development$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:KLN1SI$
 * $Date______:25.02.2011$
 * $Class_____:SWHDR$
 * $Name______:diaactr_elecpsdiag_pub$
 * $Variant___:1.0.0$
 * $Revision__:8$
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
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DIAACTR_ELECPSDIAG_PUB_H
#define _DIAACTR_ELECPSDIAG_PUB_H
 /*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 * END global system constants
 * =======================================================================
 */

/*
 ***************************************************************************************************
 * Types
 ***************************************************************************************************
 */
/* Calibration parameter, used as typedefs are not supported with DAMOS at the moment */
typedef struct
{
    uint32 nrTstPls_C;
    sint16 tiBtwElecFlt_C;
    sint16 tiBtwOTFlt_C;
} DiaActr_SigPrmClass_t;

/* Diagnosis Error Class */
typedef struct  {
/*--------- identification -----------*/
    DSM_DFCType         DFCType;         /**< DFC type for error */
    uint8               ErrorType;       /**< Type of error */
/*--------- configuration ------------*/
    uint8               TstPlsDi;        /**< Test pulse enabled for signal */
    uint8               RepDi;           /**< Report enabled error based */
/*--------- status information -------*/
    uint32              stErrorInfo;     /**< status for error */
    uint32              stErrTst;        /**< test status for error */
    uint32              stProcErrorInfo; /**< processed test once in diagnosis driving cycle */
    uint32              stDSMDebRep;     /**< DSM Deb status for error */
    DSM_SFCType         stDSMSFCType;    /**< DSM SFC status for error */
}DiaActr_DiagErrClass_t;

/* Diagnosis Signal Class */
typedef struct  {
/*--------- identification -----------*/
    uint32              SigName;        /**< Signal name used in HWE */
    uint8               SigType;        /**< Signal type */
/*--------- configuration ------------*/
    uint8               DiagDi;         /**< Diagnosis enabled */
    uint8               TstPlsDi;       /**< Test pulse enabled for signal */
    uint8               RepDi;          /**< Report enabled error based */
/*--------- status information -------*/
    SrvB_SWTmrS16       tiTstPlsTime;   /**< time for test pulse evaluation */
    uint32              SigErrorInfo;   /**< current error info from signal */
    uint32              nrTstPls;       /**< Number of test pulse done */
    uint16              cntTstPlsTsk;   /**< raster counter for test pulse */
    uint8               stSig;          /**< state of the signal */
    uint8               stTimeTstPls;   /**< timing status for test pulse evaluation **/
    uint8               stTstPls;       /**< current test pulse status **/
/*---------- Error objects ------------*/
    uint8               nrDiagErr;      /**< Number of diagnosis error object */
    DiaActr_DiagErrClass_t* DiagErr;    /**< Points to the error, stored in an array */
}DiaActr_DiagSigClass_t;


/*
 ***************************************************************************************************
 * Macros
 ***************************************************************************************************
 */
/**
 * \brief Defines the necessary structures for the Signal, the diagnostic
 * signal object and the corresponding error objects will be defined. Additional
 * the pointer of the error array is assigned in the diagnostic signal object.
 *
 * \param DiagSigName is the character string which is the name of the diagnostic
 * signal class defined by this macro
 * \param SigName index of the defined signal
 * \param NrError defines the number of errors for the signal. Depending on it
 * a array will be defined with NrError elements
 */
#define DiaActr_DiagSig(DiagSigName, NrError)                                   \
    /* MISRA RULE 19.10 VIOLATION: Here no braces on the parameters are used */ \
    static DiaActr_DiagErrClass_t DiagSigName##_SigErrObject[ NrError ];        \
    static DiaActr_DiagSigClass_t DiagSigName = {      \
        0,                                      \
        0,                                      \
        0,                                      \
        0,                                      \
        0,                                      \
        { 0 },                                  \
        0,                                      \
        0,                                      \
        0,                                      \
        0,                                      \
        0,                                      \
        0,                                      \
        NrError,                                \
        DiagSigName##_SigErrObject}


/**
 * \brief Initialize parameters for Signal
 *
 * \param ptr_DiagSignal Pointer to struct which holds signal data
 * \param DiscSigName Name defined by the project for the signal
 * \param TypDiscSigName Type of the signal (PWMOut or DigOut)
 */
#define DiaActr_ElecPsDiagInitSig(DiagSignal, SigName, SigType) \
        DiaActr_ElecPsDiagInit( DiagSignal, (uint32) (SigName),  SigType)

/**
 * \brief Initialize parameters for SCB error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param DFC Identification of the fault in DSM
 * \param DFCType defines type of DFC
 */
#define DiaActr_ElecPsDiag_InitSCB(DiagSignal, DFC)    \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, DFC, DIAACTR_ERRTYPE_SCB)

/**
 * \brief Initialize parameters for SCG error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param DFC Identification of the fault in DSM
 * \param DFCType defines type of DFC
 */
#define DiaActr_ElecPsDiag_InitSCG(DiagSignal, DFC)    \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, DFC, DIAACTR_ERRTYPE_SCG)

/**
 * \brief Initialize parameters for OL error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param DFC Identification of the fault in DSM
 * \param DFCType defines type of DFC
 */
#define DiaActr_ElecPsDiag_InitOL(DiagSignal, DFC)     \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, DFC, DIAACTR_ERRTYPE_OL)

/**
 * \brief Initialize parameters for OT error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param DFC Identification of the fault in DSM
 * \param DFCType defines type of DFC
 */
#define DiaActr_ElecPsDiag_InitOT(DiagSignal, DFC)     \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, DFC, DIAACTR_ERRTYPE_OT)

/**
 * \brief Configure parameters for SCB error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param TstPls Enabel or disable test pulse using for error
 * \param Rep Enable or disable the fault report for the error
 */
#define DiaActr_ElecPsDiagErrorCfgSCB(DiagSignal, TstPls, Rep)     \
        DiaActr_ElecPsDiagErrorCfg( DiagSignal,                     \
                                    TstPls,                         \
                                    Rep,                            \
                                    DIAACTR_ERRTYPE_SCB)

/**
 * \brief Configure parameters for SCG error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param TstPls Enabel or disable test pulse using for error
 * \param Rep Enable or disable the fault report for the error
 */
#define DiaActr_ElecPsDiagErrorCfgSCG(DiagSignal, TstPls, Rep)     \
        DiaActr_ElecPsDiagErrorCfg( DiagSignal,                     \
                                    TstPls,                         \
                                    Rep,                            \
                                    DIAACTR_ERRTYPE_SCG)

/**
 * \brief Configure parameters for OL error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param TstPls Enabel or disable test pulse using for error
 * \param Rep Enable or disable the fault report for the error
 */
#define DiaActr_ElecPsDiagErrorCfgOL(DiagSignal, TstPls, Rep)  \
        DiaActr_ElecPsDiagErrorCfg( DiagSignal,                     \
                                    TstPls,                         \
                                    Rep,                            \
                                    DIAACTR_ERRTYPE_OL)

/**
 * \brief Configure parameters for OT error
 *
 * \param DiagSignal Pointer to struct which holds signal data
 * \param TstPls Enabel or disable test pulse using for error
 * \param Rep Enable or disable the fault report for the error
 */
#define DiaActr_ElecPsDiagErrorCfgOT(DiagSignal, TstPls, Rep)  \
        DiaActr_ElecPsDiagErrorCfg( DiagSignal,                     \
                                    TstPls,                         \
                                    Rep,                            \
                                    DIAACTR_ERRTYPE_OT)
/*
 ***************************************************************************************************
 * Methods
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__LowSpeed__START
/**
 * \brief Initialize parameters for signal
 *
 * \param pDiagSignal Pointer to struct which holds signal data
 * \param SigName global signal number
 * \param SigType defines type of signal (PWMOut or DigOut)
 */
extern void DiaActr_ElecPsDiagInit( DiaActr_DiagSigClass_t * pDiagSignal,
                             uint32 SigName,
                             uint8 SigType );

/**
 * \brief Initialize parameters for errors
 *
 * \param pDiagError Pointer to structure which holds error data
 * \param DFCType fault check for report
 * \param ErrorType type of error for specific error handling (SCB, SCG, OL, OT)
 *
 * \return Was the initialization successful than return "TRUE" otherwise "FALSE"
 * An initialization can be impossible if no free error object is available.
 */
extern uint8 DiaActr_ElecPsDiagErrorInit( DiaActr_DiagSigClass_t * pDiagSignal,
                                  DSM_DFCType DFCType,
                                  uint8 ErrorType);
__PRAGMA_USE__CODE__devlib__LowSpeed__END

__PRAGMA_USE__CODE__devlib__HighSpeed__START
/**
 * \brief Configure diagnosis
 *
 * \param pDiagSignal Pointer to struct which holds signal data
 * \param DigEnbl set diagnosis enabled or disable for signal
 */
extern void DiaActr_ElecPsDiagCfgDiag( DiaActr_DiagSigClass_t * pDiagSignal,
                                uint8 DiagDi);

/**
 * \brief Configure diagnosis
 *
 * \param pDiagSignal Pointer to struct which holds signal data
 * \param TstPlsDi shall test pulse be used for signal
 */
extern void DiaActr_ElecPsDiagCfgTstPls( DiaActr_DiagSigClass_t * pDiagSignal,
                                  uint8 TstPlsDi);

/**
 * \brief Configure diagnosis
 *
 * \param pDiagSignal Pointer to struct which holds signal data
 * \param Enable report for signal
 */
extern void DiaActr_ElecPsDiagCfgRep( DiaActr_DiagSigClass_t * pDiagSignal,
                               uint8 RepDi );

/**
 * \brief configure diagnosis for errors
 *
 * \param pDiagError Pointer to struct which holds error data
 * \param DigEnbl set diagnosis enabled or disable for error
 * \param TstPlsDi shall test pulse be used for error
 * \param Enable report for error
 *
 * \return If the configuration was successful return "TRUE"
 */
extern uint8 DiaActr_ElecPsDiagErrorCfg( DiaActr_DiagSigClass_t * pDiagSignal,
                                 uint8 TstPlsDi,
                                 uint8 RepDi,
                                 uint8 ErrorType);

 /**
 * \brief Function for discrete output signal error handler
 *
 * \param pDiagSignal Pointer to struct for signal data
 * \param pSigParams Pointer to struct for signal  parameters
 *
 * \return 0 = ok, other = error diagnosis not possible
 */
extern uint8 DiaActr_ElecPsDiag( DiaActr_DiagSigClass_t * pDiagSignal,
                          const DiaActr_SigPrmClass_t * pSigParams,
                          sint32 dT);

/**
 * \brief Evaluate shut off request
 *
 * \param pDiagSignal Points to signal data
 *
 * \return 0 = no shutoff request, 1 = request to shut off
 */
extern uint8 DiaActr_ElecPsDiag_EvlnShtOff( const DiaActr_DiagSigClass_t * pDiagSignal );


 /**
 * \brief For SW components evaluating and reporting the error information directly from HWE,
 * the method DiaActr_ElecPsDiag_stErrInfo(*self) returns the currently read status!
 *
 * \param pDiagSignal Pointer to struct for signal data
 *
 * \return stErrorInfo from HWE
 */
extern uint32 DiaActr_ElecPsDiag_stErrInfo( const DiaActr_DiagSigClass_t * pDiagSignal );


/**
* \brief Function for using SW components which directly request an test pulse.
*
* \param pDiagSignal Pointer to struct for signal data
*
* \return return value of HWE test pulse request function
*/
extern uint32 DiaActr_ElecPsDiag_ExecTstPls( const DiaActr_DiagSigClass_t * pDiagSignal );

/**
* \brief The function returns TRUE in case the maximum calibrated number
* of test puslses is reach. As long as test pulses are send it returns FALSE.
*
* \param pDiagSignal Pointer to struct for signal data
* \param pSigParams Pointer to struct for signal  parameters
*
* \return TRUE = Maximum number of test pulse is reached;
*         FALSE = Test pulse will be send as calibrated limit not exceeded.
*/
extern uint8 DiaActr_ElecPsDiag_NrTestPlsExs( const DiaActr_DiagSigClass_t * pDiagSignal,
                                              const DiaActr_SigPrmClass_t * pSigParams );
__PRAGMA_USE__CODE__devlib__HighSpeed__END
#endif
