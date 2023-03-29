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
 * $Filename__:diagcomappl_inf.h$ 
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
 * $Name______:diagcomappl_inf$ 
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
 *      File name: diagcomappl_inf.h
 *      Version: \main\basis\b_CORE\5
 * 
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diagcomappl_inf.h
 *      Version: \main\basis\b_CORE\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
 

#ifndef _DIAGCOMAPPL_INF_H
#define _DIAGCOMAPPL_INF_H

/**
 *********************************************************************
 * \moduldescription
 *       header file (functional) for diagcomappl_std module
 *
 * \scope  API
 *********************************************************************
 */


/*
 *******************************************************************************
 * Includes
 *******************************************************************************
 */

/* Public Imports for diagcomappl_std module */

#include "uacc.h" /*"diagcom_auto_conf.c" has a dependency on "basutil.h". basutil.h includes
                     "basutil_pub.h", since "basutil_pub.h" cannot contain includes the uacc.h
                     which is required for "basutil_pub.h", is included here.
                  */
#include "diagcom.h"

    /* Define to select the protocol */
    #ifndef PROTOCOL

        #define  DIAG       0
        #define  DLITE      1
        #define  PROTOCOL   DIAG

        #if ( PROTOCOL == DIAG )
            #include "diag.h"
            #include "dcan.h"

        #elif ( PROTOCOL == DLITE )
            #include "dlite.h"
        #endif

    #endif

#endif /* _DIAGCOMAPPL_INF_H */
