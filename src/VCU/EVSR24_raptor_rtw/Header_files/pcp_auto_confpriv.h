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
 * $Filename__:pcp_template_confpriv.ht$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Peripheral Control Processor$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HGJ2FE$
 * $Date______:25.11.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:pcp_template_confpriv$
 * $Variant___:1.10.0$
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
 * 1.10.0; 0     25.11.2010 HGJ2FE
 *   - Improve scaling of function runtime between different PCP clocks and FPI 
 *   clocks
 *   - Improve runtime configuration of PCP functions to be able to configure
 *     the function runtime for a specified PCP and FPI clock
 *   - Add sorting to some lists to ensure that the same code is generated for 
 *   the same configuration
 *   - Move Pcp_Load to extra priority group if not all priority groups are used
 *   - Improve usage of conf_process::Pop for better reliability
 *   - Comment MISRA warning in pcp_auto_conf.c
 *   
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: pcp_template_confpriv.ht
 *      Version: \main\2
 * 
 * $
 *
 *************************************************************************
</RBHead>*/


#ifndef _PCP_AUTO_CONFPRIV_H
#define _PCP_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * PCP auto generated private header.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "gpta.h"
#include "cpu.h"
#include "pcp.h"
#include "msc.h"
#include "msc_friends.h"
#include "spi_friends.h"
#include "medc_fixconst_ds_gs_dat.h"
#include "epm.h"
#include "epmhcas_prot.h"
#include "reg.h"
#include "epm_prot.h"
#include "injhpfi_prot.h"
#include "pwm.h"



/* _LIBRARYABILITY_H */
#endif

/* _PCP_AUTO_CONFPRIV_H */
#endif
