
#ifndef _SIGNALS_AUTO_CONFPRIV_H
#define _SIGNALS_AUTO_CONFPRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Automatically generated configuration headerfile of SIGNALS module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * External declarations
 ***************************************************************************************************
 */
/**
    External declarations of all used messages
*/
extern uint8     Ctrl_st;
extern uint8     DSMAUX_ctWUC;
extern uint32    DSMDur_ctPID21h;
extern uint32    DSMDur_ctPID31h;
extern uint32    DSMRdy_xPId1;
extern sint16    EpmCaS_phiOfsCorr[];
extern sint16    Epm_nEngRaw;
extern uint8     Epm_stOpMode;
extern uint8     Epm_stSync;
extern sint32    Signals_Default;
extern uint8     Signals_FillSigMess_u8;
extern uint8     T15_stRaw;

/**
    External declarations of all used functions for array signals
*/
uint8 Signals_Callback_ArrMapCur(Signals_Num_t SigNum, uint16 sizeinbytes, uint8 *dest_arr);

/**
    External declarations of all used functions for virtual signals
*/

/**
    External declarations of all used functions for bit signals
*/




/*_SIGNALS_AUTO_CONFPRIV_H */
#endif
