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
 * $Filename__:sbflash.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:27.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbflash$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBFLASH_H
#define _SBFLASH_H

/*!
 *********************************************************************
 * \moduldescription
 *          Header file for flash handler.
 *
 * \scope       INTERN
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/* Maximum size of supported data width */
#define SBFLASH_MAX_DATA_WIDTH   256
/* Requested ram for workspace for one session, erasing (in words) */
#define SBFLASH_SIZE_RAM_ERASE   72/4
/* Requested ram for workspace for one session, programming (in words) */
#define SBFLASH_SIZE_RAM_PROG    (72 + SBFLASH_MAX_DATA_WIDTH)/4

/* Available actions of flash handler */
typedef enum
{
    SBFLASH_INIT_E,
    SBFLASH_ERASE_START_E,
    SBFLASH_ERASE_DO_E,
    SBFLASH_ERASE_END_E,
    SBFLASH_PROG_START_E,
    SBFLASH_PROG_DO_E,
    SBFLASH_PROG_END_E,
    SBFLASH_GETSTATUS_E
} SBFlash_Action_t;


/* Available session Id's */
typedef enum
{
    SBFLASH_RB_PROG_E   = 0,                       /* User 0 write protection */
    SBFLASH_CUST_PROG_E = 1                        /* User 1 write protection */
} SBFlash_SessionId_t;


/* Return values of flash functions */
typedef enum
{
    SBFLASH_ST_OK_E,                      /* Status finished successfull                */
    SBFLASH_E_INVALID_ADD_E,              /* Invalid address or address out of range    */
    SBFLASH_E_AREA_LOCKED_E,              /* Access to requested area not possible      */
    SBFLASH_E_SEQUENCE_ERR_E,             /* Call sequence error                        */
    SBFLASH_ST_ERASING_E,                 /* Status: erasing in progress                */
    SBFLASH_E_ERASE_ERR_E,                /* Erasing error                              */
    SBFLASH_ST_PROGRAMMING_E,             /* Status: programming in progress            */
    SBFLASH_E_PROG_ERR_E,                 /* Programming error                          */
    SBFLASH_E_NOT_ERASED_E,               /* Area to be programmed not erased           */
    SBFLASH_E_TOO_MANY_DATA_E,            /* Too many data passed                       */
    SBFLASH_E_SBRBPROG_E,                 /* SB reprogramming fails                     */
    SBFLASH_ST_ERROR_E                    /* General error                              */
} SBFlash_Status_t;

/* Structure for flash orders */
typedef struct
{
    SBFlash_Action_t xAction_s;        /* Action of flash handler */
    SBFlash_SessionId_t xSessionId_s;  /* Session ID (RB, CUST, ...)             */
    uint32 adStart_u32;                /* Start address (erasing or prog)        */
    uint32 adEnd_u32;                  /* End address (erasing or prog)          */
    uint8 *dBuffer_pu8;                /* Pointer to data (programming)          */
    uint32 xDataLen_u32;               /* Length of data (programming)           */
    uint32 *xWorkspace_pu32;           /* Pointer to workspace for flash handler */
} SBFlash_Order_t;

/* Access function of flash handler */
extern SBFlash_Status_t SBFlash_Do(SBFlash_Order_t *xOrder_ps) __attribute__ ((section (".sb_flashdo,\"aw\",@progbits")));

#endif
