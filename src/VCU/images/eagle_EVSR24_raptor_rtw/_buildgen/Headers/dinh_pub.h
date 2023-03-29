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
 * $Filename__:dinh_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NPG2KOR$ 
 * $Date______:14.03.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:dinh_pub$ 
 * $Variant___:2.14.0$ 
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
 * 2.14.0; 0     14.03.2012 NPG2KOR
 *   Takeover of implementation of the message DINH_MonNoSync
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dinh_pub.h
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DINH_PUB_H
#define _DINH_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *             DSM - Inhibit handler: prototypes and definitions
 *
 * \scope      API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Masks for acces to the Bits in the FId status word */
#define DSM_SCH_INH_MK     0x20


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/**
 FID = Function Identifier reference type.
 Integer packed into structure to enable parameter checking*/
/*****************************/
typedef struct
{
    uint16 id;  /* reference number  */
} DSM_FIdType;




/*
 ***************************************************************************************************
 * Variable Prototypes
 ***************************************************************************************************
 */
/* Fid status array */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8 DINH_stFId[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

/* inhibit monitoring executed after central change (fcmClear, ReInit) ? */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8       DINH_MonNoSync;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END


/**
 ***************************************************************************************************
 * Get the permission status of an FID.
 * In contrast to DSM_GetDscPermission() the influence of the scheduler is not considered.
 * Therefore this function could not be used for scheduled FIDs.
 *
 * \param            Fid_Name = name from defineFID
 * \return           permission 0 = no permission 1 = permission
 * \seealso          DSM API description
 * \usedresources    none
 ***************************************************************************************************
 */
/* Get permission state of function identifier */
/* #define DSM_GetPermission(FId)  ((DINH_stFId[(FId).id] & DSM_SCH_INH_MK) > 0 ) */



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__HighSpeed__START
bool DSM_GetDscPermission(DSM_FIdType FId);
__PRAGMA_USE__CODE__dsm__HighSpeed__END



#endif
