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
 * $Filename__:etc_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RMK4KOR$
 * $Date______:03.08.2012$
 * $Class_____:SWHDR$
 * $Name______:etc_pub$
 * $Variant___:1.18.0$
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
 * 1.18.0; 0     03.08.2012 RMK4KOR
 *   Addition of new states for status function 
 *   
 *   Improvement in Documentation
 * 
 * 1.11.0; 0     14.10.2009 PRE3KOR
 *   introduction of stop of engine test on broken communication
 * 
 * 1.9.0; 1     29.04.2009 MNG2SI
 *   Introduction of engine test type normal
 * 
 * 1.9.0; 0     02.04.2009 MNG2SI
 *   introduction of use case normal
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\7
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _ETC_PUB_H
#define _ETC_PUB_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* API DEFINES for the return values of the several API functions                                 */

/* Etc_TstStrt                                                                                    */
#define ETC_TST_STRT_CNCL_ID_NS_U8    (uint8)0x00 /**< ID is not supported                        */
#define ETC_TST_STRT_CNCL_NULLPTR_U8  (uint8)0x10 /**< Given pointer was a NULL pointer           */
#define ETC_TST_STRT_CNCL_LCK_U8      (uint8)0x11 /**< Requested test is locked through another
                                                       active test                                */
#define ETC_TST_STRT_CNCL_ENV_U8      (uint8)0x12 /**< Environment conditions allow not to start
                                                       the test                                   */
#define ETC_TST_STRT_OK_U8            (uint8)0x13 /**< Request is for start test was successfull  */
#define ETC_TST_STRT_CNCL_ACTV_U8     (uint8)0x14 /**< Test is already active                     */
#define ETC_TST_STRT_CNCL_DYN_PAR_U8  (uint8)0x15 /**< Dynamical test wasn't finished yet         */
#define ETC_TST_STRT_CNCL_NORESS_U8   (uint8)0x16 /**< Not enough resources available             */
#define ETC_TST_STRT_CNCL_PARAM_U8    (uint8)0x17 /**< Parameters are crap                        */

/*< Etc_TstStop                                                                                   */
#define ETC_TST_STOP_CNCL_ID_NS_U8    (uint8)0x00 /**< ID is not supported                        */
#define ETC_TST_STOP_CNCL_NA_U8       (uint8)0x10 /**< Requested test is not active               */
#define ETC_TST_STOP_CNCL_ENV_U8      (uint8)0x11 /**< Environment conditions allow not to stop the
                                                       test                                       */
#define ETC_TST_STOP_OK_U8            (uint8)0x13 /**< Request for stop test was successfull      */

/*< Etc_TstGetSt                                                                                  */
#define ETC_TST_ST_CNCL_ID_NS_U8      		 (uint8)0x00 /**< ID is not supported                 */
#define ETC_TST_ST_NA_U8              		 (uint8)0x10 /**< Test is not active                  */
#define ETC_TST_ST_ACTIV_NO_VAL_U8    		 (uint8)0x11 /**< Test active, no results available   */
#define ETC_TST_ST_ACTIV_ITM_VAL_U8   		 (uint8)0x12 /**< Test active, intermediate results are
                                                       		  available                           */
#define ETC_TST_ST_SUCCESS_U8         		 (uint8)0x13 /**< Test successfull,results are 
															  available    						  */
#define ETC_TST_ST_ABORT_U8           		 (uint8)0x14 /**< Test was aborted                    */
#define ETC_TST_ST_HOLD_U8            		 (uint8)0x15 /**< Test is in state hold, test is not
															  allowed to be started				  */
#define ETC_TST_ST_FINISHED_NO_VAL_U8 		 (uint8)0x16 /**< Test is finished but results are 
															  not available						  */
#define ETC_TST_ST_FINISHED_WITH_FAULT_U8 	 (uint8)0x17 /**< Test is finished with an error	  */
#define ETC_TST_ST_FINISHED_WITHOUT_FAULT_U8 (uint8)0x18 /**< Test is finished without any error  */

/** Etc_TstIsActv                                                                                 */
#define ETC_TST_ACTV_NS_U8            (uint8)0x00  /**< ID is no supported                        */
#define ETC_TST_ACTV_OK_U8            (uint8)0x13  /**< Test is runnning or allowed to run        */
#define ETC_TST_ACTV_NA_U8            (uint8)0x10  /**< Test isn't running or not allowed to run  */

/** Etc_CreateDynTst                                                                              */
#define ETC_CREATEDYNTEST_OK_U8        (uint8)0x00 /**< Creation of the dynamical test was fine   */
#define ETC_CREATEDYNTEST_CNCL_RES_U8  (uint8)0xFF /**< Cancelled due to missing resources        */
#define ETC_CREATEDYNTEST_CNCL_LOCK_U8 (uint8)0xAA /**< Cancelled due to locking of running test  */
#define ETC_CREATEDYNTEST_CNCL_IDNS_U8 (uint8)0xBB /**< One of the IDs in the list wasn't supp.   */

/** Etc_AddDynPar                                                                                 */
#define ETC_ADDDYNPAR_OK_U8             (uint8)0x00/**< Adding all parameters was successfull     */
#define ETC_ADDDYNPAR_CNCL_NODYNTST_U8  (uint8)0x01/**< No dynamical test created                 */
#define ETC_ADDDYNPAR_MISSPAR_U8        (uint8)0x02/**< Not all parameters are given yet          */
#define ETC_ADDDYNPAR_CNCL_ID_ND_U8     (uint8)0x03/**< Test ID is no assigned for dyn. test      */
#define ETC_ADDDYNPAR_CNCL_ID_NS_U8     (uint8)0x04/**< Test ID isn't supported at all            */
#define ETC_ADDDYNPAR_CNCL_NULLPTR_U8   (uint8)0x05/**< One of the tests had a NULL pointer to arg*/

/* Etc_TstGetAbrtReason                                                                           */
#define ETC_TST_ABORT_CNCL_ID_NS_U8     (uint8)0x00/**< Answer if the ID is not supported         */
#define ETC_TST_ABORT_REASON_DEFAULT_U8 (uint8)0x01/**< Dflt reason if the func. is not support.  */
#define ETC_TST_ABORT_CLUTCH_U8         (uint8)0x02/**< Clutch was the abort reason               */
#define ETC_TST_ABORT_SPEED_NEZ_U8      (uint8)0x03/**< Speed is not zero                         */
#define ETC_TST_ABORT_BRAKE_PRESS_U8    (uint8)0x04/**< Brake pedal was pressed                   */
#define ETC_TST_ABORT_THRPEDAL_PRESS_U8 (uint8)0x05/**< Throttle pedal was pressed                */
#define ETC_TST_ABORT_ENG_COLD_U8       (uint8)0x06/**< Engine isn't warmed up yet                */
#define ETC_TST_ABORT_DYNTEST_U8        (uint8)0x07/**< Test ID is dynamical, fetch sub tests     */
#define ETC_TST_ABORT_HOLD_U8           (uint8)0x08/**< Hold state for tests will be handeled by abort reasons     */

/* Etc_TstGetRslt                                                                                 */
#define ETC_GETRSLT_CNCL_ID_NS_U8       (uint8)0x00/**< Unsupported test ID                       */
#define ETC_GETRSLT_OK_U8               (uint8)0x01/**< Data was copied correctly, still data
                                                        available in buff.                        */
#define ETC_GETRSLT_OK_FIN_U8           (uint8)0x02/**< Data was copied correctly and buffer is
                                                        empty now                                 */
#define ETC_GETRSLT_CNCL_NODATA_U8      (uint8)0x10/**< No data for this test is available, either
                                                        the buffer was emptied already beforehand
                                                        or the test was never run                 */
#define ETC_GETRSLT_CNCL_DATA_NA_U8     (uint8)0x11/**< Data is not available yet. Probably, the
                                                        test hasn't finished sending a complete
                                                        data set yet.                             */
/* The below hash defines to indicate if a test has to be stopped on communication broken   	 */

#define ETC_TST_TRQ_INCRSNG				(uint8)0x00/**< Torque increasing engine test , this 
														test should be stopped on 
														broken communication					 */
#define ETC_TST_NON_TRQ_INCRSNG			(uint8)0x01/**< Non torque increasing engine test ,this
													   should be stopped on broken communication */ 

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/**
    Encapsulation structure for a test ID.
*/
typedef struct
{
    uint8   id;                             /*< ID of the referenced test                         */
}Etc_TstId_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__etc__NormalSpeed__START
uint16 Etc_TstStrt(const Etc_TstId_t *TstId, uint8 *Par_pu8); /* Start test                       */
uint16 Etc_TstStop(const Etc_TstId_t *TstId);                 /* Stop test                        */
uint16 Etc_TstGetSt(const Etc_TstId_t *TstId);                /* Get test status                  */
uint8  Etc_TstGetBufSize(const Etc_TstId_t *TstId);           /* Get number of parameter bytes    */
uint8  Etc_TstGetRsltSize(const Etc_TstId_t *TstId);          /* Get number of return bytes       */


uint8  Etc_TstIsActv(const Etc_TstId_t *TstId);               /* Check whether a test is running  */
void   Etc_Co_Proc(void);                                     /* Coordination process             */
uint16 Etc_TstGetAbrtReason(const Etc_TstId_t *TstId);        /* Get the abort reason of a
                                                                 stopped test                     */
/* Creation of a dynamical test                                                                   */
uint8  Etc_CreateDynTst(uint8 numTstId_u8, Etc_TstId_t *TstIdLst_pa, uint16 *Delay_pu16);

/* Adding parameter to the dynamical test                                                         */
uint8 Etc_AddDynPar(const Etc_TstId_t *TstId, uint8 *Par_pu8);

/* Push method of ONE result byte                                                                 */
bool    Etc_TstPshRsltByte(const Etc_TstId_t *TstId, uint8 RsltVal_u8);

/* Push method for one result data set                                                            */
bool    Etc_TstPshRsltSet(const Etc_TstId_t *TstId, uint8 *RsltVal_pu8);

/* Fetch method of one result data set                                                            */
uint8   Etc_TstGetRslt(const Etc_TstId_t *TstId, uint8 *Buf_pu8);

/* Call back function to stop all the torque increasing engine test 							  */
void    ETC_ComBrkn_Tststop (void);

/* function returns the ID of a torque increasing enigne test, 									  */
/* This function is called only by ETC monitoring functions                                       */
uint16  Etc_TstGetIdTrqInc(void);

__PRAGMA_USE__CODE__etc__NormalSpeed__END

/* _ETC_PUB_H                                                                                     */
#endif

