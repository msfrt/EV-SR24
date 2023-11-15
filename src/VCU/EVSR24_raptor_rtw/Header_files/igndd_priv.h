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
 * $Filename__:igndd_priv.h$ 
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
 * $Name______:igndd_priv$ 
 * $Variant___:2.14.0$ 
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
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/** \internal
	\addtogroup	IGNDD_PRIV
	@{
*/

#ifndef IGNDD_PRIV_H
#define IGNDD_PRIV_H

#include PROJECT_H

#define IGNDD_PRIV_TEST				FALSE	/* should be false */
#ifdef DOXYGEN
	#define IGNDD_PRIV_TEST				FALSE	/* should be false */

	#define RAM_SBSS_FAST(x) x
	#define RAM_SBSS_FAST8(x) x
	#define RAM_SBSS_SLOW(x) x
	#define RAM_SBSS_SLOW8(x) x

	#define CODE_FAST(x) x
	#define CODE_NORM(x) x
	#define CODE_SLOW(x) x


	#define CDRV_INLINE		static inline
	#define CDRV_ALWAYS_INLINE(x)	static inline x
#endif

/** Till this revolution threshold ignition calculation of the HW driver should
	take place on every tooth [0.5 1/min /inc]. */
#define IGNDD_REV_THRES_TOOTH_INT	(2000/0.5)


/* **************************************************************** */
/*	function prototypes												*/
/* **************************************************************** */


/* **************************************************************** */
/*	variables														*/
/* **************************************************************** */
#ifdef IGNDD_ModId
	#undef	REFORNOT
	#define REFORNOT
#else	/* IGNDD_ModId */
	#undef	REFORNOT
	#define REFORNOT	extern
#endif	/* IGNDD_ModId */



/* **************************************************************** */
/*	static/inline functions											*/
/* **************************************************************** */


#endif	/* IGNDD_PRIV_H */

/** @} */
/* end of private functions *******************************	*/

