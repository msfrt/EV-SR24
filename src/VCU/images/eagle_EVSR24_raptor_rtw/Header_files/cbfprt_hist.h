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
 * $Filename__:cbfprt_hist.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Fingerprint History Configuration$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:cbfprt_hist$ 
 * $Variant___:1.0.0$ 
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
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Migrated from MX17 eASEE for DA Move VC4
 *   SWHDR : cbfprt_hist  1.10; 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CBFPRT_HIST_H
#define _CBFPRT_HIST_H

/*!
 *********************************************************************
 * \moduldescription
 *          Header file for CB Basic KWP services.
 *
 * \scope       INTERN
 *********************************************************************
 */


/** *********************           IMPORTANT              ************************** **
  This file is used in CB and Drive PST. Any changes need to be suitable for both!

****************************************************************************************/

/*
 *********************************************************************
 * Prototypes for Variables
 *********************************************************************
 */

#define CBFPRT_SECT_ERASE_PATTERN    0x00                                /* Erase Pattern                          */
#define CBFPRT_HIST_WORK_SECT_STRT   ((CBFprt_HistPage_t*)0x80200000U)  /* First Address of working sector         */
#define CBFPRT_HIST_WORK_SECT_END    ((CBFprt_HistPage_t*)0x80204000U)  /* First Address BEHIND the working Sector */
#define CBFPRT_HIST_BACKUP_SECT_STRT ((CBFprt_HistPage_t*)0x80010000U)  /* First Address of backup sector          */
#define CBFPRT_HIST_BACKUP_SECT_END  ((CBFprt_HistPage_t*)0x80014000U)  /* First Address BEHIND the backup Sector  */
#define CBFPRT_HIST_LEN              100                                /* Number of bytes in Fingerprint History  */
#define CBFPRT_WORDS_PER_PAGE        (256/sizeof(uint32))               /* Words per page                          */
#define CBFPRT_PAGE_BEGIN_MARKER     0x54525046UL                       /* Unique Id for begin of FprtHist dataset */


/* Data structure of one page containing Fingerprint History data */
/* Contains management data and fingerprint data                  */
typedef struct
{
   uint32 BeginMarker;
   uint32 Number;
   uint8  FPRT[10][10];
   uint8  Empty[144];
   uint32 chkSum;
}CBFprt_HistPage_t;


/* Enum for Read/Write state machine for fingerprint history access */
typedef enum
{
   CBFPRT_HIST_IDLE,
   WRT_SRCH_LAST_VLD_PG,
   WRT_SRCH_EMPTY_PG,
   WRT_ERASE_SECT_STRT,
   WRT_ERASE_SECT_RUN,
   WRT_WRITE_BACKUP,
   WRT_CPY_TO_WS,
   WRT_WRITE_WS,
   READY_OK,
   READY_FAILED,
}CBFprt_stOrder_e;


/* Management data for fingerprint history access */
typedef struct
{
  CBFprt_stOrder_e state;
  uint8* adBuf;
  CBFprt_HistPage_t* adPgToRead;
  CBFprt_HistPage_t* adPgToWrite;
}CBFprt_Order_t;

/*
 *********************************************************************
 * Prototypes for Functions
 *********************************************************************
 */


#endif
