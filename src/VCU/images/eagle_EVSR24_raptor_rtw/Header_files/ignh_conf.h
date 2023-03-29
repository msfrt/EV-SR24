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
 * $Filename__:ignh_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:BUA2ABT$ 
 * $Date______:05.10.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignh_conf$ 
 * $Variant___:2.17.0$ 
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
 * 2.17.0; 0     05.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   CRQ 230415
 *   - ressource reduction to 1 gtc and 1ltc
 *   - supports multispark ignition
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _IGNH_CONF_H
#define _IGNH_CONF_H

#include "common.h"
#include "gpta.h"
#include "cpu.h"
#include "ignh.d"
#include "pcp.h"


/**************************************************************************************************/
/*                                      DO NOT CHANGE                                             */
/**************************************************************************************************/
/* symbols for active pin state (FALSE = LOW | TRUE = HIGH) */
#define IGNH_PIN_ACTIVE_HIGH    TRUE
#define IGNH_PIN_ACTIVE_LOW     FALSE




/**************************************************************************************************/
/*                                          user section                                          */
/*                                 Change according to your demands                               */
/**************************************************************************************************/
/** active pin state [IGNH_PIN_ACTIVE_LOW | IGNH_PIN_ACTIVE_HIGH] */
#define IGNH_PIN_ACTIVE     IGNH_PIN_ACTIVE_LOW

/** minimum off time in timer ticks - change string xxxxu within the GPTA_GT0_US_TO_TICKS macro
    to enter a value in us. */
#define IGNH_DRV_MINOFFT    (GPTA_GT0_US_TO_TICKS(2000u))           /* 2000 us */

/**************************************************************************************************/
/*                                        end user section                                        */
/**************************************************************************************************/



/**************************************************************************************************/
/*                                      DO NOT CHANGE                                             */
/**************************************************************************************************/

#ifndef SY_ZYLZA
    #error >>>>  'SY_ZYLZA' undefined!
#endif
#ifndef SY_ZNDAUS
    #error >>>>  'SY_ZNDAUS' undefined!
#endif
/* Number of ignition channels: If SY_ZNDAUS == 2 [twin spark coils], only half the number
   of channels needed.
   Be aware that SY_ZNDAUS == 2 only makes sense if SY_ZYLZA is even. */
#define IGNH_NO_OF_CHAN     (SY_ZYLZA/SY_ZNDAUS)

#ifndef IGNINCIR_SY
    #error >>>>  'IGNINCIR_SY' undefined!
#endif
#define IGNINCIR            IGNINCIR_SY

#ifndef MSI_SY
    #error >>>>  'MSI_SY' undefined!
#endif
#define MSI     MSI_SY

#ifndef IGNARCDURMONI_SY
    #error >>>>  'IGNARCDURMONI_SY' undefined!
#endif
#define IGNARCDURMONI       IGNARCDURMONI_SY

#define IGNH_PIN_PASSIVE (!IGNH_PIN_ACTIVE)


/* Values to support access to Lead angle map. */
#define IGNH_NUM_LADTVALUES 6       /* Number of table values */
#define IGNH_LABINWIDTH GPTA_GT0_MS_TO_TICKS(2)  /* Space in dwelltime units between adjacent
                                                    table values. */


/* Macro to set priority and TOS fields within SRN if PCP code is enabled.
   Later this macro will be generated from XML configuration
 */
#ifndef IGNH_CPU
#if (IGNH_NO_OF_CHAN == 2)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 3)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 4)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 5)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 4:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH4_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 6)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 4:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH4_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 5:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH5_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 8)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 4:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH4_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 5:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH5_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 6:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH6_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 7:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH7_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 10)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 4:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH4_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 5:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH5_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 6:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH6_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 7:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH7_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 8:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH8_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 9:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH9_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }
#elif (IGNH_NO_OF_CHAN == 12)
#define IGNH_SETPRIOTOS(chlno) \
        switch(chlno)\
        {\
           case 0:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH0_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 1:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH1_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 2:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH2_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 3:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH3_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 4:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH4_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 5:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH5_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 6:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH6_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 7:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH7_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 8:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH8_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 9:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH9_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 10:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH10_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           case 11:\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->SRC), IGNH11_PRIO, 1);\
              Cpu_SetSRNPrioTOS(*(chlCfg_p->LTCSRC), IGNH_MAXANGLE_PRIO, 1);\
              break;\
           default:\
              break;\
        }		
#endif
#else
/* If ignh runs on CPU this macro is empty, because prio is set by OS init. and TOS field
   remains 0 [-> IR to CPU] */
#define IGNH_SETPRIOTOS(chlno)
#endif
/* IGNH_CPU */

#endif
/* _IGNH_CONF_H */
