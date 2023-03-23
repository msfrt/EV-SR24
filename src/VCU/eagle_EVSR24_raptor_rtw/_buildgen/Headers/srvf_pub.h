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
 * $Filename__:srvf_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:02.11.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_pub$ 
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
 * 1.17.0; 0     02.11.2012 PIR5COB
 *   New float functionalities are added.
 *   
 *   1. srvf_isplusinfinity_r32
 *   
 *   2. srvf_isminusinfinity_r32
 *   
 *   3. srvf_realvalueclassify_r32
 *   
 *   4. srvf_isinfinity_r32
 * 
 * 1.9.0; 0     29.08.2008 VKA2FE
 *   Component Toolbox-Import
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

#ifndef _SRVF_PUB_H                                  /* protect multiple includes              */
#define _SRVF_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Public file for floating service library
 *
 * \scope               CONF
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern variables
 ***************************************************************************************************
 */

#define ZERO_R32  0.0F
#define HALF_R32  0.5F
#define ONE_R32   1.0F
#define TWO_R32   2.0F
#define TEN_R32  10.0F
#define SRVF_PI           3.14159265F
#define SRVF_2PI          (2*SRVF_PI)
#define SRVF_PI_HALF      1.5707963F
#define SRVF_PI_HALF_NEG -1.5707963F
#define SRVF_PLUS_INFINITY           10           
#define SRVF_MINUS_INFINITY          20
#define SRVF_POSITIVE_ZERO           30
#define SRVF_NEGATIVE_ZERO           40
#define SRVF_POSITIVE_DENORMAL_VALUE 50 
#define SRVF_NEGATIVE_DENORMAL_VALUE 60
#define SRVF_POSITIVE_NORMAL_VALUE   70 
#define SRVF_NEGATIVE_NORMAL_VALUE   80
#define SRVF_SIGNALING_NAN           90
#define SRVF_QUIET_NAN               100
/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */



/*
 *********************************************************************
 * Prototypes for functions which can be used as inline or normal
 * C-implementation
 *********************************************************************
 */



/* SRVF_PUB_H */
#endif
