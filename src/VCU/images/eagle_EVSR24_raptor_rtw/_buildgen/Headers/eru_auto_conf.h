
#ifndef _ERU_AUTO_CONF_H
#define _ERU_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * eru_auto_conf.h  - automatically generated configuration headerfile of ERU module for TC17xx.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 *  Get Connection Status of ERU input to output.
 *
 *  \param      xSignal     Name of the signal identified at input and output
 *  \return     TRUE if input is connect to output, FALSE otherwise.
 *  \seealso
 ***************************************************************************************************
 */

#define Eru_GetConnSt(xSignal) ERU_GETCONNST_##xSignal




/**
 ***************************************************************************************************
 *  Connect ERU input to output.
 *
 *  \param      xSignal     Name of the signal identified at input and output
 *  \return
 *  \seealso
 ***************************************************************************************************
 */

#define Eru_Conn(xSignal) ERU_CONN_##xSignal




/**
 ***************************************************************************************************
 *  Disconnect ERU input from output.
 *
 *  \param      xSignal     Name of the signal identified at input and output
 *  \return
 *  \seealso
 ***************************************************************************************************
 */

#define Eru_CtOff(xSignal) ERU_CTOFF_##xSignal




/* _ERU_AUTO_CONF_H */
#endif

/* _LIBRARYABILITY_H */
#endif
