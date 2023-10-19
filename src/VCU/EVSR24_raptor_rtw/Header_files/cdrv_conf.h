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
 * $Filename__:cdrv_conf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Component Toolbox-Import$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAH5KOR$
 * $Date______:09.08.2017$
 * $Class_____:SWHDR$
 * $Name______:cdrv_conf$
 * $Variant___:103.0.0_TC17XX_XX$
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
 * 103.0.0_TC17XX_XX; 0     09.08.2017 DAH5KOR
 *   The TDC calculation is moved to the Complex Driver shared module
 * 
 * 2.7.0_TC17XX_XX; 0     21.06.2011 ZIC2SI
 *   TC17XX_XX configured
 * 
 * 2.7.0; 1     13.09.2010 UWDAEMMR
 *   Changed comment
 * 
 * 2.7.0; 0     08.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef CDRV_CONF_H
#define CDRV_CONF_H           /* Module Identifier */

/* Include Headerfiles                                                   */
/* ===================                                                   */

#include PROJECT_H

#ifndef _MACHINE_H
#include "machine.h"
#endif

#include <cdrv_glbdef.d>  

/*************************************************************************
 * Greater than Equal Work Around enable macro for different controller types
 * generations TC17xx (66,67,96,97).
 * It will be used as, always enable for ignition drivers. It is global identifier
 * for WO enable(always) within CDrv modules.
 *
 *************************************************************************/
#if ((MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1766) || \
    (MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1767))

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     MFVLV, IGNCL
   setting:     enabled */

    #define CDRV_GLOBAL_GTC_WO  1

#endif
/*************************************************************************
 * Controller step configuration
 *
 * the given controller steps have several erratas.
 * For some of the erratas driver specific workarounds are available,
 * which will be set automatically by configuring the used controller type and -step.
 *
 * CDRV_TC17XX_XX shall be configured, if none of the available workarounds shall be used.
 *
 * supported controller types are:          configuration:
 * TC1766 BA-Step                          #define CDRV_TC1766_BA
 * TC1796 AC-Step                          #define CDRV_TC1796_AC
 * TC1796 BC-Step                          #define CDRV_TC1796_BC
 * TC17XX XX-Step                          #define CDRV_TC17XX_XX
 *************************************************************************/

/* setting of project specific controller type and -step */
#define CDRV_TC17XX_XX

/************  do not change *********************************************/
/*************  TC1796 AC step ********************/
#if defined(CDRV_TC1796_AC)

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     KNDET, MFVLV, IGNCL
   setting:     enabled */

/* description: workaround for non functional FADC calibration
   used by:     KNDET
   setting:     enabled */
#define KNDET_FADCCALIB_WO

/* description: activation of MSV diagnosis
                For TC1796 AC step no workaround supplied for ADC_TC.033 from Core.
   used by:     MFVLV
   setting:     MSV diagnosis is shut off */

/*************  TC1796 BC step ********************/
#elif defined(CDRV_TC1796_BC)

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     KNDET
   setting:     disabled */

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     MFVLV , IGNCL (hard coded in IGNCL)
   setting:     disabled */

/* description: workaround for non functional FADC calibration
   used by:     KNDET
   setting:     disabled */

/* description: activation of MSV diagnosis
                For TC1796 BC step workaround supplied for ADC_TC.033 from Core.
   used by:     MFVLV
   setting:     MSV diagnosis is activated */


/*************  TC1766 BA step ********************/
#elif defined(CDRV_TC1766_BA)

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     KNDET
   setting:     disabled */

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     MFVLV , IGNCL (hard coded in IGNCL)
   setting:     disabled */


/* description: workaround for non functional FADC calibration
   used by:     KNDET
   setting:     disabled */

/* description: activation of MSV diagnosis
                For TC1766 BA step workaround supplied for ADC_TC.033 from Core.
   used by:     MFVLV
   setting:     MSV diagnosis is activated */


/*************  full functional controller step (no workarounds) *****/
#elif defined (CDRV_TC17XX_XX)

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     KNDET
   setting:     disabled */

/* description: workaround for non functional Greater Equal Compare for GTC
   used by:     MFVLV , IGNCL (hard coded in IGNCL)
   setting:     disabled */


/* description: workaround for non functional FADC calibration
   used by:     KNDET
   setting:     disabled */

/* description: activation of MSV diagnosis
                For TC17xx xx step workaround supplied for ADC_TC.033 from Core.
   used by:     MFVLV
   setting:     MSV diagnosis is activated */


#else
#error no valid controller step defined !
#endif
/************ end do not change *******************************************/





#endif  /* CDRV_CONF_H */
