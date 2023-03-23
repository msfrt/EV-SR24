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
 * $Filename__:uacc_mem_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:uacc_mem_priv$ 
 * $Variant___:2.6.0$ 
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
 * 2.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: uacc_mem_priv.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Private header file for Uacc_mem module
 *
 * \scope  INTERN
 ***************************************************************************************************
 */

#ifndef _UACC_MEM_PRIV_H
#define _UACC_MEM_PRIV_H


#define UACC_MEM_NUMMAXCOPYBYTE UAcc_Mem_NumMaxCopyByte()


/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */

typedef struct
{
  uint32  adStartBlock_u32 ;    /* Statrt address of Block */
  uint32  adEndblock_u32 ;      /* End address of block */
  uint8   memtype_u8 ;          /* Memory type Flash/Ram */
} UAcc_Mem_adArea_t ;



typedef  void  UAcc_Mem_Utility_t ( uint8  );
typedef  UAcc_Mem_Utility_t  * const UAcc_Mem_UtilityPtr_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__uacc__NormalSpeed__START
extern uint32 UAcc_Mem_NumMaxCopyByte(void);
__PRAGMA_USE__CODE__uacc__NormalSpeed__END

__PRAGMA_USE__uacc__10ms__InitRAM__s32__START
extern UAcc_Mem_adArea_t UAcc_Mem_adArea_as[] ;
__PRAGMA_USE__uacc__10ms__InitRAM__s32__END

__PRAGMA_USE__uacc__10ms__constant__arr32__START
extern UAcc_Mem_UtilityPtr_t UAcc_Mem_UtilityConfig_ca[] ;
__PRAGMA_USE__uacc__10ms__constant__arr32__END

__PRAGMA_USE__uacc__10ms__constant__x8__START
extern const uint8  UAcc_Mem_numBlocks_cu8 ;
__PRAGMA_USE__uacc__10ms__constant__x8__END

#endif
