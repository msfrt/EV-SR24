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
 * $Filename__:epm_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SCU3KOR$
 * $Date______:09.07.2013$
 * $Class_____:SWHDR$
 * $Name______:epm_pub$
 * $Variant___:1.48.1$
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
 * 1.48.1; 0     09.07.2013 SCU3KOR
 *   Warning removal RQONE00212004
 * 
 * 1.48.0; 0     13.02.2013 IOM2FE
 *   Include header-files EpmCust
 * 
 * 1.25.0; 1     22.04.2010 OMO2FE
 *   include engspd_pub header instead of engspd_dd.h
 * 
 * 1.25.0; 0     24.03.2010 OMO2FE
 *   engspd_dd_pub.h in epm_pub.h included
 * 
 * 1.24.0_1; 0     18.12.2009 OMO2FE
 *   EPM 24
 * 
 * 1.24.0; 1     17.12.2009 OMO2FE
 *   EPM 24
 * 
 * 1.24.0; 0     03.12.2009 TUC2SI
 *   EPM 24
 * 
 * 1.22.3; 0     23.09.2009 HKD2FE
 *   SWB break because of inconsistent PRAGMA
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   Initial import from Clearcase 
 *      File name: epm_pub.h
 *      Version: \main\basis\b_Epm\27
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_PUB_H                                      /* protect multiple includes              */
#define _EPM_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header-file of STC EPM
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
//this define has to be removed as soon as GS CDrv stop using it. Also remove CRS_TOOTHAVRG_SY
//from epm_ini_pavast.xml
 #define EPMHCRS_SWTTIINCPERAVRG (CRS_TOOTHAVRG_SY)


/**
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
// epmhwe specific configuration definitions
#include "epmhwe_auto_conf.h"
#include "epm_pragma.h"
#include "epm_ini_dat.h"
#include "memlay.h"


// public interfaces
#include "engda_nengrev_pub.h"
#include "epm_ini_pub.h"
#include "epm_opmode_pub.h"
#include "epm_spd_pub.h"
#include "epm_spdgrd_pub.h"
#include "epmhwe_pub.h"                             // hwe
#include "epmhcrs_pub.h"                            // hwe-crankshaft
#include "epmhcas_pub.h"                            // hwe-camshaft
#include "epmcas_pub.h"                             // camshaft
#include "epmcrs_pub.h"                             // crankshaft
#include "epmrrs_pub.h"                             // Reverse Rotation detection
#include "epmseq_pub.h"                             // sequence-manager
#include "epmsrv_lib_inl.h"                         // service-lib inline
#include "epmsrv_pub.h"                             // service-lib
#include "epmsyn_pub.h"                             // synchronisizer
#include "epmbcr_pub.h"                             // backup crankshaft
#include "epm_he_pub.h"
#include "epmhint_pub.h"
#include "epmtdc_pub.h"
#include "engspd_pub.h"
#include "epmcust_pub.h"
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Messages
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
#endif
