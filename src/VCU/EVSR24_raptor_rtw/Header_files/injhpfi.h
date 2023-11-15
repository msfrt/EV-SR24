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
 * $Filename__:injhpfi.h$
 *
 * $Author____:HIA3SI$
 *
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :CDCOMP
 *                  Object name :INJHPFI
 *                  Variant :2.60
 *                  Revision :1$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AOS2KOR$
 * $Date______:22.10.2012$
 * $Class_____:SWHDR$
 * $Name______:injhpfi$
 * $Variant___:2.11.1$
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
 * 2.11.1; 0     22.10.2012 AOS2KOR
 *   Bugfix for Fast recovery after fuel cutoff
 * 
 * 2.11.0; 0     09.03.2011 VEH1KOR
 *   CRQ 342359 : Perl Script for Injection Package
 * 
 * 2.10.1; 0     04.10.2010 GEHAAF
 *   MISRA - Warnings removed (hexneutral)
 *   
 *   
 * 
 * 2.6.0; 0     22.10.2008 HIA3SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :injhpfi
 *        Variant :2.10
 *        Revision :2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *              types and API functions for InjHPfi driver
 *
 * \scope           [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#ifndef _INJHPFI_H
#define _INJHPFI_H


#ifndef _EPM_H
#include <epm.h>
#endif

#ifndef _CPU_H
#include <cpu.h>
#endif

#ifndef _PCP_H
#include <pcp.h>
#endif

#ifndef _SRVB_H
#include <srvb.h>
#endif

#ifndef _INJHPFI_CONF_H
#include <injhpfi_auto_conf.h>
#endif

#ifndef _CDRV_MEMLAY_H
#include <cdrv_memlay.h>
#endif

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */






/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * inline functions
 ***************************************************************************************************
 */

/**
**************************************************************************************************
 * Calling InjHPfi_Get_Drv_AbortCnt() retrieves the number of aborted main injection pulses since
 * the last InjHPfi_Init() or InjHPfi_StopStart(). Aborted after dribbles are not counted.
 * Since the counter is not limited overflow occurs at 2^32.
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
static __inline__ uint32 InjHPfi_Get_Drv_AbortCnt(void);
static __inline__ uint32 InjHPfi_Get_Drv_AbortCnt(void)
{
    return Pcp_Pram_s.InjHPfi_Drv_AbortCnt;
}

/**
**************************************************************************************************
 * Calling InjHPfi_Get_Drv_MiDiCnt() retrieves the number of main injection pulses and direct
 * injection pulses (time based position) since the last InjHPfi_Init() or InjHPfi_StopStart().
 * The main injection pulse is counted at the time of the begin edge. The direct pulse is counted
 * at the time where the begin time is set up on GTC. Since the counter is not limited overflow
 * occurs at 2^32.
 * \seealso
 * \usedresources
 **************************************************************************************************
 */
static __inline__ uint32 InjHPfi_Get_Drv_MiDiCnt(void);
static __inline__ uint32 InjHPfi_Get_Drv_MiDiCnt(void)
{
    return Pcp_Pram_s.InjHPfi_Drv_MiDiCnt;
}
/**
**************************************************************************************************
 * Calling InjHPfi_TriggerNewData() triggers all the actions which are requested by
 * InjHPfi_SetNewMi(...) and InjHPfi_Update(...). It is strongly recommended to call this function
 * at least at the end of each process where InjHPfi_SetNewMi(...) and InjHPfi_Update(...) are
 * called.
 * \seealso InjHPfi_SetNewMi(...), InhHPfi_Update(...)
 * \usedresources
 **************************************************************************************************
 */
static __inline__ void InjHPfi_TriggerNewData(void);
static __inline__ void InjHPfi_TriggerNewData(void)
{
   Cpu_SetIntReq(INJHPFI_SW_IRQ_REG);
}



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/**
 **************************************************************************************************
 * Calling InjHPfi_SetNewMi(...) requests a new injection cycle. An injection cycle is defined as
 * the cranc angle distance between the two abort angles of two subsequent combustion cylcles.
 * For defining a cutoff cylcle do the request with Te=0. It is strongly recommended requesting
 * the cutoff cycles to guarantee sutible behavior of the hardware driver regarding the physical
 * conditions. Reaching the abort angle the injection will be terminated although the requested
 * duration is not reached yet.
 * Calling InjHPfi_SetNewMi(...) when the injection parameter set of the previous request is not
 * yet processed will return FALSE. To avoid omitting a injection cycle repeat the request at the
 * next possible time.
 * \param Te - effective injection time, Quantization: GT0-Ticks
 * \param Tvup - injection valve delay time, Quantization: GT0-Ticks
 * \param EndAngle - injection end angle, Quantization: GT1-Ticks absolute GT1-value
 * \param AbortAngle - injection cycle abort angle, Quantization: GT1-Ticks absolute GT1-value
 * \param Chl - injection channel
 * \seealso InjHPfi_Update(...)
 * \usedresources
 **************************************************************************************************
 */
CODE_NORM(extern bool InjHPfi_SetNewMi(uint32 Te, uint16 Tvub, uint32 EndAngle, uint32 AbortAngle, uint8 Chl));

/**
 *************************************************************************************************
 * Calling the function InjHPfi_SetNewDi(...) starts a new "direct" injection pulse on channel Chl.
 * Direct means that the injection pulse position is defined by the absolute GT0 time. The pulse
 * starts when BeginTimeGT0 matches with the global timer GT0. The injection pulse length is
 * ti = max(Te + Tvub, INJHPFI_GEW_TIME_TICKS)
 * where INJHPFI_GEW_TIME_TICKS is a non configurable define.
 * To trigger the functional part InjHPfi_TriggerNewData() has to be called in the same manner as
 * described for InjHPfi_SetNewMi.
 * For the discussion of the coincidence (on one injection channel) between direct pulses, injection
 * cycles refer the software specification.
 * \param Te - effective injection time, Quantization: GT0-Ticks
 * \param Tvup - injection valve delay time, Quantization: GT0-Ticks
 * \param BeginTimeGT0 - injection begin time, Quantization: GT0-Ticks absolute GT0-value
 * \param Chl - injection channel
 * \seealso InjHPfi_SetNewMi(...)
 * \usedresources
 **************************************************************************************************
*/
CODE_NORM(extern bool InjHPfi_SetNewDi(uint32 Te, uint16 Tvub, uint32 BeginTimeGT0, uint8 Chl));

/**
 **************************************************************************************************
 * Calling the function InjHPfi_Init() sets the pin (or µs-Bus (MSC) channel) to
 * passive state and avoids the occurrence of events that could affect changes on the pin state. The
 * data of all injection channels  are initialized so that idle state is
 * established. The function should only be used in the ini/ini2-Task. To stop the driver
 * InjHPfi_StopStart() should be used.
 * \param
 * \seealso InjHPfi_InitWrkDta
 * \usedresources
 **************************************************************************************************
 */
CODE_SLOW(extern void InjHPfi_Init(void));

/**
 **************************************************************************************************
 * Calling the function InjHPfi_StopStart(chl) causes an immediate stop of the injection channel.
 * It sets the pins to passive state and cancels pending events. Running injections are terminated
 * immediately. The driver is now ready for new requests. It is e.g. used in case of:
 * - The EPM angle clock Register GT1 angle clock has fluctuation behavior. Then InjHPfi_StopStart()
 *    has to be called to avoid channel stalling.
 * - Injection stop request for example in case of crash
 * To trigger the functional part of the StopStart function InjHPfi_TriggerNewData() has to be
 * called.
 * \param injection channel number
 * \usedresources
 **************************************************************************************************
 */
CODE_NORM(extern void InjHPfi_StopStart(uint8 Chl));

/**
 **************************************************************************************************
 * Calling InjHPfi_Update(...) updates injection cycles which are active (i.e. requested by
 * InjHPfi_SetNewMi and not yet terminated by reaching the abort angle).
 * Calling InjHPfi_Update(...) while a Pulse pending or is active causes a prolongation or a
 * shortening of the pulse. Exeption: After dribbles won't be shortened.
 * Calling InjHPfi_Update(...) after finishing the main pulse an after dribble pulse will be
 * generated if the resulting pulse length minus Tvub exceeds AdThreshold and the angle distance
 * to the abort angle is greater than INJHPFI_MIN_ANGLE_AD. As many calls that are required are
 * beeing performed.
 *
 * \param Te - effective injection time, Quantization: GT0-Ticks
 * \param AdThreshold - min additional Te for issuing an after dribble, Quantization: GT0-Ticks
 * \param Chl - injection channel
 * \seealso InjHPfi_SetNewMi(...)
 * \usedresources
 **************************************************************************************************
 */

CODE_NORM(extern void InjHPfi_Update(uint32 Te, uint32 AdThreshold, uint8 Chl));

/**
 **************************************************************************************************
 * Calling InjHPfi_WhichChlUpd() will return the information which channels are updatable
 * \return  bit field where bit no represents the chl no. Value TRUE means: chl is updatable
 * \seealso InjHPfi_Update(...)
 * \usedresources
 **************************************************************************************************
 */
CODE_NORM(extern bit16 InjHPfi_WhichChlUpd(void));
CODE_NORM(extern bit16 InjHPfi_WhichChlRcvryAftCutOff(void)); 
#endif /* #ifndef _INJHPFI_H */
