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
 * $Filename__:tp_pub.h$ 
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
 * $Name______:tp_pub$ 
 * $Variant___:1.5.0$ 
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
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: tp_pub.h
 *      Version: \main\9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 


#ifndef     _TP_PUB_H
#define     _TP_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

#define TPBUF_ALLOC_APPL        0x01    /* buffer locked by application     */
#define TPBUF_ALLOC_TP          0x02    /* buffer locked by tp layer        */
#define TPBUF_EMPTY             0x04    /* Buffer is empty and still data needs to be sent */
#define TPBUF_FF                0x08    /* first frame received             */
#define TPBUF_OVERRUN           0x10    /* buffer overrun flag              */
#define TPBUF_MSGREC            0x20    /* message received - but not       */
                                        /* necessarily accepted             */
#define TPBUF_DISCONNECT        0x40    /* disconnect of communication forced*/
#define TPBUF_REG               0x80    /* message is registered            */

#define TPRES_APPL              0x01    /* reserve buffer for application   */
#define TPRES_TP                0x02    /* reserve buffer for tp layer      */

#define TP_UNDEFINED            0
#define TPTYP_TP20              0x80    /* value to check TP20 Handle       */


/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */


typedef enum
{
    TP_NWL_OK_E,
    TP_NWL_TOUT_A_E,
    TP_NWL_TOUT_BS_E,
    TP_NWL_TOUT_CR_E,
    TP_NWL_WRG_SN_E,
    TP_NWL_WRG_LEN_SF_E,
    TP_NWL_WRG_LEN_FF_E,
    TP_NWL_WRG_LEN_FC_E,
    TP_NWL_UNEXP_PDU_SF_E,
    TP_NWL_UNEXP_PDU_FF_E,
    TP_NWL_UNEXP_PDU_CF_E,
    TP_NWL_UNEXP_PDU_FC_E,
    TP_NWL_UNEXP_PDU_UKN_E,
    TP_NWL_INVAL_FS_E,
    TP_NWL_WFT_OVRN_E,
    TP_NWL_BUFF_OVRFLOW_E,
    TP_NWL_WAIT_E,
    TP_NWL_NOTX_E,
    TP_NWL_ERROR_E
} Tp_StatusType;



/* *******************     rx/tx function pointer structure      **********************************
*/

typedef  void          (Tp_rxFunc_t)(uint16 numLMsgNo,uint32 *dMsgId_pu32,
                                      uint8 *numMsgLength_pu8, uint8 *Data_pau8);

typedef Tp_rxFunc_t*    Tp_rxFuncPtr_t;

typedef Tp_StatusType  (Tp_txFunc_t)( uint8, uint16 );
typedef Tp_txFunc_t *   Tp_txFuncPtr_t;


typedef const struct
{
    Tp_rxFuncPtr_t      Tp_rxFunc_p;       /* Rx function pointer */
    Tp_txFuncPtr_t      Tp_txFunc_p;       /* Tx function pointer */
} Tp_apiFunctions_t;


/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */

__PRAGMA_USE__tp__1_5ms__constant__s32__START
extern  Tp_apiFunctions_t           ISOTP_api_cs ;
__PRAGMA_USE__tp__1_5ms__constant__s32__END

#endif
