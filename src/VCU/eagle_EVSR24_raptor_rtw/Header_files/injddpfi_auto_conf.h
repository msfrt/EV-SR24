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
 * Administrative Information (automatically filled in by [N]estor)      *
 *************************************************************************
 *
 * $Filename__:injddpfi_template_conf.ht$
 *
 * $Author____:VEH1KOR$
 *
 * $Function__:Pearl Script$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:VEH1KOR$
 * $Date______:16.03.2011$
 * $Class_____:CONFTPLHDR$
 * $Name______:injddpfi_template_conf$
 * $Variant___:2.11.0$
 * $Revision__:1$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 *************************************************************************
 * Points to be taken into consideration when/if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 2.11.0; 1     16.03.2011 VEH1KOR
 *   Review Changes
 * 
 * 2.11.0; 0     09.03.2011 VEH1KOR
 *   CRQ 342359 : Perl Script for Injection Package
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef INJDDPFI_AUTO_CONF_H
#define INJDDPFI_AUTO_CONF_H


/* ******************************************************************************************* */
  /*  #define INJDDPFI_CRASHPULS 0 : Crash-Puls disabled   */
  /*  #define INJDDPFI_CRASHPULS 1 : Crash-Puls  enabled   */
/* ******************************************************************************************* */ 	                                                                                            
      #define INJDDPFI_CRASHPULS   (0)

/* ******************************************************************************************* */
  /*  #define INJDDPFI_IGNITION_DIS 0 : all injections in first synchro allowed   */
  /*  #define INJDDPFI_IGNITION_DIS 1 : only injections in first synchro are allowed which can be ignited */
/* ******************************************************************************************* */
      #define INJDDPFI_IGNITION_DIS (1)

#endif

