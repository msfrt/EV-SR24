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
 * $Filename__:epmcas_adap_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:TUC2SI$
 * $Date______:24.05.2011$
 * $Class_____:SWHDR$
 * $Name______:epmcas_adap_pub$
 * $Variant___:1.25.0$
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
 * 1.25.0; 0     24.05.2011 TUC2SI
 *   EpmCaS_stAdapErr changed to exported variable for external access  over 
 *   DAMOS
 * 
 * 1.23.0; 0     26.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCAS_ADAP_PUB_H                               /* protect multiple includes              */
#define _EPMCAS_ADAP_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header-file of STC EPMCAS_ADAP
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */
/** States of EpmCaS_stAdap */
typedef enum
{
    EPMCAS_STNOADAP,        // adaption didn't run since init
    EPMCAS_STERRADAP,       // adaption stopped with error, e.g. max tries reached
    EPMCAS_STADAP,          // adaption was started but didn't finish until now
    EPMCAS_STADAPSTOP,      // adaption was stopped
    EPMCAS_STFULLADAP       // adaption successfully done
}EpmCaS_stAdap_t;

/** bitpositions inside EpmCaS_stAdapErr */
enum
{
    EPMCAS_NUMTRIESMAX_POS,         // maximum number of tries to adapt was reached
    EPMCAS_PHIDIFFREFADAPMAX_POS,   // maximum angle between reference and adapted pos reached
    EPMCAS_ADAPCHECKFAIL_POS,       // adaption was lost, angle of one edge was too big
    EPMCAS_MNTERR_POS               // the camshaft mount offset is outside the tolerance
};

/*
 ***************************************************************************************************
 * extern declarations for owned messages (not in a msg.xml-file declared)
 ***************************************************************************************************
 */
/** EpmCaS_stAdap[]: state of camshaft adaption */
MEMLAY_USE_ENVRAM (extern EpmCaS_stAdap_t, EpmCaS_stAdap[NUMCASMAX]);

//offset for the camshaft in the reference position
MEMLAY_USE_ENVRAM(extern sint16, EpmCaS_phiCaSOfs[NUMCASMAX]);

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCaS_Adap_Proc_Ini(void);
extern void EpmCaS_Adap_Proc_ReIni(void);
extern void EpmCaS_Adap_Proc_IniEnd(void);
extern void EpmCaS_Adap_100ms_Proc(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmCaS_Adap_fcmclr(void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCaS_Adap_Proc_SyncIni (void);
extern sint16 EpmCaS_GetAgAdapRefPos(enum EpmHCaS_numCaS_t numCaS, uint32 numEdge);
__PRAGMA_USE__CODE__epm__HighSpeed__END

/* _EPMCAS_ADAP_PUB_H */
#endif
