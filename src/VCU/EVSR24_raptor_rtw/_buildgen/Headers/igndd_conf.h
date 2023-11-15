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
 * $Filename__:igndd_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:igndd_conf$ 
 * $Variant___:2.13.0$ 
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
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/** \addtogroup	IGNDD_CONF
	@{
*/

#ifndef IGNDD_CONF_H_
#define IGNDD_CONF_H_

	#include PROJECT_H

	/** \~english	Is the tester function (\ref IGNtest()/\ref igndd_Test()) needed for this project? Possible values are FALSE and TRUE.

		\~german	Soll die Testerfunktion (\ref IGNtest()) angelegt werden? Moegliche Werte sind FALSE, TRUE.

			\remarks	Bisher wurde dies, ohne dass zusaetzlich Konfiguration noetig war gemacht. Da die alte Version jedoch Warnungen bei eingeschalteter -Winline Option verursachen konnte, wird eine manuelle Konfiguration von den Projekten bevorzugt.
	*/
	#define IGNDD_CONF_ENABLE_TEST_FUNC		FALSE


#endif /* IGNDD_CONF_H_ */
/** @} */
