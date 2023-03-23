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
 * $Filename__:mli_priv.h$ 
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
 * $Name______:mli_priv$ 
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
 *      File name: mli_priv.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MLI_PRIV_H
#define _MLI_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Private header for MLI interface layer.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define MLI_PARITY_ERROR     1ul
#define MLI_NACK_ERROR       2ul
#define MLI_DELAY_ERROR      3ul
#define MLI_PE_NOTDETECTED   4ul
#define MLI_ERROR_WRONG_DET  5ul

/* Enum for module */
enum
{
    MLI_MODULE_MLI0,
    MLI_MODULE_MLI1
};

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
#ifdef MLI_CONFIGURED_MLI0
extern void Mli_StartupMLI0(void);
#endif

#ifdef MLI_CONFIGURED_MLI1
extern void Mli_StartupMLI1(void);
#endif
extern Mli_xStatus_t Mli_PollStatus(uint8 xModule_u8);
extern Mli_xStatus_t Mli_ActvRdWait(uint8 xDevice_u8);
extern Mli_xStatus_t Mli_ActvWrWait(uint8 xDevice_u8);
extern void Mli_InitConf(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Mli_ConfType_t Mli_ConfUser_cs[];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern bool Mli_stError_b;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

/* _MLI_PRIV_H */
#endif
