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
 * $Filename__:autosar_type.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZT2FE$ 
 * $Date______:29.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:autosar_type$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 1     29.06.2010 MZT2FE
 *   Update.
 * 
 * 1.14.0; 0     29.06.2010 MZT2FE
 *   Update for autosar header.
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: autosar_type.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _AUTOSAR_TYPE_H
#define _AUTOSAR_TYPE_H

/**
 ***************************************************************************************************
 * \moduledescription
 * AUTOSAR specific standard type definitions
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * definitions
 ***************************************************************************************************
 */
#define NTFRSLT_OK           0x00       /*Notification Result: OK*/
#define NTFRSLT_E_NOT_OK     0x01       /*Notification Result: NOT OK*/
#define NTFRSLT_E_TIMEOUT_A  0x02       /*Notification Result: 'A' Timer has expired*/
#define NTFRSLT_E_TIMEOUT_Bs 0x03       /*Notification Result: 'Bs' Timer has expired*/
#define NTFRSLT_E_TIMEOUT_Cr 0x04       /*Notification Result: 'Cr' Timer has expired*/
#define NTFRSLT_E_WRONG_SN   0x05       /*Notification Result: Wrong sequence number has arrived*/
#define NTFRSLT_E_INVALID_FS 0x06       /*Notification Result: Invalid Flow Status has been received*/
#define NTFRSLT_E_UNEXP_PDU  0x07       /*Notification Result: Unexpected PDU has arrived*/
#define NTFRSLT_E_WFT_OVRN   0x08       /*Notification Result: Number of Wait To Send exceeded the limit*/
#define NTFRSLT_E_NO_BUFFER  0x09       /*Notification Result: Buffer is not available*/


/*Additional #defines for dflex which are similar to Autosar NTFRSLT_OK, NTFRSLT_E_NOT_OK*/
#define NOTIFRESULT_OK           0x00
#define NOTIFRESULT_E_NOT_OK     0x01

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*NotifResultType has been changed to #define the below one is not required*/
/*
typedef enum
{
    NOTIFRESULT_OK,
    NOTIFRESULT_E_NOT_OK,

} NotifResultType;
*/

typedef uint8 NotifResultType;

typedef enum
{
    BUFREQ_OK,
    BUFREQ_E_NOT_OK,
    BUFREQ_E_BUSY,
    BUFREQ_E_OVFL

} BufReq_ReturnType;

typedef  uint8     PduIdType;          /*   In future it can be changed to uint16  */

typedef  uint16     PduLengthType;

typedef struct
{
   uint8  *SduDataPtr;
   uint16  SduLength;
} PduInfoType;                        /*  This is totally new format  */

/* end of _AUTOSAR_TYPE_H */
#endif
