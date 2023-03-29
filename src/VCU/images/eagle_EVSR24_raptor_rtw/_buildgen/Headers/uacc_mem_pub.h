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
 * $Filename__:uacc_mem_pub.h$ 
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
 * $Name______:uacc_mem_pub$ 
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
 *      File name: uacc_mem_pub.h
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Public header file for UAcc module
 *
 * \scope  API
 ***************************************************************************************************
 */

#ifndef _UACC_MEM_PUB_H
#define _UACC_MEM_PUB_H


/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */

/* Return Type for UAcc Module and sub modules                                           */
typedef enum
{
  UACC_MEM_ST_IDLE = 0 ,     /* UACC is in IDLE state                                    */
  UACC_MEM_ST_OK  ,          /* Task completed successfully                              */
  UACC_MEM_ST_LOCK ,         /* UACC is BUSY , Task is not over                          */
  UACC_MEM_ST_BUSY ,         /* UACC is BUSY , Task is not over                          */
  UACC_MEM_ST_ERROR          /* Task not completed because of ERROR                      */
}UAcc_Mem_stReturn_t;


/* supported user                                                                        */
typedef enum
{
    UACC_MEM_USER_DIAG = 0,  /* Diagnostic user                                          */
    UACC_MEM_MAX_USERS       /* Max number of user                                       */
}UAcc_Mem_User_t;


typedef struct
{
  uint32 adSrcBuf_u32 ;      /* Eg : Memory address from where to read or where to write */
  uint32 adTgtBuf_u32;       /* Eg : Buffer Where to write the read result or            */
                             /* from where to read for writing to Memory                 */
  uint32 numCopyBytes_u32 ;  /* Number of Remaining Bytes to read / write                */
  uint8  numOperation_u8  ;  /* Read =0 / write =1                                       */
  uint8  numUserNo_u8     ;  /* User number: DIAG, CCP                                   */
  uint8  stUAccUser_u8    ;  /* State of UAcc : Idle / OK / Busy / Error                 */
  uint8  numUtility_u8  ;    /* Store the utility information: Memory type Flash/Ram     */
}UAcc_Mem_UserService_t;


/* These are the maximum function type supported                                         */
typedef enum
{
    UACC_MEM_READ = 0 ,      /* Read function                                            */
    UACC_MEM_WRITE,          /* Write function                                           */
    UACC_MEM_MAX_FUNC        /* Max supported function                                   */
} UAcc_Mem_UtilFunc_t ;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__uacc__NormalSpeed__START
extern void UAcc_Mem_Co_Proc_Ini (void) ;
extern uint8 UAcc_Mem_Access (const UAcc_Mem_UserService_t*  UAcc_Service_ps );
extern void UAcc_Mem_Background_Proc ( void) ;
__PRAGMA_USE__CODE__uacc__NormalSpeed__END

__PRAGMA_USE__uacc__10ms__RAM__s32__START
extern UAcc_Mem_UserService_t UAcc_MemUser_Service_cs;
extern UAcc_Mem_UserService_t UAcc_Mem_UserService_as[UACC_MEM_MAX_USERS] ;
__PRAGMA_USE__uacc__10ms__RAM__s32__END

__PRAGMA_USE__CODE__uacc__NormalSpeed__START
/* read write functions */
extern void UAcc_Mem_Ram_ReadWrite( uint8 numUAcc_MemUser_u8) ;
extern void UAcc_Mem_Flash_Read( uint8 numUAcc_MemUser_u8) ;
__PRAGMA_USE__CODE__uacc__NormalSpeed__END
#endif
