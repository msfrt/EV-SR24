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
 * $Filename__:t15.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:central header file for the GC T15$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KDD2FE$ 
 * $Date______:02.10.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:t15$ 
 * $Variant___:10.0.0$ 
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
 * 10.0.0; 0     02.10.2009 KDD2FE
 *   Structural componet for unified t15 module. Migration based on FSP : 
 *   SC_SYC_T15CP 20.20; 2
 *   
 * 
 * 1.20.0; 0     31.07.2008 NESTORADMINSDOM
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _T15_H /* protect multiple includes */
#define _T15_H

/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */
#define T15_OFF      0      /* Terminal 15 is switched off                                        */
#define T15_ON       1      /* Terminal 15 is switched on                                         */

 
/* public method prototypes for T15_DISABLERST_IMPL */
#define _T15_DISABLERST_IMPL_
#define T15_DisableRst T15_DisableRstIMPL
#define T15_DISABLERST_ID 0xA5A55A5Aul

/* public method prototypes for T15_ENABLERST_IMPL */
#define _T15_ENABLERST_IMPL_
#define T15_EnableRst T15_EnableRstIMPL

/*Include public header */
#include "t15_dd_pub.h"
#include "t15_vd_pub.h"

#endif /* _T15_H */
