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
 * $Filename__:e_systim.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:26.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_systim$ 
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
 * 1.11.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 /*************************************************************************************************
 *  FILE:           e_systim.h
 *
 *  DESCRIPTION:    Declaration of ERCOSEK data types and prototypes in respect of 
 *                  system time handling
 *
 *  VISIBILITY:     External
 *
 *  AUTHOR:         ETAS/PSC1-Gw
 *
 *  CREATED:        21.01.2003            17:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 

 History:
 --------

who when        call         what
---------------------------------------------------------------------------------------------------
Gw  21.01.2003  42628        moved to line 03c and created a seperate file for each function
Vr  27.02.2003  42695        DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Ew  26.03.2003  xxxxx        DD009_Define_Counter_constants
Sz  07.07.2003  48939        Moved os_systemTimerOvfls from header e_intern.h to here so it is visible 
                             in the application and GET_SYSTEMTIME_HIGH work on all targets
Sz  12.11.2003  51363        Review on TriCore,DD011 Clearify FAR, NEAR added __indirect to fast_code
                             to make it locatable in internal SPRAM.
Ry  27.05.2004  80069DD001   MISRA mark ERCOSEK headers.
                             MISRA RULE 18 VIOLATION: Numerical constant requires suffix.
                             [Classified:Mistake]
JSR 2004.12.09  56929        Added conditional code for advanced/tick-based timer calculations
JSR 2004.12.28  56929        Correct error in MICROSECONDS_TO_TICKS_PAR() [not used by Ercosek kernel]
                            
*/

#ifndef __E_SYSTIM_H
#define __E_SYSTIM_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */



/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

#ifndef		OS_ADVANCED_TIMER_CALCULATION
#define		OS_ADVANCED_TIMER_CALCULATION	(1)
#endif


/* Usage of hash defines out of ercosek.h */
#if		OS_ADVANCED_TIMER_CALCULATION == 0

#define MICROSECONDS_TO_TICKS_CONST(microSec)       (TickType)( ((microSec)*1000uL )    \
                                            /(SYSTEM_TICK_DURATION) )



/* Usage of frequency and prescaler variable out of the data record */
#define MICROSECONDS_TO_TICKS_VAR(microSec)     (TickType)( ((microSec)*1000uL )    \
                                            /(SYSTEM_TICK_DURATION_P(os_inputFreq,os_prescaler)))


/* For huge timer values */
#define MILLISECONDS_TO_TICKS_CONST( milliSec )   (TickType)( ((milliSec)*1000uL*1000uL) \
                                                /SYSTEM_TICK_DURATION )

/* Usage of frequency and prescaler variable out of the data record */
#define MILLISECONDS_TO_TICKS_VAR( milliSec )       (TickType)( ((milliSec)*1000uL*1000uL) \
                                            /SYSTEM_TICK_DURATION_P(os_inputFreq,os_prescaler) )


/* Overload the above mentioned macros */
#ifdef M_VAR
    #ifndef MPC750
        #define MICROSECONDS_TO_TICKS(x)    MICROSECONDS_TO_TICKS_VAR(x)
    #endif
    #define MILLISECONDS_TO_TICKS(x)    MILLISECONDS_TO_TICKS_VAR(x)
#else
    #ifndef MPC750
        #define MICROSECONDS_TO_TICKS(x)    MICROSECONDS_TO_TICKS_CONST(x)
    #endif
    #define MILLISECONDS_TO_TICKS(x)    MILLISECONDS_TO_TICKS_CONST(x)
#endif


/* Usage of user defined frequency and prescaler values */
#define MICROSECONDS_TO_TICKS_PAR(microSec, FreqCpu, Prescaler)                 \
                                            (TickType)( ((microSec)*1000uL )    \
                                            /(SYSTEM_TICK_DURATION_P(FreqCpu,Prescaler)))


#define SYSTEM_TICK_DURATION                SYSTEM_TICK_DURATION_P(INPUT_FREQ,PRESCALER)

#define OSTICKDURATION                      SYSTEM_TICK_DURATION
/* number of ticks in 10ms */
#define OSTICKSPERBASE                      MILLISECONDS_TO_TICKS(10)
#else
/* for systems with fast clocks which result in unacceptable rounding error 
	when SYSTEM_TICK_DURATION is measured in nano-seconds, use calculations based on INPUT_FREQ
*/

#define MICROSECONDS_TO_TICKS_CONST(microSec)       (TickType)(((microSec)*INPUT_FREQ)/(PRESCALER*1000uL) )

/* Usage of frequency and prescaler variable out of the data record */
#define MICROSECONDS_TO_TICKS_VAR(microSec)     (TickType)(((microSec)*os_inputFreq)/(os_prescaler*1000uL))


/* For huge timer values - be careful of overflow */
#define MILLISECONDS_TO_TICKS_CONST( milliSec )   (TickType)(((milliSec)*INPUT_FREQ)/PRESCALER )

/* Usage of frequency and prescaler variable out of the data record */
#define MILLISECONDS_TO_TICKS_VAR( milliSec )       (TickType)(((milliSec)*os_inputFreq)/os_prescaler)


/* Overload the above mentioned macros */
#ifdef M_VAR
    #ifndef MPC750
        #define MICROSECONDS_TO_TICKS(x)    MICROSECONDS_TO_TICKS_VAR(x)
    #endif
    #define MILLISECONDS_TO_TICKS(x)    MILLISECONDS_TO_TICKS_VAR(x)
#else
    #ifndef MPC750
        #define MICROSECONDS_TO_TICKS(x)    MICROSECONDS_TO_TICKS_CONST(x)
    #endif
    #define MILLISECONDS_TO_TICKS(x)    MILLISECONDS_TO_TICKS_CONST(x)
#endif


/* Usage of user defined frequency and prescaler values */
#define MICROSECONDS_TO_TICKS_PAR(microSec, FreqCpu, Prescaler)   (TickType)(((microSec)*(FreqCpu))/(1000UL*(Prescaler)))

#define SYSTEM_TICK_DURATION             SYSTEM_TICK_DURATION_P(INPUT_FREQ,PRESCALER)

/* number of ticks in 10ms */
#define OSTICKSPERBASE                      MILLISECONDS_TO_TICKS(10)

#endif		/* OS_ADVANCED_TIMER_CALCULATION == 0 */

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

typedef struct
{
#if (OS_HIGH_BYTE_FIRST)
    TickType                            h;
    TickType                            l;
#else
    TickType                            l;
    TickType                            h;
#endif
} T_os_sysTime;

typedef union
{
    TimeType                            lng;
    T_os_sysTime                        wrd;
} SystemTimeType;



/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */

extern  TickType                        os_dT;
extern  volatile TickType               os_systemTimerOvfls;


/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */
#ifndef ESCAPE_PARSER
TimeType                       GetSystemTime           ( void );
TickType OS_PREFIX_FOR_FAST_FUNCS GetSystemTimeLow        ( void );
TickType                       GetSystemTimeHigh       ( void );
#endif

#endif /* __E_SYSTIM_H */

/***************************************************************************************/

