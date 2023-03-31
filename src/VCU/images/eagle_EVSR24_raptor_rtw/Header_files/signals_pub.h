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
 * $Filename__:signals_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AID3KOR$
 * $Date______:28.11.2011$
 * $Class_____:SWHDR$
 * $Name______:signals_pub$
 * $Variant___:1.21.0$
 * $Revision__:2$
 * $Type______:H$
 * $State_____:BUGGY$
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
 * 1.21.0; 2     28.11.2011 AID3KOR
 *   review Changes
 * 
 * 1.21.0; 1     22.11.2011 AID3KOR
 *   Implementation of Array handling
 * 
 * 1.21.0; 0     20.10.2011 AID3KOR
 *   RCMS00787953 - Implementation of bit datatype in signals
 * 
 * 1.10.0; 1     22.01.2009 HMN2FE
 *   Correction of file header by LWS update
 * 
 * 1.10.0; 0     17.12.2008 HMN2FE
 *   Signals 1.10.0 supports bit combiner Signals. BC Signals are Signals, where
 *    bit information is extracted from messages and combined into byte based 
 *   Signal values.
 *   BC Signals can be used for OBD or customer Signals
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\21
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _SIGNALS_PUB_H
#define _SIGNALS_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      Module Signals - Offers access to ECU labels
 *
 * scope                API
 ***************************************************************************************************
 */

#ifndef _LIBRARYABILITY_H
#include "signals_auto_conf.h"
/* _LIBRARYABILITY_H */
#endif /* _LIBRARYABILITY_H */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define SIGNALS_DFLVAL 0L                   /**< Default return value if something
                                                 (whatever that might be...) goes wrong           */

#define SIGNALS_STRTPOS_OFFSET      7       /**< Offset of start position value in bitfield
                                                 conversion formula                               */
#define SIGNALS_BITLNGTH_MASK       0x3F    /**< Mask for reading the bitfield length             */
#define SIGNALS_SUPPSIGNVALS_MASK   0x01    /**< Mask for reading the support signed values bit   */

/** Sig type definitions                                                                          */
#define SIGNALS_UINT8               0   /**< uint8  is internally stored with index 0             */
#define SIGNALS_UINT16              1   /**< uint16 is internally stored with index 1             */
#define SIGNALS_UINT32              2   /**< uint32 is internally stored with index 2             */
#define SIGNALS_BOOL       SIGNALS_UINT8/**< bool   is internally stored with index 0             */
#define SIGNALS_SINT8               3   /**< sint8  is internally stored with index 3             */
#define SIGNALS_SINT16              4   /**< sint16 is internally stored with index 4             */
#define SIGNALS_SINT32              5   /**< sint32 is internally stored with index 5             */
#define SIGNALS_BIT                 6
#define SIGNALS_FREE_APPLICABLE_TYP 7   /**< freeappl is internally stored with index 6           */

/**
 ***************************************************************************************************
 * Returns whether this signal supports signed values.
 * Returns whether this signal supports signed values. This is the public interface that does also
 * check if the given signal number is valid.
 *
 * \param       SigNum  Number of signal
 * \return      Returns whether this signal supports signed values
 * \retval      TRUE    Signal supports signed values
 * \retval      FALSE   Signal doesn't support signed values
 ***************************************************************************************************
 */
#define Signals_SuppSignVals(SigNum) (  \
                                        (Signals_SigNumStd(SigNum) == FALSE) ? (FALSE) : \
                                        (Signals_SuppSignVals_Int(SigNum)) \
                                     )

/**
 ***************************************************************************************************
 * Returns whether this signal supports signed values.
 * Returns whether this signal supports signed values. This is the internal function that does not
 * check whether the given signal number is valid as this is done by the calling function already.
 *
 * \param       SigNum  Number of signal
 * \return      Returns whether this signal supports signed values
 * \retval      TRUE    Signal supports signed values
 * \retval      FALSE   Signal doesn't support signed values
 ***************************************************************************************************
 */
#define Signals_SuppSignVals_Int(SigNum) (  \
    ((Signals_Num_tab[(SigNum)].BitStrDiv_u8 & SIGNALS_SUPPSIGNVALS_MASK) == 1) ? (TRUE) : (FALSE) \
                                     )

/**
 ***************************************************************************************************
 * Gets the address of the ECU label.
 *
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum  Number of signal
 * \return      Returns the pointer to the ECU label
 ***************************************************************************************************
 */
#define Signals_GetMsgPtr(SigNum) (Signals_Num_tab[(SigNum)].Msg_ad)

/**
 ***************************************************************************************************
 * Gets the signal type from a signalnumber.
 *
 * Reads the data type of the internal variable of a signal.
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum  Number of signal
 * \return      Returns the definiton of the data type
 ***************************************************************************************************
 */
#define Signals_GetType(SigNum)     (Signals_Num_tab[(SigNum)].SigType)

/**
 ***************************************************************************************************
 * Gets the conversion index of this signal.
 *
 * Gets the conversion index of the given signal and it's normalization standard.
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum      Number of signal
 * \param       Norm        Scale set factor: SIGNALS_NORM_CAN or SIGNALS_NORM_DIA
 * \return      Returns the index of the used conversion for this signal
 ***************************************************************************************************
 */
#define Signals_GetCnvIdx(SigNum, Norm)   (Signals_Num_tab[(SigNum)].CnvIdx[(Norm)])

/**
 ***************************************************************************************************
 * Gets the bit length of a signal.
 *
 * Gets the length of the external signal in bits by signal number and normalization standard
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum      Number of signal
 * \param       Norm        Scale set factor: SIGNALS_NORM_CAN or SIGNALS_NORM_DIA
 * \return      Returns the length in Bits of the signal
 ***************************************************************************************************
 */
#define Signals_GetSigLngth(SigNum, Norm)                                                          \
(                                                                                                  \
    (((SigNum) <= (Signals_MaxUsedSigNum)) ?                                                       \
    (Signals_Num_tab[(SigNum)].LimVal[(Norm)]) :                                                   \
    (((SigNum) <= Signals_MaxUsedSigNumBitCombine) ?                                               \
    (Signals_GetBCLength((SigNum))) :                                                              \
    (Signals_VirtFct_CA[((SigNum) - (Signals_OfsVirtSigNum))].SigLngth_u8)))                       \
)

/**
 ***************************************************************************************************
 * Reads the conversion formula factor Val.
 *
 * Reads the conversion formula factor Val from the conversion Val and corrects the sign
 * information, if necessary
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!

 * \param       CnvIdx     Cnversion formula Val
 * \return      Returns the signed corrected Val for the conversion factor
 ***************************************************************************************************
 */
#define Signals_GetFac(CnvIdx) (Signals_CnvTabLin[CnvIdx].Fac)

/**
 ***************************************************************************************************
 * Reads the conversion formula offset Val.
 *
 * Reads the conversion formula factor offset from the conversion Val and corrects the sign
 * information, if necessary
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!
 *
 * \param       CnvIdx     Cnversion formula index
 * \return      Returns the signed corrected Val for the conversion offset Val
 ***************************************************************************************************
 */
#define Signals_GetOfs(CnvIdx) (Signals_CnvTabLin[CnvIdx].Ofs)

/**
 ***************************************************************************************************
 * Reads the conversion formula normalization Val.
 *
 * Reads the conversion formula normalization Val from the conversion Val.
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!
 *
 * \param       CnvIdx     Cnversion formula index
 * \return      Returns the signed corrected Val for the conversion normalization Val
 ***************************************************************************************************
 */
#define Signals_GetNorm(CnvIdx) (Signals_CnvTabLin[CnvIdx].Norm)

/**
 ***************************************************************************************************
 * Reads the start bit of a binary conversion formula.
 *
 * Reads the start bit of a binary conversion formula.
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!
 *
 * \param       CnvIdx      Conversion formula index
 * \return      returns the start bit
 ***************************************************************************************************
 */
#define Signals_GetStrtPos(CnvIdx)  ( \
                    (uint8)((Signals_CnvTabBin[(CnvIdx) - Signals_MaxLinCnvIdx - 1]) \
                    >> (SIGNALS_STRTPOS_OFFSET)))

/**
 ***************************************************************************************************
 * Reads the bit length of a binary conversion formula.
 *
 * Reads the bit length of a binary conversion formula.
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!
 *
 * \param       CnvIdx      Conversion formula index
 * \return      returns the bit length
 ***************************************************************************************************
 */
#define Signals_GetBitLngth(CnvIdx) ( \
                    (uint8)((Signals_CnvTabBin[(CnvIdx) - Signals_MaxLinCnvIdx - 1]) & \
                    (SIGNALS_BITLNGTH_MASK)))

/**
 ***************************************************************************************************
 * Checks wether a signal number is valid.
 *
 * Checks wether the given signal number is valid, i.e. greater than zero and less or equal
 * than the maximum number of signals.
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum  Signal number
 * \return      Returns wether the signal number is valid
 * \retval      TRUE    If the signal number is valid
 * \retval      FALSE   If the signal number is not valid
 ***************************************************************************************************
 */
#define Signals_SigNumValid(SigNum) (                                                              \
                                      (((SigNum) > 0) && ((SigNum) <= Signals_MaxUsedSigNumVirt)) ?\
                                      (TRUE) : (FALSE)                                             \
                                    )

/**
 ***************************************************************************************************
 * Checks wether a signal number is a number of a standard signal.
 *
 * Checks wether the given signal number is valid, i.e. greater than zero and less or equal
 * than the maximum number of std. signals.
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum  Signal number
 * \return      Returns wether the signal number is valid
 * \retval      TRUE    If the signal number is valid
 * \retval      FALSE   If the signal number is not valid
 ***************************************************************************************************
 */
#define Signals_SigNumStd(SigNum)   ((((SigNum) > 0) && ((SigNum) <= Signals_MaxUsedSigNum)) ? \
                                    (TRUE) : (FALSE))

/**
 ***************************************************************************************************
 * Checks wether a signal number is a number of a virtual signal.
 *
 * Checks wether the given signal number is valid, i.e. greater than the mxaimum std. number
 * and less or equal than the maximum number of virtual signals.
 * Watch out - this macro doesn't check for the validity of the Signal number!
 * Use it only in an environment, where a valid Signal number can be ensured!
 *
 * \param       SigNum  Signal number
 * \return      Returns wether the signal number is valid
 * \retval      TRUE    If the signal number is valid
 * \retval      FALSE   If the signal number is not valid
 ***************************************************************************************************
 */
#define Signals_SigNumVirt(SigNum)  ((((SigNum) > Signals_MaxUsedSigNumBitCombine) &&  \
                                    ((SigNum) <= Signals_MaxUsedSigNumVirt)) ? (TRUE) : (FALSE))


/**
 ***************************************************************************************************
 * Checks wether the normalization value is valid.
 *
 * Check wether the given normalization value is valid.
 *
 * \param       Norm    Scale set factor: SIGNALS_NORM_CAN or SIGNALS_NORM_DIA
 * \return      returns wether the normalization valu is valid
 * \retval      TRUE    If the value is valid
 * \retval      FALSE   If the value is not valid
 ***************************************************************************************************
 */
#define Signals_NormValid(Norm)     (((Norm) < SIGNALS_NORMNUMBER) ? (TRUE) : (FALSE))

/**
 ***************************************************************************************************
 * Checks wether the  conversion index is valid.
 *
 * Checks wether the  conversion index is valid, i.e. within zero and the maximum of conversion
 * indices.
 *
 * \param       CnvIdx      Conversion formula index
 * \return      returns wether the conversion index is valid
 * \retval      TRUE    If the index is valid
 * \retval      FALSE   If the index is not valid
 ***************************************************************************************************
 */
#define Signals_CnvIdxValid(CnvIdx) (((CnvIdx) <= Signals_MaxCnvIdx) ? (TRUE) : (FALSE))

/**
 ***************************************************************************************************
 * Check wether the conversion index is binary or linear.
 *
 * Checks wether the conversion index points to a linear or to a binary conversion formula.
 * Watch out - this macro doesn't check for the validity of the conversion index!
 * Use it only in an environment, where a valid conversion index can be ensured!
 *
 * \param       CnvIdx      Conversion formula index
 * \return      returns wether the conversion formula is binary
 * \retval      TRUE    If the conversion index points to a binary conversion formula
 * \retval      FALSE   If the conversion index points to a linear conversion formula
 ***************************************************************************************************
 */
#define Signals_IsBinaryCnv(CnvIdx)\
(\
    ((((CnvIdx) > Signals_MaxLinCnvIdx) && ((CnvIdx) <= Signals_MaxCnvIdxNonAppl)) ? TRUE : FALSE)\
)

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/** Type for the different normalization services                                                 */
typedef enum
{
    SIGNALS_NORM_DIA,
    SIGNALS_NORM_CAN,
    SIGNALS_NORMNUMBER
}Signals_NormType_t;

/** Type for the return values of the interface Signals_GetMapCurveArray */
enum
{
    SIGNALS_GET_I_SUCCEEDED_E,
    SIGNALS_GET_E_ERROR_E
};
/** Type for an internal signal number                                                            */
typedef uint16 Signals_Num_t;

/** Type for an external signal number                                                            */
typedef uint16 Signals_NumExt_t;

/** Type for the conversion formula index                                                         */
typedef uint16 Signals_CnvIdx_t;

/** Type for the signal datatype storage                                                          */
typedef uint8 Signals_SigType_t;

/* Type for storing a binary conversion formula                                                   */
typedef uint16 Signals_CnvFormBin_t;

/* Type for storing the limit value                                                               */
typedef uint8 Signals_Lim_t;

/** Structure for saving signal information                                                       */
typedef struct
{
    void                *Msg_ad;                        /**< Pointer to ECU label                 */
    Signals_CnvIdx_t    CnvIdx[SIGNALS_NORMNUMBER];     /**< ParamaterVal for DSM, DIA, CAN       */
    Signals_Lim_t       LimVal[SIGNALS_NORMNUMBER];     /**< Number of Bits for linear conversion of
                                                             bit mask for binary conversion       */
    Signals_SigType_t   SigType;                        /**< Internal data type of this signal    */
    uint8               BitStrDiv_u8;                   /**< Flag for storing misc information.
                                                             Usage:
                                                             * Bit7:  not used
                                                             * Bit6:  not used
                                                             * Bit5:  not used
                                                             * Bit4:  not used
                                                             * Bit3:  not used
                                                             * Bit2:  not used
                                                             * Bit1:  not used
                                                             * Bit0:  Support of signed values
                                                        */
}Signals_SigStructure_t;

/** Structure for storing information for a free applicable signal                                */
typedef struct
{
    void                *Msg_ad;    /**< Pointer to ECU label                                     */
    Signals_SigType_t   SigTyp;     /**< Internal data type of this signal                        */
}Signals_FreeAppl_t;

/** Structure for storing a linear conversion formula                                             */
typedef struct
{
    sint32  Fac;                    /**< Factor value                                             */
    sint16  Ofs;                    /**< Offset value                                             */
    uint8   Norm;                   /**< Quantization value for factor                            */
}Signals_CnvFormLin_t;

/**
    Type for storage of a virtual signal function.
    This type is used to store the address of a function that is used for a virtual signal
*/
typedef struct
{
    uint32          (*Fct_p32)(sint32); /* Pointer to function                                    */
    sint32          Param_s32;          /* Additional parameter for passing with Signals_Get      */
    uint8           SigLngth_u8;        /* Length of Signal                                       */
}Signals_VirtFct_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * 8Bit pragmas
 ***************************************************************************************************
 */
__PRAGMA_USE__signals__50ms_1s__constant__x8__START


__PRAGMA_USE__signals__50ms_1s__constant__x8__END

/*
 ***************************************************************************************************
 * 16Bit pragmas
 ***************************************************************************************************
 */
__PRAGMA_USE__signals__50ms_1s__constant__x16__START
    extern const uint16 Signals_MaxUsedSigNumVirt;
    extern const sint16 Signals_MaxUsedSigNumBitCombine;
    extern const uint16 Signals_OfsVirtSigNum;
    extern const sint16 Signals_MaxUsedSigNum;
    extern const Signals_BitCombine_Struct_t Signals_BitCombine_tab[];
__PRAGMA_USE__signals__50ms_1s__constant__x16__END

/*
 ***************************************************************************************************
 * 32Bit pragmas
 ***************************************************************************************************
 */
__PRAGMA_USE__signals__50ms_1s__constant__x32__START
    extern const uint32 Signals_SigNotSupported;
__PRAGMA_USE__signals__50ms_1s__constant__x32__END

/*
 ***************************************************************************************************
 * Structure pragmas
 ***************************************************************************************************
 */
__PRAGMA_USE__signals__50ms_1s__constant__s32__START
    extern const Signals_SigStructure_t Signals_Num_tab[];
    extern const Signals_CnvFormLin_t Signals_CnvTabLin [];
    extern const Signals_CnvFormBin_t Signals_CnvTabBin[];
    extern const Signals_VirtFct_t Signals_VirtFct_CA[];
    extern const Signals_CnvIdx_t Signals_MaxLinCnvIdx;
    extern const Signals_CnvIdx_t Signals_MaxCnvIdx;
__PRAGMA_USE__signals__50ms_1s__constant__s32__END

/*
 ***************************************************************************************************
 * Pragmas for functions in normal speed
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__signals__NormalSpeed__START
    uint32  Signals_CnvFromInt(sint32 Val, Signals_Num_t SigNum, Signals_NormType_t Norm,
                               uint8 Lim);
    sint32  Signals_CnvToInt(sint32 Val, Signals_Num_t SigNum, Signals_NormType_t Norm);

    uint32  Signals_Get(Signals_Num_t SigNum, Signals_NormType_t Norm);
    sint32  Signals_GetInt(Signals_Num_t SigNum);

    bool    Signals_Set(Signals_Num_t SigNum, Signals_NormType_t Norm, sint32 Val);
    bool    Signals_SetInt(Signals_Num_t SigNum, sint32 Val);

    uint8   Signals_GetLngth(Signals_Num_t SigNum, Signals_NormType_t Norm);


    uint32  Signals_GetBitComb(Signals_Num_t SigNum_u16);
    uint8 Signals_GetArrayValue(Signals_Num_t SigNum, uint16 SizeBufferInBytes, uint8* ptBuffer);


__PRAGMA_USE__CODE__signals__NormalSpeed__END


#endif /* _SIGNALS_PUB_H */
