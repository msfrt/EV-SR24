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
 * $Filename__:memif_cfg.h$
 * $Author____:HQ82FE$
 * $Function__:.$
 * $Domain____:SDOM$
 * $User______:HQ82FE$
 * $Date______:12.11.2010$
 * $Class_____:SWHDR$
 * $Name______:memif_cfg$
 * $Variant___:1.1.0$
 * $Revision__:2$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.1.0; 2     12.11.2010 HQ82FE
 *   Remove Misra warnings
 * 
 * 1.1.0; 1     02.11.2010 HQ82FE
 *   Second version of MemIf, migrated from CC
 * 
 * 1.1.0; 0     27.07.2010 HQ82FE
 *   First version of Nvm, based on a existing version from CC
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

// ***************************************************************************
// COPYRIGHT RESERVED, 2009 Robert Bosch GmbH. All rights reserved.  The
// reproduction, distribution and utilization of this document as well as the
// communication of its contents to others without explicit authorization is
// prohibited.  Offenders will be held liable for the payment of damages.  All
// rights reserved in the event of the grant of a patent, utility model or
// design.
// ***************************************************************************

#ifndef MEMIF_CFG_H
#define MEMIF_CFG_H

#include "MemIf_Types.h"

// Following header files have to be included if necessary, that means if corresponding
// memory abstraction layer is applied, otherwise it can be deletded.
#include "Fee.h"
//#include "Ea.h"

//- **************************************************************************
//! \file
//! \brief MemIf module configuration manual
//! \mainpage MemIf module configuration manual
//! \brief The <b>MemIf</b> module has to be configured after reading this manual.\n
//!  The user has to include necessary header files (e.g. Ea.h or Fee.h or ...) regarding
//!  to the selected underlying memory abstraction module.
//- **************************************************************************


//- **************************************************************************
//! \brief Configuration of parameter to check MemIf Version Info API
//- **************************************************************************
//!  Following options are available:\n
//!  <b> FALSE </b>: MemIf Version Info API is deactivated \n
//!  <b> TRUE  </b>: MemIf Version Info API is activated \n
//- **************************************************************************
#define MEMIF_VERSION_INFO_API      TRUE



/* - **************************************************************************
! \brief Configuration of underlying modules of MemIf
- **************************************************************************
!Input parameters:\n
!     <b>ModuleName</b>: underlying layer name\n
!
!If only one Fee module is applied under MemIf then it has to be configured like:\n
! \code
!#define	MEMIF_CFG_ALL_DEVICES(MODULE)	\
!				MODULE(Fee)
! \endcode
!
!If only one Ea module is applied under MemIf then it has to be configured like:\n
! \code
!#define	MEMIF_CFG_ALL_DEVICES(MODULE)	\
!				MODULE(Ea)
! \endcode
!
!If both are applied under MemIf then it has to be configured like:\n
! \code
!#define	MEMIF_CFG_ALL_DEVICES(MODULE)	\
!				MODULE(Fee)	\
!				MODULE(Ea)
! \endcode
!
!If more than 2 modules are applied under MemIf then it has to be configured like:\n
! \code
!#define	MEMIF_CFG_ALL_DEVICES(MODULE)	\
!				MODULE(Fee)	\
!				MODULE(Ea)	\
!				MODULE(Fee_6_x)
! \endcode
!
! The names Ea and Fee are fixed name which are specified in AUTOSAR and other names
! e.g. Fee_6_x is a user defined underlying module of MemIf.\n
!
- ************************************************************************** */
/* IGNORE RULE 3410: Necessary for makro calculation at CC. */
#define	MEMIF_CFG_ALL_DEVICES(MODULE)	\
				MODULE(Fee)

//- **************************************************************************
//! \brief Configuration of asynchronous read function
//- **************************************************************************
//! Asynchronous read MemIf_Read() function can be activated or deactivated.\n
//! Asynchronous read is used for single block read (NvM_ReadBlock) and
//! multi block read (NvM_ReadAll).\n
//!  Following options are available:\n
//!  <b> FALSE </b>: Asynchronous read is deactivated\n
//!  <b> TRUE  </b>: Asynchronous read is activated\n
//- **************************************************************************
#define MEMIF_ASYNC_READ (TRUE)

#define MEMIF_DEVICE_ID	1

#endif /* MEMIF_CFG_H */
