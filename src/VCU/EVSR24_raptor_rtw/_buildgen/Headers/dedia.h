/*<RBHead>
*************************************************************************
* *
* ROBERT BOSCH GMBH *
* STUTTGART *
* *
* Alle Rechte vorbehalten - All rights reserved *
* *
*************************************************************************
*************************************************************************
* Administrative Information (automatically filled in by eASEE) *
*************************************************************************
*
* $Filename__:dedia.h$
*
* $Author____:KLN1SI$
*
* $Function__:- Add overview documentation for BC DEDia
*             - Add summary header dedia
*             - Change pavast document to naming convention DGS$
*
*************************************************************************
* $Domain____:SDOM$
* $User______:KLN1SI$
* $Date______:16.08.2010$
* $Class_____:SWHDR$
* $Name______:dedia$
* $Variant___:1.145.0$
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
* 1.145.0; 0     16.08.2010 KLN1SI
*   - Add overview documentation for BC DEDia
*   - Add summary header dedia
*   - Change pavast document to naming convention DGS
* 
* $
*
*************************************************************************
</RBHead>*/

#ifndef _DEDIA_H                                        /* protect multiple includes             */
#define _DEDIA_H


/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */

/* Includes for diesel systems or all FCs are selected */
#if (( DEDIA_VRNTCONF_SY == 0 ) || ( DEDIA_VRNTCONF_SY == 1 ))
#include "devlib.h"                             /* Include DevLib Header */
#endif

/* New DGS selectable FCs which are additional selectable */
#if (DIAACTR_ELECPSDIAGCMPNENA_SC == 1)
#include "diaactr_elecpsdiag_pub.h"             /* Include component specific public header */
#endif

#endif /* _DEDIA_H */
