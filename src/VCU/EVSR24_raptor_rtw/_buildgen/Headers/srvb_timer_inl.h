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
 * $Filename__:srvb_timer_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:14.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_timer_inl$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_TIMER_INL_H
#define _SRVB_TIMER_INL_H

/**
 ***********************************************************************************************************************
 * \file srvb_timer_inl.h
 * \brief Service Library Header (Inline) with TIMER
 *
 * Implementation of Timer in software and hardware with 32- and 16-bit inputs.
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 *  SrvB_StartHWTmrS16,      SrvB_StopHWTmrS16,      SrvB_GetHWTmrS16,       SrvB_TestHWTmrS16,      SrvB_DiffHWTmrS16,
 *  SrvB_StartHWTmrS32,      SrvB_StopHWTmrS32,      SrvB_GetHWTmrS32,       SrvB_TestHWTmrS32,      SrvB_DiffHWTmrS32,
 *
 *  SrvB_StartSWTmr10msU8,   SrvB_StopSWTmr10msU8,   SrvB_GetSWTmr10msU8,    SrvB_TestSWTmr10msU8,   SrvB_DiffSWTmr10msU8,
 *  SrvB_StartSWTmr100msU8,  SrvB_StopSWTmr100msU8,  SrvB_GetSWTmr100msU8,   SrvB_TestSWTmr100msU8,  SrvB_DiffSWTmr100msU8,
 *
 *  SrvB_StartSWTmrS16,      SrvB_StopSWTmrS16,      SrvB_GetSWTmrS16,       SrvB_TestSWTmrS16,      SrvB_DiffSWTmrS16,
 *  SrvB_StartSWTmrS32,      SrvB_StopSWTmrS32,      SrvB_GetSWTmrS32,       SrvB_TestSWTmrS32,      SrvB_DiffSWTmrS32,
 *
 ***********************************************************************************************************************
 */

/**
 ************************************************************************************************************************
 * \moduledescription
 *
 * inline header for timer
 *          hardware timer
 *          software timer
 *
 * To use the HW-timer functionality the tricore system timer STM_TIM4 is used for the Timebase.
 * All conversion calculations must regard to this timer quantisation.
 *
 * To use the SW-timer functionality the process SrvB_SWTmrInc_10ms_Proc() and its
 * corresponding initialization part from the file srvb_swtmrinc10ms.c have to
 * scheduled in a 10ms task.
 *
 * \scope             [API]
 ************************************************************************************************************************
*/


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER HARDWARE for handling TriCore 16-bit HW-timer
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ************************************************************************************************************************
 * SrvB_GetHWTmrS16
 *
 * \brief gets the 16-bit hardware timer value
 *
 * \return      sint16 timer value
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_GetHWTmrS16_inline(void))
{
    return ((sint16)(Cpu_GetSysTimePart(TIM4) & (uint32)MAXSINT16));
}


/**
 ***********************************************************************************************************************
 * SrvB_StartHWTmrS16
 *
 * \brief stores current 16-bit reference time in *tmrPtr - start of the 16-bit timer *tmrPtr
 *
 * \param       SrvB_HWTmrS16* tmrPtr - pointer to a HW-timer struct
 * \return      none
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StartHWTmrS16_inline(SrvB_HWTmrS16_t* tmrPtr))
{
    (tmrPtr)->tiStrd = SrvB_GetHWTmrS16();
}


/**
 ************************************************************************************************************************
 * SrvB_StopHWTmrS16
 *
 * \brief sets *tmrPtr to '-1' - stops the 16-bit timer *tmrPtr
 *
 * \param       SrvB_HWTmrS16* tmrPtr - pointer to a HW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopHWTmrS16_inline(SrvB_HWTmrS16_t* tmrPtr))
{
    (tmrPtr)->tiStrd = -1;
}


/**
 ************************************************************************************************************************
 *  SrvB_TestHWTmrS16
 *
 * \brief test, if 16-bit HW-timer *tmrPtr is stopped
 *
 * \param       SrvB_HWTmrS16* tmrPtr - pointer to a HW-timer struct
 * \return      bool    FALSE: timer is running
 *              TRUE : timer is stopped
 *
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestHWTmrS16_inline(const SrvB_HWTmrS16_t* tmrPtr))
{
    bool res_b;

    if ( (tmrPtr)->tiStrd == -1 )
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffHWTmrS16
 *
 * \brief difference of current 16-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks     : No prevention of signed 16-bit timer overrun (positive values).
 *               Only positive values are allowed for reference timers.
 *
 * \param        SrvB_HWTmrS16* tmrPtr - pointer to a HW-timer struct
 * \return      sint16                - elapsed time since 16-bit timer *tmrPtr has been started
 *
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_DiffHWTmrS16_inline(const SrvB_HWTmrS16_t* tmrPtr))
{
    return (sint16)((uint32)(SrvB_GetHWTmrS16() - (tmrPtr)->tiStrd) & (uint32)MAXSINT16);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER HARDWARE for handling TriCore 32-bit HW-timer
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ************************************************************************************************************************
 * SrvB_GetHWTmrS32
 *
 * \brief gets the 32-bit hardware timer value
 *
 * \return      sint32 timer value
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_GetHWTmrS32_inline(void))
{
    return ((sint32)(Cpu_GetSysTimePart(TIM4) & (uint32)MAXSINT32));
}


/**
 ************************************************************************************************************************
 * SrvB_StartHWTmrS32
 *
 * \brief stores current 32-bit reference time in *tmrPtr - start of the 32-bit timer *tmrPtr
 *
 * \param       SrvB_HWTmrS32_t* tmrPtr - pointer to a HW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StartHWTmrS32_inline(SrvB_HWTmrS32_t* tmrPtr))
{
    (tmrPtr)->tiStrd = SrvB_GetHWTmrS32();
}


/**
 ************************************************************************************************************************
 * SrvB_StopHWTmrS32
 *
 * \brief sets *tmrPtr to zero - stops the 32-bit timer *tmrPtr
 *
 * \param       SrvB_HWTmrS16* tmrPtr - pointer to a HW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopHWTmrS32_inline(SrvB_HWTmrS32_t* tmrPtr))
{
    (tmrPtr)->tiStrd = -1;
}


/**
 ************************************************************************************************************************
 * SrvB_TestHWTmrS32
 *
 * \brief test, if 32-bit HW-timer *tmrPtr is stopped
 *
 * \param       SrvB_HWTmrS32_t* tmrPtr - pointer to a HW-timer struct
 * \return      FALSE: timer is running
 *              TRUE : timer is stopped
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestHWTmrS32_inline(const SrvB_HWTmrS32_t* tmrPtr))
{
    bool res_b;
    if ( (tmrPtr)->tiStrd == -1 )
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffHWTmrS32
 *
 * \brief difference of current 32-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks     : No prevention of signed 32-bit timer overrun (positive values).
 *               Only positive values are allowed for reference timers.
 *
 * \param        SrvB_HWTmrS32_t* tmrPtr - pointer to a HW-timer struct
 * \return       sint32                  - elapsed time since 32-bit timer *tmrPtr has been started
 *
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_DiffHWTmrS32_inline(const SrvB_HWTmrS32_t* tmrPtr))
{
    return (sint32)((uint32)(SrvB_GetHWTmrS32() - (tmrPtr)->tiStrd) & (uint32)MAXSINT32);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER SOFTWARE 8 bit 10 ms
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ************************************************************************************************************************
 * SrvB_GetSWTmr10msU8
 *
 * \brief gets the 8-bit software timer value
 *
 * \return      uint8 timer value
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_GetSWTmr10msU8_inline(void))
{
    return (SrvB_tiSWTmr10msU8);
}


/**
 ************************************************************************************************************************
 * SrvB_StartSWTmr10msU8
 *
 * \brief stores current 8-bit reference time in *tmrPtr - start of the 8-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmr10msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StartSWTmr10msU8_inline(SrvB_SWTmr10msU8_t* tmrPtr))
{
    (tmrPtr)->tiStrd = SrvB_GetSWTmr10msU8();
}


/**
 ************************************************************************************************************************
 * SrvB_StopSWTmr10msU8
 *
 * \brief sets *tmrPtr to zero - stops the 8-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmr10msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopSWTmr10msU8_inline(SrvB_SWTmr10msU8_t* tmrPtr))
{
    (tmrPtr)->tiStrd = 0;
}


/**
 ************************************************************************************************************************
 * SrvB_TestSWTmr10msU8
 *
 * \brief test, if 8-bit SW-timer *tmrPtr is stopped
 *
 * \param       SrvB_SWTmr10msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return    bool  FALSE: timer is running
 *              TRUE : timer is stopped
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestSWTmr10msU8_inline(const SrvB_SWTmr10msU8_t* tmrPtr))
{
    bool res_b;

    if ( (tmrPtr)->tiStrd == 0 )
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffSWTmr10msU8
 *
 * \brief difference of current 8-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks      No prevention of unsigned 8-bit timer overrun (positive values).
 *              Since zero means that timer is stopped and is therefore avoided
 *              for the reference timers a correction of a single step is necessary,
 *              if the stored timer is greater than the reference timer.
 *
 * \param       SrvB_SWTmr10msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      uint8                - elapsed time since 8-bit timer *tmrPtr has been started
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_DiffSWTmr10msU8_inline(const SrvB_SWTmr10msU8_t* tmrPtr))
{
    sint32 tmp_s32 = ((sint32)SrvB_GetSWTmr10msU8()-((tmrPtr)->tiStrd));

    if(tmp_s32 < 0)
    {
        tmp_s32 -=  1;
    }

    return (uint8)(tmp_s32);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER SOFTWARE 8 bit 100 ms
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
************************************************************************************************************************
 * SrvB_GetSWTmr100msU8
 *
 * \brief gets the 8-bit software timer value
 *
 * \return      uint8 timer value
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_GetSWTmr100msU8_inline(void))
{
    return (SrvB_tiSWTmr100msU8);
}


/**
 ************************************************************************************************************************
 * SrvB_StartSWTmr100msU8
 *
 * \brief stores current 8-bit reference time in *tmrPtr - start of the 8-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmr100msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StartSWTmr100msU8_inline(SrvB_SWTmr100msU8_t* tmrPtr))
{
    (tmrPtr)->tiStrd = SrvB_GetSWTmr100msU8();
}


/**
 ************************************************************************************************************************
 * SrvB_StopSWTmr100msU8
 *
 * \brief sets *tmrPtr to zero - stops the 8-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmr100msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopSWTmr100msU8_inline(SrvB_SWTmr100msU8_t* tmrPtr))
{
    (tmrPtr)->tiStrd = 0;
}


/**
 ************************************************************************************************************************
 * SrvB_TestSWTmr100msU8
 *
 * \brief test, if 8-bit SW-timer *tmrPtr is stopped
 *
 * \param       SrvB_SWTmr100msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return    bool  FALSE: timer is running
 *              TRUE : timer is stopped
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestSWTmr100msU8_inline(const SrvB_SWTmr100msU8_t* tmrPtr))
{
    bool res_b;

    if ( (tmrPtr)->tiStrd == 0 )
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffSWTmr100msU8
 *
 * \brief difference of current 8-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks      No prevention of unsigned 8-bit timer overrun (positive values).
 *              Since zero means that timer is stopped and is therefore avoided
 *              for the reference timers a correction of a single step is necessary,
 *              if the stored timer is greater than the reference timer.
 *
 * \param       SrvB_SWTmr100msU8_t* tmrPtr - pointer to a SW-timer struct
 * \return      uint8                - elapsed time since 8-bit timer *tmrPtr has been started
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_DiffSWTmr100msU8_inline(const SrvB_SWTmr100msU8_t* tmrPtr))
{
    sint32 tmp_s32 = ((sint32)SrvB_GetSWTmr100msU8()-((tmrPtr)->tiStrd));

    if(tmp_s32 < 0)
    {
        tmp_s32 -=  1;
    }

    return (uint8)(tmp_s32);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER SOFTWARE 16 Bit
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
************************************************************************************************************************
 * SrvB_GetSWTmrS16
 *
 * \brief gets the 16-bit software timer value
 *
 * \return      sint16 timer value
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_GetSWTmrS16_inline(void))
{
    return (SrvB_tiSWTmrS16);
}


/**
 ************************************************************************************************************************
 * SrvB_StartSWTmrS16
 *
 * \brief stores current 8-bit reference time in *tmrPtr - start of the 16-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmrS16_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
//MEMLAY_USE_FORCE_INLINE(void SrvB_StartSWTmrS16_inline(SrvB_SWTmrS16_t* tmrPtr))
//{
//    (tmrPtr)->tiStrd = SrvB_GetSWTmrS16();
//}
// Old implementation must be used because of a wrong using in dfp_prot.h.
#define SrvB_StartSWTmrS16_inline(tmrPtr)        ((tmrPtr)->tiStrd = SrvB_GetSWTmrS16())


/**
 ************************************************************************************************************************
 * SrvB_StopSWTmrS16
 *
 * \brief sets *tmrPtr to zero - stops the 16-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmrS16_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopSWTmrS16_inline(SrvB_SWTmrS16_t* tmrPtr))
{
    (tmrPtr)->tiStrd = 0;
}


/**
 ************************************************************************************************************************
 * SrvB_TestSWTmrS16
 *
 * \brief test, if 16-bit SW-timer *tmrPtr is stopped
 *
 * \param       SrvB_SWTmrS16_t* tmrPtr - pointer to a SW-timer struct
 * \return    bool  FALSE: timer is running
 *              TRUE : timer is stopped
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestSWTmrS16_inline(const SrvB_SWTmrS16_t* tmrPtr))
{
    bool res_b;

    if ( (tmrPtr)->tiStrd == 0 )
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffSWTmrS16
 *
 * \brief difference of current 16-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks      No prevention of unsigned 8-bit timer overrun (positive values).
 *              Since zero means that timer is stopped and is therefore avoided
 *              for the reference timers a correction of a single step is necessary,
 *              if the stored timer is greater than the reference timer.
 *
 * \param       SrvB_SWTmrS16_t* tmrPtr - pointer to a SW-timer struct
 * \return      sint16                - elapsed time since 8-bit timer *tmrPtr has been started
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_DiffSWTmrS16_inline(const SrvB_SWTmrS16_t* tmrPtr))
{
    sint32 tmp_s32 = ((sint32)SrvB_GetSWTmrS16()-((tmrPtr)->tiStrd));

    if(tmp_s32 < 0)
    {
        tmp_s32 -=  1;
    }

    return (sint16)((uint32)tmp_s32 & MAXSINT16);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * TIMER SOFTWARE 32 Bit
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
************************************************************************************************************************
 * SrvB_GetSWTmrS32
 *
 * \brief gets the 32-bit software timer value
 *
 * \return      sint32 timer value
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_GetSWTmrS32_inline(void))
{
    return (SrvB_tiSWTmrS32);
}


/**
 ************************************************************************************************************************
 * SrvB_StartSWTmrS32
 *
 * \brief stores current 32-bit reference time in *tmrPtr - start of the 32-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmrS32_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StartSWTmrS32_inline(SrvB_SWTmrS32_t* tmrPtr))
{
    (tmrPtr)->tiStrd = SrvB_GetSWTmrS32();
}


/**
 ************************************************************************************************************************
 * SrvB_StopSWTmrS32
 *
 * \brief sets *tmrPtr to zero - stops the 32-bit timer *tmrPtr
 *
 * \param       SrvB_SWTmrS32_t* tmrPtr - pointer to a SW-timer struct
 * \return      none
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_StopSWTmrS32_inline(SrvB_SWTmrS32_t* tmrPtr))
{
    (tmrPtr)->tiStrd = 0;
}


/**
 ************************************************************************************************************************
 * SrvB_TestSWTmrS32
 *
 * \brief test, if 32-bit SW-timer *tmrPtr is stopped
 *
 * \param       SrvB_SWTmrS32_t* tmrPtr - pointer to a SW-timer struct
 * \return    bool  FALSE: timer is running
 *              TRUE : timer is stopped
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_TestSWTmrS32_inline(const SrvB_SWTmrS32_t* tmrPtr))
{
    bool res_b;

    if ((tmrPtr)->tiStrd == 0)
    {
        res_b = TRUE;
    }
    else
    {
        res_b = FALSE;
    }
    return (res_b);
}


/**
 ************************************************************************************************************************
 * SrvB_DiffSWTmrS32
 *
 * \brief difference of current 32-bit reference time and stored timer value *tmrPtr.
 *
 * Remarks      No prevention of unsigned 32-bit timer overrun (positive values).
 *              Since zero means that timer is stopped and is therefore avoided
 *              for the reference timers a correction of a single step is necessary,
 *              if the stored timer is greater than the reference timer.
 *
 * \param       SrvB_SWTmrS32_t* tmrPtr - pointer to a SW-timer struct
 * \return      sint32                - elapsed time since 32-bit timer *tmrPtr has been started
 ************************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_DiffSWTmrS32_inline(const SrvB_SWTmrS32_t* tmrPtr))
{
    sint32 tmp_s32 = ((sint32)SrvB_GetSWTmrS32()-((tmrPtr)->tiStrd));

    if(tmp_s32 < 0)
    {
        tmp_s32 -=  1;
    }

    return (sint32)((uint32)tmp_s32 & MAXSINT32);
}


/* _SRVB_TIMER_INL_H */
#endif
