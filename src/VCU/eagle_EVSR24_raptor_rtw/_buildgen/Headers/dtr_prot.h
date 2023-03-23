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
 * $Filename__:dtr_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:ILK2SI$ 
 * $Date______:29.09.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:dtr_prot$ 
 * $Variant___:2.1.0$ 
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
 * 2.1.0; 0     29.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dtr_prot.h
 *      Version: \main\14
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _DTR_PROT_H
#define _DTR_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      DTR = Diagnostic test result management private headerfile
 *
 * scope               int
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define DTR_NO_MIN          0xFFFF
#define DTR_NO_MAX          0
#define DTR_NO_MIN_SIGNED   0x7FFF
#define DTR_NO_MAX_SIGNED   0x8000

#define DTR_SIZE_SECTION         32
#define DTR_SUP_NEXT_SECT_MSK    0x1
#define DTR_SUP_STRT_MSK         0x80000000ul
#define DTR_CMP_TYP_MSK          0x80

#define DTR_TST_VAL         0x0u
#define DTR_UP_LIM          0x2u
#define DTR_LO_LIM          0x4u

#define DTR_NO_LIM_EXCEED   0x0u
#define DTR_UP_LIM_EXCEED   0x1u
#define DTR_LO_LIM_EXCEED   0x2u

#define DTR_CHCK_SIGNED_VAL 0x80u

#define DTR_CHCK_SHIFT_CONV 0x6u

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__dsm__1_5ms__constant__x8__START
extern const uint8  DTR_numLegacyElements;      /* number of GS legacy Mode$06 elements   */
__PRAGMA_USE__dsm__1_5ms__constant__x8__END
__PRAGMA_USE__dsm__1_5ms__constant__s16__START
extern const DSM_DTRType DTR_S6_ARRAY_DTR[];    /* mapping to DTR instances               */
__PRAGMA_USE__dsm__1_5ms__constant__s16__END
extern uint16 * const DTR_S6_ARRAY_REF[];       /* mapping to GS legacy structures        */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DummyLegacyDTR[];                 /* dummy element, in case no other exists */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END


MEMLAY_USE_ENVRAM(extern uint16, DTR_valTst[]);
MEMLAY_USE_ENVRAM(extern uint16, DTR_valUpLim[]);
MEMLAY_USE_ENVRAM(extern uint16, DTR_valLoLim[]);
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DTR_numElements;
extern const uint16 DTR_xFactRes;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END

__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const sint16 DTR_xOffset[];
extern const uint16 DTR_xFactor[];
extern const uint16 DTR_numCANCompuId[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END
__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8  DTR_numCompu[];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END

__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DTR_numSizeCAN;
extern const uint16 DTR_numSizeKLine;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END



/* pointer to calibration parameters */
extern const uint8  * DTR_adNumCANTstId;     /* pointer to calibration parameters */
extern const uint8  * DTR_adNumCANOBDId;     /* pointer to calibration parameters */
extern const uint8  * DTR_adAsgnCANRslt;     /* pointer to calibration parameters */
extern const uint8  * DTR_adAsgnKLineRslt;   /* pointer to calibration parameters */
extern const uint8  * DTR_adKLineTstId;      /* pointer to calibration parameters */
extern const uint8  * DTR_adKLineCmpnId;     /* pointer to calibration parameters */
extern const sint16 * DTR_adKLineOffset;     /* pointer to calibration parameters */
extern const sint16 * DTR_adKLineFactor;     /* pointer to calibration parameters */

/*
 ***************************************************************************************************
 * prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DTR_UpdCalPtr(void);

uint16 DTR_Conv(  sint32 valInp
                , sint32 valOffset
                , sint32 valFact
                , uint   valScalingId
                , uint   valTarget);


void DTR_Clear(void);
void DTR_SWIfc_Proc(void);

uint  DTR_SetLimits(  uint valIdx
                    , uint16 * intDsblUpLim
                    , uint16 * intDsblLoLim);

uint DTR_ChckRawValLim(  sint32 valResult
                       , sint32 valUpperLimReference
                       , sint32 valLowerLimReference
                       , uint   stControl);


void DTR_CorrectTestVal(  uint   stTstLimRawVal
                        , uint   valScalingId
                        , uint16 *valTst
                        , uint16 *valUpLim
                        , uint16 *valLoLim);

uint DTR_ConvKLineFrmt(  uint   * numCmpnId
                       , sint32 * valTst
                       , sint32 * valMinLimit
                       , sint32 * valMaxLimit);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

#endif /* _DTR_PROT_H */
