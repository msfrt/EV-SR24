/*
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
 */

#ifndef _OBSHAL_AUTO_CONF_H
#define _OBSHAL_AUTO_CONF_H


/*
 ***************************************************************************************************
 * Defines always available
 ***************************************************************************************************
 */

#define Obs_GetRaw(signal, val)  OBS_GET_RAW_##signal(val)
#define Obs_Get(signal, val)     OBS_GET_##signal(val)
#define Obs_GetErrorInfo(signal) OBS_GET_ERROR_INFO_##signal
#define Obs_Reset(signal)        OBS_RESET_##signal

/*
 ***************************************************************************************************
 * Defines auto generated
 ***************************************************************************************************
 */


/* defines for Signal I_D_ENVP*/ 
#define OBS_GET_RAW_I_D_ENVP(val)   Smp480_ObsGetPressureRaw(1,1, val)
#define OBS_GET_I_D_ENVP(val)       Smp480_ObsGetPressure(1,1, val)
#define OBS_GET_ERROR_INFO_I_D_ENVP Smp480_ObsGetErrorInfoPressure(1,1)
#define OBS_RESET_I_D_ENVP          Smp480_ObsResetPressure(1,1)


/* defines for Signal I_D_TSG*/ 
#define OBS_GET_RAW_I_D_TSG(val)   Smp480_ObsGetTemperatureRaw(1,2, val)
#define OBS_GET_I_D_TSG(val)       Smp480_ObsGetTemperature(1,2, val)
#define OBS_GET_ERROR_INFO_I_D_TSG Smp480_ObsGetErrorInfoTemperature(1,2)
#define OBS_RESET_I_D_TSG          Smp480_ObsResetTemperature(1,2)


 
 
/* _OBSHAL_AUTO_CONF_H                                                                            */
#endif
