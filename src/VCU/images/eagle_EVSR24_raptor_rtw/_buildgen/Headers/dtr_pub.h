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
 * $Filename__:dtr_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:dtr_pub$ 
 * $Variant___:2.0.0$ 
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
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dtr_pub.h
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DTR_PUB_H
#define _DTR_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      DTR = Diagnostic test result management for DSM
 *
 * scope               API
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define DTR_CTL_NORMAL         0
#define DTR_CTL_NO_MIN         1
#define DTR_CTL_NO_MAX         2
#define DTR_CTL_INVISIBLE      3
#define DTR_CTL_RESET          4
#define DTR_CTL_NO_ACTION      5

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/**
 DTR = Diagnostic Test Result reference type.
 Integer packed into structure to enable parameter checking*/
/*****************************/
typedef struct
{
    uint16 id;  /* reference number  */
} DSM_DTRType;




/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_RepTstRslt( DSM_DTRType   DTR_ResultName
                   , sint32        valResult
                   , sint32        valUpperLimReference
                   , sint32        valLowerLimReference
                   , uint          stControl
                  );


uint32 DTR_GetKLineAvl(  uint    numSection);


uint   DTR_GetTIdKLineData( uint      numTId
                           , uint      idxTId
                           , uint *    numCompId
                           , uint *    TstVal
                           , uint *    CmpVal );


uint32 DTR_GetCANAvl(uint   numSection );

uint   DTR_GetOBDIdCANData(  uint   numOBDId
                           , uint   idxTId
                           , uint * numTId
                           , uint * numCompuId
                           , uint * TstVal
                           , uint * CmpMaxVal
                           , uint * CmpMinVal);


DSM_DTRType DSM_DTRArray(DSM_DTRType RName, uint idx);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END



#endif /* _DTR_PUB_H */
