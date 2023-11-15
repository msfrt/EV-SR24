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
 * $Filename__:signals_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:VMI3KOR$
 * $Date______:24.04.2012$
 * $Class_____:SWHDR$
 * $Name______:signals_prot$
 * $Variant___:1.25.0$
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
 * 1.25.0; 0     24.04.2012 VMI3KOR
 *   RQONE00034267:Removal of P2 warning in cnvtointlin.c and encapsulation of 
 *   getbit for DIABAS_VAR_SY=3 or 5
 * 
 * 1.21.0; 1     22.11.2011 AID3KOR
 *   Implementation of Array handling
 * 
 * 1.21.0; 0     20.10.2011 AID3KOR
 *   RCMS00787953 - Implementation of bit datatype in signals
 * 
 * 1.20.1; 0     10.06.2011 KUN5COB
 *   Misra warning removal.
 * 
 * 1.14.0; 0     26.03.2010 HMN2FE
 *   Full support of 32Bit (signed) Signals.
 *   Instead of earlier which were only able to support 31Bit (signed) Signals, 
 *   the feasible length has been extended to full 32 Bits.
 *   (-)
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
 *      Version: \main\13
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _SIGNALS_PROT_H
#define _SIGNALS_PROT_H


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Returns whether a given conversion index refers to a non- applicable or an aplicable conversion.
 *
 * Returns whether a given conversion index refers to a non- applicable or an aplicable conversion.
 *
 * \param    CnvIdx      Conversion formula index
 * \return   returns a boolean value
 * \retval   TRUE - Yes, the conversion is non- applicable
 * \retval   FALSE - No, the conversion is applicable
 ***************************************************************************************************
 */
#define Signals_IsCnvNonAppl(CnvIdx) (((CnvIdx) <= Signals_MaxCnvIdxNonAppl) ? (TRUE) : (FALSE))

/**
 ***************************************************************************************************
 * Returns the startposition of a binary conversion formula.
 * Returns the startposition of a binary conversion formula
 * \param   CnvForm     (Value) of the conversion formula
 * \return  Returns the startbit
 ***************************************************************************************************
 */
#define Signals_GetStrtPosByCnvForm(CnvForm)  ((uint8)((CnvForm) >> SIGNALS_STRTPOS_OFFSET))

/**
 ***************************************************************************************************
 * Returns the bitlength of a binary conversion formula.
 * Returns the bitlength of a binary conversion formula
 * \param   CnvForm     (Value) of the conversion formula
 * \return  Returns the length in bits
 ***************************************************************************************************
 */
#define Signals_GetBitLngthByCnvForm(CnvForm) ((uint8)((CnvForm) & SIGNALS_BITLNGTH_MASK))

/** Type for the different types of arrays                                                        */
typedef enum
{
    SIGNALS_ARRAY

}Signals_Type_Arr_t;

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


typedef enum
{
    Signals_Class_Std,
    Signals_Class_MCSP,
    Signals_Class_Virtual,
    Signals_Class_Invalid
}Signals_SignalClass_t;

/**Structure for saving array signal information                                                  */

typedef struct
{
  Signals_Type_Arr_t    type;                           /**ARRAY*/
  Signals_SigType_t     SigType;                        /**datatype of the ARRAY*/
  uint16                length_arr;
}Signals_SigArrStructure_t;
/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
 extern const uint16 Signals_MaxUsedSigNumArray;
/*
 ***************************************************************************************************
 * Pragmas for structures
 ***************************************************************************************************
 */
__PRAGMA_USE__signals__50ms_1s__constant__s32__START
    extern const Signals_CnvIdx_t Signals_MaxCnvIdxNonAppl;
    extern const Signals_CnvIdx_t Signals_MaxLinCnvIdxAppl;
    extern const Signals_CnvIdx_t Signals_MaxBinCnvIdxAppl;
    extern const Signals_SigArrStructure_t Signals_SigArrStructure[];
__PRAGMA_USE__signals__50ms_1s__constant__s32__END
/*
 ***************************************************************************************************
 * Pragmas for functions in normal speed
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__signals__NormalSpeed__START
    sint32  Signals_GetIntFromAdr(void* Msg_ad, Signals_SigType_t SigType);
    sint64  Signals_GetIntFromAdr_s64(const void* Msg_ad, Signals_SigType_t SigType);
    bool    Signals_SetIntAtAdr(void* Msg_ad, Signals_SigType_t SigType, sint32 Val);

    uint32 Signals_CnvFromIntBin(sint32 Val,uint8 StrtPos, uint8 BitLngth);

    uint32 Signals_CnvFromInt_s64(sint64 Val, Signals_Num_t SigNum, Signals_NormType_t Norm, uint8 Lim);
    uint32 Signals_CnvFromIntLin(sint32 Val, sint32 Fac, sint16 Ofs, uint8 Norm, uint8 Lim);
    uint32 Signals_CnvFromIntLin_s64(sint64 Val, sint32 Fac, sint16 Ofs, uint8 Norm, uint8 Lim);
    uint32 Signals_CnvFromIntLinSign(sint32 Val, sint32 Fac, sint16 Ofs, uint8 Norm, uint8 Lim);
    uint32 Signals_CnvFromIntLinSign_s64(sint64 Val, sint32 Fac, sint16 Ofs, uint8 Norm, uint8 Lim);
	#if ((DIABAS_VAR_SY==3)||(DIABAS_VAR_SY==5))
    uint32 Signals_GetBit(Signals_Num_t SigNum);
	#endif

    sint32 Signals_CnvToIntBin(sint32 Val,uint8 StrtPos, uint8 BitLngth);
    sint32 Signals_CnvToIntLin(sint32 Val, sint32 Fac, sint16 Ofs, uint8 Norm);


    void Signals_GetConvApplLin(Signals_CnvIdx_t CnvIdx, Signals_CnvFormLin_t* CnvForm);
    void Signals_GetConvApplBin(Signals_CnvIdx_t CnvIdx, Signals_CnvFormBin_t* CnvForm);


    Signals_SignalClass_t Signals_GetSignalClass(Signals_Num_t SigNumInt);
__PRAGMA_USE__CODE__signals__NormalSpeed__END

#endif /* _SIGNALS_PROT_H */
