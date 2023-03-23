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
 * $Filename__:epmsrv_lib_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KAG4FE$ 
 * $Date______:13.08.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmsrv_lib_inl$ 
 * $Variant___:1.28.0$ 
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
 * 1.28.0; 0     13.08.2012 KAG4FE
 *   
 * 
 * 1.27.1; 0     06.08.2012 KAG4FE
 *   (RQONE00063870)Bugfix in EpmSrv_Function EpmSrv_CnvT2Ag
 * 
 * 1.25.0; 0     14.12.2010 PIE2SI
 *   Update of 2 services
 * 
 * 1.21.0; 0     08.04.2009 NF72FE
 *   Transfer of Epm.21 from CC to SDOM
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMSRV_LIB_INL_H
#define _EPMSRV_LIB_INL_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  inline header for EPM service routines
 *
 * \scope INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/**
 ***************************************************************************************************
 * Calculates for a given ignition position the corresponding TDC.
 *
 * This macro returns for a given position of the ignition sequence ctCyl the corresponding TDC.
 * ctCyl has a range from 0 upto NUMCYLMAX_SY - 1. The TDC comes out of an application
 * array (Epm_numFireSeg_C[NUMCYLMAX_SY -1] which contains the ignition sequence of the physical
 * cylinders over a complete engine working cycle.
 * This version works only for a single system and doesn't support master/slave systems.
 *
 * \param uint8 ctCyl number of ignition position for which a TDC should returned.
 * \retval uint8 depending TDC to ctCyl
 ***************************************************************************************************
 */
LOCAL_INLINE uint8 EpmSrv_GetNumTDC(uint8 ctCyl);
LOCAL_INLINE uint8 EpmSrv_GetNumTDC(uint8 ctCyl)
{
    return Epm_numFireSeg_C[ctCyl];
}

/**
 ***************************************************************************************************
 * Returns the first ignition position.
 *
 * This macro always has a result of value zero because this is the first ignition position.
 *
 * \retval zero
 ***************************************************************************************************
 */
LOCAL_INLINE uint8 EpmSrv_GetFrstCyl(void);
LOCAL_INLINE uint8 EpmSrv_GetFrstCyl(void)
{
    return 0;
}

/**
 ***************************************************************************************************
 * This macro returns the angle for a given ignition position.
 *
 * For each ignition position a angle is saved in the applicable array Epm_phiTDC. The angle values
 * are normalized in the following way: 1degree = 0x8000/720.
 * The user has to take care, that the input paramater is in a correct range otherwise unexpected
 * errors can happen.
 *
 * \param uint8 ctCyl ignition position for that the angle is wanted.
 * \retval sint16 depending phiTDC to ctCyl.
 * \usedresources Epm_phiTDC
 ***************************************************************************************************
 */
LOCAL_INLINE sint16 EpmSrv_GetAgCyl(uint8 ctCyl);
LOCAL_INLINE sint16 EpmSrv_GetAgCyl(uint8 ctCyl)
{
    return Epm_phiCyl[ctCyl];
}


#endif
