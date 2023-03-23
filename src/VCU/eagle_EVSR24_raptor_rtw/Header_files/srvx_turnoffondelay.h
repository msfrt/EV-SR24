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
 * $Filename__:srvx_turnoffondelay.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.12.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_turnoffondelay$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 0     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings 
 *   
 *   2. Removal of SAT specific switches.
 * 
 * 1.15.0; 3     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 2     15.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 1     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 0     07.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_TURNOFFONDELAY_H
#define _SRVX_TURNOFFONDELAY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      function of TurnOnDelay / TurnOffDelay
 *
 * \scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Debouncing a rising edge.
 *
 * Debouncing a rising edge of bool value.
 *
 * \param       signal      bool input value
 * \param       time        pointer of internal timer value
 * \param       delayTime   parameter of debouncing delay
 * \param       Dt          calling cycle in microsec
 * \return      bool old or input value
 ***************************************************************************************************
 */
#define SrvX_TrnOnDly(signal, time, delayTime, Dt)                          \
                        (                                                   \
                         ((signal) != FALSE)                                \
                        ?                                                   \
						    (											    \
							    ((*(time))<(delayTime))					    \
							    ?									  	    \
									((										\
										((*(time))+=(Dt)),					\
										((*(time))>=(Dt))					\
										?									\
										  (*(time))							\
										:									\
										(									\
											(*(time))=(delayTime)			\
										)									\
									),FALSE)								\
							   :											\
								(TRUE)										\
						    )												\
						:											 		\
						   ((*(time))=0,FALSE)								\
						)

/**
 ***************************************************************************************************
 * Debouncing a falling edge.
 *
 * Debouncing a falling edge of bool value.
 *
 * \param       signal      bool input value
 * \param       time        pointer of internal timer value
 * \param       delayTime   parameter of debouncing delay
 * \param       Dt          calling cycle in Microseconds
 * \return      bool old or input value
 ***************************************************************************************************
 */
#define SrvX_TrnOffDly(signal, time, delayTime, Dt)                         \
                        (                                                   \
                        ((signal) == FALSE)                                 \
                        ?                                                   \
						(													\
                            ((*(time))<(delayTime))							\
                            ?												\
                            (												\
                                ((*(time))+=(Dt)),							\
                                ((*(time))>=(Dt))							\
                                ?											\
                                    (*(time))								\
                                :											\
                                (											\
                                    (*(time))=(delayTime)					\
                                )											\
                            ),TRUE											\
                            :												\
                               (*(time) = MAXSINT32, FALSE) 				\
						)													\
						:										    		\
						    ((*(time))=0,TRUE)					    		\
						)

/* _SRVX_TURNOFFONDELAY_H */
#endif
