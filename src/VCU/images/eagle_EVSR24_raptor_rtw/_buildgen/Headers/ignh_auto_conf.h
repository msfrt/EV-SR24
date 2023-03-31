/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:ignh_conf.ht$
 * $Author____:YAK1KOR$
 * $Function__:Header file generation using core Configuration.$
 * $Domain____:SDOM$
 * $User______:YAK1KOR$
 * $Date______:08.09.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:ignh_conf$
 * $Variant___:2.21.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 2.21.0; 0     08.09.2010 YAK1KOR
 *   CRQ:342359 
 *   Header file  generation during Make using core configuration.
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _IGNH_AUTO_CONF_H
#define _IGNH_AUTO_CONF_H

 #include "gpta.h"
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/** active pin state [IGNH_PIN_ACTIVE_LOW | IGNH_PIN_ACTIVE_HIGH] */
#define IGNH_PIN_ACTIVE     0

/** minimum off time in timer ticks - change string xxxxu within the GPTA_GT0_US_TO_TICKS macro
    to enter a value in us. */
#define IGNH_DRV_MINOFFT    (GPTA_GT0_US_TO_TICKS(2000))    



#endif
