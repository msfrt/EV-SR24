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
 * $Filename__:memif.h$
 * $Author____:MZT2FE$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HQ82FE$
 * $Date______:12.11.2010$
 * $Class_____:SWHDR$
 * $Name______:memif$
 * $Variant___:1.1.0_1$
 * $Revision__:2$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.1.0_1; 2     12.11.2010 HQ82FE
 *   Remove Misra warnings
 * 
 * 1.1.0_1; 1     02.11.2010 HQ82FE
 *   Second version of MemIf, migrated from CC
 * 
 * 1.1.0_1; 0     27.07.2010 HQ82FE
 *   First version of Nvm, based on a existing version from CC
 * 
 * 1.0.0; 0     25.06.2010 MZT2FE
 *   Memory interface
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

// ***************************************************************************
// COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.  The
// reproduction, distribution and utilization of this document as well as the
// communication of its contents to others without explicit authorization is
// prohibited.  Offenders will be held liable for the payment of damages.  All
// rights reserved in the event of the grant of a patent, utility model or
// design.
// ***************************************************************************

//- **************************************************************************
//! \file
//! \brief NvM interface
//! \mainpage MemIf interface for Persitent Data Manager
//! \brief The <b>Persitent Data Manger (PDM)</b> handles write/read operation from/to RAM
//! to/from a medium.
//!
//! Following funtionalities are covered by the PDM with MemIf interface:
//! - asynchronous write during run time
//! - asynchronous read during run time (optional)
//!
//! <b> Fundamentals </b>\n
//! To use the PDM via MemIf interface in the application it is necessarry to give a pointer
//! to a global RAM variable as function parameter to the PDM that contains the data that
//! should be written or the address that read data has to e stored. The PDM knows only data
//! items. Write operation can be done only for a single data item and read operation can be
//! done for a single data item or part of a data item.
//! This configuration is done in the internal file system of the PDM (see Fee_Cfg.h for
//! more information).
//!
//! <b> Data items </b>\n
//! In this configuration each data item of the application has a unique IDs inside
//! the PDM. This ID or name can also be configured in the file system
//! configuration (name is of type enumeration). It is recommended that
//! the name of configured ID has a correlation to the application or
//! the type of the data item e.g. DATA_ITEM_ERROR_HANDLER_CAN.
//!


#ifndef MEMIF_H
#define MEMIF_H

#include "Std_Types.h"
#include "MemIf_Cfg.h"


#define MEMIF_VENDOR_ID       6
#define MEMIF_MODULE_ID          22
#define MEMIF_AR_MAJOR_VERSION   3
#define MEMIF_AR_MINOR_VERSION   1
#define MEMIF_AR_PATCH_VERSION   1
#define MEMIF_SW_MAJOR_VERSION   1
#define MEMIF_SW_MINOR_VERSION   0
#define MEMIF_SW_PATCH_VERSION   0


#define FEE_DEVICE_INDEX   1
#define EA_DEVICE_INDEX    2


#define ModuleCount(M)  +1
// number of underlying memory abstraction modules
#define MEMIF_NUMBER_OF_DEVICES  \
            (MEMIF_CFG_ALL_DEVICES(ModuleCount))

#define MEMIF_CAT_READ_SUB(NAME)  NAME ## _Read
#define MEMIF_CAT_READ(NAME)  MEMIF_CAT_READ_SUB(NAME)
/* IGNORE RULE 3410: Necessary for makro calculation at CC. */
#define MEMIF_MYMODULE(MODULENAME)  MODULENAME

#define MEMIF_CAT_WRITE_SUB(NAME)  NAME ## _Write
#define MEMIF_CAT_WRITE(NAME)  MEMIF_CAT_WRITE_SUB(NAME)

#define MEMIF_CAT_INVALIDATE_SUB(NAME)  NAME ## _InvalidateBlock
#define MEMIF_CAT_INVALIDATE(NAME)  MEMIF_CAT_INVALIDATE_SUB(NAME)

#define MEMIF_CAT_STATUS_SUB(NAME)  NAME ## _GetStatus
#define MEMIF_CAT_STATUS(NAME)  MEMIF_CAT_STATUS_SUB(NAME)

#define MEMIF_CAT_JOBRESULT_SUB(NAME)  NAME ## _GetJobResult
#define MEMIF_CAT_JOBRESULT(NAME)  MEMIF_CAT_JOBRESULT_SUB(NAME)


#if ( MEMIF_NUMBER_OF_DEVICES == 1 )

#if(MEMIF_ASYNC_READ)

//- **************************************************************************
//! \brief Read a single data item or part of it from medium.
//- *************************************************************************
//! Gives a data item (or part of it) read request to the Fee module.\n
//! This request is asynchronously processed in cyclic task of the Fee module..
//! The current state of the sent request can be checked with the function
//! MemIf_GetJobResult() .\n
//! An asynchronous read request call can look as followed:
//!
//! \code
//!   ...
//!   switch(State_en)
//!   {
//!   case CHECK_REQUEST_TRIGGER:
//!      if (RequestIsRequired_b)
//!      {
//!         State_en = SEND_REQUEST;
//!      }
//!      else
//!      {
//!         // do nothing, just wait
//!      }
//!      break;
//!
//!   case SEND_REQUEST:
//!      if ( E_OK == MemIf_Read(FEE_DEVICE_INDEX, MY_DATA_ITEM, DATA_OFFS, DATA_PTR, DATA_LEN))
//!    {
//!      State_en = WAIT;
//!    }
//!      break;
//!   case WAIT:
//!      if (MEMIF_JOB_OK == MemIf_GetJobResult(FEE_DEVICE_INDEX))
//!      {
//!         State_en = REQUEST_FINISHED;
//!      }
//!      break;
//!
//!   case REQUEST_FINISHED:
//!      // perform some operation e.g. shut down, send LIN message
//!      // ...
//!      State_en = CHECK_REQUEST_TRIGGER;
//!      break;
//!   }
//! \endcode
//!
//!Input parameters:\n
//!     <b>FEE_DEVICE_INDEX</b>: underlying device number (if only one device is using must be 0)\n
//!      <b>MY_DATA_ITEM</b>: Data item ID\n
//!      <b>DATA_OFFS</b>: Offset address from the beinning of the data item\n
//!      <b>DATA_PTR</b>: Pointer to the target RAM buffer\n
//!      <b>DATA_LEN</b>: Length of data to be read\n
//!
//!Return value:\n
//!      <b>E_OK</b>: Read request is accepted.\n
//!      <b>E_NOT_OK</b>: Read request is not accepted.\n
//!
//! It is also possible to send only a request and don't check the current status
//! of the read request.
//!
//- *************************************************************************
#define MemIf_Read(DeviceIndex,BlockNumber,BlockOffset,DataBufferPtr,Length) \
            MEMIF_CAT_READ(MEMIF_CFG_ALL_DEVICES(MEMIF_MYMODULE))\
               ((BlockNumber),(BlockOffset),(DataBufferPtr),(Length))

#endif // MEMIF_ASYNC_READ


//- **************************************************************************
//! \brief Write a single data item to medium.
//- **************************************************************************
//! Gives a data item write request to the Fee module.\n
//! This request is asynchronously processed in cyclic task of the Fee module..
//! The current state of the sent request can be checked with the function
//! MemIf_GetJobResult() .\n
//! An asynchronous write request call can look as followed:
//!
//! \code
//!   ...
//!   switch(State_en)
//!   {
//!   case CHECK_REQUEST_TRIGGER:
//!      if (RequestIsRequired_b)
//!      {
//!         State_en = SEND_REQUEST;
//!      }
//!      else
//!      {
//!         // do nothing, just wait
//!      }
//!      break;
//!
//!   case SEND_REQUEST:
//!      if ( E_OK == MemIf_Write(FEE_DEVICE_INDEX, MY_DATA_ITEM, DATA_PTR))
//!    {
//!      State_en = WAIT;
//!    }
//!      break;
//!   case WAIT:
//!      if (MEMIF_JOB_OK == MemIf_GetJobResult(FEE_DEVICE_INDEX))
//!      {
//!         State_en = REQUEST_FINISHED;
//!      }
//!      break;
//!
//!   case REQUEST_FINISHED:
//!      // perform some operation e.g. shut down, send LIN message
//!      // ...
//!      State_en = CHECK_REQUEST_TRIGGER;
//!      break;
//!   }
//! \endcode
//!
//!Input parameters:\n
//!     <b>FEE_DEVICE_INDEX</b>: underlying device number (if only one device is using must be 0)\n
//!      <b>MY_DATA_ITEM</b>: Data item ID\n
//!      <b>DATA_PTR</b>: Pointer to the source RAM buffer\n
//!
//!Return value:\n
//!      <b>E_OK</b>: Write request is accepted.\n
//!      <b>E_NOT_OK</b>: Write request is not accepted.\n
//!
//! It is also possible to send only a request and don't check the current status
//! of the write request.
//!
//- **************************************************************************
#define MemIf_Write(DeviceIndex,BlockNumber,DataBufferPtr) \
            MEMIF_CAT_WRITE(MEMIF_CFG_ALL_DEVICES(MEMIF_MYMODULE))\
               ((BlockNumber),(DataBufferPtr))



//- **************************************************************************
//! \brief Invalidate a single data item in medium.
//- **************************************************************************
//! Gives a data item invalidate request to the Fee module.\n
//! This request is asynchronously processed in cyclic task of the Fee module..
//! The current state of the sent request can be checked with the function
//! MemIf_GetJobResult() .\n
//! An asynchronous invalidate request call can look as followed:
//!
//! \code
//!   ...
//!   switch(State_en)
//!   {
//!   case CHECK_REQUEST_TRIGGER:
//!      if (RequestIsRequired_b)
//!      {
//!         State_en = SEND_REQUEST;
//!      }
//!      else
//!      {
//!         // do nothing, just wait
//!      }
//!      break;
//!
//!   case SEND_REQUEST:
//!      if ( E_OK == MemIf_InvalidateBlock(FEE_DEVICE_INDEX, MY_DATA_ITEM))
//!    {
//!      State_en = WAIT;
//!    }
//!      break;
//!   case WAIT:
//!      if (MEMIF_JOB_OK == MemIf_GetJobResult(FEE_DEVICE_INDEX))
//!      {
//!         State_en = REQUEST_FINISHED;
//!      }
//!      break;
//!
//!   case REQUEST_FINISHED:
//!      // perform some operation e.g. shut down, send LIN message
//!      // ...
//!      State_en = CHECK_REQUEST_TRIGGER;
//!      break;
//!   }
//! \endcode
//!
//!Input parameters:\n
//!     <b>FEE_DEVICE_INDEX</b>: underlying device number (if only one device is using must be 0)\n
//!      <b>MY_DATA_ITEM</b>: Data item ID\n
//!
//!Return value:\n
//!      <b>E_OK</b>: Write request is accepted.\n
//!      <b>E_NOT_OK</b>: Write request is not accepted.\n
//!
//! It is also possible to send only a request and don't check the current status
//! of the result.
//!
//- **************************************************************************
#define MemIf_InvalidateBlock(DeviceIndex,BlockNumber) \
            MEMIF_CAT_INVALIDATE(MEMIF_CFG_ALL_DEVICES(MEMIF_MYMODULE))\
               ((BlockNumber))



//- **************************************************************************
//! \brief Get status of the underlying module (Fee/Ea)
//- **************************************************************************
//!Input parameters:\n
//!     <b>DeviceIndex</b>: underlying device number (if only one device is using must be 0)\n
//!
//!Return value:\n
//!  The different statuses of the underlying module are:\n
//!      <b>MEMIF_UNINIT</b>: The underlying abstraction module or device driver has not been initialized (yet).\n
//!      <b>MEMIF_IDLE</b>: The underlying abstraction module or device driver is currently idle.\n
//!      <b>MEMIF_BUSY</b>: The underlying abstraction module or device driver is currently busy.\n
//!      <b>MEMIF_BUSY_INTERNAL</b>: The underlying abstraction module is busy with internal management operations. The underlying device driver can be busy or idle.\n
//!
//- **************************************************************************
#define MemIf_GetStatus(DeviceIndex) \
            MEMIF_CAT_STATUS(MEMIF_CFG_ALL_DEVICES(MEMIF_MYMODULE))()




//- **************************************************************************
//! \brief Get status of latest job which is sent to the underlying module (Fee/Ea)
//- **************************************************************************
//!Input parameters:\n
//!     <b>DeviceIndex</b>: underlying device number (if only one device is using must be 0)\n
//!
//!Return value:\n
//!  The different statuses of the latest job are:\n
//!      <b>MEMIF_JOB_OK</b>: The job has been finished successfully.\n
//!      <b>MEMIF_JOB_FAILED</b>: The job has not been finished successfully.\n
//!      <b>MEMIF_JOB_PENDING</b>: The job has not yet been finished.\n
//!      <b>MEMIF_JOB_CANCELLED</b>: The job has been cancelled.\n
//!      <b>MEMIF_BLOCK_INCONSISTENT</b>: The requested block is inconsistent, it may contain corrupted data.\n
//!      <b>MEMIF_BLOCK_INVALID</b>: The requested block has been marked as invalid, the requested operation can not be performed.\n
//!
//- **************************************************************************
#define MemIf_GetJobResult(DeviceIndex) \
            MEMIF_CAT_JOBRESULT(MEMIF_CFG_ALL_DEVICES(MEMIF_MYMODULE))()



#ifdef MEMIF_VERSION_INFO_API
//- **************************************************************************
//! \brief Get module version information
//- **************************************************************************
void MemIf_GetVersionInfo( Std_VersionInfoType* VersionInfoPtr );
// -----------------------------------------------------------------------
//! Version information of MemIf module can be requested by calling this
//! function. The following information is stored as module version information:\n
//!   <b>MEMIF_VENDOR_ID\n
//!      MEMIF_MODULE_ID\n
//!   MEMIF_SW_MAJOR_VERSION\n
//!   MEMIF_SW_MINOR_VERSION\n
//!   MEMIF_SW_PATCH_VERSION\n</b>
// -----------------------------------------------------------------------

#endif /* MEMIF_VERSION_INFO_API */





#else
   #error "Number of supported underlying devices is one"
#endif // ( MEMIF_NUMBER_OF_DEVICES == 1 )

#endif  /* MEMIF_H */
