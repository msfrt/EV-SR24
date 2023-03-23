/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/
#ifndef _MM_AUTO_CONF_H
#define _MM_AUTO_CONF_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "cy327.h"


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
//*typedef struct
//{
//    uint32 tiResp_u32;              /* current response time in µs                              */
//    uint32 tiLastTrans_u32;         /* timestamp of last SPI transmission in timer ticks        */
//    uint8  dRequest_u8;             /* current request of monitoring module                     */
//    uint8  ctError_u8;              /* value of error counter                                   */
//    uint8  stMm_u8;                 /* status bits of the monitoring module                     */
//}Mm_Request_t;


typedef Cy327_MM_Request_t Mm_Request_t;

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**************************************************************************************************/
/*      Layout of return value stMm_u8                                                            */
/*      (actuall identical with the register REQUI inside the CY320 device)                       */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1100 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |    RESP_CNT   |RESP_  |RESP_Z0|  CHRT | W_RESP|NO_RESP|RESP_TO|                         */
/*      |               |    ERR|       |       |       |       |_EARLY |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/

#define  MM_STMM_MASK_RESP_TO_EARLY   CY327_REQUHI_EARLY_MASK
#define  MM_STMM_MASK_RESP_NO         CY327_REQUHI_NO_RESP_MASK
#define  MM_STMM_MASK_RESP_WRONG      CY327_REQUHI_WRONG_RESP_MASK
#define  MM_STMM_MASK_TIME_CHANGED    CY327_REQUHI_CHANGE_MASK
#define  MM_STMM_MASK_TIME_NULL       CY327_REQUHI_RESP_Z0_MASK
#define  MM_STMM_MASK_RESP_ERROR      CY327_REQUHI_RESP_ERR_MASK
#define  MM_STMM_MASK_COUNTER         CY327_REQUHI_RESP_CNT_MASK

#define  MM_STMM_BP_RESP_TO_EARLY     CY327_REQUHI_EARLY_BP
#define  MM_STMM_BP_RESP_NO           CY327_REQUHI_NO_RESP_BP
#define  MM_STMM_BP_RESP_WRONG        CY327_REQUHI_WRONG_RESP_BP
#define  MM_STMM_BP_TIME_CHANGED      CY327_REQUHI_CHANGE_BP
#define  MM_STMM_BP_TIME_NULL         CY327_REQUHI_RESP_Z0_BP
#define  MM_STMM_BP_RESP_ERROR        CY327_REQUHI_RESP_ERR_BP
#define  MM_STMM_BP_COUNTER           CY327_REQUHI_RESP_CNT_BP

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/* routing for bool Mm_Transmit(void) ------------------------------------*/
#define Mm_Transmit()         (Cy327_MM_Transmit())

/* routing for bool Mm_SetRespTime(uint32) -------------------------------*/
#define Mm_SetRespTime(PARAM) (Cy327_MM_SetRespTime(PARAM))

/* routing for void Mm_SetResponse(uint32) -------------------------------*/
#define Mm_SetResponse(PARAM) (Cy327_MM_SetResponse(PARAM))

/* routing for bool Mm_GetRequest( Mm_Request_t*) ------------------------*/
#define Mm_GetRequest(PARAM)  (Cy327_MM_GetRequest(PARAM))

/* routing for bool Mm_RequestQuery(void) --------------------------------*/
#define Mm_RequestQuery()     (Cy327_MM_RequestQuery())

/* routing for bool Mm_WD_Hdl(void) --------------------------------------*/
#define Mm_WD_Hdl()           (Cy327_MM_WD_Hdl())

/* routing for bool MM_WD_Hdl(void) --------------------------------------*/
#define MM_WD_Hdl()           (Cy327_MM_WD_Hdl()) 
 
/*_MM_AUTO_CONF_H*/  
#endif

