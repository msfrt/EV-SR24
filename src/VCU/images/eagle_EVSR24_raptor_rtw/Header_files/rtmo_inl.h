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
 * $Filename__:rtmo_inl.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:15.03.2011$
 * $Class_____:SWHDR$
 * $Name______:rtmo_inl$
 * $Variant___:1.10.1$
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
 * 1.10.1; 0     15.03.2011 JWI2SI
 *   Bugfix for TC1793
 * 
 * 1.9.0; 0     06.04.2010 JWI2SI
 *   remove misra wrnings and new FS docu
 * 
 * 1.8.0; 0     23.11.2009 AWL2SI
 *   B_RTMO.8.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _RTMO_INL_H
#define _RTMO_INL_H

#if (RTMO_ENABLED == 1)

static __inline__ void Rtmo_InitMeasure(uint32 l_iData_u32);
static __inline__ void Rtmo_DisableMeasure(void);
static __inline__ uint32 Rtmo_AlterCx(uint32 l_xICx_u32, uint32 l_xIReg_u32, uint32 l_xDat_u32);

#if (MACHINE_TYPE == TC_1793)
static __inline__ uint32 Rtmo_AlterTrapCx(uint32 l_xIReg_u32, uint32 l_xDat_u32);
static __inline__ uint32 Rtmo_GetTrapCx (uint32 l_xIReg_u32);
#else
static __inline__ uint32 Rtmo_GetCx(uint32 l_xICx_u32, uint32 l_xIReg_u32);
/* #if (MACHINE_TYPE == TC_1793) */
#endif
/**
 ***************************************************************************************************
 * Rtmo_InitMeasure :
 *
 * \param           l_iData_u32
 * \return          void
 *
 ***************************************************************************************************
 */

static __inline__ void Rtmo_InitMeasure(uint32 l_iData_u32)
{
    #if (MACHINE_TYPE == TC_1793)
    /* TR0EVT */
    _mtcr(RTMO_TR0EVT_OFFSET, 0x00001003);
    /* TR0ADR */
    _mtcr(RTMO_TR0ADR_OFFSET, l_iData_u32);
    /* DMS */
    _mtcr(0xfd40,(uint32)Rtmo_TrapHandler);
    /* DCX */
    _mtcr(0xfd44,(uint32)Rtmo_aiSaveDebugCx);
    #else
    /* MISRA RULE 5, 54 VIOLATION: macro _mtcr not expanded well by MISRA */
    _mtcr($TR0EVT,0x00000004);
    _isync();
    CPS.CPU_SBSRC =  0x1000 | RTMO_INT_PRIO;
    _mtcr($CPR0_0U,(l_iData_u32));
    _isync();
    _mtcr($CPM0_0,0x01);
    _isync();
    /* #if (MACHINE_TYPE == TC_1793) */
    #endif
}

/**
 ***************************************************************************************************
 * Rtmo_DisableMeasure :
 *
 * \param           void
 * \return          void
 *
 ***************************************************************************************************
 */
static __inline__ void Rtmo_DisableMeasure(void)
{
    #if (MACHINE_TYPE == TC_1793)
    /* MISRA RULE 54 VIOLATION: macro _mtcr not expanded well by MISRA */
    _mtcr(RTMO_TR0EVT_OFFSET, 0x00000000);
    _isync();
    #else
    /* MISRA RULE 54 VIOLATION: macro _mtcr not expanded well by MISRA */
    _mtcr($CPM0_0,_mfcr($CPM0_0) & ~0x01);
    _isync();
    /* #if (MACHINE_TYPE == TC_1793) */
    #endif
}


/**
 ***************************************************************************************************
 * Rtmo_AlterCx :
 *
 * \param           uint32 l_xICx_u32
 * \param           uint32 l_xIReg_u32
 * \param           uint32 l_xDat_u32  : new      value (pointer to measurement routine)
 * \return          uint32             : original value (pointer to routine)
 *
 ***************************************************************************************************
 */
static __inline__ uint32 Rtmo_AlterCx(uint32 l_xICx_u32, uint32 l_xIReg_u32, uint32 l_xDat_u32)
{
    uint32 xPcxi_u32;
    uint32 xAddr_u32;

    /* MISRA RULE 1.1,3.1 VIOLATION: macro _mtcr not expanded well by MISRA */
    /* get PCXI */
    xPcxi_u32  = _mfcr($PCXI);
    xPcxi_u32 += l_xICx_u32;
    /* calculate pointer */
    xAddr_u32 = (((xPcxi_u32 & 0xFFFFul ) <<  6) | ((xPcxi_u32 & 0xF0000ul) << 12)  ) +
                  l_xIReg_u32;

    /* MISRA RULE 45 VIOLATION: pointer cast necessary */
    /* save original value */
    xPcxi_u32 = *((uint32*)xAddr_u32);
    /* write new value */
    *((uint32*)xAddr_u32) = l_xDat_u32;
    /* return original value */
    return(xPcxi_u32);
}
#if (MACHINE_TYPE != TC_1793)
/**
 ***************************************************************************************************
 * Rtmo_GetCx :
 *
 * \param           uint32 l_xICx_u32
 * \param           uint32 l_xIReg_u32
 * \return          uint32             : original value (pointer to routine)
 *
 ***************************************************************************************************
 */
static __inline__ uint32 Rtmo_GetCx(uint32 l_xICx_u32, uint32 l_xIReg_u32)
{
    uint32 xPcxi_u32;
    uint32 xAddr_u32;

    /* MISRA RULE 30,1.1 VIOLATION: macro _mtcr not expanded well by MISRA */
    /* get PCXI */
    xPcxi_u32  = _mfcr($PCXI);
    xPcxi_u32 += l_xICx_u32;
    /* calculate pointer */
    xAddr_u32 = (((xPcxi_u32 & 0xFFFFul ) <<  6) | ((xPcxi_u32 & 0xF0000ul) << 12)  ) +
                  l_xIReg_u32;

    /* MISRA RULE 45 VIOLATION: pointer cast necessary */
    /* save original value */
    xPcxi_u32 = *((uint32*)xAddr_u32);
    /* return original value */
    return(xPcxi_u32);
}
#else
/**
 ***************************************************************************************************
 * Rtmo_GetTrapCx :
 *
 * \param           uint32 l_xIReg_u32
 * \return          uint32             : original value (pointer to routine)
 *
 ***************************************************************************************************
 */
static __inline__ uint32 Rtmo_GetTrapCx (uint32 l_xIReg_u32)
{
    uint32 xPcxi_u32;
    uint32 xAddr_u32;

    /* MISRA RULE 30,1.1 VIOLATION: macro _mtcr not expanded well by MISRA */
    /* get PCXI */
    xPcxi_u32  =  Rtmo_aiSaveDebugCx[0];
    /* calculate pointer */
    xAddr_u32 = (((xPcxi_u32 & 0xFFFFul ) <<  6) | ((xPcxi_u32 & 0xF0000ul) << 12)  ) + l_xIReg_u32;

    /* MISRA RULE 45 VIOLATION: pointer cast necessary */
    /* save original value */
    xPcxi_u32 = *((uint32*)xAddr_u32);
    /* return original value */
    return(xPcxi_u32);
}

/**
 ***************************************************************************************************
 * Rtmo_AlterTrapCx :
 *
 * \param           uint32 l_xICx_u32
 * \param           uint32 l_xIReg_u32
 * \return          uint32             : original value (pointer to routine)
 *
 ***************************************************************************************************
 */
static __inline__ uint32 Rtmo_AlterTrapCx(uint32 l_xIReg_u32, uint32 l_xDat_u32)
{
    uint32 xPcxi_u32;
    uint32 xAddr_u32;

    /* MISRA RULE 30,1.1 VIOLATION: macro _mtcr not expanded well by MISRA */
    /* get PCXI */
    xPcxi_u32  =  Rtmo_aiSaveDebugCx[0];
    /* calculate pointer */
    xAddr_u32 = (((xPcxi_u32 & 0xFFFFul ) <<  6) | ((xPcxi_u32 & 0xF0000ul) << 12)  ) + l_xIReg_u32;

    /* MISRA RULE 45 VIOLATION: pointer cast necessary */
    /* save original value */
    xPcxi_u32 = *((uint32*)xAddr_u32);
    /* write new value */
    *((uint32*)xAddr_u32) = l_xDat_u32;
    /* return original value */
    return(xPcxi_u32);
}
/* #if (MACHINE_TYPE != TC_1793) */
#endif
/*#if (RTMO_ENABLED == 1)*/
#endif

/* _RTMO_INL_H */
#endif
