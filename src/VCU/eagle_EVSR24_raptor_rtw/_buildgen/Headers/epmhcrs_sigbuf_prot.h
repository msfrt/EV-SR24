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
 * $Filename__:epmhcrs_sigbuf_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:APJ1KOR$
 * $Date______:25.09.2013$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_sigbuf_prot$
 * $Variant___:1.33.0$
 * $Revision__:1$
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
 * 1.33.0; 1     25.09.2013 APJ1KOR
 *   -
 * 
 * 1.33.0; 0     23.09.2013 APJ1KOR
 *   RQONE00229485_MWF_Merkmal_EPM_M276LA_VC15_AEV23529
 * 
 * 1.32.0; 0     29.04.2013 MLA8SI
 *   Extension of TTMeasure functionality
 * 
 * 1.30.0; 0     18.05.2011 IOM2FE
 *   Update for CRS_TAA_SY
 * 
 * 1.28.0; 0     15.02.2011 NF72FE
 *   EPM warning removal
 * 
 * 1.27.0; 0     24.01.2011 PAW2FE
 *   Append increased quantization of TAA correction values from sint8 to sint16
 *    dependent to the system constant TWCOR_HIRES_SC.
 * 
 * 1.25.0; 0     25.03.2010 PAW2FE
 *   Moving Headers needed for function EpmHCrS_GetBufPerTAA () to public-header
 *    instead of protected-header.
 * 
 * 1.23.0; 0     16.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_SIGBUF_PROT_H
#define _EPMHCRS_SIGBUF_PROT_H


/*
 ***************************************************************************************************
 * Atomic generated includes not allowed but no other way is possible
 ***************************************************************************************************
 */
#include "epmhcrs_auto_prot.h"
#include "epmhcrs_sigbuf_dat.h"
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

 /**
 * A bit mask and max value for timestamp elements in the signal buffer #EpmHCrS_SigBuf.ti .
 * The 4 MSB of each buffer element contains the gap number. The 28 LSB cointains the time stamp.
 * \code
 *  +----+----+----+----+----+----+----+----+
 *  |0000|1111|1111|1111|1111|1111|1111|1111|
 *  +----+----+----+----+----+----+----+----+
 *  31   27                                0
 *   \ /  \                               /
 *    +     ------------+----------------
 *    |                 |
 *    |                 +-------------------- Time stamp
 *    +-------------------------------------- Gap index
 * \endcode
 */
#define EPMHCRS_SIGBUF_TIMAX    0x0ffffffful


/**
 * EpmHCrS_putSigBuf
 * Bit meanig of 4 upper bits in timestamp from crankshaft signal buffer
 * \arg Bit 28 - EPMHCRS_SIGBUFFWD_POS      -   SET: Increment in forward direction
 * \arg                                       RESET: no information
 * \arg Bit 29 - EPMHCRS_SIGBUFFWD_POS      -   SET: Increment in reverse direction
 * \arg                                       RESET: no information
 * \arg Bit 28/29                           -   SET: Increment direction error, the pulse isn't in tolerance
 * \arg
 * \arg Bit 30 - free                       -   SET:
 * \arg                                       RESET:
 * \arg Bit 31 - EPMHCRS_SIGBUFGAP_POS      -   SET: Timestamp belong to the gap
 * \arg                                       RESET: Timestamp regular increment
 */
#define EPMHCRS_SIGBUFFWD_POS               28
#define EPMHCRS_SIGBUFRVS_POS               29
#define EPMHCRS_SIGBUFGAP_POS               31


/**
 * Crankshaft increment counter correlated with signal buffer write index.
 */
/* MISRA RULE 18.4 VIOLATION: union for better optimisation */
typedef union
{
    volatile uint32  idxWrCtInc;        /**< Buffer write index and increment counter corelated. */
    struct
    {
        volatile uint16  ctInc;         /**< Crankshaft increment counter corelated with idxWr. */
        volatile sint16  idxWr;         /**< Buffer write index. */
    } s;

} EpmHCrS_IdxWrCtInc_t;

/**
 * Crankshaft increment buffer.
 * This buffer contain time stamp of actives crankshaft edges.
 */
typedef struct
{
    EpmHCrS_IdxWrCtInc_t    u;          /**< Union: Crankshaft increment counter corelated with idxWr. */
    volatile sint16  ctIncLvl;          /**< Increment level counter.
                                             This counter show the fill level of increment buffer.
                                             The maximal value is the size of ti array. */
    volatile uint32  ti[EPMHCRS_SIGBUF_MAX]; /**< Time stamp. */
#if (CRS_TAA_SY > 0)
    #if (TWCOR_HIRES_SC == 1)
    sint16  phiTAA[EPMHCRS_NUMINC]; /**< Tooth angle adaption buffer */
    #else
    sint8   phiTAA[EPMHCRS_NUMINC]; /**< Tooth angle adaption buffer */
    #endif
#endif

} EpmHCrS_SigBuf_t;

/**
 * Switch for crankshaft increment buffer access.
 */
typedef enum
{
    modeRaw,    /**< access raw timestamps from signal buffer. */
    modeListen, /**< access raw timestamps from signal buffer in Listen Mode. */
    modeIpo,     /**< access interpolated timestamps from signal buffer. */
    #if (CRS_TAA_SY > 0)
     modeTAA,   /**< access corrected (Tooth Angle Adaption) timestamps from signal buffer. */
    #endif
    modeRawGapInfo, /* access raw times with gap info coded into the upper 4 bytes */
    modeGapInfo     /* access tooth times in us with gap info coded into the upper 4 bytes */
} swtMode_t;
/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

 extern EpmHCrS_SigBuf_t EpmHCrS_SigBuf;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
//services from epmhcrs_sigbuf
extern uint8 EpmHCrS_GetBufPerD( sint16 numInc, sint32 *tiPer, swtMode_t swtMode, EpmHCrS_IdxWrCtInc_t u);

/* _EPMHCRS_SIGBUF_PROT_H */
#endif
