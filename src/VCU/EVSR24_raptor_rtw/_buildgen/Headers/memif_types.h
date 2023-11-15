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
 * $Filename__:memif_types.h$
 * $Author____:MZT2FE$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HQ82FE$
 * $Date______:02.11.2010$
 * $Class_____:SWHDR$
 * $Name______:memif_types$
 * $Variant___:1.1.0_1$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
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
// COPYRIGHT RESERVED, 2009 Robert Bosch GmbH. All rights reserved.  The
// reproduction, distribution and utilization of this document as well as the
// communication of its contents to others without explicit authorization is
// prohibited.  Offenders will be held liable for the payment of damages.  All
// rights reserved in the event of the grant of a patent, utility model or
// design.
// ***************************************************************************
//- **************************************************************************
//! \file
//! \brief MemIf types
//- **************************************************************************

#ifndef MEMIF_TYPES_H
#define MEMIF_TYPES_H

typedef enum
{
    MEMIF_UNINIT,
    MEMIF_IDLE,
    MEMIF_BUSY,
    MEMIF_BUSY_INTERNAL
}MemIf_StatusType;


typedef enum
{
    MEMIF_JOB_OK,
    MEMIF_JOB_FAILED,
    MEMIF_JOB_PENDING,
    MEMIF_JOB_CANCELLED,
    MEMIF_BLOCK_INCONSISTENT,
    MEMIF_BLOCK_INVALID
}MemIf_JobResultType;


typedef enum
{
    MEMIF_MODE_SLOW,
    MEMIF_MODE_FAST
}MemIf_ModeType;


#endif  /* MEMIF_TYPES_H */
