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
 * $Filename$ 
 * 
 * $Author$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User$ 
 * $Date______:05.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name$ 
 * $Variant___:1.2.0$ 
 * $Revision$ 
 * $Typ$ 
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
 * 1.2.0; 0     05.08.2009 FTT2SI
 *   In case less than 2 scheduled FIds are used structure DSCHED_Excl is not 
 *   created.
 * 
 * 1.0.0_1; 0     11.12.2008 PKA2SI
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DSCHED_PUB_H
#define _DSCHED_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      DSCHED
 *
 * scope                API
 ***************************************************************************************************
 */





/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* define only the masks which are necessary for public use */
#define DSCHED_PHY_MSK          0x80           /*  Mask for schedStat.phy                         */
#define DSCHED_SCD_MSK          0x40           /*  Mask for schedStat.scd                         */
#define DSCHED_ACT_MSK          0x04           /*  Mask for schedStat.act                         */
#define DSCHED_LCK_MSK          0x08           /*  Mask for schedStat.lok                         */
#define DSCHED_SCD_ZOL_MSK      0x42           /*  Mask for schedStat.zol and .scd                */


/* definitions to support the old GS interface names */
#define setDscReady(fid)                 DSCHED_setReady(fid)
#define resetDscReady(fid)               DSCHED_resetReady(fid)
#define getDscReady(fid)                 DSCHED_getReadyPub(fid)
#define setDscUrgency(fid, val)          DSCHED_setUrgency(fid, val)
#define setDscActive(fid)                DSCHED_setActive(fid)
#define resetDscActive(fid)              DSCHED_resetActive(fid)
#define getDscActive(fid)                DSCHED_getActivePub(fid)
#define setDscSleep(fid)                 DSCHED_setSleep(fid)
#define getDscInhib(fid)                 DSCHED_getInhib(fid)
#define getDscPermission(FId)            (DSM_GetDscPermission(FId))

#define FidType                         DSM_FIdType

/* definitions to support the old DS interface names */
#define DSM_SetDscReady(fid)             DSCHED_setReady(fid)
#define DSM_ResetDscReady(fid)           DSCHED_resetReady(fid)
#define DSM_SetDscUrgency(fid, val)      DSCHED_setUrgency(fid, val)
#define DSM_SetDscActive(fid)            DSCHED_setActive(fid)
#define DSM_ResetDscActive(fid)          DSCHED_resetActive(fid)
#define DSM_SetDscSleep(fid)             DSCHED_setSleep(fid)





/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef     uint8       DSCHED_StType;            /*  Scheduler state flags type                  */
typedef     uint8       PprioType;                /*  Scheduler Physical priority type            */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8   DSCHED_St[];           /* prototype for the status array, to allow access          */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END



__PRAGMA_USE__dsm__1_5ms__constant__x32__START
extern const uint DSCHED_numFIdMaxNoAckn;
extern const uint DSCHED_numFIdMaxAckn;
__PRAGMA_USE__dsm__1_5ms__constant__x32__END




/*
 ***************************************************************************************************
 * prototype definitions
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSCHED_setUrgency(DSM_FIdType fid, uint8 valUrgency);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END



/*
 ***************************************************************************************************
 * ==> Scheduler interfaces
 ***************************************************************************************************
 */



/**
 **************************************************************************************************
 *  This method will set the ready bit in the schedulure status, for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setReady)
#endif


#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DSCHED_setReady(DSM_FIdType fid) )
#else
static void DSCHED_setReady(DSM_FIdType fid)
#endif
{
    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        /* MISRA RULE 43 VIOLATION: direct bit operation */
        Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St[(fid).id] = (DSCHED_St[(fid).id] | DSCHED_PHY_MSK);
        Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }
}


/**
 **************************************************************************************************
 * This method will cancel the ready bit in the schedulure status, for the given FID.
 * Also clear scd (scheduler enable)  and zol (scheduler raw enable) bit.
 * \param        FId Name / Reference (type protected)
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetReady)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DSCHED_resetReady(DSM_FIdType fid) )
#else
static void DSCHED_resetReady(DSM_FIdType fid)
#endif
{
    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        /* MISRA RULE 37 VIOLATION: direct bit operation */
        Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St [(fid).id] = (DSCHED_St [(fid).id] & ~(DSCHED_StType)DSCHED_PHY_MSK);
        /* reset the scheduled bit directly without additional inline or macro to avoid the
           visibility of the interface for public use */
        DSCHED_St[(fid).id] = (DSCHED_St[(fid).id] & ~(DSCHED_StType)DSCHED_SCD_ZOL_MSK);
        Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }
}


/**
 **************************************************************************************************
 * This method will return the current ready bit of the scheduler state for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       ready state (false if ready was reset else true)
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getReadyPub)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DSCHED_getReadyPub(DSM_FIdType fid) )
#else
static uint DSCHED_getReadyPub(DSM_FIdType fid)
#endif
{
    uint retval;

    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        retval = (uint)((DSCHED_St[(fid).id] & (DSCHED_StType)DSCHED_PHY_MSK) != (DSCHED_StType)0);
    }
    else
    {
        /* mode C (inhibt only) is treated as always ready */
        retval = 1u;
    }

    return (retval);
}


/**
 **************************************************************************************************
 * This method will set the active bit in the scheduler state for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setActive)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DSCHED_setActive(DSM_FIdType fid) )
#else
static void DSCHED_setActive(DSM_FIdType fid)
#endif
{
    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St[(fid).id] = ((DSCHED_St[(fid).id]) | DSCHED_ACT_MSK);
        Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }
}


/**
 **************************************************************************************************
 * This method will cancel the active bit in the scheduler state for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetActive)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DSCHED_resetActive(DSM_FIdType fid) )
#else
static void DSCHED_resetActive(DSM_FIdType fid)
#endif
{
    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        /* MISRA RULE 37 VIOLATION: direct bit operation */
        Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St[(fid).id] = ((DSCHED_St[(fid).id]) & ~(DSCHED_StType)DSCHED_ACT_MSK);
        Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }
}



/**
 **************************************************************************************************
 * This method will return the current active bit of the scheduler state for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       active state (true if active else false)
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getActivePub)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DSCHED_getActivePub(DSM_FIdType fid) )
#else
static uint DSCHED_getActivePub(DSM_FIdType fid)
#endif
{
    uint retval;

    if((fid).id < DSCHED_numFIdMaxAckn)
    {
        retval = (uint)((DSCHED_St[(fid).id] & (DSCHED_StType)DSCHED_ACT_MSK) != (DSCHED_StType)0);
    }
    else
    {
        /* mode B, C (inhibt only) are always not active - only mode A might be active  */
        retval = 0u;
    }

    return(retval);
}




/**
 **************************************************************************************************
 * This method will set the sleep bit in the scheduler state for the given FID.
 * \param        FId Name / Reference (type protected)
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setSleep)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DSCHED_setSleep(DSM_FIdType fid) )
#else
static void DSCHED_setSleep(DSM_FIdType fid)
#endif
{
    if((fid).id < DSCHED_numFIdMaxNoAckn)
    {
        Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St [(fid).id] = ((DSCHED_St[(fid).id]) | DSCHED_LCK_MSK);
        Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }
}


/**
 **************************************************************************************************
 * This method will return TRUE if the inhibit bit is set
 * in the status of the given FID. Otherwise it will return FALSE.
 *
 * The same function but with fid as simple uint paramter is provided
 * within the protected file for quick internal use.
 * \param        FId Name / Reference (type protected)
 * \return       True if fid is inhibited, otherwise false
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getInhib)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DSCHED_getInhib(DSM_FIdType fid) )
#else
static uint DSCHED_getInhib(DSM_FIdType fid)
#endif
{

    return((DINH_stFId[(fid).id] & DSM_SCH_INH_MK) == 0u );
}




#endif /* _DSCHED_PUB_H */
