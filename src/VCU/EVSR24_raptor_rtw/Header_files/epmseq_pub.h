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
 * $Filename__:epmseq_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GSU2KOR$
 * $Date______:11.11.2011$
 * $Class_____:SWHDR$
 * $Name______:epmseq_pub$
 * $Variant___:1.23.0$
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
 * 1.23.0; 0     11.11.2011 GSU2KOR
 *   45 TDC Task
 * 
 * 1.22.0; 0     01.06.2010 WHT2SI
 *   added new states ST_S0_H and S_0_H, for asymmetric TDC distances
 * 
 * 1.21.0; 0     15.12.2009 OMO2FE
 *   corrections in header files
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   Initial import from Clearcase 
 *      File name: epmseq_pub.h
 *      Version: \main\basis\b_Epm\6
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMSEQ_PUB_H                                  /* protect multiple includes              */
#define _EPMSEQ_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header of STC EPMSEQ
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

/** EpmSeq_numInt_t includes the syncro-interrupt-types which could be generated */
enum EpmSeq_numInt_t
{
    S_0             =   0,    /**< S0-interrupt */
    S_1             =   1,    /**< S1-interrupt */
    S_0_FIRST       =   2,    /**< first S0-interrupt after init */
    S_1_FIRST       =   3,    /**< first S1-interrupt after init */
    S_0_FIRST_START =   6,    /**< first start S0-interrupt after init (at low speed) */
    S_1_FIRST_START =   7,    /**< first start S1-interrupt after init (at low speed) */
    S_EPM           =   8,    /**< EPM-interrupt */
    S_INI           =   16,   /**< init-interrupt - generated after loss of syncro */
    S_0_H           =   32    /**< helper interrupt - only in case of asymmetric TDC distances */
};

#define EPMSEQ_NUMINT_BIT_TYPE      0
#define EPMSEQ_NUMINT_BIT_FIRST     1
#define EPMSEQ_NUMINT_BIT_START     2
#define EPMSEQ_NUMINT_BIT_EPM       3
#define EPMSEQ_NUMINT_BIT_INI       4

/** EpmSeq_stInt_t includes the states in which the sequence manager could be. With this states the
    next syncro-interrupt-type could be determined  */
enum EpmSeq_stInt_t
{
    ST_S_0          = 0,    /**< next interrupt is S0-interrupt */
    ST_S_1          = 1,    /**< next interrupt is S1-interrupt */
    ST_S_0_START    = 4,    /**< next interrupt is start S0-interrupt (at low speed after start) */
    ST_S_1_START    = 5,    /**< next interrupt is start S1-interrupt (at low speed after start) */
    ST_EPM          = 8,    /**< next interrupt is EPM-interrupt */
    ST_S_0_H        = 32    /**< next interrupt is S0 helper-interrupt (TDC_UNEQLGEOM_SY ==2) */
};

/**EpmSeq_numAgEvtInt_t includes tasks which can be activated in angular events */
enum EpmSeq_numAgEvtInt_t
{
    S_ANGULAR             =   0    /**SyncAngular Task */
};

#define EPMSEQ_STINT_BIT_TYPE       0
#define EPMSEQ_STINT_BIT_START      2


/** EpmSeq_numIntTyp_t includes the syncro-interrupt-types which could be generated */
#define EPMSEQ_RESYNCUPPERLVL_POS   6

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


__PRAGMA_USE__epm__nsync__RAM__x16__START
// EpmSeq_pihNxtInt: Position of next syncro-IR
extern sint16 EpmSeq_phiNxtInt;
__PRAGMA_USE__epm__nsync__RAM__x16__END

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmSeq_Proc_SyncIni(void);
extern void EpmSeq_AngleEvent_SyncIni (void);
extern void EpmSeq_AngleEvent_IniEnd (void);
extern void EpmSeq_AngleEvent_SyncFirst(void);
extern void EpmSeq_AngleEvent_Proc (void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

/*
 ***************************************************************************************************
 * Prototypes for functions which can be used as inline or normal C-implementation
 ***************************************************************************************************
 */


/* _EPMSEQ_PUB_H                                                                                  */
#endif
