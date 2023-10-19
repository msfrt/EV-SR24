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
 * $Filename__:srvx_deadtime.h$ 
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
 * $Name______:srvx_deadtime$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_DEADTIME_H
#define _SRVX_DEADTIME_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Dead time element
 *
 * \scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */

/**
    SrvX_DeadTimeparam_t: Parameter structure for dead time element.
    This structure stores all relevant data for a deadtime element.
*/
typedef struct
{
  sint32    dsintStatic;        /**< time since the last pack was written                       */
  sint16    *lszStatic;         /**< pointer to actual buffer position                          */
  sint16    *dtbufBegStatic;    /**< pointer to begin of buffer                                 */
  sint16    *dtbufEndStatic;    /**< pointer to end of buffer                                   */
} SrvX_DeadTimeParam_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_DEADTIME_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_DeadTime(sint16 X, sint32 DelayTime, sint32 StepTime,
                                SrvX_DeadTimeParam_t *Param);

#elif (SRVX_DEADTIME_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_DeadTime can\'t be inlined: Configuration not supported'

#elif (SRVX_DEADTIME_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_DeadTime(sint16 X, sint32 DelayTime, sint32 StepTime,
                                                      SrvX_DeadTimeParam_t *Param));

#else

    #error >>>> 'Configuration for SrvX_DeadTime not supported'

/* SRVX_DEADTIME_LOCATION */
#endif


/* _SRVX_DEADTIME_H */
#endif
