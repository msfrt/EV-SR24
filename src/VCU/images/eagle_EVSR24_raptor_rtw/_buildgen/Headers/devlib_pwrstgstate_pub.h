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
 * $Filename__:devlib_pwrstgstate_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:manual$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:11.11.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_pwrstgstate_pub$ 
 * $Variant___:1.141.0$ 
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
 * 1.141.0; 0     11.11.2008 KLN1SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWRSTGSTATE_PUB_H
#define _DEVLIB_PWRSTGSTATE_PUB_H       /* Prevent this header from further inclusions.         */
    /*
     ***********************************************************************************************
     * type defs and enums
     ***********************************************************************************************
     */

    /* Bit positions in the message DevLib_stPwrStgEnaCond */
    #define DEVLIB_PSDISBL_PREDRIVE_BP    0x00
    #define DEVLIB_PSDISBL_POSTDRIVE_BP   0x01
    #define DEVLIB_PSDISBL_LOWBATTU_BP    0x02
    #define DEVLIB_PSDISBL_HIGHBATTU_BP   0x03
    #define DEVLIB_PSDISBL_PERM_BP        0x04
    #define DEVLIB_PSDISBL_BATTCORFAC_BP  0x05
    #define DEVLIB_MOCSOP_PSTSTACTV_BP    0x08     /* Bit indicates that powerstage test by MoCSOP is not completed */

    /*
     ***********************************************************************************************
     * Prototypes
     ***********************************************************************************************
     */

    __PRAGMA_USE__CODE__devlib__LowSpeed__START
    void DevLib_PwrStgState_Proc_Ini(void);
    __PRAGMA_USE__CODE__devlib__LowSpeed__END

    __PRAGMA_USE__CODE__devlib__NormalSpeed__START
    void DevLib_PwrStgState_Proc(void);
    __PRAGMA_USE__CODE__devlib__NormalSpeed__END

#endif
