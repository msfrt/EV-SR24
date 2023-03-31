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
 * $Filename__:srvb_control_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:25.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_control_inl$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     25.08.2014 PIR5COB
 *   Hyteresis functionalities update
 * 
 * 1.16.0; 3     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 2     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 1     14.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 0     18.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.14.3; 0     19.10.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.14.0.3
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
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

#ifndef _SRVB_CONTROL_INL_H
#define _SRVB_CONTROL_INL_H

/**
 ***********************************************************************************************************************
 * srvb_control_inl.h
 * Service Library Header (Inline) with CONTROL FUNCTIONS
 *
 * Implementation of CONTROL FUNCTIONS with 32-Bit inputs and 32-Bit output.
 * You can detect edges, make a hysteresis, have a flip-flop and have counters here.
 *
 ***********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 *
 * List of functions:
 *
 * SrvB_EdgeFalling_B,       SrvB_EdgeRising_B,         SrvB_EdgeBipol_B
 *
 * SrvB_SwitchHystLR_S32_B,  SrvB_SwitchHystLR_U32_B
 * SrvB_SwitchHystDR_S32_B,  SrvB_SwitchHystDR_U32_B
 * SrvB_SwitchHystLD_S32_B,  SrvB_SwitchHystLD_U32_B
 * SrvB_SwitchHystCHD_S32_B, SrvB_SwitchHystCHD_U32_B
 *
 * SrvB_RSFF_B
 *
 * SrvB_Counter_U8,          SrvB_Counter_U16,          SrvB_Counter_U32
 * SrvB_CounterU8Set,        SrvB_CounterU16Set,        SrvB_CounterU32Set
 *
 **********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * CONTROL EDGE
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_EdgeFalling_B
 *
 * Detects wether a signal has a falling edge.
 *
 * Compares new and old state, if a falling edge is detectet SrvB_EdgeFalling_b will return TRUE.
 * New state will be written to old state.
 *
 * \param     bool     Inp_b    Actual value of the signal (bool).
 * \param     bool*    Old_pb  Former value of the signal (*bool).
 * \return    bool     If falling edge was detected.
 * \retval    TRUE     Falling edge detected.
 * \retval    FALSE    Signal is constant or rising edge.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_EdgeFalling_B_inline(bool Inp_b, bool* Old_pb))
{
    bool temp_b;
    temp_b = *Old_pb;                                            /* save Old state in temp */
    *Old_pb = Inp_b;                                             /* save new state to Old state */

    /* return TRUE if edge is falling */
    return (bool)(((Inp_b == FALSE) && (temp_b == TRUE)) ? TRUE : FALSE);
}


/**
 ***********************************************************************************************************************
 * SrvB_EdgeRising_B
 *
 * Detects wether a signal has a rising edge.
 *
 * Compares new and Old state, if a rising edge is detectet SrvB_EdgeRising_b will return TRUE.
 * New state will be written to old state.
 *
 * \param     bool     Inp_b    Actual value of the signal (bool).
 * \param     bool*    Old_pb  Pointer to the former value of the signal (*bool).
 * \return    bool     If rising edge was detected.
 * \retval    TRUE     Rising edge detected.
 * \retval    FALSE    Signal is constant or falling edge.
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_EdgeRising_B_inline(bool Inp_b, bool* Old_pb))
{
    bool temp_b;
    temp_b = *Old_pb;                                            /* save old state in temp */
    *Old_pb = Inp_b;                                             /* save new state to old state */

    /* return TRUE if edge is rising */
    return (bool)(((Inp_b == TRUE) && (temp_b == FALSE)) ? TRUE : FALSE);
}


/**
 ***********************************************************************************************************************
 * SrvB_EdgeBipol_B
 *
 * Detects wether a signal has changed
 *
 * Compares new and old state, if signal has changed SrvB_EdgeBipol_b will return TRUE.
 * New state will be written to old state.
 *
 * \param     bool     Inp_b    Actual value of the signal (bool).
 * \param     bool*    Old_pb  Pointer to the former value of the signal (*bool).
 * \return    bool     If signal has changed
 * \retval    TRUE     Signal has changed since last call
 * \retval    FALSE    Signal is constant
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_EdgeBipol_B_inline(bool Inp_b, bool* Old_pb))
{
    bool temp_b;
    temp_b = *Old_pb;                                            /* save old state in temp */
    *Old_pb = Inp_b;                                             /* save new state to old state */

    /* return TRUE if state has changed */
    return (bool)((Inp_b != temp_b) ? TRUE : FALSE);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * CONTROL HYSTERESIS
 *
 *
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLR_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb))
{
    if(X_u32 > Rsp_u32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_u32 < Lsp_u32)
        {
            *State_pb = FALSE;
        }
        /* No else: Previous state will be returned */
    }

    return *State_pb;
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLR_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb))
{
    if(X_s32 > Rsp_s32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_s32 < Lsp_s32)
        {
            *State_pb = FALSE;
        }
        /* No else: Previous state will be returned */
    }

    return *State_pb;
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDR_U32_B_inline(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb))
{
    uint32 Lsp_u32;

    
    Lsp_u32 = SrvB_Sub_U32U32_U32_inline(Rsp_u32, Delta_u32);

    return(SrvB_SwitchHystLR_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDR_S32_B_inline(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb))
{
    sint32 Lsp_s32;

    
    Lsp_s32 = SrvB_Sub_S32S32_S32_inline(Rsp_s32, Delta_s32);

    return(SrvB_SwitchHystLR_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLD_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb))
{
    uint32 Rsp_u32;
    
    
    Rsp_u32 = SrvB_Add_U32U32_U32_inline(Lsp_u32, Delta_u32);
    
    return(SrvB_SwitchHystLR_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLD_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb))
{
    sint32 Rsp_s32;
    
    
    Rsp_s32 = SrvB_Add_S32S32_S32_inline(Lsp_s32, Delta_s32);
    
    return(SrvB_SwitchHystLR_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystCHD_U32_B_inline(uint32 X_u32, uint32 Center_u32, uint32 HalfDelta_u32, bool * State_pb))
{
    uint32 Lsp_u32;
    uint32 Rsp_u32;
    
    
    Lsp_u32 = SrvB_Sub_U32U32_U32_inline(Center_u32, HalfDelta_u32);
    Rsp_u32 = SrvB_Add_U32U32_U32_inline(Center_u32, HalfDelta_u32);
    
    return(SrvB_SwitchHystLR_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystCHD_S32_B_inline(sint32 X_s32, sint32 Center_s32, sint32 HalfDelta_s32, bool * State_pb))
{
    sint32 Lsp_s32;
    sint32 Rsp_s32;
    
    
    Lsp_s32 = SrvB_Sub_S32S32_S32_inline(Center_s32, HalfDelta_s32);
    Rsp_s32 = SrvB_Add_S32S32_S32_inline(Center_s32, HalfDelta_s32);
    
    return(SrvB_SwitchHystLR_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}

/* Suzuki SMC specific hysteresis functionalities - check for equality */

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLRE_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb))
{
    if(X_u32 >= Rsp_u32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_u32 < Lsp_u32)
        {
            *State_pb = FALSE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLER_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb))
{
    if(X_u32 > Rsp_u32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_u32 <= Lsp_u32)
        {
            *State_pb = FALSE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLREI_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb))
{
    if(X_u32 >= Rsp_u32)
    {
        *State_pb = FALSE;
    }
    else
    {
        if (X_u32 < Lsp_u32)
        {
            *State_pb = TRUE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLERI_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb))
{
    if(X_u32 > Rsp_u32)
    {
        *State_pb = FALSE;
    }
    else
    {
        if (X_u32 <= Lsp_u32)
        {
            *State_pb = TRUE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLED_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb))
{
    uint32 Rsp_u32;
    
    
    Rsp_u32 = SrvB_Add_U32U32_U32_inline(Lsp_u32, Delta_u32);
    
    return(SrvB_SwitchHystLERI_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLDE_U32_B_inline(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb))
{
    uint32 Rsp_u32;
    
    
    Rsp_u32 = SrvB_Add_U32U32_U32_inline(Lsp_u32, Delta_u32);
    
    return(SrvB_SwitchHystLREI_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDER_U32_B_inline(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb))
{
    uint32 Lsp_u32;

    
    Lsp_u32 = SrvB_Sub_U32U32_U32_inline(Rsp_u32, Delta_u32);

    return(SrvB_SwitchHystLER_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDRE_U32_B_inline(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb))
{
    uint32 Lsp_u32;

    
    Lsp_u32 = SrvB_Sub_U32U32_U32_inline(Rsp_u32, Delta_u32);

    return(SrvB_SwitchHystLRE_U32_B_inline(X_u32, Lsp_u32, Rsp_u32, State_pb));
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLRE_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb))
{
    if(X_s32 >= Rsp_s32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_s32 < Lsp_s32)
        {
            *State_pb = FALSE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLER_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb))
{
    if(X_s32 > Rsp_s32)
    {
        *State_pb = TRUE;
    }
    else
    {
        if (X_s32 <= Lsp_s32)
        {
            *State_pb = FALSE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLREI_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb))
{
    if(X_s32 >= Rsp_s32)
    {
        *State_pb = FALSE;
    }
    else
    {
        if (X_s32 < Lsp_s32)
        {
            *State_pb = TRUE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLERI_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb))
{
    if(X_s32 > Rsp_s32)
    {
        *State_pb = FALSE;
    }
    else
    {
        if (X_s32 <= Lsp_s32)
        {
            *State_pb = TRUE;
        }
        /* No else: The state is not modified */
    }

    return *State_pb;
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLED_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb))
{
    sint32 Rsp_s32;
    
    
    Rsp_s32 = SrvB_Add_S32S32_S32_inline(Lsp_s32, Delta_s32);
    
    return(SrvB_SwitchHystLERI_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystLDE_S32_B_inline(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb))
{
    sint32 Rsp_s32;
    
    
    Rsp_s32 = SrvB_Add_S32S32_S32_inline(Lsp_s32, Delta_s32);
    
    return(SrvB_SwitchHystLREI_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}


MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDER_S32_B_inline(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb))
{
    sint32 Lsp_s32;

    
    Lsp_s32 = SrvB_Sub_S32S32_S32_inline(Rsp_s32, Delta_s32);

    return(SrvB_SwitchHystLER_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}

MEMLAY_USE_FORCE_INLINE(bool SrvB_SwitchHystDRE_S32_B_inline(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb))
{
    sint32 Lsp_s32;

    
    Lsp_s32 = SrvB_Sub_S32S32_S32_inline(Rsp_s32, Delta_s32);

    return(SrvB_SwitchHystLRE_S32_B_inline(X_s32, Lsp_s32, Rsp_s32, State_pb));
}
/*
 ***********************************************************************************************************************
 *
 *
 *
 * CONTROL FLIPFLOP
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***************************************************************************************************
 * SrvB_RSFF_B
 *
 * RS flip flop
 *
 * Resets the flipflop state to FALSE, if R_b == TRUE, else sets the flipflop state to TRUE,
 * if R_b != TRUE and S_b == FALSE or does nothing, if R_b and S_b == FALSE
 *
 * \param     bool  R_b         Reset input. Sets the flipflop state to FALSE.
 * \param     bool  S_b         Set input. Sets the flipflop state to TRUE.
 * \param     bool*  State_pb   Pointer to state variable.
 * \return    bool              New state of the flipflop
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_RSFF_B_inline (bool R_b, bool S_b, bool* State_pb))
{
    ((R_b) != FALSE) ? (*(State_pb) = FALSE) : (((S_b) != FALSE) ? (*(State_pb) = TRUE) : *(State_pb));

    return (*State_pb);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * CONTROL COUNTER
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***************************************************************************************************
 * SrvB_Counter_U8
 *
 * \brief uint8 counter.
 *
 * detailed description:
 *        increments a uint8 value by one with saturation on every
 *        activation, stores back the incremented value and returns
 *        that value
 *
 * \param   uint8* const Counter_cpu8   Pointer to counter value
 * \return  uint8                       Incremented counter
 ***************************************************************************************************
 */
/* MISRA RULE 81 VIOLATION: The value of the pointer is modified by the ++ operator*/
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Counter_U8_inline(uint8* const Counter_cpu8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    if ((*Counter_cpu8) < MAXUINT8)
    {
        (*Counter_cpu8)++;
    }
    return(*Counter_cpu8);

#else
 /* Since the input variable is of type uint8 SAT optimization cannot be made, because
    the value to work with has no width of a register (32 bit type is required)*/
		asm volatile ("\n\
                  add    %0, %0, 1    \n\
                  sat.bu %0, %0       \n\
                  \n\
              ": "+d"(*Counter_cpu8) );

    /* MISRA RULE 81 VIOLATION: the variable is writen in the asm statement */
    return ((uint8)*Counter_cpu8);

#endif /* SRVB_IMPL_ASM_ENABLE */
}


/**
 ***************************************************************************************************
 * SrvB_CounterU8Set
 *
 * \brief Set service for uint8 counter.
 *
 * detailed description:
 * Sets or resets the internal counter value of uint8 counter service
 *
 * \param   uint8* const Counter_cpu8    Pointer to counter value
 * \param   uint8 Val_u8                 Value to be set
 * \return  void
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_CounterU8Set_inline(uint8* const Counter_cpu8, uint8 Val_u8))
{
    *Counter_cpu8 = Val_u8;
}


/**
 ***************************************************************************************************
 * SrvB_Counter_U16
 *
 * \brief uint16 Counter.
 *
 * detailed description:
 *        increments a uint16 value by one with saturation on every
 *        activation, stores back the incremented value and returns
 *        that value
 *
 * \param    uint16* const Counter_cpu16   Pointer to counter value
 * \return   uint16                        Incremented counter
 ***************************************************************************************************
 */
/* MISRA RULE 81 VIOLATION: The value of the pointer is modified by the ++ operator */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Counter_U16_inline(uint16* const Counter_cpu16))
{
#if (SRVB_IMPL_ASM_ENABLE==0)
    if ((*Counter_cpu16) < MAXUINT16)
    {
        (*Counter_cpu16)++;
    }
    return(*Counter_cpu16);

#else
    asm volatile ("\n\
                    adds.u %0, %0, 1    \n\
                    ": "+d"(*Counter_cpu16));

                    /* MISRA RULE 81 VIOLATION: the variable is writen in the asm statement */
    return ((uint16)(*Counter_cpu16));

#endif /* SRVB_IMPL_ASM_ENABLE */
}


/**
 ***************************************************************************************************
 * SrvB_CounterU16Set
 *
 * \brief Set service for uint16 counter.
 *
 * detailed description:
 * Sets or resets the internal counter value of uint16 counter service
 *
 * \param   uint16* const Counter_cpu16    Pointer to counter value
 * \param   uint16 Val_u16                 Value to be set
 * \return  void
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_CounterU16Set_inline(uint16* const Counter_cpu16, uint16 Val_u16))
{
    *Counter_cpu16 = Val_u16;
}


/**
 ***************************************************************************************************
 * SrvB_Counter_U32
 *
 * \brief uint32 Counter.
 *
 * detailed description:
 *        increments a uint32 value by one with saturation on every
 *        activation, stores back the incremented value and returns
 *        that value
 *
 * \param   uint32* const Counter_cpu32    Pointer to counter value
 * \return  uint32                         Incremented counter
 ***************************************************************************************************
 */
/* MISRA RULE 81 VIOLATION: The value of the pointer is modified by the ++ operator */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Counter_U32_inline(uint32* const Counter_cpu32))
{

#if (SRVB_IMPL_ASM_ENABLE==0)
    if ((*Counter_cpu32) < MAXUINT32)
    {
        (*Counter_cpu32)++;
    }
    /* MISRA RULE 81 VIOLATION: the variable is modified */
    return(*Counter_cpu32);

#else

    asm volatile("  adds.u %0, %0, 1  \n\
                ": "+d"(*Counter_cpu32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (*Counter_cpu32);      /*Return Temp instead of *Counter_ps32 for efficiency reason */

#endif /* SRVB_IMPL_ASM_ENABLE */
}


/**
 ***************************************************************************************************
 * SrvB_CounterU32Set
 *
 * \brief Set service for uint32 counter.
 *
 * detailed description:
 * Sets or resets the internal counter value of uint32 counter service
 *
 * \param   uint32* const Counter_cpu32    Pointer to counter value
 * \param   uint32 Val_u32                 Value to be set
 * \return  void
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_CounterU32Set_inline(uint32* const Counter_cpu32, uint32 Val_u32))
{
    *Counter_cpu32 = Val_u32;
}



/* _SRVB_CONTROL_INL_H */
#endif
