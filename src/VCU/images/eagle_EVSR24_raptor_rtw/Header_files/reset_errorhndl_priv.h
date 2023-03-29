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
 * $Filename__:reset_errorhndl_priv.h$ 
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
 * $Name______:reset_errorhndl_priv$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: reset_errorhndl_priv.h
 *      Version: \main\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

/**
 ***********************************************************************************************************************
 * \moduledescription
 *              global header file for reset modul
 *
 * \scope           API
 ***********************************************************************************************************************
 */
#ifndef _RESET_ERRORHNDL_PRIV_H
#define _RESET_ERRORHNDL_PRIV_H

/*
 ***********************************************************************************************************************
 * Includes
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* enum for Reset_stTrapErr_s */
#ifdef RESET_FLMARGINREADDEF
typedef enum
{
    RESET_TRAPERRSTATE_IDLE,
    RESET_TRAPERRSTATE_TRAPERRINIT,
    RESET_TRAPERRSTATE_TRAPERRINITPOLL,
    RESET_TRAPERRSTATE_TRAPERRRD,
    RESET_TRAPERRSTATE_RDINITPOLL,
    RESET_TRAPERRSTATE_WR,
    RESET_TRAPERRSTATE_POLLWR,
    RESET_TRAPERRSTATE_FLMRINIT,
    RESET_TRAPERRSTATE_FLMRINITPOLL,
    RESET_TRAPERRSTATE_FLMRRD
}Reset_StateTrapErrProc_t;
#else
typedef enum
{
    RESET_TRAPERRSTATE_IDLE,
    RESET_TRAPERRSTATE_TRAPERRINIT,
    RESET_TRAPERRSTATE_TRAPERRINITPOLL,
    RESET_TRAPERRSTATE_TRAPERRRD,
    RESET_TRAPERRSTATE_RDINITPOLL,
    RESET_TRAPERRSTATE_WR,
    RESET_TRAPERRSTATE_POLLWR
}Reset_StateTrapErrProc_t;
#endif

#endif
