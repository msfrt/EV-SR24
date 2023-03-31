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
 </RBHead>*/

#ifndef _L9959_AUTO_CONF_H
#define _L9959_AUTO_CONF_H


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define L9959_NUM_ICS 3

#define L9959_GPTA0 0
#define L9959_GPTA1 1
#define L9959_LTCA2 2


#define L9959_MON_ENABLED  TRUE
#define L9959_MON_DISABLED FALSE

#define L9959_CALL_MOD_NORM FALSE
#define L9959_CALL_MOD_MON  TRUE


#define L9959_MON_USED


/* Signalnames for calling of functions:
    - Pmd_ActHBridgeDiag
    - Pmd_GetHBridgeDiag                 */

#define L9959_1 1 
#define L9959_2 2 
#define L9959_3 3 


/**************************************************************************************************/
/* Extern declarations                                                                            */
/**************************************************************************************************/
__PRAGMA_USE__CODE__hwe__NormalSpeed__START

extern void L9959_RdDiag_SPICallBk_0(void);


extern void L9959_RdDiag_SPICallBk_1(void);


extern void L9959_RdDiag_SPICallBk_2(void);


extern void L9959_MonStatcon_SPICallBk_0(void);


extern void L9959_MonStatcon_SPICallBk_1(void);


extern void L9959_MonStatcon_SPICallBk_2(void);


__PRAGMA_USE__CODE__hwe__NormalSpeed__END

#endif

