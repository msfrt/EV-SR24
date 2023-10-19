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
 * $Filename__:pwmin_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:template file$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:pwmin_template_conf$ 
 * $Variant___:1.13.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.13.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmin_template_conf.ht
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PWMIN_AUTO_CONF_H
#define _PWMIN_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        Pwmin - Pulse width modulates input signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

typedef enum
{
  I_F_ECUK018,
  I_F_ECUK052,
  I_F_ECUA035,
  I_F_ECUK048,
  I_F_ECUK029,
  PWMIN_NUM_SIGNALS
} Pwmin_Signals_e;

typedef enum
{
    PWMIN_MOK_SIGNALS_E
} Pwmin_MokSigs_e;





/* Additional macros needed for calibratable signals */





/*
 ***************************************************************************************************
 * macros needed to support signal alias names (multiple ECU support)
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * ECU location macro for each Pwmout signal
 ***************************************************************************************************
 */
/* Signal I_F_ECUK018 and its alias locations */
#define I_F_ECUK018_MSLOC ANY 

/* Signal I_F_ECUK052 and its alias locations */
#define I_F_ECUK052_MSLOC ANY 

/* Signal I_F_ECUA035 and its alias locations */
#define I_F_ECUA035_MSLOC ANY 

/* Signal I_F_ECUK048 and its alias locations */
#define I_F_ECUK048_MSLOC ANY 

/* Signal I_F_ECUK029 and its alias locations */
#define I_F_ECUK029_MSLOC ANY 



/*
 ***************************************************************************************************
 * Macro Interfaces
 ***************************************************************************************************
 */
/* MISRA RULE 96 VIOLATION: macro body cannot be enclosed in brackets here!                       */
#define Pwm_InSetPrescaler(signal, val)    Pwm_InSetPrescaler_##signal(val)



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__pwm__1_5ms__RAM__s32__START
extern Pwmin_Buffer_t Pwmin_I_F_ECUK018_Buffer_s;
extern Pwmin_Buffer_t Pwmin_I_F_ECUK052_Buffer_s;
extern Pwmin_Buffer_t Pwmin_I_F_ECUA035_Buffer_s;
extern Pwmin_Buffer_t Pwmin_I_F_ECUK048_Buffer_s;
extern Pwmin_Buffer_t Pwmin_I_F_ECUK029_Buffer_s;
extern Pwmin_Keep_t Pwmin_I_F_ECUK018_Keep_s;
extern Pwmin_Keep_t Pwmin_I_F_ECUK052_Keep_s;
extern Pwmin_Keep_t Pwmin_I_F_ECUA035_Keep_s;
extern Pwmin_Keep_t Pwmin_I_F_ECUK048_Keep_s;
extern Pwmin_Keep_t Pwmin_I_F_ECUK029_Keep_s;

__PRAGMA_USE__pwm__1_5ms__RAM__s32__END



__PRAGMA_USE__CODE__pwm__HighSpeed__START

__PRAGMA_USE__CODE__pwm__HighSpeed__END

/* _LIBRARYABILITY_H                                                                              */
#endif

/* _PWMIN_AUTO_CONF_H */
#endif
