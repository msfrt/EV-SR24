/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:memmap.h$
 * $Author____:LEH2ABT$
 * $Function__:Component Toolbox-Import$
 * $Domain____:SDOM$
 * $User______:MZT2FE$
 * $Date______:30.06.2010$
 * $Class_____:SWHDR$
 * $Name______:memmap$
 * $Variant___:1.14.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 1     30.06.2010 MZT2FE
 *   Update.
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef MEMMAP_H
#define MEMMAP_H
/* Mem Vendor ID */
#define MEM_VENDOR_ID         ((uint16)17)

/* MEM SW Major Version */
#define MEM_SW_MAJOR_VERSION  (1U)
/* MEM SW Minor Version */
#define MEM_SW_MINOR_VERSION  (0)
/* MEM SW Patch Version */
#define MEM_SW_PATCH_VERSION  (0)

/* MEM AR Major Version */
#define MEM_AR_MAJOR_VERSION  (1U)
/* MEM AR Minor Version */
#define MEM_AR_MINOR_VERSION  (0)
/* MEM AR Patch Version */
#define MEM_AR_PATCH_VERSION  (13U)

#endif
/*
  Identifier clash , upto 40 characters allowed
  MISRA Rule 92 violation : #undef should not be used.
  MemMap works with undefine and redefine principle.
*/
/*lint -idlen(40) -esym(961,92) */

#if defined (START_WITH_IF)

/*****************************************************************************
**                                 MCU                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (MCU_START_SEC_CODE)
   #undef      MCU_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (MCU_STOP_SEC_CODE)
   #undef      MCU_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (MCU_START_SEC_VAR_NOINIT_8BIT)
   #undef      MCU_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MCU_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MCU_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (MCU_START_SEC_VAR_NOINIT_16BIT)
   #undef      MCU_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MCU_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MCU_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (MCU_START_SEC_VAR_NOINIT_32BIT)
   #undef      MCU_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MCU_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MCU_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (MCU_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MCU_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MCU_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MCU_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MCU_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MCU_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MCU_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MCU_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MCU_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MCU_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MCU_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MCU_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MCU_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MCU_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (MCU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MCU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MCU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MCU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MCU_START_SEC_VAR_FAST_8BIT)
   #undef      MCU_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MCU_STOP_SEC_VAR_FAST_8BIT)
   #undef      MCU_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MCU_START_SEC_VAR_FAST_16BIT)
   #undef      MCU_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MCU_STOP_SEC_VAR_FAST_16BIT)
   #undef      MCU_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MCU_START_SEC_VAR_FAST_32BIT)
   #undef      MCU_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MCU_STOP_SEC_VAR_FAST_32BIT)
   #undef      MCU_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MCU_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MCU_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MCU_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MCU_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MCU_START_SEC_VAR_8BIT)
   #undef      MCU_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MCU_STOP_SEC_VAR_8BIT)
   #undef      MCU_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MCU_START_SEC_VAR_16BIT)
   #undef      MCU_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MCU_STOP_SEC_VAR_16BIT)
   #undef      MCU_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MCU_START_SEC_VAR_32BIT)
   #undef      MCU_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MCU_STOP_SEC_VAR_32BIT)
   #undef      MCU_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (MCU_START_SEC_VAR_UNSPECIFIED)
   #undef      MCU_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MCU_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MCU_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MCU_START_SEC_CONST_8BIT)
   #undef      MCU_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MCU_STOP_SEC_CONST_8BIT)
   #undef      MCU_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MCU_START_SEC_CONST_16BIT)
   #undef      MCU_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MCU_STOP_SEC_CONST_16BIT)
   #undef      MCU_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MCU_START_SEC_CONST_32BIT)
   #undef      MCU_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MCU_STOP_SEC_CONST_32BIT)
   #undef      MCU_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MCU_START_SEC_CONST_UNSPECIFIED)
   #undef      MCU_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MCU_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MCU_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 DIO                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (DIO_START_SEC_CODE)
   #undef      DIO_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (DIO_STOP_SEC_CODE)
   #undef      DIO_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (DIO_START_SEC_VAR_NOINIT_8BIT)
   #undef      DIO_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (DIO_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      DIO_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (DIO_START_SEC_VAR_NOINIT_16BIT)
   #undef      DIO_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (DIO_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      DIO_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (DIO_START_SEC_VAR_NOINIT_32BIT)
   #undef      DIO_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (DIO_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      DIO_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (DIO_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DIO_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (DIO_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DIO_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (DIO_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DIO_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (DIO_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DIO_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (DIO_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DIO_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (DIO_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DIO_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (DIO_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DIO_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (DIO_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DIO_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (DIO_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DIO_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (DIO_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DIO_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DIO_START_SEC_VAR_FAST_8BIT)
   #undef      DIO_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (DIO_STOP_SEC_VAR_FAST_8BIT)
   #undef      DIO_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DIO_START_SEC_VAR_FAST_16BIT)
   #undef      DIO_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (DIO_STOP_SEC_VAR_FAST_16BIT)
   #undef      DIO_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DIO_START_SEC_VAR_FAST_32BIT)
   #undef      DIO_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (DIO_STOP_SEC_VAR_FAST_32BIT)
   #undef      DIO_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DIO_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DIO_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (DIO_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DIO_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DIO_START_SEC_VAR_8BIT)
   #undef      DIO_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (DIO_STOP_SEC_VAR_8BIT)
   #undef      DIO_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DIO_START_SEC_VAR_16BIT)
   #undef      DIO_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (DIO_STOP_SEC_VAR_16BIT)
   #undef      DIO_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DIO_START_SEC_VAR_32BIT)
   #undef      DIO_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (DIO_STOP_SEC_VAR_32BIT)
   #undef      DIO_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (DIO_START_SEC_VAR_UNSPECIFIED)
   #undef      DIO_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (DIO_STOP_SEC_VAR_UNSPECIFIED)
   #undef      DIO_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (DIO_START_SEC_CONST_8BIT)
   #undef      DIO_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (DIO_STOP_SEC_CONST_8BIT)
   #undef      DIO_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (DIO_START_SEC_CONST_16BIT)
   #undef      DIO_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (DIO_STOP_SEC_CONST_16BIT)
   #undef      DIO_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (DIO_START_SEC_CONST_32BIT)
   #undef      DIO_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (DIO_STOP_SEC_CONST_32BIT)
   #undef      DIO_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (DIO_START_SEC_CONST_UNSPECIFIED)
   #undef      DIO_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (DIO_STOP_SEC_CONST_UNSPECIFIED)
   #undef      DIO_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 GPT                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (GPT_START_SEC_CODE)
   #undef      GPT_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (GPT_STOP_SEC_CODE)
   #undef      GPT_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (GPT_START_SEC_VAR_NOINIT_8BIT)
   #undef      GPT_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (GPT_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      GPT_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (GPT_START_SEC_VAR_NOINIT_16BIT)
   #undef      GPT_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (GPT_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      GPT_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (GPT_START_SEC_VAR_NOINIT_32BIT)
   #undef      GPT_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (GPT_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      GPT_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (GPT_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      GPT_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (GPT_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      GPT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (GPT_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      GPT_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (GPT_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      GPT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (GPT_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      GPT_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (GPT_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      GPT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (GPT_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      GPT_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (GPT_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      GPT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (GPT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      GPT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (GPT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      GPT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPT_START_SEC_VAR_FAST_8BIT)
   #undef      GPT_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (GPT_STOP_SEC_VAR_FAST_8BIT)
   #undef      GPT_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPT_START_SEC_VAR_FAST_16BIT)
   #undef      GPT_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (GPT_STOP_SEC_VAR_FAST_16BIT)
   #undef      GPT_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPT_START_SEC_VAR_FAST_32BIT)
   #undef      GPT_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (GPT_STOP_SEC_VAR_FAST_32BIT)
   #undef      GPT_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPT_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      GPT_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (GPT_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      GPT_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPT_START_SEC_VAR_8BIT)
   #undef      GPT_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (GPT_STOP_SEC_VAR_8BIT)
   #undef      GPT_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPT_START_SEC_VAR_16BIT)
   #undef      GPT_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (GPT_STOP_SEC_VAR_16BIT)
   #undef      GPT_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPT_START_SEC_VAR_32BIT)
   #undef      GPT_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (GPT_STOP_SEC_VAR_32BIT)
   #undef      GPT_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (GPT_START_SEC_VAR_UNSPECIFIED)
   #undef      GPT_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (GPT_STOP_SEC_VAR_UNSPECIFIED)
   #undef      GPT_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (GPT_START_SEC_CONST_8BIT)
   #undef      GPT_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (GPT_STOP_SEC_CONST_8BIT)
   #undef      GPT_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (GPT_START_SEC_CONST_16BIT)
   #undef      GPT_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (GPT_STOP_SEC_CONST_16BIT)
   #undef      GPT_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (GPT_START_SEC_CONST_32BIT)
   #undef      GPT_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (GPT_STOP_SEC_CONST_32BIT)
   #undef      GPT_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (GPT_START_SEC_CONST_UNSPECIFIED)
   #undef      GPT_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (GPT_STOP_SEC_CONST_UNSPECIFIED)
   #undef      GPT_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 ICU                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (ICU_START_SEC_CODE)
   #undef      ICU_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (ICU_STOP_SEC_CODE)
   #undef      ICU_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (ICU_START_SEC_VAR_NOINIT_8BIT)
   #undef      ICU_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (ICU_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      ICU_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (ICU_START_SEC_VAR_NOINIT_16BIT)
   #undef      ICU_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (ICU_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      ICU_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (ICU_START_SEC_VAR_NOINIT_32BIT)
   #undef      ICU_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (ICU_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      ICU_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (ICU_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ICU_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (ICU_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ICU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (ICU_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ICU_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (ICU_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ICU_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ICU_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ICU_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (ICU_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ICU_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ICU_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ICU_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (ICU_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ICU_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (ICU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ICU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (ICU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ICU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ICU_START_SEC_VAR_FAST_8BIT)
   #undef      ICU_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (ICU_STOP_SEC_VAR_FAST_8BIT)
   #undef      ICU_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ICU_START_SEC_VAR_FAST_16BIT)
   #undef      ICU_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (ICU_STOP_SEC_VAR_FAST_16BIT)
   #undef      ICU_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ICU_START_SEC_VAR_FAST_32BIT)
   #undef      ICU_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (ICU_STOP_SEC_VAR_FAST_32BIT)
   #undef      ICU_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ICU_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ICU_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (ICU_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ICU_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ICU_START_SEC_VAR_8BIT)
   #undef      ICU_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (ICU_STOP_SEC_VAR_8BIT)
   #undef      ICU_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ICU_START_SEC_VAR_16BIT)
   #undef      ICU_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (ICU_STOP_SEC_VAR_16BIT)
   #undef      ICU_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ICU_START_SEC_VAR_32BIT)
   #undef      ICU_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (ICU_STOP_SEC_VAR_32BIT)
   #undef      ICU_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (ICU_START_SEC_VAR_UNSPECIFIED)
   #undef      ICU_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (ICU_STOP_SEC_VAR_UNSPECIFIED)
   #undef      ICU_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (ICU_START_SEC_CONST_8BIT)
   #undef      ICU_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (ICU_STOP_SEC_CONST_8BIT)
   #undef      ICU_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (ICU_START_SEC_CONST_16BIT)
   #undef      ICU_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (ICU_STOP_SEC_CONST_16BIT)
   #undef      ICU_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (ICU_START_SEC_CONST_32BIT)
   #undef      ICU_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (ICU_STOP_SEC_CONST_32BIT)
   #undef      ICU_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (ICU_START_SEC_CONST_UNSPECIFIED)
   #undef      ICU_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (ICU_STOP_SEC_CONST_UNSPECIFIED)
   #undef      ICU_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 PWM                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (PWM_START_SEC_CODE)
   #undef      PWM_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (PWM_STOP_SEC_CODE)
   #undef      PWM_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (PWM_START_SEC_VAR_NOINIT_8BIT)
   #undef      PWM_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (PWM_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      PWM_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (PWM_START_SEC_VAR_NOINIT_16BIT)
   #undef      PWM_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (PWM_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      PWM_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (PWM_START_SEC_VAR_NOINIT_32BIT)
   #undef      PWM_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (PWM_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      PWM_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (PWM_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      PWM_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (PWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      PWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (PWM_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      PWM_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (PWM_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      PWM_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (PWM_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      PWM_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (PWM_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      PWM_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (PWM_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      PWM_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (PWM_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      PWM_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (PWM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      PWM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (PWM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      PWM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PWM_START_SEC_VAR_FAST_8BIT)
   #undef      PWM_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (PWM_STOP_SEC_VAR_FAST_8BIT)
   #undef      PWM_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PWM_START_SEC_VAR_FAST_16BIT)
   #undef      PWM_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (PWM_STOP_SEC_VAR_FAST_16BIT)
   #undef      PWM_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PWM_START_SEC_VAR_FAST_32BIT)
   #undef      PWM_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (PWM_STOP_SEC_VAR_FAST_32BIT)
   #undef      PWM_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PWM_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      PWM_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (PWM_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      PWM_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PWM_START_SEC_VAR_8BIT)
   #undef      PWM_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (PWM_STOP_SEC_VAR_8BIT)
   #undef      PWM_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PWM_START_SEC_VAR_16BIT)
   #undef      PWM_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (PWM_STOP_SEC_VAR_16BIT)
   #undef      PWM_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PWM_START_SEC_VAR_32BIT)
   #undef      PWM_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (PWM_STOP_SEC_VAR_32BIT)
   #undef      PWM_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (PWM_START_SEC_VAR_UNSPECIFIED)
   #undef      PWM_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (PWM_STOP_SEC_VAR_UNSPECIFIED)
   #undef      PWM_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (PWM_START_SEC_CONST_8BIT)
   #undef      PWM_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (PWM_STOP_SEC_CONST_8BIT)
   #undef      PWM_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (PWM_START_SEC_CONST_16BIT)
   #undef      PWM_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (PWM_STOP_SEC_CONST_16BIT)
   #undef      PWM_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (PWM_START_SEC_CONST_32BIT)
   #undef      PWM_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (PWM_STOP_SEC_CONST_32BIT)
   #undef      PWM_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (PWM_START_SEC_CONST_UNSPECIFIED)
   #undef      PWM_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (PWM_STOP_SEC_CONST_UNSPECIFIED)
   #undef      PWM_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 GPTA                                     **
**  Module specific to TC1766 implementation                                **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (GPTA_START_SEC_CODE)
   #undef      GPTA_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (GPTA_STOP_SEC_CODE)
   #undef      GPTA_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (GPTA_START_SEC_VAR_NOINIT_8BIT)
   #undef      GPTA_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (GPTA_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      GPTA_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (GPTA_START_SEC_VAR_NOINIT_16BIT)
   #undef      GPTA_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (GPTA_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      GPTA_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (GPTA_START_SEC_VAR_NOINIT_32BIT)
   #undef      GPTA_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (GPTA_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      GPTA_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (GPTA_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      GPTA_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (GPTA_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      GPTA_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (GPTA_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      GPTA_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (GPTA_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      GPTA_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (GPTA_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      GPTA_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (GPTA_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      GPTA_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (GPTA_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      GPTA_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (GPTA_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      GPTA_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (GPTA_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      GPTA_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (GPTA_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      GPTA_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPTA_START_SEC_VAR_FAST_8BIT)
   #undef      GPTA_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (GPTA_STOP_SEC_VAR_FAST_8BIT)
   #undef      GPTA_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPTA_START_SEC_VAR_FAST_16BIT)
   #undef      GPTA_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (GPTA_STOP_SEC_VAR_FAST_16BIT)
   #undef      GPTA_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPTA_START_SEC_VAR_FAST_32BIT)
   #undef      GPTA_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (GPTA_STOP_SEC_VAR_FAST_32BIT)
   #undef      GPTA_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (GPTA_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      GPTA_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (GPTA_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      GPTA_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPTA_START_SEC_VAR_8BIT)
   #undef      GPTA_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (GPTA_STOP_SEC_VAR_8BIT)
   #undef      GPTA_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPTA_START_SEC_VAR_16BIT)
   #undef      GPTA_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (GPTA_STOP_SEC_VAR_16BIT)
   #undef      GPTA_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (GPTA_START_SEC_VAR_32BIT)
   #undef      GPTA_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (GPTA_STOP_SEC_VAR_32BIT)
   #undef      GPTA_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (GPTA_START_SEC_VAR_UNSPECIFIED)
   #undef      GPTA_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (GPTA_STOP_SEC_VAR_UNSPECIFIED)
   #undef      GPTA_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (GPTA_START_SEC_CONST_8BIT)
   #undef      GPTA_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (GPTA_STOP_SEC_CONST_8BIT)
   #undef      GPTA_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (GPTA_START_SEC_CONST_16BIT)
   #undef      GPTA_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (GPTA_STOP_SEC_CONST_16BIT)
   #undef      GPTA_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (GPTA_START_SEC_CONST_32BIT)
   #undef      GPTA_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (GPTA_STOP_SEC_CONST_32BIT)
   #undef      GPTA_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (GPTA_START_SEC_CONST_UNSPECIFIED)
   #undef      GPTA_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (GPTA_STOP_SEC_CONST_UNSPECIFIED)
   #undef      GPTA_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 PORT                                     **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (PORT_START_SEC_CODE)
   #undef      PORT_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (PORT_STOP_SEC_CODE)
   #undef      PORT_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (PORT_START_SEC_VAR_NOINIT_8BIT)
   #undef      PORT_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (PORT_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      PORT_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (PORT_START_SEC_VAR_NOINIT_16BIT)
   #undef      PORT_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (PORT_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      PORT_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (PORT_START_SEC_VAR_NOINIT_32BIT)
   #undef      PORT_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (PORT_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      PORT_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (PORT_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      PORT_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (PORT_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      PORT_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (PORT_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      PORT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (PORT_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      PORT_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (PORT_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      PORT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (PORT_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      PORT_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (PORT_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      PORT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (PORT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      PORT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (PORT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      PORT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PORT_START_SEC_VAR_FAST_8BIT)
   #undef      PORT_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (PORT_STOP_SEC_VAR_FAST_8BIT)
   #undef      PORT_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PORT_START_SEC_VAR_FAST_16BIT)
   #undef      PORT_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (PORT_STOP_SEC_VAR_FAST_16BIT)
   #undef      PORT_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PORT_START_SEC_VAR_FAST_32BIT)
   #undef      PORT_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (PORT_STOP_SEC_VAR_FAST_32BIT)
   #undef      PORT_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (PORT_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      PORT_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (PORT_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      PORT_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PORT_START_SEC_VAR_8BIT)
   #undef      PORT_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (PORT_STOP_SEC_VAR_8BIT)
   #undef      PORT_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PORT_START_SEC_VAR_16BIT)
   #undef      PORT_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (PORT_STOP_SEC_VAR_16BIT)
   #undef      PORT_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (PORT_START_SEC_VAR_32BIT)
   #undef      PORT_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (PORT_STOP_SEC_VAR_32BIT)
   #undef      PORT_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (PORT_START_SEC_VAR_UNSPECIFIED)
   #undef      PORT_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (PORT_STOP_SEC_VAR_UNSPECIFIED)
   #undef      PORT_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (PORT_START_SEC_CONST_8BIT)
   #undef      PORT_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (PORT_STOP_SEC_CONST_8BIT)
   #undef      PORT_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (PORT_START_SEC_CONST_16BIT)
   #undef      PORT_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (PORT_STOP_SEC_CONST_16BIT)
   #undef      PORT_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (PORT_START_SEC_CONST_32BIT)
   #undef      PORT_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (PORT_STOP_SEC_CONST_32BIT)
   #undef      PORT_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (PORT_START_SEC_CONST_UNSPECIFIED)
   #undef      PORT_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (PORT_STOP_SEC_CONST_UNSPECIFIED)
   #undef      PORT_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED


/*****************************************************************************
**                                 CAN                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (CAN_START_SEC_CODE)
   #undef      CAN_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (CAN_STOP_SEC_CODE)
   #undef      CAN_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (CAN_START_SEC_VAR_NOINIT_8BIT)
   #undef      CAN_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (CAN_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      CAN_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (CAN_START_SEC_VAR_NOINIT_16BIT)
   #undef      CAN_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (CAN_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      CAN_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (CAN_START_SEC_VAR_NOINIT_32BIT)
   #undef      CAN_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (CAN_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      CAN_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (CAN_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (CAN_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CAN_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (CAN_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CAN_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (CAN_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CAN_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (CAN_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CAN_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (CAN_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CAN_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (CAN_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CAN_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (CAN_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CAN_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (CAN_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CAN_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CAN_START_SEC_VAR_FAST_8BIT)
   #undef      CAN_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (CAN_STOP_SEC_VAR_FAST_8BIT)
   #undef      CAN_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CAN_START_SEC_VAR_FAST_16BIT)
   #undef      CAN_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (CAN_STOP_SEC_VAR_FAST_16BIT)
   #undef      CAN_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CAN_START_SEC_VAR_FAST_32BIT)
   #undef      CAN_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (CAN_STOP_SEC_VAR_FAST_32BIT)
   #undef      CAN_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CAN_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CAN_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (CAN_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CAN_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CAN_START_SEC_VAR_8BIT)
   #undef      CAN_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (CAN_STOP_SEC_VAR_8BIT)
   #undef      CAN_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CAN_START_SEC_VAR_16BIT)
   #undef      CAN_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (CAN_STOP_SEC_VAR_16BIT)
   #undef      CAN_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CAN_START_SEC_VAR_32BIT)
   #undef      CAN_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (CAN_STOP_SEC_VAR_32BIT)
   #undef      CAN_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (CAN_START_SEC_VAR_UNSPECIFIED)
   #undef      CAN_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (CAN_STOP_SEC_VAR_UNSPECIFIED)
   #undef      CAN_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (CAN_START_SEC_CONST_8BIT)
   #undef      CAN_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (CAN_STOP_SEC_CONST_8BIT)
   #undef      CAN_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (CAN_START_SEC_CONST_16BIT)
   #undef      CAN_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (CAN_STOP_SEC_CONST_16BIT)
   #undef      CAN_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (CAN_START_SEC_CONST_32BIT)
   #undef      CAN_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (CAN_STOP_SEC_CONST_32BIT)
   #undef      CAN_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (CAN_START_SEC_CONST_UNSPECIFIED)
   #undef      CAN_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (CAN_STOP_SEC_CONST_UNSPECIFIED)
   #undef      CAN_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED


/*****************************************************************************
**                                 SPI                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (SPI_START_SEC_CODE)
   #undef      SPI_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (SPI_STOP_SEC_CODE)
   #undef      SPI_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (SPI_START_SEC_VAR_NOINIT_8BIT)
   #undef      SPI_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (SPI_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      SPI_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (SPI_START_SEC_VAR_NOINIT_16BIT)
   #undef      SPI_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (SPI_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      SPI_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (SPI_START_SEC_VAR_NOINIT_32BIT)
   #undef      SPI_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (SPI_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      SPI_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (SPI_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (SPI_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      SPI_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (SPI_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      SPI_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (SPI_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      SPI_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (SPI_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      SPI_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (SPI_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      SPI_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (SPI_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      SPI_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (SPI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      SPI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (SPI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      SPI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SPI_START_SEC_VAR_FAST_8BIT)
   #undef      SPI_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (SPI_STOP_SEC_VAR_FAST_8BIT)
   #undef      SPI_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SPI_START_SEC_VAR_FAST_16BIT)
   #undef      SPI_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (SPI_STOP_SEC_VAR_FAST_16BIT)
   #undef      SPI_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SPI_START_SEC_VAR_FAST_32BIT)
   #undef      SPI_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (SPI_STOP_SEC_VAR_FAST_32BIT)
   #undef      SPI_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SPI_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      SPI_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (SPI_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      SPI_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SPI_START_SEC_VAR_8BIT)
   #undef      SPI_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (SPI_STOP_SEC_VAR_8BIT)
   #undef      SPI_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SPI_START_SEC_VAR_16BIT)
   #undef      SPI_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (SPI_STOP_SEC_VAR_16BIT)
   #undef      SPI_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SPI_START_SEC_VAR_32BIT)
   #undef      SPI_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (SPI_STOP_SEC_VAR_32BIT)
   #undef      SPI_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (SPI_START_SEC_VAR_UNSPECIFIED)
   #undef      SPI_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (SPI_STOP_SEC_VAR_UNSPECIFIED)
   #undef      SPI_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (SPI_START_SEC_CONST_8BIT)
   #undef      SPI_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (SPI_STOP_SEC_CONST_8BIT)
   #undef      SPI_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (SPI_START_SEC_CONST_16BIT)
   #undef      SPI_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (SPI_STOP_SEC_CONST_16BIT)
   #undef      SPI_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (SPI_START_SEC_CONST_32BIT)
   #undef      SPI_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (SPI_STOP_SEC_CONST_32BIT)
   #undef      SPI_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (SPI_START_SEC_CONST_UNSPECIFIED)
   #undef      SPI_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (SPI_STOP_SEC_CONST_UNSPECIFIED)
   #undef      SPI_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
   
/* The Source and Destination pointers passed to the SPI are 
   handled by the DMA in the asynchronous mode. It is necesarry 
   that these variables fullfill the following addressing constarints.
   1. In case of transfer width > 8, the data type is 16bits. Therefore
      it is necesarry to have the source and destination pointers
      word aligned. (On a Even Boundary). Use of #pragma align 2 will
      ensure word alignment.
   2. DMA implements a Circular Buffer with a maximum width of 32KB.
      So the Src/Des Ptrs (Starting Address + Length Of data) should not 
      span the 32KB Boundary if Sequential data are to be transferred.
      The start address of this section must be selected so that the 
      variables donot exceed the 32KB boundary.
      [(DMA_Address & 0x00007FFFU) + Length <= 0x00008000U] 
      
   So it has to be ensured that the section "SPI_START_SEC_VAR_DMA_ACCESS" 
   fullfills the above stated criteria*/
#elif defined (SPI_START_SEC_VAR_DMA_ACCESS)
   #undef      SPI_START_SEC_VAR_DMA_ACCESS
/* In the Demo App supplied with AUTOSAR_MCAL2,
   the section:DEFAULT_START_SEC_VAR_FAST_16BIT is sufficient to satisfy the
   memory requirements for DMA. This may not be true for other applications and 
   the user should ensure this. */ 
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (SPI_STOP_SEC_VAR_DMA_ACCESS)
   #undef      SPI_STOP_SEC_VAR_DMA_ACCESS
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT

/*****************************************************************************
**                                 ADC                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (ADC_START_SEC_CODE)
   #undef      ADC_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (ADC_STOP_SEC_CODE)
   #undef      ADC_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (ADC_START_SEC_VAR_NOINIT_8BIT)
   #undef      ADC_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (ADC_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      ADC_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (ADC_START_SEC_VAR_NOINIT_16BIT)
   #undef      ADC_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (ADC_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      ADC_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (ADC_START_SEC_VAR_NOINIT_32BIT)
   #undef      ADC_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (ADC_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      ADC_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (ADC_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ADC_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (ADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (ADC_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ADC_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (ADC_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ADC_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ADC_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ADC_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (ADC_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ADC_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ADC_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ADC_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (ADC_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ADC_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (ADC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ADC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (ADC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ADC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ADC_START_SEC_VAR_FAST_8BIT)
   #undef      ADC_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (ADC_STOP_SEC_VAR_FAST_8BIT)
   #undef      ADC_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ADC_START_SEC_VAR_FAST_16BIT)
   #undef      ADC_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (ADC_STOP_SEC_VAR_FAST_16BIT)
   #undef      ADC_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ADC_START_SEC_VAR_FAST_32BIT)
   #undef      ADC_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (ADC_STOP_SEC_VAR_FAST_32BIT)
   #undef      ADC_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ADC_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ADC_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (ADC_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ADC_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ADC_START_SEC_VAR_8BIT)
   #undef      ADC_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (ADC_STOP_SEC_VAR_8BIT)
   #undef      ADC_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ADC_START_SEC_VAR_16BIT)
   #undef      ADC_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (ADC_STOP_SEC_VAR_16BIT)
   #undef      ADC_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ADC_START_SEC_VAR_32BIT)
   #undef      ADC_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (ADC_STOP_SEC_VAR_32BIT)
   #undef      ADC_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (ADC_START_SEC_VAR_UNSPECIFIED)
   #undef      ADC_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (ADC_STOP_SEC_VAR_UNSPECIFIED)
   #undef      ADC_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (ADC_START_SEC_CONST_8BIT)
   #undef      ADC_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (ADC_STOP_SEC_CONST_8BIT)
   #undef      ADC_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (ADC_START_SEC_CONST_16BIT)
   #undef      ADC_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (ADC_STOP_SEC_CONST_16BIT)
   #undef      ADC_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (ADC_START_SEC_CONST_32BIT)
   #undef      ADC_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (ADC_STOP_SEC_CONST_32BIT)
   #undef      ADC_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (ADC_START_SEC_CONST_UNSPECIFIED)
   #undef      ADC_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (ADC_STOP_SEC_CONST_UNSPECIFIED)
   #undef      ADC_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 WDG                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (WDG_START_SEC_CODE)
   #undef      WDG_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (WDG_STOP_SEC_CODE)
   #undef      WDG_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (WDG_START_SEC_VAR_NOINIT_8BIT)
   #undef      WDG_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (WDG_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      WDG_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (WDG_START_SEC_VAR_NOINIT_16BIT)
   #undef      WDG_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (WDG_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      WDG_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (WDG_START_SEC_VAR_NOINIT_32BIT)
   #undef      WDG_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (WDG_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      WDG_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (WDG_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      WDG_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (WDG_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      WDG_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (WDG_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      WDG_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (WDG_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      WDG_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (WDG_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      WDG_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (WDG_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      WDG_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (WDG_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      WDG_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (WDG_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      WDG_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (WDG_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      WDG_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (WDG_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      WDG_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (WDG_START_SEC_VAR_FAST_8BIT)
   #undef      WDG_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (WDG_STOP_SEC_VAR_FAST_8BIT)
   #undef      WDG_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (WDG_START_SEC_VAR_FAST_16BIT)
   #undef      WDG_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (WDG_STOP_SEC_VAR_FAST_16BIT)
   #undef      WDG_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (WDG_START_SEC_VAR_FAST_32BIT)
   #undef      WDG_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (WDG_STOP_SEC_VAR_FAST_32BIT)
   #undef      WDG_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (WDG_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      WDG_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (WDG_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      WDG_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (WDG_START_SEC_VAR_8BIT)
   #undef      WDG_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (WDG_STOP_SEC_VAR_8BIT)
   #undef      WDG_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (WDG_START_SEC_VAR_16BIT)
   #undef      WDG_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (WDG_STOP_SEC_VAR_16BIT)
   #undef      WDG_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (WDG_START_SEC_VAR_32BIT)
   #undef      WDG_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (WDG_STOP_SEC_VAR_32BIT)
   #undef      WDG_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (WDG_START_SEC_VAR_UNSPECIFIED)
   #undef      WDG_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (WDG_STOP_SEC_VAR_UNSPECIFIED)
   #undef      WDG_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (WDG_START_SEC_CONST_8BIT)
   #undef      WDG_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (WDG_STOP_SEC_CONST_8BIT)
   #undef      WDG_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (WDG_START_SEC_CONST_16BIT)
   #undef      WDG_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (WDG_STOP_SEC_CONST_16BIT)
   #undef      WDG_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (WDG_START_SEC_CONST_32BIT)
   #undef      WDG_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (WDG_STOP_SEC_CONST_32BIT)
   #undef      WDG_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (WDG_START_SEC_CONST_UNSPECIFIED)
   #undef      WDG_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (WDG_STOP_SEC_CONST_UNSPECIFIED)
   #undef      WDG_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 CANTRCV                                  **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (CANTRCV_START_SEC_CODE)
   #undef      CANTRCV_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (CANTRCV_STOP_SEC_CODE)
   #undef      CANTRCV_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (CANTRCV_START_SEC_VAR_NOINIT_8BIT)
   #undef      CANTRCV_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (CANTRCV_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      CANTRCV_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (CANTRCV_START_SEC_VAR_NOINIT_16BIT)
   #undef      CANTRCV_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (CANTRCV_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      CANTRCV_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (CANTRCV_START_SEC_VAR_NOINIT_32BIT)
   #undef      CANTRCV_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (CANTRCV_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      CANTRCV_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (CANTRCV_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CANTRCV_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (CANTRCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CANTRCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (CANTRCV_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CANTRCV_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (CANTRCV_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CANTRCV_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (CANTRCV_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CANTRCV_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (CANTRCV_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CANTRCV_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CANTRCV_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CANTRCV_START_SEC_VAR_FAST_8BIT)
   #undef      CANTRCV_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (CANTRCV_STOP_SEC_VAR_FAST_8BIT)
   #undef      CANTRCV_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CANTRCV_START_SEC_VAR_FAST_16BIT)
   #undef      CANTRCV_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (CANTRCV_STOP_SEC_VAR_FAST_16BIT)
   #undef      CANTRCV_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CANTRCV_START_SEC_VAR_FAST_32BIT)
   #undef      CANTRCV_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (CANTRCV_STOP_SEC_VAR_FAST_32BIT)
   #undef      CANTRCV_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (CANTRCV_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CANTRCV_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (CANTRCV_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CANTRCV_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CANTRCV_START_SEC_VAR_8BIT)
   #undef      CANTRCV_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (CANTRCV_STOP_SEC_VAR_8BIT)
   #undef      CANTRCV_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CANTRCV_START_SEC_VAR_16BIT)
   #undef      CANTRCV_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (CANTRCV_STOP_SEC_VAR_16BIT)
   #undef      CANTRCV_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CANTRCV_START_SEC_VAR_32BIT)
   #undef      CANTRCV_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (CANTRCV_STOP_SEC_VAR_32BIT)
   #undef      CANTRCV_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (CANTRCV_START_SEC_VAR_UNSPECIFIED)
   #undef      CANTRCV_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (CANTRCV_STOP_SEC_VAR_UNSPECIFIED)
   #undef      CANTRCV_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (CANTRCV_START_SEC_CONST_8BIT)
   #undef      CANTRCV_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (CANTRCV_STOP_SEC_CONST_8BIT)
   #undef      CANTRCV_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (CANTRCV_START_SEC_CONST_16BIT)
   #undef      CANTRCV_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (CANTRCV_STOP_SEC_CONST_16BIT)
   #undef      CANTRCV_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (CANTRCV_START_SEC_CONST_32BIT)
   #undef      CANTRCV_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (CANTRCV_STOP_SEC_CONST_32BIT)
   #undef      CANTRCV_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (CANTRCV_START_SEC_CONST_UNSPECIFIED)
   #undef      CANTRCV_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (CANTRCV_STOP_SEC_CONST_UNSPECIFIED)
   #undef      CANTRCV_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
/*****************************************************************************
**                                 MLI                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (MLI_START_SEC_CODE)
   #undef      MLI_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (MLI_STOP_SEC_CODE)
   #undef      MLI_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_8BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_16BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_32BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_8BIT)
   #undef      MLI_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_8BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_16BIT)
   #undef      MLI_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_16BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_32BIT)
   #undef      MLI_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_32BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_8BIT)
   #undef      MLI_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MLI_STOP_SEC_VAR_8BIT)
   #undef      MLI_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_16BIT)
   #undef      MLI_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MLI_STOP_SEC_VAR_16BIT)
   #undef      MLI_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_32BIT)
   #undef      MLI_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MLI_STOP_SEC_VAR_32BIT)
   #undef      MLI_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_8BIT)
   #undef      MLI_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MLI_STOP_SEC_CONST_8BIT)
   #undef      MLI_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_16BIT)
   #undef      MLI_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MLI_STOP_SEC_CONST_16BIT)
   #undef      MLI_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_32BIT)
   #undef      MLI_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MLI_STOP_SEC_CONST_32BIT)
   #undef      MLI_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MLI_START_SEC_CONST_UNSPECIFIED)
   #undef      MLI_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MLI_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MLI_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 MLI                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (MLI_START_SEC_CODE)
   #undef      MLI_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (MLI_STOP_SEC_CODE)
   #undef      MLI_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_8BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_16BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_32BIT)
   #undef      MLI_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MLI_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MLI_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (MLI_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (MLI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_8BIT)
   #undef      MLI_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_8BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_16BIT)
   #undef      MLI_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_16BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_32BIT)
   #undef      MLI_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MLI_STOP_SEC_VAR_FAST_32BIT)
   #undef      MLI_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MLI_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_8BIT)
   #undef      MLI_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MLI_STOP_SEC_VAR_8BIT)
   #undef      MLI_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_16BIT)
   #undef      MLI_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MLI_STOP_SEC_VAR_16BIT)
   #undef      MLI_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_32BIT)
   #undef      MLI_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MLI_STOP_SEC_VAR_32BIT)
   #undef      MLI_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (MLI_START_SEC_VAR_UNSPECIFIED)
   #undef      MLI_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MLI_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MLI_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_8BIT)
   #undef      MLI_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MLI_STOP_SEC_CONST_8BIT)
   #undef      MLI_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_16BIT)
   #undef      MLI_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MLI_STOP_SEC_CONST_16BIT)
   #undef      MLI_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MLI_START_SEC_CONST_32BIT)
   #undef      MLI_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MLI_STOP_SEC_CONST_32BIT)
   #undef      MLI_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MLI_START_SEC_CONST_UNSPECIFIED)
   #undef      MLI_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MLI_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MLI_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 FADC                                     **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FADC_START_SEC_CODE)
   #undef      FADC_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FADC_STOP_SEC_CODE)
   #undef      FADC_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (FADC_START_SEC_VAR_NOINIT_8BIT)
   #undef      FADC_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (FADC_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      FADC_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (FADC_START_SEC_VAR_NOINIT_16BIT)
   #undef      FADC_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (FADC_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      FADC_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (FADC_START_SEC_VAR_NOINIT_32BIT)
   #undef      FADC_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (FADC_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      FADC_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (FADC_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FADC_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (FADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (FADC_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FADC_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (FADC_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FADC_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FADC_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FADC_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (FADC_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FADC_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FADC_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FADC_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (FADC_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FADC_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (FADC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FADC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (FADC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FADC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FADC_START_SEC_VAR_FAST_8BIT)
   #undef      FADC_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (FADC_STOP_SEC_VAR_FAST_8BIT)
   #undef      FADC_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FADC_START_SEC_VAR_FAST_16BIT)
   #undef      FADC_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (FADC_STOP_SEC_VAR_FAST_16BIT)
   #undef      FADC_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FADC_START_SEC_VAR_FAST_32BIT)
   #undef      FADC_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (FADC_STOP_SEC_VAR_FAST_32BIT)
   #undef      FADC_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FADC_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FADC_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (FADC_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FADC_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FADC_START_SEC_VAR_8BIT)
   #undef      FADC_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (FADC_STOP_SEC_VAR_8BIT)
   #undef      FADC_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FADC_START_SEC_VAR_16BIT)
   #undef      FADC_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (FADC_STOP_SEC_VAR_16BIT)
   #undef      FADC_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FADC_START_SEC_VAR_32BIT)
   #undef      FADC_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (FADC_STOP_SEC_VAR_32BIT)
   #undef      FADC_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (FADC_START_SEC_VAR_UNSPECIFIED)
   #undef      FADC_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (FADC_STOP_SEC_VAR_UNSPECIFIED)
   #undef      FADC_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (FADC_START_SEC_CONST_8BIT)
   #undef      FADC_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (FADC_STOP_SEC_CONST_8BIT)
   #undef      FADC_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (FADC_START_SEC_CONST_16BIT)
   #undef      FADC_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (FADC_STOP_SEC_CONST_16BIT)
   #undef      FADC_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (FADC_START_SEC_CONST_32BIT)
   #undef      FADC_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (FADC_STOP_SEC_CONST_32BIT)
   #undef      FADC_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (FADC_START_SEC_CONST_UNSPECIFIED)
   #undef      FADC_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (FADC_STOP_SEC_CONST_UNSPECIFIED)
   #undef      FADC_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED


/*****************************************************************************
**                                 DMA                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (DMA_START_SEC_CODE)
   #undef      DMA_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (DMA_STOP_SEC_CODE)
   #undef      DMA_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (DMA_START_SEC_VAR_NOINIT_8BIT)
   #undef      DMA_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (DMA_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      DMA_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (DMA_START_SEC_VAR_NOINIT_16BIT)
   #undef      DMA_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (DMA_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      DMA_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (DMA_START_SEC_VAR_NOINIT_32BIT)
   #undef      DMA_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (DMA_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      DMA_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (DMA_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DMA_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (DMA_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DMA_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (DMA_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DMA_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (DMA_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DMA_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (DMA_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DMA_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (DMA_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DMA_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (DMA_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DMA_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (DMA_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DMA_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (DMA_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DMA_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (DMA_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DMA_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DMA_START_SEC_VAR_FAST_8BIT)
   #undef      DMA_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (DMA_STOP_SEC_VAR_FAST_8BIT)
   #undef      DMA_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DMA_START_SEC_VAR_FAST_16BIT)
   #undef      DMA_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (DMA_STOP_SEC_VAR_FAST_16BIT)
   #undef      DMA_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DMA_START_SEC_VAR_FAST_32BIT)
   #undef      DMA_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (DMA_STOP_SEC_VAR_FAST_32BIT)
   #undef      DMA_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (DMA_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DMA_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (DMA_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DMA_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DMA_START_SEC_VAR_8BIT)
   #undef      DMA_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (DMA_STOP_SEC_VAR_8BIT)
   #undef      DMA_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DMA_START_SEC_VAR_16BIT)
   #undef      DMA_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (DMA_STOP_SEC_VAR_16BIT)
   #undef      DMA_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (DMA_START_SEC_VAR_32BIT)
   #undef      DMA_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (DMA_STOP_SEC_VAR_32BIT)
   #undef      DMA_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (DMA_START_SEC_VAR_UNSPECIFIED)
   #undef      DMA_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (DMA_STOP_SEC_VAR_UNSPECIFIED)
   #undef      DMA_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (DMA_START_SEC_CONST_8BIT)
   #undef      DMA_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (DMA_STOP_SEC_CONST_8BIT)
   #undef      DMA_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (DMA_START_SEC_CONST_16BIT)
   #undef      DMA_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (DMA_STOP_SEC_CONST_16BIT)
   #undef      DMA_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (DMA_START_SEC_CONST_32BIT)
   #undef      DMA_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (DMA_STOP_SEC_CONST_32BIT)
   #undef      DMA_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (DMA_START_SEC_CONST_UNSPECIFIED)
   #undef      DMA_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (DMA_STOP_SEC_CONST_UNSPECIFIED)
   #undef      DMA_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
   
/* The Source and Destination pointers passed to the SPI are 
   handled by the DMA in the asynchronous mode. It is necesarry 
   that these variables fullfill the following addressing constarints.
   1. In case of transfer width > 8, the data type is 16bits. Therefore
      it is necesarry to have the source and destination pointers
      word aligned. (On a Even Boundary). Use of #pragma align 2 will
      ensure word alignment.
   2. DMA implements a Circular Buffer with a maximum width of 32KB.
      So the Src/Des Ptrs (Starting Address + Length Of data) should not 
      span the 32KB Boundary if Sequential data are to be transferred.
      The start address of this section must be selected so that the 
      variables donot exceed the 32KB boundary.
      [(DMA_Address & 0x00007FFFU) + Length <= 0x00008000U] 
      
   So it has to be ensured that the section "DMA_START_SEC_VAR_DMA_ACCESS" 
   fullfills the above stated criteria*/
#elif defined (DMA_START_SEC_VAR_DMA_ACCESS)
   #undef      DMA_START_SEC_VAR_DMA_ACCESS
/* In the Demo App supplied with AUTOSAR_MCAL2,
   the section:DEFAULT_START_SEC_VAR_FAST_16BIT is sufficient to satisfy the
   memory requirements for DMA. This may not be true for other applications and 
   the user should ensure this. */ 
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (DMA_STOP_SEC_VAR_DMA_ACCESS)
   #undef      DMA_STOP_SEC_VAR_DMA_ACCESS
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
   
/*****************************************************************************
**                                 MCHK                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
*/
#elif defined (MCHK_START_SEC_CODE)
   #undef      MCHK_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (MCHK_STOP_SEC_CODE)
   #undef      MCHK_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
*/
#elif defined (MCHK_START_SEC_VAR_NOINIT_8BIT)
   #undef      MCHK_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MCHK_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MCHK_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
*/
#elif defined (MCHK_START_SEC_VAR_NOINIT_16BIT)
   #undef      MCHK_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MCHK_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MCHK_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
*/
#elif defined (MCHK_START_SEC_VAR_NOINIT_32BIT)
   #undef      MCHK_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MCHK_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MCHK_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
*/
#elif defined (MCHK_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MCHK_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MCHK_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MCHK_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
*/
#elif defined (MCHK_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MCHK_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MCHK_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MCHK_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
*/
#elif defined (MCHK_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MCHK_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MCHK_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MCHK_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
*/
#elif defined (MCHK_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MCHK_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MCHK_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MCHK_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
*/
#elif defined (MCHK_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MCHK_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MCHK_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MCHK_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
*/ 
#elif defined (MCHK_START_SEC_VAR_FAST_8BIT)
   #undef      MCHK_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MCHK_STOP_SEC_VAR_FAST_8BIT)
   #undef      MCHK_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
*/ 
#elif defined (MCHK_START_SEC_VAR_FAST_16BIT)
   #undef      MCHK_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MCHK_STOP_SEC_VAR_FAST_16BIT)
   #undef      MCHK_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
*/ 
#elif defined (MCHK_START_SEC_VAR_FAST_32BIT)
   #undef      MCHK_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MCHK_STOP_SEC_VAR_FAST_32BIT)
   #undef      MCHK_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
*/ 
#elif defined (MCHK_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MCHK_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MCHK_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MCHK_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
*/

#elif defined (MCHK_START_SEC_VAR_8BIT)
   #undef      MCHK_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MCHK_STOP_SEC_VAR_8BIT)
   #undef      MCHK_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
*/

#elif defined (MCHK_START_SEC_VAR_16BIT)
   #undef      MCHK_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MCHK_STOP_SEC_VAR_16BIT)
   #undef      MCHK_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
*/

#elif defined (MCHK_START_SEC_VAR_32BIT)
   #undef      MCHK_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MCHK_STOP_SEC_VAR_32BIT)
   #undef      MCHK_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
*/

#elif defined (MCHK_START_SEC_VAR_UNSPECIFIED)
   #undef      MCHK_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MCHK_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MCHK_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
*/
#elif defined (MCHK_START_SEC_CONST_8BIT)
   #undef      MCHK_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MCHK_STOP_SEC_CONST_8BIT)
   #undef      MCHK_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
*/
#elif defined (MCHK_START_SEC_CONST_16BIT)
   #undef      MCHK_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MCHK_STOP_SEC_CONST_16BIT)
   #undef      MCHK_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
*/
#elif defined (MCHK_START_SEC_CONST_32BIT)
   #undef      MCHK_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MCHK_STOP_SEC_CONST_32BIT)
   #undef      MCHK_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
*/
#elif defined (MCHK_START_SEC_CONST_UNSPECIFIED)
   #undef      MCHK_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MCHK_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MCHK_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 FLS_LOADER                               **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FLS_LOADER_START_SEC_CODE)
   #undef      FLS_LOADER_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FLS_LOADER_STOP_SEC_CODE)
   #undef      FLS_LOADER_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
Fls_Write API : Section
*/
#elif defined (FLS_LOADER_START_SEC_WRITE_CODE)
   #undef      FLS_LOADER_START_SEC_WRITE_CODE
   #define     FLS_LOADER_START_WRITE_API
#elif defined (FLS_LOADER_STOP_SEC_WRITE_CODE)
   #undef      FLS_LOADER_STOP_SEC_WRITE_CODE
   #define     FLS_LOADER_STOP_WRITE_API
/*
Fls Erase API : Section
*/
#elif defined (FLS_LOADER_START_SEC_ERASE_CODE)
   #undef      FLS_LOADER_START_SEC_ERASE_CODE
   #define     FLS_LOADER_START_ERASE_API
#elif defined (FLS_LOADER_STOP_SEC_ERASE_CODE)
   #undef      FLS_LOADER_STOP_SEC_ERASE_CODE
   #define     FLS_LOADER_STOP_ERASE_API
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (FLS_LOADER_START_SEC_VAR_NOINIT_8BIT)
   #undef      FLS_LOADER_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (FLS_LOADER_START_SEC_VAR_NOINIT_16BIT)
   #undef      FLS_LOADER_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (FLS_LOADER_START_SEC_VAR_NOINIT_32BIT)
   #undef      FLS_LOADER_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (FLS_LOADER_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FLS_LOADER_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (FLS_LOADER_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FLS_LOADER_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FLS_LOADER_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FLS_LOADER_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_LOADER_START_SEC_VAR_FAST_8BIT)
   #undef      FLS_LOADER_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_FAST_8BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_LOADER_START_SEC_VAR_FAST_16BIT)
   #undef      FLS_LOADER_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_FAST_16BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_LOADER_START_SEC_VAR_FAST_32BIT)
   #undef      FLS_LOADER_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_FAST_32BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_LOADER_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FLS_LOADER_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (FLS_LOADER_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FLS_LOADER_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_LOADER_START_SEC_VAR_8BIT)
   #undef      FLS_LOADER_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_8BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_LOADER_START_SEC_VAR_16BIT)
   #undef      FLS_LOADER_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_16BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_LOADER_START_SEC_VAR_32BIT)
   #undef      FLS_LOADER_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (FLS_LOADER_STOP_SEC_VAR_32BIT)
   #undef      FLS_LOADER_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (FLS_LOADER_START_SEC_VAR_UNSPECIFIED)
   #undef      FLS_LOADER_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (FLS_LOADER_STOP_SEC_VAR_UNSPECIFIED)
   #undef      FLS_LOADER_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (FLS_LOADER_START_SEC_CONST_8BIT)
   #undef      FLS_LOADER_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (FLS_LOADER_STOP_SEC_CONST_8BIT)
   #undef      FLS_LOADER_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (FLS_LOADER_START_SEC_CONST_16BIT)
   #undef      FLS_LOADER_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (FLS_LOADER_STOP_SEC_CONST_16BIT)
   #undef      FLS_LOADER_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (FLS_LOADER_START_SEC_CONST_32BIT)
   #undef      FLS_LOADER_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (FLS_LOADER_STOP_SEC_CONST_32BIT)
   #undef      FLS_LOADER_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (FLS_LOADER_START_SEC_CONST_UNSPECIFIED)
   #undef      FLS_LOADER_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (FLS_LOADER_STOP_SEC_CONST_UNSPECIFIED)
   #undef      FLS_LOADER_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 IRQ                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (IRQ_START_SEC_CODE)
   #undef      IRQ_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (IRQ_STOP_SEC_CODE)
   #undef      IRQ_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (IRQ_START_SEC_VAR_NOINIT_8BIT)
   #undef      IRQ_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (IRQ_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      IRQ_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (IRQ_START_SEC_VAR_NOINIT_16BIT)
   #undef      IRQ_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (IRQ_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      IRQ_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (IRQ_START_SEC_VAR_NOINIT_32BIT)
   #undef      IRQ_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (IRQ_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      IRQ_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (IRQ_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IRQ_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (IRQ_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IRQ_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (IRQ_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IRQ_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (IRQ_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IRQ_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (IRQ_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IRQ_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (IRQ_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IRQ_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (IRQ_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IRQ_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (IRQ_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IRQ_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (IRQ_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IRQ_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (IRQ_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IRQ_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (IRQ_START_SEC_VAR_FAST_8BIT)
   #undef      IRQ_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (IRQ_STOP_SEC_VAR_FAST_8BIT)
   #undef      IRQ_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (IRQ_START_SEC_VAR_FAST_16BIT)
   #undef      IRQ_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (IRQ_STOP_SEC_VAR_FAST_16BIT)
   #undef      IRQ_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (IRQ_START_SEC_VAR_FAST_32BIT)
   #undef      IRQ_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (IRQ_STOP_SEC_VAR_FAST_32BIT)
   #undef      IRQ_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (IRQ_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IRQ_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (IRQ_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IRQ_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IRQ_START_SEC_VAR_8BIT)
   #undef      IRQ_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (IRQ_STOP_SEC_VAR_8BIT)
   #undef      IRQ_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IRQ_START_SEC_VAR_16BIT)
   #undef      IRQ_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (IRQ_STOP_SEC_VAR_16BIT)
   #undef      IRQ_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IRQ_START_SEC_VAR_32BIT)
   #undef      IRQ_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (IRQ_STOP_SEC_VAR_32BIT)
   #undef      IRQ_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (IRQ_START_SEC_VAR_UNSPECIFIED)
   #undef      IRQ_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (IRQ_STOP_SEC_VAR_UNSPECIFIED)
   #undef      IRQ_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (IRQ_START_SEC_CONST_8BIT)
   #undef      IRQ_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (IRQ_STOP_SEC_CONST_8BIT)
   #undef      IRQ_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (IRQ_START_SEC_CONST_16BIT)
   #undef      IRQ_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (IRQ_STOP_SEC_CONST_16BIT)
   #undef      IRQ_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (IRQ_START_SEC_CONST_32BIT)
   #undef      IRQ_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (IRQ_STOP_SEC_CONST_32BIT)
   #undef      IRQ_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (IRQ_START_SEC_CONST_UNSPECIFIED)
   #undef      IRQ_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (IRQ_STOP_SEC_CONST_UNSPECIFIED)
   #undef      IRQ_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED   
/*****************************************************************************
**                                 FEE                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */


/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FEE_START_SEC_CODE)
   #undef      FEE_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FEE_STOP_SEC_CODE)
   #undef      FEE_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (FEE_START_SEC_VAR_NOINIT_8BIT)
   #undef      FEE_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (FEE_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      FEE_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (FEE_START_SEC_VAR_NOINIT_16BIT)
   #undef      FEE_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (FEE_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      FEE_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (FEE_START_SEC_VAR_NOINIT_32BIT)
   #undef      FEE_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (FEE_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      FEE_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (FEE_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (FEE_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FEE_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (FEE_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FEE_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FEE_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FEE_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (FEE_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FEE_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FEE_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FEE_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (FEE_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FEE_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (FEE_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FEE_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (FEE_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FEE_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FEE_START_SEC_VAR_FAST_8BIT)
   #undef      FEE_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (FEE_STOP_SEC_VAR_FAST_8BIT)
   #undef      FEE_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FEE_START_SEC_VAR_FAST_16BIT)
   #undef      FEE_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (FEE_STOP_SEC_VAR_FAST_16BIT)
   #undef      FEE_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FEE_START_SEC_VAR_FAST_32BIT)
   #undef      FEE_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (FEE_STOP_SEC_VAR_FAST_32BIT)
   #undef      FEE_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FEE_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FEE_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (FEE_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FEE_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FEE_START_SEC_VAR_8BIT)
   #undef      FEE_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (FEE_STOP_SEC_VAR_8BIT)
   #undef      FEE_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FEE_START_SEC_VAR_16BIT)
   #undef      FEE_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (FEE_STOP_SEC_VAR_16BIT)
   #undef      FEE_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FEE_START_SEC_VAR_32BIT)
   #undef      FEE_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (FEE_STOP_SEC_VAR_32BIT)
   #undef      FEE_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT

#elif defined (FEE_START_SEC_SPL_VAR_32BIT)
   #undef      FEE_START_SEC_SPL_VAR_32BIT
   #define FEE_START_CONFIG
#elif defined (FEE_STOP_SEC_SPL_VAR_32BIT)
   #undef      FEE_STOP_SEC_SPL_VAR_32BIT
   #define FEE_STOP_CONFIG
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (FEE_START_SEC_VAR_UNSPECIFIED)
   #undef      FEE_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (FEE_STOP_SEC_VAR_UNSPECIFIED)
   #undef      FEE_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (FEE_START_SEC_CONST_8BIT)
   #undef      FEE_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (FEE_STOP_SEC_CONST_8BIT)
   #undef      FEE_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (FEE_START_SEC_CONST_16BIT)
   #undef      FEE_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (FEE_STOP_SEC_CONST_16BIT)
   #undef      FEE_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (FEE_START_SEC_CONST_32BIT)
   #undef      FEE_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (FEE_STOP_SEC_CONST_32BIT)
   #undef      FEE_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (FEE_START_SEC_CONST_UNSPECIFIED)
   #undef      FEE_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (FEE_STOP_SEC_CONST_UNSPECIFIED)
   #undef      FEE_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*
 * To be used for global or static vars alignnment to 16 bit boundary
 *
 */
#elif defined (FEE_START_VAR_ALIGN_16_BIT)
   #undef      FEE_START_VAR_ALIGN_16_BIT
   #define DEFAULT_START_VAR_ALIGN_16_BIT
#elif defined (FEE_STOP_VAR_ALIGN_16_BIT)
   #undef      FEE_STOP_VAR_ALIGN_16_BIT
   #define DEFAULT_STOP_VAR_ALIGN_16_BIT

/*
 * To be used for global or static vars packing 
 *
 */
#elif defined (FEE_START_VAR_PACK_2)
   #undef      FEE_START_VAR_PACK_2
   #define DEFAULT_START_VAR_PACK_2
#elif defined (FEE_STOP_VAR_PACK_2)
   #undef      FEE_STOP_VAR_PACK_2
   #define DEFAULT_STOP_VAR_PACK_2
 

/*****************************************************************************
**                                 NVM                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */


/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (NVM_START_SEC_CODE)
   #undef      NVM_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (NVM_STOP_SEC_CODE)
   #undef      NVM_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (NVM_START_SEC_VAR_NOINIT_8BIT)
   #undef      NVM_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (NVM_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      NVM_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (NVM_START_SEC_VAR_NOINIT_16BIT)
   #undef      NVM_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (NVM_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      NVM_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (NVM_START_SEC_VAR_NOINIT_32BIT)
   #undef      NVM_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (NVM_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      NVM_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (NVM_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (NVM_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      NVM_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (NVM_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      NVM_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (NVM_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      NVM_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (NVM_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      NVM_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (NVM_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      NVM_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (NVM_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      NVM_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (NVM_START_SEC_VAR_FAST_8BIT)
   #undef      NVM_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (NVM_STOP_SEC_VAR_FAST_8BIT)
   #undef      NVM_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (NVM_START_SEC_VAR_FAST_16BIT)
   #undef      NVM_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (NVM_STOP_SEC_VAR_FAST_16BIT)
   #undef      NVM_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (NVM_START_SEC_VAR_FAST_32BIT)
   #undef      NVM_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (NVM_STOP_SEC_VAR_FAST_32BIT)
   #undef      NVM_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (NVM_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      NVM_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (NVM_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      NVM_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (NVM_START_SEC_VAR_8BIT)
   #undef      NVM_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (NVM_STOP_SEC_VAR_8BIT)
   #undef      NVM_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (NVM_START_SEC_VAR_16BIT)
   #undef      NVM_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (NVM_STOP_SEC_VAR_16BIT)
   #undef      NVM_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (NVM_START_SEC_VAR_32BIT)
   #undef      NVM_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (NVM_STOP_SEC_VAR_32BIT)
   #undef      NVM_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT

#elif defined (NVM_START_SEC_SPL_VAR_32BIT)
   #undef      NVM_START_SEC_SPL_VAR_32BIT
   #define NVM_START_CONFIG
#elif defined (NVM_STOP_SEC_SPL_VAR_32BIT)
   #undef      NVM_STOP_SEC_SPL_VAR_32BIT
   #define NVM_STOP_CONFIG
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (NVM_START_SEC_VAR_UNSPECIFIED)
   #undef      NVM_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (NVM_STOP_SEC_VAR_UNSPECIFIED)
   #undef      NVM_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (NVM_START_SEC_CONST_8BIT)
   #undef      NVM_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (NVM_STOP_SEC_CONST_8BIT)
   #undef      NVM_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (NVM_START_SEC_CONST_16BIT)
   #undef      NVM_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (NVM_STOP_SEC_CONST_16BIT)
   #undef      NVM_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (NVM_START_SEC_CONST_32BIT)
   #undef      NVM_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (NVM_STOP_SEC_CONST_32BIT)
   #undef      NVM_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (NVM_START_SEC_CONST_UNSPECIFIED)
   #undef      NVM_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (NVM_STOP_SEC_CONST_UNSPECIFIED)
   #undef      NVM_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*
 * To be used for global or static vars alignnment to 16 bit boundary
 *
 */
#elif defined (NVM_START_VAR_ALIGN_16_BIT)
   #undef      NVM_START_VAR_ALIGN_16_BIT
   #define DEFAULT_START_VAR_ALIGN_16_BIT
#elif defined (NVM_STOP_VAR_ALIGN_16_BIT)
   #undef      NVM_STOP_VAR_ALIGN_16_BIT
   #define DEFAULT_STOP_VAR_ALIGN_16_BIT

/*
 * To be used for global or static vars packing 
 *
 */
#elif defined (NVM_START_VAR_PACK_2)
   #undef      NVM_START_VAR_PACK_2
   #define DEFAULT_START_VAR_PACK_2
#elif defined (NVM_STOP_VAR_PACK_2)
   #undef      NVM_STOP_VAR_PACK_2
   #define DEFAULT_STOP_VAR_PACK_2

   
   
   
/*****************************************************************************
**                                 FLS                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */


/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FLS_START_SEC_CODE)
   #undef      FLS_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FLS_STOP_SEC_CODE)
   #undef      FLS_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE


/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FLS_START_SPL_SEC_CODE_CMDWRITE)
   #undef      FLS_START_SPL_SEC_CODE_CMDWRITE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FLS_STOP_SPL_SEC_CODE_CMDWRITE)
   #undef      FLS_STOP_SPL_SEC_CODE_CMDWRITE
   #define DEFAULT_STOP_SEC_CODE

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FLS_START_SEC_CODE)
   #undef      FLS_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FLS_STOP_SEC_CODE)
   #undef      FLS_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (FLS_START_SEC_CODE)
   #undef      FLS_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (FLS_STOP_SEC_CODE)
   #undef      FLS_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE

/* 
 * To be used for mapping FLS Write and Erase API's to user defined address 
 * external flash etc 
 */
#elif defined (FLS_START_SEC_SPL_CODE_WRITECMD_BEGIN)
   #undef      FLS_START_SEC_SPL_CODE_WRITECMD_BEGIN
   #define   FLS_START_SEC_SPL_CODE_WRITECMD_BEGIN_API
#elif defined (FLS_STOP_SEC_SPL_CODE_WRITECMD_BEGIN)
   #undef      FLS_STOP_SEC_SPL_CODE_WRITECMD_BEGIN
   #define   FLS_STOP_SEC_SPL_CODE_WRITECMD_BEGIN_API

#elif defined (FLS_START_SEC_SPL_CODE_WRITECMD_END)
   #undef      FLS_START_SEC_SPL_CODE_WRITECMD_END
   #define   FLS_START_SEC_SPL_CODE_WRITECMD_END_API
#elif defined (FLS_STOP_SEC_SPL_CODE_WRITECMD_END)
   #undef      FLS_STOP_SEC_SPL_CODE_WRITECMD_END
   #define   FLS_STOP_SEC_SPL_CODE_WRITECMD_END_API

#elif defined (FLS_START_SEC_SPL_CODE_ERASECMD_BEGIN)
   #undef      FLS_START_SEC_SPL_CODE_ERASECMD_BEGIN
   #define   FLS_START_SEC_SPL_CODE_ERASECMD_BEGIN_API
#elif defined (FLS_STOP_SEC_SPL_CODE_ERASECMD_BEGIN)
   #undef      FLS_STOP_SEC_SPL_CODE_ERASECMD_BEGIN
   #define   FLS_STOP_SEC_SPL_CODE_ERASECMD_BEGIN_API

#elif defined (FLS_START_SEC_SPL_CODE_ERASECMD_END)
   #undef      FLS_START_SEC_SPL_CODE_ERASECMD_END
   #define   FLS_START_SEC_SPL_CODE_ERASECMD_END_API
#elif defined (FLS_STOP_SEC_SPL_CODE_ERASECMD_END)
   #undef      FLS_STOP_SEC_SPL_CODE_ERASECMD_END
   #define   FLS_STOP_SEC_SPL_CODE_ERASECMD_END_API
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (FLS_START_SEC_VAR_NOINIT_8BIT)
   #undef      FLS_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (FLS_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      FLS_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (FLS_START_SEC_VAR_NOINIT_16BIT)
   #undef      FLS_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (FLS_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      FLS_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (FLS_START_SEC_VAR_NOINIT_32BIT)
   #undef      FLS_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (FLS_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      FLS_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (FLS_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (FLS_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FLS_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (FLS_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      FLS_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FLS_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FLS_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (FLS_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      FLS_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (FLS_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FLS_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (FLS_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      FLS_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (FLS_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FLS_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (FLS_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      FLS_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_START_SEC_VAR_FAST_8BIT)
   #undef      FLS_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (FLS_STOP_SEC_VAR_FAST_8BIT)
   #undef      FLS_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_START_SEC_VAR_FAST_16BIT)
   #undef      FLS_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (FLS_STOP_SEC_VAR_FAST_16BIT)
   #undef      FLS_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_START_SEC_VAR_FAST_32BIT)
   #undef      FLS_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (FLS_STOP_SEC_VAR_FAST_32BIT)
   #undef      FLS_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (FLS_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FLS_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (FLS_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      FLS_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_START_SEC_VAR_8BIT)
   #undef      FLS_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (FLS_STOP_SEC_VAR_8BIT)
   #undef      FLS_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_START_SEC_VAR_16BIT)
   #undef      FLS_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (FLS_STOP_SEC_VAR_16BIT)
   #undef      FLS_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (FLS_START_SEC_VAR_32BIT)
   #undef      FLS_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (FLS_STOP_SEC_VAR_32BIT)
   #undef      FLS_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT

#elif defined (FLS_START_SEC_SPL_VAR_32BIT)
   #undef      FLS_START_SEC_SPL_VAR_32BIT
   #define FLS_START_CONFIG
#elif defined (FLS_STOP_SEC_SPL_VAR_32BIT)
   #undef      FLS_STOP_SEC_SPL_VAR_32BIT
   #define FLS_STOP_CONFIG
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (FLS_START_SEC_VAR_UNSPECIFIED)
   #undef      FLS_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (FLS_STOP_SEC_VAR_UNSPECIFIED)
   #undef      FLS_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (FLS_START_SEC_CONST_8BIT)
   #undef      FLS_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (FLS_STOP_SEC_CONST_8BIT)
   #undef      FLS_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (FLS_START_SEC_CONST_16BIT)
   #undef      FLS_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (FLS_STOP_SEC_CONST_16BIT)
   #undef      FLS_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (FLS_START_SEC_CONST_32BIT)
   #undef      FLS_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (FLS_STOP_SEC_CONST_32BIT)
   #undef      FLS_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (FLS_START_SEC_CONST_UNSPECIFIED)
   #undef      FLS_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (FLS_STOP_SEC_CONST_UNSPECIFIED)
   #undef      FLS_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
/*
 * To be used for global or static vars alignnment to 16 bit boundary
 *
 */
#elif defined (FLS_START_VAR_ALIGN_16_BIT)
   #undef      FLS_START_VAR_ALIGN_16_BIT
   #define DEFAULT_START_VAR_ALIGN_16_BIT
#elif defined (FLS_STOP_VAR_ALIGN_16_BIT)
   #undef      FLS_STOP_VAR_ALIGN_16_BIT
   #define DEFAULT_STOP_VAR_ALIGN_16_BIT

/*****************************************************************************
**                                 ERU                                     **
**  Module specific to TC1766 implementation                                **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (ERU_START_SEC_CODE)
   #undef      ERU_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (ERU_STOP_SEC_CODE)
   #undef      ERU_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (ERU_START_SEC_VAR_NOINIT_8BIT)
   #undef      ERU_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (ERU_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      ERU_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (ERU_START_SEC_VAR_NOINIT_16BIT)
   #undef      ERU_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (ERU_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      ERU_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (ERU_START_SEC_VAR_NOINIT_32BIT)
   #undef      ERU_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (ERU_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      ERU_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified) that are never 
 * initialized 
 */
#elif defined (ERU_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ERU_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (ERU_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      ERU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (ERU_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ERU_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (ERU_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      ERU_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ERU_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ERU_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (ERU_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      ERU_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (ERU_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ERU_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (ERU_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      ERU_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecified size) 
 * that are initialized only after power on reset
 */
#elif defined (ERU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ERU_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (ERU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      ERU_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ERU_START_SEC_VAR_FAST_8BIT)
   #undef      ERU_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (ERU_STOP_SEC_VAR_FAST_8BIT)
   #undef      ERU_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ERU_START_SEC_VAR_FAST_16BIT)
   #undef      ERU_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (ERU_STOP_SEC_VAR_FAST_16BIT)
   #undef      ERU_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ERU_START_SEC_VAR_FAST_32BIT)
   #undef      ERU_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (ERU_STOP_SEC_VAR_FAST_32BIT)
   #undef      ERU_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecified size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (ERU_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ERU_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (ERU_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      ERU_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ERU_START_SEC_VAR_8BIT)
   #undef      ERU_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (ERU_STOP_SEC_VAR_8BIT)
   #undef      ERU_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ERU_START_SEC_VAR_16BIT)
   #undef      ERU_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (ERU_STOP_SEC_VAR_16BIT)
   #undef      ERU_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (ERU_START_SEC_VAR_32BIT)
   #undef      ERU_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (ERU_STOP_SEC_VAR_32BIT)
   #undef      ERU_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecified size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (ERU_START_SEC_VAR_UNSPECIFIED)
   #undef      ERU_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (ERU_STOP_SEC_VAR_UNSPECIFIED)
   #undef      ERU_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (ERU_START_SEC_CONST_8BIT)
   #undef      ERU_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (ERU_STOP_SEC_CONST_8BIT)
   #undef      ERU_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (ERU_START_SEC_CONST_16BIT)
   #undef      ERU_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (ERU_STOP_SEC_CONST_16BIT)
   #undef      ERU_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (ERU_START_SEC_CONST_32BIT)
   #undef      ERU_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (ERU_STOP_SEC_CONST_32BIT)
   #undef      ERU_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (ERU_START_SEC_CONST_UNSPECIFIED)
   #undef      ERU_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (ERU_STOP_SEC_CONST_UNSPECIFIED)
   #undef      ERU_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 SCI                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (SCI_START_SEC_CODE)
   #undef      SCI_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (SCI_STOP_SEC_CODE)
   #undef      SCI_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (SCI_START_SEC_VAR_NOINIT_8BIT)
   #undef      SCI_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (SCI_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      SCI_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (SCI_START_SEC_VAR_NOINIT_16BIT)
   #undef      SCI_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (SCI_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      SCI_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (SCI_START_SEC_VAR_NOINIT_32BIT)
   #undef      SCI_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (SCI_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      SCI_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (SCI_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      SCI_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (SCI_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      SCI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (SCI_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      SCI_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (SCI_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      SCI_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (SCI_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      SCI_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (SCI_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      SCI_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (SCI_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      SCI_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (SCI_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      SCI_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (SCI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      SCI_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (SCI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      SCI_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SCI_START_SEC_VAR_FAST_8BIT)
   #undef      SCI_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (SCI_STOP_SEC_VAR_FAST_8BIT)
   #undef      SCI_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SCI_START_SEC_VAR_FAST_16BIT)
   #undef      SCI_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (SCI_STOP_SEC_VAR_FAST_16BIT)
   #undef      SCI_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SCI_START_SEC_VAR_FAST_32BIT)
   #undef      SCI_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (SCI_STOP_SEC_VAR_FAST_32BIT)
   #undef      SCI_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (SCI_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      SCI_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (SCI_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      SCI_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SCI_START_SEC_VAR_8BIT)
   #undef      SCI_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (SCI_STOP_SEC_VAR_8BIT)
   #undef      SCI_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SCI_START_SEC_VAR_16BIT)
   #undef      SCI_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (SCI_STOP_SEC_VAR_16BIT)
   #undef      SCI_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (SCI_START_SEC_VAR_32BIT)
   #undef      SCI_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (SCI_STOP_SEC_VAR_32BIT)
   #undef      SCI_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (SCI_START_SEC_VAR_UNSPECIFIED)
   #undef      SCI_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (SCI_STOP_SEC_VAR_UNSPECIFIED)
   #undef      SCI_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (SCI_START_SEC_CONST_8BIT)
   #undef      SCI_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (SCI_STOP_SEC_CONST_8BIT)
   #undef      SCI_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (SCI_START_SEC_CONST_16BIT)
   #undef      SCI_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (SCI_STOP_SEC_CONST_16BIT)
   #undef      SCI_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (SCI_START_SEC_CONST_32BIT)
   #undef      SCI_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (SCI_STOP_SEC_CONST_32BIT)
   #undef      SCI_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (SCI_START_SEC_CONST_UNSPECIFIED)
   #undef      SCI_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (SCI_STOP_SEC_CONST_UNSPECIFIED)
   #undef      SCI_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

   
/*****************************************************************************
**                                 MSC                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (MSC_START_SEC_CODE)
   #undef      MSC_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (MSC_STOP_SEC_CODE)
   #undef      MSC_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (MSC_START_SEC_VAR_NOINIT_8BIT)
   #undef      MSC_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MSC_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MSC_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (MSC_START_SEC_VAR_NOINIT_16BIT)
   #undef      MSC_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MSC_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MSC_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (MSC_START_SEC_VAR_NOINIT_32BIT)
   #undef      MSC_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MSC_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MSC_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (MSC_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MSC_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MSC_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MSC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MSC_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MSC_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MSC_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MSC_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MSC_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MSC_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MSC_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MSC_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (MSC_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MSC_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MSC_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MSC_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (MSC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MSC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MSC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MSC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MSC_START_SEC_VAR_FAST_8BIT)
   #undef      MSC_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MSC_STOP_SEC_VAR_FAST_8BIT)
   #undef      MSC_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MSC_START_SEC_VAR_FAST_16BIT)
   #undef      MSC_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MSC_STOP_SEC_VAR_FAST_16BIT)
   #undef      MSC_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MSC_START_SEC_VAR_FAST_32BIT)
   #undef      MSC_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MSC_STOP_SEC_VAR_FAST_32BIT)
   #undef      MSC_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (MSC_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MSC_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MSC_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MSC_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MSC_START_SEC_VAR_8BIT)
   #undef      MSC_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MSC_STOP_SEC_VAR_8BIT)
   #undef      MSC_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MSC_START_SEC_VAR_16BIT)
   #undef      MSC_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MSC_STOP_SEC_VAR_16BIT)
   #undef      MSC_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MSC_START_SEC_VAR_32BIT)
   #undef      MSC_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MSC_STOP_SEC_VAR_32BIT)
   #undef      MSC_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (MSC_START_SEC_VAR_UNSPECIFIED)
   #undef      MSC_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MSC_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MSC_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MSC_START_SEC_CONST_8BIT)
   #undef      MSC_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MSC_STOP_SEC_CONST_8BIT)
   #undef      MSC_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MSC_START_SEC_CONST_16BIT)
   #undef      MSC_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MSC_STOP_SEC_CONST_16BIT)
   #undef      MSC_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MSC_START_SEC_CONST_32BIT)
   #undef      MSC_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MSC_STOP_SEC_CONST_32BIT)
   #undef      MSC_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MSC_START_SEC_CONST_UNSPECIFIED)
   #undef      MSC_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MSC_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MSC_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 LIN                                      **
******************************************************************************/

/* 
 * To be used for mapping code to application block, boot block, 
 * external flash etc 
 */
#elif defined (LIN_START_SEC_CODE)
   #undef      LIN_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE 
#elif defined (LIN_STOP_SEC_CODE)
   #undef      LIN_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/* 
 * To be used for all global or static variables (8 bits) that are never 
 * initialized 
 */
#elif defined (LIN_START_SEC_VAR_NOINIT_8BIT)
   #undef      LIN_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (LIN_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      LIN_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/* 
 * To be used for all global or static variables (16 bits) that are never 
 * initialized 
 */
#elif defined (LIN_START_SEC_VAR_NOINIT_16BIT)
   #undef      LIN_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (LIN_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      LIN_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/* 
 * To be used for all global or static variables (32 bits) that are never 
 * initialized 
 */
#elif defined (LIN_START_SEC_VAR_NOINIT_32BIT)
   #undef      LIN_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (LIN_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      LIN_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/* 
 * To be used for all global or static variables (unspecified size ) 
 * that are never  initialized. 
 */
#elif defined (LIN_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      LIN_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (LIN_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      LIN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (LIN_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      LIN_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (LIN_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      LIN_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are 
 * initialized only after power on reset
 */
#elif defined (LIN_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      LIN_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (LIN_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      LIN_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are 
 * initialized only after power on reset
 */
#elif defined (LIN_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      LIN_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (LIN_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      LIN_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size) 
 * that are initialized only after power on reset
 */
#elif defined (LIN_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      LIN_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (LIN_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      LIN_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (LIN_START_SEC_VAR_FAST_8BIT)
   #undef      LIN_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (LIN_STOP_SEC_VAR_FAST_8BIT)
   #undef      LIN_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (LIN_START_SEC_VAR_FAST_16BIT)
   #undef      LIN_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (LIN_STOP_SEC_VAR_FAST_16BIT)
   #undef      LIN_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (LIN_START_SEC_VAR_FAST_32BIT)
   #undef      LIN_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (LIN_STOP_SEC_VAR_FAST_32BIT)
   #undef      LIN_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */ 
#elif defined (LIN_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      LIN_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (LIN_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      LIN_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (LIN_START_SEC_VAR_8BIT)
   #undef      LIN_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (LIN_STOP_SEC_VAR_8BIT)
   #undef      LIN_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (LIN_START_SEC_VAR_16BIT)
   #undef      LIN_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (LIN_STOP_SEC_VAR_16BIT)
   #undef      LIN_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (LIN_START_SEC_VAR_32BIT)
   #undef      LIN_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (LIN_STOP_SEC_VAR_32BIT)
   #undef      LIN_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are 
 * initialized after every reset (the normal case)
 */

#elif defined (LIN_START_SEC_VAR_UNSPECIFIED)
   #undef      LIN_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (LIN_STOP_SEC_VAR_UNSPECIFIED)
   #undef      LIN_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (LIN_START_SEC_CONST_8BIT)
   #undef      LIN_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (LIN_STOP_SEC_CONST_8BIT)
   #undef      LIN_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (LIN_START_SEC_CONST_16BIT)
   #undef      LIN_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (LIN_STOP_SEC_CONST_16BIT)
   #undef      LIN_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (LIN_START_SEC_CONST_32BIT)
   #undef      LIN_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (LIN_STOP_SEC_CONST_32BIT)
   #undef      LIN_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (LIN_START_SEC_CONST_UNSPECIFIED)
   #undef      LIN_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (LIN_STOP_SEC_CONST_UNSPECIFIED)
   #undef      LIN_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
   
/*****************************************************************************
**                                 ECUM                                     **
******************************************************************************/

#elif defined (ECUM_START_SEC_VAR_32BIT)
   #undef      ECUM_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (ECUM_STOP_SEC_VAR_32BIT)
   #undef      ECUM_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT

/*****************************************************************************
**                                 MFX                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (MFX_START_SEC_CODE)
   #undef      MFX_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (MFX_STOP_SEC_CODE)
   #undef      MFX_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (MFX_START_SEC_VAR_NOINIT_8BIT)
   #undef      MFX_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MFX_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MFX_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (MFX_START_SEC_VAR_NOINIT_16BIT)
   #undef      MFX_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MFX_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MFX_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (MFX_START_SEC_VAR_NOINIT_32BIT)
   #undef      MFX_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MFX_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MFX_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (MFX_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MFX_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MFX_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MFX_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (MFX_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MFX_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (MFX_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MFX_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (MFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFX_START_SEC_VAR_FAST_8BIT)
   #undef      MFX_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MFX_STOP_SEC_VAR_FAST_8BIT)
   #undef      MFX_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFX_START_SEC_VAR_FAST_16BIT)
   #undef      MFX_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MFX_STOP_SEC_VAR_FAST_16BIT)
   #undef      MFX_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFX_START_SEC_VAR_FAST_32BIT)
   #undef      MFX_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MFX_STOP_SEC_VAR_FAST_32BIT)
   #undef      MFX_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFX_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MFX_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MFX_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MFX_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFX_START_SEC_VAR_8BIT)
   #undef      MFX_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MFX_STOP_SEC_VAR_8BIT)
   #undef      MFX_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFX_START_SEC_VAR_16BIT)
   #undef      MFX_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MFX_STOP_SEC_VAR_16BIT)
   #undef      MFX_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFX_START_SEC_VAR_32BIT)
   #undef      MFX_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MFX_STOP_SEC_VAR_32BIT)
   #undef      MFX_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (MFX_START_SEC_VAR_UNSPECIFIED)
   #undef      MFX_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MFX_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MFX_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MFX_START_SEC_CONST_8BIT)
   #undef      MFX_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MFX_STOP_SEC_CONST_8BIT)
   #undef      MFX_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MFX_START_SEC_CONST_16BIT)
   #undef      MFX_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MFX_STOP_SEC_CONST_16BIT)
   #undef      MFX_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MFX_START_SEC_CONST_32BIT)
   #undef      MFX_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MFX_STOP_SEC_CONST_32BIT)
   #undef      MFX_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MFX_START_SEC_CONST_UNSPECIFIED)
   #undef      MFX_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MFX_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MFX_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 MFL                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (MFL_START_SEC_CODE)
   #undef      MFL_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (MFL_STOP_SEC_CODE)
   #undef      MFL_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (MFL_START_SEC_VAR_NOINIT_8BIT)
   #undef      MFL_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (MFL_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      MFL_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (MFL_START_SEC_VAR_NOINIT_16BIT)
   #undef      MFL_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (MFL_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      MFL_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (MFL_START_SEC_VAR_NOINIT_32BIT)
   #undef      MFL_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (MFL_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      MFL_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (MFL_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MFL_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (MFL_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      MFL_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (MFL_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MFL_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (MFL_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      MFL_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (MFL_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MFL_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (MFL_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      MFL_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (MFL_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MFL_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (MFL_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      MFL_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (MFL_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MFL_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (MFL_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      MFL_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFL_START_SEC_VAR_FAST_8BIT)
   #undef      MFL_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (MFL_STOP_SEC_VAR_FAST_8BIT)
   #undef      MFL_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFL_START_SEC_VAR_FAST_16BIT)
   #undef      MFL_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (MFL_STOP_SEC_VAR_FAST_16BIT)
   #undef      MFL_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFL_START_SEC_VAR_FAST_32BIT)
   #undef      MFL_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (MFL_STOP_SEC_VAR_FAST_32BIT)
   #undef      MFL_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (MFL_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MFL_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (MFL_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      MFL_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFL_START_SEC_VAR_8BIT)
   #undef      MFL_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (MFL_STOP_SEC_VAR_8BIT)
   #undef      MFL_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFL_START_SEC_VAR_16BIT)
   #undef      MFL_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (MFL_STOP_SEC_VAR_16BIT)
   #undef      MFL_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (MFL_START_SEC_VAR_32BIT)
   #undef      MFL_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (MFL_STOP_SEC_VAR_32BIT)
   #undef      MFL_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (MFL_START_SEC_VAR_UNSPECIFIED)
   #undef      MFL_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (MFL_STOP_SEC_VAR_UNSPECIFIED)
   #undef      MFL_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (MFL_START_SEC_CONST_8BIT)
   #undef      MFL_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (MFL_STOP_SEC_CONST_8BIT)
   #undef      MFL_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (MFL_START_SEC_CONST_16BIT)
   #undef      MFL_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (MFL_STOP_SEC_CONST_16BIT)
   #undef      MFL_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (MFL_START_SEC_CONST_32BIT)
   #undef      MFL_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (MFL_STOP_SEC_CONST_32BIT)
   #undef      MFL_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (MFL_START_SEC_CONST_UNSPECIFIED)
   #undef      MFL_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (MFL_STOP_SEC_CONST_UNSPECIFIED)
   #undef      MFL_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 IFX                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (IFX_START_SEC_CODE)
   #undef      IFX_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (IFX_STOP_SEC_CODE)
   #undef      IFX_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (IFX_START_SEC_VAR_NOINIT_8BIT)
   #undef      IFX_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (IFX_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      IFX_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (IFX_START_SEC_VAR_NOINIT_16BIT)
   #undef      IFX_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (IFX_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      IFX_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (IFX_START_SEC_VAR_NOINIT_32BIT)
   #undef      IFX_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (IFX_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      IFX_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (IFX_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IFX_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (IFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (IFX_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IFX_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (IFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (IFX_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IFX_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (IFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (IFX_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IFX_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (IFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (IFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (IFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFX_START_SEC_VAR_FAST_8BIT)
   #undef      IFX_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (IFX_STOP_SEC_VAR_FAST_8BIT)
   #undef      IFX_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFX_START_SEC_VAR_FAST_16BIT)
   #undef      IFX_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (IFX_STOP_SEC_VAR_FAST_16BIT)
   #undef      IFX_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFX_START_SEC_VAR_FAST_32BIT)
   #undef      IFX_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (IFX_STOP_SEC_VAR_FAST_32BIT)
   #undef      IFX_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFX_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IFX_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (IFX_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IFX_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFX_START_SEC_VAR_8BIT)
   #undef      IFX_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (IFX_STOP_SEC_VAR_8BIT)
   #undef      IFX_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFX_START_SEC_VAR_16BIT)
   #undef      IFX_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (IFX_STOP_SEC_VAR_16BIT)
   #undef      IFX_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFX_START_SEC_VAR_32BIT)
   #undef      IFX_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (IFX_STOP_SEC_VAR_32BIT)
   #undef      IFX_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (IFX_START_SEC_VAR_UNSPECIFIED)
   #undef      IFX_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (IFX_STOP_SEC_VAR_UNSPECIFIED)
   #undef      IFX_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (IFX_START_SEC_CONST_8BIT)
   #undef      IFX_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (IFX_STOP_SEC_CONST_8BIT)
   #undef      IFX_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (IFX_START_SEC_CONST_16BIT)
   #undef      IFX_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (IFX_STOP_SEC_CONST_16BIT)
   #undef      IFX_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (IFX_START_SEC_CONST_32BIT)
   #undef      IFX_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (IFX_STOP_SEC_CONST_32BIT)
   #undef      IFX_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (IFX_START_SEC_CONST_UNSPECIFIED)
   #undef      IFX_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (IFX_STOP_SEC_CONST_UNSPECIFIED)
   #undef      IFX_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED


/*****************************************************************************
**                                 IFL                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (IFL_START_SEC_CODE)
   #undef      IFL_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (IFL_STOP_SEC_CODE)
   #undef      IFL_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (IFL_START_SEC_VAR_NOINIT_8BIT)
   #undef      IFL_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (IFL_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      IFL_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (IFL_START_SEC_VAR_NOINIT_16BIT)
   #undef      IFL_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (IFL_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      IFL_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (IFL_START_SEC_VAR_NOINIT_32BIT)
   #undef      IFL_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (IFL_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      IFL_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (IFL_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IFL_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (IFL_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      IFL_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (IFL_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IFL_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (IFL_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      IFL_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (IFL_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IFL_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (IFL_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      IFL_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (IFL_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IFL_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (IFL_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      IFL_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (IFL_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IFL_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (IFL_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      IFL_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFL_START_SEC_VAR_FAST_8BIT)
   #undef      IFL_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (IFL_STOP_SEC_VAR_FAST_8BIT)
   #undef      IFL_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFL_START_SEC_VAR_FAST_16BIT)
   #undef      IFL_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (IFL_STOP_SEC_VAR_FAST_16BIT)
   #undef      IFL_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFL_START_SEC_VAR_FAST_32BIT)
   #undef      IFL_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (IFL_STOP_SEC_VAR_FAST_32BIT)
   #undef      IFL_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (IFL_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IFL_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (IFL_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      IFL_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFL_START_SEC_VAR_8BIT)
   #undef      IFL_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (IFL_STOP_SEC_VAR_8BIT)
   #undef      IFL_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFL_START_SEC_VAR_16BIT)
   #undef      IFL_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (IFL_STOP_SEC_VAR_16BIT)
   #undef      IFL_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (IFL_START_SEC_VAR_32BIT)
   #undef      IFL_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (IFL_STOP_SEC_VAR_32BIT)
   #undef      IFL_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (IFL_START_SEC_VAR_UNSPECIFIED)
   #undef      IFL_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (IFL_STOP_SEC_VAR_UNSPECIFIED)
   #undef      IFL_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (IFL_START_SEC_CONST_8BIT)
   #undef      IFL_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (IFL_STOP_SEC_CONST_8BIT)
   #undef      IFL_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (IFL_START_SEC_CONST_16BIT)
   #undef      IFL_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (IFL_STOP_SEC_CONST_16BIT)
   #undef      IFL_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (IFL_START_SEC_CONST_32BIT)
   #undef      IFL_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (IFL_STOP_SEC_CONST_32BIT)
   #undef      IFL_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (IFL_START_SEC_CONST_UNSPECIFIED)
   #undef      IFL_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (IFL_STOP_SEC_CONST_UNSPECIFIED)
   #undef      IFL_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 BFX                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (BFX_START_SEC_CODE)
   #undef      BFX_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (BFX_STOP_SEC_CODE)
   #undef      BFX_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (BFX_START_SEC_VAR_NOINIT_8BIT)
   #undef      BFX_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (BFX_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      BFX_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (BFX_START_SEC_VAR_NOINIT_16BIT)
   #undef      BFX_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (BFX_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      BFX_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (BFX_START_SEC_VAR_NOINIT_32BIT)
   #undef      BFX_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (BFX_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      BFX_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (BFX_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      BFX_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (BFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      BFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (BFX_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      BFX_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (BFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      BFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (BFX_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      BFX_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (BFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      BFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (BFX_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      BFX_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (BFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      BFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (BFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      BFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (BFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      BFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (BFX_START_SEC_VAR_FAST_8BIT)
   #undef      BFX_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (BFX_STOP_SEC_VAR_FAST_8BIT)
   #undef      BFX_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (BFX_START_SEC_VAR_FAST_16BIT)
   #undef      BFX_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (BFX_STOP_SEC_VAR_FAST_16BIT)
   #undef      BFX_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (BFX_START_SEC_VAR_FAST_32BIT)
   #undef      BFX_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (BFX_STOP_SEC_VAR_FAST_32BIT)
   #undef      BFX_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (BFX_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      BFX_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (BFX_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      BFX_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (BFX_START_SEC_VAR_8BIT)
   #undef      BFX_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (BFX_STOP_SEC_VAR_8BIT)
   #undef      BFX_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (BFX_START_SEC_VAR_16BIT)
   #undef      BFX_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (BFX_STOP_SEC_VAR_16BIT)
   #undef      BFX_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (BFX_START_SEC_VAR_32BIT)
   #undef      BFX_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (BFX_STOP_SEC_VAR_32BIT)
   #undef      BFX_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (BFX_START_SEC_VAR_UNSPECIFIED)
   #undef      BFX_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (BFX_STOP_SEC_VAR_UNSPECIFIED)
   #undef      BFX_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (BFX_START_SEC_CONST_8BIT)
   #undef      BFX_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (BFX_STOP_SEC_CONST_8BIT)
   #undef      BFX_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (BFX_START_SEC_CONST_16BIT)
   #undef      BFX_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (BFX_STOP_SEC_CONST_16BIT)
   #undef      BFX_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (BFX_START_SEC_CONST_32BIT)
   #undef      BFX_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (BFX_STOP_SEC_CONST_32BIT)
   #undef      BFX_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (BFX_START_SEC_CONST_UNSPECIFIED)
   #undef      BFX_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (BFX_STOP_SEC_CONST_UNSPECIFIED)
   #undef      BFX_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 EFX                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (EFX_START_SEC_CODE)
   #undef      EFX_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (EFX_STOP_SEC_CODE)
   #undef      EFX_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (EFX_START_SEC_VAR_NOINIT_8BIT)
   #undef      EFX_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (EFX_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      EFX_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (EFX_START_SEC_VAR_NOINIT_16BIT)
   #undef      EFX_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (EFX_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      EFX_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (EFX_START_SEC_VAR_NOINIT_32BIT)
   #undef      EFX_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (EFX_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      EFX_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (EFX_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      EFX_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (EFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      EFX_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (EFX_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      EFX_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (EFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      EFX_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (EFX_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      EFX_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (EFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      EFX_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (EFX_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      EFX_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (EFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      EFX_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (EFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      EFX_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (EFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      EFX_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (EFX_START_SEC_VAR_FAST_8BIT)
   #undef      EFX_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (EFX_STOP_SEC_VAR_FAST_8BIT)
   #undef      EFX_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (EFX_START_SEC_VAR_FAST_16BIT)
   #undef      EFX_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (EFX_STOP_SEC_VAR_FAST_16BIT)
   #undef      EFX_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (EFX_START_SEC_VAR_FAST_32BIT)
   #undef      EFX_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (EFX_STOP_SEC_VAR_FAST_32BIT)
   #undef      EFX_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (EFX_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      EFX_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (EFX_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      EFX_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (EFX_START_SEC_VAR_8BIT)
   #undef      EFX_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (EFX_STOP_SEC_VAR_8BIT)
   #undef      EFX_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (EFX_START_SEC_VAR_16BIT)
   #undef      EFX_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (EFX_STOP_SEC_VAR_16BIT)
   #undef      EFX_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (EFX_START_SEC_VAR_32BIT)
   #undef      EFX_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (EFX_STOP_SEC_VAR_32BIT)
   #undef      EFX_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (EFX_START_SEC_VAR_UNSPECIFIED)
   #undef      EFX_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (EFX_STOP_SEC_VAR_UNSPECIFIED)
   #undef      EFX_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (EFX_START_SEC_CONST_8BIT)
   #undef      EFX_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (EFX_STOP_SEC_CONST_8BIT)
   #undef      EFX_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (EFX_START_SEC_CONST_16BIT)
   #undef      EFX_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (EFX_STOP_SEC_CONST_16BIT)
   #undef      EFX_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (EFX_START_SEC_CONST_32BIT)
   #undef      EFX_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (EFX_STOP_SEC_CONST_32BIT)
   #undef      EFX_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (EFX_START_SEC_CONST_UNSPECIFIED)
   #undef      EFX_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (EFX_STOP_SEC_CONST_UNSPECIFIED)
   #undef      EFX_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 CRC                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (CRC_START_SEC_CODE)
   #undef      CRC_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (CRC_STOP_SEC_CODE)
   #undef      CRC_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (CRC_START_SEC_VAR_NOINIT_8BIT)
   #undef      CRC_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (CRC_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      CRC_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (CRC_START_SEC_VAR_NOINIT_16BIT)
   #undef      CRC_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (CRC_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      CRC_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (CRC_START_SEC_VAR_NOINIT_32BIT)
   #undef      CRC_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (CRC_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      CRC_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (CRC_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CRC_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (CRC_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      CRC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (CRC_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CRC_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (CRC_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      CRC_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (CRC_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CRC_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (CRC_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      CRC_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (CRC_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CRC_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (CRC_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      CRC_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (CRC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CRC_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (CRC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      CRC_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (CRC_START_SEC_VAR_FAST_8BIT)
   #undef      CRC_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (CRC_STOP_SEC_VAR_FAST_8BIT)
   #undef      CRC_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (CRC_START_SEC_VAR_FAST_16BIT)
   #undef      CRC_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (CRC_STOP_SEC_VAR_FAST_16BIT)
   #undef      CRC_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (CRC_START_SEC_VAR_FAST_32BIT)
   #undef      CRC_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (CRC_STOP_SEC_VAR_FAST_32BIT)
   #undef      CRC_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (CRC_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CRC_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (CRC_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      CRC_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CRC_START_SEC_VAR_8BIT)
   #undef      CRC_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (CRC_STOP_SEC_VAR_8BIT)
   #undef      CRC_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CRC_START_SEC_VAR_16BIT)
   #undef      CRC_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (CRC_STOP_SEC_VAR_16BIT)
   #undef      CRC_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (CRC_START_SEC_VAR_32BIT)
   #undef      CRC_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (CRC_STOP_SEC_VAR_32BIT)
   #undef      CRC_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (CRC_START_SEC_VAR_UNSPECIFIED)
   #undef      CRC_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (CRC_STOP_SEC_VAR_UNSPECIFIED)
   #undef      CRC_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (CRC_START_SEC_CONST_8BIT)
   #undef      CRC_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (CRC_STOP_SEC_CONST_8BIT)
   #undef      CRC_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (CRC_START_SEC_CONST_16BIT)
   #undef      CRC_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (CRC_STOP_SEC_CONST_16BIT)
   #undef      CRC_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (CRC_START_SEC_CONST_32BIT)
   #undef      CRC_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (CRC_STOP_SEC_CONST_32BIT)
   #undef      CRC_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (CRC_START_SEC_CONST_UNSPECIFIED)
   #undef      CRC_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (CRC_STOP_SEC_CONST_UNSPECIFIED)
   #undef      CRC_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*****************************************************************************
**                                 E2E                                      **
******************************************************************************/

/*
 * To be used for mapping code to application block, boot block,
 * external flash etc
 */
#elif defined (E2E_START_SEC_CODE)
   #undef      E2E_START_SEC_CODE
   #define   DEFAULT_START_SEC_CODE
#elif defined (E2E_STOP_SEC_CODE)
   #undef      E2E_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE
/*
 * To be used for all global or static variables (8 bits) that are never
 * initialized
 */
#elif defined (E2E_START_SEC_VAR_NOINIT_8BIT)
   #undef      E2E_START_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
#elif defined (E2E_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      E2E_STOP_SEC_VAR_NOINIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are never
 * initialized
 */
#elif defined (E2E_START_SEC_VAR_NOINIT_16BIT)
   #undef      E2E_START_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
#elif defined (E2E_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      E2E_STOP_SEC_VAR_NOINIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are never
 * initialized
 */
#elif defined (E2E_START_SEC_VAR_NOINIT_32BIT)
   #undef      E2E_START_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
#elif defined (E2E_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      E2E_STOP_SEC_VAR_NOINIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
/*
 * To be used for all global or static variables (unspecified size )
 * that are never  initialized.
 */
#elif defined (E2E_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      E2E_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (E2E_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      E2E_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*
 * To be used for all global or static variables (8 bits) that are initialized
 * only after power on reset
 */
#elif defined (E2E_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      E2E_START_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (E2E_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      E2E_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
/*
 * To be used for all global or static variables (16 bits) that are
 * initialized only after power on reset
 */
#elif defined (E2E_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      E2E_START_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (E2E_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      E2E_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
/*
 * To be used for all global or static variables (32 bits) that are
 * initialized only after power on reset
 */
#elif defined (E2E_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      E2E_START_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (E2E_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      E2E_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that are initialized only after power on reset
 */
#elif defined (E2E_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      E2E_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (E2E_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      E2E_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED

/*
 * To be used for all global or static variables (8 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (E2E_START_SEC_VAR_FAST_8BIT)
   #undef      E2E_START_SEC_VAR_FAST_8BIT
   #define DEFAULT_START_SEC_VAR_FAST_8BIT
#elif defined (E2E_STOP_SEC_VAR_FAST_8BIT)
   #undef      E2E_STOP_SEC_VAR_FAST_8BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_8BIT

/*
 * To be used for all global or static variables (16 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (E2E_START_SEC_VAR_FAST_16BIT)
   #undef      E2E_START_SEC_VAR_FAST_16BIT
   #define DEFAULT_START_SEC_VAR_FAST_16BIT
#elif defined (E2E_STOP_SEC_VAR_FAST_16BIT)
   #undef      E2E_STOP_SEC_VAR_FAST_16BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
/*
 * To be used for all global or static variables (32 bits )
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (E2E_START_SEC_VAR_FAST_32BIT)
   #undef      E2E_START_SEC_VAR_FAST_32BIT
   #define DEFAULT_START_SEC_VAR_FAST_32BIT
#elif defined (E2E_STOP_SEC_VAR_FAST_32BIT)
   #undef      E2E_STOP_SEC_VAR_FAST_32BIT
   #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
/*
 * To be used for all global or static variables (unspecifed size)
 * that have atleast one of  the following properties
 * 1. accessed bitwise  2. frequently used
 * 3. high number of accesses in source code
 */
#elif defined (E2E_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      E2E_START_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (E2E_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      E2E_STOP_SEC_VAR_FAST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
/*
 * To be used for global or static variables (8 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (E2E_START_SEC_VAR_8BIT)
   #undef      E2E_START_SEC_VAR_8BIT
   #define DEFAULT_START_SEC_VAR_8BIT
#elif defined (E2E_STOP_SEC_VAR_8BIT)
   #undef      E2E_STOP_SEC_VAR_8BIT
   #define DEFAULT_STOP_SEC_VAR_8BIT

/*
 * To be used for global or static variables (16 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (E2E_START_SEC_VAR_16BIT)
   #undef      E2E_START_SEC_VAR_16BIT
   #define DEFAULT_START_SEC_VAR_16BIT
#elif defined (E2E_STOP_SEC_VAR_16BIT)
   #undef      E2E_STOP_SEC_VAR_16BIT
   #define DEFAULT_STOP_SEC_VAR_16BIT
/*
 * To be used for global or static variables (32 bits) that are initialized
 * after every reset (the normal case)
 */

#elif defined (E2E_START_SEC_VAR_32BIT)
   #undef      E2E_START_SEC_VAR_32BIT
   #define DEFAULT_START_SEC_VAR_32BIT
#elif defined (E2E_STOP_SEC_VAR_32BIT)
   #undef      E2E_STOP_SEC_VAR_32BIT
   #define DEFAULT_STOP_SEC_VAR_32BIT
/*
 * To be used for global or static variables (unspecifed size) that are
 * initialized after every reset (the normal case)
 */

#elif defined (E2E_START_SEC_VAR_UNSPECIFIED)
   #undef      E2E_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (E2E_STOP_SEC_VAR_UNSPECIFIED)
   #undef      E2E_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

/*
 * To be used for global or static constants (8 bits)
 *
 */
#elif defined (E2E_START_SEC_CONST_8BIT)
   #undef      E2E_START_SEC_CONST_8BIT
   #define DEFAULT_START_SEC_CONST_8BIT
#elif defined (E2E_STOP_SEC_CONST_8BIT)
   #undef      E2E_STOP_SEC_CONST_8BIT
   #define DEFAULT_STOP_SEC_CONST_8BIT

/*
 * To be used for global or static constants (16 bits)
 *
 */
#elif defined (E2E_START_SEC_CONST_16BIT)
   #undef      E2E_START_SEC_CONST_16BIT
   #define DEFAULT_START_SEC_CONST_16BIT
#elif defined (E2E_STOP_SEC_CONST_16BIT)
   #undef      E2E_STOP_SEC_CONST_16BIT
   #define DEFAULT_STOP_SEC_CONST_16BIT

/*
 * To be used for global or static constants (32 bits)
 *
 */
#elif defined (E2E_START_SEC_CONST_32BIT)
   #undef      E2E_START_SEC_CONST_32BIT
   #define DEFAULT_START_SEC_CONST_32BIT
#elif defined (E2E_STOP_SEC_CONST_32BIT)
   #undef      E2E_STOP_SEC_CONST_32BIT
   #define DEFAULT_STOP_SEC_CONST_32BIT
/*
 * To be used for global or static constants (unspecified size)
 *
 */
#elif defined (E2E_START_SEC_CONST_UNSPECIFIED)
   #undef      E2E_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (E2E_STOP_SEC_CONST_UNSPECIFIED)
   #undef      E2E_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
/* -------------------------------------------------------------------------- */
/* End of module section mapping                                              */
/* -------------------------------------------------------------------------- */

/* 
Memory Section of Post Build Configuration 
*/
#elif defined (START_SEC_POSTBUILDCFG)
   #undef      START_SEC_POSTBUILDCFG
   #pragma section farrom="CONFIGURATION_PB"
#elif defined (STOP_SEC_POSTBUILDCFG)
   #undef      STOP_SEC_POSTBUILDCFG
   #pragma section farrom restore
/* 
Memory Section of Ecum Post Build Configuration 
*/
#elif defined (START_SEC_ECUM_POSTBUILDCFG)
   #undef      START_SEC_ECUM_POSTBUILDCFG
   #pragma section farrom="CONFIGURATION_ECUM_PB"
#elif defined (STOP_SEC_ECUM_POSTBUILDCFG)
   #undef      STOP_SEC_ECUM_POSTBUILDCFG
   #pragma section farrom restore


#else
/*  #error "MemMap.h: No valid section define found" */
#endif  /* START_WITH_IF */


/*******************************************************************************
**                      Default section mapping                               **
*******************************************************************************/
/* general start of #elif chain whith #if                                     */
#if defined (START_WITH_IF)

/*****************************************************************************
**                                 ROM CODE                                 **
******************************************************************************/
#elif defined (DEFAULT_START_SEC_CODE)
   #undef      DEFAULT_START_SEC_CODE
   //#pragma section code "DEFAULT_CODE_ROM"
#elif defined (DEFAULT_STOP_SEC_CODE)
   #undef      DEFAULT_STOP_SEC_CODE
//   #pragma section code restore

/* WR Section: Fls Loader Write API placed here */
#elif defined (FLS_LOADER_START_WRITE_API)
   #undef     FLS_LOADER_START_WRITE_API
   #pragma section code "FLS_LOADER_WR_SECTION"
#elif defined (FLS_LOADER_STOP_WRITE_API)
   #undef     FLS_LOADER_STOP_WRITE_API
   #pragma section code restore
/* ER Section: Fls Loader Erase API placed here */
#elif defined (FLS_LOADER_START_ERASE_API)
   #undef     FLS_LOADER_START_ERASE_API
   #pragma section code "FLS_LOADER_ER_SECTION"
#elif defined (FLS_LOADER_STOP_ERASE_API)
   #undef     FLS_LOADER_STOP_ERASE_API
   #pragma section code restore

/* ---The following sections attempt to locate FLS Write and Erase command-----
   ---Cycles in an order. It is essential to enforce the correct sequence------
   ---so that the FLS driver can perform as requird.-------------------------*/
#elif defined (FLS_START_SEC_SPL_CODE_WRITECMD_BEGIN_API)
   #undef     FLS_START_SEC_SPL_CODE_WRITECMD_BEGIN_API
   #pragma section code "COPY_TO_RAM_FCTS_WR_BEG"
#elif defined (FLS_STOP_SEC_SPL_CODE_WRITECMD_BEGIN_API)
   #undef     FLS_STOP_SEC_SPL_CODE_WRITECMD_BEGIN_API
   #pragma section code restore

#elif defined (FLS_START_SEC_SPL_CODE_WRITECMD_END_API)
   #undef     FLS_START_SEC_SPL_CODE_WRITECMD_END_API
   #pragma section code "COPY_TO_RAM_FCTS_WR_END"
#elif defined (FLS_STOP_SEC_SPL_CODE_WRITECMD_END_API)
   #undef     FLS_STOP_SEC_SPL_CODE_WRITECMD_END_API
   #pragma section code restore

#elif defined (FLS_START_SEC_SPL_CODE_ERASECMD_BEGIN_API)
   #undef     FLS_START_SEC_SPL_CODE_ERASECMD_BEGIN_API
   #pragma section code "COPY_TO_RAM_FCTS_ER_BEG"
#elif defined (FLS_STOP_SEC_SPL_CODE_ERASECMD_BEGIN_API)
   #undef     FLS_STOP_SEC_SPL_CODE_ERASECMD_BEGIN_API
   #pragma section code restore

#elif defined (FLS_START_SEC_SPL_CODE_ERASECMD_END_API)
   #undef     FLS_START_SEC_SPL_CODE_ERASECMD_END_API
   #pragma section code "COPY_TO_RAM_FCTS_ER_END"
#elif defined (FLS_STOP_SEC_SPL_CODE_ERASECMD_END_API)
   #undef     FLS_STOP_SEC_SPL_CODE_ERASECMD_END_API
   #pragma section code restore

/*****************************************************************************
**                            RAM variables not initialized                 **
******************************************************************************/
#elif defined (DEFAULT_START_SEC_VAR_NOINIT_8BIT)
   #undef      DEFAULT_START_SEC_VAR_NOINIT_8BIT
   #pragma section farnoclear="DEFAULT_RAM_NOINIT_8BIT"
   #pragma noclear  
#elif defined (DEFAULT_STOP_SEC_VAR_NOINIT_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
   #pragma clear
   #pragma section farnoclear restore

#elif defined (DEFAULT_START_SEC_VAR_NOINIT_16BIT)
   #undef      DEFAULT_START_SEC_VAR_NOINIT_16BIT
   #pragma section farnoclear="DEFAULT_RAM_NOINIT_16BIT"
   #pragma noclear
   #pragma align 2  
#elif defined (DEFAULT_STOP_SEC_VAR_NOINIT_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
   #pragma align restore
   #pragma clear
   #pragma section farnoclear restore

#elif defined (DEFAULT_START_SEC_VAR_NOINIT_32BIT)
   #undef      DEFAULT_START_SEC_VAR_NOINIT_32BIT
   #pragma section farnoclear="DEFAULT_RAM_NOINIT_32BIT"  
   #pragma noclear
   #pragma align 4  
#elif defined (DEFAULT_STOP_SEC_VAR_NOINIT_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
   #pragma align restore
   #pragma clear
   #pragma section farnoclear restore

#elif defined (DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
   #pragma section farnoclear="DEFAULT_RAM_NOINIT_UNSPECIFIED"  
   #pragma noclear
#elif defined (DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #pragma clear
   #pragma section farnoclear restore

/*****************************************************************************
**              RAM variables initialized from ROM on reset                 **
** These variables memory locations will be out in lc_cp table created      **
** by the linker.                                                           **
******************************************************************************/

#elif defined (DEFAULT_START_SEC_VAR_8BIT)
   #undef      DEFAULT_START_SEC_VAR_8BIT
   #pragma section farbss="DEFAULT_RAM_8BIT"
#elif defined (DEFAULT_STOP_SEC_VAR_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_8BIT
   #pragma section farbss restore

#elif defined (DEFAULT_START_SEC_VAR_16BIT)
   #undef      DEFAULT_START_SEC_VAR_16BIT
   #pragma section farbss="DEFAULT_RAM_16BIT"
   #pragma align 2
#elif defined (DEFAULT_STOP_SEC_VAR_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_16BIT
   #pragma align restore
   #pragma section farbss restore

#elif defined (DEFAULT_START_SEC_VAR_32BIT)
   #undef      DEFAULT_START_SEC_VAR_32BIT
   #pragma section farbss="DEFAULT_RAM_32BIT"
   #pragma align 4
#elif defined (DEFAULT_STOP_SEC_VAR_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_32BIT
   #pragma align restore
   #pragma section farbss restore

#elif defined (DEFAULT_START_SEC_VAR_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_UNSPECIFIED
   #pragma section farbss="DEFAULT_RAM_UNSPECIFIED"
#elif defined (DEFAULT_STOP_SEC_VAR_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_UNSPECIFIED
   #pragma section farbss restore

#elif defined (FEE_START_CONFIG)
   #undef      FEE_START_CONFIG
   #pragma section fardata="FEE_RESERVED"
   #pragma align 4
#elif defined (FEE_STOP_CONFIG)
   #undef      FEE_STOP_CONFIG
   #pragma align restore
   #pragma section fardata restore

#elif defined (FLS_START_CONFIG)
   #undef      FLS_START_CONFIG
   #pragma section fardata="FLS_RESERVED"
   #pragma align 4
#elif defined (FLS_STOP_CONFIG)
   #undef      FLS_STOP_CONFIG
   #pragma align restore
   #pragma section fardata restore


/*****************************************************************************
**              RAM variables frequently used or accessed                   **
**              bitwise                                                     **
******************************************************************************/

#elif defined (DEFAULT_START_SEC_VAR_FAST_8BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_8BIT
   #pragma section nearbss="DEFAULT_RAM_FAST_8BIT"
   #pragma for_uninitialized_data_use_memory near
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_8BIT
   #pragma for_uninitialized_data_use_memory restore
   #pragma section nearbss restore

#elif defined (DEFAULT_START_SEC_VAR_FAST_16BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_16BIT
   #pragma section nearbss="DEFAULT_RAM_FAST_16BIT"
   #pragma for_uninitialized_data_use_memory near
   #pragma align 2
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_16BIT
   #pragma align restore
   #pragma for_uninitialized_data_use_memory restore
   #pragma section nearbss restore

#elif defined (DEFAULT_START_SEC_VAR_FAST_32BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_32BIT
   #pragma section nearbss="DEFAULT_RAM_FAST_32BIT"
   #pragma for_uninitialized_data_use_memory near
   #pragma align 4
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_32BIT
   #pragma align restore
   #pragma for_uninitialized_data_use_memory restore
   #pragma section nearbss restore

#elif defined (DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
   #pragma section nearbss="DEFAULT_RAM_FAST_UNSPECIFIED"
   #pragma for_uninitialized_data_use_memory near
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
   #pragma for_uninitialized_data_use_memory restore
   #pragma section nearbss restore

/*****************************************************************************
**              Variables that needs to be initialized only                 **
**              after Power on reset                                        **
******************************************************************************/
/*
 * There are no specific #pragmas given in Tasking
 */
#elif defined (DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
   #pragma section farbss="DEFAULT_RAM_POWER_ON_INIT_8BIT" 
#elif defined (DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
   #pragma section farbss restore 

#elif defined (DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
   #pragma section farbss="DEFAULT_RAM_POWER_ON_INIT_16BIT"
   #elif defined (DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
   #pragma section farbss restore 

#elif defined (DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
   #pragma section farbss="DEFAULT_RAM_POWER_ON_INIT_32BIT"

#elif defined (DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
   #pragma section farbss restore

#elif defined (DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #pragma section farbss="DEFAULT_RAM_POWER_ON_INIT_UNSPECIFIED" 
#elif defined (DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #pragma section farbss restore

/*****************************************************************************
**              Constants                                                   **
******************************************************************************/

#elif defined (DEFAULT_START_SEC_CONST_8BIT)
   #undef      DEFAULT_START_SEC_CONST_8BIT
   #pragma section farrom="DEFAULT_CONST_8BIT"
#elif defined (DEFAULT_STOP_SEC_CONST_8BIT)
   #undef      DEFAULT_STOP_SEC_CONST_8BIT
   #pragma section farrom restore

#elif defined (DEFAULT_START_SEC_CONST_16BIT)
   #undef      DEFAULT_START_SEC_CONST_16BIT
   #pragma section farrom="DEFAULT_CONST_16BIT"
   #pragma align 2
#elif defined (DEFAULT_STOP_SEC_CONST_16BIT)
   #undef      DEFAULT_STOP_SEC_CONST_16BIT
   #pragma align restore
   #pragma section farrom restore

#elif defined (DEFAULT_START_SEC_CONST_32BIT)
   #undef      DEFAULT_START_SEC_CONST_32BIT
   #pragma section farrom="DEFAULT_CONST_32BIT"
   #pragma align 4
#elif defined (DEFAULT_STOP_SEC_CONST_32BIT)
   #undef      DEFAULT_STOP_SEC_CONST_32BIT
   #pragma align restore
   #pragma section farrom restore

#elif defined (DEFAULT_START_SEC_CONST_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_CONST_UNSPECIFIED
   #pragma section farrom="DEFAULT_CONST_FAR_UNSPECIFIED"
#elif defined (DEFAULT_STOP_SEC_CONST_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_CONST_UNSPECIFIED
   #pragma section farrom restore

/* -------------------------------------------------------------------------- */
/* End of default section mapping                                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* Begin alignment mapping                                                    */
/* -------------------------------------------------------------------------- */

#elif defined (DEFAULT_START_VAR_ALIGN_16_BIT)
   #undef      DEFAULT_START_VAR_ALIGN_16_BIT
   #pragma align 2
#elif defined (DEFAULT_STOP_VAR_ALIGN_16_BIT)
   #undef      DEFAULT_STOP_VAR_ALIGN_16_BIT
   #pragma align restore
/* -------------------------------------------------------------------------- */
/* End of alignment mapping                                                   */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* Begin Packing                                                              */
/* -------------------------------------------------------------------------- */

#elif defined (DEFAULT_START_VAR_PACK_2)
   #undef      DEFAULT_START_VAR_PACK_2
   #pragma pack 2
#elif defined (DEFAULT_STOP_VAR_PACK_2)
   #undef      DEFAULT_STOP_VAR_PACK_2
   #pragma pack 0
/* -------------------------------------------------------------------------- */
/* End of Packing                                                             */
/* -------------------------------------------------------------------------- */

/*lint +idlen(40) +esym(961,92) */

#endif


/*** End of file **************************************************************/
